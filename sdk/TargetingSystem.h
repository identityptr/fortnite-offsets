/**
 * decamp dumper generated SDK
 * Package: /Script/TargetingSystem
 */
#pragma once
#include "Basic.h"

// /Script/TargetingSystem.CollisionQueryTaskData
// Kind: ScriptStruct; super: none
struct FCollisionQueryTaskData
{
public:
    TArray<void*> IgnoredActors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCollisionQueryTaskData, IgnoredActors) == 0, "Offset mismatch for FCollisionQueryTaskData::IgnoredActors");

// /Script/TargetingSystem.TargetingAsyncTaskData
// Kind: ScriptStruct; super: none
struct FTargetingAsyncTaskData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingDebugData
// Kind: ScriptStruct; super: none
struct FTargetingDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingDefaultResultData
// Kind: ScriptStruct; super: none
struct FTargetingDefaultResultData
{
public:
    std::uint8_t HitResult[0xF8]; // 0x0000 (Size: 0xF8, Type: StructProperty)
    float Score; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTargetingDefaultResultData, HitResult) == 0, "Offset mismatch for FTargetingDefaultResultData::HitResult");
static_assert(offsetof(FTargetingDefaultResultData, Score) == 248, "Offset mismatch for FTargetingDefaultResultData::Score");

// /Script/TargetingSystem.TargetingDefaultResultsSet
// Kind: ScriptStruct; super: none
struct FTargetingDefaultResultsSet
{
public:
    TArray<void*> TargetResults; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTargetingDefaultResultsSet, TargetResults) == 0, "Offset mismatch for FTargetingDefaultResultsSet::TargetResults");

// /Script/TargetingSystem.TargetingImmediateTaskData
// Kind: ScriptStruct; super: none
struct FTargetingImmediateTaskData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingRequestData
// Kind: ScriptStruct; super: none
struct FTargetingRequestData
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FScriptDelegate TargetingRequestDynamicDelegate; // 0x0020 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FTargetingRequestData, TargetingRequestDynamicDelegate) == 32, "Offset mismatch for FTargetingRequestData::TargetingRequestDynamicDelegate");

// /Script/TargetingSystem.TargetingRequestHandle
// Kind: ScriptStruct; super: none
struct FTargetingRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingSourceContext
// Kind: ScriptStruct; super: none
struct FTargetingSourceContext
{
public:
    void* SourceActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InstigatorActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    FName SourceSocketName; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* SourceObject; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTargetingSourceContext, SourceActor) == 0, "Offset mismatch for FTargetingSourceContext::SourceActor");
static_assert(offsetof(FTargetingSourceContext, InstigatorActor) == 8, "Offset mismatch for FTargetingSourceContext::InstigatorActor");
static_assert(offsetof(FTargetingSourceContext, SourceLocation) == 16, "Offset mismatch for FTargetingSourceContext::SourceLocation");
static_assert(offsetof(FTargetingSourceContext, SourceSocketName) == 40, "Offset mismatch for FTargetingSourceContext::SourceSocketName");
static_assert(offsetof(FTargetingSourceContext, SourceObject) == 48, "Offset mismatch for FTargetingSourceContext::SourceObject");

// /Script/TargetingSystem.TargetingTaskSet
// Kind: ScriptStruct; super: none
struct FTargetingTaskSet
{
public:
    TArray<void*> Tasks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTargetingTaskSet, Tasks) == 0, "Offset mismatch for FTargetingTaskSet::Tasks");

// /Script/TargetingSystem.AbilityTask_PerformTargeting
// Kind: Class; super: AbilityTask
class UAbilityTask_PerformTargeting
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnTargetReady; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_PerformTargeting, OnTargetReady) == 120, "Offset mismatch for UAbilityTask_PerformTargeting::OnTargetReady");

