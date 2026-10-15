/**
 * decamp dumper generated SDK
 * Package: /Script/MotionWarping
 */
#pragma once
#include "Basic.h"

// /Script/MotionWarping.AttributeBasedRootMotionComponentPrePhysicsTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction
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

static_assert(offsetof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction, TickGroup) == 8, "Offset mismatch for FAttributeBasedRootMotionComponentPrePhysicsTickFunction::TickGroup");
static_assert(offsetof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction, EndTickGroup) == 9, "Offset mismatch for FAttributeBasedRootMotionComponentPrePhysicsTickFunction::EndTickGroup");
static_assert(offsetof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FAttributeBasedRootMotionComponentPrePhysicsTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FAttributeBasedRootMotionComponentPrePhysicsTickFunction, TickInterval) == 12, "Offset mismatch for FAttributeBasedRootMotionComponentPrePhysicsTickFunction::TickInterval");

// /Script/MotionWarping.MotionDeltaTrack
// Kind: ScriptStruct; super: none
struct FMotionDeltaTrack
{
public:
    TArray<void*> BoneTransformTrack; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeltaTranslationTrack; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeltaRotationTrack; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TotalTranslation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t TotalRotation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMotionDeltaTrack, BoneTransformTrack) == 0, "Offset mismatch for FMotionDeltaTrack::BoneTransformTrack");
static_assert(offsetof(FMotionDeltaTrack, DeltaTranslationTrack) == 16, "Offset mismatch for FMotionDeltaTrack::DeltaTranslationTrack");
static_assert(offsetof(FMotionDeltaTrack, DeltaRotationTrack) == 32, "Offset mismatch for FMotionDeltaTrack::DeltaRotationTrack");
static_assert(offsetof(FMotionDeltaTrack, TotalTranslation) == 48, "Offset mismatch for FMotionDeltaTrack::TotalTranslation");
static_assert(offsetof(FMotionDeltaTrack, TotalRotation) == 72, "Offset mismatch for FMotionDeltaTrack::TotalRotation");

// /Script/MotionWarping.MotionDeltaTrackContainer
// Kind: ScriptStruct; super: none
struct FMotionDeltaTrackContainer
{
public:
    TArray<void*> Tracks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMotionDeltaTrackContainer, Tracks) == 0, "Offset mismatch for FMotionDeltaTrackContainer::Tracks");

// /Script/MotionWarping.MotionWarpingSwapState
// Kind: ScriptStruct; super: none
struct FMotionWarpingSwapState
{
public:
    TArray<void*> Modifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WarpTargets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SwitchOffConditions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMotionWarpingSwapState, Modifiers) == 0, "Offset mismatch for FMotionWarpingSwapState::Modifiers");
static_assert(offsetof(FMotionWarpingSwapState, WarpTargets) == 16, "Offset mismatch for FMotionWarpingSwapState::WarpTargets");
static_assert(offsetof(FMotionWarpingSwapState, SwitchOffConditions) == 32, "Offset mismatch for FMotionWarpingSwapState::SwitchOffConditions");

// /Script/MotionWarping.MotionWarpingTarget
// Kind: ScriptStruct; super: none
struct FMotionWarpingTarget
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Component; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BoneName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t bFollowComponent; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LocationOffsetDirection; // 0x0045 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0046
    std::uint8_t LocationOffset[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> AvatarActor; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMotionWarpingTarget, Name) == 0, "Offset mismatch for FMotionWarpingTarget::Name");
static_assert(offsetof(FMotionWarpingTarget, Location) == 8, "Offset mismatch for FMotionWarpingTarget::Location");
static_assert(offsetof(FMotionWarpingTarget, Rotation) == 32, "Offset mismatch for FMotionWarpingTarget::Rotation");
static_assert(offsetof(FMotionWarpingTarget, Component) == 56, "Offset mismatch for FMotionWarpingTarget::Component");
static_assert(offsetof(FMotionWarpingTarget, BoneName) == 64, "Offset mismatch for FMotionWarpingTarget::BoneName");
static_assert(offsetof(FMotionWarpingTarget, bFollowComponent) == 68, "Offset mismatch for FMotionWarpingTarget::bFollowComponent");
static_assert(offsetof(FMotionWarpingTarget, LocationOffsetDirection) == 69, "Offset mismatch for FMotionWarpingTarget::LocationOffsetDirection");
static_assert(offsetof(FMotionWarpingTarget, LocationOffset) == 72, "Offset mismatch for FMotionWarpingTarget::LocationOffset");
static_assert(offsetof(FMotionWarpingTarget, RotationOffset) == 96, "Offset mismatch for FMotionWarpingTarget::RotationOffset");
static_assert(offsetof(FMotionWarpingTarget, AvatarActor) == 120, "Offset mismatch for FMotionWarpingTarget::AvatarActor");

