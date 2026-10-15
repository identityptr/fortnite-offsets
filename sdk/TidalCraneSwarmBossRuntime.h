/**
 * decamp dumper generated SDK
 * Package: /Script/TidalCraneSwarmBossRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TidalCraneSwarmBossRuntime.TidalCraneSwarmBoss
// Kind: Class; super: BuildingGameplayActor
class UTidalCraneSwarmBoss
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    std::uint8_t CanBeSeenOffset[0x1]; // 0x0928 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTidalCraneSwarmBoss, CanBeSeenOffset) == 2344, "Offset mismatch for UTidalCraneSwarmBoss::CanBeSeenOffset");

// /Script/TidalCraneSwarmBossRuntime.TidalCraneSwarmBossAnimInstance
// Kind: Class; super: FortAIAnimInstance
class UTidalCraneSwarmBossAnimInstance
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t LookAt[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    float AOAlpha; // 0x04A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTidalCraneSwarmBossAnimInstance, LookAt) == 1168, "Offset mismatch for UTidalCraneSwarmBossAnimInstance::LookAt");
static_assert(offsetof(UTidalCraneSwarmBossAnimInstance, AOAlpha) == 1192, "Offset mismatch for UTidalCraneSwarmBossAnimInstance::AOAlpha");

// /Script/TidalCraneSwarmBossRuntime.TidalCraneSwarmBossWeaponInterface
// Kind: Class; super: Interface
class UTidalCraneSwarmBossWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
