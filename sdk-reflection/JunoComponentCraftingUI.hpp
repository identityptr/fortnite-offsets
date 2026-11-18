#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoComponentCraftingUI
{
    struct GameFeatureAction_AddCBCSupportToWidgets
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddCBCSupportToWidgets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoActiveCraftingViewModel
    {
        static constexpr std::string_view Name = "JunoActiveCraftingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCraftingViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveRecipe = 0xD8;
            static constexpr std::uintptr_t SelectedPartViewModel = 0x128;
            static constexpr std::uintptr_t StatEntries = 0x130;
            static constexpr std::uintptr_t RuneSlotCountStatTag = 0x140;
            static constexpr std::uintptr_t FocusSlot = 0x148;
            static constexpr std::uintptr_t RuneSlots = 0x158;
            static constexpr std::uintptr_t ComponentCraftingTextureSet = 0x168;
            static constexpr std::uintptr_t bHasComponentCraftingTextureSet = 0x208;
            static constexpr std::uintptr_t ActiveRecipeName = 0x210;
            static constexpr std::uintptr_t ActiveRecipeRarity = 0x220;
            static constexpr std::uintptr_t PrimaryPartResult = 0x228;
            static constexpr std::uintptr_t OnInventorySlotChangedDelegate = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ActiveRecipe", 0xD8, "StructProperty"},
            {"SelectedPartViewModel", 0x128, "ObjectProperty"},
            {"StatEntries", 0x130, "ArrayProperty"},
            {"RuneSlotCountStatTag", 0x140, "StructProperty"},
            {"FocusSlot", 0x148, "StructProperty"},
            {"RuneSlots", 0x158, "ArrayProperty"},
            {"ComponentCraftingTextureSet", 0x168, "StructProperty"},
            {"bHasComponentCraftingTextureSet", 0x208, "BoolProperty"},
            {"ActiveRecipeName", 0x210, "TextProperty"},
            {"ActiveRecipeRarity", 0x220, "EnumProperty"},
            {"PrimaryPartResult", 0x228, "ObjectProperty"},
            {"OnInventorySlotChangedDelegate", 0x230, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoComponentCraftingUIComp
    {
        static constexpr std::string_view Name = "JunoComponentCraftingUIComp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedWidgetSceneData = 0xC8;
            static constexpr std::uintptr_t HudLayoutScenes = 0xD0;
            static constexpr std::uintptr_t WidgetPoolInitData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TaggedWidgetSceneData", 0xC8, "ObjectProperty"},
            {"HudLayoutScenes", 0xD0, "MapProperty"},
            {"WidgetPoolInitData", 0xE0, "ArrayProperty"},
        }};
    };

    struct JunoCraftingPartViewModel
    {
        static constexpr std::string_view Name = "JunoCraftingPartViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t PossibleItemAndCountArray = 0x78;
            static constexpr std::uintptr_t AssignedItemDefinition = 0x88;
            static constexpr std::uintptr_t PreviewItemDefinition = 0x90;
            static constexpr std::uintptr_t AssignedItemSlot = 0x98;
            static constexpr std::uintptr_t PartTag = 0xA0;
            static constexpr std::uintptr_t FilterTagContainer = 0xA8;
            static constexpr std::uintptr_t IgnoreKnowledgeQuery = 0xC8;
            static constexpr std::uintptr_t PartUIData = 0x110;
            static constexpr std::uintptr_t CurrentCount = 0x1A0;
            static constexpr std::uintptr_t RequiredCount = 0x1A4;
            static constexpr std::uintptr_t bCanOpenPicker = 0x1AC;
            static constexpr std::uintptr_t TraitUIDataArray = 0x1B0;
            static constexpr std::uintptr_t bIsOutputSlot = 0x1C0;
            static constexpr std::uintptr_t bShowAdjustButtons = 0x1C1;
            static constexpr std::uintptr_t RequirementDisplayData = 0x1C8;
            static constexpr std::uintptr_t InventoryFilterViewModel = 0x208;
            static constexpr std::uintptr_t bShouldShowCountSlider = 0x210;
            static constexpr std::uintptr_t HigherPriorityParts = 0x218;
            static constexpr std::uintptr_t RelevantInventoryComponents = 0x228;
            static constexpr std::uintptr_t InventoryAggregateComponents = 0x238;
            static constexpr std::uintptr_t WeakCraftingObject = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"PossibleItemAndCountArray", 0x78, "ArrayProperty"},
            {"AssignedItemDefinition", 0x88, "ObjectProperty"},
            {"PreviewItemDefinition", 0x90, "ObjectProperty"},
            {"AssignedItemSlot", 0x98, "ObjectProperty"},
            {"PartTag", 0xA0, "StructProperty"},
            {"FilterTagContainer", 0xA8, "StructProperty"},
            {"IgnoreKnowledgeQuery", 0xC8, "StructProperty"},
            {"PartUIData", 0x110, "StructProperty"},
            {"CurrentCount", 0x1A0, "IntProperty"},
            {"RequiredCount", 0x1A4, "IntProperty"},
            {"bCanOpenPicker", 0x1AC, "BoolProperty"},
            {"TraitUIDataArray", 0x1B0, "ArrayProperty"},
            {"bIsOutputSlot", 0x1C0, "BoolProperty"},
            {"bShowAdjustButtons", 0x1C1, "BoolProperty"},
            {"RequirementDisplayData", 0x1C8, "StructProperty"},
            {"InventoryFilterViewModel", 0x208, "ObjectProperty"},
            {"bShouldShowCountSlider", 0x210, "BoolProperty"},
            {"HigherPriorityParts", 0x218, "ArrayProperty"},
            {"RelevantInventoryComponents", 0x228, "ArrayProperty"},
            {"InventoryAggregateComponents", 0x238, "ArrayProperty"},
            {"WeakCraftingObject", 0x248, "WeakObjectProperty"},
        }};
    };

    struct JunoCraftingViewModelBase
    {
        static constexpr std::string_view Name = "JunoCraftingViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakCraftingObject = 0x78;
            static constexpr std::uintptr_t Categories = 0x80;
            static constexpr std::uintptr_t CategoriesMap = 0x90;
            static constexpr std::uintptr_t SelectedCategory = 0xA0;
            static constexpr std::uintptr_t ActiveRecipeViewModel = 0xA8;
            static constexpr std::uintptr_t ConnectedInventoryCount = 0xB0;
            static constexpr std::uintptr_t RelevantInventoryComponents = 0xB8;
            static constexpr std::uintptr_t InventoryAggregateComponents = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"WeakCraftingObject", 0x78, "WeakObjectProperty"},
            {"Categories", 0x80, "ArrayProperty"},
            {"CategoriesMap", 0x90, "MapProperty"},
            {"SelectedCategory", 0xA0, "ObjectProperty"},
            {"ActiveRecipeViewModel", 0xA8, "ObjectProperty"},
            {"ConnectedInventoryCount", 0xB0, "IntProperty"},
            {"RelevantInventoryComponents", 0xB8, "ArrayProperty"},
            {"InventoryAggregateComponents", 0xC8, "ArrayProperty"},
        }};
    };

    struct JunoGameStateComponent_ComponentCraftingUIData
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_ComponentCraftingUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_UIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoComponentCraftingPartUIDataRegistryType = 0xF8;
            static constexpr std::uintptr_t JunoComponentCraftingTextureUIDataRegistryType = 0xFC;
            static constexpr std::uintptr_t JunoComponentCraftingTraitUIDataRegistryType = 0x100;
            static constexpr std::uintptr_t ItemDefinitionToTextureUIDataMap = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JunoComponentCraftingPartUIDataRegistryType", 0xF8, "StructProperty"},
            {"JunoComponentCraftingTextureUIDataRegistryType", 0xFC, "StructProperty"},
            {"JunoComponentCraftingTraitUIDataRegistryType", 0x100, "StructProperty"},
            {"ItemDefinitionToTextureUIDataMap", 0x108, "MapProperty"},
        }};
    };

    struct JunoPassiveCraftingViewModel
    {
        static constexpr std::string_view Name = "JunoPassiveCraftingViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCraftingViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PassiveCraftingState = 0xD8;
            static constexpr std::uintptr_t InputCraftingParts = 0xE0;
            static constexpr std::uintptr_t OutputCraftingParts = 0xF0;
            static constexpr std::uintptr_t bAreAllRequirementsMet = 0x100;
            static constexpr std::uintptr_t OutputState = 0x101;
            static constexpr std::uintptr_t PassiveCraftingComponent = 0x108;
            static constexpr std::uintptr_t CraftingObjectInventoryViewModel = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PassiveCraftingState", 0xD8, "EnumProperty"},
            {"InputCraftingParts", 0xE0, "ArrayProperty"},
            {"OutputCraftingParts", 0xF0, "ArrayProperty"},
            {"bAreAllRequirementsMet", 0x100, "BoolProperty"},
            {"OutputState", 0x101, "EnumProperty"},
            {"PassiveCraftingComponent", 0x108, "ObjectProperty"},
            {"CraftingObjectInventoryViewModel", 0x110, "ObjectProperty"},
        }};
    };

}
