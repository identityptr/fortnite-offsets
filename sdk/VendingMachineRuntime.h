/**
 * decamp dumper generated SDK
 * Package: /Script/VendingMachineRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VendingMachineRuntime.VendingMachinePlayerControllerComponent
// Kind: Class; super: FortControllerComponent
class UVendingMachinePlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> InventoryItemsToListenTo; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVendingMachinePlayerControllerComponent, InventoryItemsToListenTo) == 200, "Offset mismatch for UVendingMachinePlayerControllerComponent::InventoryItemsToListenTo");
