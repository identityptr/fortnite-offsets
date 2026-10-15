/**
 * decamp dumper generated SDK
 * Package: /Script/LootInjectionCommonUI
 */
#pragma once
#include "Basic.h"

// /Script/LootInjectionCommonUI.LootInjectionOptionVM
// Kind: Class; super: MVVMViewModelBase
class ULootInjectionOptionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> UpgradeVMs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULootInjectionOptionVM, UpgradeVMs) == 104, "Offset mismatch for ULootInjectionOptionVM::UpgradeVMs");

// /Script/LootInjectionCommonUI.LootInjectionUpgradeVM
// Kind: Class; super: MVVMViewModelBase
class ULootInjectionUpgradeVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LootInjectionCommonUI.LootInjectionVM
// Kind: Class; super: FortPerUserViewModel
class ULootInjectionVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> LootOptions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULootInjectionVM, LootOptions) == 120, "Offset mismatch for ULootInjectionVM::LootOptions");
