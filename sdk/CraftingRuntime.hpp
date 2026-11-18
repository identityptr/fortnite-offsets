#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CraftingRuntime
{
    struct CraftingCheatManager
    {
        static constexpr std::string_view Name = "CraftingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CraftingLibrary
    {
        static constexpr std::string_view Name = "CraftingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CraftingObjectBGA
    {
        static constexpr std::string_view Name = "CraftingObjectBGA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t Inventory = 0x948;
            static constexpr std::uintptr_t SphereComponent_InteractionRange = 0x968;
            static constexpr std::uintptr_t MenuWidget = 0x970;
            static constexpr std::uintptr_t WidgetComponent_PotContents = 0x990;
            static constexpr std::uintptr_t bShowCraftingUI = 0x998;
            static constexpr std::uintptr_t bSendEventMessageOnLocalInteract = 0x999;
            static constexpr std::uintptr_t bRunServerInteractionWhenSendingEventMessage = 0x99A;
            static constexpr std::uintptr_t CraftingObjectMesh = 0x9A0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Inventory", 0x948, "ObjectProperty"},
            {"SphereComponent_InteractionRange", 0x968, "ObjectProperty"},
            {"MenuWidget", 0x970, "SoftClassProperty"},
            {"WidgetComponent_PotContents", 0x990, "ObjectProperty"},
            {"bShowCraftingUI", 0x998, "BoolProperty"},
            {"bSendEventMessageOnLocalInteract", 0x999, "BoolProperty"},
            {"bRunServerInteractionWhenSendingEventMessage", 0x99A, "BoolProperty"},
            {"CraftingObjectMesh", 0x9A0, "ObjectProperty"},
        }};
    };

    struct CraftingObjectComponent
    {
        static constexpr std::string_view Name = "CraftingObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingObjectStateChanged = 0xC0;
            static constexpr std::uintptr_t OnFormulaCraftableChanged = 0xD0;
            static constexpr std::uintptr_t OnCraftingSuccess = 0xE0;
            static constexpr std::uintptr_t OnCraftingAdditionalValidationCheck = 0xF0;
            static constexpr std::uintptr_t OnBuildingUsingChestResources = 0x118;
            static constexpr std::uintptr_t CraftingObjectRepStateData = 0x128;
            static constexpr std::uintptr_t CraftingObjectServerStateData = 0x140;
            static constexpr std::uintptr_t LastCraftedItemFormulaRow = 0x150;
            static constexpr std::uintptr_t LastIngredientStringForAnalytics = 0x158;
            static constexpr std::uintptr_t LastFormulaStringForAnalytics = 0x168;
            static constexpr std::uintptr_t LastResultsStringForAnalytics = 0x178;
            static constexpr std::uintptr_t WhileCraftingAbilitySpecHandle = 0x188;
            static constexpr std::uintptr_t OwnerCraftingAbilitySpecHandle = 0x1A0;
            static constexpr std::uintptr_t CraftingObjectTag = 0x1B8;
            static constexpr std::uintptr_t CraftingObjectTags = 0x1C0;
            static constexpr std::uintptr_t CraftingTimeLength = 0x1E0;
            static constexpr std::uintptr_t ReadyTimeLength = 0x208;
            static constexpr std::uintptr_t OverCraftingTimeLength = 0x230;
            static constexpr std::uintptr_t ResettingTimeLength = 0x258;
            static constexpr std::uintptr_t DefaultCraftingSpeedMultiplier = 0x280;
            static constexpr std::uintptr_t OverCraftingLootTierKey = 0x2A8;
            static constexpr std::uintptr_t bTakeItemsAtCraftingStart = 0x2AC;
            static constexpr std::uintptr_t DecayRate = 0x2B0;
            static constexpr std::uintptr_t bGiveIngredientsToCraftingObject = 0x2B4;
            static constexpr std::uintptr_t bGiveIngredientsToInstigator = 0x2B4;
            static constexpr std::uintptr_t IngredientSpawnOffset = 0x2B8;
            static constexpr std::uintptr_t bGiveResultToInstigator = 0x2D0;
            static constexpr std::uintptr_t bGiveToCraftingObject = 0x2D0;
            static constexpr std::uintptr_t bPrioritizeSmallestIngredientStacks = 0x2D0;
            static constexpr std::uintptr_t OwnerCraftingAbility = 0x2D8;
            static constexpr std::uintptr_t WhileCraftingAbility = 0x2F8;
            static constexpr std::uintptr_t InstigatorWhileCraftingAbility = 0x318;
            static constexpr std::uintptr_t bScaleMultiCraftingTime = 0x338;
            static constexpr std::uintptr_t CraftingFailedTags = 0x340;
            static constexpr std::uintptr_t IngredientsInventoryGroupTag = 0x468;
            static constexpr std::uintptr_t FreeCraftingEnabled = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"CraftingObjectStateChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnFormulaCraftableChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnCraftingSuccess", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnCraftingAdditionalValidationCheck", 0xF0, "DelegateProperty"},
            {"OnBuildingUsingChestResources", 0x118, "MulticastInlineDelegateProperty"},
            {"CraftingObjectRepStateData", 0x128, "StructProperty"},
            {"CraftingObjectServerStateData", 0x140, "MapProperty"},
            {"LastCraftedItemFormulaRow", 0x150, "NameProperty"},
            {"LastIngredientStringForAnalytics", 0x158, "StrProperty"},
            {"LastFormulaStringForAnalytics", 0x168, "StrProperty"},
            {"LastResultsStringForAnalytics", 0x178, "StrProperty"},
            {"WhileCraftingAbilitySpecHandle", 0x188, "StructProperty"},
            {"OwnerCraftingAbilitySpecHandle", 0x1A0, "StructProperty"},
            {"CraftingObjectTag", 0x1B8, "StructProperty"},
            {"CraftingObjectTags", 0x1C0, "StructProperty"},
            {"CraftingTimeLength", 0x1E0, "StructProperty"},
            {"ReadyTimeLength", 0x208, "StructProperty"},
            {"OverCraftingTimeLength", 0x230, "StructProperty"},
            {"ResettingTimeLength", 0x258, "StructProperty"},
            {"DefaultCraftingSpeedMultiplier", 0x280, "StructProperty"},
            {"OverCraftingLootTierKey", 0x2A8, "NameProperty"},
            {"bTakeItemsAtCraftingStart", 0x2AC, "BoolProperty"},
            {"DecayRate", 0x2B0, "FloatProperty"},
            {"bGiveIngredientsToCraftingObject", 0x2B4, "BoolProperty"},
            {"bGiveIngredientsToInstigator", 0x2B4, "BoolProperty"},
            {"IngredientSpawnOffset", 0x2B8, "StructProperty"},
            {"bGiveResultToInstigator", 0x2D0, "BoolProperty"},
            {"bGiveToCraftingObject", 0x2D0, "BoolProperty"},
            {"bPrioritizeSmallestIngredientStacks", 0x2D0, "BoolProperty"},
            {"OwnerCraftingAbility", 0x2D8, "SoftClassProperty"},
            {"WhileCraftingAbility", 0x2F8, "SoftClassProperty"},
            {"InstigatorWhileCraftingAbility", 0x318, "SoftClassProperty"},
            {"bScaleMultiCraftingTime", 0x338, "BoolProperty"},
            {"CraftingFailedTags", 0x340, "StructProperty"},
            {"IngredientsInventoryGroupTag", 0x468, "StructProperty"},
            {"FreeCraftingEnabled", 0x498, "BoolProperty"},
        }};
    };

    struct FortContextualTutorial_CraftingComplete
    {
        static constexpr std::string_view Name = "FortContextualTutorial_CraftingComplete";
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

    struct FortContextualTutorial_CraftingReady
    {
        static constexpr std::string_view Name = "FortContextualTutorial_CraftingReady";
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

    struct FortContextualTutorial_CraftingTabOpen
    {
        static constexpr std::string_view Name = "FortContextualTutorial_CraftingTabOpen";
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

    struct FortControllerComponent_CraftingNetworkEvents
    {
        static constexpr std::string_view Name = "FortControllerComponent_CraftingNetworkEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCraftingSuccess = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnCraftingSuccess", 0xC8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortGameStateComponent_Crafting
    {
        static constexpr std::string_view Name = "FortGameStateComponent_Crafting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingFormulaRegistryType = 0xC0;
            static constexpr std::uintptr_t CraftingIngredientsUIDataRegistryType = 0xC4;
            static constexpr std::uintptr_t CraftingResultsList = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CraftingFormulaRegistryType", 0xC0, "StructProperty"},
            {"CraftingIngredientsUIDataRegistryType", 0xC4, "StructProperty"},
            {"CraftingResultsList", 0x120, "ArrayProperty"},
        }};
    };

    struct FortPickupInteractOverrideComponent_Crafting
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_Crafting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LastPickupItemDef = 0xE0;
            static constexpr std::uintptr_t LastFocusedItemDef = 0xE8;
            static constexpr std::uintptr_t LastTargetFormulaName = 0xF0;
            static constexpr std::uintptr_t ContextualCraftingInteractDuration = 0xF4;
            static constexpr std::uintptr_t CachedInteractionType = 0xF8;
            static constexpr std::uintptr_t CachedInteractionBeingAttempted = 0xF9;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LastPickupItemDef", 0xE0, "ObjectProperty"},
            {"LastFocusedItemDef", 0xE8, "ObjectProperty"},
            {"LastTargetFormulaName", 0xF0, "NameProperty"},
            {"ContextualCraftingInteractDuration", 0xF4, "FloatProperty"},
            {"CachedInteractionType", 0xF8, "ByteProperty"},
            {"CachedInteractionBeingAttempted", 0xF9, "ByteProperty"},
        }};
    };

}
