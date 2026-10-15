/**
 * decamp dumper generated SDK
 * Package: /Script/YokeHopKeeperRuntime
 */
#pragma once
#include "Basic.h"

// /Script/YokeHopKeeperRuntime.FortMovementMode_StormRidingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_StormRidingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_StormRidingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_StormRidingCreationData::LogicClass");

// /Script/YokeHopKeeperRuntime.FortMovementMode_StormRidingLaunchCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_StormRidingLaunchCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_StormRidingLaunchCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_StormRidingLaunchCreationData::LogicClass");

// /Script/YokeHopKeeperRuntime.SpringConfiguration
// Kind: ScriptStruct; super: none
struct FSpringConfiguration
{
public:
    std::uint8_t SpringMass[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpringStiffness[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpringDamping[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpringMaxLength[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpringConfiguration, SpringMass) == 0, "Offset mismatch for FSpringConfiguration::SpringMass");
static_assert(offsetof(FSpringConfiguration, SpringStiffness) == 48, "Offset mismatch for FSpringConfiguration::SpringStiffness");
static_assert(offsetof(FSpringConfiguration, SpringDamping) == 96, "Offset mismatch for FSpringConfiguration::SpringDamping");
static_assert(offsetof(FSpringConfiguration, SpringMaxLength) == 144, "Offset mismatch for FSpringConfiguration::SpringMaxLength");

// /Script/YokeHopKeeperRuntime.StormRidingLaunchStateConfig
// Kind: ScriptStruct; super: none
struct FStormRidingLaunchStateConfig
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t OverrideFallingLateralFrictionMultiplier[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideAirControlParams[0x148]; // 0x0030 (Size: 0x148, Type: OptionalProperty)
    std::uint8_t OverrideMaxSpeed[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStormRidingLaunchStateConfig, State) == 0, "Offset mismatch for FStormRidingLaunchStateConfig::State");
static_assert(offsetof(FStormRidingLaunchStateConfig, OverrideFallingLateralFrictionMultiplier) == 8, "Offset mismatch for FStormRidingLaunchStateConfig::OverrideFallingLateralFrictionMultiplier");
static_assert(offsetof(FStormRidingLaunchStateConfig, OverrideAirControlParams) == 48, "Offset mismatch for FStormRidingLaunchStateConfig::OverrideAirControlParams");
static_assert(offsetof(FStormRidingLaunchStateConfig, OverrideMaxSpeed) == 376, "Offset mismatch for FStormRidingLaunchStateConfig::OverrideMaxSpeed");

// /Script/YokeHopKeeperRuntime.StormRidingSafeZoneData
// Kind: ScriptStruct; super: none
struct FStormRidingSafeZoneData
{
public:
    std::uint8_t Radius[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTime[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShrinkTime[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceDistanceMin[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceDistanceMax[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartingRadius[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStormRidingSafeZoneData, Radius) == 0, "Offset mismatch for FStormRidingSafeZoneData::Radius");
static_assert(offsetof(FStormRidingSafeZoneData, WaitTime) == 40, "Offset mismatch for FStormRidingSafeZoneData::WaitTime");
static_assert(offsetof(FStormRidingSafeZoneData, ShrinkTime) == 80, "Offset mismatch for FStormRidingSafeZoneData::ShrinkTime");
static_assert(offsetof(FStormRidingSafeZoneData, ForceDistanceMin) == 120, "Offset mismatch for FStormRidingSafeZoneData::ForceDistanceMin");
static_assert(offsetof(FStormRidingSafeZoneData, ForceDistanceMax) == 160, "Offset mismatch for FStormRidingSafeZoneData::ForceDistanceMax");
static_assert(offsetof(FStormRidingSafeZoneData, StartingRadius) == 200, "Offset mismatch for FStormRidingSafeZoneData::StartingRadius");

// /Script/YokeHopKeeperRuntime.YokeHopKeeper_StormRidingPhaseEvent
// Kind: ScriptStruct; super: none
struct FYokeHopKeeper_StormRidingPhaseEvent
{
public:
    std::uint8_t Phase; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OldPhase; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FYokeHopKeeper_StormRidingPhaseEvent, Phase) == 0, "Offset mismatch for FYokeHopKeeper_StormRidingPhaseEvent::Phase");
static_assert(offsetof(FYokeHopKeeper_StormRidingPhaseEvent, OldPhase) == 1, "Offset mismatch for FYokeHopKeeper_StormRidingPhaseEvent::OldPhase");

// /Script/YokeHopKeeperRuntime.YokeHopKeeper_StormRidingPhaseInfo
// Kind: ScriptStruct; super: none
struct FYokeHopKeeper_StormRidingPhaseInfo
{
public:
    std::uint8_t Phase; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ServerTimeSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FYokeHopKeeper_StormRidingPhaseInfo, Phase) == 0, "Offset mismatch for FYokeHopKeeper_StormRidingPhaseInfo::Phase");
static_assert(offsetof(FYokeHopKeeper_StormRidingPhaseInfo, ServerTimeSeconds) == 4, "Offset mismatch for FYokeHopKeeper_StormRidingPhaseInfo::ServerTimeSeconds");

// /Script/YokeHopKeeperRuntime.YokeHopKeeper_TeleportedToMainIslandEvent
// Kind: ScriptStruct; super: none
struct FYokeHopKeeper_TeleportedToMainIslandEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/YokeHopKeeperRuntime.CameraModifier_YokeHopKeeper
// Kind: Class; super: CameraModifier
class UCameraModifier_YokeHopKeeper
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t MinDesiredWaveOffset[0x30]; // 0x0048 (Size: 0x30, Type: StructProperty)
    std::uint8_t SafetyRadius[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    void* AutoPitchCorrectionCurve; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* OvershootAdjustmentCurve; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    float PitchCorrectionInterpolationSpeed; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    std::uint8_t PitchRange[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    void* FOVCurve; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MinSpeedBasis[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxSpeedBasis[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinFOV[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxFOV[0x30]; // 0x0188 (Size: 0x30, Type: StructProperty)
    std::uint8_t FOVInterpolationSpeed[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t CameraMomentumSpringConfiguration[0xC0]; // 0x01E8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t WaveCollisionSpringConfiguration[0xC0]; // 0x02A8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t SurfaceNormalSpringConfiguration[0xC0]; // 0x0368 (Size: 0xC0, Type: StructProperty)
    std::uint8_t CameraRotationSpringConfiguration[0xC0]; // 0x0428 (Size: 0xC0, Type: StructProperty)
    std::uint8_t InAirSpringRotationConfiguration[0xC0]; // 0x04E8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t InAirSpringLocationConfiguration[0xC0]; // 0x05A8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t InAirSpringPlayerLocConfiguration[0xC0]; // 0x0668 (Size: 0xC0, Type: StructProperty)
    std::uint8_t MeshSocketName[0x4]; // 0x0728 (Size: 0x4, Type: NameProperty)
    std::uint8_t InAirMeshSocketName[0x4]; // 0x072C (Size: 0x4, Type: NameProperty)
    std::uint8_t SocketOffsetZ[0x30]; // 0x0730 (Size: 0x30, Type: StructProperty)
    std::uint8_t InAirSocketOffsetZ[0x30]; // 0x0760 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerDistInAir[0x30]; // 0x0790 (Size: 0x30, Type: StructProperty)
    std::uint8_t InAirPitchRange[0x1]; // 0x07C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCameraModifier_YokeHopKeeper, MinDesiredWaveOffset) == 72, "Offset mismatch for UCameraModifier_YokeHopKeeper::MinDesiredWaveOffset");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, SafetyRadius) == 120, "Offset mismatch for UCameraModifier_YokeHopKeeper::SafetyRadius");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, AutoPitchCorrectionCurve) == 168, "Offset mismatch for UCameraModifier_YokeHopKeeper::AutoPitchCorrectionCurve");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, OvershootAdjustmentCurve) == 176, "Offset mismatch for UCameraModifier_YokeHopKeeper::OvershootAdjustmentCurve");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, PitchCorrectionInterpolationSpeed) == 184, "Offset mismatch for UCameraModifier_YokeHopKeeper::PitchCorrectionInterpolationSpeed");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, PitchRange) == 192, "Offset mismatch for UCameraModifier_YokeHopKeeper::PitchRange");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, FOVCurve) == 240, "Offset mismatch for UCameraModifier_YokeHopKeeper::FOVCurve");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, MinSpeedBasis) == 248, "Offset mismatch for UCameraModifier_YokeHopKeeper::MinSpeedBasis");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, MaxSpeedBasis) == 296, "Offset mismatch for UCameraModifier_YokeHopKeeper::MaxSpeedBasis");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, MinFOV) == 344, "Offset mismatch for UCameraModifier_YokeHopKeeper::MinFOV");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, MaxFOV) == 392, "Offset mismatch for UCameraModifier_YokeHopKeeper::MaxFOV");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, FOVInterpolationSpeed) == 440, "Offset mismatch for UCameraModifier_YokeHopKeeper::FOVInterpolationSpeed");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, CameraMomentumSpringConfiguration) == 488, "Offset mismatch for UCameraModifier_YokeHopKeeper::CameraMomentumSpringConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, WaveCollisionSpringConfiguration) == 680, "Offset mismatch for UCameraModifier_YokeHopKeeper::WaveCollisionSpringConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, SurfaceNormalSpringConfiguration) == 872, "Offset mismatch for UCameraModifier_YokeHopKeeper::SurfaceNormalSpringConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, CameraRotationSpringConfiguration) == 1064, "Offset mismatch for UCameraModifier_YokeHopKeeper::CameraRotationSpringConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirSpringRotationConfiguration) == 1256, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirSpringRotationConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirSpringLocationConfiguration) == 1448, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirSpringLocationConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirSpringPlayerLocConfiguration) == 1640, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirSpringPlayerLocConfiguration");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, MeshSocketName) == 1832, "Offset mismatch for UCameraModifier_YokeHopKeeper::MeshSocketName");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirMeshSocketName) == 1836, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirMeshSocketName");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, SocketOffsetZ) == 1840, "Offset mismatch for UCameraModifier_YokeHopKeeper::SocketOffsetZ");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirSocketOffsetZ) == 1888, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirSocketOffsetZ");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, PlayerDistInAir) == 1936, "Offset mismatch for UCameraModifier_YokeHopKeeper::PlayerDistInAir");
static_assert(offsetof(UCameraModifier_YokeHopKeeper, InAirPitchRange) == 1984, "Offset mismatch for UCameraModifier_YokeHopKeeper::InAirPitchRange");

// /Script/YokeHopKeeperRuntime.FortAthenaAIBotEvaluator_SurfingWaveInfill
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_SurfingWaveInfill
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DynamicPOISearchMaxDistance[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowJumpMinDistance[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowJumpMaxDistance[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    FName JumpOffBusDestinationName; // 0x0120 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SurfingWaveInfill, DynamicPOISearchMaxDistance) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_SurfingWaveInfill::DynamicPOISearchMaxDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SurfingWaveInfill, AllowJumpMinDistance) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_SurfingWaveInfill::AllowJumpMinDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SurfingWaveInfill, AllowJumpMaxDistance) == 248, "Offset mismatch for UFortAthenaAIBotEvaluator_SurfingWaveInfill::AllowJumpMaxDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SurfingWaveInfill, JumpOffBusDestinationName) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_SurfingWaveInfill::JumpOffBusDestinationName");

// /Script/YokeHopKeeperRuntime.FortAthenaBTService_SurfingWaveInfill
// Kind: Class; super: BTService
class UFortAthenaBTService_SurfingWaveInfill
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName JumpFromWaveInfillExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
    std::uint8_t ThankProbability[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ThankMinDelay[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ThankMaxDelay[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_SurfingWaveInfill, JumpFromWaveInfillExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_SurfingWaveInfill::JumpFromWaveInfillExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_SurfingWaveInfill, ThankProbability) == 120, "Offset mismatch for UFortAthenaBTService_SurfingWaveInfill::ThankProbability");
static_assert(offsetof(UFortAthenaBTService_SurfingWaveInfill, ThankMinDelay) == 160, "Offset mismatch for UFortAthenaBTService_SurfingWaveInfill::ThankMinDelay");
static_assert(offsetof(UFortAthenaBTService_SurfingWaveInfill, ThankMaxDelay) == 200, "Offset mismatch for UFortAthenaBTService_SurfingWaveInfill::ThankMaxDelay");

// /Script/YokeHopKeeperRuntime.FortAthenaBTTask_SurfingWaveInfill
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_SurfingWaveInfill
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName InfillDestinationKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    std::uint8_t EnableBehavior[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDestinationOffsetAlongSpline[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveDepthDirectionWeight[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdjustSurfDestinationMinTime[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdjustSurfDestinationMaxTime[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t SurfReachedDestinationDistance[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostRequiredDistance[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumWaveDepthPercentage[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumWaveDepthPercentage[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, InfillDestinationKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::InfillDestinationKeyName");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, EnableBehavior) == 120, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::EnableBehavior");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, MaxDestinationOffsetAlongSpline) == 160, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::MaxDestinationOffsetAlongSpline");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, WaveDepthDirectionWeight) == 200, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::WaveDepthDirectionWeight");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, AdjustSurfDestinationMinTime) == 240, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::AdjustSurfDestinationMinTime");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, AdjustSurfDestinationMaxTime) == 280, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::AdjustSurfDestinationMaxTime");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, SurfReachedDestinationDistance) == 320, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::SurfReachedDestinationDistance");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, BoostRequiredDistance) == 360, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::BoostRequiredDistance");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, MinimumWaveDepthPercentage) == 400, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::MinimumWaveDepthPercentage");
static_assert(offsetof(UFortAthenaBTTask_SurfingWaveInfill, MaximumWaveDepthPercentage) == 440, "Offset mismatch for UFortAthenaBTTask_SurfingWaveInfill::MaximumWaveDepthPercentage");

// /Script/YokeHopKeeperRuntime.FortAthenaMutator_YokeHopKeeper
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_YokeHopKeeper
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    std::uint8_t bAutomaticallyFinishInitialization; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02E9
    std::uint8_t GameMsg_AircraftPhaseIntroMessage[0x50]; // 0x02F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t Stinger_MatchStart[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEnd[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndWin[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndLose[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    void* StingerAudioComponent; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* StingerEventForwarder; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0398
    TArray<void*> FortSquadStartActors; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, bAutomaticallyFinishInitialization) == 744, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::bAutomaticallyFinishInitialization");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, GameMsg_AircraftPhaseIntroMessage) == 752, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::GameMsg_AircraftPhaseIntroMessage");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, Stinger_MatchStart) == 832, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::Stinger_MatchStart");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, Stinger_MatchEnd) == 848, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::Stinger_MatchEnd");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, Stinger_MatchEndWin) == 864, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::Stinger_MatchEndWin");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, Stinger_MatchEndLose) == 880, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::Stinger_MatchEndLose");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, StingerAudioComponent) == 904, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::StingerAudioComponent");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, StingerEventForwarder) == 912, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::StingerEventForwarder");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeper, FortSquadStartActors) == 944, "Offset mismatch for UFortAthenaMutator_YokeHopKeeper::FortSquadStartActors");

// /Script/YokeHopKeeperRuntime.FortAthenaMutator_YokeHopKeeperGameState
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_YokeHopKeeperGameState
{
public:
    std::uint8_t Pad_0000[0x408]; // 0x0000
    FMulticastInlineDelegate OnBlackScreenInitiated; // 0x0408 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0418
    std::uint8_t StormRidingPhase[0x8]; // 0x0448 (Size: 0x8, Type: StructProperty)
    TArray<void*> SquadSpawnLocations; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> BlockAndKillVolumesDataLayer; // 0x0460 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaMutator_YokeHopKeeperGameState, OnBlackScreenInitiated) == 1032, "Offset mismatch for UFortAthenaMutator_YokeHopKeeperGameState::OnBlackScreenInitiated");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeperGameState, StormRidingPhase) == 1096, "Offset mismatch for UFortAthenaMutator_YokeHopKeeperGameState::StormRidingPhase");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeperGameState, SquadSpawnLocations) == 1104, "Offset mismatch for UFortAthenaMutator_YokeHopKeeperGameState::SquadSpawnLocations");
static_assert(offsetof(UFortAthenaMutator_YokeHopKeeperGameState, BlockAndKillVolumesDataLayer) == 1120, "Offset mismatch for UFortAthenaMutator_YokeHopKeeperGameState::BlockAndKillVolumesDataLayer");

// /Script/YokeHopKeeperRuntime.FortControllerComponent_YokeHopKeeperSpawning
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_YokeHopKeeperSpawning
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SpawnPlayerStart; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0100
    std::uint8_t bWasTeleportedToMainIsland; // 0x0101 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortControllerComponent_YokeHopKeeperSpawning, SpawnPlayerStart) == 248, "Offset mismatch for UFortControllerComponent_YokeHopKeeperSpawning::SpawnPlayerStart");
static_assert(offsetof(UFortControllerComponent_YokeHopKeeperSpawning, bWasTeleportedToMainIsland) == 257, "Offset mismatch for UFortControllerComponent_YokeHopKeeperSpawning::bWasTeleportedToMainIsland");

// /Script/YokeHopKeeperRuntime.FortGameStateComponent_YokeHopKeeper
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_YokeHopKeeper
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t SafeZoneData[0xF0]; // 0x00D8 (Size: 0xF0, Type: StructProperty)
    std::uint8_t ForcedEjectStormCompletionAlpha[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    void* StormWallActor; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StormWallActorClass[0x20]; // 0x01F8 (Size: 0x20, Type: SoftClassProperty)
    void* StormWallActorClass_Streamed; // 0x0218 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpawnInfoOverrideHumanTeamCount[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnInfoOverrideBotTeamCount[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t bWaveActive; // 0x0270 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, SafeZoneData) == 216, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::SafeZoneData");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, ForcedEjectStormCompletionAlpha) == 456, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::ForcedEjectStormCompletionAlpha");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, StormWallActor) == 496, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::StormWallActor");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, StormWallActorClass) == 504, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::StormWallActorClass");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, StormWallActorClass_Streamed) == 536, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::StormWallActorClass_Streamed");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, SpawnInfoOverrideHumanTeamCount) == 544, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::SpawnInfoOverrideHumanTeamCount");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, SpawnInfoOverrideBotTeamCount) == 584, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::SpawnInfoOverrideBotTeamCount");
static_assert(offsetof(UFortGameStateComponent_YokeHopKeeper, bWaveActive) == 624, "Offset mismatch for UFortGameStateComponent_YokeHopKeeper::bWaveActive");

// /Script/YokeHopKeeperRuntime.FortMovementMode_ExtStormRiding
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtStormRiding
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* AnimLayer; // 0x01C0 (Size: 0x8, Type: ClassProperty)
    void* CameraModifierClass; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    void* GrantedAbilitiesGE; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RidingLoopCue[0x4]; // 0x01D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t HolsterId[0x4]; // 0x01DC (Size: 0x4, Type: NameProperty)
    std::uint8_t DefaultWaveRadius[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveRadiusAdjust[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffTheWaveAlpha[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffTheWaveAlphaForEdge[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightCurve[0x48]; // 0x0280 (Size: 0x48, Type: StructProperty)
    std::uint8_t AdditionalHeightOffset[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RadialHeightOffset[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityMaxSpeed[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardAcceleration[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationRotationRateCurve[0x48]; // 0x0368 (Size: 0x48, Type: StructProperty)
    std::uint8_t AccelerationRotationRateSpeedScalarCurve[0x48]; // 0x03B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t VelocityCatchUpRotationRateCurve[0x48]; // 0x03F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t StrafeAngleClamp[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    std::uint8_t StrafeAngleClampSpeedScalarCurve[0x48]; // 0x0468 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaxCarvingAccelerationBoost[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CarvingBoostDecayTime[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CarvingBuildRate[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownhillBuildRate[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t UphillBuildRate[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    std::uint8_t LinearDragCoefficient[0x28]; // 0x0578 (Size: 0x28, Type: StructProperty)
    std::uint8_t QuadraticDragCoefficient[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffWaveLinearDragCoefficient[0x28]; // 0x05C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffWaveQuadraticDragCoefficient[0x28]; // 0x05F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationScalarDecayTime[0x28]; // 0x0618 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationScalarRecoveryTime[0x28]; // 0x0640 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationMinDecayScalar[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    std::uint8_t CantMovePastAlphaThreshold[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveKeepUpDecayTime[0x28]; // 0x06B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveKeepUpRecoveryTime[0x28]; // 0x06E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveKeepUpMinScalar[0x28]; // 0x0708 (Size: 0x28, Type: StructProperty)
    std::uint8_t TrickGravity[0x28]; // 0x0730 (Size: 0x28, Type: StructProperty)
    std::uint8_t TrickAddedZVelocityScalar[0x28]; // 0x0758 (Size: 0x28, Type: StructProperty)
    std::uint8_t TrickAirTimeMinimum[0x28]; // 0x0780 (Size: 0x28, Type: StructProperty)
    std::uint8_t TrickStartedCue[0x4]; // 0x07A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TrickEndedCue[0x4]; // 0x07AC (Size: 0x4, Type: StructProperty)
    std::uint8_t EarlyEndZVelocity[0x28]; // 0x07B0 (Size: 0x28, Type: StructProperty)
    void* BoardClass; // 0x07D8 (Size: 0x8, Type: ClassProperty)
    FName BoardAttachBone; // 0x07E0 (Size: 0x8, Type: NameProperty)
    std::uint8_t BoardYawOffset[0x28]; // 0x07E8 (Size: 0x28, Type: StructProperty)
    void* CurrentShapeSpline; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* PreviousShapeSpline; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    void* EndShapeSpline; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0828
    TWeakObjectPtr<void> GameState_CurrentShapeSpline; // 0x082C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> GameState_PreviousShapeSpline; // 0x0834 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> GameState_EndShapeSpline; // 0x083C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x124]; // 0x0844
    TWeakObjectPtr<void> OwnerStormRidingComponent; // 0x0968 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ExtStormRiding, AnimLayer) == 448, "Offset mismatch for UFortMovementMode_ExtStormRiding::AnimLayer");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, CameraModifierClass) == 456, "Offset mismatch for UFortMovementMode_ExtStormRiding::CameraModifierClass");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, GrantedAbilitiesGE) == 464, "Offset mismatch for UFortMovementMode_ExtStormRiding::GrantedAbilitiesGE");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, RidingLoopCue) == 472, "Offset mismatch for UFortMovementMode_ExtStormRiding::RidingLoopCue");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, HolsterId) == 476, "Offset mismatch for UFortMovementMode_ExtStormRiding::HolsterId");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, DefaultWaveRadius) == 480, "Offset mismatch for UFortMovementMode_ExtStormRiding::DefaultWaveRadius");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, WaveRadiusAdjust) == 520, "Offset mismatch for UFortMovementMode_ExtStormRiding::WaveRadiusAdjust");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, OffTheWaveAlpha) == 560, "Offset mismatch for UFortMovementMode_ExtStormRiding::OffTheWaveAlpha");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, OffTheWaveAlphaForEdge) == 600, "Offset mismatch for UFortMovementMode_ExtStormRiding::OffTheWaveAlphaForEdge");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, HeightCurve) == 640, "Offset mismatch for UFortMovementMode_ExtStormRiding::HeightCurve");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AdditionalHeightOffset) == 712, "Offset mismatch for UFortMovementMode_ExtStormRiding::AdditionalHeightOffset");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, RadialHeightOffset) == 752, "Offset mismatch for UFortMovementMode_ExtStormRiding::RadialHeightOffset");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, VelocityMaxSpeed) == 792, "Offset mismatch for UFortMovementMode_ExtStormRiding::VelocityMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, ForwardAcceleration) == 832, "Offset mismatch for UFortMovementMode_ExtStormRiding::ForwardAcceleration");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AccelerationRotationRateCurve) == 872, "Offset mismatch for UFortMovementMode_ExtStormRiding::AccelerationRotationRateCurve");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AccelerationRotationRateSpeedScalarCurve) == 944, "Offset mismatch for UFortMovementMode_ExtStormRiding::AccelerationRotationRateSpeedScalarCurve");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, VelocityCatchUpRotationRateCurve) == 1016, "Offset mismatch for UFortMovementMode_ExtStormRiding::VelocityCatchUpRotationRateCurve");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, StrafeAngleClamp) == 1088, "Offset mismatch for UFortMovementMode_ExtStormRiding::StrafeAngleClamp");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, StrafeAngleClampSpeedScalarCurve) == 1128, "Offset mismatch for UFortMovementMode_ExtStormRiding::StrafeAngleClampSpeedScalarCurve");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, MaxCarvingAccelerationBoost) == 1200, "Offset mismatch for UFortMovementMode_ExtStormRiding::MaxCarvingAccelerationBoost");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, CarvingBoostDecayTime) == 1240, "Offset mismatch for UFortMovementMode_ExtStormRiding::CarvingBoostDecayTime");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, CarvingBuildRate) == 1280, "Offset mismatch for UFortMovementMode_ExtStormRiding::CarvingBuildRate");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, DownhillBuildRate) == 1320, "Offset mismatch for UFortMovementMode_ExtStormRiding::DownhillBuildRate");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, UphillBuildRate) == 1360, "Offset mismatch for UFortMovementMode_ExtStormRiding::UphillBuildRate");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, LinearDragCoefficient) == 1400, "Offset mismatch for UFortMovementMode_ExtStormRiding::LinearDragCoefficient");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, QuadraticDragCoefficient) == 1440, "Offset mismatch for UFortMovementMode_ExtStormRiding::QuadraticDragCoefficient");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, OffWaveLinearDragCoefficient) == 1480, "Offset mismatch for UFortMovementMode_ExtStormRiding::OffWaveLinearDragCoefficient");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, OffWaveQuadraticDragCoefficient) == 1520, "Offset mismatch for UFortMovementMode_ExtStormRiding::OffWaveQuadraticDragCoefficient");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AccelerationScalarDecayTime) == 1560, "Offset mismatch for UFortMovementMode_ExtStormRiding::AccelerationScalarDecayTime");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AccelerationScalarRecoveryTime) == 1600, "Offset mismatch for UFortMovementMode_ExtStormRiding::AccelerationScalarRecoveryTime");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, AccelerationMinDecayScalar) == 1640, "Offset mismatch for UFortMovementMode_ExtStormRiding::AccelerationMinDecayScalar");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, CantMovePastAlphaThreshold) == 1680, "Offset mismatch for UFortMovementMode_ExtStormRiding::CantMovePastAlphaThreshold");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, WaveKeepUpDecayTime) == 1720, "Offset mismatch for UFortMovementMode_ExtStormRiding::WaveKeepUpDecayTime");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, WaveKeepUpRecoveryTime) == 1760, "Offset mismatch for UFortMovementMode_ExtStormRiding::WaveKeepUpRecoveryTime");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, WaveKeepUpMinScalar) == 1800, "Offset mismatch for UFortMovementMode_ExtStormRiding::WaveKeepUpMinScalar");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, TrickGravity) == 1840, "Offset mismatch for UFortMovementMode_ExtStormRiding::TrickGravity");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, TrickAddedZVelocityScalar) == 1880, "Offset mismatch for UFortMovementMode_ExtStormRiding::TrickAddedZVelocityScalar");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, TrickAirTimeMinimum) == 1920, "Offset mismatch for UFortMovementMode_ExtStormRiding::TrickAirTimeMinimum");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, TrickStartedCue) == 1960, "Offset mismatch for UFortMovementMode_ExtStormRiding::TrickStartedCue");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, TrickEndedCue) == 1964, "Offset mismatch for UFortMovementMode_ExtStormRiding::TrickEndedCue");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, EarlyEndZVelocity) == 1968, "Offset mismatch for UFortMovementMode_ExtStormRiding::EarlyEndZVelocity");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, BoardClass) == 2008, "Offset mismatch for UFortMovementMode_ExtStormRiding::BoardClass");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, BoardAttachBone) == 2016, "Offset mismatch for UFortMovementMode_ExtStormRiding::BoardAttachBone");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, BoardYawOffset) == 2024, "Offset mismatch for UFortMovementMode_ExtStormRiding::BoardYawOffset");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, CurrentShapeSpline) == 2064, "Offset mismatch for UFortMovementMode_ExtStormRiding::CurrentShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, PreviousShapeSpline) == 2072, "Offset mismatch for UFortMovementMode_ExtStormRiding::PreviousShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, EndShapeSpline) == 2080, "Offset mismatch for UFortMovementMode_ExtStormRiding::EndShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, GameState_CurrentShapeSpline) == 2092, "Offset mismatch for UFortMovementMode_ExtStormRiding::GameState_CurrentShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, GameState_PreviousShapeSpline) == 2100, "Offset mismatch for UFortMovementMode_ExtStormRiding::GameState_PreviousShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, GameState_EndShapeSpline) == 2108, "Offset mismatch for UFortMovementMode_ExtStormRiding::GameState_EndShapeSpline");
static_assert(offsetof(UFortMovementMode_ExtStormRiding, OwnerStormRidingComponent) == 2408, "Offset mismatch for UFortMovementMode_ExtStormRiding::OwnerStormRidingComponent");

// /Script/YokeHopKeeperRuntime.FortMovementMode_ExtStormRidingLaunch
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtStormRidingLaunch
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TArray<void*> Configs; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01C8
    std::uint8_t ManualEjectStrength[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ManualEjectAcceptableAimAngle[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t ManualEjectAngle[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForcedEjectStrength[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForcedEjectAcceptableAimAngle[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForcedEjectAngle[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideFallingLateralFrictionBeforeGlider[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GravityZMultiplierBeforeGlider[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    float LaunchAnimationTimeToSkydive; // 0x0338 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x033C
    std::uint8_t TimeToKeepParachuteLocked[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t HUDTagsToHideOnParachute[0x20]; // 0x0368 (Size: 0x20, Type: StructProperty)
    void* LaunchAnimationMontage; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LaunchedCue[0x8]; // 0x0390 (Size: 0x8, Type: StructProperty)
    void* LaunchCameraModeClass; // 0x0398 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraModePriority[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchCameraTag[0x1]; // 0x03C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, Configs) == 440, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::Configs");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ManualEjectStrength) == 504, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ManualEjectStrength");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ManualEjectAcceptableAimAngle) == 544, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ManualEjectAcceptableAimAngle");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ManualEjectAngle) == 584, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ManualEjectAngle");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ForcedEjectStrength) == 624, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ForcedEjectStrength");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ForcedEjectAcceptableAimAngle) == 664, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ForcedEjectAcceptableAimAngle");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, ForcedEjectAngle) == 704, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::ForcedEjectAngle");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, OverrideFallingLateralFrictionBeforeGlider) == 744, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::OverrideFallingLateralFrictionBeforeGlider");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, GravityZMultiplierBeforeGlider) == 784, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::GravityZMultiplierBeforeGlider");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, LaunchAnimationTimeToSkydive) == 824, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::LaunchAnimationTimeToSkydive");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, TimeToKeepParachuteLocked) == 832, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::TimeToKeepParachuteLocked");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, HUDTagsToHideOnParachute) == 872, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::HUDTagsToHideOnParachute");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, LaunchAnimationMontage) == 904, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::LaunchAnimationMontage");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, LaunchedCue) == 912, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::LaunchedCue");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, LaunchCameraModeClass) == 920, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::LaunchCameraModeClass");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, CameraModePriority) == 928, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::CameraModePriority");
static_assert(offsetof(UFortMovementMode_ExtStormRidingLaunch, LaunchCameraTag) == 968, "Offset mismatch for UFortMovementMode_ExtStormRidingLaunch::LaunchCameraTag");

// /Script/YokeHopKeeperRuntime.FortMovementMode_StormRidingLaunchRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_StormRidingLaunchRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CurrentState; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t NetFinalCenter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_StormRidingLaunchRuntimeData, CurrentState) == 56, "Offset mismatch for UFortMovementMode_StormRidingLaunchRuntimeData::CurrentState");
static_assert(offsetof(UFortMovementMode_StormRidingLaunchRuntimeData, NetFinalCenter) == 64, "Offset mismatch for UFortMovementMode_StormRidingLaunchRuntimeData::NetFinalCenter");

// /Script/YokeHopKeeperRuntime.FortMovementMode_StormRidingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_StormRidingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> StormWallActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerCamera; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ActiveCameraModifier; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_StormRidingRuntimeData, StormWallActor) == 56, "Offset mismatch for UFortMovementMode_StormRidingRuntimeData::StormWallActor");
static_assert(offsetof(UFortMovementMode_StormRidingRuntimeData, PlayerCamera) == 64, "Offset mismatch for UFortMovementMode_StormRidingRuntimeData::PlayerCamera");
static_assert(offsetof(UFortMovementMode_StormRidingRuntimeData, ActiveCameraModifier) == 72, "Offset mismatch for UFortMovementMode_StormRidingRuntimeData::ActiveCameraModifier");

// /Script/YokeHopKeeperRuntime.FortPawnComponent_StormRiding
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_StormRiding
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float LastTimeEjected; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanTriggerStormRiding; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00CD
    void* NativeMovementModeClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* LaunchMovementModeClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00E0
    void* BoardActor; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LateLaunchTeleportLocation[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveDirection[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    float WaveFacingDelta; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0124
    std::uint8_t WaveNormal[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    float AngleOfIncline; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsOnWave; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRidingTheWall; // 0x0145 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGravityActive; // 0x0146 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0147
    float RotationThisFrame; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float AngleToDesired; // 0x014C (Size: 0x4, Type: FloatProperty)
    float EstimatedAirTime; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0154
    std::uint8_t LastUpdatedActorLocation[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveKeepUpThisFrame[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    void* IntroMontage; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_StormRiding, LastTimeEjected) == 200, "Offset mismatch for UFortPawnComponent_StormRiding::LastTimeEjected");
static_assert(offsetof(UFortPawnComponent_StormRiding, bCanTriggerStormRiding) == 204, "Offset mismatch for UFortPawnComponent_StormRiding::bCanTriggerStormRiding");
static_assert(offsetof(UFortPawnComponent_StormRiding, NativeMovementModeClass) == 208, "Offset mismatch for UFortPawnComponent_StormRiding::NativeMovementModeClass");
static_assert(offsetof(UFortPawnComponent_StormRiding, LaunchMovementModeClass) == 216, "Offset mismatch for UFortPawnComponent_StormRiding::LaunchMovementModeClass");
static_assert(offsetof(UFortPawnComponent_StormRiding, BoardActor) == 232, "Offset mismatch for UFortPawnComponent_StormRiding::BoardActor");
static_assert(offsetof(UFortPawnComponent_StormRiding, LateLaunchTeleportLocation) == 240, "Offset mismatch for UFortPawnComponent_StormRiding::LateLaunchTeleportLocation");
static_assert(offsetof(UFortPawnComponent_StormRiding, WaveDirection) == 264, "Offset mismatch for UFortPawnComponent_StormRiding::WaveDirection");
static_assert(offsetof(UFortPawnComponent_StormRiding, WaveFacingDelta) == 288, "Offset mismatch for UFortPawnComponent_StormRiding::WaveFacingDelta");
static_assert(offsetof(UFortPawnComponent_StormRiding, WaveNormal) == 296, "Offset mismatch for UFortPawnComponent_StormRiding::WaveNormal");
static_assert(offsetof(UFortPawnComponent_StormRiding, AngleOfIncline) == 320, "Offset mismatch for UFortPawnComponent_StormRiding::AngleOfIncline");
static_assert(offsetof(UFortPawnComponent_StormRiding, bIsOnWave) == 324, "Offset mismatch for UFortPawnComponent_StormRiding::bIsOnWave");
static_assert(offsetof(UFortPawnComponent_StormRiding, bRidingTheWall) == 325, "Offset mismatch for UFortPawnComponent_StormRiding::bRidingTheWall");
static_assert(offsetof(UFortPawnComponent_StormRiding, bGravityActive) == 326, "Offset mismatch for UFortPawnComponent_StormRiding::bGravityActive");
static_assert(offsetof(UFortPawnComponent_StormRiding, RotationThisFrame) == 328, "Offset mismatch for UFortPawnComponent_StormRiding::RotationThisFrame");
static_assert(offsetof(UFortPawnComponent_StormRiding, AngleToDesired) == 332, "Offset mismatch for UFortPawnComponent_StormRiding::AngleToDesired");
static_assert(offsetof(UFortPawnComponent_StormRiding, EstimatedAirTime) == 336, "Offset mismatch for UFortPawnComponent_StormRiding::EstimatedAirTime");
static_assert(offsetof(UFortPawnComponent_StormRiding, LastUpdatedActorLocation) == 344, "Offset mismatch for UFortPawnComponent_StormRiding::LastUpdatedActorLocation");
static_assert(offsetof(UFortPawnComponent_StormRiding, WaveKeepUpThisFrame) == 368, "Offset mismatch for UFortPawnComponent_StormRiding::WaveKeepUpThisFrame");
static_assert(offsetof(UFortPawnComponent_StormRiding, IntroMontage) == 392, "Offset mismatch for UFortPawnComponent_StormRiding::IntroMontage");

// /Script/YokeHopKeeperRuntime.FortStormRidingLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortStormRidingLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t TurnRightOutroToIdleRelevancyData[0x14]; // 0x1170 (Size: 0x14, Type: StructProperty)
    std::uint8_t TurnLeftOutroToIdleRelevancyData[0x14]; // 0x1184 (Size: 0x14, Type: StructProperty)
    std::uint8_t RootOffset[0x18]; // 0x1198 (Size: 0x18, Type: StructProperty)
    float AngleOfIncline; // 0x11B0 (Size: 0x4, Type: FloatProperty)
    float TurnDeltaYaw; // 0x11B4 (Size: 0x4, Type: FloatProperty)
    float IsFullBodyPosingFloat; // 0x11B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x11BC
    double WaveFacingDelta; // 0x11C0 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffsetTwist; // 0x11C8 (Size: 0x8, Type: DoubleProperty)
    double ForwardLeanAlpha; // 0x11D0 (Size: 0x8, Type: DoubleProperty)
    double SurfLegIKAlpha; // 0x11D8 (Size: 0x8, Type: DoubleProperty)
    double PeelyOffset; // 0x11E0 (Size: 0x8, Type: DoubleProperty)
    double NoiseAlpha; // 0x11E8 (Size: 0x8, Type: DoubleProperty)
    double TurnLeanBSAlpha; // 0x11F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsRightSideInAir; // 0x11F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTurnLeft; // 0x11F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurn180; // 0x11FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGravityActive; // 0x11FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFwLeanTrigger; // 0x11FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingUpWave; // 0x11FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFacingDownWave; // 0x11FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanTurnRight; // 0x11FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurningBS; // 0x1200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPassThroughToFwdLean; // 0x1201 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFullBodyPosing; // 0x1202 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionFromTurnRightOutroToIdle; // 0x1203 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionFromTurnLeftOutroToIdle; // 0x1204 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortStormRidingLayerAnimInstance, TurnRightOutroToIdleRelevancyData) == 4464, "Offset mismatch for UFortStormRidingLayerAnimInstance::TurnRightOutroToIdleRelevancyData");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, TurnLeftOutroToIdleRelevancyData) == 4484, "Offset mismatch for UFortStormRidingLayerAnimInstance::TurnLeftOutroToIdleRelevancyData");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, RootOffset) == 4504, "Offset mismatch for UFortStormRidingLayerAnimInstance::RootOffset");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, AngleOfIncline) == 4528, "Offset mismatch for UFortStormRidingLayerAnimInstance::AngleOfIncline");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, TurnDeltaYaw) == 4532, "Offset mismatch for UFortStormRidingLayerAnimInstance::TurnDeltaYaw");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, IsFullBodyPosingFloat) == 4536, "Offset mismatch for UFortStormRidingLayerAnimInstance::IsFullBodyPosingFloat");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, WaveFacingDelta) == 4544, "Offset mismatch for UFortStormRidingLayerAnimInstance::WaveFacingDelta");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, PeelyOffsetTwist) == 4552, "Offset mismatch for UFortStormRidingLayerAnimInstance::PeelyOffsetTwist");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, ForwardLeanAlpha) == 4560, "Offset mismatch for UFortStormRidingLayerAnimInstance::ForwardLeanAlpha");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, SurfLegIKAlpha) == 4568, "Offset mismatch for UFortStormRidingLayerAnimInstance::SurfLegIKAlpha");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, PeelyOffset) == 4576, "Offset mismatch for UFortStormRidingLayerAnimInstance::PeelyOffset");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, NoiseAlpha) == 4584, "Offset mismatch for UFortStormRidingLayerAnimInstance::NoiseAlpha");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, TurnLeanBSAlpha) == 4592, "Offset mismatch for UFortStormRidingLayerAnimInstance::TurnLeanBSAlpha");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bIsRightSideInAir) == 4600, "Offset mismatch for UFortStormRidingLayerAnimInstance::bIsRightSideInAir");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bCanTurnLeft) == 4601, "Offset mismatch for UFortStormRidingLayerAnimInstance::bCanTurnLeft");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bTurn180) == 4602, "Offset mismatch for UFortStormRidingLayerAnimInstance::bTurn180");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bGravityActive) == 4603, "Offset mismatch for UFortStormRidingLayerAnimInstance::bGravityActive");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bFwLeanTrigger) == 4604, "Offset mismatch for UFortStormRidingLayerAnimInstance::bFwLeanTrigger");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bFacingUpWave) == 4605, "Offset mismatch for UFortStormRidingLayerAnimInstance::bFacingUpWave");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bFacingDownWave) == 4606, "Offset mismatch for UFortStormRidingLayerAnimInstance::bFacingDownWave");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bCanTurnRight) == 4607, "Offset mismatch for UFortStormRidingLayerAnimInstance::bCanTurnRight");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bTurningBS) == 4608, "Offset mismatch for UFortStormRidingLayerAnimInstance::bTurningBS");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bPassThroughToFwdLean) == 4609, "Offset mismatch for UFortStormRidingLayerAnimInstance::bPassThroughToFwdLean");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bIsFullBodyPosing) == 4610, "Offset mismatch for UFortStormRidingLayerAnimInstance::bIsFullBodyPosing");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bTransitionFromTurnRightOutroToIdle) == 4611, "Offset mismatch for UFortStormRidingLayerAnimInstance::bTransitionFromTurnRightOutroToIdle");
static_assert(offsetof(UFortStormRidingLayerAnimInstance, bTransitionFromTurnLeftOutroToIdle) == 4612, "Offset mismatch for UFortStormRidingLayerAnimInstance::bTransitionFromTurnLeftOutroToIdle");

// /Script/YokeHopKeeperRuntime.YokeHopKeeperAnalyticsComponent
// Kind: Class; super: FortControllerComponent
class UYokeHopKeeperAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::PrimaryComponentTick");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, ComponentTags) == 104, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::ComponentTags");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, AssetUserData) == 120, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::AssetUserData");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::UCSSerializationIndex");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, bNetAddressable) == 152, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::bNetAddressable");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, bAutoActivate) == 154, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::bAutoActivate");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, bIsEditorOnly) == 155, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::bIsEditorOnly");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, CreationMethod) == 185, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::CreationMethod");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, OnComponentActivated) == 186, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::OnComponentActivated");
static_assert(offsetof(UYokeHopKeeperAnalyticsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UYokeHopKeeperAnalyticsComponent::OnComponentDeactivated");

// /Script/YokeHopKeeperRuntime.YokeHopKeeperWallActor
// Kind: Class; super: Actor
class UYokeHopKeeperWallActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TWeakObjectPtr<void> NativeSpline; // 0x0270 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> NativeSplineMeshes; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    void* NativeSplineMesh; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* NativeSplineMeshMaterial0; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* NativeSplineMeshMaterial1; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    float NativeRadius; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NativeFirstPointToUpdate; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::int32_t NativeNumPointsToUpdatePerFrame; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::int32_t NativeNumPoints; // 0x02AC (Size: 0x4, Type: IntProperty)
    float NativeGroundCheckOffset; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float NativeGroundCheckDistanceAhead; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NativeMeshScale[0x10]; // 0x02B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeSplineMeshOffset[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    void* NativeWaveAudio; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    float NativeSplinePointOffsetZ; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float NativeInterpSpeed; // 0x02EC (Size: 0x4, Type: FloatProperty)
    float NativeWaveBoundsX; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02F4
    float WaveMeshHeight; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float WaveMeshLength; // 0x02FC (Size: 0x4, Type: FloatProperty)
    float WaveMeshHeightOffset; // 0x0300 (Size: 0x4, Type: FloatProperty)
    float WaveMeshCenterAlpha; // 0x0304 (Size: 0x4, Type: FloatProperty)
    void* WaveProfile; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UYokeHopKeeperWallActor, NativeSpline) == 624, "Offset mismatch for UYokeHopKeeperWallActor::NativeSpline");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplineMeshes) == 632, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplineMeshes");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplineMesh) == 648, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplineMesh");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplineMeshMaterial0) == 656, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplineMeshMaterial0");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplineMeshMaterial1) == 664, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplineMeshMaterial1");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeRadius) == 672, "Offset mismatch for UYokeHopKeeperWallActor::NativeRadius");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeFirstPointToUpdate) == 676, "Offset mismatch for UYokeHopKeeperWallActor::NativeFirstPointToUpdate");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeNumPointsToUpdatePerFrame) == 680, "Offset mismatch for UYokeHopKeeperWallActor::NativeNumPointsToUpdatePerFrame");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeNumPoints) == 684, "Offset mismatch for UYokeHopKeeperWallActor::NativeNumPoints");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeGroundCheckOffset) == 688, "Offset mismatch for UYokeHopKeeperWallActor::NativeGroundCheckOffset");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeGroundCheckDistanceAhead) == 692, "Offset mismatch for UYokeHopKeeperWallActor::NativeGroundCheckDistanceAhead");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeMeshScale) == 696, "Offset mismatch for UYokeHopKeeperWallActor::NativeMeshScale");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplineMeshOffset) == 712, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplineMeshOffset");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeWaveAudio) == 736, "Offset mismatch for UYokeHopKeeperWallActor::NativeWaveAudio");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeSplinePointOffsetZ) == 744, "Offset mismatch for UYokeHopKeeperWallActor::NativeSplinePointOffsetZ");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeInterpSpeed) == 748, "Offset mismatch for UYokeHopKeeperWallActor::NativeInterpSpeed");
static_assert(offsetof(UYokeHopKeeperWallActor, NativeWaveBoundsX) == 752, "Offset mismatch for UYokeHopKeeperWallActor::NativeWaveBoundsX");
static_assert(offsetof(UYokeHopKeeperWallActor, WaveMeshHeight) == 760, "Offset mismatch for UYokeHopKeeperWallActor::WaveMeshHeight");
static_assert(offsetof(UYokeHopKeeperWallActor, WaveMeshLength) == 764, "Offset mismatch for UYokeHopKeeperWallActor::WaveMeshLength");
static_assert(offsetof(UYokeHopKeeperWallActor, WaveMeshHeightOffset) == 768, "Offset mismatch for UYokeHopKeeperWallActor::WaveMeshHeightOffset");
static_assert(offsetof(UYokeHopKeeperWallActor, WaveMeshCenterAlpha) == 772, "Offset mismatch for UYokeHopKeeperWallActor::WaveMeshCenterAlpha");
static_assert(offsetof(UYokeHopKeeperWallActor, WaveProfile) == 776, "Offset mismatch for UYokeHopKeeperWallActor::WaveProfile");
