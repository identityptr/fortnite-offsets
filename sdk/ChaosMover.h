/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosMover
 */
#pragma once
#include "Basic.h"

// /Script/ChaosMover.AsyncLocalOnlyInstantMovementEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FAsyncLocalOnlyInstantMovementEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosCharacterApplyVelocityEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FChaosCharacterApplyVelocityEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VelocityOrImpulseToApply[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Mode; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosCharacterApplyVelocityEffect, VelocityOrImpulseToApply) == 8, "Offset mismatch for FChaosCharacterApplyVelocityEffect::VelocityOrImpulseToApply");
static_assert(offsetof(FChaosCharacterApplyVelocityEffect, Mode) == 32, "Offset mismatch for FChaosCharacterApplyVelocityEffect::Mode");

// /Script/ChaosMover.ChaosMovementBasis
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMovementBasis
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BasisLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t BasisRotation[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMovementBasis, BasisLocation) == 8, "Offset mismatch for FChaosMovementBasis::BasisLocation");
static_assert(offsetof(FChaosMovementBasis, BasisRotation) == 32, "Offset mismatch for FChaosMovementBasis::BasisRotation");

// /Script/ChaosMover.ChaosMovementSettingsOverrides
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMovementSettingsOverrides
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ModeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float MaxSpeedOverride; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AccelerationOverride; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosMovementSettingsOverrides, ModeName) == 8, "Offset mismatch for FChaosMovementSettingsOverrides::ModeName");
static_assert(offsetof(FChaosMovementSettingsOverrides, MaxSpeedOverride) == 12, "Offset mismatch for FChaosMovementSettingsOverrides::MaxSpeedOverride");
static_assert(offsetof(FChaosMovementSettingsOverrides, AccelerationOverride) == 16, "Offset mismatch for FChaosMovementSettingsOverrides::AccelerationOverride");

// /Script/ChaosMover.ChaosMovementSettingsOverridesRemover
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMovementSettingsOverridesRemover
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName ModeName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChaosMovementSettingsOverridesRemover, ModeName) == 8, "Offset mismatch for FChaosMovementSettingsOverridesRemover::ModeName");

// /Script/ChaosMover.ChaosMoverCrouchInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverCrouchInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bWantsToCrouch; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosMoverCrouchInputs, bWantsToCrouch) == 8, "Offset mismatch for FChaosMoverCrouchInputs::bWantsToCrouch");

// /Script/ChaosMover.ChaosMoverGroundSimState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverGroundSimState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LocalVelocity[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMoverGroundSimState, LocalVelocity) == 8, "Offset mismatch for FChaosMoverGroundSimState::LocalVelocity");

// /Script/ChaosMover.ChaosMoverInstantMovementEffectAction
// Kind: ScriptStruct; super: NetworkPhysicsActionPayload
struct FChaosMoverInstantMovementEffectAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Effect[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMoverInstantMovementEffectAction, Effect) == 32, "Offset mismatch for FChaosMoverInstantMovementEffectAction::Effect");

// /Script/ChaosMover.ChaosMoverLaunchInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverLaunchInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LaunchVelocityOrImpulse[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Mode; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosMoverLaunchInputs, LaunchVelocityOrImpulse) == 8, "Offset mismatch for FChaosMoverLaunchInputs::LaunchVelocityOrImpulse");
static_assert(offsetof(FChaosMoverLaunchInputs, Mode) == 32, "Offset mismatch for FChaosMoverLaunchInputs::Mode");

// /Script/ChaosMover.ChaosMoverLayeredMoveAction
// Kind: ScriptStruct; super: NetworkPhysicsActionPayload
struct FChaosMoverLayeredMoveAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Move[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMoverLayeredMoveAction, Move) == 32, "Offset mismatch for FChaosMoverLayeredMoveAction::Move");

// /Script/ChaosMover.ChaosMoverLayeredMoveInstanceAction
// Kind: ScriptStruct; super: NetworkPhysicsActionPayload
struct FChaosMoverLayeredMoveInstanceAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* MoveLogicClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    std::uint8_t InstancedData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMoverLayeredMoveInstanceAction, MoveLogicClass) == 32, "Offset mismatch for FChaosMoverLayeredMoveInstanceAction::MoveLogicClass");
static_assert(offsetof(FChaosMoverLayeredMoveInstanceAction, InstancedData) == 40, "Offset mismatch for FChaosMoverLayeredMoveInstanceAction::InstancedData");

// /Script/ChaosMover.ChaosMoverPredictedTrajectoryData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverPredictedTrajectoryData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BaseTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> Deltas; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosMoverPredictedTrajectoryData, BaseTransform) == 16, "Offset mismatch for FChaosMoverPredictedTrajectoryData::BaseTransform");
static_assert(offsetof(FChaosMoverPredictedTrajectoryData, Deltas) == 112, "Offset mismatch for FChaosMoverPredictedTrajectoryData::Deltas");

// /Script/ChaosMover.ChaosMoverRequestedMoveInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverRequestedMoveInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RequestedVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bForceMaxSpeed; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAcceleration; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosMoverRequestedMoveInputs, RequestedVelocity) == 8, "Offset mismatch for FChaosMoverRequestedMoveInputs::RequestedVelocity");
static_assert(offsetof(FChaosMoverRequestedMoveInputs, bForceMaxSpeed) == 32, "Offset mismatch for FChaosMoverRequestedMoveInputs::bForceMaxSpeed");
static_assert(offsetof(FChaosMoverRequestedMoveInputs, bUseAcceleration) == 33, "Offset mismatch for FChaosMoverRequestedMoveInputs::bUseAcceleration");

// /Script/ChaosMover.ChaosMoverSimulationDefaultInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverSimulationDefaultInputs
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t UpDir[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Gravity[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsGeneratingInputsLocally; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRemotelyControlled; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x26]; // 0x00EA
    float PhysicsObjectGravity; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PawnCollisionHalfHeight; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PawnCollisionRadius; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    std::uint8_t PrimaryVisualComponentRelativeTransform[0x60]; // 0x0120 (Size: 0x60, Type: StructProperty)
    std::uint8_t CollisionChannel; // 0x0180 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FChaosMoverSimulationDefaultInputs, UpDir) == 184, "Offset mismatch for FChaosMoverSimulationDefaultInputs::UpDir");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, Gravity) == 208, "Offset mismatch for FChaosMoverSimulationDefaultInputs::Gravity");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, bIsGeneratingInputsLocally) == 232, "Offset mismatch for FChaosMoverSimulationDefaultInputs::bIsGeneratingInputsLocally");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, bIsRemotelyControlled) == 233, "Offset mismatch for FChaosMoverSimulationDefaultInputs::bIsRemotelyControlled");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, PhysicsObjectGravity) == 272, "Offset mismatch for FChaosMoverSimulationDefaultInputs::PhysicsObjectGravity");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, PawnCollisionHalfHeight) == 276, "Offset mismatch for FChaosMoverSimulationDefaultInputs::PawnCollisionHalfHeight");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, PawnCollisionRadius) == 280, "Offset mismatch for FChaosMoverSimulationDefaultInputs::PawnCollisionRadius");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, PrimaryVisualComponentRelativeTransform) == 288, "Offset mismatch for FChaosMoverSimulationDefaultInputs::PrimaryVisualComponentRelativeTransform");
static_assert(offsetof(FChaosMoverSimulationDefaultInputs, CollisionChannel) == 384, "Offset mismatch for FChaosMoverSimulationDefaultInputs::CollisionChannel");

// /Script/ChaosMover.ChaosMoverSimulationEventsDebugData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverSimulationEventsDebugData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Events; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosMoverSimulationEventsDebugData, Events) == 8, "Offset mismatch for FChaosMoverSimulationEventsDebugData::Events");

// /Script/ChaosMover.ChaosMoverTimeStepDebugData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverTimeStepDebugData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsResimulating; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFirstResimFrame; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t TimeStep[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosMoverTimeStepDebugData, bIsResimulating) == 8, "Offset mismatch for FChaosMoverTimeStepDebugData::bIsResimulating");
static_assert(offsetof(FChaosMoverTimeStepDebugData, bIsFirstResimFrame) == 9, "Offset mismatch for FChaosMoverTimeStepDebugData::bIsFirstResimFrame");
static_assert(offsetof(FChaosMoverTimeStepDebugData, TimeStep) == 16, "Offset mismatch for FChaosMoverTimeStepDebugData::TimeStep");

// /Script/ChaosMover.ChaosMoverTrajectoryPredictionInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosMoverTrajectoryPredictionInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t NumPredictionSteps; // 0x0008 (Size: 0x4, Type: IntProperty)
    float SecondsPerStep; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosMoverTrajectoryPredictionInputs, NumPredictionSteps) == 8, "Offset mismatch for FChaosMoverTrajectoryPredictionInputs::NumPredictionSteps");
static_assert(offsetof(FChaosMoverTrajectoryPredictionInputs, SecondsPerStep) == 12, "Offset mismatch for FChaosMoverTrajectoryPredictionInputs::SecondsPerStep");

// /Script/ChaosMover.ChaosMutablePathedMovementProperties
// Kind: ScriptStruct; super: none
struct FChaosMutablePathedMovementProperties
{
public:
    std::uint8_t bWantsToPlay; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsReversePlayback; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsLoopingPlayback; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsOneWayPlayback; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosMutablePathedMovementProperties, bWantsToPlay) == 0, "Offset mismatch for FChaosMutablePathedMovementProperties::bWantsToPlay");
static_assert(offsetof(FChaosMutablePathedMovementProperties, bWantsReversePlayback) == 1, "Offset mismatch for FChaosMutablePathedMovementProperties::bWantsReversePlayback");
static_assert(offsetof(FChaosMutablePathedMovementProperties, bWantsLoopingPlayback) == 2, "Offset mismatch for FChaosMutablePathedMovementProperties::bWantsLoopingPlayback");
static_assert(offsetof(FChaosMutablePathedMovementProperties, bWantsOneWayPlayback) == 3, "Offset mismatch for FChaosMutablePathedMovementProperties::bWantsOneWayPlayback");

// /Script/ChaosMover.ChaosNetInstantMovementEffect
// Kind: ScriptStruct; super: none
struct FChaosNetInstantMovementEffect
{
public:
    std::int32_t IssuanceServerFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ExecutionServerFrame; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t UniqueID; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShouldRollBack; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t Effect[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosNetInstantMovementEffect, IssuanceServerFrame) == 0, "Offset mismatch for FChaosNetInstantMovementEffect::IssuanceServerFrame");
