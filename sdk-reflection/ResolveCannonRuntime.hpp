#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ResolveCannonRuntime
{
    struct FortVehicleAnimInstance_MountedCannon
    {
        static constexpr std::string_view Name = "FortVehicleAnimInstance_MountedCannon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMountedTurretAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AimingYawLastFrame = 0x530;
            static constexpr std::uintptr_t MinTimeStepForInterpolatingTurnRate = 0x534;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AimingYawLastFrame", 0x530, "FloatProperty"},
            {"MinTimeStepForInterpolatingTurnRate", 0x534, "FloatProperty"},
        }};
    };

}
