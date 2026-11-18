#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotorcycleRuntime
{
    struct FortCameraMode_Motorcycle
    {
        static constexpr std::string_view Name = "FortCameraMode_Motorcycle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraOriginOffset = 0x2080;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraOriginOffset", 0x2080, "StructProperty"},
        }};
    };

    struct FortMotorcycleVehicle
    {
        static constexpr std::string_view Name = "FortMotorcycleVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKMotorVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartChargingJumpDelegate = 0x2110;
            static constexpr std::uintptr_t OnCancelChargingJumpDelegate = 0x2120;
            static constexpr std::uintptr_t OnJumpDelegate = 0x2130;
            static constexpr std::uintptr_t OnChargingJumpDelegate = 0x2140;
            static constexpr std::uintptr_t OnStartAirTrickDelegate = 0x2150;
            static constexpr std::uintptr_t OnFinishAirTrickDelegate = 0x2160;
            static constexpr std::uintptr_t OnStartWheelieDelegate = 0x2170;
            static constexpr std::uintptr_t OnReleaseWheelieDelegate = 0x2180;
            static constexpr std::uintptr_t OnLandWheelieDelegate = 0x2190;
            static constexpr std::uintptr_t OnFailWheelieDelegate = 0x21A0;
            static constexpr std::uintptr_t OnStartStoppieDelegate = 0x21B0;
            static constexpr std::uintptr_t OnReleaseStoppieDelegate = 0x21C0;
            static constexpr std::uintptr_t OnLandStoppieDelegate = 0x21D0;
            static constexpr std::uintptr_t OnInventoryModeChangedDelegate = 0x21E0;
            static constexpr std::uintptr_t OnSuperSlidingChangedDelegate = 0x21F0;
            static constexpr std::uintptr_t InventoryCameraModeClass = 0x2200;
            static constexpr std::uintptr_t InventoryCameraModeClassADS = 0x2208;
            static constexpr std::uintptr_t PassengerCameraModeClass = 0x2210;
            static constexpr std::uintptr_t PassengerCameraModeClassADS = 0x2218;
            static constexpr std::uintptr_t FortMotorcycleVehicleConfigs = 0x2220;
            static constexpr std::uintptr_t PrevFrontSpringLength = 0x2228;
            static constexpr std::uintptr_t PrevBackSpringLength = 0x222C;
            static constexpr std::uintptr_t RearAxleSocket = 0x2230;
            static constexpr std::uintptr_t ActionDefForUI = 0x2238;
            static constexpr std::uintptr_t InputActionTrick = 0x2248;
            static constexpr std::uintptr_t InputActionToggleDrivingMode = 0x2250;
            static constexpr std::uintptr_t SwingArmRotation = 0x2258;
            static constexpr std::uintptr_t BoostShapeIndices = 0x2298;
            static constexpr std::uintptr_t bIsBoostAttacking = 0x22A8;
            static constexpr std::uintptr_t RechargeableBoostPercent = 0x22AC;
            static constexpr std::uintptr_t BoostInfo = 0x22B0;
            static constexpr std::uintptr_t CachedTrickType = 0x22E0;
            static constexpr std::uintptr_t bHadPassengerAtTrickStart = 0x22E1;
            static constexpr std::uintptr_t PassengerADSSockets = 0x2318;
            static constexpr std::uintptr_t PassengerADSRelativeOffsets = 0x2328;
            static constexpr std::uintptr_t CachedNiagaraComponentRoadAndExhaust = 0x2338;
            static constexpr std::uintptr_t RoadAndExhaustNiagaraComponentName = 0x2340;
            static constexpr std::uintptr_t RoadAndExhaustVehicleSpeedName = 0x2350;
            static constexpr std::uintptr_t RoadAndExhaustSlideDirectionName = 0x2354;
            static constexpr std::uintptr_t RoadAndExhaustMinSpeedForDust = 0x2358;
            static constexpr std::uintptr_t RoadAndExhaustDustRearName = 0x235C;
            static constexpr std::uintptr_t RoadAndExhaustDustColorLerpName = 0x2360;
            static constexpr std::uintptr_t RoadAndExhaustDustColorLerp = 0x2364;
            static constexpr std::uintptr_t RoadAndExhaustDustAlphaMultiplierName = 0x2368;
            static constexpr std::uintptr_t RoadAndExhaustDustAlphaMultiplier = 0x236C;
            static constexpr std::uintptr_t RoadAndExhaustPeelOutColorIndexName = 0x2370;
            static constexpr std::uintptr_t RoadAndExhaustPeelOutRearName = 0x2374;
            static constexpr std::uintptr_t RoadAndExhaustIsPeelOutOnRoadName = 0x2378;
            static constexpr std::uintptr_t RoadAndExhaustIsPeelOutOnRoadRewindName = 0x237C;
            static constexpr std::uintptr_t RoadAndExhaustIsInAirName = 0x2380;
            static constexpr std::uintptr_t RoadAndExhaustCameraDirtGameplayCueTag = 0x2384;
            static constexpr std::uintptr_t RoadAndExhaustCameraWaterGameplayCueTag = 0x2388;
            static constexpr std::uintptr_t RoadAndExhaustSurfaceTypeArrayForFX = 0x2390;
            static constexpr std::uintptr_t DriverCameraShakeInstance = 0x23A0;
            static constexpr std::uintptr_t AcceleratingCameraShakeInstance = 0x23A8;
            static constexpr std::uintptr_t RoadAndExhaustHeadlightsName = 0x23B8;
            static constexpr std::uintptr_t RoadAndExhaustBrakelightsName = 0x23BC;
            static constexpr std::uintptr_t DoorBashMinSpeed = 0x23C0;
            static constexpr std::uintptr_t DoorBashMaxSpeed = 0x23E8;
            static constexpr std::uintptr_t DoorBashForwardDistanceMin = 0x2410;
            static constexpr std::uintptr_t DoorBashForwardDistanceMax = 0x2438;
            static constexpr std::uintptr_t DoorBashGameplayCueTag = 0x2460;
            static constexpr std::uintptr_t DoorBashCollisionTypesForDoor = 0x2468;
            static constexpr std::uintptr_t DoorBashCollisionTypesForPawn = 0x2478;
            static constexpr std::uintptr_t DoorBashSphereRadiusForPawnLaunch = 0x2488;
            static constexpr std::uintptr_t DoorBashScalarForPawnLaunch = 0x24B0;
            static constexpr std::uintptr_t DoorBashPawnLaunchGameplayCueTag = 0x24D8;
            static constexpr std::uintptr_t InventoryModeTagQuery = 0x24E0;
            static constexpr std::uintptr_t InputContextBlockedTags = 0x2528;
            static constexpr std::uintptr_t MobileHUDTag = 0x2560;
        };

        inline static constexpr std::array<PropertyInfo, 70> Properties{{
            {"OnStartChargingJumpDelegate", 0x2110, "MulticastInlineDelegateProperty"},
            {"OnCancelChargingJumpDelegate", 0x2120, "MulticastInlineDelegateProperty"},
            {"OnJumpDelegate", 0x2130, "MulticastInlineDelegateProperty"},
            {"OnChargingJumpDelegate", 0x2140, "MulticastInlineDelegateProperty"},
            {"OnStartAirTrickDelegate", 0x2150, "MulticastInlineDelegateProperty"},
            {"OnFinishAirTrickDelegate", 0x2160, "MulticastInlineDelegateProperty"},
            {"OnStartWheelieDelegate", 0x2170, "MulticastInlineDelegateProperty"},
            {"OnReleaseWheelieDelegate", 0x2180, "MulticastInlineDelegateProperty"},
            {"OnLandWheelieDelegate", 0x2190, "MulticastInlineDelegateProperty"},
            {"OnFailWheelieDelegate", 0x21A0, "MulticastInlineDelegateProperty"},
            {"OnStartStoppieDelegate", 0x21B0, "MulticastInlineDelegateProperty"},
            {"OnReleaseStoppieDelegate", 0x21C0, "MulticastInlineDelegateProperty"},
            {"OnLandStoppieDelegate", 0x21D0, "MulticastInlineDelegateProperty"},
            {"OnInventoryModeChangedDelegate", 0x21E0, "MulticastInlineDelegateProperty"},
            {"OnSuperSlidingChangedDelegate", 0x21F0, "MulticastInlineDelegateProperty"},
            {"InventoryCameraModeClass", 0x2200, "ClassProperty"},
            {"InventoryCameraModeClassADS", 0x2208, "ClassProperty"},
            {"PassengerCameraModeClass", 0x2210, "ClassProperty"},
            {"PassengerCameraModeClassADS", 0x2218, "ClassProperty"},
            {"FortMotorcycleVehicleConfigs", 0x2220, "ObjectProperty"},
            {"PrevFrontSpringLength", 0x2228, "FloatProperty"},
            {"PrevBackSpringLength", 0x222C, "FloatProperty"},
            {"RearAxleSocket", 0x2230, "NameProperty"},
            {"ActionDefForUI", 0x2238, "ArrayProperty"},
            {"InputActionTrick", 0x2248, "ObjectProperty"},
            {"InputActionToggleDrivingMode", 0x2250, "ObjectProperty"},
            {"SwingArmRotation", 0x2258, "FloatProperty"},
            {"BoostShapeIndices", 0x2298, "ArrayProperty"},
            {"bIsBoostAttacking", 0x22A8, "BoolProperty"},
            {"RechargeableBoostPercent", 0x22AC, "FloatProperty"},
            {"BoostInfo", 0x22B0, "StructProperty"},
            {"CachedTrickType", 0x22E0, "EnumProperty"},
            {"bHadPassengerAtTrickStart", 0x22E1, "BoolProperty"},
            {"PassengerADSSockets", 0x2318, "ArrayProperty"},
            {"PassengerADSRelativeOffsets", 0x2328, "ArrayProperty"},
            {"CachedNiagaraComponentRoadAndExhaust", 0x2338, "ObjectProperty"},
            {"RoadAndExhaustNiagaraComponentName", 0x2340, "StrProperty"},
            {"RoadAndExhaustVehicleSpeedName", 0x2350, "NameProperty"},
            {"RoadAndExhaustSlideDirectionName", 0x2354, "NameProperty"},
            {"RoadAndExhaustMinSpeedForDust", 0x2358, "FloatProperty"},
            {"RoadAndExhaustDustRearName", 0x235C, "NameProperty"},
            {"RoadAndExhaustDustColorLerpName", 0x2360, "NameProperty"},
            {"RoadAndExhaustDustColorLerp", 0x2364, "FloatProperty"},
            {"RoadAndExhaustDustAlphaMultiplierName", 0x2368, "NameProperty"},
            {"RoadAndExhaustDustAlphaMultiplier", 0x236C, "FloatProperty"},
            {"RoadAndExhaustPeelOutColorIndexName", 0x2370, "NameProperty"},
            {"RoadAndExhaustPeelOutRearName", 0x2374, "NameProperty"},
            {"RoadAndExhaustIsPeelOutOnRoadName", 0x2378, "NameProperty"},
            {"RoadAndExhaustIsPeelOutOnRoadRewindName", 0x237C, "NameProperty"},
            {"RoadAndExhaustIsInAirName", 0x2380, "NameProperty"},
            {"RoadAndExhaustCameraDirtGameplayCueTag", 0x2384, "StructProperty"},
            {"RoadAndExhaustCameraWaterGameplayCueTag", 0x2388, "StructProperty"},
            {"RoadAndExhaustSurfaceTypeArrayForFX", 0x2390, "ArrayProperty"},
            {"DriverCameraShakeInstance", 0x23A0, "ObjectProperty"},
            {"AcceleratingCameraShakeInstance", 0x23A8, "ObjectProperty"},
            {"RoadAndExhaustHeadlightsName", 0x23B8, "NameProperty"},
            {"RoadAndExhaustBrakelightsName", 0x23BC, "NameProperty"},
            {"DoorBashMinSpeed", 0x23C0, "StructProperty"},
            {"DoorBashMaxSpeed", 0x23E8, "StructProperty"},
            {"DoorBashForwardDistanceMin", 0x2410, "StructProperty"},
            {"DoorBashForwardDistanceMax", 0x2438, "StructProperty"},
            {"DoorBashGameplayCueTag", 0x2460, "StructProperty"},
            {"DoorBashCollisionTypesForDoor", 0x2468, "ArrayProperty"},
            {"DoorBashCollisionTypesForPawn", 0x2478, "ArrayProperty"},
            {"DoorBashSphereRadiusForPawnLaunch", 0x2488, "StructProperty"},
            {"DoorBashScalarForPawnLaunch", 0x24B0, "StructProperty"},
            {"DoorBashPawnLaunchGameplayCueTag", 0x24D8, "StructProperty"},
            {"InventoryModeTagQuery", 0x24E0, "StructProperty"},
            {"InputContextBlockedTags", 0x2528, "StructProperty"},
            {"MobileHUDTag", 0x2560, "StructProperty"},
        }};
    };

    struct FortMotorcycleVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortMotorcycleVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MotorcycleVehicle = 0x510;
            static constexpr std::uintptr_t SwingArmRotation = 0x518;
            static constexpr std::uintptr_t bIsInInventoryMode = 0x530;
            static constexpr std::uintptr_t DriverAnimInstance = 0x538;
            static constexpr std::uintptr_t bIsBikeParked = 0x540;
            static constexpr std::uintptr_t bIsBikeOn = 0x541;
            static constexpr std::uintptr_t bIsBikeStopping = 0x542;
            static constexpr std::uintptr_t bIsReversing = 0x543;
            static constexpr std::uintptr_t TotalSpeed = 0x544;
            static constexpr std::uintptr_t bIsSurfaceWater = 0x548;
            static constexpr std::uintptr_t AdditiveAlpha = 0x54C;
            static constexpr std::uintptr_t bIsRevving = 0x550;
            static constexpr std::uintptr_t AccelAlpha = 0x554;
            static constexpr std::uintptr_t bIsThrottling = 0x558;
            static constexpr std::uintptr_t bIsHonking = 0x559;
            static constexpr std::uintptr_t bIsSoloJumpTrickOutro = 0x55A;
            static constexpr std::uintptr_t bIsJumpTrickNone = 0x55B;
            static constexpr std::uintptr_t BrakeLeverAlpha = 0x55C;
            static constexpr std::uintptr_t bShouldExitFromLocomotion = 0x560;
            static constexpr std::uintptr_t bStateRuleFromRevvingToThrottle = 0x561;
            static constexpr std::uintptr_t bShouldPlayThrottleAnim = 0x562;
            static constexpr std::uintptr_t bStateTransitionRuleToMovingLoop = 0x563;
            static constexpr std::uintptr_t bEarlyOutFromMovingStart = 0x564;
            static constexpr std::uintptr_t bShouldStop = 0x565;
            static constexpr std::uintptr_t bShouldReverse = 0x566;
            static constexpr std::uintptr_t bShouldReverseStop = 0x567;
            static constexpr std::uintptr_t bShouldStopThrottling = 0x568;
            static constexpr std::uintptr_t bIsFromJumpTrick = 0x569;
            static constexpr std::uintptr_t bIsSoloJumpTrick = 0x56A;
            static constexpr std::uintptr_t bShouldJump = 0x56B;
            static constexpr std::uintptr_t bIsMoving = 0x56C;
            static constexpr std::uintptr_t AirTrickType = 0x56D;
            static constexpr std::uintptr_t bIsLandingInPlace = 0x56E;
            static constexpr std::uintptr_t bStateRuleFallingToMoving = 0x56F;
            static constexpr std::uintptr_t JumpChargeFactor = 0x570;
            static constexpr std::uintptr_t ForwardSpeed = 0x574;
            static constexpr std::uintptr_t bStoppie = 0x578;
            static constexpr std::uintptr_t bIsBraking = 0x579;
            static constexpr std::uintptr_t bShouldBrake = 0x57A;
            static constexpr std::uintptr_t bEarlyOutBrakingOutro = 0x57B;
            static constexpr std::uintptr_t bShouldJumpTrick = 0x57C;
            static constexpr std::uintptr_t bStateTransitionRuleToReverseLoop = 0x57D;
            static constexpr std::uintptr_t bIsReverseNoFeet = 0x57E;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"MotorcycleVehicle", 0x510, "ObjectProperty"},
            {"SwingArmRotation", 0x518, "StructProperty"},
            {"bIsInInventoryMode", 0x530, "BoolProperty"},
            {"DriverAnimInstance", 0x538, "ObjectProperty"},
            {"bIsBikeParked", 0x540, "BoolProperty"},
            {"bIsBikeOn", 0x541, "BoolProperty"},
            {"bIsBikeStopping", 0x542, "BoolProperty"},
            {"bIsReversing", 0x543, "BoolProperty"},
            {"TotalSpeed", 0x544, "FloatProperty"},
            {"bIsSurfaceWater", 0x548, "BoolProperty"},
            {"AdditiveAlpha", 0x54C, "FloatProperty"},
            {"bIsRevving", 0x550, "BoolProperty"},
            {"AccelAlpha", 0x554, "FloatProperty"},
            {"bIsThrottling", 0x558, "BoolProperty"},
            {"bIsHonking", 0x559, "BoolProperty"},
            {"bIsSoloJumpTrickOutro", 0x55A, "BoolProperty"},
            {"bIsJumpTrickNone", 0x55B, "BoolProperty"},
            {"BrakeLeverAlpha", 0x55C, "FloatProperty"},
            {"bShouldExitFromLocomotion", 0x560, "BoolProperty"},
            {"bStateRuleFromRevvingToThrottle", 0x561, "BoolProperty"},
            {"bShouldPlayThrottleAnim", 0x562, "BoolProperty"},
            {"bStateTransitionRuleToMovingLoop", 0x563, "BoolProperty"},
            {"bEarlyOutFromMovingStart", 0x564, "BoolProperty"},
            {"bShouldStop", 0x565, "BoolProperty"},
            {"bShouldReverse", 0x566, "BoolProperty"},
            {"bShouldReverseStop", 0x567, "BoolProperty"},
            {"bShouldStopThrottling", 0x568, "BoolProperty"},
            {"bIsFromJumpTrick", 0x569, "BoolProperty"},
            {"bIsSoloJumpTrick", 0x56A, "BoolProperty"},
            {"bShouldJump", 0x56B, "BoolProperty"},
            {"bIsMoving", 0x56C, "BoolProperty"},
            {"AirTrickType", 0x56D, "EnumProperty"},
            {"bIsLandingInPlace", 0x56E, "BoolProperty"},
            {"bStateRuleFallingToMoving", 0x56F, "BoolProperty"},
            {"JumpChargeFactor", 0x570, "FloatProperty"},
            {"ForwardSpeed", 0x574, "FloatProperty"},
            {"bStoppie", 0x578, "BoolProperty"},
            {"bIsBraking", 0x579, "BoolProperty"},
            {"bShouldBrake", 0x57A, "BoolProperty"},
            {"bEarlyOutBrakingOutro", 0x57B, "BoolProperty"},
            {"bShouldJumpTrick", 0x57C, "BoolProperty"},
            {"bStateTransitionRuleToReverseLoop", 0x57D, "BoolProperty"},
            {"bIsReverseNoFeet", 0x57E, "BoolProperty"},
        }};
    };

    struct FortMotorcycleVehicleConfigs
    {
        static constexpr std::string_view Name = "FortMotorcycleVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t Wheels = 0x990;
            static constexpr std::uintptr_t SpringInterpDamp = 0x9A0;
            static constexpr std::uintptr_t WheelieSpringInterpDamp = 0x9A4;
            static constexpr std::uintptr_t WallPushStiff = 0x9A8;
            static constexpr std::uintptr_t WallPushDamp = 0x9AC;
            static constexpr std::uintptr_t WallPushXTraceOffset = 0x9B0;
            static constexpr std::uintptr_t WallPushForwardTraceLengthScale = 0x9C8;
            static constexpr std::uintptr_t WallPushBackTraceLengthScale = 0x9CC;
            static constexpr std::uintptr_t WallPushRightTraceLength = 0x9D0;
            static constexpr std::uintptr_t WallPushRightTraceOffset = 0x9D8;
            static constexpr std::uintptr_t WallPushRearRightTraceOffset = 0x9F0;
            static constexpr std::uintptr_t WallPushAngle = 0xA08;
            static constexpr std::uintptr_t bUseWallPushTracesForWalls = 0xA0C;
            static constexpr std::uintptr_t bUseWallPushRearSideTracesForWalls = 0xA0D;
            static constexpr std::uintptr_t MaxJumpChargeTime = 0xA10;
            static constexpr std::uintptr_t MinChargeJumpForce = 0xA14;
            static constexpr std::uintptr_t MaxChargeJumpForce = 0xA18;
            static constexpr std::uintptr_t MinJumpForwardAngle = 0xA1C;
            static constexpr std::uintptr_t MaxJumpForwardAngle = 0xA20;
            static constexpr std::uintptr_t JumpForceMinCOMOffset = 0xA28;
            static constexpr std::uintptr_t JumpForceMaxCOMOffset = 0xA40;
            static constexpr std::uintptr_t JumpChargeGraceTimeSeconds = 0xA58;
            static constexpr std::uintptr_t JumpGraceTimeSeconds = 0xA5C;
            static constexpr std::uintptr_t LeanAngleScale = 0xA60;
            static constexpr std::uintptr_t LeanStiff = 0xA64;
            static constexpr std::uintptr_t LeanDamp = 0xA68;
            static constexpr std::uintptr_t LeanStrength = 0xA6C;
            static constexpr std::uintptr_t SlideCatchupForceTime = 0xA70;
            static constexpr std::uintptr_t SlideCatchupSpeed = 0xA74;
            static constexpr std::uintptr_t SlideCatchupPushForce = 0xA78;
            static constexpr std::uintptr_t AutoAirPitchAngle = 0xA7C;
            static constexpr std::uintptr_t MinSteeringAngleForModifiedFriction = 0xA80;
            static constexpr std::uintptr_t MinSpeedForModifiedFriction = 0xA84;
            static constexpr std::uintptr_t MinSteeringAngleToConsiderTractionLost = 0xA88;
            static constexpr std::uintptr_t FrictionRatioToConsiderTractionLost = 0xA8C;
            static constexpr std::uintptr_t WheeliePitchStiffMin = 0xA90;
            static constexpr std::uintptr_t WheeliePitchStiffMax = 0xA94;
            static constexpr std::uintptr_t WheeliePitchDampMin = 0xA98;
            static constexpr std::uintptr_t WheeliePitchDampMax = 0xA9C;
            static constexpr std::uintptr_t WheeliePitchAngleMin = 0xAA0;
            static constexpr std::uintptr_t WheeliePitchAngleMax = 0xAA4;
            static constexpr std::uintptr_t StoppiePitchAngle = 0xAA8;
            static constexpr std::uintptr_t StoppiePitchStiff = 0xAAC;
            static constexpr std::uintptr_t StoppiePitchDamp = 0xAB0;
            static constexpr std::uintptr_t WheelieRampSeconds = 0xAB4;
            static constexpr std::uintptr_t WheelieFailPitchAngle = 0xAB8;
            static constexpr std::uintptr_t WheelieRecoveryRate = 0xABC;
            static constexpr std::uintptr_t WheelieFailRecoveryRate = 0xAC0;
            static constexpr std::uintptr_t WheelieMinStartSpeed = 0xAC4;
            static constexpr std::uintptr_t StoppieMinStopSpeed = 0xAC8;
            static constexpr std::uintptr_t WheelieSteerFactor = 0xACC;
            static constexpr std::uintptr_t StoppieSteerFactor = 0xAD0;
            static constexpr std::uintptr_t WheelieSteerAlphaThreshold = 0xAD4;
            static constexpr std::uintptr_t WheelieStoppieMaxLeanAllowedToInitiate = 0xAD8;
            static constexpr std::uintptr_t WheelieGroundBufferTime = 0xADC;
            static constexpr std::uintptr_t StoppieGroundBufferTime = 0xAE0;
            static constexpr std::uintptr_t WheelieSpringLengthExponent = 0xAE4;
            static constexpr std::uintptr_t WheelieWheelOffsetLerpMultiplier = 0xAE8;
            static constexpr std::uintptr_t WheelieBrakeFactor = 0xAEC;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeed = 0xAF0;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeedIce = 0xAF4;
            static constexpr std::uintptr_t StoppieTurnInPlaceSpeedMud = 0xAF8;
            static constexpr std::uintptr_t MinSpeedKmhForMaxStoppie = 0xAFC;
            static constexpr std::uintptr_t StoppieTurnAngleExponent = 0xB00;
            static constexpr std::uintptr_t StoppieMaxTurnAngle = 0xB04;
            static constexpr std::uintptr_t WheelieTireTractionMultiplier_Min = 0xB08;
            static constexpr std::uintptr_t WheelieCameraMinStraightFactor = 0xB0C;
            static constexpr std::uintptr_t MaxLeanAccel = 0xB10;
            static constexpr std::uintptr_t CruiseControlForwardAlpha = 0xB14;
            static constexpr std::uintptr_t InventoryModeSpeedKmh = 0xB18;
            static constexpr std::uintptr_t CruiseControlDisengageSpeedKmh = 0xB1C;
            static constexpr std::uintptr_t bPowerSlideIsSuperSlide = 0xB20;
            static constexpr std::uintptr_t PowerSlideFrontFrictionMultiplier = 0xB24;
            static constexpr std::uintptr_t PowerSlideRearFrictionMultiplier = 0xB28;
            static constexpr std::uintptr_t PowerSlideRoadFrontFrictionMultiplier = 0xB2C;
            static constexpr std::uintptr_t PowerSlideRoadRearFrictionMultiplier = 0xB30;
            static constexpr std::uintptr_t PowerSlideDirtFrontFrictionMultiplier = 0xB34;
            static constexpr std::uintptr_t PowerSlideDirtRearFrictionMultiplier = 0xB38;
            static constexpr std::uintptr_t PowerSlideGrassFrontFrictionMultiplier = 0xB3C;
            static constexpr std::uintptr_t PowerSlideGrassRearFrictionMultiplier = 0xB40;
            static constexpr std::uintptr_t PowerSlideSnowFrontFrictionMultiplier = 0xB44;
            static constexpr std::uintptr_t PowerSlideSnowRearFrictionMultiplier = 0xB48;
            static constexpr std::uintptr_t PowerSlideIceFrontFrictionMultiplier = 0xB4C;
            static constexpr std::uintptr_t PowerSlideIceRearFrictionMultiplier = 0xB50;
            static constexpr std::uintptr_t PowerSlideMudFrontFrictionMultiplier = 0xB54;
            static constexpr std::uintptr_t PowerSlideMudRearFrictionMultiplier = 0xB58;
            static constexpr std::uintptr_t PowerSlideFactor = 0xB5C;
            static constexpr std::uintptr_t PowerSlideDampFactor = 0xB60;
            static constexpr std::uintptr_t FrictionDampFactor = 0xB64;
            static constexpr std::uintptr_t PowerSlideLeanAngleScale = 0xB68;
            static constexpr std::uintptr_t SuperSlideLeanAngle = 0xB6C;
            static constexpr std::uintptr_t SuperSlideMinStartYawSpeedDegrees = 0xB70;
            static constexpr std::uintptr_t SuperSlideMinStartSpeedKmh = 0xB74;
            static constexpr std::uintptr_t SuperSlideMaxEndSpeedKmh = 0xB78;
            static constexpr std::uintptr_t PowerslideInputWindow = 0xB7C;
            static constexpr std::uintptr_t ShootingMinSpeedSteeringAngle = 0xB80;
            static constexpr std::uintptr_t ShootingMaxSpeedSteeringAngle = 0xB84;
            static constexpr std::uintptr_t InventoryModeCameraYawConstraint = 0xB88;
            static constexpr std::uintptr_t BoostTopSpeedMultiplier = 0xB90;
            static constexpr std::uintptr_t BoostPushForceMultiplier = 0xBB8;
            static constexpr std::uintptr_t BoostMinPushForce = 0xBE0;
            static constexpr std::uintptr_t BoostSteeringMultiplier = 0xC08;
            static constexpr std::uintptr_t UsesBoost = 0xC30;
            static constexpr std::uintptr_t StartWithFullBoost = 0xC58;
            static constexpr std::uintptr_t UsesRechargeableBoost = 0xC80;
            static constexpr std::uintptr_t RechargeableBoost_RateOfUse = 0xCA8;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegen = 0xCD0;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMin = 0xCF8;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMax = 0xD20;
            static constexpr std::uintptr_t RechargeableBoost_RegenMaxMultTime = 0xD48;
            static constexpr std::uintptr_t RechargeableBoost_RequiredPercentToActivate = 0xD70;
            static constexpr std::uintptr_t RechargeableBoost_MinPercent = 0xD98;
            static constexpr std::uintptr_t RechargeableBoost_MaxPercent = 0xDC0;
            static constexpr std::uintptr_t bPlayHolsterAnimsOnClient = 0xDE8;
            static constexpr std::uintptr_t FrontWheelSteeringFactor = 0xDEC;
            static constexpr std::uintptr_t FrontWheelRotationAcceleration = 0xDF0;
            static constexpr std::uintptr_t PassengerInventoryCooldown = 0xDF4;
            static constexpr std::uintptr_t DriverInventoryCooldown = 0xDF8;
            static constexpr std::uintptr_t BoostAttackShapes = 0xE00;
            static constexpr std::uintptr_t CameraAssistStrengthMax = 0xE10;
            static constexpr std::uintptr_t CameraAssistStrengthMin = 0xE14;
            static constexpr std::uintptr_t CameraAssistStrengthRecovery = 0xE18;
            static constexpr std::uintptr_t CameraAssistInterpSpeed = 0xE1C;
            static constexpr std::uintptr_t AirTrickIncrementInterval = 0xE20;
            static constexpr std::uintptr_t AirTrickFeedStartTime = 0xE24;
            static constexpr std::uintptr_t AirTrickPitchMultiplier = 0xE28;
            static constexpr std::uintptr_t AirTrickYawMultiplier = 0xE2C;
            static constexpr std::uintptr_t bAllowAirTrickNeutral = 0xE30;
            static constexpr std::uintptr_t bAllowAirTrickRight = 0xE31;
            static constexpr std::uintptr_t bAllowAirTrickLeft = 0xE32;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Front = 0xE34;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Rear = 0xE38;
            static constexpr std::uintptr_t PoppedTireTractionScalar_Both = 0xE3C;
            static constexpr std::uintptr_t TopSpeedKmh = 0xE40;
            static constexpr std::uintptr_t CachedTopSpeedKmh = 0xE68;
            static constexpr std::uintptr_t bCachedUsesRechargeableBoost = 0xE6C;
        };

        inline static constexpr std::array<PropertyInfo, 136> Properties{{
            {"Wheels", 0x990, "ArrayProperty"},
            {"SpringInterpDamp", 0x9A0, "FloatProperty"},
            {"WheelieSpringInterpDamp", 0x9A4, "FloatProperty"},
            {"WallPushStiff", 0x9A8, "FloatProperty"},
            {"WallPushDamp", 0x9AC, "FloatProperty"},
            {"WallPushXTraceOffset", 0x9B0, "StructProperty"},
            {"WallPushForwardTraceLengthScale", 0x9C8, "FloatProperty"},
            {"WallPushBackTraceLengthScale", 0x9CC, "FloatProperty"},
            {"WallPushRightTraceLength", 0x9D0, "FloatProperty"},
            {"WallPushRightTraceOffset", 0x9D8, "StructProperty"},
            {"WallPushRearRightTraceOffset", 0x9F0, "StructProperty"},
            {"WallPushAngle", 0xA08, "FloatProperty"},
            {"bUseWallPushTracesForWalls", 0xA0C, "BoolProperty"},
            {"bUseWallPushRearSideTracesForWalls", 0xA0D, "BoolProperty"},
            {"MaxJumpChargeTime", 0xA10, "FloatProperty"},
            {"MinChargeJumpForce", 0xA14, "FloatProperty"},
            {"MaxChargeJumpForce", 0xA18, "FloatProperty"},
            {"MinJumpForwardAngle", 0xA1C, "FloatProperty"},
            {"MaxJumpForwardAngle", 0xA20, "FloatProperty"},
            {"JumpForceMinCOMOffset", 0xA28, "StructProperty"},
            {"JumpForceMaxCOMOffset", 0xA40, "StructProperty"},
            {"JumpChargeGraceTimeSeconds", 0xA58, "FloatProperty"},
            {"JumpGraceTimeSeconds", 0xA5C, "FloatProperty"},
            {"LeanAngleScale", 0xA60, "FloatProperty"},
            {"LeanStiff", 0xA64, "FloatProperty"},
            {"LeanDamp", 0xA68, "FloatProperty"},
            {"LeanStrength", 0xA6C, "FloatProperty"},
            {"SlideCatchupForceTime", 0xA70, "FloatProperty"},
            {"SlideCatchupSpeed", 0xA74, "FloatProperty"},
            {"SlideCatchupPushForce", 0xA78, "FloatProperty"},
            {"AutoAirPitchAngle", 0xA7C, "FloatProperty"},
            {"MinSteeringAngleForModifiedFriction", 0xA80, "FloatProperty"},
            {"MinSpeedForModifiedFriction", 0xA84, "FloatProperty"},
            {"MinSteeringAngleToConsiderTractionLost", 0xA88, "FloatProperty"},
            {"FrictionRatioToConsiderTractionLost", 0xA8C, "FloatProperty"},
            {"WheeliePitchStiffMin", 0xA90, "FloatProperty"},
            {"WheeliePitchStiffMax", 0xA94, "FloatProperty"},
            {"WheeliePitchDampMin", 0xA98, "FloatProperty"},
            {"WheeliePitchDampMax", 0xA9C, "FloatProperty"},
            {"WheeliePitchAngleMin", 0xAA0, "FloatProperty"},
            {"WheeliePitchAngleMax", 0xAA4, "FloatProperty"},
            {"StoppiePitchAngle", 0xAA8, "FloatProperty"},
            {"StoppiePitchStiff", 0xAAC, "FloatProperty"},
            {"StoppiePitchDamp", 0xAB0, "FloatProperty"},
            {"WheelieRampSeconds", 0xAB4, "FloatProperty"},
            {"WheelieFailPitchAngle", 0xAB8, "FloatProperty"},
            {"WheelieRecoveryRate", 0xABC, "FloatProperty"},
            {"WheelieFailRecoveryRate", 0xAC0, "FloatProperty"},
            {"WheelieMinStartSpeed", 0xAC4, "FloatProperty"},
            {"StoppieMinStopSpeed", 0xAC8, "FloatProperty"},
            {"WheelieSteerFactor", 0xACC, "FloatProperty"},
            {"StoppieSteerFactor", 0xAD0, "FloatProperty"},
            {"WheelieSteerAlphaThreshold", 0xAD4, "FloatProperty"},
            {"WheelieStoppieMaxLeanAllowedToInitiate", 0xAD8, "FloatProperty"},
            {"WheelieGroundBufferTime", 0xADC, "FloatProperty"},
            {"StoppieGroundBufferTime", 0xAE0, "FloatProperty"},
            {"WheelieSpringLengthExponent", 0xAE4, "FloatProperty"},
            {"WheelieWheelOffsetLerpMultiplier", 0xAE8, "FloatProperty"},
            {"WheelieBrakeFactor", 0xAEC, "FloatProperty"},
            {"StoppieTurnInPlaceSpeed", 0xAF0, "FloatProperty"},
            {"StoppieTurnInPlaceSpeedIce", 0xAF4, "FloatProperty"},
            {"StoppieTurnInPlaceSpeedMud", 0xAF8, "FloatProperty"},
            {"MinSpeedKmhForMaxStoppie", 0xAFC, "FloatProperty"},
            {"StoppieTurnAngleExponent", 0xB00, "FloatProperty"},
            {"StoppieMaxTurnAngle", 0xB04, "FloatProperty"},
            {"WheelieTireTractionMultiplier_Min", 0xB08, "FloatProperty"},
            {"WheelieCameraMinStraightFactor", 0xB0C, "FloatProperty"},
            {"MaxLeanAccel", 0xB10, "FloatProperty"},
            {"CruiseControlForwardAlpha", 0xB14, "FloatProperty"},
            {"InventoryModeSpeedKmh", 0xB18, "FloatProperty"},
            {"CruiseControlDisengageSpeedKmh", 0xB1C, "FloatProperty"},
            {"bPowerSlideIsSuperSlide", 0xB20, "BoolProperty"},
            {"PowerSlideFrontFrictionMultiplier", 0xB24, "FloatProperty"},
            {"PowerSlideRearFrictionMultiplier", 0xB28, "FloatProperty"},
            {"PowerSlideRoadFrontFrictionMultiplier", 0xB2C, "FloatProperty"},
            {"PowerSlideRoadRearFrictionMultiplier", 0xB30, "FloatProperty"},
            {"PowerSlideDirtFrontFrictionMultiplier", 0xB34, "FloatProperty"},
            {"PowerSlideDirtRearFrictionMultiplier", 0xB38, "FloatProperty"},
            {"PowerSlideGrassFrontFrictionMultiplier", 0xB3C, "FloatProperty"},
            {"PowerSlideGrassRearFrictionMultiplier", 0xB40, "FloatProperty"},
            {"PowerSlideSnowFrontFrictionMultiplier", 0xB44, "FloatProperty"},
            {"PowerSlideSnowRearFrictionMultiplier", 0xB48, "FloatProperty"},
            {"PowerSlideIceFrontFrictionMultiplier", 0xB4C, "FloatProperty"},
            {"PowerSlideIceRearFrictionMultiplier", 0xB50, "FloatProperty"},
            {"PowerSlideMudFrontFrictionMultiplier", 0xB54, "FloatProperty"},
            {"PowerSlideMudRearFrictionMultiplier", 0xB58, "FloatProperty"},
            {"PowerSlideFactor", 0xB5C, "FloatProperty"},
            {"PowerSlideDampFactor", 0xB60, "FloatProperty"},
            {"FrictionDampFactor", 0xB64, "FloatProperty"},
            {"PowerSlideLeanAngleScale", 0xB68, "FloatProperty"},
            {"SuperSlideLeanAngle", 0xB6C, "FloatProperty"},
            {"SuperSlideMinStartYawSpeedDegrees", 0xB70, "FloatProperty"},
            {"SuperSlideMinStartSpeedKmh", 0xB74, "FloatProperty"},
            {"SuperSlideMaxEndSpeedKmh", 0xB78, "FloatProperty"},
            {"PowerslideInputWindow", 0xB7C, "FloatProperty"},
            {"ShootingMinSpeedSteeringAngle", 0xB80, "FloatProperty"},
            {"ShootingMaxSpeedSteeringAngle", 0xB84, "FloatProperty"},
            {"InventoryModeCameraYawConstraint", 0xB88, "FloatProperty"},
            {"BoostTopSpeedMultiplier", 0xB90, "StructProperty"},
            {"BoostPushForceMultiplier", 0xBB8, "StructProperty"},
            {"BoostMinPushForce", 0xBE0, "StructProperty"},
            {"BoostSteeringMultiplier", 0xC08, "StructProperty"},
            {"UsesBoost", 0xC30, "StructProperty"},
            {"StartWithFullBoost", 0xC58, "StructProperty"},
            {"UsesRechargeableBoost", 0xC80, "StructProperty"},
            {"RechargeableBoost_RateOfUse", 0xCA8, "StructProperty"},
            {"RechargeableBoost_RateOfRegen", 0xCD0, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMin", 0xCF8, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMax", 0xD20, "StructProperty"},
            {"RechargeableBoost_RegenMaxMultTime", 0xD48, "StructProperty"},
            {"RechargeableBoost_RequiredPercentToActivate", 0xD70, "StructProperty"},
            {"RechargeableBoost_MinPercent", 0xD98, "StructProperty"},
            {"RechargeableBoost_MaxPercent", 0xDC0, "StructProperty"},
            {"bPlayHolsterAnimsOnClient", 0xDE8, "BoolProperty"},
            {"FrontWheelSteeringFactor", 0xDEC, "FloatProperty"},
            {"FrontWheelRotationAcceleration", 0xDF0, "FloatProperty"},
            {"PassengerInventoryCooldown", 0xDF4, "FloatProperty"},
            {"DriverInventoryCooldown", 0xDF8, "FloatProperty"},
            {"BoostAttackShapes", 0xE00, "SetProperty"},
            {"CameraAssistStrengthMax", 0xE10, "FloatProperty"},
            {"CameraAssistStrengthMin", 0xE14, "FloatProperty"},
            {"CameraAssistStrengthRecovery", 0xE18, "FloatProperty"},
            {"CameraAssistInterpSpeed", 0xE1C, "FloatProperty"},
            {"AirTrickIncrementInterval", 0xE20, "FloatProperty"},
            {"AirTrickFeedStartTime", 0xE24, "FloatProperty"},
            {"AirTrickPitchMultiplier", 0xE28, "FloatProperty"},
            {"AirTrickYawMultiplier", 0xE2C, "FloatProperty"},
            {"bAllowAirTrickNeutral", 0xE30, "BoolProperty"},
            {"bAllowAirTrickRight", 0xE31, "BoolProperty"},
            {"bAllowAirTrickLeft", 0xE32, "BoolProperty"},
            {"PoppedTireTractionScalar_Front", 0xE34, "FloatProperty"},
            {"PoppedTireTractionScalar_Rear", 0xE38, "FloatProperty"},
            {"PoppedTireTractionScalar_Both", 0xE3C, "FloatProperty"},
            {"TopSpeedKmh", 0xE40, "StructProperty"},
            {"CachedTopSpeedKmh", 0xE68, "FloatProperty"},
            {"bCachedUsesRechargeableBoost", 0xE6C, "BoolProperty"},
        }};
    };

    struct FortPlayerAnimInstance_MotorcycleDriver
    {
        static constexpr std::string_view Name = "FortPlayerAnimInstance_MotorcycleDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstance_MotorcycleRider";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasMoved = 0x770;
            static constexpr std::uintptr_t SteeringRotation = 0x774;
            static constexpr std::uintptr_t bIsInInventoryMode = 0x778;
            static constexpr std::uintptr_t bShouldJump = 0x779;
            static constexpr std::uintptr_t bShouldAllowHeadAO = 0x77A;
            static constexpr std::uintptr_t FeetDragPlayRate = 0x77C;
            static constexpr std::uintptr_t bShouldJumpCharge = 0x780;
            static constexpr std::uintptr_t bIsLandingInPlace = 0x781;
            static constexpr std::uintptr_t bStateRuleFallingToMoving = 0x782;
            static constexpr std::uintptr_t bShouldApplyChargingNoise = 0x783;
            static constexpr std::uintptr_t JumpTimer = 0x784;
            static constexpr std::uintptr_t bShouldAllowJump = 0x788;
            static constexpr std::uintptr_t bIsSurfaceWater = 0x789;
            static constexpr std::uintptr_t bSlopeAlphaShouldIncrease = 0x78A;
            static constexpr std::uintptr_t SlopeAlpha = 0x78C;
            static constexpr std::uintptr_t bHasPassenger = 0x790;
            static constexpr std::uintptr_t bIsOneHandedDualWield = 0x791;
            static constexpr std::uintptr_t bShouldApplyBodyTwistForMelee = 0x792;
            static constexpr std::uintptr_t bIsMelee = 0x793;
            static constexpr std::uintptr_t bIsRangedOrConsumable = 0x794;
            static constexpr std::uintptr_t bShouldApplyFeetNoise = 0x795;
            static constexpr std::uintptr_t CachedFallingStartTime = 0x798;
            static constexpr std::uintptr_t bWasFalling = 0x79C;
            static constexpr std::uintptr_t bIsRevving = 0x79D;
            static constexpr std::uintptr_t StoppieLeanAlpha = 0x7A0;
            static constexpr std::uintptr_t bShouldPlayMovingJump = 0x7A4;
            static constexpr std::uintptr_t bWasJumpTrickLeftOrRight = 0x7A5;
            static constexpr std::uintptr_t bIsFromJumpTrick = 0x7A6;
            static constexpr std::uintptr_t bShouldAllowMovingJumpLand = 0x7A7;
            static constexpr std::uintptr_t bStateTransitionRuleToReverseLoop = 0x7A8;
            static constexpr std::uintptr_t bIsReverseNoFeet = 0x7A9;
            static constexpr std::uintptr_t WalkSPlayRate = 0x7AC;
            static constexpr std::uintptr_t LeanSpeed = 0x7B0;
            static constexpr std::uintptr_t LeanAlpha = 0x7B4;
            static constexpr std::uintptr_t bIsCombatTransition = 0x7B8;
            static constexpr std::uintptr_t bShouldBrake = 0x7B9;
            static constexpr std::uintptr_t bShouldExitFromLocomotion = 0x7BA;
            static constexpr std::uintptr_t bEarlyOutBrakingOutro = 0x7BB;
            static constexpr std::uintptr_t bIsRightInput = 0x7BC;
            static constexpr std::uintptr_t bShouldPlayReverseOutro = 0x7BD;
            static constexpr std::uintptr_t bShouldApplyHipSuspension = 0x7BE;
            static constexpr std::uintptr_t bIsDefaultJumpTrick = 0x7BF;
            static constexpr std::uintptr_t bIsLeftJumpTrick = 0x7C0;
            static constexpr std::uintptr_t bIsRightJumpTrick = 0x7C1;
            static constexpr std::uintptr_t bIsNoneJumpTrick = 0x7C2;
            static constexpr std::uintptr_t bIsSoloJumpTrick = 0x7C3;
            static constexpr std::uintptr_t bShouldExitFromDefaultJumpTrick = 0x7C4;
            static constexpr std::uintptr_t bEarlyOutFromMoveStart = 0x7C5;
            static constexpr std::uintptr_t bShouldStop = 0x7C6;
            static constexpr std::uintptr_t CachedTrickIntroTime = 0x7C8;
            static constexpr std::uintptr_t bShouldPlayJumpTrickIntroLeft = 0x7CC;
            static constexpr std::uintptr_t bShouldPlayJumpTrickIntroRight = 0x7CD;
            static constexpr std::uintptr_t bStateRuleNeutralToJumpTrickLeft = 0x7CE;
            static constexpr std::uintptr_t bStateRuleNeutralToJumpTrickRight = 0x7CF;
            static constexpr std::uintptr_t bShouldJumpTrick = 0x7D0;
            static constexpr std::uintptr_t bHasJumpChargeStarted = 0x7D1;
            static constexpr std::uintptr_t bIsJumpTrickLanding = 0x7D2;
            static constexpr std::uintptr_t bWasSoloJumping = 0x7D3;
            static constexpr std::uintptr_t bWasStoppieLanding = 0x7D4;
            static constexpr std::uintptr_t UpperBodyBlendAlpha = 0x7D8;
            static constexpr std::uintptr_t StoredJumpTrickIntroPosition = 0x7DC;
            static constexpr std::uintptr_t JumpTrickIntroPosition = 0x7E0;
            static constexpr std::uintptr_t JumpChargeLegIKAlpha = 0x7E4;
            static constexpr std::uintptr_t ScytheMontage = 0x7E8;
            static constexpr std::uintptr_t JumpTrickIntroPositionCurveName = 0x800;
            static constexpr std::uintptr_t FallStartCachedTime = 0x804;
            static constexpr std::uintptr_t TrickCachedTime = 0x818;
        };

        inline static constexpr std::array<PropertyInfo, 67> Properties{{
            {"bHasMoved", 0x770, "BoolProperty"},
            {"SteeringRotation", 0x774, "FloatProperty"},
            {"bIsInInventoryMode", 0x778, "BoolProperty"},
            {"bShouldJump", 0x779, "BoolProperty"},
            {"bShouldAllowHeadAO", 0x77A, "BoolProperty"},
            {"FeetDragPlayRate", 0x77C, "FloatProperty"},
            {"bShouldJumpCharge", 0x780, "BoolProperty"},
            {"bIsLandingInPlace", 0x781, "BoolProperty"},
            {"bStateRuleFallingToMoving", 0x782, "BoolProperty"},
            {"bShouldApplyChargingNoise", 0x783, "BoolProperty"},
            {"JumpTimer", 0x784, "FloatProperty"},
            {"bShouldAllowJump", 0x788, "BoolProperty"},
            {"bIsSurfaceWater", 0x789, "BoolProperty"},
            {"bSlopeAlphaShouldIncrease", 0x78A, "BoolProperty"},
            {"SlopeAlpha", 0x78C, "FloatProperty"},
            {"bHasPassenger", 0x790, "BoolProperty"},
            {"bIsOneHandedDualWield", 0x791, "BoolProperty"},
            {"bShouldApplyBodyTwistForMelee", 0x792, "BoolProperty"},
            {"bIsMelee", 0x793, "BoolProperty"},
            {"bIsRangedOrConsumable", 0x794, "BoolProperty"},
            {"bShouldApplyFeetNoise", 0x795, "BoolProperty"},
            {"CachedFallingStartTime", 0x798, "FloatProperty"},
            {"bWasFalling", 0x79C, "BoolProperty"},
            {"bIsRevving", 0x79D, "BoolProperty"},
            {"StoppieLeanAlpha", 0x7A0, "FloatProperty"},
            {"bShouldPlayMovingJump", 0x7A4, "BoolProperty"},
            {"bWasJumpTrickLeftOrRight", 0x7A5, "BoolProperty"},
            {"bIsFromJumpTrick", 0x7A6, "BoolProperty"},
            {"bShouldAllowMovingJumpLand", 0x7A7, "BoolProperty"},
            {"bStateTransitionRuleToReverseLoop", 0x7A8, "BoolProperty"},
            {"bIsReverseNoFeet", 0x7A9, "BoolProperty"},
            {"WalkSPlayRate", 0x7AC, "FloatProperty"},
            {"LeanSpeed", 0x7B0, "FloatProperty"},
            {"LeanAlpha", 0x7B4, "FloatProperty"},
            {"bIsCombatTransition", 0x7B8, "BoolProperty"},
            {"bShouldBrake", 0x7B9, "BoolProperty"},
            {"bShouldExitFromLocomotion", 0x7BA, "BoolProperty"},
            {"bEarlyOutBrakingOutro", 0x7BB, "BoolProperty"},
            {"bIsRightInput", 0x7BC, "BoolProperty"},
            {"bShouldPlayReverseOutro", 0x7BD, "BoolProperty"},
            {"bShouldApplyHipSuspension", 0x7BE, "BoolProperty"},
            {"bIsDefaultJumpTrick", 0x7BF, "BoolProperty"},
            {"bIsLeftJumpTrick", 0x7C0, "BoolProperty"},
            {"bIsRightJumpTrick", 0x7C1, "BoolProperty"},
            {"bIsNoneJumpTrick", 0x7C2, "BoolProperty"},
            {"bIsSoloJumpTrick", 0x7C3, "BoolProperty"},
            {"bShouldExitFromDefaultJumpTrick", 0x7C4, "BoolProperty"},
            {"bEarlyOutFromMoveStart", 0x7C5, "BoolProperty"},
            {"bShouldStop", 0x7C6, "BoolProperty"},
            {"CachedTrickIntroTime", 0x7C8, "FloatProperty"},
            {"bShouldPlayJumpTrickIntroLeft", 0x7CC, "BoolProperty"},
            {"bShouldPlayJumpTrickIntroRight", 0x7CD, "BoolProperty"},
            {"bStateRuleNeutralToJumpTrickLeft", 0x7CE, "BoolProperty"},
            {"bStateRuleNeutralToJumpTrickRight", 0x7CF, "BoolProperty"},
            {"bShouldJumpTrick", 0x7D0, "BoolProperty"},
            {"bHasJumpChargeStarted", 0x7D1, "BoolProperty"},
            {"bIsJumpTrickLanding", 0x7D2, "BoolProperty"},
            {"bWasSoloJumping", 0x7D3, "BoolProperty"},
            {"bWasStoppieLanding", 0x7D4, "BoolProperty"},
            {"UpperBodyBlendAlpha", 0x7D8, "FloatProperty"},
            {"StoredJumpTrickIntroPosition", 0x7DC, "FloatProperty"},
            {"JumpTrickIntroPosition", 0x7E0, "FloatProperty"},
            {"JumpChargeLegIKAlpha", 0x7E4, "FloatProperty"},
            {"ScytheMontage", 0x7E8, "StructProperty"},
            {"JumpTrickIntroPositionCurveName", 0x800, "NameProperty"},
            {"FallStartCachedTime", 0x804, "StructProperty"},
            {"TrickCachedTime", 0x818, "StructProperty"},
        }};
    };

    struct FortPlayerAnimInstance_MotorcyclePassenger
    {
        static constexpr std::string_view Name = "FortPlayerAnimInstance_MotorcyclePassenger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstance_MotorcycleRider";
        struct Offsets
        {
            static constexpr std::uintptr_t DriverAnimInstance = 0x770;
            static constexpr std::uintptr_t bHasDriver = 0x778;
            static constexpr std::uintptr_t bIsDriverJumping = 0x779;
            static constexpr std::uintptr_t bIsDriverInventoryMode = 0x77A;
            static constexpr std::uintptr_t bIsSeatedAction = 0x77B;
            static constexpr std::uintptr_t bIsThrowingConsumable = 0x77C;
            static constexpr std::uintptr_t bEarlyOutStoppieOutro = 0x77D;
            static constexpr std::uintptr_t RunForwardAlpha = 0x780;
            static constexpr std::uintptr_t bAimFWD = 0x784;
            static constexpr std::uintptr_t bAimBWD = 0x785;
            static constexpr std::uintptr_t bAimLFT = 0x786;
            static constexpr std::uintptr_t bAimRGT = 0x787;
            static constexpr std::uintptr_t AimFWDDeltaAngleDegrees = 0x788;
            static constexpr std::uintptr_t AimBWDDeltaAngleDegrees = 0x78C;
            static constexpr std::uintptr_t AimLFTDeltaAngleDegrees = 0x790;
            static constexpr std::uintptr_t AimRGTDeltaAngleDegrees = 0x794;
            static constexpr std::uintptr_t bShouldJump = 0x798;
            static constexpr std::uintptr_t bShouldApplySlopeCorrection = 0x799;
            static constexpr std::uintptr_t bShouldExitFromLocomotion = 0x79A;
            static constexpr std::uintptr_t JumpIntroCachedTime = 0x79C;
            static constexpr std::uintptr_t CachedJumpIntroTime = 0x7B0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"DriverAnimInstance", 0x770, "ObjectProperty"},
            {"bHasDriver", 0x778, "BoolProperty"},
            {"bIsDriverJumping", 0x779, "BoolProperty"},
            {"bIsDriverInventoryMode", 0x77A, "BoolProperty"},
            {"bIsSeatedAction", 0x77B, "BoolProperty"},
            {"bIsThrowingConsumable", 0x77C, "BoolProperty"},
            {"bEarlyOutStoppieOutro", 0x77D, "BoolProperty"},
            {"RunForwardAlpha", 0x780, "FloatProperty"},
            {"bAimFWD", 0x784, "BoolProperty"},
            {"bAimBWD", 0x785, "BoolProperty"},
            {"bAimLFT", 0x786, "BoolProperty"},
            {"bAimRGT", 0x787, "BoolProperty"},
            {"AimFWDDeltaAngleDegrees", 0x788, "FloatProperty"},
            {"AimBWDDeltaAngleDegrees", 0x78C, "FloatProperty"},
            {"AimLFTDeltaAngleDegrees", 0x790, "FloatProperty"},
            {"AimRGTDeltaAngleDegrees", 0x794, "FloatProperty"},
            {"bShouldJump", 0x798, "BoolProperty"},
            {"bShouldApplySlopeCorrection", 0x799, "BoolProperty"},
            {"bShouldExitFromLocomotion", 0x79A, "BoolProperty"},
            {"JumpIntroCachedTime", 0x79C, "StructProperty"},
            {"CachedJumpIntroTime", 0x7B0, "FloatProperty"},
        }};
    };

    struct FortPlayerAnimInstance_MotorcycleRider
    {
        static constexpr std::string_view Name = "FortPlayerAnimInstance_MotorcycleRider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Motorcycle = 0x350;
            static constexpr std::uintptr_t MotorcycleAnimInstance = 0x358;
            static constexpr std::uintptr_t MotorcycleInput = 0x360;
            static constexpr std::uintptr_t FortPlayerPawn = 0x3B8;
            static constexpr std::uintptr_t WorldVelocity = 0x3C0;
            static constexpr std::uintptr_t LocalVelocity = 0x3D8;
            static constexpr std::uintptr_t RightHandIKAlpha = 0x3F0;
            static constexpr std::uintptr_t LeftHandIKAlpha = 0x3F4;
            static constexpr std::uintptr_t Speed2D = 0x3F8;
            static constexpr std::uintptr_t LocomotionCardinalDirection = 0x3FC;
            static constexpr std::uintptr_t bIsJumping = 0x3FD;
            static constexpr std::uintptr_t bIsReloading = 0x3FD;
            static constexpr std::uintptr_t RiderCatchupRotation = 0x400;
            static constexpr std::uintptr_t RiderZDisplacement = 0x420;
            static constexpr std::uintptr_t RiderDisplacementDampUpFactor = 0x424;
            static constexpr std::uintptr_t RiderDisplacementDampDownFactor = 0x428;
            static constexpr std::uintptr_t RiderDisplacementLandingFallDistanceThreshold = 0x42C;
            static constexpr std::uintptr_t RiderMinDisplacement = 0x430;
            static constexpr std::uintptr_t RiderMaxDisplacement = 0x434;
            static constexpr std::uintptr_t RiderDisplacementRampPerSecond = 0x438;
            static constexpr std::uintptr_t RiderRotationInterpSpeed = 0x43C;
            static constexpr std::uintptr_t VelocityImpact = 0x440;
            static constexpr std::uintptr_t ImpactDisplacement = 0x530;
            static constexpr std::uintptr_t AbsSteerAngle = 0x548;
            static constexpr std::uintptr_t LeanAngle = 0x54C;
            static constexpr std::uintptr_t FallDistanceValue = 0x550;
            static constexpr std::uintptr_t FootTraceLocation = 0x558;
            static constexpr std::uintptr_t FootTraceSideOffset = 0x570;
            static constexpr std::uintptr_t MaxFootLocationDistance = 0x574;
            static constexpr std::uintptr_t bHasFootTrace = 0x578;
            static constexpr std::uintptr_t bInAir = 0x579;
            static constexpr std::uintptr_t bIsInRollAngleThreshold = 0x57A;
            static constexpr std::uintptr_t bIsDriveStarting = 0x57B;
            static constexpr std::uintptr_t LocalLeftOffset = 0x580;
            static constexpr std::uintptr_t WorldPosLeft = 0x598;
            static constexpr std::uintptr_t LocalRotLeftOffset = 0x5B0;
            static constexpr std::uintptr_t WorldRotLeft = 0x5C8;
            static constexpr std::uintptr_t LocalRightOffset = 0x5E0;
            static constexpr std::uintptr_t WorldPosRight = 0x5F8;
            static constexpr std::uintptr_t LocalRotRightOffset = 0x610;
            static constexpr std::uintptr_t WorldRotRight = 0x628;
            static constexpr std::uintptr_t bIsSteeringRotating = 0x640;
            static constexpr std::uintptr_t bIsStopped = 0x641;
            static constexpr std::uintptr_t bIsIdle = 0x642;
            static constexpr std::uintptr_t IdleSpeedKmh = 0x644;
            static constexpr std::uintptr_t bIsSlowingDown = 0x648;
            static constexpr std::uintptr_t bIsDrivingFast = 0x649;
            static constexpr std::uintptr_t bIsTurningRightHard = 0x64A;
            static constexpr std::uintptr_t bIsTurningLeftHard = 0x64B;
            static constexpr std::uintptr_t bIsBraking = 0x64C;
            static constexpr std::uintptr_t bIsBoosting = 0x64E;
            static constexpr std::uintptr_t bIsJumpTrick = 0x64F;
            static constexpr std::uintptr_t JumpPlayRate = 0x650;
            static constexpr std::uintptr_t bIsJumpFlipping = 0x654;
            static constexpr std::uintptr_t bShouldEnableAO = 0x655;
            static constexpr std::uintptr_t bIsBodyDragging = 0x656;
            static constexpr std::uintptr_t FallDistanceJumpingThreshold = 0x658;
            static constexpr std::uintptr_t FallDistanceJumpTrickThreshold = 0x65C;
            static constexpr std::uintptr_t RollAngleThreshold = 0x660;
            static constexpr std::uintptr_t StartSpeedThreshold = 0x664;
            static constexpr std::uintptr_t SlowingSpeedThreshold = 0x668;
            static constexpr std::uintptr_t FastSpeedThreshold = 0x66C;
            static constexpr std::uintptr_t BrakingDeltaThreshold = 0x670;
            static constexpr std::uintptr_t SteerHardAngleThreshold = 0x674;
            static constexpr std::uintptr_t GroundTraceUpOffset = 0x678;
            static constexpr std::uintptr_t GroundTraceLength = 0x67C;
            static constexpr std::uintptr_t JumpPlayRateInRange = 0x680;
            static constexpr std::uintptr_t JumpPlayRateOutRange = 0x690;
            static constexpr std::uintptr_t JumpChargeFactor = 0x6A0;
            static constexpr std::uintptr_t bIsChargingJump = 0x6A4;
            static constexpr std::uintptr_t bIsMotorcycleJumping = 0x6A5;
            static constexpr std::uintptr_t bMotorcycleLaunchedJump = 0x6A6;
            static constexpr std::uintptr_t bWheelie = 0x6A7;
            static constexpr std::uintptr_t bStoppie = 0x6A8;
            static constexpr std::uintptr_t AirTrickType = 0x6A9;
            static constexpr std::uintptr_t bIsJumpingAndNotRolling = 0x6AA;
            static constexpr std::uintptr_t bIsOnGroundAndNotRolling = 0x6AB;
            static constexpr std::uintptr_t bIsOnGroundAndBoosting = 0x6AC;
            static constexpr std::uintptr_t bIsPowerSliding = 0x6AD;
            static constexpr std::uintptr_t PowerSlideSteeringAngleThreshold = 0x6B0;
            static constexpr std::uintptr_t PowerSlideSpeedThreshold = 0x6B4;
            static constexpr std::uintptr_t LandStartPosInRange = 0x6C0;
            static constexpr std::uintptr_t LandStartPosOutRange = 0x6D0;
            static constexpr std::uintptr_t LandStartPosition = 0x6E0;
            static constexpr std::uintptr_t bShouldPawnStandUp = 0x6E4;
            static constexpr std::uintptr_t bIsSmoothingYaw = 0x6E5;
            static constexpr std::uintptr_t AimPitch = 0x6E8;
            static constexpr std::uintptr_t AimYaw = 0x6EC;
            static constexpr std::uintptr_t AimYawLastFrame = 0x6F0;
            static constexpr std::uintptr_t AimYawSmoothed = 0x6F4;
            static constexpr std::uintptr_t BodyAimYaw = 0x6F8;
            static constexpr std::uintptr_t NegativeBodyAimYaw = 0x6FC;
            static constexpr std::uintptr_t ForwardSpeed = 0x700;
            static constexpr std::uintptr_t PreviousForwardSpeed = 0x704;
            static constexpr std::uintptr_t TotalSpeed = 0x708;
            static constexpr std::uintptr_t bIsReversing = 0x70C;
            static constexpr std::uintptr_t bIsMoving = 0x70D;
            static constexpr std::uintptr_t bIsInAir = 0x70E;
            static constexpr std::uintptr_t bIsUsingConsumable = 0x70F;
            static constexpr std::uintptr_t IntroCachedTime = 0x710;
            static constexpr std::uintptr_t StoppieLandTime = 0x724;
            static constexpr std::uintptr_t bShouldPlayHitReact = 0x728;
            static constexpr std::uintptr_t bIsPlayingMontage = 0x729;
            static constexpr std::uintptr_t VehiclePitch = 0x72C;
            static constexpr std::uintptr_t VehicleRoll = 0x730;
            static constexpr std::uintptr_t MeleeTwistRot = 0x738;
            static constexpr std::uintptr_t bStateTransitionRuleToMovingLoop = 0x750;
            static constexpr std::uintptr_t UpperBodyAdditiveAlpha = 0x754;
            static constexpr std::uintptr_t UpperBodyAdditiveStrength = 0x758;
            static constexpr std::uintptr_t MovingNoisePlayRate = 0x75C;
            static constexpr std::uintptr_t bIsFemale = 0x760;
        };

        inline static constexpr std::array<PropertyInfo, 111> Properties{{
            {"Motorcycle", 0x350, "ObjectProperty"},
            {"MotorcycleAnimInstance", 0x358, "ObjectProperty"},
            {"MotorcycleInput", 0x360, "StructProperty"},
            {"FortPlayerPawn", 0x3B8, "ObjectProperty"},
            {"WorldVelocity", 0x3C0, "StructProperty"},
            {"LocalVelocity", 0x3D8, "StructProperty"},
            {"RightHandIKAlpha", 0x3F0, "FloatProperty"},
            {"LeftHandIKAlpha", 0x3F4, "FloatProperty"},
            {"Speed2D", 0x3F8, "FloatProperty"},
            {"LocomotionCardinalDirection", 0x3FC, "EnumProperty"},
            {"bIsJumping", 0x3FD, "BoolProperty"},
            {"bIsReloading", 0x3FD, "BoolProperty"},
            {"RiderCatchupRotation", 0x400, "StructProperty"},
            {"RiderZDisplacement", 0x420, "FloatProperty"},
            {"RiderDisplacementDampUpFactor", 0x424, "FloatProperty"},
            {"RiderDisplacementDampDownFactor", 0x428, "FloatProperty"},
            {"RiderDisplacementLandingFallDistanceThreshold", 0x42C, "FloatProperty"},
            {"RiderMinDisplacement", 0x430, "FloatProperty"},
            {"RiderMaxDisplacement", 0x434, "FloatProperty"},
            {"RiderDisplacementRampPerSecond", 0x438, "FloatProperty"},
            {"RiderRotationInterpSpeed", 0x43C, "FloatProperty"},
            {"VelocityImpact", 0x440, "StructProperty"},
            {"ImpactDisplacement", 0x530, "StructProperty"},
            {"AbsSteerAngle", 0x548, "FloatProperty"},
            {"LeanAngle", 0x54C, "FloatProperty"},
            {"FallDistanceValue", 0x550, "FloatProperty"},
            {"FootTraceLocation", 0x558, "StructProperty"},
            {"FootTraceSideOffset", 0x570, "FloatProperty"},
            {"MaxFootLocationDistance", 0x574, "FloatProperty"},
            {"bHasFootTrace", 0x578, "BoolProperty"},
            {"bInAir", 0x579, "BoolProperty"},
            {"bIsInRollAngleThreshold", 0x57A, "BoolProperty"},
            {"bIsDriveStarting", 0x57B, "BoolProperty"},
            {"LocalLeftOffset", 0x580, "StructProperty"},
            {"WorldPosLeft", 0x598, "StructProperty"},
            {"LocalRotLeftOffset", 0x5B0, "StructProperty"},
            {"WorldRotLeft", 0x5C8, "StructProperty"},
            {"LocalRightOffset", 0x5E0, "StructProperty"},
            {"WorldPosRight", 0x5F8, "StructProperty"},
            {"LocalRotRightOffset", 0x610, "StructProperty"},
            {"WorldRotRight", 0x628, "StructProperty"},
            {"bIsSteeringRotating", 0x640, "BoolProperty"},
            {"bIsStopped", 0x641, "BoolProperty"},
            {"bIsIdle", 0x642, "BoolProperty"},
            {"IdleSpeedKmh", 0x644, "FloatProperty"},
            {"bIsSlowingDown", 0x648, "BoolProperty"},
            {"bIsDrivingFast", 0x649, "BoolProperty"},
            {"bIsTurningRightHard", 0x64A, "BoolProperty"},
            {"bIsTurningLeftHard", 0x64B, "BoolProperty"},
            {"bIsBraking", 0x64C, "BoolProperty"},
            {"bIsBoosting", 0x64E, "BoolProperty"},
            {"bIsJumpTrick", 0x64F, "BoolProperty"},
            {"JumpPlayRate", 0x650, "FloatProperty"},
            {"bIsJumpFlipping", 0x654, "BoolProperty"},
            {"bShouldEnableAO", 0x655, "BoolProperty"},
            {"bIsBodyDragging", 0x656, "BoolProperty"},
            {"FallDistanceJumpingThreshold", 0x658, "FloatProperty"},
            {"FallDistanceJumpTrickThreshold", 0x65C, "FloatProperty"},
            {"RollAngleThreshold", 0x660, "FloatProperty"},
            {"StartSpeedThreshold", 0x664, "FloatProperty"},
            {"SlowingSpeedThreshold", 0x668, "FloatProperty"},
            {"FastSpeedThreshold", 0x66C, "FloatProperty"},
            {"BrakingDeltaThreshold", 0x670, "FloatProperty"},
            {"SteerHardAngleThreshold", 0x674, "FloatProperty"},
            {"GroundTraceUpOffset", 0x678, "FloatProperty"},
            {"GroundTraceLength", 0x67C, "FloatProperty"},
            {"JumpPlayRateInRange", 0x680, "StructProperty"},
            {"JumpPlayRateOutRange", 0x690, "StructProperty"},
            {"JumpChargeFactor", 0x6A0, "FloatProperty"},
            {"bIsChargingJump", 0x6A4, "BoolProperty"},
            {"bIsMotorcycleJumping", 0x6A5, "BoolProperty"},
            {"bMotorcycleLaunchedJump", 0x6A6, "BoolProperty"},
            {"bWheelie", 0x6A7, "BoolProperty"},
            {"bStoppie", 0x6A8, "BoolProperty"},
            {"AirTrickType", 0x6A9, "EnumProperty"},
            {"bIsJumpingAndNotRolling", 0x6AA, "BoolProperty"},
            {"bIsOnGroundAndNotRolling", 0x6AB, "BoolProperty"},
            {"bIsOnGroundAndBoosting", 0x6AC, "BoolProperty"},
            {"bIsPowerSliding", 0x6AD, "BoolProperty"},
            {"PowerSlideSteeringAngleThreshold", 0x6B0, "FloatProperty"},
            {"PowerSlideSpeedThreshold", 0x6B4, "FloatProperty"},
            {"LandStartPosInRange", 0x6C0, "StructProperty"},
            {"LandStartPosOutRange", 0x6D0, "StructProperty"},
            {"LandStartPosition", 0x6E0, "FloatProperty"},
            {"bShouldPawnStandUp", 0x6E4, "BoolProperty"},
            {"bIsSmoothingYaw", 0x6E5, "BoolProperty"},
            {"AimPitch", 0x6E8, "FloatProperty"},
            {"AimYaw", 0x6EC, "FloatProperty"},
            {"AimYawLastFrame", 0x6F0, "FloatProperty"},
            {"AimYawSmoothed", 0x6F4, "FloatProperty"},
            {"BodyAimYaw", 0x6F8, "FloatProperty"},
            {"NegativeBodyAimYaw", 0x6FC, "FloatProperty"},
            {"ForwardSpeed", 0x700, "FloatProperty"},
            {"PreviousForwardSpeed", 0x704, "FloatProperty"},
            {"TotalSpeed", 0x708, "FloatProperty"},
            {"bIsReversing", 0x70C, "BoolProperty"},
            {"bIsMoving", 0x70D, "BoolProperty"},
            {"bIsInAir", 0x70E, "BoolProperty"},
            {"bIsUsingConsumable", 0x70F, "BoolProperty"},
            {"IntroCachedTime", 0x710, "StructProperty"},
            {"StoppieLandTime", 0x724, "FloatProperty"},
            {"bShouldPlayHitReact", 0x728, "BoolProperty"},
            {"bIsPlayingMontage", 0x729, "BoolProperty"},
            {"VehiclePitch", 0x72C, "FloatProperty"},
            {"VehicleRoll", 0x730, "FloatProperty"},
            {"MeleeTwistRot", 0x738, "StructProperty"},
            {"bStateTransitionRuleToMovingLoop", 0x750, "BoolProperty"},
            {"UpperBodyAdditiveAlpha", 0x754, "FloatProperty"},
            {"UpperBodyAdditiveStrength", 0x758, "FloatProperty"},
            {"MovingNoisePlayRate", 0x75C, "FloatProperty"},
            {"bIsFemale", 0x760, "BoolProperty"},
        }};
    };

}