// /Script/MotionWarping.MotionWarpingUpdateContext
// Kind: ScriptStruct; super: none
struct FMotionWarpingUpdateContext
{
public:
    TWeakObjectPtr<void> Animation; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float PreviousPosition; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CurrentPosition; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DeltaSeconds; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotionWarpingUpdateContext, Animation) == 0, "Offset mismatch for FMotionWarpingUpdateContext::Animation");
static_assert(offsetof(FMotionWarpingUpdateContext, PreviousPosition) == 8, "Offset mismatch for FMotionWarpingUpdateContext::PreviousPosition");
static_assert(offsetof(FMotionWarpingUpdateContext, CurrentPosition) == 12, "Offset mismatch for FMotionWarpingUpdateContext::CurrentPosition");
static_assert(offsetof(FMotionWarpingUpdateContext, Weight) == 16, "Offset mismatch for FMotionWarpingUpdateContext::Weight");
static_assert(offsetof(FMotionWarpingUpdateContext, PlayRate) == 20, "Offset mismatch for FMotionWarpingUpdateContext::PlayRate");
static_assert(offsetof(FMotionWarpingUpdateContext, DeltaSeconds) == 24, "Offset mismatch for FMotionWarpingUpdateContext::DeltaSeconds");

// /Script/MotionWarping.MotionWarpingWindowData
// Kind: ScriptStruct; super: none
struct FMotionWarpingWindowData
{
public:
    void* AnimNotify; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float StartTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotionWarpingWindowData, AnimNotify) == 0, "Offset mismatch for FMotionWarpingWindowData::AnimNotify");
static_assert(offsetof(FMotionWarpingWindowData, StartTime) == 8, "Offset mismatch for FMotionWarpingWindowData::StartTime");
static_assert(offsetof(FMotionWarpingWindowData, EndTime) == 12, "Offset mismatch for FMotionWarpingWindowData::EndTime");

// /Script/MotionWarping.PrecomputedWarpCurve
// Kind: ScriptStruct; super: none
struct FPrecomputedWarpCurve
{
public:
    std::uint8_t CurveType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StartRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndRatio; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPrecomputedWarpCurve, CurveType) == 0, "Offset mismatch for FPrecomputedWarpCurve::CurveType");
static_assert(offsetof(FPrecomputedWarpCurve, StartRatio) == 4, "Offset mismatch for FPrecomputedWarpCurve::StartRatio");
static_assert(offsetof(FPrecomputedWarpCurve, EndRatio) == 8, "Offset mismatch for FPrecomputedWarpCurve::EndRatio");

// /Script/MotionWarping.PrecomputedWarpSteeringSettings
// Kind: ScriptStruct; super: none
struct FPrecomputedWarpSteeringSettings
{
public:
    std::uint8_t bEnableSmoothing; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float SmoothStiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SmoothDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AngleThreshold; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPrecomputedWarpSteeringSettings, bEnableSmoothing) == 0, "Offset mismatch for FPrecomputedWarpSteeringSettings::bEnableSmoothing");
static_assert(offsetof(FPrecomputedWarpSteeringSettings, SmoothStiffness) == 4, "Offset mismatch for FPrecomputedWarpSteeringSettings::SmoothStiffness");
static_assert(offsetof(FPrecomputedWarpSteeringSettings, SmoothDamping) == 8, "Offset mismatch for FPrecomputedWarpSteeringSettings::SmoothDamping");
static_assert(offsetof(FPrecomputedWarpSteeringSettings, AngleThreshold) == 12, "Offset mismatch for FPrecomputedWarpSteeringSettings::AngleThreshold");

// /Script/MotionWarping.SwitchOffConditionData
// Kind: ScriptStruct; super: none
struct FSwitchOffConditionData
{
public:
    FName WarpTargetName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> SwitchOffConditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSwitchOffConditionData, WarpTargetName) == 0, "Offset mismatch for FSwitchOffConditionData::WarpTargetName");
static_assert(offsetof(FSwitchOffConditionData, SwitchOffConditions) == 8, "Offset mismatch for FSwitchOffConditionData::SwitchOffConditions");

