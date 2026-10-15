/**
 * decamp dumper generated SDK
 * Package: /Script/FirePetalShrineGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FirePetalShrineGameplayRuntime.FirePetalShrineBase
// Kind: Class; super: BuildingGameplayActor
class UFirePetalShrineBase
{
public:
    std::uint8_t Pad_0000[0x6C8]; // 0x0000
    void* InherentAbilitySets; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x06D0
    std::uint8_t DamageStatHandle[0x10]; // 0x06F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAllowRidingOnActor; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0701
    FMulticastInlineDelegate OnProximityPulseDelegate; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityPrePulseDelegate; // 0x0718 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityEffectsAppliedDelegate; // 0x0728 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoAppliedToTouchingActor; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoChangedForExitingTouchActor; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDidDamage; // 0x0758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIgnoreInstigatorCollision; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddOwnerVelocity; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x076A
    std::int32_t AbilitySourceLevel; // 0x076C (Size: 0x4, Type: IntProperty)
    std::uint8_t DeliverableAbilityInfo[0xA0]; // 0x0770 (Size: 0xA0, Type: StructProperty)
    std::uint8_t bApplyDefaultEnabledAbilityBucketsOnInit; // 0x0810 (Size: 0x1, Type: BoolProperty)
    // 0x0810 BoolProperty bBlockMarking (shared storage)
    // 0x0810 BoolProperty bCanBeMarked (shared storage)
    // 0x0810 BoolProperty bShowInteractKeybind (shared storage)
    // 0x0810 BoolProperty bUseSimpleActorTouchSetupForAbilityBuckets (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0811
    std::uint8_t MarkerDisplay[0xB0]; // 0x0818 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    void* RegisteredTouchComponent; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x08E8
    std::uint8_t AnalyticsTags[0x20]; // 0x08F0 (Size: 0x20, Type: StructProperty)
    float PostProcessOverlapBlendWeight; // 0x0910 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0914
    void* CustomInteractionWidget; // 0x0918 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFirePetalShrineBase, InherentAbilitySets) == 1736, "Offset mismatch for UFirePetalShrineBase::InherentAbilitySets");
static_assert(offsetof(UFirePetalShrineBase, DamageStatHandle) == 1776, "Offset mismatch for UFirePetalShrineBase::DamageStatHandle");
static_assert(offsetof(UFirePetalShrineBase, bAllowRidingOnActor) == 1792, "Offset mismatch for UFirePetalShrineBase::bAllowRidingOnActor");
static_assert(offsetof(UFirePetalShrineBase, OnProximityPulseDelegate) == 1800, "Offset mismatch for UFirePetalShrineBase::OnProximityPulseDelegate");
static_assert(offsetof(UFirePetalShrineBase, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UFirePetalShrineBase::OnProximityPrePulseDelegate");
static_assert(offsetof(UFirePetalShrineBase, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UFirePetalShrineBase::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UFirePetalShrineBase, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UFirePetalShrineBase::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UFirePetalShrineBase, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UFirePetalShrineBase::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UFirePetalShrineBase, OnDidDamage) == 1880, "Offset mismatch for UFirePetalShrineBase::OnDidDamage");
static_assert(offsetof(UFirePetalShrineBase, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UFirePetalShrineBase::bIgnoreInstigatorCollision");
static_assert(offsetof(UFirePetalShrineBase, bAddOwnerVelocity) == 1897, "Offset mismatch for UFirePetalShrineBase::bAddOwnerVelocity");
static_assert(offsetof(UFirePetalShrineBase, AbilitySourceLevel) == 1900, "Offset mismatch for UFirePetalShrineBase::AbilitySourceLevel");
static_assert(offsetof(UFirePetalShrineBase, DeliverableAbilityInfo) == 1904, "Offset mismatch for UFirePetalShrineBase::DeliverableAbilityInfo");
static_assert(offsetof(UFirePetalShrineBase, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UFirePetalShrineBase::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UFirePetalShrineBase, MarkerDisplay) == 2072, "Offset mismatch for UFirePetalShrineBase::MarkerDisplay");
static_assert(offsetof(UFirePetalShrineBase, MarkerPositionOffset) == 2248, "Offset mismatch for UFirePetalShrineBase::MarkerPositionOffset");
static_assert(offsetof(UFirePetalShrineBase, RegisteredTouchComponent) == 2272, "Offset mismatch for UFirePetalShrineBase::RegisteredTouchComponent");
static_assert(offsetof(UFirePetalShrineBase, AnalyticsTags) == 2288, "Offset mismatch for UFirePetalShrineBase::AnalyticsTags");
static_assert(offsetof(UFirePetalShrineBase, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UFirePetalShrineBase::PostProcessOverlapBlendWeight");
static_assert(offsetof(UFirePetalShrineBase, CustomInteractionWidget) == 2328, "Offset mismatch for UFirePetalShrineBase::CustomInteractionWidget");

// /Script/FirePetalShrineGameplayRuntime.FirePetalShrineSpriteSpawner
// Kind: Class; super: FortAthenaLivingWorldVolume
class UFirePetalShrineSpriteSpawner
{
public:
    std::uint8_t Pad_0000[0x540]; // 0x0000
    FMulticastInlineDelegate OnFinishedSpawning; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> SpawnedActors; // 0x0550 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFirePetalShrineSpriteSpawner, OnFinishedSpawning) == 1344, "Offset mismatch for UFirePetalShrineSpriteSpawner::OnFinishedSpawning");
static_assert(offsetof(UFirePetalShrineSpriteSpawner, SpawnedActors) == 1360, "Offset mismatch for UFirePetalShrineSpriteSpawner::SpawnedActors");
