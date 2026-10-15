/**
 * decamp dumper generated SDK
 * Package: /Script/MassEngine
 */
#pragma once
#include "Basic.h"

// /Script/MassEngine.MassEditorVisualizationMeshFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassEditorVisualizationMeshFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassISMGroupingFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassISMGroupingFragment
{
public:
    std::uint8_t GroupID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassISMGroupingFragment, GroupID) == 0, "Offset mismatch for FMassISMGroupingFragment::GroupID");

// /Script/MassEngine.MassNavigationEvaluatedTag
// Kind: ScriptStruct; super: MassTag
struct FMassNavigationEvaluatedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassNavigationRelevantFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavigationRelevantFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassNavigationRelevantParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassNavigationRelevantParameters
{
public:
    std::uint8_t bFillCollisionUnderneathForNavData; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassNavigationRelevantParameters, bFillCollisionUnderneathForNavData) == 0, "Offset mismatch for FMassNavigationRelevantParameters::bFillCollisionUnderneathForNavData");

// /Script/MassEngine.MassOverrideMaterialsFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassOverrideMaterialsFragment
{
public:
    TArray<void*> OverrideMaterials; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassOverrideMaterialsFragment, OverrideMaterials) == 0, "Offset mismatch for FMassOverrideMaterialsFragment::OverrideMaterials");

// /Script/MassEngine.MassPhysicsBodyInstanceFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassPhysicsBodyInstanceFragment
{
public:
    TWeakObjectPtr<void> BodyInstanceOwnerObject; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassPhysicsBodyInstanceFragment, BodyInstanceOwnerObject) == 0, "Offset mismatch for FMassPhysicsBodyInstanceFragment::BodyInstanceOwnerObject");

// /Script/MassEngine.MassPhysicsBodyInstanceInitializedTag
// Kind: ScriptStruct; super: MassTag
struct FMassPhysicsBodyInstanceInitializedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassPhysicsBodyInstancesInitializationRequestFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassPhysicsBodyInstancesInitializationRequestFragment
{
public:
    TWeakObjectPtr<void> StaticMesh; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Transforms; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0018
    void* PrimitiveComponent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0030
    std::uint8_t bDynamic; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassPhysicsBodyInstancesInitializationRequestFragment, StaticMesh) == 0, "Offset mismatch for FMassPhysicsBodyInstancesInitializationRequestFragment::StaticMesh");
static_assert(offsetof(FMassPhysicsBodyInstancesInitializationRequestFragment, Transforms) == 8, "Offset mismatch for FMassPhysicsBodyInstancesInitializationRequestFragment::Transforms");
static_assert(offsetof(FMassPhysicsBodyInstancesInitializationRequestFragment, PrimitiveComponent) == 40, "Offset mismatch for FMassPhysicsBodyInstancesInitializationRequestFragment::PrimitiveComponent");
static_assert(offsetof(FMassPhysicsBodyInstancesInitializationRequestFragment, bDynamic) == 80, "Offset mismatch for FMassPhysicsBodyInstancesInitializationRequestFragment::bDynamic");

// /Script/MassEngine.MassPhysicsCollisionSettingsFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassPhysicsCollisionSettingsFragment
{
public:
    std::uint8_t CollisionType; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CollisionResponse[0x1]; // 0x0001 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassPhysicsCollisionSettingsFragment, CollisionType) == 0, "Offset mismatch for FMassPhysicsCollisionSettingsFragment::CollisionType");
static_assert(offsetof(FMassPhysicsCollisionSettingsFragment, CollisionResponse) == 1, "Offset mismatch for FMassPhysicsCollisionSettingsFragment::CollisionResponse");

// /Script/MassEngine.MassPhysicsDynamicBodyTag
// Kind: ScriptStruct; super: MassTag
struct FMassPhysicsDynamicBodyTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassPhysicsSimulatedBodyTag
// Kind: ScriptStruct; super: MassTag
struct FMassPhysicsSimulatedBodyTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassRenderISMCandidateTag
// Kind: ScriptStruct; super: MassTag
struct FMassRenderISMCandidateTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassRenderISMFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRenderISMFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassRenderISMInstanceFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRenderISMInstanceFragment
{
public:
    std::int32_t InstanceIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassRenderISMInstanceFragment, InstanceIndex) == 0, "Offset mismatch for FMassRenderISMInstanceFragment::InstanceIndex");

