/**
 * decamp dumper generated SDK
 * Package: /Script/AloeCroutonWeaponRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AloeCroutonWeaponRuntime.FortChargingSet_AloeCrouton
// Kind: Class; super: FortChargingSet_Base
class UFortChargingSet_AloeCrouton
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Charge[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCharge[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChargeRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChargeIncrementAmount[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChargeRegenThreshold[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerTimeChargeIncrements[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_AloeCrouton, Charge) == 96, "Offset mismatch for UFortChargingSet_AloeCrouton::Charge");
static_assert(offsetof(UFortChargingSet_AloeCrouton, MaxCharge) == 136, "Offset mismatch for UFortChargingSet_AloeCrouton::MaxCharge");
static_assert(offsetof(UFortChargingSet_AloeCrouton, ChargeRate) == 176, "Offset mismatch for UFortChargingSet_AloeCrouton::ChargeRate");
static_assert(offsetof(UFortChargingSet_AloeCrouton, ChargeIncrementAmount) == 216, "Offset mismatch for UFortChargingSet_AloeCrouton::ChargeIncrementAmount");
static_assert(offsetof(UFortChargingSet_AloeCrouton, ChargeRegenThreshold) == 256, "Offset mismatch for UFortChargingSet_AloeCrouton::ChargeRegenThreshold");
static_assert(offsetof(UFortChargingSet_AloeCrouton, ServerTimeChargeIncrements) == 296, "Offset mismatch for UFortChargingSet_AloeCrouton::ServerTimeChargeIncrements");

// /Script/AloeCroutonWeaponRuntime.FortCosmeticStatObject_AloeCroutonCharge
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_AloeCroutonCharge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName StatName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CachedStatValues; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* OwningSubsystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_AloeCroutonCharge, StatName) == 40, "Offset mismatch for UFortCosmeticStatObject_AloeCroutonCharge::StatName");
static_assert(offsetof(UFortCosmeticStatObject_AloeCroutonCharge, CachedStatValues) == 48, "Offset mismatch for UFortCosmeticStatObject_AloeCroutonCharge::CachedStatValues");
static_assert(offsetof(UFortCosmeticStatObject_AloeCroutonCharge, OwningSubsystem) == 64, "Offset mismatch for UFortCosmeticStatObject_AloeCroutonCharge::OwningSubsystem");
