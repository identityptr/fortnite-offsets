#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaUtils
{
    struct MediaPlayerInitialTrackLanguageSelection
    {
        static constexpr std::string_view Name = "MediaPlayerInitialTrackLanguageSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Video = 0x0;
            static constexpr std::uintptr_t Audio = 0x10;
            static constexpr std::uintptr_t Subtitle = 0x20;
            static constexpr std::uintptr_t Caption = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Video", 0x0, "StrProperty"},
            {"Audio", 0x10, "StrProperty"},
            {"Subtitle", 0x20, "StrProperty"},
            {"Caption", 0x30, "StrProperty"},
        }};
    };

    struct MediaPlayerOptions
    {
        static constexpr std::string_view Name = "MediaPlayerOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
            static constexpr std::uintptr_t TracksByLanguage = 0x20;
            static constexpr std::uintptr_t TrackSelection = 0x60;
            static constexpr std::uintptr_t SeekTime = 0x68;
            static constexpr std::uintptr_t SeekTimeType = 0x70;
            static constexpr std::uintptr_t PlayOnOpen = 0x71;
            static constexpr std::uintptr_t Loop = 0x72;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Tracks", 0x0, "StructProperty"},
            {"TracksByLanguage", 0x20, "StructProperty"},
            {"TrackSelection", 0x60, "EnumProperty"},
            {"SeekTime", 0x68, "StructProperty"},
            {"SeekTimeType", 0x70, "EnumProperty"},
            {"PlayOnOpen", 0x71, "EnumProperty"},
            {"Loop", 0x72, "EnumProperty"},
        }};
    };

    struct MediaPlayerTrackOptions
    {
        static constexpr std::string_view Name = "MediaPlayerTrackOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Audio = 0x0;
            static constexpr std::uintptr_t Caption = 0x4;
            static constexpr std::uintptr_t MetaData = 0x8;
            static constexpr std::uintptr_t Script = 0xC;
            static constexpr std::uintptr_t Subtitle = 0x10;
            static constexpr std::uintptr_t Text = 0x14;
            static constexpr std::uintptr_t Video = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Audio", 0x0, "IntProperty"},
            {"Caption", 0x4, "IntProperty"},
            {"MetaData", 0x8, "IntProperty"},
            {"Script", 0xC, "IntProperty"},
            {"Subtitle", 0x10, "IntProperty"},
            {"Text", 0x14, "IntProperty"},
            {"Video", 0x18, "IntProperty"},
        }};
    };

}