// /Script/MassEngine.MassRenderISMLinkFragment
// Kind: ScriptStruct; super: MassEntityLinkFragment
struct FMassRenderISMLinkFragment
{
public:
    std::uint8_t LinkedEntityHandle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassRenderISMLinkFragment, LinkedEntityHandle) == 0, "Offset mismatch for FMassRenderISMLinkFragment::LinkedEntityHandle");

// /Script/MassEngine.MassRenderPrimitiveFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRenderPrimitiveFragment
{
public:
    std::uint8_t LocalBounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t WorldBounds[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t DetailMode; // 0x0080 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsVisible; // 0x0081 (Size: 0x1, Type: BoolProperty)
    // 0x0081 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    std::uint8_t Pad_0000[0x6]; // 0x0082
    TArray<void*> RuntimeVirtualTextures; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassRenderPrimitiveFragment, LocalBounds) == 0, "Offset mismatch for FMassRenderPrimitiveFragment::LocalBounds");
static_assert(offsetof(FMassRenderPrimitiveFragment, WorldBounds) == 56, "Offset mismatch for FMassRenderPrimitiveFragment::WorldBounds");
static_assert(offsetof(FMassRenderPrimitiveFragment, CustomPrimitiveData) == 112, "Offset mismatch for FMassRenderPrimitiveFragment::CustomPrimitiveData");
static_assert(offsetof(FMassRenderPrimitiveFragment, DetailMode) == 128, "Offset mismatch for FMassRenderPrimitiveFragment::DetailMode");
static_assert(offsetof(FMassRenderPrimitiveFragment, bIsVisible) == 129, "Offset mismatch for FMassRenderPrimitiveFragment::bIsVisible");
static_assert(offsetof(FMassRenderPrimitiveFragment, RuntimeVirtualTextures) == 136, "Offset mismatch for FMassRenderPrimitiveFragment::RuntimeVirtualTextures");

// /Script/MassEngine.MassRenderStateFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRenderStateFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassRenderStaticMeshFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRenderStaticMeshFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassSceneProxyCreatedTag
// Kind: ScriptStruct; super: MassTag
struct FMassSceneProxyCreatedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassStaticMeshFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassStaticMeshFragment
{
public:
    TWeakObjectPtr<void> Mesh; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassStaticMeshFragment, Mesh) == 0, "Offset mismatch for FMassStaticMeshFragment::Mesh");