static_assert(offsetof(FChaosNetInstantMovementEffect, ExecutionServerFrame) == 4, "Offset mismatch for FChaosNetInstantMovementEffect::ExecutionServerFrame");
static_assert(offsetof(FChaosNetInstantMovementEffect, UniqueID) == 8, "Offset mismatch for FChaosNetInstantMovementEffect::UniqueID");
static_assert(offsetof(FChaosNetInstantMovementEffect, bShouldRollBack) == 9, "Offset mismatch for FChaosNetInstantMovementEffect::bShouldRollBack");
static_assert(offsetof(FChaosNetInstantMovementEffect, Effect) == 16, "Offset mismatch for FChaosNetInstantMovementEffect::Effect");

// /Script/ChaosMover.ChaosNetInstantMovementEffectsQueue
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosNetInstantMovementEffectsQueue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Effects; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosNetInstantMovementEffectsQueue, Effects) == 8, "Offset mismatch for FChaosNetInstantMovementEffectsQueue::Effects");

// /Script/ChaosMover.ChaosNetLayeredMove
// Kind: ScriptStruct; super: none
struct FChaosNetLayeredMove
{
public:
    std::int32_t IssuanceServerFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ExecutionServerFrame; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t UniqueID; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShouldRollBack; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t Move[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosNetLayeredMove, IssuanceServerFrame) == 0, "Offset mismatch for FChaosNetLayeredMove::IssuanceServerFrame");
static_assert(offsetof(FChaosNetLayeredMove, ExecutionServerFrame) == 4, "Offset mismatch for FChaosNetLayeredMove::ExecutionServerFrame");
static_assert(offsetof(FChaosNetLayeredMove, UniqueID) == 8, "Offset mismatch for FChaosNetLayeredMove::UniqueID");
static_assert(offsetof(FChaosNetLayeredMove, bShouldRollBack) == 9, "Offset mismatch for FChaosNetLayeredMove::bShouldRollBack");
static_assert(offsetof(FChaosNetLayeredMove, Move) == 16, "Offset mismatch for FChaosNetLayeredMove::Move");

// /Script/ChaosMover.ChaosNetLayeredMoveInstance
// Kind: ScriptStruct; super: none
struct FChaosNetLayeredMoveInstance
{
public:
    std::int32_t IssuanceServerFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ExecutionServerFrame; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t UniqueID; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShouldRollBack; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    void* MoveLogicClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FChaosNetLayeredMoveInstance, IssuanceServerFrame) == 0, "Offset mismatch for FChaosNetLayeredMoveInstance::IssuanceServerFrame");
static_assert(offsetof(FChaosNetLayeredMoveInstance, ExecutionServerFrame) == 4, "Offset mismatch for FChaosNetLayeredMoveInstance::ExecutionServerFrame");
static_assert(offsetof(FChaosNetLayeredMoveInstance, UniqueID) == 8, "Offset mismatch for FChaosNetLayeredMoveInstance::UniqueID");
static_assert(offsetof(FChaosNetLayeredMoveInstance, bShouldRollBack) == 9, "Offset mismatch for FChaosNetLayeredMoveInstance::bShouldRollBack");
static_assert(offsetof(FChaosNetLayeredMoveInstance, MoveLogicClass) == 16, "Offset mismatch for FChaosNetLayeredMoveInstance::MoveLogicClass");

// /Script/ChaosMover.ChaosNetLayeredMoveInstancesQueue
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosNetLayeredMoveInstancesQueue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Moves; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosNetLayeredMoveInstancesQueue, Moves) == 8, "Offset mismatch for FChaosNetLayeredMoveInstancesQueue::Moves");

// /Script/ChaosMover.ChaosNetLayeredMovesQueue
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosNetLayeredMovesQueue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Moves; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosNetLayeredMovesQueue, Moves) == 8, "Offset mismatch for FChaosNetLayeredMovesQueue::Moves");

// /Script/ChaosMover.ChaosPathedMovementInputs
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosPathedMovementInputs
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MovementStartFrame; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LastChangeFrame; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t Props[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosPathedMovementInputs, MovementStartFrame) == 8, "Offset mismatch for FChaosPathedMovementInputs::MovementStartFrame");
static_assert(offsetof(FChaosPathedMovementInputs, LastChangeFrame) == 12, "Offset mismatch for FChaosPathedMovementInputs::LastChangeFrame");
static_assert(offsetof(FChaosPathedMovementInputs, Props) == 16, "Offset mismatch for FChaosPathedMovementInputs::Props");

// /Script/ChaosMover.ChaosPathedMovementModeDebugData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosPathedMovementModeDebugData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t PreviousServerFrame; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ServerFrame; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t PreSimMoveState[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t PostSimMoveState[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    std::uint8_t PreviousWorldTranslation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousWorldRotation[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t NewWorldTranslation[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t NewWorldRotation[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPlaybackStartedThisFrame; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackStoppedThisFrame; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackBouncedThisFrame; // 0x00D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackReachedEndThisFrame; // 0x00D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackReverseChangedThisFrame; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackLoopingChangedThisFrame; // 0x00D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackOneWayChangedThisFrame; // 0x00D6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosPathedMovementModeDebugData, PreviousServerFrame) == 8, "Offset mismatch for FChaosPathedMovementModeDebugData::PreviousServerFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, ServerFrame) == 12, "Offset mismatch for FChaosPathedMovementModeDebugData::ServerFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, PreSimMoveState) == 16, "Offset mismatch for FChaosPathedMovementModeDebugData::PreSimMoveState");
static_assert(offsetof(FChaosPathedMovementModeDebugData, PostSimMoveState) == 64, "Offset mismatch for FChaosPathedMovementModeDebugData::PostSimMoveState");
static_assert(offsetof(FChaosPathedMovementModeDebugData, PreviousWorldTranslation) == 112, "Offset mismatch for FChaosPathedMovementModeDebugData::PreviousWorldTranslation");
static_assert(offsetof(FChaosPathedMovementModeDebugData, PreviousWorldRotation) == 136, "Offset mismatch for FChaosPathedMovementModeDebugData::PreviousWorldRotation");
static_assert(offsetof(FChaosPathedMovementModeDebugData, NewWorldTranslation) == 160, "Offset mismatch for FChaosPathedMovementModeDebugData::NewWorldTranslation");
static_assert(offsetof(FChaosPathedMovementModeDebugData, NewWorldRotation) == 184, "Offset mismatch for FChaosPathedMovementModeDebugData::NewWorldRotation");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackStartedThisFrame) == 208, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackStartedThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackStoppedThisFrame) == 209, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackStoppedThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackBouncedThisFrame) == 210, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackBouncedThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackReachedEndThisFrame) == 211, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackReachedEndThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackReverseChangedThisFrame) == 212, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackReverseChangedThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackLoopingChangedThisFrame) == 213, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackLoopingChangedThisFrame");
static_assert(offsetof(FChaosPathedMovementModeDebugData, bPlaybackOneWayChangedThisFrame) == 214, "Offset mismatch for FChaosPathedMovementModeDebugData::bPlaybackOneWayChangedThisFrame");

// /Script/ChaosMover.ChaosPathedMovementState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosPathedMovementState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float LastChangePathProgress; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t LastChangeTime[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t LatestMovementStartFrame; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPathProgressionIncreasing; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasFinished; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PropertiesInEffect[0x1]; // 0x0026 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosPathedMovementState, LastChangePathProgress) == 8, "Offset mismatch for FChaosPathedMovementState::LastChangePathProgress");
static_assert(offsetof(FChaosPathedMovementState, LastChangeTime) == 16, "Offset mismatch for FChaosPathedMovementState::LastChangeTime");
static_assert(offsetof(FChaosPathedMovementState, LatestMovementStartFrame) == 32, "Offset mismatch for FChaosPathedMovementState::LatestMovementStartFrame");
static_assert(offsetof(FChaosPathedMovementState, bIsPathProgressionIncreasing) == 36, "Offset mismatch for FChaosPathedMovementState::bIsPathProgressionIncreasing");
static_assert(offsetof(FChaosPathedMovementState, bHasFinished) == 37, "Offset mismatch for FChaosPathedMovementState::bHasFinished");
static_assert(offsetof(FChaosPathedMovementState, PropertiesInEffect) == 38, "Offset mismatch for FChaosPathedMovementState::PropertiesInEffect");

// /Script/ChaosMover.ChaosPointMovementPathPoint
// Kind: ScriptStruct; super: none
struct FChaosPointMovementPathPoint
{
public:
    std::uint8_t Basis; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationBasis; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t Rotation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosPointMovementPathPoint, Basis) == 0, "Offset mismatch for FChaosPointMovementPathPoint::Basis");
static_assert(offsetof(FChaosPointMovementPathPoint, Location) == 8, "Offset mismatch for FChaosPointMovementPathPoint::Location");
static_assert(offsetof(FChaosPointMovementPathPoint, RotationBasis) == 32, "Offset mismatch for FChaosPointMovementPathPoint::RotationBasis");
static_assert(offsetof(FChaosPointMovementPathPoint, Rotation) == 40, "Offset mismatch for FChaosPointMovementPathPoint::Rotation");

// /Script/ChaosMover.ChaosScheduledInstantMovementEffect
// Kind: ScriptStruct; super: none
struct FChaosScheduledInstantMovementEffect
{
public:
    std::uint8_t bShouldRollBack; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ScheduledEffect[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosScheduledInstantMovementEffect, bShouldRollBack) == 0, "Offset mismatch for FChaosScheduledInstantMovementEffect::bShouldRollBack");
static_assert(offsetof(FChaosScheduledInstantMovementEffect, ScheduledEffect) == 8, "Offset mismatch for FChaosScheduledInstantMovementEffect::ScheduledEffect");

// /Script/ChaosMover.ChaosScheduledLayeredMove
// Kind: ScriptStruct; super: none
struct FChaosScheduledLayeredMove
{
public:
    std::uint8_t bShouldRollBack; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ScheduledLayeredMove[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosScheduledLayeredMove, bShouldRollBack) == 0, "Offset mismatch for FChaosScheduledLayeredMove::bShouldRollBack");
static_assert(offsetof(FChaosScheduledLayeredMove, ScheduledLayeredMove) == 8, "Offset mismatch for FChaosScheduledLayeredMove::ScheduledLayeredMove");

