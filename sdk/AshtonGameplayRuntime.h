/**
 * decamp dumper generated SDK
 * Package: /Script/AshtonGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AshtonGameplayRuntime.AshtonShieldLayerAnimInstance
// Kind: Class; super: BallisticShieldItemLayerAnimInstance
class UAshtonShieldLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x12A0]; // 0x0000
    std::uint8_t bIsShieldHit; // 0x12A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x12A1
    float ShieldHitAlpha; // 0x12A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UnusableTagName[0x4]; // 0x12A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ShieldChargeTagName[0x4]; // 0x12AC (Size: 0x4, Type: StructProperty)
    void* AshtonShieldThrowAnimAssetFortWeaponAnimSet; // 0x12B0 (Size: 0x8, Type: ObjectProperty)
    void* AshtonShieldAnimAssetFortWeaponAnimSet; // 0x12B8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultNoWeaponProxyTable; // 0x12C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayerAnimAssetsOverride[0x1]; // 0x12C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAshtonShieldLayerAnimInstance, bIsShieldHit) == 4768, "Offset mismatch for UAshtonShieldLayerAnimInstance::bIsShieldHit");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, ShieldHitAlpha) == 4772, "Offset mismatch for UAshtonShieldLayerAnimInstance::ShieldHitAlpha");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, UnusableTagName) == 4776, "Offset mismatch for UAshtonShieldLayerAnimInstance::UnusableTagName");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, ShieldChargeTagName) == 4780, "Offset mismatch for UAshtonShieldLayerAnimInstance::ShieldChargeTagName");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, AshtonShieldThrowAnimAssetFortWeaponAnimSet) == 4784, "Offset mismatch for UAshtonShieldLayerAnimInstance::AshtonShieldThrowAnimAssetFortWeaponAnimSet");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, AshtonShieldAnimAssetFortWeaponAnimSet) == 4792, "Offset mismatch for UAshtonShieldLayerAnimInstance::AshtonShieldAnimAssetFortWeaponAnimSet");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, DefaultNoWeaponProxyTable) == 4800, "Offset mismatch for UAshtonShieldLayerAnimInstance::DefaultNoWeaponProxyTable");
static_assert(offsetof(UAshtonShieldLayerAnimInstance, PlayerAnimAssetsOverride) == 4808, "Offset mismatch for UAshtonShieldLayerAnimInstance::PlayerAnimAssetsOverride");

// /Script/AshtonGameplayRuntime.AshtonShieldWeaponInterface
// Kind: Class; super: Interface
class UAshtonShieldWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
