/**
 * decamp dumper generated SDK
 * Package: /Script/VictoryCrownsReadRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_HasCrown
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_HasCrown
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* VictoryCrownAccountItemDefinition; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_HasCrown, VictoryCrownAccountItemDefinition) == 72, "Offset mismatch for UFortCosmeticStatObject_HasCrown::VictoryCrownAccountItemDefinition");

// /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalRoyalRoyales
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_TotalRoyalRoyales
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* VictoryCrownAccountItemDefinition; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_TotalRoyalRoyales, VictoryCrownAccountItemDefinition) == 72, "Offset mismatch for UFortCosmeticStatObject_TotalRoyalRoyales::VictoryCrownAccountItemDefinition");

// /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalVictoryCrowns
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_TotalVictoryCrowns
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* VictoryCrownAccountItemDefinition; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_TotalVictoryCrowns, VictoryCrownAccountItemDefinition) == 72, "Offset mismatch for UFortCosmeticStatObject_TotalVictoryCrowns::VictoryCrownAccountItemDefinition");

// /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_UsePremiumColors
// Kind: Class; super: FortCosmeticStatObject
class UFortCosmeticStatObject_UsePremiumColors
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName StatName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> CachedStatValues; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* OwningSubsystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCosmeticStatObject_UsePremiumColors, StatName) == 40, "Offset mismatch for UFortCosmeticStatObject_UsePremiumColors::StatName");
static_assert(offsetof(UFortCosmeticStatObject_UsePremiumColors, CachedStatValues) == 48, "Offset mismatch for UFortCosmeticStatObject_UsePremiumColors::CachedStatValues");
static_assert(offsetof(UFortCosmeticStatObject_UsePremiumColors, OwningSubsystem) == 64, "Offset mismatch for UFortCosmeticStatObject_UsePremiumColors::OwningSubsystem");

// /Script/VictoryCrownsReadRuntime.FortVictoryCrownInterface
// Kind: Class; super: Interface
class UFortVictoryCrownInterface
{
public:
    std::uint8_t Opaque[1];
};