// /Script/MotionWarping.AnimNotifyState_MotionWarping
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_MotionWarping
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* RootMotionModifier; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimNotifyState_MotionWarping, RootMotionModifier) == 48, "Offset mismatch for UAnimNotifyState_MotionWarping::RootMotionModifier");

// /Script/MotionWarping.AttributeBasedRootMotionComponent
// Kind: Class; super: ActorComponent
class UAttributeBasedRootMotionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bEnableRootMotion; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t Mode; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x33]; // 0x00C5
    TWeakObjectPtr<void> CharacterOwner; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAttributeBasedRootMotionComponent, bEnableRootMotion) == 192, "Offset mismatch for UAttributeBasedRootMotionComponent::bEnableRootMotion");
static_assert(offsetof(UAttributeBasedRootMotionComponent, Mode) == 196, "Offset mismatch for UAttributeBasedRootMotionComponent::Mode");
static_assert(offsetof(UAttributeBasedRootMotionComponent, CharacterOwner) == 248, "Offset mismatch for UAttributeBasedRootMotionComponent::CharacterOwner");

// /Script/MotionWarping.MotionWarpingBaseAdapter
// Kind: Class; super: Object
class UMotionWarpingBaseAdapter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MotionWarping.MotionWarpingCharacterAdapter
// Kind: Class; super: MotionWarpingBaseAdapter
class UMotionWarpingCharacterAdapter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MotionWarping.MotionWarpingComponent
// Kind: Class; super: ActorComponent
class UMotionWarpingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bSearchForWindowsInAnimsWithinMontages; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    FMulticastInlineDelegate OnPreUpdate; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* OwnerAdapter; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* PredictionAdapter; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CachedOwnerAdapter; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Modifiers; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WarpTargets; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SwitchOffConditions; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPredictingTrajectory; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMotionWarpingComponent, bSearchForWindowsInAnimsWithinMontages) == 192, "Offset mismatch for UMotionWarpingComponent::bSearchForWindowsInAnimsWithinMontages");
static_assert(offsetof(UMotionWarpingComponent, OnPreUpdate) == 200, "Offset mismatch for UMotionWarpingComponent::OnPreUpdate");
static_assert(offsetof(UMotionWarpingComponent, OwnerAdapter) == 216, "Offset mismatch for UMotionWarpingComponent::OwnerAdapter");
static_assert(offsetof(UMotionWarpingComponent, PredictionAdapter) == 224, "Offset mismatch for UMotionWarpingComponent::PredictionAdapter");
static_assert(offsetof(UMotionWarpingComponent, CachedOwnerAdapter) == 232, "Offset mismatch for UMotionWarpingComponent::CachedOwnerAdapter");
static_assert(offsetof(UMotionWarpingComponent, Modifiers) == 240, "Offset mismatch for UMotionWarpingComponent::Modifiers");
static_assert(offsetof(UMotionWarpingComponent, WarpTargets) == 256, "Offset mismatch for UMotionWarpingComponent::WarpTargets");
static_assert(offsetof(UMotionWarpingComponent, SwitchOffConditions) == 272, "Offset mismatch for UMotionWarpingComponent::SwitchOffConditions");
static_assert(offsetof(UMotionWarpingComponent, bPredictingTrajectory) == 288, "Offset mismatch for UMotionWarpingComponent::bPredictingTrajectory");

// /Script/MotionWarping.MotionWarpingFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMotionWarpingFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MotionWarping.MotionWarpingMontageTrajectoryAdapter
// Kind: Class; super: MotionWarpingBaseAdapter
class UMotionWarpingMontageTrajectoryAdapter
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CachedWarpState[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* Montage; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMotionWarpingMontageTrajectoryAdapter, CachedWarpState) == 56, "Offset mismatch for UMotionWarpingMontageTrajectoryAdapter::CachedWarpState");
static_assert(offsetof(UMotionWarpingMontageTrajectoryAdapter, Montage) == 120, "Offset mismatch for UMotionWarpingMontageTrajectoryAdapter::Montage");

// /Script/MotionWarping.MotionWarpingSwitchOffAngleToTargetCondition
// Kind: Class; super: MotionWarpingSwitchOffCondition
class UMotionWarpingSwitchOffAngleToTargetCondition
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Operator; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    float Angle; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreZAxis; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMotionWarpingSwitchOffAngleToTargetCondition, Operator) == 72, "Offset mismatch for UMotionWarpingSwitchOffAngleToTargetCondition::Operator");
static_assert(offsetof(UMotionWarpingSwitchOffAngleToTargetCondition, Angle) == 76, "Offset mismatch for UMotionWarpingSwitchOffAngleToTargetCondition::Angle");
static_assert(offsetof(UMotionWarpingSwitchOffAngleToTargetCondition, bIgnoreZAxis) == 80, "Offset mismatch for UMotionWarpingSwitchOffAngleToTargetCondition::bIgnoreZAxis");

