/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaObsidian/Gameplay/Abilities/GA_NarrowFleaObsidian_BoosterEnvironmentDamage
 */
#pragma once
#include "Basic.h"

// /NarrowFleaObsidian/Gameplay/Abilities/GA_NarrowFleaObsidian_BoosterEnvironmentDamage.GA_NarrowFleaObsidian_BoosterEnvironmentDamage_C
// Kind: BlueprintGeneratedClass; super: FortGameplayAbility
class UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0B20 (Size: 0x8, Type: StructProperty)
    std::uint8_t DashChargeLevel; // 0x0B28 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B29
    void* HitActor; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0B38
    void* GE_PlayableActorDamage; // 0x0B40 (Size: 0x8, Type: ClassProperty)
    void* GE_BuildingActorDamage; // 0x0B48 (Size: 0x8, Type: ClassProperty)
    void* GE_PlayableActorKnockback_LowCharge; // 0x0B50 (Size: 0x8, Type: ClassProperty)
    void* GE_PlayableActorKnockback_HalfCharge; // 0x0B58 (Size: 0x8, Type: ClassProperty)
    void* GE_PlayableActorKnockback_FullCharge; // 0x0B60 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SF_LowChargePlayableActorDamage[0x28]; // 0x0B68 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_HalfChargePlayableActorDamage[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_FullChargePlayableActorDamage[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_LowChargeBuildingActorDamage[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_HalfChargeBuildingActorDamage[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_FullChargeBuildingActorDamage[0x30]; // 0x0C30 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetingLogicTimerHandle[0x8]; // 0x0C60 (Size: 0x8, Type: StructProperty)
    void* TargetingAsyncTask; // 0x0C68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GamplayTag_LowCharge[0x4]; // 0x0C70 (Size: 0x4, Type: StructProperty)
    std::uint8_t GamplayTag_HalfCharge[0x4]; // 0x0C74 (Size: 0x4, Type: StructProperty)
    std::uint8_t GamplayTag_FullCharge[0x8]; // 0x0C78 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayTagContainer_ChargeLevels[0x20]; // 0x0C80 (Size: 0x20, Type: StructProperty)
    std::uint8_t SF_BossDamageMultiplier[0x28]; // 0x0CA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitActorCooldown[0x30]; // 0x0CC8 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> HitActorTimes; // 0x0CF8 (Size: 0x10, Type: MapProperty)
    std::uint8_t SF_TargetingInitialDelay[0x28]; // 0x0D08 (Size: 0x28, Type: StructProperty)
    std::uint8_t SF_TargetingCheckRate[0x1]; // 0x0D30 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, UberGraphFrame) == 2848, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::UberGraphFrame");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, DashChargeLevel) == 2856, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::DashChargeLevel");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, HitActor) == 2864, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::HitActor");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GE_PlayableActorDamage) == 2880, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GE_PlayableActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GE_BuildingActorDamage) == 2888, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GE_BuildingActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GE_PlayableActorKnockback_LowCharge) == 2896, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GE_PlayableActorKnockback_LowCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GE_PlayableActorKnockback_HalfCharge) == 2904, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GE_PlayableActorKnockback_HalfCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GE_PlayableActorKnockback_FullCharge) == 2912, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GE_PlayableActorKnockback_FullCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_LowChargePlayableActorDamage) == 2920, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_LowChargePlayableActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_HalfChargePlayableActorDamage) == 2960, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_HalfChargePlayableActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_FullChargePlayableActorDamage) == 3000, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_FullChargePlayableActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_LowChargeBuildingActorDamage) == 3040, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_LowChargeBuildingActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_HalfChargeBuildingActorDamage) == 3080, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_HalfChargeBuildingActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_FullChargeBuildingActorDamage) == 3120, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_FullChargeBuildingActorDamage");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, TargetingLogicTimerHandle) == 3168, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::TargetingLogicTimerHandle");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, TargetingAsyncTask) == 3176, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::TargetingAsyncTask");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GamplayTag_LowCharge) == 3184, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GamplayTag_LowCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GamplayTag_HalfCharge) == 3188, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GamplayTag_HalfCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GamplayTag_FullCharge) == 3192, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GamplayTag_FullCharge");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, GameplayTagContainer_ChargeLevels) == 3200, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::GameplayTagContainer_ChargeLevels");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_BossDamageMultiplier) == 3232, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_BossDamageMultiplier");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, HitActorCooldown) == 3272, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::HitActorCooldown");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, HitActorTimes) == 3320, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::HitActorTimes");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_TargetingInitialDelay) == 3336, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_TargetingInitialDelay");
static_assert(offsetof(UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C, SF_TargetingCheckRate) == 3376, "Offset mismatch for UGA_NarrowFleaObsidian_BoosterEnvironmentDamage_C::SF_TargetingCheckRate");
