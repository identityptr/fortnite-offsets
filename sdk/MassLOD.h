/**
 * decamp dumper generated SDK
 * Package: /Script/MassLOD
 */
#pragma once
#include "Basic.h"

// /Script/MassLOD.MassCollectDistanceLODViewerInfoTag
// Kind: ScriptStruct; super: MassTag
struct FMassCollectDistanceLODViewerInfoTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassCollectLODViewerInfoTag
// Kind: ScriptStruct; super: MassTag
struct FMassCollectLODViewerInfoTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassHighLODTag
// Kind: ScriptStruct; super: MassTag
struct FMassHighLODTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassLowLODTag
// Kind: ScriptStruct; super: MassTag
struct FMassLowLODTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassMediumLODTag
// Kind: ScriptStruct; super: MassTag
struct FMassMediumLODTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassOffLODTag
// Kind: ScriptStruct; super: MassTag
struct FMassOffLODTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassSimulationLODFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSimulationLODFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassSimulationLODParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassSimulationLODParameters
{
public:
    float LODDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    float BufferHysteresisOnDistancePercentage; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t LODMaxCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0018
    std::uint8_t bSetLODTags; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassSimulationLODParameters, LODDistance) == 0, "Offset mismatch for FMassSimulationLODParameters::LODDistance");
static_assert(offsetof(FMassSimulationLODParameters, BufferHysteresisOnDistancePercentage) == 16, "Offset mismatch for FMassSimulationLODParameters::BufferHysteresisOnDistancePercentage");
static_assert(offsetof(FMassSimulationLODParameters, LODMaxCount) == 20, "Offset mismatch for FMassSimulationLODParameters::LODMaxCount");
static_assert(offsetof(FMassSimulationLODParameters, bSetLODTags) == 36, "Offset mismatch for FMassSimulationLODParameters::bSetLODTags");

// /Script/MassLOD.MassSimulationLODSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassSimulationLODSharedFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassSimulationVariableTickChunkFragment
// Kind: ScriptStruct; super: MassVariableTickChunkFragment
struct FMassSimulationVariableTickChunkFragment
{
public:
    std::uint8_t bShouldTickThisFrame; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LOD; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float TimeUntilNextTick; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t LastChunkSerialModificationNumber; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassSimulationVariableTickChunkFragment, bShouldTickThisFrame) == 0, "Offset mismatch for FMassSimulationVariableTickChunkFragment::bShouldTickThisFrame");
static_assert(offsetof(FMassSimulationVariableTickChunkFragment, LOD) == 1, "Offset mismatch for FMassSimulationVariableTickChunkFragment::LOD");
static_assert(offsetof(FMassSimulationVariableTickChunkFragment, TimeUntilNextTick) == 4, "Offset mismatch for FMassSimulationVariableTickChunkFragment::TimeUntilNextTick");
static_assert(offsetof(FMassSimulationVariableTickChunkFragment, LastChunkSerialModificationNumber) == 8, "Offset mismatch for FMassSimulationVariableTickChunkFragment::LastChunkSerialModificationNumber");

// /Script/MassLOD.MassSimulationVariableTickFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSimulationVariableTickFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassSimulationVariableTickParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassSimulationVariableTickParameters
{
public:
    float TickRates; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    std::uint8_t bSpreadFirstSimulationUpdate; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassSimulationVariableTickParameters, TickRates) == 0, "Offset mismatch for FMassSimulationVariableTickParameters::TickRates");
static_assert(offsetof(FMassSimulationVariableTickParameters, bSpreadFirstSimulationUpdate) == 16, "Offset mismatch for FMassSimulationVariableTickParameters::bSpreadFirstSimulationUpdate");

