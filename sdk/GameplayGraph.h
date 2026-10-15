/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayGraph
 */
#pragma once
#include "Basic.h"

// /Script/GameplayGraph.GraphHandle
// Kind: ScriptStruct; super: none
struct FGraphHandle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t UniqueIndex[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    TWeakObjectPtr<void> WeakGraph; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FGraphHandle, UniqueIndex) == 8, "Offset mismatch for FGraphHandle::UniqueIndex");
static_assert(offsetof(FGraphHandle, WeakGraph) == 28, "Offset mismatch for FGraphHandle::WeakGraph");

// /Script/GameplayGraph.GraphIslandHandle
// Kind: ScriptStruct; super: GraphHandle
struct FGraphIslandHandle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t UniqueIndex[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    TWeakObjectPtr<void> WeakGraph; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FGraphIslandHandle, UniqueIndex) == 8, "Offset mismatch for FGraphIslandHandle::UniqueIndex");
static_assert(offsetof(FGraphIslandHandle, WeakGraph) == 28, "Offset mismatch for FGraphIslandHandle::WeakGraph");

// /Script/GameplayGraph.GraphProperties
// Kind: ScriptStruct; super: none
struct FGraphProperties
{
public:
    std::uint8_t bGenerateIslands; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGraphProperties, bGenerateIslands) == 0, "Offset mismatch for FGraphProperties::bGenerateIslands");

// /Script/GameplayGraph.GraphUniqueIndex
// Kind: ScriptStruct; super: none
struct FGraphUniqueIndex
{
public:
    std::uint8_t UniqueIndex[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsTemporary; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGraphUniqueIndex, UniqueIndex) == 0, "Offset mismatch for FGraphUniqueIndex::UniqueIndex");
static_assert(offsetof(FGraphUniqueIndex, bIsTemporary) == 16, "Offset mismatch for FGraphUniqueIndex::bIsTemporary");

// /Script/GameplayGraph.GraphVertexHandle
// Kind: ScriptStruct; super: GraphHandle
struct FGraphVertexHandle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t UniqueIndex[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    TWeakObjectPtr<void> WeakGraph; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FGraphVertexHandle, UniqueIndex) == 8, "Offset mismatch for FGraphVertexHandle::UniqueIndex");
static_assert(offsetof(FGraphVertexHandle, WeakGraph) == 28, "Offset mismatch for FGraphVertexHandle::WeakGraph");

// /Script/GameplayGraph.SerializableGraph
// Kind: ScriptStruct; super: none
struct FSerializableGraph
{
public:
    std::uint8_t Properties[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Vertices; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Edges; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Islands; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSerializableGraph, Properties) == 0, "Offset mismatch for FSerializableGraph::Properties");
static_assert(offsetof(FSerializableGraph, Vertices) == 8, "Offset mismatch for FSerializableGraph::Vertices");
static_assert(offsetof(FSerializableGraph, Edges) == 24, "Offset mismatch for FSerializableGraph::Edges");
static_assert(offsetof(FSerializableGraph, Islands) == 40, "Offset mismatch for FSerializableGraph::Islands");

// /Script/GameplayGraph.SerializedEdgeData
// Kind: ScriptStruct; super: none
struct FSerializedEdgeData
{
public:
    std::uint8_t Node1[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t Node2[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSerializedEdgeData, Node1) == 0, "Offset mismatch for FSerializedEdgeData::Node1");
static_assert(offsetof(FSerializedEdgeData, Node2) == 40, "Offset mismatch for FSerializedEdgeData::Node2");

// /Script/GameplayGraph.SerializedIslandData
// Kind: ScriptStruct; super: none
struct FSerializedIslandData
{
public:
    TArray<void*> Vertices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSerializedIslandData, Vertices) == 0, "Offset mismatch for FSerializedIslandData::Vertices");

// /Script/GameplayGraph.Graph
// Kind: Class; super: Object
class UGraph
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> Vertices; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Islands; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGraph, Vertices) == 136, "Offset mismatch for UGraph::Vertices");
static_assert(offsetof(UGraph, Islands) == 152, "Offset mismatch for UGraph::Islands");

// /Script/GameplayGraph.GraphElement
// Kind: Class; super: Object
class UGraphElement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ElementType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t UniqueIndex[0x14]; // 0x002C (Size: 0x14, Type: StructProperty)
    TWeakObjectPtr<void> ParentGraph; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGraphElement, ElementType) == 40, "Offset mismatch for UGraphElement::ElementType");
static_assert(offsetof(UGraphElement, UniqueIndex) == 44, "Offset mismatch for UGraphElement::UniqueIndex");
static_assert(offsetof(UGraphElement, ParentGraph) == 64, "Offset mismatch for UGraphElement::ParentGraph");

// /Script/GameplayGraph.GraphIsland
// Kind: Class; super: GraphElement
class UGraphIsland
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Vertices[0x10]; // 0x00A8 (Size: 0x10, Type: SetProperty)
    std::uint8_t AllowedOperations; // 0x00B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UGraphIsland, Vertices) == 168, "Offset mismatch for UGraphIsland::Vertices");
static_assert(offsetof(UGraphIsland, AllowedOperations) == 184, "Offset mismatch for UGraphIsland::AllowedOperations");

// /Script/GameplayGraph.GraphVertex
// Kind: Class; super: GraphElement
class UGraphVertex
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Edges[0x10]; // 0x0078 (Size: 0x10, Type: SetProperty)
    std::uint8_t ParentIsland[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGraphVertex, Edges) == 120, "Offset mismatch for UGraphVertex::Edges");
static_assert(offsetof(UGraphVertex, ParentIsland) == 136, "Offset mismatch for UGraphVertex::ParentIsland");
