/**
 * decamp dumper generated SDK
 * Package: /Script/Mover
 */
#pragma once
#include "Basic.h"

// /Script/Mover.ApplyVelocityEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FApplyVelocityEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VelocityToApply[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAdditiveVelocity; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    FName ForceMovementMode; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FApplyVelocityEffect, VelocityToApply) == 8, "Offset mismatch for FApplyVelocityEffect::VelocityToApply");
static_assert(offsetof(FApplyVelocityEffect, bAdditiveVelocity) == 32, "Offset mismatch for FApplyVelocityEffect::bAdditiveVelocity");
static_assert(offsetof(FApplyVelocityEffect, ForceMovementMode) == 36, "Offset mismatch for FApplyVelocityEffect::ForceMovementMode");

// /Script/Mover.AsyncTeleportEffect
// Kind: ScriptStruct; super: TeleportEffect
struct FAsyncTeleportEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseActorRotation; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t TargetRotation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAsyncTeleportEffect, TargetLocation) == 8, "Offset mismatch for FAsyncTeleportEffect::TargetLocation");
static_assert(offsetof(FAsyncTeleportEffect, bUseActorRotation) == 32, "Offset mismatch for FAsyncTeleportEffect::bUseActorRotation");
static_assert(offsetof(FAsyncTeleportEffect, TargetRotation) == 40, "Offset mismatch for FAsyncTeleportEffect::TargetRotation");

// /Script/Mover.CharacterDefaultInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FCharacterDefaultInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MoveInputType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t MoveInput[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrientationIntent[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t ControlRotation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t SuggestedMovementMode[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUsingMovementBase; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x005D
    void* MovementBase; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MovementBaseBoneName[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsJumpJustPressed; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumpPressed; // 0x006D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCharacterDefaultInputs, MoveInputType) == 8, "Offset mismatch for FCharacterDefaultInputs::MoveInputType");
static_assert(offsetof(FCharacterDefaultInputs, MoveInput) == 16, "Offset mismatch for FCharacterDefaultInputs::MoveInput");
static_assert(offsetof(FCharacterDefaultInputs, OrientationIntent) == 40, "Offset mismatch for FCharacterDefaultInputs::OrientationIntent");
static_assert(offsetof(FCharacterDefaultInputs, ControlRotation) == 64, "Offset mismatch for FCharacterDefaultInputs::ControlRotation");
static_assert(offsetof(FCharacterDefaultInputs, SuggestedMovementMode) == 88, "Offset mismatch for FCharacterDefaultInputs::SuggestedMovementMode");
static_assert(offsetof(FCharacterDefaultInputs, bUsingMovementBase) == 92, "Offset mismatch for FCharacterDefaultInputs::bUsingMovementBase");
static_assert(offsetof(FCharacterDefaultInputs, MovementBase) == 96, "Offset mismatch for FCharacterDefaultInputs::MovementBase");
static_assert(offsetof(FCharacterDefaultInputs, MovementBaseBoneName) == 104, "Offset mismatch for FCharacterDefaultInputs::MovementBaseBoneName");
static_assert(offsetof(FCharacterDefaultInputs, bIsJumpJustPressed) == 108, "Offset mismatch for FCharacterDefaultInputs::bIsJumpJustPressed");
static_assert(offsetof(FCharacterDefaultInputs, bIsJumpPressed) == 109, "Offset mismatch for FCharacterDefaultInputs::bIsJumpPressed");

// /Script/Mover.ComputeCombinedVelocityParams
// Kind: ScriptStruct; super: none
struct FComputeCombinedVelocityParams
{
public:
    float DeltaSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t InitialVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MoveDirectionIntent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t ExternalAcceleration[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float OverallMaxSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FComputeCombinedVelocityParams, DeltaSeconds) == 0, "Offset mismatch for FComputeCombinedVelocityParams::DeltaSeconds");
static_assert(offsetof(FComputeCombinedVelocityParams, InitialVelocity) == 8, "Offset mismatch for FComputeCombinedVelocityParams::InitialVelocity");
static_assert(offsetof(FComputeCombinedVelocityParams, MoveDirectionIntent) == 32, "Offset mismatch for FComputeCombinedVelocityParams::MoveDirectionIntent");
static_assert(offsetof(FComputeCombinedVelocityParams, MaxSpeed) == 56, "Offset mismatch for FComputeCombinedVelocityParams::MaxSpeed");
static_assert(offsetof(FComputeCombinedVelocityParams, TurningBoost) == 60, "Offset mismatch for FComputeCombinedVelocityParams::TurningBoost");
static_assert(offsetof(FComputeCombinedVelocityParams, Friction) == 64, "Offset mismatch for FComputeCombinedVelocityParams::Friction");
static_assert(offsetof(FComputeCombinedVelocityParams, Deceleration) == 68, "Offset mismatch for FComputeCombinedVelocityParams::Deceleration");
static_assert(offsetof(FComputeCombinedVelocityParams, Acceleration) == 72, "Offset mismatch for FComputeCombinedVelocityParams::Acceleration");
static_assert(offsetof(FComputeCombinedVelocityParams, ExternalAcceleration) == 80, "Offset mismatch for FComputeCombinedVelocityParams::ExternalAcceleration");
static_assert(offsetof(FComputeCombinedVelocityParams, OverallMaxSpeed) == 104, "Offset mismatch for FComputeCombinedVelocityParams::OverallMaxSpeed");

// /Script/Mover.ComputeVelocityParams
// Kind: ScriptStruct; super: none
struct FComputeVelocityParams
{
public:
    float DeltaSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t InitialVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MoveDirectionIntent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t MoveInput[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t MoveInputType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseAccelerationForVelocityMove; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FComputeVelocityParams, DeltaSeconds) == 0, "Offset mismatch for FComputeVelocityParams::DeltaSeconds");
static_assert(offsetof(FComputeVelocityParams, InitialVelocity) == 8, "Offset mismatch for FComputeVelocityParams::InitialVelocity");
static_assert(offsetof(FComputeVelocityParams, MoveDirectionIntent) == 32, "Offset mismatch for FComputeVelocityParams::MoveDirectionIntent");
static_assert(offsetof(FComputeVelocityParams, MaxSpeed) == 56, "Offset mismatch for FComputeVelocityParams::MaxSpeed");
static_assert(offsetof(FComputeVelocityParams, TurningBoost) == 60, "Offset mismatch for FComputeVelocityParams::TurningBoost");
static_assert(offsetof(FComputeVelocityParams, Friction) == 64, "Offset mismatch for FComputeVelocityParams::Friction");
static_assert(offsetof(FComputeVelocityParams, Deceleration) == 68, "Offset mismatch for FComputeVelocityParams::Deceleration");
static_assert(offsetof(FComputeVelocityParams, Acceleration) == 72, "Offset mismatch for FComputeVelocityParams::Acceleration");
static_assert(offsetof(FComputeVelocityParams, MoveInput) == 80, "Offset mismatch for FComputeVelocityParams::MoveInput");
static_assert(offsetof(FComputeVelocityParams, MoveInputType) == 104, "Offset mismatch for FComputeVelocityParams::MoveInputType");
static_assert(offsetof(FComputeVelocityParams, bUseAccelerationForVelocityMove) == 105, "Offset mismatch for FComputeVelocityParams::bUseAccelerationForVelocityMove");

// /Script/Mover.FloorCheckResult
// Kind: ScriptStruct; super: none
struct FFloorCheckResult
{
public:
    std::uint8_t bBlockingHit; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bLineTrace (shared storage)
    // 0x0000 BoolProperty bWalkableFloor (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LineDist; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FloorDist; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t HitResult[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloorCheckResult, bBlockingHit) == 0, "Offset mismatch for FFloorCheckResult::bBlockingHit");
static_assert(offsetof(FFloorCheckResult, LineDist) == 4, "Offset mismatch for FFloorCheckResult::LineDist");
static_assert(offsetof(FFloorCheckResult, FloorDist) == 8, "Offset mismatch for FFloorCheckResult::FloorDist");
static_assert(offsetof(FFloorCheckResult, HitResult) == 16, "Offset mismatch for FFloorCheckResult::HitResult");

// /Script/Mover.FloorCheckSettings
// Kind: ScriptStruct; super: none
struct FFloorCheckSettings
{
public:
    float FloorSweepDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxWalkSlopeCosine; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFlatBaseForFloorChecks; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float PerchRadiusThreshold; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloorCheckSettings, FloorSweepDistance) == 0, "Offset mismatch for FFloorCheckSettings::FloorSweepDistance");
static_assert(offsetof(FFloorCheckSettings, MaxWalkSlopeCosine) == 4, "Offset mismatch for FFloorCheckSettings::MaxWalkSlopeCosine");
static_assert(offsetof(FFloorCheckSettings, bUseFlatBaseForFloorChecks) == 8, "Offset mismatch for FFloorCheckSettings::bUseFlatBaseForFloorChecks");
static_assert(offsetof(FFloorCheckSettings, PerchRadiusThreshold) == 12, "Offset mismatch for FFloorCheckSettings::PerchRadiusThreshold");

// /Script/Mover.FloorResultData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FFloorResultData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FloorResult[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloorResultData, FloorResult) == 8, "Offset mismatch for FFloorResultData::FloorResult");

// /Script/Mover.FreeMoveParams
// Kind: ScriptStruct; super: none
struct FFreeMoveParams
{
public:
    std::uint8_t MoveInputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t MoveInput[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrientationIntent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorOrientation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TurningRate; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float DeltaSeconds; // 0x007C (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0084
    std::uint8_t WorldToGravityQuat[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseAccelerationForVelocityMove; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFreeMoveParams, MoveInputType) == 0, "Offset mismatch for FFreeMoveParams::MoveInputType");
static_assert(offsetof(FFreeMoveParams, MoveInput) == 8, "Offset mismatch for FFreeMoveParams::MoveInput");
static_assert(offsetof(FFreeMoveParams, OrientationIntent) == 32, "Offset mismatch for FFreeMoveParams::OrientationIntent");
static_assert(offsetof(FFreeMoveParams, PriorVelocity) == 56, "Offset mismatch for FFreeMoveParams::PriorVelocity");
static_assert(offsetof(FFreeMoveParams, PriorOrientation) == 80, "Offset mismatch for FFreeMoveParams::PriorOrientation");
static_assert(offsetof(FFreeMoveParams, MaxSpeed) == 104, "Offset mismatch for FFreeMoveParams::MaxSpeed");
static_assert(offsetof(FFreeMoveParams, Acceleration) == 108, "Offset mismatch for FFreeMoveParams::Acceleration");
static_assert(offsetof(FFreeMoveParams, Deceleration) == 112, "Offset mismatch for FFreeMoveParams::Deceleration");
static_assert(offsetof(FFreeMoveParams, TurningBoost) == 116, "Offset mismatch for FFreeMoveParams::TurningBoost");
static_assert(offsetof(FFreeMoveParams, TurningRate) == 120, "Offset mismatch for FFreeMoveParams::TurningRate");
static_assert(offsetof(FFreeMoveParams, DeltaSeconds) == 124, "Offset mismatch for FFreeMoveParams::DeltaSeconds");
static_assert(offsetof(FFreeMoveParams, Friction) == 128, "Offset mismatch for FFreeMoveParams::Friction");
static_assert(offsetof(FFreeMoveParams, WorldToGravityQuat) == 144, "Offset mismatch for FFreeMoveParams::WorldToGravityQuat");
static_assert(offsetof(FFreeMoveParams, bUseAccelerationForVelocityMove) == 176, "Offset mismatch for FFreeMoveParams::bUseAccelerationForVelocityMove");

// /Script/Mover.GroundMoveParams
// Kind: ScriptStruct; super: none
struct FGroundMoveParams
{
public:
    std::uint8_t MoveInputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t MoveInput[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrientationIntent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorOrientation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TurningRate; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroundNormal[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    float DeltaSeconds; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    std::uint8_t UpDirection[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldToGravityQuat[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseAccelerationForVelocityMove; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGroundMoveParams, MoveInputType) == 0, "Offset mismatch for FGroundMoveParams::MoveInputType");
static_assert(offsetof(FGroundMoveParams, MoveInput) == 8, "Offset mismatch for FGroundMoveParams::MoveInput");
static_assert(offsetof(FGroundMoveParams, OrientationIntent) == 32, "Offset mismatch for FGroundMoveParams::OrientationIntent");
static_assert(offsetof(FGroundMoveParams, PriorVelocity) == 56, "Offset mismatch for FGroundMoveParams::PriorVelocity");
static_assert(offsetof(FGroundMoveParams, PriorOrientation) == 80, "Offset mismatch for FGroundMoveParams::PriorOrientation");
static_assert(offsetof(FGroundMoveParams, MaxSpeed) == 104, "Offset mismatch for FGroundMoveParams::MaxSpeed");
static_assert(offsetof(FGroundMoveParams, Acceleration) == 108, "Offset mismatch for FGroundMoveParams::Acceleration");
static_assert(offsetof(FGroundMoveParams, Deceleration) == 112, "Offset mismatch for FGroundMoveParams::Deceleration");
static_assert(offsetof(FGroundMoveParams, Friction) == 116, "Offset mismatch for FGroundMoveParams::Friction");
static_assert(offsetof(FGroundMoveParams, TurningRate) == 120, "Offset mismatch for FGroundMoveParams::TurningRate");
static_assert(offsetof(FGroundMoveParams, TurningBoost) == 124, "Offset mismatch for FGroundMoveParams::TurningBoost");
static_assert(offsetof(FGroundMoveParams, GroundNormal) == 128, "Offset mismatch for FGroundMoveParams::GroundNormal");
static_assert(offsetof(FGroundMoveParams, DeltaSeconds) == 152, "Offset mismatch for FGroundMoveParams::DeltaSeconds");
static_assert(offsetof(FGroundMoveParams, UpDirection) == 160, "Offset mismatch for FGroundMoveParams::UpDirection");
static_assert(offsetof(FGroundMoveParams, WorldToGravityQuat) == 192, "Offset mismatch for FGroundMoveParams::WorldToGravityQuat");
static_assert(offsetof(FGroundMoveParams, bUseAccelerationForVelocityMove) == 224, "Offset mismatch for FGroundMoveParams::bUseAccelerationForVelocityMove");

// /Script/Mover.InstantMovementEffect
// Kind: ScriptStruct; super: none
struct FInstantMovementEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.JumpImpulseEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FJumpImpulseEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float UpwardsSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJumpImpulseEffect, UpwardsSpeed) == 8, "Offset mismatch for FJumpImpulseEffect::UpwardsSpeed");

// /Script/Mover.JumpedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FJumpedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJumpedEventData, Context) == 72, "Offset mismatch for FJumpedEventData::Context");
static_assert(offsetof(FJumpedEventData, bReEmitOnResim) == 88, "Offset mismatch for FJumpedEventData::bReEmitOnResim");

// /Script/Mover.LandedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FLandedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLandedEventData, Context) == 72, "Offset mismatch for FLandedEventData::Context");
static_assert(offsetof(FLandedEventData, bReEmitOnResim) == 88, "Offset mismatch for FLandedEventData::bReEmitOnResim");

// /Script/Mover.LaunchMoveActivationParams
// Kind: ScriptStruct; super: LayeredMoveActivationParams
struct FLaunchMoveActivationParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LaunchVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    FName ForceMovementMode; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLaunchMoveActivationParams, LaunchVelocity) == 8, "Offset mismatch for FLaunchMoveActivationParams::LaunchVelocity");
static_assert(offsetof(FLaunchMoveActivationParams, ForceMovementMode) == 32, "Offset mismatch for FLaunchMoveActivationParams::ForceMovementMode");

// /Script/Mover.LaunchMoveData
// Kind: ScriptStruct; super: LayeredMoveInstancedData
struct FLaunchMoveData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t LaunchVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    FName ForceMovementMode; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLaunchMoveData, LaunchVelocity) == 24, "Offset mismatch for FLaunchMoveData::LaunchVelocity");
static_assert(offsetof(FLaunchMoveData, ForceMovementMode) == 48, "Offset mismatch for FLaunchMoveData::ForceMovementMode");

// /Script/Mover.LayeredMoveActivationParams
// Kind: ScriptStruct; super: none
struct FLayeredMoveActivationParams
{
public:
    double DurationMs; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLayeredMoveActivationParams, DurationMs) == 0, "Offset mismatch for FLayeredMoveActivationParams::DurationMs");

