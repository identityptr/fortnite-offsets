/**
 * decamp dumper generated SDK
 * Package: /Script/BeanstalkDevicesCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeanstalkDevicesCoreRuntime.BeanComponentTransformDelta
// Kind: ScriptStruct; super: none
struct FBeanComponentTransformDelta
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkDevicesCoreRuntime.BeanKnockbackForceCalculator
// Kind: ScriptStruct; super: none
struct FBeanKnockbackForceCalculator
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ForceApplicationType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    double Strength; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double HorizontalStrength; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double VerticalStrength; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double Angle; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAddSourceColliderVelocity; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float SourceColliderVelocityMultiplier; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeanKnockbackForceCalculator, Type) == 0, "Offset mismatch for FBeanKnockbackForceCalculator::Type");
static_assert(offsetof(FBeanKnockbackForceCalculator, ForceApplicationType) == 1, "Offset mismatch for FBeanKnockbackForceCalculator::ForceApplicationType");
static_assert(offsetof(FBeanKnockbackForceCalculator, Strength) == 8, "Offset mismatch for FBeanKnockbackForceCalculator::Strength");
static_assert(offsetof(FBeanKnockbackForceCalculator, HorizontalStrength) == 16, "Offset mismatch for FBeanKnockbackForceCalculator::HorizontalStrength");
static_assert(offsetof(FBeanKnockbackForceCalculator, VerticalStrength) == 24, "Offset mismatch for FBeanKnockbackForceCalculator::VerticalStrength");
static_assert(offsetof(FBeanKnockbackForceCalculator, Angle) == 32, "Offset mismatch for FBeanKnockbackForceCalculator::Angle");
static_assert(offsetof(FBeanKnockbackForceCalculator, bAddSourceColliderVelocity) == 40, "Offset mismatch for FBeanKnockbackForceCalculator::bAddSourceColliderVelocity");
static_assert(offsetof(FBeanKnockbackForceCalculator, SourceColliderVelocityMultiplier) == 44, "Offset mismatch for FBeanKnockbackForceCalculator::SourceColliderVelocityMultiplier");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMotionRuntimeState
// Kind: ScriptStruct; super: none
struct FBeanObstacleMotionRuntimeState
{
public:
    std::uint8_t MotionLockedState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double MotionLockedChangedTime; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bRewinding; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    double RewindChangedTime; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double AccumulatedTimeOffset; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double LocalAccumulatedTimeOffset; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FBeanObstacleMotionRuntimeState, MotionLockedState) == 0, "Offset mismatch for FBeanObstacleMotionRuntimeState::MotionLockedState");
static_assert(offsetof(FBeanObstacleMotionRuntimeState, MotionLockedChangedTime) == 8, "Offset mismatch for FBeanObstacleMotionRuntimeState::MotionLockedChangedTime");
static_assert(offsetof(FBeanObstacleMotionRuntimeState, bRewinding) == 16, "Offset mismatch for FBeanObstacleMotionRuntimeState::bRewinding");
static_assert(offsetof(FBeanObstacleMotionRuntimeState, RewindChangedTime) == 24, "Offset mismatch for FBeanObstacleMotionRuntimeState::RewindChangedTime");
static_assert(offsetof(FBeanObstacleMotionRuntimeState, AccumulatedTimeOffset) == 32, "Offset mismatch for FBeanObstacleMotionRuntimeState::AccumulatedTimeOffset");
static_assert(offsetof(FBeanObstacleMotionRuntimeState, LocalAccumulatedTimeOffset) == 40, "Offset mismatch for FBeanObstacleMotionRuntimeState::LocalAccumulatedTimeOffset");

// /Script/BeanstalkDevicesCoreRuntime.SelectableMeshData
// Kind: ScriptStruct; super: none
struct FSelectableMeshData
{
public:
    TSoftObjectPtr<void> Mesh; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSelectableMeshData, Mesh) == 0, "Offset mismatch for FSelectableMeshData::Mesh");

// /Script/BeanstalkDevicesCoreRuntime.BeanDeviceFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBeanDeviceFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleImpactComponent
// Kind: Class; super: ActorComponent
class UBeanObstacleImpactComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnObstacleImpact; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bApplyDefaultKnockback; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyRagdoll; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00DA
    TArray<void*> AffectedColliders; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KnockbackForce[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bApplyImpactLocally; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0121
    double MaxExpectedComponentVelocityForServerValidation; // 0x0128 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> CachedColliders; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedColliderDeltas; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBeanObstacleImpactComponent, OnObstacleImpact) == 200, "Offset mismatch for UBeanObstacleImpactComponent::OnObstacleImpact");
static_assert(offsetof(UBeanObstacleImpactComponent, bApplyDefaultKnockback) == 216, "Offset mismatch for UBeanObstacleImpactComponent::bApplyDefaultKnockback");
static_assert(offsetof(UBeanObstacleImpactComponent, bApplyRagdoll) == 217, "Offset mismatch for UBeanObstacleImpactComponent::bApplyRagdoll");
static_assert(offsetof(UBeanObstacleImpactComponent, AffectedColliders) == 224, "Offset mismatch for UBeanObstacleImpactComponent::AffectedColliders");
static_assert(offsetof(UBeanObstacleImpactComponent, KnockbackForce) == 240, "Offset mismatch for UBeanObstacleImpactComponent::KnockbackForce");
static_assert(offsetof(UBeanObstacleImpactComponent, bApplyImpactLocally) == 288, "Offset mismatch for UBeanObstacleImpactComponent::bApplyImpactLocally");
static_assert(offsetof(UBeanObstacleImpactComponent, MaxExpectedComponentVelocityForServerValidation) == 296, "Offset mismatch for UBeanObstacleImpactComponent::MaxExpectedComponentVelocityForServerValidation");
static_assert(offsetof(UBeanObstacleImpactComponent, CachedColliders) == 304, "Offset mismatch for UBeanObstacleImpactComponent::CachedColliders");
static_assert(offsetof(UBeanObstacleImpactComponent, CachedColliderDeltas) == 320, "Offset mismatch for UBeanObstacleImpactComponent::CachedColliderDeltas");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMeshSelectorComponent
// Kind: Class; super: ActorComponent
class UBeanObstacleMeshSelectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSelectedMeshSetDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetStaticMeshComponentRef[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    TArray<void*> SelectableMeshes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    void* TargetStaticMeshComponent; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBeanObstacleMeshSelectorComponent, OnSelectedMeshSetDelegate) == 192, "Offset mismatch for UBeanObstacleMeshSelectorComponent::OnSelectedMeshSetDelegate");
static_assert(offsetof(UBeanObstacleMeshSelectorComponent, TargetStaticMeshComponentRef) == 208, "Offset mismatch for UBeanObstacleMeshSelectorComponent::TargetStaticMeshComponentRef");
static_assert(offsetof(UBeanObstacleMeshSelectorComponent, SelectableMeshes) == 248, "Offset mismatch for UBeanObstacleMeshSelectorComponent::SelectableMeshes");
static_assert(offsetof(UBeanObstacleMeshSelectorComponent, TargetStaticMeshComponent) == 264, "Offset mismatch for UBeanObstacleMeshSelectorComponent::TargetStaticMeshComponent");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMotion
// Kind: Class; super: Object
class UBeanObstacleMotion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMotion_Punch
// Kind: Class; super: BeanObstacleMotion
class UBeanObstacleMotion_Punch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MovementVector[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float StartDelay; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MoveOutDuration; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float OutPauseDuration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MoveInDuration; // 0x004C (Size: 0x4, Type: FloatProperty)
    float InPauseDuration; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeanObstacleMotion_Punch, MovementVector) == 40, "Offset mismatch for UBeanObstacleMotion_Punch::MovementVector");
static_assert(offsetof(UBeanObstacleMotion_Punch, StartDelay) == 64, "Offset mismatch for UBeanObstacleMotion_Punch::StartDelay");
static_assert(offsetof(UBeanObstacleMotion_Punch, MoveOutDuration) == 68, "Offset mismatch for UBeanObstacleMotion_Punch::MoveOutDuration");
static_assert(offsetof(UBeanObstacleMotion_Punch, OutPauseDuration) == 72, "Offset mismatch for UBeanObstacleMotion_Punch::OutPauseDuration");
static_assert(offsetof(UBeanObstacleMotion_Punch, MoveInDuration) == 76, "Offset mismatch for UBeanObstacleMotion_Punch::MoveInDuration");
static_assert(offsetof(UBeanObstacleMotion_Punch, InPauseDuration) == 80, "Offset mismatch for UBeanObstacleMotion_Punch::InPauseDuration");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMotion_Rotational
// Kind: Class; super: BeanObstacleMotion
class UBeanObstacleMotion_Rotational
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RotationAxis; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float RotationSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float StartRotation; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBeanObstacleMotion_Rotational, RotationAxis) == 40, "Offset mismatch for UBeanObstacleMotion_Rotational::RotationAxis");
static_assert(offsetof(UBeanObstacleMotion_Rotational, RotationSpeed) == 44, "Offset mismatch for UBeanObstacleMotion_Rotational::RotationSpeed");
static_assert(offsetof(UBeanObstacleMotion_Rotational, StartRotation) == 48, "Offset mismatch for UBeanObstacleMotion_Rotational::StartRotation");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleMovementComponent
// Kind: Class; super: ActorComponent
class UBeanObstacleMovementComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bRegisterWithBeanTickManager; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    FMulticastInlineDelegate OnRewindStateChangedDelegate; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate ClientOnStartedMoving; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate ClientOnStoppedMoving; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetComponentRef[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    void* ObstacleMotion; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldSweep; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0129
    float ReconciliationInterpSpeed; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableEventSleeping; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0131
    double EventSleepDistanceThreshold; // 0x0138 (Size: 0x8, Type: DoubleProperty)
    double EventSleepPollInterval; // 0x0140 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TargetComponentOriginalRelativeLocation[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetComponentOriginalRelativeRotation[0x20]; // 0x0160 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> TargetComponent; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    double LastEventSleepPollTime; // 0x0188 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAreEventsAsleep; // 0x0190 (Size: 0x1, Type: BoolProperty)
    // 0x0190 BoolProperty bIsObstacleTickSleeping (shared storage)
    // 0x0190 BoolProperty bIsUsingTickManager (shared storage)
    // 0x0190 BoolProperty bLastFiredEventWasStart (shared storage)
    // 0x0190 BoolProperty bStartWithMotionEnabled (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0191
    std::uint8_t ObstacleMotionRuntimeState[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    double CurrentEvalTime; // 0x01C8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LastObstacleMovementState; // 0x01D0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UBeanObstacleMovementComponent, bRegisterWithBeanTickManager) == 192, "Offset mismatch for UBeanObstacleMovementComponent::bRegisterWithBeanTickManager");
static_assert(offsetof(UBeanObstacleMovementComponent, OnRewindStateChangedDelegate) == 200, "Offset mismatch for UBeanObstacleMovementComponent::OnRewindStateChangedDelegate");
static_assert(offsetof(UBeanObstacleMovementComponent, ClientOnStartedMoving) == 216, "Offset mismatch for UBeanObstacleMovementComponent::ClientOnStartedMoving");
static_assert(offsetof(UBeanObstacleMovementComponent, ClientOnStoppedMoving) == 232, "Offset mismatch for UBeanObstacleMovementComponent::ClientOnStoppedMoving");
static_assert(offsetof(UBeanObstacleMovementComponent, TargetComponentRef) == 248, "Offset mismatch for UBeanObstacleMovementComponent::TargetComponentRef");
static_assert(offsetof(UBeanObstacleMovementComponent, ObstacleMotion) == 288, "Offset mismatch for UBeanObstacleMovementComponent::ObstacleMotion");
static_assert(offsetof(UBeanObstacleMovementComponent, bShouldSweep) == 296, "Offset mismatch for UBeanObstacleMovementComponent::bShouldSweep");
static_assert(offsetof(UBeanObstacleMovementComponent, ReconciliationInterpSpeed) == 300, "Offset mismatch for UBeanObstacleMovementComponent::ReconciliationInterpSpeed");
static_assert(offsetof(UBeanObstacleMovementComponent, bEnableEventSleeping) == 304, "Offset mismatch for UBeanObstacleMovementComponent::bEnableEventSleeping");
static_assert(offsetof(UBeanObstacleMovementComponent, EventSleepDistanceThreshold) == 312, "Offset mismatch for UBeanObstacleMovementComponent::EventSleepDistanceThreshold");
static_assert(offsetof(UBeanObstacleMovementComponent, EventSleepPollInterval) == 320, "Offset mismatch for UBeanObstacleMovementComponent::EventSleepPollInterval");
static_assert(offsetof(UBeanObstacleMovementComponent, TargetComponentOriginalRelativeLocation) == 328, "Offset mismatch for UBeanObstacleMovementComponent::TargetComponentOriginalRelativeLocation");
static_assert(offsetof(UBeanObstacleMovementComponent, TargetComponentOriginalRelativeRotation) == 352, "Offset mismatch for UBeanObstacleMovementComponent::TargetComponentOriginalRelativeRotation");
static_assert(offsetof(UBeanObstacleMovementComponent, TargetComponent) == 384, "Offset mismatch for UBeanObstacleMovementComponent::TargetComponent");
static_assert(offsetof(UBeanObstacleMovementComponent, LastEventSleepPollTime) == 392, "Offset mismatch for UBeanObstacleMovementComponent::LastEventSleepPollTime");
static_assert(offsetof(UBeanObstacleMovementComponent, bAreEventsAsleep) == 400, "Offset mismatch for UBeanObstacleMovementComponent::bAreEventsAsleep");
static_assert(offsetof(UBeanObstacleMovementComponent, ObstacleMotionRuntimeState) == 408, "Offset mismatch for UBeanObstacleMovementComponent::ObstacleMotionRuntimeState");
static_assert(offsetof(UBeanObstacleMovementComponent, CurrentEvalTime) == 456, "Offset mismatch for UBeanObstacleMovementComponent::CurrentEvalTime");
static_assert(offsetof(UBeanObstacleMovementComponent, LastObstacleMovementState) == 464, "Offset mismatch for UBeanObstacleMovementComponent::LastObstacleMovementState");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleOptimizerComponent
// Kind: Class; super: BoxComponent
class UBeanObstacleOptimizerComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    float ExtraMarginSize; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableCollidersWhenSleeping; // 0x05B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDetachFromParentAndAttachToOptimizerActor; // 0x05B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x05B6
    FMulticastInlineDelegate OnSleepStateChanged; // 0x05B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsSleeping; // 0x05C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05C9
    std::int32_t NumPawnsOverlapping; // 0x05CC (Size: 0x4, Type: IntProperty)
    TArray<void*> OptimizableColliders; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> OptimizableCollidersOriginalCollisionEnabled; // 0x05E0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBeanObstacleOptimizerComponent, ExtraMarginSize) == 1456, "Offset mismatch for UBeanObstacleOptimizerComponent::ExtraMarginSize");
static_assert(offsetof(UBeanObstacleOptimizerComponent, bDisableCollidersWhenSleeping) == 1460, "Offset mismatch for UBeanObstacleOptimizerComponent::bDisableCollidersWhenSleeping");
static_assert(offsetof(UBeanObstacleOptimizerComponent, bDetachFromParentAndAttachToOptimizerActor) == 1461, "Offset mismatch for UBeanObstacleOptimizerComponent::bDetachFromParentAndAttachToOptimizerActor");
static_assert(offsetof(UBeanObstacleOptimizerComponent, OnSleepStateChanged) == 1464, "Offset mismatch for UBeanObstacleOptimizerComponent::OnSleepStateChanged");
static_assert(offsetof(UBeanObstacleOptimizerComponent, bIsSleeping) == 1480, "Offset mismatch for UBeanObstacleOptimizerComponent::bIsSleeping");
static_assert(offsetof(UBeanObstacleOptimizerComponent, NumPawnsOverlapping) == 1484, "Offset mismatch for UBeanObstacleOptimizerComponent::NumPawnsOverlapping");
static_assert(offsetof(UBeanObstacleOptimizerComponent, OptimizableColliders) == 1488, "Offset mismatch for UBeanObstacleOptimizerComponent::OptimizableColliders");
static_assert(offsetof(UBeanObstacleOptimizerComponent, OptimizableCollidersOriginalCollisionEnabled) == 1504, "Offset mismatch for UBeanObstacleOptimizerComponent::OptimizableCollidersOriginalCollisionEnabled");

// /Script/BeanstalkDevicesCoreRuntime.BeanObstacleTickManager
// Kind: Class; super: Actor
class UBeanObstacleTickManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBeanObstacleTickManager, PrimaryActorTick) == 40, "Offset mismatch for UBeanObstacleTickManager::PrimaryActorTick");
static_assert(offsetof(UBeanObstacleTickManager, bAlwaysRelevant) == 88, "Offset mismatch for UBeanObstacleTickManager::bAlwaysRelevant");
static_assert(offsetof(UBeanObstacleTickManager, bExchangedRoles) == 89, "Offset mismatch for UBeanObstacleTickManager::bExchangedRoles");
static_assert(offsetof(UBeanObstacleTickManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UBeanObstacleTickManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UBeanObstacleTickManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UBeanObstacleTickManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UBeanObstacleTickManager, bActorEnableCollision) == 93, "Offset mismatch for UBeanObstacleTickManager::bActorEnableCollision");
static_assert(offsetof(UBeanObstacleTickManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UBeanObstacleTickManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UBeanObstacleTickManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UBeanObstacleTickManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UBeanObstacleTickManager, RemoteRole) == 96, "Offset mismatch for UBeanObstacleTickManager::RemoteRole");
static_assert(offsetof(UBeanObstacleTickManager, InitialLifeSpan) == 100, "Offset mismatch for UBeanObstacleTickManager::InitialLifeSpan");
static_assert(offsetof(UBeanObstacleTickManager, CustomTimeDilation) == 104, "Offset mismatch for UBeanObstacleTickManager::CustomTimeDilation");
static_assert(offsetof(UBeanObstacleTickManager, RayTracingGroupId) == 108, "Offset mismatch for UBeanObstacleTickManager::RayTracingGroupId");
static_assert(offsetof(UBeanObstacleTickManager, AttachmentReplication) == 112, "Offset mismatch for UBeanObstacleTickManager::AttachmentReplication");
static_assert(offsetof(UBeanObstacleTickManager, ReplicatedMovement) == 208, "Offset mismatch for UBeanObstacleTickManager::ReplicatedMovement");
static_assert(offsetof(UBeanObstacleTickManager, Owner) == 344, "Offset mismatch for UBeanObstacleTickManager::Owner");
static_assert(offsetof(UBeanObstacleTickManager, NetDriverName) == 352, "Offset mismatch for UBeanObstacleTickManager::NetDriverName");
static_assert(offsetof(UBeanObstacleTickManager, Role) == 356, "Offset mismatch for UBeanObstacleTickManager::Role");
static_assert(offsetof(UBeanObstacleTickManager, NetDormancy) == 357, "Offset mismatch for UBeanObstacleTickManager::NetDormancy");
static_assert(offsetof(UBeanObstacleTickManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UBeanObstacleTickManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UBeanObstacleTickManager, AutoReceiveInput) == 359, "Offset mismatch for UBeanObstacleTickManager::AutoReceiveInput");
static_assert(offsetof(UBeanObstacleTickManager, InputPriority) == 360, "Offset mismatch for UBeanObstacleTickManager::InputPriority");
static_assert(offsetof(UBeanObstacleTickManager, InputComponent) == 368, "Offset mismatch for UBeanObstacleTickManager::InputComponent");
static_assert(offsetof(UBeanObstacleTickManager, NetTag) == 376, "Offset mismatch for UBeanObstacleTickManager::NetTag");
static_assert(offsetof(UBeanObstacleTickManager, NetCullDistanceSquared) == 380, "Offset mismatch for UBeanObstacleTickManager::NetCullDistanceSquared");
static_assert(offsetof(UBeanObstacleTickManager, NetUpdateFrequency) == 384, "Offset mismatch for UBeanObstacleTickManager::NetUpdateFrequency");
static_assert(offsetof(UBeanObstacleTickManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UBeanObstacleTickManager::MinNetUpdateFrequency");
static_assert(offsetof(UBeanObstacleTickManager, NetPriority) == 392, "Offset mismatch for UBeanObstacleTickManager::NetPriority");
static_assert(offsetof(UBeanObstacleTickManager, PhysicsReplicationMode) == 396, "Offset mismatch for UBeanObstacleTickManager::PhysicsReplicationMode");
static_assert(offsetof(UBeanObstacleTickManager, Instigator) == 408, "Offset mismatch for UBeanObstacleTickManager::Instigator");
static_assert(offsetof(UBeanObstacleTickManager, Children) == 416, "Offset mismatch for UBeanObstacleTickManager::Children");
static_assert(offsetof(UBeanObstacleTickManager, RootComponent) == 432, "Offset mismatch for UBeanObstacleTickManager::RootComponent");
static_assert(offsetof(UBeanObstacleTickManager, HLODLayer) == 448, "Offset mismatch for UBeanObstacleTickManager::HLODLayer");
static_assert(offsetof(UBeanObstacleTickManager, Layers) == 456, "Offset mismatch for UBeanObstacleTickManager::Layers");
static_assert(offsetof(UBeanObstacleTickManager, ParentComponent) == 472, "Offset mismatch for UBeanObstacleTickManager::ParentComponent");
static_assert(offsetof(UBeanObstacleTickManager, Tags) == 496, "Offset mismatch for UBeanObstacleTickManager::Tags");
static_assert(offsetof(UBeanObstacleTickManager, OnTakeAnyDamage) == 512, "Offset mismatch for UBeanObstacleTickManager::OnTakeAnyDamage");
static_assert(offsetof(UBeanObstacleTickManager, OnTakePointDamage) == 513, "Offset mismatch for UBeanObstacleTickManager::OnTakePointDamage");
static_assert(offsetof(UBeanObstacleTickManager, OnTakeRadialDamage) == 514, "Offset mismatch for UBeanObstacleTickManager::OnTakeRadialDamage");
static_assert(offsetof(UBeanObstacleTickManager, OnActorBeginOverlap) == 515, "Offset mismatch for UBeanObstacleTickManager::OnActorBeginOverlap");
static_assert(offsetof(UBeanObstacleTickManager, OnActorEndOverlap) == 516, "Offset mismatch for UBeanObstacleTickManager::OnActorEndOverlap");
static_assert(offsetof(UBeanObstacleTickManager, OnBeginCursorOver) == 517, "Offset mismatch for UBeanObstacleTickManager::OnBeginCursorOver");
static_assert(offsetof(UBeanObstacleTickManager, OnEndCursorOver) == 518, "Offset mismatch for UBeanObstacleTickManager::OnEndCursorOver");
static_assert(offsetof(UBeanObstacleTickManager, OnClicked) == 519, "Offset mismatch for UBeanObstacleTickManager::OnClicked");
static_assert(offsetof(UBeanObstacleTickManager, OnReleased) == 520, "Offset mismatch for UBeanObstacleTickManager::OnReleased");
static_assert(offsetof(UBeanObstacleTickManager, OnInputTouchBegin) == 521, "Offset mismatch for UBeanObstacleTickManager::OnInputTouchBegin");
static_assert(offsetof(UBeanObstacleTickManager, OnInputTouchEnd) == 522, "Offset mismatch for UBeanObstacleTickManager::OnInputTouchEnd");
static_assert(offsetof(UBeanObstacleTickManager, OnInputTouchEnter) == 523, "Offset mismatch for UBeanObstacleTickManager::OnInputTouchEnter");
static_assert(offsetof(UBeanObstacleTickManager, OnInputTouchLeave) == 524, "Offset mismatch for UBeanObstacleTickManager::OnInputTouchLeave");
static_assert(offsetof(UBeanObstacleTickManager, OnActorHit) == 525, "Offset mismatch for UBeanObstacleTickManager::OnActorHit");
static_assert(offsetof(UBeanObstacleTickManager, OnDestroyed) == 526, "Offset mismatch for UBeanObstacleTickManager::OnDestroyed");
static_assert(offsetof(UBeanObstacleTickManager, OnEndPlay) == 527, "Offset mismatch for UBeanObstacleTickManager::OnEndPlay");
static_assert(offsetof(UBeanObstacleTickManager, InstanceComponents) == 592, "Offset mismatch for UBeanObstacleTickManager::InstanceComponents");
static_assert(offsetof(UBeanObstacleTickManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UBeanObstacleTickManager::BlueprintCreatedComponents");
