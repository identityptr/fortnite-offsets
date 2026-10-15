/**
 * decamp dumper generated SDK
 * Package: /Sidebar/WBP_Sidebar
 */
#pragma once
#include "Basic.h"

// /Sidebar/WBP_Sidebar.WBP_Sidebar_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_Sidebar_C
{
public:
    std::uint8_t None[0x4A0]; // 0x0000 (Size: 0x4A0, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* WBP_SidebarYouTab_Button_V2; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Sidebar_Cilantro_CoachMark; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* WBP_CaptureForPostBufferUpdate; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* TabGroupContainer; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* TabBackplate; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* SpacerForCoachmarks; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Sidebar; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* SafeZone; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* PanelsSlottingHost; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* OverlaySlottingHost; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* MainTabGroup; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* FortVisualAttachment; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* Backplate; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* FortSidebarVM; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* FortSidebarNavigationVM; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* FortPlatformEventVM; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* NavigationUIComponent_0_Sidebar_Root; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PanelTags; // 0x0530 (Size: 0x10, Type: MapProperty)
    std::uint8_t StateTreeHandle[0x8]; // 0x0540 (Size: 0x8, Type: StructProperty)
    double SidebarWidth; // 0x0548 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0550
    std::uint8_t SafeZonePadding[0x10]; // 0x0554 (Size: 0x10, Type: StructProperty)
    std::uint8_t IsLiked; // 0x0564 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsDisliked; // 0x0565 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0566
    std::uint8_t InitialSlottingHostPadding[0x1]; // 0x0568 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_Sidebar_C, None) == 0, "Offset mismatch for UWBP_Sidebar_C::None");
static_assert(offsetof(UWBP_Sidebar_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_Sidebar_C::UberGraphFrame");
static_assert(offsetof(UWBP_Sidebar_C, WBP_SidebarYouTab_Button_V2) == 1192, "Offset mismatch for UWBP_Sidebar_C::WBP_SidebarYouTab_Button_V2");
static_assert(offsetof(UWBP_Sidebar_C, WBP_Sidebar_Cilantro_CoachMark) == 1200, "Offset mismatch for UWBP_Sidebar_C::WBP_Sidebar_Cilantro_CoachMark");
static_assert(offsetof(UWBP_Sidebar_C, WBP_CaptureForPostBufferUpdate) == 1208, "Offset mismatch for UWBP_Sidebar_C::WBP_CaptureForPostBufferUpdate");
static_assert(offsetof(UWBP_Sidebar_C, TabGroupContainer) == 1216, "Offset mismatch for UWBP_Sidebar_C::TabGroupContainer");
static_assert(offsetof(UWBP_Sidebar_C, TabBackplate) == 1224, "Offset mismatch for UWBP_Sidebar_C::TabBackplate");
static_assert(offsetof(UWBP_Sidebar_C, SpacerForCoachmarks) == 1232, "Offset mismatch for UWBP_Sidebar_C::SpacerForCoachmarks");
static_assert(offsetof(UWBP_Sidebar_C, SizeBox_Sidebar) == 1240, "Offset mismatch for UWBP_Sidebar_C::SizeBox_Sidebar");
static_assert(offsetof(UWBP_Sidebar_C, SafeZone) == 1248, "Offset mismatch for UWBP_Sidebar_C::SafeZone");
static_assert(offsetof(UWBP_Sidebar_C, PanelsSlottingHost) == 1256, "Offset mismatch for UWBP_Sidebar_C::PanelsSlottingHost");
static_assert(offsetof(UWBP_Sidebar_C, OverlaySlottingHost) == 1264, "Offset mismatch for UWBP_Sidebar_C::OverlaySlottingHost");
static_assert(offsetof(UWBP_Sidebar_C, MainTabGroup) == 1272, "Offset mismatch for UWBP_Sidebar_C::MainTabGroup");
static_assert(offsetof(UWBP_Sidebar_C, FortVisualAttachment) == 1280, "Offset mismatch for UWBP_Sidebar_C::FortVisualAttachment");
static_assert(offsetof(UWBP_Sidebar_C, Backplate) == 1288, "Offset mismatch for UWBP_Sidebar_C::Backplate");
static_assert(offsetof(UWBP_Sidebar_C, FortSidebarVM) == 1296, "Offset mismatch for UWBP_Sidebar_C::FortSidebarVM");
static_assert(offsetof(UWBP_Sidebar_C, FortSidebarNavigationVM) == 1304, "Offset mismatch for UWBP_Sidebar_C::FortSidebarNavigationVM");
static_assert(offsetof(UWBP_Sidebar_C, FortPlatformEventVM) == 1312, "Offset mismatch for UWBP_Sidebar_C::FortPlatformEventVM");
static_assert(offsetof(UWBP_Sidebar_C, NavigationUIComponent_0_Sidebar_Root) == 1320, "Offset mismatch for UWBP_Sidebar_C::NavigationUIComponent_0_Sidebar_Root");
static_assert(offsetof(UWBP_Sidebar_C, PanelTags) == 1328, "Offset mismatch for UWBP_Sidebar_C::PanelTags");
static_assert(offsetof(UWBP_Sidebar_C, StateTreeHandle) == 1344, "Offset mismatch for UWBP_Sidebar_C::StateTreeHandle");
static_assert(offsetof(UWBP_Sidebar_C, SidebarWidth) == 1352, "Offset mismatch for UWBP_Sidebar_C::SidebarWidth");
static_assert(offsetof(UWBP_Sidebar_C, SafeZonePadding) == 1364, "Offset mismatch for UWBP_Sidebar_C::SafeZonePadding");
static_assert(offsetof(UWBP_Sidebar_C, IsLiked) == 1380, "Offset mismatch for UWBP_Sidebar_C::IsLiked");
static_assert(offsetof(UWBP_Sidebar_C, IsDisliked) == 1381, "Offset mismatch for UWBP_Sidebar_C::IsDisliked");
static_assert(offsetof(UWBP_Sidebar_C, InitialSlottingHostPadding) == 1384, "Offset mismatch for UWBP_Sidebar_C::InitialSlottingHostPadding");
