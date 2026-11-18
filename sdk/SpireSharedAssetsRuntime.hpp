#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpireSharedAssetsRuntime
{
    struct FortSpireSlag
    {
        static constexpr std::string_view Name = "FortSpireSlag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDamageSet = 0xDB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseDamageSet", 0xDB8, "BoolProperty"},
        }};
    };

}
