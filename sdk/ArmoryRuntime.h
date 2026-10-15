/**
 * decamp dumper generated SDK
 * Package: /Script/ArmoryRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ArmoryRuntime.FortWeaponComponentData
// Kind: ScriptStruct; super: none
struct FFortWeaponComponentData
{
public:
    TWeakObjectPtr<void> WeakWeapon; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakRootInventory; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ItemID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortWeaponComponentData, WeakWeapon) == 0, "Offset mismatch for FFortWeaponComponentData::WeakWeapon");
static_assert(offsetof(FFortWeaponComponentData, WeakRootInventory) == 8, "Offset mismatch for FFortWeaponComponentData::WeakRootInventory");
static_assert(offsetof(FFortWeaponComponentData, ItemID) == 16, "Offset mismatch for FFortWeaponComponentData::ItemID");
