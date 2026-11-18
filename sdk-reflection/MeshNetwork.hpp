#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshNetwork
{
    struct AggregatedFunction
    {
        static constexpr std::string_view Name = "AggregatedFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Function = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Function", 0x0, "ObjectProperty"},
        }};
    };

    struct AggregatedFunctionConfig
    {
        static constexpr std::string_view Name = "AggregatedFunctionConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AggregationTimeout = 0x0;
            static constexpr std::uintptr_t bAggregationEnabled = 0x8;
            static constexpr std::uintptr_t NoAggregationParameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AggregationTimeout", 0x0, "DoubleProperty"},
            {"bAggregationEnabled", 0x8, "BoolProperty"},
            {"NoAggregationParameters", 0x10, "SetProperty"},
        }};
    };

    struct GameFeatureAction_LoadPluginForMeshNetwork
    {
        static constexpr std::string_view Name = "GameFeatureAction_LoadPluginForMeshNetwork";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PluginsToLoad = 0x28;
            static constexpr std::uintptr_t bEnsureThisPluginIsLoaded = 0x38;
            static constexpr std::uintptr_t RestrictToMapName = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PluginsToLoad", 0x28, "ArrayProperty"},
            {"bEnsureThisPluginIsLoaded", 0x38, "BoolProperty"},
            {"RestrictToMapName", 0x40, "StrProperty"},
        }};
    };

    struct MeshBeaconClient
    {
        static constexpr std::string_view Name = "MeshBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectedToRoot = 0x360;
            static constexpr std::uintptr_t MeshPingTime = 0x368;
            static constexpr std::uintptr_t ParentIds = 0x370;
            static constexpr std::uintptr_t ClientID = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bConnectedToRoot", 0x360, "BoolProperty"},
            {"MeshPingTime", 0x368, "StructProperty"},
            {"ParentIds", 0x370, "ArrayProperty"},
            {"ClientID", 0x380, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "OnRep_ConnectedToRoot",
            "OnRep_MeshPingTime",
            "OnRep_ParentIds",
            "ServerSetClientId",
            "ServerUpdateLevelVisibility",
            "ServerUpdateMultipleLevelsVisibility",
        }};
    };

    struct MeshBeaconHost
    {
        static constexpr std::string_view Name = "MeshBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHost";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxConnections = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxConnections", 0x308, "IntProperty"},
        }};
    };

    struct MeshBeaconHostObject
    {
        static constexpr std::string_view Name = "MeshBeaconHostObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconTypeName = 0x278;
            static constexpr std::uintptr_t ClientBeaconActorClass = 0x288;
            static constexpr std::uintptr_t ClientActors = 0x290;
            static constexpr std::uintptr_t ClientBeaconActorChannelName = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BeaconTypeName", 0x278, "StrProperty"},
            {"ClientBeaconActorClass", 0x288, "ClassProperty"},
            {"ClientActors", 0x290, "ArrayProperty"},
            {"ClientBeaconActorChannelName", 0x2A0, "NameProperty"},
        }};
    };

    struct MeshConnection
    {
        static constexpr std::string_view Name = "MeshConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t SocketErrorDisconnectDelay = 0x1A3C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SocketErrorDisconnectDelay", 0x1A3C, "FloatProperty"},
        }};
    };

    struct MeshMetaDataStruct
    {
        static constexpr std::string_view Name = "MeshMetaDataStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshNetDriver
    {
        static constexpr std::string_view Name = "MeshNetDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpNetDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientDormantDynamicActors = 0x700;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClientDormantDynamicActors", 0x700, "ArrayProperty"},
        }};
    };

    struct MeshNetworkComponent
    {
        static constexpr std::string_view Name = "MeshNetworkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshRelevancy = 0xC0;
            static constexpr std::uintptr_t AggregatedFunctions = 0xC8;
            static constexpr std::uintptr_t AggregatedFunctionConfigs = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshRelevancy", 0xC0, "EnumProperty"},
            {"AggregatedFunctions", 0xC8, "MapProperty"},
            {"AggregatedFunctionConfigs", 0xD8, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetMeshNetworkNodeType",
            "IsConnectedToMeshRoot",
        }};
    };

    struct MeshNetworkPluginLoadData
    {
        static constexpr std::string_view Name = "MeshNetworkPluginLoadData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeaturePluginName = 0x0;
            static constexpr std::uintptr_t RestrictToMapName = 0x10;
            static constexpr std::uintptr_t bPlacePluginIntoTargetState = 0x20;
            static constexpr std::uintptr_t DesiredPluginState = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameFeaturePluginName", 0x0, "StrProperty"},
            {"RestrictToMapName", 0x10, "StrProperty"},
            {"bPlacePluginIntoTargetState", 0x20, "BoolProperty"},
            {"DesiredPluginState", 0x21, "EnumProperty"},
        }};
    };

    struct MeshNetworkSubsystem
    {
        static constexpr std::string_view Name = "MeshNetworkSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNodeTypeChanged = 0x30;
            static constexpr std::uintptr_t OnConnectedToRootChanged = 0x40;
            static constexpr std::uintptr_t OnGameServerNodeTypeChanged = 0x50;
            static constexpr std::uintptr_t OnMeshMetaDataUpdated = 0x60;
            static constexpr std::uintptr_t OnMeshPlayerRequested = 0x70;
            static constexpr std::uintptr_t NodeType = 0xC8;
            static constexpr std::uintptr_t GameServerNodeType = 0xC9;
            static constexpr std::uintptr_t bConnectedToRoot = 0xCA;
            static constexpr std::uintptr_t bMetadataReceived = 0xCB;
            static constexpr std::uintptr_t bMeshSubsystemReady = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnMeshNodeTypeChanged", 0x30, "MulticastInlineDelegateProperty"},
            {"OnConnectedToRootChanged", 0x40, "MulticastInlineDelegateProperty"},
            {"OnGameServerNodeTypeChanged", 0x50, "MulticastInlineDelegateProperty"},
            {"OnMeshMetaDataUpdated", 0x60, "MulticastInlineDelegateProperty"},
            {"OnMeshPlayerRequested", 0x70, "MulticastInlineDelegateProperty"},
            {"NodeType", 0xC8, "EnumProperty"},
            {"GameServerNodeType", 0xC9, "EnumProperty"},
            {"bConnectedToRoot", 0xCA, "BoolProperty"},
            {"bMetadataReceived", 0xCB, "BoolProperty"},
            {"bMeshSubsystemReady", 0xCC, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "DisableMeshReplication",
            "EnableMeshReplication",
            "Get",
            "GetConnectedToRoot",
            "GetGameServerNodeType",
            "GetMeshNetworkNodeType",
            "GetMetaDataWithKey",
            "GetMetadata",
            "SetMetaData",
            "SetMetaDataWithKey",
        }};
    };

    struct MeshReplicationGraph
    {
        static constexpr std::string_view Name = "MeshReplicationGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t AlwaysRelevantNode = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AlwaysRelevantNode", 0x300, "ObjectProperty"},
        }};
    };

    struct MeshReplicationGraphConnection
    {
        static constexpr std::string_view Name = "MeshReplicationGraphConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetReplicationGraphConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t NetConnection = 0x28;
            static constexpr std::uintptr_t DebugActor = 0xB4;
            static constexpr std::uintptr_t LastGatherLocations = 0xC0;
            static constexpr std::uintptr_t ConnectionGraphNodes = 0x100;
            static constexpr std::uintptr_t TearOffNode = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NetConnection", 0x28, "ObjectProperty"},
            {"DebugActor", 0xB4, "WeakObjectProperty"},
            {"LastGatherLocations", 0xC0, "ArrayProperty"},
            {"ConnectionGraphNodes", 0x100, "ArrayProperty"},
            {"TearOffNode", 0x110, "ObjectProperty"},
        }};
    };

}
