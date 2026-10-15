/**
 * decamp dumper generated SDK
 * Package: /Sidebar/Buttons/WBP_SidebarTab_Button
 */
#pragma once
#include "Basic.h"

// /Sidebar/Buttons/WBP_SidebarTab_Button.WBP_SidebarTab_Button_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_Sidebar_ButtonGeneric_C
class UWBP_SidebarTab_Button_C
{
public:
    std::uint8_t Pad_0000[0x19A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x19A0 (Size: 0x8, Type: StructProperty)
    void* FortSidebarFeatureVM; // 0x19A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_SidebarTab_Button_C, UberGraphFrame) == 6560, "Offset mismatch for UWBP_SidebarTab_Button_C::UberGraphFrame");
static_assert(offsetof(UWBP_SidebarTab_Button_C, FortSidebarFeatureVM) == 6568, "Offset mismatch for UWBP_SidebarTab_Button_C::FortSidebarFeatureVM");
