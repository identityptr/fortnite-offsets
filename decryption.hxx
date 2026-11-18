#pragma once
#include "array.hxx"
#include "offsets.hxx"
#include <bit>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace FN::Decryption
{
    constexpr auto byte_swap32(const std::uint32_t value) -> std::uint32_t
    {
        return ((value & 0x000000FFU) << 24) |
               ((value & 0x0000FF00U) << 8) |
               ((value & 0x00FF0000U) >> 8) |
               ((value & 0xFF000000U) >> 24);
    }

    constexpr auto byte_swap64(const std::uint64_t value) -> std::uint64_t
    {
        return (static_cast<std::uint64_t>(byte_swap32(
                    static_cast<std::uint32_t>(value))) << 32) |
               byte_swap32(static_cast<std::uint32_t>(value >> 32));
    }

    inline auto decrypt_world() -> std::uintptr_t
    {
        try
        {
            if (!Kernel::Object || !Kernel::Object->valid())
                return 0;
            if (FN::O::Engine::UWorld)
            {
                const auto encoded = Kernel::Object->Read<std::uint64_t>(
                    Kernel::Object->Base + FN::O::Engine::UWorld);
                if (encoded)
                {
                    const auto world = static_cast<std::uintptr_t>((byte_swap64(encoded) + 0x3F1FCDFBULL));
                    if (world >= 0x10000 && (world & 7) == 0)
                        return world;
                }
            }
            if (!FN::O::Engine::GEngine ||
                !FN::O::Engine::GameViewport ||
                !FN::O::Engine::ViewportWorld)
                return 0;
            const auto engine = Kernel::Object->Read<std::uintptr_t>(
                Kernel::Object->Base + FN::O::Engine::GEngine);
            if (!engine)
                return 0;
            const auto viewport = Kernel::Object->Read<std::uintptr_t>(
                engine + FN::O::Engine::GameViewport);
            if (!viewport)
                return 0;
            const auto world = Kernel::Object->Read<std::uintptr_t>(
                viewport + FN::O::Engine::ViewportWorld);
            return world >= 0x10000 && (world & 7) == 0 ? world : 0;
        }
        catch (...)
        {
            return 0;
        }
    }

    inline auto get_world() -> std::uintptr_t
    {
        return decrypt_world();
    }

    inline auto get_objects_count() -> std::uint32_t
    {
        try
        {
            if (!Kernel::Object || !Kernel::Object->valid() ||
                !FN::O::Engine::GObjectCount)
                return 0;
            const auto encoded = Kernel::Object->Read<std::uint32_t>(
                Kernel::Object->Base + FN::O::Engine::GObjectCount);
            return (byte_swap32(encoded) + 0x7FD025BCU);
        }
        catch (...)
        {
            return 0;
        }
    }

    inline auto get_object(const std::uint32_t index) -> std::uintptr_t
    {
        try
        {
            if (!Kernel::Object || !Kernel::Object->valid() ||
                !FN::O::Engine::GObjects)
                return 0;
            const auto count = get_objects_count();
            if (!count || index >= count) return 0;

            const auto encoded_table = Kernel::Object->Read<std::uint64_t>(
                Kernel::Object->Base + FN::O::Engine::GObjects);
            const auto chunk_table = static_cast<std::uintptr_t>((byte_swap64(encoded_table) + 0x3AE65B7CULL));
            if (!chunk_table) return 0;

            const auto chunk = Kernel::Object->Read<std::uintptr_t>(
                chunk_table + static_cast<std::uintptr_t>(index >> 16) *
                sizeof(std::uintptr_t));
            if (!chunk) return 0;

            const auto item = chunk +
                static_cast<std::uintptr_t>(index & 0xFFFFU) * 24U;
            const auto item_flags = Kernel::Object->Read<std::uint64_t>(item);

            const auto encoded_low = Kernel::Object->Read<std::uint32_t>(item + 8U);
            const auto decoded_low = static_cast<std::uint64_t>((byte_swap32(encoded_low) + 0x423A753BU));
            const auto upper = item_flags & 0x3FFF00000000ULL;
            return static_cast<std::uintptr_t>((decoded_low | upper) << 3);
        }
        catch (...)
        {
            return 0;
        }
    }

    inline auto fname(const std::uint32_t encoded) -> std::uint32_t
    {
        if (!encoded) return 0;
        const auto adjusted = (encoded - 1U);
        const auto decoded = static_cast<std::uint32_t>((byte_swap32(adjusted) - 0x6903C7EBU));
        return decoded ? decoded : 0x96FC3814U;
    }

    inline constexpr std::uint32_t fname_blocks_offset = 0x10U;
    inline constexpr std::uint32_t fname_length_xor = 0x30CU;
    inline constexpr std::uint16_t fname_header_mask = 0x3FFU;
    inline constexpr std::uint16_t fname_wide_mask = 0x1U;
    inline constexpr std::uint8_t fname_header_shift = 1U;
    inline constexpr std::uint8_t fname_redirect_offset = 6U;

    inline constexpr std::uint8_t fname_entry_stride = 2U;
    inline constexpr std::uint8_t fname_suffix_offset = 2U;

    inline constexpr std::uint8_t fname_byte_algorithm = 4U;
    inline constexpr std::uint32_t fname_mix_multiplier = 0x1F4DU;
    inline constexpr std::uint32_t fname_mix_xor_multiplier = 0x8U;
    inline constexpr std::uint32_t fname_mix_additive = 0x47A692U;
    inline constexpr std::uint8_t fname_mix_shift = 11U;
    inline constexpr std::uint8_t fname_seed_shift = 0U;
    inline constexpr std::uint8_t fname_mix_rotate_left = 0U;
    inline constexpr std::uint8_t fname_byte_rotate_left = 0U;
    inline constexpr std::uint8_t fname_byte_additive = 1U;
    inline constexpr std::uint8_t fname_byte_chain_multiplier = 185U;

    inline auto decrypt_fname_bytes(std::uint8_t* bytes,
                                    const std::size_t byte_count,
                                    const std::uint32_t length) -> bool
    {
        if (!bytes || !byte_count) return false;
        const auto linear = [](const std::uint32_t value)
        {
            return fname_mix_multiplier * value + fname_mix_additive;
        };
        const std::vector<std::uint8_t> encrypted(bytes, bytes + byte_count);
        if constexpr (fname_byte_algorithm == 4U)
        {
            const auto advance = [](const std::uint32_t value)
            {
                const auto mixed = fname_mix_multiplier * value +
                                   fname_mix_additive;
                return mixed ^ (fname_mix_xor_multiplier * value) ^
                       (mixed >> fname_mix_shift);
            };
            auto state = advance(length);
            auto previous = static_cast<std::uint8_t>(
                fname_byte_chain_multiplier * state);
            for (std::size_t index{}; index < byte_count; ++index)
            {
                bytes[index] = static_cast<std::uint8_t>(
                    (previous ^ encrypted[index]) +
                    static_cast<std::uint8_t>(state) +
                    fname_byte_additive);
                previous = encrypted[index];
                state = advance(state);
            }
            return true;
        }
        if constexpr (fname_byte_algorithm == 3U)
        {
            const auto advance = [](const std::uint32_t value)
            {
                const auto rotated = std::rotl(
                    fname_mix_multiplier * value,
                    static_cast<int>(fname_mix_rotate_left));
                const auto mixed = fname_mix_xor_multiplier * value +
                                   fname_mix_additive;
                return rotated + (mixed ^ (mixed >> fname_mix_shift));
            };
            auto state = advance(length);
            for (std::size_t index{}; index < byte_count; ++index)
            {
                bytes[index] = static_cast<std::uint8_t>(
                    (encrypted[index] ^ static_cast<std::uint8_t>(state)) +
                    fname_byte_additive);
                state = advance(state);
            }
            return true;
        }
        if constexpr (fname_byte_algorithm == 2U)
        {
            auto state = (length | (length << fname_seed_shift)) +
                         (linear(length) ^ (linear(length) >> fname_mix_shift));
            for (std::size_t index{}; index < byte_count; ++index)
            {
                const auto product = linear(state);
                state = (product ^ (product >> fname_mix_shift)) +
                        (std::rotl(state, static_cast<int>(fname_mix_rotate_left)) ^ state);
                bytes[byte_count - index - 1] = static_cast<std::uint8_t>(
                    encrypted[index] + static_cast<std::uint8_t>(state) +
                    fname_byte_additive);
            }
            return true;
        }
        if constexpr (fname_byte_algorithm != 1U) return false;
        const auto advance = [&linear](const std::uint32_t value)
        {
            const auto product = linear(value);
            return product ^
                   std::rotl(value, static_cast<int>(fname_mix_rotate_left)) ^
                   (product >> fname_mix_shift);
        };
        const auto seed_product = linear(length);
        const auto seed = seed_product ^
                          ((length << fname_seed_shift) |
                           (seed_product >> fname_mix_shift));
        auto backward_state = seed;
        for (std::size_t index{}; index < byte_count; ++index)
            backward_state = advance(backward_state);
        backward_state = advance(backward_state);
        for (std::size_t index = byte_count; index != 0;)
        {
            --index;
            bytes[index] = encrypted[index] ^
                           static_cast<std::uint8_t>(backward_state);
            backward_state = advance(backward_state);
        }
        auto forward_state = seed;
        for (std::size_t index{}; index < byte_count; ++index)
        {
            const auto mixed = static_cast<std::uint8_t>(
                (forward_state + bytes[index]) ^
                (forward_state + fname_byte_additive));
            bytes[index] = std::rotl(
                mixed, static_cast<int>(fname_byte_rotate_left));
            forward_state = advance(forward_state);
        }
        return true;
    }

    inline auto fname_suffix(const std::uint32_t encoded) -> std::int32_t
    {
        if (!encoded) return std::bit_cast<std::int32_t>(0xFFFFFFFFU);
        const auto adjusted = (encoded - 1U);
        if (adjusted == 0xA5F795C0U) return std::bit_cast<std::int32_t>(0x3F6A0859U);
        return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>((byte_swap32(adjusted) + 0x3F6A085AU)));
    }

    inline auto decode_internal_index(const std::uint32_t encoded) -> std::uint32_t
    {
        const auto value = static_cast<std::uint32_t>((byte_swap32(encoded) - 0x2710126U) + 0x0U);
        return value ? value : 0x0U;
    }

    inline auto decode_property_offset(const std::uint32_t encoded) -> std::uint32_t
    {
        if (!encoded) return 0;
        return encoded;
    }

    inline auto decode_ffield_pointer(const std::uintptr_t encoded) -> std::uintptr_t
    {
        if (!(encoded & 1U)) return encoded;
        const auto masked = encoded & ~std::uintptr_t{1};
        const auto mixed = (masked + 0x4A3CC6B5BBDD8758ULL) ^ 0x70DD8045EC0D4A3AULL;
        const auto lanes = ((mixed >> 16) & 0xFF00000000ULL) | ((mixed << 16) & 0xFF000000000000ULL) | (mixed & 0xFF0000000000ULL) | ((mixed << 32) & 0xFF00000000000000ULL);
        const auto high = std::rotl(static_cast<std::uint32_t>(lanes >> 32), 18);
        const auto permuted = (mixed & 0xFFFFFEULL) | ((mixed >> 32) & 0xFF000000ULL) | (static_cast<std::uint64_t>(high) << 32);
        return static_cast<std::uintptr_t>(permuted * 0xA8C93CD45F58157DULL);
    }
}


