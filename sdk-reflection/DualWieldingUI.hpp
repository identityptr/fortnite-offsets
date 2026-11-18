#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DualWieldingUI
{
    struct ReticleDualWeaponBase
    {
        static constexpr std::string_view Name = "ReticleDualWeaponBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HideAmmoBarsDefaultDelayTime = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HideAmmoBarsDefaultDelayTime", 0x3B0, "FloatProperty"},
        }};
    };

}
