/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaObsidian/Gameplay/Abilities/GA_NarrowFleaObsidian_Impact
 */
#pragma once
#include "Basic.h"

// /NarrowFleaObsidian/Gameplay/Abilities/GA_NarrowFleaObsidian_Impact.GA_NarrowFleaObsidian_Impact_C
// Kind: BlueprintGeneratedClass; super: FortGameplayAbility
class UGA_NarrowFleaObsidian_Impact_C
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0B20 (Size: 0x8, Type: StructProperty)
    void* TargetingTask; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DirectDieBuildingActors[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    void* PlayerPawn; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GEsToApplyOnHit; // 0x0B60 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetingEnded; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B71
    std::uint8_t MaxTargetingCheckIterations[0x28]; // 0x0B78 (Size: 0x28, Type: StructProperty)
    std::int32_t CurrentTargetingCheckIterations; // 0x0BA0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0BA4
    void* TargetingPreset; // 0x0BA8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetingTimerHandle[0x8]; // 0x0BB0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayerPawnLocation[0x18]; // 0x0BB8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tag_OnPlayerHitCue[0x4]; // 0x0BD0 (Size: 0x4, Type: StructProperty)
    std::uint8_t Tag_NonPlayerHitCue[0x4]; // 0x0BD4 (Size: 0x4, Type: StructProperty)
    std::uint8_t Targeting_DelayBetweenHits[0x1]; // 0x0BD8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, UberGraphFrame) == 2848, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::UberGraphFrame");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, TargetingTask) == 2856, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::TargetingTask");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, DirectDieBuildingActors) == 2864, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::DirectDieBuildingActors");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, PlayerPawn) == 2904, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::PlayerPawn");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, GEsToApplyOnHit) == 2912, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::GEsToApplyOnHit");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, TargetingEnded) == 2928, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::TargetingEnded");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, MaxTargetingCheckIterations) == 2936, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::MaxTargetingCheckIterations");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, CurrentTargetingCheckIterations) == 2976, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::CurrentTargetingCheckIterations");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, TargetingPreset) == 2984, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::TargetingPreset");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, TargetingTimerHandle) == 2992, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::TargetingTimerHandle");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, PlayerPawnLocation) == 3000, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::PlayerPawnLocation");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, Tag_OnPlayerHitCue) == 3024, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::Tag_OnPlayerHitCue");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, Tag_NonPlayerHitCue) == 3028, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::Tag_NonPlayerHitCue");
static_assert(offsetof(UGA_NarrowFleaObsidian_Impact_C, Targeting_DelayBetweenHits) == 3032, "Offset mismatch for UGA_NarrowFleaObsidian_Impact_C::Targeting_DelayBetweenHits");
