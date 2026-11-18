#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ArcadeWeaponUI
{
    struct ArcadeWeaponInGameUIHitPointsVM
    {
        static constexpr std::string_view Name = "ArcadeWeaponInGameUIHitPointsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ArcadeWeaponUIScoreVM
    {
        static constexpr std::string_view Name = "ArcadeWeaponUIScoreVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
