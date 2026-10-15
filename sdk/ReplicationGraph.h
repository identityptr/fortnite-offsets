/**
 * decamp dumper generated SDK
 * Package: /Script/ReplicationGraph
 */
#pragma once
#include "Basic.h"

// /Script/ReplicationGraph.AlwaysRelevantActorInfo
// Kind: ScriptStruct; super: none
struct FAlwaysRelevantActorInfo
{
public:
    void* Connection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* LastViewer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* LastViewTarget; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAlwaysRelevantActorInfo, Connection) == 0, "Offset mismatch for FAlwaysRelevantActorInfo::Connection");
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewer) == 8, "Offset mismatch for FAlwaysRelevantActorInfo::LastViewer");
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewTarget) == 16, "Offset mismatch for FAlwaysRelevantActorInfo::LastViewTarget");

// /Script/ReplicationGraph.ClassReplicationInfo
// Kind: ScriptStruct; super: none
struct FClassReplicationInfo
{
public:
    float DistancePriorityScale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StarvationPriorityScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AccumulatedNetPriorityBias; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint16_t ReplicationPeriodFrame; // 0x000C (Size: 0x2, Type: UInt16Property)
    std::uint16_t FastPath_ReplicationPeriodFrame; // 0x000E (Size: 0x2, Type: UInt16Property)
    std::uint16_t ActorChannelFrameTimeout; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x42]; // 0x0012
    float CullDistance; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float CullDistanceSquared; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClassReplicationInfo, DistancePriorityScale) == 0, "Offset mismatch for FClassReplicationInfo::DistancePriorityScale");
static_assert(offsetof(FClassReplicationInfo, StarvationPriorityScale) == 4, "Offset mismatch for FClassReplicationInfo::StarvationPriorityScale");
static_assert(offsetof(FClassReplicationInfo, AccumulatedNetPriorityBias) == 8, "Offset mismatch for FClassReplicationInfo::AccumulatedNetPriorityBias");
static_assert(offsetof(FClassReplicationInfo, ReplicationPeriodFrame) == 12, "Offset mismatch for FClassReplicationInfo::ReplicationPeriodFrame");
static_assert(offsetof(FClassReplicationInfo, FastPath_ReplicationPeriodFrame) == 14, "Offset mismatch for FClassReplicationInfo::FastPath_ReplicationPeriodFrame");
static_assert(offsetof(FClassReplicationInfo, ActorChannelFrameTimeout) == 16, "Offset mismatch for FClassReplicationInfo::ActorChannelFrameTimeout");
static_assert(offsetof(FClassReplicationInfo, CullDistance) == 84, "Offset mismatch for FClassReplicationInfo::CullDistance");
static_assert(offsetof(FClassReplicationInfo, CullDistanceSquared) == 88, "Offset mismatch for FClassReplicationInfo::CullDistanceSquared");

// /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
// Kind: ScriptStruct; super: none
struct FConnectionAlwaysRelevantNodePair
{
public:
    void* NetConnection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Node; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0, "Offset mismatch for FConnectionAlwaysRelevantNodePair::NetConnection");
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 8, "Offset mismatch for FConnectionAlwaysRelevantNodePair::Node");

// /Script/ReplicationGraph.LastLocationGatherInfo
// Kind: ScriptStruct; super: none
struct FLastLocationGatherInfo
{
public:
    void* Connection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LastLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastOutOfRangeLocationCheck[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLastLocationGatherInfo, Connection) == 0, "Offset mismatch for FLastLocationGatherInfo::Connection");
static_assert(offsetof(FLastLocationGatherInfo, LastLocation) == 8, "Offset mismatch for FLastLocationGatherInfo::LastLocation");
static_assert(offsetof(FLastLocationGatherInfo, LastOutOfRangeLocationCheck) == 32, "Offset mismatch for FLastLocationGatherInfo::LastOutOfRangeLocationCheck");

// /Script/ReplicationGraph.TearOffActorInfo
// Kind: ScriptStruct; super: none
struct FTearOffActorInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTearOffActorInfo, Actor) == 8, "Offset mismatch for FTearOffActorInfo::Actor");

// /Script/ReplicationGraph.BasicReplicationGraph
// Kind: Class; super: ReplicationGraph
class UBasicReplicationGraph
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    void* GridNode; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* AlwaysRelevantNode; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AlwaysRelevantForConnectionList; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsWithoutNetConnection; // 0x0320 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBasicReplicationGraph, GridNode) == 768, "Offset mismatch for UBasicReplicationGraph::GridNode");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 776, "Offset mismatch for UBasicReplicationGraph::AlwaysRelevantNode");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 784, "Offset mismatch for UBasicReplicationGraph::AlwaysRelevantForConnectionList");
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 800, "Offset mismatch for UBasicReplicationGraph::ActorsWithoutNetConnection");

