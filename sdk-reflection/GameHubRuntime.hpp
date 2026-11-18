#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameHubRuntime
{
    struct GameHubBaseMutator
    {
        static constexpr std::string_view Name = "GameHubBaseMutator";
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

    struct GameHubPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "GameHubPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerStartRequirements = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerStartRequirements", 0xD0, "StructProperty"},
        }};
    };

    struct GameHubPlayspace
    {
        static constexpr std::string_view Name = "GameHubPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t bSimulatePlayerDamage = 0x670;
            static constexpr std::uintptr_t PlayerStartRequirements = 0x678;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bSimulatePlayerDamage", 0x670, "BoolProperty"},
            {"PlayerStartRequirements", 0x678, "StructProperty"},
        }};
    };

}
