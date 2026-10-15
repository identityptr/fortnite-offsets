/**
 * decamp dumper generated SDK
 * Package: /Script/BRPlaylistsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BRPlaylistsRuntime.FortAIMovementModifier_ZeroBuild
// Kind: Class; super: FortAIMovementModifierBase
class UFortAIMovementModifier_ZeroBuild
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SlopeThresholdDeg[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t PickaxeSlapTagQuery[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    float CachedSlopeThresholdSin; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAIMovementModifier_ZeroBuild, SlopeThresholdDeg) == 56, "Offset mismatch for UFortAIMovementModifier_ZeroBuild::SlopeThresholdDeg");
static_assert(offsetof(UFortAIMovementModifier_ZeroBuild, PickaxeSlapTagQuery) == 96, "Offset mismatch for UFortAIMovementModifier_ZeroBuild::PickaxeSlapTagQuery");
static_assert(offsetof(UFortAIMovementModifier_ZeroBuild, CachedSlopeThresholdSin) == 168, "Offset mismatch for UFortAIMovementModifier_ZeroBuild::CachedSlopeThresholdSin");

// /Script/BRPlaylistsRuntime.FortAIWeaponModifier_ZeroBuild
// Kind: Class; super: FortAIWeaponModifierBase
class UFortAIWeaponModifier_ZeroBuild
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PickaxeSlapTagQuery[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    std::uint8_t InfiniteAmmoDelay[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAIWeaponModifier_ZeroBuild, PickaxeSlapTagQuery) == 56, "Offset mismatch for UFortAIWeaponModifier_ZeroBuild::PickaxeSlapTagQuery");
static_assert(offsetof(UFortAIWeaponModifier_ZeroBuild, InfiniteAmmoDelay) == 128, "Offset mismatch for UFortAIWeaponModifier_ZeroBuild::InfiniteAmmoDelay");
