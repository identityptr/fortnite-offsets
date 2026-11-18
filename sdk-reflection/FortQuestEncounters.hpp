#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortQuestEncounters
{
    struct FortQuestEncounterGameplayVolume
    {
        static constexpr std::string_view Name = "FortQuestEncounterGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EncounterGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldOverridePlayspaceParticipation = 0x510;
            static constexpr std::uintptr_t bShouldOverrideQuestSpatialRelevancy = 0x511;
            static constexpr std::uintptr_t IncludedOverlapTagQuery = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bShouldOverridePlayspaceParticipation", 0x510, "BoolProperty"},
            {"bShouldOverrideQuestSpatialRelevancy", 0x511, "BoolProperty"},
            {"IncludedOverlapTagQuery", 0x518, "StructProperty"},
        }};
    };

    struct FortQuestEncounterHotfixData
    {
        static constexpr std::string_view Name = "FortQuestEncounterHotfixData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisabledScenarios = 0x28;
            static constexpr std::uintptr_t DisabledSpawners = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisabledScenarios", 0x28, "ArrayProperty"},
            {"DisabledSpawners", 0x38, "ArrayProperty"},
        }};
    };

    struct FortQuestEncounterSpawnerVolume
    {
        static constexpr std::string_view Name = "FortQuestEncounterSpawnerVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOverlapTrackingVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentAnchor = 0x318;
            static constexpr std::uintptr_t bIsEncounterSpawningEnabled = 0x320;
            static constexpr std::uintptr_t EncounterSpawnPoint = 0x328;
            static constexpr std::uintptr_t EncounterTrigger = 0x330;
            static constexpr std::uintptr_t EncounterEntries = 0x340;
            static constexpr std::uintptr_t SpawnerVolumeName = 0x350;
            static constexpr std::uintptr_t bAllowInclusionInExternalOverlaps = 0x354;
            static constexpr std::uintptr_t bLinkSpawnerVolumeToGameplayVolume = 0x355;
            static constexpr std::uintptr_t LivingWorldPrefab = 0x358;
            static constexpr std::uintptr_t VerbHandles = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ComponentAnchor", 0x318, "ObjectProperty"},
            {"bIsEncounterSpawningEnabled", 0x320, "BoolProperty"},
            {"EncounterSpawnPoint", 0x328, "ObjectProperty"},
            {"EncounterTrigger", 0x330, "StructProperty"},
            {"EncounterEntries", 0x340, "ArrayProperty"},
            {"SpawnerVolumeName", 0x350, "NameProperty"},
            {"bAllowInclusionInExternalOverlaps", 0x354, "BoolProperty"},
            {"bLinkSpawnerVolumeToGameplayVolume", 0x355, "BoolProperty"},
            {"LivingWorldPrefab", 0x358, "ObjectProperty"},
            {"VerbHandles", 0x388, "ArrayProperty"},
        }};
    };

    struct LivingWorldEncounterPrefab_QuestEncounters
    {
        static constexpr std::string_view Name = "LivingWorldEncounterPrefab_QuestEncounters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LivingWorldEncounterPrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterEntries = 0xA20;
            static constexpr std::uintptr_t EncounterDefinition = 0xA30;
            static constexpr std::uintptr_t ReservoirActorOverride = 0xA58;
            static constexpr std::uintptr_t ParentScenarioPrefab = 0xA60;
            static constexpr std::uintptr_t EncounterManager = 0xA68;
            static constexpr std::uintptr_t SpawnedScenarioVolume = 0xA70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EncounterEntries", 0xA20, "ArrayProperty"},
            {"EncounterDefinition", 0xA30, "ObjectProperty"},
            {"ReservoirActorOverride", 0xA58, "WeakObjectProperty"},
            {"ParentScenarioPrefab", 0xA60, "WeakObjectProperty"},
            {"EncounterManager", 0xA68, "WeakObjectProperty"},
            {"SpawnedScenarioVolume", 0xA70, "ObjectProperty"},
        }};
    };

}
