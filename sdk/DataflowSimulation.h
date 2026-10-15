/**
 * decamp dumper generated SDK
 * Package: /Script/DataflowSimulation
 */
#pragma once
#include "Basic.h"

// /Script/DataflowSimulation.AdvancePhysicsSolversDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FAdvancePhysicsSolversDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SimulationTime[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    TArray<void*> PhysicsSolvers; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAdvancePhysicsSolversDataflowNode, SimulationTime) == 224, "Offset mismatch for FAdvancePhysicsSolversDataflowNode::SimulationTime");
static_assert(offsetof(FAdvancePhysicsSolversDataflowNode, PhysicsSolvers) == 240, "Offset mismatch for FAdvancePhysicsSolversDataflowNode::PhysicsSolvers");

// /Script/DataflowSimulation.AdvanceRigidPhysicsSolverDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FAdvanceRigidPhysicsSolverDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SimulationTime[0xC]; // 0x00E0 (Size: 0xC, Type: StructProperty)
    std::uint8_t State[0x1]; // 0x00EC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAdvanceRigidPhysicsSolverDataflowNode, SimulationTime) == 224, "Offset mismatch for FAdvanceRigidPhysicsSolverDataflowNode::SimulationTime");
static_assert(offsetof(FAdvanceRigidPhysicsSolverDataflowNode, State) == 236, "Offset mismatch for FAdvanceRigidPhysicsSolverDataflowNode::State");

// /Script/DataflowSimulation.DataflowCollisionObjectProxy
// Kind: ScriptStruct; super: DataflowSimulationProxy
struct FDataflowCollisionObjectProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowConstraintObjectProxy
// Kind: ScriptStruct; super: DataflowSimulationProxy
struct FDataflowConstraintObjectProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowExecutionNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FDataflowExecutionNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowExecutionNode, bOverrideColor) == 16, "Offset mismatch for FDataflowExecutionNode::bOverrideColor");
static_assert(offsetof(FDataflowExecutionNode, OverrideColor) == 20, "Offset mismatch for FDataflowExecutionNode::OverrideColor");
static_assert(offsetof(FDataflowExecutionNode, bActive) == 136, "Offset mismatch for FDataflowExecutionNode::bActive");
static_assert(offsetof(FDataflowExecutionNode, FrozenProperties) == 144, "Offset mismatch for FDataflowExecutionNode::FrozenProperties");
static_assert(offsetof(FDataflowExecutionNode, bIsFrozen) == 160, "Offset mismatch for FDataflowExecutionNode::bIsFrozen");

// /Script/DataflowSimulation.DataflowInvalidNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FDataflowInvalidNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowInvalidNode, bOverrideColor) == 16, "Offset mismatch for FDataflowInvalidNode::bOverrideColor");
static_assert(offsetof(FDataflowInvalidNode, OverrideColor) == 20, "Offset mismatch for FDataflowInvalidNode::OverrideColor");
static_assert(offsetof(FDataflowInvalidNode, bActive) == 136, "Offset mismatch for FDataflowInvalidNode::bActive");
static_assert(offsetof(FDataflowInvalidNode, FrozenProperties) == 144, "Offset mismatch for FDataflowInvalidNode::FrozenProperties");
static_assert(offsetof(FDataflowInvalidNode, bIsFrozen) == 160, "Offset mismatch for FDataflowInvalidNode::bIsFrozen");

// /Script/DataflowSimulation.DataflowPhysicsObjectProxy
// Kind: ScriptStruct; super: DataflowSimulationProxy
struct FDataflowPhysicsObjectProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowPhysicsSolverProxy
// Kind: ScriptStruct; super: DataflowSimulationProxy
struct FDataflowPhysicsSolverProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationAsset
// Kind: ScriptStruct; super: none
struct FDataflowSimulationAsset
{
public:
    void* DataflowAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> SimulationGroups; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FDataflowSimulationAsset, DataflowAsset) == 0, "Offset mismatch for FDataflowSimulationAsset::DataflowAsset");
static_assert(offsetof(FDataflowSimulationAsset, SimulationGroups) == 8, "Offset mismatch for FDataflowSimulationAsset::SimulationGroups");

// /Script/DataflowSimulation.DataflowSimulationNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSimulationNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowSimulationNode, bOverrideColor) == 16, "Offset mismatch for FDataflowSimulationNode::bOverrideColor");
static_assert(offsetof(FDataflowSimulationNode, OverrideColor) == 20, "Offset mismatch for FDataflowSimulationNode::OverrideColor");
static_assert(offsetof(FDataflowSimulationNode, bActive) == 136, "Offset mismatch for FDataflowSimulationNode::bActive");
static_assert(offsetof(FDataflowSimulationNode, FrozenProperties) == 144, "Offset mismatch for FDataflowSimulationNode::FrozenProperties");
static_assert(offsetof(FDataflowSimulationNode, bIsFrozen) == 160, "Offset mismatch for FDataflowSimulationNode::bIsFrozen");

