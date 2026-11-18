#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ThermalLanceGameplayRuntime
{
    struct LaserCutterWeaponAnimInstance
    {
        static constexpr std::string_view Name = "LaserCutterWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Spinner_RampDownCurve = 0x370;
            static constexpr std::uintptr_t Spinner_RampUpCurve = 0x3B8;
            static constexpr std::uintptr_t GaugeNeedleRotation = 0x400;
            static constexpr std::uintptr_t SpinnerRotation = 0x418;
            static constexpr std::uintptr_t MinNeedleRotationAngle = 0x430;
            static constexpr std::uintptr_t MaxNeedleRotationAngle = 0x438;
            static constexpr std::uintptr_t SpinnerMaxSpeed = 0x440;
            static constexpr std::uintptr_t bIsFiring = 0x448;
            static constexpr std::uintptr_t bDoPulse = 0x449;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Spinner_RampDownCurve", 0x370, "StructProperty"},
            {"Spinner_RampUpCurve", 0x3B8, "StructProperty"},
            {"GaugeNeedleRotation", 0x400, "StructProperty"},
            {"SpinnerRotation", 0x418, "StructProperty"},
            {"MinNeedleRotationAngle", 0x430, "DoubleProperty"},
            {"MaxNeedleRotationAngle", 0x438, "DoubleProperty"},
            {"SpinnerMaxSpeed", 0x440, "DoubleProperty"},
            {"bIsFiring", 0x448, "BoolProperty"},
            {"bDoPulse", 0x449, "BoolProperty"},
        }};
    };

    struct LaserCutterWeaponInterface
    {
        static constexpr std::string_view Name = "LaserCutterWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ThermalLanceLayerAnimInstance
    {
        static constexpr std::string_view Name = "ThermalLanceLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PullbackPose_Curve = 0x1180;
            static constexpr std::uintptr_t OverheatShake_Curve = 0x11C8;
            static constexpr std::uintptr_t bIsFiring = 0x1210;
            static constexpr std::uintptr_t bDoPulse = 0x1211;
            static constexpr std::uintptr_t AdditiveAlpha = 0x1214;
            static constexpr std::uintptr_t OverheatShake_Alpha = 0x1218;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PullbackPose_Curve", 0x1180, "StructProperty"},
            {"OverheatShake_Curve", 0x11C8, "StructProperty"},
            {"bIsFiring", 0x1210, "BoolProperty"},
            {"bDoPulse", 0x1211, "BoolProperty"},
            {"AdditiveAlpha", 0x1214, "FloatProperty"},
            {"OverheatShake_Alpha", 0x1218, "FloatProperty"},
        }};
    };

}
