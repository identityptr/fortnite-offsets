/**
 * decamp dumper generated SDK
 * Package: /Script/AnnualRefundTokenUI
 */
#pragma once
#include "Basic.h"

// /Script/AnnualRefundTokenUI.PurchaseHistoryBundleEntry
// Kind: ScriptStruct; super: none
struct FPurchaseHistoryBundleEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString ID; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPurchaseHistoryBundleEntry, ID) == 16, "Offset mismatch for FPurchaseHistoryBundleEntry::ID");

// /Script/AnnualRefundTokenUI.FortAnnualRefundTicket
// Kind: Class; super: UserWidget
class UFortAnnualRefundTicket
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Text_AvailableDate; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAnnualRefundTicket, Text_AvailableDate) == 776, "Offset mismatch for UFortAnnualRefundTicket::Text_AvailableDate");

// /Script/AnnualRefundTokenUI.FortAnnualRefundTokenData
// Kind: Class; super: FortGameFeatureData
class UFortAnnualRefundTokenData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    TSoftClassPtr<void> PurchaseHistoryScreenClass; // 0x0448 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortAnnualRefundTokenData, PurchaseHistoryScreenClass) == 1096, "Offset mismatch for UFortAnnualRefundTokenData::PurchaseHistoryScreenClass");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
// Kind: Class; super: FortPurchaseHistoryEntryBase
class UFortPurchaseHistoryBundleEntry
{
public:
    std::uint8_t Pad_0000[0x1680]; // 0x0000
    std::uint8_t bIsExpanded; // 0x1680 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPurchaseHistoryBundleEntry, bIsExpanded) == 5760, "Offset mismatch for UFortPurchaseHistoryBundleEntry::bIsExpanded");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry
// Kind: Class; super: FortPurchaseHistoryEntryBase
class UFortPurchaseHistoryEntry
{
public:
    std::uint8_t Pad_0000[0x1648]; // 0x0000
    void* ItemCardClass; // 0x1648 (Size: 0x8, Type: ClassProperty)
    float CardWidthOverride; // 0x1650 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1654
    void* Text_Name; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LootEntryItemTypesToExclude; // 0x1660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LootEntryItemTypesToCombine; // 0x1670 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPurchaseHistoryEntry, ItemCardClass) == 5704, "Offset mismatch for UFortPurchaseHistoryEntry::ItemCardClass");
static_assert(offsetof(UFortPurchaseHistoryEntry, CardWidthOverride) == 5712, "Offset mismatch for UFortPurchaseHistoryEntry::CardWidthOverride");
static_assert(offsetof(UFortPurchaseHistoryEntry, Text_Name) == 5720, "Offset mismatch for UFortPurchaseHistoryEntry::Text_Name");
static_assert(offsetof(UFortPurchaseHistoryEntry, LootEntryItemTypesToExclude) == 5728, "Offset mismatch for UFortPurchaseHistoryEntry::LootEntryItemTypesToExclude");
static_assert(offsetof(UFortPurchaseHistoryEntry, LootEntryItemTypesToCombine) == 5744, "Offset mismatch for UFortPurchaseHistoryEntry::LootEntryItemTypesToCombine");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
// Kind: Class; super: FortHoldableButton
class UFortPurchaseHistoryEntryBase
{
public:
    std::uint8_t Pad_0000[0x1648]; // 0x0000
    void* ItemCardClass; // 0x1648 (Size: 0x8, Type: ClassProperty)
    float CardWidthOverride; // 0x1650 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1654
    void* Text_Name; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LootEntryItemTypesToExclude; // 0x1660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LootEntryItemTypesToCombine; // 0x1670 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPurchaseHistoryEntryBase, ItemCardClass) == 5704, "Offset mismatch for UFortPurchaseHistoryEntryBase::ItemCardClass");
static_assert(offsetof(UFortPurchaseHistoryEntryBase, CardWidthOverride) == 5712, "Offset mismatch for UFortPurchaseHistoryEntryBase::CardWidthOverride");
static_assert(offsetof(UFortPurchaseHistoryEntryBase, Text_Name) == 5720, "Offset mismatch for UFortPurchaseHistoryEntryBase::Text_Name");
static_assert(offsetof(UFortPurchaseHistoryEntryBase, LootEntryItemTypesToExclude) == 5728, "Offset mismatch for UFortPurchaseHistoryEntryBase::LootEntryItemTypesToExclude");
static_assert(offsetof(UFortPurchaseHistoryEntryBase, LootEntryItemTypesToCombine) == 5744, "Offset mismatch for UFortPurchaseHistoryEntryBase::LootEntryItemTypesToCombine");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryListView
// Kind: Class; super: ListViewBase
class UFortPurchaseHistoryListView
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    FMulticastInlineDelegate BP_OnEntryGenerated; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnEntriesGenerated; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0188
    void* EntryWidgetClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bPaintSelectedEntriesOnTop; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaintHoveredEntriesOnTop; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableScrolling; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x01A3
    float WheelScrollMultiplier; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableScrollAnimation; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01A9
    float ScrollingAnimationInterpolationSpeed; // 0x01AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInEnableTouchAnimatedScrolling; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowOverscroll; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRightClickScrolling; // 0x01B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableTouchScrolling; // 0x01B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPointerScrollingEnabled; // 0x01B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGamepadScrollingEnabled; // 0x01B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFixedLineOffset; // 0x01B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x01B7
    float FixedLineScrollOffset; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDragging; // 0x01BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDragDrop; // 0x01BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t DragDropVisualPivot; // 0x01BE (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x1]; // 0x01BF
    std::uint8_t DragDropVisualOffset[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    void* DragDropVisualEntryClass; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    void* DragDropOperationClass; // 0x01D8 (Size: 0x8, Type: ClassProperty)
    void* DragVisualWidget; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsDragging; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectItemOnNavigation; // 0x01E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowKeepPreselectedItems; // 0x01EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x5]; // 0x01EB
    FMulticastInlineDelegate BP_OnEntryReleased; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EntryWidgetPool[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPurchaseHistoryListView, BP_OnEntryGenerated) == 360, "Offset mismatch for UFortPurchaseHistoryListView::BP_OnEntryGenerated");
static_assert(offsetof(UFortPurchaseHistoryListView, BP_OnEntriesGenerated) == 376, "Offset mismatch for UFortPurchaseHistoryListView::BP_OnEntriesGenerated");
static_assert(offsetof(UFortPurchaseHistoryListView, EntryWidgetClass) == 408, "Offset mismatch for UFortPurchaseHistoryListView::EntryWidgetClass");
static_assert(offsetof(UFortPurchaseHistoryListView, bPaintSelectedEntriesOnTop) == 416, "Offset mismatch for UFortPurchaseHistoryListView::bPaintSelectedEntriesOnTop");
static_assert(offsetof(UFortPurchaseHistoryListView, bPaintHoveredEntriesOnTop) == 417, "Offset mismatch for UFortPurchaseHistoryListView::bPaintHoveredEntriesOnTop");
static_assert(offsetof(UFortPurchaseHistoryListView, bEnableScrolling) == 418, "Offset mismatch for UFortPurchaseHistoryListView::bEnableScrolling");
static_assert(offsetof(UFortPurchaseHistoryListView, WheelScrollMultiplier) == 420, "Offset mismatch for UFortPurchaseHistoryListView::WheelScrollMultiplier");
static_assert(offsetof(UFortPurchaseHistoryListView, bEnableScrollAnimation) == 424, "Offset mismatch for UFortPurchaseHistoryListView::bEnableScrollAnimation");
static_assert(offsetof(UFortPurchaseHistoryListView, ScrollingAnimationInterpolationSpeed) == 428, "Offset mismatch for UFortPurchaseHistoryListView::ScrollingAnimationInterpolationSpeed");
static_assert(offsetof(UFortPurchaseHistoryListView, bInEnableTouchAnimatedScrolling) == 432, "Offset mismatch for UFortPurchaseHistoryListView::bInEnableTouchAnimatedScrolling");
static_assert(offsetof(UFortPurchaseHistoryListView, AllowOverscroll) == 433, "Offset mismatch for UFortPurchaseHistoryListView::AllowOverscroll");
static_assert(offsetof(UFortPurchaseHistoryListView, bEnableRightClickScrolling) == 434, "Offset mismatch for UFortPurchaseHistoryListView::bEnableRightClickScrolling");
static_assert(offsetof(UFortPurchaseHistoryListView, bEnableTouchScrolling) == 435, "Offset mismatch for UFortPurchaseHistoryListView::bEnableTouchScrolling");
static_assert(offsetof(UFortPurchaseHistoryListView, bIsPointerScrollingEnabled) == 436, "Offset mismatch for UFortPurchaseHistoryListView::bIsPointerScrollingEnabled");
static_assert(offsetof(UFortPurchaseHistoryListView, bIsGamepadScrollingEnabled) == 437, "Offset mismatch for UFortPurchaseHistoryListView::bIsGamepadScrollingEnabled");
static_assert(offsetof(UFortPurchaseHistoryListView, bEnableFixedLineOffset) == 438, "Offset mismatch for UFortPurchaseHistoryListView::bEnableFixedLineOffset");
static_assert(offsetof(UFortPurchaseHistoryListView, FixedLineScrollOffset) == 440, "Offset mismatch for UFortPurchaseHistoryListView::FixedLineScrollOffset");
static_assert(offsetof(UFortPurchaseHistoryListView, bAllowDragging) == 444, "Offset mismatch for UFortPurchaseHistoryListView::bAllowDragging");
static_assert(offsetof(UFortPurchaseHistoryListView, bAllowDragDrop) == 445, "Offset mismatch for UFortPurchaseHistoryListView::bAllowDragDrop");
static_assert(offsetof(UFortPurchaseHistoryListView, DragDropVisualPivot) == 446, "Offset mismatch for UFortPurchaseHistoryListView::DragDropVisualPivot");
static_assert(offsetof(UFortPurchaseHistoryListView, DragDropVisualOffset) == 448, "Offset mismatch for UFortPurchaseHistoryListView::DragDropVisualOffset");
static_assert(offsetof(UFortPurchaseHistoryListView, DragDropVisualEntryClass) == 464, "Offset mismatch for UFortPurchaseHistoryListView::DragDropVisualEntryClass");
static_assert(offsetof(UFortPurchaseHistoryListView, DragDropOperationClass) == 472, "Offset mismatch for UFortPurchaseHistoryListView::DragDropOperationClass");
static_assert(offsetof(UFortPurchaseHistoryListView, DragVisualWidget) == 480, "Offset mismatch for UFortPurchaseHistoryListView::DragVisualWidget");
static_assert(offsetof(UFortPurchaseHistoryListView, bIsDragging) == 488, "Offset mismatch for UFortPurchaseHistoryListView::bIsDragging");
static_assert(offsetof(UFortPurchaseHistoryListView, bSelectItemOnNavigation) == 489, "Offset mismatch for UFortPurchaseHistoryListView::bSelectItemOnNavigation");
static_assert(offsetof(UFortPurchaseHistoryListView, bAllowKeepPreselectedItems) == 490, "Offset mismatch for UFortPurchaseHistoryListView::bAllowKeepPreselectedItems");
static_assert(offsetof(UFortPurchaseHistoryListView, BP_OnEntryReleased) == 496, "Offset mismatch for UFortPurchaseHistoryListView::BP_OnEntryReleased");
static_assert(offsetof(UFortPurchaseHistoryListView, EntryWidgetPool) == 512, "Offset mismatch for UFortPurchaseHistoryListView::EntryWidgetPool");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen
// Kind: Class; super: FortActivatablePanel
class UFortPurchaseHistoryScreen
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    std::uint8_t BackAction[0x28]; // 0x0580 (Size: 0x28, Type: StructProperty)
    std::uint8_t RefundConfirmationClass[0x20]; // 0x05A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DirectPurchaseInfoModalClass[0x20]; // 0x05C8 (Size: 0x20, Type: SoftClassProperty)
    void* Switcher_MainContent; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* TreeView_Purchases; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PostApproval; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_ReturnTypeInfo; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* Text_Desc; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* Text_RefundCount; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* Text_ResultHeader; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* Text_ResultTitle; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* Text_ResultDesc; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Left; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Center; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Right; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    void* Widget_CancelPurchaseInfo; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    void* Widget_ReturnTicketInfo; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    void* Widget_TokenlessRefundInfo; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    void* Widget_NonRefundableInfo; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* Widget_BundledPurchaseInfo; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    void* Widget_BundledPurchaseTokenlessRefundInfo; // 0x0670 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPurchaseHistoryScreen, BackAction) == 1408, "Offset mismatch for UFortPurchaseHistoryScreen::BackAction");
static_assert(offsetof(UFortPurchaseHistoryScreen, RefundConfirmationClass) == 1448, "Offset mismatch for UFortPurchaseHistoryScreen::RefundConfirmationClass");
static_assert(offsetof(UFortPurchaseHistoryScreen, DirectPurchaseInfoModalClass) == 1480, "Offset mismatch for UFortPurchaseHistoryScreen::DirectPurchaseInfoModalClass");
static_assert(offsetof(UFortPurchaseHistoryScreen, Switcher_MainContent) == 1512, "Offset mismatch for UFortPurchaseHistoryScreen::Switcher_MainContent");
static_assert(offsetof(UFortPurchaseHistoryScreen, TreeView_Purchases) == 1520, "Offset mismatch for UFortPurchaseHistoryScreen::TreeView_Purchases");
static_assert(offsetof(UFortPurchaseHistoryScreen, Button_PostApproval) == 1528, "Offset mismatch for UFortPurchaseHistoryScreen::Button_PostApproval");
static_assert(offsetof(UFortPurchaseHistoryScreen, ScrollBox_ReturnTypeInfo) == 1536, "Offset mismatch for UFortPurchaseHistoryScreen::ScrollBox_ReturnTypeInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Text_Desc) == 1544, "Offset mismatch for UFortPurchaseHistoryScreen::Text_Desc");
static_assert(offsetof(UFortPurchaseHistoryScreen, Text_RefundCount) == 1552, "Offset mismatch for UFortPurchaseHistoryScreen::Text_RefundCount");
static_assert(offsetof(UFortPurchaseHistoryScreen, Text_ResultHeader) == 1560, "Offset mismatch for UFortPurchaseHistoryScreen::Text_ResultHeader");
static_assert(offsetof(UFortPurchaseHistoryScreen, Text_ResultTitle) == 1568, "Offset mismatch for UFortPurchaseHistoryScreen::Text_ResultTitle");
static_assert(offsetof(UFortPurchaseHistoryScreen, Text_ResultDesc) == 1576, "Offset mismatch for UFortPurchaseHistoryScreen::Text_ResultDesc");
static_assert(offsetof(UFortPurchaseHistoryScreen, RefundTicket_Left) == 1584, "Offset mismatch for UFortPurchaseHistoryScreen::RefundTicket_Left");
static_assert(offsetof(UFortPurchaseHistoryScreen, RefundTicket_Center) == 1592, "Offset mismatch for UFortPurchaseHistoryScreen::RefundTicket_Center");
static_assert(offsetof(UFortPurchaseHistoryScreen, RefundTicket_Right) == 1600, "Offset mismatch for UFortPurchaseHistoryScreen::RefundTicket_Right");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_CancelPurchaseInfo) == 1608, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_CancelPurchaseInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_ReturnTicketInfo) == 1616, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_ReturnTicketInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_TokenlessRefundInfo) == 1624, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_TokenlessRefundInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_NonRefundableInfo) == 1632, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_NonRefundableInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_BundledPurchaseInfo) == 1640, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_BundledPurchaseInfo");
static_assert(offsetof(UFortPurchaseHistoryScreen, Widget_BundledPurchaseTokenlessRefundInfo) == 1648, "Offset mismatch for UFortPurchaseHistoryScreen::Widget_BundledPurchaseTokenlessRefundInfo");

