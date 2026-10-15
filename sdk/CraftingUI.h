/**
 * decamp dumper generated SDK
 * Package: /Script/CraftingUI
 */
#pragma once
#include "Basic.h"

// /Script/CraftingUI.AthenaCraftingQuickBarButton
// Kind: Class; super: AthenaQuickBarSlotButtonBase
class UAthenaCraftingQuickBarButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t QuickBarIndex; // 0x15A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x15A1
    std::int32_t SlotIndex; // 0x15A4 (Size: 0x4, Type: IntProperty)
    void* ItemIcon; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaCraftingQuickBarButton, QuickBarIndex) == 5536, "Offset mismatch for UAthenaCraftingQuickBarButton::QuickBarIndex");
static_assert(offsetof(UAthenaCraftingQuickBarButton, SlotIndex) == 5540, "Offset mismatch for UAthenaCraftingQuickBarButton::SlotIndex");
static_assert(offsetof(UAthenaCraftingQuickBarButton, ItemIcon) == 5544, "Offset mismatch for UAthenaCraftingQuickBarButton::ItemIcon");

// /Script/CraftingUI.AthenaEquippedItemCraftingIndicator
// Kind: Class; super: CommonUserWidget
class UAthenaEquippedItemCraftingIndicator
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAthenaEquippedItemCraftingIndicator, bDisplayInActionBar) == 776, "Offset mismatch for UAthenaEquippedItemCraftingIndicator::bDisplayInActionBar");
static_assert(offsetof(UAthenaEquippedItemCraftingIndicator, bConsumePointerInput) == 777, "Offset mismatch for UAthenaEquippedItemCraftingIndicator::bConsumePointerInput");

// /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// Kind: Class; super: CommonUserWidget
class UAthenaInventoryItemInfoCraftingIndicator
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAthenaInventoryItemInfoCraftingIndicator, bDisplayInActionBar) == 776, "Offset mismatch for UAthenaInventoryItemInfoCraftingIndicator::bDisplayInActionBar");
static_assert(offsetof(UAthenaInventoryItemInfoCraftingIndicator, bConsumePointerInput) == 777, "Offset mismatch for UAthenaInventoryItemInfoCraftingIndicator::bConsumePointerInput");

// /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator
// Kind: Class; super: AthenaQuickBarSlotExtensionWidgetBase
class UAthenaQuickBarSlotCraftingIndicator
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t bCheckForIngredientChangesWhenCraftable; // 0x0358 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAthenaQuickBarSlotCraftingIndicator, bCheckForIngredientChangesWhenCraftable) == 856, "Offset mismatch for UAthenaQuickBarSlotCraftingIndicator::bCheckForIngredientChangesWhenCraftable");

// /Script/CraftingUI.FortCookingScreen
// Kind: Class; super: CommonActivatableWidget
class UFortCookingScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t CloseInputAction[0x18]; // 0x04A8 (Size: 0x18, Type: StructProperty)
    void* Button_EjectAll; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* Text_RecipeName; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_RecipeDescription; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Recipe; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* RadialMenu_Recipes; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCookingScreen, CloseInputAction) == 1192, "Offset mismatch for UFortCookingScreen::CloseInputAction");
static_assert(offsetof(UFortCookingScreen, Button_EjectAll) == 1216, "Offset mismatch for UFortCookingScreen::Button_EjectAll");
static_assert(offsetof(UFortCookingScreen, Button_Cancel) == 1224, "Offset mismatch for UFortCookingScreen::Button_Cancel");
static_assert(offsetof(UFortCookingScreen, Text_RecipeName) == 1232, "Offset mismatch for UFortCookingScreen::Text_RecipeName");
static_assert(offsetof(UFortCookingScreen, Text_RecipeDescription) == 1240, "Offset mismatch for UFortCookingScreen::Text_RecipeDescription");
static_assert(offsetof(UFortCookingScreen, Image_Recipe) == 1248, "Offset mismatch for UFortCookingScreen::Image_Recipe");
static_assert(offsetof(UFortCookingScreen, RadialMenu_Recipes) == 1256, "Offset mismatch for UFortCookingScreen::RadialMenu_Recipes");

// /Script/CraftingUI.FortCraftingFormulaIngredientsWidget
// Kind: Class; super: CommonUserWidget
class UFortCraftingFormulaIngredientsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_Ingredients; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCraftingFormulaIngredientsWidget, EntryBox_Ingredients) == 816, "Offset mismatch for UFortCraftingFormulaIngredientsWidget::EntryBox_Ingredients");

// /Script/CraftingUI.FortCraftingIngredientWidget
// Kind: Class; super: CommonUserWidget
class UFortCraftingIngredientWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* Text_NumAvailable; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_NumRequired; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* ItemIcon; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* LazyImage_Icon; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumAvailable) == 824, "Offset mismatch for UFortCraftingIngredientWidget::Text_NumAvailable");
static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumRequired) == 832, "Offset mismatch for UFortCraftingIngredientWidget::Text_NumRequired");
static_assert(offsetof(UFortCraftingIngredientWidget, ItemIcon) == 840, "Offset mismatch for UFortCraftingIngredientWidget::ItemIcon");
static_assert(offsetof(UFortCraftingIngredientWidget, LazyImage_Icon) == 848, "Offset mismatch for UFortCraftingIngredientWidget::LazyImage_Icon");

