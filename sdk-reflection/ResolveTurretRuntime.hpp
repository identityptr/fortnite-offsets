#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ResolveTurretRuntime
{
    struct FortPlayerAnimInstance_AntiVehMountedTurret
    {
        static constexpr std::string_view Name = "FortPlayerAnimInstance_AntiVehMountedTurret";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t HandAttachL = 0x1180;
            static constexpr std::uintptr_t HandAttachR = 0x1198;
            static constexpr std::uintptr_t HandAttachBoneNameL = 0x11B0;
            static constexpr std::uintptr_t HandAttachBoneNameR = 0x11B4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HandAttachL", 0x1180, "StructProperty"},
            {"HandAttachR", 0x1198, "StructProperty"},
            {"HandAttachBoneNameL", 0x11B0, "NameProperty"},
            {"HandAttachBoneNameR", 0x11B4, "NameProperty"},
        }};
    };

    struct FortVehicleAnimInstance_AntiVehMountedTurret
    {
        static constexpr std::string_view Name = "FortVehicleAnimInstance_AntiVehMountedTurret";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMountedTurretAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t YawDeltaSmoothed = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"YawDeltaSmoothed", 0x530, "FloatProperty"},
        }};
    };

    struct FortVehicleAnimInstance_SevenMountedTurret
    {
        static constexpr std::string_view Name = "FortVehicleAnimInstance_SevenMountedTurret";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMountedTurretAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t YawDeltaSmoothed = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"YawDeltaSmoothed", 0x530, "FloatProperty"},
        }};
    };

}