// /Script/MotionWarping.MotionWarpingSwitchOffBlueprintableCondition
// Kind: Class; super: MotionWarpingSwitchOffCondition
class UMotionWarpingSwitchOffBlueprintableCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseWarpTargetAsTargetLocation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Effect; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    void* OwnerActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMotionWarpingSwitchOffBlueprintableCondition, bUseWarpTargetAsTargetLocation) == 40, "Offset mismatch for UMotionWarpingSwitchOffBlueprintableCondition::bUseWarpTargetAsTargetLocation");
static_assert(offsetof(UMotionWarpingSwitchOffBlueprintableCondition, Effect) == 41, "Offset mismatch for UMotionWarpingSwitchOffBlueprintableCondition::Effect");
static_assert(offsetof(UMotionWarpingSwitchOffBlueprintableCondition, OwnerActor) == 48, "Offset mismatch for UMotionWarpingSwitchOffBlueprintableCondition::OwnerActor");
static_assert(offsetof(UMotionWarpingSwitchOffBlueprintableCondition, TargetActor) == 56, "Offset mismatch for UMotionWarpingSwitchOffBlueprintableCondition::TargetActor");

// /Script/MotionWarping.MotionWarpingSwitchOffCompositeCondition
// Kind: Class; super: MotionWarpingSwitchOffCondition
class UMotionWarpingSwitchOffCompositeCondition
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* SwitchOffConditionA; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LogicOperator; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    void* SwitchOffConditionB; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMotionWarpingSwitchOffCompositeCondition, SwitchOffConditionA) == 72, "Offset mismatch for UMotionWarpingSwitchOffCompositeCondition::SwitchOffConditionA");
static_assert(offsetof(UMotionWarpingSwitchOffCompositeCondition, LogicOperator) == 80, "Offset mismatch for UMotionWarpingSwitchOffCompositeCondition::LogicOperator");
static_assert(offsetof(UMotionWarpingSwitchOffCompositeCondition, SwitchOffConditionB) == 88, "Offset mismatch for UMotionWarpingSwitchOffCompositeCondition::SwitchOffConditionB");

// /Script/MotionWarping.MotionWarpingSwitchOffCondition
// Kind: Class; super: Object
class UMotionWarpingSwitchOffCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseWarpTargetAsTargetLocation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Effect; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    void* OwnerActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMotionWarpingSwitchOffCondition, bUseWarpTargetAsTargetLocation) == 40, "Offset mismatch for UMotionWarpingSwitchOffCondition::bUseWarpTargetAsTargetLocation");
static_assert(offsetof(UMotionWarpingSwitchOffCondition, Effect) == 41, "Offset mismatch for UMotionWarpingSwitchOffCondition::Effect");
static_assert(offsetof(UMotionWarpingSwitchOffCondition, OwnerActor) == 48, "Offset mismatch for UMotionWarpingSwitchOffCondition::OwnerActor");
static_assert(offsetof(UMotionWarpingSwitchOffCondition, TargetActor) == 56, "Offset mismatch for UMotionWarpingSwitchOffCondition::TargetActor");

// /Script/MotionWarping.MotionWarpingSwitchOffDistanceCondition
// Kind: Class; super: MotionWarpingSwitchOffCondition
class UMotionWarpingSwitchOffDistanceCondition
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Operator; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AxesType; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    float Distance; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMotionWarpingSwitchOffDistanceCondition, Operator) == 72, "Offset mismatch for UMotionWarpingSwitchOffDistanceCondition::Operator");
static_assert(offsetof(UMotionWarpingSwitchOffDistanceCondition, AxesType) == 73, "Offset mismatch for UMotionWarpingSwitchOffDistanceCondition::AxesType");
static_assert(offsetof(UMotionWarpingSwitchOffDistanceCondition, Distance) == 76, "Offset mismatch for UMotionWarpingSwitchOffDistanceCondition::Distance");

