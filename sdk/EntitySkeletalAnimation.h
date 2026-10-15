/**
 * decamp dumper generated SDK
 * Package: /Script/EntitySkeletalAnimation
 */
#pragma once
#include "Basic.h"

// /Script/EntitySkeletalAnimation.EntitySkeletalAnimationCurrentSeconds
// Kind: ScriptStruct; super: none
struct FEntitySkeletalAnimationCurrentSeconds
{
public:
    double time; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint32_t Generation; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FEntitySkeletalAnimationCurrentSeconds, time) == 0, "Offset mismatch for FEntitySkeletalAnimationCurrentSeconds::time");
static_assert(offsetof(FEntitySkeletalAnimationCurrentSeconds, Generation) == 8, "Offset mismatch for FEntitySkeletalAnimationCurrentSeconds::Generation");

// /Script/EntitySkeletalAnimation.EntitySkeletonModifierSystemFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntitySkeletonModifierSystemFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntitySkeletonModifierTaskQueueFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntitySkeletonModifierTaskQueueFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntitySkinnedAssetFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FEntitySkinnedAssetFragment
{
public:
    TWeakObjectPtr<void> Asset; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FEntitySkinnedAssetFragment, Asset) == 0, "Offset mismatch for FEntitySkinnedAssetFragment::Asset");

// /Script/EntitySkeletalAnimation.EntitySkinnedAssetImplFragment
// Kind: ScriptStruct; super: MassFragment
struct FEntitySkinnedAssetImplFragment
{
public:
    TWeakObjectPtr<void> Implementation; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FEntitySkinnedAssetImplFragment, Implementation) == 0, "Offset mismatch for FEntitySkinnedAssetImplFragment::Implementation");

// /Script/EntitySkeletalAnimation.EntityWorldTransformModuleComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FEntityWorldTransformModuleComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.SkeletalMeshDefaultModifierDesc
// Kind: ScriptStruct; super: none
struct FSkeletalMeshDefaultModifierDesc
{
public:
    std::uint8_t ModifierClass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t AnimationAsset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Position[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSkeletalMeshDefaultModifierDesc, ModifierClass) == 0, "Offset mismatch for FSkeletalMeshDefaultModifierDesc::ModifierClass");
static_assert(offsetof(FSkeletalMeshDefaultModifierDesc, AnimationAsset) == 24, "Offset mismatch for FSkeletalMeshDefaultModifierDesc::AnimationAsset");
static_assert(offsetof(FSkeletalMeshDefaultModifierDesc, Position) == 48, "Offset mismatch for FSkeletalMeshDefaultModifierDesc::Position");

// /Script/EntitySkeletalAnimation.UAFEntityMeshReferenceModuleComponent
// Kind: ScriptStruct; super: UAFModuleInstanceComponent
struct FUAFEntityMeshReferenceModuleComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.UAFSystemFactoryAsset_ModifierStack
// Kind: ScriptStruct; super: UAFSystemFactoryAsset
struct FUAFSystemFactoryAsset_ModifierStack
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ModifierStack; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUAFSystemFactoryAsset_ModifierStack, ModifierStack) == 8, "Offset mismatch for FUAFSystemFactoryAsset_ModifierStack::ModifierStack");

// /Script/EntitySkeletalAnimation.UAFTaskQueueNodeDesc
// Kind: ScriptStruct; super: UAFModifierAnimNodeDesc
struct FUAFTaskQueueNodeDesc
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUAFTaskQueueNodeDesc, Input) == 8, "Offset mismatch for FUAFTaskQueueNodeDesc::Input");

// /Script/EntitySkeletalAnimation.EntityAnimationSequenceImpl
// Kind: Class; super: Object
class UEntityAnimationSequenceImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntityControlRigBaseImpl
// Kind: Class; super: Object
class UEntityControlRigBaseImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntityControlRigBlueprintImpl
// Kind: Class; super: EntityControlRigBaseImpl
class UEntityControlRigBlueprintImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntityControlRigRuntimeAssetImpl
// Kind: Class; super: EntityControlRigBaseImpl
class UEntityControlRigRuntimeAssetImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntityProxySkeletonModifierBase
// Kind: Class; super: EntityModifierBase
class UEntityProxySkeletonModifierBase
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t MassEntityHandle[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* Entity; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakWorld; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    void* CachedImpl; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityProxySkeletonModifierBase, MassEntityHandle) == 88, "Offset mismatch for UEntityProxySkeletonModifierBase::MassEntityHandle");
static_assert(offsetof(UEntityProxySkeletonModifierBase, Entity) == 96, "Offset mismatch for UEntityProxySkeletonModifierBase::Entity");
static_assert(offsetof(UEntityProxySkeletonModifierBase, WeakWorld) == 104, "Offset mismatch for UEntityProxySkeletonModifierBase::WeakWorld");
static_assert(offsetof(UEntityProxySkeletonModifierBase, CachedImpl) == 112, "Offset mismatch for UEntityProxySkeletonModifierBase::CachedImpl");

