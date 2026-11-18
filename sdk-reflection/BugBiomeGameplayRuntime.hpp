#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BugBiomeGameplayRuntime
{
    struct FortBugBiomeSpawner
    {
        static constexpr std::string_view Name = "FortBugBiomeSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamSizeToEncountersMap = 0x948;
            static constexpr std::uintptr_t DefaultEncounters = 0x958;
            static constexpr std::uintptr_t RewardActorClass = 0x9B8;
            static constexpr std::uintptr_t SphereCollision = 0x9C0;
            static constexpr std::uintptr_t SpawnSettings = 0x9C8;
            static constexpr std::uintptr_t HitBoxBounds = 0x9E8;
            static constexpr std::uintptr_t bEnableAimAssist = 0x9F0;
            static constexpr std::uintptr_t LinkedSpawners = 0x9F8;
            static constexpr std::uintptr_t ConnectedRewardActor = 0xA08;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TeamSizeToEncountersMap", 0x948, "MapProperty"},
            {"DefaultEncounters", 0x958, "StructProperty"},
            {"RewardActorClass", 0x9B8, "ClassProperty"},
            {"SphereCollision", 0x9C0, "ObjectProperty"},
            {"SpawnSettings", 0x9C8, "StructProperty"},
            {"HitBoxBounds", 0x9E8, "ObjectProperty"},
            {"bEnableAimAssist", 0x9F0, "BoolProperty"},
            {"LinkedSpawners", 0x9F8, "ArrayProperty"},
            {"ConnectedRewardActor", 0xA08, "SoftObjectProperty"},
        }};
    };

}
