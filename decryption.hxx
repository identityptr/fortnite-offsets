#pragma once

#include <bit>
#include <cstddef>
#include <cstdint>
#include "gobjects.hh"
#include "gworld.hh"

namespace FN::Decryption
{
    // Name index
    constexpr std::uint32_t fname(std::uint32_t encoded)
    {
        if (!encoded) return 0;
        const auto value = (((std::rotl(((encoded - 0x1U) ^ 0xB9C081U), 2) ^ 0x9575403AU) * 0x8EC51E6DU) + 0x1U);
        return value ? value : 0x667B692EU;
    }

    // Numbered name
    constexpr std::int32_t fname_suffix(std::uint32_t encoded)
    {
        if (!encoded) return std::bit_cast<std::int32_t>(0xFFFFFFFFU);
        const auto adjusted = encoded;
        if (adjusted == 0x974243B0U) return std::bit_cast<std::int32_t>(0x288B59D2U);
        return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(((std::rotl(((adjusted - 0x1U) ^ 0xB9C081U), 2) ^ 0xA0BA6821U) * 0x8EC51E6DU)));
    }

    // Object index
    constexpr std::uint32_t decode_internal_index(std::uint32_t encoded)
    {
        return ((std::rotl((encoded ^ 0xB9C081U), 2) ^ 0x5C70C9C3U) * 0x8EC51E6DU);
    }

    // Property offset
    constexpr std::uint32_t decode_property_offset(std::uint32_t encoded)
    {
        if (!encoded) return 0;
        return encoded;
    }

    // Tagged field pointer
    constexpr std::uintptr_t decode_ffield_pointer(std::uintptr_t encoded)
    {
        if (!(encoded & 1U)) return encoded;
        const auto masked = encoded & ~std::uintptr_t{1};
        return (((masked ^ 0x609F15D04E709C12ULL) + 0xA279742804E5182CULL) ^ 0x4F70EB50E6D36C56ULL);
    }

    // Name bytes
    inline bool decrypt_fname_bytes(std::uint8_t* bytes, std::size_t byte_count, std::uint32_t length)
    {
        if (!bytes || !byte_count) return false;
        const auto product = length * 0x2188U;
        auto state = ((product + 0x4895A8U) >> 18) ^ (0xFFB76A50U - product);
        for (std::size_t pass = 0; pass < 2; ++pass)
            for (auto index = pass; index < byte_count; index += 2)
            {
                const auto rotated = std::rotl(static_cast<std::uint8_t>(bytes[index] ^ 0xBBU), 6);
                bytes[index] = static_cast<std::uint8_t>((rotated ^ static_cast<std::uint8_t>(state)) * 0x35U);
                const auto mixed = (state * 0x2188U + 0x4895AFU);
                state = ~(mixed ^ (mixed >> 18));
            }
        return true;
    }
}
