#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SessionMessages
{
    struct SessionServiceLog
    {
        static constexpr std::string_view Name = "SessionServiceLog";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x0;
            static constexpr std::uintptr_t Data = 0x8;
            static constexpr std::uintptr_t InstanceID = 0x18;
            static constexpr std::uintptr_t TimeSeconds = 0x28;
            static constexpr std::uintptr_t Verbosity = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Category", 0x0, "NameProperty"},
            {"Data", 0x8, "StrProperty"},
            {"InstanceID", 0x18, "StructProperty"},
            {"TimeSeconds", 0x28, "DoubleProperty"},
            {"Verbosity", 0x30, "ByteProperty"},
        }};
    };

    struct SessionServiceLogSubscribe
    {
        static constexpr std::string_view Name = "SessionServiceLogSubscribe";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SessionServiceLogUnsubscribe
    {
        static constexpr std::string_view Name = "SessionServiceLogUnsubscribe";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SessionServicePing
    {
        static constexpr std::string_view Name = "SessionServicePing";
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

    struct SessionServicePong
    {
        static constexpr std::string_view Name = "SessionServicePong";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Authorized = 0x0;
            static constexpr std::uintptr_t BuildDate = 0x8;
            static constexpr std::uintptr_t DeviceName = 0x18;
            static constexpr std::uintptr_t InstanceID = 0x28;
            static constexpr std::uintptr_t InstanceName = 0x38;
            static constexpr std::uintptr_t PlatformName = 0x48;
            static constexpr std::uintptr_t SessionID = 0x58;
            static constexpr std::uintptr_t SessionName = 0x68;
            static constexpr std::uintptr_t SessionOwner = 0x78;
            static constexpr std::uintptr_t Standalone = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Authorized", 0x0, "BoolProperty"},
            {"BuildDate", 0x8, "StrProperty"},
            {"DeviceName", 0x18, "StrProperty"},
            {"InstanceID", 0x28, "StructProperty"},
            {"InstanceName", 0x38, "StrProperty"},
            {"PlatformName", 0x48, "StrProperty"},
            {"SessionID", 0x58, "StructProperty"},
            {"SessionName", 0x68, "StrProperty"},
            {"SessionOwner", 0x78, "StrProperty"},
            {"Standalone", 0x88, "BoolProperty"},
        }};
    };

}
