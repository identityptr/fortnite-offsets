#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NetworkPrediction
{
    struct NetworkPredictionComponent
    {
        static constexpr std::string_view Name = "NetworkPredictionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkPredictionProxy = 0xC0;
            static constexpr std::uintptr_t ReplicationProxy_ServerRPC = 0x170;
            static constexpr std::uintptr_t ReplicationProxy_Autonomous = 0x440;
            static constexpr std::uintptr_t ReplicationProxy_Simulated = 0x710;
            static constexpr std::uintptr_t ReplicationProxy_Replay = 0x9E0;
            static constexpr std::uintptr_t AssociatedPlayerController = 0xE50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NetworkPredictionProxy", 0xC0, "StructProperty"},
            {"ReplicationProxy_ServerRPC", 0x170, "StructProperty"},
            {"ReplicationProxy_Autonomous", 0x440, "StructProperty"},
            {"ReplicationProxy_Simulated", 0x710, "StructProperty"},
            {"ReplicationProxy_Replay", 0x9E0, "StructProperty"},
            {"AssociatedPlayerController", 0xE50, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnOwnerPawnControllerChanged",
            "ServerHandlePlayerRemoved",
            "ServerReceiveClientInput",
        }};
    };

    struct NetworkPredictionDevHUD
    {
        static constexpr std::string_view Name = "NetworkPredictionDevHUD";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HUDName = 0x0;
            static constexpr std::uintptr_t Items = 0x10;
            static constexpr std::uintptr_t bRequirePIE = 0x20;
            static constexpr std::uintptr_t bRequireNotPIE = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HUDName", 0x0, "StrProperty"},
            {"Items", 0x10, "ArrayProperty"},
            {"bRequirePIE", 0x20, "BoolProperty"},
            {"bRequireNotPIE", 0x21, "BoolProperty"},
        }};
    };

    struct NetworkPredictionDevHUDItem
    {
        static constexpr std::string_view Name = "NetworkPredictionDevHUDItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t ExecCommand = 0x10;
            static constexpr std::uintptr_t bAutoBack = 0x20;
            static constexpr std::uintptr_t bRequirePIE = 0x21;
            static constexpr std::uintptr_t bRequireNotPIE = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x0, "StrProperty"},
            {"ExecCommand", 0x10, "StrProperty"},
            {"bAutoBack", 0x20, "BoolProperty"},
            {"bRequirePIE", 0x21, "BoolProperty"},
            {"bRequireNotPIE", 0x22, "BoolProperty"},
        }};
    };

    struct NetworkPredictionFinalizeFrameTickFunction
    {
        static constexpr std::string_view Name = "NetworkPredictionFinalizeFrameTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct NetworkPredictionProduceInputTickFunction
    {
        static constexpr std::string_view Name = "NetworkPredictionProduceInputTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct NetworkPredictionProxy
    {
        static constexpr std::string_view Name = "NetworkPredictionProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldManager = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldManager", 0xA0, "ObjectProperty"},
        }};
    };

    struct NetworkPredictionProxyNetSerializerConfig
    {
        static constexpr std::string_view Name = "NetworkPredictionProxyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetworkPredictionReplicatedManager
    {
        static constexpr std::string_view Name = "NetworkPredictionReplicatedManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedPackageMap = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedPackageMap", 0x278, "StructProperty"},
        }};
    };

    struct NetworkPredictionSettings
    {
        static constexpr std::string_view Name = "NetworkPredictionSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreferredTickingPolicy = 0x0;
            static constexpr std::uintptr_t ReplicatedManagerClassOverride = 0x8;
            static constexpr std::uintptr_t TickPhaseMode = 0x10;
            static constexpr std::uintptr_t ProduceInputTickGroup = 0x11;
            static constexpr std::uintptr_t SimulationTickGroup = 0x12;
            static constexpr std::uintptr_t FinalizeFrameTickGroup = 0x13;
            static constexpr std::uintptr_t FixedTickFrameRate = 0x14;
            static constexpr std::uintptr_t SimulatedProxyNetworkLOD = 0x18;
            static constexpr std::uintptr_t bEnableFixedTickSmoothing = 0x19;
            static constexpr std::uintptr_t FixedTickInterpolationBufferedMS = 0x1C;
            static constexpr std::uintptr_t IndependentTickInterpolationBufferedMS = 0x20;
            static constexpr std::uintptr_t IndependentTickInterpolationMaxBufferedMS = 0x24;
            static constexpr std::uintptr_t FixedTickInputSendCount = 0x28;
            static constexpr std::uintptr_t IndependentTickInputSendCount = 0x2C;
            static constexpr std::uintptr_t MaximumRemoteInputFaultLimit = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PreferredTickingPolicy", 0x0, "EnumProperty"},
            {"ReplicatedManagerClassOverride", 0x8, "ClassProperty"},
            {"TickPhaseMode", 0x10, "EnumProperty"},
            {"ProduceInputTickGroup", 0x11, "ByteProperty"},
            {"SimulationTickGroup", 0x12, "ByteProperty"},
            {"FinalizeFrameTickGroup", 0x13, "ByteProperty"},
            {"FixedTickFrameRate", 0x14, "IntProperty"},
            {"SimulatedProxyNetworkLOD", 0x18, "EnumProperty"},
            {"bEnableFixedTickSmoothing", 0x19, "BoolProperty"},
            {"FixedTickInterpolationBufferedMS", 0x1C, "IntProperty"},
            {"IndependentTickInterpolationBufferedMS", 0x20, "IntProperty"},
            {"IndependentTickInterpolationMaxBufferedMS", 0x24, "IntProperty"},
            {"FixedTickInputSendCount", 0x28, "IntProperty"},
            {"IndependentTickInputSendCount", 0x2C, "IntProperty"},
            {"MaximumRemoteInputFaultLimit", 0x30, "IntProperty"},
        }};
    };

    struct NetworkPredictionSettingsObject
    {
        static constexpr std::string_view Name = "NetworkPredictionSettingsObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
            static constexpr std::uintptr_t DevHUDs = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x28, "StructProperty"},
            {"DevHUDs", 0x60, "ArrayProperty"},
        }};
    };

    struct NetworkPredictionSimulationTickFunction
    {
        static constexpr std::string_view Name = "NetworkPredictionSimulationTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct NetworkPredictionWorldManager
    {
        static constexpr std::string_view Name = "NetworkPredictionWorldManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedManager = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedManager", 0x38, "ObjectProperty"},
        }};
    };

    struct ReplicationProxy
    {
        static constexpr std::string_view Name = "ReplicationProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReplicationProxyNetSerializerConfig
    {
        static constexpr std::string_view Name = "ReplicationProxyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxQuantizedSizeBits = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxQuantizedSizeBits", 0x10, "UInt32Property"},
        }};
    };

    struct ServerReplicationRPCParameter
    {
        static constexpr std::string_view Name = "ServerReplicationRPCParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ServerReplicationRPCParameterNetSerializerConfig
    {
        static constexpr std::string_view Name = "ServerReplicationRPCParameterNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxQuantizedSizeBits = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxQuantizedSizeBits", 0x10, "UInt32Property"},
        }};
    };

    struct SharedPackageMap
    {
        static constexpr std::string_view Name = "SharedPackageMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x0, "ArrayProperty"},
        }};
    };

    struct SharedPackageMapItem
    {
        static constexpr std::string_view Name = "SharedPackageMapItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftPtr = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftPtr", 0x0, "SoftObjectProperty"},
        }};
    };

}
