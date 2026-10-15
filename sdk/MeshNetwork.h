/**
 * decamp dumper generated SDK
 * Package: /Script/MeshNetwork
 */
#pragma once
#include "Basic.h"

// /Script/MeshNetwork.AggregatedFunction
// Kind: ScriptStruct; super: none
struct FAggregatedFunction
{
public:
    void* Function; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAggregatedFunction, Function) == 0, "Offset mismatch for FAggregatedFunction::Function");

// /Script/MeshNetwork.AggregatedFunctionConfig
// Kind: ScriptStruct; super: none
struct FAggregatedFunctionConfig
{
public:
    double AggregationTimeout; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAggregationEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    TSet<void*> NoAggregationParameters; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FAggregatedFunctionConfig, AggregationTimeout) == 0, "Offset mismatch for FAggregatedFunctionConfig::AggregationTimeout");
static_assert(offsetof(FAggregatedFunctionConfig, bAggregationEnabled) == 8, "Offset mismatch for FAggregatedFunctionConfig::bAggregationEnabled");
static_assert(offsetof(FAggregatedFunctionConfig, NoAggregationParameters) == 16, "Offset mismatch for FAggregatedFunctionConfig::NoAggregationParameters");

// /Script/MeshNetwork.MeshMetaDataStruct
// Kind: ScriptStruct; super: none
struct FMeshMetaDataStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshNetwork.MeshNetworkPluginLoadData
// Kind: ScriptStruct; super: none
struct FMeshNetworkPluginLoadData
{
public:
    FString GameFeaturePluginName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RestrictToMapName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bPlacePluginIntoTargetState; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DesiredPluginState; // 0x0021 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMeshNetworkPluginLoadData, GameFeaturePluginName) == 0, "Offset mismatch for FMeshNetworkPluginLoadData::GameFeaturePluginName");
static_assert(offsetof(FMeshNetworkPluginLoadData, RestrictToMapName) == 16, "Offset mismatch for FMeshNetworkPluginLoadData::RestrictToMapName");
static_assert(offsetof(FMeshNetworkPluginLoadData, bPlacePluginIntoTargetState) == 32, "Offset mismatch for FMeshNetworkPluginLoadData::bPlacePluginIntoTargetState");
static_assert(offsetof(FMeshNetworkPluginLoadData, DesiredPluginState) == 33, "Offset mismatch for FMeshNetworkPluginLoadData::DesiredPluginState");

// /Script/MeshNetwork.GameFeatureAction_LoadPluginForMeshNetwork
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_LoadPluginForMeshNetwork
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PluginsToLoad; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnsureThisPluginIsLoaded; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    FString RestrictToMapName; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UGameFeatureAction_LoadPluginForMeshNetwork, PluginsToLoad) == 40, "Offset mismatch for UGameFeatureAction_LoadPluginForMeshNetwork::PluginsToLoad");
static_assert(offsetof(UGameFeatureAction_LoadPluginForMeshNetwork, bEnsureThisPluginIsLoaded) == 56, "Offset mismatch for UGameFeatureAction_LoadPluginForMeshNetwork::bEnsureThisPluginIsLoaded");
static_assert(offsetof(UGameFeatureAction_LoadPluginForMeshNetwork, RestrictToMapName) == 64, "Offset mismatch for UGameFeatureAction_LoadPluginForMeshNetwork::RestrictToMapName");

// /Script/MeshNetwork.MeshBeaconClient
// Kind: Class; super: OnlineBeaconClient
class UMeshBeaconClient
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t bConnectedToRoot; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0351
    std::uint8_t MeshPingTime[0x8]; // 0x0358 (Size: 0x8, Type: StructProperty)
    TArray<void*> ParentIds; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    FString ClientID; // 0x0370 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMeshBeaconClient, bConnectedToRoot) == 848, "Offset mismatch for UMeshBeaconClient::bConnectedToRoot");
static_assert(offsetof(UMeshBeaconClient, MeshPingTime) == 856, "Offset mismatch for UMeshBeaconClient::MeshPingTime");
static_assert(offsetof(UMeshBeaconClient, ParentIds) == 864, "Offset mismatch for UMeshBeaconClient::ParentIds");
static_assert(offsetof(UMeshBeaconClient, ClientID) == 880, "Offset mismatch for UMeshBeaconClient::ClientID");

// /Script/MeshNetwork.MeshBeaconHost
// Kind: Class; super: OnlineBeaconHost
class UMeshBeaconHost
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    std::int32_t MaxConnections; // 0x0300 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMeshBeaconHost, MaxConnections) == 768, "Offset mismatch for UMeshBeaconHost::MaxConnections");

// /Script/MeshNetwork.MeshBeaconHostObject
// Kind: Class; super: OnlineBeaconHostObject
class UMeshBeaconHostObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString BeaconTypeName; // 0x0270 (Size: 0x10, Type: StrProperty)
    void* ClientBeaconActorClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ClientActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    FName ClientBeaconActorChannelName; // 0x0298 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMeshBeaconHostObject, BeaconTypeName) == 624, "Offset mismatch for UMeshBeaconHostObject::BeaconTypeName");
static_assert(offsetof(UMeshBeaconHostObject, ClientBeaconActorClass) == 640, "Offset mismatch for UMeshBeaconHostObject::ClientBeaconActorClass");
static_assert(offsetof(UMeshBeaconHostObject, ClientActors) == 648, "Offset mismatch for UMeshBeaconHostObject::ClientActors");
static_assert(offsetof(UMeshBeaconHostObject, ClientBeaconActorChannelName) == 664, "Offset mismatch for UMeshBeaconHostObject::ClientBeaconActorChannelName");

