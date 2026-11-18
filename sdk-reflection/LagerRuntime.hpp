#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LagerRuntime
{
    struct FortAthenaLinearEncounterAnalyticComponent
    {
        static constexpr std::string_view Name = "FortAthenaLinearEncounterAnalyticComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortAthenaLivingWorldBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldConfigData
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldConfigData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryTableDatas = 0x28;
            static constexpr std::uintptr_t MaxActorCount = 0x38;
            static constexpr std::uintptr_t MaxEventSpawnPerTick = 0x60;
            static constexpr std::uintptr_t MaxActorDespawnPerTick = 0x88;
            static constexpr std::uintptr_t MinimumEventGenerationInterval = 0xB0;
            static constexpr std::uintptr_t MaxActorDensity = 0xD8;
            static constexpr std::uintptr_t MaxActorUpdatesPerTick = 0x100;
            static constexpr std::uintptr_t MaxPointProviderUpdatesPerTick = 0x128;
            static constexpr std::uintptr_t ActorDensityGridCellSize = 0x150;
            static constexpr std::uintptr_t ActorDensitySparseToDenseRatio = 0x178;
            static constexpr std::uintptr_t PointClusterSize = 0x1A0;
            static constexpr std::uintptr_t MinNumberOfPlayerForAggressiveSpawning = 0x1C8;
            static constexpr std::uintptr_t TagDensityGridData = 0x1F0;
            static constexpr std::uintptr_t SingleUseSpawnerDataQuery = 0x200;
            static constexpr std::uintptr_t ConcurrentSingleUseSpawnerDataQuery = 0x248;
            static constexpr std::uintptr_t EQSActorHelperClass = 0x290;
            static constexpr std::uintptr_t DelayEventGeneration = 0x298;
            static constexpr std::uintptr_t RestrictDensityReservationForReservoirs = 0x2C0;
            static constexpr std::uintptr_t TrackDeadPlayers = 0x2E8;
            static constexpr std::uintptr_t WaitForAreaReadinessBeforeEnablingPointProviders = 0x310;
            static constexpr std::uintptr_t GridReadinessCheckClasses = 0x338;
            static constexpr std::uintptr_t IgnoredPointProviderClasses = 0x348;
            static constexpr std::uintptr_t GridReadinessIgnoreTagQuery = 0x358;
            static constexpr std::uintptr_t DensityGridIDSelector = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CategoryTableDatas", 0x28, "ArrayProperty"},
            {"MaxActorCount", 0x38, "StructProperty"},
            {"MaxEventSpawnPerTick", 0x60, "StructProperty"},
            {"MaxActorDespawnPerTick", 0x88, "StructProperty"},
            {"MinimumEventGenerationInterval", 0xB0, "StructProperty"},
            {"MaxActorDensity", 0xD8, "StructProperty"},
            {"MaxActorUpdatesPerTick", 0x100, "StructProperty"},
            {"MaxPointProviderUpdatesPerTick", 0x128, "StructProperty"},
            {"ActorDensityGridCellSize", 0x150, "StructProperty"},
            {"ActorDensitySparseToDenseRatio", 0x178, "StructProperty"},
            {"PointClusterSize", 0x1A0, "StructProperty"},
            {"MinNumberOfPlayerForAggressiveSpawning", 0x1C8, "StructProperty"},
            {"TagDensityGridData", 0x1F0, "ArrayProperty"},
            {"SingleUseSpawnerDataQuery", 0x200, "StructProperty"},
            {"ConcurrentSingleUseSpawnerDataQuery", 0x248, "StructProperty"},
            {"EQSActorHelperClass", 0x290, "ClassProperty"},
            {"DelayEventGeneration", 0x298, "StructProperty"},
            {"RestrictDensityReservationForReservoirs", 0x2C0, "StructProperty"},
            {"TrackDeadPlayers", 0x2E8, "StructProperty"},
            {"WaitForAreaReadinessBeforeEnablingPointProviders", 0x310, "StructProperty"},
            {"GridReadinessCheckClasses", 0x338, "ArrayProperty"},
            {"IgnoredPointProviderClasses", 0x348, "ArrayProperty"},
            {"GridReadinessIgnoreTagQuery", 0x358, "StructProperty"},
            {"DensityGridIDSelector", 0x3A0, "ClassProperty"},
        }};
    };

    struct FortAthenaLivingWorldControllerComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorDensityWeight = 0xC8;
            static constexpr std::uintptr_t OverrideRegistrationDistance = 0xCC;
            static constexpr std::uintptr_t TagRegistrations = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorDensityWeight", 0xC8, "FloatProperty"},
            {"OverrideRegistrationDistance", 0xCC, "OptionalProperty"},
            {"TagRegistrations", 0xD8, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldDebugContainer
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDebugContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldDebugContainer_DensityGrid
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDebugContainer_DensityGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldDebugContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t DensityGridValues = 0x28;
            static constexpr std::uintptr_t DensityGridMaxValue = 0x38;
            static constexpr std::uintptr_t DensityGridValuesMinLocation = 0x40;
            static constexpr std::uintptr_t DensityGridValuesSize = 0x58;
            static constexpr std::uintptr_t CellSize = 0x64;
            static constexpr std::uintptr_t BudgetMaxDensity = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DensityGridValues", 0x28, "ArrayProperty"},
            {"DensityGridMaxValue", 0x38, "FloatProperty"},
            {"DensityGridValuesMinLocation", 0x40, "StructProperty"},
            {"DensityGridValuesSize", 0x58, "StructProperty"},
            {"CellSize", 0x64, "FloatProperty"},
            {"BudgetMaxDensity", 0x68, "FloatProperty"},
        }};
    };

    struct FortAthenaLivingWorldDebugDensityMiniMapIndicator
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDebugDensityMiniMapIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMiniMapIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorDebugInfos = 0x170;
            static constexpr std::uintptr_t DensityGridValues = 0x180;
            static constexpr std::uintptr_t DensityGridValuesMinLocation = 0x190;
            static constexpr std::uintptr_t DensityGridValuesSize = 0x1A8;
            static constexpr std::uintptr_t CellSize = 0x1B4;
            static constexpr std::uintptr_t MaxDensity = 0x1B8;
            static constexpr std::uintptr_t DisplayName = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ActorDebugInfos", 0x170, "ArrayProperty"},
            {"DensityGridValues", 0x180, "ArrayProperty"},
            {"DensityGridValuesMinLocation", 0x190, "StructProperty"},
            {"DensityGridValuesSize", 0x1A8, "StructProperty"},
            {"CellSize", 0x1B4, "FloatProperty"},
            {"MaxDensity", 0x1B8, "FloatProperty"},
            {"DisplayName", 0x1C0, "StrProperty"},
        }};
    };

    struct FortAthenaLivingWorldDensityGridIDSelector
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDensityGridIDSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDensityGridIDSelector_VerticalCutHeights";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldDensityGridIDSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t VerticalCutHeights = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerticalCutHeights", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldDespawnConditionSchema
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldDespawnConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldEQSHelper
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldEQSHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NavAgentProperties = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NavAgentProperties", 0x2B8, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldEncounter
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldEncounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Definition", 0x28, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldEncounterInstance
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldEncounterInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorSpawned = 0x28;
            static constexpr std::uintptr_t OnFirstActorSpawned = 0x38;
            static constexpr std::uintptr_t OnActorDestroyed = 0x48;
            static constexpr std::uintptr_t OnLastActorDestroyed = 0x58;
            static constexpr std::uintptr_t OnActorDied = 0x68;
            static constexpr std::uintptr_t OnLastActorDied = 0x78;
            static constexpr std::uintptr_t OnEventSpawned = 0x88;
            static constexpr std::uintptr_t OnEventFinished = 0x98;
            static constexpr std::uintptr_t EventRuntimeMap = 0xA8;
            static constexpr std::uintptr_t ConditionContainer = 0xB8;
            static constexpr std::uintptr_t AllowedPointProviders = 0xD0;
            static constexpr std::uintptr_t RegisteredPointProviders = 0xE0;
            static constexpr std::uintptr_t RuntimeCreatedEventDatas = 0xF0;
            static constexpr std::uintptr_t EncounterDefinition = 0x120;
            static constexpr std::uintptr_t ActorDensityReservoir = 0x188;
            static constexpr std::uintptr_t SpawnedActors = 0x190;
            static constexpr std::uintptr_t Owner = 0x1A0;
            static constexpr std::uintptr_t Instigator = 0x1A8;
            static constexpr std::uintptr_t CurrentStageIndex = 0x1B8;
            static constexpr std::uintptr_t CurrentStageActorMaxCount = 0x1BC;
            static constexpr std::uintptr_t bIsPaused = 0x1D8;
            static constexpr std::uintptr_t bIsPendingRelease = 0x1D9;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnActorSpawned", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFirstActorSpawned", 0x38, "MulticastInlineDelegateProperty"},
            {"OnActorDestroyed", 0x48, "MulticastInlineDelegateProperty"},
            {"OnLastActorDestroyed", 0x58, "MulticastInlineDelegateProperty"},
            {"OnActorDied", 0x68, "MulticastInlineDelegateProperty"},
            {"OnLastActorDied", 0x78, "MulticastInlineDelegateProperty"},
            {"OnEventSpawned", 0x88, "MulticastInlineDelegateProperty"},
            {"OnEventFinished", 0x98, "MulticastInlineDelegateProperty"},
            {"EventRuntimeMap", 0xA8, "MapProperty"},
            {"ConditionContainer", 0xB8, "StructProperty"},
            {"AllowedPointProviders", 0xD0, "ArrayProperty"},
            {"RegisteredPointProviders", 0xE0, "ArrayProperty"},
            {"RuntimeCreatedEventDatas", 0xF0, "ArrayProperty"},
            {"EncounterDefinition", 0x120, "StructProperty"},
            {"ActorDensityReservoir", 0x188, "ObjectProperty"},
            {"SpawnedActors", 0x190, "ArrayProperty"},
            {"Owner", 0x1A0, "WeakObjectProperty"},
            {"Instigator", 0x1A8, "WeakObjectProperty"},
            {"CurrentStageIndex", 0x1B8, "IntProperty"},
            {"CurrentStageActorMaxCount", 0x1BC, "IntProperty"},
            {"bIsPaused", 0x1D8, "BoolProperty"},
            {"bIsPendingRelease", 0x1D9, "BoolProperty"},
        }};
    };

    struct FortAthenaLivingWorldEventData
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldEventData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeOfDayFilters = 0x28;
            static constexpr std::uintptr_t WaterLevelIndexMin = 0x2C;
            static constexpr std::uintptr_t WaterLevelIndexMax = 0x30;
            static constexpr std::uintptr_t CanSpawnCondition = 0x38;
            static constexpr std::uintptr_t DespawnConditions = 0x60;
            static constexpr std::uintptr_t bRequirePointProviders = 0x70;
            static constexpr std::uintptr_t ProviderFiltersTagQuery = 0x78;
            static constexpr std::uintptr_t ProviderFiltersEntries = 0xC0;
            static constexpr std::uintptr_t PointProviderSelector = 0xD0;
            static constexpr std::uintptr_t SpawnerDataSelector = 0xE0;
            static constexpr std::uintptr_t SpawnActions = 0xF0;
            static constexpr std::uintptr_t MinActorCountToSpawn = 0x100;
            static constexpr std::uintptr_t MaxActorCountToSpawn = 0x128;
            static constexpr std::uintptr_t ActorDescriptions = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"TimeOfDayFilters", 0x28, "IntProperty"},
            {"WaterLevelIndexMin", 0x2C, "FloatProperty"},
            {"WaterLevelIndexMax", 0x30, "FloatProperty"},
            {"CanSpawnCondition", 0x38, "StructProperty"},
            {"DespawnConditions", 0x60, "ArrayProperty"},
            {"bRequirePointProviders", 0x70, "BoolProperty"},
            {"ProviderFiltersTagQuery", 0x78, "StructProperty"},
            {"ProviderFiltersEntries", 0xC0, "ArrayProperty"},
            {"PointProviderSelector", 0xD0, "StructProperty"},
            {"SpawnerDataSelector", 0xE0, "StructProperty"},
            {"SpawnActions", 0xF0, "ArrayProperty"},
            {"MinActorCountToSpawn", 0x100, "StructProperty"},
            {"MaxActorCountToSpawn", 0x128, "StructProperty"},
            {"ActorDescriptions", 0x150, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldEventDataConditionSchema
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldEventDataConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldGridReadinessCheck
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldGridReadinessCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldGridReadinessCheck_Navmesh
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldGridReadinessCheck_Navmesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldGridReadinessCheck";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialDelayInSeconds = 0x98;
            static constexpr std::uintptr_t MaxWaitInSeconds = 0xC0;
            static constexpr std::uintptr_t FrequencyInSeconds = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InitialDelayInSeconds", 0x98, "StructProperty"},
            {"MaxWaitInSeconds", 0xC0, "StructProperty"},
            {"FrequencyInSeconds", 0xE8, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldGridReadinessCheck_PlayerDistance
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldGridReadinessCheck_PlayerDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldGridReadinessCheck";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDistanceToPlayer = 0x70;
            static constexpr std::uintptr_t MaxWaitInSeconds = 0x98;
            static constexpr std::uintptr_t FrequencyInSeconds = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxDistanceToPlayer", 0x70, "StructProperty"},
            {"MaxWaitInSeconds", 0x98, "StructProperty"},
            {"FrequencyInSeconds", 0xC0, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldGridReadinessCheck_Streaming
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldGridReadinessCheck_Streaming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldGridReadinessCheck";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialDelayInSeconds = 0x78;
            static constexpr std::uintptr_t MaxWaitInSeconds = 0xA0;
            static constexpr std::uintptr_t FrequencyInSeconds = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InitialDelayInSeconds", 0x78, "StructProperty"},
            {"MaxWaitInSeconds", 0xA0, "StructProperty"},
            {"FrequencyInSeconds", 0xC8, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldLevelPointProvider
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldLevelPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingLevelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLimiter = 0x750;
            static constexpr std::uintptr_t FiltersTags = 0x7B8;
            static constexpr std::uintptr_t DebugInfo = 0x7D8;
            static constexpr std::uintptr_t bStartEnabled = 0x7E8;
            static constexpr std::uintptr_t OnActorSpawned = 0x7F0;
            static constexpr std::uintptr_t CachedGameState = 0x800;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x808;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnLimiter", 0x750, "StructProperty"},
            {"FiltersTags", 0x7B8, "StructProperty"},
            {"DebugInfo", 0x7D8, "StructProperty"},
            {"bStartEnabled", 0x7E8, "BoolProperty"},
            {"OnActorSpawned", 0x7F0, "MulticastInlineDelegateProperty"},
            {"CachedGameState", 0x800, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x808, "ObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldLightStaticPointProvider
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldLightStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorSpawned = 0x38;
            static constexpr std::uintptr_t OnEventRequested_BP = 0x48;
            static constexpr std::uintptr_t OnEventSpawned_BP = 0x58;
            static constexpr std::uintptr_t SpawnLimiter = 0x68;
            static constexpr std::uintptr_t FiltersTags = 0xD0;
            static constexpr std::uintptr_t bRandomizePointRotation = 0xF0;
            static constexpr std::uintptr_t DebugInfo = 0xF8;
            static constexpr std::uintptr_t SpawnPoint = 0x110;
            static constexpr std::uintptr_t DensityGridID = 0x170;
            static constexpr std::uintptr_t CachedGameState = 0x178;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnActorSpawned", 0x38, "MulticastInlineDelegateProperty"},
            {"OnEventRequested_BP", 0x48, "MulticastInlineDelegateProperty"},
            {"OnEventSpawned_BP", 0x58, "MulticastInlineDelegateProperty"},
            {"SpawnLimiter", 0x68, "StructProperty"},
            {"FiltersTags", 0xD0, "StructProperty"},
            {"bRandomizePointRotation", 0xF0, "BoolProperty"},
            {"DebugInfo", 0xF8, "StructProperty"},
            {"SpawnPoint", 0x110, "StructProperty"},
            {"DensityGridID", 0x170, "OptionalProperty"},
            {"CachedGameState", 0x178, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x180, "ObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldManager
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLagerConfig = 0xC8;
            static constexpr std::uintptr_t LagerConfigOverrides = 0xE8;
            static constexpr std::uintptr_t LagerEnabled = 0xF8;
            static constexpr std::uintptr_t TaggedSpawnActionClassMap = 0x120;
            static constexpr std::uintptr_t GridReadinessGate = 0x130;
            static constexpr std::uintptr_t PointProviders = 0x170;
            static constexpr std::uintptr_t RegisteredPointProvidersCount = 0x180;
            static constexpr std::uintptr_t SpecialActorMinimapIconBrush = 0x190;
            static constexpr std::uintptr_t SpecialActorMinimapIconScale = 0x240;
            static constexpr std::uintptr_t SpecialActorCompassIconBrush = 0x250;
            static constexpr std::uintptr_t SpecialActorCompassIconScale = 0x300;
            static constexpr std::uintptr_t OnActorSpawnedDelegate = 0x310;
            static constexpr std::uintptr_t SpawnerDataLimiter = 0x320;
            static constexpr std::uintptr_t CachedWorld = 0x3D0;
            static constexpr std::uintptr_t CachedConfig = 0x3D8;
            static constexpr std::uintptr_t RunningEncounterInstances = 0x3E0;
            static constexpr std::uintptr_t CachedSeasonalEventManager = 0x3F0;
            static constexpr std::uintptr_t ActorClassToPreloadOnClient = 0x3F8;
            static constexpr std::uintptr_t ActorUpdateHandler = 0x408;
            static constexpr std::uintptr_t PointProviderUpdateHandler = 0x478;
            static constexpr std::uintptr_t RuntimePointProviderHandler = 0x4D0;
            static constexpr std::uintptr_t PlayerTracker = 0x4F0;
            static constexpr std::uintptr_t Preloader = 0x570;
            static constexpr std::uintptr_t GlobalConditionContainer = 0x620;
            static constexpr std::uintptr_t WorldGridInjectionManager = 0x638;
            static constexpr std::uintptr_t EventRuntimeMap = 0x7E0;
            static constexpr std::uintptr_t CategoryRuntimeMap = 0x7F0;
            static constexpr std::uintptr_t CategoryRuntimeDataTables = 0x800;
            static constexpr std::uintptr_t CheatLoadedObjects = 0x810;
            static constexpr std::uintptr_t DensityGridIDSelector = 0xA28;
            static constexpr std::uintptr_t SpawnActionCache = 0xA70;
            static constexpr std::uintptr_t EQSHelper = 0xA80;
            static constexpr std::uintptr_t DebugDensityMinimapIndicator = 0xA88;
            static constexpr std::uintptr_t DebugContainers = 0xA90;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"DefaultLagerConfig", 0xC8, "SoftObjectProperty"},
            {"LagerConfigOverrides", 0xE8, "ArrayProperty"},
            {"LagerEnabled", 0xF8, "StructProperty"},
            {"TaggedSpawnActionClassMap", 0x120, "MapProperty"},
            {"GridReadinessGate", 0x130, "StructProperty"},
            {"PointProviders", 0x170, "ArrayProperty"},
            {"RegisteredPointProvidersCount", 0x180, "IntProperty"},
            {"SpecialActorMinimapIconBrush", 0x190, "StructProperty"},
            {"SpecialActorMinimapIconScale", 0x240, "StructProperty"},
            {"SpecialActorCompassIconBrush", 0x250, "StructProperty"},
            {"SpecialActorCompassIconScale", 0x300, "StructProperty"},
            {"OnActorSpawnedDelegate", 0x310, "MulticastInlineDelegateProperty"},
            {"SpawnerDataLimiter", 0x320, "StructProperty"},
            {"CachedWorld", 0x3D0, "ObjectProperty"},
            {"CachedConfig", 0x3D8, "ObjectProperty"},
            {"RunningEncounterInstances", 0x3E0, "ArrayProperty"},
            {"CachedSeasonalEventManager", 0x3F0, "ObjectProperty"},
            {"ActorClassToPreloadOnClient", 0x3F8, "ArrayProperty"},
            {"ActorUpdateHandler", 0x408, "StructProperty"},
            {"PointProviderUpdateHandler", 0x478, "StructProperty"},
            {"RuntimePointProviderHandler", 0x4D0, "StructProperty"},
            {"PlayerTracker", 0x4F0, "StructProperty"},
            {"Preloader", 0x570, "StructProperty"},
            {"GlobalConditionContainer", 0x620, "StructProperty"},
            {"WorldGridInjectionManager", 0x638, "StructProperty"},
            {"EventRuntimeMap", 0x7E0, "MapProperty"},
            {"CategoryRuntimeMap", 0x7F0, "MapProperty"},
            {"CategoryRuntimeDataTables", 0x800, "ArrayProperty"},
            {"CheatLoadedObjects", 0x810, "ArrayProperty"},
            {"DensityGridIDSelector", 0xA28, "ObjectProperty"},
            {"SpawnActionCache", 0xA70, "MapProperty"},
            {"EQSHelper", 0xA80, "ObjectProperty"},
            {"DebugDensityMinimapIndicator", 0xA88, "ObjectProperty"},
            {"DebugContainers", 0xA90, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldNavigationInvokerComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldNavigationInvokerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerationRadius = 0xC0;
            static constexpr std::uintptr_t SupportedAgents = 0xE8;
            static constexpr std::uintptr_t DistanceToPlayer = 0xF0;
            static constexpr std::uintptr_t DistanceToPlayerHysteresis = 0x118;
            static constexpr std::uintptr_t RegistrationDistanceToPlayer = 0x140;
            static constexpr std::uintptr_t RegistrationDistanceToPlayerHysteresis = 0x168;
            static constexpr std::uintptr_t SettingsOverride = 0x190;
            static constexpr std::uintptr_t LivingWorldManager = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GenerationRadius", 0xC0, "StructProperty"},
            {"SupportedAgents", 0xE8, "StructProperty"},
            {"DistanceToPlayer", 0xF0, "StructProperty"},
            {"DistanceToPlayerHysteresis", 0x118, "StructProperty"},
            {"RegistrationDistanceToPlayer", 0x140, "StructProperty"},
            {"RegistrationDistanceToPlayerHysteresis", 0x168, "StructProperty"},
            {"SettingsOverride", 0x190, "ArrayProperty"},
            {"LivingWorldManager", 0x1A0, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldPointProviderInterface
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPointProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTagAssetInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldPointProvidersEnabler
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPointProvidersEnabler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledLinkedPointProviders = 0x278;
            static constexpr std::uintptr_t AvailableLinkedPointProviders = 0x288;
            static constexpr std::uintptr_t EnablerTags = 0x298;
            static constexpr std::uintptr_t LinkedPointProviders = 0x2B8;
            static constexpr std::uintptr_t PointProvidersToEnable = 0x2C8;
            static constexpr std::uintptr_t EvaluateAutomatically = 0x2F0;
            static constexpr std::uintptr_t OnCompletedEvaluationDelegate = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EnabledLinkedPointProviders", 0x278, "ArrayProperty"},
            {"AvailableLinkedPointProviders", 0x288, "ArrayProperty"},
            {"EnablerTags", 0x298, "StructProperty"},
            {"LinkedPointProviders", 0x2B8, "ArrayProperty"},
            {"PointProvidersToEnable", 0x2C8, "StructProperty"},
            {"EvaluateAutomatically", 0x2F0, "StructProperty"},
            {"OnCompletedEvaluationDelegate", 0x320, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldPointProvidersEnabler";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledLinkedPointProviders = 0x278;
            static constexpr std::uintptr_t AvailableLinkedPointProviders = 0x288;
            static constexpr std::uintptr_t EnablerTags = 0x298;
            static constexpr std::uintptr_t LinkedPointProviders = 0x2B8;
            static constexpr std::uintptr_t PointProvidersToEnable = 0x2C8;
            static constexpr std::uintptr_t EvaluateAutomatically = 0x2F0;
            static constexpr std::uintptr_t OnCompletedEvaluationDelegate = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EnabledLinkedPointProviders", 0x278, "ArrayProperty"},
            {"AvailableLinkedPointProviders", 0x288, "ArrayProperty"},
            {"EnablerTags", 0x298, "StructProperty"},
            {"LinkedPointProviders", 0x2B8, "ArrayProperty"},
            {"PointProvidersToEnable", 0x2C8, "StructProperty"},
            {"EvaluateAutomatically", 0x2F0, "StructProperty"},
            {"OnCompletedEvaluationDelegate", 0x320, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaLivingWorldPrefab
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLevelInstancePrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSpawnerDatas = 0x788;
            static constexpr std::uintptr_t LocalLevelBounds = 0x798;
            static constexpr std::uintptr_t LocalGrassRemovalBox = 0x7D0;
            static constexpr std::uintptr_t OnAllActorSpawnedDelegate = 0x808;
            static constexpr std::uintptr_t BuildingsToKill = 0x830;
            static constexpr std::uintptr_t SpawnedActors = 0x840;
            static constexpr std::uintptr_t FinishedDestroyingBuildingCallback = 0x850;
            static constexpr std::uintptr_t bHasFinishedSpawn = 0x85C;
            static constexpr std::uintptr_t bHasRemovedFoliage = 0x85D;
            static constexpr std::uintptr_t bIsEnabled = 0x860;
            static constexpr std::uintptr_t Weight = 0x888;
            static constexpr std::uintptr_t ActorDensityValueOverride = 0x8B0;
            static constexpr std::uintptr_t ActorDensityRangeOverride = 0x8D8;
            static constexpr std::uintptr_t bShouldLevelBeVisible = 0x900;
            static constexpr std::uintptr_t bShouldSpawnerBeAllowedToSpawn = 0x901;
            static constexpr std::uintptr_t bShouldAlwaysSnapAboveLandscape = 0x902;
            static constexpr std::uintptr_t bUseWorldPartitionGridInjection = 0x903;
            static constexpr std::uintptr_t WorldGridInjectionData = 0x908;
            static constexpr std::uintptr_t CanSpawnCondition = 0x938;
            static constexpr std::uintptr_t ActorSpawnerDataOverrides = 0x960;
            static constexpr std::uintptr_t PrefabTags = 0x980;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"ActorSpawnerDatas", 0x788, "ArrayProperty"},
            {"LocalLevelBounds", 0x798, "StructProperty"},
            {"LocalGrassRemovalBox", 0x7D0, "StructProperty"},
            {"OnAllActorSpawnedDelegate", 0x808, "MulticastInlineDelegateProperty"},
            {"BuildingsToKill", 0x830, "ArrayProperty"},
            {"SpawnedActors", 0x840, "ArrayProperty"},
            {"FinishedDestroyingBuildingCallback", 0x850, "DelegateProperty"},
            {"bHasFinishedSpawn", 0x85C, "BoolProperty"},
            {"bHasRemovedFoliage", 0x85D, "BoolProperty"},
            {"bIsEnabled", 0x860, "StructProperty"},
            {"Weight", 0x888, "StructProperty"},
            {"ActorDensityValueOverride", 0x8B0, "StructProperty"},
            {"ActorDensityRangeOverride", 0x8D8, "StructProperty"},
            {"bShouldLevelBeVisible", 0x900, "BoolProperty"},
            {"bShouldSpawnerBeAllowedToSpawn", 0x901, "BoolProperty"},
            {"bShouldAlwaysSnapAboveLandscape", 0x902, "BoolProperty"},
            {"bUseWorldPartitionGridInjection", 0x903, "BoolProperty"},
            {"WorldGridInjectionData", 0x908, "StructProperty"},
            {"CanSpawnCondition", 0x938, "StructProperty"},
            {"ActorSpawnerDataOverrides", 0x960, "ArrayProperty"},
            {"PrefabTags", 0x980, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldPrefabActorSpawner
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPrefabActorSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorDescription = 0x278;
            static constexpr std::uintptr_t OnActorSpawnedDelegate = 0x388;
            static constexpr std::uintptr_t PatrolPath = 0x398;
            static constexpr std::uintptr_t Guid = 0x3A0;
            static constexpr std::uintptr_t SpawnedActor = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ActorDescription", 0x278, "StructProperty"},
            {"OnActorSpawnedDelegate", 0x388, "MulticastInlineDelegateProperty"},
            {"PatrolPath", 0x398, "ObjectProperty"},
            {"Guid", 0x3A0, "StructProperty"},
            {"SpawnedActor", 0x3B0, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldPrefabLevelStreaming
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldPrefabLevelStreaming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelStreamingLevelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bInitiallyLoaded = 0x1C0;
            static constexpr std::uintptr_t bInitiallyVisible = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInitiallyLoaded", 0x1C0, "BoolProperty"},
            {"bInitiallyVisible", 0x1C0, "BoolProperty"},
        }};
    };

    struct FortAthenaLivingWorldRuntimePatrolPathPointProviderComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldRuntimePatrolPathPointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimePointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePointProviderClass = 0xD0;
            static constexpr std::uintptr_t TagSource = 0xD8;
            static constexpr std::uintptr_t Tags = 0xE0;
            static constexpr std::uintptr_t SpawnLimitSource = 0x100;
            static constexpr std::uintptr_t SpawnLimiter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourcePointProviderClass", 0xD0, "ClassProperty"},
            {"TagSource", 0xD8, "EnumProperty"},
            {"Tags", 0xE0, "StructProperty"},
            {"SpawnLimitSource", 0x100, "EnumProperty"},
            {"SpawnLimiter", 0x108, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldRuntimePointProviderComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldRuntimePointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPointProviderCreated = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnPointProviderCreated", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaLivingWorldRuntimeStaticPointProviderComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldRuntimeStaticPointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimePointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePointProviderClass = 0xD0;
            static constexpr std::uintptr_t SpawnTransform = 0xE0;
            static constexpr std::uintptr_t bStartEnabled = 0x140;
            static constexpr std::uintptr_t PointProviderTagsToAdd = 0x148;
            static constexpr std::uintptr_t bOverrideSpawnLimiter = 0x168;
            static constexpr std::uintptr_t SpawnLimiter = 0x170;
            static constexpr std::uintptr_t PointProvider = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourcePointProviderClass", 0xD0, "ClassProperty"},
            {"SpawnTransform", 0xE0, "StructProperty"},
            {"bStartEnabled", 0x140, "BoolProperty"},
            {"PointProviderTagsToAdd", 0x148, "StructProperty"},
            {"bOverrideSpawnLimiter", 0x168, "BoolProperty"},
            {"SpawnLimiter", 0x170, "StructProperty"},
            {"PointProvider", 0x1D8, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnAction
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldSpawnActionBlueprint
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnActionBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldSpawnAction_AddAIToConvoy
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction_AddAIToConvoy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x28, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnAction_AddAIToGroup
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction_AddAIToGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupTags", 0x28, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnAction_LayeredOverrides
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction_LayeredOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideTable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideTable", 0x28, "ObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SeatMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SeatMappings", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnAction_SpawnInAir
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnAction_SpawnInAir";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnHeight = 0x28;
            static constexpr std::uintptr_t SpawnAreaExtentX = 0x50;
            static constexpr std::uintptr_t SpawnAreaExtentY = 0x78;
            static constexpr std::uintptr_t LandingLocationKeyName = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SpawnHeight", 0x28, "StructProperty"},
            {"SpawnAreaExtentX", 0x50, "StructProperty"},
            {"SpawnAreaExtentY", 0x78, "StructProperty"},
            {"LandingLocationKeyName", 0xA0, "NameProperty"},
        }};
    };

    struct FortAthenaLivingWorldSpawnerDataDensityInterface
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnerDataDensityInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldSpawnerDataPreloadInterface
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldSpawnerDataPreloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaLivingWorldStaticPointProvider
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorSpawned = 0x280;
            static constexpr std::uintptr_t OnEventRequested_BP = 0x290;
            static constexpr std::uintptr_t OnEventSpawned_BP = 0x2A0;
            static constexpr std::uintptr_t OnEventFinished_BP = 0x2B0;
            static constexpr std::uintptr_t SpawnLimiter = 0x2C0;
            static constexpr std::uintptr_t FiltersTags = 0x328;
            static constexpr std::uintptr_t SpawnPoints = 0x348;
            static constexpr std::uintptr_t bStartEnabled = 0x358;
            static constexpr std::uintptr_t bRandomizeStartPoint = 0x359;
            static constexpr std::uintptr_t bRandomizePointRotation = 0x35A;
            static constexpr std::uintptr_t DebugInfo = 0x360;
            static constexpr std::uintptr_t CachedGameState = 0x370;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnActorSpawned", 0x280, "MulticastInlineDelegateProperty"},
            {"OnEventRequested_BP", 0x290, "MulticastInlineDelegateProperty"},
            {"OnEventSpawned_BP", 0x2A0, "MulticastInlineDelegateProperty"},
            {"OnEventFinished_BP", 0x2B0, "MulticastInlineDelegateProperty"},
            {"SpawnLimiter", 0x2C0, "StructProperty"},
            {"FiltersTags", 0x328, "StructProperty"},
            {"SpawnPoints", 0x348, "ArrayProperty"},
            {"bStartEnabled", 0x358, "BoolProperty"},
            {"bRandomizeStartPoint", 0x359, "BoolProperty"},
            {"bRandomizePointRotation", 0x35A, "BoolProperty"},
            {"DebugInfo", 0x360, "StructProperty"},
            {"CachedGameState", 0x370, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x378, "ObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldVehiclePointProvider
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldVehiclePointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialOverlapBehavior = 0x3A8;
            static constexpr std::uintptr_t ForceModsAllowed = 0x3B0;
            static constexpr std::uintptr_t ForceMods = 0x3D8;
            static constexpr std::uintptr_t ForceCosmeticsAllowed = 0x3F8;
            static constexpr std::uintptr_t ForceCosmetics = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialOverlapBehavior", 0x3A8, "ByteProperty"},
            {"ForceModsAllowed", 0x3B0, "StructProperty"},
            {"ForceMods", 0x3D8, "StructProperty"},
            {"ForceCosmeticsAllowed", 0x3F8, "StructProperty"},
            {"ForceCosmetics", 0x420, "StructProperty"},
        }};
    };

    struct FortAthenaLivingWorldVolume
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedNavLinkAreaClasses = 0x2C0;
            static constexpr std::uintptr_t bStartEnabled = 0x2D0;
            static constexpr std::uintptr_t bWaitForNavigation = 0x2D1;
            static constexpr std::uintptr_t FiltersTags = 0x2D8;
            static constexpr std::uintptr_t EnvironmentQuery = 0x2F8;
            static constexpr std::uintptr_t QueryConfig = 0x300;
            static constexpr std::uintptr_t bRemoveUsedPoint = 0x310;
            static constexpr std::uintptr_t bRemoveUsedPointPermenantly = 0x311;
            static constexpr std::uintptr_t SpawnLimiter = 0x318;
            static constexpr std::uintptr_t EQSRefreshInterval = 0x380;
            static constexpr std::uintptr_t WaterLevelIndexMin = 0x3A8;
            static constexpr std::uintptr_t WaterLevelIndexMax = 0x3D0;
            static constexpr std::uintptr_t CachedGameState = 0x3F8;
            static constexpr std::uintptr_t OnActorSpawnedResult = 0x400;
            static constexpr std::uintptr_t OnPointProviderRegistered = 0x410;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"AllowedNavLinkAreaClasses", 0x2C0, "ArrayProperty"},
            {"bStartEnabled", 0x2D0, "BoolProperty"},
            {"bWaitForNavigation", 0x2D1, "BoolProperty"},
            {"FiltersTags", 0x2D8, "StructProperty"},
            {"EnvironmentQuery", 0x2F8, "ObjectProperty"},
            {"QueryConfig", 0x300, "ArrayProperty"},
            {"bRemoveUsedPoint", 0x310, "BoolProperty"},
            {"bRemoveUsedPointPermenantly", 0x311, "BoolProperty"},
            {"SpawnLimiter", 0x318, "StructProperty"},
            {"EQSRefreshInterval", 0x380, "StructProperty"},
            {"WaterLevelIndexMin", 0x3A8, "StructProperty"},
            {"WaterLevelIndexMax", 0x3D0, "StructProperty"},
            {"CachedGameState", 0x3F8, "ObjectProperty"},
            {"OnActorSpawnedResult", 0x400, "MulticastInlineDelegateProperty"},
            {"OnPointProviderRegistered", 0x410, "MulticastInlineDelegateProperty"},
            {"CachedLivingWorldManager", 0x420, "ObjectProperty"},
        }};
    };

    struct FortAthenaLivingWorldWardComponent
    {
        static constexpr std::string_view Name = "FortAthenaLivingWorldWardComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultRadius = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultRadius", 0xC0, "FloatProperty"},
        }};
    };

    struct FortAthenaPatrolPathPointProvider
    {
        static constexpr std::string_view Name = "FortAthenaPatrolPathPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t FiltersTags = 0x280;
            static constexpr std::uintptr_t AssociatedPatrolPath = 0x2A0;
            static constexpr std::uintptr_t bAlignOrientationToPath = 0x2A8;
            static constexpr std::uintptr_t bSpawnOnPatrolPath = 0x2A8;
            static constexpr std::uintptr_t bStartEnabled = 0x2A8;
            static constexpr std::uintptr_t bSyncStatusWithPatrolPath = 0x2A8;
            static constexpr std::uintptr_t SpawnLimiter = 0x2B0;
            static constexpr std::uintptr_t OnActorSpawnedResult = 0x318;
            static constexpr std::uintptr_t RuntimePatrolPathWeakPtr = 0x328;
            static constexpr std::uintptr_t CachedGameState = 0x330;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FiltersTags", 0x280, "StructProperty"},
            {"AssociatedPatrolPath", 0x2A0, "ObjectProperty"},
            {"bAlignOrientationToPath", 0x2A8, "BoolProperty"},
            {"bSpawnOnPatrolPath", 0x2A8, "BoolProperty"},
            {"bStartEnabled", 0x2A8, "BoolProperty"},
            {"bSyncStatusWithPatrolPath", 0x2A8, "BoolProperty"},
            {"SpawnLimiter", 0x2B0, "StructProperty"},
            {"OnActorSpawnedResult", 0x318, "MulticastInlineDelegateProperty"},
            {"RuntimePatrolPathWeakPtr", 0x328, "WeakObjectProperty"},
            {"CachedGameState", 0x330, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x338, "ObjectProperty"},
        }};
    };

    struct FortAthenaPointAroundPlayerProvider
    {
        static constexpr std::string_view Name = "FortAthenaPointAroundPlayerProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t FiltersTags = 0x280;
            static constexpr std::uintptr_t QueryTemplate = 0x2A0;
            static constexpr std::uintptr_t RunMode = 0x2A8;
            static constexpr std::uintptr_t bGenerateAroundPlayerBots = 0x2A9;
            static constexpr std::uintptr_t bStartEnabled = 0x2A9;
            static constexpr std::uintptr_t IgnorePlayerWithTag = 0x2AC;
            static constexpr std::uintptr_t SpawnLimiter = 0x2B0;
            static constexpr std::uintptr_t OnActorSpawnedResult = 0x318;
            static constexpr std::uintptr_t CachedGameState = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"FiltersTags", 0x280, "StructProperty"},
            {"QueryTemplate", 0x2A0, "ObjectProperty"},
            {"RunMode", 0x2A8, "ByteProperty"},
            {"bGenerateAroundPlayerBots", 0x2A9, "BoolProperty"},
            {"bStartEnabled", 0x2A9, "BoolProperty"},
            {"IgnorePlayerWithTag", 0x2AC, "StructProperty"},
            {"SpawnLimiter", 0x2B0, "StructProperty"},
            {"OnActorSpawnedResult", 0x318, "MulticastInlineDelegateProperty"},
            {"CachedGameState", 0x328, "ObjectProperty"},
        }};
    };

    struct FortAthenaRuntimeWaterBodyPointProviderComponent
    {
        static constexpr std::string_view Name = "FortAthenaRuntimeWaterBodyPointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimePointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PointProviderClass = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PointProviderClass", 0xD0, "ClassProperty"},
        }};
    };

    struct FortAthenaWaterBodyPointProvider
    {
        static constexpr std::string_view Name = "FortAthenaWaterBodyPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameState = 0x30;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x38;
            static constexpr std::uintptr_t PointProviderFiltersTags = 0x40;
            static constexpr std::uintptr_t EnvironmentQuery = 0x60;
            static constexpr std::uintptr_t QueryConfig = 0x68;
            static constexpr std::uintptr_t MaxLocationsCountByWaterArea = 0x78;
            static constexpr std::uintptr_t MaxLocationsCountBySplineLength = 0xA0;
            static constexpr std::uintptr_t bRemoveUsedLocations = 0xC8;
            static constexpr std::uintptr_t ActivationDistance = 0xD0;
            static constexpr std::uintptr_t ValidationSweepRadius = 0xF8;
            static constexpr std::uintptr_t ValidationSweepUp = 0x120;
            static constexpr std::uintptr_t ValidationSweepDown = 0x148;
            static constexpr std::uintptr_t ValidationGroundTraceCollisionProfile = 0x170;
            static constexpr std::uintptr_t SpawnLimiter = 0x190;
            static constexpr std::uintptr_t AssociatedWaterBody = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"CachedGameState", 0x30, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x38, "ObjectProperty"},
            {"PointProviderFiltersTags", 0x40, "StructProperty"},
            {"EnvironmentQuery", 0x60, "ObjectProperty"},
            {"QueryConfig", 0x68, "ArrayProperty"},
            {"MaxLocationsCountByWaterArea", 0x78, "StructProperty"},
            {"MaxLocationsCountBySplineLength", 0xA0, "StructProperty"},
            {"bRemoveUsedLocations", 0xC8, "BoolProperty"},
            {"ActivationDistance", 0xD0, "StructProperty"},
            {"ValidationSweepRadius", 0xF8, "StructProperty"},
            {"ValidationSweepUp", 0x120, "StructProperty"},
            {"ValidationSweepDown", 0x148, "StructProperty"},
            {"ValidationGroundTraceCollisionProfile", 0x170, "StructProperty"},
            {"SpawnLimiter", 0x190, "StructProperty"},
            {"AssociatedWaterBody", 0x1F8, "WeakObjectProperty"},
        }};
    };

    struct FortCheatManager_LivingWorldManager
    {
        static constexpr std::string_view Name = "FortCheatManager_LivingWorldManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t CheatTeleportToCount = 0x28;
            static constexpr std::uintptr_t CheatTeleportLastEventDataName = 0x30;
            static constexpr std::uintptr_t CheatSpawnEventCount = 0x40;
            static constexpr std::uintptr_t CheatSpawnEventName = 0x48;
            static constexpr std::uintptr_t CheatTriggerEventCount = 0x58;
            static constexpr std::uintptr_t CheatTriggerEventName = 0x60;
            static constexpr std::uintptr_t InputBindings = 0x70;
            static constexpr std::uintptr_t InputComponent = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CheatTeleportToCount", 0x28, "IntProperty"},
            {"CheatTeleportLastEventDataName", 0x30, "StrProperty"},
            {"CheatSpawnEventCount", 0x40, "IntProperty"},
            {"CheatSpawnEventName", 0x48, "StrProperty"},
            {"CheatTriggerEventCount", 0x58, "IntProperty"},
            {"CheatTriggerEventName", 0x60, "StrProperty"},
            {"InputBindings", 0x70, "ArrayProperty"},
            {"InputComponent", 0x80, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
    {
        static constexpr std::string_view Name = "FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameFeatureAction_AddCategoryTableToConfig
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddCategoryTableToConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigToCategoryTableDatas = 0x28;
            static constexpr std::uintptr_t StartVersion = 0x38;
            static constexpr std::uintptr_t EndVersion = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ConfigToCategoryTableDatas", 0x28, "MapProperty"},
            {"StartVersion", 0x38, "StructProperty"},
            {"EndVersion", 0x3C, "StructProperty"},
        }};
    };

    struct FortGameFeatureAction_AddLagerConfig
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddLagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t LagerConfigOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LagerConfigOverrides", 0x28, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddTaggedSpawnActions
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddTaggedSpawnActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftTaggedSpawnActions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftTaggedSpawnActions", 0x38, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureAction_MapMarkerTagsProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortLWPointProviderSelectorHelper_EQS
    {
        static constexpr std::string_view Name = "FortLWPointProviderSelectorHelper_EQS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPawnComponent_LivingWorldSpawnAroundPlayer
    {
        static constexpr std::string_view Name = "FortPawnComponent_LivingWorldSpawnAroundPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimeData = 0xC8;
            static constexpr std::uintptr_t PerPlayerConfigurations = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RuntimeData", 0xC8, "ArrayProperty"},
            {"PerPlayerConfigurations", 0xD8, "ArrayProperty"},
        }};
    };

    struct FortQueryGenerator_LWMPointProviderSelector_EQS
    {
        static constexpr std::string_view Name = "FortQueryGenerator_LWMPointProviderSelector_EQS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryTest_IsCloseToLivingWorldWard
    {
        static constexpr std::string_view Name = "FortQueryTest_IsCloseToLivingWorldWard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

}
