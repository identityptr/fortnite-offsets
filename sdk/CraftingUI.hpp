#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CraftingUI
{
    struct AthenaCraftingQuickBarButton
    {
        static constexpr std::string_view Name = "AthenaCraftingQuickBarButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaQuickBarSlotButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t QuickBarIndex = 0x15D0;
            static constexpr std::uintptr_t SlotIndex = 0x15D4;
            static constexpr std::uintptr_t ItemIcon = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuickBarIndex", 0x15D0, "EnumProperty"},
            {"SlotIndex", 0x15D4, "IntProperty"},
            {"ItemIcon", 0x15D8, "ObjectProperty"},
        }};
    };

    struct AthenaEquippedItemCraftingIndicator
    {
        static constexpr std::string_view Name = "AthenaEquippedItemCraftingIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct AthenaInventoryItemInfoCraftingIndicator
    {
        static constexpr std::string_view Name = "AthenaInventoryItemInfoCraftingIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct AthenaQuickBarSlotCraftingIndicator
    {
        static constexpr std::string_view Name = "AthenaQuickBarSlotCraftingIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaQuickBarSlotExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bCheckForIngredientChangesWhenCraftable = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCheckForIngredientChangesWhenCraftable", 0x358, "BoolProperty"},
        }};
    };

    struct FortCookingScreen
    {
        static constexpr std::string_view Name = "FortCookingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseInputAction = 0x4A8;
            static constexpr std::uintptr_t Button_EjectAll = 0x4C0;
            static constexpr std::uintptr_t Button_Cancel = 0x4C8;
            static constexpr std::uintptr_t Text_RecipeName = 0x4D0;
            static constexpr std::uintptr_t Text_RecipeDescription = 0x4D8;
            static constexpr std::uintptr_t Image_Recipe = 0x4E0;
            static constexpr std::uintptr_t RadialMenu_Recipes = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CloseInputAction", 0x4A8, "StructProperty"},
            {"Button_EjectAll", 0x4C0, "ObjectProperty"},
            {"Button_Cancel", 0x4C8, "ObjectProperty"},
            {"Text_RecipeName", 0x4D0, "ObjectProperty"},
            {"Text_RecipeDescription", 0x4D8, "ObjectProperty"},
            {"Image_Recipe", 0x4E0, "ObjectProperty"},
            {"RadialMenu_Recipes", 0x4E8, "ObjectProperty"},
        }};
    };

    struct FortCraftingFormulaIngredientsWidget
    {
        static constexpr std::string_view Name = "FortCraftingFormulaIngredientsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_Ingredients = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryBox_Ingredients", 0x330, "ObjectProperty"},
        }};
    };

    struct FortCraftingIngredientWidget
    {
        static constexpr std::string_view Name = "FortCraftingIngredientWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_NumAvailable = 0x338;
            static constexpr std::uintptr_t Text_NumRequired = 0x340;
            static constexpr std::uintptr_t ItemIcon = 0x348;
            static constexpr std::uintptr_t LazyImage_Icon = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_NumAvailable", 0x338, "ObjectProperty"},
            {"Text_NumRequired", 0x340, "ObjectProperty"},
            {"ItemIcon", 0x348, "ObjectProperty"},
            {"LazyImage_Icon", 0x350, "ObjectProperty"},
        }};
    };

    struct FortCraftingItemInfoWidget
    {
        static constexpr std::string_view Name = "FortCraftingItemInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RarityTextFormat = 0x4A8;
            static constexpr std::uintptr_t Text_ItemName = 0x4B8;
            static constexpr std::uintptr_t Text_ItemRarity = 0x4C0;
            static constexpr std::uintptr_t Text_ItemCategory = 0x4C8;
            static constexpr std::uintptr_t ItemCategoryIndicator = 0x4D0;
            static constexpr std::uintptr_t Text_ItemDescription = 0x4D8;
            static constexpr std::uintptr_t ItemStatsWidget = 0x4E0;
            static constexpr std::uintptr_t IngredientsWidget = 0x4E8;
            static constexpr std::uintptr_t Button_StartCrafting = 0x4F0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"RarityTextFormat", 0x4A8, "TextProperty"},
            {"Text_ItemName", 0x4B8, "ObjectProperty"},
            {"Text_ItemRarity", 0x4C0, "ObjectProperty"},
            {"Text_ItemCategory", 0x4C8, "ObjectProperty"},
            {"ItemCategoryIndicator", 0x4D0, "ObjectProperty"},
            {"Text_ItemDescription", 0x4D8, "ObjectProperty"},
            {"ItemStatsWidget", 0x4E0, "ObjectProperty"},
            {"IngredientsWidget", 0x4E8, "ObjectProperty"},
            {"Button_StartCrafting", 0x4F0, "ObjectProperty"},
        }};
    };

    struct FortCraftingListEntry
    {
        static constexpr std::string_view Name = "FortCraftingListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemIcon = 0x1628;
            static constexpr std::uintptr_t bCanCraftItem = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemIcon", 0x1628, "ObjectProperty"},
            {"bCanCraftItem", 0x1630, "BoolProperty"},
        }};
    };

    struct FortCraftingListItem
    {
        static constexpr std::string_view Name = "FortCraftingListItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCraftingTab
    {
        static constexpr std::string_view Name = "FortCraftingTab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabNameId = 0x4A8;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x4B0;
            static constexpr std::uintptr_t PrimaryIngredientTags = 0x5A0;
            static constexpr std::uintptr_t CraftingItemInfo = 0x5C0;
            static constexpr std::uintptr_t ListView_Recipes = 0x5C8;
            static constexpr std::uintptr_t QuickbarEditor = 0x5D0;
            static constexpr std::uintptr_t ItemInfoWidget = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TabNameId", 0x4A8, "NameProperty"},
            {"TabButtonLabelInfo", 0x4B0, "StructProperty"},
            {"PrimaryIngredientTags", 0x5A0, "StructProperty"},
            {"CraftingItemInfo", 0x5C0, "ObjectProperty"},
            {"ListView_Recipes", 0x5C8, "ObjectProperty"},
            {"QuickbarEditor", 0x5D0, "ObjectProperty"},
            {"ItemInfoWidget", 0x5D8, "ObjectProperty"},
        }};
    };

    struct FortPotContentsPopup
    {
        static constexpr std::string_view Name = "FortPotContentsPopup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxItemsToShow = 0x308;
            static constexpr std::uintptr_t TileView_PotContents = 0x318;
            static constexpr std::uintptr_t Text_MoreItems = 0x320;
            static constexpr std::uintptr_t Overlay_Popup = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxItemsToShow", 0x308, "IntProperty"},
            {"TileView_PotContents", 0x318, "ObjectProperty"},
            {"Text_MoreItems", 0x320, "ObjectProperty"},
            {"Overlay_Popup", 0x328, "ObjectProperty"},
        }};
    };

    struct FortPotContentsTile
    {
        static constexpr std::string_view Name = "FortPotContentsTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_Item = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Image_Item", 0x1628, "ObjectProperty"},
        }};
    };

    struct FortUIGameFeatureAction_SetCraftMenuWidget
    {
        static constexpr std::string_view Name = "FortUIGameFeatureAction_SetCraftMenuWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingObject = 0x28;
            static constexpr std::uintptr_t CraftingMenuWidget = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CraftingObject", 0x28, "ClassProperty"},
            {"CraftingMenuWidget", 0x30, "SoftClassProperty"},
        }};
    };

}
