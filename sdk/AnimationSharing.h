/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationSharing
 */
#pragma once
#include "Basic.h"

// /Script/AnimationSharing.AnimationSetup
// Kind: ScriptStruct; super: none
struct FAnimationSetup
{
public:
    void* AnimSequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AnimBlueprint; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NumRandomizedInstances[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Enabled[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimationSetup, AnimSequence) == 0, "Offset mismatch for FAnimationSetup::AnimSequence");
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 8, "Offset mismatch for FAnimationSetup::AnimBlueprint");
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 16, "Offset mismatch for FAnimationSetup::NumRandomizedInstances");
static_assert(offsetof(FAnimationSetup, Enabled) == 40, "Offset mismatch for FAnimationSetup::Enabled");

// /Script/AnimationSharing.AnimationSharingScalability
// Kind: ScriptStruct; super: none
struct FAnimationSharingScalability
{
public:
    std::uint8_t UseBlendTransitions[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlendSignificanceValue[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumNumberConcurrentBlends[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t TickSignificanceValue[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequireCurvesDuringBlends[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0, "Offset mismatch for FAnimationSharingScalability::UseBlendTransitions");
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 24, "Offset mismatch for FAnimationSharingScalability::BlendSignificanceValue");
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 48, "Offset mismatch for FAnimationSharingScalability::MaximumNumberConcurrentBlends");
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 72, "Offset mismatch for FAnimationSharingScalability::TickSignificanceValue");
static_assert(offsetof(FAnimationSharingScalability, RequireCurvesDuringBlends) == 96, "Offset mismatch for FAnimationSharingScalability::RequireCurvesDuringBlends");

// /Script/AnimationSharing.AnimationStateEntry
// Kind: ScriptStruct; super: none
struct FAnimationStateEntry
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> AnimationSetups; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOnDemand; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRandomizeOnDemandAnims; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdditive; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001B
    float BlendTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReturnToPreviousState; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetNextState; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NextState; // 0x0022 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0023
    std::uint8_t MaximumNumberOfConcurrentInstances[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float WiggleTimePercentage; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRequiresCurves; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimationStateEntry, State) == 0, "Offset mismatch for FAnimationStateEntry::State");
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 8, "Offset mismatch for FAnimationStateEntry::AnimationSetups");
static_assert(offsetof(FAnimationStateEntry, bOnDemand) == 24, "Offset mismatch for FAnimationStateEntry::bOnDemand");
static_assert(offsetof(FAnimationStateEntry, bRandomizeOnDemandAnims) == 25, "Offset mismatch for FAnimationStateEntry::bRandomizeOnDemandAnims");
static_assert(offsetof(FAnimationStateEntry, bAdditive) == 26, "Offset mismatch for FAnimationStateEntry::bAdditive");
static_assert(offsetof(FAnimationStateEntry, BlendTime) == 28, "Offset mismatch for FAnimationStateEntry::BlendTime");
static_assert(offsetof(FAnimationStateEntry, bReturnToPreviousState) == 32, "Offset mismatch for FAnimationStateEntry::bReturnToPreviousState");
static_assert(offsetof(FAnimationStateEntry, bSetNextState) == 33, "Offset mismatch for FAnimationStateEntry::bSetNextState");
static_assert(offsetof(FAnimationStateEntry, NextState) == 34, "Offset mismatch for FAnimationStateEntry::NextState");
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 40, "Offset mismatch for FAnimationStateEntry::MaximumNumberOfConcurrentInstances");
static_assert(offsetof(FAnimationStateEntry, WiggleTimePercentage) == 64, "Offset mismatch for FAnimationStateEntry::WiggleTimePercentage");
static_assert(offsetof(FAnimationStateEntry, bRequiresCurves) == 68, "Offset mismatch for FAnimationStateEntry::bRequiresCurves");

// /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
// Kind: ScriptStruct; super: none
struct FPerSkeletonAnimationSharingSetup
{
public:
    void* skeleton; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* BlendAnimBlueprint; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* AdditiveAnimBlueprint; // 0x0018 (Size: 0x8, Type: ClassProperty)
    void* StateProcessorClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bEnableMaterialParameterCaching; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TArray<void*> AnimationStates; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPerSkeletonAnimationSharingSetup, skeleton) == 0, "Offset mismatch for FPerSkeletonAnimationSharingSetup::skeleton");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 8, "Offset mismatch for FPerSkeletonAnimationSharingSetup::SkeletalMesh");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 16, "Offset mismatch for FPerSkeletonAnimationSharingSetup::BlendAnimBlueprint");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 24, "Offset mismatch for FPerSkeletonAnimationSharingSetup::AdditiveAnimBlueprint");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 32, "Offset mismatch for FPerSkeletonAnimationSharingSetup::StateProcessorClass");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, bEnableMaterialParameterCaching) == 40, "Offset mismatch for FPerSkeletonAnimationSharingSetup::bEnableMaterialParameterCaching");
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 48, "Offset mismatch for FPerSkeletonAnimationSharingSetup::AnimationStates");

