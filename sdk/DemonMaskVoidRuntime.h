/**
 * decamp dumper generated SDK
 * Package: /Script/DemonMaskVoidRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DemonMaskVoidRuntime.DemonMaskVoidGadgetAnimInstance
// Kind: Class; super: MaskBaseCCPAnimInstance
class UDemonMaskVoidGadgetAnimInstance
{
public:
    std::uint8_t Pad_0000[0x690]; // 0x0000
    std::uint8_t Floater[0x18]; // 0x0690 (Size: 0x18, Type: StructProperty)
    double ElapsedTime; // 0x06A8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UDemonMaskVoidGadgetAnimInstance, Floater) == 1680, "Offset mismatch for UDemonMaskVoidGadgetAnimInstance::Floater");
static_assert(offsetof(UDemonMaskVoidGadgetAnimInstance, ElapsedTime) == 1704, "Offset mismatch for UDemonMaskVoidGadgetAnimInstance::ElapsedTime");

// /Script/DemonMaskVoidRuntime.DemonMaskVoidLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UDemonMaskVoidLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float IsCasting; // 0x1170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDemonMaskVoidLayerAnimInstance, IsCasting) == 4464, "Offset mismatch for UDemonMaskVoidLayerAnimInstance::IsCasting");

// /Script/DemonMaskVoidRuntime.FortGA_DemonMask_Void_Teleport_Base
// Kind: Class; super: FortGameplayAbility
class UFortGA_DemonMask_Void_Teleport_Base
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

static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ActivationType) == 936, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ActivationType");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, EffectContainers) == 944, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::EffectContainers");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, GameplayEffectContainers) == 1864, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::GameplayEffectContainers");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::DynamicGameplayEffectContainers");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ProjectileClass) == 1928, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ProjectileClass");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, DamageStatHandle) == 1944, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::DamageStatHandle");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, AbilityCosts) == 1960, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::AbilityCosts");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, Costs) == 1976, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::Costs");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bApplyingCostsEnabled) == 1992, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bApplyingCostsEnabled");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MovementCancellationLeashLength) == 2000, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MovementCancellationLeashLength");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ExplicitCooldownDuration) == 2040, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ExplicitCooldownDuration");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ExplicitCooldownTags) == 2080, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ExplicitCooldownTags");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ExplicitCooldownAssetTags");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, CustomFiringSequenceLength) == 2144, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::CustomFiringSequenceLength");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bDisableMoveCombining) == 2148, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bDisableMoveCombining");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bForceNormalAILOD) == 2149, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bForceNormalAILOD");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MinimumRequiredAILODLevel");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bUseAIFireLocationAndRotation");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, AIWeaponUsage) == 2160, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::AIWeaponUsage");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, WeaponTestApplicationTag) == 2164, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::WeaponTestApplicationTag");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, FireOffset) == 2176, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::FireOffset");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ActivationNoiseRange) == 2200, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ActivationNoiseRange");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ImpactNoiseRange) == 2204, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ImpactNoiseRange");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ActivationNoiseLoudness) == 2208, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ActivationNoiseLoudness");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ImpactNoiseLoudness) == 2212, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ImpactNoiseLoudness");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ProhibitedTargetTags) == 2216, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ProhibitedTargetTags");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bLeadPawnTargets) == 2249, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bLeadPawnTargets");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, DesiredThrowAngle) == 2252, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::DesiredThrowAngle");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MaxYawAngleToFire) == 2256, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MaxYawAngleToFire");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bClampMaxYawAngleToFire");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bUseTargetActorLocation) == 2261, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bUseTargetActorLocation");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, InitialAccuracyMax) == 2264, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::InitialAccuracyMax");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, InitialAccuracyMin) == 2268, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::InitialAccuracyMin");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, TargetAccuracyMax) == 2272, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::TargetAccuracyMax");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, TargetAccuracyMin) == 2276, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::TargetAccuracyMin");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MinAccuracyDistance) == 2280, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MinAccuracyDistance");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MaxAccuracyDistance) == 2284, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MaxAccuracyDistance");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::AccuracyDistanceMultiplier");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, UseCount) == 2296, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::UseCount");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bIsMobileToggle) == 2300, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bIsMobileToggle");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, MontageInfo) == 2424, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::MontageInfo");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, PreviousMontageInfo) == 2512, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::PreviousMontageInfo");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ModList) == 2600, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ModList");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, AbilityWeapon) == 2616, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::AbilityWeapon");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, DisplayName) == 2624, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::DisplayName");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, Description) == 2640, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::Description");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, SmallPreviewImageOverride) == 2664, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::SmallPreviewImageOverride");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ChargeStartTime) == 2688, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ChargeStartTime");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ChargeState) == 2696, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ChargeState");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ToolTip) == 2736, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ToolTip");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, StatList) == 2744, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::StatList");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, ActorTrackingSettings) == 2760, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::ActorTrackingSettings");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, AnalyticsTags) == 2800, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::AnalyticsTags");
static_assert(offsetof(UFortGA_DemonMask_Void_Teleport_Base, TagChangedActions) == 2832, "Offset mismatch for UFortGA_DemonMask_Void_Teleport_Base::TagChangedActions");

// /Script/DemonMaskVoidRuntime.FortPawnComponent_VoidTeleport
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_VoidTeleport
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TeleportHelperClassToSpawn; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DemonMaskVoidEquipmentTag[0x4]; // 0x00D0 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> BGAToTeleport; // 0x00D4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CurrentTrackedVoidProjectile; // 0x00DC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerFortPawn; // 0x00E4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TeleportHelperActor; // 0x00EC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bForceCrouch; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceCrouchPredicted; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00F6
    TWeakObjectPtr<void> OwnerFortMovementComp; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_VoidTeleport, TeleportHelperClassToSpawn) == 200, "Offset mismatch for UFortPawnComponent_VoidTeleport::TeleportHelperClassToSpawn");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, DemonMaskVoidEquipmentTag) == 208, "Offset mismatch for UFortPawnComponent_VoidTeleport::DemonMaskVoidEquipmentTag");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, BGAToTeleport) == 212, "Offset mismatch for UFortPawnComponent_VoidTeleport::BGAToTeleport");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, CurrentTrackedVoidProjectile) == 220, "Offset mismatch for UFortPawnComponent_VoidTeleport::CurrentTrackedVoidProjectile");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, OwnerFortPawn) == 228, "Offset mismatch for UFortPawnComponent_VoidTeleport::OwnerFortPawn");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, TeleportHelperActor) == 236, "Offset mismatch for UFortPawnComponent_VoidTeleport::TeleportHelperActor");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, bForceCrouch) == 244, "Offset mismatch for UFortPawnComponent_VoidTeleport::bForceCrouch");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, bForceCrouchPredicted) == 245, "Offset mismatch for UFortPawnComponent_VoidTeleport::bForceCrouchPredicted");
static_assert(offsetof(UFortPawnComponent_VoidTeleport, OwnerFortMovementComp) == 248, "Offset mismatch for UFortPawnComponent_VoidTeleport::OwnerFortMovementComp");

// /Script/DemonMaskVoidRuntime.VoidMaskTeleportHelperActor
// Kind: Class; super: Actor
class UVoidMaskTeleportHelperActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CapsuleComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoidMaskTeleportHelperActor, CapsuleComponent) == 624, "Offset mismatch for UVoidMaskTeleportHelperActor::CapsuleComponent");
