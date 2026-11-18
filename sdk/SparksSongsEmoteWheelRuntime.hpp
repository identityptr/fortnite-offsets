#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSongsEmoteWheelRuntime
{
    struct SparksControllerComponent_SparksSongsEmoteOptions
    {
        static constexpr std::string_view Name = "SparksControllerComponent_SparksSongsEmoteOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryNameLocker = 0xC0;
            static constexpr std::uintptr_t CategoryNameAll = 0xC4;
            static constexpr std::uintptr_t CategoryTitleLocker = 0xC8;
            static constexpr std::uintptr_t CategoryTitleAll = 0xD8;
            static constexpr std::uintptr_t EmoteWheelOverlay = 0xE8;
            static constexpr std::uintptr_t LoopTypeToIndexMapping = 0x108;
            static constexpr std::uintptr_t CategoryTagLocker = 0x118;
            static constexpr std::uintptr_t CategoryTagAll = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CategoryNameLocker", 0xC0, "NameProperty"},
            {"CategoryNameAll", 0xC4, "NameProperty"},
            {"CategoryTitleLocker", 0xC8, "TextProperty"},
            {"CategoryTitleAll", 0xD8, "TextProperty"},
            {"EmoteWheelOverlay", 0xE8, "SoftClassProperty"},
            {"LoopTypeToIndexMapping", 0x108, "ArrayProperty"},
            {"CategoryTagLocker", 0x118, "StructProperty"},
            {"CategoryTagAll", 0x11C, "StructProperty"},
        }};
    };

    struct SparksSongsEmoteWheelDeveloperSettings
    {
        static constexpr std::string_view Name = "SparksSongsEmoteWheelDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideJamSongLoadout = 0x30;
            static constexpr std::uintptr_t JamSongLoadout = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOverrideJamSongLoadout", 0x30, "BoolProperty"},
            {"JamSongLoadout", 0x38, "ArrayProperty"},
        }};
    };

}
