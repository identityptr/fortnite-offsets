#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CorruptionGameplayCodeUI
{
    struct FortPowerupReticleExtensionWidget
    {
        static constexpr std::string_view Name = "FortPowerupReticleExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LastPowerupHeatState = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LastPowerupHeatState", 0x3B0, "EnumProperty"},
        }};
    };

}
