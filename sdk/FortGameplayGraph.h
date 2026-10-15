/**
 * decamp dumper generated SDK
 * Package: /Script/FortGameplayGraph
 */
#pragma once
#include "Basic.h"

// /Script/FortGameplayGraph.SerializableConnectivityGraphVertex
// Kind: ScriptStruct; super: none
struct FSerializableConnectivityGraphVertex
{
public:
    std::uint8_t bIsIndependentlySupported; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSerializableConnectivityGraphVertex, bIsIndependentlySupported) == 0, "Offset mismatch for FSerializableConnectivityGraphVertex::bIsIndependentlySupported");

// /Script/FortGameplayGraph.SerializableConnectivityGraph_v2
// Kind: ScriptStruct; super: SerializableGraph
struct FSerializableConnectivityGraph_v2
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> ConnectivityVertexData; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSerializableConnectivityGraph_v2, ConnectivityVertexData) == 56, "Offset mismatch for FSerializableConnectivityGraph_v2::ConnectivityVertexData");

// /Script/FortGameplayGraph.FortConnectivityGraph
// Kind: Class; super: Graph
class UFortConnectivityGraph
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> Vertices; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Islands; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortConnectivityGraph, Vertices) == 136, "Offset mismatch for UFortConnectivityGraph::Vertices");
static_assert(offsetof(UFortConnectivityGraph, Islands) == 152, "Offset mismatch for UFortConnectivityGraph::Islands");

// /Script/FortGameplayGraph.FortConnectivityGraphIsland
// Kind: Class; super: GraphIsland
class UFortConnectivityGraphIsland
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TSet<void*> SupportNodes; // 0x00C0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortConnectivityGraphIsland, SupportNodes) == 192, "Offset mismatch for UFortConnectivityGraphIsland::SupportNodes");

// /Script/FortGameplayGraph.FortConnectivityGraphVertex
// Kind: Class; super: GraphVertex
class UFortConnectivityGraphVertex
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bIsIndependentlySupported; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    TWeakObjectPtr<void> ConnectionActor; // 0x00CC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortConnectivityGraphVertex, bIsIndependentlySupported) == 200, "Offset mismatch for UFortConnectivityGraphVertex::bIsIndependentlySupported");
static_assert(offsetof(UFortConnectivityGraphVertex, ConnectionActor) == 204, "Offset mismatch for UFortConnectivityGraphVertex::ConnectionActor");
