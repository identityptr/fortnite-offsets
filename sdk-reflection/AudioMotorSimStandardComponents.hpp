#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioMotorSimStandardComponents
{
    struct BoostMotorSimComponent
    {
        static constexpr std::string_view Name = "BoostMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ThrottleScale = 0xD0;
            static constexpr std::uintptr_t InterpExp = 0xD4;
            static constexpr std::uintptr_t InterpTime = 0xD8;
            static constexpr std::uintptr_t ScaleThrottleWithBoostStrength = 0xDC;
            static constexpr std::uintptr_t bModifyPitch = 0xDD;
            static constexpr std::uintptr_t PitchModifierInterpSpeed = 0xE0;
            static constexpr std::uintptr_t BoostToPitchCurve = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ThrottleScale", 0xD0, "FloatProperty"},
            {"InterpExp", 0xD4, "FloatProperty"},
            {"InterpTime", 0xD8, "FloatProperty"},
            {"ScaleThrottleWithBoostStrength", 0xDC, "BoolProperty"},
            {"bModifyPitch", 0xDD, "BoolProperty"},
            {"PitchModifierInterpSpeed", 0xE0, "FloatProperty"},
            {"BoostToPitchCurve", 0xE8, "StructProperty"},
        }};
    };

    struct MotorPhysicsSimComponent
    {
        static constexpr std::string_view Name = "MotorPhysicsSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0xD0;
            static constexpr std::uintptr_t EngineTorque = 0xD4;
            static constexpr std::uintptr_t BrakingHorsePower = 0xD8;
            static constexpr std::uintptr_t GearRatios = 0xE0;
            static constexpr std::uintptr_t ClutchedGearRatio = 0xF0;
            static constexpr std::uintptr_t bUseInfiniteGears = 0xF4;
            static constexpr std::uintptr_t bAlwaysDownshiftToZerothGear = 0xF5;
            static constexpr std::uintptr_t InfiniteGearRatio = 0xF8;
            static constexpr std::uintptr_t UpShiftMaxRpm = 0xFC;
            static constexpr std::uintptr_t DownShiftStartRpm = 0x100;
            static constexpr std::uintptr_t ClutchedForceModifier = 0x104;
            static constexpr std::uintptr_t ClutchedDecelScale = 0x108;
            static constexpr std::uintptr_t EngineGearRatio = 0x10C;
            static constexpr std::uintptr_t EngineFriction = 0x110;
            static constexpr std::uintptr_t GroundFriction = 0x114;
            static constexpr std::uintptr_t WindResistancePerVelocity = 0x118;
            static constexpr std::uintptr_t ThrottleInterpolationTime = 0x11C;
            static constexpr std::uintptr_t RpmInterpSpeed = 0x120;
            static constexpr std::uintptr_t OnGearChangedEvent = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"Weight", 0xD0, "FloatProperty"},
            {"EngineTorque", 0xD4, "FloatProperty"},
            {"BrakingHorsePower", 0xD8, "FloatProperty"},
            {"GearRatios", 0xE0, "ArrayProperty"},
            {"ClutchedGearRatio", 0xF0, "FloatProperty"},
            {"bUseInfiniteGears", 0xF4, "BoolProperty"},
            {"bAlwaysDownshiftToZerothGear", 0xF5, "BoolProperty"},
            {"InfiniteGearRatio", 0xF8, "FloatProperty"},
            {"UpShiftMaxRpm", 0xFC, "FloatProperty"},
            {"DownShiftStartRpm", 0x100, "FloatProperty"},
            {"ClutchedForceModifier", 0x104, "FloatProperty"},
            {"ClutchedDecelScale", 0x108, "FloatProperty"},
            {"EngineGearRatio", 0x10C, "FloatProperty"},
            {"EngineFriction", 0x110, "FloatProperty"},
            {"GroundFriction", 0x114, "FloatProperty"},
            {"WindResistancePerVelocity", 0x118, "FloatProperty"},
            {"ThrottleInterpolationTime", 0x11C, "FloatProperty"},
            {"RpmInterpSpeed", 0x120, "FloatProperty"},
            {"OnGearChangedEvent", 0x128, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ResistanceMotorSimComponent
    {
        static constexpr std::string_view Name = "ResistanceMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UpSpeedMaxFriction = 0xD0;
            static constexpr std::uintptr_t MinSpeed = 0xD4;
            static constexpr std::uintptr_t SideSpeedFrictionCurve = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UpSpeedMaxFriction", 0xD0, "FloatProperty"},
            {"MinSpeed", 0xD4, "FloatProperty"},
            {"SideSpeedFrictionCurve", 0xD8, "StructProperty"},
        }};
    };

    struct RevLimiterMotorSimComponent
    {
        static constexpr std::string_view Name = "RevLimiterMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitTime = 0xD0;
            static constexpr std::uintptr_t DecelScale = 0xD4;
            static constexpr std::uintptr_t AirMaxThrottleTime = 0xD8;
            static constexpr std::uintptr_t SideSpeedThreshold = 0xDC;
            static constexpr std::uintptr_t LimiterMaxRpm = 0xE0;
            static constexpr std::uintptr_t bShiftBackToZero = 0xE4;
            static constexpr std::uintptr_t bRevLimitOnClutchEngaged = 0xE5;
            static constexpr std::uintptr_t ClutchedRecoverRPM = 0xE8;
            static constexpr std::uintptr_t bRevLimitOnReverse = 0xEC;
            static constexpr std::uintptr_t ReverseMaxRPM = 0xF0;
            static constexpr std::uintptr_t ReverseRecoverRPM = 0xF4;
            static constexpr std::uintptr_t bHoldRPMInReverse = 0xF8;
            static constexpr std::uintptr_t OnRevLimiterHit = 0x100;
            static constexpr std::uintptr_t OnRevLimiterStateChanged = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"LimitTime", 0xD0, "FloatProperty"},
            {"DecelScale", 0xD4, "FloatProperty"},
            {"AirMaxThrottleTime", 0xD8, "FloatProperty"},
            {"SideSpeedThreshold", 0xDC, "FloatProperty"},
            {"LimiterMaxRpm", 0xE0, "FloatProperty"},
            {"bShiftBackToZero", 0xE4, "BoolProperty"},
            {"bRevLimitOnClutchEngaged", 0xE5, "BoolProperty"},
            {"ClutchedRecoverRPM", 0xE8, "FloatProperty"},
            {"bRevLimitOnReverse", 0xEC, "BoolProperty"},
            {"ReverseMaxRPM", 0xF0, "FloatProperty"},
            {"ReverseRecoverRPM", 0xF4, "FloatProperty"},
            {"bHoldRPMInReverse", 0xF8, "BoolProperty"},
            {"OnRevLimiterHit", 0x100, "MulticastInlineDelegateProperty"},
            {"OnRevLimiterStateChanged", 0x110, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ReverseMotorSimComponent
    {
        static constexpr std::string_view Name = "ReverseMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReverseEngineResistanceModifier = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReverseEngineResistanceModifier", 0xD0, "FloatProperty"},
        }};
    };

    struct RpmCurveMotorSimComponent
    {
        static constexpr std::string_view Name = "RpmCurveMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Gears = 0xD0;
            static constexpr std::uintptr_t InterpSpeed = 0xE0;
            static constexpr std::uintptr_t OnUpShift = 0xE8;
            static constexpr std::uintptr_t OnDownShift = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Gears", 0xD0, "ArrayProperty"},
            {"InterpSpeed", 0xE0, "FloatProperty"},
            {"OnUpShift", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnDownShift", 0xF8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ThrottleStateMotorSimComponent
    {
        static constexpr std::string_view Name = "ThrottleStateMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnThrottleEngaged = 0xD0;
            static constexpr std::uintptr_t OnThrottleReleased = 0xE0;
            static constexpr std::uintptr_t OnEngineBlowoff = 0xF0;
            static constexpr std::uintptr_t BlowoffMinThrottleTime = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnThrottleEngaged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnThrottleReleased", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnEngineBlowoff", 0xF0, "MulticastInlineDelegateProperty"},
            {"BlowoffMinThrottleTime", 0x100, "FloatProperty"},
        }};
    };

    struct VelocitySyncMotorSimComponent
    {
        static constexpr std::string_view Name = "VelocitySyncMotorSimComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NoThrottleTime = 0xD0;
            static constexpr std::uintptr_t SpeedThreshold = 0xD4;
            static constexpr std::uintptr_t SpeedToRpmCurve = 0xD8;
            static constexpr std::uintptr_t InterpSpeed = 0x120;
            static constexpr std::uintptr_t InterpTime = 0x124;
            static constexpr std::uintptr_t FirstGearThrottleThreshold = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NoThrottleTime", 0xD0, "FloatProperty"},
            {"SpeedThreshold", 0xD4, "FloatProperty"},
            {"SpeedToRpmCurve", 0xD8, "StructProperty"},
            {"InterpSpeed", 0x120, "FloatProperty"},
            {"InterpTime", 0x124, "FloatProperty"},
            {"FirstGearThrottleThreshold", 0x128, "FloatProperty"},
        }};
    };

}