// /Script/Mover.LayeredMoveBase
// Kind: ScriptStruct; super: none
struct FLayeredMoveBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MixMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float DurationMs; // 0x000C (Size: 0x4, Type: FloatProperty)
    double StartSimTimeMs; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FinishVelocitySettings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMoveBase, MixMode) == 8, "Offset mismatch for FLayeredMoveBase::MixMode");
static_assert(offsetof(FLayeredMoveBase, Priority) == 9, "Offset mismatch for FLayeredMoveBase::Priority");
static_assert(offsetof(FLayeredMoveBase, DurationMs) == 12, "Offset mismatch for FLayeredMoveBase::DurationMs");
static_assert(offsetof(FLayeredMoveBase, StartSimTimeMs) == 16, "Offset mismatch for FLayeredMoveBase::StartSimTimeMs");
static_assert(offsetof(FLayeredMoveBase, FinishVelocitySettings) == 24, "Offset mismatch for FLayeredMoveBase::FinishVelocitySettings");

// /Script/Mover.LayeredMoveFinishVelocitySettings
// Kind: ScriptStruct; super: none
struct FLayeredMoveFinishVelocitySettings
{
public:
    std::uint8_t SetVelocity[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float ClampVelocity; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FinishVelocityMode; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLayeredMoveFinishVelocitySettings, SetVelocity) == 0, "Offset mismatch for FLayeredMoveFinishVelocitySettings::SetVelocity");
static_assert(offsetof(FLayeredMoveFinishVelocitySettings, ClampVelocity) == 24, "Offset mismatch for FLayeredMoveFinishVelocitySettings::ClampVelocity");
static_assert(offsetof(FLayeredMoveFinishVelocitySettings, FinishVelocityMode) == 28, "Offset mismatch for FLayeredMoveFinishVelocitySettings::FinishVelocityMode");

// /Script/Mover.LayeredMoveGroup
// Kind: ScriptStruct; super: none
struct FLayeredMoveGroup
{
public:
    std::uint8_t ResidualVelocity[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TArray<void*> Debug_ActiveMoves; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0048
    float ResidualClamping; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyResidualVelocity; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLayeredMoveGroup, ResidualVelocity) == 0, "Offset mismatch for FLayeredMoveGroup::ResidualVelocity");
static_assert(offsetof(FLayeredMoveGroup, Debug_ActiveMoves) == 56, "Offset mismatch for FLayeredMoveGroup::Debug_ActiveMoves");
static_assert(offsetof(FLayeredMoveGroup, ResidualClamping) == 88, "Offset mismatch for FLayeredMoveGroup::ResidualClamping");
static_assert(offsetof(FLayeredMoveGroup, bApplyResidualVelocity) == 92, "Offset mismatch for FLayeredMoveGroup::bApplyResidualVelocity");

// /Script/Mover.LayeredMoveInstance
// Kind: ScriptStruct; super: none
struct FLayeredMoveInstance
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* MoveLogicClassType; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* MoveLogic; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLayeredMoveInstance, MoveLogicClassType) == 16, "Offset mismatch for FLayeredMoveInstance::MoveLogicClassType");
static_assert(offsetof(FLayeredMoveInstance, MoveLogic) == 24, "Offset mismatch for FLayeredMoveInstance::MoveLogic");

// /Script/Mover.LayeredMoveInstanceGroup
// Kind: ScriptStruct; super: none
struct FLayeredMoveInstanceGroup
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    float ResidualClamping; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyResidualVelocity; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t ResidualVelocity[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMoveInstanceGroup, ResidualClamping) == 32, "Offset mismatch for FLayeredMoveInstanceGroup::ResidualClamping");
static_assert(offsetof(FLayeredMoveInstanceGroup, bApplyResidualVelocity) == 36, "Offset mismatch for FLayeredMoveInstanceGroup::bApplyResidualVelocity");
static_assert(offsetof(FLayeredMoveInstanceGroup, ResidualVelocity) == 40, "Offset mismatch for FLayeredMoveInstanceGroup::ResidualVelocity");

// /Script/Mover.LayeredMoveInstancedData
// Kind: ScriptStruct; super: none
struct FLayeredMoveInstancedData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    double DurationMs; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double StartSimTimeMs; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLayeredMoveInstancedData, DurationMs) == 8, "Offset mismatch for FLayeredMoveInstancedData::DurationMs");
static_assert(offsetof(FLayeredMoveInstancedData, StartSimTimeMs) == 16, "Offset mismatch for FLayeredMoveInstancedData::StartSimTimeMs");

// /Script/Mover.LayeredMove_AnimRootMotion
// Kind: ScriptStruct; super: LayeredMove_MontageStateProvider
struct FLayeredMove_AnimRootMotion
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MontageState[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMove_AnimRootMotion, MontageState) == 56, "Offset mismatch for FLayeredMove_AnimRootMotion::MontageState");

// /Script/Mover.LayeredMove_AnimRootMotionConsumer
// Kind: ScriptStruct; super: LayeredMove_MontageStateProvider
struct FLayeredMove_AnimRootMotionConsumer
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MontageState[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMove_AnimRootMotionConsumer, MontageState) == 56, "Offset mismatch for FLayeredMove_AnimRootMotionConsumer::MontageState");

// /Script/Mover.LayeredMove_AnimRootMotion_SimDriven
// Kind: ScriptStruct; super: LayeredMove_AnimRootMotion
struct FLayeredMove_AnimRootMotion_SimDriven
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t StartMoverTime[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShouldBlendOut; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFinished; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::int32_t BlendOutServerFrame; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t FinishServerFrame; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLayeredMove_AnimRootMotion_SimDriven, StartMoverTime) == 88, "Offset mismatch for FLayeredMove_AnimRootMotion_SimDriven::StartMoverTime");
static_assert(offsetof(FLayeredMove_AnimRootMotion_SimDriven, bShouldBlendOut) == 104, "Offset mismatch for FLayeredMove_AnimRootMotion_SimDriven::bShouldBlendOut");
static_assert(offsetof(FLayeredMove_AnimRootMotion_SimDriven, bIsFinished) == 105, "Offset mismatch for FLayeredMove_AnimRootMotion_SimDriven::bIsFinished");
static_assert(offsetof(FLayeredMove_AnimRootMotion_SimDriven, BlendOutServerFrame) == 108, "Offset mismatch for FLayeredMove_AnimRootMotion_SimDriven::BlendOutServerFrame");
static_assert(offsetof(FLayeredMove_AnimRootMotion_SimDriven, FinishServerFrame) == 112, "Offset mismatch for FLayeredMove_AnimRootMotion_SimDriven::FinishServerFrame");

// /Script/Mover.LayeredMove_JumpImpulseOverDuration
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_JumpImpulseOverDuration
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UpwardsSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLayeredMove_JumpImpulseOverDuration, UpwardsSpeed) == 56, "Offset mismatch for FLayeredMove_JumpImpulseOverDuration::UpwardsSpeed");

// /Script/Mover.LayeredMove_JumpTo
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_JumpTo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float JumpDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float JumpHeight; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseActorRotation; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t JumpRotation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    void* PathOffsetCurve; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TimeMappingCurve; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLayeredMove_JumpTo, JumpDistance) == 56, "Offset mismatch for FLayeredMove_JumpTo::JumpDistance");
static_assert(offsetof(FLayeredMove_JumpTo, JumpHeight) == 60, "Offset mismatch for FLayeredMove_JumpTo::JumpHeight");
static_assert(offsetof(FLayeredMove_JumpTo, bUseActorRotation) == 64, "Offset mismatch for FLayeredMove_JumpTo::bUseActorRotation");
static_assert(offsetof(FLayeredMove_JumpTo, JumpRotation) == 72, "Offset mismatch for FLayeredMove_JumpTo::JumpRotation");
static_assert(offsetof(FLayeredMove_JumpTo, PathOffsetCurve) == 96, "Offset mismatch for FLayeredMove_JumpTo::PathOffsetCurve");
static_assert(offsetof(FLayeredMove_JumpTo, TimeMappingCurve) == 104, "Offset mismatch for FLayeredMove_JumpTo::TimeMappingCurve");

// /Script/Mover.LayeredMove_Launch
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_Launch
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t LaunchVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    FName ForceMovementMode; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLayeredMove_Launch, LaunchVelocity) == 56, "Offset mismatch for FLayeredMove_Launch::LaunchVelocity");
static_assert(offsetof(FLayeredMove_Launch, ForceMovementMode) == 80, "Offset mismatch for FLayeredMove_Launch::ForceMovementMode");

// /Script/Mover.LayeredMove_LinearVelocity
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_LinearVelocity
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Velocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* MagnitudeOverTime; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SettingsFlags; // 0x0058 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLayeredMove_LinearVelocity, Velocity) == 56, "Offset mismatch for FLayeredMove_LinearVelocity::Velocity");
static_assert(offsetof(FLayeredMove_LinearVelocity, MagnitudeOverTime) == 80, "Offset mismatch for FLayeredMove_LinearVelocity::MagnitudeOverTime");
static_assert(offsetof(FLayeredMove_LinearVelocity, SettingsFlags) == 88, "Offset mismatch for FLayeredMove_LinearVelocity::SettingsFlags");

// /Script/Mover.LayeredMove_MontageStateProvider
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_MontageStateProvider
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MixMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    float DurationMs; // 0x000C (Size: 0x4, Type: FloatProperty)
    double StartSimTimeMs; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FinishVelocitySettings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMove_MontageStateProvider, MixMode) == 8, "Offset mismatch for FLayeredMove_MontageStateProvider::MixMode");
static_assert(offsetof(FLayeredMove_MontageStateProvider, Priority) == 9, "Offset mismatch for FLayeredMove_MontageStateProvider::Priority");
static_assert(offsetof(FLayeredMove_MontageStateProvider, DurationMs) == 12, "Offset mismatch for FLayeredMove_MontageStateProvider::DurationMs");
static_assert(offsetof(FLayeredMove_MontageStateProvider, StartSimTimeMs) == 16, "Offset mismatch for FLayeredMove_MontageStateProvider::StartSimTimeMs");
static_assert(offsetof(FLayeredMove_MontageStateProvider, FinishVelocitySettings) == 24, "Offset mismatch for FLayeredMove_MontageStateProvider::FinishVelocitySettings");

// /Script/Mover.LayeredMove_MoveTo
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_MoveTo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t StartLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRestrictSpeedToExpected; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    void* PathOffsetCurve; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TimeMappingCurve; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLayeredMove_MoveTo, StartLocation) == 56, "Offset mismatch for FLayeredMove_MoveTo::StartLocation");
static_assert(offsetof(FLayeredMove_MoveTo, TargetLocation) == 80, "Offset mismatch for FLayeredMove_MoveTo::TargetLocation");
static_assert(offsetof(FLayeredMove_MoveTo, bRestrictSpeedToExpected) == 104, "Offset mismatch for FLayeredMove_MoveTo::bRestrictSpeedToExpected");
static_assert(offsetof(FLayeredMove_MoveTo, PathOffsetCurve) == 112, "Offset mismatch for FLayeredMove_MoveTo::PathOffsetCurve");
static_assert(offsetof(FLayeredMove_MoveTo, TimeMappingCurve) == 120, "Offset mismatch for FLayeredMove_MoveTo::TimeMappingCurve");

// /Script/Mover.LayeredMove_MoveToDynamic
// Kind: ScriptStruct; super: LayeredMove_MoveTo
struct FLayeredMove_MoveToDynamic
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* LocationActor; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLayeredMove_MoveToDynamic, LocationActor) == 128, "Offset mismatch for FLayeredMove_MoveToDynamic::LocationActor");

// /Script/Mover.LayeredMove_MultiJump
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_MultiJump
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t MaximumInAirJumps; // 0x0038 (Size: 0x4, Type: IntProperty)
    float UpwardsSpeed; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::int32_t JumpsInAirRemaining; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    double TimeOfLastJumpMS; // 0x0048 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLayeredMove_MultiJump, MaximumInAirJumps) == 56, "Offset mismatch for FLayeredMove_MultiJump::MaximumInAirJumps");
static_assert(offsetof(FLayeredMove_MultiJump, UpwardsSpeed) == 60, "Offset mismatch for FLayeredMove_MultiJump::UpwardsSpeed");
static_assert(offsetof(FLayeredMove_MultiJump, JumpsInAirRemaining) == 64, "Offset mismatch for FLayeredMove_MultiJump::JumpsInAirRemaining");
static_assert(offsetof(FLayeredMove_MultiJump, TimeOfLastJumpMS) == 72, "Offset mismatch for FLayeredMove_MultiJump::TimeOfLastJumpMS");

// /Script/Mover.LayeredMove_RadialImpulse
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_RadialImpulse
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* LocationActor; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    float Radius; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float Magnitude; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPush; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNoVerticalVelocity; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0062
    void* DistanceFalloff; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* MagnitudeOverTime; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseFixedWorldDirection; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t FixedWorldDirection[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLayeredMove_RadialImpulse, Location) == 56, "Offset mismatch for FLayeredMove_RadialImpulse::Location");
static_assert(offsetof(FLayeredMove_RadialImpulse, LocationActor) == 80, "Offset mismatch for FLayeredMove_RadialImpulse::LocationActor");
static_assert(offsetof(FLayeredMove_RadialImpulse, Radius) == 88, "Offset mismatch for FLayeredMove_RadialImpulse::Radius");
static_assert(offsetof(FLayeredMove_RadialImpulse, Magnitude) == 92, "Offset mismatch for FLayeredMove_RadialImpulse::Magnitude");
static_assert(offsetof(FLayeredMove_RadialImpulse, bIsPush) == 96, "Offset mismatch for FLayeredMove_RadialImpulse::bIsPush");
static_assert(offsetof(FLayeredMove_RadialImpulse, bNoVerticalVelocity) == 97, "Offset mismatch for FLayeredMove_RadialImpulse::bNoVerticalVelocity");
static_assert(offsetof(FLayeredMove_RadialImpulse, DistanceFalloff) == 104, "Offset mismatch for FLayeredMove_RadialImpulse::DistanceFalloff");
static_assert(offsetof(FLayeredMove_RadialImpulse, MagnitudeOverTime) == 112, "Offset mismatch for FLayeredMove_RadialImpulse::MagnitudeOverTime");
static_assert(offsetof(FLayeredMove_RadialImpulse, bUseFixedWorldDirection) == 120, "Offset mismatch for FLayeredMove_RadialImpulse::bUseFixedWorldDirection");
static_assert(offsetof(FLayeredMove_RadialImpulse, FixedWorldDirection) == 128, "Offset mismatch for FLayeredMove_RadialImpulse::FixedWorldDirection");

// /Script/Mover.LayeredMove_RootMotionAttribute
// Kind: ScriptStruct; super: LayeredMoveBase
struct FLayeredMove_RootMotionAttribute
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bConstrainWorldRotToMovementPlane; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLayeredMove_RootMotionAttribute, bConstrainWorldRotToMovementPlane) == 56, "Offset mismatch for FLayeredMove_RootMotionAttribute::bConstrainWorldRotToMovementPlane");

// /Script/Mover.LinearVelocityMoveActivationParams
// Kind: ScriptStruct; super: LayeredMoveActivationParams
struct FLinearVelocityMoveActivationParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Velocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SettingsFlags; // 0x0020 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLinearVelocityMoveActivationParams, Velocity) == 8, "Offset mismatch for FLinearVelocityMoveActivationParams::Velocity");
static_assert(offsetof(FLinearVelocityMoveActivationParams, SettingsFlags) == 32, "Offset mismatch for FLinearVelocityMoveActivationParams::SettingsFlags");

// /Script/Mover.LinearVelocityMoveData
// Kind: ScriptStruct; super: LayeredMoveInstancedData
struct FLinearVelocityMoveData
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Velocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SettingsFlags; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLinearVelocityMoveData, Velocity) == 24, "Offset mismatch for FLinearVelocityMoveData::Velocity");
static_assert(offsetof(FLinearVelocityMoveData, SettingsFlags) == 48, "Offset mismatch for FLinearVelocityMoveData::SettingsFlags");

// /Script/Mover.ModeChangeParams
// Kind: ScriptStruct; super: none
struct FModeChangeParams
{
public:
    std::uint8_t DesiredModeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bShouldReenter; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModeChangeParams, DesiredModeName) == 0, "Offset mismatch for FModeChangeParams::DesiredModeName");
static_assert(offsetof(FModeChangeParams, bShouldReenter) == 4, "Offset mismatch for FModeChangeParams::bShouldReenter");

