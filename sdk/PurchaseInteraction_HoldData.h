/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Input/PurchaseInteraction_HoldData
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Input/PurchaseInteraction_HoldData.PurchaseInteraction_HoldData_C
// Kind: BlueprintGeneratedClass; super: CommonUIHoldData
class UPurchaseInteraction_HoldData_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t KeyboardAndMouse[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Gamepad[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t Touch[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPurchaseInteraction_HoldData_C, KeyboardAndMouse) == 40, "Offset mismatch for UPurchaseInteraction_HoldData_C::KeyboardAndMouse");
static_assert(offsetof(UPurchaseInteraction_HoldData_C, Gamepad) == 48, "Offset mismatch for UPurchaseInteraction_HoldData_C::Gamepad");
static_assert(offsetof(UPurchaseInteraction_HoldData_C, Touch) == 56, "Offset mismatch for UPurchaseInteraction_HoldData_C::Touch");
