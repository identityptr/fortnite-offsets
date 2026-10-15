/**
 * decamp dumper generated SDK
 * Package: /Script/SpecialSurfaceCoverageRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
// Kind: Class; super: FortGameStateComponent_SurfaceOverride
class UFortGameStateComponent_SurfaceCoverageMap
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SpecialSurfaceType; // 0x00C0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortGameStateComponent_SurfaceCoverageMap, SpecialSurfaceType) == 192, "Offset mismatch for UFortGameStateComponent_SurfaceCoverageMap::SpecialSurfaceType");
