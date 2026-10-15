/**
 * decamp dumper generated SDK
 * Package: /Script/JunoEnemiesHedgeMaltRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoEnemiesHedgeMaltRuntime.HedgeMaltAnimationSharingStateProcessor
// Kind: Class; super: AnimationSharingStateProcessor
class UHedgeMaltAnimationSharingStateProcessor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float IdleVelocityThreshold; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float FallingZVelocityThreshold; // 0x004C (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> AnimStateLoopingGameplayCues; // 0x0050 (Size: 0x10, Type: MapProperty)
    TSet<void*> AdditiveAnimStates; // 0x0060 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UHedgeMaltAnimationSharingStateProcessor, IdleVelocityThreshold) == 72, "Offset mismatch for UHedgeMaltAnimationSharingStateProcessor::IdleVelocityThreshold");
static_assert(offsetof(UHedgeMaltAnimationSharingStateProcessor, FallingZVelocityThreshold) == 76, "Offset mismatch for UHedgeMaltAnimationSharingStateProcessor::FallingZVelocityThreshold");
static_assert(offsetof(UHedgeMaltAnimationSharingStateProcessor, AnimStateLoopingGameplayCues) == 80, "Offset mismatch for UHedgeMaltAnimationSharingStateProcessor::AnimStateLoopingGameplayCues");
static_assert(offsetof(UHedgeMaltAnimationSharingStateProcessor, AdditiveAnimStates) == 96, "Offset mismatch for UHedgeMaltAnimationSharingStateProcessor::AdditiveAnimStates");

// /Script/JunoEnemiesHedgeMaltRuntime.JunoBTService_HedgeMaltOffNavigationDataDespawn
// Kind: Class; super: BTService
class UJunoBTService_HedgeMaltOffNavigationDataDespawn
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t AgentIsOffNavigationDataKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffNavigationDespawnTime[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBTService_HedgeMaltOffNavigationDataDespawn, AgentIsOffNavigationDataKey) == 112, "Offset mismatch for UJunoBTService_HedgeMaltOffNavigationDataDespawn::AgentIsOffNavigationDataKey");
static_assert(offsetof(UJunoBTService_HedgeMaltOffNavigationDataDespawn, OffNavigationDespawnTime) == 152, "Offset mismatch for UJunoBTService_HedgeMaltOffNavigationDataDespawn::OffNavigationDespawnTime");

// /Script/JunoEnemiesHedgeMaltRuntime.JunoHedgeMaltDeimosPawnComponent
// Kind: Class; super: FortPawnComponent
class UJunoHedgeMaltDeimosPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DeathCleanupGameplayCueTag[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoHedgeMaltDeimosPawnComponent, DeathCleanupGameplayCueTag) == 200, "Offset mismatch for UJunoHedgeMaltDeimosPawnComponent::DeathCleanupGameplayCueTag");
