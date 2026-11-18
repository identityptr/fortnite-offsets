#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FN1NativeRuntime
{
    struct FortVerseBusMutator
    {
        static constexpr std::string_view Name = "FortVerseBusMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct VerseFortniteBattlebus
    {
        static constexpr std::string_view Name = "VerseFortniteBattlebus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseFortniteBusVolumeComponent
    {
        static constexpr std::string_view Name = "VerseFortniteBusVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DropZone = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DropZone", 0xC0, "ObjectProperty"},
        }};
    };

    struct VerseFortniteStorm
    {
        static constexpr std::string_view Name = "VerseFortniteStorm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseFortniteStormVolumeComponent
    {
        static constexpr std::string_view Name = "VerseFortniteStormVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneVolumes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SafeZoneVolumes", 0xC0, "ArrayProperty"},
        }};
    };

}