// /Script/Mover.ModeRegistrationParams
// Kind: ScriptStruct; super: none
struct FModeRegistrationParams
{
public:
    FName ModeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* ModeObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTheDefaultMode; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModeRegistrationParams, ModeName) == 0, "Offset mismatch for FModeRegistrationParams::ModeName");
static_assert(offsetof(FModeRegistrationParams, ModeObject) == 8, "Offset mismatch for FModeRegistrationParams::ModeObject");
static_assert(offsetof(FModeRegistrationParams, bIsTheDefaultMode) == 16, "Offset mismatch for FModeRegistrationParams::bIsTheDefaultMode");

// /Script/Mover.MovementModeChangedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FMovementModeChangedEventData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PreviousModeName[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    FName NewModeName; // 0x0064 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMovementModeChangedEventData, PreviousModeName) == 96, "Offset mismatch for FMovementModeChangedEventData::PreviousModeName");
static_assert(offsetof(FMovementModeChangedEventData, NewModeName) == 100, "Offset mismatch for FMovementModeChangedEventData::NewModeName");

// /Script/Mover.MovementModeTickEndState
// Kind: ScriptStruct; super: none
struct FMovementModeTickEndState
{
public:
    float RemainingMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NextModeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEndedWithNoChanges; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovementModeTickEndState, RemainingMs) == 0, "Offset mismatch for FMovementModeTickEndState::RemainingMs");
static_assert(offsetof(FMovementModeTickEndState, NextModeName) == 4, "Offset mismatch for FMovementModeTickEndState::NextModeName");
static_assert(offsetof(FMovementModeTickEndState, bEndedWithNoChanges) == 8, "Offset mismatch for FMovementModeTickEndState::bEndedWithNoChanges");

// /Script/Mover.MovementModifierBase
// Kind: ScriptStruct; super: none
struct FMovementModifierBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float DurationMs; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double StartSimTimeMs; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LocalModifierHandle[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovementModifierBase, DurationMs) == 8, "Offset mismatch for FMovementModifierBase::DurationMs");
static_assert(offsetof(FMovementModifierBase, StartSimTimeMs) == 16, "Offset mismatch for FMovementModifierBase::StartSimTimeMs");
static_assert(offsetof(FMovementModifierBase, LocalModifierHandle) == 24, "Offset mismatch for FMovementModifierBase::LocalModifierHandle");

// /Script/Mover.MovementModifierGroup
// Kind: ScriptStruct; super: none
struct FMovementModifierGroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MovementModifierHandle
// Kind: ScriptStruct; super: none
struct FMovementModifierHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MovementRecord
// Kind: ScriptStruct; super: none
struct FMovementRecord
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MovementSubstep
// Kind: ScriptStruct; super: none
struct FMovementSubstep
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverAIInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverAIInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RVOVelocityDelta[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverAIInputs, RVOVelocityDelta) == 8, "Offset mismatch for FMoverAIInputs::RVOVelocityDelta");

// /Script/Mover.MoverAnimMontageState
// Kind: ScriptStruct; super: none
struct FMoverAnimMontageState
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Debug_MontageName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float StartingMontagePosition; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float CurrentPosition; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BlendOutTimeSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAutoBlendOut; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverAnimMontageState, Montage) == 0, "Offset mismatch for FMoverAnimMontageState::Montage");
static_assert(offsetof(FMoverAnimMontageState, Debug_MontageName) == 8, "Offset mismatch for FMoverAnimMontageState::Debug_MontageName");
static_assert(offsetof(FMoverAnimMontageState, StartingMontagePosition) == 12, "Offset mismatch for FMoverAnimMontageState::StartingMontagePosition");
static_assert(offsetof(FMoverAnimMontageState, PlayRate) == 16, "Offset mismatch for FMoverAnimMontageState::PlayRate");
static_assert(offsetof(FMoverAnimMontageState, CurrentPosition) == 20, "Offset mismatch for FMoverAnimMontageState::CurrentPosition");
static_assert(offsetof(FMoverAnimMontageState, BlendOutTimeSeconds) == 24, "Offset mismatch for FMoverAnimMontageState::BlendOutTimeSeconds");
static_assert(offsetof(FMoverAnimMontageState, bEnableAutoBlendOut) == 28, "Offset mismatch for FMoverAnimMontageState::bEnableAutoBlendOut");

// /Script/Mover.MoverAuxStateContext
// Kind: ScriptStruct; super: none
struct FMoverAuxStateContext
{
public:
    std::uint8_t AuxStateCollection[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverAuxStateContext, AuxStateCollection) == 0, "Offset mismatch for FMoverAuxStateContext::AuxStateCollection");

// /Script/Mover.MoverDataCollection
// Kind: ScriptStruct; super: none
struct FMoverDataCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverDataPersistence
// Kind: ScriptStruct; super: none
struct FMoverDataPersistence
{
public:
    void* RequiredType; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCopyFromPriorFrame; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverDataPersistence, RequiredType) == 0, "Offset mismatch for FMoverDataPersistence::RequiredType");
static_assert(offsetof(FMoverDataPersistence, bCopyFromPriorFrame) == 8, "Offset mismatch for FMoverDataPersistence::bCopyFromPriorFrame");

// /Script/Mover.MoverDataStructBase
// Kind: ScriptStruct; super: none
struct FMoverDataStructBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverDefaultSyncState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverDefaultSyncState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t orientation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocityDegrees[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t MoveDirectionIntent[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> MovementBase; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    FName MovementBaseBoneName; // 0x0088 (Size: 0x8, Type: NameProperty)
    std::uint8_t MovementBasePos[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t MovementBaseQuat[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverDefaultSyncState, Location) == 8, "Offset mismatch for FMoverDefaultSyncState::Location");
static_assert(offsetof(FMoverDefaultSyncState, orientation) == 32, "Offset mismatch for FMoverDefaultSyncState::orientation");
static_assert(offsetof(FMoverDefaultSyncState, Velocity) == 56, "Offset mismatch for FMoverDefaultSyncState::Velocity");
static_assert(offsetof(FMoverDefaultSyncState, AngularVelocityDegrees) == 80, "Offset mismatch for FMoverDefaultSyncState::AngularVelocityDegrees");
static_assert(offsetof(FMoverDefaultSyncState, MoveDirectionIntent) == 104, "Offset mismatch for FMoverDefaultSyncState::MoveDirectionIntent");
static_assert(offsetof(FMoverDefaultSyncState, MovementBase) == 128, "Offset mismatch for FMoverDefaultSyncState::MovementBase");
static_assert(offsetof(FMoverDefaultSyncState, MovementBaseBoneName) == 136, "Offset mismatch for FMoverDefaultSyncState::MovementBaseBoneName");
static_assert(offsetof(FMoverDefaultSyncState, MovementBasePos) == 144, "Offset mismatch for FMoverDefaultSyncState::MovementBasePos");
static_assert(offsetof(FMoverDefaultSyncState, MovementBaseQuat) == 176, "Offset mismatch for FMoverDefaultSyncState::MovementBaseQuat");

// /Script/Mover.MoverDictionaryData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverDictionaryData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TMap<void*, void*> BoolValues; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> IntValues; // 0x0018 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FloatValues; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VectorValues; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RotatorValues; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> NameValues; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMoverDictionaryData, BoolValues) == 8, "Offset mismatch for FMoverDictionaryData::BoolValues");
static_assert(offsetof(FMoverDictionaryData, IntValues) == 24, "Offset mismatch for FMoverDictionaryData::IntValues");
static_assert(offsetof(FMoverDictionaryData, FloatValues) == 40, "Offset mismatch for FMoverDictionaryData::FloatValues");
static_assert(offsetof(FMoverDictionaryData, VectorValues) == 56, "Offset mismatch for FMoverDictionaryData::VectorValues");
static_assert(offsetof(FMoverDictionaryData, RotatorValues) == 72, "Offset mismatch for FMoverDictionaryData::RotatorValues");
static_assert(offsetof(FMoverDictionaryData, NameValues) == 88, "Offset mismatch for FMoverDictionaryData::NameValues");

// /Script/Mover.MoverDynamicBasedMovementTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FMoverDynamicBasedMovementTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMoverDynamicBasedMovementTickFunction, TickGroup) == 8, "Offset mismatch for FMoverDynamicBasedMovementTickFunction::TickGroup");
static_assert(offsetof(FMoverDynamicBasedMovementTickFunction, EndTickGroup) == 9, "Offset mismatch for FMoverDynamicBasedMovementTickFunction::EndTickGroup");
static_assert(offsetof(FMoverDynamicBasedMovementTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FMoverDynamicBasedMovementTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FMoverDynamicBasedMovementTickFunction, TickInterval) == 12, "Offset mismatch for FMoverDynamicBasedMovementTickFunction::TickInterval");

// /Script/Mover.MoverEventContext
// Kind: ScriptStruct; super: none
struct FMoverEventContext
{
public:
    double EventTimeMs; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::int32_t ServerFrame; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsCausedByRollback; // 0x000C (Size: 0x1, Type: BoolProperty)
    // 0x000C BoolProperty bIsDuringResimulation (shared storage)
};

static_assert(offsetof(FMoverEventContext, EventTimeMs) == 0, "Offset mismatch for FMoverEventContext::EventTimeMs");
static_assert(offsetof(FMoverEventContext, ServerFrame) == 8, "Offset mismatch for FMoverEventContext::ServerFrame");
static_assert(offsetof(FMoverEventContext, bIsCausedByRollback) == 12, "Offset mismatch for FMoverEventContext::bIsCausedByRollback");

// /Script/Mover.MoverGameplayTagChangeEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FMoverGameplayTagChangeEventData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t bWasAdded; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExternalTag; // 0x0065 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverGameplayTagChangeEventData, Tag) == 96, "Offset mismatch for FMoverGameplayTagChangeEventData::Tag");
static_assert(offsetof(FMoverGameplayTagChangeEventData, bWasAdded) == 100, "Offset mismatch for FMoverGameplayTagChangeEventData::bWasAdded");
static_assert(offsetof(FMoverGameplayTagChangeEventData, bIsExternalTag) == 101, "Offset mismatch for FMoverGameplayTagChangeEventData::bIsExternalTag");

// /Script/Mover.MoverInputCmdContext
// Kind: ScriptStruct; super: none
struct FMoverInputCmdContext
{
public:
    std::uint8_t InputCollection[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverInputCmdContext, InputCollection) == 0, "Offset mismatch for FMoverInputCmdContext::InputCollection");

// /Script/Mover.MoverInputContainerDataStruct
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverInputContainerDataStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverMotionWarpingInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverMotionWarpingInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> WarpTargets; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMoverMotionWarpingInputs, WarpTargets) == 8, "Offset mismatch for FMoverMotionWarpingInputs::WarpTargets");

// /Script/Mover.MoverOnImpactParams
// Kind: ScriptStruct; super: none
struct FMoverOnImpactParams
{
public:
    FName MovementModeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t HitResult[0xF8]; // 0x0008 (Size: 0xF8, Type: StructProperty)
    std::uint8_t AttemptedMoveDelta[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverOnImpactParams, MovementModeName) == 0, "Offset mismatch for FMoverOnImpactParams::MovementModeName");
static_assert(offsetof(FMoverOnImpactParams, HitResult) == 8, "Offset mismatch for FMoverOnImpactParams::HitResult");
static_assert(offsetof(FMoverOnImpactParams, AttemptedMoveDelta) == 256, "Offset mismatch for FMoverOnImpactParams::AttemptedMoveDelta");

// /Script/Mover.MoverPredictTrajectoryParams
// Kind: ScriptStruct; super: none
struct FMoverPredictTrajectoryParams
{
public:
    std::int32_t NumPredictionSamples; // 0x0000 (Size: 0x4, Type: IntProperty)
    float SecondsPerSample; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseVisualComponentRoot; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableGravity; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t OptionalStartTime[0x18]; // 0x0010 (Size: 0x18, Type: OptionalProperty)
    std::uint8_t OptionalStartSyncState[0xF0]; // 0x0028 (Size: 0xF0, Type: OptionalProperty)
    std::uint8_t OptionalStartAuxState[0x18]; // 0x0118 (Size: 0x18, Type: OptionalProperty)
    TArray<void*> OptionalInputCmds; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMoverPredictTrajectoryParams, NumPredictionSamples) == 0, "Offset mismatch for FMoverPredictTrajectoryParams::NumPredictionSamples");
static_assert(offsetof(FMoverPredictTrajectoryParams, SecondsPerSample) == 4, "Offset mismatch for FMoverPredictTrajectoryParams::SecondsPerSample");
static_assert(offsetof(FMoverPredictTrajectoryParams, bUseVisualComponentRoot) == 8, "Offset mismatch for FMoverPredictTrajectoryParams::bUseVisualComponentRoot");
static_assert(offsetof(FMoverPredictTrajectoryParams, bDisableGravity) == 9, "Offset mismatch for FMoverPredictTrajectoryParams::bDisableGravity");
static_assert(offsetof(FMoverPredictTrajectoryParams, OptionalStartTime) == 16, "Offset mismatch for FMoverPredictTrajectoryParams::OptionalStartTime");
static_assert(offsetof(FMoverPredictTrajectoryParams, OptionalStartSyncState) == 40, "Offset mismatch for FMoverPredictTrajectoryParams::OptionalStartSyncState");
static_assert(offsetof(FMoverPredictTrajectoryParams, OptionalStartAuxState) == 280, "Offset mismatch for FMoverPredictTrajectoryParams::OptionalStartAuxState");
static_assert(offsetof(FMoverPredictTrajectoryParams, OptionalInputCmds) == 304, "Offset mismatch for FMoverPredictTrajectoryParams::OptionalInputCmds");

// /Script/Mover.MoverResolvedWarpTarget
// Kind: ScriptStruct; super: none
struct FMoverResolvedWarpTarget
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverResolvedWarpTarget, Name) == 0, "Offset mismatch for FMoverResolvedWarpTarget::Name");
static_assert(offsetof(FMoverResolvedWarpTarget, Location) == 8, "Offset mismatch for FMoverResolvedWarpTarget::Location");
static_assert(offsetof(FMoverResolvedWarpTarget, Rotation) == 32, "Offset mismatch for FMoverResolvedWarpTarget::Rotation");

// /Script/Mover.MoverSchedulingInfo
// Kind: ScriptStruct; super: none
struct FMoverSchedulingInfo
{
public:
    std::uint8_t ServerIssuanceTime[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ServerExecutionTime[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFixedDt; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverSchedulingInfo, ServerIssuanceTime) == 0, "Offset mismatch for FMoverSchedulingInfo::ServerIssuanceTime");
static_assert(offsetof(FMoverSchedulingInfo, ServerExecutionTime) == 16, "Offset mismatch for FMoverSchedulingInfo::ServerExecutionTime");
static_assert(offsetof(FMoverSchedulingInfo, bIsFixedDt) == 32, "Offset mismatch for FMoverSchedulingInfo::bIsFixedDt");

// /Script/Mover.MoverSimContext
// Kind: ScriptStruct; super: none
struct FMoverSimContext
{
public:
    void* Simulation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Blackboard[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* SimulationOwner; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMoverSimContext, Simulation) == 0, "Offset mismatch for FMoverSimContext::Simulation");
static_assert(offsetof(FMoverSimContext, Blackboard) == 8, "Offset mismatch for FMoverSimContext::Blackboard");
static_assert(offsetof(FMoverSimContext, SimulationOwner) == 24, "Offset mismatch for FMoverSimContext::SimulationOwner");

// /Script/Mover.MoverSimDrivenMontageData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverSimDrivenMontageData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> MontageStates; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMoverSimDrivenMontageData, MontageStates) == 8, "Offset mismatch for FMoverSimDrivenMontageData::MontageStates");

// /Script/Mover.MoverSimDrivenMontageEntry
// Kind: ScriptStruct; super: none
struct FMoverSimDrivenMontageEntry
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Debug_MontageName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float CurrentPosition; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float FrameSimTimeMs; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float StartSimTimeMs; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BlendOutSimTimeMs; // 0x001C (Size: 0x4, Type: FloatProperty)
    float FinishSimTimeMs; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldBlendOut; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    float BlendOutTimeSeconds; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFinished; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverSimDrivenMontageEntry, Montage) == 0, "Offset mismatch for FMoverSimDrivenMontageEntry::Montage");
