#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FirePetalWeaponGameplayRuntime
{
    struct FlavorFirePetalSMGAnimInstance
    {
        static constexpr std::string_view Name = "FlavorFirePetalSMGAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRotation = 0x370;
            static constexpr std::uintptr_t ScaleDupeMag = 0x378;
            static constexpr std::uintptr_t ScaleMag = 0x380;
            static constexpr std::uintptr_t RotationAmount = 0x388;
            static constexpr std::uintptr_t CurrentRotator = 0x390;
            static constexpr std::uintptr_t bIsCrouchWalking = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CurrentRotation", 0x370, "DoubleProperty"},
            {"ScaleDupeMag", 0x378, "DoubleProperty"},
            {"ScaleMag", 0x380, "DoubleProperty"},
            {"RotationAmount", 0x388, "DoubleProperty"},
            {"CurrentRotator", 0x390, "StructProperty"},
            {"bIsCrouchWalking", 0x3A8, "BoolProperty"},
        }};
    };

}
