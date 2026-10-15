/**
 * decamp dumper generated SDK
 * Package: /Script/ScubaBondOakGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ScubaBondOakGameplayRuntime.FortMovementMode_ExtScubaBondOakCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_ExtScubaBondOakCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_ExtScubaBondOakCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_ExtScubaBondOakCreationData::LogicClass");

// /Script/ScubaBondOakGameplayRuntime.FortSplinePointInsertionData
// Kind: ScriptStruct; super: none
struct FFortSplinePointInsertionData
{
public:
    float InsertionInputKey; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InsertionMethod; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t Hit[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSplinePointInsertionData, InsertionInputKey) == 0, "Offset mismatch for FFortSplinePointInsertionData::InsertionInputKey");
static_assert(offsetof(FFortSplinePointInsertionData, InsertionMethod) == 4, "Offset mismatch for FFortSplinePointInsertionData::InsertionMethod");
static_assert(offsetof(FFortSplinePointInsertionData, Hit) == 8, "Offset mismatch for FFortSplinePointInsertionData::Hit");

// /Script/ScubaBondOakGameplayRuntime.FortGameplayAbility_RideLightningTrail
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_RideLightningTrail
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* MovementExtensionClass; // 0x0B20 (Size: 0x8, Type: ClassProperty)
    void* TrailClassToSpawn; // 0x0B28 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortGameplayAbility_RideLightningTrail, MovementExtensionClass) == 2848, "Offset mismatch for UFortGameplayAbility_RideLightningTrail::MovementExtensionClass");
static_assert(offsetof(UFortGameplayAbility_RideLightningTrail, TrailClassToSpawn) == 2856, "Offset mismatch for UFortGameplayAbility_RideLightningTrail::TrailClassToSpawn");

// /Script/ScubaBondOakGameplayRuntime.FortGameplayAbility_SBO_AntiCheatChecked
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_SBO_AntiCheatChecked
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t ShouldPerformAntiCheatChecks[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_SBO_AntiCheatChecked, ShouldPerformAntiCheatChecks) == 2848, "Offset mismatch for UFortGameplayAbility_SBO_AntiCheatChecked::ShouldPerformAntiCheatChecks");

// /Script/ScubaBondOakGameplayRuntime.FortGameplayAbility_ScubaBondOak_Activation
// Kind: Class; super: FortGameplayAbility_SBO_AntiCheatChecked
class UFortGameplayAbility_ScubaBondOak_Activation
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t ShouldPerformAntiCheatChecks[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScubaBondOak_Activation, ShouldPerformAntiCheatChecks) == 2848, "Offset mismatch for UFortGameplayAbility_ScubaBondOak_Activation::ShouldPerformAntiCheatChecks");

// /Script/ScubaBondOakGameplayRuntime.FortGameplayAbility_ScubaBondOak_Use
// Kind: Class; super: FortGameplayAbility_SBO_AntiCheatChecked
class UFortGameplayAbility_ScubaBondOak_Use
{
public:
    std::uint8_t Pad_0000[0xB48]; // 0x0000
    void* AscensionBlockersTargetingPreset; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScubaBondOak_Use, AscensionBlockersTargetingPreset) == 2888, "Offset mismatch for UFortGameplayAbility_ScubaBondOak_Use::AscensionBlockersTargetingPreset");

// /Script/ScubaBondOakGameplayRuntime.FortMovementMode_ExtScubaBondOak
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtScubaBondOak
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t SpeedAlongTrail[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    void* AccelerationCurve; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    float SnapZOffset; // 0x01E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtScubaBondOak, SpeedAlongTrail) == 440, "Offset mismatch for UFortMovementMode_ExtScubaBondOak::SpeedAlongTrail");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOak, AccelerationCurve) == 480, "Offset mismatch for UFortMovementMode_ExtScubaBondOak::AccelerationCurve");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOak, SnapZOffset) == 488, "Offset mismatch for UFortMovementMode_ExtScubaBondOak::SnapZOffset");

// /Script/ScubaBondOakGameplayRuntime.FortMovementMode_ExtScubaBondOakRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_ExtScubaBondOakRuntimeData
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

static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_ExtScubaBondOakRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_ExtScubaBondOakRuntimeData::EndReasonFlags");

// /Script/ScubaBondOakGameplayRuntime.FortProceduralGrindRailManager
// Kind: Class; super: ActorComponent
class UFortProceduralGrindRailManager
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

static_assert(offsetof(UFortProceduralGrindRailManager, PrimaryComponentTick) == 56, "Offset mismatch for UFortProceduralGrindRailManager::PrimaryComponentTick");
static_assert(offsetof(UFortProceduralGrindRailManager, ComponentTags) == 104, "Offset mismatch for UFortProceduralGrindRailManager::ComponentTags");
static_assert(offsetof(UFortProceduralGrindRailManager, AssetUserData) == 120, "Offset mismatch for UFortProceduralGrindRailManager::AssetUserData");
static_assert(offsetof(UFortProceduralGrindRailManager, UCSSerializationIndex) == 144, "Offset mismatch for UFortProceduralGrindRailManager::UCSSerializationIndex");
static_assert(offsetof(UFortProceduralGrindRailManager, bNetAddressable) == 152, "Offset mismatch for UFortProceduralGrindRailManager::bNetAddressable");
static_assert(offsetof(UFortProceduralGrindRailManager, bAutoActivate) == 154, "Offset mismatch for UFortProceduralGrindRailManager::bAutoActivate");
static_assert(offsetof(UFortProceduralGrindRailManager, bIsEditorOnly) == 155, "Offset mismatch for UFortProceduralGrindRailManager::bIsEditorOnly");
static_assert(offsetof(UFortProceduralGrindRailManager, CreationMethod) == 185, "Offset mismatch for UFortProceduralGrindRailManager::CreationMethod");
static_assert(offsetof(UFortProceduralGrindRailManager, OnComponentActivated) == 186, "Offset mismatch for UFortProceduralGrindRailManager::OnComponentActivated");
static_assert(offsetof(UFortProceduralGrindRailManager, OnComponentDeactivated) == 187, "Offset mismatch for UFortProceduralGrindRailManager::OnComponentDeactivated");

// /Script/ScubaBondOakGameplayRuntime.FortScubaBondOak_LightningRift
// Kind: Class; super: BuildingGameplayActor
class UFortScubaBondOak_LightningRift
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

static_assert(offsetof(UFortScubaBondOak_LightningRift, InherentAbilitySets) == 1736, "Offset mismatch for UFortScubaBondOak_LightningRift::InherentAbilitySets");
static_assert(offsetof(UFortScubaBondOak_LightningRift, DamageStatHandle) == 1776, "Offset mismatch for UFortScubaBondOak_LightningRift::DamageStatHandle");
static_assert(offsetof(UFortScubaBondOak_LightningRift, bAllowRidingOnActor) == 1792, "Offset mismatch for UFortScubaBondOak_LightningRift::bAllowRidingOnActor");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnProximityPulseDelegate) == 1800, "Offset mismatch for UFortScubaBondOak_LightningRift::OnProximityPulseDelegate");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UFortScubaBondOak_LightningRift::OnProximityPrePulseDelegate");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UFortScubaBondOak_LightningRift::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UFortScubaBondOak_LightningRift::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UFortScubaBondOak_LightningRift::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UFortScubaBondOak_LightningRift, OnDidDamage) == 1880, "Offset mismatch for UFortScubaBondOak_LightningRift::OnDidDamage");
static_assert(offsetof(UFortScubaBondOak_LightningRift, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UFortScubaBondOak_LightningRift::bIgnoreInstigatorCollision");
static_assert(offsetof(UFortScubaBondOak_LightningRift, bAddOwnerVelocity) == 1897, "Offset mismatch for UFortScubaBondOak_LightningRift::bAddOwnerVelocity");
static_assert(offsetof(UFortScubaBondOak_LightningRift, AbilitySourceLevel) == 1900, "Offset mismatch for UFortScubaBondOak_LightningRift::AbilitySourceLevel");
static_assert(offsetof(UFortScubaBondOak_LightningRift, DeliverableAbilityInfo) == 1904, "Offset mismatch for UFortScubaBondOak_LightningRift::DeliverableAbilityInfo");
static_assert(offsetof(UFortScubaBondOak_LightningRift, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UFortScubaBondOak_LightningRift::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UFortScubaBondOak_LightningRift, MarkerDisplay) == 2072, "Offset mismatch for UFortScubaBondOak_LightningRift::MarkerDisplay");
static_assert(offsetof(UFortScubaBondOak_LightningRift, MarkerPositionOffset) == 2248, "Offset mismatch for UFortScubaBondOak_LightningRift::MarkerPositionOffset");
static_assert(offsetof(UFortScubaBondOak_LightningRift, RegisteredTouchComponent) == 2272, "Offset mismatch for UFortScubaBondOak_LightningRift::RegisteredTouchComponent");
static_assert(offsetof(UFortScubaBondOak_LightningRift, AnalyticsTags) == 2288, "Offset mismatch for UFortScubaBondOak_LightningRift::AnalyticsTags");
static_assert(offsetof(UFortScubaBondOak_LightningRift, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UFortScubaBondOak_LightningRift::PostProcessOverlapBlendWeight");
static_assert(offsetof(UFortScubaBondOak_LightningRift, CustomInteractionWidget) == 2328, "Offset mismatch for UFortScubaBondOak_LightningRift::CustomInteractionWidget");

// /Script/ScubaBondOakGameplayRuntime.FortScubaBondOak_LightningTrail
// Kind: Class; super: BuildingGameplayActor
class UFortScubaBondOak_LightningTrail
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* LightningTrailSpline; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    void* TrailSplineMeshTemplate; // 0x0928 (Size: 0x8, Type: ClassProperty)
    void* TrailCollisionMeshTemplate; // 0x0930 (Size: 0x8, Type: ClassProperty)
    float MinSplineSegmentLength; // 0x0938 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x093C
    std::uint8_t CurrentPointInsertionData[0x1]; // 0x0950 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScubaBondOak_LightningTrail, LightningTrailSpline) == 2336, "Offset mismatch for UFortScubaBondOak_LightningTrail::LightningTrailSpline");
static_assert(offsetof(UFortScubaBondOak_LightningTrail, TrailSplineMeshTemplate) == 2344, "Offset mismatch for UFortScubaBondOak_LightningTrail::TrailSplineMeshTemplate");
static_assert(offsetof(UFortScubaBondOak_LightningTrail, TrailCollisionMeshTemplate) == 2352, "Offset mismatch for UFortScubaBondOak_LightningTrail::TrailCollisionMeshTemplate");
static_assert(offsetof(UFortScubaBondOak_LightningTrail, MinSplineSegmentLength) == 2360, "Offset mismatch for UFortScubaBondOak_LightningTrail::MinSplineSegmentLength");
static_assert(offsetof(UFortScubaBondOak_LightningTrail, CurrentPointInsertionData) == 2384, "Offset mismatch for UFortScubaBondOak_LightningTrail::CurrentPointInsertionData");

// /Script/ScubaBondOakGameplayRuntime.ScubaBondOakLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UScubaBondOakLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIntoDash1; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntoDash2; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitTrans; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivated; // 0x1173 (Size: 0x1, Type: BoolProperty)
    float DivePitch; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float DivePitchAlpha; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InDiveTagName[0x4]; // 0x117C (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveTagName[0x1]; // 0x1180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScubaBondOakLayerAnimInstance, bIntoDash1) == 4464, "Offset mismatch for UScubaBondOakLayerAnimInstance::bIntoDash1");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, bIntoDash2) == 4465, "Offset mismatch for UScubaBondOakLayerAnimInstance::bIntoDash2");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, bExitTrans) == 4466, "Offset mismatch for UScubaBondOakLayerAnimInstance::bExitTrans");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, bActivated) == 4467, "Offset mismatch for UScubaBondOakLayerAnimInstance::bActivated");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, DivePitch) == 4468, "Offset mismatch for UScubaBondOakLayerAnimInstance::DivePitch");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, DivePitchAlpha) == 4472, "Offset mismatch for UScubaBondOakLayerAnimInstance::DivePitchAlpha");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, InDiveTagName) == 4476, "Offset mismatch for UScubaBondOakLayerAnimInstance::InDiveTagName");
static_assert(offsetof(UScubaBondOakLayerAnimInstance, ActiveTagName) == 4480, "Offset mismatch for UScubaBondOakLayerAnimInstance::ActiveTagName");

// /Script/ScubaBondOakGameplayRuntime.ScubaBondOakWeaponInterface
// Kind: Class; super: Interface
class UScubaBondOakWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ScubaBondOakGameplayRuntime.TargetFilteringTask_SBO_HotfixableTagQuery
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UTargetFilteringTask_SBO_HotfixableTagQuery
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HotfixableGameplayTagQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetFilteringTask_SBO_HotfixableTagQuery, HotfixableGameplayTagQuery) == 40, "Offset mismatch for UTargetFilteringTask_SBO_HotfixableTagQuery::HotfixableGameplayTagQuery");
