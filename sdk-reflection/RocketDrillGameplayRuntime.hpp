#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RocketDrillGameplayRuntime
{
    struct FortMovementMode_ExtRocketDrill
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtRocketDrill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationGameplayTag = 0x1B8;
            static constexpr std::uintptr_t BlockedByObstacleGameplayTag = 0x1BC;
            static constexpr std::uintptr_t Gravity = 0x1C0;
            static constexpr std::uintptr_t GravityGrounded = 0x1E8;
            static constexpr std::uintptr_t SlopeMaxSpeedModifierMax = 0x210;
            static constexpr std::uintptr_t RotationAdjustment = 0x238;
            static constexpr std::uintptr_t RotationInterpSpeed = 0x250;
            static constexpr std::uintptr_t bOrientRotationToMovement = 0x278;
            static constexpr std::uintptr_t bUseCustomRotation = 0x2A0;
            static constexpr std::uintptr_t TimeSecondsToReachMaxSpeed = 0x2D0;
            static constexpr std::uintptr_t BaseMaxSpeed = 0x2F8;
            static constexpr std::uintptr_t BlockedMaxSpeed = 0x320;
            static constexpr std::uintptr_t MaxEngineGimbalAngle = 0x348;
            static constexpr std::uintptr_t MaxEngineGimbalWorldZAngle = 0x370;
            static constexpr std::uintptr_t MinEngineGimbalWorldZAngle = 0x398;
            static constexpr std::uintptr_t SpeedReductionOnHit = 0x3C0;
            static constexpr std::uintptr_t bCorrectRotation = 0x3E8;
            static constexpr std::uintptr_t bMaintainHorizontalGroundVelocity = 0x410;
            static constexpr std::uintptr_t InitialSpeed = 0x438;
            static constexpr std::uintptr_t bIgnorePriorVelocityOnStart = 0x468;
            static constexpr std::uintptr_t DirectionalControlBlendInDelay = 0x498;
            static constexpr std::uintptr_t DirectionalControlBlendInTime = 0x4C8;
            static constexpr std::uintptr_t DirectionalControlInterpSpeed = 0x4F8;
            static constexpr std::uintptr_t EngineAccelerationScaler = 0x528;
            static constexpr std::uintptr_t CameraModifierClass = 0x530;
            static constexpr std::uintptr_t CameraModifierFadeOutTime = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"ActivationGameplayTag", 0x1B8, "StructProperty"},
            {"BlockedByObstacleGameplayTag", 0x1BC, "StructProperty"},
            {"Gravity", 0x1C0, "StructProperty"},
            {"GravityGrounded", 0x1E8, "StructProperty"},
            {"SlopeMaxSpeedModifierMax", 0x210, "StructProperty"},
            {"RotationAdjustment", 0x238, "StructProperty"},
            {"RotationInterpSpeed", 0x250, "StructProperty"},
            {"bOrientRotationToMovement", 0x278, "StructProperty"},
            {"bUseCustomRotation", 0x2A0, "StructProperty"},
            {"TimeSecondsToReachMaxSpeed", 0x2D0, "StructProperty"},
            {"BaseMaxSpeed", 0x2F8, "StructProperty"},
            {"BlockedMaxSpeed", 0x320, "StructProperty"},
            {"MaxEngineGimbalAngle", 0x348, "StructProperty"},
            {"MaxEngineGimbalWorldZAngle", 0x370, "StructProperty"},
            {"MinEngineGimbalWorldZAngle", 0x398, "StructProperty"},
            {"SpeedReductionOnHit", 0x3C0, "StructProperty"},
            {"bCorrectRotation", 0x3E8, "StructProperty"},
            {"bMaintainHorizontalGroundVelocity", 0x410, "StructProperty"},
            {"InitialSpeed", 0x438, "StructProperty"},
            {"bIgnorePriorVelocityOnStart", 0x468, "StructProperty"},
            {"DirectionalControlBlendInDelay", 0x498, "StructProperty"},
            {"DirectionalControlBlendInTime", 0x4C8, "StructProperty"},
            {"DirectionalControlInterpSpeed", 0x4F8, "StructProperty"},
            {"EngineAccelerationScaler", 0x528, "FloatProperty"},
            {"CameraModifierClass", 0x530, "ClassProperty"},
            {"CameraModifierFadeOutTime", 0x538, "FloatProperty"},
        }};
    };

    struct FortMovementMode_RocketDrillRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_RocketDrillRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x38;
            static constexpr std::uintptr_t ActualVelocity = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"State", 0x38, "EnumProperty"},
            {"ActualVelocity", 0x58, "StructProperty"},
        }};
    };

    struct RocketDrillAttributeSet
    {
        static constexpr std::string_view Name = "RocketDrillAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxFuel = 0x50;
            static constexpr std::uintptr_t Fuel = 0x78;
            static constexpr std::uintptr_t MaxReserveFuel = 0xA0;
            static constexpr std::uintptr_t ReserveFuel = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxFuel", 0x50, "StructProperty"},
            {"Fuel", 0x78, "StructProperty"},
            {"MaxReserveFuel", 0xA0, "StructProperty"},
            {"ReserveFuel", 0xC8, "StructProperty"},
        }};
    };

    struct RocketDrillLayerAnimInstance
    {
        static constexpr std::string_view Name = "RocketDrillLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t Drill_Burst_Stop_Float = 0x1180;
            static constexpr std::uintptr_t IdleNoiseAlpha = 0x1184;
            static constexpr std::uintptr_t StartBoostYaw = 0x1188;
            static constexpr std::uintptr_t VelocityYaw = 0x1190;
            static constexpr std::uintptr_t Yaw = 0x1198;
            static constexpr std::uintptr_t Pitch = 0x11A0;
            static constexpr std::uintptr_t DrillingAO_Alpha = 0x11A8;
            static constexpr std::uintptr_t BoostPitch = 0x11B0;
            static constexpr std::uintptr_t VelocityPitch = 0x11B8;
            static constexpr std::uintptr_t bIsOtherMovementMode = 0x11C0;
            static constexpr std::uintptr_t bLandingWithImpact = 0x11C1;
            static constexpr std::uintptr_t bDrillSkid = 0x11C2;
            static constexpr std::uintptr_t bDrillActive = 0x11C3;
            static constexpr std::uintptr_t bIsMoving = 0x11C4;
            static constexpr std::uintptr_t bBurstStartBlendIn = 0x11C5;
            static constexpr std::uintptr_t bIntoWallHit = 0x11C6;
            static constexpr std::uintptr_t bCanEnterToLand = 0x11C7;
            static constexpr std::uintptr_t bCanEnterToBase = 0x11C8;
            static constexpr std::uintptr_t bCanEnterIntoFall = 0x11C9;
            static constexpr std::uintptr_t bExitHardLand = 0x11CA;
            static constexpr std::uintptr_t DrivingTagName = 0x11CC;
            static constexpr std::uintptr_t PassengerTagName = 0x11D0;
            static constexpr std::uintptr_t ActiveTagName = 0x11D4;
            static constexpr std::uintptr_t SkidTagName = 0x11D8;
            static constexpr std::uintptr_t LandingWithImpactTagName = 0x11DC;
            static constexpr std::uintptr_t HardImpactTagName = 0x11E0;
            static constexpr std::uintptr_t MeleeAttackTagName = 0x11E4;
            static constexpr std::uintptr_t OtherMovementModesTagNames = 0x11E8;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"Drill_Burst_Stop_Float", 0x1180, "FloatProperty"},
            {"IdleNoiseAlpha", 0x1184, "FloatProperty"},
            {"StartBoostYaw", 0x1188, "FloatProperty"},
            {"VelocityYaw", 0x1190, "DoubleProperty"},
            {"Yaw", 0x1198, "DoubleProperty"},
            {"Pitch", 0x11A0, "DoubleProperty"},
            {"DrillingAO_Alpha", 0x11A8, "DoubleProperty"},
            {"BoostPitch", 0x11B0, "DoubleProperty"},
            {"VelocityPitch", 0x11B8, "DoubleProperty"},
            {"bIsOtherMovementMode", 0x11C0, "BoolProperty"},
            {"bLandingWithImpact", 0x11C1, "BoolProperty"},
            {"bDrillSkid", 0x11C2, "BoolProperty"},
            {"bDrillActive", 0x11C3, "BoolProperty"},
            {"bIsMoving", 0x11C4, "BoolProperty"},
            {"bBurstStartBlendIn", 0x11C5, "BoolProperty"},
            {"bIntoWallHit", 0x11C6, "BoolProperty"},
            {"bCanEnterToLand", 0x11C7, "BoolProperty"},
            {"bCanEnterToBase", 0x11C8, "BoolProperty"},
            {"bCanEnterIntoFall", 0x11C9, "BoolProperty"},
            {"bExitHardLand", 0x11CA, "BoolProperty"},
            {"DrivingTagName", 0x11CC, "StructProperty"},
            {"PassengerTagName", 0x11D0, "StructProperty"},
            {"ActiveTagName", 0x11D4, "StructProperty"},
            {"SkidTagName", 0x11D8, "StructProperty"},
            {"LandingWithImpactTagName", 0x11DC, "StructProperty"},
            {"HardImpactTagName", 0x11E0, "StructProperty"},
            {"MeleeAttackTagName", 0x11E4, "StructProperty"},
            {"OtherMovementModesTagNames", 0x11E8, "StructProperty"},
        }};
    };

    struct RocketDrillWeaponAnimInstance
    {
        static constexpr std::string_view Name = "RocketDrillWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t DrillBitRotation = 0x370;
            static constexpr std::uintptr_t ReturnValueYPitch = 0x388;
            static constexpr std::uintptr_t DrillingAO_Alpha = 0x390;
            static constexpr std::uintptr_t bDrillSkid = 0x398;
            static constexpr std::uintptr_t bDrillActive = 0x399;
            static constexpr std::uintptr_t bEnterTacSprint = 0x39A;
            static constexpr std::uintptr_t bLandingWithImpact = 0x39B;
            static constexpr std::uintptr_t bInTacSprintInto = 0x39C;
            static constexpr std::uintptr_t bExitHardLand = 0x39D;
            static constexpr std::uintptr_t bIsDrillMobilityPose = 0x39E;
            static constexpr std::uintptr_t bCanEnterIntoFall = 0x39F;
            static constexpr std::uintptr_t bCanEnterToBase = 0x3A0;
            static constexpr std::uintptr_t bCanEnterToLand = 0x3A1;
            static constexpr std::uintptr_t bBurstStartBlendIn = 0x3A2;
            static constexpr std::uintptr_t bNotSprintingRule = 0x3A3;
            static constexpr std::uintptr_t DrillBitActiveTags = 0x3A8;
            static constexpr std::uintptr_t DrillBit_RampUpCurve = 0x3C8;
            static constexpr std::uintptr_t DrillBit_RampDownCurve = 0x410;
            static constexpr std::uintptr_t DrillBitMaxSpeed = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"DrillBitRotation", 0x370, "StructProperty"},
            {"ReturnValueYPitch", 0x388, "FloatProperty"},
            {"DrillingAO_Alpha", 0x390, "DoubleProperty"},
            {"bDrillSkid", 0x398, "BoolProperty"},
            {"bDrillActive", 0x399, "BoolProperty"},
            {"bEnterTacSprint", 0x39A, "BoolProperty"},
            {"bLandingWithImpact", 0x39B, "BoolProperty"},
            {"bInTacSprintInto", 0x39C, "BoolProperty"},
            {"bExitHardLand", 0x39D, "BoolProperty"},
            {"bIsDrillMobilityPose", 0x39E, "BoolProperty"},
            {"bCanEnterIntoFall", 0x39F, "BoolProperty"},
            {"bCanEnterToBase", 0x3A0, "BoolProperty"},
            {"bCanEnterToLand", 0x3A1, "BoolProperty"},
            {"bBurstStartBlendIn", 0x3A2, "BoolProperty"},
            {"bNotSprintingRule", 0x3A3, "BoolProperty"},
            {"DrillBitActiveTags", 0x3A8, "StructProperty"},
            {"DrillBit_RampUpCurve", 0x3C8, "StructProperty"},
            {"DrillBit_RampDownCurve", 0x410, "StructProperty"},
            {"DrillBitMaxSpeed", 0x458, "DoubleProperty"},
        }};
    };

}