namespace FN::detail
{
    inline std::string utf16_to_utf8(const wchar_t* text, const int length)
    {
        static_assert(sizeof(wchar_t) == sizeof(std::uint16_t));
        if (!text || length <= 0)
            return {};

        const int size = WideCharToMultiByte(
            CP_UTF8, WC_ERR_INVALID_CHARS, text, length, nullptr, 0, nullptr, nullptr);
        if (size <= 0)
            return {};

        std::string result(static_cast<std::size_t>(size), '\0');
        if (WideCharToMultiByte(CP_UTF8,
                                WC_ERR_INVALID_CHARS,
                                text,
                                length,
                                result.data(),
                                size,
                                nullptr,
                                nullptr) != size)
            return {};
        return result;
    }

    inline std::string read_fstring(const std::uintptr_t address)
    {
        if (!Kernel::Object || !Kernel::Object->valid() || !address)
            return {};

        const auto data = Kernel::Object->Read<std::uintptr_t>(address);
        const auto count = Kernel::Object->Read<std::int32_t>(
            address + sizeof(std::uintptr_t));
        const auto capacity = Kernel::Object->Read<std::int32_t>(
            address + sizeof(std::uintptr_t) + sizeof(std::int32_t));
        if (!data || count < 2 || count > 1024 || capacity < count || capacity > 2048)
            return {};

        std::vector<wchar_t> characters(static_cast<std::size_t>(count));
        if (!Kernel::Object->ReadBytes(
                data,
                characters.size() * sizeof(wchar_t),
                reinterpret_cast<std::uint8_t*>(characters.data())) ||
            characters.back() != L'\0')
            return {};

        characters.pop_back();
        return utf16_to_utf8(characters.data(), static_cast<int>(characters.size()));
    }
}

