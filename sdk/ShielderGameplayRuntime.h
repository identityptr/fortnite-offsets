/**
 * decamp dumper generated SDK
 * Package: /Script/ShielderGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ShielderGameplayRuntime.ShielderCollisionHelperComponent
// Kind: Class; super: GameFrameworkComponent
class UShielderCollisionHelperComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ShielderBGA; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StaticOffset[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimOffset[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimOffset2D[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    float PitchMultiplier; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PitchMin; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PitchMax; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t ShouldUpdateShielderSkelMesh[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UShielderCollisionHelperComponent, ShielderBGA) == 192, "Offset mismatch for UShielderCollisionHelperComponent::ShielderBGA");
static_assert(offsetof(UShielderCollisionHelperComponent, StaticOffset) == 200, "Offset mismatch for UShielderCollisionHelperComponent::StaticOffset");
static_assert(offsetof(UShielderCollisionHelperComponent, AimOffset) == 224, "Offset mismatch for UShielderCollisionHelperComponent::AimOffset");
static_assert(offsetof(UShielderCollisionHelperComponent, AimOffset2D) == 248, "Offset mismatch for UShielderCollisionHelperComponent::AimOffset2D");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMultiplier) == 272, "Offset mismatch for UShielderCollisionHelperComponent::PitchMultiplier");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMin) == 276, "Offset mismatch for UShielderCollisionHelperComponent::PitchMin");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMax) == 280, "Offset mismatch for UShielderCollisionHelperComponent::PitchMax");
static_assert(offsetof(UShielderCollisionHelperComponent, ShouldUpdateShielderSkelMesh) == 288, "Offset mismatch for UShielderCollisionHelperComponent::ShouldUpdateShielderSkelMesh");
