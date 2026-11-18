#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayerAugmentsCodeRuntime
{
    struct AugmentFuctionLibrary
    {
        static constexpr std::string_view Name = "AugmentFuctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAIBotEvaluator_Augments
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Augments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t AugmentStatusKeyName = 0xA8;
            static constexpr std::uintptr_t AugmentItemKeyName = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AugmentStatusKeyName", 0xA8, "NameProperty"},
            {"AugmentItemKeyName", 0xAC, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_Augments
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Augments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t MinSelectionTime = 0x70;
            static constexpr std::uintptr_t MaxSelectionTime = 0x74;
            static constexpr std::uintptr_t AugmentStatusKeyName = 0x78;
            static constexpr std::uintptr_t AugmentItemKeyName = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinSelectionTime", 0x70, "FloatProperty"},
            {"MaxSelectionTime", 0x74, "FloatProperty"},
            {"AugmentStatusKeyName", 0x78, "NameProperty"},
            {"AugmentItemKeyName", 0x7C, "NameProperty"},
        }};
    };

    struct FortAugmentSelectionToolAbility
    {
        static constexpr std::string_view Name = "FortAugmentSelectionToolAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionInputComponent = 0xB40;
            static constexpr std::uintptr_t InputPriority = 0xB48;
            static constexpr std::uintptr_t NumChoices = 0xB70;
            static constexpr std::uintptr_t HighlightedChoiceIndex = 0xB74;
            static constexpr std::uintptr_t RerollHoldInputSeconds = 0xB98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SelectionInputComponent", 0xB40, "ObjectProperty"},
            {"InputPriority", 0xB48, "StructProperty"},
            {"NumChoices", 0xB70, "IntProperty"},
            {"HighlightedChoiceIndex", 0xB74, "IntProperty"},
            {"RerollHoldInputSeconds", 0xB98, "StructProperty"},
        }};
    };

    struct FortBattleRoyalePlayerAugmentSystem
    {
        static constexpr std::string_view Name = "FortBattleRoyalePlayerAugmentSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerGrantingStartedTimestamp = 0xC8;
            static constexpr std::uintptr_t OnMatchAugmentsResetEvent = 0xD0;
            static constexpr std::uintptr_t bEnableAugmentCollectionUnlocking = 0xE0;
            static constexpr std::uintptr_t NumRollsForUnlock = 0xF0;
            static constexpr std::uintptr_t EnableUnlocking = 0x118;
            static constexpr std::uintptr_t EnableBRAugmentSystem = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ServerGrantingStartedTimestamp", 0xC8, "FloatProperty"},
            {"OnMatchAugmentsResetEvent", 0xD0, "MulticastInlineDelegateProperty"},
            {"bEnableAugmentCollectionUnlocking", 0xE0, "BoolProperty"},
            {"NumRollsForUnlock", 0xF0, "StructProperty"},
            {"EnableUnlocking", 0x118, "StructProperty"},
            {"EnableBRAugmentSystem", 0x140, "StructProperty"},
        }};
    };

    struct FortCollectionDataEntryPlayerAugment
    {
        static constexpr std::string_view Name = "FortCollectionDataEntryPlayerAugment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionDataEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAugmentItemDefinition = 0x30;
            static constexpr std::uintptr_t AdditionalDescription = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerAugmentItemDefinition", 0x30, "ObjectProperty"},
            {"AdditionalDescription", 0x38, "TextProperty"},
        }};
    };

    struct FortCollectionDataPlayerAugment
    {
        static constexpr std::string_view Name = "FortCollectionDataPlayerAugment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionData";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x28, "ArrayProperty"},
        }};
    };

    struct FortContextualTutorial_MultipleAugmentsQueued
    {
        static constexpr std::string_view Name = "FortContextualTutorial_MultipleAugmentsQueued";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualTutorial";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakMarkerActor = 0xD8;
            static constexpr std::uintptr_t MarkerText = 0xE0;
            static constexpr std::uintptr_t MarkerHighlightComponent = 0xF0;
            static constexpr std::uintptr_t TutorialDefinition = 0xF8;
            static constexpr std::uintptr_t OwnerController = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakMarkerActor", 0xD8, "WeakObjectProperty"},
            {"MarkerText", 0xE0, "TextProperty"},
            {"MarkerHighlightComponent", 0xF0, "WeakObjectProperty"},
            {"TutorialDefinition", 0xF8, "ObjectProperty"},
            {"OwnerController", 0x108, "ObjectProperty"},
        }};
    };

    struct FortControllerComponent_AugmentDynamicRollPlayerComponent
    {
        static constexpr std::string_view Name = "FortControllerComponent_AugmentDynamicRollPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_DynamicRollPlayerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedManagerClass = 0xC8;
            static constexpr std::uintptr_t Enabled = 0xD0;
            static constexpr std::uintptr_t TableManager = 0xF8;
            static constexpr std::uintptr_t SeededRNG = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AssociatedManagerClass", 0xC8, "ClassProperty"},
            {"Enabled", 0xD0, "StructProperty"},
            {"TableManager", 0xF8, "ObjectProperty"},
            {"SeededRNG", 0x124, "StructProperty"},
        }};
    };

    struct FortControllerComponent_AugmentGrantingSystem
    {
        static constexpr std::string_view Name = "FortControllerComponent_AugmentGrantingSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCanSelectAugmentChanged = 0xC8;
            static constexpr std::uintptr_t OnSelectedAugmentForGrant = 0xD8;
            static constexpr std::uintptr_t OnAvailableAugmentsForGrantingUpdated = 0xE8;
            static constexpr std::uintptr_t OnAuthorityRequestAugmentChoices = 0xF8;
            static constexpr std::uintptr_t OnLocalReroll = 0x108;
            static constexpr std::uintptr_t OnReplicateNumPendingAugmentsToGrant = 0x138;
            static constexpr std::uintptr_t AugmentSelectionModeItem = 0x148;
            static constexpr std::uintptr_t CachedResourceCurrencyOverride = 0x150;
            static constexpr std::uintptr_t SelectionModeWorldItem = 0x158;
            static constexpr std::uintptr_t Enabled = 0x160;
            static constexpr std::uintptr_t bAllowAugmentDropping = 0x188;
            static constexpr std::uintptr_t bAlwaysAllowOpenAugmentSelection = 0x1B8;
            static constexpr std::uintptr_t AutomaticallyGrantSelectorItem = 0x1E8;
            static constexpr std::uintptr_t AllowDroppingSelectorItem = 0x218;
            static constexpr std::uintptr_t ReplicatedNumPendingAugmentsToGrant = 0x249;
            static constexpr std::uintptr_t ReplicatedAugmentChoices = 0x250;
            static constexpr std::uintptr_t NumFreeRerolls = 0x260;
            static constexpr std::uintptr_t NumLockedSelectionChoices = 0x261;
            static constexpr std::uintptr_t PrimaryInputComponentWeaponMode = 0x268;
            static constexpr std::uintptr_t PrimaryInputComponentBuildMode = 0x270;
            static constexpr std::uintptr_t TemporaryInputComponent = 0x278;
            static constexpr std::uintptr_t AugmentSelectInputPriority = 0x280;
            static constexpr std::uintptr_t SelectionBlockedPlayerTags = 0x2A8;
            static constexpr std::uintptr_t AugmentSelectInputDisablePlayerTags = 0x2C8;
            static constexpr std::uintptr_t RerollCosts = 0x310;
            static constexpr std::uintptr_t SelectorItemEntry = 0x320;
            static constexpr std::uintptr_t LocalCachedPreviousWeapon = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"OnCanSelectAugmentChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnSelectedAugmentForGrant", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnAvailableAugmentsForGrantingUpdated", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnAuthorityRequestAugmentChoices", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLocalReroll", 0x108, "MulticastInlineDelegateProperty"},
            {"OnReplicateNumPendingAugmentsToGrant", 0x138, "MulticastInlineDelegateProperty"},
            {"AugmentSelectionModeItem", 0x148, "ObjectProperty"},
            {"CachedResourceCurrencyOverride", 0x150, "WeakObjectProperty"},
            {"SelectionModeWorldItem", 0x158, "ObjectProperty"},
            {"Enabled", 0x160, "StructProperty"},
            {"bAllowAugmentDropping", 0x188, "StructProperty"},
            {"bAlwaysAllowOpenAugmentSelection", 0x1B8, "StructProperty"},
            {"AutomaticallyGrantSelectorItem", 0x1E8, "StructProperty"},
            {"AllowDroppingSelectorItem", 0x218, "StructProperty"},
            {"ReplicatedNumPendingAugmentsToGrant", 0x249, "Int8Property"},
            {"ReplicatedAugmentChoices", 0x250, "ArrayProperty"},
            {"NumFreeRerolls", 0x260, "Int8Property"},
            {"NumLockedSelectionChoices", 0x261, "Int8Property"},
            {"PrimaryInputComponentWeaponMode", 0x268, "ObjectProperty"},
            {"PrimaryInputComponentBuildMode", 0x270, "ObjectProperty"},
            {"TemporaryInputComponent", 0x278, "ObjectProperty"},
            {"AugmentSelectInputPriority", 0x280, "StructProperty"},
            {"SelectionBlockedPlayerTags", 0x2A8, "StructProperty"},
            {"AugmentSelectInputDisablePlayerTags", 0x2C8, "StructProperty"},
            {"RerollCosts", 0x310, "ArrayProperty"},
            {"SelectorItemEntry", 0x320, "StructProperty"},
            {"LocalCachedPreviousWeapon", 0x3B8, "StructProperty"},
        }};
    };

    struct FortControllerComponent_AugmentUIEvents
    {
        static constexpr std::string_view Name = "FortControllerComponent_AugmentUIEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAugmentSelectorHighlightedChoice = 0xE8;
            static constexpr std::uintptr_t OnAugmentStartedSelectionOfChoice = 0xF8;
            static constexpr std::uintptr_t OnAugmentSelectedByPointerEvent = 0x108;
            static constexpr std::uintptr_t OnAugmentGrantingTimersFinishedForMatch = 0x118;
            static constexpr std::uintptr_t OnAugmentGrantingTimersResetForMatch = 0x128;
            static constexpr std::uintptr_t AugmentHoldInputRerollChanged = 0x138;
            static constexpr std::uintptr_t OnAugmentToolViewSwap = 0x148;
            static constexpr std::uintptr_t NumAugmentGrantRoundsForPlaylist = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnAugmentSelectorHighlightedChoice", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnAugmentStartedSelectionOfChoice", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnAugmentSelectedByPointerEvent", 0x108, "MulticastInlineDelegateProperty"},
            {"OnAugmentGrantingTimersFinishedForMatch", 0x118, "MulticastInlineDelegateProperty"},
            {"OnAugmentGrantingTimersResetForMatch", 0x128, "MulticastInlineDelegateProperty"},
            {"AugmentHoldInputRerollChanged", 0x138, "MulticastInlineDelegateProperty"},
            {"OnAugmentToolViewSwap", 0x148, "MulticastInlineDelegateProperty"},
            {"NumAugmentGrantRoundsForPlaylist", 0x170, "IntProperty"},
        }};
    };

    struct FortControllerComponent_PlayerAugmentPersistence
    {
        static constexpr std::string_view Name = "FortControllerComponent_PlayerAugmentPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0xC8;
            static constexpr std::uintptr_t LockMissingCollectionAugmentsEnabled = 0xF0;
            static constexpr std::uintptr_t PlayerController = 0x118;
            static constexpr std::uintptr_t CollectionData = 0x120;
            static constexpr std::uintptr_t LivePlayerAugmentsPersistenceData = 0x128;
            static constexpr std::uintptr_t AugmentsCollectedThisMatch = 0x140;
            static constexpr std::uintptr_t ReplicatedSharedPlayerAugments = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Enabled", 0xC8, "StructProperty"},
            {"LockMissingCollectionAugmentsEnabled", 0xF0, "StructProperty"},
            {"PlayerController", 0x118, "ObjectProperty"},
            {"CollectionData", 0x120, "ObjectProperty"},
            {"LivePlayerAugmentsPersistenceData", 0x128, "StructProperty"},
            {"AugmentsCollectedThisMatch", 0x140, "SetProperty"},
            {"ReplicatedSharedPlayerAugments", 0x150, "ArrayProperty"},
        }};
    };

    struct FortGamestateComponent_AugmentTableManager
    {
        static constexpr std::string_view Name = "FortGamestateComponent_AugmentTableManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGamestateComponent_DynamicRollTableManager";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRegistryType_BaseWeights = 0xF0;
            static constexpr std::uintptr_t DataRegistryType_WeightModifiers = 0xF4;
            static constexpr std::uintptr_t Enabled = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataRegistryType_BaseWeights", 0xF0, "StructProperty"},
            {"DataRegistryType_WeightModifiers", 0xF4, "StructProperty"},
            {"Enabled", 0xF8, "StructProperty"},
        }};
    };

    struct FortMcpCollectionPlayerAugment
    {
        static constexpr std::string_view Name = "FortMcpCollectionPlayerAugment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMcpCollectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Collected = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Collected", 0x50, "ArrayProperty"},
        }};
    };

    struct FortPlayerAugmentCheatManager
    {
        static constexpr std::string_view Name = "FortPlayerAugmentCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerStateComponent_PlayerAugmentSystem
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_PlayerAugmentSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAugmentListUpdated = 0xD8;
            static constexpr std::uintptr_t EnableAugmentsFeature = 0xE8;
            static constexpr std::uintptr_t DynamicTagGEClass = 0x110;
            static constexpr std::uintptr_t AugmentToRuntimeDataMap = 0x118;
            static constexpr std::uintptr_t ItemToRuntimeDataMap = 0x128;
            static constexpr std::uintptr_t ActiveAugments = 0x138;
            static constexpr std::uintptr_t AugmentCount = 0x148;
            static constexpr std::uintptr_t SquadAugments = 0x160;
            static constexpr std::uintptr_t RuntimeAugmentMatchDataCacheFloat = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnAugmentListUpdated", 0xD8, "MulticastInlineDelegateProperty"},
            {"EnableAugmentsFeature", 0xE8, "StructProperty"},
            {"DynamicTagGEClass", 0x110, "ClassProperty"},
            {"AugmentToRuntimeDataMap", 0x118, "MapProperty"},
            {"ItemToRuntimeDataMap", 0x128, "MapProperty"},
            {"ActiveAugments", 0x138, "ArrayProperty"},
            {"AugmentCount", 0x148, "MapProperty"},
            {"SquadAugments", 0x160, "ArrayProperty"},
            {"RuntimeAugmentMatchDataCacheFloat", 0x170, "MapProperty"},
        }};
    };

}
