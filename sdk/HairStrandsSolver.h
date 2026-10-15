/**
 * decamp dumper generated SDK
 * Package: /Script/HairStrandsSolver
 */
#pragma once
#include "Basic.h"

// /Script/HairStrandsSolver.AddSolverDeformerDataflowNode
// Kind: ScriptStruct; super: DataflowSimulationNode
struct FAddSolverDeformerDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> PhysicsSolvers; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimulationTime[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    void* MeshDeformer; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DeformerNumericInputs; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerVectorInputs; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerStringInputs; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerBoolInputs; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerTransformInputs; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerNumericArrays; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerVectorArrays; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerStringArrays; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerBoolArrays; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeformerTransformArrays; // 0x0198 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAddSolverDeformerDataflowNode, PhysicsSolvers) == 224, "Offset mismatch for FAddSolverDeformerDataflowNode::PhysicsSolvers");
static_assert(offsetof(FAddSolverDeformerDataflowNode, SimulationTime) == 240, "Offset mismatch for FAddSolverDeformerDataflowNode::SimulationTime");
static_assert(offsetof(FAddSolverDeformerDataflowNode, MeshDeformer) == 256, "Offset mismatch for FAddSolverDeformerDataflowNode::MeshDeformer");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerNumericInputs) == 264, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerNumericInputs");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerVectorInputs) == 280, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerVectorInputs");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerStringInputs) == 296, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerStringInputs");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerBoolInputs) == 312, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerBoolInputs");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerTransformInputs) == 328, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerTransformInputs");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerNumericArrays) == 344, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerNumericArrays");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerVectorArrays) == 360, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerVectorArrays");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerStringArrays) == 376, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerStringArrays");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerBoolArrays) == 392, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerBoolArrays");
static_assert(offsetof(FAddSolverDeformerDataflowNode, DeformerTransformArrays) == 408, "Offset mismatch for FAddSolverDeformerDataflowNode::DeformerTransformArrays");

// /Script/HairStrandsSolver.DataflowGroomSolverProxy
// Kind: ScriptStruct; super: DataflowPhysicsSolverProxy
struct FDataflowGroomSolverProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsSolver.GroomSolverSettings
// Kind: ScriptStruct; super: none
struct FGroomSolverSettings
{
public:
    float MaxLODDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinLODDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxPointsCount; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGroomSolverSettings, MaxLODDistance) == 0, "Offset mismatch for FGroomSolverSettings::MaxLODDistance");
static_assert(offsetof(FGroomSolverSettings, MinLODDistance) == 4, "Offset mismatch for FGroomSolverSettings::MinLODDistance");
static_assert(offsetof(FGroomSolverSettings, MaxPointsCount) == 8, "Offset mismatch for FGroomSolverSettings::MaxPointsCount");

// /Script/HairStrandsSolver.GroomSolverComponent
// Kind: Class; super: MeshComponent
class UGroomSolverComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::uint8_t SolverSettings[0x60]; // 0x05D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t SimulationAsset[0x18]; // 0x0638 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroomComponents[0x10]; // 0x0650 (Size: 0x10, Type: SetProperty)
    void* MeshDeformer; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* DeformerInstance; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    void* DeformerSettings; // 0x0670 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xB8]; // 0x0678
    TMap<void*, void*> CollisionComponents; // 0x0730 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGroomSolverComponent, SolverSettings) == 1496, "Offset mismatch for UGroomSolverComponent::SolverSettings");
static_assert(offsetof(UGroomSolverComponent, SimulationAsset) == 1592, "Offset mismatch for UGroomSolverComponent::SimulationAsset");
static_assert(offsetof(UGroomSolverComponent, GroomComponents) == 1616, "Offset mismatch for UGroomSolverComponent::GroomComponents");
static_assert(offsetof(UGroomSolverComponent, MeshDeformer) == 1632, "Offset mismatch for UGroomSolverComponent::MeshDeformer");
static_assert(offsetof(UGroomSolverComponent, DeformerInstance) == 1640, "Offset mismatch for UGroomSolverComponent::DeformerInstance");
static_assert(offsetof(UGroomSolverComponent, DeformerSettings) == 1648, "Offset mismatch for UGroomSolverComponent::DeformerSettings");
static_assert(offsetof(UGroomSolverComponent, CollisionComponents) == 1840, "Offset mismatch for UGroomSolverComponent::CollisionComponents");
