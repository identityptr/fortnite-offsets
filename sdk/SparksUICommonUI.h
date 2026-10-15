/**
 * decamp dumper generated SDK
 * Package: /Script/SparksUICommonUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksUICommonUI.SparksListView
// Kind: Class; super: CommonListView
class USparksListView
{
public:
    std::uint8_t Pad_0000[0xFE0]; // 0x0000
    std::uint8_t bSelectOnTouchScroll; // 0x0FE0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0FE1
    float TouchSelectTriggerDistance; // 0x0FE4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDiscardTouchOnCrossAxisDistance; // 0x0FE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0FE9
    float TouchDiscardCrossAxisTriggerDistance; // 0x0FEC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0FF0
    std::uint8_t PressedScreenSpacePosition[0x8]; // 0x1000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsTouchDragging; // 0x1008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x1009
    FMulticastInlineDelegate BP_OnListTouchStarted; // 0x1010 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListTouchMoved; // 0x1020 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListTouchEnded; // 0x1030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USparksListView, bSelectOnTouchScroll) == 4064, "Offset mismatch for USparksListView::bSelectOnTouchScroll");
static_assert(offsetof(USparksListView, TouchSelectTriggerDistance) == 4068, "Offset mismatch for USparksListView::TouchSelectTriggerDistance");
static_assert(offsetof(USparksListView, bDiscardTouchOnCrossAxisDistance) == 4072, "Offset mismatch for USparksListView::bDiscardTouchOnCrossAxisDistance");
static_assert(offsetof(USparksListView, TouchDiscardCrossAxisTriggerDistance) == 4076, "Offset mismatch for USparksListView::TouchDiscardCrossAxisTriggerDistance");
static_assert(offsetof(USparksListView, PressedScreenSpacePosition) == 4096, "Offset mismatch for USparksListView::PressedScreenSpacePosition");
static_assert(offsetof(USparksListView, bIsTouchDragging) == 4104, "Offset mismatch for USparksListView::bIsTouchDragging");
static_assert(offsetof(USparksListView, BP_OnListTouchStarted) == 4112, "Offset mismatch for USparksListView::BP_OnListTouchStarted");
static_assert(offsetof(USparksListView, BP_OnListTouchMoved) == 4128, "Offset mismatch for USparksListView::BP_OnListTouchMoved");
static_assert(offsetof(USparksListView, BP_OnListTouchEnded) == 4144, "Offset mismatch for USparksListView::BP_OnListTouchEnded");
