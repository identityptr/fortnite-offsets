#pragma once

#include <bit>
#include <cstddef>
#include <cstdint>

// Sig: 41 B8 ? ? ? ? 4C 33 05 ? ? ? ? 49 C1 C0 ? 49 81 F0 ? ? ? ? 49 B9 ? ? ? ? ? ? ? ? 4D 0F AF C8 C1 E9 ? 48 8D 14 52 C1 E2 ?
namespace FN::GObjects
{
    // Count
    constexpr std::uint32_t decode_count(std::uint32_t encoded)
    {
        return ((std::rotl((encoded ^ 0xB9C081U), 2) ^ 0x19965E3AU) * 0x8EC51E6DU);
    }

    // Chunk table
    constexpr std::uint64_t decode_chunks(std::uint64_t encoded)
    {
        return ((std::rotl((encoded ^ 0xC2A8FFULL), 16) ^ 0x58BBAC79ULL) * 0x4F207DBE8FB1498DULL);
    }

    // Object pointer
    constexpr std::uintptr_t decode_object(std::uint64_t flags, std::uint32_t encoded)
    {
        if (flags & 0x1020000000000000ULL) return 0;
        return ((flags & 0x3FFF00000000ULL) |
                static_cast<std::uint64_t>(((std::rotl((encoded ^ 0xB9C081U), 2) ^ 0x8A652BDEU) * 0x8EC51E6DU))) << 3;
    }

    template<class Read>
    std::uintptr_t object_at(std::uintptr_t base, std::uint32_t index, Read&& read)
    {
        std::uint32_t raw_count{}; std::uint64_t raw_table{}, chunk{}, flags{};
        if (!read(base + 0x1C0D9C94, &raw_count, sizeof(raw_count)) ||
            index >= decode_count(raw_count) ||
            !read(base + 0x1C0D9C80, &raw_table, sizeof(raw_table))) return 0;
        const auto table = decode_chunks(raw_table);
        if (!table || !read(table + std::uintptr_t{index >> 16} * 8, &chunk, sizeof(chunk)) || !chunk) return 0;
        const auto item = chunk + std::uintptr_t{index & 0xFFFFU} * 24;
        std::uint32_t raw{};
        if (!read(item, &flags, sizeof(flags)) ||
            !read(item + 16, &raw, sizeof(raw))) return 0;
        return decode_object(flags, raw);
    }
}