// /Script/DataflowSimulation.DataflowSimulationProperty
// Kind: ScriptStruct; super: none
struct FDataflowSimulationProperty
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationProxy
// Kind: ScriptStruct; super: none
struct FDataflowSimulationProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationTime
// Kind: ScriptStruct; super: none
struct FDataflowSimulationTime
{
public:
    float DeltaTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TimeOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowSimulationTime, DeltaTime) == 0, "Offset mismatch for FDataflowSimulationTime::DeltaTime");
static_assert(offsetof(FDataflowSimulationTime, CurrentTime) == 4, "Offset mismatch for FDataflowSimulationTime::CurrentTime");
static_assert(offsetof(FDataflowSimulationTime, TimeOffset) == 8, "Offset mismatch for FDataflowSimulationTime::TimeOffset");

// /Script/DataflowSimulation.FilterSimulationProxiesDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FFilterSimulationProxiesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SimulationProxies; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredProxies; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimulationGroups; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFilterSimulationProxiesDataflowNode, SimulationProxies) == 224, "Offset mismatch for FFilterSimulationProxiesDataflowNode::SimulationProxies");
static_assert(offsetof(FFilterSimulationProxiesDataflowNode, FilteredProxies) == 240, "Offset mismatch for FFilterSimulationProxiesDataflowNode::FilteredProxies");
static_assert(offsetof(FFilterSimulationProxiesDataflowNode, SimulationGroups) == 256, "Offset mismatch for FFilterSimulationProxiesDataflowNode::SimulationGroups");

// /Script/DataflowSimulation.GetPhysicsSolversDataflowNode
// Kind: ScriptStruct; super: DataflowInvalidNode
struct FGetPhysicsSolversDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> PhysicsSolvers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimulationGroups; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGetPhysicsSolversDataflowNode, PhysicsSolvers) == 224, "Offset mismatch for FGetPhysicsSolversDataflowNode::PhysicsSolvers");
static_assert(offsetof(FGetPhysicsSolversDataflowNode, SimulationGroups) == 240, "Offset mismatch for FGetPhysicsSolversDataflowNode::SimulationGroups");

// /Script/DataflowSimulation.GetSimulationTimeDataflowNode
// Kind: ScriptStruct; super: DataflowInvalidNode
struct FGetSimulationTimeDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t SimulationTime[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGetSimulationTimeDataflowNode, SimulationTime) == 224, "Offset mismatch for FGetSimulationTimeDataflowNode::SimulationTime");

// /Script/DataflowSimulation.RigidPhysicsSceneDataflowState
// Kind: ScriptStruct; super: none
struct FRigidPhysicsSceneDataflowState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.RigidSceneSetupDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FRigidSceneSetupDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t State[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigidSceneSetupDataflowNode, State) == 224, "Offset mismatch for FRigidSceneSetupDataflowNode::State");

// /Script/DataflowSimulation.RigidSceneSetupTerminalDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FRigidSceneSetupTerminalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t State[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigidSceneSetupTerminalDataflowNode, State) == 224, "Offset mismatch for FRigidSceneSetupTerminalDataflowNode::State");

// /Script/DataflowSimulation.SceneSimulationTerminalDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FSceneSimulationTerminalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t State[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSceneSimulationTerminalDataflowNode, State) == 224, "Offset mismatch for FSceneSimulationTerminalDataflowNode::State");

// /Script/DataflowSimulation.SimulationProxiesTerminalDataflowNode
// Kind: ScriptStruct; super: DataflowExecutionNode
struct FSimulationProxiesTerminalDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> SimulationProxies; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSimulationProxiesTerminalDataflowNode, SimulationProxies) == 224, "Offset mismatch for FSimulationProxiesTerminalDataflowNode::SimulationProxies");

// /Script/DataflowSimulation.DataflowCollisionObjectInterface
// Kind: Class; super: DataflowSimulationInterface
class UDataflowCollisionObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowConstraintObjectInterface
// Kind: Class; super: DataflowSimulationInterface
class UDataflowConstraintObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowGeometryCachable
// Kind: Class; super: Interface
class UDataflowGeometryCachable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowPhysicsObjectInterface
// Kind: Class; super: DataflowSimulationInterface
class UDataflowPhysicsObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowPhysicsSolverInterface
// Kind: Class; super: DataflowSimulationInterface
class UDataflowPhysicsSolverInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationActor
// Kind: Class; super: Interface
class UDataflowSimulationActor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationInterface
// Kind: Class; super: Interface
class UDataflowSimulationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowSimulation.DataflowSimulationManager
// Kind: Class; super: TickableWorldSubsystem
class UDataflowSimulationManager
{
public:
    std::uint8_t Opaque[1];
};
