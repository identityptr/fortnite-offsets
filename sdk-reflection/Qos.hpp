#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Qos
{
    struct DatacenterQosInstance
    {
        static constexpr std::string_view Name = "DatacenterQosInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0x0;
            static constexpr std::uintptr_t Result = 0x38;
            static constexpr std::uintptr_t AvgPingMs = 0x3C;
            static constexpr std::uintptr_t PingResults = 0x40;
            static constexpr std::uintptr_t IPv4Stats = 0x54;
            static constexpr std::uintptr_t IPv6Stats = 0x64;
            static constexpr std::uintptr_t LastCheckTimestamp = 0x78;
            static constexpr std::uintptr_t bUsable = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Definition", 0x0, "StructProperty"},
            {"Result", 0x38, "EnumProperty"},
            {"AvgPingMs", 0x3C, "IntProperty"},
            {"PingResults", 0x40, "ArrayProperty"},
            {"IPv4Stats", 0x54, "StructProperty"},
            {"IPv6Stats", 0x64, "StructProperty"},
            {"LastCheckTimestamp", 0x78, "DoubleProperty"},
            {"bUsable", 0x80, "BoolProperty"},
        }};
    };

    struct QosBeaconClient
    {
        static constexpr std::string_view Name = "QosBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconOwner = 0x2B8;
            static constexpr std::uintptr_t BeaconConnection = 0x2C0;
            static constexpr std::uintptr_t ConnectionState = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeaconOwner", 0x2B8, "ObjectProperty"},
            {"BeaconConnection", 0x2C0, "ObjectProperty"},
            {"ConnectionState", 0x2C8, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ClientQosResponse",
            "ServerQosRequest",
        }};
    };

    struct QosBeaconHost
    {
        static constexpr std::string_view Name = "QosBeaconHost";
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

    struct QosDatacenterInfo
    {
        static constexpr std::string_view Name = "QosDatacenterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t RegionId = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x20;
            static constexpr std::uintptr_t Servers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ID", 0x0, "StrProperty"},
            {"RegionId", 0x10, "StrProperty"},
            {"bEnabled", 0x20, "BoolProperty"},
            {"Servers", 0x28, "ArrayProperty"},
        }};
    };

    struct QosEvaluator
    {
        static constexpr std::string_view Name = "QosEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bInProgress = 0x48;
            static constexpr std::uintptr_t bCancelOperation = 0x49;
            static constexpr std::uintptr_t Datacenters = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInProgress", 0x48, "BoolProperty"},
            {"bCancelOperation", 0x49, "BoolProperty"},
            {"Datacenters", 0x50, "ArrayProperty"},
        }};
    };

    struct QosFamilyPingStats
    {
        static constexpr std::string_view Name = "QosFamilyPingStats";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumResponses = 0x0;
            static constexpr std::uintptr_t MinPingMs = 0x4;
            static constexpr std::uintptr_t AvgPingMs = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumResponses", 0x0, "IntProperty"},
            {"MinPingMs", 0x4, "IntProperty"},
            {"AvgPingMs", 0x8, "IntProperty"},
        }};
    };

    struct QosPingServerInfo
    {
        static constexpr std::string_view Name = "QosPingServerInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Address = 0x0;
            static constexpr std::uintptr_t Port = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Address", 0x0, "StrProperty"},
            {"Port", 0x10, "IntProperty"},
        }};
    };

    struct QosRegionInfo
    {
        static constexpr std::string_view Name = "QosRegionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t RegionId = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x20;
            static constexpr std::uintptr_t bVisible = 0x21;
            static constexpr std::uintptr_t bAutoAssignable = 0x22;
            static constexpr std::uintptr_t bAllowSubspaceBias = 0x23;
            static constexpr std::uintptr_t SubspaceBiasParams = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"RegionId", 0x10, "StrProperty"},
            {"bEnabled", 0x20, "BoolProperty"},
            {"bVisible", 0x21, "BoolProperty"},
            {"bAutoAssignable", 0x22, "BoolProperty"},
            {"bAllowSubspaceBias", 0x23, "BoolProperty"},
            {"SubspaceBiasParams", 0x24, "StructProperty"},
        }};
    };

    struct QosRegionManager
    {
        static constexpr std::string_view Name = "QosRegionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTestsPerRegion = 0x28;
            static constexpr std::uintptr_t PingTimeout = 0x2C;
            static constexpr std::uintptr_t bEnableSubspaceBiasOrder = 0x30;
            static constexpr std::uintptr_t SubspaceDelimiter = 0x38;
            static constexpr std::uintptr_t SubspaceBiasParams = 0x48;
            static constexpr std::uintptr_t RegionDefinitions = 0x58;
            static constexpr std::uintptr_t DatacenterDefinitions = 0x68;
            static constexpr std::uintptr_t LastCheckTimestamp = 0x78;
            static constexpr std::uintptr_t Evaluator = 0x80;
            static constexpr std::uintptr_t QosEvalResult = 0x88;
            static constexpr std::uintptr_t RegionOptions = 0x90;
            static constexpr std::uintptr_t ForceRegionId = 0xA0;
            static constexpr std::uintptr_t bRegionForcedViaCommandline = 0xB0;
            static constexpr std::uintptr_t SelectedRegionId = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"NumTestsPerRegion", 0x28, "IntProperty"},
            {"PingTimeout", 0x2C, "FloatProperty"},
            {"bEnableSubspaceBiasOrder", 0x30, "BoolProperty"},
            {"SubspaceDelimiter", 0x38, "StrProperty"},
            {"SubspaceBiasParams", 0x48, "StructProperty"},
            {"RegionDefinitions", 0x58, "ArrayProperty"},
            {"DatacenterDefinitions", 0x68, "ArrayProperty"},
            {"LastCheckTimestamp", 0x78, "StructProperty"},
            {"Evaluator", 0x80, "ObjectProperty"},
            {"QosEvalResult", 0x88, "EnumProperty"},
            {"RegionOptions", 0x90, "ArrayProperty"},
            {"ForceRegionId", 0xA0, "StrProperty"},
            {"bRegionForcedViaCommandline", 0xB0, "BoolProperty"},
            {"SelectedRegionId", 0xB8, "StrProperty"},
        }};
    };

    struct QosSubspaceComparisonParams
    {
        static constexpr std::string_view Name = "QosSubspaceComparisonParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNonSubspacePingMs = 0x0;
            static constexpr std::uintptr_t MinSubspacePingMs = 0x4;
            static constexpr std::uintptr_t ConstantMaxToleranceMs = 0x8;
            static constexpr std::uintptr_t ScaledMaxTolerancePct = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxNonSubspacePingMs", 0x0, "IntProperty"},
            {"MinSubspacePingMs", 0x4, "IntProperty"},
            {"ConstantMaxToleranceMs", 0x8, "IntProperty"},
            {"ScaledMaxTolerancePct", 0xC, "FloatProperty"},
        }};
    };

    struct RegionQosInstance
    {
        static constexpr std::string_view Name = "RegionQosInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0x0;
            static constexpr std::uintptr_t DatacenterOptions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Definition", 0x0, "StructProperty"},
            {"DatacenterOptions", 0x38, "ArrayProperty"},
        }};
    };

}
