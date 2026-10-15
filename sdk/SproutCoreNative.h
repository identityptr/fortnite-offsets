/**
 * decamp dumper generated SDK
 * Package: /Script/SproutCoreNative
 */
#pragma once
#include "Basic.h"

// /Script/SproutCoreNative.SproutMovementMode_SlowFallCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FSproutMovementMode_SlowFallCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSproutMovementMode_SlowFallCreationData, LogicClass) == 8, "Offset mismatch for FSproutMovementMode_SlowFallCreationData::LogicClass");

// /Script/SproutCoreNative.SproutAbility_SlowFall
// Kind: Class; super: FortGameplayAbility
class USproutAbility_SlowFall
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* SlowFallMMEClass; // 0x0B20 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USproutAbility_SlowFall, SlowFallMMEClass) == 2848, "Offset mismatch for USproutAbility_SlowFall::SlowFallMMEClass");

// /Script/SproutCoreNative.SproutAmbientLifeActor
// Kind: Class; super: Actor
class USproutAmbientLifeActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t DefaultTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t UroShiftBucket; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0299
    std::int32_t MaxEvalRateForInterpolation; // 0x029C (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> LODToFrameSkipMap; // 0x02A0 (Size: 0x10, Type: MapProperty)
    void* SkelMeshComp; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutAmbientLifeActor, DefaultTags) == 632, "Offset mismatch for USproutAmbientLifeActor::DefaultTags");
static_assert(offsetof(USproutAmbientLifeActor, UroShiftBucket) == 664, "Offset mismatch for USproutAmbientLifeActor::UroShiftBucket");
static_assert(offsetof(USproutAmbientLifeActor, MaxEvalRateForInterpolation) == 668, "Offset mismatch for USproutAmbientLifeActor::MaxEvalRateForInterpolation");
static_assert(offsetof(USproutAmbientLifeActor, LODToFrameSkipMap) == 672, "Offset mismatch for USproutAmbientLifeActor::LODToFrameSkipMap");
static_assert(offsetof(USproutAmbientLifeActor, SkelMeshComp) == 688, "Offset mismatch for USproutAmbientLifeActor::SkelMeshComp");

