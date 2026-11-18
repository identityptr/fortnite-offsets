#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BinkMediaPlayer
{
    struct BinkFunctionLibrary
    {
        static constexpr std::string_view Name = "BinkFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BinkMediaPlayer
    {
        static constexpr std::string_view Name = "BinkMediaPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMediaClosed = 0x30;
            static constexpr std::uintptr_t OnMediaOpened = 0x40;
            static constexpr std::uintptr_t OnMediaReachedEnd = 0x50;
            static constexpr std::uintptr_t OnPlaybackSuspended = 0x60;
            static constexpr std::uintptr_t DelayedOpen = 0x70;
            static constexpr std::uintptr_t Looping = 0x70;
            static constexpr std::uintptr_t StartImmediately = 0x70;
            static constexpr std::uintptr_t BinkDestinationUpperLeft = 0x78;
            static constexpr std::uintptr_t BinkDestinationLowerRight = 0x88;
            static constexpr std::uintptr_t Url = 0x98;
            static constexpr std::uintptr_t BinkBufferMode = 0xA8;
            static constexpr std::uintptr_t BinkSoundTrack = 0xA9;
            static constexpr std::uintptr_t BinkSoundTrackStart = 0xAC;
            static constexpr std::uintptr_t BinkDrawStyle = 0xB0;
            static constexpr std::uintptr_t BinkLayerDepth = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OnMediaClosed", 0x30, "MulticastInlineDelegateProperty"},
            {"OnMediaOpened", 0x40, "MulticastInlineDelegateProperty"},
            {"OnMediaReachedEnd", 0x50, "MulticastInlineDelegateProperty"},
            {"OnPlaybackSuspended", 0x60, "MulticastInlineDelegateProperty"},
            {"DelayedOpen", 0x70, "BoolProperty"},
            {"Looping", 0x70, "BoolProperty"},
            {"StartImmediately", 0x70, "BoolProperty"},
            {"BinkDestinationUpperLeft", 0x78, "StructProperty"},
            {"BinkDestinationLowerRight", 0x88, "StructProperty"},
            {"Url", 0x98, "StrProperty"},
            {"BinkBufferMode", 0xA8, "ByteProperty"},
            {"BinkSoundTrack", 0xA9, "ByteProperty"},
            {"BinkSoundTrackStart", 0xAC, "IntProperty"},
            {"BinkDrawStyle", 0xB0, "ByteProperty"},
            {"BinkLayerDepth", 0xB4, "IntProperty"},
        }};
    };

    struct BinkMediaTexture
    {
        static constexpr std::string_view Name = "BinkMediaTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Texture";
        struct Offsets
        {
            static constexpr std::uintptr_t AddressX = 0x120;
            static constexpr std::uintptr_t AddressY = 0x121;
            static constexpr std::uintptr_t MediaPlayer = 0x128;
            static constexpr std::uintptr_t PixelFormat = 0x130;
            static constexpr std::uintptr_t tonemap = 0x131;
            static constexpr std::uintptr_t OutputNits = 0x134;
            static constexpr std::uintptr_t Alpha = 0x138;
            static constexpr std::uintptr_t DecodeSRGB = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AddressX", 0x120, "ByteProperty"},
            {"AddressY", 0x121, "ByteProperty"},
            {"MediaPlayer", 0x128, "ObjectProperty"},
            {"PixelFormat", 0x130, "ByteProperty"},
            {"tonemap", 0x131, "BoolProperty"},
            {"OutputNits", 0x134, "FloatProperty"},
            {"Alpha", 0x138, "FloatProperty"},
            {"DecodeSRGB", 0x13C, "BoolProperty"},
        }};
    };

    struct BinkMoviePlayerSettings
    {
        static constexpr std::string_view Name = "BinkMoviePlayerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BinkBufferMode = 0x28;
            static constexpr std::uintptr_t BinkSoundTrack = 0x29;
            static constexpr std::uintptr_t BinkSoundTrackStart = 0x2C;
            static constexpr std::uintptr_t BinkDestinationUpperLeft = 0x30;
            static constexpr std::uintptr_t BinkDestinationLowerRight = 0x40;
            static constexpr std::uintptr_t BinkPixelFormat = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BinkBufferMode", 0x28, "ByteProperty"},
            {"BinkSoundTrack", 0x29, "ByteProperty"},
            {"BinkSoundTrackStart", 0x2C, "IntProperty"},
            {"BinkDestinationUpperLeft", 0x30, "StructProperty"},
            {"BinkDestinationLowerRight", 0x40, "StructProperty"},
            {"BinkPixelFormat", 0x50, "ByteProperty"},
        }};
    };

}