static_assert(offsetof(FMoverSimDrivenMontageEntry, Debug_MontageName) == 8, "Offset mismatch for FMoverSimDrivenMontageEntry::Debug_MontageName");
static_assert(offsetof(FMoverSimDrivenMontageEntry, CurrentPosition) == 12, "Offset mismatch for FMoverSimDrivenMontageEntry::CurrentPosition");
static_assert(offsetof(FMoverSimDrivenMontageEntry, PlayRate) == 16, "Offset mismatch for FMoverSimDrivenMontageEntry::PlayRate");
static_assert(offsetof(FMoverSimDrivenMontageEntry, FrameSimTimeMs) == 20, "Offset mismatch for FMoverSimDrivenMontageEntry::FrameSimTimeMs");
static_assert(offsetof(FMoverSimDrivenMontageEntry, StartSimTimeMs) == 24, "Offset mismatch for FMoverSimDrivenMontageEntry::StartSimTimeMs");
static_assert(offsetof(FMoverSimDrivenMontageEntry, BlendOutSimTimeMs) == 28, "Offset mismatch for FMoverSimDrivenMontageEntry::BlendOutSimTimeMs");
static_assert(offsetof(FMoverSimDrivenMontageEntry, FinishSimTimeMs) == 32, "Offset mismatch for FMoverSimDrivenMontageEntry::FinishSimTimeMs");
static_assert(offsetof(FMoverSimDrivenMontageEntry, bShouldBlendOut) == 36, "Offset mismatch for FMoverSimDrivenMontageEntry::bShouldBlendOut");
static_assert(offsetof(FMoverSimDrivenMontageEntry, BlendOutTimeSeconds) == 40, "Offset mismatch for FMoverSimDrivenMontageEntry::BlendOutTimeSeconds");
static_assert(offsetof(FMoverSimDrivenMontageEntry, bIsFinished) == 44, "Offset mismatch for FMoverSimDrivenMontageEntry::bIsFinished");

// /Script/Mover.MoverSimEventGameThreadContext
// Kind: ScriptStruct; super: none
struct FMoverSimEventGameThreadContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverSimulationEventData
// Kind: ScriptStruct; super: none
struct FMoverSimulationEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMoverSimulationEventData, Context) == 72, "Offset mismatch for FMoverSimulationEventData::Context");
static_assert(offsetof(FMoverSimulationEventData, bReEmitOnResim) == 88, "Offset mismatch for FMoverSimulationEventData::bReEmitOnResim");

// /Script/Mover.MoverStandaloneApplyStateTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FMoverStandaloneApplyStateTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMoverStandaloneApplyStateTickFunction, TickGroup) == 8, "Offset mismatch for FMoverStandaloneApplyStateTickFunction::TickGroup");
static_assert(offsetof(FMoverStandaloneApplyStateTickFunction, EndTickGroup) == 9, "Offset mismatch for FMoverStandaloneApplyStateTickFunction::EndTickGroup");
static_assert(offsetof(FMoverStandaloneApplyStateTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FMoverStandaloneApplyStateTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FMoverStandaloneApplyStateTickFunction, TickInterval) == 12, "Offset mismatch for FMoverStandaloneApplyStateTickFunction::TickInterval");

// /Script/Mover.MoverStandaloneProduceInputTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FMoverStandaloneProduceInputTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMoverStandaloneProduceInputTickFunction, TickGroup) == 8, "Offset mismatch for FMoverStandaloneProduceInputTickFunction::TickGroup");
static_assert(offsetof(FMoverStandaloneProduceInputTickFunction, EndTickGroup) == 9, "Offset mismatch for FMoverStandaloneProduceInputTickFunction::EndTickGroup");
static_assert(offsetof(FMoverStandaloneProduceInputTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FMoverStandaloneProduceInputTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FMoverStandaloneProduceInputTickFunction, TickInterval) == 12, "Offset mismatch for FMoverStandaloneProduceInputTickFunction::TickInterval");

// /Script/Mover.MoverStandaloneSimulateMovementTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FMoverStandaloneSimulateMovementTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMoverStandaloneSimulateMovementTickFunction, TickGroup) == 8, "Offset mismatch for FMoverStandaloneSimulateMovementTickFunction::TickGroup");
static_assert(offsetof(FMoverStandaloneSimulateMovementTickFunction, EndTickGroup) == 9, "Offset mismatch for FMoverStandaloneSimulateMovementTickFunction::EndTickGroup");
static_assert(offsetof(FMoverStandaloneSimulateMovementTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FMoverStandaloneSimulateMovementTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FMoverStandaloneSimulateMovementTickFunction, TickInterval) == 12, "Offset mismatch for FMoverStandaloneSimulateMovementTickFunction::TickInterval");

// /Script/Mover.MoverSyncState
// Kind: ScriptStruct; super: none
struct FMoverSyncState
{
public:
    FName MovementMode; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t LayeredMoves[0x60]; // 0x0008 (Size: 0x60, Type: StructProperty)
    std::uint8_t LayeredMoveInstances[0x50]; // 0x0068 (Size: 0x50, Type: StructProperty)
    std::uint8_t MovementModifiers[0x20]; // 0x00B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t SyncStateCollection[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverSyncState, MovementMode) == 0, "Offset mismatch for FMoverSyncState::MovementMode");
static_assert(offsetof(FMoverSyncState, LayeredMoves) == 8, "Offset mismatch for FMoverSyncState::LayeredMoves");
static_assert(offsetof(FMoverSyncState, LayeredMoveInstances) == 104, "Offset mismatch for FMoverSyncState::LayeredMoveInstances");
static_assert(offsetof(FMoverSyncState, MovementModifiers) == 184, "Offset mismatch for FMoverSyncState::MovementModifiers");
static_assert(offsetof(FMoverSyncState, SyncStateCollection) == 216, "Offset mismatch for FMoverSyncState::SyncStateCollection");

// /Script/Mover.MoverTickEndData
// Kind: ScriptStruct; super: none
struct FMoverTickEndData
{
public:
    std::uint8_t SyncState[0xE8]; // 0x0000 (Size: 0xE8, Type: StructProperty)
    std::uint8_t AuxState[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t MovementEndState[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverTickEndData, SyncState) == 0, "Offset mismatch for FMoverTickEndData::SyncState");
static_assert(offsetof(FMoverTickEndData, AuxState) == 232, "Offset mismatch for FMoverTickEndData::AuxState");
static_assert(offsetof(FMoverTickEndData, MovementEndState) == 248, "Offset mismatch for FMoverTickEndData::MovementEndState");

// /Script/Mover.MoverTickStartData
// Kind: ScriptStruct; super: none
struct FMoverTickStartData
{
public:
    std::uint8_t InputCmd[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SyncState[0xE8]; // 0x0010 (Size: 0xE8, Type: StructProperty)
    std::uint8_t AuxState[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverTickStartData, InputCmd) == 0, "Offset mismatch for FMoverTickStartData::InputCmd");
static_assert(offsetof(FMoverTickStartData, SyncState) == 16, "Offset mismatch for FMoverTickStartData::SyncState");
static_assert(offsetof(FMoverTickStartData, AuxState) == 248, "Offset mismatch for FMoverTickStartData::AuxState");

// /Script/Mover.MoverTime
// Kind: ScriptStruct; super: none
struct FMoverTime
{
public:
    std::int32_t FrameCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double TimeMS; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMoverTime, FrameCount) == 0, "Offset mismatch for FMoverTime::FrameCount");
static_assert(offsetof(FMoverTime, TimeMS) == 8, "Offset mismatch for FMoverTime::TimeMS");

// /Script/Mover.MoverTimeStep
// Kind: ScriptStruct; super: none
struct FMoverTimeStep
{
public:
    std::int32_t ServerFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    double BaseSimTimeMs; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    float StepMs; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFirstResimFrame; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty bIsResimulating (shared storage)
};

static_assert(offsetof(FMoverTimeStep, ServerFrame) == 0, "Offset mismatch for FMoverTimeStep::ServerFrame");
static_assert(offsetof(FMoverTimeStep, BaseSimTimeMs) == 8, "Offset mismatch for FMoverTimeStep::BaseSimTimeMs");
static_assert(offsetof(FMoverTimeStep, StepMs) == 16, "Offset mismatch for FMoverTimeStep::StepMs");
static_assert(offsetof(FMoverTimeStep, bIsFirstResimFrame) == 20, "Offset mismatch for FMoverTimeStep::bIsFirstResimFrame");

// /Script/Mover.MoverUserDefinedDataStruct
// Kind: ScriptStruct; super: MoverDataStructBase
struct FMoverUserDefinedDataStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StructInstance[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMoverUserDefinedDataStruct, StructInstance) == 8, "Offset mismatch for FMoverUserDefinedDataStruct::StructInstance");

// /Script/Mover.MovingComponentSet
// Kind: ScriptStruct; super: none
struct FMovingComponentSet
{
public:
    TWeakObjectPtr<void> UpdatedComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> UpdatedPrimitive; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MoverComponent; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMovingComponentSet, UpdatedComponent) == 0, "Offset mismatch for FMovingComponentSet::UpdatedComponent");
static_assert(offsetof(FMovingComponentSet, UpdatedPrimitive) == 8, "Offset mismatch for FMovingComponentSet::UpdatedPrimitive");
static_assert(offsetof(FMovingComponentSet, MoverComponent) == 16, "Offset mismatch for FMovingComponentSet::MoverComponent");

