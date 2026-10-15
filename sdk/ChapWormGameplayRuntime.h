/**
 * decamp dumper generated SDK
 * Package: /Script/ChapWormGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ChapWormGameplayRuntime.ChapWormLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UChapWormLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsKineticEnergyIdle; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterBaseToActivate; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1172
    std::uint8_t KineticEnergyActivateTagName[0x4]; // 0x1174 (Size: 0x4, Type: StructProperty)
    std::uint8_t ApplyOverpowerStatusTagName[0x4]; // 0x1178 (Size: 0x4, Type: StructProperty)
    std::uint8_t AthenaInVehicleTagName[0x4]; // 0x117C (Size: 0x4, Type: StructProperty)
    std::uint8_t SurfaceSwimmingTagName[0x4]; // 0x1180 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsGrindingTagName[0x4]; // 0x1184 (Size: 0x4, Type: StructProperty)
    std::uint8_t HoverActiveTagName[0x4]; // 0x1188 (Size: 0x4, Type: StructProperty)
    std::uint8_t ZipLiningOnSplineTagName[0x1]; // 0x118C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChapWormLayerAnimInstance, bIsKineticEnergyIdle) == 4464, "Offset mismatch for UChapWormLayerAnimInstance::bIsKineticEnergyIdle");
static_assert(offsetof(UChapWormLayerAnimInstance, bCanEnterBaseToActivate) == 4465, "Offset mismatch for UChapWormLayerAnimInstance::bCanEnterBaseToActivate");
static_assert(offsetof(UChapWormLayerAnimInstance, KineticEnergyActivateTagName) == 4468, "Offset mismatch for UChapWormLayerAnimInstance::KineticEnergyActivateTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, ApplyOverpowerStatusTagName) == 4472, "Offset mismatch for UChapWormLayerAnimInstance::ApplyOverpowerStatusTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, AthenaInVehicleTagName) == 4476, "Offset mismatch for UChapWormLayerAnimInstance::AthenaInVehicleTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, SurfaceSwimmingTagName) == 4480, "Offset mismatch for UChapWormLayerAnimInstance::SurfaceSwimmingTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, IsGrindingTagName) == 4484, "Offset mismatch for UChapWormLayerAnimInstance::IsGrindingTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, HoverActiveTagName) == 4488, "Offset mismatch for UChapWormLayerAnimInstance::HoverActiveTagName");
static_assert(offsetof(UChapWormLayerAnimInstance, ZipLiningOnSplineTagName) == 4492, "Offset mismatch for UChapWormLayerAnimInstance::ZipLiningOnSplineTagName");

// /Script/ChapWormGameplayRuntime.FortCameraModifier_ChapWorm
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_ChapWorm
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float CameraModifierLifetimeDuration; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OverpoweredGameplayTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t bInterpCameraViewFov; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    float FOVInterpSpeed; // 0x008C (Size: 0x4, Type: FloatProperty)
    float TargetDeltaFov_Default; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float TargetDeltaFov_Overpowered; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInterpCameraViewLocation; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    float DeltaLocationInterpSpeed; // 0x009C (Size: 0x4, Type: FloatProperty)
    float TargetDeltaForwardDirectionOffset_Default; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float TargetDeltaForwardDirectionOffset_Overpowered; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWindingDown; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A9
    float CurrentDeltaFov; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentDeltaLocation[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LifetimeDurationTimerHandle[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraModifier_ChapWorm, CameraModifierLifetimeDuration) == 128, "Offset mismatch for UFortCameraModifier_ChapWorm::CameraModifierLifetimeDuration");
static_assert(offsetof(UFortCameraModifier_ChapWorm, OverpoweredGameplayTag) == 132, "Offset mismatch for UFortCameraModifier_ChapWorm::OverpoweredGameplayTag");
static_assert(offsetof(UFortCameraModifier_ChapWorm, bInterpCameraViewFov) == 136, "Offset mismatch for UFortCameraModifier_ChapWorm::bInterpCameraViewFov");
static_assert(offsetof(UFortCameraModifier_ChapWorm, FOVInterpSpeed) == 140, "Offset mismatch for UFortCameraModifier_ChapWorm::FOVInterpSpeed");
static_assert(offsetof(UFortCameraModifier_ChapWorm, TargetDeltaFov_Default) == 144, "Offset mismatch for UFortCameraModifier_ChapWorm::TargetDeltaFov_Default");
static_assert(offsetof(UFortCameraModifier_ChapWorm, TargetDeltaFov_Overpowered) == 148, "Offset mismatch for UFortCameraModifier_ChapWorm::TargetDeltaFov_Overpowered");
static_assert(offsetof(UFortCameraModifier_ChapWorm, bInterpCameraViewLocation) == 152, "Offset mismatch for UFortCameraModifier_ChapWorm::bInterpCameraViewLocation");
static_assert(offsetof(UFortCameraModifier_ChapWorm, DeltaLocationInterpSpeed) == 156, "Offset mismatch for UFortCameraModifier_ChapWorm::DeltaLocationInterpSpeed");
static_assert(offsetof(UFortCameraModifier_ChapWorm, TargetDeltaForwardDirectionOffset_Default) == 160, "Offset mismatch for UFortCameraModifier_ChapWorm::TargetDeltaForwardDirectionOffset_Default");
static_assert(offsetof(UFortCameraModifier_ChapWorm, TargetDeltaForwardDirectionOffset_Overpowered) == 164, "Offset mismatch for UFortCameraModifier_ChapWorm::TargetDeltaForwardDirectionOffset_Overpowered");
static_assert(offsetof(UFortCameraModifier_ChapWorm, bWindingDown) == 168, "Offset mismatch for UFortCameraModifier_ChapWorm::bWindingDown");
static_assert(offsetof(UFortCameraModifier_ChapWorm, CurrentDeltaFov) == 172, "Offset mismatch for UFortCameraModifier_ChapWorm::CurrentDeltaFov");
static_assert(offsetof(UFortCameraModifier_ChapWorm, CurrentDeltaLocation) == 176, "Offset mismatch for UFortCameraModifier_ChapWorm::CurrentDeltaLocation");
static_assert(offsetof(UFortCameraModifier_ChapWorm, LifetimeDurationTimerHandle) == 200, "Offset mismatch for UFortCameraModifier_ChapWorm::LifetimeDurationTimerHandle");

// /Script/ChapWormGameplayRuntime.FortGameplayAbility_ChapWorm_InventoryPassive
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ChapWorm_InventoryPassive
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

static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ActivationType) == 936, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ActivationType");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, EffectContainers) == 944, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::EffectContainers");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, GameplayEffectContainers) == 1864, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::GameplayEffectContainers");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::DynamicGameplayEffectContainers");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ProjectileClass) == 1928, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ProjectileClass");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, DamageStatHandle) == 1944, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::DamageStatHandle");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, AbilityCosts) == 1960, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::AbilityCosts");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, Costs) == 1976, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::Costs");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bApplyingCostsEnabled) == 1992, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bApplyingCostsEnabled");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MovementCancellationLeashLength) == 2000, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MovementCancellationLeashLength");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ExplicitCooldownDuration) == 2040, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ExplicitCooldownDuration");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ExplicitCooldownTags) == 2080, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ExplicitCooldownTags");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ExplicitCooldownAssetTags");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, CustomFiringSequenceLength) == 2144, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::CustomFiringSequenceLength");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bDisableMoveCombining) == 2148, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bDisableMoveCombining");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bForceNormalAILOD) == 2149, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bForceNormalAILOD");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MinimumRequiredAILODLevel");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bUseAIFireLocationAndRotation");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, AIWeaponUsage) == 2160, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::AIWeaponUsage");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, WeaponTestApplicationTag) == 2164, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::WeaponTestApplicationTag");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, FireOffset) == 2176, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::FireOffset");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ActivationNoiseRange) == 2200, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ActivationNoiseRange");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ImpactNoiseRange) == 2204, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ImpactNoiseRange");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ActivationNoiseLoudness) == 2208, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ActivationNoiseLoudness");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ImpactNoiseLoudness) == 2212, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ImpactNoiseLoudness");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ProhibitedTargetTags) == 2216, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ProhibitedTargetTags");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bLeadPawnTargets) == 2249, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bLeadPawnTargets");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, DesiredThrowAngle) == 2252, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::DesiredThrowAngle");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MaxYawAngleToFire) == 2256, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MaxYawAngleToFire");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bClampMaxYawAngleToFire");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bUseTargetActorLocation) == 2261, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bUseTargetActorLocation");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, InitialAccuracyMax) == 2264, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::InitialAccuracyMax");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, InitialAccuracyMin) == 2268, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::InitialAccuracyMin");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, TargetAccuracyMax) == 2272, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::TargetAccuracyMax");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, TargetAccuracyMin) == 2276, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::TargetAccuracyMin");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MinAccuracyDistance) == 2280, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MinAccuracyDistance");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MaxAccuracyDistance) == 2284, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MaxAccuracyDistance");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::AccuracyDistanceMultiplier");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, UseCount) == 2296, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::UseCount");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bIsMobileToggle) == 2300, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bIsMobileToggle");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, MontageInfo) == 2424, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::MontageInfo");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, PreviousMontageInfo) == 2512, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::PreviousMontageInfo");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ModList) == 2600, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ModList");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, AbilityWeapon) == 2616, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::AbilityWeapon");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, DisplayName) == 2624, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::DisplayName");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, Description) == 2640, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::Description");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, SmallPreviewImageOverride) == 2664, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::SmallPreviewImageOverride");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ChargeStartTime) == 2688, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ChargeStartTime");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ChargeState) == 2696, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ChargeState");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ToolTip) == 2736, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ToolTip");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, StatList) == 2744, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::StatList");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, ActorTrackingSettings) == 2760, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::ActorTrackingSettings");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, AnalyticsTags) == 2800, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::AnalyticsTags");
static_assert(offsetof(UFortGameplayAbility_ChapWorm_InventoryPassive, TagChangedActions) == 2832, "Offset mismatch for UFortGameplayAbility_ChapWorm_InventoryPassive::TagChangedActions");

// /Script/ChapWormGameplayRuntime.FortMovementMode_ChapWormSprint
// Kind: Class; super: FortMovementMode_ELTacSprint
class UFortMovementMode_ChapWormSprint
{
public:
    std::uint8_t Pad_0000[0x5E8]; // 0x0000
    void* GrantedGameplayEffect; // 0x05E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SprintThresholdGameplayTag[0x8]; // 0x05F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SprintThresholdSpeedMultiplier[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintThresholdOverpowerSpeedMultiplier[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverpowerGameplayTag[0x8]; // 0x0648 (Size: 0x8, Type: StructProperty)
    std::uint8_t OverpowerSpeedMultiplier[0x28]; // 0x0650 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverpowerJumpHeightMultiplier[0x28]; // 0x0678 (Size: 0x28, Type: StructProperty)
    std::uint8_t GrantedGameplayEffectHandle[0x1]; // 0x06A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ChapWormSprint, GrantedGameplayEffect) == 1512, "Offset mismatch for UFortMovementMode_ChapWormSprint::GrantedGameplayEffect");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, SprintThresholdGameplayTag) == 1520, "Offset mismatch for UFortMovementMode_ChapWormSprint::SprintThresholdGameplayTag");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, SprintThresholdSpeedMultiplier) == 1528, "Offset mismatch for UFortMovementMode_ChapWormSprint::SprintThresholdSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, SprintThresholdOverpowerSpeedMultiplier) == 1568, "Offset mismatch for UFortMovementMode_ChapWormSprint::SprintThresholdOverpowerSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, OverpowerGameplayTag) == 1608, "Offset mismatch for UFortMovementMode_ChapWormSprint::OverpowerGameplayTag");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, OverpowerSpeedMultiplier) == 1616, "Offset mismatch for UFortMovementMode_ChapWormSprint::OverpowerSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, OverpowerJumpHeightMultiplier) == 1656, "Offset mismatch for UFortMovementMode_ChapWormSprint::OverpowerJumpHeightMultiplier");
static_assert(offsetof(UFortMovementMode_ChapWormSprint, GrantedGameplayEffectHandle) == 1696, "Offset mismatch for UFortMovementMode_ChapWormSprint::GrantedGameplayEffectHandle");