// /Script/MotionWarping.MotionWarpingUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UMotionWarpingUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MotionWarping.RootMotionModifier
// Kind: Class; super: Object
class URootMotionModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Animation; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    float StartTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PreviousPosition; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentPosition; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0048
    std::uint8_t StartTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    float ActualStartTime; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00B4
    std::uint8_t TotalRootMotionWithinWindow[0x60]; // 0x00C0 (Size: 0x60, Type: StructProperty)
    std::uint8_t OnActivateDelegate[0xC]; // 0x0120 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnUpdateDelegate[0xC]; // 0x012C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnDeactivateDelegate[0xC]; // 0x0138 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t State; // 0x0144 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(URootMotionModifier, Animation) == 40, "Offset mismatch for URootMotionModifier::Animation");
static_assert(offsetof(URootMotionModifier, StartTime) == 48, "Offset mismatch for URootMotionModifier::StartTime");
static_assert(offsetof(URootMotionModifier, EndTime) == 52, "Offset mismatch for URootMotionModifier::EndTime");
static_assert(offsetof(URootMotionModifier, PreviousPosition) == 56, "Offset mismatch for URootMotionModifier::PreviousPosition");
static_assert(offsetof(URootMotionModifier, CurrentPosition) == 60, "Offset mismatch for URootMotionModifier::CurrentPosition");
static_assert(offsetof(URootMotionModifier, Weight) == 64, "Offset mismatch for URootMotionModifier::Weight");
static_assert(offsetof(URootMotionModifier, PlayRate) == 68, "Offset mismatch for URootMotionModifier::PlayRate");
static_assert(offsetof(URootMotionModifier, StartTransform) == 80, "Offset mismatch for URootMotionModifier::StartTransform");
static_assert(offsetof(URootMotionModifier, ActualStartTime) == 176, "Offset mismatch for URootMotionModifier::ActualStartTime");
static_assert(offsetof(URootMotionModifier, TotalRootMotionWithinWindow) == 192, "Offset mismatch for URootMotionModifier::TotalRootMotionWithinWindow");
static_assert(offsetof(URootMotionModifier, OnActivateDelegate) == 288, "Offset mismatch for URootMotionModifier::OnActivateDelegate");
static_assert(offsetof(URootMotionModifier, OnUpdateDelegate) == 300, "Offset mismatch for URootMotionModifier::OnUpdateDelegate");
static_assert(offsetof(URootMotionModifier, OnDeactivateDelegate) == 312, "Offset mismatch for URootMotionModifier::OnDeactivateDelegate");
static_assert(offsetof(URootMotionModifier, State) == 324, "Offset mismatch for URootMotionModifier::State");

// /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// Kind: Class; super: RootMotionModifier_Warp
class URootMotionModifier_AdjustmentBlendWarp
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bWarpIKBones; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    TArray<void*> IKBones; // 0x0368 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0378
    std::uint8_t CachedMeshTransform[0x60]; // 0x0380 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedMeshRelativeTransform[0x60]; // 0x03E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedRootMotion[0x60]; // 0x0440 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, bWarpIKBones) == 864, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::bWarpIKBones");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, IKBones) == 872, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::IKBones");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform) == 896, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::CachedMeshTransform");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform) == 992, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::CachedMeshRelativeTransform");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion) == 1088, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::CachedRootMotion");
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, Result) == 1184, "Offset mismatch for URootMotionModifier_AdjustmentBlendWarp::Result");

// /Script/MotionWarping.RootMotionModifier_Blueprintable
// Kind: Class; super: RootMotionModifier
class URootMotionModifier_Blueprintable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Animation; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    float StartTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PreviousPosition; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentPosition; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0048
    std::uint8_t StartTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    float ActualStartTime; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00B4
    std::uint8_t TotalRootMotionWithinWindow[0x60]; // 0x00C0 (Size: 0x60, Type: StructProperty)
    std::uint8_t OnActivateDelegate[0xC]; // 0x0120 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnUpdateDelegate[0xC]; // 0x012C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnDeactivateDelegate[0xC]; // 0x0138 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t State; // 0x0144 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(URootMotionModifier_Blueprintable, Animation) == 40, "Offset mismatch for URootMotionModifier_Blueprintable::Animation");