// /Script/ChaosMover.ChaosSmoothWalkingState
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosSmoothWalkingState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SpringVelocity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpringAcceleration[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t IntermediateVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t IntermediateFacing[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t IntermediateAngularVelocity[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosSmoothWalkingState, SpringVelocity) == 8, "Offset mismatch for FChaosSmoothWalkingState::SpringVelocity");
static_assert(offsetof(FChaosSmoothWalkingState, SpringAcceleration) == 32, "Offset mismatch for FChaosSmoothWalkingState::SpringAcceleration");
static_assert(offsetof(FChaosSmoothWalkingState, IntermediateVelocity) == 56, "Offset mismatch for FChaosSmoothWalkingState::IntermediateVelocity");
static_assert(offsetof(FChaosSmoothWalkingState, IntermediateFacing) == 80, "Offset mismatch for FChaosSmoothWalkingState::IntermediateFacing");
static_assert(offsetof(FChaosSmoothWalkingState, IntermediateAngularVelocity) == 112, "Offset mismatch for FChaosSmoothWalkingState::IntermediateAngularVelocity");

// /Script/ChaosMover.ChaosSplinePathPatternPointData
// Kind: ScriptStruct; super: none
struct FChaosSplinePathPatternPointData
{
public:
    float SplinePointKey; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosSplinePathPatternPointData, SplinePointKey) == 0, "Offset mismatch for FChaosSplinePathPatternPointData::SplinePointKey");

// /Script/ChaosMover.ChaosStanceModifier
// Kind: ScriptStruct; super: MovementModifierBase
struct FChaosStanceModifier
{
public:
    std::uint8_t Pad_0000[0x21]; // 0x0000
    std::uint8_t bCancelOnModeChange; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0022
    float ModifiedCapsuleHalfHeight; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float ModifiedCapsuleRadius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float ModifiedCapsuleGroundClearance; // 0x002C (Size: 0x4, Type: FloatProperty)
    float DefaultCapsuleHalfHeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DefaultCapsuleRadius; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DefaultCapsuleGroundClearance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxSpeedOverride[0x8]; // 0x003C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t AccelerationOverride[0x1]; // 0x0044 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FChaosStanceModifier, bCancelOnModeChange) == 33, "Offset mismatch for FChaosStanceModifier::bCancelOnModeChange");
static_assert(offsetof(FChaosStanceModifier, ModifiedCapsuleHalfHeight) == 36, "Offset mismatch for FChaosStanceModifier::ModifiedCapsuleHalfHeight");
static_assert(offsetof(FChaosStanceModifier, ModifiedCapsuleRadius) == 40, "Offset mismatch for FChaosStanceModifier::ModifiedCapsuleRadius");
static_assert(offsetof(FChaosStanceModifier, ModifiedCapsuleGroundClearance) == 44, "Offset mismatch for FChaosStanceModifier::ModifiedCapsuleGroundClearance");
static_assert(offsetof(FChaosStanceModifier, DefaultCapsuleHalfHeight) == 48, "Offset mismatch for FChaosStanceModifier::DefaultCapsuleHalfHeight");
static_assert(offsetof(FChaosStanceModifier, DefaultCapsuleRadius) == 52, "Offset mismatch for FChaosStanceModifier::DefaultCapsuleRadius");
static_assert(offsetof(FChaosStanceModifier, DefaultCapsuleGroundClearance) == 56, "Offset mismatch for FChaosStanceModifier::DefaultCapsuleGroundClearance");
static_assert(offsetof(FChaosStanceModifier, MaxSpeedOverride) == 60, "Offset mismatch for FChaosStanceModifier::MaxSpeedOverride");
static_assert(offsetof(FChaosStanceModifier, AccelerationOverride) == 68, "Offset mismatch for FChaosStanceModifier::AccelerationOverride");

// /Script/ChaosMover.ChaosWaterResultData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FChaosWaterResultData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t WaterResult[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosWaterResultData, WaterResult) == 8, "Offset mismatch for FChaosWaterResultData::WaterResult");

// /Script/ChaosMover.DebugTeleportToInstantMovementEffect
// Kind: ScriptStruct; super: InstantMovementEffect
struct FDebugTeleportToInstantMovementEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.NetworkChaosMoverInputData
// Kind: ScriptStruct; super: NetworkPhysicsData
struct FNetworkChaosMoverInputData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InputCmdContext[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNetworkChaosMoverInputData, InputCmdContext) == 48, "Offset mismatch for FNetworkChaosMoverInputData::InputCmdContext");

// /Script/ChaosMover.NetworkChaosMoverStateData
// Kind: ScriptStruct; super: NetworkPhysicsData
struct FNetworkChaosMoverStateData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncState[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNetworkChaosMoverStateData, SyncState) == 48, "Offset mismatch for FNetworkChaosMoverStateData::SyncState");

// /Script/ChaosMover.NetworkPhysicsDebugData
// Kind: ScriptStruct; super: MoverDataStructBase
struct FNetworkPhysicsDebugData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsLocallyControlled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PhysicsReplicationMode; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    std::int32_t NetworkPhysicsTickOffset; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t LatestReceivedStateFrame; // 0x0010 (Size: 0x4, Type: IntProperty)
    float ForwardPredictionTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CurrentSimProxyInputDecayAtRuntime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float CurrentInputDecay; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNetworkPhysicsDebugData, bIsLocallyControlled) == 8, "Offset mismatch for FNetworkPhysicsDebugData::bIsLocallyControlled");
static_assert(offsetof(FNetworkPhysicsDebugData, PhysicsReplicationMode) == 9, "Offset mismatch for FNetworkPhysicsDebugData::PhysicsReplicationMode");
static_assert(offsetof(FNetworkPhysicsDebugData, NetworkPhysicsTickOffset) == 12, "Offset mismatch for FNetworkPhysicsDebugData::NetworkPhysicsTickOffset");
static_assert(offsetof(FNetworkPhysicsDebugData, LatestReceivedStateFrame) == 16, "Offset mismatch for FNetworkPhysicsDebugData::LatestReceivedStateFrame");
static_assert(offsetof(FNetworkPhysicsDebugData, ForwardPredictionTime) == 20, "Offset mismatch for FNetworkPhysicsDebugData::ForwardPredictionTime");
static_assert(offsetof(FNetworkPhysicsDebugData, CurrentSimProxyInputDecayAtRuntime) == 24, "Offset mismatch for FNetworkPhysicsDebugData::CurrentSimProxyInputDecayAtRuntime");
static_assert(offsetof(FNetworkPhysicsDebugData, CurrentInputDecay) == 28, "Offset mismatch for FNetworkPhysicsDebugData::CurrentInputDecay");

