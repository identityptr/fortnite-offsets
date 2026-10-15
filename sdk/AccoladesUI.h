/**
 * decamp dumper generated SDK
 * Package: /Script/AccoladesUI
 */
#pragma once
#include "Basic.h"

// /Script/AccoladesUI.FortEvent_AccoladesUITriggerAccoladesListWidgetRemoval
// Kind: ScriptStruct; super: none
struct FFortEvent_AccoladesUITriggerAccoladesListWidgetRemoval
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladesUI.AthenaAccoladeListEntryWidget
// Kind: Class; super: CommonUserWidget
class UAthenaAccoladeListEntryWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAthenaAccoladeListEntryWidget, bDisplayInActionBar) == 776, "Offset mismatch for UAthenaAccoladeListEntryWidget::bDisplayInActionBar");
static_assert(offsetof(UAthenaAccoladeListEntryWidget, bConsumePointerInput) == 777, "Offset mismatch for UAthenaAccoladeListEntryWidget::bConsumePointerInput");

// /Script/AccoladesUI.AthenaAccoladeListWidget
// Kind: Class; super: CommonListView
class UAthenaAccoladeListWidget
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    std::uint8_t WidgetStyle[0xC0]; // 0x0460 (Size: 0xC0, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x650]; // 0x0520 (Size: 0x650, Type: StructProperty)
    std::uint8_t bEnableShadowBrush; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0B71
    std::uint8_t ShadowBrushStyle[0x2F0]; // 0x0B80 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t orientation; // 0x0E70 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SelectionMode; // 0x0E71 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ConsumeMouseWheel; // 0x0E72 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClearSelectionOnClick; // 0x0E73 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocusable; // 0x0E74 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearScrollVelocityOnSelection; // 0x0E75 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReturnFocusToSelection; // 0x0E76 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableProximateEntryNavigation; // 0x0E77 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScrollIntoViewAlignment; // 0x0E78 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0E79
    TArray<void*> ListItems; // 0x0E80 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0E90
    float HorizontalEntrySpacing; // 0x0EA0 (Size: 0x4, Type: FloatProperty)
    float VerticalEntrySpacing; // 0x0EA4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrollBarPadding[0x10]; // 0x0EA8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate BP_OnEntryInitialized; // 0x0EB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemClicked; // 0x0EC8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x0ED8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragDetected; // 0x0EE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragEnter; // 0x0EF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragLeave; // 0x0F08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemAcceptDrop; // 0x0F18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragCancelled; // 0x0F28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewDraggingStateChanged; // 0x0F38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x0F48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x0F58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x0F68 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewScrolled; // 0x0F78 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewFinishedScrolling; // 0x0F88 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchStart; // 0x0F98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchMove; // 0x0FA8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchEnd; // 0x0FB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FScriptDelegate BP_OnIsItemSelectableOrNavigable; // 0x0FC8 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UAthenaAccoladeListWidget, WidgetStyle) == 1120, "Offset mismatch for UAthenaAccoladeListWidget::WidgetStyle");
