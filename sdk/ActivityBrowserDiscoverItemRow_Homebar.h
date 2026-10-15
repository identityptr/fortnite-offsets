/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar.ActivityBrowserDiscoverItemRow_Homebar_C
// Kind: WidgetBlueprintGeneratedClass; super: FortDiscoverItemBrowserRow
class UActivityBrowserDiscoverItemRow_Homebar_C
{
public:
    std::uint8_t Pad_0000[0x608]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0608 (Size: 0x8, Type: StructProperty)
    void* WBP_LoadingMorePages; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* VBContent; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* InactiveOverlayDim; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* InactiveDarken; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* OnRowActiveInactiveAnim; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* OnRowMoveUpOutOfViewAnim; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    void* OnRowMoveDownIntoView; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    void* OnPeek; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    void* OnLoadingMore; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    void* AthenaLobbyStateViewModel; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ArrowButtons; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FontHoverAnimateParam[0x4]; // 0x0670 (Size: 0x4, Type: NameProperty)
    std::uint8_t FontPressedAnimateParam[0x4]; // 0x0674 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsWaitingForInactiveAnim; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0679
    double LoadingMoreDisplayDelay; // 0x0680 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsLoadingMoreVisible; // 0x0688 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsLoadingMoreQueryActive; // 0x0689 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x068A
    std::uint8_t LoadingMoreDelayTimer[0x8]; // 0x0690 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate OnRowBroadcastClickToDiscover; // 0x0698 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    double EntriesSpacing; // 0x06A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0003[0x10]; // 0x06B0
    std::uint8_t bChecksVisibilityOnPaint; // 0x06C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, UberGraphFrame) == 1544, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::UberGraphFrame");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, WBP_LoadingMorePages) == 1552, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::WBP_LoadingMorePages");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, VBContent) == 1560, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::VBContent");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, InactiveOverlayDim) == 1568, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::InactiveOverlayDim");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, InactiveDarken) == 1576, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::InactiveDarken");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnRowActiveInactiveAnim) == 1584, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnRowActiveInactiveAnim");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnRowMoveUpOutOfViewAnim) == 1592, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnRowMoveUpOutOfViewAnim");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnRowMoveDownIntoView) == 1600, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnRowMoveDownIntoView");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnPeek) == 1608, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnPeek");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnLoadingMore) == 1616, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnLoadingMore");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, AthenaLobbyStateViewModel) == 1624, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::AthenaLobbyStateViewModel");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, ArrowButtons) == 1632, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::ArrowButtons");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, FontHoverAnimateParam) == 1648, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::FontHoverAnimateParam");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, FontPressedAnimateParam) == 1652, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::FontPressedAnimateParam");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, IsWaitingForInactiveAnim) == 1656, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::IsWaitingForInactiveAnim");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, LoadingMoreDisplayDelay) == 1664, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::LoadingMoreDisplayDelay");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, IsLoadingMoreVisible) == 1672, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::IsLoadingMoreVisible");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, IsLoadingMoreQueryActive) == 1673, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::IsLoadingMoreQueryActive");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, LoadingMoreDelayTimer) == 1680, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::LoadingMoreDelayTimer");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, OnRowBroadcastClickToDiscover) == 1688, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::OnRowBroadcastClickToDiscover");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, EntriesSpacing) == 1704, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::EntriesSpacing");
static_assert(offsetof(UActivityBrowserDiscoverItemRow_Homebar_C, bChecksVisibilityOnPaint) == 1728, "Offset mismatch for UActivityBrowserDiscoverItemRow_Homebar_C::bChecksVisibilityOnPaint");