// /Script/ChaosMover.PathedMovementBouncedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementBouncedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementBouncedEventData, Context) == 72, "Offset mismatch for FPathedMovementBouncedEventData::Context");
static_assert(offsetof(FPathedMovementBouncedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementBouncedEventData::bReEmitOnResim");

// /Script/ChaosMover.PathedMovementInReverseChangedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementInReverseChangedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementInReverseChangedEventData, Context) == 72, "Offset mismatch for FPathedMovementInReverseChangedEventData::Context");
static_assert(offsetof(FPathedMovementInReverseChangedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementInReverseChangedEventData::bReEmitOnResim");

// /Script/ChaosMover.PathedMovementLoopingChangedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementLoopingChangedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementLoopingChangedEventData, Context) == 72, "Offset mismatch for FPathedMovementLoopingChangedEventData::Context");
static_assert(offsetof(FPathedMovementLoopingChangedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementLoopingChangedEventData::bReEmitOnResim");

// /Script/ChaosMover.PathedMovementOneWayChangedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementOneWayChangedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementOneWayChangedEventData, Context) == 72, "Offset mismatch for FPathedMovementOneWayChangedEventData::Context");
static_assert(offsetof(FPathedMovementOneWayChangedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementOneWayChangedEventData::bReEmitOnResim");

// /Script/ChaosMover.PathedMovementStartedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementStartedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementStartedEventData, Context) == 72, "Offset mismatch for FPathedMovementStartedEventData::Context");
static_assert(offsetof(FPathedMovementStartedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementStartedEventData::bReEmitOnResim");

// /Script/ChaosMover.PathedMovementStoppedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FPathedMovementStoppedEventData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Context[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReEmitOnResim; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPathedMovementStoppedEventData, Context) == 72, "Offset mismatch for FPathedMovementStoppedEventData::Context");
static_assert(offsetof(FPathedMovementStoppedEventData, bReEmitOnResim) == 88, "Offset mismatch for FPathedMovementStoppedEventData::bReEmitOnResim");

// /Script/ChaosMover.RequestedMoveParams
// Kind: ScriptStruct; super: none
struct FRequestedMoveParams
{
public:
    std::uint8_t WorldToGravityQuat[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t PriorOrientation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PriorVelocity[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequestedVelocity[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroundNormal[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float TurningRate; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x008C (Size: 0x4, Type: FloatProperty)
    float DeltaSeconds; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRequestedMoveWithMaxSpeed; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldComputeAcceleration; // 0x0095 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRequestedMoveParams, WorldToGravityQuat) == 0, "Offset mismatch for FRequestedMoveParams::WorldToGravityQuat");
static_assert(offsetof(FRequestedMoveParams, PriorOrientation) == 32, "Offset mismatch for FRequestedMoveParams::PriorOrientation");
static_assert(offsetof(FRequestedMoveParams, PriorVelocity) == 56, "Offset mismatch for FRequestedMoveParams::PriorVelocity");
static_assert(offsetof(FRequestedMoveParams, RequestedVelocity) == 80, "Offset mismatch for FRequestedMoveParams::RequestedVelocity");
static_assert(offsetof(FRequestedMoveParams, GroundNormal) == 104, "Offset mismatch for FRequestedMoveParams::GroundNormal");
static_assert(offsetof(FRequestedMoveParams, TurningRate) == 128, "Offset mismatch for FRequestedMoveParams::TurningRate");
static_assert(offsetof(FRequestedMoveParams, MaxSpeed) == 132, "Offset mismatch for FRequestedMoveParams::MaxSpeed");
static_assert(offsetof(FRequestedMoveParams, Acceleration) == 136, "Offset mismatch for FRequestedMoveParams::Acceleration");
static_assert(offsetof(FRequestedMoveParams, Deceleration) == 140, "Offset mismatch for FRequestedMoveParams::Deceleration");
static_assert(offsetof(FRequestedMoveParams, DeltaSeconds) == 144, "Offset mismatch for FRequestedMoveParams::DeltaSeconds");
static_assert(offsetof(FRequestedMoveParams, bRequestedMoveWithMaxSpeed) == 148, "Offset mismatch for FRequestedMoveParams::bRequestedMoveWithMaxSpeed");
static_assert(offsetof(FRequestedMoveParams, bShouldComputeAcceleration) == 149, "Offset mismatch for FRequestedMoveParams::bShouldComputeAcceleration");

// /Script/ChaosMover.StanceModifiedEventData
// Kind: ScriptStruct; super: MoverSimulationEventData
struct FStanceModifiedEventData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t OldStance; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t NewStance; // 0x0061 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStanceModifiedEventData, OldStance) == 96, "Offset mismatch for FStanceModifiedEventData::OldStance");
static_assert(offsetof(FStanceModifiedEventData, NewStance) == 97, "Offset mismatch for FStanceModifiedEventData::NewStance");

// /Script/ChaosMover.SwimmingSettings
// Kind: ScriptStruct; super: none
struct FSwimmingSettings
{
public:
    float MaxSpeedUp; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedDown; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityDepthForMax; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WaterVelocityMinMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxWaterForce; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float WaterForceMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float WaterForceSecondMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BobbingMaxForce; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BobbingIdealDepthTolerance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionDown; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragDown; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionDownSubmerged; // 0x002C (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragDownSubmerged; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionUp; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragUp; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float BobbingFrictionMultiplier; // 0x003C (Size: 0x4, Type: FloatProperty)
    float BobbingExpDragMultiplier; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSwimmingSettings, MaxSpeedUp) == 0, "Offset mismatch for FSwimmingSettings::MaxSpeedUp");
static_assert(offsetof(FSwimmingSettings, MaxSpeedDown) == 4, "Offset mismatch for FSwimmingSettings::MaxSpeedDown");
static_assert(offsetof(FSwimmingSettings, WaterVelocityDepthForMax) == 8, "Offset mismatch for FSwimmingSettings::WaterVelocityDepthForMax");
static_assert(offsetof(FSwimmingSettings, WaterVelocityMinMultiplier) == 12, "Offset mismatch for FSwimmingSettings::WaterVelocityMinMultiplier");
static_assert(offsetof(FSwimmingSettings, MaxWaterForce) == 16, "Offset mismatch for FSwimmingSettings::MaxWaterForce");
static_assert(offsetof(FSwimmingSettings, WaterForceMultiplier) == 20, "Offset mismatch for FSwimmingSettings::WaterForceMultiplier");
static_assert(offsetof(FSwimmingSettings, WaterForceSecondMultiplier) == 24, "Offset mismatch for FSwimmingSettings::WaterForceSecondMultiplier");
static_assert(offsetof(FSwimmingSettings, BobbingMaxForce) == 28, "Offset mismatch for FSwimmingSettings::BobbingMaxForce");
static_assert(offsetof(FSwimmingSettings, BobbingIdealDepthTolerance) == 32, "Offset mismatch for FSwimmingSettings::BobbingIdealDepthTolerance");
static_assert(offsetof(FSwimmingSettings, BobbingFrictionDown) == 36, "Offset mismatch for FSwimmingSettings::BobbingFrictionDown");
static_assert(offsetof(FSwimmingSettings, BobbingExpDragDown) == 40, "Offset mismatch for FSwimmingSettings::BobbingExpDragDown");
static_assert(offsetof(FSwimmingSettings, BobbingFrictionDownSubmerged) == 44, "Offset mismatch for FSwimmingSettings::BobbingFrictionDownSubmerged");
static_assert(offsetof(FSwimmingSettings, BobbingExpDragDownSubmerged) == 48, "Offset mismatch for FSwimmingSettings::BobbingExpDragDownSubmerged");
static_assert(offsetof(FSwimmingSettings, BobbingFrictionUp) == 52, "Offset mismatch for FSwimmingSettings::BobbingFrictionUp");
static_assert(offsetof(FSwimmingSettings, BobbingExpDragUp) == 56, "Offset mismatch for FSwimmingSettings::BobbingExpDragUp");
static_assert(offsetof(FSwimmingSettings, BobbingFrictionMultiplier) == 60, "Offset mismatch for FSwimmingSettings::BobbingFrictionMultiplier");
static_assert(offsetof(FSwimmingSettings, BobbingExpDragMultiplier) == 64, "Offset mismatch for FSwimmingSettings::BobbingExpDragMultiplier");

// /Script/ChaosMover.ChaosCharacterAirExecutor
// Kind: Class; super: ChaosMoveExecutorBase
class UChaosCharacterAirExecutor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float SwingTorqueLimit; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldCharacterRemainUpright; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint8_t TargetHeightOverride[0x8]; // 0x0050 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t QueryRadiusOverride[0x8]; // 0x0058 (Size: 0x8, Type: OptionalProperty)
    float FloorQueryRadiusFraction; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float FloorQueryRadiusOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosCharacterAirExecutor, SwingTorqueLimit) == 72, "Offset mismatch for UChaosCharacterAirExecutor::SwingTorqueLimit");
static_assert(offsetof(UChaosCharacterAirExecutor, bShouldCharacterRemainUpright) == 76, "Offset mismatch for UChaosCharacterAirExecutor::bShouldCharacterRemainUpright");
static_assert(offsetof(UChaosCharacterAirExecutor, TargetHeightOverride) == 80, "Offset mismatch for UChaosCharacterAirExecutor::TargetHeightOverride");
static_assert(offsetof(UChaosCharacterAirExecutor, QueryRadiusOverride) == 88, "Offset mismatch for UChaosCharacterAirExecutor::QueryRadiusOverride");
static_assert(offsetof(UChaosCharacterAirExecutor, FloorQueryRadiusFraction) == 96, "Offset mismatch for UChaosCharacterAirExecutor::FloorQueryRadiusFraction");
static_assert(offsetof(UChaosCharacterAirExecutor, FloorQueryRadiusOffset) == 100, "Offset mismatch for UChaosCharacterAirExecutor::FloorQueryRadiusOffset");

// /Script/ChaosMover.ChaosCharacterAirSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosCharacterAirSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float AirControlPercentage; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FallingDeceleration; // 0x004C (Size: 0x4, Type: FloatProperty)
    float FallingLateralFriction; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float FallingAngularFriction; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float OverTerminalSpeedFallingDeceleration; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TerminalMovementPlaneSpeed; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldClampTerminalVerticalSpeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    float VerticalFallingDeceleration; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float TerminalVerticalSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlwaysClampRequestedVelocityToMaxSpeed; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyAngularVelocityToTarget; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreGravity; // 0x006E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosCharacterAirSource, AirControlPercentage) == 72, "Offset mismatch for UChaosCharacterAirSource::AirControlPercentage");
static_assert(offsetof(UChaosCharacterAirSource, FallingDeceleration) == 76, "Offset mismatch for UChaosCharacterAirSource::FallingDeceleration");
static_assert(offsetof(UChaosCharacterAirSource, FallingLateralFriction) == 80, "Offset mismatch for UChaosCharacterAirSource::FallingLateralFriction");
static_assert(offsetof(UChaosCharacterAirSource, FallingAngularFriction) == 84, "Offset mismatch for UChaosCharacterAirSource::FallingAngularFriction");
static_assert(offsetof(UChaosCharacterAirSource, OverTerminalSpeedFallingDeceleration) == 88, "Offset mismatch for UChaosCharacterAirSource::OverTerminalSpeedFallingDeceleration");
static_assert(offsetof(UChaosCharacterAirSource, TerminalMovementPlaneSpeed) == 92, "Offset mismatch for UChaosCharacterAirSource::TerminalMovementPlaneSpeed");
static_assert(offsetof(UChaosCharacterAirSource, bShouldClampTerminalVerticalSpeed) == 96, "Offset mismatch for UChaosCharacterAirSource::bShouldClampTerminalVerticalSpeed");
static_assert(offsetof(UChaosCharacterAirSource, VerticalFallingDeceleration) == 100, "Offset mismatch for UChaosCharacterAirSource::VerticalFallingDeceleration");
static_assert(offsetof(UChaosCharacterAirSource, TerminalVerticalSpeed) == 104, "Offset mismatch for UChaosCharacterAirSource::TerminalVerticalSpeed");
static_assert(offsetof(UChaosCharacterAirSource, bAlwaysClampRequestedVelocityToMaxSpeed) == 108, "Offset mismatch for UChaosCharacterAirSource::bAlwaysClampRequestedVelocityToMaxSpeed");
static_assert(offsetof(UChaosCharacterAirSource, bShouldApplyAngularVelocityToTarget) == 109, "Offset mismatch for UChaosCharacterAirSource::bShouldApplyAngularVelocityToTarget");
static_assert(offsetof(UChaosCharacterAirSource, bIgnoreGravity) == 110, "Offset mismatch for UChaosCharacterAirSource::bIgnoreGravity");

// /Script/ChaosMover.ChaosCharacterConstraintInterface
// Kind: Class; super: Interface
class UChaosCharacterConstraintInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosCharacterCrouchCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterCrouchCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bCancelOnModeChange; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t CapsuleHalfHeight[0x8]; // 0x004C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t CapsuleRadius[0x8]; // 0x0054 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t CapsuleGroundClearance[0x8]; // 0x005C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t MaxSpeed[0x8]; // 0x0064 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t Acceleration[0x8]; // 0x006C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t TransitionToCrouchedMode[0x4]; // 0x0074 (Size: 0x4, Type: OptionalProperty)
    std::uint8_t TransitionToUncrouchedMode[0x1]; // 0x0078 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UChaosCharacterCrouchCheck, bCancelOnModeChange) == 72, "Offset mismatch for UChaosCharacterCrouchCheck::bCancelOnModeChange");
static_assert(offsetof(UChaosCharacterCrouchCheck, CapsuleHalfHeight) == 76, "Offset mismatch for UChaosCharacterCrouchCheck::CapsuleHalfHeight");
static_assert(offsetof(UChaosCharacterCrouchCheck, CapsuleRadius) == 84, "Offset mismatch for UChaosCharacterCrouchCheck::CapsuleRadius");
static_assert(offsetof(UChaosCharacterCrouchCheck, CapsuleGroundClearance) == 92, "Offset mismatch for UChaosCharacterCrouchCheck::CapsuleGroundClearance");
static_assert(offsetof(UChaosCharacterCrouchCheck, MaxSpeed) == 100, "Offset mismatch for UChaosCharacterCrouchCheck::MaxSpeed");
static_assert(offsetof(UChaosCharacterCrouchCheck, Acceleration) == 108, "Offset mismatch for UChaosCharacterCrouchCheck::Acceleration");
static_assert(offsetof(UChaosCharacterCrouchCheck, TransitionToCrouchedMode) == 116, "Offset mismatch for UChaosCharacterCrouchCheck::TransitionToCrouchedMode");
static_assert(offsetof(UChaosCharacterCrouchCheck, TransitionToUncrouchedMode) == 120, "Offset mismatch for UChaosCharacterCrouchCheck::TransitionToUncrouchedMode");

// /Script/ChaosMover.ChaosCharacterFallingCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterFallingCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t TransitionToFallingMode[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    float MaxUnsupportedTimeBeforeFalling; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosCharacterFallingCheck, TransitionToFallingMode) == 72, "Offset mismatch for UChaosCharacterFallingCheck::TransitionToFallingMode");
static_assert(offsetof(UChaosCharacterFallingCheck, MaxUnsupportedTimeBeforeFalling) == 76, "Offset mismatch for UChaosCharacterFallingCheck::MaxUnsupportedTimeBeforeFalling");

// /Script/ChaosMover.ChaosCharacterFloorInterface
// Kind: Class; super: Interface
class UChaosCharacterFloorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosCharacterFlyingSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosCharacterFlyingSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosCharacterJumpCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterJumpCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float JumpUpwardsSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FractionalGroundReactionImpulse; // 0x004C (Size: 0x4, Type: FloatProperty)
    FName TransitionToMode; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosCharacterJumpCheck, JumpUpwardsSpeed) == 72, "Offset mismatch for UChaosCharacterJumpCheck::JumpUpwardsSpeed");
static_assert(offsetof(UChaosCharacterJumpCheck, FractionalGroundReactionImpulse) == 76, "Offset mismatch for UChaosCharacterJumpCheck::FractionalGroundReactionImpulse");
static_assert(offsetof(UChaosCharacterJumpCheck, TransitionToMode) == 80, "Offset mismatch for UChaosCharacterJumpCheck::TransitionToMode");

// /Script/ChaosMover.ChaosCharacterLandingCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterLandingCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float FloorDistanceTolerance; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FractionalLandingImpulse; // 0x004C (Size: 0x4, Type: FloatProperty)
    FName TransitionToGroundMode; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosCharacterLandingCheck, FloorDistanceTolerance) == 72, "Offset mismatch for UChaosCharacterLandingCheck::FloorDistanceTolerance");
static_assert(offsetof(UChaosCharacterLandingCheck, FractionalLandingImpulse) == 76, "Offset mismatch for UChaosCharacterLandingCheck::FractionalLandingImpulse");
static_assert(offsetof(UChaosCharacterLandingCheck, TransitionToGroundMode) == 80, "Offset mismatch for UChaosCharacterLandingCheck::TransitionToGroundMode");

// /Script/ChaosMover.ChaosCharacterLaunchCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterLaunchCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FName TransitionToMode; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosCharacterLaunchCheck, TransitionToMode) == 72, "Offset mismatch for UChaosCharacterLaunchCheck::TransitionToMode");

// /Script/ChaosMover.ChaosCharacterMovementMode
// Kind: Class; super: ChaosMovementMode
class UChaosCharacterMovementMode
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    float RadialForceLimit; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float TwistTorqueLimit; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float SwingTorqueLimit; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldCharacterRemainUpright; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B5
    std::uint8_t TargetHeightOverride[0x8]; // 0x00B8 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t QueryRadiusOverride[0x8]; // 0x00C0 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t FrictionOverrideMode; // 0x00C8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UChaosCharacterMovementMode, RadialForceLimit) == 168, "Offset mismatch for UChaosCharacterMovementMode::RadialForceLimit");
static_assert(offsetof(UChaosCharacterMovementMode, TwistTorqueLimit) == 172, "Offset mismatch for UChaosCharacterMovementMode::TwistTorqueLimit");
static_assert(offsetof(UChaosCharacterMovementMode, SwingTorqueLimit) == 176, "Offset mismatch for UChaosCharacterMovementMode::SwingTorqueLimit");
static_assert(offsetof(UChaosCharacterMovementMode, bShouldCharacterRemainUpright) == 180, "Offset mismatch for UChaosCharacterMovementMode::bShouldCharacterRemainUpright");
static_assert(offsetof(UChaosCharacterMovementMode, TargetHeightOverride) == 184, "Offset mismatch for UChaosCharacterMovementMode::TargetHeightOverride");
static_assert(offsetof(UChaosCharacterMovementMode, QueryRadiusOverride) == 192, "Offset mismatch for UChaosCharacterMovementMode::QueryRadiusOverride");
static_assert(offsetof(UChaosCharacterMovementMode, FrictionOverrideMode) == 200, "Offset mismatch for UChaosCharacterMovementMode::FrictionOverrideMode");

// /Script/ChaosMover.ChaosCharacterMoverComponent
// Kind: Class; super: CharacterMoverComponent
class UChaosCharacterMoverComponent
{
public:
    std::uint8_t Pad_0000[0x720]; // 0x0000
    FMulticastInlineDelegate OnLandedDelegate; // 0x0720 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnJumped; // 0x0730 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UChaosCharacterMoverComponent, OnLandedDelegate) == 1824, "Offset mismatch for UChaosCharacterMoverComponent::OnLandedDelegate");
static_assert(offsetof(UChaosCharacterMoverComponent, OnJumped) == 1840, "Offset mismatch for UChaosCharacterMoverComponent::OnJumped");

// /Script/ChaosMover.ChaosCharacterOrientationInterface
// Kind: Class; super: Interface
class UChaosCharacterOrientationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosCharacterSimpleWalkingSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosCharacterSimpleWalkingSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bMaintainHorizontalGroundVelocity; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosCharacterSimpleWalkingSource, bMaintainHorizontalGroundVelocity) == 72, "Offset mismatch for UChaosCharacterSimpleWalkingSource::bMaintainHorizontalGroundVelocity");

// /Script/ChaosMover.ChaosCharacterSmoothWalkingSource
// Kind: Class; super: ChaosCharacterSimpleWalkingSource
class UChaosCharacterSmoothWalkingSource
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float Acceleration; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float DirectionalAccelerationFactor; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float TurningStrength; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingTime; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingTime; // 0x007C (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingCompensation; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingCompensation; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float VelocityDeadzoneThreshold; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float AccelerationDeadzoneThreshold; // 0x008C (Size: 0x4, Type: FloatProperty)
    float OutsideInfluenceSmoothingTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float FacingSmoothingTime; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothFacingWithDoubleSpring; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    float FacingDeadzoneThreshold; // 0x009C (Size: 0x4, Type: FloatProperty)
    float AngularVelocityDeadzoneThreshold; // 0x00A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosCharacterSmoothWalkingSource, Acceleration) == 104, "Offset mismatch for UChaosCharacterSmoothWalkingSource::Acceleration");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, Deceleration) == 108, "Offset mismatch for UChaosCharacterSmoothWalkingSource::Deceleration");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, DirectionalAccelerationFactor) == 112, "Offset mismatch for UChaosCharacterSmoothWalkingSource::DirectionalAccelerationFactor");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, TurningStrength) == 116, "Offset mismatch for UChaosCharacterSmoothWalkingSource::TurningStrength");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, AccelerationSmoothingTime) == 120, "Offset mismatch for UChaosCharacterSmoothWalkingSource::AccelerationSmoothingTime");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, DecelerationSmoothingTime) == 124, "Offset mismatch for UChaosCharacterSmoothWalkingSource::DecelerationSmoothingTime");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, AccelerationSmoothingCompensation) == 128, "Offset mismatch for UChaosCharacterSmoothWalkingSource::AccelerationSmoothingCompensation");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, DecelerationSmoothingCompensation) == 132, "Offset mismatch for UChaosCharacterSmoothWalkingSource::DecelerationSmoothingCompensation");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, VelocityDeadzoneThreshold) == 136, "Offset mismatch for UChaosCharacterSmoothWalkingSource::VelocityDeadzoneThreshold");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, AccelerationDeadzoneThreshold) == 140, "Offset mismatch for UChaosCharacterSmoothWalkingSource::AccelerationDeadzoneThreshold");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, OutsideInfluenceSmoothingTime) == 144, "Offset mismatch for UChaosCharacterSmoothWalkingSource::OutsideInfluenceSmoothingTime");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, FacingSmoothingTime) == 148, "Offset mismatch for UChaosCharacterSmoothWalkingSource::FacingSmoothingTime");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, bSmoothFacingWithDoubleSpring) == 152, "Offset mismatch for UChaosCharacterSmoothWalkingSource::bSmoothFacingWithDoubleSpring");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, FacingDeadzoneThreshold) == 156, "Offset mismatch for UChaosCharacterSmoothWalkingSource::FacingDeadzoneThreshold");
static_assert(offsetof(UChaosCharacterSmoothWalkingSource, AngularVelocityDeadzoneThreshold) == 160, "Offset mismatch for UChaosCharacterSmoothWalkingSource::AngularVelocityDeadzoneThreshold");

// /Script/ChaosMover.ChaosCharacterSwimmingSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosCharacterSwimmingSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float SwimmingIdealImmersionDepth; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SurfaceSwimmingWaterControlSettings[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosCharacterSwimmingSource, SwimmingIdealImmersionDepth) == 72, "Offset mismatch for UChaosCharacterSwimmingSource::SwimmingIdealImmersionDepth");
static_assert(offsetof(UChaosCharacterSwimmingSource, SurfaceSwimmingWaterControlSettings) == 76, "Offset mismatch for UChaosCharacterSwimmingSource::SurfaceSwimmingWaterControlSettings");

// /Script/ChaosMover.ChaosCharacterWalkingExecutor
// Kind: Class; super: ChaosMoveExecutorBase
class UChaosCharacterWalkingExecutor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float RadialForceLimit; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TwistTorqueLimit; // 0x004C (Size: 0x4, Type: FloatProperty)
    float SwingTorqueLimit; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float GroundDamping; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float FrictionForceLimit; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float FractionalRadialForceLimitScaling; // 0x005C (Size: 0x4, Type: FloatProperty)
    float FractionalGroundReaction; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldCharacterRemainUpright; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0065
    std::uint8_t TargetHeightOverride[0x8]; // 0x0068 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t QueryRadiusOverride[0x8]; // 0x0070 (Size: 0x8, Type: OptionalProperty)
    float FractionalDownwardVelocityToTarget; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldApplyAngularVelocityToTarget; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosCharacterWalkingExecutor, RadialForceLimit) == 72, "Offset mismatch for UChaosCharacterWalkingExecutor::RadialForceLimit");
static_assert(offsetof(UChaosCharacterWalkingExecutor, TwistTorqueLimit) == 76, "Offset mismatch for UChaosCharacterWalkingExecutor::TwistTorqueLimit");
static_assert(offsetof(UChaosCharacterWalkingExecutor, SwingTorqueLimit) == 80, "Offset mismatch for UChaosCharacterWalkingExecutor::SwingTorqueLimit");
static_assert(offsetof(UChaosCharacterWalkingExecutor, GroundDamping) == 84, "Offset mismatch for UChaosCharacterWalkingExecutor::GroundDamping");
static_assert(offsetof(UChaosCharacterWalkingExecutor, FrictionForceLimit) == 88, "Offset mismatch for UChaosCharacterWalkingExecutor::FrictionForceLimit");
static_assert(offsetof(UChaosCharacterWalkingExecutor, FractionalRadialForceLimitScaling) == 92, "Offset mismatch for UChaosCharacterWalkingExecutor::FractionalRadialForceLimitScaling");
static_assert(offsetof(UChaosCharacterWalkingExecutor, FractionalGroundReaction) == 96, "Offset mismatch for UChaosCharacterWalkingExecutor::FractionalGroundReaction");
static_assert(offsetof(UChaosCharacterWalkingExecutor, bShouldCharacterRemainUpright) == 100, "Offset mismatch for UChaosCharacterWalkingExecutor::bShouldCharacterRemainUpright");
static_assert(offsetof(UChaosCharacterWalkingExecutor, TargetHeightOverride) == 104, "Offset mismatch for UChaosCharacterWalkingExecutor::TargetHeightOverride");
static_assert(offsetof(UChaosCharacterWalkingExecutor, QueryRadiusOverride) == 112, "Offset mismatch for UChaosCharacterWalkingExecutor::QueryRadiusOverride");
static_assert(offsetof(UChaosCharacterWalkingExecutor, FractionalDownwardVelocityToTarget) == 120, "Offset mismatch for UChaosCharacterWalkingExecutor::FractionalDownwardVelocityToTarget");
static_assert(offsetof(UChaosCharacterWalkingExecutor, bShouldApplyAngularVelocityToTarget) == 124, "Offset mismatch for UChaosCharacterWalkingExecutor::bShouldApplyAngularVelocityToTarget");

// /Script/ChaosMover.ChaosCharacterWalkingSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosCharacterWalkingSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bMaintainHorizontalGroundVelocity; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UChaosCharacterWalkingSource, bMaintainHorizontalGroundVelocity) == 72, "Offset mismatch for UChaosCharacterWalkingSource::bMaintainHorizontalGroundVelocity");

// /Script/ChaosMover.ChaosCharacterWaterCheck
// Kind: Class; super: ChaosMovementModeTransition
class UChaosCharacterWaterCheck
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float WaterModeStartImmersionDepth; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float WaterModeStopImmersionDepth; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WaterModeName[0x4]; // 0x0050 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroundModeName[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    FName AirModeName; // 0x0058 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosCharacterWaterCheck, WaterModeStartImmersionDepth) == 72, "Offset mismatch for UChaosCharacterWaterCheck::WaterModeStartImmersionDepth");
static_assert(offsetof(UChaosCharacterWaterCheck, WaterModeStopImmersionDepth) == 76, "Offset mismatch for UChaosCharacterWaterCheck::WaterModeStopImmersionDepth");
static_assert(offsetof(UChaosCharacterWaterCheck, WaterModeName) == 80, "Offset mismatch for UChaosCharacterWaterCheck::WaterModeName");
static_assert(offsetof(UChaosCharacterWaterCheck, GroundModeName) == 84, "Offset mismatch for UChaosCharacterWaterCheck::GroundModeName");
static_assert(offsetof(UChaosCharacterWaterCheck, AirModeName) == 88, "Offset mismatch for UChaosCharacterWaterCheck::AirModeName");

// /Script/ChaosMover.ChaosCompositeMovementMode
// Kind: Class; super: ChaosMovementMode
class UChaosCompositeMovementMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosCompositeMovementMode, MoveSource) == 128, "Offset mismatch for UChaosCompositeMovementMode::MoveSource");
static_assert(offsetof(UChaosCompositeMovementMode, MoveExecutor) == 136, "Offset mismatch for UChaosCompositeMovementMode::MoveExecutor");
static_assert(offsetof(UChaosCompositeMovementMode, NextModeName) == 144, "Offset mismatch for UChaosCompositeMovementMode::NextModeName");

// /Script/ChaosMover.ChaosEllipticalMovementPathPattern
// Kind: Class; super: ChaosPathedMovementPatternBase
class UChaosEllipticalMovementPathPattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float RadiusX; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float RadiusY; // 0x005C (Size: 0x4, Type: FloatProperty)
    float OriginAngle; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float UsableArcAngle; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EllipsePlaneRotation[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosEllipticalMovementPathPattern, RadiusX) == 88, "Offset mismatch for UChaosEllipticalMovementPathPattern::RadiusX");
static_assert(offsetof(UChaosEllipticalMovementPathPattern, RadiusY) == 92, "Offset mismatch for UChaosEllipticalMovementPathPattern::RadiusY");
static_assert(offsetof(UChaosEllipticalMovementPathPattern, OriginAngle) == 96, "Offset mismatch for UChaosEllipticalMovementPathPattern::OriginAngle");
static_assert(offsetof(UChaosEllipticalMovementPathPattern, UsableArcAngle) == 100, "Offset mismatch for UChaosEllipticalMovementPathPattern::UsableArcAngle");
static_assert(offsetof(UChaosEllipticalMovementPathPattern, EllipsePlaneRotation) == 104, "Offset mismatch for UChaosEllipticalMovementPathPattern::EllipsePlaneRotation");

// /Script/ChaosMover.ChaosFallingMode
// Kind: Class; super: ChaosCompositeMovementMode
class UChaosFallingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosFallingMode, MoveSource) == 128, "Offset mismatch for UChaosFallingMode::MoveSource");
static_assert(offsetof(UChaosFallingMode, MoveExecutor) == 136, "Offset mismatch for UChaosFallingMode::MoveExecutor");
static_assert(offsetof(UChaosFallingMode, NextModeName) == 144, "Offset mismatch for UChaosFallingMode::NextModeName");

