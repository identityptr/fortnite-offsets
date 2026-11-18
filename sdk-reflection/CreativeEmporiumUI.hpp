#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeEmporiumUI
{
    struct EmporiumBrowserFilterEntry
    {
        static constexpr std::string_view Name = "EmporiumBrowserFilterEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFilterEnabled = 0x15D8;
            static constexpr std::uintptr_t OnFilterSelected = 0x15E8;
            static constexpr std::uintptr_t OnFilterHovered = 0x15F8;
            static constexpr std::uintptr_t OnWidgetDestroyed = 0x1608;
            static constexpr std::uintptr_t TextBlock_FilterName = 0x1618;
            static constexpr std::uintptr_t bFilterActive = 0x1620;
            static constexpr std::uintptr_t Tag = 0x1628;
            static constexpr std::uintptr_t ButtonText = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnFilterEnabled", 0x15D8, "MulticastInlineDelegateProperty"},
            {"OnFilterSelected", 0x15E8, "MulticastInlineDelegateProperty"},
            {"OnFilterHovered", 0x15F8, "MulticastInlineDelegateProperty"},
            {"OnWidgetDestroyed", 0x1608, "MulticastInlineDelegateProperty"},
            {"TextBlock_FilterName", 0x1618, "ObjectProperty"},
            {"bFilterActive", 0x1620, "BoolProperty"},
            {"Tag", 0x1628, "ObjectProperty"},
            {"ButtonText", 0x1630, "TextProperty"},
        }};
    };

    struct EmporiumBrowserFiltersPanel
    {
        static constexpr std::string_view Name = "EmporiumBrowserFiltersPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFilterChanged = 0x330;
            static constexpr std::uintptr_t OnSortChanged = 0x340;
            static constexpr std::uintptr_t OnSortPanelToggled = 0x350;
            static constexpr std::uintptr_t OnFocusChanged = 0x360;
            static constexpr std::uintptr_t OnCategoryActivated = 0x370;
            static constexpr std::uintptr_t OnCategoryFocused = 0x380;
            static constexpr std::uintptr_t OnUpdateCategoryCounts = 0x3A8;
            static constexpr std::uintptr_t FilterSectionHeaderWidgetClass = 0x440;
            static constexpr std::uintptr_t FilterCategoryHeaderWidgetClass = 0x448;
            static constexpr std::uintptr_t FilterHomeHeaderWidgetClass = 0x450;
            static constexpr std::uintptr_t FilterEntryWidgetClass = 0x458;
            static constexpr std::uintptr_t SortEntries = 0x460;
            static constexpr std::uintptr_t FilterEntries = 0x470;
            static constexpr std::uintptr_t PriceFilterEntries = 0x480;
            static constexpr std::uintptr_t LicenseFilterEntries = 0x490;
            static constexpr std::uintptr_t DefaultCategoryFilter = 0x4A0;
            static constexpr std::uintptr_t DefaultTagFilterMode = 0x4A4;
            static constexpr std::uintptr_t Button_SortAndFilter = 0x4B8;
            static constexpr std::uintptr_t LastSelectedTab = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"OnFilterChanged", 0x330, "MulticastInlineDelegateProperty"},
            {"OnSortChanged", 0x340, "MulticastInlineDelegateProperty"},
            {"OnSortPanelToggled", 0x350, "MulticastInlineDelegateProperty"},
            {"OnFocusChanged", 0x360, "MulticastInlineDelegateProperty"},
            {"OnCategoryActivated", 0x370, "MulticastInlineDelegateProperty"},
            {"OnCategoryFocused", 0x380, "MulticastInlineDelegateProperty"},
            {"OnUpdateCategoryCounts", 0x3A8, "MulticastInlineDelegateProperty"},
            {"FilterSectionHeaderWidgetClass", 0x440, "ClassProperty"},
            {"FilterCategoryHeaderWidgetClass", 0x448, "ClassProperty"},
            {"FilterHomeHeaderWidgetClass", 0x450, "ClassProperty"},
            {"FilterEntryWidgetClass", 0x458, "ClassProperty"},
            {"SortEntries", 0x460, "ArrayProperty"},
            {"FilterEntries", 0x470, "ArrayProperty"},
            {"PriceFilterEntries", 0x480, "ArrayProperty"},
            {"LicenseFilterEntries", 0x490, "ArrayProperty"},
            {"DefaultCategoryFilter", 0x4A0, "NameProperty"},
            {"DefaultTagFilterMode", 0x4A4, "EnumProperty"},
            {"Button_SortAndFilter", 0x4B8, "ObjectProperty"},
            {"LastSelectedTab", 0x4F8, "WeakObjectProperty"},
        }};
    };

    struct EmporiumBrowserTag
    {
        static constexpr std::string_view Name = "EmporiumBrowserTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TagID = 0x28;
            static constexpr std::uintptr_t bIsFilterActive = 0x2C;
            static constexpr std::uintptr_t ItemCount = 0x30;
            static constexpr std::uintptr_t bShowCountOnEmpty = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TagID", 0x28, "NameProperty"},
            {"bIsFilterActive", 0x2C, "BoolProperty"},
            {"ItemCount", 0x30, "IntProperty"},
            {"bShowCountOnEmpty", 0x34, "BoolProperty"},
        }};
    };

    struct FortEmporiumCategoryEntry
    {
        static constexpr std::string_view Name = "FortEmporiumCategoryEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x28;
            static constexpr std::uintptr_t Hash = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Path", 0x28, "StrProperty"},
            {"Hash", 0x38, "StrProperty"},
        }};
    };

    struct FortEmporiumFilterCategoryHeader
    {
        static constexpr std::string_view Name = "FortEmporiumFilterCategoryHeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCategoryActivated = 0x308;
            static constexpr std::uintptr_t OnWidgetDestroyed = 0x318;
            static constexpr std::uintptr_t OnExpandCategory = 0x328;
            static constexpr std::uintptr_t Tag = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnCategoryActivated", 0x308, "MulticastInlineDelegateProperty"},
            {"OnWidgetDestroyed", 0x318, "MulticastInlineDelegateProperty"},
            {"OnExpandCategory", 0x328, "MulticastInlineDelegateProperty"},
            {"Tag", 0x338, "ObjectProperty"},
        }};
    };

    struct FortEmporiumFiltersSubPanel
    {
        static constexpr std::string_view Name = "FortEmporiumFiltersSubPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFilterEnabled = 0x308;
            static constexpr std::uintptr_t OnShowAllEnabled = 0x318;
            static constexpr std::uintptr_t FilterEntryWidgetClass = 0x328;
            static constexpr std::uintptr_t ListView_FilterObjects = 0x330;
            static constexpr std::uintptr_t Button_All = 0x338;
            static constexpr std::uintptr_t Button_LastSelected = 0x340;
            static constexpr std::uintptr_t CachedItemTab = 0x348;
            static constexpr std::uintptr_t TagsByID = 0x358;
            static constexpr std::uintptr_t OrderedTags = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnFilterEnabled", 0x308, "MulticastInlineDelegateProperty"},
            {"OnShowAllEnabled", 0x318, "MulticastInlineDelegateProperty"},
            {"FilterEntryWidgetClass", 0x328, "ClassProperty"},
            {"ListView_FilterObjects", 0x330, "ObjectProperty"},
            {"Button_All", 0x338, "ObjectProperty"},
            {"Button_LastSelected", 0x340, "ObjectProperty"},
            {"CachedItemTab", 0x348, "ObjectProperty"},
            {"TagsByID", 0x358, "MapProperty"},
            {"OrderedTags", 0x368, "ArrayProperty"},
        }};
    };

    struct FortEmporiumHomeEntryObjectWrapper
    {
        static constexpr std::string_view Name = "FortEmporiumHomeEntryObjectWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EntrySource = 0x28;
            static constexpr std::uintptr_t TabPanel = 0x30;
            static constexpr std::uintptr_t MaxItemsToShow = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntrySource", 0x28, "EnumProperty"},
            {"TabPanel", 0x30, "ObjectProperty"},
            {"MaxItemsToShow", 0x38, "IntProperty"},
        }};
    };

    struct FortEmporiumHomeListEntry
    {
        static constexpr std::string_view Name = "FortEmporiumHomeListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentView = 0x310;
            static constexpr std::uintptr_t MaxItemsToShow = 0x398;
            static constexpr std::uintptr_t TabPanel = 0x3A0;
            static constexpr std::uintptr_t Text_CategoryLabel = 0x3A8;
            static constexpr std::uintptr_t HomeListView_ItemOptions = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParentView", 0x310, "ObjectProperty"},
            {"MaxItemsToShow", 0x398, "IntProperty"},
            {"TabPanel", 0x3A0, "ObjectProperty"},
            {"Text_CategoryLabel", 0x3A8, "ObjectProperty"},
            {"HomeListView_ItemOptions", 0x3B0, "ObjectProperty"},
        }};
    };

    struct FortEmporiumHomeListView
    {
        static constexpr std::string_view Name = "FortEmporiumHomeListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonListView";
        struct Offsets
        {
            static constexpr std::uintptr_t Map_TabToHomeList = 0x1060;
            static constexpr std::uintptr_t TabPanelList = 0x1070;
            static constexpr std::uintptr_t CurrentSelectionTab = 0x1128;
            static constexpr std::uintptr_t RecentItemsEntry = 0x1138;
            static constexpr std::uintptr_t NavigationHintSource = 0x1150;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Map_TabToHomeList", 0x1060, "MapProperty"},
            {"TabPanelList", 0x1070, "ArrayProperty"},
            {"CurrentSelectionTab", 0x1128, "ObjectProperty"},
            {"RecentItemsEntry", 0x1138, "ObjectProperty"},
            {"NavigationHintSource", 0x1150, "ObjectProperty"},
        }};
    };

    struct FortEmporiumHomeTabPanel
    {
        static constexpr std::string_view Name = "FortEmporiumHomeTabPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeContentBrowserTabPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FeaturedItemTag = 0x548;
            static constexpr std::uintptr_t FortEmporiumHomeListView_Options = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FeaturedItemTag", 0x548, "NameProperty"},
            {"FortEmporiumHomeListView_Options", 0x550, "ObjectProperty"},
        }};
    };

    struct FortEmporiumItem
    {
        static constexpr std::string_view Name = "FortEmporiumItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemDefinition", 0xA8, "ObjectProperty"},
        }};
    };

    struct FortEmporiumItemDefinition
    {
        static constexpr std::string_view Name = "FortEmporiumItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemThumbnailDownloaded = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnItemThumbnailDownloaded", 0xA8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortEmporiumItemDetailsPanel
    {
        static constexpr std::string_view Name = "FortEmporiumItemDetailsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDetailTagsInputRowHandle = 0x360;
            static constexpr std::uintptr_t CachedItemDefinition = 0x378;
            static constexpr std::uintptr_t CachedParentDefinition = 0x380;
            static constexpr std::uintptr_t Switcher_Details = 0x388;
            static constexpr std::uintptr_t ItemDetails = 0x390;
            static constexpr std::uintptr_t LegacyItemDetails = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemDetailTagsInputRowHandle", 0x360, "StructProperty"},
            {"CachedItemDefinition", 0x378, "ObjectProperty"},
            {"CachedParentDefinition", 0x380, "ObjectProperty"},
            {"Switcher_Details", 0x388, "ObjectProperty"},
            {"ItemDetails", 0x390, "ObjectProperty"},
            {"LegacyItemDetails", 0x398, "ObjectProperty"},
        }};
    };

    struct FortEmporiumItemInfo
    {
        static constexpr std::string_view Name = "FortEmporiumItemInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HiddenTags = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HiddenTags", 0x330, "ArrayProperty"},
        }};
    };

    struct FortEmporiumItemListMenu
    {
        static constexpr std::string_view Name = "FortEmporiumItemListMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PanelDataClass = 0x4D0;
            static constexpr std::uintptr_t ItemListCategorySource = 0x4D8;
            static constexpr std::uintptr_t ItemListPanelData = 0x4E0;
            static constexpr std::uintptr_t InventoryTabClass = 0x4E8;
            static constexpr std::uintptr_t LevelManagementTabClass = 0x4F0;
            static constexpr std::uintptr_t HomeTabClass = 0x4F8;
            static constexpr std::uintptr_t InventoryTabButton = 0x500;
            static constexpr std::uintptr_t Map_CreativeBetaTagNames = 0x508;
            static constexpr std::uintptr_t ToggleFilterFocusActionRow = 0x518;
            static constexpr std::uintptr_t ToggleFilterFocusAlternateActionRow = 0x528;
            static constexpr std::uintptr_t ToggleFilterSubPanelFocusActionRow = 0x538;
            static constexpr std::uintptr_t ToggleFilterSubPanelFocusAlternateActionRow = 0x548;
            static constexpr std::uintptr_t CycleTagFilterModeModifierActionRow = 0x558;
            static constexpr std::uintptr_t ClearTagFiltersModifierActionRow = 0x568;
            static constexpr std::uintptr_t ToggleSidePanelDockingModifierActionRow = 0x578;
            static constexpr std::uintptr_t ToggleSidePanelDockingActionRow = 0x588;
            static constexpr std::uintptr_t ToggleSubPanelModeActionRow = 0x598;
            static constexpr std::uintptr_t FocusSearchInputActionRow = 0x5A8;
            static constexpr std::uintptr_t ClearSearchInputActionRow = 0x5C0;
            static constexpr std::uintptr_t CycleSortInputActionRow = 0x5D8;
            static constexpr std::uintptr_t RequestItemFocusInputActionRow = 0x5F0;
            static constexpr std::uintptr_t ChestTabPanel = 0x608;
            static constexpr std::uintptr_t VersePrefabsTabPanel = 0x610;
            static constexpr std::uintptr_t LevelManagementTabPanel = 0x618;
            static constexpr std::uintptr_t HomeTabPanel = 0x620;
            static constexpr std::uintptr_t FabTabPanel = 0x628;
            static constexpr std::uintptr_t SubItemsTabPanel = 0x630;
            static constexpr std::uintptr_t FabTabNameId = 0x638;
            static constexpr std::uintptr_t TabButtonLabelInfo = 0x640;
            static constexpr std::uintptr_t MapScreenContainerTabInfo = 0x730;
            static constexpr std::uintptr_t bIsDefaultActiveTab = 0x770;
            static constexpr std::uintptr_t bAddItemToInventoryOnEquip = 0x771;
            static constexpr std::uintptr_t bLoadItemsOnInitialized = 0x772;
            static constexpr std::uintptr_t LastUsedSlot = 0x774;
            static constexpr std::uintptr_t TabMap = 0x780;
            static constexpr std::uintptr_t EmporiumItemDefinitionList = 0x948;
            static constexpr std::uintptr_t Map_ItemNameToTab = 0x970;
            static constexpr std::uintptr_t Switcher_SidePanels = 0x980;
            static constexpr std::uintptr_t Switcher_Categories = 0x988;
            static constexpr std::uintptr_t Switcher_ItemTabWarnings = 0x990;
            static constexpr std::uintptr_t Overlay_ChestEmpty = 0x998;
            static constexpr std::uintptr_t Overlay_TabEmpty = 0x9A0;
            static constexpr std::uintptr_t Overlay_DownloadingFabCategories = 0x9A8;
            static constexpr std::uintptr_t Overlay_FabCategoriesNotLoaded = 0x9B0;
            static constexpr std::uintptr_t Switcher_CommandBar = 0x9B8;
            static constexpr std::uintptr_t Overlay_ChestCommands = 0x9C0;
            static constexpr std::uintptr_t Overlay_VendCommands = 0x9C8;
            static constexpr std::uintptr_t MenuQuickbar_QuickBars = 0x9D0;
            static constexpr std::uintptr_t Button_ResetChest = 0x9D8;
            static constexpr std::uintptr_t Button_CreateChest = 0x9E0;
            static constexpr std::uintptr_t Button_AddToQuickBar = 0x9E8;
            static constexpr std::uintptr_t Button_OpenItem = 0x9F0;
            static constexpr std::uintptr_t Button_PlaceNow = 0x9F8;
            static constexpr std::uintptr_t Button_Equip = 0xA00;
            static constexpr std::uintptr_t Button_AddToChest = 0xA08;
            static constexpr std::uintptr_t Button_Drop = 0xA10;
            static constexpr std::uintptr_t Button_CreateLlama = 0xA18;
            static constexpr std::uintptr_t Button_RemoveFromChest = 0xA20;
            static constexpr std::uintptr_t Overlay_SearchFilters = 0xA28;
            static constexpr std::uintptr_t Switcher_LeftPanel = 0xA30;
            static constexpr std::uintptr_t FiltersPanel = 0xA38;
            static constexpr std::uintptr_t FiltersSubPanel = 0xA40;
            static constexpr std::uintptr_t SubTabItemDetailsPanel = 0xA48;
            static constexpr std::uintptr_t Blade_SortAndFilter = 0xA50;
            static constexpr std::uintptr_t ItemDetailsSidePanel_DefaultSidePanel = 0xA58;
            static constexpr std::uintptr_t Switcher_ProductPage = 0xA60;
            static constexpr std::uintptr_t Overlay_ItemBrowser = 0xA68;
            static constexpr std::uintptr_t ItemProductPagePanel = 0xA70;
            static constexpr std::uintptr_t Switcher_InventoryPermission = 0xA78;
            static constexpr std::uintptr_t Overlay_EmporiumPanel = 0xA80;
            static constexpr std::uintptr_t Overlay_InventoryNotAllowed = 0xA88;
            static constexpr std::uintptr_t Overlay_EditorDisconnected = 0xA90;
            static constexpr std::uintptr_t Overlay_InitializingInventory = 0xA98;
        };

        inline static constexpr std::array<PropertyInfo, 73> Properties{{
            {"PanelDataClass", 0x4D0, "ClassProperty"},
            {"ItemListCategorySource", 0x4D8, "ObjectProperty"},
            {"ItemListPanelData", 0x4E0, "ObjectProperty"},
            {"InventoryTabClass", 0x4E8, "ClassProperty"},
            {"LevelManagementTabClass", 0x4F0, "ClassProperty"},
            {"HomeTabClass", 0x4F8, "ClassProperty"},
            {"InventoryTabButton", 0x500, "ClassProperty"},
            {"Map_CreativeBetaTagNames", 0x508, "MapProperty"},
            {"ToggleFilterFocusActionRow", 0x518, "StructProperty"},
            {"ToggleFilterFocusAlternateActionRow", 0x528, "StructProperty"},
            {"ToggleFilterSubPanelFocusActionRow", 0x538, "StructProperty"},
            {"ToggleFilterSubPanelFocusAlternateActionRow", 0x548, "StructProperty"},
            {"CycleTagFilterModeModifierActionRow", 0x558, "StructProperty"},
            {"ClearTagFiltersModifierActionRow", 0x568, "StructProperty"},
            {"ToggleSidePanelDockingModifierActionRow", 0x578, "StructProperty"},
            {"ToggleSidePanelDockingActionRow", 0x588, "StructProperty"},
            {"ToggleSubPanelModeActionRow", 0x598, "StructProperty"},
            {"FocusSearchInputActionRow", 0x5A8, "StructProperty"},
            {"ClearSearchInputActionRow", 0x5C0, "StructProperty"},
            {"CycleSortInputActionRow", 0x5D8, "StructProperty"},
            {"RequestItemFocusInputActionRow", 0x5F0, "StructProperty"},
            {"ChestTabPanel", 0x608, "ObjectProperty"},
            {"VersePrefabsTabPanel", 0x610, "ObjectProperty"},
            {"LevelManagementTabPanel", 0x618, "ObjectProperty"},
            {"HomeTabPanel", 0x620, "ObjectProperty"},
            {"FabTabPanel", 0x628, "ObjectProperty"},
            {"SubItemsTabPanel", 0x630, "ObjectProperty"},
            {"FabTabNameId", 0x638, "NameProperty"},
            {"TabButtonLabelInfo", 0x640, "StructProperty"},
            {"MapScreenContainerTabInfo", 0x730, "StructProperty"},
            {"bIsDefaultActiveTab", 0x770, "BoolProperty"},
            {"bAddItemToInventoryOnEquip", 0x771, "BoolProperty"},
            {"bLoadItemsOnInitialized", 0x772, "BoolProperty"},
            {"LastUsedSlot", 0x774, "IntProperty"},
            {"TabMap", 0x780, "MapProperty"},
            {"EmporiumItemDefinitionList", 0x948, "ArrayProperty"},
            {"Map_ItemNameToTab", 0x970, "MapProperty"},
            {"Switcher_SidePanels", 0x980, "ObjectProperty"},
            {"Switcher_Categories", 0x988, "ObjectProperty"},
            {"Switcher_ItemTabWarnings", 0x990, "ObjectProperty"},
            {"Overlay_ChestEmpty", 0x998, "ObjectProperty"},
            {"Overlay_TabEmpty", 0x9A0, "ObjectProperty"},
            {"Overlay_DownloadingFabCategories", 0x9A8, "ObjectProperty"},
            {"Overlay_FabCategoriesNotLoaded", 0x9B0, "ObjectProperty"},
            {"Switcher_CommandBar", 0x9B8, "ObjectProperty"},
            {"Overlay_ChestCommands", 0x9C0, "ObjectProperty"},
            {"Overlay_VendCommands", 0x9C8, "ObjectProperty"},
            {"MenuQuickbar_QuickBars", 0x9D0, "ObjectProperty"},
            {"Button_ResetChest", 0x9D8, "ObjectProperty"},
            {"Button_CreateChest", 0x9E0, "ObjectProperty"},
            {"Button_AddToQuickBar", 0x9E8, "ObjectProperty"},
            {"Button_OpenItem", 0x9F0, "ObjectProperty"},
            {"Button_PlaceNow", 0x9F8, "ObjectProperty"},
            {"Button_Equip", 0xA00, "ObjectProperty"},
            {"Button_AddToChest", 0xA08, "ObjectProperty"},
            {"Button_Drop", 0xA10, "ObjectProperty"},
            {"Button_CreateLlama", 0xA18, "ObjectProperty"},
            {"Button_RemoveFromChest", 0xA20, "ObjectProperty"},
            {"Overlay_SearchFilters", 0xA28, "ObjectProperty"},
            {"Switcher_LeftPanel", 0xA30, "ObjectProperty"},
            {"FiltersPanel", 0xA38, "ObjectProperty"},
            {"FiltersSubPanel", 0xA40, "ObjectProperty"},
            {"SubTabItemDetailsPanel", 0xA48, "ObjectProperty"},
            {"Blade_SortAndFilter", 0xA50, "ObjectProperty"},
            {"ItemDetailsSidePanel_DefaultSidePanel", 0xA58, "ObjectProperty"},
            {"Switcher_ProductPage", 0xA60, "ObjectProperty"},
            {"Overlay_ItemBrowser", 0xA68, "ObjectProperty"},
            {"ItemProductPagePanel", 0xA70, "ObjectProperty"},
            {"Switcher_InventoryPermission", 0xA78, "ObjectProperty"},
            {"Overlay_EmporiumPanel", 0xA80, "ObjectProperty"},
            {"Overlay_InventoryNotAllowed", 0xA88, "ObjectProperty"},
            {"Overlay_EditorDisconnected", 0xA90, "ObjectProperty"},
            {"Overlay_InitializingInventory", 0xA98, "ObjectProperty"},
        }};
    };

    struct FortEmporiumItemListTabPanel
    {
        static constexpr std::string_view Name = "FortEmporiumItemListTabPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeContentBrowserTabPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSourceItemCountChanged = 0x4E8;
            static constexpr std::uintptr_t OnItemClickedDelegate = 0x4F8;
            static constexpr std::uintptr_t OnItemDoubleClickedDelegate = 0x508;
            static constexpr std::uintptr_t CreativeTileView_ItemOptions = 0x558;
            static constexpr std::uintptr_t Button_Sort = 0x560;
            static constexpr std::uintptr_t CurrentItemEntry = 0x568;
            static constexpr std::uintptr_t OnItemCountChanged = 0x600;
            static constexpr std::uintptr_t Items = 0x610;
            static constexpr std::uintptr_t SourceItems = 0x620;
            static constexpr std::uintptr_t EmporiumItemListMenuParent = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnSourceItemCountChanged", 0x4E8, "MulticastInlineDelegateProperty"},
            {"OnItemClickedDelegate", 0x4F8, "MulticastInlineDelegateProperty"},
            {"OnItemDoubleClickedDelegate", 0x508, "MulticastInlineDelegateProperty"},
            {"CreativeTileView_ItemOptions", 0x558, "ObjectProperty"},
            {"Button_Sort", 0x560, "ObjectProperty"},
            {"CurrentItemEntry", 0x568, "StructProperty"},
            {"OnItemCountChanged", 0x600, "MulticastInlineDelegateProperty"},
            {"Items", 0x610, "ArrayProperty"},
            {"SourceItems", 0x620, "ArrayProperty"},
            {"EmporiumItemListMenuParent", 0x6D0, "ObjectProperty"},
        }};
    };

    struct FortEmporiumUtilities
    {
        static constexpr std::string_view Name = "FortEmporiumUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
