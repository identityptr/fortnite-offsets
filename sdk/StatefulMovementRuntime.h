/**
 * decamp dumper generated SDK
 * Package: /Script/StatefulMovementRuntime
 */
#pragma once
#include "Basic.h"

// /Script/StatefulMovementRuntime.FortMovementMode_ESMCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_ESMCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_ESMCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_ESMCreationData::LogicClass");

// /Script/StatefulMovementRuntime.MovementStateData
// Kind: ScriptStruct; super: none
struct FMovementStateData
{
public:
    void* MovementState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Priority; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMovementStateData, MovementState) == 0, "Offset mismatch for FMovementStateData::MovementState");
static_assert(offsetof(FMovementStateData, Priority) == 8, "Offset mismatch for FMovementStateData::Priority");

// /Script/StatefulMovementRuntime.FortMovementMode_ESMRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_ESMRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_ESMRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_ESMRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_ESMRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_ESMRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_ESMRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_ESMRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_ESMRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_ESMRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_ESMRuntimeData::EndReasonFlags");

// /Script/StatefulMovementRuntime.FortMovementMode_ExtStatefulMovement
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtStatefulMovement
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TArray<void*> MovementStates; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackStateTag[0x8]; // 0x01C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreventMovementTags[0x20]; // 0x01D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t DesiredMoveTraceCollisionChannel; // 0x01F0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F1
    std::uint8_t OverrideMaxSpeedFailSafe[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LastUpdateVelocity[0x18]; // 0x0220 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldVelocity[0x18]; // 0x0238 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousWorldVelocity[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, MovementStates) == 440, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::MovementStates");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, FallbackStateTag) == 456, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::FallbackStateTag");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, PreventMovementTags) == 464, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::PreventMovementTags");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, DesiredMoveTraceCollisionChannel) == 496, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::DesiredMoveTraceCollisionChannel");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, OverrideMaxSpeedFailSafe) == 504, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::OverrideMaxSpeedFailSafe");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, LastUpdateVelocity) == 544, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::LastUpdateVelocity");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, WorldVelocity) == 568, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::WorldVelocity");
static_assert(offsetof(UFortMovementMode_ExtStatefulMovement, PreviousWorldVelocity) == 592, "Offset mismatch for UFortMovementMode_ExtStatefulMovement::PreviousWorldVelocity");

// /Script/StatefulMovementRuntime.SM_MovementState
// Kind: Class; super: Object
class USM_MovementState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Speed[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSpeedAffectedByInput; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    std::uint8_t AccelerationRate[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecelerationRate[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t bInterpolateSpeed; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetMoveOrientationToControlRotationOnEnter; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceOrientationToControlRotation; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideMoveOrientation; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    std::uint8_t RotationRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToEnterState[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToRemainInState[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToRemainInStateGracePeriod[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t bMinSpeedToRemainOnlyAppliesWhenDecelerating; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0151
    std::uint8_t MaxForwardInputAngleToEnterState[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardInputAngleToRemainInState[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t bVelocityAlsoRespectsInputAngles; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01A9
    std::uint8_t MinStaminaToEnterState[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaCostOnStart[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaCostPerSecond[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    void* CameraModeClass; // 0x0228 (Size: 0x8, Type: ClassProperty)
    std::int32_t CameraModePriority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0234 (Size: 0x4, Type: StructProperty)
    void* CameraModifierClass; // 0x0238 (Size: 0x8, Type: ClassProperty)
    TArray<void*> CameraShakes; // 0x0240 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MovementStateTag[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagRequirementQuery[0x48]; // 0x0258 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnterBurstGC[0x4]; // 0x02A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveLoopingGC[0x4]; // 0x02A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExitBurstGC[0x4]; // 0x02A8 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OwningMME; // 0x02AC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerPawn; // 0x02B4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x02BC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x02C4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsSimulatedProxy; // 0x02CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayer; // 0x02CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServer; // 0x02CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServerBotControlled; // 0x02CF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USM_MovementState, Speed) == 40, "Offset mismatch for USM_MovementState::Speed");
static_assert(offsetof(USM_MovementState, bSpeedAffectedByInput) == 80, "Offset mismatch for USM_MovementState::bSpeedAffectedByInput");
static_assert(offsetof(USM_MovementState, AccelerationRate) == 88, "Offset mismatch for USM_MovementState::AccelerationRate");
static_assert(offsetof(USM_MovementState, DecelerationRate) == 128, "Offset mismatch for USM_MovementState::DecelerationRate");
static_assert(offsetof(USM_MovementState, bInterpolateSpeed) == 168, "Offset mismatch for USM_MovementState::bInterpolateSpeed");
static_assert(offsetof(USM_MovementState, bSetMoveOrientationToControlRotationOnEnter) == 169, "Offset mismatch for USM_MovementState::bSetMoveOrientationToControlRotationOnEnter");
static_assert(offsetof(USM_MovementState, bForceOrientationToControlRotation) == 170, "Offset mismatch for USM_MovementState::bForceOrientationToControlRotation");
static_assert(offsetof(USM_MovementState, bOverrideMoveOrientation) == 171, "Offset mismatch for USM_MovementState::bOverrideMoveOrientation");
static_assert(offsetof(USM_MovementState, RotationMode) == 172, "Offset mismatch for USM_MovementState::RotationMode");
static_assert(offsetof(USM_MovementState, RotationRate) == 176, "Offset mismatch for USM_MovementState::RotationRate");
static_assert(offsetof(USM_MovementState, MinSpeedToEnterState) == 216, "Offset mismatch for USM_MovementState::MinSpeedToEnterState");
static_assert(offsetof(USM_MovementState, MinSpeedToRemainInState) == 256, "Offset mismatch for USM_MovementState::MinSpeedToRemainInState");
static_assert(offsetof(USM_MovementState, MinSpeedToRemainInStateGracePeriod) == 296, "Offset mismatch for USM_MovementState::MinSpeedToRemainInStateGracePeriod");
static_assert(offsetof(USM_MovementState, bMinSpeedToRemainOnlyAppliesWhenDecelerating) == 336, "Offset mismatch for USM_MovementState::bMinSpeedToRemainOnlyAppliesWhenDecelerating");
static_assert(offsetof(USM_MovementState, MaxForwardInputAngleToEnterState) == 344, "Offset mismatch for USM_MovementState::MaxForwardInputAngleToEnterState");
static_assert(offsetof(USM_MovementState, MaxForwardInputAngleToRemainInState) == 384, "Offset mismatch for USM_MovementState::MaxForwardInputAngleToRemainInState");
static_assert(offsetof(USM_MovementState, bVelocityAlsoRespectsInputAngles) == 424, "Offset mismatch for USM_MovementState::bVelocityAlsoRespectsInputAngles");
static_assert(offsetof(USM_MovementState, MinStaminaToEnterState) == 432, "Offset mismatch for USM_MovementState::MinStaminaToEnterState");
static_assert(offsetof(USM_MovementState, StaminaCostOnStart) == 472, "Offset mismatch for USM_MovementState::StaminaCostOnStart");
static_assert(offsetof(USM_MovementState, StaminaCostPerSecond) == 512, "Offset mismatch for USM_MovementState::StaminaCostPerSecond");
static_assert(offsetof(USM_MovementState, CameraModeClass) == 552, "Offset mismatch for USM_MovementState::CameraModeClass");
static_assert(offsetof(USM_MovementState, CameraModePriority) == 560, "Offset mismatch for USM_MovementState::CameraModePriority");
static_assert(offsetof(USM_MovementState, CameraModeTag) == 564, "Offset mismatch for USM_MovementState::CameraModeTag");
static_assert(offsetof(USM_MovementState, CameraModifierClass) == 568, "Offset mismatch for USM_MovementState::CameraModifierClass");
static_assert(offsetof(USM_MovementState, CameraShakes) == 576, "Offset mismatch for USM_MovementState::CameraShakes");
static_assert(offsetof(USM_MovementState, MovementStateTag) == 592, "Offset mismatch for USM_MovementState::MovementStateTag");
static_assert(offsetof(USM_MovementState, TagRequirementQuery) == 600, "Offset mismatch for USM_MovementState::TagRequirementQuery");
static_assert(offsetof(USM_MovementState, EnterBurstGC) == 672, "Offset mismatch for USM_MovementState::EnterBurstGC");
static_assert(offsetof(USM_MovementState, ActiveLoopingGC) == 676, "Offset mismatch for USM_MovementState::ActiveLoopingGC");
static_assert(offsetof(USM_MovementState, ExitBurstGC) == 680, "Offset mismatch for USM_MovementState::ExitBurstGC");
static_assert(offsetof(USM_MovementState, OwningMME) == 684, "Offset mismatch for USM_MovementState::OwningMME");
static_assert(offsetof(USM_MovementState, OwnerPawn) == 692, "Offset mismatch for USM_MovementState::OwnerPawn");
static_assert(offsetof(USM_MovementState, OwnerMovementComponent) == 700, "Offset mismatch for USM_MovementState::OwnerMovementComponent");
static_assert(offsetof(USM_MovementState, OwnerAbilitySystemComponent) == 708, "Offset mismatch for USM_MovementState::OwnerAbilitySystemComponent");
static_assert(offsetof(USM_MovementState, bIsSimulatedProxy) == 716, "Offset mismatch for USM_MovementState::bIsSimulatedProxy");
static_assert(offsetof(USM_MovementState, bIsLocalPlayer) == 717, "Offset mismatch for USM_MovementState::bIsLocalPlayer");
static_assert(offsetof(USM_MovementState, bIsServer) == 718, "Offset mismatch for USM_MovementState::bIsServer");
static_assert(offsetof(USM_MovementState, bIsServerBotControlled) == 719, "Offset mismatch for USM_MovementState::bIsServerBotControlled");
