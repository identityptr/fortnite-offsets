/**
 * decamp dumper generated SDK
 * Package: /Script/BladeHazardRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BladeHazardRuntime.FortBladeHazard
// Kind: Class; super: BuildingGameplayActor
class UFortBladeHazard
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t SpinningDirection; // 0x0920 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0921
    TArray<void*> CustomForceDirections; // 0x0928 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortBladeHazard, SpinningDirection) == 2336, "Offset mismatch for UFortBladeHazard::SpinningDirection");
static_assert(offsetof(UFortBladeHazard, CustomForceDirections) == 2344, "Offset mismatch for UFortBladeHazard::CustomForceDirections");