namespace FN
{
    class FName final
    {
      public:
        std::uint32_t comparison_index{};

        FName() = default;
        explicit FName(const std::uint32_t index) : comparison_index(index) {}

        static auto resolve(const std::int32_t index) -> std::string
        {
            return get_name(static_cast<std::uint32_t>(index));
        }

        static auto get(const std::int32_t index) -> std::string
        {
            return resolve(index);
        }

        static auto resolve_with_number(const std::int32_t index,
                                        const std::uint32_t number) -> std::string
        {
            auto result = resolve(index);
            if (!result.empty() && number)
                result += "_" + std::to_string(number - 1);
            return result;
        }

        [[nodiscard]] auto to_string() const -> std::string
        {
            return resolve(static_cast<std::int32_t>(comparison_index));
        }

      private:
        static auto read_entry(const std::uint32_t index,
                               std::uintptr_t& entry,
                               std::uint16_t& header) -> bool
        {
            if (!Kernel::Object || !Kernel::Object->valid() ||
                !FN::O::Engine::FNamePool || !FN::Decryption::fname_blocks_offset ||
                !FN::Decryption::fname_entry_stride)
                return false;
            const auto pool = Kernel::Object->Base + FN::O::Engine::FNamePool;
            const auto slot = pool + FN::Decryption::fname_blocks_offset +
                              static_cast<std::uintptr_t>(index >> 16) *
                                  sizeof(std::uintptr_t);
            const auto block = Kernel::Object->Read<std::uintptr_t>(slot);
            if (!block) return false;
            entry = block + static_cast<std::uintptr_t>(
                                FN::Decryption::fname_entry_stride) *
                                static_cast<std::uint16_t>(index);
            header = Kernel::Object->Read<std::uint16_t>(entry);
            return header != 0;
        }

