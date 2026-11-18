#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EngineMessages
{
    struct EngineServiceAuthDeny
    {
        static constexpr std::string_view Name = "EngineServiceAuthDeny";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserName = 0x0;
            static constexpr std::uintptr_t UserToDeny = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserName", 0x0, "StrProperty"},
            {"UserToDeny", 0x10, "StrProperty"},
        }};
    };

    struct EngineServiceAuthGrant
    {
        static constexpr std::string_view Name = "EngineServiceAuthGrant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserName = 0x0;
            static constexpr std::uintptr_t UserToGrant = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserName", 0x0, "StrProperty"},
            {"UserToGrant", 0x10, "StrProperty"},
        }};
    };

    struct EngineServiceExecuteCommand
    {
        static constexpr std::string_view Name = "EngineServiceExecuteCommand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Command = 0x0;
            static constexpr std::uintptr_t UserName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Command", 0x0, "StrProperty"},
            {"UserName", 0x10, "StrProperty"},
        }};
    };

    struct EngineServiceNotification
    {
        static constexpr std::string_view Name = "EngineServiceNotification";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x0;
            static constexpr std::uintptr_t TimeSeconds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text", 0x0, "StrProperty"},
            {"TimeSeconds", 0x10, "DoubleProperty"},
        }};
    };

    struct EngineServicePing
    {
        static constexpr std::string_view Name = "EngineServicePing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EngineServicePong
    {
        static constexpr std::string_view Name = "EngineServicePong";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentLevel = 0x0;
            static constexpr std::uintptr_t EngineVersion = 0x10;
            static constexpr std::uintptr_t HasBegunPlay = 0x14;
            static constexpr std::uintptr_t InstanceID = 0x18;
            static constexpr std::uintptr_t InstanceType = 0x28;
            static constexpr std::uintptr_t SessionID = 0x38;
            static constexpr std::uintptr_t WorldTimeSeconds = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CurrentLevel", 0x0, "StrProperty"},
            {"EngineVersion", 0x10, "IntProperty"},
            {"HasBegunPlay", 0x14, "BoolProperty"},
            {"InstanceID", 0x18, "StructProperty"},
            {"InstanceType", 0x28, "StrProperty"},
            {"SessionID", 0x38, "StructProperty"},
            {"WorldTimeSeconds", 0x48, "FloatProperty"},
        }};
    };

    struct EngineServiceTerminate
    {
        static constexpr std::string_view Name = "EngineServiceTerminate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserName", 0x0, "StrProperty"},
        }};
    };

    struct TraceCapability
    {
        static constexpr std::string_view Name = "TraceCapability";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "StrProperty"},
        }};
    };

    struct TraceChannelPreset
    {
        static constexpr std::string_view Name = "TraceChannelPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ChannelList = 0x10;
            static constexpr std::uintptr_t bIsReadOnly = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"ChannelList", 0x10, "StrProperty"},
            {"bIsReadOnly", 0x20, "BoolProperty"},
        }};
    };

    struct TraceControlBookmark
    {
        static constexpr std::string_view Name = "TraceControlBookmark";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Label", 0x0, "StrProperty"},
        }};
    };

    struct TraceControlChannelsDesc
    {
        static constexpr std::string_view Name = "TraceControlChannelsDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Channels = 0x0;
            static constexpr std::uintptr_t IDs = 0x10;
            static constexpr std::uintptr_t Descriptions = 0x20;
            static constexpr std::uintptr_t ReadOnlyIds = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Channels", 0x0, "ArrayProperty"},
            {"IDs", 0x10, "ArrayProperty"},
            {"Descriptions", 0x20, "ArrayProperty"},
            {"ReadOnlyIds", 0x30, "ArrayProperty"},
        }};
    };

    struct TraceControlChannelsPing
    {
        static constexpr std::string_view Name = "TraceControlChannelsPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KnownChannelCount = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KnownChannelCount", 0x0, "UInt32Property"},
        }};
    };

    struct TraceControlChannelsSet
    {
        static constexpr std::string_view Name = "TraceControlChannelsSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelIdsToEnable = 0x0;
            static constexpr std::uintptr_t ChannelIdsToDisable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChannelIdsToEnable", 0x0, "ArrayProperty"},
            {"ChannelIdsToDisable", 0x10, "ArrayProperty"},
        }};
    };

    struct TraceControlChannelsSetError
    {
        static constexpr std::string_view Name = "TraceControlChannelsSetError";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Errors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Errors", 0x0, "MapProperty"},
        }};
    };

    struct TraceControlChannelsStatus
    {
        static constexpr std::string_view Name = "TraceControlChannelsStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledIds = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnabledIds", 0x0, "ArrayProperty"},
        }};
    };

    struct TraceControlDiscovery
    {
        static constexpr std::string_view Name = "TraceControlDiscovery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TraceControlStatus";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x68;
            static constexpr std::uintptr_t InstanceID = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x68, "StructProperty"},
            {"InstanceID", 0x78, "StructProperty"},
        }};
    };

    struct TraceControlDiscoveryPing
    {
        static constexpr std::string_view Name = "TraceControlDiscoveryPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StructProperty"},
            {"InstanceID", 0x10, "StructProperty"},
        }};
    };

    struct TraceControlFile
    {
        static constexpr std::string_view Name = "TraceControlFile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TraceControlStartCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t File = 0x18;
            static constexpr std::uintptr_t bTruncateFile = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"File", 0x18, "StrProperty"},
            {"bTruncateFile", 0x28, "BoolProperty"},
        }};
    };

    struct TraceControlPause
    {
        static constexpr std::string_view Name = "TraceControlPause";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TraceControlResume
    {
        static constexpr std::string_view Name = "TraceControlResume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TraceControlScreenshot
    {
        static constexpr std::string_view Name = "TraceControlScreenshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t bShowUI = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"bShowUI", 0x10, "BoolProperty"},
        }};
    };

    struct TraceControlSecure
    {
        static constexpr std::string_view Name = "TraceControlSecure";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TraceControlStartCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t Channels = 0x0;
            static constexpr std::uintptr_t bExcludeTail = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Channels", 0x0, "StrProperty"},
            {"bExcludeTail", 0x10, "BoolProperty"},
        }};
    };

    struct TraceControlSecureResponse
    {
        static constexpr std::string_view Name = "TraceControlSecureResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Host = 0x0;
            static constexpr std::uintptr_t Port = 0x10;
            static constexpr std::uintptr_t Mode = 0x12;
            static constexpr std::uintptr_t AuthorizationToken = 0x18;
            static constexpr std::uintptr_t CertificateAuthority = 0x28;
            static constexpr std::uintptr_t Identity = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Host", 0x0, "StrProperty"},
            {"Port", 0x10, "UInt16Property"},
            {"Mode", 0x12, "EnumProperty"},
            {"AuthorizationToken", 0x18, "ArrayProperty"},
            {"CertificateAuthority", 0x28, "ArrayProperty"},
            {"Identity", 0x38, "StrProperty"},
        }};
    };

    struct TraceControlSend
    {
        static constexpr std::string_view Name = "TraceControlSend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TraceControlStartCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t Host = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Host", 0x18, "StrProperty"},
        }};
    };

    struct TraceControlSetStatNamedEvents
    {
        static constexpr std::string_view Name = "TraceControlSetStatNamedEvents";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
        }};
    };

    struct TraceControlSettings
    {
        static constexpr std::string_view Name = "TraceControlSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseWorkerThread = 0x0;
            static constexpr std::uintptr_t bUseImportantCache = 0x1;
            static constexpr std::uintptr_t TailSizeBytes = 0x4;
            static constexpr std::uintptr_t ChannelPresets = 0x8;
            static constexpr std::uintptr_t Capabilities = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseWorkerThread", 0x0, "BoolProperty"},
            {"bUseImportantCache", 0x1, "BoolProperty"},
            {"TailSizeBytes", 0x4, "UInt32Property"},
            {"ChannelPresets", 0x8, "ArrayProperty"},
            {"Capabilities", 0x18, "ArrayProperty"},
        }};
    };

    struct TraceControlSettingsPing
    {
        static constexpr std::string_view Name = "TraceControlSettingsPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TraceControlSnapshotFile
    {
        static constexpr std::string_view Name = "TraceControlSnapshotFile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t File = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"File", 0x0, "StrProperty"},
        }};
    };

    struct TraceControlSnapshotSend
    {
        static constexpr std::string_view Name = "TraceControlSnapshotSend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Host = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Host", 0x0, "StrProperty"},
        }};
    };

    struct TraceControlStartCommon
    {
        static constexpr std::string_view Name = "TraceControlStartCommon";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Channels = 0x0;
            static constexpr std::uintptr_t bExcludeTail = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Channels", 0x0, "StrProperty"},
            {"bExcludeTail", 0x10, "BoolProperty"},
        }};
    };

    struct TraceControlStatus
    {
        static constexpr std::string_view Name = "TraceControlStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Endpoint = 0x0;
            static constexpr std::uintptr_t SessionGuid = 0x10;
            static constexpr std::uintptr_t TraceGuid = 0x20;
            static constexpr std::uintptr_t bytesSent = 0x30;
            static constexpr std::uintptr_t BytesTraced = 0x38;
            static constexpr std::uintptr_t MemoryUsed = 0x40;
            static constexpr std::uintptr_t CacheAllocated = 0x48;
            static constexpr std::uintptr_t CacheUsed = 0x4C;
            static constexpr std::uintptr_t CacheWaste = 0x50;
            static constexpr std::uintptr_t bAreStatNamedEventsEnabled = 0x54;
            static constexpr std::uintptr_t bIsPaused = 0x55;
            static constexpr std::uintptr_t bIsTracing = 0x56;
            static constexpr std::uintptr_t StatusTimestamp = 0x58;
            static constexpr std::uintptr_t TraceSystemStatus = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Endpoint", 0x0, "StrProperty"},
            {"SessionGuid", 0x10, "StructProperty"},
            {"TraceGuid", 0x20, "StructProperty"},
            {"bytesSent", 0x30, "UInt64Property"},
            {"BytesTraced", 0x38, "UInt64Property"},
            {"MemoryUsed", 0x40, "UInt64Property"},
            {"CacheAllocated", 0x48, "UInt32Property"},
            {"CacheUsed", 0x4C, "UInt32Property"},
            {"CacheWaste", 0x50, "UInt32Property"},
            {"bAreStatNamedEventsEnabled", 0x54, "BoolProperty"},
            {"bIsPaused", 0x55, "BoolProperty"},
            {"bIsTracing", 0x56, "BoolProperty"},
            {"StatusTimestamp", 0x58, "StructProperty"},
            {"TraceSystemStatus", 0x60, "ByteProperty"},
        }};
    };

    struct TraceControlStatusPing
    {
        static constexpr std::string_view Name = "TraceControlStatusPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TraceControlStop
    {
        static constexpr std::string_view Name = "TraceControlStop";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
