/**
 * decamp dumper generated SDK
 * Package: /Script/HighTowerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_HighTowerAbilityIntro
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t ShowAbilityIntroTag[0x4]; // 0x0400 (Size: 0x4, Type: StructProperty)
    std::uint8_t bPlayOnlyOnce; // 0x0404 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_HighTowerAbilityIntro, ShowAbilityIntroTag) == 1024, "Offset mismatch for UFortAthenaMutator_HighTowerAbilityIntro::ShowAbilityIntroTag");
static_assert(offsetof(UFortAthenaMutator_HighTowerAbilityIntro, bPlayOnlyOnce) == 1028, "Offset mismatch for UFortAthenaMutator_HighTowerAbilityIntro::bPlayOnlyOnce");

// /Script/HighTowerRuntime.FortProjectileAthena_HighTowerDateCombo
// Kind: Class; super: FortProjectileAthena
class UFortProjectileAthena_HighTowerDateCombo
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    void* CosmeticsContainer; // 0x0C48 (Size: 0x8, Type: ObjectProperty)
    float CosmeticStartingOffset; // 0x0C50 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C54
    std::uint8_t CosmeticLerpDuration[0x1]; // 0x0C58 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProjectileAthena_HighTowerDateCombo, CosmeticsContainer) == 3144, "Offset mismatch for UFortProjectileAthena_HighTowerDateCombo::CosmeticsContainer");
static_assert(offsetof(UFortProjectileAthena_HighTowerDateCombo, CosmeticStartingOffset) == 3152, "Offset mismatch for UFortProjectileAthena_HighTowerDateCombo::CosmeticStartingOffset");
static_assert(offsetof(UFortProjectileAthena_HighTowerDateCombo, CosmeticLerpDuration) == 3160, "Offset mismatch for UFortProjectileAthena_HighTowerDateCombo::CosmeticLerpDuration");

// /Script/HighTowerRuntime.HighTowerDateLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UHighTowerDateLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsFiringLeft; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiringRight; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayCustomJumpLand; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMontageActive; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostJumping; // 0x1174 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHighTowerDateLayerAnimInstance, bIsFiringLeft) == 4464, "Offset mismatch for UHighTowerDateLayerAnimInstance::bIsFiringLeft");
static_assert(offsetof(UHighTowerDateLayerAnimInstance, bIsFiringRight) == 4465, "Offset mismatch for UHighTowerDateLayerAnimInstance::bIsFiringRight");
static_assert(offsetof(UHighTowerDateLayerAnimInstance, bShouldPlayCustomJumpLand) == 4466, "Offset mismatch for UHighTowerDateLayerAnimInstance::bShouldPlayCustomJumpLand");
static_assert(offsetof(UHighTowerDateLayerAnimInstance, bMontageActive) == 4467, "Offset mismatch for UHighTowerDateLayerAnimInstance::bMontageActive");
static_assert(offsetof(UHighTowerDateLayerAnimInstance, bIsBoostJumping) == 4468, "Offset mismatch for UHighTowerDateLayerAnimInstance::bIsBoostJumping");
