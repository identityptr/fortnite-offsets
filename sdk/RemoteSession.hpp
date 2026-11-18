#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RemoteSession
{
    struct RemoteSessionChannelInfo
    {
        static constexpr std::string_view Name = "RemoteSessionChannelInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Mode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "StrProperty"},
            {"Mode", 0x10, "EnumProperty"},
        }};
    };

    struct RemoteSessionMediaCapture
    {
        static constexpr std::string_view Name = "RemoteSessionMediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x28;
            static constexpr std::uintptr_t MediaOutput = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"MediaOutput", 0x60, "ObjectProperty"},
        }};
    };

    struct RemoteSessionMediaOutput
    {
        static constexpr std::string_view Name = "RemoteSessionMediaOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfTextureBuffers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumberOfTextureBuffers", 0x28, "IntProperty"},
        }};
    };

    struct RemoteSessionSettings
    {
        static constexpr std::string_view Name = "RemoteSessionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HostPort = 0x28;
            static constexpr std::uintptr_t ConnectionTimeout = 0x2C;
            static constexpr std::uintptr_t ConnectionTimeoutWhenDebugging = 0x30;
            static constexpr std::uintptr_t PingTime = 0x34;
            static constexpr std::uintptr_t bAllowInShipping = 0x38;
            static constexpr std::uintptr_t bAutoHostWithPIE = 0x39;
            static constexpr std::uintptr_t bAutoHostWithGame = 0x3A;
            static constexpr std::uintptr_t ImageQuality = 0x3C;
            static constexpr std::uintptr_t FrameRate = 0x40;
            static constexpr std::uintptr_t AllowedChannels = 0x48;
            static constexpr std::uintptr_t DeniedChannels = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"HostPort", 0x28, "IntProperty"},
            {"ConnectionTimeout", 0x2C, "IntProperty"},
            {"ConnectionTimeoutWhenDebugging", 0x30, "IntProperty"},
            {"PingTime", 0x34, "IntProperty"},
            {"bAllowInShipping", 0x38, "BoolProperty"},
            {"bAutoHostWithPIE", 0x39, "BoolProperty"},
            {"bAutoHostWithGame", 0x3A, "BoolProperty"},
            {"ImageQuality", 0x3C, "IntProperty"},
            {"FrameRate", 0x40, "IntProperty"},
            {"AllowedChannels", 0x48, "ArrayProperty"},
            {"DeniedChannels", 0x58, "ArrayProperty"},
        }};
    };

}