// /Script/AnnualRefundTokenUI.FortPurchaseHistoryTreeView
// Kind: Class; super: FortPurchaseHistoryListView
class UFortPurchaseHistoryTreeView
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* HeaderEntryWidgetClass; // 0x04A0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortPurchaseHistoryTreeView, HeaderEntryWidgetClass) == 1184, "Offset mismatch for UFortPurchaseHistoryTreeView::HeaderEntryWidgetClass");

// /Script/AnnualRefundTokenUI.FortRefundConfirmation
// Kind: Class; super: FortActivatablePanel
class UFortRefundConfirmation
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    void* Text_RefundsRemaining; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Text_RefundCount; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* Text_AreYouSure; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Yes; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_No; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Left; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Center; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* RefundTicket_Right; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRefundConfirmation, Text_RefundsRemaining) == 1424, "Offset mismatch for UFortRefundConfirmation::Text_RefundsRemaining");
static_assert(offsetof(UFortRefundConfirmation, Text_RefundCount) == 1432, "Offset mismatch for UFortRefundConfirmation::Text_RefundCount");
static_assert(offsetof(UFortRefundConfirmation, Text_AreYouSure) == 1440, "Offset mismatch for UFortRefundConfirmation::Text_AreYouSure");
static_assert(offsetof(UFortRefundConfirmation, Button_Yes) == 1448, "Offset mismatch for UFortRefundConfirmation::Button_Yes");
static_assert(offsetof(UFortRefundConfirmation, Button_No) == 1456, "Offset mismatch for UFortRefundConfirmation::Button_No");
static_assert(offsetof(UFortRefundConfirmation, Button_CloseTouch) == 1464, "Offset mismatch for UFortRefundConfirmation::Button_CloseTouch");
static_assert(offsetof(UFortRefundConfirmation, RefundTicket_Left) == 1472, "Offset mismatch for UFortRefundConfirmation::RefundTicket_Left");
static_assert(offsetof(UFortRefundConfirmation, RefundTicket_Center) == 1480, "Offset mismatch for UFortRefundConfirmation::RefundTicket_Center");
static_assert(offsetof(UFortRefundConfirmation, RefundTicket_Right) == 1488, "Offset mismatch for UFortRefundConfirmation::RefundTicket_Right");
