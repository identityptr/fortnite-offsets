#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ReplicationGraph
{
    struct AlwaysRelevantActorInfo
    {
        static constexpr std::string_view Name = "AlwaysRelevantActorInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x0;
            static constexpr std::uintptr_t LastViewer = 0x8;
            static constexpr std::uintptr_t LastViewTarget = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Connection", 0x0, "ObjectProperty"},
            {"LastViewer", 0x8, "ObjectProperty"},
            {"LastViewTarget", 0x10, "ObjectProperty"},
        }};
    };

    struct BasicReplicationGraph
    {
        static constexpr std::string_view Name = "BasicReplicationGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t GridNode = 0x300;
            static constexpr std::uintptr_t AlwaysRelevantNode = 0x308;
            static constexpr std::uintptr_t AlwaysRelevantForConnectionList = 0x310;
            static constexpr std::uintptr_t ActorsWithoutNetConnection = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GridNode", 0x300, "ObjectProperty"},
            {"AlwaysRelevantNode", 0x308, "ObjectProperty"},
            {"AlwaysRelevantForConnectionList", 0x310, "ArrayProperty"},
            {"ActorsWithoutNetConnection", 0x320, "ArrayProperty"},
        }};
    };

    struct ClassReplicationInfo
    {
        static constexpr std::string_view Name = "ClassReplicationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DistancePriorityScale = 0x0;
            static constexpr std::uintptr_t StarvationPriorityScale = 0x4;
            static constexpr std::uintptr_t AccumulatedNetPriorityBias = 0x8;
            static constexpr std::uintptr_t ReplicationPeriodFrame = 0xC;
            static constexpr std::uintptr_t FastPath_ReplicationPeriodFrame = 0xE;
            static constexpr std::uintptr_t ActorChannelFrameTimeout = 0x10;
            static constexpr std::uintptr_t CullDistance = 0x54;
            static constexpr std::uintptr_t CullDistanceSquared = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DistancePriorityScale", 0x0, "FloatProperty"},
            {"StarvationPriorityScale", 0x4, "FloatProperty"},
            {"AccumulatedNetPriorityBias", 0x8, "FloatProperty"},
            {"ReplicationPeriodFrame", 0xC, "UInt16Property"},
            {"FastPath_ReplicationPeriodFrame", 0xE, "UInt16Property"},
            {"ActorChannelFrameTimeout", 0x10, "UInt16Property"},
            {"CullDistance", 0x54, "FloatProperty"},
            {"CullDistanceSquared", 0x58, "FloatProperty"},
        }};
    };

    struct ConnectionAlwaysRelevantNodePair
    {
        static constexpr std::string_view Name = "ConnectionAlwaysRelevantNodePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NetConnection = 0x0;
            static constexpr std::uintptr_t Node = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NetConnection", 0x0, "ObjectProperty"},
            {"Node", 0x8, "ObjectProperty"},
        }};
    };

    struct LastLocationGatherInfo
    {
        static constexpr std::string_view Name = "LastLocationGatherInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x0;
            static constexpr std::uintptr_t LastLocation = 0x8;
            static constexpr std::uintptr_t LastOutOfRangeLocationCheck = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Connection", 0x0, "ObjectProperty"},
            {"LastLocation", 0x8, "StructProperty"},
            {"LastOutOfRangeLocationCheck", 0x20, "StructProperty"},
        }};
    };

    struct NetReplicationGraphConnection
    {
        static constexpr std::string_view Name = "NetReplicationGraphConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationConnectionDriver";
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

    struct ReplicationGraph
    {
        static constexpr std::string_view Name = "ReplicationGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationConnectionManagerClass = 0x28;
            static constexpr std::uintptr_t NetDriver = 0x30;
            static constexpr std::uintptr_t Connections = 0x38;
            static constexpr std::uintptr_t PendingConnections = 0x48;
            static constexpr std::uintptr_t GlobalGraphNodes = 0x98;
            static constexpr std::uintptr_t PrepareForReplicationNodes = 0xA8;
            static constexpr std::uintptr_t ActiveNetworkActors = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ReplicationConnectionManagerClass", 0x28, "ClassProperty"},
            {"NetDriver", 0x30, "ObjectProperty"},
            {"Connections", 0x38, "ArrayProperty"},
            {"PendingConnections", 0x48, "ArrayProperty"},
            {"GlobalGraphNodes", 0x98, "ArrayProperty"},
            {"PrepareForReplicationNodes", 0xA8, "ArrayProperty"},
            {"ActiveNetworkActors", 0x110, "SetProperty"},
        }};
    };

    struct ReplicationGraphDebugActor
    {
        static constexpr std::string_view Name = "ReplicationGraphDebugActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationGraph = 0x278;
            static constexpr std::uintptr_t ConnectionManager = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicationGraph", 0x278, "ObjectProperty"},
            {"ConnectionManager", 0x280, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "ClientCellInfo",
            "ServerCellInfo",
            "ServerPrintAllActorInfo",
            "ServerPrintCullDistances",
            "ServerSetConditionalActorBreakpoint",
            "ServerSetCullDistanceForClass",
            "ServerSetPeriodFrameForClass",
            "ServerStartDebugging",
            "ServerStopDebugging",
        }};
    };

    struct ReplicationGraphNode
    {
        static constexpr std::string_view Name = "ReplicationGraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_ActorList
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_ActorList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_ActorListFrequencyBuckets
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_ActorListFrequencyBuckets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_AlwaysRelevant
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_AlwaysRelevant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildNode = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildNode", 0x50, "ObjectProperty"},
        }};
    };

    struct ReplicationGraphNode_AlwaysRelevant_ForConnection
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_AlwaysRelevant_ForConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode_ActorList";
        struct Offsets
        {
            static constexpr std::uintptr_t PastRelevantActors = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PastRelevantActors", 0xE0, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_ConnectionDormancyNode
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_ConnectionDormancyNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode_ActorList";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_DormancyNode
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_DormancyNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode_ActorList";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_DynamicSpatialFrequency
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_DynamicSpatialFrequency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode_ActorList";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_GridCell
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_GridCell";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode_ActorList";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicNode = 0x100;
            static constexpr std::uintptr_t DormancyNode = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicNode", 0x100, "ObjectProperty"},
            {"DormancyNode", 0x108, "ObjectProperty"},
        }};
    };

    struct ReplicationGraphNode_GridSpatialization2D
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_GridSpatialization2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AllChildNodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllChildNodes", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicationGraphNode_TearOff_ForConnection
    {
        static constexpr std::string_view Name = "ReplicationGraphNode_TearOff_ForConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReplicationGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TearOffActors = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TearOffActors", 0x50, "ArrayProperty"},
        }};
    };

    struct TearOffActorInfo
    {
        static constexpr std::string_view Name = "TearOffActorInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Actor", 0x8, "ObjectProperty"},
        }};
    };

}