// /Script/TargetingSystem.AsyncAction_PerformTargeting
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncAction_PerformTargeting
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate Targeted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TargetingPreset; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakSourceActor; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> InitialTargets; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetingHandle[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseAsyncTargeting; // 0x0064 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAsyncAction_PerformTargeting, Targeted) == 48, "Offset mismatch for UAsyncAction_PerformTargeting::Targeted");
static_assert(offsetof(UAsyncAction_PerformTargeting, TargetingPreset) == 64, "Offset mismatch for UAsyncAction_PerformTargeting::TargetingPreset");
static_assert(offsetof(UAsyncAction_PerformTargeting, WeakSourceActor) == 72, "Offset mismatch for UAsyncAction_PerformTargeting::WeakSourceActor");
static_assert(offsetof(UAsyncAction_PerformTargeting, InitialTargets) == 80, "Offset mismatch for UAsyncAction_PerformTargeting::InitialTargets");
static_assert(offsetof(UAsyncAction_PerformTargeting, TargetingHandle) == 96, "Offset mismatch for UAsyncAction_PerformTargeting::TargetingHandle");
static_assert(offsetof(UAsyncAction_PerformTargeting, bUseAsyncTargeting) == 100, "Offset mismatch for UAsyncAction_PerformTargeting::bUseAsyncTargeting");

// /Script/TargetingSystem.SimpleTargetingFilterTask
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class USimpleTargetingFilterTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.SimpleTargetingSelectionTask
// Kind: Class; super: TargetingTask
class USimpleTargetingSelectionTask
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.SimpleTargetingSortTask
// Kind: Class; super: TargetingSortTask_Base
class USimpleTargetingSortTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAscending; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bStableSort (shared storage)
};

static_assert(offsetof(USimpleTargetingSortTask, bAscending) == 40, "Offset mismatch for USimpleTargetingSortTask::bAscending");

// /Script/TargetingSystem.TargetingFilterTask_ActorClass
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UTargetingFilterTask_ActorClass
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RequiredActorClassFilters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IgnoredActorClassFilters; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTargetingFilterTask_ActorClass, RequiredActorClassFilters) == 40, "Offset mismatch for UTargetingFilterTask_ActorClass::RequiredActorClassFilters");
static_assert(offsetof(UTargetingFilterTask_ActorClass, IgnoredActorClassFilters) == 56, "Offset mismatch for UTargetingFilterTask_ActorClass::IgnoredActorClassFilters");

// /Script/TargetingSystem.TargetingFilterTask_BasicFilterTemplate
// Kind: Class; super: TargetingTask
class UTargetingFilterTask_BasicFilterTemplate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingFilterTask_SortByDistance
// Kind: Class; super: TargetingSortTask_Base
class UTargetingFilterTask_SortByDistance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseDistanceToNearestBlockingCollider; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DistanceToCollisionChannel; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UTargetingFilterTask_SortByDistance, bUseDistanceToNearestBlockingCollider) == 48, "Offset mismatch for UTargetingFilterTask_SortByDistance::bUseDistanceToNearestBlockingCollider");
static_assert(offsetof(UTargetingFilterTask_SortByDistance, DistanceToCollisionChannel) == 49, "Offset mismatch for UTargetingFilterTask_SortByDistance::DistanceToCollisionChannel");

// /Script/TargetingSystem.TargetingPreset
// Kind: Class; super: DataAsset
class UTargetingPreset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TargetingTaskSet[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingPreset, TargetingTaskSet) == 40, "Offset mismatch for UTargetingPreset::TargetingTaskSet");

// /Script/TargetingSystem.TargetingSelectionTask_AOE
// Kind: Class; super: TargetingTask
class UTargetingSelectionTask_AOE
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ShapeType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    TArray<void*> CollisionObjectTypes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultSourceRotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIgnoreInstigatorActor; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0070 BoolProperty bTraceComplex (shared storage)
    // 0x0070 BoolProperty bUseRelativeOffset (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t HalfExtentX[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentY[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentZ[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfHeight[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    FName ComponentTag; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTargetingSelectionTask_AOE, ShapeType) == 40, "Offset mismatch for UTargetingSelectionTask_AOE::ShapeType");
