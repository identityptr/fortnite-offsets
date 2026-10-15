/**
 * decamp dumper generated SDK
 * Package: /Script/MusterCoreWeaponsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
// Kind: Class; super: FortProjectileAthena
class UFortExCaliberProjectile
{
public:
    std::uint8_t Pad_0000[0xC30]; // 0x0000
    std::uint8_t bSimulationRunning; // 0x0C30 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0C31
    std::uint8_t TimeToExplode[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t bHasStopped; // 0x0C60 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0C61
    std::uint8_t HitNormal[0x18]; // 0x0C68 (Size: 0x18, Type: StructProperty)
    std::uint8_t SurfaceType; // 0x0C80 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0C81
    std::uint8_t SwordRevealMaterialParam[0x4]; // 0x0C84 (Size: 0x4, Type: NameProperty)
    std::uint8_t EmissiveColorMaterialParam[0x4]; // 0x0C88 (Size: 0x4, Type: NameProperty)
    std::uint8_t HDRMultiplierMaterialParam[0x4]; // 0x0C8C (Size: 0x4, Type: NameProperty)
    std::uint8_t EmissiveBlueColor[0x10]; // 0x0C90 (Size: 0x10, Type: StructProperty)
    std::uint8_t EmissivePurpleColor[0x10]; // 0x0CA0 (Size: 0x10, Type: StructProperty)
    float MinPitchForRotationAdjustment; // 0x0CB0 (Size: 0x4, Type: FloatProperty)
    float MaxPitchForRotationAdjustment; // 0x0CB4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortExCaliberProjectile, bSimulationRunning) == 3120, "Offset mismatch for UFortExCaliberProjectile::bSimulationRunning");
static_assert(offsetof(UFortExCaliberProjectile, TimeToExplode) == 3128, "Offset mismatch for UFortExCaliberProjectile::TimeToExplode");
static_assert(offsetof(UFortExCaliberProjectile, bHasStopped) == 3168, "Offset mismatch for UFortExCaliberProjectile::bHasStopped");
static_assert(offsetof(UFortExCaliberProjectile, HitNormal) == 3176, "Offset mismatch for UFortExCaliberProjectile::HitNormal");
static_assert(offsetof(UFortExCaliberProjectile, SurfaceType) == 3200, "Offset mismatch for UFortExCaliberProjectile::SurfaceType");
static_assert(offsetof(UFortExCaliberProjectile, SwordRevealMaterialParam) == 3204, "Offset mismatch for UFortExCaliberProjectile::SwordRevealMaterialParam");
static_assert(offsetof(UFortExCaliberProjectile, EmissiveColorMaterialParam) == 3208, "Offset mismatch for UFortExCaliberProjectile::EmissiveColorMaterialParam");
static_assert(offsetof(UFortExCaliberProjectile, HDRMultiplierMaterialParam) == 3212, "Offset mismatch for UFortExCaliberProjectile::HDRMultiplierMaterialParam");
static_assert(offsetof(UFortExCaliberProjectile, EmissiveBlueColor) == 3216, "Offset mismatch for UFortExCaliberProjectile::EmissiveBlueColor");
static_assert(offsetof(UFortExCaliberProjectile, EmissivePurpleColor) == 3232, "Offset mismatch for UFortExCaliberProjectile::EmissivePurpleColor");
static_assert(offsetof(UFortExCaliberProjectile, MinPitchForRotationAdjustment) == 3248, "Offset mismatch for UFortExCaliberProjectile::MinPitchForRotationAdjustment");
static_assert(offsetof(UFortExCaliberProjectile, MaxPitchForRotationAdjustment) == 3252, "Offset mismatch for UFortExCaliberProjectile::MaxPitchForRotationAdjustment");

// /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
// Kind: Class; super: FortProjectileAthena
class UFortMusterExplosiveARProjectile
{
public:
    std::uint8_t Pad_0000[0xC30]; // 0x0000
    std::uint8_t HitLocation[0x18]; // 0x0C30 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitRotation[0x18]; // 0x0C48 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHitPlayer; // 0x0C60 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0C61
    float DrawDistance; // 0x0C64 (Size: 0x4, Type: FloatProperty)
    void* ProjectileTrail; // 0x0C68 (Size: 0x8, Type: ObjectProperty)
    void* NS_Explosion; // 0x0C70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FeedbackCue[0x8]; // 0x0C78 (Size: 0x8, Type: StructProperty)
    std::uint8_t DecalSize[0x18]; // 0x0C80 (Size: 0x18, Type: StructProperty)
    float DecalLifespan; // 0x0C98 (Size: 0x4, Type: FloatProperty)
    float TimebeforeDecalFadeOut; // 0x0C9C (Size: 0x4, Type: FloatProperty)
    float DecalFadeOutDuration; // 0x0CA0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0CA4
    void* DecalMaterial; // 0x0CA8 (Size: 0x8, Type: ObjectProperty)
    void* Cue_CloseSound; // 0x0CB0 (Size: 0x8, Type: ObjectProperty)
    void* Cue_DistantSound; // 0x0CB8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMusterExplosiveARProjectile, HitLocation) == 3120, "Offset mismatch for UFortMusterExplosiveARProjectile::HitLocation");
static_assert(offsetof(UFortMusterExplosiveARProjectile, HitRotation) == 3144, "Offset mismatch for UFortMusterExplosiveARProjectile::HitRotation");
static_assert(offsetof(UFortMusterExplosiveARProjectile, bHitPlayer) == 3168, "Offset mismatch for UFortMusterExplosiveARProjectile::bHitPlayer");
static_assert(offsetof(UFortMusterExplosiveARProjectile, DrawDistance) == 3172, "Offset mismatch for UFortMusterExplosiveARProjectile::DrawDistance");
static_assert(offsetof(UFortMusterExplosiveARProjectile, ProjectileTrail) == 3176, "Offset mismatch for UFortMusterExplosiveARProjectile::ProjectileTrail");
static_assert(offsetof(UFortMusterExplosiveARProjectile, NS_Explosion) == 3184, "Offset mismatch for UFortMusterExplosiveARProjectile::NS_Explosion");
static_assert(offsetof(UFortMusterExplosiveARProjectile, FeedbackCue) == 3192, "Offset mismatch for UFortMusterExplosiveARProjectile::FeedbackCue");
static_assert(offsetof(UFortMusterExplosiveARProjectile, DecalSize) == 3200, "Offset mismatch for UFortMusterExplosiveARProjectile::DecalSize");
static_assert(offsetof(UFortMusterExplosiveARProjectile, DecalLifespan) == 3224, "Offset mismatch for UFortMusterExplosiveARProjectile::DecalLifespan");
static_assert(offsetof(UFortMusterExplosiveARProjectile, TimebeforeDecalFadeOut) == 3228, "Offset mismatch for UFortMusterExplosiveARProjectile::TimebeforeDecalFadeOut");
static_assert(offsetof(UFortMusterExplosiveARProjectile, DecalFadeOutDuration) == 3232, "Offset mismatch for UFortMusterExplosiveARProjectile::DecalFadeOutDuration");
static_assert(offsetof(UFortMusterExplosiveARProjectile, DecalMaterial) == 3240, "Offset mismatch for UFortMusterExplosiveARProjectile::DecalMaterial");
static_assert(offsetof(UFortMusterExplosiveARProjectile, Cue_CloseSound) == 3248, "Offset mismatch for UFortMusterExplosiveARProjectile::Cue_CloseSound");
static_assert(offsetof(UFortMusterExplosiveARProjectile, Cue_DistantSound) == 3256, "Offset mismatch for UFortMusterExplosiveARProjectile::Cue_DistantSound");

// /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
// Kind: Class; super: AnimInstance
class UMusterCoreWeaponsAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* OwningWeapon; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsShotFired; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0269
    std::int32_t LocalAmmoCount; // 0x026C (Size: 0x4, Type: IntProperty)
    float CylinderMaskAlpha; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAmmoCountTwo; // 0x0274 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAmmoCountOne; // 0x0275 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFromFullToTwoAmmo; // 0x0276 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFromTwoToOneAmmo; // 0x0277 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFromOneToZero; // 0x0278 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMusterCoreWeaponsAnimInstance, OwningWeapon) == 608, "Offset mismatch for UMusterCoreWeaponsAnimInstance::OwningWeapon");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsShotFired) == 616, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bIsShotFired");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, LocalAmmoCount) == 620, "Offset mismatch for UMusterCoreWeaponsAnimInstance::LocalAmmoCount");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, CylinderMaskAlpha) == 624, "Offset mismatch for UMusterCoreWeaponsAnimInstance::CylinderMaskAlpha");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsAmmoCountTwo) == 628, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bIsAmmoCountTwo");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsAmmoCountOne) == 629, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bIsAmmoCountOne");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromFullToTwoAmmo) == 630, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bStateRuleFromFullToTwoAmmo");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromTwoToOneAmmo) == 631, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bStateRuleFromTwoToOneAmmo");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromOneToZero) == 632, "Offset mismatch for UMusterCoreWeaponsAnimInstance::bStateRuleFromOneToZero");
