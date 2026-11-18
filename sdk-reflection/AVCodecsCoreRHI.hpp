#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AVCodecsCoreRHI
{
    struct SimpleAVHelper
    {
        static constexpr std::string_view Name = "SimpleAVHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleAudioEncoder
    {
        static constexpr std::string_view Name = "SimpleAudioEncoder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "Close",
            "GetCodec",
            "GetConfig",
            "IsAsync",
            "IsOpen",
            "Open",
            "ReceivePacket",
            "ReceivePackets",
            "SendFrameFloat",
            "SetConfig",
        }};
    };

    struct SimpleAudioEncoderConfig
    {
        static constexpr std::string_view Name = "SimpleAudioEncoderConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bitrate = 0x0;
            static constexpr std::uintptr_t SampleRate = 0x4;
            static constexpr std::uintptr_t NumChannels = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bitrate", 0x0, "IntProperty"},
            {"SampleRate", 0x4, "IntProperty"},
            {"NumChannels", 0x8, "IntProperty"},
        }};
    };

    struct SimpleAudioHelper
    {
        static constexpr std::string_view Name = "SimpleAudioHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleAVHelper";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleAudioPacket
    {
        static constexpr std::string_view Name = "SimpleAudioPacket";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleVideoDecoder
    {
        static constexpr std::string_view Name = "SimpleVideoDecoder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "Close",
            "GetCodec",
            "IsAsync",
            "IsOpen",
            "Open",
            "ReceiveFrame",
            "SendPacket",
        }};
    };

    struct SimpleVideoEncoder
    {
        static constexpr std::string_view Name = "SimpleVideoEncoder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "Close",
            "GetCodec",
            "GetConfig",
            "IsAsync",
            "IsOpen",
            "Open",
            "ReceivePacket",
            "ReceivePackets",
            "SendFrameRenderTarget",
            "SendFrameTexture",
            "SetConfig",
        }};
    };

    struct SimpleVideoEncoderConfig
    {
        static constexpr std::string_view Name = "SimpleVideoEncoderConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Width = 0x0;
            static constexpr std::uintptr_t Height = 0x4;
            static constexpr std::uintptr_t TargetFramerate = 0x8;
            static constexpr std::uintptr_t targetBitrate = 0xC;
            static constexpr std::uintptr_t MaxBitrate = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Width", 0x0, "IntProperty"},
            {"Height", 0x4, "IntProperty"},
            {"TargetFramerate", 0x8, "IntProperty"},
            {"targetBitrate", 0xC, "IntProperty"},
            {"MaxBitrate", 0x10, "IntProperty"},
        }};
    };

    struct SimpleVideoHelper
    {
        static constexpr std::string_view Name = "SimpleVideoHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleAVHelper";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ShareRenderTarget2D",
        }};
    };

    struct SimpleVideoPacket
    {
        static constexpr std::string_view Name = "SimpleVideoPacket";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
