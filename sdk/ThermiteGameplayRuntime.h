/**
 * decamp dumper generated SDK
 * Package: /Script/ThermiteGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ThermiteGameplayRuntime.ThermiteNativeComponent
// Kind: Class; super: ActorComponent
class UThermiteNativeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bHasBloomed; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    FMulticastInlineDelegate OnBloomStart; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnThermiteEnd; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDamageApplied; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* EnvironmentDamageGE; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    void* ThermiteDamageGE; // 0x0100 (Size: 0x8, Type: ClassProperty)
    void* ThermiteVehicleDamageGE; // 0x0108 (Size: 0x8, Type: ClassProperty)
    void* ThermiteExplosionGE; // 0x0110 (Size: 0x8, Type: ClassProperty)
    void* ThermiteConcentratedExplosionGE; // 0x0118 (Size: 0x8, Type: ClassProperty)
    void* ThermiteKnockbackGE; // 0x0120 (Size: 0x8, Type: ClassProperty)
    std::int32_t ThermiteGameplayEffectLevel; // 0x0128 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x012C
    void* EnvironmentDamageTargetingPreset; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* BloomDamageTargetingPreset; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* ExplosionTargetingPreset; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitialBloomDelay[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnvironmentDamageTickRate[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t ThermiteDuration[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t DangerRadius[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BloomDamageTickRate[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DamageLocationOffset[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldKnockback[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostHideLifeSpan[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UThermiteNativeComponent, bHasBloomed) == 192, "Offset mismatch for UThermiteNativeComponent::bHasBloomed");
static_assert(offsetof(UThermiteNativeComponent, OnBloomStart) == 200, "Offset mismatch for UThermiteNativeComponent::OnBloomStart");
static_assert(offsetof(UThermiteNativeComponent, OnThermiteEnd) == 216, "Offset mismatch for UThermiteNativeComponent::OnThermiteEnd");
static_assert(offsetof(UThermiteNativeComponent, OnDamageApplied) == 232, "Offset mismatch for UThermiteNativeComponent::OnDamageApplied");
static_assert(offsetof(UThermiteNativeComponent, EnvironmentDamageGE) == 248, "Offset mismatch for UThermiteNativeComponent::EnvironmentDamageGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteDamageGE) == 256, "Offset mismatch for UThermiteNativeComponent::ThermiteDamageGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteVehicleDamageGE) == 264, "Offset mismatch for UThermiteNativeComponent::ThermiteVehicleDamageGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteExplosionGE) == 272, "Offset mismatch for UThermiteNativeComponent::ThermiteExplosionGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteConcentratedExplosionGE) == 280, "Offset mismatch for UThermiteNativeComponent::ThermiteConcentratedExplosionGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteKnockbackGE) == 288, "Offset mismatch for UThermiteNativeComponent::ThermiteKnockbackGE");
static_assert(offsetof(UThermiteNativeComponent, ThermiteGameplayEffectLevel) == 296, "Offset mismatch for UThermiteNativeComponent::ThermiteGameplayEffectLevel");
static_assert(offsetof(UThermiteNativeComponent, EnvironmentDamageTargetingPreset) == 304, "Offset mismatch for UThermiteNativeComponent::EnvironmentDamageTargetingPreset");
static_assert(offsetof(UThermiteNativeComponent, BloomDamageTargetingPreset) == 312, "Offset mismatch for UThermiteNativeComponent::BloomDamageTargetingPreset");
static_assert(offsetof(UThermiteNativeComponent, ExplosionTargetingPreset) == 320, "Offset mismatch for UThermiteNativeComponent::ExplosionTargetingPreset");
static_assert(offsetof(UThermiteNativeComponent, InitialBloomDelay) == 328, "Offset mismatch for UThermiteNativeComponent::InitialBloomDelay");
static_assert(offsetof(UThermiteNativeComponent, EnvironmentDamageTickRate) == 368, "Offset mismatch for UThermiteNativeComponent::EnvironmentDamageTickRate");
static_assert(offsetof(UThermiteNativeComponent, ThermiteDuration) == 408, "Offset mismatch for UThermiteNativeComponent::ThermiteDuration");
static_assert(offsetof(UThermiteNativeComponent, DangerRadius) == 448, "Offset mismatch for UThermiteNativeComponent::DangerRadius");
static_assert(offsetof(UThermiteNativeComponent, BloomDamageTickRate) == 488, "Offset mismatch for UThermiteNativeComponent::BloomDamageTickRate");
static_assert(offsetof(UThermiteNativeComponent, DamageLocationOffset) == 528, "Offset mismatch for UThermiteNativeComponent::DamageLocationOffset");
static_assert(offsetof(UThermiteNativeComponent, bShouldKnockback) == 568, "Offset mismatch for UThermiteNativeComponent::bShouldKnockback");
static_assert(offsetof(UThermiteNativeComponent, PostHideLifeSpan) == 608, "Offset mismatch for UThermiteNativeComponent::PostHideLifeSpan");