static_assert(offsetof(URootMotionModifier_Blueprintable, StartTime) == 48, "Offset mismatch for URootMotionModifier_Blueprintable::StartTime");
static_assert(offsetof(URootMotionModifier_Blueprintable, EndTime) == 52, "Offset mismatch for URootMotionModifier_Blueprintable::EndTime");
static_assert(offsetof(URootMotionModifier_Blueprintable, PreviousPosition) == 56, "Offset mismatch for URootMotionModifier_Blueprintable::PreviousPosition");
static_assert(offsetof(URootMotionModifier_Blueprintable, CurrentPosition) == 60, "Offset mismatch for URootMotionModifier_Blueprintable::CurrentPosition");
static_assert(offsetof(URootMotionModifier_Blueprintable, Weight) == 64, "Offset mismatch for URootMotionModifier_Blueprintable::Weight");
static_assert(offsetof(URootMotionModifier_Blueprintable, PlayRate) == 68, "Offset mismatch for URootMotionModifier_Blueprintable::PlayRate");
static_assert(offsetof(URootMotionModifier_Blueprintable, StartTransform) == 80, "Offset mismatch for URootMotionModifier_Blueprintable::StartTransform");
static_assert(offsetof(URootMotionModifier_Blueprintable, ActualStartTime) == 176, "Offset mismatch for URootMotionModifier_Blueprintable::ActualStartTime");
static_assert(offsetof(URootMotionModifier_Blueprintable, TotalRootMotionWithinWindow) == 192, "Offset mismatch for URootMotionModifier_Blueprintable::TotalRootMotionWithinWindow");
static_assert(offsetof(URootMotionModifier_Blueprintable, OnActivateDelegate) == 288, "Offset mismatch for URootMotionModifier_Blueprintable::OnActivateDelegate");
static_assert(offsetof(URootMotionModifier_Blueprintable, OnUpdateDelegate) == 300, "Offset mismatch for URootMotionModifier_Blueprintable::OnUpdateDelegate");
static_assert(offsetof(URootMotionModifier_Blueprintable, OnDeactivateDelegate) == 312, "Offset mismatch for URootMotionModifier_Blueprintable::OnDeactivateDelegate");
static_assert(offsetof(URootMotionModifier_Blueprintable, State) == 324, "Offset mismatch for URootMotionModifier_Blueprintable::State");

// /Script/MotionWarping.RootMotionModifier_PrecomputedWarp
// Kind: Class; super: RootMotionModifier_Warp
class URootMotionModifier_PrecomputedWarp
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t TranslationWarpingCurve[0xC]; // 0x0360 (Size: 0xC, Type: StructProperty)
    std::uint8_t bSeparateTranslationCurves; // 0x036C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x036D
    std::uint8_t TranslationWarpingCurve_InMovementDirection[0xC]; // 0x0370 (Size: 0xC, Type: StructProperty)
    std::uint8_t TranslationWarpingCurve_OutOfMovementDirection[0xC]; // 0x037C (Size: 0xC, Type: StructProperty)
    std::uint8_t RotationWarpingCurve[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t AlignOffset[0x60]; // 0x03A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bForceTargetTransformUpright; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0401
    std::uint8_t UpdateMode; // 0x0404 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0405
    std::uint8_t Disable[0x4]; // 0x0408 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableSteering; // 0x040C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x040D
    std::uint8_t SteeringSettings[0x1]; // 0x0410 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve) == 864, "Offset mismatch for URootMotionModifier_PrecomputedWarp::TranslationWarpingCurve");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, bSeparateTranslationCurves) == 876, "Offset mismatch for URootMotionModifier_PrecomputedWarp::bSeparateTranslationCurves");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve_InMovementDirection) == 880, "Offset mismatch for URootMotionModifier_PrecomputedWarp::TranslationWarpingCurve_InMovementDirection");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, TranslationWarpingCurve_OutOfMovementDirection) == 892, "Offset mismatch for URootMotionModifier_PrecomputedWarp::TranslationWarpingCurve_OutOfMovementDirection");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, RotationWarpingCurve) == 904, "Offset mismatch for URootMotionModifier_PrecomputedWarp::RotationWarpingCurve");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, AlignOffset) == 928, "Offset mismatch for URootMotionModifier_PrecomputedWarp::AlignOffset");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, bForceTargetTransformUpright) == 1024, "Offset mismatch for URootMotionModifier_PrecomputedWarp::bForceTargetTransformUpright");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, UpdateMode) == 1028, "Offset mismatch for URootMotionModifier_PrecomputedWarp::UpdateMode");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, Disable) == 1032, "Offset mismatch for URootMotionModifier_PrecomputedWarp::Disable");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, bEnableSteering) == 1036, "Offset mismatch for URootMotionModifier_PrecomputedWarp::bEnableSteering");
static_assert(offsetof(URootMotionModifier_PrecomputedWarp, SteeringSettings) == 1040, "Offset mismatch for URootMotionModifier_PrecomputedWarp::SteeringSettings");

// /Script/MotionWarping.RootMotionModifier_Scale
// Kind: Class; super: RootMotionModifier
class URootMotionModifier_Scale
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t Scale[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionModifier_Scale, Scale) == 336, "Offset mismatch for URootMotionModifier_Scale::Scale");