        static constexpr auto encoded_length(const std::uint16_t header)
            -> std::uint32_t
        {
            return (header >> FN::Decryption::fname_header_shift) &
                   FN::Decryption::fname_header_mask;
        }

        static constexpr auto is_numbered(const std::uint16_t header) -> bool
        {
            return encoded_length(header) == FN::Decryption::fname_length_xor;
        }

        static auto decode_text(const std::uintptr_t entry,
                                const std::uint16_t header) -> std::string
        {
            const auto length = encoded_length(header) ^
                                FN::Decryption::fname_length_xor;
            const auto maximum_length = static_cast<std::uint32_t>(
                FN::Decryption::fname_header_mask);
            if (!length || length > maximum_length) return {};
            const bool wide = (header & FN::Decryption::fname_wide_mask) != 0;
            const auto byte_count = static_cast<std::size_t>(length) *
                                    (wide ? 2U : 1U);
            std::vector<std::uint8_t> bytes(byte_count);
            if (!Kernel::Object->ReadBytes(entry + sizeof(std::uint16_t),
                                           byte_count, bytes.data()) ||
                !FN::Decryption::decrypt_fname_bytes(bytes.data(), byte_count, length))
                return {};
            if (!wide)
                return {reinterpret_cast<const char*>(bytes.data()), bytes.size()};

            std::wstring characters(length, L'\0');
            for (std::size_t index{}; index < length; ++index)
                characters[index] = static_cast<wchar_t>(
                    static_cast<std::uint16_t>(bytes[index * 2]) |
                    static_cast<std::uint16_t>(bytes[index * 2 + 1] << 8));
            return FN::detail::utf16_to_utf8(
                characters.data(), static_cast<int>(characters.size()));
        }

