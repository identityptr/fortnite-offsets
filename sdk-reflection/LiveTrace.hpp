#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveTrace
{
    struct LiveTraceDataChannel
    {
        static constexpr std::string_view Name = "LiveTraceDataChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Channel";
        struct Offsets
        {
            static constexpr std::uintptr_t Connection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connection", 0x28, "ObjectProperty"},
        }};
    };

    struct LiveTraceDiscovery
    {
        static constexpr std::string_view Name = "LiveTraceDiscovery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
            static constexpr std::uintptr_t UserNetId = 0x20;
            static constexpr std::uintptr_t bIsServer = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SessionID", 0x0, "StructProperty"},
            {"InstanceID", 0x10, "StructProperty"},
            {"UserNetId", 0x20, "StructProperty"},
            {"bIsServer", 0x50, "BoolProperty"},
        }};
    };

    struct LiveTraceDiscoveryPing
    {
        static constexpr std::string_view Name = "LiveTraceDiscoveryPing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
