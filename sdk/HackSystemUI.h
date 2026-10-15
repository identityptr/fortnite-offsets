/**
 * decamp dumper generated SDK
 * Package: /Script/HackSystemUI
 */
#pragma once
#include "Basic.h"

// /Script/HackSystemUI.HackSystemCartridgeDataViewModel
// Kind: Class; super: MVVMViewModelBase
class UHackSystemCartridgeDataViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemUI.HackSystemUIViewModel
// Kind: Class; super: FortPerUserViewModel
class UHackSystemUIViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AccountHackCartridges; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InventoryHackCartridges; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHackSystemUIViewModel, AccountHackCartridges) == 120, "Offset mismatch for UHackSystemUIViewModel::AccountHackCartridges");
static_assert(offsetof(UHackSystemUIViewModel, InventoryHackCartridges) == 136, "Offset mismatch for UHackSystemUIViewModel::InventoryHackCartridges");