// /Script/AnimationSharing.TickAnimationSharingFunction
// Kind: ScriptStruct; super: TickFunction
struct FTickAnimationSharingFunction
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

static_assert(offsetof(FTickAnimationSharingFunction, TickGroup) == 8, "Offset mismatch for FTickAnimationSharingFunction::TickGroup");
static_assert(offsetof(FTickAnimationSharingFunction, EndTickGroup) == 9, "Offset mismatch for FTickAnimationSharingFunction::EndTickGroup");
static_assert(offsetof(FTickAnimationSharingFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FTickAnimationSharingFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FTickAnimationSharingFunction, TickInterval) == 12, "Offset mismatch for FTickAnimationSharingFunction::TickInterval");

// /Script/AnimationSharing.AnimSharingAdditiveInstance
// Kind: Class; super: AnimInstance
class UAnimSharingAdditiveInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TWeakObjectPtr<void> BaseComponent; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AdditiveAnimation; // 0x0268 (Size: 0x8, Type: WeakObjectProperty)
    float Alpha; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStateBool; // 0x0274 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 608, "Offset mismatch for UAnimSharingAdditiveInstance::BaseComponent");
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 616, "Offset mismatch for UAnimSharingAdditiveInstance::AdditiveAnimation");
static_assert(offsetof(UAnimSharingAdditiveInstance, Alpha) == 624, "Offset mismatch for UAnimSharingAdditiveInstance::Alpha");
static_assert(offsetof(UAnimSharingAdditiveInstance, bStateBool) == 628, "Offset mismatch for UAnimSharingAdditiveInstance::bStateBool");

// /Script/AnimationSharing.AnimSharingInstance
// Kind: Class; super: Object
class UAnimSharingInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RegisteredActors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0038
    void* StateProcessor; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x40]; // 0x0090
    TArray<void*> UsedAnimationSequences; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x00E0
    void* StateEnum; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* SharingActor; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 40, "Offset mismatch for UAnimSharingInstance::RegisteredActors");
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 136, "Offset mismatch for UAnimSharingInstance::StateProcessor");
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 208, "Offset mismatch for UAnimSharingInstance::UsedAnimationSequences");
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 240, "Offset mismatch for UAnimSharingInstance::StateEnum");
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 248, "Offset mismatch for UAnimSharingInstance::SharingActor");

// /Script/AnimationSharing.AnimSharingStateInstance
// Kind: Class; super: AnimInstance
class UAnimSharingStateInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* AnimationToPlay; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    float PermutationTimeOffset; // 0x0268 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x026C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStateBool; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0271
    void* Instance; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 608, "Offset mismatch for UAnimSharingStateInstance::AnimationToPlay");
static_assert(offsetof(UAnimSharingStateInstance, PermutationTimeOffset) == 616, "Offset mismatch for UAnimSharingStateInstance::PermutationTimeOffset");
static_assert(offsetof(UAnimSharingStateInstance, PlayRate) == 620, "Offset mismatch for UAnimSharingStateInstance::PlayRate");
static_assert(offsetof(UAnimSharingStateInstance, bStateBool) == 624, "Offset mismatch for UAnimSharingStateInstance::bStateBool");
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 632, "Offset mismatch for UAnimSharingStateInstance::Instance");

// /Script/AnimationSharing.AnimSharingTransitionInstance
// Kind: Class; super: AnimInstance
class UAnimSharingTransitionInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TWeakObjectPtr<void> FromComponent; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ToComponent; // 0x0268 (Size: 0x8, Type: WeakObjectProperty)
    float BlendTime; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBlendBool; // 0x0274 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 608, "Offset mismatch for UAnimSharingTransitionInstance::FromComponent");
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 616, "Offset mismatch for UAnimSharingTransitionInstance::ToComponent");
static_assert(offsetof(UAnimSharingTransitionInstance, BlendTime) == 624, "Offset mismatch for UAnimSharingTransitionInstance::BlendTime");
static_assert(offsetof(UAnimSharingTransitionInstance, bBlendBool) == 628, "Offset mismatch for UAnimSharingTransitionInstance::bBlendBool");

// /Script/AnimationSharing.AnimationSharingManager
// Kind: Class; super: Object
class UAnimationSharingManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Skeletons; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerSkeletonData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAnimationSharingManager, Skeletons) == 40, "Offset mismatch for UAnimationSharingManager::Skeletons");
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 56, "Offset mismatch for UAnimationSharingManager::PerSkeletonData");

// /Script/AnimationSharing.AnimationSharingSetup
// Kind: Class; super: Object
class UAnimationSharingSetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SkeletonSetups; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ScalabilitySettings[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 40, "Offset mismatch for UAnimationSharingSetup::SkeletonSetups");
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 56, "Offset mismatch for UAnimationSharingSetup::ScalabilitySettings");

// /Script/AnimationSharing.AnimationSharingStateProcessor
// Kind: Class; super: Object
class UAnimationSharingStateProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> AnimationStateEnum; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 40, "Offset mismatch for UAnimationSharingStateProcessor::AnimationStateEnum");
