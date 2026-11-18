#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChronoWeaponGameplayRuntime
{
    struct AnimInstance_ChronoPanRifle
    {
        static constexpr std::string_view Name = "AnimInstance_ChronoPanRifle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFiring = 0x260;
            static constexpr std::uintptr_t bIsReloading = 0x261;
            static constexpr std::uintptr_t MagRotationValue = 0x264;
            static constexpr std::uintptr_t ResetMagRotationCurveName = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsFiring", 0x260, "BoolProperty"},
            {"bIsReloading", 0x261, "BoolProperty"},
            {"MagRotationValue", 0x264, "FloatProperty"},
            {"ResetMagRotationCurveName", 0x268, "NameProperty"},
        }};
    };

}