static_assert(offsetof(UAthenaAccoladeListWidget, ScrollBarStyle) == 1312, "Offset mismatch for UAthenaAccoladeListWidget::ScrollBarStyle");
static_assert(offsetof(UAthenaAccoladeListWidget, bEnableShadowBrush) == 2928, "Offset mismatch for UAthenaAccoladeListWidget::bEnableShadowBrush");
static_assert(offsetof(UAthenaAccoladeListWidget, ShadowBrushStyle) == 2944, "Offset mismatch for UAthenaAccoladeListWidget::ShadowBrushStyle");
static_assert(offsetof(UAthenaAccoladeListWidget, orientation) == 3696, "Offset mismatch for UAthenaAccoladeListWidget::orientation");
static_assert(offsetof(UAthenaAccoladeListWidget, SelectionMode) == 3697, "Offset mismatch for UAthenaAccoladeListWidget::SelectionMode");
static_assert(offsetof(UAthenaAccoladeListWidget, ConsumeMouseWheel) == 3698, "Offset mismatch for UAthenaAccoladeListWidget::ConsumeMouseWheel");
static_assert(offsetof(UAthenaAccoladeListWidget, bClearSelectionOnClick) == 3699, "Offset mismatch for UAthenaAccoladeListWidget::bClearSelectionOnClick");
static_assert(offsetof(UAthenaAccoladeListWidget, bIsFocusable) == 3700, "Offset mismatch for UAthenaAccoladeListWidget::bIsFocusable");
static_assert(offsetof(UAthenaAccoladeListWidget, bClearScrollVelocityOnSelection) == 3701, "Offset mismatch for UAthenaAccoladeListWidget::bClearScrollVelocityOnSelection");
static_assert(offsetof(UAthenaAccoladeListWidget, bReturnFocusToSelection) == 3702, "Offset mismatch for UAthenaAccoladeListWidget::bReturnFocusToSelection");
static_assert(offsetof(UAthenaAccoladeListWidget, bEnableProximateEntryNavigation) == 3703, "Offset mismatch for UAthenaAccoladeListWidget::bEnableProximateEntryNavigation");
static_assert(offsetof(UAthenaAccoladeListWidget, ScrollIntoViewAlignment) == 3704, "Offset mismatch for UAthenaAccoladeListWidget::ScrollIntoViewAlignment");
static_assert(offsetof(UAthenaAccoladeListWidget, ListItems) == 3712, "Offset mismatch for UAthenaAccoladeListWidget::ListItems");
static_assert(offsetof(UAthenaAccoladeListWidget, HorizontalEntrySpacing) == 3744, "Offset mismatch for UAthenaAccoladeListWidget::HorizontalEntrySpacing");
static_assert(offsetof(UAthenaAccoladeListWidget, VerticalEntrySpacing) == 3748, "Offset mismatch for UAthenaAccoladeListWidget::VerticalEntrySpacing");
static_assert(offsetof(UAthenaAccoladeListWidget, ScrollBarPadding) == 3752, "Offset mismatch for UAthenaAccoladeListWidget::ScrollBarPadding");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnEntryInitialized) == 3768, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnEntryInitialized");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemClicked) == 3784, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemClicked");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemDoubleClicked) == 3800, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemDoubleClicked");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemDragDetected) == 3816, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemDragDetected");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemDragEnter) == 3832, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemDragEnter");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemDragLeave) == 3848, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemDragLeave");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemAcceptDrop) == 3864, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemAcceptDrop");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemDragCancelled) == 3880, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemDragCancelled");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewDraggingStateChanged) == 3896, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewDraggingStateChanged");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemIsHoveredChanged) == 3912, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemIsHoveredChanged");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemSelectionChanged) == 3928, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemSelectionChanged");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnItemScrolledIntoView) == 3944, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnItemScrolledIntoView");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewScrolled) == 3960, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewScrolled");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewFinishedScrolling) == 3976, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewFinishedScrolling");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewTouchStart) == 3992, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewTouchStart");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewTouchMove) == 4008, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewTouchMove");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnListViewTouchEnd) == 4024, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnListViewTouchEnd");
static_assert(offsetof(UAthenaAccoladeListWidget, BP_OnIsItemSelectableOrNavigable) == 4040, "Offset mismatch for UAthenaAccoladeListWidget::BP_OnIsItemSelectableOrNavigable");

// /Script/AccoladesUI.AthenaAccoladeWrapper
// Kind: Class; super: Object
class UAthenaAccoladeWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AccoladeRowName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t AccoladeData[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaAccoladeWrapper, AccoladeRowName) == 40, "Offset mismatch for UAthenaAccoladeWrapper::AccoladeRowName");
static_assert(offsetof(UAthenaAccoladeWrapper, AccoladeData) == 44, "Offset mismatch for UAthenaAccoladeWrapper::AccoladeData");
