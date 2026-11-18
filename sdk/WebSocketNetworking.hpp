#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WebSocketNetworking
{
    struct WebSocketConnection
    {
        static constexpr std::string_view Name = "WebSocketConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x48;
            static constexpr std::uintptr_t Driver = 0x58;
            static constexpr std::uintptr_t PackageMapClass = 0x60;
            static constexpr std::uintptr_t PackageMap = 0x68;
            static constexpr std::uintptr_t OpenChannels = 0x70;
            static constexpr std::uintptr_t SentTemporaries = 0x80;
            static constexpr std::uintptr_t ViewTarget = 0x90;
            static constexpr std::uintptr_t OwningActor = 0x98;
            static constexpr std::uintptr_t MaxPacket = 0xA0;
            static constexpr std::uintptr_t InternalAck = 0xA4;
            static constexpr std::uintptr_t ChildrenLookup = 0xA8;
            static constexpr std::uintptr_t CachedNoPawnPlayerController = 0xB8;
            static constexpr std::uintptr_t PlayerID = 0x180;
            static constexpr std::uintptr_t LastReceiveTime = 0x1F8;
            static constexpr std::uintptr_t DefaultMaxChannelSize = 0x13D4;
            static constexpr std::uintptr_t ChannelsToTick = 0x1548;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Children", 0x48, "ArrayProperty"},
            {"Driver", 0x58, "ObjectProperty"},
            {"PackageMapClass", 0x60, "ClassProperty"},
            {"PackageMap", 0x68, "ObjectProperty"},
            {"OpenChannels", 0x70, "ArrayProperty"},
            {"SentTemporaries", 0x80, "ArrayProperty"},
            {"ViewTarget", 0x90, "ObjectProperty"},
            {"OwningActor", 0x98, "ObjectProperty"},
            {"MaxPacket", 0xA0, "IntProperty"},
            {"InternalAck", 0xA4, "BoolProperty"},
            {"ChildrenLookup", 0xA8, "MapProperty"},
            {"CachedNoPawnPlayerController", 0xB8, "ObjectProperty"},
            {"PlayerID", 0x180, "StructProperty"},
            {"LastReceiveTime", 0x1F8, "DoubleProperty"},
            {"DefaultMaxChannelSize", 0x13D4, "IntProperty"},
            {"ChannelsToTick", 0x1548, "ArrayProperty"},
        }};
    };

    struct WebSocketNetDriver
    {
        static constexpr std::string_view Name = "WebSocketNetDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t WebSocketPort = 0x618;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WebSocketPort", 0x618, "IntProperty"},
        }};
    };

}
