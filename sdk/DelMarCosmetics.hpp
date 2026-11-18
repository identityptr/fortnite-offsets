#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarCosmetics
{
    struct DelMarBodyCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarBodyCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t FrontLeftWheelsBoneNames = 0x2B0;
            static constexpr std::uintptr_t FrontRightWheelsBoneNames = 0x2C0;
            static constexpr std::uintptr_t BackRightWheelsBoneNames = 0x2D0;
            static constexpr std::uintptr_t BackLeftWheelsBoneNames = 0x2E0;
            static constexpr std::uintptr_t LeftBoostersInfo = 0x2F0;
            static constexpr std::uintptr_t RightBoostersInfo = 0x300;
            static constexpr std::uintptr_t SkeletalMesh = 0x310;
            static constexpr std::uintptr_t PhysicsAsset = 0x318;
            static constexpr std::uintptr_t AnimInstanceClass = 0x320;
            static constexpr std::uintptr_t BodySetup = 0x328;
            static constexpr std::uintptr_t WheelContactFxOffset = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FrontLeftWheelsBoneNames", 0x2B0, "ArrayProperty"},
            {"FrontRightWheelsBoneNames", 0x2C0, "ArrayProperty"},
            {"BackRightWheelsBoneNames", 0x2D0, "ArrayProperty"},
            {"BackLeftWheelsBoneNames", 0x2E0, "ArrayProperty"},
            {"LeftBoostersInfo", 0x2F0, "ArrayProperty"},
            {"RightBoostersInfo", 0x300, "ArrayProperty"},
            {"SkeletalMesh", 0x310, "ObjectProperty"},
            {"PhysicsAsset", 0x318, "ObjectProperty"},
            {"AnimInstanceClass", 0x320, "ClassProperty"},
            {"BodySetup", 0x328, "ObjectProperty"},
            {"WheelContactFxOffset", 0x330, "StructProperty"},
        }};
    };

    struct DelMarBoosterCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarBoosterCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t BoosterFx = 0x2B0;
            static constexpr std::uintptr_t LeftBoosters = 0x2B8;
            static constexpr std::uintptr_t RightBoosters = 0x2C8;
            static constexpr std::uintptr_t BodySkeletalMeshComponent = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoosterFx", 0x2B0, "ObjectProperty"},
            {"LeftBoosters", 0x2B8, "ArrayProperty"},
            {"RightBoosters", 0x2C8, "ArrayProperty"},
            {"BodySkeletalMeshComponent", 0x2D8, "ObjectProperty"},
        }};
    };

    struct DelMarCosmeticActorSpawnLogic_Wheel
    {
        static constexpr std::string_view Name = "DelMarCosmeticActorSpawnLogic_Wheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bFrontWheel = 0x28;
            static constexpr std::uintptr_t bBackWheel = 0x29;
            static constexpr std::uintptr_t AttachPoint = 0x2A;
            static constexpr std::uintptr_t MirrorType = 0x2B;
            static constexpr std::uintptr_t bOnlyFxEligibleWheels = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bFrontWheel", 0x28, "BoolProperty"},
            {"bBackWheel", 0x29, "BoolProperty"},
            {"AttachPoint", 0x2A, "EnumProperty"},
            {"MirrorType", 0x2B, "EnumProperty"},
            {"bOnlyFxEligibleWheels", 0x2C, "BoolProperty"},
        }};
    };

    struct DelMarEngineAudioCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarEngineAudioCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t EngineAudio = 0x2B0;
            static constexpr std::uintptr_t NonLocalVelocityInterpSpeed = 0x2C0;
            static constexpr std::uintptr_t bDisabled = 0x2C4;
            static constexpr std::uintptr_t ComponentGroup = 0x2C8;
            static constexpr std::uintptr_t MotorModel = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EngineAudio", 0x2B0, "StructProperty"},
            {"NonLocalVelocityInterpSpeed", 0x2C0, "FloatProperty"},
            {"bDisabled", 0x2C4, "BoolProperty"},
            {"ComponentGroup", 0x2C8, "ObjectProperty"},
            {"MotorModel", 0x2D0, "ObjectProperty"},
        }};
    };

    struct DelMarGaragePreviewVehicle
    {
        static constexpr std::string_view Name = "DelMarGaragePreviewVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarPreviewVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveCameraUpdatedDelegate = 0x2708;
            static constexpr std::uintptr_t OnRotationTransitionStateChanged = 0x2718;
            static constexpr std::uintptr_t PreviewPivotComponent = 0x2728;
            static constexpr std::uintptr_t ActiveCameraComponent = 0x2738;
            static constexpr std::uintptr_t DefaultZoomInCameraComponent = 0x2740;
            static constexpr std::uintptr_t DefaultZoomOutCameraComponent = 0x2748;
            static constexpr std::uintptr_t SlotPreviewRotations = 0x2770;
            static constexpr std::uintptr_t SlotPreviewConfigs = 0x2780;
            static constexpr std::uintptr_t ZoomLevel = 0x2790;
            static constexpr std::uintptr_t UserRotationOffset = 0x2798;
            static constexpr std::uintptr_t PreviewSlot = 0x27B0;
            static constexpr std::uintptr_t PreviewVehicleTag = 0x27B4;
            static constexpr std::uintptr_t RotationTransitionTime = 0x27B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnActiveCameraUpdatedDelegate", 0x2708, "MulticastInlineDelegateProperty"},
            {"OnRotationTransitionStateChanged", 0x2718, "MulticastInlineDelegateProperty"},
            {"PreviewPivotComponent", 0x2728, "ObjectProperty"},
            {"ActiveCameraComponent", 0x2738, "ObjectProperty"},
            {"DefaultZoomInCameraComponent", 0x2740, "ObjectProperty"},
            {"DefaultZoomOutCameraComponent", 0x2748, "ObjectProperty"},
            {"SlotPreviewRotations", 0x2770, "MapProperty"},
            {"SlotPreviewConfigs", 0x2780, "MapProperty"},
            {"ZoomLevel", 0x2790, "FloatProperty"},
            {"UserRotationOffset", 0x2798, "StructProperty"},
            {"PreviewSlot", 0x27B0, "StructProperty"},
            {"PreviewVehicleTag", 0x27B4, "StructProperty"},
            {"RotationTransitionTime", 0x27B8, "FloatProperty"},
        }};
    };

    struct DelMarParamOverrideCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarParamOverrideCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticActorsParamterOverrides = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticActorsParamterOverrides", 0x2B0, "MapProperty"},
        }};
    };

    struct DelMarPreviewCameraComponent
    {
        static constexpr std::string_view Name = "DelMarPreviewCameraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSlot = 0xAD0;
            static constexpr std::uintptr_t PreviewType = 0xAD4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviewSlot", 0xAD0, "StructProperty"},
            {"PreviewType", 0xAD4, "EnumProperty"},
        }};
    };

    struct DelMarPreviewPivot
    {
        static constexpr std::string_view Name = "DelMarPreviewPivot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SceneComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct DelMarPreviewVehicle
    {
        static constexpr std::string_view Name = "DelMarPreviewVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewLoadout = 0x1FF8;
            static constexpr std::uintptr_t PreviewCustomizations = 0x2020;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x2030;
            static constexpr std::uintptr_t CosmeticComponent = 0x2038;
            static constexpr std::uintptr_t PreviewConfigs = 0x2040;
            static constexpr std::uintptr_t SpringTravelOffset = 0x21D0;
            static constexpr std::uintptr_t BouncyChassisConfig = 0x21E0;
            static constexpr std::uintptr_t OnVehicleForwardStateChanged = 0x21F0;
            static constexpr std::uintptr_t OnDelMarVehicleHitWall = 0x2240;
            static constexpr std::uintptr_t OnDelMarVehicleHitVehicle = 0x2250;
            static constexpr std::uintptr_t OnDelMarVehicleHitByVehicle = 0x2260;
            static constexpr std::uintptr_t OnHazardHit = 0x2638;
            static constexpr std::uintptr_t OnVehicleTeleportEntered = 0x2648;
            static constexpr std::uintptr_t OnVehicleTeleportExit = 0x2658;
            static constexpr std::uintptr_t OnVehicleAppliedTeleportRotation = 0x2668;
            static constexpr std::uintptr_t OnEnvironmentEffectCueActivated = 0x2678;
            static constexpr std::uintptr_t OnEnvironmentEffectCueRemoved = 0x2688;
            static constexpr std::uintptr_t OnHeadlightsChanged = 0x26C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"PreviewLoadout", 0x1FF8, "StructProperty"},
            {"PreviewCustomizations", 0x2020, "ArrayProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x2030, "IntProperty"},
            {"CosmeticComponent", 0x2038, "ObjectProperty"},
            {"PreviewConfigs", 0x2040, "StructProperty"},
            {"SpringTravelOffset", 0x21D0, "ArrayProperty"},
            {"BouncyChassisConfig", 0x21E0, "StructProperty"},
            {"OnVehicleForwardStateChanged", 0x21F0, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitWall", 0x2240, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitVehicle", 0x2250, "MulticastInlineDelegateProperty"},
            {"OnDelMarVehicleHitByVehicle", 0x2260, "MulticastInlineDelegateProperty"},
            {"OnHazardHit", 0x2638, "MulticastInlineDelegateProperty"},
            {"OnVehicleTeleportEntered", 0x2648, "MulticastInlineDelegateProperty"},
            {"OnVehicleTeleportExit", 0x2658, "MulticastInlineDelegateProperty"},
            {"OnVehicleAppliedTeleportRotation", 0x2668, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueActivated", 0x2678, "MulticastInlineDelegateProperty"},
            {"OnEnvironmentEffectCueRemoved", 0x2688, "MulticastInlineDelegateProperty"},
            {"OnHeadlightsChanged", 0x26C8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarUnifiedVehicleCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarUnifiedVehicleCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedSideBoosters = 0x2B0;
            static constexpr std::uintptr_t SideBoosterParam_Scale = 0x2C4;
            static constexpr std::uintptr_t Boosters = 0x2C8;
            static constexpr std::uintptr_t UnderthrustVfxData = 0x2D8;
            static constexpr std::uintptr_t BodySkeletalMeshComponent = 0x320;
            static constexpr std::uintptr_t KickflipAudioBehavior = 0x328;
            static constexpr std::uintptr_t JumpAudioBehavior = 0x338;
            static constexpr std::uintptr_t JumpFX = 0x348;
            static constexpr std::uintptr_t SuperSonicFX = 0x350;
            static constexpr std::uintptr_t SuperSonicRadialBlurMaterial = 0x358;
            static constexpr std::uintptr_t SuperSonicRadialBlurMID = 0x360;
            static constexpr std::uintptr_t SuperSonicBlurOffset = 0x368;
            static constexpr std::uintptr_t SuperSonicForwardSpeedMin = 0x36C;
            static constexpr std::uintptr_t SuperSonicForwardSpeedMax = 0x370;
            static constexpr std::uintptr_t SuperSonicParam_Spawn = 0x374;
            static constexpr std::uintptr_t RadialBlurParam_Offset = 0x378;
            static constexpr std::uintptr_t RadialBlurParam_Transition = 0x37C;
            static constexpr std::uintptr_t DraftingAudioBehavior = 0x390;
            static constexpr std::uintptr_t DraftingFX = 0x3A0;
            static constexpr std::uintptr_t DraftingParam_Spawn = 0x3A8;
            static constexpr std::uintptr_t DraftingParam_SpeedGain = 0x3AC;
            static constexpr std::uintptr_t DraftingParam_Amount = 0x3B0;
            static constexpr std::uintptr_t WorldBonusSpeedAudioBehavior = 0x3B8;
            static constexpr std::uintptr_t WBSGroupEvent_OnBonusSpeedActivated = 0x3C8;
            static constexpr std::uintptr_t WBSGroupEvent_OnBonusSpeedDeactivated = 0x3CC;
            static constexpr std::uintptr_t WBSGroupEvent_OnWorldBonusSpeedStackGained = 0x3D0;
            static constexpr std::uintptr_t DemolishTag_RaceFinished = 0x3D4;
            static constexpr std::uintptr_t RespawnAudioBehavior = 0x3D8;
            static constexpr std::uintptr_t DespawnAudioBehavior = 0x3E8;
            static constexpr std::uintptr_t TaillightTrailFX_Left = 0x3F8;
            static constexpr std::uintptr_t TaillightTrailFX_Right = 0x400;
            static constexpr std::uintptr_t TaillightTrailSocket_Left = 0x408;
            static constexpr std::uintptr_t TaillightTrailSocket_Right = 0x40C;
            static constexpr std::uintptr_t TaillightTrail_MinForwardSpeed = 0x410;
            static constexpr std::uintptr_t TeleportFx = 0x418;
            static constexpr std::uintptr_t TeleportEnterSystem = 0x420;
            static constexpr std::uintptr_t TeleportExitSystem = 0x428;
            static constexpr std::uintptr_t EnvironmentFx = 0x430;
            static constexpr std::uintptr_t UnderthrustAudioBehavior = 0x458;
            static constexpr std::uintptr_t WheelsAudioBehavior = 0x468;
            static constexpr std::uintptr_t FrontLeftWheelContactBone = 0x478;
            static constexpr std::uintptr_t FrontRightWheelContactBone = 0x47C;
            static constexpr std::uintptr_t BackRightWheelContactBone = 0x480;
            static constexpr std::uintptr_t BackLeftWheelContactBone = 0x484;
            static constexpr std::uintptr_t WheelInfos = 0x488;
            static constexpr std::uintptr_t FxSideSpeedThreshold = 0x4F0;
            static constexpr std::uintptr_t FxForwardSpeedThreshold = 0x4F4;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"CachedSideBoosters", 0x2B0, "ArrayProperty"},
            {"SideBoosterParam_Scale", 0x2C4, "NameProperty"},
            {"Boosters", 0x2C8, "ArrayProperty"},
            {"UnderthrustVfxData", 0x2D8, "StructProperty"},
            {"BodySkeletalMeshComponent", 0x320, "ObjectProperty"},
            {"KickflipAudioBehavior", 0x328, "StructProperty"},
            {"JumpAudioBehavior", 0x338, "StructProperty"},
            {"JumpFX", 0x348, "ObjectProperty"},
            {"SuperSonicFX", 0x350, "ObjectProperty"},
            {"SuperSonicRadialBlurMaterial", 0x358, "ObjectProperty"},
            {"SuperSonicRadialBlurMID", 0x360, "ObjectProperty"},
            {"SuperSonicBlurOffset", 0x368, "FloatProperty"},
            {"SuperSonicForwardSpeedMin", 0x36C, "FloatProperty"},
            {"SuperSonicForwardSpeedMax", 0x370, "FloatProperty"},
            {"SuperSonicParam_Spawn", 0x374, "NameProperty"},
            {"RadialBlurParam_Offset", 0x378, "NameProperty"},
            {"RadialBlurParam_Transition", 0x37C, "NameProperty"},
            {"DraftingAudioBehavior", 0x390, "StructProperty"},
            {"DraftingFX", 0x3A0, "ObjectProperty"},
            {"DraftingParam_Spawn", 0x3A8, "NameProperty"},
            {"DraftingParam_SpeedGain", 0x3AC, "NameProperty"},
            {"DraftingParam_Amount", 0x3B0, "NameProperty"},
            {"WorldBonusSpeedAudioBehavior", 0x3B8, "StructProperty"},
            {"WBSGroupEvent_OnBonusSpeedActivated", 0x3C8, "NameProperty"},
            {"WBSGroupEvent_OnBonusSpeedDeactivated", 0x3CC, "NameProperty"},
            {"WBSGroupEvent_OnWorldBonusSpeedStackGained", 0x3D0, "NameProperty"},
            {"DemolishTag_RaceFinished", 0x3D4, "StructProperty"},
            {"RespawnAudioBehavior", 0x3D8, "StructProperty"},
            {"DespawnAudioBehavior", 0x3E8, "StructProperty"},
            {"TaillightTrailFX_Left", 0x3F8, "ObjectProperty"},
            {"TaillightTrailFX_Right", 0x400, "ObjectProperty"},
            {"TaillightTrailSocket_Left", 0x408, "NameProperty"},
            {"TaillightTrailSocket_Right", 0x40C, "NameProperty"},
            {"TaillightTrail_MinForwardSpeed", 0x410, "FloatProperty"},
            {"TeleportFx", 0x418, "ObjectProperty"},
            {"TeleportEnterSystem", 0x420, "ObjectProperty"},
            {"TeleportExitSystem", 0x428, "ObjectProperty"},
            {"EnvironmentFx", 0x430, "ObjectProperty"},
            {"UnderthrustAudioBehavior", 0x458, "StructProperty"},
            {"WheelsAudioBehavior", 0x468, "StructProperty"},
            {"FrontLeftWheelContactBone", 0x478, "NameProperty"},
            {"FrontRightWheelContactBone", 0x47C, "NameProperty"},
            {"BackRightWheelContactBone", 0x480, "NameProperty"},
            {"BackLeftWheelContactBone", 0x484, "NameProperty"},
            {"WheelInfos", 0x488, "ArrayProperty"},
            {"FxSideSpeedThreshold", 0x4F0, "FloatProperty"},
            {"FxForwardSpeedThreshold", 0x4F4, "FloatProperty"},
        }};
    };

    struct DelMarVehicleAnimInstance
    {
        static constexpr std::string_view Name = "DelMarVehicleAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BouncyChassis = 0x340;
            static constexpr std::uintptr_t BouncyChassisSetup = 0x350;
            static constexpr std::uintptr_t BouncyChassisBlendRate = 0x3A8;
            static constexpr std::uintptr_t VisualSteerAngleInterpRate = 0x3AC;
            static constexpr std::uintptr_t WheelLerpSpeed = 0x3B0;
            static constexpr std::uintptr_t SuspensionInterpRate = 0x3B4;
            static constexpr std::uintptr_t AirSpinAccel = 0x3B8;
            static constexpr std::uintptr_t AirSpinBrake = 0x3BC;
            static constexpr std::uintptr_t AirSpinDecayRate = 0x3C0;
            static constexpr std::uintptr_t VehicleInfo = 0x3C4;
            static constexpr std::uintptr_t bThrottling = 0x3CC;
            static constexpr std::uintptr_t bReversing = 0x3CD;
            static constexpr std::uintptr_t bAccelerating = 0x3CE;
            static constexpr std::uintptr_t bBraking = 0x3CF;
            static constexpr std::uintptr_t Throttle = 0x3D0;
            static constexpr std::uintptr_t Steering = 0x3D4;
            static constexpr std::uintptr_t SteeringAngle = 0x3D8;
            static constexpr std::uintptr_t bWheelsOnGround = 0x3DC;
            static constexpr std::uintptr_t ForwardSpeed = 0x3E0;
            static constexpr std::uintptr_t bDriftBoostActive = 0x3E4;
            static constexpr std::uintptr_t bUnderthrustActive = 0x3E5;
            static constexpr std::uintptr_t bDriftActive = 0x3E6;
            static constexpr std::uintptr_t bKickflipActive = 0x3E7;
            static constexpr std::uintptr_t bJumpActive = 0x3E8;
            static constexpr std::uintptr_t bTurboActive = 0x3E9;
            static constexpr std::uintptr_t WheelInfoFR = 0x3EC;
            static constexpr std::uintptr_t WheelInfoFL = 0x408;
            static constexpr std::uintptr_t WheelInfoBR = 0x424;
            static constexpr std::uintptr_t WheelInfoBL = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"BouncyChassis", 0x340, "StructProperty"},
            {"BouncyChassisSetup", 0x350, "StructProperty"},
            {"BouncyChassisBlendRate", 0x3A8, "FloatProperty"},
            {"VisualSteerAngleInterpRate", 0x3AC, "FloatProperty"},
            {"WheelLerpSpeed", 0x3B0, "FloatProperty"},
            {"SuspensionInterpRate", 0x3B4, "FloatProperty"},
            {"AirSpinAccel", 0x3B8, "FloatProperty"},
            {"AirSpinBrake", 0x3BC, "FloatProperty"},
            {"AirSpinDecayRate", 0x3C0, "FloatProperty"},
            {"VehicleInfo", 0x3C4, "StructProperty"},
            {"bThrottling", 0x3CC, "BoolProperty"},
            {"bReversing", 0x3CD, "BoolProperty"},
            {"bAccelerating", 0x3CE, "BoolProperty"},
            {"bBraking", 0x3CF, "BoolProperty"},
            {"Throttle", 0x3D0, "FloatProperty"},
            {"Steering", 0x3D4, "FloatProperty"},
            {"SteeringAngle", 0x3D8, "FloatProperty"},
            {"bWheelsOnGround", 0x3DC, "BoolProperty"},
            {"ForwardSpeed", 0x3E0, "FloatProperty"},
            {"bDriftBoostActive", 0x3E4, "BoolProperty"},
            {"bUnderthrustActive", 0x3E5, "BoolProperty"},
            {"bDriftActive", 0x3E6, "BoolProperty"},
            {"bKickflipActive", 0x3E7, "BoolProperty"},
            {"bJumpActive", 0x3E8, "BoolProperty"},
            {"bTurboActive", 0x3E9, "BoolProperty"},
            {"WheelInfoFR", 0x3EC, "StructProperty"},
            {"WheelInfoFL", 0x408, "StructProperty"},
            {"WheelInfoBR", 0x424, "StructProperty"},
            {"WheelInfoBL", 0x440, "StructProperty"},
        }};
    };

    struct DelMarWheelAnimInstance
    {
        static constexpr std::string_view Name = "DelMarWheelAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SpinDegrees = 0x35C;
            static constexpr std::uintptr_t ParentAnimInstance = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpinDegrees", 0x35C, "FloatProperty"},
            {"ParentAnimInstance", 0x360, "ObjectProperty"},
        }};
    };

    struct DelMarWheelContactFxCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarWheelContactFxCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t WheelSounds = 0x2B0;
            static constexpr std::uintptr_t FxSideSpeedThreshold = 0x2C0;
            static constexpr std::uintptr_t FxForwardSpeedThreshold = 0x2C4;
            static constexpr std::uintptr_t ContactMaterial = 0x2C8;
            static constexpr std::uintptr_t WheelInfos = 0x2D8;
            static constexpr std::uintptr_t FrontLeftWheelContactBone = 0x2E8;
            static constexpr std::uintptr_t FrontRightWheelContactBone = 0x2EC;
            static constexpr std::uintptr_t BackRightWheelContactBone = 0x2F0;
            static constexpr std::uintptr_t BackLeftWheelContactBone = 0x2F4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WheelSounds", 0x2B0, "StructProperty"},
            {"FxSideSpeedThreshold", 0x2C0, "FloatProperty"},
            {"FxForwardSpeedThreshold", 0x2C4, "FloatProperty"},
            {"ContactMaterial", 0x2C8, "ObjectProperty"},
            {"WheelInfos", 0x2D8, "ArrayProperty"},
            {"FrontLeftWheelContactBone", 0x2E8, "NameProperty"},
            {"FrontRightWheelContactBone", 0x2EC, "NameProperty"},
            {"BackRightWheelContactBone", 0x2F0, "NameProperty"},
            {"BackLeftWheelContactBone", 0x2F4, "NameProperty"},
        }};
    };

    struct DelMarWheelSKCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarWheelSKCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarWheelsCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SkeletalMeshComponent", 0x2B8, "ObjectProperty"},
        }};
    };

    struct DelMarWheelsCosmeticActor
    {
        static constexpr std::string_view Name = "DelMarWheelsCosmeticActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarCosmeticActor";
        struct Offsets
        {
            static constexpr std::uintptr_t WheelIndex = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WheelIndex", 0x2B0, "EnumProperty"},
        }};
    };

}
