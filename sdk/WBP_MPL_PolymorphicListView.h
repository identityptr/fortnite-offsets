/**
 * decamp dumper generated SDK
 * Package: /MyLoadout/Assets/WBP_MPL_PolymorphicListView
 */
#pragma once
#include "Basic.h"

// /MyLoadout/Assets/WBP_MPL_PolymorphicListView.WBP_MPL_PolymorphicListView_C
// Kind: WidgetBlueprintGeneratedClass; super: FortPolymorphicListView
class UWBP_MPL_PolymorphicListView_C
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0348 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate OnItemSelectionChanged; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnItemScrolledIntoView; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnListViewScrolled; // 0x0370 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0380
    TArray<void*> ListCategoryGroupItems; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentEntryIndex; // 0x03B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03B4
    FMulticastInlineDelegate OnEntryReleased; // 0x03B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03C8
    std::uint8_t CurrentIsDirectionUp; // 0x03CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentShouldApplyFocus; // 0x03CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x03CE
    void* BottomEntryObject; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* LockerFullRef; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, UberGraphFrame) == 840, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::UberGraphFrame");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, OnItemSelectionChanged) == 848, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::OnItemSelectionChanged");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, OnItemScrolledIntoView) == 864, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::OnItemScrolledIntoView");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, OnListViewScrolled) == 880, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::OnListViewScrolled");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, ListCategoryGroupItems) == 928, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::ListCategoryGroupItems");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, CurrentEntryIndex) == 944, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::CurrentEntryIndex");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, OnEntryReleased) == 952, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::OnEntryReleased");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, CurrentIsDirectionUp) == 972, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::CurrentIsDirectionUp");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, CurrentShouldApplyFocus) == 973, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::CurrentShouldApplyFocus");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, BottomEntryObject) == 976, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::BottomEntryObject");
static_assert(offsetof(UWBP_MPL_PolymorphicListView_C, LockerFullRef) == 984, "Offset mismatch for UWBP_MPL_PolymorphicListView_C::LockerFullRef");
