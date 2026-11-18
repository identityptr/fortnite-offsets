#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutNativeRuntime
{
    struct DollHouseLightStaticPointProvider
    {
        static constexpr std::string_view Name = "DollHouseLightStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldLightStaticPointProvider";
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

    struct DollHouseLivingWorldSpawnAction
    {
        static constexpr std::string_view Name = "DollHouseLivingWorldSpawnAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldSpawnAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DollHouseSpawnerComponent
    {
        static constexpr std::string_view Name = "DollHouseSpawnerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimeStaticPointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnOffset = 0x1E8;
            static constexpr std::uintptr_t DelayInSecondsAfterCloudLoad = 0x200;
            static constexpr std::uintptr_t DelayInSecondsAfterNewSpawn = 0x228;
            static constexpr std::uintptr_t MaxWaitInSecondsForNoDirtyNavArea = 0x250;
            static constexpr std::uintptr_t FrequencyInSecondsForNoDirtyNavAreaChecks = 0x278;
            static constexpr std::uintptr_t NavAreaChecksExtent = 0x2A0;
            static constexpr std::uintptr_t DefaultUniqueNPCTag = 0x2B8;
            static constexpr std::uintptr_t bSetToRandomPlayerWhenNoValidOwner = 0x2BC;
            static constexpr std::uintptr_t bRequireDirectInitialization = 0x2BD;
            static constexpr std::uintptr_t bIgnoreSpawnLimits = 0x2BE;
            static constexpr std::uintptr_t RespawnOnPersistentDataChanged = 0x2C0;
            static constexpr std::uintptr_t SpawnedNPC = 0x2E8;
            static constexpr std::uintptr_t PersistentSpawnerData = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SpawnOffset", 0x1E8, "StructProperty"},
            {"DelayInSecondsAfterCloudLoad", 0x200, "StructProperty"},
            {"DelayInSecondsAfterNewSpawn", 0x228, "StructProperty"},
            {"MaxWaitInSecondsForNoDirtyNavArea", 0x250, "StructProperty"},
            {"FrequencyInSecondsForNoDirtyNavAreaChecks", 0x278, "StructProperty"},
            {"NavAreaChecksExtent", 0x2A0, "StructProperty"},
            {"DefaultUniqueNPCTag", 0x2B8, "StructProperty"},
            {"bSetToRandomPlayerWhenNoValidOwner", 0x2BC, "BoolProperty"},
            {"bRequireDirectInitialization", 0x2BD, "BoolProperty"},
            {"bIgnoreSpawnLimits", 0x2BE, "BoolProperty"},
            {"RespawnOnPersistentDataChanged", 0x2C0, "StructProperty"},
            {"SpawnedNPC", 0x2E8, "WeakObjectProperty"},
            {"PersistentSpawnerData", 0x2F0, "StructProperty"},
        }};
    };

    struct FortAutomationRpcManager_Sprout
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_Sprout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameStateComponent_SproutHousing
    {
        static constexpr std::string_view Name = "FortGameStateComponent_SproutHousing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHousingOwnershipInfoChanged = 0xC0;
            static constexpr std::uintptr_t HousingShellRegistryType = 0xD0;
            static constexpr std::uintptr_t SessionReactionVoteMap = 0xD8;
            static constexpr std::uintptr_t DecorReinitItemArray = 0xE8;
            static constexpr std::uintptr_t DecorReinitItemTable = 0xF8;
            static constexpr std::uintptr_t DecorRemapItemArray = 0x108;
            static constexpr std::uintptr_t DecorRemapAssetTable = 0x118;
            static constexpr std::uintptr_t InjectedObjectsWorldPartition = 0x128;
            static constexpr std::uintptr_t InjectedLevels = 0x130;
            static constexpr std::uintptr_t SproutHousingLotOwnershipArray = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnHousingOwnershipInfoChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"HousingShellRegistryType", 0xD0, "NameProperty"},
            {"SessionReactionVoteMap", 0xD8, "MapProperty"},
            {"DecorReinitItemArray", 0xE8, "ArrayProperty"},
            {"DecorReinitItemTable", 0xF8, "MapProperty"},
            {"DecorRemapItemArray", 0x108, "ArrayProperty"},
            {"DecorRemapAssetTable", 0x118, "MapProperty"},
            {"InjectedObjectsWorldPartition", 0x128, "ObjectProperty"},
            {"InjectedLevels", 0x130, "StructProperty"},
            {"SproutHousingLotOwnershipArray", 0x1D0, "StructProperty"},
        }};
    };

    struct JunoPlayerControllerComponent_SproutSessionAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_SproutSessionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerControllerComponent_SessionAnalytics";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPlaySessionStartedTime = 0xF0;
            static constexpr std::uintptr_t RecipesUnlockedDuringSession = 0xF8;
            static constexpr std::uintptr_t AccumulatedDistanceTraveled = 0x108;
            static constexpr std::uintptr_t LastIdleCheckTime = 0x10C;
            static constexpr std::uintptr_t AccumulatedIdleTime = 0x110;
            static constexpr std::uintptr_t LastPlayerPawnLocation = 0x118;
            static constexpr std::uintptr_t SavedDisconnectReason = 0x140;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x150;
            static constexpr std::uintptr_t bGracefulShutdownStarted = 0x16C;
            static constexpr std::uintptr_t GracefulShutdownExitCode = 0x170;
            static constexpr std::uintptr_t GracefulShutdownMaxTime = 0x174;
            static constexpr std::uintptr_t SavedPlayerPermadeathStatus = 0x178;
            static constexpr std::uintptr_t PawnEliminatedEventHandle = 0x198;
            static constexpr std::uintptr_t HeartbeatIntervalSeconds = 0x260;
            static constexpr std::uintptr_t PlayerStatsUpdateIntervalSeconds = 0x264;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"JunoPlaySessionStartedTime", 0xF0, "DoubleProperty"},
            {"RecipesUnlockedDuringSession", 0xF8, "ArrayProperty"},
            {"AccumulatedDistanceTraveled", 0x108, "FloatProperty"},
            {"LastIdleCheckTime", 0x10C, "FloatProperty"},
            {"AccumulatedIdleTime", 0x110, "FloatProperty"},
            {"LastPlayerPawnLocation", 0x118, "StructProperty"},
            {"SavedDisconnectReason", 0x140, "StrProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x150, "StructProperty"},
            {"bGracefulShutdownStarted", 0x16C, "BoolProperty"},
            {"GracefulShutdownExitCode", 0x170, "IntProperty"},
            {"GracefulShutdownMaxTime", 0x174, "IntProperty"},
            {"SavedPlayerPermadeathStatus", 0x178, "StrProperty"},
            {"PawnEliminatedEventHandle", 0x198, "StructProperty"},
            {"HeartbeatIntervalSeconds", 0x260, "FloatProperty"},
            {"PlayerStatsUpdateIntervalSeconds", 0x264, "FloatProperty"},
        }};
    };

    struct MuteInteractHandlerComponent
    {
        static constexpr std::string_view Name = "MuteInteractHandlerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorComponent_FortInteractExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MuteOnInteractText = 0xD8;
            static constexpr std::uintptr_t MuteOffInteractText = 0xE8;
            static constexpr std::uintptr_t SupportedInteractionType = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MuteOnInteractText", 0xD8, "TextProperty"},
            {"MuteOffInteractText", 0xE8, "TextProperty"},
            {"SupportedInteractionType", 0xF8, "ByteProperty"},
        }};
    };

    struct PlayspaceComponent_Root_SproutJobManagement
    {
        static constexpr std::string_view Name = "PlayspaceComponent_Root_SproutJobManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveServerJobDataEntries = 0x118;
            static constexpr std::uintptr_t ActiveJobDataArray = 0x128;
            static constexpr std::uintptr_t ReplicatedJobVolumeEntries = 0x1C0;
            static constexpr std::uintptr_t CurrentBoostedJobs = 0x1E8;
            static constexpr std::uintptr_t PermanentBoostedJobs = 0x208;
            static constexpr std::uintptr_t BoostedJobExperienceRewardMultiplier = 0x228;
            static constexpr std::uintptr_t BoostedJobCurrencyRewardMultiplier = 0x250;
            static constexpr std::uintptr_t BoostedJobNotificationId_Available = 0x278;
            static constexpr std::uintptr_t BoostedJobsNotificationId_Unavailable = 0x280;
            static constexpr std::uintptr_t TrendingJobsChangeEventTag = 0x288;
            static constexpr std::uintptr_t TrendingJobsDatabaseRegistryType = 0x28C;
            static constexpr std::uintptr_t ChosenTrendingJobsConfigIds = 0x290;
            static constexpr std::uintptr_t JobTaskCooldown_Floor = 0x2C0;
            static constexpr std::uintptr_t JobTaskCooldown_Ceiling = 0x2E8;
            static constexpr std::uintptr_t PlayerJobTaskCooldownTag = 0x310;
            static constexpr std::uintptr_t bIsJobXPEnabled = 0x330;
            static constexpr std::uintptr_t JobDatabaseRegistryType = 0x334;
            static constexpr std::uintptr_t JobTaskDatabaseRegistryType = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ActiveServerJobDataEntries", 0x118, "MapProperty"},
            {"ActiveJobDataArray", 0x128, "StructProperty"},
            {"ReplicatedJobVolumeEntries", 0x1C0, "ArrayProperty"},
            {"CurrentBoostedJobs", 0x1E8, "StructProperty"},
            {"PermanentBoostedJobs", 0x208, "StructProperty"},
            {"BoostedJobExperienceRewardMultiplier", 0x228, "StructProperty"},
            {"BoostedJobCurrencyRewardMultiplier", 0x250, "StructProperty"},
            {"BoostedJobNotificationId_Available", 0x278, "StructProperty"},
            {"BoostedJobsNotificationId_Unavailable", 0x280, "StructProperty"},
            {"TrendingJobsChangeEventTag", 0x288, "StructProperty"},
            {"TrendingJobsDatabaseRegistryType", 0x28C, "StructProperty"},
            {"ChosenTrendingJobsConfigIds", 0x290, "ArrayProperty"},
            {"JobTaskCooldown_Floor", 0x2C0, "StructProperty"},
            {"JobTaskCooldown_Ceiling", 0x2E8, "StructProperty"},
            {"PlayerJobTaskCooldownTag", 0x310, "StructProperty"},
            {"bIsJobXPEnabled", 0x330, "BoolProperty"},
            {"JobDatabaseRegistryType", 0x334, "StructProperty"},
            {"JobTaskDatabaseRegistryType", 0x368, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_Root_SproutLootDatabase
    {
        static constexpr std::string_view Name = "PlayspaceComponent_Root_SproutLootDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GenericCurrentJobIdentifier = 0x118;
            static constexpr std::uintptr_t GenericLocalJobIdentifier = 0x11C;
            static constexpr std::uintptr_t LootBundleRegistryType = 0x120;
            static constexpr std::uintptr_t CTARewardsRegistryType = 0x13C;
            static constexpr std::uintptr_t CashItemDefinition = 0x160;
            static constexpr std::uintptr_t LootOverflowSender = 0x168;
            static constexpr std::uintptr_t LootOverflowHeadingId = 0x16C;
            static constexpr std::uintptr_t LootOverflowBodyId = 0x174;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GenericCurrentJobIdentifier", 0x118, "StructProperty"},
            {"GenericLocalJobIdentifier", 0x11C, "StructProperty"},
            {"LootBundleRegistryType", 0x120, "StructProperty"},
            {"CTARewardsRegistryType", 0x13C, "StructProperty"},
            {"CashItemDefinition", 0x160, "ObjectProperty"},
            {"LootOverflowSender", 0x168, "StructProperty"},
            {"LootOverflowHeadingId", 0x16C, "StructProperty"},
            {"LootOverflowBodyId", 0x174, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_Root_SproutVehicleManagement
    {
        static constexpr std::string_view Name = "PlayspaceComponent_Root_SproutVehicleManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxVehicleCountPerPlayer = 0x118;
            static constexpr std::uintptr_t SpawnBlockTraceChannel = 0x140;
            static constexpr std::uintptr_t SpawnBlockTag = 0x144;
            static constexpr std::uintptr_t SpawnBlockClasses = 0x148;
            static constexpr std::uintptr_t VehicleDatabaseRegistryType = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MaxVehicleCountPerPlayer", 0x118, "StructProperty"},
            {"SpawnBlockTraceChannel", 0x140, "ByteProperty"},
            {"SpawnBlockTag", 0x144, "StructProperty"},
            {"SpawnBlockClasses", 0x148, "ArrayProperty"},
            {"VehicleDatabaseRegistryType", 0x158, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_SproutServerExpiration
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SproutServerExpiration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_JunoServerExpiration";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseConfigAlertDataList = 0x228;
            static constexpr std::uintptr_t ConfigAlertDataList = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseConfigAlertDataList", 0x228, "BoolProperty"},
            {"ConfigAlertDataList", 0x230, "ArrayProperty"},
        }};
    };

    struct SproutAIBotEvaluator_ReactToVerb
    {
        static constexpr std::string_view Name = "SproutAIBotEvaluator_ReactToVerb";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAIBotEvaluator_ReactToVerb";
        struct Offsets
        {
            static constexpr std::uintptr_t GiveItemEmoteTagQuery = 0x770;
            static constexpr std::uintptr_t GiveItemEmoteItemRequiredTagQuery = 0x7B8;
            static constexpr std::uintptr_t DistanceDecreaseIfMatchingItemGiveRequest = 0x800;
            static constexpr std::uintptr_t RequiredTagQueryOnAIForDistanceDecreaseForGiveEmote = 0x828;
            static constexpr std::uintptr_t DistanceDecreaseForGiveEmoteIfMatchingTagQuery = 0x870;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GiveItemEmoteTagQuery", 0x770, "StructProperty"},
            {"GiveItemEmoteItemRequiredTagQuery", 0x7B8, "StructProperty"},
            {"DistanceDecreaseIfMatchingItemGiveRequest", 0x800, "StructProperty"},
            {"RequiredTagQueryOnAIForDistanceDecreaseForGiveEmote", 0x828, "StructProperty"},
            {"DistanceDecreaseForGiveEmoteIfMatchingTagQuery", 0x870, "StructProperty"},
        }};
    };

    struct SproutAIComponent_Requests
    {
        static constexpr std::string_view Name = "SproutAIComponent_Requests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutActorComponent_AutomaticRequests";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredTagsOnPawn = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredTagsOnPawn", 0x3E0, "StructProperty"},
        }};
    };

    struct SproutAMUManager
    {
        static constexpr std::string_view Name = "SproutAMUManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCollection = 0x48;
            static constexpr std::uintptr_t NPCCollection = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerCollection", 0x48, "StructProperty"},
            {"NPCCollection", 0x70, "StructProperty"},
        }};
    };

    struct SproutActivityStateWorldConditionSchema
    {
        static constexpr std::string_view Name = "SproutActivityStateWorldConditionSchema";
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

    struct SproutActorComponent_ActivityState
    {
        static constexpr std::string_view Name = "SproutActorComponent_ActivityState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSetState = 0xC8;
            static constexpr std::uintptr_t OnProcessedStateRewards = 0xF0;
            static constexpr std::uintptr_t OnStartedAutomaticStateChange = 0x118;
            static constexpr std::uintptr_t CurrentStateConfigurationRuntime = 0x140;
            static constexpr std::uintptr_t AllActivePersistentStates = 0x150;
            static constexpr std::uintptr_t LastReceivedStateConfigurationRuntime = 0x160;
            static constexpr std::uintptr_t CategoriesConfigurations = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnSetState", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnProcessedStateRewards", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnStartedAutomaticStateChange", 0x118, "MulticastInlineDelegateProperty"},
            {"CurrentStateConfigurationRuntime", 0x140, "StructProperty"},
            {"AllActivePersistentStates", 0x150, "ArrayProperty"},
            {"LastReceivedStateConfigurationRuntime", 0x160, "StructProperty"},
            {"CategoriesConfigurations", 0x178, "ArrayProperty"},
        }};
    };

    struct SproutActorComponent_AutomaticRequests
    {
        static constexpr std::string_view Name = "SproutActorComponent_AutomaticRequests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutActorComponent_Requests";
        struct Offsets
        {
            static constexpr std::uintptr_t MinCooldownOnFulfil = 0x210;
            static constexpr std::uintptr_t MaxCooldownOnFulfil = 0x238;
            static constexpr std::uintptr_t MinTimeToFail = 0x260;
            static constexpr std::uintptr_t MaxTimeToFail = 0x288;
            static constexpr std::uintptr_t MinCooldownOnFail = 0x2B0;
            static constexpr std::uintptr_t MaxCooldownOnFail = 0x2D8;
            static constexpr std::uintptr_t WeightMultiplierOnLastPickedRequest = 0x300;
            static constexpr std::uintptr_t ConditionalRerollPercentages = 0x328;
            static constexpr std::uintptr_t MinRerollCooldown = 0x338;
            static constexpr std::uintptr_t MaxRerollCooldown = 0x360;
            static constexpr std::uintptr_t bCanRollOutsideJobVolume = 0x388;
            static constexpr std::uintptr_t OnFailedRequestDelegate = 0x390;
            static constexpr std::uintptr_t LastAutomaticallyPickedRequest = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MinCooldownOnFulfil", 0x210, "StructProperty"},
            {"MaxCooldownOnFulfil", 0x238, "StructProperty"},
            {"MinTimeToFail", 0x260, "StructProperty"},
            {"MaxTimeToFail", 0x288, "StructProperty"},
            {"MinCooldownOnFail", 0x2B0, "StructProperty"},
            {"MaxCooldownOnFail", 0x2D8, "StructProperty"},
            {"WeightMultiplierOnLastPickedRequest", 0x300, "StructProperty"},
            {"ConditionalRerollPercentages", 0x328, "ArrayProperty"},
            {"MinRerollCooldown", 0x338, "StructProperty"},
            {"MaxRerollCooldown", 0x360, "StructProperty"},
            {"bCanRollOutsideJobVolume", 0x388, "BoolProperty"},
            {"OnFailedRequestDelegate", 0x390, "MulticastInlineDelegateProperty"},
            {"LastAutomaticallyPickedRequest", 0x3A0, "StructProperty"},
        }};
    };

    struct SproutActorComponent_DecorInventoryPersistence
    {
        static constexpr std::string_view Name = "SproutActorComponent_DecorInventoryPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistedInventory = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersistedInventory", 0xC8, "ArrayProperty"},
        }};
    };

    struct SproutActorComponent_ItemRecipient
    {
        static constexpr std::string_view Name = "SproutActorComponent_ItemRecipient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemsReceived = 0xC0;
            static constexpr std::uintptr_t GoalItem = 0xD0;
            static constexpr std::uintptr_t GoalItemTags = 0xF0;
            static constexpr std::uintptr_t InteractorCache = 0x110;
            static constexpr std::uintptr_t LastAdderCache = 0x118;
            static constexpr std::uintptr_t RemainingItemEventsToReceiveForInteractor = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnItemsReceived", 0xC0, "MulticastInlineDelegateProperty"},
            {"GoalItem", 0xD0, "SoftObjectProperty"},
            {"GoalItemTags", 0xF0, "StructProperty"},
            {"InteractorCache", 0x110, "WeakObjectProperty"},
            {"LastAdderCache", 0x118, "WeakObjectProperty"},
            {"RemainingItemEventsToReceiveForInteractor", 0x120, "IntProperty"},
        }};
    };

    struct SproutActorComponent_RecipeHolder
    {
        static constexpr std::string_view Name = "SproutActorComponent_RecipeHolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HeldRecipes = 0xC0;
            static constexpr std::uintptr_t RecipeRegistryType = 0xD0;
            static constexpr std::uintptr_t CookTopParentTag = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HeldRecipes", 0xC0, "ArrayProperty"},
            {"RecipeRegistryType", 0xD0, "StructProperty"},
            {"CookTopParentTag", 0xD4, "StructProperty"},
        }};
    };

    struct SproutActorComponent_Requests
    {
        static constexpr std::string_view Name = "SproutActorComponent_Requests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UsedCategoryTag = 0xC0;
            static constexpr std::uintptr_t PerceptionConfiguration = 0xD0;
            static constexpr std::uintptr_t MaxDistanceFromAuthor = 0x190;
            static constexpr std::uintptr_t RewardsMultiplier = 0x1B8;
            static constexpr std::uintptr_t RunningRequest = 0x1C8;
            static constexpr std::uintptr_t LocalRequests = 0x1E0;
            static constexpr std::uintptr_t OnSetRunningRequestDelegate = 0x1F0;
            static constexpr std::uintptr_t OnFulfilledRequestDelegate = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UsedCategoryTag", 0xC0, "StructProperty"},
            {"PerceptionConfiguration", 0xD0, "StructProperty"},
            {"MaxDistanceFromAuthor", 0x190, "StructProperty"},
            {"RewardsMultiplier", 0x1B8, "ArrayProperty"},
            {"RunningRequest", 0x1C8, "StructProperty"},
            {"LocalRequests", 0x1E0, "ArrayProperty"},
            {"OnSetRunningRequestDelegate", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnFulfilledRequestDelegate", 0x200, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutActorSpawner
    {
        static constexpr std::string_view Name = "SproutActorSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationTag = 0x278;
            static constexpr std::uintptr_t DescriptiveTags = 0x280;
            static constexpr std::uintptr_t SmallestCompatibleSize = 0x2A0;
            static constexpr std::uintptr_t LargestCompatibleSize = 0x2A1;
            static constexpr std::uintptr_t Priority = 0x2A4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LocationTag", 0x278, "StructProperty"},
            {"DescriptiveTags", 0x280, "StructProperty"},
            {"SmallestCompatibleSize", 0x2A0, "EnumProperty"},
            {"LargestCompatibleSize", 0x2A1, "EnumProperty"},
            {"Priority", 0x2A4, "IntProperty"},
        }};
    };

    struct SproutActorSpawnerInterface
    {
        static constexpr std::string_view Name = "SproutActorSpawnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutActorSpawnerManager
    {
        static constexpr std::string_view Name = "SproutActorSpawnerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistryEntries = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegistryEntries", 0xC0, "ArrayProperty"},
        }};
    };

    struct SproutActorTrackerSubsystem
    {
        static constexpr std::string_view Name = "SproutActorTrackerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutAnalytics
    {
        static constexpr std::string_view Name = "SproutAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutAsyncAction_OnSproutEventManagerReady
    {
        static constexpr std::string_view Name = "SproutAsyncAction_OnSproutEventManagerReady";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnManagerReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnManagerReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutBlueprintLibrary
    {
        static constexpr std::string_view Name = "SproutBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutBudgetedAssembledMeshUserComponent
    {
        static constexpr std::string_view Name = "SproutBudgetedAssembledMeshUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAssembledMeshUserComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedAssets = 0xC0;
            static constexpr std::uintptr_t MeshParts = 0x100;
            static constexpr std::uintptr_t MeshPartSoftRefs = 0x110;
            static constexpr std::uintptr_t MeshPartComponents = 0x130;
            static constexpr std::uintptr_t bDuplicateCOIs = 0x140;
            static constexpr std::uintptr_t bAssignMeshPartsOnBeginPlay = 0x141;
            static constexpr std::uintptr_t bSetRootMeshOnAttachComponent = 0x141;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LoadedAssets", 0xC0, "ArrayProperty"},
            {"MeshParts", 0x100, "ArrayProperty"},
            {"MeshPartSoftRefs", 0x110, "ArrayProperty"},
            {"MeshPartComponents", 0x130, "ArrayProperty"},
            {"bDuplicateCOIs", 0x140, "BoolProperty"},
            {"bAssignMeshPartsOnBeginPlay", 0x141, "BoolProperty"},
            {"bSetRootMeshOnAttachComponent", 0x141, "BoolProperty"},
        }};
    };

    struct SproutCellTransformerAtom
    {
        static constexpr std::string_view Name = "SproutCellTransformerAtom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNCellTransformer";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct SproutCheatManager
    {
        static constexpr std::string_view Name = "SproutCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutCheatProfilerSubsystem
    {
        static constexpr std::string_view Name = "SproutCheatProfilerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutCityMapManager
    {
        static constexpr std::string_view Name = "SproutCityMapManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapManager";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSize = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TileSize", 0x278, "FloatProperty"},
        }};
    };

    struct SproutCityMarkerManager
    {
        static constexpr std::string_view Name = "SproutCityMarkerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMarkerManager";
        struct Offsets
        {
            static constexpr std::uintptr_t HousingIndicatorSettingName = 0x390;
            static constexpr std::uintptr_t ApartmentIndicatorSettingName = 0x394;
            static constexpr std::uintptr_t XLHousingIndicatorSettingName = 0x398;
            static constexpr std::uintptr_t BoostedJobIndicatorSettingName = 0x39C;
            static constexpr std::uintptr_t ApartmentVolumeTags = 0x3A0;
            static constexpr std::uintptr_t XLHousingVolumeTags = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HousingIndicatorSettingName", 0x390, "NameProperty"},
            {"ApartmentIndicatorSettingName", 0x394, "NameProperty"},
            {"XLHousingIndicatorSettingName", 0x398, "NameProperty"},
            {"BoostedJobIndicatorSettingName", 0x39C, "NameProperty"},
            {"ApartmentVolumeTags", 0x3A0, "StructProperty"},
            {"XLHousingVolumeTags", 0x3C0, "StructProperty"},
        }};
    };

    struct SproutColorComponent
    {
        static constexpr std::string_view Name = "SproutColorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNColorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorLUTAtlas = 0xC0;
            static constexpr std::uintptr_t ColorLUTTexture = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColorLUTAtlas", 0xC0, "ObjectProperty"},
            {"ColorLUTTexture", 0xC8, "ObjectProperty"},
        }};
    };

    struct SproutConnectivityComponent
    {
        static constexpr std::string_view Name = "SproutConnectivityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoConnectivityComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AutomaticConnectionMethod = 0xC0;
            static constexpr std::uintptr_t CustomConnectionDirections = 0xC8;
            static constexpr std::uintptr_t GraphHandle = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AutomaticConnectionMethod", 0xC0, "EnumProperty"},
            {"CustomConnectionDirections", 0xC8, "ArrayProperty"},
            {"GraphHandle", 0xD8, "StructProperty"},
        }};
    };

    struct SproutConnectivityManagerComponent
    {
        static constexpr std::string_view Name = "SproutConnectivityManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Graph = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Graph", 0xC0, "ObjectProperty"},
        }};
    };

    struct SproutConnectivityManagerDebugComponent
    {
        static constexpr std::string_view Name = "SproutConnectivityManagerDebugComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagerComponent = 0xC0;
            static constexpr std::uintptr_t DebugDrawData = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ManagerComponent", 0xC0, "ObjectProperty"},
            {"DebugDrawData", 0xC8, "StructProperty"},
        }};
    };

    struct SproutControllerComponent_AccountItemsUnlock
    {
        static constexpr std::string_view Name = "SproutControllerComponent_AccountItemsUnlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerComponent_AccountItemsUnlock";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedMcpOwnershipTags = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedMcpOwnershipTags", 0x170, "ArrayProperty"},
        }};
    };

    struct SproutControllerComponent_ActionBar
    {
        static constexpr std::string_view Name = "SproutControllerComponent_ActionBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActionBarStateChange = 0xC8;
            static constexpr std::uintptr_t OnActionBarActivated = 0xD8;
            static constexpr std::uintptr_t OnActionBarShutdown = 0xE8;
            static constexpr std::uintptr_t ActionBarRegistryType = 0xF8;
            static constexpr std::uintptr_t ActionBarRowRegistryType = 0xFC;
            static constexpr std::uintptr_t ActionBarOptionRegistryType = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnActionBarStateChange", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnActionBarActivated", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnActionBarShutdown", 0xE8, "MulticastInlineDelegateProperty"},
            {"ActionBarRegistryType", 0xF8, "StructProperty"},
            {"ActionBarRowRegistryType", 0xFC, "StructProperty"},
            {"ActionBarOptionRegistryType", 0x100, "StructProperty"},
        }};
    };

    struct SproutControllerComponent_AnimalCare
    {
        static constexpr std::string_view Name = "SproutControllerComponent_AnimalCare";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveRequestChanged = 0xC8;
            static constexpr std::uintptr_t OnActiveRequestComplete = 0xD8;
            static constexpr std::uintptr_t OnFocusedAnimalChanged = 0xE8;
            static constexpr std::uintptr_t OnPreferredFoodChanged = 0xF8;
            static constexpr std::uintptr_t OnFeedingProgressChanged = 0x108;
            static constexpr std::uintptr_t OnCleaningProgressChanged = 0x118;
            static constexpr std::uintptr_t OnPettingComplete = 0x128;
            static constexpr std::uintptr_t OnPettingAttemptFailed = 0x138;
            static constexpr std::uintptr_t OnPettingStateChanged = 0x148;
            static constexpr std::uintptr_t FocusedAnimalName = 0x158;
            static constexpr std::uintptr_t PreferredFoodName = 0x168;
            static constexpr std::uintptr_t ActiveRequestTag = 0x178;
            static constexpr std::uintptr_t FeedingProgress = 0x17C;
            static constexpr std::uintptr_t CleaningProgress = 0x180;
            static constexpr std::uintptr_t PettingState = 0x188;
            static constexpr std::uintptr_t AnalyticsActivityName = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"OnActiveRequestChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnActiveRequestComplete", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnFocusedAnimalChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnPreferredFoodChanged", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnFeedingProgressChanged", 0x108, "MulticastInlineDelegateProperty"},
            {"OnCleaningProgressChanged", 0x118, "MulticastInlineDelegateProperty"},
            {"OnPettingComplete", 0x128, "MulticastInlineDelegateProperty"},
            {"OnPettingAttemptFailed", 0x138, "MulticastInlineDelegateProperty"},
            {"OnPettingStateChanged", 0x148, "MulticastInlineDelegateProperty"},
            {"FocusedAnimalName", 0x158, "TextProperty"},
            {"PreferredFoodName", 0x168, "TextProperty"},
            {"ActiveRequestTag", 0x178, "StructProperty"},
            {"FeedingProgress", 0x17C, "FloatProperty"},
            {"CleaningProgress", 0x180, "FloatProperty"},
            {"PettingState", 0x188, "StructProperty"},
            {"AnalyticsActivityName", 0x1A8, "NameProperty"},
        }};
    };

    struct SproutControllerComponent_CTA
    {
        static constexpr std::string_view Name = "SproutControllerComponent_CTA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutControllerComponent_Cinematics
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Cinematics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnIntroCinematicResolved = 0xC8;
            static constexpr std::uintptr_t MatchStartCinematicConfig = 0xD8;
            static constexpr std::uintptr_t MidCinematicTag = 0xE0;
            static constexpr std::uintptr_t IntroWarmupCameraTransform = 0xF0;
            static constexpr std::uintptr_t IntroWarmupCameraClass = 0x150;
            static constexpr std::uintptr_t CinematicInputContext = 0x158;
            static constexpr std::uintptr_t CinematicInputPriority = 0x160;
            static constexpr std::uintptr_t CinematicInputModeTag = 0x164;
            static constexpr std::uintptr_t CurrentLevelSequence = 0x170;
            static constexpr std::uintptr_t CurrentLevelSequencePlayer = 0x178;
            static constexpr std::uintptr_t CurrentLevelSequenceActor = 0x180;
            static constexpr std::uintptr_t IntroWarmupCameraActor = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnIntroCinematicResolved", 0xC8, "MulticastInlineDelegateProperty"},
            {"MatchStartCinematicConfig", 0xD8, "StructProperty"},
            {"MidCinematicTag", 0xE0, "StructProperty"},
            {"IntroWarmupCameraTransform", 0xF0, "StructProperty"},
            {"IntroWarmupCameraClass", 0x150, "ClassProperty"},
            {"CinematicInputContext", 0x158, "ObjectProperty"},
            {"CinematicInputPriority", 0x160, "IntProperty"},
            {"CinematicInputModeTag", 0x164, "StructProperty"},
            {"CurrentLevelSequence", 0x170, "ObjectProperty"},
            {"CurrentLevelSequencePlayer", 0x178, "ObjectProperty"},
            {"CurrentLevelSequenceActor", 0x180, "ObjectProperty"},
            {"IntroWarmupCameraActor", 0x188, "ObjectProperty"},
        }};
    };

    struct SproutControllerComponent_Collections
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Collections";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionsItemRegistryType = 0xC8;
            static constexpr std::uintptr_t AllCollections = 0xD0;
            static constexpr std::uintptr_t LatestInventoryItemProcessed = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CollectionsItemRegistryType", 0xC8, "StructProperty"},
            {"AllCollections", 0xD0, "StructProperty"},
            {"LatestInventoryItemProcessed", 0x148, "ObjectProperty"},
        }};
    };

    struct SproutControllerComponent_Housing
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Housing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHousingSlotsUpdated = 0xC8;
            static constexpr std::uintptr_t OnHousingSaveSlotPurchaseApproved = 0xD8;
            static constexpr std::uintptr_t OnHousingSaveSlotPurchaseDenied = 0xE8;
            static constexpr std::uintptr_t OnHousingSaveSlotDeleteApproved = 0xF8;
            static constexpr std::uintptr_t OnHousingSaveSlotDeleteDenied = 0x108;
            static constexpr std::uintptr_t OnHousingLotClaimApproved = 0x118;
            static constexpr std::uintptr_t OnHousingLotClaimLost = 0x128;
            static constexpr std::uintptr_t OnHousingLotClaimDenied = 0x138;
            static constexpr std::uintptr_t OnSetHousingVolumeInLockdownDenied = 0x148;
            static constexpr std::uintptr_t DecorOverflowMessageSender = 0x180;
            static constexpr std::uintptr_t DecorOverflowMessageSubjectId = 0x184;
            static constexpr std::uintptr_t DecorOverflowMessageId = 0x18C;
            static constexpr std::uintptr_t CurrentHousingClaim = 0x194;
            static constexpr std::uintptr_t LotPurchaseData = 0x1C4;
            static constexpr std::uintptr_t HousingSlots = 0x1D8;
            static constexpr std::uintptr_t bHousingControlerIsReady = 0x1E8;
            static constexpr std::uintptr_t SessionHouseReactionList = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"OnHousingSlotsUpdated", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnHousingSaveSlotPurchaseApproved", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnHousingSaveSlotPurchaseDenied", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnHousingSaveSlotDeleteApproved", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnHousingSaveSlotDeleteDenied", 0x108, "MulticastInlineDelegateProperty"},
            {"OnHousingLotClaimApproved", 0x118, "MulticastInlineDelegateProperty"},
            {"OnHousingLotClaimLost", 0x128, "MulticastInlineDelegateProperty"},
            {"OnHousingLotClaimDenied", 0x138, "MulticastInlineDelegateProperty"},
            {"OnSetHousingVolumeInLockdownDenied", 0x148, "MulticastInlineDelegateProperty"},
            {"DecorOverflowMessageSender", 0x180, "StructProperty"},
            {"DecorOverflowMessageSubjectId", 0x184, "StructProperty"},
            {"DecorOverflowMessageId", 0x18C, "StructProperty"},
            {"CurrentHousingClaim", 0x194, "StructProperty"},
            {"LotPurchaseData", 0x1C4, "StructProperty"},
            {"HousingSlots", 0x1D8, "ArrayProperty"},
            {"bHousingControlerIsReady", 0x1E8, "BoolProperty"},
            {"SessionHouseReactionList", 0x1F0, "ArrayProperty"},
        }};
    };

    struct SproutControllerComponent_InventoryOverflow
    {
        static constexpr std::string_view Name = "SproutControllerComponent_InventoryOverflow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInventoryOverflowChanged = 0xC8;
            static constexpr std::uintptr_t OnInventoryOverflowEntriesRemoved = 0xD8;
            static constexpr std::uintptr_t OnInventoryOverflowEntriesAdded = 0xE8;
            static constexpr std::uintptr_t OnInventoryOverflowEntriesUpdated = 0xF8;
            static constexpr std::uintptr_t OnDestroyEntryFromOverflowInventoryDenied = 0x108;
            static constexpr std::uintptr_t OnClaimEntryAttachmentFromOverflowInventoryDenied = 0x118;
            static constexpr std::uintptr_t OverflowInventory = 0x128;
            static constexpr std::uintptr_t OneTimeMailEvents = 0x188;
            static constexpr std::uintptr_t MaxOverflowMessages = 0x198;
            static constexpr std::uintptr_t OneTimeMailRegistryType = 0x19C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnInventoryOverflowChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnInventoryOverflowEntriesRemoved", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnInventoryOverflowEntriesAdded", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnInventoryOverflowEntriesUpdated", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnDestroyEntryFromOverflowInventoryDenied", 0x108, "MulticastInlineDelegateProperty"},
            {"OnClaimEntryAttachmentFromOverflowInventoryDenied", 0x118, "MulticastInlineDelegateProperty"},
            {"OverflowInventory", 0x128, "StructProperty"},
            {"OneTimeMailEvents", 0x188, "ArrayProperty"},
            {"MaxOverflowMessages", 0x198, "IntProperty"},
            {"OneTimeMailRegistryType", 0x19C, "NameProperty"},
        }};
    };

    struct SproutControllerComponent_Jobs
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Jobs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutControllerComponent_NeighborhoodInfo
    {
        static constexpr std::string_view Name = "SproutControllerComponent_NeighborhoodInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSproutNeighborhoodInfoChanged = 0xC8;
            static constexpr std::uintptr_t OnSproutNeighborhoodKnowledgeChanged = 0xD8;
            static constexpr std::uintptr_t bIsMemberOfNeighborhood = 0xE8;
            static constexpr std::uintptr_t HomeNeighborhoodId = 0xEC;
            static constexpr std::uintptr_t NeighborhoodKnowledge = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSproutNeighborhoodInfoChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnSproutNeighborhoodKnowledgeChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"bIsMemberOfNeighborhood", 0xE8, "BoolProperty"},
            {"HomeNeighborhoodId", 0xEC, "StructProperty"},
            {"NeighborhoodKnowledge", 0x100, "StructProperty"},
        }};
    };

    struct SproutControllerComponent_NeighborhoodThemes
    {
        static constexpr std::string_view Name = "SproutControllerComponent_NeighborhoodThemes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutControllerComponent_PersistedUnlocks
    {
        static constexpr std::string_view Name = "SproutControllerComponent_PersistedUnlocks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllItemsAreUnlocked = 0xC8;
            static constexpr std::uintptr_t TrackedPersistedUnlockItems = 0xD0;
            static constexpr std::uintptr_t TrackedTransientUnlockItems = 0xE0;
            static constexpr std::uintptr_t OnSproutPersistedUnlocksChanged = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAllItemsAreUnlocked", 0xC8, "BoolProperty"},
            {"TrackedPersistedUnlockItems", 0xD0, "ArrayProperty"},
            {"TrackedTransientUnlockItems", 0xE0, "ArrayProperty"},
            {"OnSproutPersistedUnlocksChanged", 0x100, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutControllerComponent_PersistentEventData
    {
        static constexpr std::string_view Name = "SproutControllerComponent_PersistentEventData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutControllerComponent_Roommates
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Roommates";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MyRoommatesList = 0xF8;
            static constexpr std::uintptr_t RoommateInvitesList = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MyRoommatesList", 0xF8, "ArrayProperty"},
            {"RoommateInvitesList", 0x120, "ArrayProperty"},
        }};
    };

    struct SproutControllerComponent_UGCUsers
    {
        static constexpr std::string_view Name = "SproutControllerComponent_UGCUsers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UGCUsersList = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UGCUsersList", 0xE0, "ArrayProperty"},
        }};
    };

    struct SproutControllerComponent_Vehicles
    {
        static constexpr std::string_view Name = "SproutControllerComponent_Vehicles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutControllerRequirement_AreActiveJobTasksGrantable
    {
        static constexpr std::string_view Name = "SproutControllerRequirement_AreActiveJobTasksGrantable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct SproutControllerRequirement_HasInventorySpaceForHandheld
    {
        static constexpr std::string_view Name = "SproutControllerRequirement_HasInventorySpaceForHandheld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct SproutControllerRequirement_HasJobRewardTokens
    {
        static constexpr std::string_view Name = "SproutControllerRequirement_HasJobRewardTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenTag = 0x30;
            static constexpr std::uintptr_t RequiredTokenCount = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TokenTag", 0x30, "StructProperty"},
            {"RequiredTokenCount", 0x34, "IntProperty"},
        }};
    };

    struct SproutControllerRequirement_HasJobTaskAtState
    {
        static constexpr std::string_view Name = "SproutControllerRequirement_HasJobTaskAtState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t TaskIdentifier = 0x30;
            static constexpr std::uintptr_t JobTaskProgressionState = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TaskIdentifier", 0x30, "StructProperty"},
            {"JobTaskProgressionState", 0x34, "EnumProperty"},
        }};
    };

    struct SproutControllerRequirement_IsNPCJobTagPlayerAssignable
    {
        static constexpr std::string_view Name = "SproutControllerRequirement_IsNPCJobTagPlayerAssignable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct SproutConversationTaskNode_AssignJob
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_AssignJob";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoAssignUsingSpeakingNpcJob = 0x170;
            static constexpr std::uintptr_t JobTagToAssign = 0x174;
            static constexpr std::uintptr_t ParentJobTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoAssignUsingSpeakingNpcJob", 0x170, "BoolProperty"},
            {"JobTagToAssign", 0x174, "StructProperty"},
            {"ParentJobTags", 0x178, "StructProperty"},
        }};
    };

    struct SproutConversationTaskNode_ConsumeJobRewardTokens
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_ConsumeJobRewardTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t JobRewardTokensToConsume = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JobRewardTokensToConsume", 0x170, "MapProperty"},
        }};
    };

    struct SproutConversationTaskNode_GrantActiveJobTask
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_GrantActiveJobTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bGrantRandomTask = 0x170;
            static constexpr std::uintptr_t JobTaskToGrantIdentifier = 0x174;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bGrantRandomTask", 0x170, "BoolProperty"},
            {"JobTaskToGrantIdentifier", 0x174, "StructProperty"},
        }};
    };

    struct SproutConversationTaskNode_GrantLootBundle
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_GrantLootBundle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t LootBundleIdentifier = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LootBundleIdentifier", 0x170, "StructProperty"},
        }};
    };

    struct SproutConversationTaskNode_SellOrGiftHandheld
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_SellOrGiftHandheld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t bGiftSetup = 0x190;
            static constexpr std::uintptr_t GiftTextFormat = 0x198;
            static constexpr std::uintptr_t SellTextFormat = 0x1A8;
            static constexpr std::uintptr_t SellingDataTable = 0x1B8;
            static constexpr std::uintptr_t PossibleChoicesCounts = 0x1E8;
            static constexpr std::uintptr_t GiftCTATags = 0x1F8;
            static constexpr std::uintptr_t ContextualAnimScene = 0x218;
            static constexpr std::uintptr_t ContextualAnimAbilityTag = 0x220;
            static constexpr std::uintptr_t bGrantRewardAfterCAS = 0x224;
            static constexpr std::uintptr_t bSendItemGivenVerb = 0x225;
            static constexpr std::uintptr_t bSendItemGivenVerbBeforeCompletion = 0x226;
            static constexpr std::uintptr_t ItemGivenExtraTags = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bGiftSetup", 0x190, "BoolProperty"},
            {"GiftTextFormat", 0x198, "TextProperty"},
            {"SellTextFormat", 0x1A8, "TextProperty"},
            {"SellingDataTable", 0x1B8, "StructProperty"},
            {"PossibleChoicesCounts", 0x1E8, "ArrayProperty"},
            {"GiftCTATags", 0x1F8, "StructProperty"},
            {"ContextualAnimScene", 0x218, "ObjectProperty"},
            {"ContextualAnimAbilityTag", 0x220, "StructProperty"},
            {"bGrantRewardAfterCAS", 0x224, "BoolProperty"},
            {"bSendItemGivenVerb", 0x225, "BoolProperty"},
            {"bSendItemGivenVerbBeforeCompletion", 0x226, "BoolProperty"},
            {"ItemGivenExtraTags", 0x228, "StructProperty"},
        }};
    };

    struct SproutConversationTaskNode_SetPersistentEventData
    {
        static constexpr std::string_view Name = "SproutConversationTaskNode_SetPersistentEventData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EventKey = 0x170;
            static constexpr std::uintptr_t DataType = 0x174;
            static constexpr std::uintptr_t IntModificationType = 0x175;
            static constexpr std::uintptr_t IntModificationAmount = 0x178;
            static constexpr std::uintptr_t BoolModificationValue = 0x17C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EventKey", 0x170, "StructProperty"},
            {"DataType", 0x174, "EnumProperty"},
            {"IntModificationType", 0x175, "EnumProperty"},
            {"IntModificationAmount", 0x178, "IntProperty"},
            {"BoolModificationValue", 0x17C, "BoolProperty"},
        }};
    };

    struct SproutCoreBuildingItemDefinition
    {
        static constexpr std::string_view Name = "SproutCoreBuildingItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuilderToolItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x98;
            static constexpr std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
            static constexpr std::uintptr_t bShouldDisplayQuantity = 0x9A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemType", 0x98, "EnumProperty"},
            {"PrimaryAssetIdItemTypeOverride", 0x99, "EnumProperty"},
            {"bShouldDisplayQuantity", 0x9A, "BoolProperty"},
        }};
    };

    struct SproutDynamicRelevancyComponent
    {
        static constexpr std::string_view Name = "SproutDynamicRelevancyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNDynamicRelevancyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CullDistanceJobVolume = 0x188;
            static constexpr std::uintptr_t RequiredJobLocationTagQuery = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CullDistanceJobVolume", 0x188, "StructProperty"},
            {"RequiredJobLocationTagQuery", 0x1B0, "StructProperty"},
        }};
    };

    struct SproutEndSessionAnalytics
    {
        static constexpr std::string_view Name = "SproutEndSessionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutEventManager
    {
        static constexpr std::string_view Name = "SproutEventManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SproutEventsRegistryType = 0xC0;
            static constexpr std::uintptr_t EventArray = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SproutEventsRegistryType", 0xC0, "NameProperty"},
            {"EventArray", 0xE8, "StructProperty"},
        }};
    };

    struct SproutEventRouterLibrary
    {
        static constexpr std::string_view Name = "SproutEventRouterLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutFilteredEventContextCollector
    {
        static constexpr std::string_view Name = "SproutFilteredEventContextCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FilteredEventContextCollectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutGameFeatureAction_AddSproutAnalytics
    {
        static constexpr std::string_view Name = "SproutGameFeatureAction_AddSproutAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutGameStateComponent
    {
        static constexpr std::string_view Name = "SproutGameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisabledItems = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisabledItems", 0xC0, "ArrayProperty"},
        }};
    };

    struct SproutGameStateComponent_CinematicsRelevency
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_CinematicsRelevency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CinematicReleventTrackedClassesRegistry = 0xC0;
            static constexpr std::uintptr_t TrackedClassesArray = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CinematicReleventTrackedClassesRegistry", 0xC0, "StructProperty"},
            {"TrackedClassesArray", 0xC8, "ArrayProperty"},
        }};
    };

    struct SproutGameStateComponent_CommunicationOverride
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_CommunicationOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_CommunicationOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBubbleChatSettingsUpdated = 0xC0;
            static constexpr std::uintptr_t TextChatSetting = 0xE8;
            static constexpr std::uintptr_t TextChatWholeWorldSetting = 0x110;
            static constexpr std::uintptr_t BubbleChatSettings = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnBubbleChatSettingsUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"TextChatSetting", 0xE8, "StructProperty"},
            {"TextChatWholeWorldSetting", 0x110, "StructProperty"},
            {"BubbleChatSettings", 0x138, "StructProperty"},
        }};
    };

    struct SproutGameStateComponent_DollHouse
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_DollHouse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePossibleConfiguration = 0xC0;
            static constexpr std::uintptr_t DebugSpawner = 0xF0;
            static constexpr std::uintptr_t TemporarySaveDataPerPlayer = 0x110;
            static constexpr std::uintptr_t ReplicatedDigestedPossibleOptions = 0x120;
            static constexpr std::uintptr_t bIsPersistentStateInitialized = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BasePossibleConfiguration", 0xC0, "StructProperty"},
            {"DebugSpawner", 0xF0, "SoftClassProperty"},
            {"TemporarySaveDataPerPlayer", 0x110, "ArrayProperty"},
            {"ReplicatedDigestedPossibleOptions", 0x120, "StructProperty"},
            {"bIsPersistentStateInitialized", 0x240, "BoolProperty"},
        }};
    };

    struct SproutGameStateComponent_NeighborhoodHousing
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_NeighborhoodHousing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNeighborhoodHousingSlotsUpdated = 0xD8;
            static constexpr std::uintptr_t OnNeighborhoodHousingSaveSlotPurchaseApproved = 0xE8;
            static constexpr std::uintptr_t OnNeighborhoodHousingSaveSlotDeleteApproved = 0xF8;
            static constexpr std::uintptr_t HousingSlots = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnNeighborhoodHousingSlotsUpdated", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnNeighborhoodHousingSaveSlotPurchaseApproved", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnNeighborhoodHousingSaveSlotDeleteApproved", 0xF8, "MulticastInlineDelegateProperty"},
            {"HousingSlots", 0x138, "ArrayProperty"},
        }};
    };

    struct SproutGameStateComponent_NeighborhoodManager
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_NeighborhoodManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSproutNeighborhoodMembershipChanged = 0xC0;
            static constexpr std::uintptr_t MaxNeighborhoodMembers = 0x118;
            static constexpr std::uintptr_t MemberList = 0x140;
            static constexpr std::uintptr_t NeighborhoodId = 0x150;
            static constexpr std::uintptr_t CurrentDescription = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSproutNeighborhoodMembershipChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"MaxNeighborhoodMembers", 0x118, "StructProperty"},
            {"MemberList", 0x140, "ArrayProperty"},
            {"NeighborhoodId", 0x150, "StructProperty"},
            {"CurrentDescription", 0x160, "StructProperty"},
        }};
    };

    struct SproutGameStateComponent_NeighborhoodThemes
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_NeighborhoodThemes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSproutNeighborhoodThemeChanged = 0xC0;
            static constexpr std::uintptr_t ThemeRegistryType = 0xD0;
            static constexpr std::uintptr_t ActiveTheme = 0xD4;
            static constexpr std::uintptr_t ActiveDataLayers = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnSproutNeighborhoodThemeChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"ThemeRegistryType", 0xD0, "StructProperty"},
            {"ActiveTheme", 0xD4, "StructProperty"},
            {"ActiveDataLayers", 0xD8, "ArrayProperty"},
        }};
    };

    struct SproutGameStateComponent_Notifications
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_Notifications";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
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

    struct SproutGameStateComponent_Requests
    {
        static constexpr std::string_view Name = "SproutGameStateComponent_Requests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PerCategoryRequestsDataRegistryType = 0xC0;
            static constexpr std::uintptr_t PerCategoryRequestsDataDigested = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PerCategoryRequestsDataRegistryType", 0xC0, "MapProperty"},
            {"PerCategoryRequestsDataDigested", 0xD0, "ArrayProperty"},
        }};
    };

    struct SproutGrantPoseEmoteControllerComponent
    {
        static constexpr std::string_view Name = "SproutGrantPoseEmoteControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EmotesToGrant = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmotesToGrant", 0xC8, "ArrayProperty"},
        }};
    };

    struct SproutHousingGameplayVolume
    {
        static constexpr std::string_view Name = "SproutHousingGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHouseOwnerChanged = 0x350;
            static constexpr std::uintptr_t OnHousingShellStreamedIn = 0x360;
            static constexpr std::uintptr_t OnDecorCountChanged = 0x370;
            static constexpr std::uintptr_t PlayerStartType = 0x380;
            static constexpr std::uintptr_t MainLevel_GridName = 0x384;
            static constexpr std::uintptr_t HLODLevel_GridName = 0x388;
            static constexpr std::uintptr_t LevelStreamingPriority = 0x38C;
            static constexpr std::uintptr_t bForceClusterNetFilter = 0x390;
            static constexpr std::uintptr_t OwnershipPriceTag = 0x394;
            static constexpr std::uintptr_t LotOwnershipInfo = 0x398;
            static constexpr std::uintptr_t TrackedShellActors = 0x3E0;
            static constexpr std::uintptr_t RegisteredLevel = 0x470;
            static constexpr std::uintptr_t BuildLocation = 0x481;
            static constexpr std::uintptr_t MaxDecorCount = 0x518;
            static constexpr std::uintptr_t CurrentDecorCount = 0x540;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x560;
            static constexpr std::uintptr_t UnoccupiedHousingMarker = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"OnHouseOwnerChanged", 0x350, "MulticastInlineDelegateProperty"},
            {"OnHousingShellStreamedIn", 0x360, "MulticastInlineDelegateProperty"},
            {"OnDecorCountChanged", 0x370, "MulticastInlineDelegateProperty"},
            {"PlayerStartType", 0x380, "EnumProperty"},
            {"MainLevel_GridName", 0x384, "NameProperty"},
            {"HLODLevel_GridName", 0x388, "NameProperty"},
            {"LevelStreamingPriority", 0x38C, "IntProperty"},
            {"bForceClusterNetFilter", 0x390, "BoolProperty"},
            {"OwnershipPriceTag", 0x394, "StructProperty"},
            {"LotOwnershipInfo", 0x398, "StructProperty"},
            {"TrackedShellActors", 0x3E0, "ArrayProperty"},
            {"RegisteredLevel", 0x470, "StructProperty"},
            {"BuildLocation", 0x481, "EnumProperty"},
            {"MaxDecorCount", 0x518, "StructProperty"},
            {"CurrentDecorCount", 0x540, "IntProperty"},
            {"WaitForEventRouterAction", 0x560, "ObjectProperty"},
            {"UnoccupiedHousingMarker", 0x568, "StructProperty"},
        }};
    };

    struct SproutHousingISM
    {
        static constexpr std::string_view Name = "SproutHousingISM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNWorldPartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldBeGridAligned = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShouldBeGridAligned", 0x3C0, "BoolProperty"},
        }};
    };

    struct SproutHousingItemDefinition
    {
        static constexpr std::string_view Name = "SproutHousingItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWorldItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t HousingShellLevel = 0xA8;
            static constexpr std::uintptr_t HousingShellLevelHLOD = 0xC8;
            static constexpr std::uintptr_t OffsetTransform = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HousingShellLevel", 0xA8, "SoftObjectProperty"},
            {"HousingShellLevelHLOD", 0xC8, "SoftObjectProperty"},
            {"OffsetTransform", 0xF0, "StructProperty"},
        }};
    };

    struct SproutHousingPlayspace
    {
        static constexpr std::string_view Name = "SproutHousingPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserAdded = 0x538;
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserRemoved = 0x560;
            static constexpr std::uintptr_t InactivePlayspaceUsers = 0x588;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x600;
            static constexpr std::uintptr_t UserAcceptanceType = 0x603;
            static constexpr std::uintptr_t MatchmakingSettings = 0x608;
            static constexpr std::uintptr_t ReplicatedStateClass = 0x630;
            static constexpr std::uintptr_t ReplicatedState = 0x638;
            static constexpr std::uintptr_t EventRouter = 0x640;
            static constexpr std::uintptr_t bShouldCreateEventRouter = 0x648;
            static constexpr std::uintptr_t InactivePendingUsers = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"NotifyInactivePlayspaceUserAdded", 0x538, "MulticastInlineDelegateProperty"},
            {"NotifyInactivePlayspaceUserRemoved", 0x560, "MulticastInlineDelegateProperty"},
            {"InactivePlayspaceUsers", 0x588, "StructProperty"},
            {"bSubscribeToMeshNetwork", 0x600, "BoolProperty"},
            {"UserAcceptanceType", 0x603, "EnumProperty"},
            {"MatchmakingSettings", 0x608, "StructProperty"},
            {"ReplicatedStateClass", 0x630, "ClassProperty"},
            {"ReplicatedState", 0x638, "ObjectProperty"},
            {"EventRouter", 0x640, "ObjectProperty"},
            {"bShouldCreateEventRouter", 0x648, "BoolProperty"},
            {"InactivePendingUsers", 0x650, "ArrayProperty"},
        }};
    };

    struct SproutInstancedActorsSubsystem
    {
        static constexpr std::string_view Name = "SproutInstancedActorsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectSettings = 0x68;
            static constexpr std::uintptr_t DataRegistrySubsystem = 0x70;
            static constexpr std::uintptr_t ActorPartitionSubsystem = 0x78;
            static constexpr std::uintptr_t InstancedActorsManagerClass = 0x80;
            static constexpr std::uintptr_t ExemplarActorWorld = 0x250;
            static constexpr std::uintptr_t SettingsType = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectSettings", 0x68, "ObjectProperty"},
            {"DataRegistrySubsystem", 0x70, "ObjectProperty"},
            {"ActorPartitionSubsystem", 0x78, "ObjectProperty"},
            {"InstancedActorsManagerClass", 0x80, "ClassProperty"},
            {"ExemplarActorWorld", 0x250, "ObjectProperty"},
            {"SettingsType", 0x268, "ObjectProperty"},
        }};
    };

    struct SproutInteriorVolume
    {
        static constexpr std::string_view Name = "SproutInteriorVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableInteriorStreaming = 0x350;
            static constexpr std::uintptr_t EnableEntranceVolume = 0x351;
            static constexpr std::uintptr_t EntranceVolumes = 0x358;
            static constexpr std::uintptr_t StreamingSourceLocation = 0x368;
            static constexpr std::uintptr_t GameplayTags = 0x380;
            static constexpr std::uintptr_t LocationTag = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EnableInteriorStreaming", 0x350, "BoolProperty"},
            {"EnableEntranceVolume", 0x351, "BoolProperty"},
            {"EntranceVolumes", 0x358, "ArrayProperty"},
            {"StreamingSourceLocation", 0x368, "StructProperty"},
            {"GameplayTags", 0x380, "StructProperty"},
            {"LocationTag", 0x3A0, "StructProperty"},
        }};
    };

    struct SproutInteriorVolumeLoader
    {
        static constexpr std::string_view Name = "SproutInteriorVolumeLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t RootSceneComponent = 0x340;
            static constexpr std::uintptr_t EntranceBoxComponent = 0x348;
            static constexpr std::uintptr_t EntranceOverlapComponent = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RootSceneComponent", 0x340, "ObjectProperty"},
            {"EntranceBoxComponent", 0x348, "ObjectProperty"},
            {"EntranceOverlapComponent", 0x350, "ObjectProperty"},
        }};
    };

    struct SproutInventoryManagerComponent
    {
        static constexpr std::string_view Name = "SproutInventoryManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInventoryManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryHandles = 0xC0;
            static constexpr std::uintptr_t InventoryInstances = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventoryHandles", 0xC0, "ArrayProperty"},
            {"InventoryInstances", 0xD0, "ArrayProperty"},
        }};
    };

    struct SproutItemExchangeAudioComponent
    {
        static constexpr std::string_view Name = "SproutItemExchangeAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PickupSoundsToLoad = 0xC0;
            static constexpr std::uintptr_t LoadedPickupSounds = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PickupSoundsToLoad", 0xC0, "ArrayProperty"},
            {"LoadedPickupSounds", 0xD0, "ArrayProperty"},
        }};
    };

    struct SproutJobTrackerComponent
    {
        static constexpr std::string_view Name = "SproutJobTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ToleranceForMovementUpdates = 0xC0;
            static constexpr std::uintptr_t EnclosingJobVolume = 0x110;
            static constexpr std::uintptr_t LastReceivedJobVolumeOnClient = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ToleranceForMovementUpdates", 0xC0, "StructProperty"},
            {"EnclosingJobVolume", 0x110, "WeakObjectProperty"},
            {"LastReceivedJobVolumeOnClient", 0x118, "WeakObjectProperty"},
        }};
    };

    struct SproutJobVolume
    {
        static constexpr std::string_view Name = "SproutJobVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedJobTags = 0x280;
            static constexpr std::uintptr_t LocationTags = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssociatedJobTags", 0x280, "StructProperty"},
            {"LocationTags", 0x2A0, "StructProperty"},
        }};
    };

    struct SproutJobWorkerStateComponent
    {
        static constexpr std::string_view Name = "SproutJobWorkerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentJobTags = 0xC0;
            static constexpr std::uintptr_t CurrentJobTask = 0xE0;
            static constexpr std::uintptr_t bIsJobTaskCooldownActive = 0x1D0;
            static constexpr std::uintptr_t TrendingJobFirstTimeCompletionTracker = 0x1E8;
            static constexpr std::uintptr_t bHasCompletedActiveTask = 0x1F8;
            static constexpr std::uintptr_t BoostedJobsCopy = 0x200;
            static constexpr std::uintptr_t JobProgressionArray = 0x220;
            static constexpr std::uintptr_t JobRewardTokens = 0x2C8;
            static constexpr std::uintptr_t JobRewardTokenCap = 0x2D8;
            static constexpr std::uintptr_t bIsPersistentStateInitialized = 0x300;
            static constexpr std::uintptr_t OnWorkerPersistentStateInitialized = 0x310;
            static constexpr std::uintptr_t OnWorkerJobTagsChanged = 0x320;
            static constexpr std::uintptr_t OnWorkerJobExperienceChanged = 0x330;
            static constexpr std::uintptr_t OnWorkerJobLevelChanged = 0x340;
            static constexpr std::uintptr_t OnWorkerJobTaskChanged = 0x350;
            static constexpr std::uintptr_t OnWorkerJobTaskCompleted = 0x360;
            static constexpr std::uintptr_t OnWorkerJobTaskCooldownStateChanged = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"CurrentJobTags", 0xC0, "StructProperty"},
            {"CurrentJobTask", 0xE0, "StructProperty"},
            {"bIsJobTaskCooldownActive", 0x1D0, "BoolProperty"},
            {"TrendingJobFirstTimeCompletionTracker", 0x1E8, "MapProperty"},
            {"bHasCompletedActiveTask", 0x1F8, "BoolProperty"},
            {"BoostedJobsCopy", 0x200, "StructProperty"},
            {"JobProgressionArray", 0x220, "StructProperty"},
            {"JobRewardTokens", 0x2C8, "MapProperty"},
            {"JobRewardTokenCap", 0x2D8, "StructProperty"},
            {"bIsPersistentStateInitialized", 0x300, "BoolProperty"},
            {"OnWorkerPersistentStateInitialized", 0x310, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobTagsChanged", 0x320, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobExperienceChanged", 0x330, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobLevelChanged", 0x340, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobTaskChanged", 0x350, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobTaskCompleted", 0x360, "MulticastInlineDelegateProperty"},
            {"OnWorkerJobTaskCooldownStateChanged", 0x370, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutNPCPawnComponent
    {
        static constexpr std::string_view Name = "SproutNPCPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultJobs = 0xC0;
            static constexpr std::uintptr_t AdditionalJobs = 0xE0;
            static constexpr std::uintptr_t bEnableAutomaticJobsAssignment = 0x100;
            static constexpr std::uintptr_t ExcludedJobsFromAutomaticAssignment = 0x108;
            static constexpr std::uintptr_t bAutomaticallyAssignToLeashVolumeOnSpawn = 0x128;
            static constexpr std::uintptr_t bAutomaticallyAssignToHousingGameplayVolumeOnSpawn = 0x129;
            static constexpr std::uintptr_t GenderToTagMap = 0x130;
            static constexpr std::uintptr_t FollowerTraitTag = 0x140;
            static constexpr std::uintptr_t DollHouseData = 0x148;
            static constexpr std::uintptr_t SpeechProvider = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DefaultJobs", 0xC0, "StructProperty"},
            {"AdditionalJobs", 0xE0, "StructProperty"},
            {"bEnableAutomaticJobsAssignment", 0x100, "BoolProperty"},
            {"ExcludedJobsFromAutomaticAssignment", 0x108, "StructProperty"},
            {"bAutomaticallyAssignToLeashVolumeOnSpawn", 0x128, "BoolProperty"},
            {"bAutomaticallyAssignToHousingGameplayVolumeOnSpawn", 0x129, "BoolProperty"},
            {"GenderToTagMap", 0x130, "MapProperty"},
            {"FollowerTraitTag", 0x140, "StructProperty"},
            {"DollHouseData", 0x148, "StructProperty"},
            {"SpeechProvider", 0x208, "ObjectProperty"},
        }};
    };

    struct SproutNeighborhoodHousingPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutNeighborhoodHousingPersistenceFeatureModule";
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

    struct SproutNeighborhoodManagerPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutNeighborhoodManagerPersistenceFeatureModule";
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

    struct SproutNeighborhoodPersistenceComponent
    {
        static constexpr std::string_view Name = "SproutNeighborhoodPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveSaveID = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveSaveID", 0x118, "StructProperty"},
        }};
    };

    struct SproutNeighborhoodPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "SproutNeighborhoodPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutPlayerSpawningComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PriorityHouseSpawnPointQueue = 0xD0;
            static constexpr std::uintptr_t FullHouseSpawnPointQueue = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PriorityHouseSpawnPointQueue", 0xD0, "ArrayProperty"},
            {"FullHouseSpawnPointQueue", 0xE8, "ArrayProperty"},
        }};
    };

    struct SproutNeighborhoodThemePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutNeighborhoodThemePersistenceFeatureModule";
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

    struct SproutObjectiveProcessor_FailedRequest
    {
        static constexpr std::string_view Name = "SproutObjectiveProcessor_FailedRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SproutObjectiveProcessor_FulfilledOtherRequest
    {
        static constexpr std::string_view Name = "SproutObjectiveProcessor_FulfilledOtherRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SproutObjectiveProcessor_ItemGiven
    {
        static constexpr std::string_view Name = "SproutObjectiveProcessor_ItemGiven";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SproutObjectiveProcessor_SelfRequestFulfilled
    {
        static constexpr std::string_view Name = "SproutObjectiveProcessor_SelfRequestFulfilled";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SproutObjectiveProcessor_SetRequest
    {
        static constexpr std::string_view Name = "SproutObjectiveProcessor_SetRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SproutOratorComponent
    {
        static constexpr std::string_view Name = "SproutOratorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNRedwoodOratorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueEventType = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogueEventType", 0x300, "ObjectProperty"},
        }};
    };

    struct SproutPawnComponent_AMSCopier
    {
        static constexpr std::string_view Name = "SproutPawnComponent_AMSCopier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CopyBehavior = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CopyBehavior", 0xC0, "EnumProperty"},
        }};
    };

    struct SproutPlayerCollectionsPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerCollectionsPersistenceFeatureModule";
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

    struct SproutPlayerComponent_Requests
    {
        static constexpr std::string_view Name = "SproutPlayerComponent_Requests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutActorComponent_Requests";
        struct Offsets
        {
            static constexpr std::uintptr_t UsedCategoryTag = 0xC0;
            static constexpr std::uintptr_t PerceptionConfiguration = 0xD0;
            static constexpr std::uintptr_t MaxDistanceFromAuthor = 0x190;
            static constexpr std::uintptr_t RewardsMultiplier = 0x1B8;
            static constexpr std::uintptr_t RunningRequest = 0x1C8;
            static constexpr std::uintptr_t LocalRequests = 0x1E0;
            static constexpr std::uintptr_t OnSetRunningRequestDelegate = 0x1F0;
            static constexpr std::uintptr_t OnFulfilledRequestDelegate = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UsedCategoryTag", 0xC0, "StructProperty"},
            {"PerceptionConfiguration", 0xD0, "StructProperty"},
            {"MaxDistanceFromAuthor", 0x190, "StructProperty"},
            {"RewardsMultiplier", 0x1B8, "ArrayProperty"},
            {"RunningRequest", 0x1C8, "StructProperty"},
            {"LocalRequests", 0x1E0, "ArrayProperty"},
            {"OnSetRunningRequestDelegate", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnFulfilledRequestDelegate", 0x200, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutPlayerControllerComponent_DollHouse
    {
        static constexpr std::string_view Name = "SproutPlayerControllerComponent_DollHouse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct SproutPlayerDollHousePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerDollHousePersistenceFeatureModule";
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

    struct SproutPlayerEventsPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerEventsPersistenceFeatureModule";
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

    struct SproutPlayerHousingPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerHousingPersistenceFeatureModule";
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

    struct SproutPlayerInventoryComponent
    {
        static constexpr std::string_view Name = "SproutPlayerInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerInventoryComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstTimeInventoryRegistryType = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FirstTimeInventoryRegistryType", 0x3A0, "StructProperty"},
        }};
    };

    struct SproutPlayerInventoryOverflowPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerInventoryOverflowPersistenceFeatureModule";
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

    struct SproutPlayerInventoryPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerInventoryPersistenceFeatureModule";
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

    struct SproutPlayerInventorySourceComponent
    {
        static constexpr std::string_view Name = "SproutPlayerInventorySourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Inventory = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Inventory", 0x138, "WeakObjectProperty"},
        }};
    };

    struct SproutPlayerItemTransactionComponent
    {
        static constexpr std::string_view Name = "SproutPlayerItemTransactionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemTransactionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransactionComplete = 0xC0;
            static constexpr std::uintptr_t TransactionData = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTransactionComplete", 0xC0, "MulticastInlineDelegateProperty"},
            {"TransactionData", 0xD0, "StructProperty"},
        }};
    };

    struct SproutPlayerJobProgressionPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerJobProgressionPersistenceFeatureModule";
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

    struct SproutPlayerNeighborhoodPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerNeighborhoodPersistenceFeatureModule";
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

    struct SproutPlayerPersistedUnlocksPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerPersistedUnlocksPersistenceFeatureModule";
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

    struct SproutPlayerRoommatesPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerRoommatesPersistenceFeatureModule";
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

    struct SproutPlayerSanctionedPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerSanctionedPersistenceFeatureModule";
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

    struct SproutPlayerSessionPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerSessionPersistenceFeatureModule";
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

    struct SproutPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "SproutPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t PriorityHouseSpawnPointQueue = 0xD0;
            static constexpr std::uintptr_t FullHouseSpawnPointQueue = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PriorityHouseSpawnPointQueue", 0xD0, "ArrayProperty"},
            {"FullHouseSpawnPointQueue", 0xE8, "ArrayProperty"},
        }};
    };

    struct SproutPlayerStateComp_Neighborhood
    {
        static constexpr std::string_view Name = "SproutPlayerStateComp_Neighborhood";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHomeNeighborhoodIdChanged = 0xC0;
            static constexpr std::uintptr_t HomeNeighborhoodId = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnHomeNeighborhoodIdChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"HomeNeighborhoodId", 0xD0, "StructProperty"},
        }};
    };

    struct SproutPlayerStateComponent_Bounties
    {
        static constexpr std::string_view Name = "SproutPlayerStateComponent_Bounties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDailyBountiesChanged = 0xC0;
            static constexpr std::uintptr_t OnEventBountiesChanged = 0xD0;
            static constexpr std::uintptr_t OnClaimableBountiesChanged = 0xE0;
            static constexpr std::uintptr_t CurrentDailyBounties = 0xF0;
            static constexpr std::uintptr_t CurrentEventBounties = 0x120;
            static constexpr std::uintptr_t ClaimableBounties = 0x150;
            static constexpr std::uintptr_t PinnedBountyID = 0x170;
            static constexpr std::uintptr_t BountyBoardConfig = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnDailyBountiesChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnEventBountiesChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnClaimableBountiesChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"CurrentDailyBounties", 0xF0, "ArrayProperty"},
            {"CurrentEventBounties", 0x120, "ArrayProperty"},
            {"ClaimableBounties", 0x150, "StructProperty"},
            {"PinnedBountyID", 0x170, "StructProperty"},
            {"BountyBoardConfig", 0x178, "StructProperty"},
        }};
    };

    struct SproutPlayerStateComponent_Notifications
    {
        static constexpr std::string_view Name = "SproutPlayerStateComponent_Notifications";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
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

    struct SproutPlayerUGCUsersPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "SproutPlayerUGCUsersPersistenceFeatureModule";
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

    struct SproutPlayspaceComponent_PersistedUnlocksManager
    {
        static constexpr std::string_view Name = "SproutPlayspaceComponent_PersistedUnlocksManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistedUnlockItemsRegistryType = 0x118;
            static constexpr std::uintptr_t CachedPersistedUnlockItems = 0x120;
            static constexpr std::uintptr_t OnSproutPersistedUnlocksManagerReady = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PersistedUnlockItemsRegistryType", 0x118, "StructProperty"},
            {"CachedPersistedUnlockItems", 0x120, "MapProperty"},
            {"OnSproutPersistedUnlocksManagerReady", 0x138, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SproutPlayspaceItemTransactionComponent
    {
        static constexpr std::string_view Name = "SproutPlayspaceItemTransactionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemTransactionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShoppingAppData = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShoppingAppData", 0x100, "StructProperty"},
        }};
    };

    struct SproutRedwoodBlueprintLibrary
    {
        static constexpr std::string_view Name = "SproutRedwoodBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutRedwoodManagerComponent
    {
        static constexpr std::string_view Name = "SproutRedwoodManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNRedwoodManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurations = 0xC0;
            static constexpr std::uintptr_t ManagerConfiguration = 0xF0;
            static constexpr std::uintptr_t RunningRequests = 0x128;
            static constexpr std::uintptr_t RunningDirectUtterances = 0x138;
            static constexpr std::uintptr_t DigestedConfigurations = 0x148;
            static constexpr std::uintptr_t DigestedManagerConfiguration = 0x158;
            static constexpr std::uintptr_t OnRequestedOratorDialogueDelegate = 0x170;
            static constexpr std::uintptr_t TraitRequiredQueryForFeelingsChange = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Configurations", 0xC0, "StructProperty"},
            {"ManagerConfiguration", 0xF0, "StructProperty"},
            {"RunningRequests", 0x128, "ArrayProperty"},
            {"RunningDirectUtterances", 0x138, "ArrayProperty"},
            {"DigestedConfigurations", 0x148, "ArrayProperty"},
            {"DigestedManagerConfiguration", 0x158, "OptionalProperty"},
            {"OnRequestedOratorDialogueDelegate", 0x170, "MulticastInlineDelegateProperty"},
            {"TraitRequiredQueryForFeelingsChange", 0x180, "StructProperty"},
        }};
    };

    struct SproutRequestsWorldConditionSchema
    {
        static constexpr std::string_view Name = "SproutRequestsWorldConditionSchema";
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

    struct SproutRoommatesPersistenceComponent
    {
        static constexpr std::string_view Name = "SproutRoommatesPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct SproutServerInstancedActorSpawnerSubsystem
    {
        static constexpr std::string_view Name = "SproutServerInstancedActorSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoServerInstancedActorSpawnerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientActorBeingSpawned = 0xE0;
            static constexpr std::uintptr_t TransientActorSpawningInstance = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransientActorBeingSpawned", 0xE0, "ObjectProperty"},
            {"TransientActorSpawningInstance", 0xE8, "StructProperty"},
        }};
    };

    struct SproutSmartObjectComponent_Requests
    {
        static constexpr std::string_view Name = "SproutSmartObjectComponent_Requests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutActorComponent_AutomaticRequests";
        struct Offsets
        {
            static constexpr std::uintptr_t MinCooldownOnFulfil = 0x210;
            static constexpr std::uintptr_t MaxCooldownOnFulfil = 0x238;
            static constexpr std::uintptr_t MinTimeToFail = 0x260;
            static constexpr std::uintptr_t MaxTimeToFail = 0x288;
            static constexpr std::uintptr_t MinCooldownOnFail = 0x2B0;
            static constexpr std::uintptr_t MaxCooldownOnFail = 0x2D8;
            static constexpr std::uintptr_t WeightMultiplierOnLastPickedRequest = 0x300;
            static constexpr std::uintptr_t ConditionalRerollPercentages = 0x328;
            static constexpr std::uintptr_t MinRerollCooldown = 0x338;
            static constexpr std::uintptr_t MaxRerollCooldown = 0x360;
            static constexpr std::uintptr_t bCanRollOutsideJobVolume = 0x388;
            static constexpr std::uintptr_t OnFailedRequestDelegate = 0x390;
            static constexpr std::uintptr_t LastAutomaticallyPickedRequest = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MinCooldownOnFulfil", 0x210, "StructProperty"},
            {"MaxCooldownOnFulfil", 0x238, "StructProperty"},
            {"MinTimeToFail", 0x260, "StructProperty"},
            {"MaxTimeToFail", 0x288, "StructProperty"},
            {"MinCooldownOnFail", 0x2B0, "StructProperty"},
            {"MaxCooldownOnFail", 0x2D8, "StructProperty"},
            {"WeightMultiplierOnLastPickedRequest", 0x300, "StructProperty"},
            {"ConditionalRerollPercentages", 0x328, "ArrayProperty"},
            {"MinRerollCooldown", 0x338, "StructProperty"},
            {"MaxRerollCooldown", 0x360, "StructProperty"},
            {"bCanRollOutsideJobVolume", 0x388, "BoolProperty"},
            {"OnFailedRequestDelegate", 0x390, "MulticastInlineDelegateProperty"},
            {"LastAutomaticallyPickedRequest", 0x3A0, "StructProperty"},
        }};
    };

    struct SproutWorldPartitionActorDescMutatorConfig
    {
        static constexpr std::string_view Name = "SproutWorldPartitionActorDescMutatorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWorldPartitionActorDescMutatorConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutWorldPartitionActorDescMutatorRuleVolume
    {
        static constexpr std::string_view Name = "SproutWorldPartitionActorDescMutatorRuleVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWorldPartitionActorDescMutatorRule";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
