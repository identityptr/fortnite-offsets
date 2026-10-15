/**
 * decamp dumper generated SDK
 * Package: /BattleRoyaleContent/Components/BP_ControllerComponent_GlobalCurrency
 */
#pragma once
#include "Basic.h"

// /BattleRoyaleContent/Components/BP_ControllerComponent_GlobalCurrency.BP_ControllerComponent_GlobalCurrency_C
// Kind: BlueprintGeneratedClass; super: FortControllerComponent_GlobalCurrency
class UBP_ControllerComponent_GlobalCurrency_C
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bBoundToRegisteredPlayerInfo; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    std::uint8_t GlobalCurrencyData[0x1C]; // 0x00D4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ShouldDropCurrencyOnDeath[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldRemoveLostCurrency[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t NumDeathsThatDropCurrency[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t InventoryServiceEnabled[0x30]; // 0x0168 (Size: 0x30, Type: StructProperty)
    std::uint8_t GlobalCurrencyTrackedData[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, bBoundToRegisteredPlayerInfo) == 208, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::bBoundToRegisteredPlayerInfo");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, GlobalCurrencyData) == 212, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::GlobalCurrencyData");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, ShouldDropCurrencyOnDeath) == 240, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::ShouldDropCurrencyOnDeath");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, ShouldRemoveLostCurrency) == 280, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::ShouldRemoveLostCurrency");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, NumDeathsThatDropCurrency) == 320, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::NumDeathsThatDropCurrency");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, InventoryServiceEnabled) == 360, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::InventoryServiceEnabled");
static_assert(offsetof(UBP_ControllerComponent_GlobalCurrency_C, GlobalCurrencyTrackedData) == 408, "Offset mismatch for UBP_ControllerComponent_GlobalCurrency_C::GlobalCurrencyTrackedData");
