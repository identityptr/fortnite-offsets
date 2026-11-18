#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NetCore
{
    struct EscalationManagerConfig
    {
        static constexpr std::string_view Name = "EscalationManagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StatePerObjectConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t EscalationSeverity = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EscalationSeverity", 0x68, "ArrayProperty"},
        }};
    };

    struct EscalationState
    {
        static constexpr std::string_view Name = "EscalationState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t bLogEscalate = 0x18;
            static constexpr std::uintptr_t bDormant = 0x19;
            static constexpr std::uintptr_t CooloffTime = 0x1A;
            static constexpr std::uintptr_t AutoEscalateTime = 0x1C;
            static constexpr std::uintptr_t HighestTimePeriod = 0x1E;
            static constexpr std::uintptr_t AllTimePeriods = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bLogEscalate", 0x18, "BoolProperty"},
            {"bDormant", 0x19, "BoolProperty"},
            {"CooloffTime", 0x1A, "Int16Property"},
            {"AutoEscalateTime", 0x1C, "Int16Property"},
            {"HighestTimePeriod", 0x1E, "Int8Property"},
            {"AllTimePeriods", 0x20, "ArrayProperty"},
        }};
    };

    struct FastArraySerializer
    {
        static constexpr std::string_view Name = "FastArraySerializer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IdCounter = 0x10;
            static constexpr std::uintptr_t ArrayReplicationKey = 0x14;
            static constexpr std::uintptr_t DeltaFlags = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IdCounter", 0x10, "IntProperty"},
            {"ArrayReplicationKey", 0x14, "IntProperty"},
            {"DeltaFlags", 0x40, "EnumProperty"},
        }};
    };

    struct FastArraySerializerItem
    {
        static constexpr std::string_view Name = "FastArraySerializerItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationID = 0x0;
            static constexpr std::uintptr_t ReplicationKey = 0x4;
            static constexpr std::uintptr_t MostRecentArrayReplicationKey = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReplicationID", 0x0, "IntProperty"},
            {"ReplicationKey", 0x4, "IntProperty"},
            {"MostRecentArrayReplicationKey", 0x8, "IntProperty"},
        }};
    };

    struct GroupedRepNotifyInfo
    {
        static constexpr std::string_view Name = "GroupedRepNotifyInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetAnalyticsAggregatorConfig
    {
        static constexpr std::string_view Name = "NetAnalyticsAggregatorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NetAnalyticsData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetAnalyticsData", 0x28, "ArrayProperty"},
        }};
    };

    struct NetAnalyticsDataConfig
    {
        static constexpr std::string_view Name = "NetAnalyticsDataConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataName = 0x0;
            static constexpr std::uintptr_t bEnabled = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataName", 0x0, "NameProperty"},
            {"bEnabled", 0x4, "BoolProperty"},
        }};
    };

    struct NetFaultState
    {
        static constexpr std::string_view Name = "NetFaultState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EscalationState";
        struct Offsets
        {
            static constexpr std::uintptr_t bCloseConnection = 0x30;
            static constexpr std::uintptr_t EscalateQuotaFaultsPerPeriod = 0x32;
            static constexpr std::uintptr_t EscalateQuotaFaultPercentPerPeriod = 0x34;
            static constexpr std::uintptr_t DescalateQuotaFaultsPerPeriod = 0x36;
            static constexpr std::uintptr_t DescalateQuotaFaultPercentPerPeriod = 0x38;
            static constexpr std::uintptr_t EscalateQuotaTimePeriod = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bCloseConnection", 0x30, "BoolProperty"},
            {"EscalateQuotaFaultsPerPeriod", 0x32, "Int16Property"},
            {"EscalateQuotaFaultPercentPerPeriod", 0x34, "Int8Property"},
            {"DescalateQuotaFaultsPerPeriod", 0x36, "Int16Property"},
            {"DescalateQuotaFaultPercentPerPeriod", 0x38, "Int8Property"},
            {"EscalateQuotaTimePeriod", 0x39, "Int8Property"},
        }};
    };

    struct RPCAnalyticsThreshold
    {
        static constexpr std::string_view Name = "RPCAnalyticsThreshold";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RPC = 0x0;
            static constexpr std::uintptr_t CountPerSec = 0x4;
            static constexpr std::uintptr_t TimePerSec = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RPC", 0x0, "NameProperty"},
            {"CountPerSec", 0x4, "IntProperty"},
            {"TimePerSec", 0x8, "DoubleProperty"},
        }};
    };

    struct RPCDoSDetectionConfig
    {
        static constexpr std::string_view Name = "RPCDoSDetectionConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bRPCDoSDetection = 0x28;
            static constexpr std::uintptr_t bRPCDoSAnalytics = 0x29;
            static constexpr std::uintptr_t HitchTimeQuotaMS = 0x2C;
            static constexpr std::uintptr_t HitchSuspendDetectionTimeMS = 0x30;
            static constexpr std::uintptr_t DetectionSeverity = 0x38;
            static constexpr std::uintptr_t InitialConnectToleranceMS = 0x48;
            static constexpr std::uintptr_t RPCBlockAllowlist = 0x50;
            static constexpr std::uintptr_t RPCAnalyticsThresholds = 0x60;
            static constexpr std::uintptr_t RPCAnalyticsOverrideChance = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bRPCDoSDetection", 0x28, "BoolProperty"},
            {"bRPCDoSAnalytics", 0x29, "BoolProperty"},
            {"HitchTimeQuotaMS", 0x2C, "IntProperty"},
            {"HitchSuspendDetectionTimeMS", 0x30, "IntProperty"},
            {"DetectionSeverity", 0x38, "ArrayProperty"},
            {"InitialConnectToleranceMS", 0x48, "IntProperty"},
            {"RPCBlockAllowlist", 0x50, "ArrayProperty"},
            {"RPCAnalyticsThresholds", 0x60, "ArrayProperty"},
            {"RPCAnalyticsOverrideChance", 0x70, "DoubleProperty"},
        }};
    };

    struct RPCDoSState
    {
        static constexpr std::string_view Name = "RPCDoSState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bLogEscalate = 0x8;
            static constexpr std::uintptr_t bSendEscalateAnalytics = 0x9;
            static constexpr std::uintptr_t bKickPlayer = 0xA;
            static constexpr std::uintptr_t bTrackRecentRPCs = 0xB;
            static constexpr std::uintptr_t EscalateQuotaRPCsPerFrame = 0xC;
            static constexpr std::uintptr_t EscalateTimeQuotaMSPerFrame = 0xE;
            static constexpr std::uintptr_t EscalateQuotaRPCsPerPeriod = 0x10;
            static constexpr std::uintptr_t EscalateTimeQuotaMSPerPeriod = 0x12;
            static constexpr std::uintptr_t EscalateQuotaTimePeriod = 0x14;
            static constexpr std::uintptr_t EscalationCountTolerance = 0x15;
            static constexpr std::uintptr_t EscalationTimeToleranceMS = 0x16;
            static constexpr std::uintptr_t RPCRepeatLimitPerPeriod = 0x18;
            static constexpr std::uintptr_t RPCRepeatLimitMSPerPeriod = 0x1A;
            static constexpr std::uintptr_t RPCRepeatLimitTimePeriod = 0x1C;
            static constexpr std::uintptr_t CooloffTime = 0x1E;
            static constexpr std::uintptr_t AutoEscalateTime = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bLogEscalate", 0x8, "BoolProperty"},
            {"bSendEscalateAnalytics", 0x9, "BoolProperty"},
            {"bKickPlayer", 0xA, "BoolProperty"},
            {"bTrackRecentRPCs", 0xB, "BoolProperty"},
            {"EscalateQuotaRPCsPerFrame", 0xC, "Int16Property"},
            {"EscalateTimeQuotaMSPerFrame", 0xE, "Int16Property"},
            {"EscalateQuotaRPCsPerPeriod", 0x10, "Int16Property"},
            {"EscalateTimeQuotaMSPerPeriod", 0x12, "Int16Property"},
            {"EscalateQuotaTimePeriod", 0x14, "Int8Property"},
            {"EscalationCountTolerance", 0x15, "Int8Property"},
            {"EscalationTimeToleranceMS", 0x16, "Int16Property"},
            {"RPCRepeatLimitPerPeriod", 0x18, "Int16Property"},
            {"RPCRepeatLimitMSPerPeriod", 0x1A, "Int16Property"},
            {"RPCRepeatLimitTimePeriod", 0x1C, "Int8Property"},
            {"CooloffTime", 0x1E, "Int16Property"},
            {"AutoEscalateTime", 0x20, "Int16Property"},
        }};
    };

    struct RPCDoSStateConfig
    {
        static constexpr std::string_view Name = "RPCDoSStateConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "RPCDoSState";
        struct Offsets
        {
            static constexpr std::uintptr_t bLogEscalate = 0x8;
            static constexpr std::uintptr_t bSendEscalateAnalytics = 0x9;
            static constexpr std::uintptr_t bKickPlayer = 0xA;
            static constexpr std::uintptr_t bTrackRecentRPCs = 0xB;
            static constexpr std::uintptr_t EscalateQuotaRPCsPerFrame = 0xC;
            static constexpr std::uintptr_t EscalateTimeQuotaMSPerFrame = 0xE;
            static constexpr std::uintptr_t EscalateQuotaRPCsPerPeriod = 0x10;
            static constexpr std::uintptr_t EscalateTimeQuotaMSPerPeriod = 0x12;
            static constexpr std::uintptr_t EscalateQuotaTimePeriod = 0x14;
            static constexpr std::uintptr_t EscalationCountTolerance = 0x15;
            static constexpr std::uintptr_t EscalationTimeToleranceMS = 0x16;
            static constexpr std::uintptr_t RPCRepeatLimitPerPeriod = 0x18;
            static constexpr std::uintptr_t RPCRepeatLimitMSPerPeriod = 0x1A;
            static constexpr std::uintptr_t RPCRepeatLimitTimePeriod = 0x1C;
            static constexpr std::uintptr_t CooloffTime = 0x1E;
            static constexpr std::uintptr_t AutoEscalateTime = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bLogEscalate", 0x8, "BoolProperty"},
            {"bSendEscalateAnalytics", 0x9, "BoolProperty"},
            {"bKickPlayer", 0xA, "BoolProperty"},
            {"bTrackRecentRPCs", 0xB, "BoolProperty"},
            {"EscalateQuotaRPCsPerFrame", 0xC, "Int16Property"},
            {"EscalateTimeQuotaMSPerFrame", 0xE, "Int16Property"},
            {"EscalateQuotaRPCsPerPeriod", 0x10, "Int16Property"},
            {"EscalateTimeQuotaMSPerPeriod", 0x12, "Int16Property"},
            {"EscalateQuotaTimePeriod", 0x14, "Int8Property"},
            {"EscalationCountTolerance", 0x15, "Int8Property"},
            {"EscalationTimeToleranceMS", 0x16, "Int16Property"},
            {"RPCRepeatLimitPerPeriod", 0x18, "Int16Property"},
            {"RPCRepeatLimitMSPerPeriod", 0x1A, "Int16Property"},
            {"RPCRepeatLimitTimePeriod", 0x1C, "Int8Property"},
            {"CooloffTime", 0x1E, "Int16Property"},
            {"AutoEscalateTime", 0x20, "Int16Property"},
        }};
    };

    struct StatePerObjectConfig
    {
        static constexpr std::string_view Name = "StatePerObjectConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PerObjectConfigSection = 0x50;
            static constexpr std::uintptr_t bEnabled = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PerObjectConfigSection", 0x50, "StrProperty"},
            {"bEnabled", 0x60, "BoolProperty"},
        }};
    };

    struct StateStruct
    {
        static constexpr std::string_view Name = "StateStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateName", 0x8, "StrProperty"},
        }};
    };

}
