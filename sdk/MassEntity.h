/**
 * decamp dumper generated SDK
 * Package: /Script/MassEntity
 */
#pragma once
#include "Basic.h"

// /Script/MassEntity.MassChildOfFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassChildOfFragment
{
public:
    std::uint8_t Parent[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassChildOfFragment, Parent) == 0, "Offset mismatch for FMassChildOfFragment::Parent");

// /Script/MassEntity.MassChildOfRelation
// Kind: ScriptStruct; super: MassRelation
struct FMassChildOfRelation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassDebugLogFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassDebugLogFragment
{
public:
    TWeakObjectPtr<void> LogOwner; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassDebugLogFragment, LogOwner) == 0, "Offset mismatch for FMassDebugLogFragment::LogOwner");

// /Script/MassEntity.MassEntityLinkFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassEntityLinkFragment
{
public:
    std::uint8_t LinkedEntityHandle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassEntityLinkFragment, LinkedEntityHandle) == 0, "Offset mismatch for FMassEntityLinkFragment::LinkedEntityHandle");

// /Script/MassEntity.MassEntityObserverClassesMap
// Kind: ScriptStruct; super: none
struct FMassEntityObserverClassesMap
{
public:
    TMap<void*, void*> Container; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMassEntityObserverClassesMap, Container) == 0, "Offset mismatch for FMassEntityObserverClassesMap::Container");

// /Script/MassEntity.MassEntityView
// Kind: ScriptStruct; super: none
struct FMassEntityView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassGenericDebugEvent
// Kind: ScriptStruct; super: none
struct FMassGenericDebugEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassObserverExecutionContext
// Kind: ScriptStruct; super: none
struct FMassObserverExecutionContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassObserverManager
// Kind: ScriptStruct; super: none
struct FMassObserverManager
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t ElementObservers[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassObserverManager, ElementObservers) == 232, "Offset mismatch for FMassObserverManager::ElementObservers");

// /Script/MassEntity.MassObserversMap
// Kind: ScriptStruct; super: none
struct FMassObserversMap
{
public:
    TMap<void*, void*> Container; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMassObserversMap, Container) == 0, "Offset mismatch for FMassObserversMap::Container");

// /Script/MassEntity.MassProcessingContext_DEPRECATED
// Kind: ScriptStruct; super: none
struct FMassProcessingContext_DEPRECATED
{
public:
    float DeltaSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t AuxData[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFlushCommandBuffer; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassProcessingContext_DEPRECATED, DeltaSeconds) == 0, "Offset mismatch for FMassProcessingContext_DEPRECATED::DeltaSeconds");
static_assert(offsetof(FMassProcessingContext_DEPRECATED, AuxData) == 8, "Offset mismatch for FMassProcessingContext_DEPRECATED::AuxData");
static_assert(offsetof(FMassProcessingContext_DEPRECATED, bFlushCommandBuffer) == 24, "Offset mismatch for FMassProcessingContext_DEPRECATED::bFlushCommandBuffer");

// /Script/MassEntity.MassProcessingPhaseConfig
// Kind: ScriptStruct; super: none
struct FMassProcessingPhaseConfig
{
public:
    FName PhaseName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* PhaseGroupClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ProcessorCDOs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassProcessingPhaseConfig, PhaseName) == 0, "Offset mismatch for FMassProcessingPhaseConfig::PhaseName");
static_assert(offsetof(FMassProcessingPhaseConfig, PhaseGroupClass) == 8, "Offset mismatch for FMassProcessingPhaseConfig::PhaseGroupClass");
static_assert(offsetof(FMassProcessingPhaseConfig, ProcessorCDOs) == 16, "Offset mismatch for FMassProcessingPhaseConfig::ProcessorCDOs");

// /Script/MassEntity.MassProcessorClassCollection
// Kind: ScriptStruct; super: none
struct FMassProcessorClassCollection
{
public:
    TArray<void*> ClassCollection; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassProcessorClassCollection, ClassCollection) == 0, "Offset mismatch for FMassProcessorClassCollection::ClassCollection");