// /Script/Mover.PlanarConstraint
// Kind: ScriptStruct; super: none
struct FPlanarConstraint
{
public:
    std::uint8_t bConstrainToPlane; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t PlaneConstraintNormal[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlaneConstraintOrigin[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlanarConstraint, bConstrainToPlane) == 0, "Offset mismatch for FPlanarConstraint::bConstrainToPlane");
static_assert(offsetof(FPlanarConstraint, PlaneConstraintNormal) == 8, "Offset mismatch for FPlanarConstraint::PlaneConstraintNormal");
static_assert(offsetof(FPlanarConstraint, PlaneConstraintOrigin) == 32, "Offset mismatch for FPlanarConstraint::PlaneConstraintOrigin");

// /Script/Mover.ProposedMove
// Kind: ScriptStruct; super: none
struct FProposedMove
{
public:
    FName PreferredMode; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DirectionIntent[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearVelocity[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocityDegrees[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasDirIntent; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MixMode; // 0x0051 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FProposedMove, PreferredMode) == 0, "Offset mismatch for FProposedMove::PreferredMode");
static_assert(offsetof(FProposedMove, DirectionIntent) == 8, "Offset mismatch for FProposedMove::DirectionIntent");
static_assert(offsetof(FProposedMove, LinearVelocity) == 32, "Offset mismatch for FProposedMove::LinearVelocity");
static_assert(offsetof(FProposedMove, AngularVelocityDegrees) == 56, "Offset mismatch for FProposedMove::AngularVelocityDegrees");
static_assert(offsetof(FProposedMove, bHasDirIntent) == 80, "Offset mismatch for FProposedMove::bHasDirIntent");
static_assert(offsetof(FProposedMove, MixMode) == 81, "Offset mismatch for FProposedMove::MixMode");

// /Script/Mover.RelativeBaseInfo
// Kind: ScriptStruct; super: none
struct FRelativeBaseInfo
{
public:
    TWeakObjectPtr<void> MovementBase; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    FName BoneName; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t ContactLocalPosition[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldspaceOffsetFromContactPos[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRelativeBaseInfo, MovementBase) == 0, "Offset mismatch for FRelativeBaseInfo::MovementBase");
static_assert(offsetof(FRelativeBaseInfo, BoneName) == 8, "Offset mismatch for FRelativeBaseInfo::BoneName");
static_assert(offsetof(FRelativeBaseInfo, Location) == 16, "Offset mismatch for FRelativeBaseInfo::Location");
static_assert(offsetof(FRelativeBaseInfo, Rotation) == 48, "Offset mismatch for FRelativeBaseInfo::Rotation");
static_assert(offsetof(FRelativeBaseInfo, ContactLocalPosition) == 80, "Offset mismatch for FRelativeBaseInfo::ContactLocalPosition");
static_assert(offsetof(FRelativeBaseInfo, WorldspaceOffsetFromContactPos) == 104, "Offset mismatch for FRelativeBaseInfo::WorldspaceOffsetFromContactPos");

// /Script/Mover.RollbackBlackboardExternalWrapper
// Kind: ScriptStruct; super: none
struct FRollbackBlackboardExternalWrapper
{
public:
    void* Blackboard; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRollbackBlackboardExternalWrapper, Blackboard) == 0, "Offset mismatch for FRollbackBlackboardExternalWrapper::Blackboard");

// /Script/Mover.RollbackBlackboardSimWrapper
// Kind: ScriptStruct; super: none
struct FRollbackBlackboardSimWrapper
{
public:
    void* Blackboard; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInPredictiveMode; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRollbackBlackboardSimWrapper, Blackboard) == 0, "Offset mismatch for FRollbackBlackboardSimWrapper::Blackboard");
static_assert(offsetof(FRollbackBlackboardSimWrapper, bInPredictiveMode) == 8, "Offset mismatch for FRollbackBlackboardSimWrapper::bInPredictiveMode");

// /Script/Mover.ScheduledInstantMovementEffect
// Kind: ScriptStruct; super: none
struct FScheduledInstantMovementEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.ScheduledLayeredMove
// Kind: ScriptStruct; super: none
struct FScheduledLayeredMove
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.SimpleSpringState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FSimpleSpringState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CurrentAccel[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSimpleSpringState, CurrentAccel) == 8, "Offset mismatch for FSimpleSpringState::CurrentAccel");

// /Script/Mover.SimulationTickParams
// Kind: ScriptStruct; super: none
struct FSimulationTickParams
{
public:
    std::uint8_t SimContext[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t MovingComps[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    void* SimBlackboard; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartState[0x108]; // 0x0040 (Size: 0x108, Type: StructProperty)
    std::uint8_t TimeStep[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t ProposedMove[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSimulationTickParams, SimContext) == 0, "Offset mismatch for FSimulationTickParams::SimContext");
static_assert(offsetof(FSimulationTickParams, MovingComps) == 32, "Offset mismatch for FSimulationTickParams::MovingComps");
static_assert(offsetof(FSimulationTickParams, SimBlackboard) == 56, "Offset mismatch for FSimulationTickParams::SimBlackboard");
static_assert(offsetof(FSimulationTickParams, StartState) == 64, "Offset mismatch for FSimulationTickParams::StartState");
static_assert(offsetof(FSimulationTickParams, TimeStep) == 328, "Offset mismatch for FSimulationTickParams::TimeStep");
static_assert(offsetof(FSimulationTickParams, ProposedMove) == 352, "Offset mismatch for FSimulationTickParams::ProposedMove");

// /Script/Mover.SmoothWalkingState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FSmoothWalkingState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SpringVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpringAcceleration[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t IntermediateVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t IntermediateFacing[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t IntermediateAngularVelocity[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmoothWalkingState, SpringVelocity) == 8, "Offset mismatch for FSmoothWalkingState::SpringVelocity");
static_assert(offsetof(FSmoothWalkingState, SpringAcceleration) == 32, "Offset mismatch for FSmoothWalkingState::SpringAcceleration");
static_assert(offsetof(FSmoothWalkingState, IntermediateVelocity) == 56, "Offset mismatch for FSmoothWalkingState::IntermediateVelocity");
static_assert(offsetof(FSmoothWalkingState, IntermediateFacing) == 80, "Offset mismatch for FSmoothWalkingState::IntermediateFacing");
static_assert(offsetof(FSmoothWalkingState, IntermediateAngularVelocity) == 112, "Offset mismatch for FSmoothWalkingState::IntermediateAngularVelocity");

// /Script/Mover.StanceModifier
// Kind: ScriptStruct; super: MovementModifierBase
struct FStanceModifier
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float DurationMs; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double StartSimTimeMs; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LocalModifierHandle[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStanceModifier, DurationMs) == 8, "Offset mismatch for FStanceModifier::DurationMs");
static_assert(offsetof(FStanceModifier, StartSimTimeMs) == 16, "Offset mismatch for FStanceModifier::StartSimTimeMs");
static_assert(offsetof(FStanceModifier, LocalModifierHandle) == 24, "Offset mismatch for FStanceModifier::LocalModifierHandle");

// /Script/Mover.SwimmingControlSettings
// Kind: ScriptStruct; super: none
struct FSwimmingControlSettings
{
public:
    float CancelCrouchImmersionDepth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DBNOSwimImmersionDepth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxAcceleration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxAccelerationSprinting; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BrakingDeceleration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxNormalSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxSprintSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinSprintJumpSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SprintJumpAirAccelAngleLimit; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SprintRetriggerDelay; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SprintDelayAfterFiring; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxTargetingSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float BackwardsSpeedMultiplier; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float BackwardsSpeedCosAngle; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float AngledSpeedMultiplier; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float AngledSpeedCosAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FrictionSprinting; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float FrictionDirectionChangeDot; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FrictionDirectionChangeMultiplier; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedUp; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedDown; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MaxHorizontalEntrySpeed; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float WaterForceMultiplier; // 0x005C (Size: 0x4, Type: FloatProperty)
    float WaterForceSecondMultiplier; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MaxWaterForce; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityDepthForMax; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityMinMultiplier; // 0x006C (Size: 0x4, Type: FloatProperty)
    float WaterSimMaxTimeStep; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float WaterSimSubStepTime; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float BobbingMaxForce; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float BobbingIdealDepthTolerance; // 0x007C (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionDown; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragDown; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionDownSubmerged; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragDownSubmerged; // 0x008C (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionUp; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragUp; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionMultiplier; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragMultiplier; // 0x009C (Size: 0x4, Type: FloatProperty)
    float BoostDragMultiplier; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float JumpMultiplier; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSwimmingControlSettings, CancelCrouchImmersionDepth) == 0, "Offset mismatch for FSwimmingControlSettings::CancelCrouchImmersionDepth");
static_assert(offsetof(FSwimmingControlSettings, DBNOSwimImmersionDepth) == 4, "Offset mismatch for FSwimmingControlSettings::DBNOSwimImmersionDepth");
static_assert(offsetof(FSwimmingControlSettings, MaxAcceleration) == 8, "Offset mismatch for FSwimmingControlSettings::MaxAcceleration");
static_assert(offsetof(FSwimmingControlSettings, MaxAccelerationSprinting) == 12, "Offset mismatch for FSwimmingControlSettings::MaxAccelerationSprinting");
static_assert(offsetof(FSwimmingControlSettings, BrakingDeceleration) == 16, "Offset mismatch for FSwimmingControlSettings::BrakingDeceleration");
static_assert(offsetof(FSwimmingControlSettings, MaxNormalSpeed) == 20, "Offset mismatch for FSwimmingControlSettings::MaxNormalSpeed");
static_assert(offsetof(FSwimmingControlSettings, MaxSprintSpeed) == 24, "Offset mismatch for FSwimmingControlSettings::MaxSprintSpeed");
static_assert(offsetof(FSwimmingControlSettings, MinSprintJumpSpeed) == 28, "Offset mismatch for FSwimmingControlSettings::MinSprintJumpSpeed");
static_assert(offsetof(FSwimmingControlSettings, SprintJumpAirAccelAngleLimit) == 32, "Offset mismatch for FSwimmingControlSettings::SprintJumpAirAccelAngleLimit");
static_assert(offsetof(FSwimmingControlSettings, SprintRetriggerDelay) == 36, "Offset mismatch for FSwimmingControlSettings::SprintRetriggerDelay");
static_assert(offsetof(FSwimmingControlSettings, SprintDelayAfterFiring) == 40, "Offset mismatch for FSwimmingControlSettings::SprintDelayAfterFiring");
static_assert(offsetof(FSwimmingControlSettings, MaxTargetingSpeed) == 44, "Offset mismatch for FSwimmingControlSettings::MaxTargetingSpeed");
static_assert(offsetof(FSwimmingControlSettings, BackwardsSpeedMultiplier) == 48, "Offset mismatch for FSwimmingControlSettings::BackwardsSpeedMultiplier");
static_assert(offsetof(FSwimmingControlSettings, BackwardsSpeedCosAngle) == 52, "Offset mismatch for FSwimmingControlSettings::BackwardsSpeedCosAngle");
static_assert(offsetof(FSwimmingControlSettings, AngledSpeedMultiplier) == 56, "Offset mismatch for FSwimmingControlSettings::AngledSpeedMultiplier");
static_assert(offsetof(FSwimmingControlSettings, AngledSpeedCosAngle) == 60, "Offset mismatch for FSwimmingControlSettings::AngledSpeedCosAngle");
static_assert(offsetof(FSwimmingControlSettings, Friction) == 64, "Offset mismatch for FSwimmingControlSettings::Friction");
static_assert(offsetof(FSwimmingControlSettings, FrictionSprinting) == 68, "Offset mismatch for FSwimmingControlSettings::FrictionSprinting");
static_assert(offsetof(FSwimmingControlSettings, FrictionDirectionChangeDot) == 72, "Offset mismatch for FSwimmingControlSettings::FrictionDirectionChangeDot");
static_assert(offsetof(FSwimmingControlSettings, FrictionDirectionChangeMultiplier) == 76, "Offset mismatch for FSwimmingControlSettings::FrictionDirectionChangeMultiplier");
static_assert(offsetof(FSwimmingControlSettings, MaxSpeedUp) == 80, "Offset mismatch for FSwimmingControlSettings::MaxSpeedUp");
static_assert(offsetof(FSwimmingControlSettings, MaxSpeedDown) == 84, "Offset mismatch for FSwimmingControlSettings::MaxSpeedDown");
static_assert(offsetof(FSwimmingControlSettings, MaxHorizontalEntrySpeed) == 88, "Offset mismatch for FSwimmingControlSettings::MaxHorizontalEntrySpeed");
static_assert(offsetof(FSwimmingControlSettings, WaterForceMultiplier) == 92, "Offset mismatch for FSwimmingControlSettings::WaterForceMultiplier");
static_assert(offsetof(FSwimmingControlSettings, WaterForceSecondMultiplier) == 96, "Offset mismatch for FSwimmingControlSettings::WaterForceSecondMultiplier");
static_assert(offsetof(FSwimmingControlSettings, MaxWaterForce) == 100, "Offset mismatch for FSwimmingControlSettings::MaxWaterForce");
static_assert(offsetof(FSwimmingControlSettings, WaterVelocityDepthForMax) == 104, "Offset mismatch for FSwimmingControlSettings::WaterVelocityDepthForMax");
static_assert(offsetof(FSwimmingControlSettings, WaterVelocityMinMultiplier) == 108, "Offset mismatch for FSwimmingControlSettings::WaterVelocityMinMultiplier");
static_assert(offsetof(FSwimmingControlSettings, WaterSimMaxTimeStep) == 112, "Offset mismatch for FSwimmingControlSettings::WaterSimMaxTimeStep");
static_assert(offsetof(FSwimmingControlSettings, WaterSimSubStepTime) == 116, "Offset mismatch for FSwimmingControlSettings::WaterSimSubStepTime");
static_assert(offsetof(FSwimmingControlSettings, BobbingMaxForce) == 120, "Offset mismatch for FSwimmingControlSettings::BobbingMaxForce");
static_assert(offsetof(FSwimmingControlSettings, BobbingIdealDepthTolerance) == 124, "Offset mismatch for FSwimmingControlSettings::BobbingIdealDepthTolerance");
static_assert(offsetof(FSwimmingControlSettings, BobbingFrictionDown) == 128, "Offset mismatch for FSwimmingControlSettings::BobbingFrictionDown");
static_assert(offsetof(FSwimmingControlSettings, BobbingExpDragDown) == 132, "Offset mismatch for FSwimmingControlSettings::BobbingExpDragDown");
static_assert(offsetof(FSwimmingControlSettings, BobbingFrictionDownSubmerged) == 136, "Offset mismatch for FSwimmingControlSettings::BobbingFrictionDownSubmerged");
static_assert(offsetof(FSwimmingControlSettings, BobbingExpDragDownSubmerged) == 140, "Offset mismatch for FSwimmingControlSettings::BobbingExpDragDownSubmerged");
static_assert(offsetof(FSwimmingControlSettings, BobbingFrictionUp) == 144, "Offset mismatch for FSwimmingControlSettings::BobbingFrictionUp");
static_assert(offsetof(FSwimmingControlSettings, BobbingExpDragUp) == 148, "Offset mismatch for FSwimmingControlSettings::BobbingExpDragUp");
static_assert(offsetof(FSwimmingControlSettings, BobbingFrictionMultiplier) == 152, "Offset mismatch for FSwimmingControlSettings::BobbingFrictionMultiplier");
static_assert(offsetof(FSwimmingControlSettings, BobbingExpDragMultiplier) == 156, "Offset mismatch for FSwimmingControlSettings::BobbingExpDragMultiplier");
static_assert(offsetof(FSwimmingControlSettings, BoostDragMultiplier) == 160, "Offset mismatch for FSwimmingControlSettings::BoostDragMultiplier");
static_assert(offsetof(FSwimmingControlSettings, JumpMultiplier) == 164, "Offset mismatch for FSwimmingControlSettings::JumpMultiplier");

// /Script/Mover.TeleportEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FTeleportEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseActorRotation; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t TargetRotation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTeleportEffect, TargetLocation) == 8, "Offset mismatch for FTeleportEffect::TargetLocation");
static_assert(offsetof(FTeleportEffect, bUseActorRotation) == 32, "Offset mismatch for FTeleportEffect::bUseActorRotation");
static_assert(offsetof(FTeleportEffect, TargetRotation) == 40, "Offset mismatch for FTeleportEffect::TargetRotation");

// /Script/Mover.TeleportFailedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FTeleportFailedEventData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t FromLocation[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t FromRotation[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t ToLocation[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ToRotation[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TeleportFailureReason; // 0x00E0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTeleportFailedEventData, FromLocation) == 96, "Offset mismatch for FTeleportFailedEventData::FromLocation");
static_assert(offsetof(FTeleportFailedEventData, FromRotation) == 128, "Offset mismatch for FTeleportFailedEventData::FromRotation");
static_assert(offsetof(FTeleportFailedEventData, ToLocation) == 160, "Offset mismatch for FTeleportFailedEventData::ToLocation");
static_assert(offsetof(FTeleportFailedEventData, ToRotation) == 192, "Offset mismatch for FTeleportFailedEventData::ToRotation");
static_assert(offsetof(FTeleportFailedEventData, TeleportFailureReason) == 224, "Offset mismatch for FTeleportFailedEventData::TeleportFailureReason");

// /Script/Mover.TeleportSucceededEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FTeleportSucceededEventData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t FromLocation[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t FromRotation[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t ToLocation[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ToRotation[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTeleportSucceededEventData, FromLocation) == 96, "Offset mismatch for FTeleportSucceededEventData::FromLocation");
static_assert(offsetof(FTeleportSucceededEventData, FromRotation) == 128, "Offset mismatch for FTeleportSucceededEventData::FromRotation");
static_assert(offsetof(FTeleportSucceededEventData, ToLocation) == 160, "Offset mismatch for FTeleportSucceededEventData::ToLocation");
static_assert(offsetof(FTeleportSucceededEventData, ToRotation) == 192, "Offset mismatch for FTeleportSucceededEventData::ToRotation");

// /Script/Mover.TrajectorySampleInfo
// Kind: ScriptStruct; super: none
struct FTrajectorySampleInfo
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t LinearVelocity[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t InstantaneousAcceleration[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    double SimTimeMs; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FTrajectorySampleInfo, Transform) == 0, "Offset mismatch for FTrajectorySampleInfo::Transform");
static_assert(offsetof(FTrajectorySampleInfo, LinearVelocity) == 96, "Offset mismatch for FTrajectorySampleInfo::LinearVelocity");
static_assert(offsetof(FTrajectorySampleInfo, InstantaneousAcceleration) == 120, "Offset mismatch for FTrajectorySampleInfo::InstantaneousAcceleration");
static_assert(offsetof(FTrajectorySampleInfo, AngularVelocity) == 144, "Offset mismatch for FTrajectorySampleInfo::AngularVelocity");
static_assert(offsetof(FTrajectorySampleInfo, SimTimeMs) == 168, "Offset mismatch for FTrajectorySampleInfo::SimTimeMs");

// /Script/Mover.TransitionEvalResult
// Kind: ScriptStruct; super: none
struct FTransitionEvalResult
{
public:
    FName NextMode; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTransitionEvalResult, NextMode) == 0, "Offset mismatch for FTransitionEvalResult::NextMode");

// /Script/Mover.UpdateWaterSplineDataParams
// Kind: ScriptStruct; super: none
struct FUpdateWaterSplineDataParams
{
public:
    float TargetImmersionDepth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityDepthForMax; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityMinMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t PlayerVelocity[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float CapsuleHalfHeight; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUpdateWaterSplineDataParams, TargetImmersionDepth) == 0, "Offset mismatch for FUpdateWaterSplineDataParams::TargetImmersionDepth");
static_assert(offsetof(FUpdateWaterSplineDataParams, WaterVelocityDepthForMax) == 4, "Offset mismatch for FUpdateWaterSplineDataParams::WaterVelocityDepthForMax");
static_assert(offsetof(FUpdateWaterSplineDataParams, WaterVelocityMinMultiplier) == 8, "Offset mismatch for FUpdateWaterSplineDataParams::WaterVelocityMinMultiplier");
static_assert(offsetof(FUpdateWaterSplineDataParams, PlayerVelocity) == 16, "Offset mismatch for FUpdateWaterSplineDataParams::PlayerVelocity");
static_assert(offsetof(FUpdateWaterSplineDataParams, PlayerLocation) == 40, "Offset mismatch for FUpdateWaterSplineDataParams::PlayerLocation");
static_assert(offsetof(FUpdateWaterSplineDataParams, CapsuleHalfHeight) == 64, "Offset mismatch for FUpdateWaterSplineDataParams::CapsuleHalfHeight");

// /Script/Mover.WaterCheckResult
// Kind: ScriptStruct; super: none
struct FWaterCheckResult
{
public:
    std::uint8_t bSwimmableVolume; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t HitResult[0xF8]; // 0x0008 (Size: 0xF8, Type: StructProperty)
    std::uint8_t WaterSplineData[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWaterCheckResult, bSwimmableVolume) == 0, "Offset mismatch for FWaterCheckResult::bSwimmableVolume");
static_assert(offsetof(FWaterCheckResult, HitResult) == 8, "Offset mismatch for FWaterCheckResult::HitResult");
static_assert(offsetof(FWaterCheckResult, WaterSplineData) == 256, "Offset mismatch for FWaterCheckResult::WaterSplineData");

// /Script/Mover.WaterFlowSplineData
// Kind: ScriptStruct; super: none
struct FWaterFlowSplineData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.WaterMoveParams
// Kind: ScriptStruct; super: none
struct FWaterMoveParams
{
public:
    std::uint8_t MoveInputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t MoveInput[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t OrientationIntent[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorOrientation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Friction; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TurningRate; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x007C (Size: 0x4, Type: FloatProperty)
    float DeltaSeconds; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    std::uint8_t MoveAcceleration[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    float MoveSpeed; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00A4
    std::uint8_t WorldToGravityQuat[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWaterMoveParams, MoveInputType) == 0, "Offset mismatch for FWaterMoveParams::MoveInputType");
static_assert(offsetof(FWaterMoveParams, MoveInput) == 8, "Offset mismatch for FWaterMoveParams::MoveInput");
static_assert(offsetof(FWaterMoveParams, OrientationIntent) == 32, "Offset mismatch for FWaterMoveParams::OrientationIntent");
static_assert(offsetof(FWaterMoveParams, PriorVelocity) == 56, "Offset mismatch for FWaterMoveParams::PriorVelocity");
static_assert(offsetof(FWaterMoveParams, PriorOrientation) == 80, "Offset mismatch for FWaterMoveParams::PriorOrientation");
static_assert(offsetof(FWaterMoveParams, MaxSpeed) == 104, "Offset mismatch for FWaterMoveParams::MaxSpeed");
static_assert(offsetof(FWaterMoveParams, Acceleration) == 108, "Offset mismatch for FWaterMoveParams::Acceleration");
static_assert(offsetof(FWaterMoveParams, Deceleration) == 112, "Offset mismatch for FWaterMoveParams::Deceleration");
static_assert(offsetof(FWaterMoveParams, Friction) == 116, "Offset mismatch for FWaterMoveParams::Friction");
static_assert(offsetof(FWaterMoveParams, TurningRate) == 120, "Offset mismatch for FWaterMoveParams::TurningRate");
static_assert(offsetof(FWaterMoveParams, TurningBoost) == 124, "Offset mismatch for FWaterMoveParams::TurningBoost");
static_assert(offsetof(FWaterMoveParams, DeltaSeconds) == 128, "Offset mismatch for FWaterMoveParams::DeltaSeconds");
static_assert(offsetof(FWaterMoveParams, MoveAcceleration) == 136, "Offset mismatch for FWaterMoveParams::MoveAcceleration");
static_assert(offsetof(FWaterMoveParams, MoveSpeed) == 160, "Offset mismatch for FWaterMoveParams::MoveSpeed");
static_assert(offsetof(FWaterMoveParams, WorldToGravityQuat) == 176, "Offset mismatch for FWaterMoveParams::WorldToGravityQuat");

// /Script/Mover.AirMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UAirMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.AsyncFallingMode
// Kind: Class; super: BaseMovementMode
class UAsyncFallingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bCancelVerticalSpeedOnLanding; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float AirControlPercentage; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float FallingDeceleration; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float OverTerminalSpeedFallingDeceleration; // 0x007C (Size: 0x4, Type: FloatProperty)
    float TerminalMovementPlaneSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldClampTerminalVerticalSpeed; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    float VerticalFallingDeceleration; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float TerminalVerticalSpeed; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAsyncFallingMode, bCancelVerticalSpeedOnLanding) == 112, "Offset mismatch for UAsyncFallingMode::bCancelVerticalSpeedOnLanding");
static_assert(offsetof(UAsyncFallingMode, AirControlPercentage) == 116, "Offset mismatch for UAsyncFallingMode::AirControlPercentage");
static_assert(offsetof(UAsyncFallingMode, FallingDeceleration) == 120, "Offset mismatch for UAsyncFallingMode::FallingDeceleration");
static_assert(offsetof(UAsyncFallingMode, OverTerminalSpeedFallingDeceleration) == 124, "Offset mismatch for UAsyncFallingMode::OverTerminalSpeedFallingDeceleration");
static_assert(offsetof(UAsyncFallingMode, TerminalMovementPlaneSpeed) == 128, "Offset mismatch for UAsyncFallingMode::TerminalMovementPlaneSpeed");
static_assert(offsetof(UAsyncFallingMode, bShouldClampTerminalVerticalSpeed) == 132, "Offset mismatch for UAsyncFallingMode::bShouldClampTerminalVerticalSpeed");
static_assert(offsetof(UAsyncFallingMode, VerticalFallingDeceleration) == 136, "Offset mismatch for UAsyncFallingMode::VerticalFallingDeceleration");
static_assert(offsetof(UAsyncFallingMode, TerminalVerticalSpeed) == 140, "Offset mismatch for UAsyncFallingMode::TerminalVerticalSpeed");

// /Script/Mover.AsyncFlyingMode
// Kind: Class; super: BaseMovementMode
class UAsyncFlyingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bRespectDistanceOverWalkableSurfaces; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAsyncFlyingMode, bRespectDistanceOverWalkableSurfaces) == 112, "Offset mismatch for UAsyncFlyingMode::bRespectDistanceOverWalkableSurfaces");

// /Script/Mover.AsyncMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UAsyncMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.AsyncNavWalkingMode
// Kind: Class; super: BaseMovementMode
class UAsyncNavWalkingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bSweepWhileNavWalking; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectNavMeshWalking; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0072
    float NavMeshProjectionHeightScaleUp; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionHeightScaleDown; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionInterval; // 0x007C (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionInterpSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProjectNavMeshToGeometryBehavior; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BehaviorOffNavMesh; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSlideAlongNavMeshEdge; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0087
    float NavMeshProjectionTimer; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x3C]; // 0x008C
    std::uint8_t bProjectNavMeshOnBothWorldChannels; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00C9
    void* TurnGenerator; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncNavWalkingMode, bSweepWhileNavWalking) == 112, "Offset mismatch for UAsyncNavWalkingMode::bSweepWhileNavWalking");
