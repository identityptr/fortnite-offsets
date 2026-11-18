#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ValetRuntime
{
    struct DagwoodNetworkPhysicsComponent
    {
        static constexpr std::string_view Name = "DagwoodNetworkPhysicsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkPhysicsState = 0xC0;
            static constexpr std::uintptr_t OnGeneratedLocalInputCmd = 0x150;
            static constexpr std::uintptr_t ReplicatedManagedState = 0x160;
            static constexpr std::uintptr_t InManagedState = 0x668;
            static constexpr std::uintptr_t OutManagedState = 0xB70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NetworkPhysicsState", 0xC0, "StructProperty"},
            {"OnGeneratedLocalInputCmd", 0x150, "MulticastInlineDelegateProperty"},
            {"ReplicatedManagedState", 0x160, "StructProperty"},
            {"InManagedState", 0x668, "StructProperty"},
            {"OutManagedState", 0xB70, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_OverrideValetVehicleParameters
    {
        static constexpr std::string_view Name = "FortAthenaMutator_OverrideValetVehicleParameters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t MinInitialVehicleFuelPercent = 0x2E8;
            static constexpr std::uintptr_t MaxInitialVehicleFuelPercent = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinInitialVehicleFuelPercent", 0x2E8, "StructProperty"},
            {"MaxInitialVehicleFuelPercent", 0x310, "StructProperty"},
        }};
    };

    struct FortCameraMode_Dagwood
    {
        static constexpr std::string_view Name = "FortCameraMode_Dagwood";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalCameraSpaceOffsetWhileTurning = 0x20A0;
            static constexpr std::uintptr_t SteeringAngleForMaxHorizontalOffset = 0x20A4;
            static constexpr std::uintptr_t InAirVerticalOffset = 0x20A8;
            static constexpr std::uintptr_t AirOffsetDampFactor = 0x20AC;
            static constexpr std::uintptr_t SpeedAlphaDampFactor = 0x20B0;
            static constexpr std::uintptr_t TimeInAirRequiredForVertOffset = 0x20B4;
            static constexpr std::uintptr_t VehicleBasePitch = 0x20B8;
            static constexpr std::uintptr_t HorizOffsetInterpSpeed = 0x20BC;
            static constexpr std::uintptr_t HorizOffsetInterpSpeedRecovery = 0x20C0;
            static constexpr std::uintptr_t CurrentSpeedAlpha = 0x20C4;
            static constexpr std::uintptr_t CurrentVerticalOffset = 0x20C8;
            static constexpr std::uintptr_t CurrentHorizontalOffset = 0x20CC;
            static constexpr std::uintptr_t TimeInAir = 0x20D0;
            static constexpr std::uintptr_t PreviousSpeed = 0x20D4;
            static constexpr std::uintptr_t AppliedPitch = 0x20D8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"HorizontalCameraSpaceOffsetWhileTurning", 0x20A0, "FloatProperty"},
            {"SteeringAngleForMaxHorizontalOffset", 0x20A4, "FloatProperty"},
            {"InAirVerticalOffset", 0x20A8, "FloatProperty"},
            {"AirOffsetDampFactor", 0x20AC, "FloatProperty"},
            {"SpeedAlphaDampFactor", 0x20B0, "FloatProperty"},
            {"TimeInAirRequiredForVertOffset", 0x20B4, "FloatProperty"},
            {"VehicleBasePitch", 0x20B8, "FloatProperty"},
            {"HorizOffsetInterpSpeed", 0x20BC, "FloatProperty"},
            {"HorizOffsetInterpSpeedRecovery", 0x20C0, "FloatProperty"},
            {"CurrentSpeedAlpha", 0x20C4, "FloatProperty"},
            {"CurrentVerticalOffset", 0x20C8, "FloatProperty"},
            {"CurrentHorizontalOffset", 0x20CC, "FloatProperty"},
            {"TimeInAir", 0x20D0, "FloatProperty"},
            {"PreviousSpeed", 0x20D4, "FloatProperty"},
            {"AppliedPitch", 0x20D8, "FloatProperty"},
        }};
    };

    struct FortContextualTutorial_VehicleValetLowFuel
    {
        static constexpr std::string_view Name = "FortContextualTutorial_VehicleValetLowFuel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualTutorial";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakMarkerActor = 0xD8;
            static constexpr std::uintptr_t MarkerText = 0xE0;
            static constexpr std::uintptr_t MarkerHighlightComponent = 0xF0;
            static constexpr std::uintptr_t TutorialDefinition = 0xF8;
            static constexpr std::uintptr_t OwnerController = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakMarkerActor", 0xD8, "WeakObjectProperty"},
            {"MarkerText", 0xE0, "TextProperty"},
            {"MarkerHighlightComponent", 0xF0, "WeakObjectProperty"},
            {"TutorialDefinition", 0xF8, "ObjectProperty"},
            {"OwnerController", 0x108, "ObjectProperty"},
        }};
    };

    struct FortDagwoodModsConfigs
    {
        static constexpr std::string_view Name = "FortDagwoodModsConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDagwoodVehicle
    {
        static constexpr std::string_view Name = "FortDagwoodVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKMotorVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartHandbrakeDelegate = 0x2188;
            static constexpr std::uintptr_t OnStopHandbrakeDelegate = 0x2198;
            static constexpr std::uintptr_t OnStartHandBrakeCatchupForceDelegate = 0x21A8;
            static constexpr std::uintptr_t HardLandingCameraShake = 0x21B8;
            static constexpr std::uintptr_t DriverCamShakeClass = 0x21C0;
            static constexpr std::uintptr_t HandBrakeCamShakeClass = 0x21C8;
            static constexpr std::uintptr_t VehicleClass = 0x21D0;
            static constexpr std::uintptr_t FadeDelay = 0x21D4;
            static constexpr std::uintptr_t FadeDuration = 0x21D8;
            static constexpr std::uintptr_t MinBrakeForceForSkid = 0x21DC;
            static constexpr std::uintptr_t MinForwardSpeedForSkid = 0x21E0;
            static constexpr std::uintptr_t SpeedLinesCueTag = 0x21E4;
            static constexpr std::uintptr_t FadeStartTime = 0x21E8;
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x21F0;
            static constexpr std::uintptr_t OnTireModHealthChanged = 0x21F8;
            static constexpr std::uintptr_t RechargeableBoostPercent = 0x2208;
            static constexpr std::uintptr_t SplatterSourceComp = 0x2210;
            static constexpr std::uintptr_t bEnableNativizedTick = 0x2218;
            static constexpr std::uintptr_t bShouldApplyPowerFunctionToMobileInput = 0x2219;
            static constexpr std::uintptr_t InputActionEBrake = 0x2220;
            static constexpr std::uintptr_t InputActionUseTurret = 0x2228;
            static constexpr std::uintptr_t NativeCollisionHitFxConfig = 0x2230;
            static constexpr std::uintptr_t NativeCollisionHapticsConfig = 0x2258;
            static constexpr std::uintptr_t PassengerLeanSockets = 0x22A8;
            static constexpr std::uintptr_t PassngerLeanRelativeOffsets = 0x22B8;
            static constexpr std::uintptr_t PassengerCameraModeClass = 0x22C8;
            static constexpr std::uintptr_t PassengerCameraModeClass_ADS = 0x22D0;
            static constexpr std::uintptr_t WheelSocketNames = 0x22D8;
            static constexpr std::uintptr_t FortDagwoodVehicleConfigs = 0x22E8;
            static constexpr std::uintptr_t RearShocks = 0x22F0;
            static constexpr std::uintptr_t OffroadEnvironmentDamageTags = 0x2300;
            static constexpr std::uintptr_t FireDamageTags = 0x2320;
            static constexpr std::uintptr_t NativeWheelScaleRear = 0x2340;
            static constexpr std::uintptr_t NativeWheelScaleFront = 0x2358;
            static constexpr std::uintptr_t NativeTireScaleRear = 0x2370;
            static constexpr std::uintptr_t NativeTireScaleFront = 0x2388;
            static constexpr std::uintptr_t bTireSmokeActive = 0x23A0;
            static constexpr std::uintptr_t bBoostFailed = 0x23A1;
            static constexpr std::uintptr_t bCanBoostPitch = 0x23A2;
            static constexpr std::uintptr_t AccelForceFeedbackHandle = 0x23A8;
            static constexpr std::uintptr_t SkidForceFeedbackHandle = 0x23B0;
            static constexpr std::uintptr_t BrakeForceFeedbackHandle = 0x23B8;
            static constexpr std::uintptr_t HandBrakeForceFeedbackHandle = 0x23C0;
            static constexpr std::uintptr_t SpringCompressionForceFeedback = 0x23C8;
            static constexpr std::uintptr_t bSpeedLinesActive = 0x23D0;
            static constexpr std::uintptr_t DagwoodRuntimeModifiedProperties = 0x23F0;
            static constexpr std::uintptr_t ServerRepWheelData = 0x2460;
            static constexpr std::uintptr_t FlipYawForwardTargetDirection = 0x2480;
            static constexpr std::uintptr_t FlipYawOriginalForward = 0x2498;
            static constexpr std::uintptr_t LastPoppedTire = 0x24B0;
            static constexpr std::uintptr_t RoadTopSpeedMultiplier = 0x24B4;
            static constexpr std::uintptr_t CurrentBumpiness = 0x24B8;
            static constexpr std::uintptr_t CurrentForwardAcceleration = 0x24BC;
            static constexpr std::uintptr_t PreviousTurnAlpha = 0x24C0;
            static constexpr std::uintptr_t CurrentCameraAssistStrength = 0x24C4;
            static constexpr std::uintptr_t LostGripTime = 0x24C8;
            static constexpr std::uintptr_t LostGripRightAlpha = 0x24CC;
            static constexpr std::uintptr_t HandbrakeTime = 0x24D0;
            static constexpr std::uintptr_t HandbrakeStartTime = 0x24D4;
            static constexpr std::uintptr_t HandbrakeEndTime = 0x24D8;
            static constexpr std::uintptr_t FlipYawMult = 0x24DC;
            static constexpr std::uintptr_t FlipTimer = 0x24E0;
            static constexpr std::uintptr_t FlipExplodeTimer = 0x24E4;
            static constexpr std::uintptr_t FlipPushForceTimer = 0x24E8;
            static constexpr std::uintptr_t FlipAirTimer = 0x24EC;
            static constexpr std::uintptr_t FlipLanding = 0x24F0;
            static constexpr std::uintptr_t FlipStartTime = 0x24F4;
            static constexpr std::uintptr_t LastFlipDamageTime = 0x24F8;
            static constexpr std::uintptr_t PreFlipControlLossTimer = 0x24FC;
            static constexpr std::uintptr_t bDidCinematicFlip = 0x2500;
            static constexpr std::uintptr_t bCanCinematicFlip = 0x2501;
            static constexpr std::uintptr_t bInPopTireVeer = 0x2502;
            static constexpr std::uintptr_t bInFlipRecovery = 0x2503;
            static constexpr std::uintptr_t bExplodeAfterFlip = 0x2504;
            static constexpr std::uintptr_t bLostGrip = 0x2505;
            static constexpr std::uintptr_t bApplyHandbrakeCatchupForce = 0x2507;
            static constexpr std::uintptr_t bDidHandbrakeCatchup = 0x2508;
            static constexpr std::uintptr_t bInFlipRoll = 0x2509;
            static constexpr std::uintptr_t bInFlipYaw = 0x250A;
            static constexpr std::uintptr_t bInFlipPitch = 0x250B;
            static constexpr std::uintptr_t bFlipDidLeaveGround = 0x250C;
            static constexpr std::uintptr_t bBreakBuildingsIfBlockingLeaningPassenger = 0x250D;
            static constexpr std::uintptr_t LeanBreakTimeAccumulator = 0x2510;
            static constexpr std::uintptr_t LeanBreakCheckInterval = 0x2514;
            static constexpr std::uintptr_t SeatToWindowShapeNames = 0x2518;
            static constexpr std::uintptr_t OffroadCameraShakeInstance = 0x2528;
            static constexpr std::uintptr_t DriverCameraShakeInstance = 0x2530;
            static constexpr std::uintptr_t AccelCameraShakeInstance = 0x2538;
            static constexpr std::uintptr_t HandBrakeCameraShakeInstance = 0x2540;
            static constexpr std::uintptr_t NativeComp_RoadAndExhaust = 0x2548;
            static constexpr std::uintptr_t CachedAmbientExhaustFXComponent = 0x2550;
            static constexpr std::uintptr_t NativeComp_TireSkid = 0x2568;
            static constexpr std::uintptr_t NativeComp_Damage = 0x2570;
            static constexpr std::uintptr_t NativeComp_SpeedLines = 0x2578;
            static constexpr std::uintptr_t NativeSys_SpeedLines = 0x2580;
            static constexpr std::uintptr_t NativeSys_TireSkid = 0x2588;
            static constexpr std::uintptr_t RoadAndExhaustSurfaceTypeArrayForFX = 0x2590;
            static constexpr std::uintptr_t RoadAndExhaustPeelOutColorIndexName = 0x25A0;
            static constexpr std::uintptr_t BrakeLightsName = 0x25A4;
            static constexpr std::uintptr_t FakeTireStates = 0x25B8;
            static constexpr std::uintptr_t ActivePoppedTireReaction = 0x25C8;
            static constexpr std::uintptr_t ReplicatedPoppedTireReaction = 0x25C9;
            static constexpr std::uintptr_t ValetAudio = 0x25CC;
            static constexpr std::uintptr_t TireMeshes = 0x25D8;
            static constexpr std::uintptr_t FakeTireMeshes = 0x25E8;
            static constexpr std::uintptr_t bIsInoperable = 0x25FC;
            static constexpr std::uintptr_t RandomSeed = 0x2600;
            static constexpr std::uintptr_t RandStream = 0x2604;
            static constexpr std::uintptr_t bHasTraction = 0x260C;
            static constexpr std::uintptr_t bStartHandBrakeCatchupForce = 0x260D;
            static constexpr std::uintptr_t bClientUsesSelfDestructTimer = 0x2710;
            static constexpr std::uintptr_t bSelfDestructEnabled = 0x2710;
            static constexpr std::uintptr_t TireBootMesh = 0x2718;
            static constexpr std::uintptr_t MapSelfDestructActionDefForUI = 0x2720;
            static constexpr std::uintptr_t MinimumTimeBetweenSelfDestructPromptChanges = 0x2730;
            static constexpr std::uintptr_t BoostEmissiveOnDuration = 0x277C;
            static constexpr std::uintptr_t BoostEmissiveOffDuration = 0x2780;
            static constexpr std::uintptr_t BoostCameraFoVCurve = 0x2790;
            static constexpr std::uintptr_t BoostCameraRumbleCurve = 0x2798;
            static constexpr std::uintptr_t bIsBoostCameraActive = 0x27A0;
            static constexpr std::uintptr_t BoostCameraFoVRumbleTweenDuration = 0x27A4;
            static constexpr std::uintptr_t BoostCameraMaxFoV = 0x27A8;
            static constexpr std::uintptr_t BoostCameraRumbleDuration = 0x27AC;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x27F8;
        };

        inline static constexpr std::array<PropertyInfo, 124> Properties{{
            {"OnStartHandbrakeDelegate", 0x2188, "MulticastInlineDelegateProperty"},
            {"OnStopHandbrakeDelegate", 0x2198, "MulticastInlineDelegateProperty"},
            {"OnStartHandBrakeCatchupForceDelegate", 0x21A8, "MulticastInlineDelegateProperty"},
            {"HardLandingCameraShake", 0x21B8, "ClassProperty"},
            {"DriverCamShakeClass", 0x21C0, "ClassProperty"},
            {"HandBrakeCamShakeClass", 0x21C8, "ClassProperty"},
            {"VehicleClass", 0x21D0, "EnumProperty"},
            {"FadeDelay", 0x21D4, "FloatProperty"},
            {"FadeDuration", 0x21D8, "FloatProperty"},
            {"MinBrakeForceForSkid", 0x21DC, "FloatProperty"},
            {"MinForwardSpeedForSkid", 0x21E0, "FloatProperty"},
            {"SpeedLinesCueTag", 0x21E4, "StructProperty"},
            {"FadeStartTime", 0x21E8, "FloatProperty"},
            {"NetworkPhysicsComponent", 0x21F0, "ObjectProperty"},
            {"OnTireModHealthChanged", 0x21F8, "MulticastInlineDelegateProperty"},
            {"RechargeableBoostPercent", 0x2208, "FloatProperty"},
            {"SplatterSourceComp", 0x2210, "ObjectProperty"},
            {"bEnableNativizedTick", 0x2218, "BoolProperty"},
            {"bShouldApplyPowerFunctionToMobileInput", 0x2219, "BoolProperty"},
            {"InputActionEBrake", 0x2220, "ObjectProperty"},
            {"InputActionUseTurret", 0x2228, "ObjectProperty"},
            {"NativeCollisionHitFxConfig", 0x2230, "OptionalProperty"},
            {"NativeCollisionHapticsConfig", 0x2258, "OptionalProperty"},
            {"PassengerLeanSockets", 0x22A8, "ArrayProperty"},
            {"PassngerLeanRelativeOffsets", 0x22B8, "ArrayProperty"},
            {"PassengerCameraModeClass", 0x22C8, "ClassProperty"},
            {"PassengerCameraModeClass_ADS", 0x22D0, "ClassProperty"},
            {"WheelSocketNames", 0x22D8, "ArrayProperty"},
            {"FortDagwoodVehicleConfigs", 0x22E8, "ObjectProperty"},
            {"RearShocks", 0x22F0, "ArrayProperty"},
            {"OffroadEnvironmentDamageTags", 0x2300, "StructProperty"},
            {"FireDamageTags", 0x2320, "StructProperty"},
            {"NativeWheelScaleRear", 0x2340, "StructProperty"},
            {"NativeWheelScaleFront", 0x2358, "StructProperty"},
            {"NativeTireScaleRear", 0x2370, "StructProperty"},
            {"NativeTireScaleFront", 0x2388, "StructProperty"},
            {"bTireSmokeActive", 0x23A0, "BoolProperty"},
            {"bBoostFailed", 0x23A1, "BoolProperty"},
            {"bCanBoostPitch", 0x23A2, "BoolProperty"},
            {"AccelForceFeedbackHandle", 0x23A8, "UInt64Property"},
            {"SkidForceFeedbackHandle", 0x23B0, "UInt64Property"},
            {"BrakeForceFeedbackHandle", 0x23B8, "UInt64Property"},
            {"HandBrakeForceFeedbackHandle", 0x23C0, "UInt64Property"},
            {"SpringCompressionForceFeedback", 0x23C8, "ObjectProperty"},
            {"bSpeedLinesActive", 0x23D0, "BoolProperty"},
            {"DagwoodRuntimeModifiedProperties", 0x23F0, "StructProperty"},
            {"ServerRepWheelData", 0x2460, "ArrayProperty"},
            {"FlipYawForwardTargetDirection", 0x2480, "StructProperty"},
            {"FlipYawOriginalForward", 0x2498, "StructProperty"},
            {"LastPoppedTire", 0x24B0, "EnumProperty"},
            {"RoadTopSpeedMultiplier", 0x24B4, "FloatProperty"},
            {"CurrentBumpiness", 0x24B8, "FloatProperty"},
            {"CurrentForwardAcceleration", 0x24BC, "FloatProperty"},
            {"PreviousTurnAlpha", 0x24C0, "FloatProperty"},
            {"CurrentCameraAssistStrength", 0x24C4, "FloatProperty"},
            {"LostGripTime", 0x24C8, "FloatProperty"},
            {"LostGripRightAlpha", 0x24CC, "FloatProperty"},
            {"HandbrakeTime", 0x24D0, "FloatProperty"},
            {"HandbrakeStartTime", 0x24D4, "FloatProperty"},
            {"HandbrakeEndTime", 0x24D8, "FloatProperty"},
            {"FlipYawMult", 0x24DC, "FloatProperty"},
            {"FlipTimer", 0x24E0, "FloatProperty"},
            {"FlipExplodeTimer", 0x24E4, "FloatProperty"},
            {"FlipPushForceTimer", 0x24E8, "FloatProperty"},
            {"FlipAirTimer", 0x24EC, "FloatProperty"},
            {"FlipLanding", 0x24F0, "FloatProperty"},
            {"FlipStartTime", 0x24F4, "FloatProperty"},
            {"LastFlipDamageTime", 0x24F8, "FloatProperty"},
            {"PreFlipControlLossTimer", 0x24FC, "FloatProperty"},
            {"bDidCinematicFlip", 0x2500, "BoolProperty"},
            {"bCanCinematicFlip", 0x2501, "BoolProperty"},
            {"bInPopTireVeer", 0x2502, "BoolProperty"},
            {"bInFlipRecovery", 0x2503, "BoolProperty"},
            {"bExplodeAfterFlip", 0x2504, "BoolProperty"},
            {"bLostGrip", 0x2505, "BoolProperty"},
            {"bApplyHandbrakeCatchupForce", 0x2507, "BoolProperty"},
            {"bDidHandbrakeCatchup", 0x2508, "BoolProperty"},
            {"bInFlipRoll", 0x2509, "BoolProperty"},
            {"bInFlipYaw", 0x250A, "BoolProperty"},
            {"bInFlipPitch", 0x250B, "BoolProperty"},
            {"bFlipDidLeaveGround", 0x250C, "BoolProperty"},
            {"bBreakBuildingsIfBlockingLeaningPassenger", 0x250D, "BoolProperty"},
            {"LeanBreakTimeAccumulator", 0x2510, "FloatProperty"},
            {"LeanBreakCheckInterval", 0x2514, "FloatProperty"},
            {"SeatToWindowShapeNames", 0x2518, "ArrayProperty"},
            {"OffroadCameraShakeInstance", 0x2528, "ObjectProperty"},
            {"DriverCameraShakeInstance", 0x2530, "ObjectProperty"},
            {"AccelCameraShakeInstance", 0x2538, "ObjectProperty"},
            {"HandBrakeCameraShakeInstance", 0x2540, "ObjectProperty"},
            {"NativeComp_RoadAndExhaust", 0x2548, "ObjectProperty"},
            {"CachedAmbientExhaustFXComponent", 0x2550, "ObjectProperty"},
            {"NativeComp_TireSkid", 0x2568, "ObjectProperty"},
            {"NativeComp_Damage", 0x2570, "ObjectProperty"},
            {"NativeComp_SpeedLines", 0x2578, "ObjectProperty"},
            {"NativeSys_SpeedLines", 0x2580, "ObjectProperty"},
            {"NativeSys_TireSkid", 0x2588, "ObjectProperty"},
            {"RoadAndExhaustSurfaceTypeArrayForFX", 0x2590, "ArrayProperty"},
            {"RoadAndExhaustPeelOutColorIndexName", 0x25A0, "NameProperty"},
            {"BrakeLightsName", 0x25A4, "NameProperty"},
            {"FakeTireStates", 0x25B8, "ArrayProperty"},
            {"ActivePoppedTireReaction", 0x25C8, "EnumProperty"},
            {"ReplicatedPoppedTireReaction", 0x25C9, "EnumProperty"},
            {"ValetAudio", 0x25CC, "WeakObjectProperty"},
            {"TireMeshes", 0x25D8, "ArrayProperty"},
            {"FakeTireMeshes", 0x25E8, "ArrayProperty"},
            {"bIsInoperable", 0x25FC, "BoolProperty"},
            {"RandomSeed", 0x2600, "IntProperty"},
            {"RandStream", 0x2604, "StructProperty"},
            {"bHasTraction", 0x260C, "BoolProperty"},
            {"bStartHandBrakeCatchupForce", 0x260D, "BoolProperty"},
            {"bClientUsesSelfDestructTimer", 0x2710, "BoolProperty"},
            {"bSelfDestructEnabled", 0x2710, "BoolProperty"},
            {"TireBootMesh", 0x2718, "ObjectProperty"},
            {"MapSelfDestructActionDefForUI", 0x2720, "MapProperty"},
            {"MinimumTimeBetweenSelfDestructPromptChanges", 0x2730, "FloatProperty"},
            {"BoostEmissiveOnDuration", 0x277C, "FloatProperty"},
            {"BoostEmissiveOffDuration", 0x2780, "FloatProperty"},
            {"BoostCameraFoVCurve", 0x2790, "ObjectProperty"},
            {"BoostCameraRumbleCurve", 0x2798, "ObjectProperty"},
            {"bIsBoostCameraActive", 0x27A0, "BoolProperty"},
            {"BoostCameraFoVRumbleTweenDuration", 0x27A4, "FloatProperty"},
            {"BoostCameraMaxFoV", 0x27A8, "FloatProperty"},
            {"BoostCameraRumbleDuration", 0x27AC, "FloatProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x27F8, "IntProperty"},
        }};
    };

    struct FortDagwoodVehicleAnimInstance
    {
        static constexpr std::string_view Name = "FortDagwoodVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Dagwood = 0x510;
            static constexpr std::uintptr_t GlassScale_FR = 0x518;
            static constexpr std::uintptr_t GlassScale_FL = 0x530;
            static constexpr std::uintptr_t GlassScale_BR = 0x548;
            static constexpr std::uintptr_t GlassScale_BL = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Dagwood", 0x510, "ObjectProperty"},
            {"GlassScale_FR", 0x518, "StructProperty"},
            {"GlassScale_FL", 0x530, "StructProperty"},
            {"GlassScale_BR", 0x548, "StructProperty"},
            {"GlassScale_BL", 0x560, "StructProperty"},
        }};
    };

    struct FortDagwoodVehicleConfigs
    {
        static constexpr std::string_view Name = "FortDagwoodVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t VehiclePowerSlideFrontMultiplier = 0x990;
            static constexpr std::uintptr_t VehiclePowerSlideRearMultiplier = 0x994;
            static constexpr std::uintptr_t IceVehiclePowerSlideFrontMultiplier = 0x998;
            static constexpr std::uintptr_t IceVehiclePowerSlideRearMultiplier = 0x99C;
            static constexpr std::uintptr_t MudVehiclePowerSlideFrontMultiplier = 0x9A0;
            static constexpr std::uintptr_t MudVehiclePowerSlideRearMultiplier = 0x9A4;
            static constexpr std::uintptr_t bUseAccelerationLean = 0x9A8;
            static constexpr std::uintptr_t HandbrakeGripAngle = 0x9AC;
            static constexpr std::uintptr_t HandbrakeGripAngleRecovery = 0x9B0;
            static constexpr std::uintptr_t HandbrakeSpeedForGripLoss = 0x9B4;
            static constexpr std::uintptr_t MinSlipDuration = 0x9B8;
            static constexpr std::uintptr_t HandbrakeLateralFriction = 0x9BC;
            static constexpr std::uintptr_t HandbrakeSteeringMultiplier = 0x9C0;
            static constexpr std::uintptr_t HandbrakeFrictionDampFactor = 0x9C4;
            static constexpr std::uintptr_t RestoreTractionDampFactor = 0x9C8;
            static constexpr std::uintptr_t HandbrakeForce = 0x9CC;
            static constexpr std::uintptr_t HandbrakeForceNoAccel = 0x9D0;
            static constexpr std::uintptr_t bUseHandbrakeToDrift = 0x9D4;
            static constexpr std::uintptr_t DriftMinSpeedSteeringAngle = 0x9D8;
            static constexpr std::uintptr_t DriftMaxSpeedSteeringAngle = 0x9DC;
            static constexpr std::uintptr_t DriftFrontLateralFrictionMultiplier = 0x9E0;
            static constexpr std::uintptr_t DriftRearLateralFrictionMultiplier = 0x9E4;
            static constexpr std::uintptr_t DirtRoadTopSpeedMultiplier = 0x9E8;
            static constexpr std::uintptr_t DirtRoadFrontLateralFriction = 0x9EC;
            static constexpr std::uintptr_t DirtRoadRearLateralFriction = 0x9F0;
            static constexpr std::uintptr_t DirtRoadAccelForceMultiplier = 0x9F4;
            static constexpr std::uintptr_t OffRoadTopSpeedMultiplier = 0x9F8;
            static constexpr std::uintptr_t OffRoadFrontLateralFriction = 0x9FC;
            static constexpr std::uintptr_t OffRoadRearLateralFriction = 0xA00;
            static constexpr std::uintptr_t OffRoadPushForceMultiplier = 0xA04;
            static constexpr std::uintptr_t OffroadDamageImpactForceMin = 0xA08;
            static constexpr std::uintptr_t OffroadDamageImpactForceMax = 0xA0C;
            static constexpr std::uintptr_t OffroadImpactDamageMin = 0xA10;
            static constexpr std::uintptr_t OffroadImpactDamageMax = 0xA14;
            static constexpr std::uintptr_t MinSpeedForOffroadHandling = 0xA18;
            static constexpr std::uintptr_t SnowFrontLateralFriction = 0xA1C;
            static constexpr std::uintptr_t SnowRearLateralFriction = 0xA20;
            static constexpr std::uintptr_t IceFrontLateralFriction = 0xA24;
            static constexpr std::uintptr_t IceRearLateralFriction = 0xA28;
            static constexpr std::uintptr_t MudFrontLateralFriction = 0xA2C;
            static constexpr std::uintptr_t MudRearLateralFriction = 0xA30;
            static constexpr std::uintptr_t IcePushForceMultiplier = 0xA34;
            static constexpr std::uintptr_t IceBrakeForceMultiplier = 0xA38;
            static constexpr std::uintptr_t FireHealthPercentThreshold = 0xA3C;
            static constexpr std::uintptr_t OffroadRumbleIntensity = 0xA40;
            static constexpr std::uintptr_t DirtRoadRumbleIntensity = 0xA44;
            static constexpr std::uintptr_t OffroadDamageScaleExponent = 0xA48;
            static constexpr std::uintptr_t HardLandingThresholdMin = 0xA4C;
            static constexpr std::uintptr_t HardLandingThresholdMax = 0xA50;
            static constexpr std::uintptr_t HardLandingShakeZAmplitudeMin = 0xA54;
            static constexpr std::uintptr_t HardLandingShakeZAmplitudeMax = 0xA58;
            static constexpr std::uintptr_t SpeedLinesThreshold = 0xA5C;
            static constexpr std::uintptr_t PropDestructionImpulse = 0xA60;
            static constexpr std::uintptr_t DestructionAngle = 0xA64;
            static constexpr std::uintptr_t UpNormalMinProtected = 0xA68;
            static constexpr std::uintptr_t UpForwardMinProtected = 0xA6C;
            static constexpr std::uintptr_t NonCameraSteeringAngleMultiplier = 0xA70;
            static constexpr std::uintptr_t CameraAssistStrengthMax = 0xA74;
            static constexpr std::uintptr_t CameraAssistStrengthMin = 0xA78;
            static constexpr std::uintptr_t CameraAssistStrengthRecovery = 0xA7C;
            static constexpr std::uintptr_t CameraAssistInterpSpeed = 0xA80;
            static constexpr std::uintptr_t DriftExitPushForce = 0xA84;
            static constexpr std::uintptr_t DriftExitCatchupSpeed = 0xA88;
            static constexpr std::uintptr_t HandbrakeDurationRequiredForCatchup = 0xA8C;
            static constexpr std::uintptr_t ImpactMagnitudeToEndCatchup = 0xA90;
            static constexpr std::uintptr_t PoppedTireSpringLength = 0xA94;
            static constexpr std::uintptr_t PoppedTireSpringStiff = 0xA98;
            static constexpr std::uintptr_t PoppedTireSpringDamp = 0xA9C;
            static constexpr std::uintptr_t PoppedTireScrapeFrictionMultiplier = 0xAA0;
            static constexpr std::uintptr_t RimScrapeFlipRollMagnitude = 0xAA4;
            static constexpr std::uintptr_t RimScrapeFlipPitchMagnitude = 0xAA8;
            static constexpr std::uintptr_t SpeedForRimFlip = 0xAAC;
            static constexpr std::uintptr_t HealthPercentForFlip = 0xAB0;
            static constexpr std::uintptr_t FlipYawDuration = 0xAB4;
            static constexpr std::uintptr_t FlipRollDuration = 0xAB8;
            static constexpr std::uintptr_t FlipPitchDuration = 0xABC;
            static constexpr std::uintptr_t FlipExplodeDuration_Yaw = 0xAC0;
            static constexpr std::uintptr_t FlipExplodeDuration_Pitch = 0xAC4;
            static constexpr std::uintptr_t FlipPushForceDuration_Yaw = 0xAC8;
            static constexpr std::uintptr_t FlipPushForceDuration_Pitch = 0xACC;
            static constexpr std::uintptr_t FlipPushForcMultiplier = 0xAD0;
            static constexpr std::uintptr_t FlipPushForce_UpComponentPitch = 0xAD4;
            static constexpr std::uintptr_t FlipPushForce_UpComponentRoll = 0xAD8;
            static constexpr std::uintptr_t MinTimeInAirRequiredForExplodeLanding = 0xADC;
            static constexpr std::uintptr_t FlipYawSpringStiff = 0xAE0;
            static constexpr std::uintptr_t FlipYawSpringDamp = 0xAE4;
            static constexpr std::uintptr_t FlipYawSpringMaxAccel = 0xAE8;
            static constexpr std::uintptr_t HealthPercentForExplode = 0xAEC;
            static constexpr std::uintptr_t FlipRecoveryTime = 0xAF0;
            static constexpr std::uintptr_t FlipMaxDuration = 0xAF4;
            static constexpr std::uintptr_t FlipWiggleDuration = 0xAF8;
            static constexpr std::uintptr_t PoppedTireVeerDuration = 0xAFC;
            static constexpr std::uintptr_t PoppedTireVeerSteeringAngle = 0xB00;
            static constexpr std::uintptr_t FlipWiggleFrequency = 0xB04;
            static constexpr std::uintptr_t FlipWiggleSteeringAngle = 0xB08;
            static constexpr std::uintptr_t FlipYawAngleThreshold = 0xB0C;
            static constexpr std::uintptr_t AirGlideTurnForceMultiplier = 0xB10;
            static constexpr std::uintptr_t AnalogDriftStickThreshold = 0xB14;
            static constexpr std::uintptr_t TireBootRightSocketName = 0xB18;
            static constexpr std::uintptr_t TireBootLeftSocketName = 0xB1C;
            static constexpr std::uintptr_t TireBootRelativeDistance = 0xB20;
            static constexpr std::uintptr_t TireSocketNames = 0xB28;
            static constexpr std::uintptr_t TireBoneNames = 0xB38;
            static constexpr std::uintptr_t RearTireIndices = 0xB48;
            static constexpr std::uintptr_t RightSideTires = 0xB58;
            static constexpr std::uintptr_t FakeTireIndices = 0xB68;
            static constexpr std::uintptr_t bNoWheels = 0xB78;
            static constexpr std::uintptr_t NoWheelsSpringLenMult = 0xB7C;
            static constexpr std::uintptr_t NoWheelsBonesToHide = 0xB80;
            static constexpr std::uintptr_t ForwardChangeDirectionBrakeForceMultiplier = 0xB90;
            static constexpr std::uintptr_t ForwardChangeDirectionSpeedThreshold = 0xBB8;
            static constexpr std::uintptr_t ReverseChangeDirectionBrakeForceMultiplier = 0xBE0;
            static constexpr std::uintptr_t ReverseChangeDirectionSpeedThreshold = 0xC08;
            static constexpr std::uintptr_t UsesBoost = 0xC30;
            static constexpr std::uintptr_t StartWithFullBoost = 0xC58;
            static constexpr std::uintptr_t Boost_MinPushForce = 0xC80;
            static constexpr std::uintptr_t Boost_TopSpeedForceMultiplier = 0xCA8;
            static constexpr std::uintptr_t Boost_TopSpeedMultiplier = 0xCD0;
            static constexpr std::uintptr_t Boost_SteeringMultiplier = 0xCF8;
            static constexpr std::uintptr_t Boost_WaterMultiplier = 0xD20;
            static constexpr std::uintptr_t Boost_ForceInAir = 0xD48;
            static constexpr std::uintptr_t Boost_AirMaxSpeed = 0xD70;
            static constexpr std::uintptr_t UsesRechargeableBoost = 0xD98;
            static constexpr std::uintptr_t RechargeableBoost_RateOfUse = 0xDC0;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegen = 0xDE8;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMin = 0xE10;
            static constexpr std::uintptr_t RechargeableBoost_RateOfRegenMultMax = 0xE38;
            static constexpr std::uintptr_t RechargeableBoost_RegenMaxMultTime = 0xE60;
            static constexpr std::uintptr_t RechargeableBoost_RequiredPercentToActivate = 0xE88;
            static constexpr std::uintptr_t RechargeableBoost_MinPercent = 0xEB0;
            static constexpr std::uintptr_t RechargeableBoost_MaxPercent = 0xED8;
            static constexpr std::uintptr_t TireModIdleUpdateSpeedThresholdKmH = 0xF00;
            static constexpr std::uintptr_t bCachedUsesBoost = 0xF38;
        };

        inline static constexpr std::array<PropertyInfo, 133> Properties{{
            {"VehiclePowerSlideFrontMultiplier", 0x990, "FloatProperty"},
            {"VehiclePowerSlideRearMultiplier", 0x994, "FloatProperty"},
            {"IceVehiclePowerSlideFrontMultiplier", 0x998, "FloatProperty"},
            {"IceVehiclePowerSlideRearMultiplier", 0x99C, "FloatProperty"},
            {"MudVehiclePowerSlideFrontMultiplier", 0x9A0, "FloatProperty"},
            {"MudVehiclePowerSlideRearMultiplier", 0x9A4, "FloatProperty"},
            {"bUseAccelerationLean", 0x9A8, "BoolProperty"},
            {"HandbrakeGripAngle", 0x9AC, "FloatProperty"},
            {"HandbrakeGripAngleRecovery", 0x9B0, "FloatProperty"},
            {"HandbrakeSpeedForGripLoss", 0x9B4, "FloatProperty"},
            {"MinSlipDuration", 0x9B8, "FloatProperty"},
            {"HandbrakeLateralFriction", 0x9BC, "FloatProperty"},
            {"HandbrakeSteeringMultiplier", 0x9C0, "FloatProperty"},
            {"HandbrakeFrictionDampFactor", 0x9C4, "FloatProperty"},
            {"RestoreTractionDampFactor", 0x9C8, "FloatProperty"},
            {"HandbrakeForce", 0x9CC, "FloatProperty"},
            {"HandbrakeForceNoAccel", 0x9D0, "FloatProperty"},
            {"bUseHandbrakeToDrift", 0x9D4, "BoolProperty"},
            {"DriftMinSpeedSteeringAngle", 0x9D8, "FloatProperty"},
            {"DriftMaxSpeedSteeringAngle", 0x9DC, "FloatProperty"},
            {"DriftFrontLateralFrictionMultiplier", 0x9E0, "FloatProperty"},
            {"DriftRearLateralFrictionMultiplier", 0x9E4, "FloatProperty"},
            {"DirtRoadTopSpeedMultiplier", 0x9E8, "FloatProperty"},
            {"DirtRoadFrontLateralFriction", 0x9EC, "FloatProperty"},
            {"DirtRoadRearLateralFriction", 0x9F0, "FloatProperty"},
            {"DirtRoadAccelForceMultiplier", 0x9F4, "FloatProperty"},
            {"OffRoadTopSpeedMultiplier", 0x9F8, "FloatProperty"},
            {"OffRoadFrontLateralFriction", 0x9FC, "FloatProperty"},
            {"OffRoadRearLateralFriction", 0xA00, "FloatProperty"},
            {"OffRoadPushForceMultiplier", 0xA04, "FloatProperty"},
            {"OffroadDamageImpactForceMin", 0xA08, "FloatProperty"},
            {"OffroadDamageImpactForceMax", 0xA0C, "FloatProperty"},
            {"OffroadImpactDamageMin", 0xA10, "FloatProperty"},
            {"OffroadImpactDamageMax", 0xA14, "FloatProperty"},
            {"MinSpeedForOffroadHandling", 0xA18, "FloatProperty"},
            {"SnowFrontLateralFriction", 0xA1C, "FloatProperty"},
            {"SnowRearLateralFriction", 0xA20, "FloatProperty"},
            {"IceFrontLateralFriction", 0xA24, "FloatProperty"},
            {"IceRearLateralFriction", 0xA28, "FloatProperty"},
            {"MudFrontLateralFriction", 0xA2C, "FloatProperty"},
            {"MudRearLateralFriction", 0xA30, "FloatProperty"},
            {"IcePushForceMultiplier", 0xA34, "FloatProperty"},
            {"IceBrakeForceMultiplier", 0xA38, "FloatProperty"},
            {"FireHealthPercentThreshold", 0xA3C, "FloatProperty"},
            {"OffroadRumbleIntensity", 0xA40, "FloatProperty"},
            {"DirtRoadRumbleIntensity", 0xA44, "FloatProperty"},
            {"OffroadDamageScaleExponent", 0xA48, "FloatProperty"},
            {"HardLandingThresholdMin", 0xA4C, "FloatProperty"},
            {"HardLandingThresholdMax", 0xA50, "FloatProperty"},
            {"HardLandingShakeZAmplitudeMin", 0xA54, "FloatProperty"},
            {"HardLandingShakeZAmplitudeMax", 0xA58, "FloatProperty"},
            {"SpeedLinesThreshold", 0xA5C, "FloatProperty"},
            {"PropDestructionImpulse", 0xA60, "FloatProperty"},
            {"DestructionAngle", 0xA64, "FloatProperty"},
            {"UpNormalMinProtected", 0xA68, "FloatProperty"},
            {"UpForwardMinProtected", 0xA6C, "FloatProperty"},
            {"NonCameraSteeringAngleMultiplier", 0xA70, "FloatProperty"},
            {"CameraAssistStrengthMax", 0xA74, "FloatProperty"},
            {"CameraAssistStrengthMin", 0xA78, "FloatProperty"},
            {"CameraAssistStrengthRecovery", 0xA7C, "FloatProperty"},
            {"CameraAssistInterpSpeed", 0xA80, "FloatProperty"},
            {"DriftExitPushForce", 0xA84, "FloatProperty"},
            {"DriftExitCatchupSpeed", 0xA88, "FloatProperty"},
            {"HandbrakeDurationRequiredForCatchup", 0xA8C, "FloatProperty"},
            {"ImpactMagnitudeToEndCatchup", 0xA90, "FloatProperty"},
            {"PoppedTireSpringLength", 0xA94, "FloatProperty"},
            {"PoppedTireSpringStiff", 0xA98, "FloatProperty"},
            {"PoppedTireSpringDamp", 0xA9C, "FloatProperty"},
            {"PoppedTireScrapeFrictionMultiplier", 0xAA0, "FloatProperty"},
            {"RimScrapeFlipRollMagnitude", 0xAA4, "FloatProperty"},
            {"RimScrapeFlipPitchMagnitude", 0xAA8, "FloatProperty"},
            {"SpeedForRimFlip", 0xAAC, "FloatProperty"},
            {"HealthPercentForFlip", 0xAB0, "FloatProperty"},
            {"FlipYawDuration", 0xAB4, "FloatProperty"},
            {"FlipRollDuration", 0xAB8, "FloatProperty"},
            {"FlipPitchDuration", 0xABC, "FloatProperty"},
            {"FlipExplodeDuration_Yaw", 0xAC0, "FloatProperty"},
            {"FlipExplodeDuration_Pitch", 0xAC4, "FloatProperty"},
            {"FlipPushForceDuration_Yaw", 0xAC8, "FloatProperty"},
            {"FlipPushForceDuration_Pitch", 0xACC, "FloatProperty"},
            {"FlipPushForcMultiplier", 0xAD0, "FloatProperty"},
            {"FlipPushForce_UpComponentPitch", 0xAD4, "FloatProperty"},
            {"FlipPushForce_UpComponentRoll", 0xAD8, "FloatProperty"},
            {"MinTimeInAirRequiredForExplodeLanding", 0xADC, "FloatProperty"},
            {"FlipYawSpringStiff", 0xAE0, "FloatProperty"},
            {"FlipYawSpringDamp", 0xAE4, "FloatProperty"},
            {"FlipYawSpringMaxAccel", 0xAE8, "FloatProperty"},
            {"HealthPercentForExplode", 0xAEC, "FloatProperty"},
            {"FlipRecoveryTime", 0xAF0, "FloatProperty"},
            {"FlipMaxDuration", 0xAF4, "FloatProperty"},
            {"FlipWiggleDuration", 0xAF8, "FloatProperty"},
            {"PoppedTireVeerDuration", 0xAFC, "FloatProperty"},
            {"PoppedTireVeerSteeringAngle", 0xB00, "FloatProperty"},
            {"FlipWiggleFrequency", 0xB04, "FloatProperty"},
            {"FlipWiggleSteeringAngle", 0xB08, "FloatProperty"},
            {"FlipYawAngleThreshold", 0xB0C, "FloatProperty"},
            {"AirGlideTurnForceMultiplier", 0xB10, "FloatProperty"},
            {"AnalogDriftStickThreshold", 0xB14, "FloatProperty"},
            {"TireBootRightSocketName", 0xB18, "NameProperty"},
            {"TireBootLeftSocketName", 0xB1C, "NameProperty"},
            {"TireBootRelativeDistance", 0xB20, "FloatProperty"},
            {"TireSocketNames", 0xB28, "ArrayProperty"},
            {"TireBoneNames", 0xB38, "ArrayProperty"},
            {"RearTireIndices", 0xB48, "ArrayProperty"},
            {"RightSideTires", 0xB58, "ArrayProperty"},
            {"FakeTireIndices", 0xB68, "ArrayProperty"},
            {"bNoWheels", 0xB78, "BoolProperty"},
            {"NoWheelsSpringLenMult", 0xB7C, "FloatProperty"},
            {"NoWheelsBonesToHide", 0xB80, "ArrayProperty"},
            {"ForwardChangeDirectionBrakeForceMultiplier", 0xB90, "StructProperty"},
            {"ForwardChangeDirectionSpeedThreshold", 0xBB8, "StructProperty"},
            {"ReverseChangeDirectionBrakeForceMultiplier", 0xBE0, "StructProperty"},
            {"ReverseChangeDirectionSpeedThreshold", 0xC08, "StructProperty"},
            {"UsesBoost", 0xC30, "StructProperty"},
            {"StartWithFullBoost", 0xC58, "StructProperty"},
            {"Boost_MinPushForce", 0xC80, "StructProperty"},
            {"Boost_TopSpeedForceMultiplier", 0xCA8, "StructProperty"},
            {"Boost_TopSpeedMultiplier", 0xCD0, "StructProperty"},
            {"Boost_SteeringMultiplier", 0xCF8, "StructProperty"},
            {"Boost_WaterMultiplier", 0xD20, "StructProperty"},
            {"Boost_ForceInAir", 0xD48, "StructProperty"},
            {"Boost_AirMaxSpeed", 0xD70, "StructProperty"},
            {"UsesRechargeableBoost", 0xD98, "StructProperty"},
            {"RechargeableBoost_RateOfUse", 0xDC0, "StructProperty"},
            {"RechargeableBoost_RateOfRegen", 0xDE8, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMin", 0xE10, "StructProperty"},
            {"RechargeableBoost_RateOfRegenMultMax", 0xE38, "StructProperty"},
            {"RechargeableBoost_RegenMaxMultTime", 0xE60, "StructProperty"},
            {"RechargeableBoost_RequiredPercentToActivate", 0xE88, "StructProperty"},
            {"RechargeableBoost_MinPercent", 0xEB0, "StructProperty"},
            {"RechargeableBoost_MaxPercent", 0xED8, "StructProperty"},
            {"TireModIdleUpdateSpeedThresholdKmH", 0xF00, "StructProperty"},
            {"bCachedUsesBoost", 0xF38, "BoolProperty"},
        }};
    };

    struct FortDagwoodVehicleManager
    {
        static constexpr std::string_view Name = "FortDagwoodVehicleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasUpdatedPropReplacement = 0xC0;
            static constexpr std::uintptr_t NumVehiclesSpawnedWithTireMod = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHasUpdatedPropReplacement", 0xC0, "BoolProperty"},
            {"NumVehiclesSpawnedWithTireMod", 0xC4, "IntProperty"},
        }};
    };

    struct FortValetAudioController
    {
        static constexpr std::string_view Name = "FortValetAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEngineLoadChanged = 0x278;
            static constexpr std::uintptr_t OnShiftGearCompleted = 0x288;
            static constexpr std::uintptr_t OnShiftGearDelegate = 0x298;
            static constexpr std::uintptr_t RPMResetTime_Native = 0x2A8;
            static constexpr std::uintptr_t JitterAmount_Native = 0x2AC;
            static constexpr std::uintptr_t ShiftTimeThreshold_Native = 0x2B0;
            static constexpr std::uintptr_t TimeSinceShift_Native = 0x2B4;
            static constexpr std::uintptr_t EngineRPMInterp_Native = 0x2B8;
            static constexpr std::uintptr_t EngineRPMLinear_Native = 0x2BC;
            static constexpr std::uintptr_t MinRPMRange_Native = 0x2C0;
            static constexpr std::uintptr_t MaxRPMRange_Native = 0x2C4;
            static constexpr std::uintptr_t bCurrentlyShifting_Native = 0x2C8;
            static constexpr std::uintptr_t CurrentAccelRateGearModifier_Native = 0x2CC;
            static constexpr std::uintptr_t CurrentAccelRate_Native = 0x2D0;
            static constexpr std::uintptr_t CurrentGear_Native = 0x2D4;
            static constexpr std::uintptr_t MaxGear_Native = 0x2D8;
            static constexpr std::uintptr_t DefaultAccelRateScalar_Native = 0x2DC;
            static constexpr std::uintptr_t GearAttackInterpSpeed_Native = 0x2E0;
            static constexpr std::uintptr_t GearReleaseInterpSpeed_Native = 0x2E4;
            static constexpr std::uintptr_t AccelRateScalarFirstGear_Native = 0x2E8;
            static constexpr std::uintptr_t AccelRateScalarMinGear_Native = 0x2EC;
            static constexpr std::uintptr_t AccelRateScalarMaxGear_Native = 0x2F0;
            static constexpr std::uintptr_t ShiftToRPMStart_Native = 0x2F4;
            static constexpr std::uintptr_t ShiftToRPMEnd_Native = 0x2F8;
            static constexpr std::uintptr_t ShiftFromRPMStart_Native = 0x2FC;
            static constexpr std::uintptr_t ShiftFromRPMEnd_Native = 0x300;
            static constexpr std::uintptr_t MaxRPMSawtoothDecrement_Native = 0x304;
            static constexpr std::uintptr_t MaxRPMSawtoothRepeatTime_Native = 0x308;
            static constexpr std::uintptr_t DownhillAccelScalar_Native = 0x30C;
            static constexpr std::uintptr_t UphillAccelScalar_Native = 0x310;
            static constexpr std::uintptr_t RPMFloatCurveMapping = 0x318;
            static constexpr std::uintptr_t NormalizedSpeed_Native = 0x320;
            static constexpr std::uintptr_t SuspValue_Native = 0x324;
            static constexpr std::uintptr_t bIsHandbraking_Native = 0x328;
            static constexpr std::uintptr_t MotoSynthVolume_Native = 0x32C;
            static constexpr std::uintptr_t MotoSynthInitialFadeInTime_Native = 0x330;
            static constexpr std::uintptr_t MotoSynthLogRPM_Native = 0x338;
            static constexpr std::uintptr_t bHasFuel_Native = 0x33C;
            static constexpr std::uintptr_t bIsInWater_Native = 0x33D;
            static constexpr std::uintptr_t bLocalPlayerInVehicle_Native = 0x33E;
            static constexpr std::uintptr_t TimeLocalPlayerEnteredVehicle_Native = 0x340;
            static constexpr std::uintptr_t bAttemptingDirectionChange_Native = 0x344;
            static constexpr std::uintptr_t bPreDestroy_Native = 0x345;
            static constexpr std::uintptr_t bEngineLoad_Native = 0x346;
            static constexpr std::uintptr_t SkidAmount_Native = 0x348;
            static constexpr std::uintptr_t TimeSinceAwoken_Native = 0x34C;
            static constexpr std::uintptr_t bDestroyed_Native = 0x350;
            static constexpr std::uintptr_t TimeSinceSurfaceChange_Native = 0x354;
            static constexpr std::uintptr_t OnInitialSuspensionSound = 0x358;
            static constexpr std::uintptr_t AngleForSkidding_Native = 0x360;
            static constexpr std::uintptr_t SpringCompressionMultiplier = 0x364;
            static constexpr std::uintptr_t MotoSynthMaxVolume_Native = 0x368;
            static constexpr std::uintptr_t MotoSynthTimeInVehicleTimeRange = 0x370;
            static constexpr std::uintptr_t MotoSynthTimeInVehicleVolumeRange = 0x380;
            static constexpr std::uintptr_t ValetVehicle = 0x390;
            static constexpr std::uintptr_t Engine_Native = 0x398;
            static constexpr std::uintptr_t BoostAudioComponent_Native = 0x3A0;
            static constexpr std::uintptr_t SynthComponentMoto_Native = 0x3A8;
            static constexpr std::uintptr_t SuspensionCollisionComponent_Native = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 59> Properties{{
            {"OnEngineLoadChanged", 0x278, "MulticastInlineDelegateProperty"},
            {"OnShiftGearCompleted", 0x288, "MulticastInlineDelegateProperty"},
            {"OnShiftGearDelegate", 0x298, "MulticastInlineDelegateProperty"},
            {"RPMResetTime_Native", 0x2A8, "FloatProperty"},
            {"JitterAmount_Native", 0x2AC, "FloatProperty"},
            {"ShiftTimeThreshold_Native", 0x2B0, "FloatProperty"},
            {"TimeSinceShift_Native", 0x2B4, "FloatProperty"},
            {"EngineRPMInterp_Native", 0x2B8, "FloatProperty"},
            {"EngineRPMLinear_Native", 0x2BC, "FloatProperty"},
            {"MinRPMRange_Native", 0x2C0, "FloatProperty"},
            {"MaxRPMRange_Native", 0x2C4, "FloatProperty"},
            {"bCurrentlyShifting_Native", 0x2C8, "BoolProperty"},
            {"CurrentAccelRateGearModifier_Native", 0x2CC, "FloatProperty"},
            {"CurrentAccelRate_Native", 0x2D0, "FloatProperty"},
            {"CurrentGear_Native", 0x2D4, "IntProperty"},
            {"MaxGear_Native", 0x2D8, "IntProperty"},
            {"DefaultAccelRateScalar_Native", 0x2DC, "FloatProperty"},
            {"GearAttackInterpSpeed_Native", 0x2E0, "FloatProperty"},
            {"GearReleaseInterpSpeed_Native", 0x2E4, "FloatProperty"},
            {"AccelRateScalarFirstGear_Native", 0x2E8, "FloatProperty"},
            {"AccelRateScalarMinGear_Native", 0x2EC, "FloatProperty"},
            {"AccelRateScalarMaxGear_Native", 0x2F0, "FloatProperty"},
            {"ShiftToRPMStart_Native", 0x2F4, "FloatProperty"},
            {"ShiftToRPMEnd_Native", 0x2F8, "FloatProperty"},
            {"ShiftFromRPMStart_Native", 0x2FC, "FloatProperty"},
            {"ShiftFromRPMEnd_Native", 0x300, "FloatProperty"},
            {"MaxRPMSawtoothDecrement_Native", 0x304, "FloatProperty"},
            {"MaxRPMSawtoothRepeatTime_Native", 0x308, "FloatProperty"},
            {"DownhillAccelScalar_Native", 0x30C, "FloatProperty"},
            {"UphillAccelScalar_Native", 0x310, "FloatProperty"},
            {"RPMFloatCurveMapping", 0x318, "ObjectProperty"},
            {"NormalizedSpeed_Native", 0x320, "FloatProperty"},
            {"SuspValue_Native", 0x324, "FloatProperty"},
            {"bIsHandbraking_Native", 0x328, "BoolProperty"},
            {"MotoSynthVolume_Native", 0x32C, "FloatProperty"},
            {"MotoSynthInitialFadeInTime_Native", 0x330, "FloatProperty"},
            {"MotoSynthLogRPM_Native", 0x338, "FloatProperty"},
            {"bHasFuel_Native", 0x33C, "BoolProperty"},
            {"bIsInWater_Native", 0x33D, "BoolProperty"},
            {"bLocalPlayerInVehicle_Native", 0x33E, "BoolProperty"},
            {"TimeLocalPlayerEnteredVehicle_Native", 0x340, "FloatProperty"},
            {"bAttemptingDirectionChange_Native", 0x344, "BoolProperty"},
            {"bPreDestroy_Native", 0x345, "BoolProperty"},
            {"bEngineLoad_Native", 0x346, "BoolProperty"},
            {"SkidAmount_Native", 0x348, "FloatProperty"},
            {"TimeSinceAwoken_Native", 0x34C, "FloatProperty"},
            {"bDestroyed_Native", 0x350, "BoolProperty"},
            {"TimeSinceSurfaceChange_Native", 0x354, "FloatProperty"},
            {"OnInitialSuspensionSound", 0x358, "ObjectProperty"},
            {"AngleForSkidding_Native", 0x360, "FloatProperty"},
            {"SpringCompressionMultiplier", 0x364, "FloatProperty"},
            {"MotoSynthMaxVolume_Native", 0x368, "FloatProperty"},
            {"MotoSynthTimeInVehicleTimeRange", 0x370, "StructProperty"},
            {"MotoSynthTimeInVehicleVolumeRange", 0x380, "StructProperty"},
            {"ValetVehicle", 0x390, "WeakObjectProperty"},
            {"Engine_Native", 0x398, "ObjectProperty"},
            {"BoostAudioComponent_Native", 0x3A0, "ObjectProperty"},
            {"SynthComponentMoto_Native", 0x3A8, "ObjectProperty"},
            {"SuspensionCollisionComponent_Native", 0x3B0, "ObjectProperty"},
        }};
    };

    struct FortValetGameFeatureData
    {
        static constexpr std::string_view Name = "FortValetGameFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t PropReplacements = 0x448;
            static constexpr std::uintptr_t VehicleSpawnerClass = 0x458;
            static constexpr std::uintptr_t SpawnActorCollisionHandlingMethod = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropReplacements", 0x448, "MapProperty"},
            {"VehicleSpawnerClass", 0x458, "SoftClassProperty"},
            {"SpawnActorCollisionHandlingMethod", 0x478, "EnumProperty"},
        }};
    };

    struct FortValetMountedGunAnimInstance
    {
        static constexpr std::string_view Name = "FortValetMountedGunAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleActor = 0x460;
            static constexpr std::uintptr_t bIsUsingMountedGun = 0x468;
            static constexpr std::uintptr_t SeatIndexCached = 0x46C;
            static constexpr std::uintptr_t AimingYaw = 0x470;
            static constexpr std::uintptr_t AimingPitch = 0x474;
            static constexpr std::uintptr_t MountedWeapon = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VehicleActor", 0x460, "ObjectProperty"},
            {"bIsUsingMountedGun", 0x468, "BoolProperty"},
            {"SeatIndexCached", 0x46C, "IntProperty"},
            {"AimingYaw", 0x470, "FloatProperty"},
            {"AimingPitch", 0x474, "FloatProperty"},
            {"MountedWeapon", 0x478, "ObjectProperty"},
        }};
    };

    struct FortValetPassengerAnimInstance
    {
        static constexpr std::string_view Name = "FortValetPassengerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleOccupantAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IntoVehicleCachedData = 0x740;
            static constexpr std::uintptr_t OutOfVehicleCachedData = 0x754;
            static constexpr std::uintptr_t DagwoodVehicleInstance = 0x768;
            static constexpr std::uintptr_t TurnYaw = 0x788;
            static constexpr std::uintptr_t InTime = 0x78C;
            static constexpr std::uintptr_t OutTime = 0x790;
            static constexpr std::uintptr_t NegativeTurnYaw = 0x794;
            static constexpr std::uintptr_t bIsReloading = 0x798;
            static constexpr std::uintptr_t bIsTargeting = 0x799;
            static constexpr std::uintptr_t bIsFiring = 0x79A;
            static constexpr std::uintptr_t bIsUsingConsumable = 0x79B;
            static constexpr std::uintptr_t bIsInAction = 0x79C;
            static constexpr std::uintptr_t bIsPassengerBackLeft = 0x79D;
            static constexpr std::uintptr_t bIsThrowConsumable = 0x79E;
            static constexpr std::uintptr_t bIsLeaning = 0x79F;
            static constexpr std::uintptr_t bIsControllingTurret = 0x7A0;
            static constexpr std::uintptr_t bIsDBNO = 0x7A1;
            static constexpr std::uintptr_t PawnControllingTurretTags = 0x7A8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"IntoVehicleCachedData", 0x740, "StructProperty"},
            {"OutOfVehicleCachedData", 0x754, "StructProperty"},
            {"DagwoodVehicleInstance", 0x768, "SoftObjectProperty"},
            {"TurnYaw", 0x788, "FloatProperty"},
            {"InTime", 0x78C, "FloatProperty"},
            {"OutTime", 0x790, "FloatProperty"},
            {"NegativeTurnYaw", 0x794, "FloatProperty"},
            {"bIsReloading", 0x798, "BoolProperty"},
            {"bIsTargeting", 0x799, "BoolProperty"},
            {"bIsFiring", 0x79A, "BoolProperty"},
            {"bIsUsingConsumable", 0x79B, "BoolProperty"},
            {"bIsInAction", 0x79C, "BoolProperty"},
            {"bIsPassengerBackLeft", 0x79D, "BoolProperty"},
            {"bIsThrowConsumable", 0x79E, "BoolProperty"},
            {"bIsLeaning", 0x79F, "BoolProperty"},
            {"bIsControllingTurret", 0x7A0, "BoolProperty"},
            {"bIsDBNO", 0x7A1, "BoolProperty"},
            {"PawnControllingTurretTags", 0x7A8, "StructProperty"},
        }};
    };

    struct FortValetSedanAnimInstance
    {
        static constexpr std::string_view Name = "FortValetSedanAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasTireMod = 0x514;
            static constexpr std::uintptr_t TrunkDamageAlpha = 0x518;
            static constexpr std::uintptr_t MirrorLeftDamageAlpha = 0x51C;
            static constexpr std::uintptr_t MirrorRightDamageAlpha = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bHasTireMod", 0x514, "BoolProperty"},
            {"TrunkDamageAlpha", 0x518, "FloatProperty"},
            {"MirrorLeftDamageAlpha", 0x51C, "FloatProperty"},
            {"MirrorRightDamageAlpha", 0x520, "FloatProperty"},
        }};
    };

    struct NetworkPhysicsManager
    {
        static constexpr std::string_view Name = "NetworkPhysicsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SportsCarVehicleAnimInstance
    {
        static constexpr std::string_view Name = "SportsCarVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleBouncyChassisAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggerSpoiler = 0x7C0;
            static constexpr std::uintptr_t TriggerMirrorL = 0x7C4;
            static constexpr std::uintptr_t TriggerMirrorR = 0x7C8;
            static constexpr std::uintptr_t bHasTireMod = 0x7CC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TriggerSpoiler", 0x7C0, "FloatProperty"},
            {"TriggerMirrorL", 0x7C4, "FloatProperty"},
            {"TriggerMirrorR", 0x7C8, "FloatProperty"},
            {"bHasTireMod", 0x7CC, "BoolProperty"},
        }};
    };

}