// /Script/MassEngine.MassTypeElementFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassTypeElementFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEngine.MassVisualizationMeshFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassVisualizationMeshFragment
{
public:
    std::int64_t CustomDepthStencilValue; // 0x0000 (Size: 0x8, Type: Int64Property)
    std::int32_t TranslucencySortPriority; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t LightingChannels[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
    std::uint8_t AffectDynamicIndirectLighting; // 0x000D (Size: 0x1, Type: BoolProperty)
    // 0x000D BoolProperty AffectIndirectLightingWhileHidden (shared storage)
    // 0x000D BoolProperty CastHiddenShadow (shared storage)
    // 0x000D BoolProperty CastShadow (shared storage)
    // 0x000D BoolProperty CastShadowAsTwoSided (shared storage)
    // 0x000D BoolProperty HiddenInGame (shared storage)
    // 0x000D BoolProperty NeverDistanceCull (shared storage)
    // 0x000D BoolProperty ReceivesDecals (shared storage)
    std::uint8_t CastContactShadow; // 0x000E (Size: 0x1, Type: BoolProperty)
    // 0x000E BoolProperty CastFarShadow (shared storage)
    // 0x000E BoolProperty CastInsetShadow (shared storage)
    // 0x000E BoolProperty RenderCustomDepth (shared storage)
    // 0x000E BoolProperty VisibleInReflections (shared storage)
};

static_assert(offsetof(FMassVisualizationMeshFragment, CustomDepthStencilValue) == 0, "Offset mismatch for FMassVisualizationMeshFragment::CustomDepthStencilValue");
static_assert(offsetof(FMassVisualizationMeshFragment, TranslucencySortPriority) == 8, "Offset mismatch for FMassVisualizationMeshFragment::TranslucencySortPriority");
static_assert(offsetof(FMassVisualizationMeshFragment, LightingChannels) == 12, "Offset mismatch for FMassVisualizationMeshFragment::LightingChannels");
static_assert(offsetof(FMassVisualizationMeshFragment, AffectDynamicIndirectLighting) == 13, "Offset mismatch for FMassVisualizationMeshFragment::AffectDynamicIndirectLighting");
static_assert(offsetof(FMassVisualizationMeshFragment, CastContactShadow) == 14, "Offset mismatch for FMassVisualizationMeshFragment::CastContactShadow");

// /Script/MassEngine.MassBaseStaticMeshDestroyRenderStateProcessor
// Kind: Class; super: MassObserverProcessor
class UMassBaseStaticMeshDestroyRenderStateProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassBaseStaticMeshDestroyRenderStateProcessor, ObservedType) == 256, "Offset mismatch for UMassBaseStaticMeshDestroyRenderStateProcessor::ObservedType");
static_assert(offsetof(UMassBaseStaticMeshDestroyRenderStateProcessor, ObservedTypes) == 264, "Offset mismatch for UMassBaseStaticMeshDestroyRenderStateProcessor::ObservedTypes");
static_assert(offsetof(UMassBaseStaticMeshDestroyRenderStateProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassBaseStaticMeshDestroyRenderStateProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassBaseStaticMeshSetupRenderStateProcessor
// Kind: Class; super: MassProcessor
class UMassBaseStaticMeshSetupRenderStateProcessor
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

static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::ExecutionOrder");
static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::ProcessingPhase");
static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::ExecutionFlags");
static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, ActivationState) == 83, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::ActivationState");
static_assert(offsetof(UMassBaseStaticMeshSetupRenderStateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassBaseStaticMeshSetupRenderStateProcessor::ExecutionPriority");

// /Script/MassEngine.MassCreateRenderStateProcessor
// Kind: Class; super: MassProcessor
class UMassCreateRenderStateProcessor
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

static_assert(offsetof(UMassCreateRenderStateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCreateRenderStateProcessor::ExecutionOrder");
static_assert(offsetof(UMassCreateRenderStateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCreateRenderStateProcessor::ProcessingPhase");
static_assert(offsetof(UMassCreateRenderStateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCreateRenderStateProcessor::ExecutionFlags");
static_assert(offsetof(UMassCreateRenderStateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCreateRenderStateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCreateRenderStateProcessor, ActivationState) == 83, "Offset mismatch for UMassCreateRenderStateProcessor::ActivationState");
static_assert(offsetof(UMassCreateRenderStateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCreateRenderStateProcessor::ExecutionPriority");

// /Script/MassEngine.MassDestroyRenderStateProcessor
// Kind: Class; super: MassObserverProcessor
class UMassDestroyRenderStateProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassDestroyRenderStateProcessor, ObservedType) == 256, "Offset mismatch for UMassDestroyRenderStateProcessor::ObservedType");
static_assert(offsetof(UMassDestroyRenderStateProcessor, ObservedTypes) == 264, "Offset mismatch for UMassDestroyRenderStateProcessor::ObservedTypes");
static_assert(offsetof(UMassDestroyRenderStateProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassDestroyRenderStateProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassDirtyNavigationRelevantUpdateProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassDirtyNavigationRelevantUpdateProcessor
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

static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::ExecutionOrder");
static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::ProcessingPhase");
static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::ExecutionFlags");
static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, ActivationState) == 83, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::ActivationState");
static_assert(offsetof(UMassDirtyNavigationRelevantUpdateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassDirtyNavigationRelevantUpdateProcessor::ExecutionPriority");

// /Script/MassEngine.MassDirtyRenderISMInstanceProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassDirtyRenderISMInstanceProcessor
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

static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::ExecutionOrder");
static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::ProcessingPhase");
static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::ExecutionFlags");
static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::bAggregateRequirements");
static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, ActivationState) == 83, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::ActivationState");
static_assert(offsetof(UMassDirtyRenderISMInstanceProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassDirtyRenderISMInstanceProcessor::ExecutionPriority");

// /Script/MassEngine.MassISMDestroyRenderStateProcessor
// Kind: Class; super: MassBaseStaticMeshDestroyRenderStateProcessor
class UMassISMDestroyRenderStateProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassISMDestroyRenderStateProcessor, ObservedType) == 256, "Offset mismatch for UMassISMDestroyRenderStateProcessor::ObservedType");
static_assert(offsetof(UMassISMDestroyRenderStateProcessor, ObservedTypes) == 264, "Offset mismatch for UMassISMDestroyRenderStateProcessor::ObservedTypes");
static_assert(offsetof(UMassISMDestroyRenderStateProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassISMDestroyRenderStateProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassInstantiateStaticMeshAndCreateISMRenderStateProcessor
// Kind: Class; super: MassBaseStaticMeshSetupRenderStateProcessor
class UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor
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

static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::ExecutionOrder");
static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::ProcessingPhase");
static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::ExecutionFlags");
static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, ActivationState) == 83, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::ActivationState");
static_assert(offsetof(UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassInstantiateStaticMeshAndCreateISMRenderStateProcessor::ExecutionPriority");

// /Script/MassEngine.MassNavigationElementProcessor
// Kind: Class; super: MassProcessor
class UMassNavigationElementProcessor
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

static_assert(offsetof(UMassNavigationElementProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassNavigationElementProcessor::ExecutionOrder");
static_assert(offsetof(UMassNavigationElementProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassNavigationElementProcessor::ProcessingPhase");
static_assert(offsetof(UMassNavigationElementProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassNavigationElementProcessor::ExecutionFlags");
static_assert(offsetof(UMassNavigationElementProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassNavigationElementProcessor::bAggregateRequirements");
static_assert(offsetof(UMassNavigationElementProcessor, ActivationState) == 83, "Offset mismatch for UMassNavigationElementProcessor::ActivationState");
static_assert(offsetof(UMassNavigationElementProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassNavigationElementProcessor::ExecutionPriority");

// /Script/MassEngine.MassNavigationRelevantMassDeinitializer
// Kind: Class; super: MassObserverProcessor
class UMassNavigationRelevantMassDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassNavigationRelevantMassDeinitializer, ObservedType) == 256, "Offset mismatch for UMassNavigationRelevantMassDeinitializer::ObservedType");
static_assert(offsetof(UMassNavigationRelevantMassDeinitializer, ObservedTypes) == 264, "Offset mismatch for UMassNavigationRelevantMassDeinitializer::ObservedTypes");
static_assert(offsetof(UMassNavigationRelevantMassDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassNavigationRelevantMassDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassPhysicsBodyInstanceReInitializer
// Kind: Class; super: MassObserverProcessor
class UMassPhysicsBodyInstanceReInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassPhysicsBodyInstanceReInitializer, ObservedType) == 256, "Offset mismatch for UMassPhysicsBodyInstanceReInitializer::ObservedType");
static_assert(offsetof(UMassPhysicsBodyInstanceReInitializer, ObservedTypes) == 264, "Offset mismatch for UMassPhysicsBodyInstanceReInitializer::ObservedTypes");
static_assert(offsetof(UMassPhysicsBodyInstanceReInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassPhysicsBodyInstanceReInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassPhysicsBodyInstancesBatchInitializer
// Kind: Class; super: MassProcessor
class UMassPhysicsBodyInstancesBatchInitializer
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

static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, ExecutionOrder) == 40, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::ExecutionOrder");
static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, ProcessingPhase) == 80, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::ProcessingPhase");
static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, ExecutionFlags) == 81, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::ExecutionFlags");
static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, bAggregateRequirements) == 82, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::bAggregateRequirements");
static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, ActivationState) == 83, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::ActivationState");
static_assert(offsetof(UMassPhysicsBodyInstancesBatchInitializer, ExecutionPriority) == 84, "Offset mismatch for UMassPhysicsBodyInstancesBatchInitializer::ExecutionPriority");

// /Script/MassEngine.MassPhysicsBodyInstancesBatcher
// Kind: Class; super: MassProcessor
class UMassPhysicsBodyInstancesBatcher
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

static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, ExecutionOrder) == 40, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::ExecutionOrder");
static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, ProcessingPhase) == 80, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::ProcessingPhase");
static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, ExecutionFlags) == 81, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::ExecutionFlags");
static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, bAggregateRequirements) == 82, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::bAggregateRequirements");
static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, ActivationState) == 83, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::ActivationState");
static_assert(offsetof(UMassPhysicsBodyInstancesBatcher, ExecutionPriority) == 84, "Offset mismatch for UMassPhysicsBodyInstancesBatcher::ExecutionPriority");

// /Script/MassEngine.MassRenderStateDirtyUpdateProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassRenderStateDirtyUpdateProcessor
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

static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::ExecutionOrder");
static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::ProcessingPhase");
static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::ExecutionFlags");
static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, ActivationState) == 83, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::ActivationState");
static_assert(offsetof(UMassRenderStateDirtyUpdateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassRenderStateDirtyUpdateProcessor::ExecutionPriority");

// /Script/MassEngine.MassStaticMeshDestroyRenderStateProcessor
// Kind: Class; super: MassBaseStaticMeshDestroyRenderStateProcessor
class UMassStaticMeshDestroyRenderStateProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassStaticMeshDestroyRenderStateProcessor, ObservedType) == 256, "Offset mismatch for UMassStaticMeshDestroyRenderStateProcessor::ObservedType");
static_assert(offsetof(UMassStaticMeshDestroyRenderStateProcessor, ObservedTypes) == 264, "Offset mismatch for UMassStaticMeshDestroyRenderStateProcessor::ObservedTypes");
static_assert(offsetof(UMassStaticMeshDestroyRenderStateProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassStaticMeshDestroyRenderStateProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassEngine.MassStaticMeshSetupRenderStateProcessor
// Kind: Class; super: MassBaseStaticMeshSetupRenderStateProcessor
class UMassStaticMeshSetupRenderStateProcessor
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

static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::ExecutionOrder");
static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::ProcessingPhase");
static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::ExecutionFlags");
static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, ActivationState) == 83, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::ActivationState");
static_assert(offsetof(UMassStaticMeshSetupRenderStateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassStaticMeshSetupRenderStateProcessor::ExecutionPriority");

// /Script/MassEngine.MassStaticMeshUpdateRenderStateProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassStaticMeshUpdateRenderStateProcessor
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

static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::ExecutionOrder");
static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::ProcessingPhase");
static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::ExecutionFlags");
static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, ActivationState) == 83, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::ActivationState");
static_assert(offsetof(UMassStaticMeshUpdateRenderStateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassStaticMeshUpdateRenderStateProcessor::ExecutionPriority");
