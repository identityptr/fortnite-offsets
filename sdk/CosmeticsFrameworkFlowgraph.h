/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkFlowgraph
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowData
// Kind: ScriptStruct; super: none
struct FCosmeticFlowData
{
public:
    TMap<void*, void*> NamedData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCosmeticFlowData, NamedData) == 0, "Offset mismatch for FCosmeticFlowData::NamedData");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowGraphKey
// Kind: ScriptStruct; super: none
struct FCosmeticFlowGraphKey
{
public:
    std::uint8_t CategoryTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t FlowTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticFlowGraphKey, CategoryTag) == 0, "Offset mismatch for FCosmeticFlowGraphKey::CategoryTag");
static_assert(offsetof(FCosmeticFlowGraphKey, FlowTag) == 4, "Offset mismatch for FCosmeticFlowGraphKey::FlowTag");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowOptionSetKey
// Kind: ScriptStruct; super: none
struct FCosmeticFlowOptionSetKey
{
public:
    std::uint8_t OptionSetTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticFlowOptionSetKey, OptionSetTag) == 0, "Offset mismatch for FCosmeticFlowOptionSetKey::OptionSetTag");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowgraphKeyHelper
// Kind: ScriptStruct; super: none
struct FCosmeticFlowgraphKeyHelper
{
public:
    std::uint8_t InstancedFlowgraphKey[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticFlowgraphKeyHelper, InstancedFlowgraphKey) == 0, "Offset mismatch for FCosmeticFlowgraphKeyHelper::InstancedFlowgraphKey");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticFlowgraphState
// Kind: ScriptStruct; super: none
struct FCosmeticFlowgraphState
{
public:
    void* Builder; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Steps; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticFlowgraphState, Builder) == 0, "Offset mismatch for FCosmeticFlowgraphState::Builder");
static_assert(offsetof(FCosmeticFlowgraphState, Steps) == 8, "Offset mismatch for FCosmeticFlowgraphState::Steps");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticStepDetails
// Kind: ScriptStruct; super: none
struct FCosmeticStepDetails
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.CosmeticStepParentData
// Kind: ScriptStruct; super: none
struct FCosmeticStepParentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.CosmeticsPassCoreBehaviorFlagsState
// Kind: ScriptStruct; super: none
struct FCosmeticsPassCoreBehaviorFlagsState
{
public:
    TArray<void*> OptInFlags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OptOutFlags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticsPassCoreBehaviorFlagsState, OptInFlags) == 0, "Offset mismatch for FCosmeticsPassCoreBehaviorFlagsState::OptInFlags");
static_assert(offsetof(FCosmeticsPassCoreBehaviorFlagsState, OptOutFlags) == 16, "Offset mismatch for FCosmeticsPassCoreBehaviorFlagsState::OptOutFlags");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticsStepSequenceContainer
// Kind: ScriptStruct; super: none
struct FCosmeticsStepSequenceContainer
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> StepCDOsByIndex; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticsStepSequenceContainer, StepCDOsByIndex) == 80, "Offset mismatch for FCosmeticsStepSequenceContainer::StepCDOsByIndex");

// /Script/CosmeticsFrameworkFlowgraph.ExtensibilityPassContextEntry
// Kind: ScriptStruct; super: none
struct FExtensibilityPassContextEntry
{
public:
    void* Context; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FExtensibilityPassContextEntry, Context) == 0, "Offset mismatch for FExtensibilityPassContextEntry::Context");

// /Script/CosmeticsFrameworkFlowgraph.OperationSequenceHandle
// Kind: ScriptStruct; super: none
struct FOperationSequenceHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.CosmeticStepDependencyBuilder
// Kind: Class; super: Object
class UCosmeticStepDependencyBuilder
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ComputedStepSequence[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticStepDependencyBuilder, ComputedStepSequence) == 56, "Offset mismatch for UCosmeticStepDependencyBuilder::ComputedStepSequence");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticsFlowgraphDebugger
// Kind: Class; super: Object
class UCosmeticsFlowgraphDebugger
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.CosmeticsFlowgraphManager
// Kind: Class; super: Object
class UCosmeticsFlowgraphManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> CosmeticCategories; // 0x0028 (Size: 0x10, Type: MapProperty)
    TArray<void*> AllocatedContexts; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CosmeticFlowOptionSets; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    void* FlowgraphDebugger; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticsFlowgraphManager, CosmeticCategories) == 40, "Offset mismatch for UCosmeticsFlowgraphManager::CosmeticCategories");
static_assert(offsetof(UCosmeticsFlowgraphManager, AllocatedContexts) == 56, "Offset mismatch for UCosmeticsFlowgraphManager::AllocatedContexts");
static_assert(offsetof(UCosmeticsFlowgraphManager, CosmeticFlowOptionSets) == 72, "Offset mismatch for UCosmeticsFlowgraphManager::CosmeticFlowOptionSets");
static_assert(offsetof(UCosmeticsFlowgraphManager, FlowgraphDebugger) == 104, "Offset mismatch for UCosmeticsFlowgraphManager::FlowgraphDebugger");

// /Script/CosmeticsFrameworkFlowgraph.CosmeticsFlowgraphManagerSource
// Kind: Class; super: Interface
class UCosmeticsFlowgraphManagerSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.CosmeticsFlowgraphSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UCosmeticsFlowgraphSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* FlowManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticsFlowgraphSubsystem, FlowManager) == 56, "Offset mismatch for UCosmeticsFlowgraphSubsystem::FlowManager");

// /Script/CosmeticsFrameworkFlowgraph.FortCosmeticFlowNode
// Kind: Class; super: Object
class UFortCosmeticFlowNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.FortCosmeticFlowOption
// Kind: Class; super: FortCosmeticFlowNode
class UFortCosmeticFlowOption
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkFlowgraph.FortCosmeticFlowOptionSet
// Kind: Class; super: Object
class UFortCosmeticFlowOptionSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Options; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCosmeticFlowOptionSet, Options) == 40, "Offset mismatch for UFortCosmeticFlowOptionSet::Options");

// /Script/CosmeticsFrameworkFlowgraph.FortCosmeticPassContext
// Kind: Class; super: Object
class UFortCosmeticPassContext
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CosmeticStateStorage[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCosmeticPassContext, CosmeticStateStorage) == 72, "Offset mismatch for UFortCosmeticPassContext::CosmeticStateStorage");

// /Script/CosmeticsFrameworkFlowgraph.FortCosmeticStep
// Kind: Class; super: FortCosmeticFlowNode
class UFortCosmeticStep
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCosmeticStep, FlowgraphKey) == 88, "Offset mismatch for UFortCosmeticStep::FlowgraphKey");

// /Script/CosmeticsFrameworkFlowgraph.OrderedOperation
// Kind: Class; super: Object
class UOrderedOperation
{
public:
    std::uint8_t Opaque[1];
};
