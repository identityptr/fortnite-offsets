#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HoagieRuntime
{
    struct FortCameraMode_Hoagie
    {
        static constexpr std::string_view Name = "FortCameraMode_Hoagie";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRollMultiplier = 0x20A0;
            static constexpr std::uintptr_t CurrentPitchMultiplier = 0x20A4;
            static constexpr std::uintptr_t LastOrigin = 0x20A8;
            static constexpr std::uintptr_t CurrentInterpSpeed = 0x20C0;
            static constexpr std::uintptr_t BoostInterpSpeed = 0x20D8;
            static constexpr std::uintptr_t BaseRollMultiplier = 0x20F0;
            static constexpr std::uintptr_t BasePitchMultiplier = 0x20F4;
            static constexpr std::uintptr_t BoostRollMultiplier = 0x20F8;
            static constexpr std::uintptr_t BoostPitchMultiplier = 0x20FC;
            static constexpr std::uintptr_t BoostRollDampFactor = 0x2100;
            static constexpr std::uintptr_t BoostRollRecoveryDampFactor = 0x2104;
            static constexpr std::uintptr_t BoostRecoveryInterpSpeed = 0x2108;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CurrentRollMultiplier", 0x20A0, "FloatProperty"},
            {"CurrentPitchMultiplier", 0x20A4, "FloatProperty"},
            {"LastOrigin", 0x20A8, "StructProperty"},
            {"CurrentInterpSpeed", 0x20C0, "StructProperty"},
            {"BoostInterpSpeed", 0x20D8, "StructProperty"},
            {"BaseRollMultiplier", 0x20F0, "FloatProperty"},
            {"BasePitchMultiplier", 0x20F4, "FloatProperty"},
            {"BoostRollMultiplier", 0x20F8, "FloatProperty"},
            {"BoostPitchMultiplier", 0x20FC, "FloatProperty"},
            {"BoostRollDampFactor", 0x2100, "FloatProperty"},
            {"BoostRollRecoveryDampFactor", 0x2104, "FloatProperty"},
            {"BoostRecoveryInterpSpeed", 0x2108, "FloatProperty"},
        }};
    };

    struct FortHoagieAudioController
    {
        static constexpr std::string_view Name = "FortHoagieAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bHighQualityOverride = 0x278;
            static constexpr std::uintptr_t bLocalPlayerInHoagie = 0x279;
            static constexpr std::uintptr_t bCriticalDamageNative = 0x27A;
            static constexpr std::uintptr_t bRotorHitNative = 0x27B;
            static constexpr std::uintptr_t bIsRotorWashActiveNative = 0x27C;
            static constexpr std::uintptr_t RotorWashRelativeZOffset = 0x280;
            static constexpr std::uintptr_t Vehicle = 0x284;
            static constexpr std::uintptr_t EngineAudio = 0x290;
            static constexpr std::uintptr_t RotorAudio = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bHighQualityOverride", 0x278, "BoolProperty"},
            {"bLocalPlayerInHoagie", 0x279, "BoolProperty"},
            {"bCriticalDamageNative", 0x27A, "BoolProperty"},
            {"bRotorHitNative", 0x27B, "BoolProperty"},
            {"bIsRotorWashActiveNative", 0x27C, "BoolProperty"},
            {"RotorWashRelativeZOffset", 0x280, "FloatProperty"},
            {"Vehicle", 0x284, "WeakObjectProperty"},
            {"EngineAudio", 0x290, "ObjectProperty"},
            {"RotorAudio", 0x298, "ObjectProperty"},
        }};
    };

    struct FortHoagieDriverAnimInstance
    {
        static constexpr std::string_view Name = "FortHoagieDriverAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleOccupantAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftHandIKPositionOffset = 0x740;
            static constexpr std::uintptr_t RightHandIKPositionOffset = 0x758;
            static constexpr std::uintptr_t LeftHandIKRotationOffset = 0x770;
            static constexpr std::uintptr_t RightHandIKRotationOffset = 0x788;
            static constexpr std::uintptr_t BoostCardinalDirection = 0x7A0;
            static constexpr std::uintptr_t NormalizedAcceleration = 0x7A4;
            static constexpr std::uintptr_t VehicleRoll = 0x7A8;
            static constexpr std::uintptr_t VehicleYaw = 0x7AC;
            static constexpr std::uintptr_t ForwardSpeed = 0x7B0;
            static constexpr std::uintptr_t bIsMovingAnyDirection = 0x7B4;
            static constexpr std::uintptr_t bIsMovingFastAnyDirection = 0x7B5;
            static constexpr std::uintptr_t bShouldReverse = 0x7B6;
            static constexpr std::uintptr_t bShouldGoBackToIdle = 0x7B7;
            static constexpr std::uintptr_t bTransition_Default_ReverseStart = 0x7B8;
            static constexpr std::uintptr_t bTransition_BoostLoop_Reverse = 0x7B9;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"LeftHandIKPositionOffset", 0x740, "StructProperty"},
            {"RightHandIKPositionOffset", 0x758, "StructProperty"},
            {"LeftHandIKRotationOffset", 0x770, "StructProperty"},
            {"RightHandIKRotationOffset", 0x788, "StructProperty"},
            {"BoostCardinalDirection", 0x7A0, "EnumProperty"},
            {"NormalizedAcceleration", 0x7A4, "FloatProperty"},
            {"VehicleRoll", 0x7A8, "FloatProperty"},
            {"VehicleYaw", 0x7AC, "FloatProperty"},
            {"ForwardSpeed", 0x7B0, "FloatProperty"},
            {"bIsMovingAnyDirection", 0x7B4, "BoolProperty"},
            {"bIsMovingFastAnyDirection", 0x7B5, "BoolProperty"},
            {"bShouldReverse", 0x7B6, "BoolProperty"},
            {"bShouldGoBackToIdle", 0x7B7, "BoolProperty"},
            {"bTransition_Default_ReverseStart", 0x7B8, "BoolProperty"},
            {"bTransition_BoostLoop_Reverse", 0x7B9, "BoolProperty"},
        }};
    };

    struct FortHoagieVehicle
    {
        static constexpr std::string_view Name = "FortHoagieVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t PassengerCollision = 0x2090;
            static constexpr std::uintptr_t CameraBoomDistance = 0x2094;
            static constexpr std::uintptr_t CameraBoomHeight = 0x2098;
            static constexpr std::uintptr_t OnBoostStateChanged = 0x20A0;
            static constexpr std::uintptr_t OnAltimeterTraceUpdated = 0x20B0;
            static constexpr std::uintptr_t OnCrashingStateEntered = 0x20C0;
            static constexpr std::uintptr_t bEngineAudioDisabled = 0x20D0;
            static constexpr std::uintptr_t LiftRumbleTimer = 0x20D4;
            static constexpr std::uintptr_t bLiftUp = 0x20D8;
            static constexpr std::uintptr_t LiftForceFeedbackHandle = 0x20E0;
            static constexpr std::uintptr_t PassiveForceFeedbackHandle = 0x20E8;
            static constexpr std::uintptr_t Theta_Native = 0x20F0;
            static constexpr std::uintptr_t WashAltAlpha_Native = 0x20F4;
            static constexpr std::uintptr_t RotorWashTickTimer = 0x20F8;
            static constexpr std::uintptr_t RotorTraceArray = 0x2100;
            static constexpr std::uintptr_t RotorWashObjectsTypes = 0x2110;
            static constexpr std::uintptr_t CachedBoostComponent = 0x2120;
            static constexpr std::uintptr_t FortHoagieVehicleConfigs = 0x2128;
            static constexpr std::uintptr_t RumbleIntensity = 0x2130;
            static constexpr std::uintptr_t FlightModel = 0x2138;
            static constexpr std::uintptr_t bClearPitchInput = 0x2318;
            static constexpr std::uintptr_t BoostTimeLeft = 0x231C;
            static constexpr std::uintptr_t BoostBrakingTimeLeft = 0x2320;
            static constexpr std::uintptr_t BoostCooldown = 0x2324;
            static constexpr std::uintptr_t ShutdownTimer = 0x2328;
            static constexpr std::uintptr_t FoliageDestructionTimer = 0x232C;
            static constexpr std::uintptr_t CrashingScrapingTimer = 0x2330;
            static constexpr std::uintptr_t CrashingNotMovingTimer = 0x2334;
            static constexpr std::uintptr_t bCanSleep = 0x2338;
            static constexpr std::uintptr_t bHasAppliedCrashDamage = 0x2339;
            static constexpr std::uintptr_t bOrientedForLanding = 0x233A;
            static constexpr std::uintptr_t bForceNegativeLift = 0x233B;
            static constexpr std::uintptr_t AltimeterTraceTimer = 0x233C;
            static constexpr std::uintptr_t RotorDamageTimer = 0x2340;
            static constexpr std::uintptr_t LastRotorImpulseTime = 0x2344;
            static constexpr std::uintptr_t CriticalExplodeTimer = 0x2348;
            static constexpr std::uintptr_t bCriticalExplosionPlayed = 0x234C;
            static constexpr std::uintptr_t TimeWhileCritical = 0x2350;
            static constexpr std::uintptr_t TimeWhileLanding = 0x2354;
            static constexpr std::uintptr_t LiftFromOverrideButton = 0x2358;
            static constexpr std::uintptr_t BoostDirection = 0x2360;
            static constexpr std::uintptr_t LastRotorSweepDirection = 0x2378;
            static constexpr std::uintptr_t AltimeterTraceResult = 0x2390;
            static constexpr std::uintptr_t HoagieStateRep = 0x2488;
            static constexpr std::uintptr_t CurrentHoagieState = 0x248C;
            static constexpr std::uintptr_t CurrentRotorSpeed = 0x2490;
            static constexpr std::uintptr_t CurrentRotorAngle = 0x2494;
            static constexpr std::uintptr_t RotorImpactTraceAngle = 0x2498;
            static constexpr std::uintptr_t LiftInputs = 0x249C;
            static constexpr std::uintptr_t RotorHits = 0x24A8;
            static constexpr std::uintptr_t CachedSeatCollision = 0x24B8;
            static constexpr std::uintptr_t RotorHitLinearImpulse = 0x24C8;
            static constexpr std::uintptr_t RotorHitAngularImpulse = 0x24E0;
            static constexpr std::uintptr_t HoagieIdleFX_Native = 0x24F8;
            static constexpr std::uintptr_t DamageFX_Native = 0x2500;
            static constexpr std::uintptr_t RotorWashFX_Native = 0x2508;
            static constexpr std::uintptr_t HoagieAnimBP_Native = 0x2510;
            static constexpr std::uintptr_t RotorWashComponent = 0x2518;
            static constexpr std::uintptr_t AltimeterTraceSocketName = 0x2520;
            static constexpr std::uintptr_t RotorDamageTraceSocketName = 0x2524;
            static constexpr std::uintptr_t MainRotorCritSocketName = 0x2528;
            static constexpr std::uintptr_t TailRotorCritSocketName = 0x252C;
            static constexpr std::uintptr_t SeatTransition_ToDriver = 0x2530;
            static constexpr std::uintptr_t SeatTransition_ToPassenger = 0x2538;
            static constexpr std::uintptr_t RotorTraceProfile = 0x2540;
            static constexpr std::uintptr_t FoliageOverlapsBoxTag = 0x2544;
            static constexpr std::uintptr_t ControlState = 0x2548;
            static constexpr std::uintptr_t CurrentViewDistanceScale = 0x2578;
            static constexpr std::uintptr_t CurrentHLODDistanceOverrideScale = 0x257C;
            static constexpr std::uintptr_t CurrentHLODMaxDrawDistanceScale = 0x2580;
            static constexpr std::uintptr_t CachedDeathEffectInfo = 0x2590;
        };

        inline static constexpr std::array<PropertyInfo, 71> Properties{{
            {"PassengerCollision", 0x2090, "NameProperty"},
            {"CameraBoomDistance", 0x2094, "FloatProperty"},
            {"CameraBoomHeight", 0x2098, "FloatProperty"},
            {"OnBoostStateChanged", 0x20A0, "MulticastInlineDelegateProperty"},
            {"OnAltimeterTraceUpdated", 0x20B0, "MulticastInlineDelegateProperty"},
            {"OnCrashingStateEntered", 0x20C0, "MulticastInlineDelegateProperty"},
            {"bEngineAudioDisabled", 0x20D0, "BoolProperty"},
            {"LiftRumbleTimer", 0x20D4, "FloatProperty"},
            {"bLiftUp", 0x20D8, "BoolProperty"},
            {"LiftForceFeedbackHandle", 0x20E0, "UInt64Property"},
            {"PassiveForceFeedbackHandle", 0x20E8, "UInt64Property"},
            {"Theta_Native", 0x20F0, "FloatProperty"},
            {"WashAltAlpha_Native", 0x20F4, "FloatProperty"},
            {"RotorWashTickTimer", 0x20F8, "FloatProperty"},
            {"RotorTraceArray", 0x2100, "ArrayProperty"},
            {"RotorWashObjectsTypes", 0x2110, "ArrayProperty"},
            {"CachedBoostComponent", 0x2120, "ObjectProperty"},
            {"FortHoagieVehicleConfigs", 0x2128, "ObjectProperty"},
            {"RumbleIntensity", 0x2130, "ObjectProperty"},
            {"FlightModel", 0x2138, "StructProperty"},
            {"bClearPitchInput", 0x2318, "BoolProperty"},
            {"BoostTimeLeft", 0x231C, "FloatProperty"},
            {"BoostBrakingTimeLeft", 0x2320, "FloatProperty"},
            {"BoostCooldown", 0x2324, "FloatProperty"},
            {"ShutdownTimer", 0x2328, "FloatProperty"},
            {"FoliageDestructionTimer", 0x232C, "FloatProperty"},
            {"CrashingScrapingTimer", 0x2330, "FloatProperty"},
            {"CrashingNotMovingTimer", 0x2334, "FloatProperty"},
            {"bCanSleep", 0x2338, "BoolProperty"},
            {"bHasAppliedCrashDamage", 0x2339, "BoolProperty"},
            {"bOrientedForLanding", 0x233A, "BoolProperty"},
            {"bForceNegativeLift", 0x233B, "BoolProperty"},
            {"AltimeterTraceTimer", 0x233C, "FloatProperty"},
            {"RotorDamageTimer", 0x2340, "FloatProperty"},
            {"LastRotorImpulseTime", 0x2344, "FloatProperty"},
            {"CriticalExplodeTimer", 0x2348, "FloatProperty"},
            {"bCriticalExplosionPlayed", 0x234C, "BoolProperty"},
            {"TimeWhileCritical", 0x2350, "FloatProperty"},
            {"TimeWhileLanding", 0x2354, "FloatProperty"},
            {"LiftFromOverrideButton", 0x2358, "FloatProperty"},
            {"BoostDirection", 0x2360, "StructProperty"},
            {"LastRotorSweepDirection", 0x2378, "StructProperty"},
            {"AltimeterTraceResult", 0x2390, "StructProperty"},
            {"HoagieStateRep", 0x2488, "IntProperty"},
            {"CurrentHoagieState", 0x248C, "EnumProperty"},
            {"CurrentRotorSpeed", 0x2490, "FloatProperty"},
            {"CurrentRotorAngle", 0x2494, "FloatProperty"},
            {"RotorImpactTraceAngle", 0x2498, "FloatProperty"},
            {"LiftInputs", 0x249C, "StructProperty"},
            {"RotorHits", 0x24A8, "ArrayProperty"},
            {"CachedSeatCollision", 0x24B8, "ArrayProperty"},
            {"RotorHitLinearImpulse", 0x24C8, "StructProperty"},
            {"RotorHitAngularImpulse", 0x24E0, "StructProperty"},
            {"HoagieIdleFX_Native", 0x24F8, "ObjectProperty"},
            {"DamageFX_Native", 0x2500, "ObjectProperty"},
            {"RotorWashFX_Native", 0x2508, "ObjectProperty"},
            {"HoagieAnimBP_Native", 0x2510, "ObjectProperty"},
            {"RotorWashComponent", 0x2518, "ObjectProperty"},
            {"AltimeterTraceSocketName", 0x2520, "NameProperty"},
            {"RotorDamageTraceSocketName", 0x2524, "NameProperty"},
            {"MainRotorCritSocketName", 0x2528, "NameProperty"},
            {"TailRotorCritSocketName", 0x252C, "NameProperty"},
            {"SeatTransition_ToDriver", 0x2530, "ObjectProperty"},
            {"SeatTransition_ToPassenger", 0x2538, "ObjectProperty"},
            {"RotorTraceProfile", 0x2540, "NameProperty"},
            {"FoliageOverlapsBoxTag", 0x2544, "NameProperty"},
            {"ControlState", 0x2548, "StructProperty"},
            {"CurrentViewDistanceScale", 0x2578, "FloatProperty"},
            {"CurrentHLODDistanceOverrideScale", 0x257C, "FloatProperty"},
            {"CurrentHLODMaxDrawDistanceScale", 0x2580, "FloatProperty"},
            {"CachedDeathEffectInfo", 0x2590, "StructProperty"},
        }};
    };

    struct FortHoagieVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortHoagieVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t EngineRotation = 0x640;
            static constexpr std::uintptr_t MainRotorRotation = 0x658;
            static constexpr std::uintptr_t TailRotorRotaton = 0x670;
            static constexpr std::uintptr_t BoosterFanRotation = 0x688;
            static constexpr std::uintptr_t BoostCardinalDirection = 0x6A0;
            static constexpr std::uintptr_t EngineRotationInterpSpeed = 0x6BC;
            static constexpr std::uintptr_t EngineRotationDuringBoostInterpSpeed = 0x6C0;
            static constexpr std::uintptr_t EngineFlipSpeedThreshold = 0x6C4;
            static constexpr std::uintptr_t BoostDirectionDeadzone = 0x6C8;
            static constexpr std::uintptr_t EngineFlipDeadzone = 0x6CC;
            static constexpr std::uintptr_t DriverRoll = 0x6D0;
            static constexpr std::uintptr_t DriverYaw = 0x6D4;
            static constexpr std::uintptr_t VerticalSpeed = 0x6D8;
            static constexpr std::uintptr_t FwdSpeed = 0x6DC;
            static constexpr std::uintptr_t LocalBoostDirection = 0x6E0;
            static constexpr std::uintptr_t YawBlendSpaceInput = 0x6E4;
            static constexpr std::uintptr_t NormalizedAcceleration = 0x6E8;
            static constexpr std::uintptr_t bShouldHideBlades = 0x6ED;
            static constexpr std::uintptr_t bIsBoostOnCD = 0x6EE;
            static constexpr std::uintptr_t bIsBoostReady = 0x6EF;
            static constexpr std::uintptr_t bIsMovingForward = 0x6F0;
            static constexpr std::uintptr_t bIsReversing = 0x6F1;
            static constexpr std::uintptr_t bIsMovingAnyDirection = 0x6F2;
            static constexpr std::uintptr_t bIsBoosting = 0x6F3;
            static constexpr std::uintptr_t bShouldReverse = 0x6F4;
            static constexpr std::uintptr_t bShouldGoBackToIdle = 0x6F5;
            static constexpr std::uintptr_t bShouldApplyBoostAdditive = 0x6F6;
            static constexpr std::uintptr_t bIsEngineShuttingOff = 0x6F7;
            static constexpr std::uintptr_t bTransition_Default_ReverseStart = 0x6F8;
            static constexpr std::uintptr_t bTransition_BoostLoop_Reverse = 0x6F9;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"EngineRotation", 0x640, "StructProperty"},
            {"MainRotorRotation", 0x658, "StructProperty"},
            {"TailRotorRotaton", 0x670, "StructProperty"},
            {"BoosterFanRotation", 0x688, "StructProperty"},
            {"BoostCardinalDirection", 0x6A0, "EnumProperty"},
            {"EngineRotationInterpSpeed", 0x6BC, "FloatProperty"},
            {"EngineRotationDuringBoostInterpSpeed", 0x6C0, "FloatProperty"},
            {"EngineFlipSpeedThreshold", 0x6C4, "FloatProperty"},
            {"BoostDirectionDeadzone", 0x6C8, "FloatProperty"},
            {"EngineFlipDeadzone", 0x6CC, "FloatProperty"},
            {"DriverRoll", 0x6D0, "FloatProperty"},
            {"DriverYaw", 0x6D4, "FloatProperty"},
            {"VerticalSpeed", 0x6D8, "FloatProperty"},
            {"FwdSpeed", 0x6DC, "FloatProperty"},
            {"LocalBoostDirection", 0x6E0, "FloatProperty"},
            {"YawBlendSpaceInput", 0x6E4, "FloatProperty"},
            {"NormalizedAcceleration", 0x6E8, "FloatProperty"},
            {"bShouldHideBlades", 0x6ED, "BoolProperty"},
            {"bIsBoostOnCD", 0x6EE, "BoolProperty"},
            {"bIsBoostReady", 0x6EF, "BoolProperty"},
            {"bIsMovingForward", 0x6F0, "BoolProperty"},
            {"bIsReversing", 0x6F1, "BoolProperty"},
            {"bIsMovingAnyDirection", 0x6F2, "BoolProperty"},
            {"bIsBoosting", 0x6F3, "BoolProperty"},
            {"bShouldReverse", 0x6F4, "BoolProperty"},
            {"bShouldGoBackToIdle", 0x6F5, "BoolProperty"},
            {"bShouldApplyBoostAdditive", 0x6F6, "BoolProperty"},
            {"bIsEngineShuttingOff", 0x6F7, "BoolProperty"},
            {"bTransition_Default_ReverseStart", 0x6F8, "BoolProperty"},
            {"bTransition_BoostLoop_Reverse", 0x6F9, "BoolProperty"},
        }};
    };

    struct FortHoagieVehicleConfigs
    {
        static constexpr std::string_view Name = "FortHoagieVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t StrafeForce = 0x990;
            static constexpr std::uintptr_t StrafeForceMin = 0x994;
            static constexpr std::uintptr_t MaxStrafeSpeedKmh = 0x998;
            static constexpr std::uintptr_t StrafeTooFastBrakeForce = 0x99C;
            static constexpr std::uintptr_t LandedBrakeForce = 0x9A0;
            static constexpr std::uintptr_t LiftForce = 0x9A4;
            static constexpr std::uintptr_t MaxLiftSpeedKmh = 0x9A8;
            static constexpr std::uintptr_t LiftTooFastBrakeForce = 0x9AC;
            static constexpr std::uintptr_t LateralDragCoefficient = 0x9B0;
            static constexpr std::uintptr_t LateralDragCoefficient2 = 0x9B4;
            static constexpr std::uintptr_t LiftDragCoefficient = 0x9B8;
            static constexpr std::uintptr_t LiftDragCoefficient2 = 0x9BC;
            static constexpr std::uintptr_t MaxPitchForCameraYaw = 0x9C0;
            static constexpr std::uintptr_t MaxCameraYawAngle = 0x9C4;
            static constexpr std::uintptr_t CameraYawStiff = 0x9C8;
            static constexpr std::uintptr_t CameraYawDamp = 0x9CC;
            static constexpr std::uintptr_t CameraYawStrength = 0x9D0;
            static constexpr std::uintptr_t UprightStiff = 0x9D4;
            static constexpr std::uintptr_t UprightDamp = 0x9D8;
            static constexpr std::uintptr_t bUseVehiclePivotForCameraPitch = 0x9DC;
            static constexpr std::uintptr_t ThrustTorqueAnglePercent = 0x9E0;
            static constexpr std::uintptr_t BoostThrustTorqueAnglePercent = 0x9E4;
            static constexpr std::uintptr_t ThrustTorqueStiff = 0x9E8;
            static constexpr std::uintptr_t ThrustTorqueDamp = 0x9EC;
            static constexpr std::uintptr_t ThrustTorqueMaxAccel = 0x9F0;
            static constexpr std::uintptr_t ThrustTorque = 0x9F4;
            static constexpr std::uintptr_t YawTorque = 0x9F8;
            static constexpr std::uintptr_t YawTorqueDampingSpeed = 0x9FC;
            static constexpr std::uintptr_t BoostForce = 0xA00;
            static constexpr std::uintptr_t BoostMaxSpeedKmh = 0xA04;
            static constexpr std::uintptr_t BoostDuration = 0xA08;
            static constexpr std::uintptr_t BoostCooldown = 0xA0C;
            static constexpr std::uintptr_t BoostTorqueStiff = 0xA10;
            static constexpr std::uintptr_t BoostTorqueDamp = 0xA14;
            static constexpr std::uintptr_t AfterBoostBrakingForce = 0xA18;
            static constexpr std::uintptr_t AfterBoostBrakingDuration = 0xA1C;
            static constexpr std::uintptr_t AfterBoostBrakingMinSpeed = 0xA20;
            static constexpr std::uintptr_t PitchAngleRequiredForFullThrust = 0xA24;
            static constexpr std::uintptr_t DistanceToGroundForLanding = 0xA28;
            static constexpr std::uintptr_t StartupDelay = 0xA2C;
            static constexpr std::uintptr_t LandingSequenceDelay = 0xA30;
            static constexpr std::uintptr_t LandingSequenceDelayWithPassengers = 0xA34;
            static constexpr std::uintptr_t RotorsRadius = 0xA38;
            static constexpr std::uintptr_t RotorBoxHalfExtantX = 0xA3C;
            static constexpr std::uintptr_t RotorBoxHalfExtantY = 0xA40;
            static constexpr std::uintptr_t RotorsRadiusInner = 0xA44;
            static constexpr std::uintptr_t NoDriverBrakeForce = 0xA48;
            static constexpr std::uintptr_t TimeBetweenRotorDamageTicks = 0xA4C;
            static constexpr std::uintptr_t AutoLandingForce = 0xA50;
            static constexpr std::uintptr_t RotorDamageBoxSweepLength = 0xA54;
            static constexpr std::uintptr_t CriticalStateLiftForce = 0xA58;
            static constexpr std::uintptr_t IdleRotationMultiplier = 0xA5C;
            static constexpr std::uintptr_t LiftPitchDegrees = 0xA60;
            static constexpr std::uintptr_t MinAltitudeForIdleNoise = 0xA64;
            static constexpr std::uintptr_t DefaultLinearDamp = 0xA68;
            static constexpr std::uintptr_t DefaultAngularDamp = 0xA6C;
            static constexpr std::uintptr_t LandingLinearDamp = 0xA70;
            static constexpr std::uintptr_t LandingAngularDamp = 0xA74;
            static constexpr std::uintptr_t LandingLiftAlpha = 0xA78;
            static constexpr std::uintptr_t CriticalStateThrustMultiplier = 0xA7C;
            static constexpr std::uintptr_t BodyUpDotThresholdForLanding = 0xA80;
            static constexpr std::uintptr_t CriticalHealthThreshold = 0xA84;
            static constexpr std::uintptr_t DamagePerImpulseWhileCritical = 0xA88;
            static constexpr std::uintptr_t RotorImpulseLinear = 0xA8C;
            static constexpr std::uintptr_t RotorImpulseAngular = 0xA90;
            static constexpr std::uintptr_t RotorImpulseCooldown = 0xA94;
            static constexpr std::uintptr_t StartupLift = 0xA98;
            static constexpr std::uintptr_t StartupLiftTime = 0xA9C;
            static constexpr std::uintptr_t MaxAltitude = 0xAA0;
            static constexpr std::uintptr_t AltitudeForSpinning = 0xAA4;
            static constexpr std::uintptr_t RotorMaxSpeed = 0xAA8;
            static constexpr std::uintptr_t RotorAccel = 0xAAC;
            static constexpr std::uintptr_t RotorDecel = 0xAB0;
            static constexpr std::uintptr_t ExplodeRotorDecel = 0xAB4;
            static constexpr std::uintptr_t MinRotorSpeedForSkippingStartup = 0xAB8;
            static constexpr std::uintptr_t RotorSpeedForStartupLift = 0xABC;
            static constexpr std::uintptr_t CriticalLiftForceDecay = 0xAC0;
            static constexpr std::uintptr_t CriticalYawTorqueMin = 0xAC4;
            static constexpr std::uintptr_t CriticalYawTorqueMax = 0xAC8;
            static constexpr std::uintptr_t CriticalYawTorqueRampDuration = 0xACC;
            static constexpr std::uintptr_t RotorTraceRotationSpeed = 0xAD0;
            static constexpr std::uintptr_t RotorTraceBoxSize = 0xAD4;
            static constexpr std::uintptr_t RotorTraceBoxHeight = 0xAD8;
            static constexpr std::uintptr_t MaxCriticalFallForce = 0xADC;
            static constexpr std::uintptr_t BoostFOV = 0xAE0;
            static constexpr std::uintptr_t GentleCrashTimeToExplode = 0xAE4;
            static constexpr std::uintptr_t CriticalTimeForGentleCrash = 0xAE8;
            static constexpr std::uintptr_t AutoLandingYawTorque = 0xAEC;
            static constexpr std::uintptr_t MinHeightForAutoLandingYawTorque = 0xAF0;
            static constexpr std::uintptr_t MinSpeedForScrapingBottom = 0xAF4;
            static constexpr std::uintptr_t FallDamageHeightBuffer = 0xAF8;
            static constexpr std::uintptr_t TimeBetweenRotorPlayerDamage = 0xAFC;
            static constexpr std::uintptr_t RotorMoveSpeedRequiredToUpdateTraceDirSqr = 0xB00;
            static constexpr std::uintptr_t FoliageTraceRate = 0xB04;
            static constexpr std::uintptr_t RotorWashTicksPerFrame = 0xB08;
            static constexpr std::uintptr_t RotorWashSpeed = 0xB0C;
            static constexpr std::uintptr_t CriticalHitRadius = 0xB10;
            static constexpr std::uintptr_t AngleNormalUpForLockMovement = 0xB14;
            static constexpr std::uintptr_t MaxAutoLandingTime = 0xB18;
            static constexpr std::uintptr_t SpeedThresholdForCrashed = 0xB1C;
            static constexpr std::uintptr_t CritMultiplier = 0xB20;
            static constexpr std::uintptr_t AltitudeForSprings = 0xB24;
            static constexpr std::uintptr_t MaxCrashingTime = 0xB28;
            static constexpr std::uintptr_t MaxCrashingScrapingTime = 0xB2C;
            static constexpr std::uintptr_t MaxCrashingTimeSpentNotMoving = 0xB30;
            static constexpr std::uintptr_t LandscapeRotorImpulseMag = 0xB34;
            static constexpr std::uintptr_t HealthThresholdForLandscapeRotorImpulse = 0xB38;
            static constexpr std::uintptr_t MaxHeightBuffer = 0xB3C;
            static constexpr std::uintptr_t bImpulseOnOuterRotorHitLandscape = 0xB40;
            static constexpr std::uintptr_t bSkipRotorImpulses = 0xB41;
            static constexpr std::uintptr_t FoliageTraceBoxSize = 0xB48;
            static constexpr std::uintptr_t WaterBoxSize = 0xB60;
            static constexpr std::uintptr_t WaterBoxOffset = 0xB78;
            static constexpr std::uintptr_t RotorOffsetFromActorLocationOnServer = 0xB90;
            static constexpr std::uintptr_t bSkipContactRotations = 0xBA8;
            static constexpr std::uintptr_t MaxAutoLandHeightWhenOutOfFuel = 0xBB0;
            static constexpr std::uintptr_t bCanBeBaseForCharacter = 0xBD8;
            static constexpr std::uintptr_t RoughnessMinDamagePercent = 0xBDC;
            static constexpr std::uintptr_t RoughnessMaxDamagePercent = 0xBE0;
            static constexpr std::uintptr_t MinRoughnessFromDamage = 0xBE4;
            static constexpr std::uintptr_t MaxRoughnessFromDamage = 0xBE8;
            static constexpr std::uintptr_t RotorWashForceCutoffMargin = 0xBEC;
        };

        inline static constexpr std::array<PropertyInfo, 122> Properties{{
            {"StrafeForce", 0x990, "FloatProperty"},
            {"StrafeForceMin", 0x994, "FloatProperty"},
            {"MaxStrafeSpeedKmh", 0x998, "FloatProperty"},
            {"StrafeTooFastBrakeForce", 0x99C, "FloatProperty"},
            {"LandedBrakeForce", 0x9A0, "FloatProperty"},
            {"LiftForce", 0x9A4, "FloatProperty"},
            {"MaxLiftSpeedKmh", 0x9A8, "FloatProperty"},
            {"LiftTooFastBrakeForce", 0x9AC, "FloatProperty"},
            {"LateralDragCoefficient", 0x9B0, "FloatProperty"},
            {"LateralDragCoefficient2", 0x9B4, "FloatProperty"},
            {"LiftDragCoefficient", 0x9B8, "FloatProperty"},
            {"LiftDragCoefficient2", 0x9BC, "FloatProperty"},
            {"MaxPitchForCameraYaw", 0x9C0, "FloatProperty"},
            {"MaxCameraYawAngle", 0x9C4, "FloatProperty"},
            {"CameraYawStiff", 0x9C8, "FloatProperty"},
            {"CameraYawDamp", 0x9CC, "FloatProperty"},
            {"CameraYawStrength", 0x9D0, "FloatProperty"},
            {"UprightStiff", 0x9D4, "FloatProperty"},
            {"UprightDamp", 0x9D8, "FloatProperty"},
            {"bUseVehiclePivotForCameraPitch", 0x9DC, "BoolProperty"},
            {"ThrustTorqueAnglePercent", 0x9E0, "FloatProperty"},
            {"BoostThrustTorqueAnglePercent", 0x9E4, "FloatProperty"},
            {"ThrustTorqueStiff", 0x9E8, "FloatProperty"},
            {"ThrustTorqueDamp", 0x9EC, "FloatProperty"},
            {"ThrustTorqueMaxAccel", 0x9F0, "FloatProperty"},
            {"ThrustTorque", 0x9F4, "FloatProperty"},
            {"YawTorque", 0x9F8, "FloatProperty"},
            {"YawTorqueDampingSpeed", 0x9FC, "FloatProperty"},
            {"BoostForce", 0xA00, "FloatProperty"},
            {"BoostMaxSpeedKmh", 0xA04, "FloatProperty"},
            {"BoostDuration", 0xA08, "FloatProperty"},
            {"BoostCooldown", 0xA0C, "FloatProperty"},
            {"BoostTorqueStiff", 0xA10, "FloatProperty"},
            {"BoostTorqueDamp", 0xA14, "FloatProperty"},
            {"AfterBoostBrakingForce", 0xA18, "FloatProperty"},
            {"AfterBoostBrakingDuration", 0xA1C, "FloatProperty"},
            {"AfterBoostBrakingMinSpeed", 0xA20, "FloatProperty"},
            {"PitchAngleRequiredForFullThrust", 0xA24, "FloatProperty"},
            {"DistanceToGroundForLanding", 0xA28, "FloatProperty"},
            {"StartupDelay", 0xA2C, "FloatProperty"},
            {"LandingSequenceDelay", 0xA30, "FloatProperty"},
            {"LandingSequenceDelayWithPassengers", 0xA34, "FloatProperty"},
            {"RotorsRadius", 0xA38, "FloatProperty"},
            {"RotorBoxHalfExtantX", 0xA3C, "FloatProperty"},
            {"RotorBoxHalfExtantY", 0xA40, "FloatProperty"},
            {"RotorsRadiusInner", 0xA44, "FloatProperty"},
            {"NoDriverBrakeForce", 0xA48, "FloatProperty"},
            {"TimeBetweenRotorDamageTicks", 0xA4C, "FloatProperty"},
            {"AutoLandingForce", 0xA50, "FloatProperty"},
            {"RotorDamageBoxSweepLength", 0xA54, "FloatProperty"},
            {"CriticalStateLiftForce", 0xA58, "FloatProperty"},
            {"IdleRotationMultiplier", 0xA5C, "FloatProperty"},
            {"LiftPitchDegrees", 0xA60, "FloatProperty"},
            {"MinAltitudeForIdleNoise", 0xA64, "FloatProperty"},
            {"DefaultLinearDamp", 0xA68, "FloatProperty"},
            {"DefaultAngularDamp", 0xA6C, "FloatProperty"},
            {"LandingLinearDamp", 0xA70, "FloatProperty"},
            {"LandingAngularDamp", 0xA74, "FloatProperty"},
            {"LandingLiftAlpha", 0xA78, "FloatProperty"},
            {"CriticalStateThrustMultiplier", 0xA7C, "FloatProperty"},
            {"BodyUpDotThresholdForLanding", 0xA80, "FloatProperty"},
            {"CriticalHealthThreshold", 0xA84, "IntProperty"},
            {"DamagePerImpulseWhileCritical", 0xA88, "FloatProperty"},
            {"RotorImpulseLinear", 0xA8C, "FloatProperty"},
            {"RotorImpulseAngular", 0xA90, "FloatProperty"},
            {"RotorImpulseCooldown", 0xA94, "FloatProperty"},
            {"StartupLift", 0xA98, "FloatProperty"},
            {"StartupLiftTime", 0xA9C, "FloatProperty"},
            {"MaxAltitude", 0xAA0, "FloatProperty"},
            {"AltitudeForSpinning", 0xAA4, "FloatProperty"},
            {"RotorMaxSpeed", 0xAA8, "FloatProperty"},
            {"RotorAccel", 0xAAC, "FloatProperty"},
            {"RotorDecel", 0xAB0, "FloatProperty"},
            {"ExplodeRotorDecel", 0xAB4, "FloatProperty"},
            {"MinRotorSpeedForSkippingStartup", 0xAB8, "FloatProperty"},
            {"RotorSpeedForStartupLift", 0xABC, "FloatProperty"},
            {"CriticalLiftForceDecay", 0xAC0, "FloatProperty"},
            {"CriticalYawTorqueMin", 0xAC4, "FloatProperty"},
            {"CriticalYawTorqueMax", 0xAC8, "FloatProperty"},
            {"CriticalYawTorqueRampDuration", 0xACC, "FloatProperty"},
            {"RotorTraceRotationSpeed", 0xAD0, "FloatProperty"},
            {"RotorTraceBoxSize", 0xAD4, "FloatProperty"},
            {"RotorTraceBoxHeight", 0xAD8, "FloatProperty"},
            {"MaxCriticalFallForce", 0xADC, "FloatProperty"},
            {"BoostFOV", 0xAE0, "FloatProperty"},
            {"GentleCrashTimeToExplode", 0xAE4, "FloatProperty"},
            {"CriticalTimeForGentleCrash", 0xAE8, "FloatProperty"},
            {"AutoLandingYawTorque", 0xAEC, "FloatProperty"},
            {"MinHeightForAutoLandingYawTorque", 0xAF0, "FloatProperty"},
            {"MinSpeedForScrapingBottom", 0xAF4, "FloatProperty"},
            {"FallDamageHeightBuffer", 0xAF8, "FloatProperty"},
            {"TimeBetweenRotorPlayerDamage", 0xAFC, "FloatProperty"},
            {"RotorMoveSpeedRequiredToUpdateTraceDirSqr", 0xB00, "FloatProperty"},
            {"FoliageTraceRate", 0xB04, "FloatProperty"},
            {"RotorWashTicksPerFrame", 0xB08, "ByteProperty"},
            {"RotorWashSpeed", 0xB0C, "FloatProperty"},
            {"CriticalHitRadius", 0xB10, "FloatProperty"},
            {"AngleNormalUpForLockMovement", 0xB14, "FloatProperty"},
            {"MaxAutoLandingTime", 0xB18, "FloatProperty"},
            {"SpeedThresholdForCrashed", 0xB1C, "FloatProperty"},
            {"CritMultiplier", 0xB20, "FloatProperty"},
            {"AltitudeForSprings", 0xB24, "FloatProperty"},
            {"MaxCrashingTime", 0xB28, "FloatProperty"},
            {"MaxCrashingScrapingTime", 0xB2C, "FloatProperty"},
            {"MaxCrashingTimeSpentNotMoving", 0xB30, "FloatProperty"},
            {"LandscapeRotorImpulseMag", 0xB34, "FloatProperty"},
            {"HealthThresholdForLandscapeRotorImpulse", 0xB38, "FloatProperty"},
            {"MaxHeightBuffer", 0xB3C, "FloatProperty"},
            {"bImpulseOnOuterRotorHitLandscape", 0xB40, "BoolProperty"},
            {"bSkipRotorImpulses", 0xB41, "BoolProperty"},
            {"FoliageTraceBoxSize", 0xB48, "StructProperty"},
            {"WaterBoxSize", 0xB60, "StructProperty"},
            {"WaterBoxOffset", 0xB78, "StructProperty"},
            {"RotorOffsetFromActorLocationOnServer", 0xB90, "StructProperty"},
            {"bSkipContactRotations", 0xBA8, "BoolProperty"},
            {"MaxAutoLandHeightWhenOutOfFuel", 0xBB0, "StructProperty"},
            {"bCanBeBaseForCharacter", 0xBD8, "BoolProperty"},
            {"RoughnessMinDamagePercent", 0xBDC, "FloatProperty"},
            {"RoughnessMaxDamagePercent", 0xBE0, "FloatProperty"},
            {"MinRoughnessFromDamage", 0xBE4, "FloatProperty"},
            {"MaxRoughnessFromDamage", 0xBE8, "FloatProperty"},
            {"RotorWashForceCutoffMargin", 0xBEC, "FloatProperty"},
        }};
    };

}
