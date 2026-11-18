#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarVehicle
{
    struct FortDelMarCameraModeOverrideComponent
    {
        static constexpr std::string_view Name = "FortDelMarCameraModeOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModeOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraModeOverride = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraModeOverride", 0xC0, "ClassProperty"},
        }};
    };

    struct FortDelMarCameraShakeComponent
    {
        static constexpr std::string_view Name = "FortDelMarCameraShakeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShakeIntensitySettingMap = 0xC0;
            static constexpr std::uintptr_t JumpShakeEffect = 0xD0;
            static constexpr std::uintptr_t HazardShakeEffect = 0xD8;
            static constexpr std::uintptr_t bUseVehicleLandedKickflipShake = 0xE0;
            static constexpr std::uintptr_t VehicleLandedKickflipShake = 0xE8;
            static constexpr std::uintptr_t VehicleLandedKickflipShakeIntensityCurve = 0xF0;
            static constexpr std::uintptr_t VehicleLandedCameraShakeEffect = 0x140;
            static constexpr std::uintptr_t VehicleLandedShakeIntensityCurve = 0x148;
            static constexpr std::uintptr_t MaxSecondsToDampenVehicleHit = 0x198;
            static constexpr std::uintptr_t VehicleHitShakeIntensityCurve = 0x1A0;
            static constexpr std::uintptr_t VehicleImpactShakeEffect = 0x1F0;
            static constexpr std::uintptr_t WallImpactShakeEffect = 0x250;
            static constexpr std::uintptr_t WallNoRedirectImpactShakeEffect = 0x2B0;
            static constexpr std::uintptr_t BaseAccelerationShakeEffect = 0x310;
            static constexpr std::uintptr_t Vehicle = 0x370;
            static constexpr std::uintptr_t CachedPlayerController = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ShakeIntensitySettingMap", 0xC0, "MapProperty"},
            {"JumpShakeEffect", 0xD0, "ClassProperty"},
            {"HazardShakeEffect", 0xD8, "ClassProperty"},
            {"bUseVehicleLandedKickflipShake", 0xE0, "BoolProperty"},
            {"VehicleLandedKickflipShake", 0xE8, "ClassProperty"},
            {"VehicleLandedKickflipShakeIntensityCurve", 0xF0, "StructProperty"},
            {"VehicleLandedCameraShakeEffect", 0x140, "ClassProperty"},
            {"VehicleLandedShakeIntensityCurve", 0x148, "StructProperty"},
            {"MaxSecondsToDampenVehicleHit", 0x198, "FloatProperty"},
            {"VehicleHitShakeIntensityCurve", 0x1A0, "StructProperty"},
            {"VehicleImpactShakeEffect", 0x1F0, "StructProperty"},
            {"WallImpactShakeEffect", 0x250, "StructProperty"},
            {"WallNoRedirectImpactShakeEffect", 0x2B0, "StructProperty"},
            {"BaseAccelerationShakeEffect", 0x310, "StructProperty"},
            {"Vehicle", 0x370, "InterfaceProperty"},
            {"CachedPlayerController", 0x380, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarCosmeticActor
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLogic = 0x278;
            static constexpr std::uintptr_t CosmeticDependencies = 0x280;
            static constexpr std::uintptr_t Vehicle = 0x290;
            static constexpr std::uintptr_t VehicleConfig = 0x2A0;
            static constexpr std::uintptr_t VehicleCosmeticComponent = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpawnLogic", 0x278, "ObjectProperty"},
            {"CosmeticDependencies", 0x280, "ArrayProperty"},
            {"Vehicle", 0x290, "InterfaceProperty"},
            {"VehicleConfig", 0x2A0, "ObjectProperty"},
            {"VehicleCosmeticComponent", 0x2A8, "ObjectProperty"},
        }};
    };

    struct FortDelMarCosmeticActorSpawnLogic
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticActorSpawnLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarCosmeticActorSpawnLogic_AttachTo
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticActorSpawnLogic_AttachTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarCosmeticActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocket = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSocket", 0x28, "NameProperty"},
        }};
    };

    struct FortDelMarCosmeticActorSpawnLogic_AttachToEach
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticActorSpawnLogic_AttachToEach";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarCosmeticActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSockets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSockets", 0x28, "ArrayProperty"},
        }};
    };

    struct FortDelMarCosmeticItemDefinition
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x128;
            static constexpr std::uintptr_t CosmeticActorClasses = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slot", 0x128, "StructProperty"},
            {"CosmeticActorClasses", 0x130, "ArrayProperty"},
        }};
    };

    struct FortDelMarCosmeticsDatabase
    {
        static constexpr std::string_view Name = "FortDelMarCosmeticsDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
            static constexpr std::uintptr_t SlotInfos = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Items", 0x28, "ArrayProperty"},
            {"SlotInfos", 0x38, "ArrayProperty"},
        }};
    };

    struct FortDelMarLoadoutSave
    {
        static constexpr std::string_view Name = "FortDelMarLoadoutSave";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SaveGame";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedLoadout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedLoadout", 0x28, "MapProperty"},
        }};
    };

    struct FortDelMarNetworkInputComponent
    {
        static constexpr std::string_view Name = "FortDelMarNetworkInputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortDelMarVehicle
    {
        static constexpr std::string_view Name = "FortDelMarVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCameraMode = 0x20F0;
            static constexpr std::uintptr_t SeatIndexCameraModes = 0x20F8;
            static constexpr std::uintptr_t bLocalDriverHasReplicatedVehicle = 0x2108;
            static constexpr std::uintptr_t PendingDriverInputState = 0x2128;
            static constexpr std::uintptr_t CurrentInputType = 0x2168;
            static constexpr std::uintptr_t DistanceToPack = 0x2188;
            static constexpr std::uintptr_t DistanceFromTrackFinish = 0x218C;
            static constexpr std::uintptr_t RaceStatusSpeedModifier = 0x2190;
            static constexpr std::uintptr_t TurboBoostChanceCache = 0x2194;
            static constexpr std::uintptr_t ATTR_bVehicleThrottleDisabled = 0x2198;
            static constexpr std::uintptr_t ThrottleAction = 0x21A0;
            static constexpr std::uintptr_t BrakeAction = 0x21B0;
            static constexpr std::uintptr_t SteerAction = 0x21C0;
            static constexpr std::uintptr_t SteerLeftAction = 0x21D0;
            static constexpr std::uintptr_t SteerRightAction = 0x21E0;
            static constexpr std::uintptr_t PitchAction = 0x21F0;
            static constexpr std::uintptr_t PitchUpAction = 0x2200;
            static constexpr std::uintptr_t PitchDownAction = 0x2210;
            static constexpr std::uintptr_t RollAction = 0x2220;
            static constexpr std::uintptr_t YawAction = 0x2230;
            static constexpr std::uintptr_t DriftAction = 0x2240;
            static constexpr std::uintptr_t JumpAction = 0x2250;
            static constexpr std::uintptr_t KickFlipAction = 0x2260;
            static constexpr std::uintptr_t UnderthrustAction = 0x2270;
            static constexpr std::uintptr_t TurboAction = 0x2280;
            static constexpr std::uintptr_t FortDelMarExitAction = 0x2290;
            static constexpr std::uintptr_t AirFreestyleAction = 0x22A0;
            static constexpr std::uintptr_t StrafeAction = 0x22B0;
            static constexpr std::uintptr_t AerialPitchAction = 0x22C0;
            static constexpr std::uintptr_t DemolishAction = 0x22D0;
            static constexpr std::uintptr_t InputManagerClass = 0x22E0;
            static constexpr std::uintptr_t IdleVelocityLengthThreshold = 0x2300;
            static constexpr std::uintptr_t IdleInputSecondsThreshold = 0x2304;
            static constexpr std::uintptr_t bIdleFromNoInput = 0x2308;
            static constexpr std::uintptr_t NetworkPhysicsComponent = 0x2358;
            static constexpr std::uintptr_t CosmeticComponent = 0x2360;
            static constexpr std::uintptr_t FortDelMarVehicleMovementSet = 0x2368;
            static constexpr std::uintptr_t FortSettings = 0x2370;
            static constexpr std::uintptr_t WheelSkeletalMeshComps = 0x2380;
            static constexpr std::uintptr_t PlayerInVehicleEvents = 0x2390;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x23A0;
            static constexpr std::uintptr_t CachedContacts = 0x23A8;
            static constexpr std::uintptr_t NearbyTrackDistanceThreshold = 0x23B8;
            static constexpr std::uintptr_t MaxStableSpeedToUpdateWheels = 0x23D0;
            static constexpr std::uintptr_t SecondsUntilVehicleHitVelocityClears = 0x23D4;
            static constexpr std::uintptr_t bOverrideDamageFromInstigator = 0x23D8;
            static constexpr std::uintptr_t ConfigOverrides = 0x2438;
            static constexpr std::uintptr_t VisualSteerAngleInterpRate = 0x30A0;
            static constexpr std::uintptr_t DriftVisualSteerAngleInterpRate = 0x30A4;
            static constexpr std::uintptr_t bOverrideVisualSteeringAngle = 0x30A8;
            static constexpr std::uintptr_t DrivingVisualSteeringDegrees = 0x30AC;
            static constexpr std::uintptr_t DriftSteeringDegreesCurve = 0x30B0;
            static constexpr std::uintptr_t bShowVisualSteerAngleInAir = 0x3100;
            static constexpr std::uintptr_t BodySetup = 0x3108;
            static constexpr std::uintptr_t VehicleAbilityConfig = 0x3128;
            static constexpr std::uintptr_t VehicleRuntimeConfig = 0x313C;
            static constexpr std::uintptr_t GlobalInputDisabler = 0x3148;
            static constexpr std::uintptr_t OnVehicleWheelsLeftGround = 0x3160;
            static constexpr std::uintptr_t OnSpeedometerSpeedChanged = 0x3170;
            static constexpr std::uintptr_t MinNoThrottleSpeed = 0x3180;
            static constexpr std::uintptr_t SpeedSlowdownSpeedometerSeconds = 0x3184;
            static constexpr std::uintptr_t SpeedSlowdownTags = 0x3188;
            static constexpr std::uintptr_t InvertSteerMethod = 0x3198;
            static constexpr std::uintptr_t bPitchInverted = 0x3199;
            static constexpr std::uintptr_t bVerticalKickflipInverted = 0x319A;
            static constexpr std::uintptr_t bAerialPitchActivationEnabled = 0x319B;
            static constexpr std::uintptr_t OnBonusSpeedActivated = 0x31D0;
            static constexpr std::uintptr_t OnBonusSpeedDeactivated = 0x31E0;
            static constexpr std::uintptr_t OnBonusSpeedChanged = 0x31F0;
            static constexpr std::uintptr_t OnAnyWheelsOnGroundChanged = 0x3200;
            static constexpr std::uintptr_t OnWheelsOnGroundChanged = 0x3210;
            static constexpr std::uintptr_t OnVehicleForwardStateChanged = 0x3220;
            static constexpr std::uintptr_t OnFortDelMarVehicleHitWall = 0x3310;
            static constexpr std::uintptr_t OnFortDelMarVehicleHitVehicle = 0x3320;
            static constexpr std::uintptr_t OnFortDelMarVehicleHitByVehicle = 0x3330;
            static constexpr std::uintptr_t OnVehicleLanded = 0x3340;
            static constexpr std::uintptr_t OnWorldBonusSpeedStackGained = 0x3390;
            static constexpr std::uintptr_t OnWorldBonusSpeedStackLost = 0x33A0;
            static constexpr std::uintptr_t OnVehicleStartedSkydiving = 0x33E0;
            static constexpr std::uintptr_t OnVehicleStoppedSkydiving = 0x33F0;
            static constexpr std::uintptr_t OnDriftActivated = 0x3410;
            static constexpr std::uintptr_t OnDriftDeactivated = 0x3420;
            static constexpr std::uintptr_t OnDriftSlipAngleRatioChanged = 0x3430;
            static constexpr std::uintptr_t OnDriftKickActivated = 0x3440;
            static constexpr std::uintptr_t OnDriftKickDeactivated = 0x3450;
            static constexpr std::uintptr_t OnDriftControlChanged = 0x3460;
            static constexpr std::uintptr_t OnDriftDurationChanged = 0x3470;
            static constexpr std::uintptr_t OnEnteredDriftBoostRange = 0x34D0;
            static constexpr std::uintptr_t OnExitedDriftBoostRange = 0x34E0;
            static constexpr std::uintptr_t OnStartedLosingAppliedDriftBoost = 0x34F0;
            static constexpr std::uintptr_t OnDriftBoostActivated = 0x3500;
            static constexpr std::uintptr_t OnDriftBoostDeactivated = 0x3510;
            static constexpr std::uintptr_t OnMaxPotentialReached = 0x3520;
            static constexpr std::uintptr_t OnMaxPotentialLost = 0x3530;
            static constexpr std::uintptr_t OnAllPotentialLost = 0x3540;
            static constexpr std::uintptr_t OnEarnedDriftBoost = 0x3550;
            static constexpr std::uintptr_t OnPotentialDriftBoostChanged = 0x3560;
            static constexpr std::uintptr_t OnDraftActivated = 0x35A8;
            static constexpr std::uintptr_t OnDraftDeactivated = 0x35B8;
            static constexpr std::uintptr_t OnDraftStateChanged = 0x35C8;
            static constexpr std::uintptr_t OnReachedMaxBonusSpeed = 0x35D8;
            static constexpr std::uintptr_t RubberbandingConfig = 0x361C;
            static constexpr std::uintptr_t OnStartlineBoostActivated = 0x3678;
            static constexpr std::uintptr_t OnStartlineBoostDeactivated = 0x3688;
            static constexpr std::uintptr_t OnStartlineBoostFailed = 0x3698;
            static constexpr std::uintptr_t StartlineBoostData = 0x36A8;
            static constexpr std::uintptr_t OnStrafeActivated = 0x36D8;
            static constexpr std::uintptr_t OnStrafeDeactivated = 0x36E8;
            static constexpr std::uintptr_t OnStrafeCooldownChanged = 0x36F8;
            static constexpr std::uintptr_t OnStrafeUsabilityChanged = 0x3708;
            static constexpr std::uintptr_t OnStrafeDisabledChanged = 0x3718;
            static constexpr std::uintptr_t OnTurboActivated = 0x3748;
            static constexpr std::uintptr_t OnTurboDeactivated = 0x3758;
            static constexpr std::uintptr_t OnTurboChargesUpdated = 0x3768;
            static constexpr std::uintptr_t OnTurboBonusZoneStateChanged = 0x3778;
            static constexpr std::uintptr_t OnTurboChargeUsed = 0x3788;
            static constexpr std::uintptr_t TurboCharges = 0x3798;
            static constexpr std::uintptr_t OnKickflipActivated = 0x37D8;
            static constexpr std::uintptr_t OnKickflipDeactivated = 0x37E8;
            static constexpr std::uintptr_t OnKickflipSuctionActivated = 0x37F8;
            static constexpr std::uintptr_t OnKickflipSuctionDeactivated = 0x3808;
            static constexpr std::uintptr_t OnKickflipDistanceToSuctionSurfaceChanged = 0x3818;
            static constexpr std::uintptr_t OnKickflipDurationChanged = 0x3828;
            static constexpr std::uintptr_t OnKickflipActivationChargesChanged = 0x3838;
            static constexpr std::uintptr_t OnReattachmentActivated = 0x38D0;
            static constexpr std::uintptr_t OnReattachmentDeactivated = 0x38E0;
            static constexpr std::uintptr_t ForcedReattachmentDirection = 0x38F0;
            static constexpr std::uintptr_t OnUnderthrustActivated = 0x3930;
            static constexpr std::uintptr_t OnUnderthrustDeactivated = 0x3940;
            static constexpr std::uintptr_t OnUnderthrustPercentChanged = 0x3950;
            static constexpr std::uintptr_t OnUnderthrustExhausted = 0x3960;
            static constexpr std::uintptr_t OnJumpActivated = 0x3988;
            static constexpr std::uintptr_t OnJumpDeactivated = 0x3998;
            static constexpr std::uintptr_t DemolitionRespawnSeconds = 0x39B0;
            static constexpr std::uintptr_t OnVehicleDemolished = 0x39B8;
            static constexpr std::uintptr_t OnDemolishPressDurationUpdated = 0x39C8;
            static constexpr std::uintptr_t HealthOverride = 0x39D8;
            static constexpr std::uintptr_t OnHazardHit = 0x3A00;
            static constexpr std::uintptr_t OnInvulnerabilityActivated = 0x3A10;
            static constexpr std::uintptr_t OnInvulnerabilityDeactivated = 0x3A20;
            static constexpr std::uintptr_t MaxSpawnBroadcastSeconds = 0x3A34;
            static constexpr std::uintptr_t SpawnInfo = 0x3A38;
            static constexpr std::uintptr_t OnFortDelMarVehicleSpawned = 0x3A48;
            static constexpr std::uintptr_t bAllowExitingVehicle = 0x3A58;
            static constexpr std::uintptr_t OnVehicleTeleportEntered = 0x3A60;
            static constexpr std::uintptr_t OnVehicleTeleportExit = 0x3A70;
            static constexpr std::uintptr_t OnVehicleAppliedTeleportRotation = 0x3A80;
            static constexpr std::uintptr_t OnVehicleAppliedTeleportLocation = 0x3A90;
            static constexpr std::uintptr_t OnEnvironmentEffectCueActivated = 0x3AA0;
            static constexpr std::uintptr_t OnEnvironmentEffectCueRemoved = 0x3AB0;
            static constexpr std::uintptr_t OnAirFreestyleActivated = 0x3AC0;
            static constexpr std::uintptr_t OnAirFreestyleDeactivated = 0x3AD0;
            static constexpr std::uintptr_t CachedVehicleAudioController = 0x3AE8;
            static constexpr std::uintptr_t bVehicleCollisionsEnabled = 0x3AF0;
            static constexpr std::uintptr_t bPawnCollisionsEnabled = 0x3AF1;
            static constexpr std::uintptr_t bUsePredictiveInterpolation = 0x3B00;
            static constexpr std::uintptr_t PostProcessComp = 0x3B08;
            static constexpr std::uintptr_t OnVehicleCustomizationCompletedDelegate = 0x3B18;
            static constexpr std::uintptr_t OnVehiclePartParamsUpdatedDelegate = 0x3B28;
            static constexpr std::uintptr_t OnEnterDelMarVehicle = 0x3B50;
        };

        inline static constexpr std::array<PropertyInfo, 160> Properties{{
            {"DefaultCameraMode", 0x20F0, "ClassProperty"},
            {"SeatIndexCameraModes", 0x20F8, "ArrayProperty"},
            {"bLocalDriverHasReplicatedVehicle", 0x2108, "BoolProperty"},
            {"PendingDriverInputState", 0x2128, "StructProperty"},
            {"CurrentInputType", 0x2168, "EnumProperty"},
            {"DistanceToPack", 0x2188, "FloatProperty"},
            {"DistanceFromTrackFinish", 0x218C, "FloatProperty"},
            {"RaceStatusSpeedModifier", 0x2190, "FloatProperty"},
            {"TurboBoostChanceCache", 0x2194, "FloatProperty"},
            {"ATTR_bVehicleThrottleDisabled", 0x2198, "BoolProperty"},
            {"ThrottleAction", 0x21A0, "StructProperty"},
            {"BrakeAction", 0x21B0, "StructProperty"},
            {"SteerAction", 0x21C0, "StructProperty"},
            {"SteerLeftAction", 0x21D0, "StructProperty"},
            {"SteerRightAction", 0x21E0, "StructProperty"},
            {"PitchAction", 0x21F0, "StructProperty"},
            {"PitchUpAction", 0x2200, "StructProperty"},
            {"PitchDownAction", 0x2210, "StructProperty"},
            {"RollAction", 0x2220, "StructProperty"},
            {"YawAction", 0x2230, "StructProperty"},
            {"DriftAction", 0x2240, "StructProperty"},
            {"JumpAction", 0x2250, "StructProperty"},
            {"KickFlipAction", 0x2260, "StructProperty"},
            {"UnderthrustAction", 0x2270, "StructProperty"},
            {"TurboAction", 0x2280, "StructProperty"},
            {"FortDelMarExitAction", 0x2290, "StructProperty"},
            {"AirFreestyleAction", 0x22A0, "StructProperty"},
            {"StrafeAction", 0x22B0, "StructProperty"},
            {"AerialPitchAction", 0x22C0, "StructProperty"},
            {"DemolishAction", 0x22D0, "StructProperty"},
            {"InputManagerClass", 0x22E0, "ClassProperty"},
            {"IdleVelocityLengthThreshold", 0x2300, "FloatProperty"},
            {"IdleInputSecondsThreshold", 0x2304, "FloatProperty"},
            {"bIdleFromNoInput", 0x2308, "BoolProperty"},
            {"NetworkPhysicsComponent", 0x2358, "ObjectProperty"},
            {"CosmeticComponent", 0x2360, "ObjectProperty"},
            {"FortDelMarVehicleMovementSet", 0x2368, "ObjectProperty"},
            {"FortSettings", 0x2370, "ObjectProperty"},
            {"WheelSkeletalMeshComps", 0x2380, "ArrayProperty"},
            {"PlayerInVehicleEvents", 0x2390, "MapProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x23A0, "IntProperty"},
            {"CachedContacts", 0x23A8, "ArrayProperty"},
            {"NearbyTrackDistanceThreshold", 0x23B8, "FloatProperty"},
            {"MaxStableSpeedToUpdateWheels", 0x23D0, "FloatProperty"},
            {"SecondsUntilVehicleHitVelocityClears", 0x23D4, "FloatProperty"},
            {"bOverrideDamageFromInstigator", 0x23D8, "BoolProperty"},
            {"ConfigOverrides", 0x2438, "StructProperty"},
            {"VisualSteerAngleInterpRate", 0x30A0, "FloatProperty"},
            {"DriftVisualSteerAngleInterpRate", 0x30A4, "FloatProperty"},
            {"bOverrideVisualSteeringAngle", 0x30A8, "BoolProperty"},
            {"DrivingVisualSteeringDegrees", 0x30AC, "FloatProperty"},
            {"DriftSteeringDegreesCurve", 0x30B0, "StructProperty"},
            {"bShowVisualSteerAngleInAir", 0x3100, "BoolProperty"},
            {"BodySetup", 0x3108, "ObjectProperty"},
            {"VehicleAbilityConfig", 0x3128, "StructProperty"},
            {"VehicleRuntimeConfig", 0x313C, "StructProperty"},
            {"GlobalInputDisabler", 0x3148, "WeakObjectProperty"},
            {"OnVehicleWheelsLeftGround", 0x3160, "MulticastInlineDelegateProperty"},
            {"OnSpeedometerSpeedChanged", 0x3170, "MulticastInlineDelegateProperty"},
            {"MinNoThrottleSpeed", 0x3180, "FloatProperty"},
            {"SpeedSlowdownSpeedometerSeconds", 0x3184, "FloatProperty"},
            {"SpeedSlowdownTags", 0x3188, "ArrayProperty"},
            {"InvertSteerMethod", 0x3198, "EnumProperty"},
            {"bPitchInverted", 0x3199, "BoolProperty"},
            {"bVerticalKickflipInverted", 0x319A, "BoolProperty"},
            {"bAerialPitchActivationEnabled", 0x319B, "BoolProperty"},
            {"OnBonusSpeedActivated", 0x31D0, "MulticastInlineDelegateProperty"},
            {"OnBonusSpeedDeactivated", 0x31E0, "MulticastInlineDelegateProperty"},
            {"OnBonusSpeedChanged", 0x31F0, "MulticastInlineDelegateProperty"},
            {"OnAnyWheelsOnGroundChanged", 0x3200, "MulticastInlineDelegateProperty"},
            {"OnWheelsOnGroundChanged", 0x3210, "MulticastInlineDelegateProperty"},
            {"OnVehicleForwardStateChanged", 0x3220, "MulticastInlineDelegateProperty"},
            {"OnFortDelMarVehicleHitWall", 0x3310, "MulticastInlineDelegateProperty"},
            {"OnFortDelMarVehicleHitVehicle", 0x3320, "MulticastInlineDelegateProperty"},
            {"OnFortDelMarVehicleHitByVehicle", 0x3330, "MulticastInlineDelegateProperty"},
            {"OnVehicleLanded", 0x3340, "MulticastInlineDelegateProperty"},
            {"OnWorldBonusSpeedStackGained", 0x3390, "MulticastInlineDelegateProperty"},
            {"OnWorldBonusSpeedStackLost", 0x33A0, "MulticastInlineDelegateProperty"},
            {"OnVehicleStartedSkydiving", 0x33E0, "MulticastInlineDelegateProperty"},
            {"OnVehicleStoppedSkydiving", 0x33F0, "MulticastInlineDelegateProperty"},
            {"OnDriftActivated", 0x3410, "MulticastInlineDelegateProperty"},
            {"OnDriftDeactivated", 0x3420, "MulticastInlineDelegateProperty"},
            {"OnDriftSlipAngleRatioChanged", 0x3430, "MulticastInlineDelegateProperty"},
            {"OnDriftKickActivated", 0x3440, "MulticastInlineDelegateProperty"},
            {"OnDriftKickDeactivated", 0x3450, "MulticastInlineDelegateProperty"},
            {"OnDriftControlChanged", 0x3460, "MulticastInlineDelegateProperty"},
            {"OnDriftDurationChanged", 0x3470, "MulticastInlineDelegateProperty"},
            {"OnEnteredDriftBoostRange", 0x34D0, "MulticastInlineDelegateProperty"},
            {"OnExitedDriftBoostRange", 0x34E0, "MulticastInlineDelegateProperty"},
            {"OnStartedLosingAppliedDriftBoost", 0x34F0, "MulticastInlineDelegateProperty"},
            {"OnDriftBoostActivated", 0x3500, "MulticastInlineDelegateProperty"},
            {"OnDriftBoostDeactivated", 0x3510, "MulticastInlineDelegateProperty"},
            {"OnMaxPotentialReached", 0x3520, "MulticastInlineDelegateProperty"},
            {"OnMaxPotentialLost", 0x3530, "MulticastInlineDelegateProperty"},
            {"OnAllPotentialLost", 0x3540, "MulticastInlineDelegateProperty"},
            {"OnEarnedDriftBoost", 0x3550, "MulticastInlineDelegateProperty"},
            {"OnPotentialDriftBoostChanged", 0x3560, "MulticastInlineDelegateProperty"},
            {"OnDraftActivated", 0x35A8, "MulticastInlineDelegateProperty"},
            {"OnDraftDeactivated", 0x35B8, "MulticastInlineDelegateProperty"},
            {"OnDraftStateChanged", 0x35C8, "MulticastInlineDelegateProperty"},
            {"OnReachedMaxBonusSpeed", 0x35D8, "MulticastInlineDelegateProperty"},
            {"RubberbandingConfig", 0x361C, "StructProperty"},
            {"OnStartlineBoostActivated", 0x3678, "MulticastInlineDelegateProperty"},
            {"OnStartlineBoostDeactivated", 0x3688, "MulticastInlineDelegateProperty"},
            {"OnStartlineBoostFailed", 0x3698, "MulticastInlineDelegateProperty"},
            {"StartlineBoostData", 0x36A8, "StructProperty"},
            {"OnStrafeActivated", 0x36D8, "MulticastInlineDelegateProperty"},
            {"OnStrafeDeactivated", 0x36E8, "MulticastInlineDelegateProperty"},
            {"OnStrafeCooldownChanged", 0x36F8, "MulticastInlineDelegateProperty"},
            {"OnStrafeUsabilityChanged", 0x3708, "MulticastInlineDelegateProperty"},
            {"OnStrafeDisabledChanged", 0x3718, "MulticastInlineDelegateProperty"},
            {"OnTurboActivated", 0x3748, "MulticastInlineDelegateProperty"},
            {"OnTurboDeactivated", 0x3758, "MulticastInlineDelegateProperty"},
            {"OnTurboChargesUpdated", 0x3768, "MulticastInlineDelegateProperty"},
            {"OnTurboBonusZoneStateChanged", 0x3778, "MulticastInlineDelegateProperty"},
            {"OnTurboChargeUsed", 0x3788, "MulticastInlineDelegateProperty"},
            {"TurboCharges", 0x3798, "FloatProperty"},
            {"OnKickflipActivated", 0x37D8, "MulticastInlineDelegateProperty"},
            {"OnKickflipDeactivated", 0x37E8, "MulticastInlineDelegateProperty"},
            {"OnKickflipSuctionActivated", 0x37F8, "MulticastInlineDelegateProperty"},
            {"OnKickflipSuctionDeactivated", 0x3808, "MulticastInlineDelegateProperty"},
            {"OnKickflipDistanceToSuctionSurfaceChanged", 0x3818, "MulticastInlineDelegateProperty"},
            {"OnKickflipDurationChanged", 0x3828, "MulticastInlineDelegateProperty"},
            {"OnKickflipActivationChargesChanged", 0x3838, "MulticastInlineDelegateProperty"},
            {"OnReattachmentActivated", 0x38D0, "MulticastInlineDelegateProperty"},
            {"OnReattachmentDeactivated", 0x38E0, "MulticastInlineDelegateProperty"},
            {"ForcedReattachmentDirection", 0x38F0, "StructProperty"},
            {"OnUnderthrustActivated", 0x3930, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustDeactivated", 0x3940, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustPercentChanged", 0x3950, "MulticastInlineDelegateProperty"},
            {"OnUnderthrustExhausted", 0x3960, "MulticastInlineDelegateProperty"},
            {"OnJumpActivated", 0x3988, "MulticastInlineDelegateProperty"},
            {"OnJumpDeactivated", 0x3998, "MulticastInlineDelegateProperty"},
            {"DemolitionRespawnSeconds", 0x39B0, "FloatProperty"},
            {"OnVehicleDemolished", 0x39B8, "MulticastInlineDelegateProperty"},
            {"OnDemolishPressDurationUpdated", 0x39C8, "MulticastInlineDelegateProperty"},
            {"HealthOverride", 0x39D8, "FloatProperty"},
            {"OnHazardHit", 0x3A00, "MulticastInlineDelegateProperty"},
            {"OnInvulnerabilityActivated", 0x3A10, "MulticastInlineDelegateProperty"},
            {"OnInvulnerabilityDeactivated", 0x3A20, "MulticastInlineDelegateProperty"},
            {"MaxSpawnBroadcastSeconds", 0x3A34, "FloatProperty"},
            {"SpawnInfo", 0x3A38, "StructProperty"},
            {"OnFortDelMarVehicleSpawned", 0x3A48, "MulticastInlineDelegateProperty"},
            {"bAllowExitingVehicle", 0x3A58, "BoolProperty"},
            {"OnVehicleTeleportEntered", 0x3A60, "MulticastInlineDelegateProperty"},
            {"OnVehicleTeleportExit", 0x3A70, "MulticastInlineDelegateProperty"},
            {"OnVehicleAppliedTeleportRotation", 0x3A80, "MulticastInlineDelegateProperty"},
            {"OnVehicleAppliedTeleportLocation", 0x3A90, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueActivated", 0x3AA0, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueRemoved", 0x3AB0, "MulticastInlineDelegateProperty"},
            {"OnAirFreestyleActivated", 0x3AC0, "MulticastInlineDelegateProperty"},
            {"OnAirFreestyleDeactivated", 0x3AD0, "MulticastInlineDelegateProperty"},
            {"CachedVehicleAudioController", 0x3AE8, "ObjectProperty"},
            {"bVehicleCollisionsEnabled", 0x3AF0, "BoolProperty"},
            {"bPawnCollisionsEnabled", 0x3AF1, "BoolProperty"},
            {"bUsePredictiveInterpolation", 0x3B00, "BoolProperty"},
            {"PostProcessComp", 0x3B08, "ObjectProperty"},
            {"OnVehicleCustomizationCompletedDelegate", 0x3B18, "MulticastInlineDelegateProperty"},
            {"OnVehiclePartParamsUpdatedDelegate", 0x3B28, "MulticastInlineDelegateProperty"},
            {"OnEnterDelMarVehicle", 0x3B50, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_Drift
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_Drift";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_HazardHit
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_HazardHit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_Jump
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_KickFlip
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_KickFlip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_Turbo
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_Turbo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAction_Underthrust
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAction_Underthrust";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarVehicleAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionPerformed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActionPerformed", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleAutoInputComponent
    {
        static constexpr std::string_view Name = "FortDelMarVehicleAutoInputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortDelMarVehicleBodyItemDefinition
    {
        static constexpr std::string_view Name = "FortDelMarVehicleBodyItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x128;
            static constexpr std::uintptr_t CosmeticActorClasses = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slot", 0x128, "StructProperty"},
            {"CosmeticActorClasses", 0x130, "ArrayProperty"},
        }};
    };

    struct FortDelMarVehicleBodySetup
    {
        static constexpr std::string_view Name = "FortDelMarVehicleBodySetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontAxle = 0x28;
            static constexpr std::uintptr_t BackAxle = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrontAxle", 0x28, "StructProperty"},
            {"BackAxle", 0x50, "StructProperty"},
        }};
    };

    struct FortDelMarVehicleBodySetupMap
    {
        static constexpr std::string_view Name = "FortDelMarVehicleBodySetupMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BodySetupNameMap = 0x28;
            static constexpr std::uintptr_t BodySetupArchetypeMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BodySetupNameMap", 0x28, "MapProperty"},
            {"BodySetupArchetypeMap", 0x38, "MapProperty"},
        }};
    };

    struct FortDelMarVehicleCameraMode
    {
        static constexpr std::string_view Name = "FortDelMarVehicleCameraMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_AthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraSettings = 0x20A0;
            static constexpr std::uintptr_t VelocityViewDistance = 0x20C0;
            static constexpr std::uintptr_t VelocityFOV = 0x2108;
            static constexpr std::uintptr_t AerialViewDistance = 0x2150;
            static constexpr std::uintptr_t AerialFocusOffset = 0x2198;
            static constexpr std::uintptr_t AerialPitch = 0x21E0;
            static constexpr std::uintptr_t AccelViewDistance = 0x2228;
            static constexpr std::uintptr_t AccelPitch = 0x2270;
            static constexpr std::uintptr_t AirRotationInterpRate = 0x22B8;
            static constexpr std::uintptr_t DriftSwivelSpeed = 0x2300;
            static constexpr std::uintptr_t ViewDistanceInterpSpeed = 0x2304;
            static constexpr std::uintptr_t FOVInterpSpeed = 0x2308;
            static constexpr std::uintptr_t AccelerationViewDistanceDecayRate = 0x230C;
            static constexpr std::uintptr_t MaxAccumulatedAccelViewDistance = 0x2310;
            static constexpr std::uintptr_t MinAccumulatedAccelViewDistance = 0x2314;
            static constexpr std::uintptr_t AerialOffsetInterpSpeed = 0x2318;
            static constexpr std::uintptr_t MaximumDownwardAerialPitch = 0x231C;
            static constexpr std::uintptr_t MaximumUpwardAerialPitch = 0x2320;
            static constexpr std::uintptr_t AccelerationPitchDecayRate = 0x2324;
            static constexpr std::uintptr_t MaxAccumulatedAccelPitch = 0x2328;
            static constexpr std::uintptr_t MinAccumulatedAccelPitch = 0x232C;
            static constexpr std::uintptr_t bPreventSpeedIncreaseInAir = 0x2330;
            static constexpr std::uintptr_t SpeedInputScalar = 0x2334;
            static constexpr std::uintptr_t SwivelPitchMax = 0x2338;
            static constexpr std::uintptr_t SwivelYawMax = 0x233C;
            static constexpr std::uintptr_t GroundPitchInterpRate = 0x2340;
            static constexpr std::uintptr_t GroundMaxPitchForNormalBlend = 0x2344;
            static constexpr std::uintptr_t GroundNormalInterpRate = 0x2348;
            static constexpr std::uintptr_t GroundNormalAirInterpRate = 0x234C;
            static constexpr std::uintptr_t GroundYawRateMin = 0x2350;
            static constexpr std::uintptr_t GroundYawRateMax = 0x2354;
            static constexpr std::uintptr_t WallYawRateMin = 0x2358;
            static constexpr std::uintptr_t WallYawRateMax = 0x235C;
            static constexpr std::uintptr_t InterpToGroundTime = 0x2360;
            static constexpr std::uintptr_t InterpToAirTime = 0x2364;
            static constexpr std::uintptr_t AverageVelocityInterpRate = 0x2368;
            static constexpr std::uintptr_t FocusOffsetInterpRate = 0x236C;
            static constexpr std::uintptr_t DistanceSpeedScale = 0x2370;
            static constexpr std::uintptr_t DistanceOffsetMin = 0x2374;
            static constexpr std::uintptr_t DistanceOffsetMax = 0x2378;
            static constexpr std::uintptr_t DistanceInterpRate = 0x237C;
            static constexpr std::uintptr_t MaxSpeedFOVOffset = 0x2380;
            static constexpr std::uintptr_t SupersonicFOVOffset = 0x2384;
            static constexpr std::uintptr_t FOVInterpRate = 0x2388;
            static constexpr std::uintptr_t VehicleTarget = 0x2390;
        };

        inline static constexpr std::array<PropertyInfo, 45> Properties{{
            {"CameraSettings", 0x20A0, "StructProperty"},
            {"VelocityViewDistance", 0x20C0, "StructProperty"},
            {"VelocityFOV", 0x2108, "StructProperty"},
            {"AerialViewDistance", 0x2150, "StructProperty"},
            {"AerialFocusOffset", 0x2198, "StructProperty"},
            {"AerialPitch", 0x21E0, "StructProperty"},
            {"AccelViewDistance", 0x2228, "StructProperty"},
            {"AccelPitch", 0x2270, "StructProperty"},
            {"AirRotationInterpRate", 0x22B8, "StructProperty"},
            {"DriftSwivelSpeed", 0x2300, "FloatProperty"},
            {"ViewDistanceInterpSpeed", 0x2304, "FloatProperty"},
            {"FOVInterpSpeed", 0x2308, "FloatProperty"},
            {"AccelerationViewDistanceDecayRate", 0x230C, "FloatProperty"},
            {"MaxAccumulatedAccelViewDistance", 0x2310, "FloatProperty"},
            {"MinAccumulatedAccelViewDistance", 0x2314, "FloatProperty"},
            {"AerialOffsetInterpSpeed", 0x2318, "FloatProperty"},
            {"MaximumDownwardAerialPitch", 0x231C, "FloatProperty"},
            {"MaximumUpwardAerialPitch", 0x2320, "FloatProperty"},
            {"AccelerationPitchDecayRate", 0x2324, "FloatProperty"},
            {"MaxAccumulatedAccelPitch", 0x2328, "FloatProperty"},
            {"MinAccumulatedAccelPitch", 0x232C, "FloatProperty"},
            {"bPreventSpeedIncreaseInAir", 0x2330, "BoolProperty"},
            {"SpeedInputScalar", 0x2334, "FloatProperty"},
            {"SwivelPitchMax", 0x2338, "FloatProperty"},
            {"SwivelYawMax", 0x233C, "FloatProperty"},
            {"GroundPitchInterpRate", 0x2340, "FloatProperty"},
            {"GroundMaxPitchForNormalBlend", 0x2344, "FloatProperty"},
            {"GroundNormalInterpRate", 0x2348, "FloatProperty"},
            {"GroundNormalAirInterpRate", 0x234C, "FloatProperty"},
            {"GroundYawRateMin", 0x2350, "FloatProperty"},
            {"GroundYawRateMax", 0x2354, "FloatProperty"},
            {"WallYawRateMin", 0x2358, "FloatProperty"},
            {"WallYawRateMax", 0x235C, "FloatProperty"},
            {"InterpToGroundTime", 0x2360, "FloatProperty"},
            {"InterpToAirTime", 0x2364, "FloatProperty"},
            {"AverageVelocityInterpRate", 0x2368, "FloatProperty"},
            {"FocusOffsetInterpRate", 0x236C, "FloatProperty"},
            {"DistanceSpeedScale", 0x2370, "FloatProperty"},
            {"DistanceOffsetMin", 0x2374, "FloatProperty"},
            {"DistanceOffsetMax", 0x2378, "FloatProperty"},
            {"DistanceInterpRate", 0x237C, "FloatProperty"},
            {"MaxSpeedFOVOffset", 0x2380, "FloatProperty"},
            {"SupersonicFOVOffset", 0x2384, "FloatProperty"},
            {"FOVInterpRate", 0x2388, "FloatProperty"},
            {"VehicleTarget", 0x2390, "ObjectProperty"},
        }};
    };

    struct FortDelMarVehicleCameraMode_V2
    {
        static constexpr std::string_view Name = "FortDelMarVehicleCameraMode_V2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraInputControllerComponentClass = 0x78;
            static constexpr std::uintptr_t VehicleArchetypeDefaults = 0x80;
            static constexpr std::uintptr_t DefaultInterpLambda = 0x90;
            static constexpr std::uintptr_t FOV = 0x94;
            static constexpr std::uintptr_t TotalFOVInterpLambda = 0x98;
            static constexpr std::uintptr_t TotalFOVClamp = 0x9C;
            static constexpr std::uintptr_t Distance = 0xAC;
            static constexpr std::uintptr_t TotalDistanceInterpLambda = 0xB0;
            static constexpr std::uintptr_t TotalDistanceClamp = 0xB4;
            static constexpr std::uintptr_t Height = 0xC4;
            static constexpr std::uintptr_t TotalHeightInterpLambda = 0xC8;
            static constexpr std::uintptr_t HeightOffsetInterpLambda = 0xCC;
            static constexpr std::uintptr_t TotalHeightClamp = 0xD0;
            static constexpr std::uintptr_t AngleToOriginDegrees = 0xE0;
            static constexpr std::uintptr_t AngleToOriginInterpLambda = 0xE4;
            static constexpr std::uintptr_t TotalAngleToOriginClamp = 0xE8;
            static constexpr std::uintptr_t SwivelInterpLambda = 0xF8;
            static constexpr std::uintptr_t SwivelPitchMax = 0xFC;
            static constexpr std::uintptr_t SwivelYawMax = 0x100;
            static constexpr std::uintptr_t GroundNormalInterpLambda = 0x104;
            static constexpr std::uintptr_t ForwardInterpLambda = 0x108;
            static constexpr std::uintptr_t CarPitchInterpLambda = 0x10C;
            static constexpr std::uintptr_t AerialCarPitchInterpLambda = 0x110;
            static constexpr std::uintptr_t MaxAerialCarPitch = 0x114;
            static constexpr std::uintptr_t PitchRotationAxisInterpLambda = 0x118;
            static constexpr std::uintptr_t VerticalDriftDegreeThreshold = 0x11C;
            static constexpr std::uintptr_t MinDegreesVehicleWorldUpThreshold = 0x120;
            static constexpr std::uintptr_t MaxUpRotationPerSecondCurve = 0x128;
            static constexpr std::uintptr_t MaxUpRotationPerSecondStatic = 0x178;
            static constexpr std::uintptr_t WorldUpInterpRate = 0x17C;
            static constexpr std::uintptr_t bPreventPenetration = 0x180;
            static constexpr std::uintptr_t bDoPredictiveAvoidance = 0x181;
            static constexpr std::uintptr_t CollisionPushOutDistance = 0x184;
            static constexpr std::uintptr_t PenetrationBlendOutTime = 0x188;
            static constexpr std::uintptr_t PenetrationBlendInTime = 0x18C;
            static constexpr std::uintptr_t PenetrationTraceChannel = 0x190;
            static constexpr std::uintptr_t PenetrationAvoidanceFeelers = 0x198;
            static constexpr std::uintptr_t ForwardAirInterpLambdaCurve = 0x1A8;
            static constexpr std::uintptr_t ForwardAirBlendCurve = 0x1F8;
            static constexpr std::uintptr_t MinForwardSpeedForAerialBlend = 0x240;
            static constexpr std::uintptr_t MinTimeInAirBeforeUsingVehicleUp = 0x244;
            static constexpr std::uintptr_t GroundNormalAirInterpLambdaCurve = 0x248;
            static constexpr std::uintptr_t AirFreestyleDeactivationExtendedSeconds = 0x298;
            static constexpr std::uintptr_t AirFreestyleDeactivationLambdaSeconds = 0x29C;
            static constexpr std::uintptr_t AirFreestyleDeactivationForwardLambda = 0x2A0;
            static constexpr std::uintptr_t AirFreestyleDeactivationNormalLambda = 0x2A4;
            static constexpr std::uintptr_t DriftForwardBlendCurve = 0x2A8;
            static constexpr std::uintptr_t AerialDriftForwardBlendCurve = 0x2F0;
            static constexpr std::uintptr_t DriftForwardInterpLambdaCurve = 0x338;
            static constexpr std::uintptr_t DriftOriginOffsetCurve = 0x380;
            static constexpr std::uintptr_t DriftOriginOffsetInterpLambdaCurve = 0x3C8;
            static constexpr std::uintptr_t DriftOriginOffsetInactiveLambda = 0x418;
            static constexpr std::uintptr_t DriftKickOffsetDistance = 0x420;
            static constexpr std::uintptr_t DriftKickOffsetLambda = 0x530;
            static constexpr std::uintptr_t DriftKickOffsetInactiveLambda = 0x534;
            static constexpr std::uintptr_t bDeactivateKickOffsetOnKickEnd = 0x538;
            static constexpr std::uintptr_t DriftRollDegreesCurve = 0x540;
            static constexpr std::uintptr_t DriftRollDegreesInterpLambdaCurve = 0x588;
            static constexpr std::uintptr_t DriftScalarCurveCurve = 0x5D8;
            static constexpr std::uintptr_t GroundMaxPitchForNormalBlend = 0x628;
            static constexpr std::uintptr_t GroundExtraPitchForNormalBlend = 0x62C;
            static constexpr std::uintptr_t StableSpeedDistance = 0x630;
            static constexpr std::uintptr_t StableSpeedFOV = 0x6A0;
            static constexpr std::uintptr_t StableSpeedHeight = 0x710;
            static constexpr std::uintptr_t StableSpeedAngleToOrigin = 0x780;
            static constexpr std::uintptr_t AccelerationDistance = 0x7F0;
            static constexpr std::uintptr_t AccelerationFOV = 0x860;
            static constexpr std::uintptr_t AccelerationHeight = 0x8D0;
            static constexpr std::uintptr_t AccelerationAngleToOrigin = 0x940;
            static constexpr std::uintptr_t BaseSpeedDistance = 0x9B0;
            static constexpr std::uintptr_t BaseSpeedFOV = 0xA20;
            static constexpr std::uintptr_t BaseSpeedHeight = 0xA90;
            static constexpr std::uintptr_t BaseSpeedAngleToOrigin = 0xB00;
            static constexpr std::uintptr_t BaseAccelerationDistance = 0xB70;
            static constexpr std::uintptr_t BaseAccelerationFOV = 0xBE0;
            static constexpr std::uintptr_t BaseAccelerationHeight = 0xC50;
            static constexpr std::uintptr_t BaseAccelerationAngleToOrigin = 0xCC0;
            static constexpr std::uintptr_t TurboDistance = 0xD30;
            static constexpr std::uintptr_t TurboFOV = 0xE40;
            static constexpr std::uintptr_t TurboBonusZoneSuccessDistance = 0xF50;
            static constexpr std::uintptr_t TurboBonusZoneSuccessFOV = 0x1060;
            static constexpr std::uintptr_t DriftBonusDistance = 0x1170;
            static constexpr std::uintptr_t DriftBonusFOV = 0x1280;
            static constexpr std::uintptr_t StartlineDistance = 0x1390;
            static constexpr std::uintptr_t StartlineFOV = 0x14A0;
            static constexpr std::uintptr_t DraftDistance = 0x15B0;
            static constexpr std::uintptr_t DraftFOV = 0x1620;
            static constexpr std::uintptr_t WorldBonusSpeedDistance = 0x1690;
            static constexpr std::uintptr_t WorldBonusSpeedFOV = 0x17A0;
            static constexpr std::uintptr_t AerialDivingBonusSpeedDistance = 0x18B0;
            static constexpr std::uintptr_t NonSkydivingDistanceScalar = 0x1920;
            static constexpr std::uintptr_t AerialDivingBonusSpeedFOV = 0x1928;
            static constexpr std::uintptr_t NonSkydivingFOVScalar = 0x1998;
            static constexpr std::uintptr_t VehicleTarget = 0x199C;
            static constexpr std::uintptr_t CameraInputControllerComponent = 0x19A4;
        };

        inline static constexpr std::array<PropertyInfo, 95> Properties{{
            {"CameraInputControllerComponentClass", 0x78, "ClassProperty"},
            {"VehicleArchetypeDefaults", 0x80, "MapProperty"},
            {"DefaultInterpLambda", 0x90, "FloatProperty"},
            {"FOV", 0x94, "FloatProperty"},
            {"TotalFOVInterpLambda", 0x98, "FloatProperty"},
            {"TotalFOVClamp", 0x9C, "StructProperty"},
            {"Distance", 0xAC, "FloatProperty"},
            {"TotalDistanceInterpLambda", 0xB0, "FloatProperty"},
            {"TotalDistanceClamp", 0xB4, "StructProperty"},
            {"Height", 0xC4, "FloatProperty"},
            {"TotalHeightInterpLambda", 0xC8, "FloatProperty"},
            {"HeightOffsetInterpLambda", 0xCC, "FloatProperty"},
            {"TotalHeightClamp", 0xD0, "StructProperty"},
            {"AngleToOriginDegrees", 0xE0, "FloatProperty"},
            {"AngleToOriginInterpLambda", 0xE4, "FloatProperty"},
            {"TotalAngleToOriginClamp", 0xE8, "StructProperty"},
            {"SwivelInterpLambda", 0xF8, "FloatProperty"},
            {"SwivelPitchMax", 0xFC, "FloatProperty"},
            {"SwivelYawMax", 0x100, "FloatProperty"},
            {"GroundNormalInterpLambda", 0x104, "FloatProperty"},
            {"ForwardInterpLambda", 0x108, "FloatProperty"},
            {"CarPitchInterpLambda", 0x10C, "FloatProperty"},
            {"AerialCarPitchInterpLambda", 0x110, "FloatProperty"},
            {"MaxAerialCarPitch", 0x114, "FloatProperty"},
            {"PitchRotationAxisInterpLambda", 0x118, "FloatProperty"},
            {"VerticalDriftDegreeThreshold", 0x11C, "FloatProperty"},
            {"MinDegreesVehicleWorldUpThreshold", 0x120, "FloatProperty"},
            {"MaxUpRotationPerSecondCurve", 0x128, "StructProperty"},
            {"MaxUpRotationPerSecondStatic", 0x178, "FloatProperty"},
            {"WorldUpInterpRate", 0x17C, "FloatProperty"},
            {"bPreventPenetration", 0x180, "BoolProperty"},
            {"bDoPredictiveAvoidance", 0x181, "BoolProperty"},
            {"CollisionPushOutDistance", 0x184, "FloatProperty"},
            {"PenetrationBlendOutTime", 0x188, "FloatProperty"},
            {"PenetrationBlendInTime", 0x18C, "FloatProperty"},
            {"PenetrationTraceChannel", 0x190, "ByteProperty"},
            {"PenetrationAvoidanceFeelers", 0x198, "ArrayProperty"},
            {"ForwardAirInterpLambdaCurve", 0x1A8, "StructProperty"},
            {"ForwardAirBlendCurve", 0x1F8, "StructProperty"},
            {"MinForwardSpeedForAerialBlend", 0x240, "FloatProperty"},
            {"MinTimeInAirBeforeUsingVehicleUp", 0x244, "FloatProperty"},
            {"GroundNormalAirInterpLambdaCurve", 0x248, "StructProperty"},
            {"AirFreestyleDeactivationExtendedSeconds", 0x298, "FloatProperty"},
            {"AirFreestyleDeactivationLambdaSeconds", 0x29C, "FloatProperty"},
            {"AirFreestyleDeactivationForwardLambda", 0x2A0, "FloatProperty"},
            {"AirFreestyleDeactivationNormalLambda", 0x2A4, "FloatProperty"},
            {"DriftForwardBlendCurve", 0x2A8, "StructProperty"},
            {"AerialDriftForwardBlendCurve", 0x2F0, "StructProperty"},
            {"DriftForwardInterpLambdaCurve", 0x338, "StructProperty"},
            {"DriftOriginOffsetCurve", 0x380, "StructProperty"},
            {"DriftOriginOffsetInterpLambdaCurve", 0x3C8, "StructProperty"},
            {"DriftOriginOffsetInactiveLambda", 0x418, "FloatProperty"},
            {"DriftKickOffsetDistance", 0x420, "StructProperty"},
            {"DriftKickOffsetLambda", 0x530, "FloatProperty"},
            {"DriftKickOffsetInactiveLambda", 0x534, "FloatProperty"},
            {"bDeactivateKickOffsetOnKickEnd", 0x538, "BoolProperty"},
            {"DriftRollDegreesCurve", 0x540, "StructProperty"},
            {"DriftRollDegreesInterpLambdaCurve", 0x588, "StructProperty"},
            {"DriftScalarCurveCurve", 0x5D8, "StructProperty"},
            {"GroundMaxPitchForNormalBlend", 0x628, "FloatProperty"},
            {"GroundExtraPitchForNormalBlend", 0x62C, "FloatProperty"},
            {"StableSpeedDistance", 0x630, "StructProperty"},
            {"StableSpeedFOV", 0x6A0, "StructProperty"},
            {"StableSpeedHeight", 0x710, "StructProperty"},
            {"StableSpeedAngleToOrigin", 0x780, "StructProperty"},
            {"AccelerationDistance", 0x7F0, "StructProperty"},
            {"AccelerationFOV", 0x860, "StructProperty"},
            {"AccelerationHeight", 0x8D0, "StructProperty"},
            {"AccelerationAngleToOrigin", 0x940, "StructProperty"},
            {"BaseSpeedDistance", 0x9B0, "StructProperty"},
            {"BaseSpeedFOV", 0xA20, "StructProperty"},
            {"BaseSpeedHeight", 0xA90, "StructProperty"},
            {"BaseSpeedAngleToOrigin", 0xB00, "StructProperty"},
            {"BaseAccelerationDistance", 0xB70, "StructProperty"},
            {"BaseAccelerationFOV", 0xBE0, "StructProperty"},
            {"BaseAccelerationHeight", 0xC50, "StructProperty"},
            {"BaseAccelerationAngleToOrigin", 0xCC0, "StructProperty"},
            {"TurboDistance", 0xD30, "StructProperty"},
            {"TurboFOV", 0xE40, "StructProperty"},
            {"TurboBonusZoneSuccessDistance", 0xF50, "StructProperty"},
            {"TurboBonusZoneSuccessFOV", 0x1060, "StructProperty"},
            {"DriftBonusDistance", 0x1170, "StructProperty"},
            {"DriftBonusFOV", 0x1280, "StructProperty"},
            {"StartlineDistance", 0x1390, "StructProperty"},
            {"StartlineFOV", 0x14A0, "StructProperty"},
            {"DraftDistance", 0x15B0, "StructProperty"},
            {"DraftFOV", 0x1620, "StructProperty"},
            {"WorldBonusSpeedDistance", 0x1690, "StructProperty"},
            {"WorldBonusSpeedFOV", 0x17A0, "StructProperty"},
            {"AerialDivingBonusSpeedDistance", 0x18B0, "StructProperty"},
            {"NonSkydivingDistanceScalar", 0x1920, "FloatProperty"},
            {"AerialDivingBonusSpeedFOV", 0x1928, "StructProperty"},
            {"NonSkydivingFOVScalar", 0x1998, "FloatProperty"},
            {"VehicleTarget", 0x199C, "WeakObjectProperty"},
            {"CameraInputControllerComponent", 0x19A4, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarVehicleConfigs
    {
        static constexpr std::string_view Name = "FortDelMarVehicleConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPhysicsVehicleConfigs";
        struct Offsets
        {
            static constexpr std::uintptr_t Collision = 0x990;
            static constexpr std::uintptr_t DefaultBodySetup = 0xAC8;
            static constexpr std::uintptr_t BodySetupMap = 0xAD0;
            static constexpr std::uintptr_t DriveSetup = 0xAD8;
            static constexpr std::uintptr_t PhysMatAttributeMap = 0xD08;
            static constexpr std::uintptr_t RigidBody = 0xD10;
            static constexpr std::uintptr_t Terrain = 0xD48;
            static constexpr std::uintptr_t WorldBonusSpeed = 0xD78;
            static constexpr std::uintptr_t AerialRotation = 0xDA0;
            static constexpr std::uintptr_t AirControl = 0xE48;
            static constexpr std::uintptr_t AirFreestyle = 0xED8;
            static constexpr std::uintptr_t AirThrottle = 0xF08;
            static constexpr std::uintptr_t AutoUpright = 0xF68;
            static constexpr std::uintptr_t Drafting = 0xF90;
            static constexpr std::uintptr_t Drift = 0x1018;
            static constexpr std::uintptr_t DriftBoost = 0x1470;
            static constexpr std::uintptr_t Gravity = 0x1588;
            static constexpr std::uintptr_t Jump = 0x15A8;
            static constexpr std::uintptr_t Kickflip = 0x15C0;
            static constexpr std::uintptr_t Oversteer = 0x16E0;
            static constexpr std::uintptr_t Reattachment = 0x1798;
            static constexpr std::uintptr_t Rubberbanding = 0x17F8;
            static constexpr std::uintptr_t StartlineBoost = 0x18F0;
            static constexpr std::uintptr_t Strafe = 0x1958;
            static constexpr std::uintptr_t Turbo = 0x1978;
            static constexpr std::uintptr_t Underthrust = 0x19E8;
            static constexpr std::uintptr_t SelfDemolish = 0x1AD0;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"Collision", 0x990, "StructProperty"},
            {"DefaultBodySetup", 0xAC8, "ObjectProperty"},
            {"BodySetupMap", 0xAD0, "ObjectProperty"},
            {"DriveSetup", 0xAD8, "StructProperty"},
            {"PhysMatAttributeMap", 0xD08, "ObjectProperty"},
            {"RigidBody", 0xD10, "StructProperty"},
            {"Terrain", 0xD48, "StructProperty"},
            {"WorldBonusSpeed", 0xD78, "StructProperty"},
            {"AerialRotation", 0xDA0, "StructProperty"},
            {"AirControl", 0xE48, "StructProperty"},
            {"AirFreestyle", 0xED8, "StructProperty"},
            {"AirThrottle", 0xF08, "StructProperty"},
            {"AutoUpright", 0xF68, "StructProperty"},
            {"Drafting", 0xF90, "StructProperty"},
            {"Drift", 0x1018, "StructProperty"},
            {"DriftBoost", 0x1470, "StructProperty"},
            {"Gravity", 0x1588, "StructProperty"},
            {"Jump", 0x15A8, "StructProperty"},
            {"Kickflip", 0x15C0, "StructProperty"},
            {"Oversteer", 0x16E0, "StructProperty"},
            {"Reattachment", 0x1798, "StructProperty"},
            {"Rubberbanding", 0x17F8, "StructProperty"},
            {"StartlineBoost", 0x18F0, "StructProperty"},
            {"Strafe", 0x1958, "StructProperty"},
            {"Turbo", 0x1978, "StructProperty"},
            {"Underthrust", 0x19E8, "StructProperty"},
            {"SelfDemolish", 0x1AD0, "StructProperty"},
        }};
    };

    struct FortDelMarVehicleCosmeticComponent
    {
        static constexpr std::string_view Name = "FortDelMarVehicleCosmeticComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCosmeticActorSpawned = 0xC0;
            static constexpr std::uintptr_t OnAllCosmeticActorsSpawned = 0xD0;
            static constexpr std::uintptr_t StaticCosmeticActorClasses = 0xE0;
            static constexpr std::uintptr_t AllowedServerCosmeticActorClasses = 0xF0;
            static constexpr std::uintptr_t SpawnedCosmeticActors = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnCosmeticActorSpawned", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnAllCosmeticActorsSpawned", 0xD0, "MulticastInlineDelegateProperty"},
            {"StaticCosmeticActorClasses", 0xE0, "ArrayProperty"},
            {"AllowedServerCosmeticActorClasses", 0xF0, "ArrayProperty"},
            {"SpawnedCosmeticActors", 0x100, "ArrayProperty"},
        }};
    };

    struct FortDelMarVehicleForceFeedbackComponent
    {
        static constexpr std::string_view Name = "FortDelMarVehicleForceFeedbackComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingForceFeedback = 0xC0;
            static constexpr std::uintptr_t JumpForceFeedbackEffect = 0x168;
            static constexpr std::uintptr_t OversteerLeftForceFeedbackEffect = 0x170;
            static constexpr std::uintptr_t OversteerRightForceFeedbackEffect = 0x178;
            static constexpr std::uintptr_t LandingForceFeedbackEffects = 0x180;
            static constexpr std::uintptr_t LandingForceLevelLookupCurve = 0x190;
            static constexpr std::uintptr_t TurboForceFeedbackEffect = 0x1D8;
            static constexpr std::uintptr_t DriftForceFeedback = 0x1E0;
            static constexpr std::uintptr_t DriftUncontrolledForceFeedbackEffect = 0x288;
            static constexpr std::uintptr_t DriftBoostForceFeedbackEffect = 0x290;
            static constexpr std::uintptr_t DriftTractionForceFeedback = 0x298;
            static constexpr std::uintptr_t MaxTractionDriftShakeAngle = 0x2A0;
            static constexpr std::uintptr_t HazardHitForceFeedback = 0x2A8;
            static constexpr std::uintptr_t Vehicle = 0x2B0;
            static constexpr std::uintptr_t CachedPlayerController = 0x2C0;
            static constexpr std::uintptr_t CurrentOversteerForceFeedbackEffect = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"DrivingForceFeedback", 0xC0, "StructProperty"},
            {"JumpForceFeedbackEffect", 0x168, "ObjectProperty"},
            {"OversteerLeftForceFeedbackEffect", 0x170, "ObjectProperty"},
            {"OversteerRightForceFeedbackEffect", 0x178, "ObjectProperty"},
            {"LandingForceFeedbackEffects", 0x180, "ArrayProperty"},
            {"LandingForceLevelLookupCurve", 0x190, "StructProperty"},
            {"TurboForceFeedbackEffect", 0x1D8, "ObjectProperty"},
            {"DriftForceFeedback", 0x1E0, "StructProperty"},
            {"DriftUncontrolledForceFeedbackEffect", 0x288, "ObjectProperty"},
            {"DriftBoostForceFeedbackEffect", 0x290, "ObjectProperty"},
            {"DriftTractionForceFeedback", 0x298, "ObjectProperty"},
            {"MaxTractionDriftShakeAngle", 0x2A0, "FloatProperty"},
            {"HazardHitForceFeedback", 0x2A8, "ObjectProperty"},
            {"Vehicle", 0x2B0, "InterfaceProperty"},
            {"CachedPlayerController", 0x2C0, "WeakObjectProperty"},
            {"CurrentOversteerForceFeedbackEffect", 0x2C8, "WeakObjectProperty"},
        }};
    };

    struct FortDelMarVehicleInterface
    {
        static constexpr std::string_view Name = "FortDelMarVehicleInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarVehicleLoadoutSetup
    {
        static constexpr std::string_view Name = "FortDelMarVehicleLoadoutSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Loadout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Loadout", 0x28, "StructProperty"},
        }};
    };

    struct FortDelMarVehicleManager
    {
        static constexpr std::string_view Name = "FortDelMarVehicleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarVehicleMovementSet
    {
        static constexpr std::string_view Name = "FortDelMarVehicleMovementSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AccelMultiplier = 0x48;
            static constexpr std::uintptr_t bVehicleThrottleDisabled = 0x70;
            static constexpr std::uintptr_t BonusSpeed = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AccelMultiplier", 0x48, "StructProperty"},
            {"bVehicleThrottleDisabled", 0x70, "StructProperty"},
            {"BonusSpeed", 0x98, "StructProperty"},
        }};
    };

    struct FortDelMarVehicleNetworkPhysicsComponent
    {
        static constexpr std::string_view Name = "FortDelMarVehicleNetworkPhysicsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedState = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedState", 0xD0, "StructProperty"},
        }};
    };

    struct FortDelMarVehicleTurboManagerComponent
    {
        static constexpr std::string_view Name = "FortDelMarVehicleTurboManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TurboCharges = 0xC0;
            static constexpr std::uintptr_t RechargeRateSeconds = 0xC4;
            static constexpr std::uintptr_t MaxCharges = 0xC8;
            static constexpr std::uintptr_t OwnerVehicle = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TurboCharges", 0xC0, "FloatProperty"},
            {"RechargeRateSeconds", 0xC4, "FloatProperty"},
            {"MaxCharges", 0xC8, "FloatProperty"},
            {"OwnerVehicle", 0xD0, "ObjectProperty"},
        }};
    };

}
