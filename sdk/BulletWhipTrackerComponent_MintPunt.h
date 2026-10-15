/**
 * decamp dumper generated SDK
 * Package: /MintPunt/Assets/Audio/BulletWhipTrackerComponent_MintPunt
 */
#pragma once
#include "Basic.h"

// /MintPunt/Assets/Audio/BulletWhipTrackerComponent_MintPunt.BulletWhipTrackerComponent_MintPunt_C
// Kind: BlueprintGeneratedClass; super: none
class UBulletWhipTrackerComponent_MintPunt_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> WhipTrackerData; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableGravityCheck; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    float FadeTimeOnProjectileStop; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x30]; // 0x00D8
    void* CachedPassByPawn; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBulletWhipTrackerComponent_MintPunt_C, WhipTrackerData) == 192, "Offset mismatch for UBulletWhipTrackerComponent_MintPunt_C::WhipTrackerData");
static_assert(offsetof(UBulletWhipTrackerComponent_MintPunt_C, bEnableGravityCheck) == 208, "Offset mismatch for UBulletWhipTrackerComponent_MintPunt_C::bEnableGravityCheck");
static_assert(offsetof(UBulletWhipTrackerComponent_MintPunt_C, FadeTimeOnProjectileStop) == 212, "Offset mismatch for UBulletWhipTrackerComponent_MintPunt_C::FadeTimeOnProjectileStop");
static_assert(offsetof(UBulletWhipTrackerComponent_MintPunt_C, CachedPassByPawn) == 264, "Offset mismatch for UBulletWhipTrackerComponent_MintPunt_C::CachedPassByPawn");
