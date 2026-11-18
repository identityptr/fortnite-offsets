#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::YokeHopKeeperRuntime
{
    struct CameraModifier_YokeHopKeeper
    {
        static constexpr std::string_view Name = "CameraModifier_YokeHopKeeper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDesiredWaveOffset = 0x48;
            static constexpr std::uintptr_t SafetyRadius = 0x78;
            static constexpr std::uintptr_t AutoPitchCorrectionCurve = 0xA8;
            static constexpr std::uintptr_t OvershootAdjustmentCurve = 0xB0;
            static constexpr std::uintptr_t PitchCorrectionInterpolationSpeed = 0xB8;
            static constexpr std::uintptr_t PitchRange = 0xC0;
            static constexpr std::uintptr_t FOVCurve = 0xF0;
            static constexpr std::uintptr_t MinSpeedBasis = 0xF8;
            static constexpr std::uintptr_t MaxSpeedBasis = 0x128;
            static constexpr std::uintptr_t MinFOV = 0x158;
            static constexpr std::uintptr_t MaxFOV = 0x188;
            static constexpr std::uintptr_t FOVInterpolationSpeed = 0x1B8;
            static constexpr std::uintptr_t CameraMomentumSpringConfiguration = 0x1E8;
            static constexpr std::uintptr_t WaveCollisionSpringConfiguration = 0x2A8;
            static constexpr std::uintptr_t SurfaceNormalSpringConfiguration = 0x368;
            static constexpr std::uintptr_t CameraRotationSpringConfiguration = 0x428;
            static constexpr std::uintptr_t InAirSpringRotationConfiguration = 0x4E8;
            static constexpr std::uintptr_t InAirSpringLocationConfiguration = 0x5A8;
            static constexpr std::uintptr_t InAirSpringPlayerLocConfiguration = 0x668;
            static constexpr std::uintptr_t MeshSocketName = 0x728;
            static constexpr std::uintptr_t InAirMeshSocketName = 0x72C;
            static constexpr std::uintptr_t SocketOffsetZ = 0x730;
            static constexpr std::uintptr_t InAirSocketOffsetZ = 0x760;
            static constexpr std::uintptr_t PlayerDistInAir = 0x790;
            static constexpr std::uintptr_t InAirPitchRange = 0x7C0;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"MinDesiredWaveOffset", 0x48, "StructProperty"},
            {"SafetyRadius", 0x78, "StructProperty"},
            {"AutoPitchCorrectionCurve", 0xA8, "ObjectProperty"},
            {"OvershootAdjustmentCurve", 0xB0, "ObjectProperty"},
            {"PitchCorrectionInterpolationSpeed", 0xB8, "FloatProperty"},
            {"PitchRange", 0xC0, "StructProperty"},
            {"FOVCurve", 0xF0, "ObjectProperty"},
            {"MinSpeedBasis", 0xF8, "StructProperty"},
            {"MaxSpeedBasis", 0x128, "StructProperty"},
            {"MinFOV", 0x158, "StructProperty"},
            {"MaxFOV", 0x188, "StructProperty"},
            {"FOVInterpolationSpeed", 0x1B8, "StructProperty"},
            {"CameraMomentumSpringConfiguration", 0x1E8, "StructProperty"},
            {"WaveCollisionSpringConfiguration", 0x2A8, "StructProperty"},
            {"SurfaceNormalSpringConfiguration", 0x368, "StructProperty"},
            {"CameraRotationSpringConfiguration", 0x428, "StructProperty"},
            {"InAirSpringRotationConfiguration", 0x4E8, "StructProperty"},
            {"InAirSpringLocationConfiguration", 0x5A8, "StructProperty"},
            {"InAirSpringPlayerLocConfiguration", 0x668, "StructProperty"},
            {"MeshSocketName", 0x728, "NameProperty"},
            {"InAirMeshSocketName", 0x72C, "NameProperty"},
            {"SocketOffsetZ", 0x730, "StructProperty"},
            {"InAirSocketOffsetZ", 0x760, "StructProperty"},
            {"PlayerDistInAir", 0x790, "StructProperty"},
            {"InAirPitchRange", 0x7C0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SurfingWaveInfill
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SurfingWaveInfill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicPOISearchMaxDistance = 0xA8;
            static constexpr std::uintptr_t AllowJumpMinDistance = 0xD0;
            static constexpr std::uintptr_t AllowJumpMaxDistance = 0xF8;
            static constexpr std::uintptr_t JumpOffBusDestinationName = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DynamicPOISearchMaxDistance", 0xA8, "StructProperty"},
            {"AllowJumpMinDistance", 0xD0, "StructProperty"},
            {"AllowJumpMaxDistance", 0xF8, "StructProperty"},
            {"JumpOffBusDestinationName", 0x120, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_SurfingWaveInfill
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SurfingWaveInfill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpFromWaveInfillExecutionStatusName = 0x70;
            static constexpr std::uintptr_t ThankProbability = 0x78;
            static constexpr std::uintptr_t ThankMinDelay = 0xA0;
            static constexpr std::uintptr_t ThankMaxDelay = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JumpFromWaveInfillExecutionStatusName", 0x70, "NameProperty"},
            {"ThankProbability", 0x78, "StructProperty"},
            {"ThankMinDelay", 0xA0, "StructProperty"},
            {"ThankMaxDelay", 0xC8, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_SurfingWaveInfill
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_SurfingWaveInfill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InfillDestinationKeyName = 0x70;
            static constexpr std::uintptr_t EnableBehavior = 0x78;
            static constexpr std::uintptr_t MaxDestinationOffsetAlongSpline = 0xA0;
            static constexpr std::uintptr_t WaveDepthDirectionWeight = 0xC8;
            static constexpr std::uintptr_t AdjustSurfDestinationMinTime = 0xF0;
            static constexpr std::uintptr_t AdjustSurfDestinationMaxTime = 0x118;
            static constexpr std::uintptr_t SurfReachedDestinationDistance = 0x140;
            static constexpr std::uintptr_t BoostRequiredDistance = 0x168;
            static constexpr std::uintptr_t MinimumWaveDepthPercentage = 0x190;
            static constexpr std::uintptr_t MaximumWaveDepthPercentage = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InfillDestinationKeyName", 0x70, "NameProperty"},
            {"EnableBehavior", 0x78, "StructProperty"},
            {"MaxDestinationOffsetAlongSpline", 0xA0, "StructProperty"},
            {"WaveDepthDirectionWeight", 0xC8, "StructProperty"},
            {"AdjustSurfDestinationMinTime", 0xF0, "StructProperty"},
            {"AdjustSurfDestinationMaxTime", 0x118, "StructProperty"},
            {"SurfReachedDestinationDistance", 0x140, "StructProperty"},
            {"BoostRequiredDistance", 0x168, "StructProperty"},
            {"MinimumWaveDepthPercentage", 0x190, "StructProperty"},
            {"MaximumWaveDepthPercentage", 0x1B8, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_YokeHopKeeper
    {
        static constexpr std::string_view Name = "FortAthenaMutator_YokeHopKeeper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutomaticallyFinishInitialization = 0x2F0;
            static constexpr std::uintptr_t GameMsg_AircraftPhaseIntroMessage = 0x2F8;
            static constexpr std::uintptr_t Stinger_MatchStart = 0x348;
            static constexpr std::uintptr_t Stinger_MatchEnd = 0x358;
            static constexpr std::uintptr_t Stinger_MatchEndWin = 0x368;
            static constexpr std::uintptr_t Stinger_MatchEndLose = 0x378;
            static constexpr std::uintptr_t StingerAudioComponent = 0x398;
            static constexpr std::uintptr_t StingerEventForwarder = 0x3A0;
            static constexpr std::uintptr_t FortSquadStartActors = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bAutomaticallyFinishInitialization", 0x2F0, "BoolProperty"},
            {"GameMsg_AircraftPhaseIntroMessage", 0x2F8, "StructProperty"},
            {"Stinger_MatchStart", 0x348, "StructProperty"},
            {"Stinger_MatchEnd", 0x358, "StructProperty"},
            {"Stinger_MatchEndWin", 0x368, "StructProperty"},
            {"Stinger_MatchEndLose", 0x378, "StructProperty"},
            {"StingerAudioComponent", 0x398, "ObjectProperty"},
            {"StingerEventForwarder", 0x3A0, "ObjectProperty"},
            {"FortSquadStartActors", 0x3C0, "ArrayProperty"},
        }};
    };

    struct FortAthenaMutator_YokeHopKeeperGameState
    {
        static constexpr std::string_view Name = "FortAthenaMutator_YokeHopKeeperGameState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBlackScreenInitiated = 0x420;
            static constexpr std::uintptr_t StormRidingPhase = 0x468;
            static constexpr std::uintptr_t SquadSpawnLocations = 0x470;
            static constexpr std::uintptr_t BlockAndKillVolumesDataLayer = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnBlackScreenInitiated", 0x420, "MulticastInlineDelegateProperty"},
            {"StormRidingPhase", 0x468, "StructProperty"},
            {"SquadSpawnLocations", 0x470, "ArrayProperty"},
            {"BlockAndKillVolumesDataLayer", 0x480, "WeakObjectProperty"},
        }};
    };

    struct FortControllerComponent_YokeHopKeeperSpawning
    {
        static constexpr std::string_view Name = "FortControllerComponent_YokeHopKeeperSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnPlayerStart = 0xF8;
            static constexpr std::uintptr_t bWasTeleportedToMainIsland = 0x101;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnPlayerStart", 0xF8, "ObjectProperty"},
            {"bWasTeleportedToMainIsland", 0x101, "BoolProperty"},
        }};
    };

    struct FortGameStateComponent_YokeHopKeeper
    {
        static constexpr std::string_view Name = "FortGameStateComponent_YokeHopKeeper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneData = 0xD8;
            static constexpr std::uintptr_t ForcedEjectStormCompletionAlpha = 0x1C8;
            static constexpr std::uintptr_t StormWallActor = 0x1F0;
            static constexpr std::uintptr_t StormWallActorClass = 0x1F8;
            static constexpr std::uintptr_t StormWallActorClass_Streamed = 0x218;
            static constexpr std::uintptr_t SpawnInfoOverrideHumanTeamCount = 0x220;
            static constexpr std::uintptr_t SpawnInfoOverrideBotTeamCount = 0x248;
            static constexpr std::uintptr_t bWaveActive = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SafeZoneData", 0xD8, "StructProperty"},
            {"ForcedEjectStormCompletionAlpha", 0x1C8, "StructProperty"},
            {"StormWallActor", 0x1F0, "ObjectProperty"},
            {"StormWallActorClass", 0x1F8, "SoftClassProperty"},
            {"StormWallActorClass_Streamed", 0x218, "ClassProperty"},
            {"SpawnInfoOverrideHumanTeamCount", 0x220, "StructProperty"},
            {"SpawnInfoOverrideBotTeamCount", 0x248, "StructProperty"},
            {"bWaveActive", 0x270, "BoolProperty"},
        }};
    };

    struct FortMovementMode_ExtStormRiding
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtStormRiding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimLayer = 0x1C0;
            static constexpr std::uintptr_t CameraModifierClass = 0x1C8;
            static constexpr std::uintptr_t GrantedAbilitiesGE = 0x1D0;
            static constexpr std::uintptr_t RidingLoopCue = 0x1D8;
            static constexpr std::uintptr_t HolsterId = 0x1DC;
            static constexpr std::uintptr_t DefaultWaveRadius = 0x1E0;
            static constexpr std::uintptr_t WaveRadiusAdjust = 0x208;
            static constexpr std::uintptr_t OffTheWaveAlpha = 0x230;
            static constexpr std::uintptr_t OffTheWaveAlphaForEdge = 0x258;
            static constexpr std::uintptr_t HeightCurve = 0x280;
            static constexpr std::uintptr_t AdditionalHeightOffset = 0x2C8;
            static constexpr std::uintptr_t RadialHeightOffset = 0x2F0;
            static constexpr std::uintptr_t VelocityMaxSpeed = 0x318;
            static constexpr std::uintptr_t ForwardAcceleration = 0x340;
            static constexpr std::uintptr_t AccelerationRotationRateCurve = 0x368;
            static constexpr std::uintptr_t AccelerationRotationRateSpeedScalarCurve = 0x3B0;
            static constexpr std::uintptr_t VelocityCatchUpRotationRateCurve = 0x3F8;
            static constexpr std::uintptr_t StrafeAngleClamp = 0x440;
            static constexpr std::uintptr_t StrafeAngleClampSpeedScalarCurve = 0x468;
            static constexpr std::uintptr_t MaxCarvingAccelerationBoost = 0x4B0;
            static constexpr std::uintptr_t CarvingBoostDecayTime = 0x4D8;
            static constexpr std::uintptr_t CarvingBuildRate = 0x500;
            static constexpr std::uintptr_t DownhillBuildRate = 0x528;
            static constexpr std::uintptr_t UphillBuildRate = 0x550;
            static constexpr std::uintptr_t LinearDragCoefficient = 0x578;
            static constexpr std::uintptr_t QuadraticDragCoefficient = 0x5A0;
            static constexpr std::uintptr_t OffWaveLinearDragCoefficient = 0x5C8;
            static constexpr std::uintptr_t OffWaveQuadraticDragCoefficient = 0x5F0;
            static constexpr std::uintptr_t AccelerationScalarDecayTime = 0x618;
            static constexpr std::uintptr_t AccelerationScalarRecoveryTime = 0x640;
            static constexpr std::uintptr_t AccelerationMinDecayScalar = 0x668;
            static constexpr std::uintptr_t CantMovePastAlphaThreshold = 0x690;
            static constexpr std::uintptr_t WaveKeepUpDecayTime = 0x6B8;
            static constexpr std::uintptr_t WaveKeepUpRecoveryTime = 0x6E0;
            static constexpr std::uintptr_t WaveKeepUpMinScalar = 0x708;
            static constexpr std::uintptr_t TrickGravity = 0x730;
            static constexpr std::uintptr_t TrickAddedZVelocityScalar = 0x758;
            static constexpr std::uintptr_t TrickAirTimeMinimum = 0x780;
            static constexpr std::uintptr_t TrickStartedCue = 0x7A8;
            static constexpr std::uintptr_t TrickEndedCue = 0x7AC;
            static constexpr std::uintptr_t EarlyEndZVelocity = 0x7B0;
            static constexpr std::uintptr_t BoardClass = 0x7D8;
            static constexpr std::uintptr_t BoardAttachBone = 0x7E0;
            static constexpr std::uintptr_t BoardYawOffset = 0x7E8;
            static constexpr std::uintptr_t CurrentShapeSpline = 0x810;
            static constexpr std::uintptr_t PreviousShapeSpline = 0x818;
            static constexpr std::uintptr_t EndShapeSpline = 0x820;
            static constexpr std::uintptr_t GameState_CurrentShapeSpline = 0x82C;
            static constexpr std::uintptr_t GameState_PreviousShapeSpline = 0x834;
            static constexpr std::uintptr_t GameState_EndShapeSpline = 0x83C;
            static constexpr std::uintptr_t OwnerStormRidingComponent = 0x968;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"AnimLayer", 0x1C0, "ClassProperty"},
            {"CameraModifierClass", 0x1C8, "ClassProperty"},
            {"GrantedAbilitiesGE", 0x1D0, "ClassProperty"},
            {"RidingLoopCue", 0x1D8, "StructProperty"},
            {"HolsterId", 0x1DC, "NameProperty"},
            {"DefaultWaveRadius", 0x1E0, "StructProperty"},
            {"WaveRadiusAdjust", 0x208, "StructProperty"},
            {"OffTheWaveAlpha", 0x230, "StructProperty"},
            {"OffTheWaveAlphaForEdge", 0x258, "StructProperty"},
            {"HeightCurve", 0x280, "StructProperty"},
            {"AdditionalHeightOffset", 0x2C8, "StructProperty"},
            {"RadialHeightOffset", 0x2F0, "StructProperty"},
            {"VelocityMaxSpeed", 0x318, "StructProperty"},
            {"ForwardAcceleration", 0x340, "StructProperty"},
            {"AccelerationRotationRateCurve", 0x368, "StructProperty"},
            {"AccelerationRotationRateSpeedScalarCurve", 0x3B0, "StructProperty"},
            {"VelocityCatchUpRotationRateCurve", 0x3F8, "StructProperty"},
            {"StrafeAngleClamp", 0x440, "StructProperty"},
            {"StrafeAngleClampSpeedScalarCurve", 0x468, "StructProperty"},
            {"MaxCarvingAccelerationBoost", 0x4B0, "StructProperty"},
            {"CarvingBoostDecayTime", 0x4D8, "StructProperty"},
            {"CarvingBuildRate", 0x500, "StructProperty"},
            {"DownhillBuildRate", 0x528, "StructProperty"},
            {"UphillBuildRate", 0x550, "StructProperty"},
            {"LinearDragCoefficient", 0x578, "StructProperty"},
            {"QuadraticDragCoefficient", 0x5A0, "StructProperty"},
            {"OffWaveLinearDragCoefficient", 0x5C8, "StructProperty"},
            {"OffWaveQuadraticDragCoefficient", 0x5F0, "StructProperty"},
            {"AccelerationScalarDecayTime", 0x618, "StructProperty"},
            {"AccelerationScalarRecoveryTime", 0x640, "StructProperty"},
            {"AccelerationMinDecayScalar", 0x668, "StructProperty"},
            {"CantMovePastAlphaThreshold", 0x690, "StructProperty"},
            {"WaveKeepUpDecayTime", 0x6B8, "StructProperty"},
            {"WaveKeepUpRecoveryTime", 0x6E0, "StructProperty"},
            {"WaveKeepUpMinScalar", 0x708, "StructProperty"},
            {"TrickGravity", 0x730, "StructProperty"},
            {"TrickAddedZVelocityScalar", 0x758, "StructProperty"},
            {"TrickAirTimeMinimum", 0x780, "StructProperty"},
            {"TrickStartedCue", 0x7A8, "StructProperty"},
            {"TrickEndedCue", 0x7AC, "StructProperty"},
            {"EarlyEndZVelocity", 0x7B0, "StructProperty"},
            {"BoardClass", 0x7D8, "ClassProperty"},
            {"BoardAttachBone", 0x7E0, "NameProperty"},
            {"BoardYawOffset", 0x7E8, "StructProperty"},
            {"CurrentShapeSpline", 0x810, "ObjectProperty"},
            {"PreviousShapeSpline", 0x818, "ObjectProperty"},
            {"EndShapeSpline", 0x820, "ObjectProperty"},
            {"GameState_CurrentShapeSpline", 0x82C, "WeakObjectProperty"},
            {"GameState_PreviousShapeSpline", 0x834, "WeakObjectProperty"},
            {"GameState_EndShapeSpline", 0x83C, "WeakObjectProperty"},
            {"OwnerStormRidingComponent", 0x968, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtStormRidingLaunch
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtStormRidingLaunch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t Configs = 0x1B8;
            static constexpr std::uintptr_t ManualEjectStrength = 0x1F8;
            static constexpr std::uintptr_t ManualEjectAcceptableAimAngle = 0x220;
            static constexpr std::uintptr_t ManualEjectAngle = 0x248;
            static constexpr std::uintptr_t ForcedEjectStrength = 0x270;
            static constexpr std::uintptr_t ForcedEjectAcceptableAimAngle = 0x298;
            static constexpr std::uintptr_t ForcedEjectAngle = 0x2C0;
            static constexpr std::uintptr_t OverrideFallingLateralFrictionBeforeGlider = 0x2E8;
            static constexpr std::uintptr_t GravityZMultiplierBeforeGlider = 0x310;
            static constexpr std::uintptr_t LaunchAnimationTimeToSkydive = 0x338;
            static constexpr std::uintptr_t TimeToKeepParachuteLocked = 0x340;
            static constexpr std::uintptr_t HUDTagsToHideOnParachute = 0x368;
            static constexpr std::uintptr_t LaunchAnimationMontage = 0x388;
            static constexpr std::uintptr_t LaunchedCue = 0x390;
            static constexpr std::uintptr_t LaunchCameraModeClass = 0x398;
            static constexpr std::uintptr_t CameraModePriority = 0x3A0;
            static constexpr std::uintptr_t LaunchCameraTag = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Configs", 0x1B8, "ArrayProperty"},
            {"ManualEjectStrength", 0x1F8, "StructProperty"},
            {"ManualEjectAcceptableAimAngle", 0x220, "StructProperty"},
            {"ManualEjectAngle", 0x248, "StructProperty"},
            {"ForcedEjectStrength", 0x270, "StructProperty"},
            {"ForcedEjectAcceptableAimAngle", 0x298, "StructProperty"},
            {"ForcedEjectAngle", 0x2C0, "StructProperty"},
            {"OverrideFallingLateralFrictionBeforeGlider", 0x2E8, "StructProperty"},
            {"GravityZMultiplierBeforeGlider", 0x310, "StructProperty"},
            {"LaunchAnimationTimeToSkydive", 0x338, "FloatProperty"},
            {"TimeToKeepParachuteLocked", 0x340, "StructProperty"},
            {"HUDTagsToHideOnParachute", 0x368, "StructProperty"},
            {"LaunchAnimationMontage", 0x388, "ObjectProperty"},
            {"LaunchedCue", 0x390, "StructProperty"},
            {"LaunchCameraModeClass", 0x398, "ClassProperty"},
            {"CameraModePriority", 0x3A0, "StructProperty"},
            {"LaunchCameraTag", 0x3C8, "StructProperty"},
        }};
    };

    struct FortMovementMode_StormRidingLaunchRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_StormRidingLaunchRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentState = 0x38;
            static constexpr std::uintptr_t NetFinalCenter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentState", 0x38, "EnumProperty"},
            {"NetFinalCenter", 0x40, "StructProperty"},
        }};
    };

    struct FortMovementMode_StormRidingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_StormRidingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t StormWallActor = 0x38;
            static constexpr std::uintptr_t PlayerCamera = 0x40;
            static constexpr std::uintptr_t ActiveCameraModifier = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StormWallActor", 0x38, "WeakObjectProperty"},
            {"PlayerCamera", 0x40, "WeakObjectProperty"},
            {"ActiveCameraModifier", 0x48, "WeakObjectProperty"},
        }};
    };

    struct FortPawnComponent_StormRiding
    {
        static constexpr std::string_view Name = "FortPawnComponent_StormRiding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LastTimeEjected = 0xC8;
            static constexpr std::uintptr_t bCanTriggerStormRiding = 0xCC;
            static constexpr std::uintptr_t NativeMovementModeClass = 0xD0;
            static constexpr std::uintptr_t LaunchMovementModeClass = 0xD8;
            static constexpr std::uintptr_t BoardActor = 0xE8;
            static constexpr std::uintptr_t LateLaunchTeleportLocation = 0xF0;
            static constexpr std::uintptr_t WaveDirection = 0x108;
            static constexpr std::uintptr_t WaveFacingDelta = 0x120;
            static constexpr std::uintptr_t WaveNormal = 0x128;
            static constexpr std::uintptr_t AngleOfIncline = 0x140;
            static constexpr std::uintptr_t bIsOnWave = 0x144;
            static constexpr std::uintptr_t bRidingTheWall = 0x145;
            static constexpr std::uintptr_t bGravityActive = 0x146;
            static constexpr std::uintptr_t RotationThisFrame = 0x148;
            static constexpr std::uintptr_t AngleToDesired = 0x14C;
            static constexpr std::uintptr_t EstimatedAirTime = 0x150;
            static constexpr std::uintptr_t LastUpdatedActorLocation = 0x158;
            static constexpr std::uintptr_t WaveKeepUpThisFrame = 0x170;
            static constexpr std::uintptr_t IntroMontage = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"LastTimeEjected", 0xC8, "FloatProperty"},
            {"bCanTriggerStormRiding", 0xCC, "BoolProperty"},
            {"NativeMovementModeClass", 0xD0, "ClassProperty"},
            {"LaunchMovementModeClass", 0xD8, "ClassProperty"},
            {"BoardActor", 0xE8, "ObjectProperty"},
            {"LateLaunchTeleportLocation", 0xF0, "StructProperty"},
            {"WaveDirection", 0x108, "StructProperty"},
            {"WaveFacingDelta", 0x120, "FloatProperty"},
            {"WaveNormal", 0x128, "StructProperty"},
            {"AngleOfIncline", 0x140, "FloatProperty"},
            {"bIsOnWave", 0x144, "BoolProperty"},
            {"bRidingTheWall", 0x145, "BoolProperty"},
            {"bGravityActive", 0x146, "BoolProperty"},
            {"RotationThisFrame", 0x148, "FloatProperty"},
            {"AngleToDesired", 0x14C, "FloatProperty"},
            {"EstimatedAirTime", 0x150, "FloatProperty"},
            {"LastUpdatedActorLocation", 0x158, "StructProperty"},
            {"WaveKeepUpThisFrame", 0x170, "StructProperty"},
            {"IntroMontage", 0x188, "ObjectProperty"},
        }};
    };

    struct FortStormRidingLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortStormRidingLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t TurnRightOutroToIdleRelevancyData = 0x1180;
            static constexpr std::uintptr_t TurnLeftOutroToIdleRelevancyData = 0x1194;
            static constexpr std::uintptr_t RootOffset = 0x11A8;
            static constexpr std::uintptr_t AngleOfIncline = 0x11C0;
            static constexpr std::uintptr_t TurnDeltaYaw = 0x11C4;
            static constexpr std::uintptr_t IsFullBodyPosingFloat = 0x11C8;
            static constexpr std::uintptr_t WaveFacingDelta = 0x11D0;
            static constexpr std::uintptr_t PeelyOffsetTwist = 0x11D8;
            static constexpr std::uintptr_t ForwardLeanAlpha = 0x11E0;
            static constexpr std::uintptr_t SurfLegIKAlpha = 0x11E8;
            static constexpr std::uintptr_t PeelyOffset = 0x11F0;
            static constexpr std::uintptr_t NoiseAlpha = 0x11F8;
            static constexpr std::uintptr_t TurnLeanBSAlpha = 0x1200;
            static constexpr std::uintptr_t bIsRightSideInAir = 0x1208;
            static constexpr std::uintptr_t bCanTurnLeft = 0x1209;
            static constexpr std::uintptr_t bTurn180 = 0x120A;
            static constexpr std::uintptr_t bGravityActive = 0x120B;
            static constexpr std::uintptr_t bFwLeanTrigger = 0x120C;
            static constexpr std::uintptr_t bFacingUpWave = 0x120D;
            static constexpr std::uintptr_t bFacingDownWave = 0x120E;
            static constexpr std::uintptr_t bCanTurnRight = 0x120F;
            static constexpr std::uintptr_t bTurningBS = 0x1210;
            static constexpr std::uintptr_t bPassThroughToFwdLean = 0x1211;
            static constexpr std::uintptr_t bIsFullBodyPosing = 0x1212;
            static constexpr std::uintptr_t bTransitionFromTurnRightOutroToIdle = 0x1213;
            static constexpr std::uintptr_t bTransitionFromTurnLeftOutroToIdle = 0x1214;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"TurnRightOutroToIdleRelevancyData", 0x1180, "StructProperty"},
            {"TurnLeftOutroToIdleRelevancyData", 0x1194, "StructProperty"},
            {"RootOffset", 0x11A8, "StructProperty"},
            {"AngleOfIncline", 0x11C0, "FloatProperty"},
            {"TurnDeltaYaw", 0x11C4, "FloatProperty"},
            {"IsFullBodyPosingFloat", 0x11C8, "FloatProperty"},
            {"WaveFacingDelta", 0x11D0, "DoubleProperty"},
            {"PeelyOffsetTwist", 0x11D8, "DoubleProperty"},
            {"ForwardLeanAlpha", 0x11E0, "DoubleProperty"},
            {"SurfLegIKAlpha", 0x11E8, "DoubleProperty"},
            {"PeelyOffset", 0x11F0, "DoubleProperty"},
            {"NoiseAlpha", 0x11F8, "DoubleProperty"},
            {"TurnLeanBSAlpha", 0x1200, "DoubleProperty"},
            {"bIsRightSideInAir", 0x1208, "BoolProperty"},
            {"bCanTurnLeft", 0x1209, "BoolProperty"},
            {"bTurn180", 0x120A, "BoolProperty"},
            {"bGravityActive", 0x120B, "BoolProperty"},
            {"bFwLeanTrigger", 0x120C, "BoolProperty"},
            {"bFacingUpWave", 0x120D, "BoolProperty"},
            {"bFacingDownWave", 0x120E, "BoolProperty"},
            {"bCanTurnRight", 0x120F, "BoolProperty"},
            {"bTurningBS", 0x1210, "BoolProperty"},
            {"bPassThroughToFwdLean", 0x1211, "BoolProperty"},
            {"bIsFullBodyPosing", 0x1212, "BoolProperty"},
            {"bTransitionFromTurnRightOutroToIdle", 0x1213, "BoolProperty"},
            {"bTransitionFromTurnLeftOutroToIdle", 0x1214, "BoolProperty"},
        }};
    };

    struct YokeHopKeeperAnalyticsComponent
    {
        static constexpr std::string_view Name = "YokeHopKeeperAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct YokeHopKeeperWallActor
    {
        static constexpr std::string_view Name = "YokeHopKeeperWallActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeSpline = 0x278;
            static constexpr std::uintptr_t NativeSplineMeshes = 0x280;
            static constexpr std::uintptr_t NativeSplineMesh = 0x290;
            static constexpr std::uintptr_t NativeSplineMeshMaterial0 = 0x298;
            static constexpr std::uintptr_t NativeSplineMeshMaterial1 = 0x2A0;
            static constexpr std::uintptr_t NativeRadius = 0x2A8;
            static constexpr std::uintptr_t NativeFirstPointToUpdate = 0x2AC;
            static constexpr std::uintptr_t NativeNumPointsToUpdatePerFrame = 0x2B0;
            static constexpr std::uintptr_t NativeNumPoints = 0x2B4;
            static constexpr std::uintptr_t NativeGroundCheckOffset = 0x2B8;
            static constexpr std::uintptr_t NativeGroundCheckDistanceAhead = 0x2BC;
            static constexpr std::uintptr_t NativeMeshScale = 0x2C0;
            static constexpr std::uintptr_t NativeSplineMeshOffset = 0x2D0;
            static constexpr std::uintptr_t NativeWaveAudio = 0x2E8;
            static constexpr std::uintptr_t NativeSplinePointOffsetZ = 0x2F0;
            static constexpr std::uintptr_t NativeInterpSpeed = 0x2F4;
            static constexpr std::uintptr_t NativeWaveBoundsX = 0x2F8;
            static constexpr std::uintptr_t WaveMeshHeight = 0x300;
            static constexpr std::uintptr_t WaveMeshLength = 0x304;
            static constexpr std::uintptr_t WaveMeshHeightOffset = 0x308;
            static constexpr std::uintptr_t WaveMeshCenterAlpha = 0x30C;
            static constexpr std::uintptr_t WaveProfile = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"NativeSpline", 0x278, "WeakObjectProperty"},
            {"NativeSplineMeshes", 0x280, "ArrayProperty"},
            {"NativeSplineMesh", 0x290, "ObjectProperty"},
            {"NativeSplineMeshMaterial0", 0x298, "ObjectProperty"},
            {"NativeSplineMeshMaterial1", 0x2A0, "ObjectProperty"},
            {"NativeRadius", 0x2A8, "FloatProperty"},
            {"NativeFirstPointToUpdate", 0x2AC, "IntProperty"},
            {"NativeNumPointsToUpdatePerFrame", 0x2B0, "IntProperty"},
            {"NativeNumPoints", 0x2B4, "IntProperty"},
            {"NativeGroundCheckOffset", 0x2B8, "FloatProperty"},
            {"NativeGroundCheckDistanceAhead", 0x2BC, "FloatProperty"},
            {"NativeMeshScale", 0x2C0, "StructProperty"},
            {"NativeSplineMeshOffset", 0x2D0, "StructProperty"},
            {"NativeWaveAudio", 0x2E8, "ObjectProperty"},
            {"NativeSplinePointOffsetZ", 0x2F0, "FloatProperty"},
            {"NativeInterpSpeed", 0x2F4, "FloatProperty"},
            {"NativeWaveBoundsX", 0x2F8, "FloatProperty"},
            {"WaveMeshHeight", 0x300, "FloatProperty"},
            {"WaveMeshLength", 0x304, "FloatProperty"},
            {"WaveMeshHeightOffset", 0x308, "FloatProperty"},
            {"WaveMeshCenterAlpha", 0x30C, "FloatProperty"},
            {"WaveProfile", 0x310, "ObjectProperty"},
        }};
    };

}
