/**
 * decamp dumper generated SDK
 * Package: /Script/DuckSnacks
 */
#pragma once
#include "Basic.h"

// /Script/DuckSnacks.FortGameplayAbility_DuckSnacks_CycleBuff
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_DuckSnacks_CycleBuff
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t ShouldEnableBuffCycling[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    void* CycleInputAction; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CycleCooldown[0x28]; // 0x0B50 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowInfiniteCycling[0x28]; // 0x0B78 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> BuffEffectMap; // 0x0BA0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0BB0
    TArray<void*> CachedCycleOrder; // 0x0BB8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0BC8
    std::uint8_t CachedActiveBuffTag[0x4]; // 0x0BD0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CachedNextBuffTag[0x1]; // 0x0BD4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, ShouldEnableBuffCycling) == 2848, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::ShouldEnableBuffCycling");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, CycleInputAction) == 2888, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::CycleInputAction");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, CycleCooldown) == 2896, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::CycleCooldown");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, AllowInfiniteCycling) == 2936, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::AllowInfiniteCycling");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, BuffEffectMap) == 2976, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::BuffEffectMap");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, CachedCycleOrder) == 3000, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::CachedCycleOrder");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, CachedActiveBuffTag) == 3024, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::CachedActiveBuffTag");
static_assert(offsetof(UFortGameplayAbility_DuckSnacks_CycleBuff, CachedNextBuffTag) == 3028, "Offset mismatch for UFortGameplayAbility_DuckSnacks_CycleBuff::CachedNextBuffTag");
