/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteBoonsCh7S4Runtime
 */
#pragma once
#include "Basic.h"

// /Script/SpriteBoonsCh7S4Runtime.FortItemComponentData_SpriteBoonRarityLedger
// Kind: ScriptStruct; super: FortItemComponentData
struct FFortItemComponentData_SpriteBoonRarityLedger
{
public:
    std::uint8_t SpawnedRarityMask; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortItemComponentData_SpriteBoonRarityLedger, SpawnedRarityMask) == 0, "Offset mismatch for FFortItemComponentData_SpriteBoonRarityLedger::SpawnedRarityMask");

// /Script/SpriteBoonsCh7S4Runtime.FortDeathExtensionComponent_CargoLyingSpriteExtraction
// Kind: Class; super: FortActorComponent_FortDeathExtension
class UFortDeathExtensionComponent_CargoLyingSpriteExtraction
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RequiredKillerExtractableTag[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDeathExtensionComponent_CargoLyingSpriteExtraction, RequiredKillerExtractableTag) == 200, "Offset mismatch for UFortDeathExtensionComponent_CargoLyingSpriteExtraction::RequiredKillerExtractableTag");

// /Script/SpriteBoonsCh7S4Runtime.SpriteBoonGameplayAbility_HealShieldIncrease
// Kind: Class; super: FortGameplayAbility
class USpriteBoonGameplayAbility_HealShieldIncrease
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

static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ActivationType) == 936, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ActivationType");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, EffectContainers) == 944, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::EffectContainers");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, GameplayEffectContainers) == 1864, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::GameplayEffectContainers");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::DynamicGameplayEffectContainers");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::OwnerPreviewImageOverrideTags");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ProjectileClass) == 1928, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ProjectileClass");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, DamageStatHandle) == 1944, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::DamageStatHandle");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, AbilityCosts) == 1960, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::AbilityCosts");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, Costs) == 1976, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::Costs");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bApplyingCostsEnabled) == 1992, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bApplyingCostsEnabled");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MovementCancellationLeashLength) == 2000, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MovementCancellationLeashLength");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ExplicitCooldownDuration) == 2040, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ExplicitCooldownDuration");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ExplicitCooldownTags) == 2080, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ExplicitCooldownTags");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ExplicitCooldownAssetTags");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, CustomFiringSequenceLength) == 2144, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::CustomFiringSequenceLength");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bDisableMoveCombining) == 2148, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bDisableMoveCombining");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bForceNormalAILOD) == 2149, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bForceNormalAILOD");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MinimumRequiredAILODLevel");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bUseAIFireLocationAndRotation");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, AIWeaponUsage) == 2160, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::AIWeaponUsage");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, WeaponTestApplicationTag) == 2164, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::WeaponTestApplicationTag");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, FireOffset) == 2176, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::FireOffset");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ActivationNoiseRange) == 2200, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ActivationNoiseRange");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ImpactNoiseRange) == 2204, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ImpactNoiseRange");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ActivationNoiseLoudness) == 2208, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ActivationNoiseLoudness");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ImpactNoiseLoudness) == 2212, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ImpactNoiseLoudness");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ProhibitedTargetTags) == 2216, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ProhibitedTargetTags");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bLeadPawnTargets) == 2249, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bLeadPawnTargets");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, DesiredThrowAngle) == 2252, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::DesiredThrowAngle");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MaxYawAngleToFire) == 2256, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MaxYawAngleToFire");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bClampMaxYawAngleToFire");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bUseTargetActorLocation) == 2261, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bUseTargetActorLocation");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, InitialAccuracyMax) == 2264, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::InitialAccuracyMax");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, InitialAccuracyMin) == 2268, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::InitialAccuracyMin");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, TargetAccuracyMax) == 2272, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::TargetAccuracyMax");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, TargetAccuracyMin) == 2276, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::TargetAccuracyMin");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MinAccuracyDistance) == 2280, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MinAccuracyDistance");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MaxAccuracyDistance) == 2284, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MaxAccuracyDistance");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::AccuracyDistanceMultiplier");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::NumUsesToReachTargetAccuracy");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, UseCount) == 2296, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::UseCount");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bIsMobileToggle) == 2300, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bIsMobileToggle");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, MontageInfo) == 2424, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::MontageInfo");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, PreviousMontageInfo) == 2512, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::PreviousMontageInfo");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ModList) == 2600, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ModList");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, AbilityWeapon) == 2616, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::AbilityWeapon");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, DisplayName) == 2624, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::DisplayName");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, Description) == 2640, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::Description");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, SmallPreviewImageOverride) == 2664, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::SmallPreviewImageOverride");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ChargeStartTime) == 2688, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ChargeStartTime");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ChargeState) == 2696, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ChargeState");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ToolTip) == 2736, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ToolTip");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, StatList) == 2744, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::StatList");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, ActorTrackingSettings) == 2760, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::ActorTrackingSettings");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, AnalyticsTags) == 2800, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::AnalyticsTags");
static_assert(offsetof(USpriteBoonGameplayAbility_HealShieldIncrease, TagChangedActions) == 2832, "Offset mismatch for USpriteBoonGameplayAbility_HealShieldIncrease::TagChangedActions");

// /Script/SpriteBoonsCh7S4Runtime.SpriteBoonRarityLedgerLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USpriteBoonRarityLedgerLibrary
{
public:
    std::uint8_t Opaque[1];
};
