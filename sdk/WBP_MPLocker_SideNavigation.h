/**
 * decamp dumper generated SDK
 * Package: /MyLoadout/Assets/WBP_MPLocker_SideNavigation
 */
#pragma once
#include "Basic.h"

// /MyLoadout/Assets/WBP_MPLocker_SideNavigation.WBP_MPLocker_SideNavigation_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_MPLocker_SideNavigation_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* UIKit_SideNavigation; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Mobile; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* ScaleBox_ClearBadges_Mobile; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Button_Hitbox; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* Button_ClearBadges; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0338
    void* FortItemSelectionVM; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0348
    FMulticastInlineDelegate OnClearBadgesClicked; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSideNavigationFocused; // 0x0368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSideNavigationUnfocused; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ShouldConsumeNextSelectionEvent; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsCollapsed; // 0x0389 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x038A
    double ElementsDesiredTextWidth; // 0x0390 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ContainerArrowSize[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    std::uint8_t IsTopCategorySelected; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03A9
    FMulticastInlineDelegate OnSideNavigationCollapsedChanged; // 0x03B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentMainTabID[0x4]; // 0x03C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t WaitForExpand; // 0x03C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x03C5
    void* SubTabToFocus; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::UberGraphFrame");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, UIKit_SideNavigation) == 784, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::UIKit_SideNavigation");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, SizeBox_Mobile) == 792, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::SizeBox_Mobile");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, ScaleBox_ClearBadges_Mobile) == 800, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::ScaleBox_ClearBadges_Mobile");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, Button_Hitbox) == 808, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::Button_Hitbox");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, Button_ClearBadges) == 816, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::Button_ClearBadges");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, FortItemSelectionVM) == 832, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::FortItemSelectionVM");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, OnClearBadgesClicked) == 856, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::OnClearBadgesClicked");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, OnSideNavigationFocused) == 872, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::OnSideNavigationFocused");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, OnSideNavigationUnfocused) == 888, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::OnSideNavigationUnfocused");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, ShouldConsumeNextSelectionEvent) == 904, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::ShouldConsumeNextSelectionEvent");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, IsCollapsed) == 905, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::IsCollapsed");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, ElementsDesiredTextWidth) == 912, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::ElementsDesiredTextWidth");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, ContainerArrowSize) == 920, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::ContainerArrowSize");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, IsTopCategorySelected) == 936, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::IsTopCategorySelected");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, OnSideNavigationCollapsedChanged) == 944, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::OnSideNavigationCollapsedChanged");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, CurrentMainTabID) == 960, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::CurrentMainTabID");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, WaitForExpand) == 964, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::WaitForExpand");
static_assert(offsetof(UWBP_MPLocker_SideNavigation_C, SubTabToFocus) == 968, "Offset mismatch for UWBP_MPLocker_SideNavigation_C::SubTabToFocus");
