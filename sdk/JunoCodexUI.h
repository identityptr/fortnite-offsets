/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCodexUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoCodexUI.JunoCodexItemTagOrder
// Kind: ScriptStruct; super: none
struct FJunoCodexItemTagOrder
{
public:
    TArray<void*> ItemTags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCodexItemTagOrder, ItemTags) == 0, "Offset mismatch for FJunoCodexItemTagOrder::ItemTags");

// /Script/JunoCodexUI.JunoCodexEntrySlot
// Kind: Class; super: CommonButtonBase
class UJunoCodexEntrySlot
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    void* ContextMenuAnchor; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x15B8
    std::int32_t StackSizeMultiplier; // 0x15BC (Size: 0x4, Type: IntProperty)
    void* ListEntry; // 0x15C0 (Size: 0x8, Type: ObjectProperty)
    void* ContextMenuClass; // 0x15C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoCodexEntrySlot, ContextMenuAnchor) == 5552, "Offset mismatch for UJunoCodexEntrySlot::ContextMenuAnchor");
static_assert(offsetof(UJunoCodexEntrySlot, StackSizeMultiplier) == 5564, "Offset mismatch for UJunoCodexEntrySlot::StackSizeMultiplier");
static_assert(offsetof(UJunoCodexEntrySlot, ListEntry) == 5568, "Offset mismatch for UJunoCodexEntrySlot::ListEntry");
static_assert(offsetof(UJunoCodexEntrySlot, ContextMenuClass) == 5576, "Offset mismatch for UJunoCodexEntrySlot::ContextMenuClass");

// /Script/JunoCodexUI.JunoCodexFilterButton
// Kind: Class; super: CommonButtonBase
class UJunoCodexFilterButton
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* JunoBangWidget; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoCodexFilterButton, JunoBangWidget) == 5544, "Offset mismatch for UJunoCodexFilterButton::JunoBangWidget");

// /Script/JunoCodexUI.JunoCodexFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoCodexFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoCodexUI.JunoCodexListEntry
// Kind: Class; super: Object
class UJunoCodexListEntry
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    void* ItemDefinition; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoCodexListEntry, ItemDefinition) == 328, "Offset mismatch for UJunoCodexListEntry::ItemDefinition");

// /Script/JunoCodexUI.JunoCodexScreen
// Kind: Class; super: JunoActivatableWidget
class UJunoCodexScreen
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    void* TabList_FilterTabs; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* FilterTabWidget; // 0x04E0 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> SubCategoryTagOrderByCategoryTag; // 0x04E8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ItemTypeTagOrderBySubCategoryTag; // 0x04F8 (Size: 0x10, Type: MapProperty)
    void* GridListView_SubCategories; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* Text_EmptyCategory; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SubCategoryItemType[0x4]; // 0x0518 (Size: 0x4, Type: NameProperty)
    std::uint8_t EntrySlotItemType[0x4]; // 0x051C (Size: 0x4, Type: NameProperty)
    void* LastFocusedWidget; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0528
    std::uint8_t TrackedRecipe[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    std::uint8_t SelectedRecipe[0x4]; // 0x0548 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> TrackedEntry; // 0x054C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0554
    void* CategoryUIData; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TabIDToCategoryTagMap; // 0x0568 (Size: 0x10, Type: MapProperty)
    void* SelectedListEntry; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* Button_Spawn; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* Button_SpawnMultiple; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Button_Track; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* Button_ClearBangs; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* ItemSpawnedNotification; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* VerticalBox_RecipeDetails; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Recipe; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* Text_DebugRowName; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x98]; // 0x05C8
    void* EntryBox_Ingredients; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_CustomRecipe; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IgnoredCraftingSourceObjectTags[0x20]; // 0x0670 (Size: 0x20, Type: StructProperty)
    std::uint8_t ShouldShowResourceDropsTagQuery[0x48]; // 0x0690 (Size: 0x48, Type: StructProperty)
    TMap<void*, void*> CraftingSourceObjectTagPriorites; // 0x06D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t EnemyItemDrops[0x10]; // 0x06E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemTypeTagContainer[0x1]; // 0x06F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoCodexScreen, TabList_FilterTabs) == 1240, "Offset mismatch for UJunoCodexScreen::TabList_FilterTabs");