// /Script/MotionWarping.RootMotionModifier_SimpleWarp
// Kind: Class; super: RootMotionModifier_Warp
class URootMotionModifier_SimpleWarp
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t WarpTargetName[0x4]; // 0x0150 (Size: 0x4, Type: NameProperty)
    std::uint8_t WarpPointAnimProvider; // 0x0154 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0155
    std::uint8_t WarpPointAnimTransform[0x60]; // 0x0160 (Size: 0x60, Type: StructProperty)
    std::uint8_t WarpPointAnimBoneName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWarpTranslation; // 0x01C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreZAxis; // 0x01C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarpToFeetLocation; // 0x01C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AddTranslationEasingFunc; // 0x01C7 (Size: 0x1, Type: EnumProperty)
    void* AddTranslationEasingCurve; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWarpRotation; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationType; // 0x01D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationMethod; // 0x01D2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSubtractRemainingRootMotion; // 0x01D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01D4
    std::uint8_t AdditionalRotationOffset[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    float WarpRotationTimeMultiplier; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float WarpMaxRotationRate; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01F8
    std::uint8_t CachedTargetTransform[0x60]; // 0x0200 (Size: 0x60, Type: StructProperty)
    std::uint8_t RootMotionRemainingAfterNotify[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpTargetName) == 336, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpTargetName");
static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpPointAnimProvider) == 340, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpPointAnimProvider");
static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpPointAnimTransform) == 352, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpPointAnimTransform");
static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpPointAnimBoneName) == 448, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpPointAnimBoneName");
static_assert(offsetof(URootMotionModifier_SimpleWarp, bWarpTranslation) == 452, "Offset mismatch for URootMotionModifier_SimpleWarp::bWarpTranslation");
static_assert(offsetof(URootMotionModifier_SimpleWarp, bIgnoreZAxis) == 453, "Offset mismatch for URootMotionModifier_SimpleWarp::bIgnoreZAxis");
static_assert(offsetof(URootMotionModifier_SimpleWarp, bWarpToFeetLocation) == 454, "Offset mismatch for URootMotionModifier_SimpleWarp::bWarpToFeetLocation");
static_assert(offsetof(URootMotionModifier_SimpleWarp, AddTranslationEasingFunc) == 455, "Offset mismatch for URootMotionModifier_SimpleWarp::AddTranslationEasingFunc");
static_assert(offsetof(URootMotionModifier_SimpleWarp, AddTranslationEasingCurve) == 456, "Offset mismatch for URootMotionModifier_SimpleWarp::AddTranslationEasingCurve");
static_assert(offsetof(URootMotionModifier_SimpleWarp, bWarpRotation) == 464, "Offset mismatch for URootMotionModifier_SimpleWarp::bWarpRotation");
static_assert(offsetof(URootMotionModifier_SimpleWarp, RotationType) == 465, "Offset mismatch for URootMotionModifier_SimpleWarp::RotationType");
static_assert(offsetof(URootMotionModifier_SimpleWarp, RotationMethod) == 466, "Offset mismatch for URootMotionModifier_SimpleWarp::RotationMethod");
static_assert(offsetof(URootMotionModifier_SimpleWarp, bSubtractRemainingRootMotion) == 467, "Offset mismatch for URootMotionModifier_SimpleWarp::bSubtractRemainingRootMotion");
static_assert(offsetof(URootMotionModifier_SimpleWarp, AdditionalRotationOffset) == 472, "Offset mismatch for URootMotionModifier_SimpleWarp::AdditionalRotationOffset");
static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpRotationTimeMultiplier) == 496, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpRotationTimeMultiplier");
static_assert(offsetof(URootMotionModifier_SimpleWarp, WarpMaxRotationRate) == 500, "Offset mismatch for URootMotionModifier_SimpleWarp::WarpMaxRotationRate");
static_assert(offsetof(URootMotionModifier_SimpleWarp, CachedTargetTransform) == 512, "Offset mismatch for URootMotionModifier_SimpleWarp::CachedTargetTransform");
static_assert(offsetof(URootMotionModifier_SimpleWarp, RootMotionRemainingAfterNotify) == 608, "Offset mismatch for URootMotionModifier_SimpleWarp::RootMotionRemainingAfterNotify");

