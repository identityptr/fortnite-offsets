/**
 * decamp dumper generated SDK
 * Package: /Script/SpireBossRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpireBossRuntime.SpireBossEvent_PlayerProximityChanged
// Kind: ScriptStruct; super: none
struct FSpireBossEvent_PlayerProximityChanged
{
public:
    void* MajorSpire; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PlayerController; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInProximity; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpireBossEvent_PlayerProximityChanged, MajorSpire) == 0, "Offset mismatch for FSpireBossEvent_PlayerProximityChanged::MajorSpire");
static_assert(offsetof(FSpireBossEvent_PlayerProximityChanged, PlayerController) == 8, "Offset mismatch for FSpireBossEvent_PlayerProximityChanged::PlayerController");
static_assert(offsetof(FSpireBossEvent_PlayerProximityChanged, bInProximity) == 16, "Offset mismatch for FSpireBossEvent_PlayerProximityChanged::bInProximity");

// /Script/SpireBossRuntime.MajorSpire
// Kind: Class; super: BuildingGameplayActor
class UMajorSpire
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

static_assert(offsetof(UMajorSpire, InherentAbilitySets) == 1736, "Offset mismatch for UMajorSpire::InherentAbilitySets");
static_assert(offsetof(UMajorSpire, DamageStatHandle) == 1776, "Offset mismatch for UMajorSpire::DamageStatHandle");
static_assert(offsetof(UMajorSpire, bAllowRidingOnActor) == 1792, "Offset mismatch for UMajorSpire::bAllowRidingOnActor");
static_assert(offsetof(UMajorSpire, OnProximityPulseDelegate) == 1800, "Offset mismatch for UMajorSpire::OnProximityPulseDelegate");
static_assert(offsetof(UMajorSpire, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UMajorSpire::OnProximityPrePulseDelegate");
static_assert(offsetof(UMajorSpire, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UMajorSpire::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UMajorSpire, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UMajorSpire::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UMajorSpire, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UMajorSpire::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UMajorSpire, OnDidDamage) == 1880, "Offset mismatch for UMajorSpire::OnDidDamage");
static_assert(offsetof(UMajorSpire, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UMajorSpire::bIgnoreInstigatorCollision");
static_assert(offsetof(UMajorSpire, bAddOwnerVelocity) == 1897, "Offset mismatch for UMajorSpire::bAddOwnerVelocity");
static_assert(offsetof(UMajorSpire, AbilitySourceLevel) == 1900, "Offset mismatch for UMajorSpire::AbilitySourceLevel");
static_assert(offsetof(UMajorSpire, DeliverableAbilityInfo) == 1904, "Offset mismatch for UMajorSpire::DeliverableAbilityInfo");
static_assert(offsetof(UMajorSpire, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UMajorSpire::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UMajorSpire, MarkerDisplay) == 2072, "Offset mismatch for UMajorSpire::MarkerDisplay");
static_assert(offsetof(UMajorSpire, MarkerPositionOffset) == 2248, "Offset mismatch for UMajorSpire::MarkerPositionOffset");
static_assert(offsetof(UMajorSpire, RegisteredTouchComponent) == 2272, "Offset mismatch for UMajorSpire::RegisteredTouchComponent");
static_assert(offsetof(UMajorSpire, AnalyticsTags) == 2288, "Offset mismatch for UMajorSpire::AnalyticsTags");
static_assert(offsetof(UMajorSpire, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UMajorSpire::PostProcessOverlapBlendWeight");
static_assert(offsetof(UMajorSpire, CustomInteractionWidget) == 2328, "Offset mismatch for UMajorSpire::CustomInteractionWidget");

// /Script/SpireBossRuntime.MajorSpireGameplayComponent
// Kind: Class; super: GameFrameworkComponent
class UMajorSpireGameplayComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnStateChangedEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStateTransitionedEvent; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CurrentState[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMajorSpireGameplayComponent, OnStateChangedEvent) == 192, "Offset mismatch for UMajorSpireGameplayComponent::OnStateChangedEvent");
static_assert(offsetof(UMajorSpireGameplayComponent, OnStateTransitionedEvent) == 208, "Offset mismatch for UMajorSpireGameplayComponent::OnStateTransitionedEvent");
static_assert(offsetof(UMajorSpireGameplayComponent, CurrentState) == 224, "Offset mismatch for UMajorSpireGameplayComponent::CurrentState");

// /Script/SpireBossRuntime.SpireBossAnimInstance
// Kind: Class; super: FortAIAnimInstance
class USpireBossAnimInstance
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t BeamKnockbackDirection[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    float ShardPitchAngle; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    float WindupBeamYaw; // 0x04AC (Size: 0x4, Type: FloatProperty)
    float CurrentBeamYaw; // 0x04B0 (Size: 0x4, Type: FloatProperty)
    float CurrentBeamPitch; // 0x04B4 (Size: 0x4, Type: FloatProperty)
    double MaskLookDirection; // 0x04B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bBeamAttackLoopActive; // 0x04C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBeamSweepActive; // 0x04C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x04C2
    float BeamAdditivePitchAlpha; // 0x04C4 (Size: 0x4, Type: FloatProperty)
    float BeamPitchAOAlpha; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAppendageFrontLeft; // 0x04CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAppendageFrontRight; // 0x04CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAppendageBack; // 0x04CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAppendageSlamActive; // 0x04CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableProceduralAdjustments; // 0x04D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyBeamAdditive; // 0x04D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPlayedAdditive; // 0x04D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x04D3
    float HorizontalKnockbackDistance; // 0x04D4 (Size: 0x4, Type: FloatProperty)
    float VerticalKnockbackDistance; // 0x04D8 (Size: 0x4, Type: FloatProperty)
    float MaskBeamInterpSpeed; // 0x04DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t BeamSweepTag[0x4]; // 0x04E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t AppendageSlamTag[0x1]; // 0x04E4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpireBossAnimInstance, BeamKnockbackDirection) == 1168, "Offset mismatch for USpireBossAnimInstance::BeamKnockbackDirection");
static_assert(offsetof(USpireBossAnimInstance, ShardPitchAngle) == 1192, "Offset mismatch for USpireBossAnimInstance::ShardPitchAngle");
static_assert(offsetof(USpireBossAnimInstance, WindupBeamYaw) == 1196, "Offset mismatch for USpireBossAnimInstance::WindupBeamYaw");
static_assert(offsetof(USpireBossAnimInstance, CurrentBeamYaw) == 1200, "Offset mismatch for USpireBossAnimInstance::CurrentBeamYaw");
static_assert(offsetof(USpireBossAnimInstance, CurrentBeamPitch) == 1204, "Offset mismatch for USpireBossAnimInstance::CurrentBeamPitch");
static_assert(offsetof(USpireBossAnimInstance, MaskLookDirection) == 1208, "Offset mismatch for USpireBossAnimInstance::MaskLookDirection");
static_assert(offsetof(USpireBossAnimInstance, bBeamAttackLoopActive) == 1216, "Offset mismatch for USpireBossAnimInstance::bBeamAttackLoopActive");
static_assert(offsetof(USpireBossAnimInstance, bBeamSweepActive) == 1217, "Offset mismatch for USpireBossAnimInstance::bBeamSweepActive");
static_assert(offsetof(USpireBossAnimInstance, BeamAdditivePitchAlpha) == 1220, "Offset mismatch for USpireBossAnimInstance::BeamAdditivePitchAlpha");
static_assert(offsetof(USpireBossAnimInstance, BeamPitchAOAlpha) == 1224, "Offset mismatch for USpireBossAnimInstance::BeamPitchAOAlpha");
static_assert(offsetof(USpireBossAnimInstance, bAppendageFrontLeft) == 1228, "Offset mismatch for USpireBossAnimInstance::bAppendageFrontLeft");
static_assert(offsetof(USpireBossAnimInstance, bAppendageFrontRight) == 1229, "Offset mismatch for USpireBossAnimInstance::bAppendageFrontRight");
static_assert(offsetof(USpireBossAnimInstance, bAppendageBack) == 1230, "Offset mismatch for USpireBossAnimInstance::bAppendageBack");
static_assert(offsetof(USpireBossAnimInstance, bAppendageSlamActive) == 1231, "Offset mismatch for USpireBossAnimInstance::bAppendageSlamActive");
static_assert(offsetof(USpireBossAnimInstance, bEnableProceduralAdjustments) == 1232, "Offset mismatch for USpireBossAnimInstance::bEnableProceduralAdjustments");
static_assert(offsetof(USpireBossAnimInstance, bApplyBeamAdditive) == 1233, "Offset mismatch for USpireBossAnimInstance::bApplyBeamAdditive");
static_assert(offsetof(USpireBossAnimInstance, bHasPlayedAdditive) == 1234, "Offset mismatch for USpireBossAnimInstance::bHasPlayedAdditive");
static_assert(offsetof(USpireBossAnimInstance, HorizontalKnockbackDistance) == 1236, "Offset mismatch for USpireBossAnimInstance::HorizontalKnockbackDistance");
static_assert(offsetof(USpireBossAnimInstance, VerticalKnockbackDistance) == 1240, "Offset mismatch for USpireBossAnimInstance::VerticalKnockbackDistance");
static_assert(offsetof(USpireBossAnimInstance, MaskBeamInterpSpeed) == 1244, "Offset mismatch for USpireBossAnimInstance::MaskBeamInterpSpeed");
static_assert(offsetof(USpireBossAnimInstance, BeamSweepTag) == 1248, "Offset mismatch for USpireBossAnimInstance::BeamSweepTag");
static_assert(offsetof(USpireBossAnimInstance, AppendageSlamTag) == 1252, "Offset mismatch for USpireBossAnimInstance::AppendageSlamTag");

// /Script/SpireBossRuntime.SpireBossAnimationInterface
// Kind: Class; super: Interface
class USpireBossAnimationInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpireBossRuntime.SpiresAnalyticsComponent
// Kind: Class; super: ActorComponent
class USpiresAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bIsMajorSpire; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasBeenDamaged; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    std::uint8_t SpireLocation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float SpireFirstDamagedTime; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float SpireDestroyedTime; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float SpireDamageReceived; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float SpireDamageDealtToPlayers; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::int32_t NumGuardsSpawned; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumGuardsEliminated; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::int32_t SpireWeakspotHits; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    FString DestroyerPlayerAccountID; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(USpiresAnalyticsComponent, bIsMajorSpire) == 192, "Offset mismatch for USpiresAnalyticsComponent::bIsMajorSpire");
static_assert(offsetof(USpiresAnalyticsComponent, bHasBeenDamaged) == 193, "Offset mismatch for USpiresAnalyticsComponent::bHasBeenDamaged");
static_assert(offsetof(USpiresAnalyticsComponent, SpireLocation) == 200, "Offset mismatch for USpiresAnalyticsComponent::SpireLocation");
static_assert(offsetof(USpiresAnalyticsComponent, SpireFirstDamagedTime) == 224, "Offset mismatch for USpiresAnalyticsComponent::SpireFirstDamagedTime");
static_assert(offsetof(USpiresAnalyticsComponent, SpireDestroyedTime) == 228, "Offset mismatch for USpiresAnalyticsComponent::SpireDestroyedTime");
static_assert(offsetof(USpiresAnalyticsComponent, SpireDamageReceived) == 232, "Offset mismatch for USpiresAnalyticsComponent::SpireDamageReceived");
static_assert(offsetof(USpiresAnalyticsComponent, SpireDamageDealtToPlayers) == 236, "Offset mismatch for USpiresAnalyticsComponent::SpireDamageDealtToPlayers");
static_assert(offsetof(USpiresAnalyticsComponent, NumGuardsSpawned) == 240, "Offset mismatch for USpiresAnalyticsComponent::NumGuardsSpawned");
static_assert(offsetof(USpiresAnalyticsComponent, NumGuardsEliminated) == 244, "Offset mismatch for USpiresAnalyticsComponent::NumGuardsEliminated");
static_assert(offsetof(USpiresAnalyticsComponent, SpireWeakspotHits) == 248, "Offset mismatch for USpiresAnalyticsComponent::SpireWeakspotHits");
static_assert(offsetof(USpiresAnalyticsComponent, DestroyerPlayerAccountID) == 256, "Offset mismatch for USpiresAnalyticsComponent::DestroyerPlayerAccountID");
