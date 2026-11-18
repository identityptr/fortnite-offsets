#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TraceBasedDebuggers
{
    struct FullSessionInfoRequestMessage
    {
        static constexpr std::string_view Name = "FullSessionInfoRequestMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FullSessionInfoResponseMessage
    {
        static constexpr std::string_view Name = "FullSessionInfoResponseMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t DebuggerId = 0x10;
            static constexpr std::uintptr_t DebuggerSpecificData = 0x20;
            static constexpr std::uintptr_t RecordingRequesterId = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"DebuggerId", 0x10, "StructProperty"},
            {"DebuggerSpecificData", 0x20, "ArrayProperty"},
            {"RecordingRequesterId", 0x30, "StructProperty"},
        }};
    };

    struct RecordingStatusMessage
    {
        static constexpr std::string_view Name = "RecordingStatusMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t DebuggerId = 0x10;
            static constexpr std::uintptr_t RequesterId = 0x20;
            static constexpr std::uintptr_t ElapsedTime = 0x30;
            static constexpr std::uintptr_t BufferedDataBytesSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"DebuggerId", 0x10, "StructProperty"},
            {"RequesterId", 0x20, "StructProperty"},
            {"ElapsedTime", 0x30, "FloatProperty"},
            {"BufferedDataBytesSize", 0x38, "Int64Property"},
        }};
    };

    struct RelayConnectionInfo
    {
        static constexpr std::string_view Name = "RelayConnectionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Address = 0x0;
            static constexpr std::uintptr_t Port = 0x10;
            static constexpr std::uintptr_t CertificateAuthority = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Address", 0x0, "StrProperty"},
            {"Port", 0x10, "UInt16Property"},
            {"CertificateAuthority", 0x18, "ArrayProperty"},
        }};
    };

    struct SessionPing
    {
        static constexpr std::string_view Name = "SessionPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerInstanceId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControllerInstanceId", 0x0, "StructProperty"},
        }};
    };

    struct SessionPong
    {
        static constexpr std::string_view Name = "SessionPong";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t SessionID = 0x10;
            static constexpr std::uintptr_t SessionName = 0x20;
            static constexpr std::uintptr_t BuildTargetType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"SessionID", 0x10, "StructProperty"},
            {"SessionName", 0x20, "StrProperty"},
            {"BuildTargetType", 0x30, "ByteProperty"},
        }};
    };

    struct StartRecordingCommandMessage
    {
        static constexpr std::string_view Name = "StartRecordingCommandMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t Target = 0x10;
            static constexpr std::uintptr_t RecordingMode = 0x20;
            static constexpr std::uintptr_t TransportMode = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"Target", 0x10, "StrProperty"},
            {"RecordingMode", 0x20, "EnumProperty"},
            {"TransportMode", 0x21, "EnumProperty"},
        }};
    };

    struct StopRecordingCommandMessage
    {
        static constexpr std::string_view Name = "StopRecordingCommandMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TraceConnectionDetails
    {
        static constexpr std::string_view Name = "TraceConnectionDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceGuid = 0x0;
            static constexpr std::uintptr_t SessionGuid = 0x10;
            static constexpr std::uintptr_t TraceTarget = 0x20;
            static constexpr std::uintptr_t Port = 0x30;
            static constexpr std::uintptr_t TransportMode = 0x32;
            static constexpr std::uintptr_t CertAuth = 0x38;
            static constexpr std::uintptr_t bIsValid = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TraceGuid", 0x0, "StructProperty"},
            {"SessionGuid", 0x10, "StructProperty"},
            {"TraceTarget", 0x20, "StrProperty"},
            {"Port", 0x30, "UInt16Property"},
            {"TransportMode", 0x32, "EnumProperty"},
            {"CertAuth", 0x38, "ArrayProperty"},
            {"bIsValid", 0x48, "BoolProperty"},
        }};
    };

    struct TraceConnectionDetailsMessage
    {
        static constexpr std::string_view Name = "TraceConnectionDetailsMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceID = 0x0;
            static constexpr std::uintptr_t TraceDetails = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceID", 0x0, "StructProperty"},
            {"TraceDetails", 0x10, "StructProperty"},
        }};
    };

}
