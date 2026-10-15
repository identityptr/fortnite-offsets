/**
 * decamp dumper generated SDK
 * Package: /Script/DistortedWeaponsUI
 */
#pragma once
#include "Basic.h"

// /Script/DistortedWeaponsUI.ChromeWeaponInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UChromeWeaponInfoWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* HUDContext; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* CurrentXpComponent; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* ItemTierWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* KeyBindWidget; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UChromeWeaponInfoWidget, HUDContext) == 880, "Offset mismatch for UChromeWeaponInfoWidget::HUDContext");
static_assert(offsetof(UChromeWeaponInfoWidget, CurrentXpComponent) == 888, "Offset mismatch for UChromeWeaponInfoWidget::CurrentXpComponent");
static_assert(offsetof(UChromeWeaponInfoWidget, ItemTierWidget) == 896, "Offset mismatch for UChromeWeaponInfoWidget::ItemTierWidget");
static_assert(offsetof(UChromeWeaponInfoWidget, KeyBindWidget) == 904, "Offset mismatch for UChromeWeaponInfoWidget::KeyBindWidget");
