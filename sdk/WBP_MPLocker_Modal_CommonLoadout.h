/**
 * decamp dumper generated SDK
 * Package: /MyLoadout/Assets/WBP_MPLocker_Modal_CommonLoadout
 */
#pragma once
#include "Basic.h"

// /MyLoadout/Assets/WBP_MPLocker_Modal_CommonLoadout.WBP_MPLocker_Modal_CommonLoadout_C
// Kind: WidgetBlueprintGeneratedClass; super: FortSaveLoadoutPopup
class UWBP_MPLocker_Modal_CommonLoadout_C
{
public:
    std::uint8_t Pad_0000[0x5A8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x05A8 (Size: 0x8, Type: StructProperty)
    void* Text_Loadoutname; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* SBox_LoadoutPreview; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* HB_Buttons; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    void* Dialog_Internal; // 0x05C8 (Size: 0x8, Type: ObjectProperty)
    void* Card_Loadout; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Accept; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* FortCommonLoadoutsVM; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* DialogVM; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate ClearLoadout; // 0x05F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0608
    void* TargetCommonLoadout; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RetainFocus; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0619
    FText LoadoutName; // 0x0620 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, UberGraphFrame) == 1448, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::UberGraphFrame");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, Text_Loadoutname) == 1456, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::Text_Loadoutname");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, SBox_LoadoutPreview) == 1464, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::SBox_LoadoutPreview");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, HB_Buttons) == 1472, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::HB_Buttons");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, Dialog_Internal) == 1480, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::Dialog_Internal");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, Card_Loadout) == 1488, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::Card_Loadout");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, Button_Cancel) == 1496, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::Button_Cancel");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, Button_Accept) == 1504, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::Button_Accept");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, FortCommonLoadoutsVM) == 1512, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::FortCommonLoadoutsVM");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, DialogVM) == 1520, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::DialogVM");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, ClearLoadout) == 1528, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::ClearLoadout");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, TargetCommonLoadout) == 1552, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::TargetCommonLoadout");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, RetainFocus) == 1560, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::RetainFocus");
static_assert(offsetof(UWBP_MPLocker_Modal_CommonLoadout_C, LoadoutName) == 1568, "Offset mismatch for UWBP_MPLocker_Modal_CommonLoadout_C::LoadoutName");
