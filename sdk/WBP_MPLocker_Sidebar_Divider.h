/**
 * decamp dumper generated SDK
 * Package: /Locker/MPL/WBP_MPLocker_Sidebar_Divider
 */
#pragma once
#include "Basic.h"

// /Locker/MPL/WBP_MPLocker_Sidebar_Divider.WBP_MPLocker_Sidebar_Divider_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_MPLocker_Sidebar_Divider_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* DividerBar; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_MPLocker_Sidebar_Divider_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_MPLocker_Sidebar_Divider_C::UberGraphFrame");
static_assert(offsetof(UWBP_MPLocker_Sidebar_Divider_C, DividerBar) == 784, "Offset mismatch for UWBP_MPLocker_Sidebar_Divider_C::DividerBar");