// /Script/SproutCoreNative.SproutControllerComponent_StreamingSources
// Kind: Class; super: FNDynamicStreamingSourceComponent
class USproutControllerComponent_StreamingSources
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(USproutControllerComponent_StreamingSources, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_StreamingSources::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_StreamingSources, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_StreamingSources::ComponentTags");
static_assert(offsetof(USproutControllerComponent_StreamingSources, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_StreamingSources::AssetUserData");
static_assert(offsetof(USproutControllerComponent_StreamingSources, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_StreamingSources::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_StreamingSources, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_StreamingSources::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_StreamingSources, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_StreamingSources::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_StreamingSources, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_StreamingSources::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_StreamingSources, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_StreamingSources::CreationMethod");
static_assert(offsetof(USproutControllerComponent_StreamingSources, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_StreamingSources::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_StreamingSources, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_StreamingSources::OnComponentDeactivated");

// /Script/SproutCoreNative.SproutGameplayAbility
// Kind: Class; super: FortGameplayAbility
class USproutGameplayAbility
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

static_assert(offsetof(USproutGameplayAbility, ActivationType) == 936, "Offset mismatch for USproutGameplayAbility::ActivationType");
static_assert(offsetof(USproutGameplayAbility, EffectContainers) == 944, "Offset mismatch for USproutGameplayAbility::EffectContainers");
static_assert(offsetof(USproutGameplayAbility, GameplayEffectContainers) == 1864, "Offset mismatch for USproutGameplayAbility::GameplayEffectContainers");
static_assert(offsetof(USproutGameplayAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for USproutGameplayAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(USproutGameplayAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for USproutGameplayAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(USproutGameplayAbility, ProjectileClass) == 1928, "Offset mismatch for USproutGameplayAbility::ProjectileClass");
static_assert(offsetof(USproutGameplayAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for USproutGameplayAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(USproutGameplayAbility, DamageStatHandle) == 1944, "Offset mismatch for USproutGameplayAbility::DamageStatHandle");
static_assert(offsetof(USproutGameplayAbility, AbilityCosts) == 1960, "Offset mismatch for USproutGameplayAbility::AbilityCosts");
static_assert(offsetof(USproutGameplayAbility, Costs) == 1976, "Offset mismatch for USproutGameplayAbility::Costs");
static_assert(offsetof(USproutGameplayAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for USproutGameplayAbility::bApplyingCostsEnabled");
static_assert(offsetof(USproutGameplayAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for USproutGameplayAbility::MovementCancellationLeashLength");
static_assert(offsetof(USproutGameplayAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for USproutGameplayAbility::ExplicitCooldownDuration");
static_assert(offsetof(USproutGameplayAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for USproutGameplayAbility::ExplicitCooldownTags");
static_assert(offsetof(USproutGameplayAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for USproutGameplayAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(USproutGameplayAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for USproutGameplayAbility::CustomFiringSequenceLength");
static_assert(offsetof(USproutGameplayAbility, bDisableMoveCombining) == 2148, "Offset mismatch for USproutGameplayAbility::bDisableMoveCombining");
static_assert(offsetof(USproutGameplayAbility, bForceNormalAILOD) == 2149, "Offset mismatch for USproutGameplayAbility::bForceNormalAILOD");
static_assert(offsetof(USproutGameplayAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for USproutGameplayAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(USproutGameplayAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for USproutGameplayAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(USproutGameplayAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for USproutGameplayAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(USproutGameplayAbility, AIWeaponUsage) == 2160, "Offset mismatch for USproutGameplayAbility::AIWeaponUsage");
static_assert(offsetof(USproutGameplayAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for USproutGameplayAbility::WeaponTestApplicationTag");
static_assert(offsetof(USproutGameplayAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for USproutGameplayAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(USproutGameplayAbility, FireOffset) == 2176, "Offset mismatch for USproutGameplayAbility::FireOffset");
static_assert(offsetof(USproutGameplayAbility, ActivationNoiseRange) == 2200, "Offset mismatch for USproutGameplayAbility::ActivationNoiseRange");
static_assert(offsetof(USproutGameplayAbility, ImpactNoiseRange) == 2204, "Offset mismatch for USproutGameplayAbility::ImpactNoiseRange");
static_assert(offsetof(USproutGameplayAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for USproutGameplayAbility::ActivationNoiseLoudness");
static_assert(offsetof(USproutGameplayAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for USproutGameplayAbility::ImpactNoiseLoudness");
static_assert(offsetof(USproutGameplayAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for USproutGameplayAbility::ProhibitedTargetTags");
static_assert(offsetof(USproutGameplayAbility, bLeadPawnTargets) == 2249, "Offset mismatch for USproutGameplayAbility::bLeadPawnTargets");
static_assert(offsetof(USproutGameplayAbility, DesiredThrowAngle) == 2252, "Offset mismatch for USproutGameplayAbility::DesiredThrowAngle");
static_assert(offsetof(USproutGameplayAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for USproutGameplayAbility::MaxYawAngleToFire");
static_assert(offsetof(USproutGameplayAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for USproutGameplayAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(USproutGameplayAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for USproutGameplayAbility::bUseTargetActorLocation");
static_assert(offsetof(USproutGameplayAbility, InitialAccuracyMax) == 2264, "Offset mismatch for USproutGameplayAbility::InitialAccuracyMax");
static_assert(offsetof(USproutGameplayAbility, InitialAccuracyMin) == 2268, "Offset mismatch for USproutGameplayAbility::InitialAccuracyMin");
static_assert(offsetof(USproutGameplayAbility, TargetAccuracyMax) == 2272, "Offset mismatch for USproutGameplayAbility::TargetAccuracyMax");
static_assert(offsetof(USproutGameplayAbility, TargetAccuracyMin) == 2276, "Offset mismatch for USproutGameplayAbility::TargetAccuracyMin");
static_assert(offsetof(USproutGameplayAbility, MinAccuracyDistance) == 2280, "Offset mismatch for USproutGameplayAbility::MinAccuracyDistance");
static_assert(offsetof(USproutGameplayAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for USproutGameplayAbility::MaxAccuracyDistance");
static_assert(offsetof(USproutGameplayAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for USproutGameplayAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(USproutGameplayAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for USproutGameplayAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(USproutGameplayAbility, UseCount) == 2296, "Offset mismatch for USproutGameplayAbility::UseCount");
static_assert(offsetof(USproutGameplayAbility, bIsMobileToggle) == 2300, "Offset mismatch for USproutGameplayAbility::bIsMobileToggle");
static_assert(offsetof(USproutGameplayAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for USproutGameplayAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(USproutGameplayAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for USproutGameplayAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(USproutGameplayAbility, MontageInfo) == 2424, "Offset mismatch for USproutGameplayAbility::MontageInfo");
static_assert(offsetof(USproutGameplayAbility, PreviousMontageInfo) == 2512, "Offset mismatch for USproutGameplayAbility::PreviousMontageInfo");
static_assert(offsetof(USproutGameplayAbility, ModList) == 2600, "Offset mismatch for USproutGameplayAbility::ModList");
static_assert(offsetof(USproutGameplayAbility, AbilityWeapon) == 2616, "Offset mismatch for USproutGameplayAbility::AbilityWeapon");
static_assert(offsetof(USproutGameplayAbility, DisplayName) == 2624, "Offset mismatch for USproutGameplayAbility::DisplayName");
static_assert(offsetof(USproutGameplayAbility, Description) == 2640, "Offset mismatch for USproutGameplayAbility::Description");
static_assert(offsetof(USproutGameplayAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for USproutGameplayAbility::SmallPreviewImageOverride");
static_assert(offsetof(USproutGameplayAbility, ChargeStartTime) == 2688, "Offset mismatch for USproutGameplayAbility::ChargeStartTime");
static_assert(offsetof(USproutGameplayAbility, ChargeState) == 2696, "Offset mismatch for USproutGameplayAbility::ChargeState");
static_assert(offsetof(USproutGameplayAbility, ToolTip) == 2736, "Offset mismatch for USproutGameplayAbility::ToolTip");
static_assert(offsetof(USproutGameplayAbility, StatList) == 2744, "Offset mismatch for USproutGameplayAbility::StatList");
static_assert(offsetof(USproutGameplayAbility, ActorTrackingSettings) == 2760, "Offset mismatch for USproutGameplayAbility::ActorTrackingSettings");
static_assert(offsetof(USproutGameplayAbility, AnalyticsTags) == 2800, "Offset mismatch for USproutGameplayAbility::AnalyticsTags");
static_assert(offsetof(USproutGameplayAbility, TagChangedActions) == 2832, "Offset mismatch for USproutGameplayAbility::TagChangedActions");

// /Script/SproutCoreNative.SproutGameplayActor
// Kind: Class; super: Actor
class USproutGameplayActor
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t DefaultTags[0x20]; // 0x02C0 (Size: 0x20, Type: StructProperty)
    float SnapGridSize; // 0x02E0 (Size: 0x4, Type: FloatProperty)
    float VertSnapGridSize; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SnapOffset[0xC]; // 0x02E8 (Size: 0xC, Type: StructProperty)
    std::uint8_t CentroidOffset[0xC]; // 0x02F4 (Size: 0xC, Type: StructProperty)
    std::uint8_t BaseLocToPivotOffset[0xC]; // 0x0300 (Size: 0xC, Type: StructProperty)
    std::uint8_t bDynamicallyAdjustCullDistance; // 0x030C (Size: 0x1, Type: BoolProperty)
    // 0x030C BoolProperty bEnableRotationSnap (shared storage)
    std::uint8_t AbilitySystemComponentCreationPolicy; // 0x030D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x030E
    std::uint8_t bAutoAssignNavProperties; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0311
    std::uint8_t bBeingDragged; // 0x0314 (Size: 0x1, Type: BoolProperty)
    // 0x0314 BoolProperty bBeingRotated (shared storage)
    // 0x0314 BoolProperty bBeingTranslated (shared storage)
    // 0x0314 BoolProperty bCanInteract (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x0315
    void* AbilitySystemComponent; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* ReplicatedAbilitySystemComponent; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0328
    std::uint8_t SavedActorGuid[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    void* AssociatedItem; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutGameplayActor, DefaultTags) == 704, "Offset mismatch for USproutGameplayActor::DefaultTags");
static_assert(offsetof(USproutGameplayActor, SnapGridSize) == 736, "Offset mismatch for USproutGameplayActor::SnapGridSize");
static_assert(offsetof(USproutGameplayActor, VertSnapGridSize) == 740, "Offset mismatch for USproutGameplayActor::VertSnapGridSize");
static_assert(offsetof(USproutGameplayActor, SnapOffset) == 744, "Offset mismatch for USproutGameplayActor::SnapOffset");
static_assert(offsetof(USproutGameplayActor, CentroidOffset) == 756, "Offset mismatch for USproutGameplayActor::CentroidOffset");
static_assert(offsetof(USproutGameplayActor, BaseLocToPivotOffset) == 768, "Offset mismatch for USproutGameplayActor::BaseLocToPivotOffset");
static_assert(offsetof(USproutGameplayActor, bDynamicallyAdjustCullDistance) == 780, "Offset mismatch for USproutGameplayActor::bDynamicallyAdjustCullDistance");
static_assert(offsetof(USproutGameplayActor, AbilitySystemComponentCreationPolicy) == 781, "Offset mismatch for USproutGameplayActor::AbilitySystemComponentCreationPolicy");
static_assert(offsetof(USproutGameplayActor, bAutoAssignNavProperties) == 784, "Offset mismatch for USproutGameplayActor::bAutoAssignNavProperties");
static_assert(offsetof(USproutGameplayActor, bBeingDragged) == 788, "Offset mismatch for USproutGameplayActor::bBeingDragged");
static_assert(offsetof(USproutGameplayActor, AbilitySystemComponent) == 792, "Offset mismatch for USproutGameplayActor::AbilitySystemComponent");
static_assert(offsetof(USproutGameplayActor, ReplicatedAbilitySystemComponent) == 800, "Offset mismatch for USproutGameplayActor::ReplicatedAbilitySystemComponent");
static_assert(offsetof(USproutGameplayActor, SavedActorGuid) == 832, "Offset mismatch for USproutGameplayActor::SavedActorGuid");
static_assert(offsetof(USproutGameplayActor, AssociatedItem) == 848, "Offset mismatch for USproutGameplayActor::AssociatedItem");

// /Script/SproutCoreNative.SproutMovementMode_SlowFall
// Kind: Class; super: FortMovementMode_BaseExtLogic
class USproutMovementMode_SlowFall
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t DescendingGravityScale[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpHorizontalVelocityScalar[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutMovementMode_SlowFall, DescendingGravityScale) == 440, "Offset mismatch for USproutMovementMode_SlowFall::DescendingGravityScale");
static_assert(offsetof(USproutMovementMode_SlowFall, JumpHorizontalVelocityScalar) == 480, "Offset mismatch for USproutMovementMode_SlowFall::JumpHorizontalVelocityScalar");

// /Script/SproutCoreNative.SproutMovementMode_SlowFallRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class USproutMovementMode_SlowFallRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, LogicID) == 40, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::LogicID");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, RuntimeID) == 44, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::RuntimeID");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, bForceManualActivation) == 45, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::bForceManualActivation");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, bForceManualEnd) == 46, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::bForceManualEnd");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(USproutMovementMode_SlowFallRuntimeData, EndReasonFlags) == 49, "Offset mismatch for USproutMovementMode_SlowFallRuntimeData::EndReasonFlags");

// /Script/SproutCoreNative.SproutRootPlayspace
// Kind: Class; super: JunoRootPlayspace
class USproutRootPlayspace
{
public:
    std::uint8_t Pad_0000[0x7F8]; // 0x0000
    std::uint8_t DefaultInventoryItemTag[0x8]; // 0x07F8 (Size: 0x8, Type: StructProperty)
    void* JunoServerExpiration; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    float ProcessPlayerProgressionTime; // 0x0808 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x080C
    std::uint8_t WorldDataAvailable; // 0x0818 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x17]; // 0x0819
    void* MapManager; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MapManagerClassKey[0x8]; // 0x0838 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> MapManagerClassMap; // 0x0840 (Size: 0x10, Type: MapProperty)
    void* MarkerManager; // 0x0850 (Size: 0x8, Type: ObjectProperty)
    void* MarkerManagerClass; // 0x0858 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCheckForPlayspaceOwner; // 0x0860 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFiredFirstMatchStartedVerb; // 0x0861 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0862
    TWeakObjectPtr<void> OwningController; // 0x0864 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutRootPlayspace, DefaultInventoryItemTag) == 2040, "Offset mismatch for USproutRootPlayspace::DefaultInventoryItemTag");
static_assert(offsetof(USproutRootPlayspace, JunoServerExpiration) == 2048, "Offset mismatch for USproutRootPlayspace::JunoServerExpiration");
static_assert(offsetof(USproutRootPlayspace, ProcessPlayerProgressionTime) == 2056, "Offset mismatch for USproutRootPlayspace::ProcessPlayerProgressionTime");
static_assert(offsetof(USproutRootPlayspace, WorldDataAvailable) == 2072, "Offset mismatch for USproutRootPlayspace::WorldDataAvailable");
static_assert(offsetof(USproutRootPlayspace, MapManager) == 2096, "Offset mismatch for USproutRootPlayspace::MapManager");
static_assert(offsetof(USproutRootPlayspace, MapManagerClassKey) == 2104, "Offset mismatch for USproutRootPlayspace::MapManagerClassKey");
static_assert(offsetof(USproutRootPlayspace, MapManagerClassMap) == 2112, "Offset mismatch for USproutRootPlayspace::MapManagerClassMap");
static_assert(offsetof(USproutRootPlayspace, MarkerManager) == 2128, "Offset mismatch for USproutRootPlayspace::MarkerManager");
static_assert(offsetof(USproutRootPlayspace, MarkerManagerClass) == 2136, "Offset mismatch for USproutRootPlayspace::MarkerManagerClass");
static_assert(offsetof(USproutRootPlayspace, bCheckForPlayspaceOwner) == 2144, "Offset mismatch for USproutRootPlayspace::bCheckForPlayspaceOwner");
static_assert(offsetof(USproutRootPlayspace, bFiredFirstMatchStartedVerb) == 2145, "Offset mismatch for USproutRootPlayspace::bFiredFirstMatchStartedVerb");
static_assert(offsetof(USproutRootPlayspace, OwningController) == 2148, "Offset mismatch for USproutRootPlayspace::OwningController");

// /Script/SproutCoreNative.SproutSOGameplayActor
// Kind: Class; super: SproutGameplayActor
class USproutSOGameplayActor
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t bEnableAnimationTickOnDemand; // 0x0358 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutSOGameplayActor, bEnableAnimationTickOnDemand) == 856, "Offset mismatch for USproutSOGameplayActor::bEnableAnimationTickOnDemand");

// /Script/SproutCoreNative.SproutState_Setup
// Kind: Class; super: JunoState_SetupBase
class USproutState_Setup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateId[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t StateRuntimeTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEvaluateTransition; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicates; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateBegun; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateEnded; // 0x0053 (Size: 0x1, Type: BoolProperty)
    float InitializationServerTime; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float BeginStateDelay; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    void* CachedGameplayStateMachine; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* CachedStateMachineManager; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* Hack_StateToDelayProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutState_Setup, StateId) == 40, "Offset mismatch for USproutState_Setup::StateId");
static_assert(offsetof(USproutState_Setup, StateRuntimeTags) == 48, "Offset mismatch for USproutState_Setup::StateRuntimeTags");
static_assert(offsetof(USproutState_Setup, bEvaluateTransition) == 80, "Offset mismatch for USproutState_Setup::bEvaluateTransition");
static_assert(offsetof(USproutState_Setup, bReplicates) == 81, "Offset mismatch for USproutState_Setup::bReplicates");
static_assert(offsetof(USproutState_Setup, bStateBegun) == 82, "Offset mismatch for USproutState_Setup::bStateBegun");
static_assert(offsetof(USproutState_Setup, bStateEnded) == 83, "Offset mismatch for USproutState_Setup::bStateEnded");
static_assert(offsetof(USproutState_Setup, InitializationServerTime) == 84, "Offset mismatch for USproutState_Setup::InitializationServerTime");
static_assert(offsetof(USproutState_Setup, BeginStateDelay) == 88, "Offset mismatch for USproutState_Setup::BeginStateDelay");
static_assert(offsetof(USproutState_Setup, CachedGameplayStateMachine) == 96, "Offset mismatch for USproutState_Setup::CachedGameplayStateMachine");
static_assert(offsetof(USproutState_Setup, CachedStateMachineManager) == 104, "Offset mismatch for USproutState_Setup::CachedStateMachineManager");
static_assert(offsetof(USproutState_Setup, Hack_StateToDelayProcess) == 112, "Offset mismatch for USproutState_Setup::Hack_StateToDelayProcess");