// /Script/MassEntity.MassProcessorExecutionOrder
// Kind: ScriptStruct; super: none
struct FMassProcessorExecutionOrder
{
public:
    FName ExecuteInGroup; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> ExecuteBefore; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExecuteAfter; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteInGroup) == 0, "Offset mismatch for FMassProcessorExecutionOrder::ExecuteInGroup");
static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteBefore) == 8, "Offset mismatch for FMassProcessorExecutionOrder::ExecuteBefore");
static_assert(offsetof(FMassProcessorExecutionOrder, ExecuteAfter) == 24, "Offset mismatch for FMassProcessorExecutionOrder::ExecuteAfter");

// /Script/MassEntity.MassRelation
// Kind: ScriptStruct; super: MassTag
struct FMassRelation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassRelationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRelationFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassRelationMappingFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassRelationMappingFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassRuntimePipeline
// Kind: ScriptStruct; super: none
struct FMassRuntimePipeline
{
public:
    TArray<void*> Processors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassRuntimePipeline, Processors) == 0, "Offset mismatch for FMassRuntimePipeline::Processors");

// /Script/MassEntity.ProcessorAuxDataBase
// Kind: ScriptStruct; super: none
struct FProcessorAuxDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassChildOfRelationEntityCreation
// Kind: Class; super: MassRelationEntityCreation
class UMassChildOfRelationEntityCreation
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassChildOfRelationEntityCreation, ObservedType) == 256, "Offset mismatch for UMassChildOfRelationEntityCreation::ObservedType");
static_assert(offsetof(UMassChildOfRelationEntityCreation, ObservedTypes) == 264, "Offset mismatch for UMassChildOfRelationEntityCreation::ObservedTypes");
static_assert(offsetof(UMassChildOfRelationEntityCreation, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassChildOfRelationEntityCreation::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassCompositeProcessor
// Kind: Class; super: MassProcessor
class UMassCompositeProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t ChildPipeline[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    FName GroupName; // 0x0118 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMassCompositeProcessor, ChildPipeline) == 256, "Offset mismatch for UMassCompositeProcessor::ChildPipeline");
static_assert(offsetof(UMassCompositeProcessor, GroupName) == 280, "Offset mismatch for UMassCompositeProcessor::GroupName");

// /Script/MassEntity.MassEntitySettings
// Kind: Class; super: MassModuleSettings
class UMassEntitySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t ChunkMemorySize; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString DumpDependencyGraphFileName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t ProcessingPhasesConfig[0xC0]; // 0x0040 (Size: 0xC0, Type: StructProperty)
    TArray<void*> ProcessorCDOs; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassEntitySettings, ChunkMemorySize) == 40, "Offset mismatch for UMassEntitySettings::ChunkMemorySize");
static_assert(offsetof(UMassEntitySettings, DumpDependencyGraphFileName) == 48, "Offset mismatch for UMassEntitySettings::DumpDependencyGraphFileName");
static_assert(offsetof(UMassEntitySettings, ProcessingPhasesConfig) == 64, "Offset mismatch for UMassEntitySettings::ProcessingPhasesConfig");
static_assert(offsetof(UMassEntitySettings, ProcessorCDOs) == 256, "Offset mismatch for UMassEntitySettings::ProcessorCDOs");

// /Script/MassEntity.MassEntitySubsystem
// Kind: Class; super: MassSubsystemBase
class UMassEntitySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassModuleSettings
// Kind: Class; super: Object
class UMassModuleSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassObserverProcessor
// Kind: Class; super: MassProcessor
class UMassObserverProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassObserverProcessor, ObservedType) == 256, "Offset mismatch for UMassObserverProcessor::ObservedType");
static_assert(offsetof(UMassObserverProcessor, ObservedTypes) == 264, "Offset mismatch for UMassObserverProcessor::ObservedTypes");
static_assert(offsetof(UMassObserverProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassObserverProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassObserverRegistry
// Kind: Class; super: Object
class UMassObserverRegistry
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t FragmentObservers[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t TagObservers[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassObserverRegistry, FragmentObservers) == 112, "Offset mismatch for UMassObserverRegistry::FragmentObservers");
static_assert(offsetof(UMassObserverRegistry, TagObservers) == 176, "Offset mismatch for UMassObserverRegistry::TagObservers");

// /Script/MassEntity.MassProcessor
// Kind: Class; super: Object
class UMassProcessor
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

static_assert(offsetof(UMassProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassProcessor::ExecutionOrder");
static_assert(offsetof(UMassProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassProcessor::ProcessingPhase");
static_assert(offsetof(UMassProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassProcessor::ExecutionFlags");
static_assert(offsetof(UMassProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassProcessor::bAggregateRequirements");
static_assert(offsetof(UMassProcessor, ActivationState) == 83, "Offset mismatch for UMassProcessor::ActivationState");
static_assert(offsetof(UMassProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassProcessor::ExecutionPriority");

// /Script/MassEntity.MassRelationEntityCreation
// Kind: Class; super: MassRelationObserver
class UMassRelationEntityCreation
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRelationEntityCreation, ObservedType) == 256, "Offset mismatch for UMassRelationEntityCreation::ObservedType");
static_assert(offsetof(UMassRelationEntityCreation, ObservedTypes) == 264, "Offset mismatch for UMassRelationEntityCreation::ObservedTypes");
static_assert(offsetof(UMassRelationEntityCreation, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRelationEntityCreation::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassRelationEntityDestruction
// Kind: Class; super: MassRelationObserver
class UMassRelationEntityDestruction
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRelationEntityDestruction, ObservedType) == 256, "Offset mismatch for UMassRelationEntityDestruction::ObservedType");
static_assert(offsetof(UMassRelationEntityDestruction, ObservedTypes) == 264, "Offset mismatch for UMassRelationEntityDestruction::ObservedTypes");
static_assert(offsetof(UMassRelationEntityDestruction, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRelationEntityDestruction::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassRelationEntityGuardDog
// Kind: Class; super: MassRelationObserver
class UMassRelationEntityGuardDog
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRelationEntityGuardDog, ObservedType) == 256, "Offset mismatch for UMassRelationEntityGuardDog::ObservedType");
static_assert(offsetof(UMassRelationEntityGuardDog, ObservedTypes) == 264, "Offset mismatch for UMassRelationEntityGuardDog::ObservedTypes");
static_assert(offsetof(UMassRelationEntityGuardDog, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRelationEntityGuardDog::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassRelationObserver
// Kind: Class; super: MassObserverProcessor
class UMassRelationObserver
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRelationObserver, ObservedType) == 256, "Offset mismatch for UMassRelationObserver::ObservedType");
static_assert(offsetof(UMassRelationObserver, ObservedTypes) == 264, "Offset mismatch for UMassRelationObserver::ObservedTypes");
static_assert(offsetof(UMassRelationObserver, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRelationObserver::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassRelationRoleDestruction
// Kind: Class; super: MassRelationObserver
class UMassRelationRoleDestruction
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassRelationRoleDestruction, ObservedType) == 256, "Offset mismatch for UMassRelationRoleDestruction::ObservedType");
static_assert(offsetof(UMassRelationRoleDestruction, ObservedTypes) == 264, "Offset mismatch for UMassRelationRoleDestruction::ObservedTypes");
static_assert(offsetof(UMassRelationRoleDestruction, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassRelationRoleDestruction::bAutoRegisterWithObserverRegistry");

// /Script/MassEntity.MassSettings
// Kind: Class; super: DeveloperSettings
class UMassSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ModuleSettings; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMassSettings, ModuleSettings) == 48, "Offset mismatch for UMassSettings::ModuleSettings");

// /Script/MassEntity.MassSubsystemBase
// Kind: Class; super: WorldSubsystem
class UMassSubsystemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassEntity.MassTickableSubsystemBase
// Kind: Class; super: TickableWorldSubsystem
class UMassTickableSubsystemBase
{
public:
    std::uint8_t Opaque[1];
};