static_assert(offsetof(UTargetingSelectionTask_AOE, CollisionChannel) == 41, "Offset mismatch for UTargetingSelectionTask_AOE::CollisionChannel");
static_assert(offsetof(UTargetingSelectionTask_AOE, CollisionProfileName) == 44, "Offset mismatch for UTargetingSelectionTask_AOE::CollisionProfileName");
static_assert(offsetof(UTargetingSelectionTask_AOE, CollisionObjectTypes) == 48, "Offset mismatch for UTargetingSelectionTask_AOE::CollisionObjectTypes");
static_assert(offsetof(UTargetingSelectionTask_AOE, DefaultSourceOffset) == 64, "Offset mismatch for UTargetingSelectionTask_AOE::DefaultSourceOffset");
static_assert(offsetof(UTargetingSelectionTask_AOE, DefaultSourceRotationOffset) == 88, "Offset mismatch for UTargetingSelectionTask_AOE::DefaultSourceRotationOffset");
static_assert(offsetof(UTargetingSelectionTask_AOE, bIgnoreInstigatorActor) == 112, "Offset mismatch for UTargetingSelectionTask_AOE::bIgnoreInstigatorActor");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfExtentX) == 120, "Offset mismatch for UTargetingSelectionTask_AOE::HalfExtentX");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfExtentY) == 160, "Offset mismatch for UTargetingSelectionTask_AOE::HalfExtentY");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfExtentZ) == 200, "Offset mismatch for UTargetingSelectionTask_AOE::HalfExtentZ");
static_assert(offsetof(UTargetingSelectionTask_AOE, Radius) == 240, "Offset mismatch for UTargetingSelectionTask_AOE::Radius");
static_assert(offsetof(UTargetingSelectionTask_AOE, HalfHeight) == 280, "Offset mismatch for UTargetingSelectionTask_AOE::HalfHeight");
static_assert(offsetof(UTargetingSelectionTask_AOE, ComponentTag) == 320, "Offset mismatch for UTargetingSelectionTask_AOE::ComponentTag");

// /Script/TargetingSystem.TargetingSelectionTask_SourceActor
// Kind: Class; super: TargetingTask
class UTargetingSelectionTask_SourceActor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TargetingSystem.TargetingSelectionTask_Trace
// Kind: Class; super: TargetingTask
class UTargetingSelectionTask_Trace
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TraceType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TraceChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRadius[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceCapsuleHalfHeight[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentX[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentY[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceBoxHalfExtentZ[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSweptTraceRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultTraceLength[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExplicitTraceDirection[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bComplexTrace; // 0x0168 (Size: 0x1, Type: BoolProperty)
    // 0x0168 BoolProperty bIgnoreInstigatorActor (shared storage)
    // 0x0168 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0168 BoolProperty bMultiTrace (shared storage)
};

static_assert(offsetof(UTargetingSelectionTask_Trace, TraceType) == 40, "Offset mismatch for UTargetingSelectionTask_Trace::TraceType");
static_assert(offsetof(UTargetingSelectionTask_Trace, TraceChannel) == 41, "Offset mismatch for UTargetingSelectionTask_Trace::TraceChannel");
static_assert(offsetof(UTargetingSelectionTask_Trace, CollisionProfileName) == 44, "Offset mismatch for UTargetingSelectionTask_Trace::CollisionProfileName");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceRadius) == 48, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceRadius");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceCapsuleHalfHeight) == 88, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceCapsuleHalfHeight");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceBoxHalfExtentX) == 128, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceBoxHalfExtentX");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceBoxHalfExtentY) == 168, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceBoxHalfExtentY");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceBoxHalfExtentZ) == 208, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceBoxHalfExtentZ");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSweptTraceRotation) == 248, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSweptTraceRotation");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultTraceLength) == 272, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultTraceLength");
static_assert(offsetof(UTargetingSelectionTask_Trace, DefaultSourceOffset) == 312, "Offset mismatch for UTargetingSelectionTask_Trace::DefaultSourceOffset");
static_assert(offsetof(UTargetingSelectionTask_Trace, ExplicitTraceDirection) == 336, "Offset mismatch for UTargetingSelectionTask_Trace::ExplicitTraceDirection");
static_assert(offsetof(UTargetingSelectionTask_Trace, bComplexTrace) == 360, "Offset mismatch for UTargetingSelectionTask_Trace::bComplexTrace");

// /Script/TargetingSystem.TargetingSortTask_Base
// Kind: Class; super: TargetingTask
class UTargetingSortTask_Base
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAscending; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bStableSort (shared storage)
};

static_assert(offsetof(UTargetingSortTask_Base, bAscending) == 40, "Offset mismatch for UTargetingSortTask_Base::bAscending");

// /Script/TargetingSystem.TargetingSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UTargetingSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> AsyncTargetingRequests; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTargetingSubsystem, AsyncTargetingRequests) == 64, "Offset mismatch for UTargetingSubsystem::AsyncTargetingRequests");

// /Script/TargetingSystem.TargetingTask
// Kind: Class; super: Object
class UTargetingTask
{
public:
    std::uint8_t Opaque[1];
};
