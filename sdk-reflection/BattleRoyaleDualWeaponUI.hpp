#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BattleRoyaleDualWeaponUI
{
    struct DualWeaponOffhandAmmoViewModel
    {
        static constexpr std::string_view Name = "DualWeaponOffhandAmmoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