// /Script/ChaosMover.ChaosFlyingMode
// Kind: Class; super: ChaosCompositeMovementMode
class UChaosFlyingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosFlyingMode, MoveSource) == 128, "Offset mismatch for UChaosFlyingMode::MoveSource");
static_assert(offsetof(UChaosFlyingMode, MoveExecutor) == 136, "Offset mismatch for UChaosFlyingMode::MoveExecutor");
static_assert(offsetof(UChaosFlyingMode, NextModeName) == 144, "Offset mismatch for UChaosFlyingMode::NextModeName");

// /Script/ChaosMover.ChaosGroundMovementUtils
// Kind: Class; super: BlueprintFunctionLibrary
class UChaosGroundMovementUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosKinematicActuationInterface
// Kind: Class; super: Interface
class UChaosKinematicActuationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosKinematicAirExecutor
// Kind: Class; super: ChaosMoveExecutorBase
class UChaosKinematicAirExecutor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t TargetHeightOverride[0x8]; // 0x0048 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t QueryRadiusOverride[0x8]; // 0x0050 (Size: 0x8, Type: OptionalProperty)
    float FloorQueryRadiusFraction; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float FloorQueryRadiusOffset; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosKinematicAirExecutor, TargetHeightOverride) == 72, "Offset mismatch for UChaosKinematicAirExecutor::TargetHeightOverride");
