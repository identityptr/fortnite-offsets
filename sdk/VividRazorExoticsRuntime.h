/**
 * decamp dumper generated SDK
 * Package: /Script/VividRazorExoticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VividRazorExoticsRuntime.FortChargingSet_SlapCannon
// Kind: Class; super: FortChargingSet_Base
class UFortChargingSet_SlapCannon
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Charge[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCharge[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChargeRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerTimeChargeIncrements[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_SlapCannon, Charge) == 96, "Offset mismatch for UFortChargingSet_SlapCannon::Charge");
static_assert(offsetof(UFortChargingSet_SlapCannon, MaxCharge) == 136, "Offset mismatch for UFortChargingSet_SlapCannon::MaxCharge");
static_assert(offsetof(UFortChargingSet_SlapCannon, ChargeRate) == 176, "Offset mismatch for UFortChargingSet_SlapCannon::ChargeRate");
static_assert(offsetof(UFortChargingSet_SlapCannon, ServerTimeChargeIncrements) == 216, "Offset mismatch for UFortChargingSet_SlapCannon::ServerTimeChargeIncrements");
