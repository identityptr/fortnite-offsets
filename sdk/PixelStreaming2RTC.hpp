#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PixelStreaming2RTC
{
    struct PixelStreaming2AudioTrackObserver
    {
        static constexpr std::string_view Name = "PixelStreaming2AudioTrackObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2DataTrackObserver
    {
        static constexpr std::string_view Name = "PixelStreaming2DataTrackObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2Peer
    {
        static constexpr std::string_view Name = "PixelStreaming2Peer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStreamerList = 0x658;
            static constexpr std::uintptr_t VideoConsumer = 0x660;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStreamerList", 0x658, "MulticastSparseDelegateProperty"},
            {"VideoConsumer", 0x660, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Connect",
            "Disconnect",
            "Subscribe",
        }};
    };

    struct PixelStreaming2RoomObserver
    {
        static constexpr std::string_view Name = "PixelStreaming2RoomObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2SessionObserver
    {
        static constexpr std::string_view Name = "PixelStreaming2SessionObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2VideoTrackObserver
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoTrackObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