static_assert(offsetof(UChaosKinematicAirExecutor, QueryRadiusOverride) == 80, "Offset mismatch for UChaosKinematicAirExecutor::QueryRadiusOverride");
static_assert(offsetof(UChaosKinematicAirExecutor, FloorQueryRadiusFraction) == 88, "Offset mismatch for UChaosKinematicAirExecutor::FloorQueryRadiusFraction");
static_assert(offsetof(UChaosKinematicAirExecutor, FloorQueryRadiusOffset) == 92, "Offset mismatch for UChaosKinematicAirExecutor::FloorQueryRadiusOffset");

// /Script/ChaosMover.ChaosKinematicWalkingExecutor
// Kind: Class; super: ChaosMoveExecutorBase
class UChaosKinematicWalkingExecutor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t TargetHeightOverride[0x8]; // 0x0048 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t QueryRadiusOverride[0x1]; // 0x0050 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UChaosKinematicWalkingExecutor, TargetHeightOverride) == 72, "Offset mismatch for UChaosKinematicWalkingExecutor::TargetHeightOverride");
static_assert(offsetof(UChaosKinematicWalkingExecutor, QueryRadiusOverride) == 80, "Offset mismatch for UChaosKinematicWalkingExecutor::QueryRadiusOverride");

// /Script/ChaosMover.ChaosLayeredMoveSource
// Kind: Class; super: ChaosMoverSourceBase
class UChaosLayeredMoveSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t LayeredMove[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosLayeredMoveSource, LayeredMove) == 64, "Offset mismatch for UChaosLayeredMoveSource::LayeredMove");

// /Script/ChaosMover.ChaosMotionParametersInterface
// Kind: Class; super: Interface
class UChaosMotionParametersInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMoveExecutorBase
// Kind: Class; super: Object
class UChaosMoveExecutorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMovementActuationInterface
// Kind: Class; super: Interface
class UChaosMovementActuationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMovementMode
// Kind: Class; super: BaseMovementMode
class UChaosMovementMode
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t IgnoredCollisionMode; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UChaosMovementMode, IgnoredCollisionMode) == 112, "Offset mismatch for UChaosMovementMode::IgnoredCollisionMode");

// /Script/ChaosMover.ChaosMovementModeTransition
// Kind: Class; super: BaseMovementModeTransition
class UChaosMovementModeTransition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SharedSettingsClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowModeReentry; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bFirstSubStepOnly (shared storage)
    // 0x0038 BoolProperty bSupportsAsync (shared storage)
};

static_assert(offsetof(UChaosMovementModeTransition, SharedSettingsClasses) == 40, "Offset mismatch for UChaosMovementModeTransition::SharedSettingsClasses");
static_assert(offsetof(UChaosMovementModeTransition, bAllowModeReentry) == 56, "Offset mismatch for UChaosMovementModeTransition::bAllowModeReentry");

