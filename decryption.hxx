#pragma once
#include "offsets.hxx"
#include <bit>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace FN::Decryption
{
    constexpr std::uint32_t byte_swap32(const std::uint32_t value)
    {
        return ((value & 0x000000FFU) << 24) |
               ((value & 0x0000FF00U) << 8) |
               ((value & 0x00FF0000U) >> 8) |
               ((value & 0xFF000000U) >> 24);
    }

    constexpr std::uint64_t byte_swap64(const std::uint64_t value)
    {
        return (static_cast<std::uint64_t>(byte_swap32(static_cast<std::uint32_t>(value))) << 32) |
               byte_swap32(static_cast<std::uint32_t>(value >> 32));
    }

    inline std::uintptr_t decrypt_world()
    {
        if (!Kernel::Object || !Kernel::Object->valid() || !FN::O::Engine::UWorld)
            return 0;

        const auto encoded = Kernel::Object->Read<std::uint64_t>(
            Kernel::Object->Base + FN::O::Engine::UWorld);
        if (!encoded)
            return 0;

        return static_cast<std::uintptr_t>(byte_swap64(encoded) + 0xC731F903ULL);
    }

    inline std::uintptr_t get_world()
    {
        return decrypt_world();
    }

    inline std::uint32_t get_objects_count()
    {
        if (!Kernel::Object || !Kernel::Object->valid() || !FN::O::Engine::GObjectCount)
            return 0;

        const auto encoded = Kernel::Object->Read<std::uint32_t>(
            Kernel::Object->Base + FN::O::Engine::GObjectCount);
        if (!encoded)
            return 0;

        return byte_swap32(encoded) + 0xEBB16CECU;
    }

    inline std::uintptr_t get_object(const std::uint32_t index)
    {
        if (!Kernel::Object || !Kernel::Object->valid() || !FN::O::Engine::GObjects)
            return 0;

        const auto count = get_objects_count();
        if (!count || index >= count)
            return 0;

        const auto encoded_table = Kernel::Object->Read<std::uint64_t>(
            Kernel::Object->Base + FN::O::Engine::GObjects);
        if (!encoded_table)
            return 0;

        const auto chunk_table = static_cast<std::uintptr_t>(
            byte_swap64(encoded_table) + 0x894E7C7FULL);
        const auto chunk = Kernel::Object->Read<std::uintptr_t>(
            chunk_table + static_cast<std::uintptr_t>(index >> 16) * sizeof(std::uintptr_t));
        if (!chunk)
            return 0;

        const auto item = chunk + static_cast<std::uintptr_t>(index & 0xFFFFU) * 0x18U;
        const auto flags_and_high = Kernel::Object->Read<std::uint64_t>(item);
        if (flags_and_high & 0x1020000000000000ULL)
            return 0;

        const auto encoded_low = Kernel::Object->Read<std::uint32_t>(item + 0x8U);
        if (!encoded_low)
            return 0;

        const auto low = static_cast<std::uint64_t>(
            byte_swap32(encoded_low) + 0x7765FD7CU);
        const auto high = flags_and_high & 0x3FFF00000000ULL;
        return static_cast<std::uintptr_t>((high | low) << 3);
    }

    inline std::uint32_t decode_fname_index(const std::uint32_t encoded)
    {
        if (!encoded)
            return 0;

        const auto decoded = byte_swap32(encoded - 1U) + 0x2C11B315U;
        return decoded ? decoded : 0x2C11B314U;
    }

    inline std::uint32_t fname(const std::uint32_t encoded)
    {
        return decode_fname_index(encoded);
    }

    inline std::int32_t decode_fname_suffix(const std::uint32_t encoded)
    {
        if (!encoded)
            return -1;

        const auto adjusted = encoded - 1U;
        if (adjusted == 0x4DB46103U)
            return std::bit_cast<std::int32_t>(0xFC9E4BB1U);

        return std::bit_cast<std::int32_t>(
            byte_swap32(adjusted) + 0xFC9E4BB2U);
    }

    inline std::int32_t fname_suffix(const std::uint32_t encoded)
    {
        return decode_fname_suffix(encoded);
    }

    inline constexpr std::uint32_t fname_blocks_offset = 0x10U;
    inline constexpr std::uint32_t fname_length_xor = 0x266U;
    inline constexpr std::uint16_t fname_header_mask = 0x3FFU;
    inline constexpr std::uint16_t fname_wide_mask = 0x8000U;
    inline constexpr std::uint8_t fname_header_shift = 0U;
    inline constexpr std::uint8_t fname_entry_stride = 2U;
    inline constexpr std::uint8_t fname_suffix_offset = 2U;
    inline constexpr std::uint8_t fname_redirect_offset = 6U;

    inline bool decrypt_fname_bytes(std::uint8_t* bytes,
                                    const std::size_t byte_count,
                                    const std::uint32_t character_count)
    {
        if (!bytes || !byte_count || !character_count)
            return false;

        const std::vector<std::uint8_t> encrypted(bytes, bytes + byte_count);
        const auto mix = [](const std::uint32_t value)
        {
            return 0x22CEU * value + 0xE2852U;
        };

        const auto seed_mix = mix(character_count);
        auto state = 0x100001U * character_count + ((seed_mix >> 11) ^ seed_mix);

        for (std::size_t index = 0; index < byte_count; ++index)
        {
            const auto value = mix(state);
            state = ((value >> 11) ^ value) + (std::rotl(state, 20) ^ state);
            bytes[byte_count - index - 1] = static_cast<std::uint8_t>(
                encrypted[index] + state + 0x23U);
        }

        return true;
    }

    inline std::uint32_t decode_internal_index(const std::uint32_t encoded)
    {
        if (!encoded)
            return 0;

        return byte_swap32(encoded) + 0x0887FA0FU;
    }

    inline std::uint32_t decode_property_offset(const std::uint32_t encoded)
    {
        if (!encoded)
            return 0;

        return byte_swap32(encoded) + 0x0895D3A3U;
    }

    inline std::uintptr_t decode_ffield_pointer(const std::uintptr_t encoded)
    {
        if (!(encoded & 1U))
            return encoded;

        const auto value = encoded & ~std::uintptr_t{1};
        const auto product = 0xB4201428BE3B2D37ULL * value;
        const auto high = std::rotl(
            static_cast<std::uint32_t>((product ^ 0xDF996163E5E539B8ULL) >> 32), 4);
        const auto low =
            ((static_cast<std::uint32_t>(0xB4201428BE3B2D37ULL) *
              static_cast<std::uint32_t>(value)) ^
             static_cast<std::uint32_t>(0xDF996163E5E539B8ULL)) &
            ~1U;

        return static_cast<std::uintptr_t>(
            ((static_cast<std::uint64_t>(high) << 32) | low) + 0x6854E205AA8F8A9CULL);
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

        static std::string resolve(const std::int32_t index)
        {
            return get_name(static_cast<std::uint32_t>(index));
        }

        static std::string get(const std::int32_t index)
        {
            return resolve(index);
        }

        static std::string resolve_with_number(const std::int32_t index,
                                               const std::uint32_t number)
        {
            auto result = resolve(index);
            if (!result.empty() && number)
                result += "_" + std::to_string(number - 1U);
            return result;
        }

        [[nodiscard]] std::string to_string() const
        {
            return resolve(static_cast<std::int32_t>(comparison_index));
        }

      private:
        static bool read_entry(const std::uint32_t index,
                               std::uintptr_t& entry,
                               std::uint16_t& header)
        {
            if (!Kernel::Object || !Kernel::Object->valid() || !FN::O::Engine::FNamePool)
                return false;

            const auto pool = Kernel::Object->Base + FN::O::Engine::FNamePool;
            const auto block = Kernel::Object->Read<std::uintptr_t>(
                pool + Decryption::fname_blocks_offset +
                static_cast<std::uintptr_t>(index >> 16) * sizeof(std::uintptr_t));
            if (!block)
                return false;

            entry = block + static_cast<std::uintptr_t>(
                                static_cast<std::uint16_t>(index)) *
                                Decryption::fname_entry_stride;
            header = Kernel::Object->Read<std::uint16_t>(entry);
            return header != 0;
        }

        static constexpr std::uint32_t encoded_length(const std::uint16_t header)
        {
            return (header & Decryption::fname_header_mask) >>
                   Decryption::fname_header_shift;
        }

        static constexpr bool is_numbered(const std::uint16_t header)
        {
            return encoded_length(header) == Decryption::fname_length_xor;
        }

        static bool append_utf8(std::string& output, const std::uint32_t codepoint)
        {
            if (codepoint <= 0x7FU)
            {
                output.push_back(static_cast<char>(codepoint));
            }
            else if (codepoint <= 0x7FFU)
            {
                output.push_back(static_cast<char>(0xC0U | (codepoint >> 6)));
                output.push_back(static_cast<char>(0x80U | (codepoint & 0x3FU)));
            }
            else if (codepoint <= 0xFFFFU)
            {
                if (codepoint >= 0xD800U && codepoint <= 0xDFFFU)
                    return false;
                output.push_back(static_cast<char>(0xE0U | (codepoint >> 12)));
                output.push_back(static_cast<char>(0x80U | ((codepoint >> 6) & 0x3FU)));
                output.push_back(static_cast<char>(0x80U | (codepoint & 0x3FU)));
            }
            else if (codepoint <= 0x10FFFFU)
            {
                output.push_back(static_cast<char>(0xF0U | (codepoint >> 18)));
                output.push_back(static_cast<char>(0x80U | ((codepoint >> 12) & 0x3FU)));
                output.push_back(static_cast<char>(0x80U | ((codepoint >> 6) & 0x3FU)));
                output.push_back(static_cast<char>(0x80U | (codepoint & 0x3FU)));
            }
            else
            {
                return false;
            }

            return true;
        }

        static std::string decode_text(const std::uintptr_t entry,
                                       const std::uint16_t header)
        {
            const auto length = encoded_length(header) ^ Decryption::fname_length_xor;
            if (!length || length > Decryption::fname_header_mask)
                return {};

            const bool wide = (header & Decryption::fname_wide_mask) != 0;
            const auto byte_count = static_cast<std::size_t>(length) * (wide ? 2U : 1U);
            std::vector<std::uint8_t> bytes(byte_count);

            if (!Kernel::Object->ReadBytes(entry + sizeof(std::uint16_t),
                                           byte_count,
                                           bytes.data()) ||
                !Decryption::decrypt_fname_bytes(bytes.data(), byte_count, length))
                return {};

            if (!wide)
                return {reinterpret_cast<const char*>(bytes.data()), bytes.size()};

            std::string result;
            result.reserve(length);

            for (std::size_t index = 0; index < length; ++index)
            {
                auto codepoint = static_cast<std::uint32_t>(bytes[index * 2]) |
                                 (static_cast<std::uint32_t>(bytes[index * 2 + 1]) << 8);

                if (codepoint >= 0xD800U && codepoint <= 0xDBFFU)
                {
                    if (++index >= length)
                        return {};

                    const auto low = static_cast<std::uint32_t>(bytes[index * 2]) |
                                     (static_cast<std::uint32_t>(bytes[index * 2 + 1]) << 8);
                    if (low < 0xDC00U || low > 0xDFFFU)
                        return {};

                    codepoint = 0x10000U + ((codepoint - 0xD800U) << 10) +
                                (low - 0xDC00U);
                }

                if (!append_utf8(result, codepoint))
                    return {};
            }

            return result;
        }

        static std::string get_name(const std::uint32_t raw_index)
        {
            const auto index = Decryption::decode_fname_index(raw_index);
            if (!index)
                return {};

            std::uintptr_t entry{};
            std::uint16_t header{};
            if (!read_entry(index, entry, header))
                return {};

            std::int32_t suffix = -1;
            if (is_numbered(header))
            {
                suffix = Decryption::decode_fname_suffix(
                    Kernel::Object->Read<std::uint32_t>(
                        entry + Decryption::fname_suffix_offset));

                const auto redirected = Decryption::decode_fname_index(
                    Kernel::Object->Read<std::uint32_t>(
                        entry + Decryption::fname_redirect_offset));
                if (!redirected || !read_entry(redirected, entry, header) || is_numbered(header))
                    return {};
            }

            auto result = decode_text(entry, header);
            if (!result.empty() && suffix != -1)
                result += "_" + std::to_string(suffix);
            return result;
        }
    };
}
