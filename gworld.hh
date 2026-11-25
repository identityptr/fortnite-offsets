#pragma once

#include <bit>
#include <cstddef>
#include <cstdint>

// Sig: B8 ? ? ? ? 48 33 05 ? ? ? ? 48 C1 C0 ? B9 ? ? ? ? 48 31 C1 48 BE ? ? ? ? ? ? ? ? 48 0F AF F1
namespace FN::WorldGlobal
{
    // World pointer
    constexpr std::uint64_t decode(std::uint64_t encoded)
    {
        return ((std::rotl((encoded ^ 0xC2A8FFULL), 16) ^ 0xF5136F13ULL) * 0x4F207DBE8FB1498DULL);
    }

    template<class Read>
    std::uintptr_t get(std::uintptr_t base, Read&& read)
    {
        std::uint64_t encoded{};
        return read(base + 0x1C14D610, &encoded, sizeof(encoded)) ? decode(encoded) : 0;
    }
}
