#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteQuest
{
    struct FortCheatManager_Quests
    {
        static constexpr std::string_view Name = "FortCheatManager_Quests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameFrameworkComponent_MatchStats
    {
        static constexpr std::string_view Name = "FortGameFrameworkComponent_MatchStats";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMatchStatsUpdated = 0xC0;
            static constexpr std::uintptr_t OnClientMatchStatUpdate = 0xD0;
            static constexpr std::uintptr_t ReplicatedMatchStats = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnMatchStatsUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnClientMatchStatUpdate", 0xD0, "MulticastInlineDelegateProperty"},
            {"ReplicatedMatchStats", 0xE0, "StructProperty"},
        }};
    };

    struct FortGameStateComponent_MilestoneQuests
    {
        static constexpr std::string_view Name = "FortGameStateComponent_MilestoneQuests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRegistryType_SeasonalMilestoneQuests = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataRegistryType_SeasonalMilestoneQuests", 0xD8, "StructProperty"},
        }};
    };

    struct FortPlayerStateComponent_MilestoneQuests
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_MilestoneQuests";
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

    struct FortQuestDefinitionComponent_Accolade
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_Accolade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_Conditionals
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_Conditionals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_InitialProgress
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_InitialProgress";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_MilestoneQuest
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_MilestoneQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent_ProductCompatibilityInjector";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent_ProductCompatibilityInjector";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestItemComponent_Accolade
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_Accolade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct FortQuestItemComponent_Conditionals
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_Conditionals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct FortQuestItemComponent_InitialProgress
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_InitialProgress";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct FortQuestItemComponent_MilestoneQuest
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_MilestoneQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct FortQuestManagerVolume
    {
        static constexpr std::string_view Name = "FortQuestManagerVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOverlapTrackingVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestsToGrantOnStart = 0x3B0;
            static constexpr std::uintptr_t ReactionComponent = 0x3C0;
            static constexpr std::uintptr_t VolumeParticipants = 0x3C8;
            static constexpr std::uintptr_t PendingUsers = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"QuestsToGrantOnStart", 0x3B0, "ArrayProperty"},
            {"ReactionComponent", 0x3C0, "ObjectProperty"},
            {"VolumeParticipants", 0x3C8, "StructProperty"},
            {"PendingUsers", 0x440, "ArrayProperty"},
        }};
    };

    struct FortQuestVolumeComponent_QueuedReactions
    {
        static constexpr std::string_view Name = "FortQuestVolumeComponent_QueuedReactions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFrameworkComponent_QueuedReactionsManager";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTimeReactionStillRelevant = 0x1B0;
            static constexpr std::uintptr_t ReactionPriorityQueue = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultTimeReactionStillRelevant", 0x1B0, "StructProperty"},
            {"ReactionPriorityQueue", 0x1D8, "ArrayProperty"},
        }};
    };

    struct FortReactionGrantVolume
    {
        static constexpr std::string_view Name = "FortReactionGrantVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapComponent = 0x340;
            static constexpr std::uintptr_t ReactionsToGrantOnEnter = 0x348;
            static constexpr std::uintptr_t ReactionsToGrantOnExit = 0x358;
            static constexpr std::uintptr_t bUseQuestRequirement = 0x368;
            static constexpr std::uintptr_t bTriggerExitOnObjectiveCompletion = 0x369;
            static constexpr std::uintptr_t RequiredQuest = 0x370;
            static constexpr std::uintptr_t RequiredObjective = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OverlapComponent", 0x340, "ObjectProperty"},
            {"ReactionsToGrantOnEnter", 0x348, "ArrayProperty"},
            {"ReactionsToGrantOnExit", 0x358, "ArrayProperty"},
            {"bUseQuestRequirement", 0x368, "BoolProperty"},
            {"bTriggerExitOnObjectiveCompletion", 0x369, "BoolProperty"},
            {"RequiredQuest", 0x370, "SoftObjectProperty"},
            {"RequiredObjective", 0x390, "NameProperty"},
        }};
    };

    struct ProgressionTechDebugDrawManager
    {
        static constexpr std::string_view Name = "ProgressionTechDebugDrawManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