// /Script/ChaosMover.ChaosMoverBackendComponent
// Kind: Class; super: ActorComponent
class UChaosMoverBackendComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* NetworkPhysicsComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* NullMovementMode; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ImmediateModeTransition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Simulation; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x628]; // 0x00F0
    TScriptInterface<void> UpdatedObjectOverride; // 0x0718 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UChaosMoverBackendComponent, NetworkPhysicsComponent) == 208, "Offset mismatch for UChaosMoverBackendComponent::NetworkPhysicsComponent");
static_assert(offsetof(UChaosMoverBackendComponent, NullMovementMode) == 216, "Offset mismatch for UChaosMoverBackendComponent::NullMovementMode");
static_assert(offsetof(UChaosMoverBackendComponent, ImmediateModeTransition) == 224, "Offset mismatch for UChaosMoverBackendComponent::ImmediateModeTransition");
static_assert(offsetof(UChaosMoverBackendComponent, Simulation) == 232, "Offset mismatch for UChaosMoverBackendComponent::Simulation");
static_assert(offsetof(UChaosMoverBackendComponent, UpdatedObjectOverride) == 1816, "Offset mismatch for UChaosMoverBackendComponent::UpdatedObjectOverride");

// /Script/ChaosMover.ChaosMoverBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UChaosMoverBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMoverSimulation
// Kind: Class; super: MoverSimulation
class UChaosMoverSimulation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Blackboard; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RollbackBlackboard; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosMoverSimulation, Blackboard) == 40, "Offset mismatch for UChaosMoverSimulation::Blackboard");
static_assert(offsetof(UChaosMoverSimulation, RollbackBlackboard) == 48, "Offset mismatch for UChaosMoverSimulation::RollbackBlackboard");

// /Script/ChaosMover.ChaosMoverSimulationTickInterface
// Kind: Class; super: Interface
class UChaosMoverSimulationTickInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMoverSourceBase
// Kind: Class; super: Object
class UChaosMoverSourceBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosMoverSubsystem
// Kind: Class; super: WorldSubsystem
class UChaosMoverSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosPathedMovementControllerComponent
// Kind: Class; super: ActorComponent
class UChaosPathedMovementControllerComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnPathedMovementStarted; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPathedMovementStopped; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPathedMovementBounced; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPathedMovementReversePlaybackChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPathedMovementLoopingPlaybackChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPathedMovementOneWayPlaybackChanged; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t InitialProperties[0x4]; // 0x0130 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDisplayProgressPreviewMesh; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float PreviewMeshOverallPathProgress; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x013C
    void* PreviewMeshMaterial; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* DebugDrawComp; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x48]; // 0x0150
    void* MoverComponent; // 0x0198 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementStarted) == 208, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementStarted");
static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementStopped) == 224, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementStopped");
static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementBounced) == 240, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementBounced");
static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementReversePlaybackChanged) == 256, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementReversePlaybackChanged");
static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementLoopingPlaybackChanged) == 272, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementLoopingPlaybackChanged");
static_assert(offsetof(UChaosPathedMovementControllerComponent, OnPathedMovementOneWayPlaybackChanged) == 288, "Offset mismatch for UChaosPathedMovementControllerComponent::OnPathedMovementOneWayPlaybackChanged");
static_assert(offsetof(UChaosPathedMovementControllerComponent, InitialProperties) == 304, "Offset mismatch for UChaosPathedMovementControllerComponent::InitialProperties");
static_assert(offsetof(UChaosPathedMovementControllerComponent, bDisplayProgressPreviewMesh) == 308, "Offset mismatch for UChaosPathedMovementControllerComponent::bDisplayProgressPreviewMesh");
static_assert(offsetof(UChaosPathedMovementControllerComponent, PreviewMeshOverallPathProgress) == 312, "Offset mismatch for UChaosPathedMovementControllerComponent::PreviewMeshOverallPathProgress");
static_assert(offsetof(UChaosPathedMovementControllerComponent, PreviewMeshMaterial) == 320, "Offset mismatch for UChaosPathedMovementControllerComponent::PreviewMeshMaterial");
static_assert(offsetof(UChaosPathedMovementControllerComponent, DebugDrawComp) == 328, "Offset mismatch for UChaosPathedMovementControllerComponent::DebugDrawComp");
static_assert(offsetof(UChaosPathedMovementControllerComponent, MoverComponent) == 408, "Offset mismatch for UChaosPathedMovementControllerComponent::MoverComponent");

// /Script/ChaosMover.ChaosPathedMovementDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UChaosPathedMovementDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    void* ProgressPreviewMeshComp; // 0x0620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosPathedMovementDebugDrawComponent, ProgressPreviewMeshComp) == 1568, "Offset mismatch for UChaosPathedMovementDebugDrawComponent::ProgressPreviewMeshComp");

// /Script/ChaosMover.ChaosPathedMovementDebugDrawInterface
// Kind: Class; super: Interface
class UChaosPathedMovementDebugDrawInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosPathedMovementMode
// Kind: Class; super: ChaosMovementMode
class UChaosPathedMovementMode
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bUseJointConstraint; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    std::uint8_t JointConstraintProperties[0x160]; // 0x00A0 (Size: 0x160, Type: StructProperty)
    float OneWayPlaybackDuration; // 0x0200 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0204
    TArray<void*> PathPatterns; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Easing; // 0x0218 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0219
    void* CustomEasingCurve; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x329]; // 0x0228
    std::uint8_t bDebugDrawAggregatePath; // 0x0551 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPatternDebugDrawing; // 0x0552 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0553
    std::uint8_t PathDebugDrawColor[0x1]; // 0x0554 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosPathedMovementMode, bUseJointConstraint) == 152, "Offset mismatch for UChaosPathedMovementMode::bUseJointConstraint");
static_assert(offsetof(UChaosPathedMovementMode, JointConstraintProperties) == 160, "Offset mismatch for UChaosPathedMovementMode::JointConstraintProperties");
static_assert(offsetof(UChaosPathedMovementMode, OneWayPlaybackDuration) == 512, "Offset mismatch for UChaosPathedMovementMode::OneWayPlaybackDuration");
static_assert(offsetof(UChaosPathedMovementMode, PathPatterns) == 520, "Offset mismatch for UChaosPathedMovementMode::PathPatterns");
static_assert(offsetof(UChaosPathedMovementMode, Easing) == 536, "Offset mismatch for UChaosPathedMovementMode::Easing");
static_assert(offsetof(UChaosPathedMovementMode, CustomEasingCurve) == 544, "Offset mismatch for UChaosPathedMovementMode::CustomEasingCurve");
static_assert(offsetof(UChaosPathedMovementMode, bDebugDrawAggregatePath) == 1361, "Offset mismatch for UChaosPathedMovementMode::bDebugDrawAggregatePath");
static_assert(offsetof(UChaosPathedMovementMode, bAllowPatternDebugDrawing) == 1362, "Offset mismatch for UChaosPathedMovementMode::bAllowPatternDebugDrawing");
static_assert(offsetof(UChaosPathedMovementMode, PathDebugDrawColor) == 1364, "Offset mismatch for UChaosPathedMovementMode::PathDebugDrawColor");

// /Script/ChaosMover.ChaosPathedMovementModeInterface
// Kind: Class; super: Interface
class UChaosPathedMovementModeInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosMover.ChaosPathedMovementPatternBase
// Kind: Class; super: Object
class UChaosPathedMovementPatternBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TranslationMasks; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RotationMasks; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ScaleMasks; // 0x002A (Size: 0x1, Type: ByteProperty)
    std::uint8_t bStartAfterPreviousPattern; // 0x002B (Size: 0x1, Type: BoolProperty)
    float StartAtPathProgress; // 0x002C (Size: 0x4, Type: FloatProperty)
    float EndAtPathProgress; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float LoopOffset; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumLoopsPerPath; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsOneWay; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBounceAtEnds; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOrientComponentToPath; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Easing; // 0x003F (Size: 0x1, Type: EnumProperty)
    void* CustomEasingCurve; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDebugDrawPattern; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t PatternDebugDrawColor[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChaosPathedMovementPatternBase, TranslationMasks) == 40, "Offset mismatch for UChaosPathedMovementPatternBase::TranslationMasks");
static_assert(offsetof(UChaosPathedMovementPatternBase, RotationMasks) == 41, "Offset mismatch for UChaosPathedMovementPatternBase::RotationMasks");
static_assert(offsetof(UChaosPathedMovementPatternBase, ScaleMasks) == 42, "Offset mismatch for UChaosPathedMovementPatternBase::ScaleMasks");
static_assert(offsetof(UChaosPathedMovementPatternBase, bStartAfterPreviousPattern) == 43, "Offset mismatch for UChaosPathedMovementPatternBase::bStartAfterPreviousPattern");
static_assert(offsetof(UChaosPathedMovementPatternBase, StartAtPathProgress) == 44, "Offset mismatch for UChaosPathedMovementPatternBase::StartAtPathProgress");
static_assert(offsetof(UChaosPathedMovementPatternBase, EndAtPathProgress) == 48, "Offset mismatch for UChaosPathedMovementPatternBase::EndAtPathProgress");
static_assert(offsetof(UChaosPathedMovementPatternBase, LoopOffset) == 52, "Offset mismatch for UChaosPathedMovementPatternBase::LoopOffset");
static_assert(offsetof(UChaosPathedMovementPatternBase, NumLoopsPerPath) == 56, "Offset mismatch for UChaosPathedMovementPatternBase::NumLoopsPerPath");
static_assert(offsetof(UChaosPathedMovementPatternBase, IsOneWay) == 60, "Offset mismatch for UChaosPathedMovementPatternBase::IsOneWay");
static_assert(offsetof(UChaosPathedMovementPatternBase, bBounceAtEnds) == 61, "Offset mismatch for UChaosPathedMovementPatternBase::bBounceAtEnds");
static_assert(offsetof(UChaosPathedMovementPatternBase, bOrientComponentToPath) == 62, "Offset mismatch for UChaosPathedMovementPatternBase::bOrientComponentToPath");
static_assert(offsetof(UChaosPathedMovementPatternBase, Easing) == 63, "Offset mismatch for UChaosPathedMovementPatternBase::Easing");
static_assert(offsetof(UChaosPathedMovementPatternBase, CustomEasingCurve) == 64, "Offset mismatch for UChaosPathedMovementPatternBase::CustomEasingCurve");
static_assert(offsetof(UChaosPathedMovementPatternBase, bDebugDrawPattern) == 72, "Offset mismatch for UChaosPathedMovementPatternBase::bDebugDrawPattern");
static_assert(offsetof(UChaosPathedMovementPatternBase, PatternDebugDrawColor) == 76, "Offset mismatch for UChaosPathedMovementPatternBase::PatternDebugDrawColor");