        static auto get_name(const std::uint32_t raw_index) -> std::string
        {
            try
            {
                const auto index = FN::Decryption::fname(raw_index);
                if (!index) return {};
                std::uintptr_t entry{};
                std::uint16_t header{};
                if (!read_entry(index, entry, header)) return {};

                std::int32_t suffix = -1;
                if (is_numbered(header))
                {
                    const auto encoded_suffix = Kernel::Object->Read<std::uint32_t>(
                        entry + FN::Decryption::fname_suffix_offset);
                    suffix = FN::Decryption::fname_suffix(encoded_suffix);
                    const auto redirected = Kernel::Object->Read<std::uint32_t>(
                        entry + FN::Decryption::fname_redirect_offset);
                    const auto redirected_index = FN::Decryption::fname(redirected);
                    if (!redirected_index ||
                        !read_entry(redirected_index, entry, header) ||
                        is_numbered(header))
                        return {};
                }

                auto result = decode_text(entry, header);
                if (!result.empty() && suffix != -1)
                    result += "_" + std::to_string(suffix);
                return result;
            }
            catch (...)
            {
                return {};
            }
        }
    };
}


namespace FN
{
    class FString final
    {
      public:
        std::uintptr_t address{};

        FString() = default;
        explicit FString(const std::uintptr_t value) : address(value) {}

        static std::string resolve(const std::uintptr_t value)
        {
            return detail::read_fstring(value);
        }

        static std::string resolve(const std::uintptr_t owner,
                                   const std::uintptr_t member_offset)
        {
            if (!owner || member_offset > UINTPTR_MAX - owner)
                return {};
            return resolve(owner + member_offset);
        }

        [[nodiscard]] std::string to_string() const
        {
            return resolve(address);
        }
    };

    class FText final
    {
      public:
        std::uintptr_t text_data{};

        FText() = default;
        explicit FText(const std::uintptr_t data) : text_data(data) {}

        static std::string resolve(const std::uintptr_t address)
        {
            if (!Kernel::Object || !Kernel::Object->valid() || !address)
                return {};

            return from_data(Kernel::Object->Read<std::uintptr_t>(address));
        }

        static std::string resolve(const std::uintptr_t owner,
                                   const std::uintptr_t member_offset)
        {
            if (!owner || member_offset > UINTPTR_MAX - owner)
                return {};
            return resolve(owner + member_offset);
        }

        static std::string from_data(const std::uintptr_t data)
        {
            if (!Kernel::Object || !Kernel::Object->valid() || !data)
                return {};

            for (std::uintptr_t offset{}; offset <= 0x40; offset += sizeof(std::uintptr_t))
                if (auto value = detail::read_fstring(data + offset); !value.empty())
                    return value;
            return {};
        }

        [[nodiscard]] std::string to_string() const
        {
            return from_data(text_data);
        }

    };
}
