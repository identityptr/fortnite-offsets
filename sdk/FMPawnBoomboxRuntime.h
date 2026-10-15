/**
 * decamp dumper generated SDK
 * Package: /Script/FMPawnBoomboxRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMPawnBoomboxRuntime.PawnBoomboxTargetData
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FPawnBoomboxTargetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPawnBoomboxTargetData, SongShortName) == 8, "Offset mismatch for FPawnBoomboxTargetData::SongShortName");

// /Script/FMPawnBoomboxRuntime.BoomboxClientSettingsRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UBoomboxClientSettingsRecordPartition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bHearOtherPlayersBoomboxes; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBoomboxClientSettingsRecordPartition, bHearOtherPlayersBoomboxes) == 88, "Offset mismatch for UBoomboxClientSettingsRecordPartition::bHearOtherPlayersBoomboxes");

// /Script/FMPawnBoomboxRuntime.BoomboxSongPartPlayerOverrideComponent
// Kind: Class; super: SparksSongPartPlayerOverrideComponent
class UBoomboxSongPartPlayerOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t OverrideOverlayWidget[0x20]; // 0x00E0 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> NewOverrideOverlayWidget; // 0x0100 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UBoomboxSongPartPlayerOverrideComponent, OverrideOverlayWidget) == 224, "Offset mismatch for UBoomboxSongPartPlayerOverrideComponent::OverrideOverlayWidget");
static_assert(offsetof(UBoomboxSongPartPlayerOverrideComponent, NewOverrideOverlayWidget) == 256, "Offset mismatch for UBoomboxSongPartPlayerOverrideComponent::NewOverrideOverlayWidget");

// /Script/FMPawnBoomboxRuntime.PawnBoomboxAbility
// Kind: Class; super: FortGameplayAbility
class UPawnBoomboxAbility
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t ActivationType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t EffectContainers[0x398]; // 0x03B0 (Size: 0x398, Type: StructProperty)
    TArray<void*> GameplayEffectContainers; // 0x0748 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DynamicGameplayEffectContainers; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t OwnerPreviewImageOverrideTags[0x20]; // 0x0768 (Size: 0x20, Type: StructProperty)
    void* ProjectileClass; // 0x0788 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowBlueprintReplicatedVariables; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0791
    std::uint8_t DamageStatHandle[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    TArray<void*> AbilityCosts; // 0x07A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Costs; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyingCostsEnabled; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    // 0x07C8 BoolProperty bShowWidgetForCosts (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x07C9
    std::uint8_t MovementCancellationLeashLength[0x28]; // 0x07D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownDuration[0x28]; // 0x07F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownTags[0x20]; // 0x0820 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplicitCooldownAssetTags[0x20]; // 0x0840 (Size: 0x20, Type: StructProperty)
    std::uint8_t CustomFiringSequenceLength; // 0x0860 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0861
    std::uint8_t bDisableMoveCombining; // 0x0864 (Size: 0x1, Type: BoolProperty)
    // 0x0864 BoolProperty bIgnoreClientActivationAttempts (shared storage)
    // 0x0864 BoolProperty bPersistOnDeath (shared storage)
    // 0x0864 BoolProperty bRequireServerTimeValidationPass (shared storage)
    // 0x0864 BoolProperty bRequireServerValidationPass (shared storage)
    // 0x0864 BoolProperty bStartWithCooldown (shared storage)
    // 0x0864 BoolProperty bStopsAIBehaviorLogic (shared storage)
    // 0x0864 BoolProperty bStopsAIMovement (shared storage)
    std::uint8_t bForceNormalAILOD; // 0x0865 (Size: 0x1, Type: BoolProperty)
    // 0x0865 BoolProperty bStopsRVOAvoidance (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x0866
    std::uint8_t MinimumRequiredAILODLevel; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0869
    std::uint8_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests; // 0x086C (Size: 0x1, Type: BoolProperty)
    // 0x086C BoolProperty bAcceptTargetActorVehicleForCanHitTests (shared storage)
    // 0x086C BoolProperty bRelevantForAIDespawning (shared storage)
    // 0x086C BoolProperty bUseOwnerInstigatorAsInstigator (shared storage)
    // 0x086C BoolProperty bUseTetheredPawnAsInstigator (shared storage)
    std::uint8_t bUseAIFireLocationAndRotation; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x086E
    std::uint8_t AIWeaponUsage; // 0x0870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0871
    std::uint8_t WeaponTestApplicationTag[0x4]; // 0x0874 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x0878 (Size: 0x1, Type: BoolProperty)
    // 0x0878 BoolProperty bVerifyFireOffsetIsNotObstructedByWorldGeometry (shared storage)
    std::uint8_t Pad_0009[0x7]; // 0x0879
    std::uint8_t FireOffset[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    float ActivationNoiseRange; // 0x0898 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseRange; // 0x089C (Size: 0x4, Type: FloatProperty)
    float ActivationNoiseLoudness; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseLoudness; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProhibitedTargetTags[0x21]; // 0x08A8 (Size: 0x21, Type: StructProperty)
    std::uint8_t bLeadPawnTargets; // 0x08C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x08CA
    float DesiredThrowAngle; // 0x08CC (Size: 0x4, Type: FloatProperty)
    float MaxYawAngleToFire; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMaxYawAngleToFire; // 0x08D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTargetActorLocation; // 0x08D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x08D6
    float InitialAccuracyMax; // 0x08D8 (Size: 0x4, Type: FloatProperty)
    float InitialAccuracyMin; // 0x08DC (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMax; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMin; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    float MinAccuracyDistance; // 0x08E8 (Size: 0x4, Type: FloatProperty)
    float MaxAccuracyDistance; // 0x08EC (Size: 0x4, Type: FloatProperty)
    float AccuracyDistanceMultiplier; // 0x08F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUsesToReachTargetAccuracy; // 0x08F4 (Size: 0x4, Type: IntProperty)
    std::int32_t UseCount; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMobileToggle; // 0x08FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateIfTagsAlreadyPresent; // 0x08FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0xA]; // 0x08FE
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0918
    std::uint8_t MontageInfo[0x58]; // 0x0978 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousMontageInfo[0x58]; // 0x09D0 (Size: 0x58, Type: StructProperty)
    TArray<void*> ModList; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* AbilityWeapon; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0A50 (Size: 0x18, Type: TextProperty)
    void* SmallPreviewImageOverride; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x10]; // 0x0A70
    float ChargeStartTime; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0A84
    std::uint8_t ChargeState; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x27]; // 0x0A89
    void* ToolTip; // 0x0AB0 (Size: 0x8, Type: ClassProperty)
    void* StatList; // 0x0AB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0AC0
    std::uint8_t ActorTrackingSettings[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnalyticsTags[0x20]; // 0x0AF0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagChangedActions; // 0x0B10 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPawnBoomboxAbility, ActivationType) == 936, "Offset mismatch for UPawnBoomboxAbility::ActivationType");
static_assert(offsetof(UPawnBoomboxAbility, EffectContainers) == 944, "Offset mismatch for UPawnBoomboxAbility::EffectContainers");
static_assert(offsetof(UPawnBoomboxAbility, GameplayEffectContainers) == 1864, "Offset mismatch for UPawnBoomboxAbility::GameplayEffectContainers");
static_assert(offsetof(UPawnBoomboxAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UPawnBoomboxAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(UPawnBoomboxAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UPawnBoomboxAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UPawnBoomboxAbility, ProjectileClass) == 1928, "Offset mismatch for UPawnBoomboxAbility::ProjectileClass");
static_assert(offsetof(UPawnBoomboxAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UPawnBoomboxAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UPawnBoomboxAbility, DamageStatHandle) == 1944, "Offset mismatch for UPawnBoomboxAbility::DamageStatHandle");
static_assert(offsetof(UPawnBoomboxAbility, AbilityCosts) == 1960, "Offset mismatch for UPawnBoomboxAbility::AbilityCosts");
static_assert(offsetof(UPawnBoomboxAbility, Costs) == 1976, "Offset mismatch for UPawnBoomboxAbility::Costs");
static_assert(offsetof(UPawnBoomboxAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for UPawnBoomboxAbility::bApplyingCostsEnabled");
static_assert(offsetof(UPawnBoomboxAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for UPawnBoomboxAbility::MovementCancellationLeashLength");
static_assert(offsetof(UPawnBoomboxAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for UPawnBoomboxAbility::ExplicitCooldownDuration");
static_assert(offsetof(UPawnBoomboxAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for UPawnBoomboxAbility::ExplicitCooldownTags");
static_assert(offsetof(UPawnBoomboxAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UPawnBoomboxAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(UPawnBoomboxAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for UPawnBoomboxAbility::CustomFiringSequenceLength");
static_assert(offsetof(UPawnBoomboxAbility, bDisableMoveCombining) == 2148, "Offset mismatch for UPawnBoomboxAbility::bDisableMoveCombining");
static_assert(offsetof(UPawnBoomboxAbility, bForceNormalAILOD) == 2149, "Offset mismatch for UPawnBoomboxAbility::bForceNormalAILOD");
static_assert(offsetof(UPawnBoomboxAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UPawnBoomboxAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(UPawnBoomboxAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UPawnBoomboxAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UPawnBoomboxAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UPawnBoomboxAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(UPawnBoomboxAbility, AIWeaponUsage) == 2160, "Offset mismatch for UPawnBoomboxAbility::AIWeaponUsage");
static_assert(offsetof(UPawnBoomboxAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for UPawnBoomboxAbility::WeaponTestApplicationTag");
static_assert(offsetof(UPawnBoomboxAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UPawnBoomboxAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UPawnBoomboxAbility, FireOffset) == 2176, "Offset mismatch for UPawnBoomboxAbility::FireOffset");
static_assert(offsetof(UPawnBoomboxAbility, ActivationNoiseRange) == 2200, "Offset mismatch for UPawnBoomboxAbility::ActivationNoiseRange");
static_assert(offsetof(UPawnBoomboxAbility, ImpactNoiseRange) == 2204, "Offset mismatch for UPawnBoomboxAbility::ImpactNoiseRange");
static_assert(offsetof(UPawnBoomboxAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for UPawnBoomboxAbility::ActivationNoiseLoudness");
static_assert(offsetof(UPawnBoomboxAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for UPawnBoomboxAbility::ImpactNoiseLoudness");
static_assert(offsetof(UPawnBoomboxAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for UPawnBoomboxAbility::ProhibitedTargetTags");
static_assert(offsetof(UPawnBoomboxAbility, bLeadPawnTargets) == 2249, "Offset mismatch for UPawnBoomboxAbility::bLeadPawnTargets");
static_assert(offsetof(UPawnBoomboxAbility, DesiredThrowAngle) == 2252, "Offset mismatch for UPawnBoomboxAbility::DesiredThrowAngle");
static_assert(offsetof(UPawnBoomboxAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for UPawnBoomboxAbility::MaxYawAngleToFire");
static_assert(offsetof(UPawnBoomboxAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UPawnBoomboxAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(UPawnBoomboxAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for UPawnBoomboxAbility::bUseTargetActorLocation");
static_assert(offsetof(UPawnBoomboxAbility, InitialAccuracyMax) == 2264, "Offset mismatch for UPawnBoomboxAbility::InitialAccuracyMax");
static_assert(offsetof(UPawnBoomboxAbility, InitialAccuracyMin) == 2268, "Offset mismatch for UPawnBoomboxAbility::InitialAccuracyMin");
static_assert(offsetof(UPawnBoomboxAbility, TargetAccuracyMax) == 2272, "Offset mismatch for UPawnBoomboxAbility::TargetAccuracyMax");
static_assert(offsetof(UPawnBoomboxAbility, TargetAccuracyMin) == 2276, "Offset mismatch for UPawnBoomboxAbility::TargetAccuracyMin");
static_assert(offsetof(UPawnBoomboxAbility, MinAccuracyDistance) == 2280, "Offset mismatch for UPawnBoomboxAbility::MinAccuracyDistance");
static_assert(offsetof(UPawnBoomboxAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for UPawnBoomboxAbility::MaxAccuracyDistance");
static_assert(offsetof(UPawnBoomboxAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UPawnBoomboxAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(UPawnBoomboxAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UPawnBoomboxAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UPawnBoomboxAbility, UseCount) == 2296, "Offset mismatch for UPawnBoomboxAbility::UseCount");
static_assert(offsetof(UPawnBoomboxAbility, bIsMobileToggle) == 2300, "Offset mismatch for UPawnBoomboxAbility::bIsMobileToggle");
static_assert(offsetof(UPawnBoomboxAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UPawnBoomboxAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UPawnBoomboxAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UPawnBoomboxAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UPawnBoomboxAbility, MontageInfo) == 2424, "Offset mismatch for UPawnBoomboxAbility::MontageInfo");
static_assert(offsetof(UPawnBoomboxAbility, PreviousMontageInfo) == 2512, "Offset mismatch for UPawnBoomboxAbility::PreviousMontageInfo");
static_assert(offsetof(UPawnBoomboxAbility, ModList) == 2600, "Offset mismatch for UPawnBoomboxAbility::ModList");
static_assert(offsetof(UPawnBoomboxAbility, AbilityWeapon) == 2616, "Offset mismatch for UPawnBoomboxAbility::AbilityWeapon");
static_assert(offsetof(UPawnBoomboxAbility, DisplayName) == 2624, "Offset mismatch for UPawnBoomboxAbility::DisplayName");
static_assert(offsetof(UPawnBoomboxAbility, Description) == 2640, "Offset mismatch for UPawnBoomboxAbility::Description");
static_assert(offsetof(UPawnBoomboxAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for UPawnBoomboxAbility::SmallPreviewImageOverride");
static_assert(offsetof(UPawnBoomboxAbility, ChargeStartTime) == 2688, "Offset mismatch for UPawnBoomboxAbility::ChargeStartTime");
static_assert(offsetof(UPawnBoomboxAbility, ChargeState) == 2696, "Offset mismatch for UPawnBoomboxAbility::ChargeState");
static_assert(offsetof(UPawnBoomboxAbility, ToolTip) == 2736, "Offset mismatch for UPawnBoomboxAbility::ToolTip");
static_assert(offsetof(UPawnBoomboxAbility, StatList) == 2744, "Offset mismatch for UPawnBoomboxAbility::StatList");
static_assert(offsetof(UPawnBoomboxAbility, ActorTrackingSettings) == 2760, "Offset mismatch for UPawnBoomboxAbility::ActorTrackingSettings");
static_assert(offsetof(UPawnBoomboxAbility, AnalyticsTags) == 2800, "Offset mismatch for UPawnBoomboxAbility::AnalyticsTags");
static_assert(offsetof(UPawnBoomboxAbility, TagChangedActions) == 2832, "Offset mismatch for UPawnBoomboxAbility::TagChangedActions");

// /Script/FMPawnBoomboxRuntime.PawnBoomboxCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UPawnBoomboxCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMPawnBoomboxRuntime.PawnBoomboxComponent
// Kind: Class; super: FMBaseBoomboxComponent
class UPawnBoomboxComponent
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* DecorationClass; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bShowDecorationOnLocalPlayer; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01A9
    std::uint8_t AttachmentSocket[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachmentOffset[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CrouchingTag[0x10]; // 0x01C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t AdditionalCrouchingOffset[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    void* SpawnedDecoration; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoomboxPlayingTag[0x8]; // 0x01F8 (Size: 0x8, Type: StructProperty)
    void* StartBoomboxAbility; // 0x0200 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StopSongGameplayEventTag[0x4]; // 0x0208 (Size: 0x4, Type: StructProperty)
    FName StopBoomboxSongTouchInputActionName; // 0x020C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPawnBoomboxComponent, DecorationClass) == 416, "Offset mismatch for UPawnBoomboxComponent::DecorationClass");
static_assert(offsetof(UPawnBoomboxComponent, bShowDecorationOnLocalPlayer) == 424, "Offset mismatch for UPawnBoomboxComponent::bShowDecorationOnLocalPlayer");
static_assert(offsetof(UPawnBoomboxComponent, AttachmentSocket) == 428, "Offset mismatch for UPawnBoomboxComponent::AttachmentSocket");
static_assert(offsetof(UPawnBoomboxComponent, AttachmentOffset) == 432, "Offset mismatch for UPawnBoomboxComponent::AttachmentOffset");
static_assert(offsetof(UPawnBoomboxComponent, CrouchingTag) == 456, "Offset mismatch for UPawnBoomboxComponent::CrouchingTag");
static_assert(offsetof(UPawnBoomboxComponent, AdditionalCrouchingOffset) == 472, "Offset mismatch for UPawnBoomboxComponent::AdditionalCrouchingOffset");
static_assert(offsetof(UPawnBoomboxComponent, SpawnedDecoration) == 496, "Offset mismatch for UPawnBoomboxComponent::SpawnedDecoration");
static_assert(offsetof(UPawnBoomboxComponent, BoomboxPlayingTag) == 504, "Offset mismatch for UPawnBoomboxComponent::BoomboxPlayingTag");
static_assert(offsetof(UPawnBoomboxComponent, StartBoomboxAbility) == 512, "Offset mismatch for UPawnBoomboxComponent::StartBoomboxAbility");
static_assert(offsetof(UPawnBoomboxComponent, StopSongGameplayEventTag) == 520, "Offset mismatch for UPawnBoomboxComponent::StopSongGameplayEventTag");
static_assert(offsetof(UPawnBoomboxComponent, StopBoomboxSongTouchInputActionName) == 524, "Offset mismatch for UPawnBoomboxComponent::StopBoomboxSongTouchInputActionName");

// /Script/FMPawnBoomboxRuntime.PawnBoomboxLegacyDebugView
// Kind: Class; super: Actor
class UPawnBoomboxLegacyDebugView
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPawnBoomboxLegacyDebugView, PrimaryActorTick) == 40, "Offset mismatch for UPawnBoomboxLegacyDebugView::PrimaryActorTick");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, bAlwaysRelevant) == 88, "Offset mismatch for UPawnBoomboxLegacyDebugView::bAlwaysRelevant");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, bExchangedRoles) == 89, "Offset mismatch for UPawnBoomboxLegacyDebugView::bExchangedRoles");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UPawnBoomboxLegacyDebugView::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UPawnBoomboxLegacyDebugView::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, bActorEnableCollision) == 93, "Offset mismatch for UPawnBoomboxLegacyDebugView::bActorEnableCollision");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UPawnBoomboxLegacyDebugView::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UPawnBoomboxLegacyDebugView::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, RemoteRole) == 96, "Offset mismatch for UPawnBoomboxLegacyDebugView::RemoteRole");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, InitialLifeSpan) == 100, "Offset mismatch for UPawnBoomboxLegacyDebugView::InitialLifeSpan");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, CustomTimeDilation) == 104, "Offset mismatch for UPawnBoomboxLegacyDebugView::CustomTimeDilation");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, RayTracingGroupId) == 108, "Offset mismatch for UPawnBoomboxLegacyDebugView::RayTracingGroupId");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, AttachmentReplication) == 112, "Offset mismatch for UPawnBoomboxLegacyDebugView::AttachmentReplication");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, ReplicatedMovement) == 208, "Offset mismatch for UPawnBoomboxLegacyDebugView::ReplicatedMovement");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Owner) == 344, "Offset mismatch for UPawnBoomboxLegacyDebugView::Owner");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetDriverName) == 352, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetDriverName");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Role) == 356, "Offset mismatch for UPawnBoomboxLegacyDebugView::Role");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetDormancy) == 357, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetDormancy");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UPawnBoomboxLegacyDebugView::SpawnCollisionHandlingMethod");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, AutoReceiveInput) == 359, "Offset mismatch for UPawnBoomboxLegacyDebugView::AutoReceiveInput");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, InputPriority) == 360, "Offset mismatch for UPawnBoomboxLegacyDebugView::InputPriority");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, InputComponent) == 368, "Offset mismatch for UPawnBoomboxLegacyDebugView::InputComponent");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetTag) == 376, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetTag");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetCullDistanceSquared) == 380, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetCullDistanceSquared");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetUpdateFrequency) == 384, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetUpdateFrequency");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, MinNetUpdateFrequency) == 388, "Offset mismatch for UPawnBoomboxLegacyDebugView::MinNetUpdateFrequency");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, NetPriority) == 392, "Offset mismatch for UPawnBoomboxLegacyDebugView::NetPriority");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, PhysicsReplicationMode) == 396, "Offset mismatch for UPawnBoomboxLegacyDebugView::PhysicsReplicationMode");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Instigator) == 408, "Offset mismatch for UPawnBoomboxLegacyDebugView::Instigator");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Children) == 416, "Offset mismatch for UPawnBoomboxLegacyDebugView::Children");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, RootComponent) == 432, "Offset mismatch for UPawnBoomboxLegacyDebugView::RootComponent");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, HLODLayer) == 448, "Offset mismatch for UPawnBoomboxLegacyDebugView::HLODLayer");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Layers) == 456, "Offset mismatch for UPawnBoomboxLegacyDebugView::Layers");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, ParentComponent) == 472, "Offset mismatch for UPawnBoomboxLegacyDebugView::ParentComponent");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, Tags) == 496, "Offset mismatch for UPawnBoomboxLegacyDebugView::Tags");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnTakeAnyDamage) == 512, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnTakeAnyDamage");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnTakePointDamage) == 513, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnTakePointDamage");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnTakeRadialDamage) == 514, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnTakeRadialDamage");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnActorBeginOverlap) == 515, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnActorBeginOverlap");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnActorEndOverlap) == 516, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnActorEndOverlap");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnBeginCursorOver) == 517, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnBeginCursorOver");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnEndCursorOver) == 518, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnEndCursorOver");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnClicked) == 519, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnClicked");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnReleased) == 520, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnReleased");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnInputTouchBegin) == 521, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnInputTouchBegin");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnInputTouchEnd) == 522, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnInputTouchEnd");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnInputTouchEnter) == 523, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnInputTouchEnter");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnInputTouchLeave) == 524, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnInputTouchLeave");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnActorHit) == 525, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnActorHit");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnDestroyed) == 526, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnDestroyed");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, OnEndPlay) == 527, "Offset mismatch for UPawnBoomboxLegacyDebugView::OnEndPlay");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, InstanceComponents) == 592, "Offset mismatch for UPawnBoomboxLegacyDebugView::InstanceComponents");
static_assert(offsetof(UPawnBoomboxLegacyDebugView, BlueprintCreatedComponents) == 608, "Offset mismatch for UPawnBoomboxLegacyDebugView::BlueprintCreatedComponents");

// /Script/FMPawnBoomboxRuntime.PawnBoomboxSubsystem
// Kind: Class; super: WorldSubsystem
class UPawnBoomboxSubsystem
{
public:
    std::uint8_t Opaque[1];
};