// /Script/MeshNetwork.MeshConnection
// Kind: Class; super: IpConnection
class UMeshConnection
{
public:
    std::uint8_t Pad_0000[0x1A3C]; // 0x0000
    float SocketErrorDisconnectDelay; // 0x1A3C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMeshConnection, SocketErrorDisconnectDelay) == 6716, "Offset mismatch for UMeshConnection::SocketErrorDisconnectDelay");

// /Script/MeshNetwork.MeshNetDriver
// Kind: Class; super: IpNetDriver
class UMeshNetDriver
{
public:
    std::uint8_t Pad_0000[0x700]; // 0x0000
    TArray<void*> ClientDormantDynamicActors; // 0x0700 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshNetDriver, ClientDormantDynamicActors) == 1792, "Offset mismatch for UMeshNetDriver::ClientDormantDynamicActors");

// /Script/MeshNetwork.MeshNetworkComponent
// Kind: Class; super: ActorComponent
class UMeshNetworkComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MeshRelevancy; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TMap<void*, void*> AggregatedFunctions; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AggregatedFunctionConfigs; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMeshNetworkComponent, MeshRelevancy) == 192, "Offset mismatch for UMeshNetworkComponent::MeshRelevancy");
static_assert(offsetof(UMeshNetworkComponent, AggregatedFunctions) == 200, "Offset mismatch for UMeshNetworkComponent::AggregatedFunctions");
static_assert(offsetof(UMeshNetworkComponent, AggregatedFunctionConfigs) == 216, "Offset mismatch for UMeshNetworkComponent::AggregatedFunctionConfigs");

// /Script/MeshNetwork.MeshNetworkSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UMeshNetworkSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnMeshNodeTypeChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConnectedToRootChanged; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGameServerNodeTypeChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshMetaDataUpdated; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshPlayerRequested; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0080
    std::uint8_t NodeType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GameServerNodeType; // 0x00C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConnectedToRoot; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMetadataReceived; // 0x00CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeshSubsystemReady; // 0x00CC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshNetworkSubsystem, OnMeshNodeTypeChanged) == 48, "Offset mismatch for UMeshNetworkSubsystem::OnMeshNodeTypeChanged");
static_assert(offsetof(UMeshNetworkSubsystem, OnConnectedToRootChanged) == 64, "Offset mismatch for UMeshNetworkSubsystem::OnConnectedToRootChanged");
static_assert(offsetof(UMeshNetworkSubsystem, OnGameServerNodeTypeChanged) == 80, "Offset mismatch for UMeshNetworkSubsystem::OnGameServerNodeTypeChanged");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshMetaDataUpdated) == 96, "Offset mismatch for UMeshNetworkSubsystem::OnMeshMetaDataUpdated");
static_assert(offsetof(UMeshNetworkSubsystem, OnMeshPlayerRequested) == 112, "Offset mismatch for UMeshNetworkSubsystem::OnMeshPlayerRequested");
static_assert(offsetof(UMeshNetworkSubsystem, NodeType) == 200, "Offset mismatch for UMeshNetworkSubsystem::NodeType");
static_assert(offsetof(UMeshNetworkSubsystem, GameServerNodeType) == 201, "Offset mismatch for UMeshNetworkSubsystem::GameServerNodeType");
static_assert(offsetof(UMeshNetworkSubsystem, bConnectedToRoot) == 202, "Offset mismatch for UMeshNetworkSubsystem::bConnectedToRoot");
static_assert(offsetof(UMeshNetworkSubsystem, bMetadataReceived) == 203, "Offset mismatch for UMeshNetworkSubsystem::bMetadataReceived");
static_assert(offsetof(UMeshNetworkSubsystem, bMeshSubsystemReady) == 204, "Offset mismatch for UMeshNetworkSubsystem::bMeshSubsystemReady");

// /Script/MeshNetwork.MeshReplicationGraph
// Kind: Class; super: ReplicationGraph
class UMeshReplicationGraph
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    void* AlwaysRelevantNode; // 0x0300 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshReplicationGraph, AlwaysRelevantNode) == 768, "Offset mismatch for UMeshReplicationGraph::AlwaysRelevantNode");

// /Script/MeshNetwork.MeshReplicationGraphConnection
// Kind: Class; super: NetReplicationGraphConnection
class UMeshReplicationGraphConnection
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

static_assert(offsetof(UMeshReplicationGraphConnection, NetConnection) == 40, "Offset mismatch for UMeshReplicationGraphConnection::NetConnection");
static_assert(offsetof(UMeshReplicationGraphConnection, DebugActor) == 180, "Offset mismatch for UMeshReplicationGraphConnection::DebugActor");
static_assert(offsetof(UMeshReplicationGraphConnection, LastGatherLocations) == 192, "Offset mismatch for UMeshReplicationGraphConnection::LastGatherLocations");
static_assert(offsetof(UMeshReplicationGraphConnection, ConnectionGraphNodes) == 256, "Offset mismatch for UMeshReplicationGraphConnection::ConnectionGraphNodes");
static_assert(offsetof(UMeshReplicationGraphConnection, TearOffNode) == 272, "Offset mismatch for UMeshReplicationGraphConnection::TearOffNode");
