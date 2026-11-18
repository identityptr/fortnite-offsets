#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HazelnutSpread_RivalsCoreRuntime
{
    struct FortControllerComponent_RivalsFaction
    {
        static constexpr std::string_view Name = "FortControllerComponent_RivalsFaction";
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

    struct FortGameFeatureAction_AddWorldPartitionContentForMilestone
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddWorldPartitionContentForMilestone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AddWorldPartitionContent";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredMilestone = 0x48;
            static constexpr std::uintptr_t bHasUnlocked = 0x4C;
            static constexpr std::uintptr_t ForceActivateCvar = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequiredMilestone", 0x48, "StructProperty"},
            {"bHasUnlocked", 0x4C, "BoolProperty"},
            {"ForceActivateCvar", 0x50, "StrProperty"},
        }};
    };

    struct FortGameFeatureAction_DataRegistrySourceAtMilestone
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_DataRegistrySourceAtMilestone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_DataRegistrySource";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredMilestone = 0x40;
            static constexpr std::uintptr_t bHasUnlocked = 0x44;
            static constexpr std::uintptr_t ForceRegisterCvar = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequiredMilestone", 0x40, "StructProperty"},
            {"bHasUnlocked", 0x44, "BoolProperty"},
            {"ForceRegisterCvar", 0x48, "StrProperty"},
        }};
    };

    struct FortGameStateComponent_RivalsFactionManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_RivalsFactionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FactionDataTable = 0xD0;
            static constexpr std::uintptr_t MilestoneDataTable = 0xD8;
            static constexpr std::uintptr_t ActDataTable = 0xE0;
            static constexpr std::uintptr_t GateDataTable = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FactionDataTable", 0xD0, "ObjectProperty"},
            {"MilestoneDataTable", 0xD8, "ObjectProperty"},
            {"ActDataTable", 0xE0, "ObjectProperty"},
            {"GateDataTable", 0xE8, "ObjectProperty"},
        }};
    };

    struct FortPlayerStateComponent_HazelnutSpreadPersistence
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_HazelnutSpreadPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent_SaveFrameworkPersistence";
        struct Offsets
        {
            static constexpr std::uintptr_t HF_AllowBotBountyTargets = 0x198;
            static constexpr std::uintptr_t HF_OptInByDefault = 0x1C0;
            static constexpr std::uintptr_t HF_NumRecentBountyResultsToStore = 0x1E8;
            static constexpr std::uintptr_t Gameplay_bIsActivated = 0x218;
            static constexpr std::uintptr_t Gameplay_NumBounties = 0x21C;
            static constexpr std::uintptr_t Gameplay_BountyCurrency = 0x220;
            static constexpr std::uintptr_t BountySuccessCustomVerb = 0x224;
            static constexpr std::uintptr_t BountyCurrencyItemDefinition = 0x228;
            static constexpr std::uintptr_t DuelRankQuestID = 0x230;
            static constexpr std::uintptr_t HF_CurrencyCap = 0x240;
            static constexpr std::uintptr_t HF_TicketValue = 0x268;
            static constexpr std::uintptr_t RivalryTicketToken = 0x290;
            static constexpr std::uintptr_t RivalryTicketWorldItem = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HF_AllowBotBountyTargets", 0x198, "StructProperty"},
            {"HF_OptInByDefault", 0x1C0, "StructProperty"},
            {"HF_NumRecentBountyResultsToStore", 0x1E8, "StructProperty"},
            {"Gameplay_bIsActivated", 0x218, "BoolProperty"},
            {"Gameplay_NumBounties", 0x21C, "IntProperty"},
            {"Gameplay_BountyCurrency", 0x220, "IntProperty"},
            {"BountySuccessCustomVerb", 0x224, "StructProperty"},
            {"BountyCurrencyItemDefinition", 0x228, "ObjectProperty"},
            {"DuelRankQuestID", 0x230, "StrProperty"},
            {"HF_CurrencyCap", 0x240, "StructProperty"},
            {"HF_TicketValue", 0x268, "StructProperty"},
            {"RivalryTicketToken", 0x290, "ObjectProperty"},
            {"RivalryTicketWorldItem", 0x298, "ObjectProperty"},
        }};
    };

    struct FortPlayerStateComponent_RivalsFaction
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_RivalsFaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerFaction = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerFaction", 0xC0, "NameProperty"},
        }};
    };

    struct HazelnutSpreadLeaderboardManager
    {
        static constexpr std::string_view Name = "HazelnutSpreadLeaderboardManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocalScoreRequestComplete = 0xC8;
            static constexpr std::uintptr_t OnFriendsScoreRequestComplete = 0xD8;
            static constexpr std::uintptr_t LocalPlayerScore = 0xE8;
            static constexpr std::uintptr_t FriendsListScores = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnLocalScoreRequestComplete", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnFriendsScoreRequestComplete", 0xD8, "MulticastInlineDelegateProperty"},
            {"LocalPlayerScore", 0xE8, "StructProperty"},
            {"FriendsListScores", 0x110, "ArrayProperty"},
        }};
    };

    struct RivalryGameFeatureAction_UnlockItemAtMilestone
    {
        static constexpr std::string_view Name = "RivalryGameFeatureAction_UnlockItemAtMilestone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureAction_AllowLootItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemToMilestoneEventMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemToMilestoneEventMap", 0x28, "ArrayProperty"},
        }};
    };

}
