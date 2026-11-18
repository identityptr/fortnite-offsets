#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCodexUI
{
    struct JunoCodexEntrySlot
    {
        static constexpr std::string_view Name = "JunoCodexEntrySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextMenuAnchor = 0x15E0;
            static constexpr std::uintptr_t StackSizeMultiplier = 0x15EC;
            static constexpr std::uintptr_t ListEntry = 0x15F0;
            static constexpr std::uintptr_t ContextMenuClass = 0x15F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ContextMenuAnchor", 0x15E0, "ObjectProperty"},
            {"StackSizeMultiplier", 0x15EC, "IntProperty"},
            {"ListEntry", 0x15F0, "ObjectProperty"},
            {"ContextMenuClass", 0x15F8, "ClassProperty"},
        }};
    };

    struct JunoCodexFilterButton
    {
        static constexpr std::string_view Name = "JunoCodexFilterButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBangWidget = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoBangWidget", 0x15D8, "ObjectProperty"},
        }};
    };

    struct JunoCodexFunctionLibrary
    {
        static constexpr std::string_view Name = "JunoCodexFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCodexListEntry
    {
        static constexpr std::string_view Name = "JunoCodexListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemDefinition", 0x148, "ObjectProperty"},
        }};
    };

    struct JunoCodexScreen
    {
        static constexpr std::string_view Name = "JunoCodexScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabList_FilterTabs = 0x4D8;
            static constexpr std::uintptr_t FilterTabWidget = 0x4E0;
            static constexpr std::uintptr_t SubCategoryTagOrderByCategoryTag = 0x4E8;
            static constexpr std::uintptr_t ItemTypeTagOrderBySubCategoryTag = 0x4F8;
            static constexpr std::uintptr_t GridListView_SubCategories = 0x508;
            static constexpr std::uintptr_t Text_EmptyCategory = 0x510;
            static constexpr std::uintptr_t SubCategoryItemType = 0x518;
            static constexpr std::uintptr_t EntrySlotItemType = 0x51C;
            static constexpr std::uintptr_t LastFocusedWidget = 0x520;
            static constexpr std::uintptr_t TrackedRecipe = 0x544;
            static constexpr std::uintptr_t SelectedRecipe = 0x548;
            static constexpr std::uintptr_t TrackedEntry = 0x54C;
            static constexpr std::uintptr_t CategoryUIData = 0x560;
            static constexpr std::uintptr_t TabIDToCategoryTagMap = 0x568;
            static constexpr std::uintptr_t SelectedListEntry = 0x578;
            static constexpr std::uintptr_t Button_Back = 0x580;
            static constexpr std::uintptr_t Button_Spawn = 0x588;
            static constexpr std::uintptr_t Button_SpawnMultiple = 0x590;
            static constexpr std::uintptr_t Button_Track = 0x598;
            static constexpr std::uintptr_t Button_ClearBangs = 0x5A0;
            static constexpr std::uintptr_t ItemSpawnedNotification = 0x5A8;
            static constexpr std::uintptr_t VerticalBox_RecipeDetails = 0x5B0;
            static constexpr std::uintptr_t Switcher_Recipe = 0x5B8;
            static constexpr std::uintptr_t Text_DebugRowName = 0x5C0;
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x660;
            static constexpr std::uintptr_t EntryBox_CustomRecipe = 0x668;
            static constexpr std::uintptr_t IgnoredCraftingSourceObjectTags = 0x670;
            static constexpr std::uintptr_t ShouldShowResourceDropsTagQuery = 0x690;
            static constexpr std::uintptr_t CraftingSourceObjectTagPriorites = 0x6D8;
            static constexpr std::uintptr_t EnemyItemDrops = 0x6E8;
            static constexpr std::uintptr_t ItemTypeTagContainer = 0x6F8;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"TabList_FilterTabs", 0x4D8, "ObjectProperty"},
            {"FilterTabWidget", 0x4E0, "ClassProperty"},
            {"SubCategoryTagOrderByCategoryTag", 0x4E8, "MapProperty"},
            {"ItemTypeTagOrderBySubCategoryTag", 0x4F8, "MapProperty"},
            {"GridListView_SubCategories", 0x508, "ObjectProperty"},
            {"Text_EmptyCategory", 0x510, "ObjectProperty"},
            {"SubCategoryItemType", 0x518, "NameProperty"},
            {"EntrySlotItemType", 0x51C, "NameProperty"},
            {"LastFocusedWidget", 0x520, "ObjectProperty"},
            {"TrackedRecipe", 0x544, "NameProperty"},
            {"SelectedRecipe", 0x548, "NameProperty"},
            {"TrackedEntry", 0x54C, "WeakObjectProperty"},
            {"CategoryUIData", 0x560, "ObjectProperty"},
            {"TabIDToCategoryTagMap", 0x568, "MapProperty"},
            {"SelectedListEntry", 0x578, "ObjectProperty"},
            {"Button_Back", 0x580, "ObjectProperty"},
            {"Button_Spawn", 0x588, "ObjectProperty"},
            {"Button_SpawnMultiple", 0x590, "ObjectProperty"},
            {"Button_Track", 0x598, "ObjectProperty"},
            {"Button_ClearBangs", 0x5A0, "ObjectProperty"},
            {"ItemSpawnedNotification", 0x5A8, "ObjectProperty"},
            {"VerticalBox_RecipeDetails", 0x5B0, "ObjectProperty"},
            {"Switcher_Recipe", 0x5B8, "ObjectProperty"},
            {"Text_DebugRowName", 0x5C0, "ObjectProperty"},
            {"EntryBox_Ingredients", 0x660, "ObjectProperty"},
            {"EntryBox_CustomRecipe", 0x668, "ObjectProperty"},
            {"IgnoredCraftingSourceObjectTags", 0x670, "StructProperty"},
            {"ShouldShowResourceDropsTagQuery", 0x690, "StructProperty"},
            {"CraftingSourceObjectTagPriorites", 0x6D8, "MapProperty"},
            {"EnemyItemDrops", 0x6E8, "TextProperty"},
            {"ItemTypeTagContainer", 0x6F8, "StructProperty"},
        }};
    };

    struct JunoCodexSubCategoryHeader
    {
        static constexpr std::string_view Name = "JunoCodexSubCategoryHeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_Name = 0x15D8;
            static constexpr std::uintptr_t ListEntry = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_Name", 0x15D8, "ObjectProperty"},
            {"ListEntry", 0x15E0, "ObjectProperty"},
        }};
    };

}