static_assert(offsetof(UAsyncNavWalkingMode, bProjectNavMeshWalking) == 113, "Offset mismatch for UAsyncNavWalkingMode::bProjectNavMeshWalking");
static_assert(offsetof(UAsyncNavWalkingMode, NavMeshProjectionHeightScaleUp) == 116, "Offset mismatch for UAsyncNavWalkingMode::NavMeshProjectionHeightScaleUp");
static_assert(offsetof(UAsyncNavWalkingMode, NavMeshProjectionHeightScaleDown) == 120, "Offset mismatch for UAsyncNavWalkingMode::NavMeshProjectionHeightScaleDown");
static_assert(offsetof(UAsyncNavWalkingMode, NavMeshProjectionInterval) == 124, "Offset mismatch for UAsyncNavWalkingMode::NavMeshProjectionInterval");
static_assert(offsetof(UAsyncNavWalkingMode, NavMeshProjectionInterpSpeed) == 128, "Offset mismatch for UAsyncNavWalkingMode::NavMeshProjectionInterpSpeed");
static_assert(offsetof(UAsyncNavWalkingMode, ProjectNavMeshToGeometryBehavior) == 132, "Offset mismatch for UAsyncNavWalkingMode::ProjectNavMeshToGeometryBehavior");
static_assert(offsetof(UAsyncNavWalkingMode, BehaviorOffNavMesh) == 133, "Offset mismatch for UAsyncNavWalkingMode::BehaviorOffNavMesh");
static_assert(offsetof(UAsyncNavWalkingMode, bSlideAlongNavMeshEdge) == 134, "Offset mismatch for UAsyncNavWalkingMode::bSlideAlongNavMeshEdge");
static_assert(offsetof(UAsyncNavWalkingMode, NavMeshProjectionTimer) == 136, "Offset mismatch for UAsyncNavWalkingMode::NavMeshProjectionTimer");
static_assert(offsetof(UAsyncNavWalkingMode, bProjectNavMeshOnBothWorldChannels) == 200, "Offset mismatch for UAsyncNavWalkingMode::bProjectNavMeshOnBothWorldChannels");
static_assert(offsetof(UAsyncNavWalkingMode, TurnGenerator) == 208, "Offset mismatch for UAsyncNavWalkingMode::TurnGenerator");

// /Script/Mover.AsyncWalkingMode
// Kind: Class; super: BaseMovementMode
class UAsyncWalkingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t FloorCheckPolicy; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    void* TurnGenerator; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncWalkingMode, FloorCheckPolicy) == 112, "Offset mismatch for UAsyncWalkingMode::FloorCheckPolicy");
static_assert(offsetof(UAsyncWalkingMode, TurnGenerator) == 120, "Offset mismatch for UAsyncWalkingMode::TurnGenerator");

// /Script/Mover.BaseMovementMode
// Kind: Class; super: Object
class UBaseMovementMode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SharedSettingsClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSupportsAsync; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBaseMovementMode, SharedSettingsClasses) == 40, "Offset mismatch for UBaseMovementMode::SharedSettingsClasses");
static_assert(offsetof(UBaseMovementMode, Transitions) == 56, "Offset mismatch for UBaseMovementMode::Transitions");
static_assert(offsetof(UBaseMovementMode, GameplayTags) == 72, "Offset mismatch for UBaseMovementMode::GameplayTags");
static_assert(offsetof(UBaseMovementMode, bSupportsAsync) == 104, "Offset mismatch for UBaseMovementMode::bSupportsAsync");

// /Script/Mover.BaseMovementModeTransition
// Kind: Class; super: Object
class UBaseMovementModeTransition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SharedSettingsClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowModeReentry; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bFirstSubStepOnly (shared storage)
    // 0x0038 BoolProperty bSupportsAsync (shared storage)
};

static_assert(offsetof(UBaseMovementModeTransition, SharedSettingsClasses) == 40, "Offset mismatch for UBaseMovementModeTransition::SharedSettingsClasses");
static_assert(offsetof(UBaseMovementModeTransition, bAllowModeReentry) == 56, "Offset mismatch for UBaseMovementModeTransition::bAllowModeReentry");

// /Script/Mover.BasedMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UBasedMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.BlueprintableTurnGenerator
// Kind: Class; super: Object
class UBlueprintableTurnGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.CharacterMoverComponent
// Kind: Class; super: MoverComponent
class UCharacterMoverComponent
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    FMulticastInlineDelegate OnStanceChanged; // 0x06D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLanded; // 0x06E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x2]; // 0x06F0
    std::uint8_t bHandleJump; // 0x06F2 (Size: 0x1, Type: BoolProperty)
    // 0x06F2 BoolProperty bHandleStanceChanges (shared storage)
    // 0x06F2 BoolProperty bWantsToCrouch (shared storage)
    std::uint8_t Pad_0002[0x5]; // 0x06F3
    std::uint8_t SyncedMontageState[0x1]; // 0x06F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCharacterMoverComponent, OnStanceChanged) == 1744, "Offset mismatch for UCharacterMoverComponent::OnStanceChanged");
static_assert(offsetof(UCharacterMoverComponent, OnLanded) == 1760, "Offset mismatch for UCharacterMoverComponent::OnLanded");
static_assert(offsetof(UCharacterMoverComponent, bHandleJump) == 1778, "Offset mismatch for UCharacterMoverComponent::bHandleJump");
static_assert(offsetof(UCharacterMoverComponent, SyncedMontageState) == 1784, "Offset mismatch for UCharacterMoverComponent::SyncedMontageState");

// /Script/Mover.CommonLegacyMovementSettings
// Kind: Class; super: Object
class UCommonLegacyMovementSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bShouldRemainVertical; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t GroundMovementModeName[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    std::uint8_t AirMovementModeName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t SwimmingMovementModeName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    float MaxWalkSlopeCosine; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float FloorSweepDistance; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFlatBaseForFloorChecks; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0049
    float PerchRadiusThreshold; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MaxStepHeight; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAccelerationForVelocityMove; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0059
    float GroundFriction; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSeparateBrakingFriction; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0061
    float BrakingFriction; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float BrakingFrictionFactor; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float TurningRate; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreBaseRotation; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreBaseAttachedActors; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x007E
    float JumpUpwardsSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float SwimmingStartImmersionDepth; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float SwimmingIdealImmersionDepth; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float SwimmingStopImmersionDepth; // 0x008C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCommonLegacyMovementSettings, bShouldRemainVertical) == 48, "Offset mismatch for UCommonLegacyMovementSettings::bShouldRemainVertical");
static_assert(offsetof(UCommonLegacyMovementSettings, GroundMovementModeName) == 52, "Offset mismatch for UCommonLegacyMovementSettings::GroundMovementModeName");
static_assert(offsetof(UCommonLegacyMovementSettings, AirMovementModeName) == 56, "Offset mismatch for UCommonLegacyMovementSettings::AirMovementModeName");
static_assert(offsetof(UCommonLegacyMovementSettings, SwimmingMovementModeName) == 60, "Offset mismatch for UCommonLegacyMovementSettings::SwimmingMovementModeName");
static_assert(offsetof(UCommonLegacyMovementSettings, MaxWalkSlopeCosine) == 64, "Offset mismatch for UCommonLegacyMovementSettings::MaxWalkSlopeCosine");
static_assert(offsetof(UCommonLegacyMovementSettings, FloorSweepDistance) == 68, "Offset mismatch for UCommonLegacyMovementSettings::FloorSweepDistance");
static_assert(offsetof(UCommonLegacyMovementSettings, bUseFlatBaseForFloorChecks) == 72, "Offset mismatch for UCommonLegacyMovementSettings::bUseFlatBaseForFloorChecks");
static_assert(offsetof(UCommonLegacyMovementSettings, PerchRadiusThreshold) == 76, "Offset mismatch for UCommonLegacyMovementSettings::PerchRadiusThreshold");
static_assert(offsetof(UCommonLegacyMovementSettings, MaxStepHeight) == 80, "Offset mismatch for UCommonLegacyMovementSettings::MaxStepHeight");
static_assert(offsetof(UCommonLegacyMovementSettings, MaxSpeed) == 84, "Offset mismatch for UCommonLegacyMovementSettings::MaxSpeed");
static_assert(offsetof(UCommonLegacyMovementSettings, bUseAccelerationForVelocityMove) == 88, "Offset mismatch for UCommonLegacyMovementSettings::bUseAccelerationForVelocityMove");
static_assert(offsetof(UCommonLegacyMovementSettings, GroundFriction) == 92, "Offset mismatch for UCommonLegacyMovementSettings::GroundFriction");
static_assert(offsetof(UCommonLegacyMovementSettings, bUseSeparateBrakingFriction) == 96, "Offset mismatch for UCommonLegacyMovementSettings::bUseSeparateBrakingFriction");
static_assert(offsetof(UCommonLegacyMovementSettings, BrakingFriction) == 100, "Offset mismatch for UCommonLegacyMovementSettings::BrakingFriction");
static_assert(offsetof(UCommonLegacyMovementSettings, BrakingFrictionFactor) == 104, "Offset mismatch for UCommonLegacyMovementSettings::BrakingFrictionFactor");
static_assert(offsetof(UCommonLegacyMovementSettings, Deceleration) == 108, "Offset mismatch for UCommonLegacyMovementSettings::Deceleration");
static_assert(offsetof(UCommonLegacyMovementSettings, Acceleration) == 112, "Offset mismatch for UCommonLegacyMovementSettings::Acceleration");
static_assert(offsetof(UCommonLegacyMovementSettings, TurningRate) == 116, "Offset mismatch for UCommonLegacyMovementSettings::TurningRate");
static_assert(offsetof(UCommonLegacyMovementSettings, TurningBoost) == 120, "Offset mismatch for UCommonLegacyMovementSettings::TurningBoost");
static_assert(offsetof(UCommonLegacyMovementSettings, bIgnoreBaseRotation) == 124, "Offset mismatch for UCommonLegacyMovementSettings::bIgnoreBaseRotation");
static_assert(offsetof(UCommonLegacyMovementSettings, bIgnoreBaseAttachedActors) == 125, "Offset mismatch for UCommonLegacyMovementSettings::bIgnoreBaseAttachedActors");
static_assert(offsetof(UCommonLegacyMovementSettings, JumpUpwardsSpeed) == 128, "Offset mismatch for UCommonLegacyMovementSettings::JumpUpwardsSpeed");
static_assert(offsetof(UCommonLegacyMovementSettings, SwimmingStartImmersionDepth) == 132, "Offset mismatch for UCommonLegacyMovementSettings::SwimmingStartImmersionDepth");
static_assert(offsetof(UCommonLegacyMovementSettings, SwimmingIdealImmersionDepth) == 136, "Offset mismatch for UCommonLegacyMovementSettings::SwimmingIdealImmersionDepth");
static_assert(offsetof(UCommonLegacyMovementSettings, SwimmingStopImmersionDepth) == 140, "Offset mismatch for UCommonLegacyMovementSettings::SwimmingStopImmersionDepth");

// /Script/Mover.ExactDampedTurnGenerator
// Kind: Class; super: Object
class UExactDampedTurnGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float HalfLifeSeconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UExactDampedTurnGenerator, HalfLifeSeconds) == 48, "Offset mismatch for UExactDampedTurnGenerator::HalfLifeSeconds");

// /Script/Mover.FallingMode
// Kind: Class; super: BaseMovementMode
class UFallingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bCancelVerticalSpeedOnLanding; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float AirControlPercentage; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float FallingDeceleration; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float FallingLateralFriction; // 0x007C (Size: 0x4, Type: FloatProperty)
    float OverTerminalSpeedFallingDeceleration; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float TerminalMovementPlaneSpeed; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldClampTerminalVerticalSpeed; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    float VerticalFallingDeceleration; // 0x008C (Size: 0x4, Type: FloatProperty)
    float TerminalVerticalSpeed; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFallingMode, bCancelVerticalSpeedOnLanding) == 112, "Offset mismatch for UFallingMode::bCancelVerticalSpeedOnLanding");
static_assert(offsetof(UFallingMode, AirControlPercentage) == 116, "Offset mismatch for UFallingMode::AirControlPercentage");
static_assert(offsetof(UFallingMode, FallingDeceleration) == 120, "Offset mismatch for UFallingMode::FallingDeceleration");
static_assert(offsetof(UFallingMode, FallingLateralFriction) == 124, "Offset mismatch for UFallingMode::FallingLateralFriction");
static_assert(offsetof(UFallingMode, OverTerminalSpeedFallingDeceleration) == 128, "Offset mismatch for UFallingMode::OverTerminalSpeedFallingDeceleration");
static_assert(offsetof(UFallingMode, TerminalMovementPlaneSpeed) == 132, "Offset mismatch for UFallingMode::TerminalMovementPlaneSpeed");
static_assert(offsetof(UFallingMode, bShouldClampTerminalVerticalSpeed) == 136, "Offset mismatch for UFallingMode::bShouldClampTerminalVerticalSpeed");
static_assert(offsetof(UFallingMode, VerticalFallingDeceleration) == 140, "Offset mismatch for UFallingMode::VerticalFallingDeceleration");
static_assert(offsetof(UFallingMode, TerminalVerticalSpeed) == 144, "Offset mismatch for UFallingMode::TerminalVerticalSpeed");

