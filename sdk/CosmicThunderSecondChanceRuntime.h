/**
 * decamp dumper generated SDK
 * Package: /Script/CosmicThunderSecondChanceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmicThunderSecondChanceRuntime.FortGameplayAbility_CosmicThunderSecondChanceRevive
// Kind: Class; super: FortGameplayAbility_HoneyFiberLoafHill
class UFortGameplayAbility_CosmicThunderSecondChanceRevive
{
public:
    std::uint8_t Pad_0000[0xBF0]; // 0x0000
    TWeakObjectPtr<void> ServerCachedPlayerPawn; // 0x0BF0 (Size: 0x8, Type: WeakObjectProperty)
    void* BGA_LightRay; // 0x0BF8 (Size: 0x8, Type: ObjectProperty)
    void* MontageTask; // 0x0C00 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0C08
    std::uint8_t GEH_PreventDeath[0x14]; // 0x0C78 (Size: 0x14, Type: StructProperty)
    std::uint8_t bReviveConsumed; // 0x0C8C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0C8D
    std::uint8_t GC_TokenAcquired[0x8]; // 0x0C90 (Size: 0x8, Type: StructProperty)
    void* GE_ReviveActive; // 0x0C98 (Size: 0x8, Type: ClassProperty)
    void* GE_PreventDeath; // 0x0CA0 (Size: 0x8, Type: ClassProperty)
    void* GE_ReviveInactive; // 0x0CA8 (Size: 0x8, Type: ClassProperty)
    void* GE_GrantBlockAbility; // 0x0CB0 (Size: 0x8, Type: ClassProperty)
    void* GE_ActivelyReviving; // 0x0CB8 (Size: 0x8, Type: ClassProperty)
    void* GE_Rifting; // 0x0CC0 (Size: 0x8, Type: ClassProperty)
    void* BP_CameraMode_Revive; // 0x0CC8 (Size: 0x8, Type: ClassProperty)
    void* BP_CameraMode_WaterRevive; // 0x0CD0 (Size: 0x8, Type: ClassProperty)
    void* AGIDSecondChance; // 0x0CD8 (Size: 0x8, Type: ObjectProperty)
    void* AGIDSecondChanceHack; // 0x0CE0 (Size: 0x8, Type: ObjectProperty)
    void* ReviveMontageStanding; // 0x0CE8 (Size: 0x8, Type: ObjectProperty)
    void* ReviveMontageDBNO; // 0x0CF0 (Size: 0x8, Type: ObjectProperty)
    void* SwimMontage; // 0x0CF8 (Size: 0x8, Type: ObjectProperty)
    void* BGA_RevivalLightRays; // 0x0D00 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HF_ShouldUseFlyingMovementModeForAnim[0x30]; // 0x0D08 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_RespawnDelay[0x30]; // 0x0D38 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_WhenStopCarryingPlayerShouldBeFromAbilityCancel[0x30]; // 0x0D68 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_ShouldRandomizeRespawnTeleportLocation[0x30]; // 0x0D98 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_ShouldForceEndSkydiveOnDeath[0x30]; // 0x0DC8 (Size: 0x30, Type: StructProperty)
    std::uint8_t RandomSafeZoneLocationVariance[0x30]; // 0x0DF8 (Size: 0x30, Type: StructProperty)
    std::uint8_t RespawnTeleportZOffset[0x1]; // 0x0E28 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, ServerCachedPlayerPawn) == 3056, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::ServerCachedPlayerPawn");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, BGA_LightRay) == 3064, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::BGA_LightRay");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, MontageTask) == 3072, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::MontageTask");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GEH_PreventDeath) == 3192, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GEH_PreventDeath");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, bReviveConsumed) == 3212, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::bReviveConsumed");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GC_TokenAcquired) == 3216, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GC_TokenAcquired");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_ReviveActive) == 3224, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_ReviveActive");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_PreventDeath) == 3232, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_PreventDeath");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_ReviveInactive) == 3240, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_ReviveInactive");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_GrantBlockAbility) == 3248, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_GrantBlockAbility");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_ActivelyReviving) == 3256, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_ActivelyReviving");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, GE_Rifting) == 3264, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::GE_Rifting");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, BP_CameraMode_Revive) == 3272, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::BP_CameraMode_Revive");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, BP_CameraMode_WaterRevive) == 3280, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::BP_CameraMode_WaterRevive");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, AGIDSecondChance) == 3288, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::AGIDSecondChance");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, AGIDSecondChanceHack) == 3296, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::AGIDSecondChanceHack");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, ReviveMontageStanding) == 3304, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::ReviveMontageStanding");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, ReviveMontageDBNO) == 3312, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::ReviveMontageDBNO");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, SwimMontage) == 3320, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::SwimMontage");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, BGA_RevivalLightRays) == 3328, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::BGA_RevivalLightRays");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, HF_ShouldUseFlyingMovementModeForAnim) == 3336, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::HF_ShouldUseFlyingMovementModeForAnim");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, HF_RespawnDelay) == 3384, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::HF_RespawnDelay");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, HF_WhenStopCarryingPlayerShouldBeFromAbilityCancel) == 3432, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::HF_WhenStopCarryingPlayerShouldBeFromAbilityCancel");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, HF_ShouldRandomizeRespawnTeleportLocation) == 3480, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::HF_ShouldRandomizeRespawnTeleportLocation");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, HF_ShouldForceEndSkydiveOnDeath) == 3528, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::HF_ShouldForceEndSkydiveOnDeath");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, RandomSafeZoneLocationVariance) == 3576, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::RandomSafeZoneLocationVariance");
static_assert(offsetof(UFortGameplayAbility_CosmicThunderSecondChanceRevive, RespawnTeleportZOffset) == 3624, "Offset mismatch for UFortGameplayAbility_CosmicThunderSecondChanceRevive::RespawnTeleportZOffset");