// /Script/CraftingUI.FortCraftingItemInfoWidget
// Kind: Class; super: CommonActivatableWidget
class UFortCraftingItemInfoWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t RarityTextFormat[0x10]; // 0x04A8 (Size: 0x10, Type: TextProperty)
    void* Text_ItemName; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemRarity; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemCategory; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ItemCategoryIndicator; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemDescription; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* ItemStatsWidget; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* IngredientsWidget; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_StartCrafting; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCraftingItemInfoWidget, RarityTextFormat) == 1192, "Offset mismatch for UFortCraftingItemInfoWidget::RarityTextFormat");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemName) == 1208, "Offset mismatch for UFortCraftingItemInfoWidget::Text_ItemName");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemRarity) == 1216, "Offset mismatch for UFortCraftingItemInfoWidget::Text_ItemRarity");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemCategory) == 1224, "Offset mismatch for UFortCraftingItemInfoWidget::Text_ItemCategory");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemCategoryIndicator) == 1232, "Offset mismatch for UFortCraftingItemInfoWidget::ItemCategoryIndicator");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemDescription) == 1240, "Offset mismatch for UFortCraftingItemInfoWidget::Text_ItemDescription");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemStatsWidget) == 1248, "Offset mismatch for UFortCraftingItemInfoWidget::ItemStatsWidget");
static_assert(offsetof(UFortCraftingItemInfoWidget, IngredientsWidget) == 1256, "Offset mismatch for UFortCraftingItemInfoWidget::IngredientsWidget");
static_assert(offsetof(UFortCraftingItemInfoWidget, Button_StartCrafting) == 1264, "Offset mismatch for UFortCraftingItemInfoWidget::Button_StartCrafting");

// /Script/CraftingUI.FortCraftingListEntry
// Kind: Class; super: CommonButtonLegacy
class UFortCraftingListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* ItemIcon; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanCraftItem; // 0x1600 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCraftingListEntry, ItemIcon) == 5624, "Offset mismatch for UFortCraftingListEntry::ItemIcon");
static_assert(offsetof(UFortCraftingListEntry, bCanCraftItem) == 5632, "Offset mismatch for UFortCraftingListEntry::bCanCraftItem");

// /Script/CraftingUI.FortCraftingListItem
// Kind: Class; super: Object
class UFortCraftingListItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CraftingUI.FortCraftingTab
// Kind: Class; super: CommonActivatableWidget
class UFortCraftingTab
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    FName TabNameId; // 0x04A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x04B0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t PrimaryIngredientTags[0x20]; // 0x05A0 (Size: 0x20, Type: StructProperty)
    void* CraftingItemInfo; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* ListView_Recipes; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* QuickbarEditor; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* ItemInfoWidget; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCraftingTab, TabNameId) == 1192, "Offset mismatch for UFortCraftingTab::TabNameId");
static_assert(offsetof(UFortCraftingTab, TabButtonLabelInfo) == 1200, "Offset mismatch for UFortCraftingTab::TabButtonLabelInfo");
static_assert(offsetof(UFortCraftingTab, PrimaryIngredientTags) == 1440, "Offset mismatch for UFortCraftingTab::PrimaryIngredientTags");
static_assert(offsetof(UFortCraftingTab, CraftingItemInfo) == 1472, "Offset mismatch for UFortCraftingTab::CraftingItemInfo");
static_assert(offsetof(UFortCraftingTab, ListView_Recipes) == 1480, "Offset mismatch for UFortCraftingTab::ListView_Recipes");
static_assert(offsetof(UFortCraftingTab, QuickbarEditor) == 1488, "Offset mismatch for UFortCraftingTab::QuickbarEditor");
static_assert(offsetof(UFortCraftingTab, ItemInfoWidget) == 1496, "Offset mismatch for UFortCraftingTab::ItemInfoWidget");

// /Script/CraftingUI.FortPotContentsPopup
// Kind: Class; super: UserWidget
class UFortPotContentsPopup
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::int32_t MaxItemsToShow; // 0x0308 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x030C
    void* TileView_PotContents; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Text_MoreItems; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Popup; // 0x0328 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPotContentsPopup, MaxItemsToShow) == 776, "Offset mismatch for UFortPotContentsPopup::MaxItemsToShow");
static_assert(offsetof(UFortPotContentsPopup, TileView_PotContents) == 792, "Offset mismatch for UFortPotContentsPopup::TileView_PotContents");
static_assert(offsetof(UFortPotContentsPopup, Text_MoreItems) == 800, "Offset mismatch for UFortPotContentsPopup::Text_MoreItems");
static_assert(offsetof(UFortPotContentsPopup, Overlay_Popup) == 808, "Offset mismatch for UFortPotContentsPopup::Overlay_Popup");

// /Script/CraftingUI.FortPotContentsTile
// Kind: Class; super: CommonButtonLegacy
class UFortPotContentsTile
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* Image_Item; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPotContentsTile, Image_Item) == 5624, "Offset mismatch for UFortPotContentsTile::Image_Item");

// /Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_SetCraftMenuWidget
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CraftingObject; // 0x0028 (Size: 0x8, Type: ClassProperty)
    TSoftClassPtr<void> CraftingMenuWidget; // 0x0030 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_SetCraftMenuWidget, CraftingObject) == 40, "Offset mismatch for UFortUIGameFeatureAction_SetCraftMenuWidget::CraftingObject");
static_assert(offsetof(UFortUIGameFeatureAction_SetCraftMenuWidget, CraftingMenuWidget) == 48, "Offset mismatch for UFortUIGameFeatureAction_SetCraftMenuWidget::CraftingMenuWidget");