// /Script/MassLOD.MassSimulationVariableTickSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassSimulationVariableTickSharedFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassVariableTickChunkFragment
// Kind: ScriptStruct; super: MassChunkFragment
struct FMassVariableTickChunkFragment
{
public:
    std::uint8_t bShouldTickThisFrame; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LOD; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float TimeUntilNextTick; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t LastChunkSerialModificationNumber; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassVariableTickChunkFragment, bShouldTickThisFrame) == 0, "Offset mismatch for FMassVariableTickChunkFragment::bShouldTickThisFrame");
static_assert(offsetof(FMassVariableTickChunkFragment, LOD) == 1, "Offset mismatch for FMassVariableTickChunkFragment::LOD");
static_assert(offsetof(FMassVariableTickChunkFragment, TimeUntilNextTick) == 4, "Offset mismatch for FMassVariableTickChunkFragment::TimeUntilNextTick");
static_assert(offsetof(FMassVariableTickChunkFragment, LastChunkSerialModificationNumber) == 8, "Offset mismatch for FMassVariableTickChunkFragment::LastChunkSerialModificationNumber");

// /Script/MassLOD.MassViewerHandle
// Kind: ScriptStruct; super: IndexedHandleBase
struct FMassViewerHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassViewerInfoFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassViewerInfoFragment
{
public:
    float ClosestViewerDistanceSq; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ClosestDistanceToFrustum; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassViewerInfoFragment, ClosestViewerDistanceSq) == 0, "Offset mismatch for FMassViewerInfoFragment::ClosestViewerDistanceSq");
static_assert(offsetof(FMassViewerInfoFragment, ClosestDistanceToFrustum) == 4, "Offset mismatch for FMassViewerInfoFragment::ClosestDistanceToFrustum");

// /Script/MassLOD.MassVisibilityCanBeSeenTag
// Kind: ScriptStruct; super: MassTag
struct FMassVisibilityCanBeSeenTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassVisibilityCulledByDistanceTag
// Kind: ScriptStruct; super: MassTag
struct FMassVisibilityCulledByDistanceTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassVisibilityCulledByFrustumTag
// Kind: ScriptStruct; super: MassTag
struct FMassVisibilityCulledByFrustumTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassLOD.MassVisualizationChunkFragment
// Kind: ScriptStruct; super: MassChunkFragment
struct FMassVisualizationChunkFragment
{
public:
    std::uint8_t Visibility; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bContainsNewlyVisibleEntity; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float DeltaTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassVisualizationChunkFragment, Visibility) == 0, "Offset mismatch for FMassVisualizationChunkFragment::Visibility");
static_assert(offsetof(FMassVisualizationChunkFragment, bContainsNewlyVisibleEntity) == 1, "Offset mismatch for FMassVisualizationChunkFragment::bContainsNewlyVisibleEntity");
static_assert(offsetof(FMassVisualizationChunkFragment, DeltaTime) == 4, "Offset mismatch for FMassVisualizationChunkFragment::DeltaTime");

// /Script/MassLOD.ViewerInfo
// Kind: ScriptStruct; super: none
struct FViewerInfo
{
public:
    void* ActorViewer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FViewerInfo, ActorViewer) == 0, "Offset mismatch for FViewerInfo::ActorViewer");

// /Script/MassLOD.MassDistanceLODCollectorTrait
// Kind: Class; super: MassEntityTraitBase
class UMassDistanceLODCollectorTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bTestCollectorProcessor; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassDistanceLODCollectorTrait, bTestCollectorProcessor) == 48, "Offset mismatch for UMassDistanceLODCollectorTrait::bTestCollectorProcessor");

// /Script/MassLOD.MassLODCollectorProcessor
// Kind: Class; super: MassProcessor
class UMassLODCollectorProcessor
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

