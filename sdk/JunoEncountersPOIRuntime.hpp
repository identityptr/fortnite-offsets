#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoEncountersPOIRuntime
{
    struct EncounterCaveGameplayVolume
    {
        static constexpr std::string_view Name = "EncounterCaveGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EncounterGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseAllLinkedShellVolumes = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseAllLinkedShellVolumes", 0x510, "BoolProperty"},
        }};
    };

    struct EncounterPOIGameplayVolume
    {
        static constexpr std::string_view Name = "EncounterPOIGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EncounterGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterStateTreeComponent = 0x470;
            static constexpr std::uintptr_t TrackedEncounterPointProviders = 0x480;
            static constexpr std::uintptr_t TrackedEncounterAnchors = 0x490;
            static constexpr std::uintptr_t TrackedActors = 0x4A0;
            static constexpr std::uintptr_t AllVisitedPlayersMap = 0x4B0;
            static constexpr std::uintptr_t OwningPrefab = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EncounterStateTreeComponent", 0x470, "ObjectProperty"},
            {"TrackedEncounterPointProviders", 0x480, "ArrayProperty"},
            {"TrackedEncounterAnchors", 0x490, "ArrayProperty"},
            {"TrackedActors", 0x4A0, "ArrayProperty"},
            {"AllVisitedPlayersMap", 0x4B0, "MapProperty"},
            {"OwningPrefab", 0x508, "WeakObjectProperty"},
        }};
    };

    struct JunoEncounterAnchorComponent_CampAnchor
    {
        static constexpr std::string_view Name = "JunoEncounterAnchorComponent_CampAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedCampTags = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SupportedCampTags", 0xC0, "StructProperty"},
        }};
    };

    struct JunoEncounterStaticPointProvider
    {
        static constexpr std::string_view Name = "JunoEncounterStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EncounterStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t EventLimiter = 0x3F8;
            static constexpr std::uintptr_t ConditionalTags = 0x418;
            static constexpr std::uintptr_t RegistryType = 0x428;
            static constexpr std::uintptr_t SavedActorGuid = 0x42C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EventLimiter", 0x3F8, "StructProperty"},
            {"ConditionalTags", 0x418, "ArrayProperty"},
            {"RegistryType", 0x428, "StructProperty"},
            {"SavedActorGuid", 0x42C, "StructProperty"},
        }};
    };

    struct JunoEncountersPOIRemovalComponent
    {
        static constexpr std::string_view Name = "JunoEncountersPOIRemovalComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t POITagsQuery = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"POITagsQuery", 0xC0, "StructProperty"},
        }};
    };

    struct JunoEncountersPOISubsystem
    {
        static constexpr std::string_view Name = "JunoEncountersPOISubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPOIEncounterPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoPOIEncounterPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedObjects = 0x58;
            static constexpr std::uintptr_t SavedEncounterState = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LoadedObjects", 0x58, "ArrayProperty"},
            {"SavedEncounterState", 0x68, "StructProperty"},
        }};
    };

    struct JunoPOIEncounterPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPOIEncounterPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoPOIEncounterPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPOIEncounterPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPOIEncounterPlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoPOIEncounterPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterPrefabClass = 0x120;
            static constexpr std::uintptr_t VariantQueries = 0x140;
            static constexpr std::uintptr_t RerollCooldownTime = 0x150;
            static constexpr std::uintptr_t POIPlayspaceVolume = 0x178;
            static constexpr std::uintptr_t EncounterPrefab = 0x180;
            static constexpr std::uintptr_t EncounterConfigData = 0x1A0;
            static constexpr std::uintptr_t EncounterCategoryTable = 0x290;
            static constexpr std::uintptr_t LoadedObjects = 0x318;
            static constexpr std::uintptr_t TilePersistenceFeatureData = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EncounterPrefabClass", 0x120, "SoftClassProperty"},
            {"VariantQueries", 0x140, "ArrayProperty"},
            {"RerollCooldownTime", 0x150, "StructProperty"},
            {"POIPlayspaceVolume", 0x178, "WeakObjectProperty"},
            {"EncounterPrefab", 0x180, "WeakObjectProperty"},
            {"EncounterConfigData", 0x1A0, "StructProperty"},
            {"EncounterCategoryTable", 0x290, "SoftObjectProperty"},
            {"LoadedObjects", 0x318, "ArrayProperty"},
            {"TilePersistenceFeatureData", 0x328, "ObjectProperty"},
        }};
    };

    struct JunoPOIEncounterPrefab
    {
        static constexpr std::string_view Name = "JunoPOIEncounterPrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LivingWorldEncounterPrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t bEncounterShouldBeLoaded = 0xA80;
            static constexpr std::uintptr_t bEncounterIsInitialized = 0xA81;
            static constexpr std::uintptr_t POIPlayspaceComponent = 0xA84;
            static constexpr std::uintptr_t UnloadCondition = 0xA8C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEncounterShouldBeLoaded", 0xA80, "BoolProperty"},
            {"bEncounterIsInitialized", 0xA81, "BoolProperty"},
            {"POIPlayspaceComponent", 0xA84, "WeakObjectProperty"},
            {"UnloadCondition", 0xA8C, "StructProperty"},
        }};
    };

    struct JunoPOIEncounterSpawner
    {
        static constexpr std::string_view Name = "JunoPOIEncounterSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t POIEncountersPlayspace = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"POIEncountersPlayspace", 0x280, "WeakObjectProperty"},
        }};
    };

    struct JunoPOIScenarioAssignmentComponent
    {
        static constexpr std::string_view Name = "JunoPOIScenarioAssignmentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingScenarioAssignments = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PendingScenarioAssignments", 0xC0, "MapProperty"},
        }};
    };

    struct JunoSpawnActorTaskHelper
    {
        static constexpr std::string_view Name = "JunoSpawnActorTaskHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpawnActorTaskHelper";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistenceId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersistenceId", 0x38, "StructProperty"},
        }};
    };

    struct JunoWaitForCampActorTaskHelper
    {
        static constexpr std::string_view Name = "JunoWaitForCampActorTaskHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
