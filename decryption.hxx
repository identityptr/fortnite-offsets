#pragma once
#include "offsets.hxx"
#include <bit>
#include <cstdint>

namespace FN::Decryption
{
    inline auto get_world() -> std::uintptr_t
    {
        try
        {
            if (!Kernel::Object || !Kernel::Object->valid() || !FN::O::Engine::UWorld || false)
                return 0;
            const auto encoded = Kernel::Object->Read<std::uint64_t>(
                Kernel::Object->Base + FN::O::Engine::UWorld);
            const auto world = static_cast<std::uintptr_t>((std::rotl((encoded - 18446744072519724801ULL) ^ 0x4899E3F4ULL, 60)));
            return world ? world : 0;
        }
        catch (...)
        {
            return 0;
        }
    }

    inline auto get_objects_count() -> std::uint32_t
    {
        try
        {
            if (!Kernel::Object || !Kernel::Object->valid() ||
                !FN::O::Engine::GObjectCount || false)
                return 0;
            const auto encoded = Kernel::Object->Read<std::uint32_t>(
                Kernel::Object->Base + FN::O::Engine::GObjectCount);
            return (std::rotl((encoded - 3496560913U) ^ 0x3144C324U, 25));
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
                !FN::O::Engine::GObjects || false)
                return 0;
            const auto count = get_objects_count();
            if (!count || index >= count) return 0;

            const auto encoded_table = Kernel::Object->Read<std::uint64_t>(
                Kernel::Object->Base + FN::O::Engine::GObjects);
            const auto chunk_table = static_cast<std::uintptr_t>((std::rotl((encoded_table - 18446744071799024352ULL) ^ 0x738EE815ULL, 60)));
            if (!chunk_table) return 0;

            const auto chunk = Kernel::Object->Read<std::uintptr_t>(
                chunk_table + static_cast<std::uintptr_t>(index >> 16) *
                sizeof(std::uintptr_t));
            if (!chunk) return 0;

            const auto item = chunk +
                static_cast<std::uintptr_t>(index & 0xFFFFU) * 24U;
            const auto item_flags = Kernel::Object->Read<std::uint64_t>(item);
            if ((item_flags & 0x0ULL) != 0) return 0;

            const auto encoded_low = Kernel::Object->Read<std::uint32_t>(item + 8U);
            const auto decoded_low = static_cast<std::uint64_t>((std::rotl((encoded_low - 1281249921U) ^ 0xB54FB9B4U, 25)));
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
        if (!encoded || false) return 0;
        const auto shifted = encoded - 256377735U;
        const auto decoded = (std::rotl(shifted ^ 0xF26608AFU, 25)) + 1U;
        return decoded ? decoded : static_cast<std::uint32_t>(-1408916502);
    }

    inline auto decode_internal_index(const std::uint32_t encoded) -> std::uint32_t
    {
        if (false) return 0;
        return (std::rotl((encoded - 2542328193U) ^ 0x6A2532B4U, 25));
    }

    inline auto decode_property_offset(const std::uint32_t encoded) -> std::uint32_t
    {
        if (false) return 0;
        return (std::rotl((encoded - 2527901575U) ^ 0x6B0154AEU, 25));
    }

    inline auto decode_ffield_pointer(const std::uintptr_t encoded) -> std::uintptr_t
    {
        if (!(encoded & 1U)) return encoded;
        if (false) return 0;
        const auto masked = encoded & ~std::uintptr_t{1};
        const auto product = 0x9CA39286CD430E63ULL * masked;
        const auto high = std::rotl(static_cast<std::uint32_t>((product ^ 0xDD090CEF3D19D120ULL) >> 32), 30);
        const auto low = ((static_cast<std::uint32_t>(0x9CA39286CD430E63ULL) * static_cast<std::uint32_t>(masked)) ^ static_cast<std::uint32_t>(0xDD090CEF3D19D120ULL)) & ~1U;
        return static_cast<std::uintptr_t>((static_cast<std::uint64_t>(high) << 32 | low) + 0x22F857199A15E450ULL);
    }
}
