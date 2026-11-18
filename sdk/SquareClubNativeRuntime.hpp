#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SquareClubNativeRuntime
{
    struct SquareClubAbilitiesData
    {
        static constexpr std::string_view Name = "SquareClubAbilitiesData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Abilities = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Abilities", 0x28, "ArrayProperty"},
        }};
    };

}