// /Script/Mover.FloorQueryUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UFloorQueryUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.FlyingMode
// Kind: Class; super: BaseMovementMode
class UFlyingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bRespectDistanceOverWalkableSurfaces; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFlyingMode, bRespectDistanceOverWalkableSurfaces) == 112, "Offset mismatch for UFlyingMode::bRespectDistanceOverWalkableSurfaces");

// /Script/Mover.GroundMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UGroundMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.ImmediateMovementModeTransition
// Kind: Class; super: BaseMovementModeTransition
class UImmediateMovementModeTransition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SharedSettingsClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowModeReentry; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bFirstSubStepOnly (shared storage)
    // 0x0038 BoolProperty bSupportsAsync (shared storage)
};

static_assert(offsetof(UImmediateMovementModeTransition, SharedSettingsClasses) == 40, "Offset mismatch for UImmediateMovementModeTransition::SharedSettingsClasses");
static_assert(offsetof(UImmediateMovementModeTransition, bAllowModeReentry) == 56, "Offset mismatch for UImmediateMovementModeTransition::bAllowModeReentry");

// /Script/Mover.KinematicActorSimulation
// Kind: Class; super: MoverSimulation
class UKinematicActorSimulation
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* ModeFSM; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MoverComp; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UKinematicActorSimulation, ModeFSM) == 216, "Offset mismatch for UKinematicActorSimulation::ModeFSM");
static_assert(offsetof(UKinematicActorSimulation, MoverComp) == 224, "Offset mismatch for UKinematicActorSimulation::MoverComp");

// /Script/Mover.LaunchMoveLogic
// Kind: Class; super: LayeredMoveLogic
class ULaunchMoveLogic
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t LaunchVelocity[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    FName ForceMovementMode; // 0x0088 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(ULaunchMoveLogic, LaunchVelocity) == 112, "Offset mismatch for ULaunchMoveLogic::LaunchVelocity");
static_assert(offsetof(ULaunchMoveLogic, ForceMovementMode) == 136, "Offset mismatch for ULaunchMoveLogic::ForceMovementMode");

// /Script/Mover.LayeredMoveLogic
// Kind: Class; super: Object
class ULayeredMoveLogic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double DefaultDurationMs; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MixMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x0031 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    std::uint8_t FinishVelocitySettings[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    void* InstancedDataStructType; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULayeredMoveLogic, DefaultDurationMs) == 40, "Offset mismatch for ULayeredMoveLogic::DefaultDurationMs");
static_assert(offsetof(ULayeredMoveLogic, MixMode) == 48, "Offset mismatch for ULayeredMoveLogic::MixMode");
static_assert(offsetof(ULayeredMoveLogic, Priority) == 49, "Offset mismatch for ULayeredMoveLogic::Priority");
static_assert(offsetof(ULayeredMoveLogic, FinishVelocitySettings) == 56, "Offset mismatch for ULayeredMoveLogic::FinishVelocitySettings");
static_assert(offsetof(ULayeredMoveLogic, InstancedDataStructType) == 88, "Offset mismatch for ULayeredMoveLogic::InstancedDataStructType");

// /Script/Mover.LinearTurnGenerator
// Kind: Class; super: Object
class ULinearTurnGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float HeadingRate; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float PitchRate; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float RollRate; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULinearTurnGenerator, HeadingRate) == 48, "Offset mismatch for ULinearTurnGenerator::HeadingRate");
static_assert(offsetof(ULinearTurnGenerator, PitchRate) == 52, "Offset mismatch for ULinearTurnGenerator::PitchRate");
static_assert(offsetof(ULinearTurnGenerator, RollRate) == 56, "Offset mismatch for ULinearTurnGenerator::RollRate");

// /Script/Mover.LinearVelocityMoveLogic
// Kind: Class; super: LayeredMoveLogic
class ULinearVelocityMoveLogic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double DefaultDurationMs; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MixMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Priority; // 0x0031 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    std::uint8_t FinishVelocitySettings[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    void* InstancedDataStructType; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULinearVelocityMoveLogic, DefaultDurationMs) == 40, "Offset mismatch for ULinearVelocityMoveLogic::DefaultDurationMs");
static_assert(offsetof(ULinearVelocityMoveLogic, MixMode) == 48, "Offset mismatch for ULinearVelocityMoveLogic::MixMode");
static_assert(offsetof(ULinearVelocityMoveLogic, Priority) == 49, "Offset mismatch for ULinearVelocityMoveLogic::Priority");
static_assert(offsetof(ULinearVelocityMoveLogic, FinishVelocitySettings) == 56, "Offset mismatch for ULinearVelocityMoveLogic::FinishVelocitySettings");
static_assert(offsetof(ULinearVelocityMoveLogic, InstancedDataStructType) == 88, "Offset mismatch for ULinearVelocityMoveLogic::InstancedDataStructType");

// /Script/Mover.MotionWarpingMoverAdapter
// Kind: Class; super: MotionWarpingBaseAdapter
class UMotionWarpingMoverAdapter
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* TargetMoverComp; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMotionWarpingMoverAdapter, TargetMoverComp) == 56, "Offset mismatch for UMotionWarpingMoverAdapter::TargetMoverComp");

// /Script/Mover.MovementModeStateMachine
// Kind: Class; super: Object
class UMovementModeStateMachine
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TMap<void*, void*> Modes; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0050
    void* QueuedModeTransition; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Simulation; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovementModeStateMachine, Modes) == 64, "Offset mismatch for UMovementModeStateMachine::Modes");
static_assert(offsetof(UMovementModeStateMachine, QueuedModeTransition) == 96, "Offset mismatch for UMovementModeStateMachine::QueuedModeTransition");
static_assert(offsetof(UMovementModeStateMachine, Simulation) == 104, "Offset mismatch for UMovementModeStateMachine::Simulation");

// /Script/Mover.MovementRecordUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UMovementRecordUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MovementSettingsInterface
// Kind: Class; super: Interface
class UMovementSettingsInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverBackendLiaisonInterface
// Kind: Class; super: Interface
class UMoverBackendLiaisonInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverBlackboard
// Kind: Class; super: Object
class UMoverBlackboard
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverComponent
// Kind: Class; super: ActorComponent
class UMoverComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPreSimulationTick; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostMovement; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostSimulationTick; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostSimulationRollback; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMovementModeChanged; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTeleportSucceeded; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTeleportFailed; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBasedMovementApplied; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGameplayTagAdded; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGameplayTagRemoved; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMovementTransitionTriggered; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostFinalize; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0188
    void* BackendClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> MovementModes; // 0x01B8 (Size: 0x10, Type: MapProperty)
    FName StartingMovementMode; // 0x01C8 (Size: 0x8, Type: NameProperty)
    TArray<void*> Transitions; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersistentSyncStateDataTypes; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    void* InputProducer; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bGatherInputFromAllInputProducerComponents; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01F9
    TArray<void*> InputProducers; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x28]; // 0x0210
    void* UpdatedComponent; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    void* UpdatedCompAsPrimitive; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryVisualComponent; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x2F0]; // 0x0250
    TScriptInterface<void> BackendLiaisonComp; // 0x0540 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0005[0x38]; // 0x0550
    void* SimBlackboard; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* Simulation; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RollbackBlackboardExternalWrapper[0x8]; // 0x0598 (Size: 0x8, Type: StructProperty)
    TArray<void*> RegisteredMoves; // 0x05A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MovesPendingRegistration; // 0x05B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MovesPendingUnregistration; // 0x05C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedSettings; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GravityAccelOverride[0x18]; // 0x05E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlanarConstraint[0x38]; // 0x05F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t SmoothingMode; // 0x0630 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAcceptExternalMovement; // 0x0631 (Size: 0x1, Type: BoolProperty)
    // 0x0631 BoolProperty bSyncInputsForSimProxy (shared storage)
    // 0x0631 BoolProperty bWarnOnExternalMovement (shared storage)
    std::uint8_t bHasUpDirectionOverride; // 0x0632 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x5]; // 0x0633
    std::uint8_t UpDirectionOverride[0x18]; // 0x0638 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasGravityOverride; // 0x0650 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDeferredGroupMovement; // 0x0651 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0xE]; // 0x0652
    std::uint8_t WorldToGravityTransform[0x20]; // 0x0660 (Size: 0x20, Type: StructProperty)
    std::uint8_t GravityToWorldTransform[0x30]; // 0x0680 (Size: 0x30, Type: StructProperty)
    std::uint8_t bSupportsKinematicBasedMovement; // 0x06B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMoverComponent, OnPreSimulationTick) == 200, "Offset mismatch for UMoverComponent::OnPreSimulationTick");
static_assert(offsetof(UMoverComponent, OnPostMovement) == 216, "Offset mismatch for UMoverComponent::OnPostMovement");
static_assert(offsetof(UMoverComponent, OnPostSimulationTick) == 232, "Offset mismatch for UMoverComponent::OnPostSimulationTick");
static_assert(offsetof(UMoverComponent, OnPostSimulationRollback) == 248, "Offset mismatch for UMoverComponent::OnPostSimulationRollback");
static_assert(offsetof(UMoverComponent, OnMovementModeChanged) == 264, "Offset mismatch for UMoverComponent::OnMovementModeChanged");
static_assert(offsetof(UMoverComponent, OnTeleportSucceeded) == 280, "Offset mismatch for UMoverComponent::OnTeleportSucceeded");
static_assert(offsetof(UMoverComponent, OnTeleportFailed) == 296, "Offset mismatch for UMoverComponent::OnTeleportFailed");
static_assert(offsetof(UMoverComponent, OnBasedMovementApplied) == 312, "Offset mismatch for UMoverComponent::OnBasedMovementApplied");
static_assert(offsetof(UMoverComponent, OnGameplayTagAdded) == 328, "Offset mismatch for UMoverComponent::OnGameplayTagAdded");
static_assert(offsetof(UMoverComponent, OnGameplayTagRemoved) == 344, "Offset mismatch for UMoverComponent::OnGameplayTagRemoved");
static_assert(offsetof(UMoverComponent, OnMovementTransitionTriggered) == 360, "Offset mismatch for UMoverComponent::OnMovementTransitionTriggered");
static_assert(offsetof(UMoverComponent, OnPostFinalize) == 376, "Offset mismatch for UMoverComponent::OnPostFinalize");
static_assert(offsetof(UMoverComponent, BackendClass) == 432, "Offset mismatch for UMoverComponent::BackendClass");
static_assert(offsetof(UMoverComponent, MovementModes) == 440, "Offset mismatch for UMoverComponent::MovementModes");
static_assert(offsetof(UMoverComponent, StartingMovementMode) == 456, "Offset mismatch for UMoverComponent::StartingMovementMode");
static_assert(offsetof(UMoverComponent, Transitions) == 464, "Offset mismatch for UMoverComponent::Transitions");
static_assert(offsetof(UMoverComponent, PersistentSyncStateDataTypes) == 480, "Offset mismatch for UMoverComponent::PersistentSyncStateDataTypes");
static_assert(offsetof(UMoverComponent, InputProducer) == 496, "Offset mismatch for UMoverComponent::InputProducer");
static_assert(offsetof(UMoverComponent, bGatherInputFromAllInputProducerComponents) == 504, "Offset mismatch for UMoverComponent::bGatherInputFromAllInputProducerComponents");
static_assert(offsetof(UMoverComponent, InputProducers) == 512, "Offset mismatch for UMoverComponent::InputProducers");
static_assert(offsetof(UMoverComponent, UpdatedComponent) == 568, "Offset mismatch for UMoverComponent::UpdatedComponent");
static_assert(offsetof(UMoverComponent, UpdatedCompAsPrimitive) == 576, "Offset mismatch for UMoverComponent::UpdatedCompAsPrimitive");
static_assert(offsetof(UMoverComponent, PrimaryVisualComponent) == 584, "Offset mismatch for UMoverComponent::PrimaryVisualComponent");
static_assert(offsetof(UMoverComponent, BackendLiaisonComp) == 1344, "Offset mismatch for UMoverComponent::BackendLiaisonComp");
static_assert(offsetof(UMoverComponent, SimBlackboard) == 1416, "Offset mismatch for UMoverComponent::SimBlackboard");
static_assert(offsetof(UMoverComponent, Simulation) == 1424, "Offset mismatch for UMoverComponent::Simulation");
static_assert(offsetof(UMoverComponent, RollbackBlackboardExternalWrapper) == 1432, "Offset mismatch for UMoverComponent::RollbackBlackboardExternalWrapper");
static_assert(offsetof(UMoverComponent, RegisteredMoves) == 1440, "Offset mismatch for UMoverComponent::RegisteredMoves");
static_assert(offsetof(UMoverComponent, MovesPendingRegistration) == 1456, "Offset mismatch for UMoverComponent::MovesPendingRegistration");
static_assert(offsetof(UMoverComponent, MovesPendingUnregistration) == 1472, "Offset mismatch for UMoverComponent::MovesPendingUnregistration");
static_assert(offsetof(UMoverComponent, SharedSettings) == 1488, "Offset mismatch for UMoverComponent::SharedSettings");
static_assert(offsetof(UMoverComponent, GravityAccelOverride) == 1504, "Offset mismatch for UMoverComponent::GravityAccelOverride");
static_assert(offsetof(UMoverComponent, PlanarConstraint) == 1528, "Offset mismatch for UMoverComponent::PlanarConstraint");
static_assert(offsetof(UMoverComponent, SmoothingMode) == 1584, "Offset mismatch for UMoverComponent::SmoothingMode");
static_assert(offsetof(UMoverComponent, bAcceptExternalMovement) == 1585, "Offset mismatch for UMoverComponent::bAcceptExternalMovement");
static_assert(offsetof(UMoverComponent, bHasUpDirectionOverride) == 1586, "Offset mismatch for UMoverComponent::bHasUpDirectionOverride");
static_assert(offsetof(UMoverComponent, UpDirectionOverride) == 1592, "Offset mismatch for UMoverComponent::UpDirectionOverride");
static_assert(offsetof(UMoverComponent, bHasGravityOverride) == 1616, "Offset mismatch for UMoverComponent::bHasGravityOverride");
static_assert(offsetof(UMoverComponent, bUseDeferredGroupMovement) == 1617, "Offset mismatch for UMoverComponent::bUseDeferredGroupMovement");
static_assert(offsetof(UMoverComponent, WorldToGravityTransform) == 1632, "Offset mismatch for UMoverComponent::WorldToGravityTransform");
static_assert(offsetof(UMoverComponent, GravityToWorldTransform) == 1664, "Offset mismatch for UMoverComponent::GravityToWorldTransform");
static_assert(offsetof(UMoverComponent, bSupportsKinematicBasedMovement) == 1712, "Offset mismatch for UMoverComponent::bSupportsKinematicBasedMovement");

// /Script/Mover.MoverDataCollectionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMoverDataCollectionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverDataModelBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMoverDataModelBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverDebugComponent
// Kind: Class; super: ActorComponent
class UMoverDebugComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float LookaheadSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::int32_t LookaheadSamplesPerSecond; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowTrajectory; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTrail; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCorrections; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00CB
    float HistoryTrackingSeconds; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::int32_t HistorySamplesPerSecond; // 0x00D0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMoverDebugComponent, LookaheadSeconds) == 192, "Offset mismatch for UMoverDebugComponent::LookaheadSeconds");
static_assert(offsetof(UMoverDebugComponent, LookaheadSamplesPerSecond) == 196, "Offset mismatch for UMoverDebugComponent::LookaheadSamplesPerSecond");
static_assert(offsetof(UMoverDebugComponent, bShowTrajectory) == 200, "Offset mismatch for UMoverDebugComponent::bShowTrajectory");
static_assert(offsetof(UMoverDebugComponent, bShowTrail) == 201, "Offset mismatch for UMoverDebugComponent::bShowTrail");
static_assert(offsetof(UMoverDebugComponent, bShowCorrections) == 202, "Offset mismatch for UMoverDebugComponent::bShowCorrections");
static_assert(offsetof(UMoverDebugComponent, HistoryTrackingSeconds) == 204, "Offset mismatch for UMoverDebugComponent::HistoryTrackingSeconds");
static_assert(offsetof(UMoverDebugComponent, HistorySamplesPerSecond) == 208, "Offset mismatch for UMoverDebugComponent::HistorySamplesPerSecond");