// /Script/EntitySkeletalAnimation.EntitySkeletalAnimationBase
// Kind: Class; super: EntityModifierBase
class UEntitySkeletalAnimationBase
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t CurrentSeconds[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint32_t ProcessedCurrentSecondsGeneration; // 0x0130 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bPerformedInitialSetup; // 0x0134 (Size: 0x1, Type: BoolProperty)
    // 0x0134 BoolProperty bReplicatedCurrentSeconds (shared storage)
};

static_assert(offsetof(UEntitySkeletalAnimationBase, CurrentSeconds) == 288, "Offset mismatch for UEntitySkeletalAnimationBase::CurrentSeconds");
static_assert(offsetof(UEntitySkeletalAnimationBase, ProcessedCurrentSecondsGeneration) == 304, "Offset mismatch for UEntitySkeletalAnimationBase::ProcessedCurrentSecondsGeneration");
static_assert(offsetof(UEntitySkeletalAnimationBase, bPerformedInitialSetup) == 308, "Offset mismatch for UEntitySkeletalAnimationBase::bPerformedInitialSetup");

// /Script/EntitySkeletalAnimation.EntitySkeletonEasingModifierImpl
// Kind: Class; super: Object
class UEntitySkeletonEasingModifierImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntitySkeletonEasingModifierUAFProcessor
// Kind: Class; super: MassProcessor
class UEntitySkeletonEasingModifierUAFProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, ExecutionOrder) == 40, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::ExecutionOrder");
static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, ProcessingPhase) == 80, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::ProcessingPhase");
static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, ExecutionFlags) == 81, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::ExecutionFlags");
static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, bAggregateRequirements) == 82, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::bAggregateRequirements");
static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, ActivationState) == 83, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::ActivationState");
static_assert(offsetof(UEntitySkeletonEasingModifierUAFProcessor, ExecutionPriority) == 84, "Offset mismatch for UEntitySkeletonEasingModifierUAFProcessor::ExecutionPriority");

// /Script/EntitySkeletalAnimation.EntitySkeletonModifierImplInterface
// Kind: Class; super: EntityModifierImplInterface
class UEntitySkeletonModifierImplInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntitySkeletonModifierStackImpl
// Kind: Class; super: EntityModifierStackImpl
class UEntitySkeletonModifierStackImpl
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* MeshImpl; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntitySkeletonModifierStackImpl, MeshImpl) == 80, "Offset mismatch for UEntitySkeletonModifierStackImpl::MeshImpl");

// /Script/EntitySkeletalAnimation.EntitySkeletonModifierSystemDestructor
// Kind: Class; super: MassObserverProcessor
class UEntitySkeletonModifierSystemDestructor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntitySkeletonModifierSystemDestructor, ObservedType) == 256, "Offset mismatch for UEntitySkeletonModifierSystemDestructor::ObservedType");
static_assert(offsetof(UEntitySkeletonModifierSystemDestructor, ObservedTypes) == 264, "Offset mismatch for UEntitySkeletonModifierSystemDestructor::ObservedTypes");
static_assert(offsetof(UEntitySkeletonModifierSystemDestructor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UEntitySkeletonModifierSystemDestructor::bAutoRegisterWithObserverRegistry");

// /Script/EntitySkeletalAnimation.EntitySkeletonProxyModifierImpl
// Kind: Class; super: Object
class UEntitySkeletonProxyModifierImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.EntityUAFSystemImpl
// Kind: Class; super: Object
class UEntityUAFSystemImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.MeshEntityComponentImpl_Skinned
// Kind: Class; super: MeshEntityComponentImpl
class UMeshEntityComponentImpl_Skinned
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    void* ModifierStackImpl; // 0x0458 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshEntityComponentImpl_Skinned, ModifierStackImpl) == 1112, "Offset mismatch for UMeshEntityComponentImpl_Skinned::ModifierStackImpl");

// /Script/EntitySkeletalAnimation.MeshEntityComponentImpl_SkinnedLODProcessor
// Kind: Class; super: MassProcessor
class UMeshEntityComponentImpl_SkinnedLODProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, ExecutionOrder) == 40, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::ExecutionOrder");
static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, ProcessingPhase) == 80, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::ProcessingPhase");
static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, ExecutionFlags) == 81, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::ExecutionFlags");
static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::bAggregateRequirements");
static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, ActivationState) == 83, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::ActivationState");
static_assert(offsetof(UMeshEntityComponentImpl_SkinnedLODProcessor, ExecutionPriority) == 84, "Offset mismatch for UMeshEntityComponentImpl_SkinnedLODProcessor::ExecutionPriority");

// /Script/EntitySkeletalAnimation.SkeletalAnimationRetargetMethodBase
// Kind: Class; super: Object
class USkeletalAnimationRetargetMethodBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntitySkeletalAnimation.SkeletalMeshDefaultModifierStackUserData
// Kind: Class; super: AssetUserData
class USkeletalMeshDefaultModifierStackUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PersistedModifiers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* DefaultModifiers; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USkeletalMeshDefaultModifierStackUserData, PersistedModifiers) == 40, "Offset mismatch for USkeletalMeshDefaultModifierStackUserData::PersistedModifiers");
static_assert(offsetof(USkeletalMeshDefaultModifierStackUserData, DefaultModifiers) == 56, "Offset mismatch for USkeletalMeshDefaultModifierStackUserData::DefaultModifiers");
