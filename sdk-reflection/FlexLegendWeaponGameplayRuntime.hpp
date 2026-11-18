#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FlexLegendWeaponGameplayRuntime
{
    struct FlexLegendLeverShotgunLayerAnimInstance
    {
        static constexpr std::string_view Name = "FlexLegendLeverShotgunLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayUpperBodyTargetingCustomOrIsTargetingCustom = 0x1180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPlayUpperBodyTargetingCustomOrIsTargetingCustom", 0x1180, "BoolProperty"},
        }};
    };

}
