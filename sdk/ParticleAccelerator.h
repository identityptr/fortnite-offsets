/**
 * decamp dumper generated SDK
 * Package: /Script/ParticleAccelerator
 */
#pragma once
#include "Basic.h"

// /Script/ParticleAccelerator.ParticleAccelerator_TunnelSpline
// Kind: Class; super: BuildingGameplayActor
class UParticleAccelerator_TunnelSpline
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* OwnedSplineComponent; // 0x0920 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UParticleAccelerator_TunnelSpline, OwnedSplineComponent) == 2336, "Offset mismatch for UParticleAccelerator_TunnelSpline::OwnedSplineComponent");