// /Script/ChaosMover.ChaosPathedMovementReachedEndTransition
// Kind: Class; super: ChaosMovementModeTransition
class UChaosPathedMovementReachedEndTransition
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FName TransitionToMode; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosPathedMovementReachedEndTransition, TransitionToMode) == 72, "Offset mismatch for UChaosPathedMovementReachedEndTransition::TransitionToMode");

// /Script/ChaosMover.ChaosPointMovementPathPattern
// Kind: Class; super: ChaosPathedMovementPatternBase
class UChaosPointMovementPathPattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> PathPoints; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChaosPointMovementPathPattern, PathPoints) == 88, "Offset mismatch for UChaosPointMovementPathPattern::PathPoints");

// /Script/ChaosMover.ChaosSimpleWalkingMode
// Kind: Class; super: ChaosWalkingMode
class UChaosSimpleWalkingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosSimpleWalkingMode, MoveSource) == 128, "Offset mismatch for UChaosSimpleWalkingMode::MoveSource");
static_assert(offsetof(UChaosSimpleWalkingMode, MoveExecutor) == 136, "Offset mismatch for UChaosSimpleWalkingMode::MoveExecutor");
static_assert(offsetof(UChaosSimpleWalkingMode, NextModeName) == 144, "Offset mismatch for UChaosSimpleWalkingMode::NextModeName");

// /Script/ChaosMover.ChaosSmoothWalkingMode
// Kind: Class; super: ChaosSimpleWalkingMode
class UChaosSmoothWalkingMode
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float Acceleration; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float Deceleration; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float DirectionalAccelerationFactor; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float TurningStrength; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingTime; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingTime; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float AccelerationSmoothingCompensation; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float DecelerationSmoothingCompensation; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float VelocityDeadzoneThreshold; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float AccelerationDeadzoneThreshold; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float OutsideInfluenceSmoothingTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float FacingSmoothingTime; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothFacingWithDoubleSpring; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    float FacingDeadzoneThreshold; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float AngularVelocityDeadzoneThreshold; // 0x00D8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UChaosSmoothWalkingMode, Acceleration) == 160, "Offset mismatch for UChaosSmoothWalkingMode::Acceleration");
static_assert(offsetof(UChaosSmoothWalkingMode, Deceleration) == 164, "Offset mismatch for UChaosSmoothWalkingMode::Deceleration");
static_assert(offsetof(UChaosSmoothWalkingMode, DirectionalAccelerationFactor) == 168, "Offset mismatch for UChaosSmoothWalkingMode::DirectionalAccelerationFactor");
static_assert(offsetof(UChaosSmoothWalkingMode, TurningStrength) == 172, "Offset mismatch for UChaosSmoothWalkingMode::TurningStrength");
static_assert(offsetof(UChaosSmoothWalkingMode, AccelerationSmoothingTime) == 176, "Offset mismatch for UChaosSmoothWalkingMode::AccelerationSmoothingTime");
static_assert(offsetof(UChaosSmoothWalkingMode, DecelerationSmoothingTime) == 180, "Offset mismatch for UChaosSmoothWalkingMode::DecelerationSmoothingTime");
static_assert(offsetof(UChaosSmoothWalkingMode, AccelerationSmoothingCompensation) == 184, "Offset mismatch for UChaosSmoothWalkingMode::AccelerationSmoothingCompensation");
static_assert(offsetof(UChaosSmoothWalkingMode, DecelerationSmoothingCompensation) == 188, "Offset mismatch for UChaosSmoothWalkingMode::DecelerationSmoothingCompensation");
static_assert(offsetof(UChaosSmoothWalkingMode, VelocityDeadzoneThreshold) == 192, "Offset mismatch for UChaosSmoothWalkingMode::VelocityDeadzoneThreshold");
static_assert(offsetof(UChaosSmoothWalkingMode, AccelerationDeadzoneThreshold) == 196, "Offset mismatch for UChaosSmoothWalkingMode::AccelerationDeadzoneThreshold");
static_assert(offsetof(UChaosSmoothWalkingMode, OutsideInfluenceSmoothingTime) == 200, "Offset mismatch for UChaosSmoothWalkingMode::OutsideInfluenceSmoothingTime");
static_assert(offsetof(UChaosSmoothWalkingMode, FacingSmoothingTime) == 204, "Offset mismatch for UChaosSmoothWalkingMode::FacingSmoothingTime");
static_assert(offsetof(UChaosSmoothWalkingMode, bSmoothFacingWithDoubleSpring) == 208, "Offset mismatch for UChaosSmoothWalkingMode::bSmoothFacingWithDoubleSpring");
static_assert(offsetof(UChaosSmoothWalkingMode, FacingDeadzoneThreshold) == 212, "Offset mismatch for UChaosSmoothWalkingMode::FacingDeadzoneThreshold");
static_assert(offsetof(UChaosSmoothWalkingMode, AngularVelocityDeadzoneThreshold) == 216, "Offset mismatch for UChaosSmoothWalkingMode::AngularVelocityDeadzoneThreshold");

// /Script/ChaosMover.ChaosSplineMovementPathPattern
// Kind: Class; super: ChaosPathedMovementPatternBase
class UChaosSplineMovementPathPattern
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float LowerBound; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float UpperBound; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOffsetsModifyDuration; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplySplineScaling; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0062
    std::uint8_t SplineComponentRef[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    void* SplineComp; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChaosSplineMovementPathPattern, LowerBound) == 88, "Offset mismatch for UChaosSplineMovementPathPattern::LowerBound");
static_assert(offsetof(UChaosSplineMovementPathPattern, UpperBound) == 92, "Offset mismatch for UChaosSplineMovementPathPattern::UpperBound");
static_assert(offsetof(UChaosSplineMovementPathPattern, bOffsetsModifyDuration) == 96, "Offset mismatch for UChaosSplineMovementPathPattern::bOffsetsModifyDuration");
static_assert(offsetof(UChaosSplineMovementPathPattern, bApplySplineScaling) == 97, "Offset mismatch for UChaosSplineMovementPathPattern::bApplySplineScaling");
static_assert(offsetof(UChaosSplineMovementPathPattern, SplineComponentRef) == 104, "Offset mismatch for UChaosSplineMovementPathPattern::SplineComponentRef");
static_assert(offsetof(UChaosSplineMovementPathPattern, SplineComp) == 144, "Offset mismatch for UChaosSplineMovementPathPattern::SplineComp");

// /Script/ChaosMover.ChaosSwimmingMode
// Kind: Class; super: ChaosCompositeMovementMode
class UChaosSwimmingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosSwimmingMode, MoveSource) == 128, "Offset mismatch for UChaosSwimmingMode::MoveSource");
static_assert(offsetof(UChaosSwimmingMode, MoveExecutor) == 136, "Offset mismatch for UChaosSwimmingMode::MoveExecutor");
static_assert(offsetof(UChaosSwimmingMode, NextModeName) == 144, "Offset mismatch for UChaosSwimmingMode::NextModeName");

// /Script/ChaosMover.ChaosWalkingMode
// Kind: Class; super: ChaosCompositeMovementMode
class UChaosWalkingMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* MoveSource; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* MoveExecutor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FName NextModeName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UChaosWalkingMode, MoveSource) == 128, "Offset mismatch for UChaosWalkingMode::MoveSource");
static_assert(offsetof(UChaosWalkingMode, MoveExecutor) == 136, "Offset mismatch for UChaosWalkingMode::MoveExecutor");
static_assert(offsetof(UChaosWalkingMode, NextModeName) == 144, "Offset mismatch for UChaosWalkingMode::NextModeName");

// /Script/ChaosMover.SharedChaosCharacterMovementSettings
// Kind: Class; super: Object
class USharedChaosCharacterMovementSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float Deceleration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Acceleration; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float TurningRate; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float TurningBoost; // 0x003C (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAccelerationForVelocityMove; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    float GroundFriction; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSeparateBrakingFriction; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    float BrakingFriction; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float BrakingFrictionFactor; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MaxStepHeight; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultFallingMode[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    float MaxWalkableSlopeAngle; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USharedChaosCharacterMovementSettings, Deceleration) == 48, "Offset mismatch for USharedChaosCharacterMovementSettings::Deceleration");
static_assert(offsetof(USharedChaosCharacterMovementSettings, Acceleration) == 52, "Offset mismatch for USharedChaosCharacterMovementSettings::Acceleration");
static_assert(offsetof(USharedChaosCharacterMovementSettings, TurningRate) == 56, "Offset mismatch for USharedChaosCharacterMovementSettings::TurningRate");
static_assert(offsetof(USharedChaosCharacterMovementSettings, TurningBoost) == 60, "Offset mismatch for USharedChaosCharacterMovementSettings::TurningBoost");
static_assert(offsetof(USharedChaosCharacterMovementSettings, MaxSpeed) == 64, "Offset mismatch for USharedChaosCharacterMovementSettings::MaxSpeed");
static_assert(offsetof(USharedChaosCharacterMovementSettings, bUseAccelerationForVelocityMove) == 68, "Offset mismatch for USharedChaosCharacterMovementSettings::bUseAccelerationForVelocityMove");
static_assert(offsetof(USharedChaosCharacterMovementSettings, GroundFriction) == 72, "Offset mismatch for USharedChaosCharacterMovementSettings::GroundFriction");
static_assert(offsetof(USharedChaosCharacterMovementSettings, bUseSeparateBrakingFriction) == 76, "Offset mismatch for USharedChaosCharacterMovementSettings::bUseSeparateBrakingFriction");
static_assert(offsetof(USharedChaosCharacterMovementSettings, BrakingFriction) == 80, "Offset mismatch for USharedChaosCharacterMovementSettings::BrakingFriction");
static_assert(offsetof(USharedChaosCharacterMovementSettings, BrakingFrictionFactor) == 84, "Offset mismatch for USharedChaosCharacterMovementSettings::BrakingFrictionFactor");
static_assert(offsetof(USharedChaosCharacterMovementSettings, MaxStepHeight) == 88, "Offset mismatch for USharedChaosCharacterMovementSettings::MaxStepHeight");
static_assert(offsetof(USharedChaosCharacterMovementSettings, DefaultFallingMode) == 92, "Offset mismatch for USharedChaosCharacterMovementSettings::DefaultFallingMode");
static_assert(offsetof(USharedChaosCharacterMovementSettings, MaxWalkableSlopeAngle) == 96, "Offset mismatch for USharedChaosCharacterMovementSettings::MaxWalkableSlopeAngle");
