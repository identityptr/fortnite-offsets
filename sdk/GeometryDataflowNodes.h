/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryDataflowNodes
 */
#pragma once
#include "Basic.h"

// /Script/GeometryDataflowNodes.MeshBooleanDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMeshBooleanDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Operation; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWeldSharedEdges; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyAlongNewEdges; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PreserveUVQualityForMesh; // 0x00E3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    void* Mesh1; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Mesh2; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* Mesh; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMeshBooleanDataflowNode, Operation) == 224, "Offset mismatch for FMeshBooleanDataflowNode::Operation");
static_assert(offsetof(FMeshBooleanDataflowNode, bWeldSharedEdges) == 225, "Offset mismatch for FMeshBooleanDataflowNode::bWeldSharedEdges");
static_assert(offsetof(FMeshBooleanDataflowNode, bSimplifyAlongNewEdges) == 226, "Offset mismatch for FMeshBooleanDataflowNode::bSimplifyAlongNewEdges");
static_assert(offsetof(FMeshBooleanDataflowNode, PreserveUVQualityForMesh) == 227, "Offset mismatch for FMeshBooleanDataflowNode::PreserveUVQualityForMesh");
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh1) == 232, "Offset mismatch for FMeshBooleanDataflowNode::Mesh1");
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh2) == 240, "Offset mismatch for FMeshBooleanDataflowNode::Mesh2");
static_assert(offsetof(FMeshBooleanDataflowNode, Mesh) == 248, "Offset mismatch for FMeshBooleanDataflowNode::Mesh");
