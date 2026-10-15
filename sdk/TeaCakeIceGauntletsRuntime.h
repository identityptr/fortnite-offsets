/**
 * decamp dumper generated SDK
 * Package: /Script/TeaCakeIceGauntletsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TeaCakeIceGauntletsRuntime.IceGauntletsLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UIceGauntletsLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float CustomPelvisTwist; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float PawnAimYaw; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float PawnAimPitch; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFiringPrimary; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCustomMeleeTwist; // 0x117D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryFire; // 0x117E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x117F
    TSoftObjectPtr<void> TeaCakeIceGauntletsSecondaryFireMontage; // 0x1180 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UIceGauntletsLayerAnimInstance, CustomPelvisTwist) == 4464, "Offset mismatch for UIceGauntletsLayerAnimInstance::CustomPelvisTwist");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, PawnAimYaw) == 4468, "Offset mismatch for UIceGauntletsLayerAnimInstance::PawnAimYaw");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, PawnAimPitch) == 4472, "Offset mismatch for UIceGauntletsLayerAnimInstance::PawnAimPitch");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, bIsFiringPrimary) == 4476, "Offset mismatch for UIceGauntletsLayerAnimInstance::bIsFiringPrimary");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, bAllowCustomMeleeTwist) == 4477, "Offset mismatch for UIceGauntletsLayerAnimInstance::bAllowCustomMeleeTwist");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, bSecondaryFire) == 4478, "Offset mismatch for UIceGauntletsLayerAnimInstance::bSecondaryFire");
static_assert(offsetof(UIceGauntletsLayerAnimInstance, TeaCakeIceGauntletsSecondaryFireMontage) == 4480, "Offset mismatch for UIceGauntletsLayerAnimInstance::TeaCakeIceGauntletsSecondaryFireMontage");
