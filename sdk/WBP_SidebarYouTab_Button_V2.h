/**
 * decamp dumper generated SDK
 * Package: /Sidebar/Buttons/WBP_SidebarYouTab_Button_V2
 */
#pragma once
#include "Basic.h"

// /Sidebar/Buttons/WBP_SidebarYouTab_Button_V2.WBP_SidebarYouTab_Button_V2_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_UIKit_Button_Generic_C
class UWBP_SidebarYouTab_Button_V2_C
{
public:
    std::uint8_t Pad_0000[0x19A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x19A0 (Size: 0x8, Type: StructProperty)
    void* LocalPlayerAvatar; // 0x19A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x19B0
    void* Close; // 0x19B8 (Size: 0x8, Type: ObjectProperty)
    void* FortSidebarFeatureVM; // 0x19C0 (Size: 0x8, Type: ObjectProperty)
    void* FortInputSystemVM; // 0x19C8 (Size: 0x8, Type: ObjectProperty)
    void* FortSidebarVM; // 0x19D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PresenceSelect_Online[0x10]; // 0x19D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Away[0x10]; // 0x19E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Offline[0x10]; // 0x19F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PresenceSelect_Blocked[0x40]; // 0x1A08 (Size: 0x40, Type: StructProperty)
    std::uint8_t InputAction_Translation[0x1]; // 0x1A48 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, UberGraphFrame) == 6560, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::UberGraphFrame");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, LocalPlayerAvatar) == 6568, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::LocalPlayerAvatar");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, Close) == 6584, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::Close");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, FortSidebarFeatureVM) == 6592, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::FortSidebarFeatureVM");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, FortInputSystemVM) == 6600, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::FortInputSystemVM");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, FortSidebarVM) == 6608, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::FortSidebarVM");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, PresenceSelect_Online) == 6616, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::PresenceSelect_Online");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, PresenceSelect_Away) == 6632, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::PresenceSelect_Away");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, PresenceSelect_Offline) == 6648, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::PresenceSelect_Offline");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, PresenceSelect_Blocked) == 6664, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::PresenceSelect_Blocked");
static_assert(offsetof(UWBP_SidebarYouTab_Button_V2_C, InputAction_Translation) == 6728, "Offset mismatch for UWBP_SidebarYouTab_Button_V2_C::InputAction_Translation");