// /Script/Mover.MoverDeveloperSettings
// Kind: Class; super: DeveloperSettingsBackedByCVars
class UMoverDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t MaxTimesToRefundSubstep; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMoverDeveloperSettings, MaxTimesToRefundSubstep) == 48, "Offset mismatch for UMoverDeveloperSettings::MaxTimesToRefundSubstep");

// /Script/Mover.MoverInputProducerInterface
// Kind: Class; super: Interface
class UMoverInputProducerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverNetworkPredictionLiaisonComponent
// Kind: Class; super: NetworkPredictionComponent
class UMoverNetworkPredictionLiaisonComponent
{
public:
    std::uint8_t Pad_0000[0xE78]; // 0x0000
    void* Simulation; // 0x0E78 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMoverNetworkPredictionLiaisonComponent, Simulation) == 3704, "Offset mismatch for UMoverNetworkPredictionLiaisonComponent::Simulation");

// /Script/Mover.MoverObjectInterface
// Kind: Class; super: Interface
class UMoverObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.MoverSimulation
// Kind: Class; super: Object
class UMoverSimulation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Blackboard; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RollbackBlackboard; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMoverSimulation, Blackboard) == 40, "Offset mismatch for UMoverSimulation::Blackboard");
static_assert(offsetof(UMoverSimulation, RollbackBlackboard) == 48, "Offset mismatch for UMoverSimulation::RollbackBlackboard");

// /Script/Mover.MoverStandaloneLiaisonComponent
// Kind: Class; super: ActorComponent
class UMoverStandaloneLiaisonComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bUseAsyncProduceInput; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAsyncMovementSimulationTick; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xE]; // 0x00CA
    void* Simulation; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMoverStandaloneLiaisonComponent, bUseAsyncProduceInput) == 200, "Offset mismatch for UMoverStandaloneLiaisonComponent::bUseAsyncProduceInput");
static_assert(offsetof(UMoverStandaloneLiaisonComponent, bUseAsyncMovementSimulationTick) == 201, "Offset mismatch for UMoverStandaloneLiaisonComponent::bUseAsyncMovementSimulationTick");
static_assert(offsetof(UMoverStandaloneLiaisonComponent, Simulation) == 216, "Offset mismatch for UMoverStandaloneLiaisonComponent::Simulation");

// /Script/Mover.MoverTrajectoryPredictor
// Kind: Class; super: Object
class UMoverTrajectoryPredictor
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bDisableGravity; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t MoverSamplingFrameRate[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMoverTrajectoryPredictor, bDisableGravity) == 56, "Offset mismatch for UMoverTrajectoryPredictor::bDisableGravity");
static_assert(offsetof(UMoverTrajectoryPredictor, MoverSamplingFrameRate) == 60, "Offset mismatch for UMoverTrajectoryPredictor::MoverSamplingFrameRate");

// /Script/Mover.NavMoverComponent
// Kind: Class; super: ActorComponent
class UNavMoverComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t NavAgentProps[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MovementState[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::int32_t AvoidanceUID; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t AvoidanceGroup[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t GroupsToAvoid[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    std::uint8_t GroupsToIgnore[0x4]; // 0x0110 (Size: 0x4, Type: StructProperty)
    float AvoidanceWeight; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float AvoidanceConsiderationRadius; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NavMovementProperties[0x5C]; // 0x011C (Size: 0x5C, Type: StructProperty)
    TWeakObjectPtr<void> MoverComponent; // 0x0178 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UNavMoverComponent, NavAgentProps) == 208, "Offset mismatch for UNavMoverComponent::NavAgentProps");
static_assert(offsetof(UNavMoverComponent, MovementState) == 256, "Offset mismatch for UNavMoverComponent::MovementState");
static_assert(offsetof(UNavMoverComponent, AvoidanceUID) == 260, "Offset mismatch for UNavMoverComponent::AvoidanceUID");
static_assert(offsetof(UNavMoverComponent, AvoidanceGroup) == 264, "Offset mismatch for UNavMoverComponent::AvoidanceGroup");
static_assert(offsetof(UNavMoverComponent, GroupsToAvoid) == 268, "Offset mismatch for UNavMoverComponent::GroupsToAvoid");
static_assert(offsetof(UNavMoverComponent, GroupsToIgnore) == 272, "Offset mismatch for UNavMoverComponent::GroupsToIgnore");
static_assert(offsetof(UNavMoverComponent, AvoidanceWeight) == 276, "Offset mismatch for UNavMoverComponent::AvoidanceWeight");
static_assert(offsetof(UNavMoverComponent, AvoidanceConsiderationRadius) == 280, "Offset mismatch for UNavMoverComponent::AvoidanceConsiderationRadius");
static_assert(offsetof(UNavMoverComponent, NavMovementProperties) == 284, "Offset mismatch for UNavMoverComponent::NavMovementProperties");
static_assert(offsetof(UNavMoverComponent, MoverComponent) == 376, "Offset mismatch for UNavMoverComponent::MoverComponent");

// /Script/Mover.NavWalkingMode
// Kind: Class; super: BaseMovementMode
class UNavWalkingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bSweepWhileNavWalking; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProjectNavMeshWalking; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0072
    float NavMeshProjectionHeightScaleUp; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionHeightScaleDown; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionInterval; // 0x007C (Size: 0x4, Type: FloatProperty)
    float NavMeshProjectionInterpSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProjectNavMeshToGeometryBehavior; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BehaviorOffNavMesh; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSlideAlongNavMeshEdge; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0087
    float NavMeshProjectionTimer; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x24]; // 0x008C
    void* NavMoverComponent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x00B8
    std::uint8_t bProjectNavMeshOnBothWorldChannels; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x00C9
    void* TurnGenerator; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNavWalkingMode, bSweepWhileNavWalking) == 112, "Offset mismatch for UNavWalkingMode::bSweepWhileNavWalking");
static_assert(offsetof(UNavWalkingMode, bProjectNavMeshWalking) == 113, "Offset mismatch for UNavWalkingMode::bProjectNavMeshWalking");
static_assert(offsetof(UNavWalkingMode, NavMeshProjectionHeightScaleUp) == 116, "Offset mismatch for UNavWalkingMode::NavMeshProjectionHeightScaleUp");
static_assert(offsetof(UNavWalkingMode, NavMeshProjectionHeightScaleDown) == 120, "Offset mismatch for UNavWalkingMode::NavMeshProjectionHeightScaleDown");
static_assert(offsetof(UNavWalkingMode, NavMeshProjectionInterval) == 124, "Offset mismatch for UNavWalkingMode::NavMeshProjectionInterval");
static_assert(offsetof(UNavWalkingMode, NavMeshProjectionInterpSpeed) == 128, "Offset mismatch for UNavWalkingMode::NavMeshProjectionInterpSpeed");
static_assert(offsetof(UNavWalkingMode, ProjectNavMeshToGeometryBehavior) == 132, "Offset mismatch for UNavWalkingMode::ProjectNavMeshToGeometryBehavior");
static_assert(offsetof(UNavWalkingMode, BehaviorOffNavMesh) == 133, "Offset mismatch for UNavWalkingMode::BehaviorOffNavMesh");
static_assert(offsetof(UNavWalkingMode, bSlideAlongNavMeshEdge) == 134, "Offset mismatch for UNavWalkingMode::bSlideAlongNavMeshEdge");
static_assert(offsetof(UNavWalkingMode, NavMeshProjectionTimer) == 136, "Offset mismatch for UNavWalkingMode::NavMeshProjectionTimer");
static_assert(offsetof(UNavWalkingMode, NavMoverComponent) == 176, "Offset mismatch for UNavWalkingMode::NavMoverComponent");
static_assert(offsetof(UNavWalkingMode, bProjectNavMeshOnBothWorldChannels) == 200, "Offset mismatch for UNavWalkingMode::bProjectNavMeshOnBothWorldChannels");
static_assert(offsetof(UNavWalkingMode, TurnGenerator) == 208, "Offset mismatch for UNavWalkingMode::TurnGenerator");

// /Script/Mover.NullMovementMode
// Kind: Class; super: BaseMovementMode
class UNullMovementMode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SharedSettingsClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSupportsAsync; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNullMovementMode, SharedSettingsClasses) == 40, "Offset mismatch for UNullMovementMode::SharedSettingsClasses");
static_assert(offsetof(UNullMovementMode, Transitions) == 56, "Offset mismatch for UNullMovementMode::Transitions");
static_assert(offsetof(UNullMovementMode, GameplayTags) == 72, "Offset mismatch for UNullMovementMode::GameplayTags");
static_assert(offsetof(UNullMovementMode, bSupportsAsync) == 104, "Offset mismatch for UNullMovementMode::bSupportsAsync");

// /Script/Mover.PlanarConstraintUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UPlanarConstraintUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.PlayMoverMontageCallbackProxy
// Kind: Class; super: PlayMontageCallbackProxy
class UPlayMoverMontageCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNotifyBegin; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNotifyEnd; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPlayMoverMontageCallbackProxy, OnCompleted) == 40, "Offset mismatch for UPlayMoverMontageCallbackProxy::OnCompleted");
static_assert(offsetof(UPlayMoverMontageCallbackProxy, OnBlendOut) == 56, "Offset mismatch for UPlayMoverMontageCallbackProxy::OnBlendOut");
static_assert(offsetof(UPlayMoverMontageCallbackProxy, OnInterrupted) == 72, "Offset mismatch for UPlayMoverMontageCallbackProxy::OnInterrupted");
static_assert(offsetof(UPlayMoverMontageCallbackProxy, OnNotifyBegin) == 88, "Offset mismatch for UPlayMoverMontageCallbackProxy::OnNotifyBegin");
static_assert(offsetof(UPlayMoverMontageCallbackProxy, OnNotifyEnd) == 104, "Offset mismatch for UPlayMoverMontageCallbackProxy::OnNotifyEnd");

// /Script/Mover.RollbackBlackboard
// Kind: Class; super: Object
class URollbackBlackboard
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.RollbackBlackboardLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class URollbackBlackboardLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.SimpleFlyingMode
// Kind: Class; super: FlyingMode
class USimpleFlyingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float MaxSpeedOverride; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USimpleFlyingMode, MaxSpeedOverride) == 128, "Offset mismatch for USimpleFlyingMode::MaxSpeedOverride");

// /Script/Mover.SimpleSpringWalkingMode
// Kind: Class; super: SimpleWalkingMode
class USimpleSpringWalkingMode
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float VelocitySmoothingTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float FacingSmoothingTime; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float VelocityDeadzoneThreshold; // 0x0098 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USimpleSpringWalkingMode, VelocitySmoothingTime) == 144, "Offset mismatch for USimpleSpringWalkingMode::VelocitySmoothingTime");
static_assert(offsetof(USimpleSpringWalkingMode, FacingSmoothingTime) == 148, "Offset mismatch for USimpleSpringWalkingMode::FacingSmoothingTime");
static_assert(offsetof(USimpleSpringWalkingMode, VelocityDeadzoneThreshold) == 152, "Offset mismatch for USimpleSpringWalkingMode::VelocityDeadzoneThreshold");

// /Script/Mover.SimpleWalkingMode
// Kind: Class; super: WalkingMode
class USimpleWalkingMode
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float MaxSpeedOverride; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USimpleWalkingMode, MaxSpeedOverride) == 136, "Offset mismatch for USimpleWalkingMode::MaxSpeedOverride");

// /Script/Mover.SmoothWalkingMode
// Kind: Class; super: SimpleWalkingMode
class USmoothWalkingMode
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float Acceleration; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float DirectionalAccelerationFactor; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float TurningStrength; // 0x009C (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingTime; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingTime; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingCompensation; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingCompensation; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float VelocityDeadzoneThreshold; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float AccelerationDeadzoneThreshold; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float OutsideInfluenceSmoothingTime; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float FacingSmoothingTime; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothFacingWithDoubleSpring; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float FacingDeadzoneThreshold; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float AngularVelocityDeadzoneThreshold; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USmoothWalkingMode, Acceleration) == 144, "Offset mismatch for USmoothWalkingMode::Acceleration");
static_assert(offsetof(USmoothWalkingMode, Deceleration) == 148, "Offset mismatch for USmoothWalkingMode::Deceleration");
static_assert(offsetof(USmoothWalkingMode, DirectionalAccelerationFactor) == 152, "Offset mismatch for USmoothWalkingMode::DirectionalAccelerationFactor");
static_assert(offsetof(USmoothWalkingMode, TurningStrength) == 156, "Offset mismatch for USmoothWalkingMode::TurningStrength");
static_assert(offsetof(USmoothWalkingMode, AccelerationSmoothingTime) == 160, "Offset mismatch for USmoothWalkingMode::AccelerationSmoothingTime");
static_assert(offsetof(USmoothWalkingMode, DecelerationSmoothingTime) == 164, "Offset mismatch for USmoothWalkingMode::DecelerationSmoothingTime");
static_assert(offsetof(USmoothWalkingMode, AccelerationSmoothingCompensation) == 168, "Offset mismatch for USmoothWalkingMode::AccelerationSmoothingCompensation");
static_assert(offsetof(USmoothWalkingMode, DecelerationSmoothingCompensation) == 172, "Offset mismatch for USmoothWalkingMode::DecelerationSmoothingCompensation");
static_assert(offsetof(USmoothWalkingMode, VelocityDeadzoneThreshold) == 176, "Offset mismatch for USmoothWalkingMode::VelocityDeadzoneThreshold");
static_assert(offsetof(USmoothWalkingMode, AccelerationDeadzoneThreshold) == 180, "Offset mismatch for USmoothWalkingMode::AccelerationDeadzoneThreshold");
static_assert(offsetof(USmoothWalkingMode, OutsideInfluenceSmoothingTime) == 184, "Offset mismatch for USmoothWalkingMode::OutsideInfluenceSmoothingTime");
static_assert(offsetof(USmoothWalkingMode, FacingSmoothingTime) == 188, "Offset mismatch for USmoothWalkingMode::FacingSmoothingTime");
static_assert(offsetof(USmoothWalkingMode, bSmoothFacingWithDoubleSpring) == 192, "Offset mismatch for USmoothWalkingMode::bSmoothFacingWithDoubleSpring");
static_assert(offsetof(USmoothWalkingMode, FacingDeadzoneThreshold) == 196, "Offset mismatch for USmoothWalkingMode::FacingDeadzoneThreshold");
static_assert(offsetof(USmoothWalkingMode, AngularVelocityDeadzoneThreshold) == 200, "Offset mismatch for USmoothWalkingMode::AngularVelocityDeadzoneThreshold");

// /Script/Mover.StanceSettings
// Kind: Class; super: Object
class UStanceSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float CrouchingMaxAcceleration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CrouchingMaxSpeed; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float CrouchHalfHeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CrouchedEyeHeight; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UStanceSettings, CrouchingMaxAcceleration) == 48, "Offset mismatch for UStanceSettings::CrouchingMaxAcceleration");
static_assert(offsetof(UStanceSettings, CrouchingMaxSpeed) == 52, "Offset mismatch for UStanceSettings::CrouchingMaxSpeed");
static_assert(offsetof(UStanceSettings, CrouchHalfHeight) == 56, "Offset mismatch for UStanceSettings::CrouchHalfHeight");
static_assert(offsetof(UStanceSettings, CrouchedEyeHeight) == 60, "Offset mismatch for UStanceSettings::CrouchedEyeHeight");

// /Script/Mover.SwimmingMode
// Kind: Class; super: BaseMovementMode
class USwimmingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SurfaceSwimmingWaterControlSettings[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USwimmingMode, SurfaceSwimmingWaterControlSettings) == 112, "Offset mismatch for USwimmingMode::SurfaceSwimmingWaterControlSettings");

// /Script/Mover.TurnGeneratorInterface
// Kind: Class; super: Interface
class UTurnGeneratorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Mover.WalkingMode
// Kind: Class; super: BaseMovementMode
class UWalkingMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t FloorCheckPolicy; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    void* TurnGenerator; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWalkingMode, FloorCheckPolicy) == 112, "Offset mismatch for UWalkingMode::FloorCheckPolicy");
static_assert(offsetof(UWalkingMode, TurnGenerator) == 120, "Offset mismatch for UWalkingMode::TurnGenerator");

// /Script/Mover.WaterMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UWaterMovementUtils
{
public:
    std::uint8_t Opaque[1];
};