static_assert(offsetof(UMassLODCollectorProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassLODCollectorProcessor::ExecutionOrder");
static_assert(offsetof(UMassLODCollectorProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassLODCollectorProcessor::ProcessingPhase");
static_assert(offsetof(UMassLODCollectorProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassLODCollectorProcessor::ExecutionFlags");
static_assert(offsetof(UMassLODCollectorProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassLODCollectorProcessor::bAggregateRequirements");
static_assert(offsetof(UMassLODCollectorProcessor, ActivationState) == 83, "Offset mismatch for UMassLODCollectorProcessor::ActivationState");
static_assert(offsetof(UMassLODCollectorProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassLODCollectorProcessor::ExecutionPriority");

// /Script/MassLOD.MassLODCollectorTrait
// Kind: Class; super: MassEntityTraitBase
class UMassLODCollectorTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bTestCollectorProcessor; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassLODCollectorTrait, bTestCollectorProcessor) == 48, "Offset mismatch for UMassLODCollectorTrait::bTestCollectorProcessor");

// /Script/MassLOD.MassLODDistanceCollectorProcessor
// Kind: Class; super: MassProcessor
class UMassLODDistanceCollectorProcessor
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

static_assert(offsetof(UMassLODDistanceCollectorProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassLODDistanceCollectorProcessor::ExecutionOrder");
static_assert(offsetof(UMassLODDistanceCollectorProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassLODDistanceCollectorProcessor::ProcessingPhase");
static_assert(offsetof(UMassLODDistanceCollectorProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassLODDistanceCollectorProcessor::ExecutionFlags");
static_assert(offsetof(UMassLODDistanceCollectorProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassLODDistanceCollectorProcessor::bAggregateRequirements");
static_assert(offsetof(UMassLODDistanceCollectorProcessor, ActivationState) == 83, "Offset mismatch for UMassLODDistanceCollectorProcessor::ActivationState");
static_assert(offsetof(UMassLODDistanceCollectorProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassLODDistanceCollectorProcessor::ExecutionPriority");

// /Script/MassLOD.MassLODSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassLODSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bAllowNonPlayerViwerActors; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bGatherPlayerControllers (shared storage)
    // 0x0040 BoolProperty bGatherStreamingSources (shared storage)
    // 0x0040 BoolProperty bUsePlayerPawnLocationInsteadOfCamera (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> Viewers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ViewerMap; // 0x0058 (Size: 0x10, Type: MapProperty)
    TArray<void*> RegisteredActorViewers; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassLODSubsystem, bAllowNonPlayerViwerActors) == 64, "Offset mismatch for UMassLODSubsystem::bAllowNonPlayerViwerActors");
static_assert(offsetof(UMassLODSubsystem, Viewers) == 72, "Offset mismatch for UMassLODSubsystem::Viewers");
static_assert(offsetof(UMassLODSubsystem, ViewerMap) == 88, "Offset mismatch for UMassLODSubsystem::ViewerMap");
static_assert(offsetof(UMassLODSubsystem, RegisteredActorViewers) == 104, "Offset mismatch for UMassLODSubsystem::RegisteredActorViewers");

// /Script/MassLOD.MassSimulationLODProcessor
// Kind: Class; super: MassProcessor
class UMassSimulationLODProcessor
{
public:
    std::uint8_t Pad_0000[0x1F50]; // 0x0000
    std::uint8_t bDoAdjustmentFromCount; // 0x1F50 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassSimulationLODProcessor, bDoAdjustmentFromCount) == 8016, "Offset mismatch for UMassSimulationLODProcessor::bDoAdjustmentFromCount");

// /Script/MassLOD.MassSimulationLODTrait
// Kind: Class; super: MassEntityTraitBase
class UMassSimulationLODTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Params[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableVariableTicking; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::uint8_t VariableTickParams[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassSimulationLODTrait, Params) == 48, "Offset mismatch for UMassSimulationLODTrait::Params");
static_assert(offsetof(UMassSimulationLODTrait, bEnableVariableTicking) == 88, "Offset mismatch for UMassSimulationLODTrait::bEnableVariableTicking");
static_assert(offsetof(UMassSimulationLODTrait, VariableTickParams) == 92, "Offset mismatch for UMassSimulationLODTrait::VariableTickParams");
