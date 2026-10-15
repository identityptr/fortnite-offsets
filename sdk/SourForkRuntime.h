/**
 * decamp dumper generated SDK
 * Package: /Script/SourForkRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SourForkRuntime.FortMovementMode_SourForkWalkingCreationData
// Kind: ScriptStruct; super: FortMovementMode_GiantWalkingCreationData
struct FFortMovementMode_SourForkWalkingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_SourForkWalkingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_SourForkWalkingCreationData::LogicClass");

// /Script/SourForkRuntime.SourForkPawnSpawnParameters
// Kind: ScriptStruct; super: FortGiantPawnSpawnParameters
struct FSourForkPawnSpawnParameters
{
public:
    void* PawnClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t SpawnTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t SpawnCollisionHandlingOverride; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSourForkPawnSpawnParameters, PawnClass) == 0, "Offset mismatch for FSourForkPawnSpawnParameters::PawnClass");
static_assert(offsetof(FSourForkPawnSpawnParameters, SpawnTransform) == 16, "Offset mismatch for FSourForkPawnSpawnParameters::SpawnTransform");
static_assert(offsetof(FSourForkPawnSpawnParameters, SpawnCollisionHandlingOverride) == 112, "Offset mismatch for FSourForkPawnSpawnParameters::SpawnCollisionHandlingOverride");

// /Script/SourForkRuntime.BananaAnimInstance
// Kind: Class; super: AnimInstance
class UBananaAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    double LookAtBusYaw; // 0x0260 (Size: 0x8, Type: DoubleProperty)
    double LookAtBusPitch; // 0x0268 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSpawn; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    float BananaAOAlphaValue; // 0x0274 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBananaAnimInstance, LookAtBusYaw) == 608, "Offset mismatch for UBananaAnimInstance::LookAtBusYaw");
static_assert(offsetof(UBananaAnimInstance, LookAtBusPitch) == 616, "Offset mismatch for UBananaAnimInstance::LookAtBusPitch");
static_assert(offsetof(UBananaAnimInstance, bIsSpawn) == 624, "Offset mismatch for UBananaAnimInstance::bIsSpawn");
static_assert(offsetof(UBananaAnimInstance, BananaAOAlphaValue) == 628, "Offset mismatch for UBananaAnimInstance::BananaAOAlphaValue");

// /Script/SourForkRuntime.BananaSpawnerInterface
// Kind: Class; super: Interface
class UBananaSpawnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SourForkRuntime.FortGameStateComponent_SourFork
// Kind: Class; super: FortGameStateComponent_GiantPawnMode
class UFortGameStateComponent_SourFork
{
public:
    std::uint8_t Pad_0000[0xDC]; // 0x0000
    float PortalSpawnTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    FString EnteredPlayerID; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString TopDamagePlayerID; // 0x00F0 (Size: 0x10, Type: StrProperty)
    float TopDamage; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float TotalDamageRecieved; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float SessionStartTime; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float SessionEndTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PortalSpawnLocation[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t SessionStartLocation[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t SessionEndLocation[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::int32_t TotalWeakpointHits; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalWeakpointsDestroyed; // 0x015C (Size: 0x4, Type: IntProperty)
    float PortalEnteredTime; // 0x0160 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGameStateComponent_SourFork, PortalSpawnTime) == 220, "Offset mismatch for UFortGameStateComponent_SourFork::PortalSpawnTime");
static_assert(offsetof(UFortGameStateComponent_SourFork, EnteredPlayerID) == 224, "Offset mismatch for UFortGameStateComponent_SourFork::EnteredPlayerID");
static_assert(offsetof(UFortGameStateComponent_SourFork, TopDamagePlayerID) == 240, "Offset mismatch for UFortGameStateComponent_SourFork::TopDamagePlayerID");
static_assert(offsetof(UFortGameStateComponent_SourFork, TopDamage) == 256, "Offset mismatch for UFortGameStateComponent_SourFork::TopDamage");
static_assert(offsetof(UFortGameStateComponent_SourFork, TotalDamageRecieved) == 260, "Offset mismatch for UFortGameStateComponent_SourFork::TotalDamageRecieved");
static_assert(offsetof(UFortGameStateComponent_SourFork, SessionStartTime) == 264, "Offset mismatch for UFortGameStateComponent_SourFork::SessionStartTime");
static_assert(offsetof(UFortGameStateComponent_SourFork, SessionEndTime) == 268, "Offset mismatch for UFortGameStateComponent_SourFork::SessionEndTime");
static_assert(offsetof(UFortGameStateComponent_SourFork, PortalSpawnLocation) == 272, "Offset mismatch for UFortGameStateComponent_SourFork::PortalSpawnLocation");
static_assert(offsetof(UFortGameStateComponent_SourFork, SessionStartLocation) == 296, "Offset mismatch for UFortGameStateComponent_SourFork::SessionStartLocation");
static_assert(offsetof(UFortGameStateComponent_SourFork, SessionEndLocation) == 320, "Offset mismatch for UFortGameStateComponent_SourFork::SessionEndLocation");
static_assert(offsetof(UFortGameStateComponent_SourFork, TotalWeakpointHits) == 344, "Offset mismatch for UFortGameStateComponent_SourFork::TotalWeakpointHits");
static_assert(offsetof(UFortGameStateComponent_SourFork, TotalWeakpointsDestroyed) == 348, "Offset mismatch for UFortGameStateComponent_SourFork::TotalWeakpointsDestroyed");
static_assert(offsetof(UFortGameStateComponent_SourFork, PortalEnteredTime) == 352, "Offset mismatch for UFortGameStateComponent_SourFork::PortalEnteredTime");

// /Script/SourForkRuntime.FortMovementMode_SourForkWalking
// Kind: Class; super: FortMovementMode_GiantWalking
class UFortMovementMode_SourForkWalking
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t RotationSpeedDegSecs[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxGiantWalkingSpeed[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxGiantReverseWalkingSpeed[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t GiantWalkingBrakingSpeed[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxMovementAcceleration[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t CapsuleHoverHeight[0x2C]; // 0x02C0 (Size: 0x2C, Type: StructProperty)
    float ServerCorrectionDistanceTolerance; // 0x02EC (Size: 0x4, Type: FloatProperty)
    float AngleFromBackVectorToReverseWalk; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float FastTurnVelocityThreshold; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    float FastTurnSpeed; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float BeamingRotationSpeed; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t DebugVisualizerOffset[0x18]; // 0x0300 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroundGridConfig[0x20]; // 0x0318 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseNativeLogic; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeUseSuperMoveUpdatedComponent; // 0x0339 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRecursiveGlide; // 0x033A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x033B
    std::uint8_t BlockMoveTags[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_SourForkWalking, RotationSpeedDegSecs) == 504, "Offset mismatch for UFortMovementMode_SourForkWalking::RotationSpeedDegSecs");
static_assert(offsetof(UFortMovementMode_SourForkWalking, MaxGiantWalkingSpeed) == 544, "Offset mismatch for UFortMovementMode_SourForkWalking::MaxGiantWalkingSpeed");
static_assert(offsetof(UFortMovementMode_SourForkWalking, MaxGiantReverseWalkingSpeed) == 584, "Offset mismatch for UFortMovementMode_SourForkWalking::MaxGiantReverseWalkingSpeed");
static_assert(offsetof(UFortMovementMode_SourForkWalking, GiantWalkingBrakingSpeed) == 624, "Offset mismatch for UFortMovementMode_SourForkWalking::GiantWalkingBrakingSpeed");
static_assert(offsetof(UFortMovementMode_SourForkWalking, MaxMovementAcceleration) == 664, "Offset mismatch for UFortMovementMode_SourForkWalking::MaxMovementAcceleration");
static_assert(offsetof(UFortMovementMode_SourForkWalking, CapsuleHoverHeight) == 704, "Offset mismatch for UFortMovementMode_SourForkWalking::CapsuleHoverHeight");
static_assert(offsetof(UFortMovementMode_SourForkWalking, ServerCorrectionDistanceTolerance) == 748, "Offset mismatch for UFortMovementMode_SourForkWalking::ServerCorrectionDistanceTolerance");
static_assert(offsetof(UFortMovementMode_SourForkWalking, AngleFromBackVectorToReverseWalk) == 752, "Offset mismatch for UFortMovementMode_SourForkWalking::AngleFromBackVectorToReverseWalk");
static_assert(offsetof(UFortMovementMode_SourForkWalking, FastTurnVelocityThreshold) == 756, "Offset mismatch for UFortMovementMode_SourForkWalking::FastTurnVelocityThreshold");
static_assert(offsetof(UFortMovementMode_SourForkWalking, FastTurnSpeed) == 760, "Offset mismatch for UFortMovementMode_SourForkWalking::FastTurnSpeed");
static_assert(offsetof(UFortMovementMode_SourForkWalking, BeamingRotationSpeed) == 764, "Offset mismatch for UFortMovementMode_SourForkWalking::BeamingRotationSpeed");
static_assert(offsetof(UFortMovementMode_SourForkWalking, DebugVisualizerOffset) == 768, "Offset mismatch for UFortMovementMode_SourForkWalking::DebugVisualizerOffset");
static_assert(offsetof(UFortMovementMode_SourForkWalking, GroundGridConfig) == 792, "Offset mismatch for UFortMovementMode_SourForkWalking::GroundGridConfig");
static_assert(offsetof(UFortMovementMode_SourForkWalking, bUseNativeLogic) == 824, "Offset mismatch for UFortMovementMode_SourForkWalking::bUseNativeLogic");
static_assert(offsetof(UFortMovementMode_SourForkWalking, bNativeUseSuperMoveUpdatedComponent) == 825, "Offset mismatch for UFortMovementMode_SourForkWalking::bNativeUseSuperMoveUpdatedComponent");
static_assert(offsetof(UFortMovementMode_SourForkWalking, bEnableRecursiveGlide) == 826, "Offset mismatch for UFortMovementMode_SourForkWalking::bEnableRecursiveGlide");
static_assert(offsetof(UFortMovementMode_SourForkWalking, BlockMoveTags) == 832, "Offset mismatch for UFortMovementMode_SourForkWalking::BlockMoveTags");

// /Script/SourForkRuntime.FortMovementMode_SourForkWalkingRuntimeData
// Kind: Class; super: FortMovementMode_GiantWalkingRuntimeData
class UFortMovementMode_SourForkWalkingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MovementInput[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float DesiredControlYaw; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float StartYaw; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_SourForkWalkingRuntimeData, MovementInput) == 56, "Offset mismatch for UFortMovementMode_SourForkWalkingRuntimeData::MovementInput");
static_assert(offsetof(UFortMovementMode_SourForkWalkingRuntimeData, DesiredControlYaw) == 72, "Offset mismatch for UFortMovementMode_SourForkWalkingRuntimeData::DesiredControlYaw");
static_assert(offsetof(UFortMovementMode_SourForkWalkingRuntimeData, StartYaw) == 76, "Offset mismatch for UFortMovementMode_SourForkWalkingRuntimeData::StartYaw");

// /Script/SourForkRuntime.SourForkAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class USourForkAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsExit; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStomp; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHeatRay; // 0x0332 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0333
    double HeatRayAimYaw; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    double AimPitchInterp; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    double AimYawInterp; // 0x0348 (Size: 0x8, Type: DoubleProperty)
    double HeatRayAimPitch; // 0x0350 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsHeatRayAO; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInputFront; // 0x0359 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInputBack; // 0x035A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x035B
    double MoveStartBPlayRate; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsHeatRayAndTurn; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0369
    double HeatRayLowerBodyAdditiveAlpha; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    float HeatRayTurnPoseAlpha; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x037C
    std::uint8_t RootBoneRot[0x18]; // 0x0380 (Size: 0x18, Type: StructProperty)
    double TurnInPlaceAmount; // 0x0398 (Size: 0x8, Type: DoubleProperty)
    float HeatRayAdditiveAlpha; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x03A4
    double RootBoneRotRate; // 0x03A8 (Size: 0x8, Type: DoubleProperty)
    float TailCurveAddAlpha; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x03B4
    double LeftFootPlantAlpha; // 0x03B8 (Size: 0x8, Type: DoubleProperty)
    double RightFootPlantAlpha; // 0x03C0 (Size: 0x8, Type: DoubleProperty)
    double TailTraceZInterp; // 0x03C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsIntroAnimStateExit; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIntro; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStartFL; // 0x03D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStartFR; // 0x03D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStopFL; // 0x03D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStopFR; // 0x03D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStopFRHard; // 0x03D6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStartB; // 0x03D7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStopBL; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoveStopBR; // 0x03D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningInPlace; // 0x03DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnRightInPlace; // 0x03DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnLeftInPlace; // 0x03DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHeatRayTurningInPlace; // 0x03DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHeatRayTurnRightInPlace; // 0x03DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHeatRayTurnLeftInPlace; // 0x03DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t StompMontage[0x20]; // 0x03E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ExitMontage[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HeatRayMontage[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RoarOrHitMontages; // 0x0440 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USourForkAnimInstance, bIsExit) == 816, "Offset mismatch for USourForkAnimInstance::bIsExit");
static_assert(offsetof(USourForkAnimInstance, bIsStomp) == 817, "Offset mismatch for USourForkAnimInstance::bIsStomp");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRay) == 818, "Offset mismatch for USourForkAnimInstance::bIsHeatRay");
static_assert(offsetof(USourForkAnimInstance, HeatRayAimYaw) == 824, "Offset mismatch for USourForkAnimInstance::HeatRayAimYaw");
static_assert(offsetof(USourForkAnimInstance, AimPitchInterp) == 832, "Offset mismatch for USourForkAnimInstance::AimPitchInterp");
static_assert(offsetof(USourForkAnimInstance, AimYawInterp) == 840, "Offset mismatch for USourForkAnimInstance::AimYawInterp");
static_assert(offsetof(USourForkAnimInstance, HeatRayAimPitch) == 848, "Offset mismatch for USourForkAnimInstance::HeatRayAimPitch");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRayAO) == 856, "Offset mismatch for USourForkAnimInstance::bIsHeatRayAO");
static_assert(offsetof(USourForkAnimInstance, bIsInputFront) == 857, "Offset mismatch for USourForkAnimInstance::bIsInputFront");
static_assert(offsetof(USourForkAnimInstance, bIsInputBack) == 858, "Offset mismatch for USourForkAnimInstance::bIsInputBack");
static_assert(offsetof(USourForkAnimInstance, MoveStartBPlayRate) == 864, "Offset mismatch for USourForkAnimInstance::MoveStartBPlayRate");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRayAndTurn) == 872, "Offset mismatch for USourForkAnimInstance::bIsHeatRayAndTurn");
static_assert(offsetof(USourForkAnimInstance, HeatRayLowerBodyAdditiveAlpha) == 880, "Offset mismatch for USourForkAnimInstance::HeatRayLowerBodyAdditiveAlpha");
static_assert(offsetof(USourForkAnimInstance, HeatRayTurnPoseAlpha) == 888, "Offset mismatch for USourForkAnimInstance::HeatRayTurnPoseAlpha");
static_assert(offsetof(USourForkAnimInstance, RootBoneRot) == 896, "Offset mismatch for USourForkAnimInstance::RootBoneRot");
static_assert(offsetof(USourForkAnimInstance, TurnInPlaceAmount) == 920, "Offset mismatch for USourForkAnimInstance::TurnInPlaceAmount");
static_assert(offsetof(USourForkAnimInstance, HeatRayAdditiveAlpha) == 928, "Offset mismatch for USourForkAnimInstance::HeatRayAdditiveAlpha");
static_assert(offsetof(USourForkAnimInstance, RootBoneRotRate) == 936, "Offset mismatch for USourForkAnimInstance::RootBoneRotRate");
static_assert(offsetof(USourForkAnimInstance, TailCurveAddAlpha) == 944, "Offset mismatch for USourForkAnimInstance::TailCurveAddAlpha");
static_assert(offsetof(USourForkAnimInstance, LeftFootPlantAlpha) == 952, "Offset mismatch for USourForkAnimInstance::LeftFootPlantAlpha");
static_assert(offsetof(USourForkAnimInstance, RightFootPlantAlpha) == 960, "Offset mismatch for USourForkAnimInstance::RightFootPlantAlpha");
static_assert(offsetof(USourForkAnimInstance, TailTraceZInterp) == 968, "Offset mismatch for USourForkAnimInstance::TailTraceZInterp");
static_assert(offsetof(USourForkAnimInstance, bIsIntroAnimStateExit) == 976, "Offset mismatch for USourForkAnimInstance::bIsIntroAnimStateExit");
static_assert(offsetof(USourForkAnimInstance, bIsIntro) == 977, "Offset mismatch for USourForkAnimInstance::bIsIntro");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStartFL) == 978, "Offset mismatch for USourForkAnimInstance::bIsMoveStartFL");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStartFR) == 979, "Offset mismatch for USourForkAnimInstance::bIsMoveStartFR");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStopFL) == 980, "Offset mismatch for USourForkAnimInstance::bIsMoveStopFL");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStopFR) == 981, "Offset mismatch for USourForkAnimInstance::bIsMoveStopFR");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStopFRHard) == 982, "Offset mismatch for USourForkAnimInstance::bIsMoveStopFRHard");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStartB) == 983, "Offset mismatch for USourForkAnimInstance::bIsMoveStartB");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStopBL) == 984, "Offset mismatch for USourForkAnimInstance::bIsMoveStopBL");
static_assert(offsetof(USourForkAnimInstance, bIsMoveStopBR) == 985, "Offset mismatch for USourForkAnimInstance::bIsMoveStopBR");
static_assert(offsetof(USourForkAnimInstance, bIsTurningInPlace) == 986, "Offset mismatch for USourForkAnimInstance::bIsTurningInPlace");
static_assert(offsetof(USourForkAnimInstance, bIsTurnRightInPlace) == 987, "Offset mismatch for USourForkAnimInstance::bIsTurnRightInPlace");
static_assert(offsetof(USourForkAnimInstance, bIsTurnLeftInPlace) == 988, "Offset mismatch for USourForkAnimInstance::bIsTurnLeftInPlace");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRayTurningInPlace) == 989, "Offset mismatch for USourForkAnimInstance::bIsHeatRayTurningInPlace");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRayTurnRightInPlace) == 990, "Offset mismatch for USourForkAnimInstance::bIsHeatRayTurnRightInPlace");
static_assert(offsetof(USourForkAnimInstance, bIsHeatRayTurnLeftInPlace) == 991, "Offset mismatch for USourForkAnimInstance::bIsHeatRayTurnLeftInPlace");
static_assert(offsetof(USourForkAnimInstance, StompMontage) == 992, "Offset mismatch for USourForkAnimInstance::StompMontage");
static_assert(offsetof(USourForkAnimInstance, ExitMontage) == 1024, "Offset mismatch for USourForkAnimInstance::ExitMontage");
static_assert(offsetof(USourForkAnimInstance, HeatRayMontage) == 1056, "Offset mismatch for USourForkAnimInstance::HeatRayMontage");
static_assert(offsetof(USourForkAnimInstance, RoarOrHitMontages) == 1088, "Offset mismatch for USourForkAnimInstance::RoarOrHitMontages");

// /Script/SourForkRuntime.SourForkCameraModifier
// Kind: Class; super: CameraModifier
class USourForkCameraModifier
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float MaxCombinedOffset; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float BeamTransitionDurationSecs; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BeamOriginSocket[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    std::uint8_t BeamCameraActiveTag[0x4]; // 0x0054 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExitingTag[0x4]; // 0x0058 (Size: 0x4, Type: StructProperty)
    float DefaultFovOffset; // 0x005C (Size: 0x4, Type: FloatProperty)
    float ReturnToDefaultFovInterpSpeed; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float BeamingFovOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float BeamingFovInterpSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    void* CurveBeamBlend_Z; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    float BaseOffsetBeamOriginWeight; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float BaseOffsetInterpSpeed; // 0x007C (Size: 0x4, Type: FloatProperty)
    float DefaultUpOffset; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float DefaultRightOffset; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float DefaultBackwardOffset; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float WhileExitingBackwardOffset; // 0x008C (Size: 0x4, Type: FloatProperty)
    float ViewSpaceOffsetInterpSpeed; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float WhileExitingViewSpaceOffsetInterpSpeed; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float CurrentFovOffset; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x009C
    std::uint8_t BaseOffset[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    float CurrentUpOffset; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float CurrentRightOffset; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float CurrentBackwardOffset; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float BeamAlpha; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USourForkCameraModifier, MaxCombinedOffset) == 72, "Offset mismatch for USourForkCameraModifier::MaxCombinedOffset");
static_assert(offsetof(USourForkCameraModifier, BeamTransitionDurationSecs) == 76, "Offset mismatch for USourForkCameraModifier::BeamTransitionDurationSecs");
static_assert(offsetof(USourForkCameraModifier, BeamOriginSocket) == 80, "Offset mismatch for USourForkCameraModifier::BeamOriginSocket");
static_assert(offsetof(USourForkCameraModifier, BeamCameraActiveTag) == 84, "Offset mismatch for USourForkCameraModifier::BeamCameraActiveTag");
static_assert(offsetof(USourForkCameraModifier, ExitingTag) == 88, "Offset mismatch for USourForkCameraModifier::ExitingTag");
static_assert(offsetof(USourForkCameraModifier, DefaultFovOffset) == 92, "Offset mismatch for USourForkCameraModifier::DefaultFovOffset");
static_assert(offsetof(USourForkCameraModifier, ReturnToDefaultFovInterpSpeed) == 96, "Offset mismatch for USourForkCameraModifier::ReturnToDefaultFovInterpSpeed");
static_assert(offsetof(USourForkCameraModifier, BeamingFovOffset) == 100, "Offset mismatch for USourForkCameraModifier::BeamingFovOffset");
static_assert(offsetof(USourForkCameraModifier, BeamingFovInterpSpeed) == 104, "Offset mismatch for USourForkCameraModifier::BeamingFovInterpSpeed");
static_assert(offsetof(USourForkCameraModifier, CurveBeamBlend_Z) == 112, "Offset mismatch for USourForkCameraModifier::CurveBeamBlend_Z");
static_assert(offsetof(USourForkCameraModifier, BaseOffsetBeamOriginWeight) == 120, "Offset mismatch for USourForkCameraModifier::BaseOffsetBeamOriginWeight");
static_assert(offsetof(USourForkCameraModifier, BaseOffsetInterpSpeed) == 124, "Offset mismatch for USourForkCameraModifier::BaseOffsetInterpSpeed");
static_assert(offsetof(USourForkCameraModifier, DefaultUpOffset) == 128, "Offset mismatch for USourForkCameraModifier::DefaultUpOffset");
static_assert(offsetof(USourForkCameraModifier, DefaultRightOffset) == 132, "Offset mismatch for USourForkCameraModifier::DefaultRightOffset");
static_assert(offsetof(USourForkCameraModifier, DefaultBackwardOffset) == 136, "Offset mismatch for USourForkCameraModifier::DefaultBackwardOffset");
static_assert(offsetof(USourForkCameraModifier, WhileExitingBackwardOffset) == 140, "Offset mismatch for USourForkCameraModifier::WhileExitingBackwardOffset");
static_assert(offsetof(USourForkCameraModifier, ViewSpaceOffsetInterpSpeed) == 144, "Offset mismatch for USourForkCameraModifier::ViewSpaceOffsetInterpSpeed");
static_assert(offsetof(USourForkCameraModifier, WhileExitingViewSpaceOffsetInterpSpeed) == 148, "Offset mismatch for USourForkCameraModifier::WhileExitingViewSpaceOffsetInterpSpeed");
static_assert(offsetof(USourForkCameraModifier, CurrentFovOffset) == 152, "Offset mismatch for USourForkCameraModifier::CurrentFovOffset");
static_assert(offsetof(USourForkCameraModifier, BaseOffset) == 160, "Offset mismatch for USourForkCameraModifier::BaseOffset");
static_assert(offsetof(USourForkCameraModifier, CurrentUpOffset) == 184, "Offset mismatch for USourForkCameraModifier::CurrentUpOffset");
static_assert(offsetof(USourForkCameraModifier, CurrentRightOffset) == 188, "Offset mismatch for USourForkCameraModifier::CurrentRightOffset");
static_assert(offsetof(USourForkCameraModifier, CurrentBackwardOffset) == 192, "Offset mismatch for USourForkCameraModifier::CurrentBackwardOffset");
static_assert(offsetof(USourForkCameraModifier, BeamAlpha) == 196, "Offset mismatch for USourForkCameraModifier::BeamAlpha");

// /Script/SourForkRuntime.SourForkCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class USourForkCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SourForkRuntime.SourForkFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USourForkFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SourForkRuntime.SourForkGiantGroupDestructionManager
// Kind: Class; super: GiantGroupDestructionManager
class USourForkGiantGroupDestructionManager
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

static_assert(offsetof(USourForkGiantGroupDestructionManager, PrimaryComponentTick) == 56, "Offset mismatch for USourForkGiantGroupDestructionManager::PrimaryComponentTick");
static_assert(offsetof(USourForkGiantGroupDestructionManager, ComponentTags) == 104, "Offset mismatch for USourForkGiantGroupDestructionManager::ComponentTags");
static_assert(offsetof(USourForkGiantGroupDestructionManager, AssetUserData) == 120, "Offset mismatch for USourForkGiantGroupDestructionManager::AssetUserData");
static_assert(offsetof(USourForkGiantGroupDestructionManager, UCSSerializationIndex) == 144, "Offset mismatch for USourForkGiantGroupDestructionManager::UCSSerializationIndex");
static_assert(offsetof(USourForkGiantGroupDestructionManager, bNetAddressable) == 152, "Offset mismatch for USourForkGiantGroupDestructionManager::bNetAddressable");
static_assert(offsetof(USourForkGiantGroupDestructionManager, bAutoActivate) == 154, "Offset mismatch for USourForkGiantGroupDestructionManager::bAutoActivate");
static_assert(offsetof(USourForkGiantGroupDestructionManager, bIsEditorOnly) == 155, "Offset mismatch for USourForkGiantGroupDestructionManager::bIsEditorOnly");
static_assert(offsetof(USourForkGiantGroupDestructionManager, CreationMethod) == 185, "Offset mismatch for USourForkGiantGroupDestructionManager::CreationMethod");
static_assert(offsetof(USourForkGiantGroupDestructionManager, OnComponentActivated) == 186, "Offset mismatch for USourForkGiantGroupDestructionManager::OnComponentActivated");
static_assert(offsetof(USourForkGiantGroupDestructionManager, OnComponentDeactivated) == 187, "Offset mismatch for USourForkGiantGroupDestructionManager::OnComponentDeactivated");

// /Script/SourForkRuntime.SourForkGiantPawnDestructionComponent
// Kind: Class; super: GiantPawnDestructionComponent
class USourForkGiantPawnDestructionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MaxBuildingCountToPredictDestroyPerFrame[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxBuildingCountToSimplePredictDestroyPerFrame[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AsyncDeathTag[0x4]; // 0x0120 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSetDamageDealt; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoNeighborProcessing; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0126
    TArray<void*> BuildingEntriesWaitingForDestroy; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PredictedDestroyedBuildingEntries; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimplePredictDeathBuildingEntries; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuildingEntriesWaitingForSimpleDestroy; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USourForkGiantPawnDestructionComponent, MaxBuildingCountToPredictDestroyPerFrame) == 192, "Offset mismatch for USourForkGiantPawnDestructionComponent::MaxBuildingCountToPredictDestroyPerFrame");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, MaxBuildingCountToSimplePredictDestroyPerFrame) == 240, "Offset mismatch for USourForkGiantPawnDestructionComponent::MaxBuildingCountToSimplePredictDestroyPerFrame");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, AsyncDeathTag) == 288, "Offset mismatch for USourForkGiantPawnDestructionComponent::AsyncDeathTag");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, bSetDamageDealt) == 292, "Offset mismatch for USourForkGiantPawnDestructionComponent::bSetDamageDealt");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, bDoNeighborProcessing) == 293, "Offset mismatch for USourForkGiantPawnDestructionComponent::bDoNeighborProcessing");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, BuildingEntriesWaitingForDestroy) == 296, "Offset mismatch for USourForkGiantPawnDestructionComponent::BuildingEntriesWaitingForDestroy");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, PredictedDestroyedBuildingEntries) == 312, "Offset mismatch for USourForkGiantPawnDestructionComponent::PredictedDestroyedBuildingEntries");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, SimplePredictDeathBuildingEntries) == 328, "Offset mismatch for USourForkGiantPawnDestructionComponent::SimplePredictDeathBuildingEntries");
static_assert(offsetof(USourForkGiantPawnDestructionComponent, BuildingEntriesWaitingForSimpleDestroy) == 344, "Offset mismatch for USourForkGiantPawnDestructionComponent::BuildingEntriesWaitingForSimpleDestroy");

// /Script/SourForkRuntime.SourForkPlayerPawn
// Kind: Class; super: FortGiantPlayerPawn
class USourForkPlayerPawn
{
public:
    std::uint8_t Pad_0000[0x5FE0]; // 0x0000
    std::uint8_t CurrentBeamRotation[0x18]; // 0x5FE0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsBeaming; // 0x5FF8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIntroAnimStateExit; // 0x5FF9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USourForkPlayerPawn, CurrentBeamRotation) == 24544, "Offset mismatch for USourForkPlayerPawn::CurrentBeamRotation");
static_assert(offsetof(USourForkPlayerPawn, bIsBeaming) == 24568, "Offset mismatch for USourForkPlayerPawn::bIsBeaming");
static_assert(offsetof(USourForkPlayerPawn, bIsIntroAnimStateExit) == 24569, "Offset mismatch for USourForkPlayerPawn::bIsIntroAnimStateExit");