// /Script/MotionWarping.RootMotionModifier_SkewWarp
// Kind: Class; super: RootMotionModifier_Warp
class URootMotionModifier_SkewWarp
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    float MaxSpeedClampRatio; // 0x0360 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URootMotionModifier_SkewWarp, MaxSpeedClampRatio) == 864, "Offset mismatch for URootMotionModifier_SkewWarp::MaxSpeedClampRatio");

// /Script/MotionWarping.RootMotionModifier_Warp
// Kind: Class; super: RootMotionModifier
class URootMotionModifier_Warp
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t WarpTargetName[0x4]; // 0x0150 (Size: 0x4, Type: NameProperty)
    std::uint8_t WarpPointAnimProvider; // 0x0154 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0155
    std::uint8_t WarpPointAnimTransform[0x60]; // 0x0160 (Size: 0x60, Type: StructProperty)
    std::uint8_t WarpPointAnimBoneName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWarpTranslation; // 0x01C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreZAxis; // 0x01C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarpToFeetLocation; // 0x01C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AddTranslationEasingFunc; // 0x01C7 (Size: 0x1, Type: EnumProperty)
    void* AddTranslationEasingCurve; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWarpRotation; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationType; // 0x01D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationMethod; // 0x01D2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSubtractRemainingRootMotion; // 0x01D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01D4
    std::uint8_t AdditionalRotationOffset[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    float WarpRotationTimeMultiplier; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float WarpMaxRotationRate; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01F8
    std::uint8_t CachedTargetTransform[0x60]; // 0x0200 (Size: 0x60, Type: StructProperty)
    std::uint8_t RootMotionRemainingAfterNotify[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URootMotionModifier_Warp, WarpTargetName) == 336, "Offset mismatch for URootMotionModifier_Warp::WarpTargetName");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimProvider) == 340, "Offset mismatch for URootMotionModifier_Warp::WarpPointAnimProvider");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimTransform) == 352, "Offset mismatch for URootMotionModifier_Warp::WarpPointAnimTransform");
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimBoneName) == 448, "Offset mismatch for URootMotionModifier_Warp::WarpPointAnimBoneName");
static_assert(offsetof(URootMotionModifier_Warp, bWarpTranslation) == 452, "Offset mismatch for URootMotionModifier_Warp::bWarpTranslation");
static_assert(offsetof(URootMotionModifier_Warp, bIgnoreZAxis) == 453, "Offset mismatch for URootMotionModifier_Warp::bIgnoreZAxis");
static_assert(offsetof(URootMotionModifier_Warp, bWarpToFeetLocation) == 454, "Offset mismatch for URootMotionModifier_Warp::bWarpToFeetLocation");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingFunc) == 455, "Offset mismatch for URootMotionModifier_Warp::AddTranslationEasingFunc");
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingCurve) == 456, "Offset mismatch for URootMotionModifier_Warp::AddTranslationEasingCurve");
static_assert(offsetof(URootMotionModifier_Warp, bWarpRotation) == 464, "Offset mismatch for URootMotionModifier_Warp::bWarpRotation");
static_assert(offsetof(URootMotionModifier_Warp, RotationType) == 465, "Offset mismatch for URootMotionModifier_Warp::RotationType");
static_assert(offsetof(URootMotionModifier_Warp, RotationMethod) == 466, "Offset mismatch for URootMotionModifier_Warp::RotationMethod");
static_assert(offsetof(URootMotionModifier_Warp, bSubtractRemainingRootMotion) == 467, "Offset mismatch for URootMotionModifier_Warp::bSubtractRemainingRootMotion");
static_assert(offsetof(URootMotionModifier_Warp, AdditionalRotationOffset) == 472, "Offset mismatch for URootMotionModifier_Warp::AdditionalRotationOffset");
static_assert(offsetof(URootMotionModifier_Warp, WarpRotationTimeMultiplier) == 496, "Offset mismatch for URootMotionModifier_Warp::WarpRotationTimeMultiplier");
static_assert(offsetof(URootMotionModifier_Warp, WarpMaxRotationRate) == 500, "Offset mismatch for URootMotionModifier_Warp::WarpMaxRotationRate");
static_assert(offsetof(URootMotionModifier_Warp, CachedTargetTransform) == 512, "Offset mismatch for URootMotionModifier_Warp::CachedTargetTransform");
static_assert(offsetof(URootMotionModifier_Warp, RootMotionRemainingAfterNotify) == 608, "Offset mismatch for URootMotionModifier_Warp::RootMotionRemainingAfterNotify");
