#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JethroVRuntime
{
    struct FortAthenaJethroVehicle
    {
        static constexpr std::string_view Name = "FortAthenaJethroVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaFerretVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t JethroVehicleStatus = 0x296C;
            static constexpr std::uintptr_t DamageAlphaToTriggerDamageFX = 0x2978;
            static constexpr std::uintptr_t NativeComp_DamageStateFX = 0x2980;
            static constexpr std::uintptr_t NativeComp_DamageStateLastLife = 0x2988;
            static constexpr std::uintptr_t NativeComp_DamageState = 0x2990;
            static constexpr std::uintptr_t NativeSys_DamageStateFX = 0x2998;
            static constexpr std::uintptr_t Native_DamageStateSound = 0x29A0;
            static constexpr std::uintptr_t Native_DamageStateLastLifeSound = 0x29A8;
            static constexpr std::uintptr_t CrashingDesiredUp = 0x29B0;
            static constexpr std::uintptr_t OnClientVehicleDamaged = 0x29C8;
            static constexpr std::uintptr_t LocalJethroStateStartTime = 0x2A08;
            static constexpr std::uintptr_t CrashingScrapingTime = 0x2A0C;
            static constexpr std::uintptr_t CrashingNotMovingTimer = 0x2A10;
            static constexpr std::uintptr_t LastDamageAlpha = 0x2A14;
            static constexpr std::uintptr_t OnJethroStateChangedDelegate = 0x2A18;
            static constexpr std::uintptr_t OpenPoseShapeIndices = 0x2A28;
            static constexpr std::uintptr_t ClosedPoseShapeIndices = 0x2A38;
            static constexpr std::uintptr_t AltimeterTraceResult = 0x2A48;
            static constexpr std::uintptr_t OnLandInputRejected = 0x2B40;
            static constexpr std::uintptr_t PrimaryWeaponMuzzleSocketFiringPattern = 0x2B58;
            static constexpr std::uintptr_t CurrentWeaponMuzzleSocketIndex = 0x2B6C;
            static constexpr std::uintptr_t FortJethroVehicleConfigs = 0x2B80;
            static constexpr std::uintptr_t JethroFlightModel = 0x2B90;
            static constexpr std::uintptr_t InputActionToggleAlternateWeapon = 0x2D28;
            static constexpr std::uintptr_t InputActionToggleBoostMode = 0x2D30;
            static constexpr std::uintptr_t InputActionFreeLookEnable = 0x2D38;
            static constexpr std::uintptr_t InputActionLand = 0x2D40;
            static constexpr std::uintptr_t InputActionLookGamepad = 0x2D48;
            static constexpr std::uintptr_t InputActionMoveAndLookMouse = 0x2D50;
            static constexpr std::uintptr_t InputActionShoot = 0x2D58;
            static constexpr std::uintptr_t InputActionBankLeft = 0x2D60;
            static constexpr std::uintptr_t InputActionBankRight = 0x2D68;
            static constexpr std::uintptr_t InputActionThrottleDown = 0x2D70;
            static constexpr std::uintptr_t InputActionThrottleUp = 0x2D78;
            static constexpr std::uintptr_t CursorPawnComponentClass = 0x2D80;
            static constexpr std::uintptr_t bShouldCursorAffectSteering = 0x2D88;
            static constexpr std::uintptr_t CursorSteeringDeadzone = 0x2D90;
            static constexpr std::uintptr_t CursorSteeringEasingFunc = 0x2DA0;
            static constexpr std::uintptr_t CursorSteeringBlendExp = 0x2DA4;
            static constexpr std::uintptr_t CursorSteeringSteps = 0x2DA8;
            static constexpr std::uintptr_t NumDebugCursorEllipseSides = 0x2DAC;
            static constexpr std::uintptr_t NumDebugCursorCircleSides = 0x2DB0;
            static constexpr std::uintptr_t DebugCursorCircleRadius = 0x2DB4;
            static constexpr std::uintptr_t DebugCursorLineThickness = 0x2DB8;
        };

        inline static constexpr std::array<PropertyInfo, 44> Properties{{
            {"JethroVehicleStatus", 0x296C, "StructProperty"},
            {"DamageAlphaToTriggerDamageFX", 0x2978, "FloatProperty"},
            {"NativeComp_DamageStateFX", 0x2980, "ObjectProperty"},
            {"NativeComp_DamageStateLastLife", 0x2988, "ObjectProperty"},
            {"NativeComp_DamageState", 0x2990, "ObjectProperty"},
            {"NativeSys_DamageStateFX", 0x2998, "ObjectProperty"},
            {"Native_DamageStateSound", 0x29A0, "ObjectProperty"},
            {"Native_DamageStateLastLifeSound", 0x29A8, "ObjectProperty"},
            {"CrashingDesiredUp", 0x29B0, "StructProperty"},
            {"OnClientVehicleDamaged", 0x29C8, "MulticastInlineDelegateProperty"},
            {"LocalJethroStateStartTime", 0x2A08, "FloatProperty"},
            {"CrashingScrapingTime", 0x2A0C, "FloatProperty"},
            {"CrashingNotMovingTimer", 0x2A10, "FloatProperty"},
            {"LastDamageAlpha", 0x2A14, "FloatProperty"},
            {"OnJethroStateChangedDelegate", 0x2A18, "MulticastInlineDelegateProperty"},
            {"OpenPoseShapeIndices", 0x2A28, "ArrayProperty"},
            {"ClosedPoseShapeIndices", 0x2A38, "ArrayProperty"},
            {"AltimeterTraceResult", 0x2A48, "StructProperty"},
            {"OnLandInputRejected", 0x2B40, "MulticastInlineDelegateProperty"},
            {"PrimaryWeaponMuzzleSocketFiringPattern", 0x2B58, "ArrayProperty"},
            {"CurrentWeaponMuzzleSocketIndex", 0x2B6C, "ByteProperty"},
            {"FortJethroVehicleConfigs", 0x2B80, "ObjectProperty"},
            {"JethroFlightModel", 0x2B90, "StructProperty"},
            {"InputActionToggleAlternateWeapon", 0x2D28, "ObjectProperty"},
            {"InputActionToggleBoostMode", 0x2D30, "ObjectProperty"},
            {"InputActionFreeLookEnable", 0x2D38, "ObjectProperty"},
            {"InputActionLand", 0x2D40, "ObjectProperty"},
            {"InputActionLookGamepad", 0x2D48, "ObjectProperty"},
            {"InputActionMoveAndLookMouse", 0x2D50, "ObjectProperty"},
            {"InputActionShoot", 0x2D58, "ObjectProperty"},
            {"InputActionBankLeft", 0x2D60, "ObjectProperty"},
            {"InputActionBankRight", 0x2D68, "ObjectProperty"},
            {"InputActionThrottleDown", 0x2D70, "ObjectProperty"},
            {"InputActionThrottleUp", 0x2D78, "ObjectProperty"},
            {"CursorPawnComponentClass", 0x2D80, "ClassProperty"},
            {"bShouldCursorAffectSteering", 0x2D88, "BoolProperty"},
            {"CursorSteeringDeadzone", 0x2D90, "StructProperty"},
            {"CursorSteeringEasingFunc", 0x2DA0, "ByteProperty"},
            {"CursorSteeringBlendExp", 0x2DA4, "FloatProperty"},
            {"CursorSteeringSteps", 0x2DA8, "IntProperty"},
            {"NumDebugCursorEllipseSides", 0x2DAC, "IntProperty"},
            {"NumDebugCursorCircleSides", 0x2DB0, "IntProperty"},
            {"DebugCursorCircleRadius", 0x2DB4, "FloatProperty"},
            {"DebugCursorLineThickness", 0x2DB8, "FloatProperty"},
        }};
    };

    struct FortJethroVehicleConfigs
    {
        static constexpr std::string_view Name = "FortJethroVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFerretVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t NumRebootsDefault = 0xC30;
            static constexpr std::uintptr_t RebootDuration = 0xC38;
            static constexpr std::uintptr_t RebootDelay = 0xC60;
            static constexpr std::uintptr_t MaxCrashingTime = 0xC88;
            static constexpr std::uintptr_t MaxCrashingScrapingTime = 0xC8C;
            static constexpr std::uintptr_t MaxCrashingTimeSpentNotMoving = 0xC90;
            static constexpr std::uintptr_t SpeedThresholdForCrashed = 0xC94;
            static constexpr std::uintptr_t bOrientDuringCrash = 0xC98;
            static constexpr std::uintptr_t CrashingDesiredUp = 0xCA0;
            static constexpr std::uintptr_t CrashingDesiredUpLerpFactor = 0xCB8;
            static constexpr std::uintptr_t UprightSpringForce = 0xCBC;
            static constexpr std::uintptr_t StartupLiftForceCurve = 0xCC8;
            static constexpr std::uintptr_t StartupLiftTime = 0xD10;
            static constexpr std::uintptr_t LandingLiftForceCurve = 0xD18;
            static constexpr std::uintptr_t LandingLiftTime = 0xD60;
            static constexpr std::uintptr_t DesiredLandingSpeedKmh = 0xD68;
            static constexpr std::uintptr_t LandingSpeedCorrectionMagnitude = 0xD90;
            static constexpr std::uintptr_t bAllowVTOL = 0xDB8;
            static constexpr std::uintptr_t MinDesiredFlightSpeedKmh = 0xDBC;
            static constexpr std::uintptr_t AutoAccelerateOutOfRangeBySpeedKmh = 0xDC0;
            static constexpr std::uintptr_t AutoAccelerateForwardAlpha = 0xDC4;
            static constexpr std::uintptr_t MiddleMuzzleSocketName = 0xDC8;
            static constexpr std::uintptr_t LiftoffHoverHeight = 0xDCC;
            static constexpr std::uintptr_t HoverBrakeForceMultiplier = 0xDD0;
            static constexpr std::uintptr_t HoverTorqueBrakeMultiplier = 0xDD4;
            static constexpr std::uintptr_t FlightSlowdownBrakeForce = 0xDD8;
            static constexpr std::uintptr_t HoverStiffness = 0xDDC;
            static constexpr std::uintptr_t HoverDamping = 0xDE0;
            static constexpr std::uintptr_t HoverMaxAccel = 0xDE4;
            static constexpr std::uintptr_t HoverYawStiffness = 0xDE8;
            static constexpr std::uintptr_t HoverYawDamping = 0xDEC;
            static constexpr std::uintptr_t HoverYawMaxAccel = 0xDF0;
            static constexpr std::uintptr_t FlightSlowdownExitLinearVelocity = 0xDF4;
            static constexpr std::uintptr_t FlightSlowdownExitAngularVelocity = 0xDF8;
            static constexpr std::uintptr_t ForceCurveLandingRotationSpeed = 0xDFC;
            static constexpr std::uintptr_t ForceCurveLandingTorqueGain = 0xE00;
            static constexpr std::uintptr_t ConstantSpeedVTOLLandingForce = 0xE04;
            static constexpr std::uintptr_t ConstantSpeedLandingTopSpeed = 0xE08;
            static constexpr std::uintptr_t ConstantSpeedLandingBrakeForce = 0xE0C;
            static constexpr std::uintptr_t HeightToTriggerLandingCurve = 0xE10;
            static constexpr std::uintptr_t LandingToFlightDelay = 0xE14;
            static constexpr std::uintptr_t FreeLookRecenteredToleranceRadians = 0xE18;
            static constexpr std::uintptr_t MinForwardInputToStart = 0xE1C;
            static constexpr std::uintptr_t MinForwardInputToStartTouch = 0xE20;
            static constexpr std::uintptr_t bShouldAutoLiftoffWhenDriverEnters = 0xE24;
            static constexpr std::uintptr_t AllowedDamageSourceTagsToDriver = 0xE28;
            static constexpr std::uintptr_t bAllowFlipWhileOnVehicle = 0xE48;
            static constexpr std::uintptr_t MinLinearVelocityToAllowSleep = 0xE4C;
            static constexpr std::uintptr_t MinAngularVelocityToAllowSleep = 0xE50;
            static constexpr std::uintptr_t InitialJethroState = 0xE54;
            static constexpr std::uintptr_t bEnableStuckLogic = 0xE55;
            static constexpr std::uintptr_t StuckMaxForwardSpeedToScaleHeadingControl = 0xE58;
            static constexpr std::uintptr_t StuckMinForwardSpeedRunningVarianceSq = 0xE5C;
            static constexpr std::uintptr_t StuckRunningAverageWindowSize = 0xE60;
            static constexpr std::uintptr_t StuckTimerThresholdTimeSeconds = 0xE64;
            static constexpr std::uintptr_t StuckHeadingControlMagnifier = 0xE68;
            static constexpr std::uintptr_t StuckMaxForwardAlpha = 0xE6C;
        };

        inline static constexpr std::array<PropertyInfo, 57> Properties{{
            {"NumRebootsDefault", 0xC30, "IntProperty"},
            {"RebootDuration", 0xC38, "StructProperty"},
            {"RebootDelay", 0xC60, "StructProperty"},
            {"MaxCrashingTime", 0xC88, "FloatProperty"},
            {"MaxCrashingScrapingTime", 0xC8C, "FloatProperty"},
            {"MaxCrashingTimeSpentNotMoving", 0xC90, "FloatProperty"},
            {"SpeedThresholdForCrashed", 0xC94, "FloatProperty"},
            {"bOrientDuringCrash", 0xC98, "BoolProperty"},
            {"CrashingDesiredUp", 0xCA0, "StructProperty"},
            {"CrashingDesiredUpLerpFactor", 0xCB8, "FloatProperty"},
            {"UprightSpringForce", 0xCBC, "StructProperty"},
            {"StartupLiftForceCurve", 0xCC8, "StructProperty"},
            {"StartupLiftTime", 0xD10, "FloatProperty"},
            {"LandingLiftForceCurve", 0xD18, "StructProperty"},
            {"LandingLiftTime", 0xD60, "FloatProperty"},
            {"DesiredLandingSpeedKmh", 0xD68, "StructProperty"},
            {"LandingSpeedCorrectionMagnitude", 0xD90, "StructProperty"},
            {"bAllowVTOL", 0xDB8, "BoolProperty"},
            {"MinDesiredFlightSpeedKmh", 0xDBC, "FloatProperty"},
            {"AutoAccelerateOutOfRangeBySpeedKmh", 0xDC0, "FloatProperty"},
            {"AutoAccelerateForwardAlpha", 0xDC4, "FloatProperty"},
            {"MiddleMuzzleSocketName", 0xDC8, "NameProperty"},
            {"LiftoffHoverHeight", 0xDCC, "FloatProperty"},
            {"HoverBrakeForceMultiplier", 0xDD0, "FloatProperty"},
            {"HoverTorqueBrakeMultiplier", 0xDD4, "FloatProperty"},
            {"FlightSlowdownBrakeForce", 0xDD8, "FloatProperty"},
            {"HoverStiffness", 0xDDC, "FloatProperty"},
            {"HoverDamping", 0xDE0, "FloatProperty"},
            {"HoverMaxAccel", 0xDE4, "FloatProperty"},
            {"HoverYawStiffness", 0xDE8, "FloatProperty"},
            {"HoverYawDamping", 0xDEC, "FloatProperty"},
            {"HoverYawMaxAccel", 0xDF0, "FloatProperty"},
            {"FlightSlowdownExitLinearVelocity", 0xDF4, "FloatProperty"},
            {"FlightSlowdownExitAngularVelocity", 0xDF8, "FloatProperty"},
            {"ForceCurveLandingRotationSpeed", 0xDFC, "FloatProperty"},
            {"ForceCurveLandingTorqueGain", 0xE00, "FloatProperty"},
            {"ConstantSpeedVTOLLandingForce", 0xE04, "FloatProperty"},
            {"ConstantSpeedLandingTopSpeed", 0xE08, "FloatProperty"},
            {"ConstantSpeedLandingBrakeForce", 0xE0C, "FloatProperty"},
            {"HeightToTriggerLandingCurve", 0xE10, "FloatProperty"},
            {"LandingToFlightDelay", 0xE14, "FloatProperty"},
            {"FreeLookRecenteredToleranceRadians", 0xE18, "FloatProperty"},
            {"MinForwardInputToStart", 0xE1C, "FloatProperty"},
            {"MinForwardInputToStartTouch", 0xE20, "FloatProperty"},
            {"bShouldAutoLiftoffWhenDriverEnters", 0xE24, "BoolProperty"},
            {"AllowedDamageSourceTagsToDriver", 0xE28, "StructProperty"},
            {"bAllowFlipWhileOnVehicle", 0xE48, "BoolProperty"},
            {"MinLinearVelocityToAllowSleep", 0xE4C, "FloatProperty"},
            {"MinAngularVelocityToAllowSleep", 0xE50, "FloatProperty"},
            {"InitialJethroState", 0xE54, "EnumProperty"},
            {"bEnableStuckLogic", 0xE55, "BoolProperty"},
            {"StuckMaxForwardSpeedToScaleHeadingControl", 0xE58, "FloatProperty"},
            {"StuckMinForwardSpeedRunningVarianceSq", 0xE5C, "FloatProperty"},
            {"StuckRunningAverageWindowSize", 0xE60, "FloatProperty"},
            {"StuckTimerThresholdTimeSeconds", 0xE64, "FloatProperty"},
            {"StuckHeadingControlMagnifier", 0xE68, "FloatProperty"},
            {"StuckMaxForwardAlpha", 0xE6C, "FloatProperty"},
        }};
    };

}