static_assert(offsetof(UJunoCodexScreen, FilterTabWidget) == 1248, "Offset mismatch for UJunoCodexScreen::FilterTabWidget");
static_assert(offsetof(UJunoCodexScreen, SubCategoryTagOrderByCategoryTag) == 1256, "Offset mismatch for UJunoCodexScreen::SubCategoryTagOrderByCategoryTag");
static_assert(offsetof(UJunoCodexScreen, ItemTypeTagOrderBySubCategoryTag) == 1272, "Offset mismatch for UJunoCodexScreen::ItemTypeTagOrderBySubCategoryTag");
static_assert(offsetof(UJunoCodexScreen, GridListView_SubCategories) == 1288, "Offset mismatch for UJunoCodexScreen::GridListView_SubCategories");
static_assert(offsetof(UJunoCodexScreen, Text_EmptyCategory) == 1296, "Offset mismatch for UJunoCodexScreen::Text_EmptyCategory");
static_assert(offsetof(UJunoCodexScreen, SubCategoryItemType) == 1304, "Offset mismatch for UJunoCodexScreen::SubCategoryItemType");
static_assert(offsetof(UJunoCodexScreen, EntrySlotItemType) == 1308, "Offset mismatch for UJunoCodexScreen::EntrySlotItemType");
static_assert(offsetof(UJunoCodexScreen, LastFocusedWidget) == 1312, "Offset mismatch for UJunoCodexScreen::LastFocusedWidget");
static_assert(offsetof(UJunoCodexScreen, TrackedRecipe) == 1348, "Offset mismatch for UJunoCodexScreen::TrackedRecipe");
static_assert(offsetof(UJunoCodexScreen, SelectedRecipe) == 1352, "Offset mismatch for UJunoCodexScreen::SelectedRecipe");
static_assert(offsetof(UJunoCodexScreen, TrackedEntry) == 1356, "Offset mismatch for UJunoCodexScreen::TrackedEntry");
static_assert(offsetof(UJunoCodexScreen, CategoryUIData) == 1376, "Offset mismatch for UJunoCodexScreen::CategoryUIData");
static_assert(offsetof(UJunoCodexScreen, TabIDToCategoryTagMap) == 1384, "Offset mismatch for UJunoCodexScreen::TabIDToCategoryTagMap");
static_assert(offsetof(UJunoCodexScreen, SelectedListEntry) == 1400, "Offset mismatch for UJunoCodexScreen::SelectedListEntry");
static_assert(offsetof(UJunoCodexScreen, Button_Back) == 1408, "Offset mismatch for UJunoCodexScreen::Button_Back");
static_assert(offsetof(UJunoCodexScreen, Button_Spawn) == 1416, "Offset mismatch for UJunoCodexScreen::Button_Spawn");
static_assert(offsetof(UJunoCodexScreen, Button_SpawnMultiple) == 1424, "Offset mismatch for UJunoCodexScreen::Button_SpawnMultiple");
static_assert(offsetof(UJunoCodexScreen, Button_Track) == 1432, "Offset mismatch for UJunoCodexScreen::Button_Track");
static_assert(offsetof(UJunoCodexScreen, Button_ClearBangs) == 1440, "Offset mismatch for UJunoCodexScreen::Button_ClearBangs");
static_assert(offsetof(UJunoCodexScreen, ItemSpawnedNotification) == 1448, "Offset mismatch for UJunoCodexScreen::ItemSpawnedNotification");
static_assert(offsetof(UJunoCodexScreen, VerticalBox_RecipeDetails) == 1456, "Offset mismatch for UJunoCodexScreen::VerticalBox_RecipeDetails");
static_assert(offsetof(UJunoCodexScreen, Switcher_Recipe) == 1464, "Offset mismatch for UJunoCodexScreen::Switcher_Recipe");
static_assert(offsetof(UJunoCodexScreen, Text_DebugRowName) == 1472, "Offset mismatch for UJunoCodexScreen::Text_DebugRowName");
static_assert(offsetof(UJunoCodexScreen, EntryBox_Ingredients) == 1632, "Offset mismatch for UJunoCodexScreen::EntryBox_Ingredients");
static_assert(offsetof(UJunoCodexScreen, EntryBox_CustomRecipe) == 1640, "Offset mismatch for UJunoCodexScreen::EntryBox_CustomRecipe");
static_assert(offsetof(UJunoCodexScreen, IgnoredCraftingSourceObjectTags) == 1648, "Offset mismatch for UJunoCodexScreen::IgnoredCraftingSourceObjectTags");
static_assert(offsetof(UJunoCodexScreen, ShouldShowResourceDropsTagQuery) == 1680, "Offset mismatch for UJunoCodexScreen::ShouldShowResourceDropsTagQuery");
static_assert(offsetof(UJunoCodexScreen, CraftingSourceObjectTagPriorites) == 1752, "Offset mismatch for UJunoCodexScreen::CraftingSourceObjectTagPriorites");
static_assert(offsetof(UJunoCodexScreen, EnemyItemDrops) == 1768, "Offset mismatch for UJunoCodexScreen::EnemyItemDrops");
static_assert(offsetof(UJunoCodexScreen, ItemTypeTagContainer) == 1784, "Offset mismatch for UJunoCodexScreen::ItemTypeTagContainer");

// /Script/JunoCodexUI.JunoCodexSubCategoryHeader
// Kind: Class; super: CommonButtonBase
class UJunoCodexSubCategoryHeader
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* Text_Name; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    void* ListEntry; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoCodexSubCategoryHeader, Text_Name) == 5544, "Offset mismatch for UJunoCodexSubCategoryHeader::Text_Name");
static_assert(offsetof(UJunoCodexSubCategoryHeader, ListEntry) == 5552, "Offset mismatch for UJunoCodexSubCategoryHeader::ListEntry");