// /Script/ReplicationGraph.NetReplicationGraphConnection
// Kind: Class; super: ReplicationConnectionDriver
class UNetReplicationGraphConnection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* NetConnection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x84]; // 0x0030
    TWeakObjectPtr<void> DebugActor; // 0x00B4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00BC
    TArray<void*> LastGatherLocations; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x30]; // 0x00D0
    TArray<void*> ConnectionGraphNodes; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    void* TearOffNode; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 40, "Offset mismatch for UNetReplicationGraphConnection::NetConnection");
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 180, "Offset mismatch for UNetReplicationGraphConnection::DebugActor");
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 192, "Offset mismatch for UNetReplicationGraphConnection::LastGatherLocations");
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 256, "Offset mismatch for UNetReplicationGraphConnection::ConnectionGraphNodes");
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 272, "Offset mismatch for UNetReplicationGraphConnection::TearOffNode");

// /Script/ReplicationGraph.ReplicationGraph
// Kind: Class; super: ReplicationDriver
class UReplicationGraph
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ReplicationConnectionManagerClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* NetDriver; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Connections; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingConnections; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0058
    TArray<void*> GlobalGraphNodes; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrepareForReplicationNodes; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x58]; // 0x00B8
    TSet<void*> ActiveNetworkActors; // 0x0110 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 40, "Offset mismatch for UReplicationGraph::ReplicationConnectionManagerClass");
static_assert(offsetof(UReplicationGraph, NetDriver) == 48, "Offset mismatch for UReplicationGraph::NetDriver");
static_assert(offsetof(UReplicationGraph, Connections) == 56, "Offset mismatch for UReplicationGraph::Connections");
static_assert(offsetof(UReplicationGraph, PendingConnections) == 72, "Offset mismatch for UReplicationGraph::PendingConnections");
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 152, "Offset mismatch for UReplicationGraph::GlobalGraphNodes");
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 168, "Offset mismatch for UReplicationGraph::PrepareForReplicationNodes");
static_assert(offsetof(UReplicationGraph, ActiveNetworkActors) == 272, "Offset mismatch for UReplicationGraph::ActiveNetworkActors");

// /Script/ReplicationGraph.ReplicationGraphDebugActor
// Kind: Class; super: Actor
class UReplicationGraphDebugActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ReplicationGraph; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ConnectionManager; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UReplicationGraphDebugActor, ReplicationGraph) == 624, "Offset mismatch for UReplicationGraphDebugActor::ReplicationGraph");
static_assert(offsetof(UReplicationGraphDebugActor, ConnectionManager) == 632, "Offset mismatch for UReplicationGraphDebugActor::ConnectionManager");

// /Script/ReplicationGraph.ReplicationGraphNode
// Kind: Class; super: Object
class UReplicationGraphNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_ActorList
// Kind: Class; super: ReplicationGraphNode
class UReplicationGraphNode_ActorList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_ActorList, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_ActorList::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Kind: Class; super: ReplicationGraphNode
class UReplicationGraphNode_ActorListFrequencyBuckets
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_ActorListFrequencyBuckets, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_ActorListFrequencyBuckets::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// Kind: Class; super: ReplicationGraphNode
class UReplicationGraphNode_AlwaysRelevant
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ChildNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 80, "Offset mismatch for UReplicationGraphNode_AlwaysRelevant::ChildNode");

// /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// Kind: Class; super: ReplicationGraphNode_ActorList
class UReplicationGraphNode_AlwaysRelevant_ForConnection
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> PastRelevantActors; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 224, "Offset mismatch for UReplicationGraphNode_AlwaysRelevant_ForConnection::PastRelevantActors");

// /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
// Kind: Class; super: ReplicationGraphNode_ActorList
class UReplicationGraphNode_ConnectionDormancyNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_ConnectionDormancyNode, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_ConnectionDormancyNode::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
// Kind: Class; super: ReplicationGraphNode_ActorList
class UReplicationGraphNode_DormancyNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_DormancyNode, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_DormancyNode::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Kind: Class; super: ReplicationGraphNode_ActorList
class UReplicationGraphNode_DynamicSpatialFrequency
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_DynamicSpatialFrequency, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_DynamicSpatialFrequency::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_GridCell
// Kind: Class; super: ReplicationGraphNode_ActorList
class UReplicationGraphNode_GridCell
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* DynamicNode; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* DormancyNode; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 256, "Offset mismatch for UReplicationGraphNode_GridCell::DynamicNode");
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 264, "Offset mismatch for UReplicationGraphNode_GridCell::DormancyNode");

// /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Kind: Class; super: ReplicationGraphNode
class UReplicationGraphNode_GridSpatialization2D
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_GridSpatialization2D, AllChildNodes) == 40, "Offset mismatch for UReplicationGraphNode_GridSpatialization2D::AllChildNodes");

// /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// Kind: Class; super: ReplicationGraphNode
class UReplicationGraphNode_TearOff_ForConnection
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> TearOffActors; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 80, "Offset mismatch for UReplicationGraphNode_TearOff_ForConnection::TearOffActors");
