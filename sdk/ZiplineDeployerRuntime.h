/**
 * decamp dumper generated SDK
 * Package: /Script/ZiplineDeployerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ZiplineDeployerRuntime.FortGameplayAbility_ZiplineDeployer_PrimaryFire
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ZiplineDeployer_PrimaryFire
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

static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ActivationType) == 936, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ActivationType");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, EffectContainers) == 944, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::EffectContainers");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, GameplayEffectContainers) == 1864, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::GameplayEffectContainers");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::DynamicGameplayEffectContainers");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ProjectileClass) == 1928, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ProjectileClass");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, DamageStatHandle) == 1944, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::DamageStatHandle");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, AbilityCosts) == 1960, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::AbilityCosts");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, Costs) == 1976, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::Costs");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bApplyingCostsEnabled) == 1992, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bApplyingCostsEnabled");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MovementCancellationLeashLength) == 2000, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MovementCancellationLeashLength");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ExplicitCooldownDuration) == 2040, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ExplicitCooldownDuration");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ExplicitCooldownTags) == 2080, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ExplicitCooldownTags");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ExplicitCooldownAssetTags");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, CustomFiringSequenceLength) == 2144, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::CustomFiringSequenceLength");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bDisableMoveCombining) == 2148, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bDisableMoveCombining");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bForceNormalAILOD) == 2149, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bForceNormalAILOD");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MinimumRequiredAILODLevel");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bUseAIFireLocationAndRotation");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, AIWeaponUsage) == 2160, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::AIWeaponUsage");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, WeaponTestApplicationTag) == 2164, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::WeaponTestApplicationTag");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, FireOffset) == 2176, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::FireOffset");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ActivationNoiseRange) == 2200, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ActivationNoiseRange");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ImpactNoiseRange) == 2204, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ImpactNoiseRange");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ActivationNoiseLoudness) == 2208, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ActivationNoiseLoudness");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ImpactNoiseLoudness) == 2212, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ImpactNoiseLoudness");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ProhibitedTargetTags) == 2216, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ProhibitedTargetTags");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bLeadPawnTargets) == 2249, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bLeadPawnTargets");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, DesiredThrowAngle) == 2252, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::DesiredThrowAngle");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MaxYawAngleToFire) == 2256, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MaxYawAngleToFire");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bClampMaxYawAngleToFire");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bUseTargetActorLocation) == 2261, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bUseTargetActorLocation");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, InitialAccuracyMax) == 2264, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::InitialAccuracyMax");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, InitialAccuracyMin) == 2268, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::InitialAccuracyMin");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, TargetAccuracyMax) == 2272, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::TargetAccuracyMax");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, TargetAccuracyMin) == 2276, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::TargetAccuracyMin");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MinAccuracyDistance) == 2280, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MinAccuracyDistance");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MaxAccuracyDistance) == 2284, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MaxAccuracyDistance");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::AccuracyDistanceMultiplier");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, UseCount) == 2296, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::UseCount");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bIsMobileToggle) == 2300, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bIsMobileToggle");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, MontageInfo) == 2424, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::MontageInfo");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, PreviousMontageInfo) == 2512, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::PreviousMontageInfo");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ModList) == 2600, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ModList");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, AbilityWeapon) == 2616, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::AbilityWeapon");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, DisplayName) == 2624, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::DisplayName");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, Description) == 2640, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::Description");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, SmallPreviewImageOverride) == 2664, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::SmallPreviewImageOverride");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ChargeStartTime) == 2688, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ChargeStartTime");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ChargeState) == 2696, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ChargeState");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ToolTip) == 2736, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ToolTip");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, StatList) == 2744, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::StatList");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, ActorTrackingSettings) == 2760, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::ActorTrackingSettings");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, AnalyticsTags) == 2800, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::AnalyticsTags");
static_assert(offsetof(UFortGameplayAbility_ZiplineDeployer_PrimaryFire, TagChangedActions) == 2832, "Offset mismatch for UFortGameplayAbility_ZiplineDeployer_PrimaryFire::TagChangedActions");

// /Script/ZiplineDeployerRuntime.FortMovementMode_ZiplineDeployerMount
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ZiplineDeployerMount
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t MaxMountTime[0x30]; // 0x05A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SmashImmuneTag[0x4]; // 0x05D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuildingDeathReason[0x4]; // 0x05D4 (Size: 0x4, Type: StructProperty)
    TArray<void*> MoveIgnoredBuildings; // 0x05D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMovementMode_ZiplineDeployerMount, MaxMountTime) == 1440, "Offset mismatch for UFortMovementMode_ZiplineDeployerMount::MaxMountTime");
static_assert(offsetof(UFortMovementMode_ZiplineDeployerMount, SmashImmuneTag) == 1488, "Offset mismatch for UFortMovementMode_ZiplineDeployerMount::SmashImmuneTag");
static_assert(offsetof(UFortMovementMode_ZiplineDeployerMount, BuildingDeathReason) == 1492, "Offset mismatch for UFortMovementMode_ZiplineDeployerMount::BuildingDeathReason");
static_assert(offsetof(UFortMovementMode_ZiplineDeployerMount, MoveIgnoredBuildings) == 1496, "Offset mismatch for UFortMovementMode_ZiplineDeployerMount::MoveIgnoredBuildings");

// /Script/ZiplineDeployerRuntime.FortMovementMode_ZiplineDeployerMountRuntimeData
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_ZiplineDeployerMountRuntimeData
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t DeployDirection[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeployLocation[0x1]; // 0x0258 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ZiplineDeployerMountRuntimeData, DeployDirection) == 576, "Offset mismatch for UFortMovementMode_ZiplineDeployerMountRuntimeData::DeployDirection");
static_assert(offsetof(UFortMovementMode_ZiplineDeployerMountRuntimeData, DeployLocation) == 600, "Offset mismatch for UFortMovementMode_ZiplineDeployerMountRuntimeData::DeployLocation");

// /Script/ZiplineDeployerRuntime.FortPawnComponent_ZiplineDeployer
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_ZiplineDeployer
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CachedProjectileShootLoc[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedProjectileShootDir[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    float CurrentHeightAboveWorld; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    double MaxAllowedDeployHeight; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    double CachedStartingDeployOffsetZ; // 0x0108 (Size: 0x8, Type: DoubleProperty)
    double StartDroneSpawnOffsetZWhenCrouching; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TagToEnableHeightCheck[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t HeightCheckInterval[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightCheckTraceLength[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndingZiplineDeployHeightZ[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t DroneDeployRadius[0x30]; // 0x01A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ProjectileSpeed[0x30]; // 0x01D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TrajectoryExtraLifeSpan[0x30]; // 0x0200 (Size: 0x30, Type: StructProperty)
    std::uint8_t AimPitchConstraint[0x30]; // 0x0230 (Size: 0x30, Type: StructProperty)
    std::uint8_t DeployMinDistance[0x30]; // 0x0260 (Size: 0x30, Type: StructProperty)
    std::uint8_t DeployMinHeightWhenFalling[0x30]; // 0x0290 (Size: 0x30, Type: StructProperty)
    std::uint8_t EndingDeployHeightOffsetZ[0x30]; // 0x02C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AutoAttachEjectFromVehicle[0x30]; // 0x02F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampPitchForStartLoc[0x30]; // 0x0320 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampPitchMaxRelativeHeight[0x30]; // 0x0350 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampStartPitchUseMinConstraint[0x30]; // 0x0380 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampEndPitchRelativeHeightForceHorizontal[0x30]; // 0x03B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampEndPitchCheckRelativeHeight[0x30]; // 0x03E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampEndPitchCheckMaxBuildHeight[0x30]; // 0x0410 (Size: 0x30, Type: StructProperty)
    std::uint8_t ClampPitchProjectDistance[0x30]; // 0x0440 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartDroneSpawnZOffsetFromVehicle[0x30]; // 0x0470 (Size: 0x30, Type: StructProperty)
    std::uint8_t StartDroneSpawnZOffset[0x30]; // 0x04A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ProjectileLifeSpan[0x30]; // 0x04D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ProjLifeSpanAdjustOnlyForUp[0x30]; // 0x0500 (Size: 0x30, Type: StructProperty)
    std::uint8_t ProjLifeSpanAdjustPitchConstraint[0x30]; // 0x0530 (Size: 0x30, Type: StructProperty)
    std::uint8_t ProjLifeSpanAdjustDelta[0x30]; // 0x0560 (Size: 0x30, Type: StructProperty)
    float ProjectileExtent; // 0x0590 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTraceComplexForSplineTrace; // 0x0594 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, CachedProjectileShootLoc) == 200, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::CachedProjectileShootLoc");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, CachedProjectileShootDir) == 224, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::CachedProjectileShootDir");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, CurrentHeightAboveWorld) == 248, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::CurrentHeightAboveWorld");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, MaxAllowedDeployHeight) == 256, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::MaxAllowedDeployHeight");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, CachedStartingDeployOffsetZ) == 264, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::CachedStartingDeployOffsetZ");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, StartDroneSpawnOffsetZWhenCrouching) == 272, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::StartDroneSpawnOffsetZWhenCrouching");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, TagToEnableHeightCheck) == 280, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::TagToEnableHeightCheck");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, HeightCheckInterval) == 288, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::HeightCheckInterval");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, HeightCheckTraceLength) == 328, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::HeightCheckTraceLength");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, EndingZiplineDeployHeightZ) == 368, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::EndingZiplineDeployHeightZ");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, DroneDeployRadius) == 416, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::DroneDeployRadius");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjectileSpeed) == 464, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjectileSpeed");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, TrajectoryExtraLifeSpan) == 512, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::TrajectoryExtraLifeSpan");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, AimPitchConstraint) == 560, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::AimPitchConstraint");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, DeployMinDistance) == 608, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::DeployMinDistance");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, DeployMinHeightWhenFalling) == 656, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::DeployMinHeightWhenFalling");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, EndingDeployHeightOffsetZ) == 704, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::EndingDeployHeightOffsetZ");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, AutoAttachEjectFromVehicle) == 752, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::AutoAttachEjectFromVehicle");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampPitchForStartLoc) == 800, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampPitchForStartLoc");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampPitchMaxRelativeHeight) == 848, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampPitchMaxRelativeHeight");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampStartPitchUseMinConstraint) == 896, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampStartPitchUseMinConstraint");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampEndPitchRelativeHeightForceHorizontal) == 944, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampEndPitchRelativeHeightForceHorizontal");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampEndPitchCheckRelativeHeight) == 992, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampEndPitchCheckRelativeHeight");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampEndPitchCheckMaxBuildHeight) == 1040, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampEndPitchCheckMaxBuildHeight");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ClampPitchProjectDistance) == 1088, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ClampPitchProjectDistance");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, StartDroneSpawnZOffsetFromVehicle) == 1136, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::StartDroneSpawnZOffsetFromVehicle");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, StartDroneSpawnZOffset) == 1184, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::StartDroneSpawnZOffset");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjectileLifeSpan) == 1232, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjectileLifeSpan");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjLifeSpanAdjustOnlyForUp) == 1280, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjLifeSpanAdjustOnlyForUp");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjLifeSpanAdjustPitchConstraint) == 1328, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjLifeSpanAdjustPitchConstraint");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjLifeSpanAdjustDelta) == 1376, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjLifeSpanAdjustDelta");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, ProjectileExtent) == 1424, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::ProjectileExtent");
static_assert(offsetof(UFortPawnComponent_ZiplineDeployer, bTraceComplexForSplineTrace) == 1428, "Offset mismatch for UFortPawnComponent_ZiplineDeployer::bTraceComplexForSplineTrace");

// /Script/ZiplineDeployerRuntime.FortProjectileTrajectory_ZiplineDeployer
// Kind: Class; super: FortProjectileTrajectory
class UFortProjectileTrajectory_ZiplineDeployer
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    std::uint8_t SplineMeshTargetableParameter[0x4]; // 0x0298 (Size: 0x4, Type: NameProperty)
    std::uint8_t SplineMeshStartLocParameter[0x4]; // 0x029C (Size: 0x4, Type: NameProperty)
    FName SplineMeshEndLocParameter; // 0x02A0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortProjectileTrajectory_ZiplineDeployer, SplineMeshTargetableParameter) == 664, "Offset mismatch for UFortProjectileTrajectory_ZiplineDeployer::SplineMeshTargetableParameter");
static_assert(offsetof(UFortProjectileTrajectory_ZiplineDeployer, SplineMeshStartLocParameter) == 668, "Offset mismatch for UFortProjectileTrajectory_ZiplineDeployer::SplineMeshStartLocParameter");
static_assert(offsetof(UFortProjectileTrajectory_ZiplineDeployer, SplineMeshEndLocParameter) == 672, "Offset mismatch for UFortProjectileTrajectory_ZiplineDeployer::SplineMeshEndLocParameter");

// /Script/ZiplineDeployerRuntime.FortProjectile_ZiplineDeployer
// Kind: Class; super: FortProjectileBase
class UFortProjectile_ZiplineDeployer
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    std::uint8_t EndingZiplineDeployHeightZ[0x1]; // 0x0AD8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProjectile_ZiplineDeployer, EndingZiplineDeployHeightZ) == 2776, "Offset mismatch for UFortProjectile_ZiplineDeployer::EndingZiplineDeployHeightZ");

// /Script/ZiplineDeployerRuntime.ZiplineDeployerBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UZiplineDeployerBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ZiplineDeployerRuntime.ZiplineDeployerGunAnimInstance
// Kind: Class; super: FortItemAnimInstance
class UZiplineDeployerGunAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bHasAmmo; // 0x0340 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UZiplineDeployerGunAnimInstance, bHasAmmo) == 832, "Offset mismatch for UZiplineDeployerGunAnimInstance::bHasAmmo");
