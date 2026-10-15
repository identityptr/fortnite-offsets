/**
 * decamp dumper generated SDK
 * Package: /Script/JethroXVUI
 */
#pragma once
#include "Basic.h"

// /Script/JethroXVUI.JethroXV_Quickbar_ViewModel
// Kind: Class; super: MVVMViewModelBase
class UJethroXV_Quickbar_ViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t ActiveWeaponSlot; // 0x0090 (Size: 0x4, Type: IntProperty)
    float CurrentTorpedoCooldownTime; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float NormalizedTorpedoCooldownTime; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowCooldown; // 0x009C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJethroXV_Quickbar_ViewModel, ActiveWeaponSlot) == 144, "Offset mismatch for UJethroXV_Quickbar_ViewModel::ActiveWeaponSlot");
static_assert(offsetof(UJethroXV_Quickbar_ViewModel, CurrentTorpedoCooldownTime) == 148, "Offset mismatch for UJethroXV_Quickbar_ViewModel::CurrentTorpedoCooldownTime");
static_assert(offsetof(UJethroXV_Quickbar_ViewModel, NormalizedTorpedoCooldownTime) == 152, "Offset mismatch for UJethroXV_Quickbar_ViewModel::NormalizedTorpedoCooldownTime");
static_assert(offsetof(UJethroXV_Quickbar_ViewModel, bShowCooldown) == 156, "Offset mismatch for UJethroXV_Quickbar_ViewModel::bShowCooldown");
