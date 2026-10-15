/**
 * decamp dumper generated SDK
 * Package: /CosmicThunderCheatCodesGameplay/Gameplay/B_CosmicThunderCheatCodeDynamicSpawnHelper
 */
#pragma once
#include "Basic.h"

// /CosmicThunderCheatCodesGameplay/Gameplay/B_CosmicThunderCheatCodeDynamicSpawnHelper.B_CosmicThunderCheatCodeDynamicSpawnHelper_C
// Kind: BlueprintGeneratedClass; super: Actor
class UB_CosmicThunderCheatCodeDynamicSpawnHelper_C
{
public:
    std::uint8_t None[0x270]; // 0x0000 (Size: 0x270, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* DefaultSceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnData[0x48]; // 0x0280 (Size: 0x48, Type: StructProperty)
    FMulticastInlineDelegate OnSpawnCheatCodeActor; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UB_CosmicThunderCheatCodeDynamicSpawnHelper_C, None) == 0, "Offset mismatch for UB_CosmicThunderCheatCodeDynamicSpawnHelper_C::None");
static_assert(offsetof(UB_CosmicThunderCheatCodeDynamicSpawnHelper_C, UberGraphFrame) == 624, "Offset mismatch for UB_CosmicThunderCheatCodeDynamicSpawnHelper_C::UberGraphFrame");
static_assert(offsetof(UB_CosmicThunderCheatCodeDynamicSpawnHelper_C, DefaultSceneRoot) == 632, "Offset mismatch for UB_CosmicThunderCheatCodeDynamicSpawnHelper_C::DefaultSceneRoot");
static_assert(offsetof(UB_CosmicThunderCheatCodeDynamicSpawnHelper_C, SpawnData) == 640, "Offset mismatch for UB_CosmicThunderCheatCodeDynamicSpawnHelper_C::SpawnData");
static_assert(offsetof(UB_CosmicThunderCheatCodeDynamicSpawnHelper_C, OnSpawnCheatCodeActor) == 712, "Offset mismatch for UB_CosmicThunderCheatCodeDynamicSpawnHelper_C::OnSpawnCheatCodeActor");
