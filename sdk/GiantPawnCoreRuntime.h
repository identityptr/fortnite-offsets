/**
 * decamp dumper generated SDK
 * Package: /Script/GiantPawnCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GiantPawnCoreRuntime.FortAnimNode_GiantPawnSlopeWarping
// Kind: ScriptStruct; super: FortAnimNode_PredictiveSlopeWarping
struct FFortAnimNode_GiantPawnSlopeWarping
{
public:
    std::uint8_t Pad_0000[0x328]; // 0x0000
    std::uint8_t LFootPrediction[0xC]; // 0x0328 (Size: 0xC, Type: StructProperty)
    std::uint8_t RFootPrediction[0xC]; // 0x0334 (Size: 0xC, Type: StructProperty)
    float MaxMovementDistBeforeNewTrace; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FootTraceChannel; // 0x0344 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0345
    std::uint8_t bCorrectForMeshOffset; // 0x0348 (Size: 0x1, Type: BoolProperty)
    // 0x0348 BoolProperty bUseFootHeightAsAlpha (shared storage)
    // 0x0348 BoolProperty bUseWorldGravityDirectionForOffset (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0349
    float FootHeightForZeroAlpha; // 0x034C (Size: 0x4, Type: FloatProperty)
    float FootHeightForFullAlpha; // 0x0350 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAbsentCurveMeansFootDown; // 0x0354 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0355
    std::uint8_t LFootOnGroundCurveName[0x4]; // 0x0358 (Size: 0x4, Type: NameProperty)
    std::uint8_t bLeftCurveHighMeansFootDown; // 0x035C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x035D
    std::uint8_t RFootOnGroundCurveName[0x4]; // 0x0360 (Size: 0x4, Type: NameProperty)
    std::uint8_t bApplyLimitsOnFootPlacementRotation; // 0x0364 (Size: 0x1, Type: BoolProperty)
    // 0x0364 BoolProperty bRightCurveHighMeansFootDown (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x0365
    float MaxFootPlacementPitchAngleDegs; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float MaxFootPlacementRollAngleDegs; // 0x036C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplySpecificLimitsOnFootRaiseAndLower; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0371
    float MaxFootRaiseHeight; // 0x0374 (Size: 0x4, Type: FloatProperty)
    float MaxFootLowerHeight; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FootPlantingSettings[0x1]; // 0x037C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, LFootPrediction) == 808, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::LFootPrediction");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, RFootPrediction) == 820, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::RFootPrediction");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, MaxMovementDistBeforeNewTrace) == 832, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::MaxMovementDistBeforeNewTrace");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, FootTraceChannel) == 836, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::FootTraceChannel");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, bCorrectForMeshOffset) == 840, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::bCorrectForMeshOffset");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, FootHeightForZeroAlpha) == 844, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::FootHeightForZeroAlpha");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, FootHeightForFullAlpha) == 848, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::FootHeightForFullAlpha");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, bAbsentCurveMeansFootDown) == 852, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::bAbsentCurveMeansFootDown");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, LFootOnGroundCurveName) == 856, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::LFootOnGroundCurveName");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, bLeftCurveHighMeansFootDown) == 860, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::bLeftCurveHighMeansFootDown");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, RFootOnGroundCurveName) == 864, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::RFootOnGroundCurveName");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, bApplyLimitsOnFootPlacementRotation) == 868, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::bApplyLimitsOnFootPlacementRotation");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, MaxFootPlacementPitchAngleDegs) == 872, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::MaxFootPlacementPitchAngleDegs");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, MaxFootPlacementRollAngleDegs) == 876, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::MaxFootPlacementRollAngleDegs");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, bApplySpecificLimitsOnFootRaiseAndLower) == 880, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::bApplySpecificLimitsOnFootRaiseAndLower");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, MaxFootRaiseHeight) == 884, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::MaxFootRaiseHeight");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, MaxFootLowerHeight) == 888, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::MaxFootLowerHeight");
static_assert(offsetof(FFortAnimNode_GiantPawnSlopeWarping, FootPlantingSettings) == 892, "Offset mismatch for FFortAnimNode_GiantPawnSlopeWarping::FootPlantingSettings");

// /Script/GiantPawnCoreRuntime.FortGiantPawnSpawnParameters
// Kind: ScriptStruct; super: none
struct FFortGiantPawnSpawnParameters
{
public:
    void* PawnClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t SpawnTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t SpawnCollisionHandlingOverride; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortGiantPawnSpawnParameters, PawnClass) == 0, "Offset mismatch for FFortGiantPawnSpawnParameters::PawnClass");
static_assert(offsetof(FFortGiantPawnSpawnParameters, SpawnTransform) == 16, "Offset mismatch for FFortGiantPawnSpawnParameters::SpawnTransform");
static_assert(offsetof(FFortGiantPawnSpawnParameters, SpawnCollisionHandlingOverride) == 112, "Offset mismatch for FFortGiantPawnSpawnParameters::SpawnCollisionHandlingOverride");

// /Script/GiantPawnCoreRuntime.FortGiantWalkingTerrainGridConfig
// Kind: ScriptStruct; super: none
struct FFortGiantWalkingTerrainGridConfig
{
public:
    float GridSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GroundTraceHalfHeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AboveLandscapeDiscardHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGiantWalkingTerrainGridConfig, GridSize) == 0, "Offset mismatch for FFortGiantWalkingTerrainGridConfig::GridSize");
static_assert(offsetof(FFortGiantWalkingTerrainGridConfig, GroundTraceHalfHeight) == 4, "Offset mismatch for FFortGiantWalkingTerrainGridConfig::GroundTraceHalfHeight");
static_assert(offsetof(FFortGiantWalkingTerrainGridConfig, AboveLandscapeDiscardHeight) == 8, "Offset mismatch for FFortGiantWalkingTerrainGridConfig::AboveLandscapeDiscardHeight");

// /Script/GiantPawnCoreRuntime.FortGiantWalkingTerrainGridPointsQueryResult
// Kind: ScriptStruct; super: none
struct FFortGiantWalkingTerrainGridPointsQueryResult
{
public:
    std::uint8_t LocA[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocB[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocC[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t NormalA[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t NormalB[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t NormalC[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHitGroundLocA; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitGroundLocB; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitGroundLocC; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0093
    std::uint8_t DesiredLocation[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t DesiredNormal[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, LocA) == 0, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::LocA");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, LocB) == 24, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::LocB");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, LocC) == 48, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::LocC");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, NormalA) == 72, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::NormalA");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, NormalB) == 96, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::NormalB");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, NormalC) == 120, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::NormalC");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, bHitGroundLocA) == 144, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::bHitGroundLocA");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, bHitGroundLocB) == 145, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::bHitGroundLocB");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, bHitGroundLocC) == 146, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::bHitGroundLocC");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, DesiredLocation) == 152, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::DesiredLocation");
static_assert(offsetof(FFortGiantWalkingTerrainGridPointsQueryResult, DesiredNormal) == 176, "Offset mismatch for FFortGiantWalkingTerrainGridPointsQueryResult::DesiredNormal");

// /Script/GiantPawnCoreRuntime.FortMovementMode_GiantWalkingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_GiantWalkingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_GiantWalkingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_GiantWalkingCreationData::LogicClass");

// /Script/GiantPawnCoreRuntime.GiantPawnAsyncPredictDestroyBuildingEntry
// Kind: ScriptStruct; super: none
struct FGiantPawnAsyncPredictDestroyBuildingEntry
{
public:
    TWeakObjectPtr<void> BuildingSMActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> DamageInstigator; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseRecentlyRenderedCheck; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGiantPawnAsyncPredictDestroyBuildingEntry, BuildingSMActor) == 0, "Offset mismatch for FGiantPawnAsyncPredictDestroyBuildingEntry::BuildingSMActor");
static_assert(offsetof(FGiantPawnAsyncPredictDestroyBuildingEntry, DamageInstigator) == 8, "Offset mismatch for FGiantPawnAsyncPredictDestroyBuildingEntry::DamageInstigator");
static_assert(offsetof(FGiantPawnAsyncPredictDestroyBuildingEntry, bUseRecentlyRenderedCheck) == 16, "Offset mismatch for FGiantPawnAsyncPredictDestroyBuildingEntry::bUseRecentlyRenderedCheck");

// /Script/GiantPawnCoreRuntime.GiantPawnBlockerVolume
// Kind: ScriptStruct; super: TableRowBase
struct FGiantPawnBlockerVolume
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SpawnTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGiantPawnBlockerVolume, SpawnTransform) == 16, "Offset mismatch for FGiantPawnBlockerVolume::SpawnTransform");

// /Script/GiantPawnCoreRuntime.GiantPawnPredictedDestroyedBuildingEntry
// Kind: ScriptStruct; super: none
struct FGiantPawnPredictedDestroyedBuildingEntry
{
public:
    TWeakObjectPtr<void> BuildingSMActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float TimeoutTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGiantPawnPredictedDestroyedBuildingEntry, BuildingSMActor) == 0, "Offset mismatch for FGiantPawnPredictedDestroyedBuildingEntry::BuildingSMActor");
static_assert(offsetof(FGiantPawnPredictedDestroyedBuildingEntry, TimeoutTime) == 8, "Offset mismatch for FGiantPawnPredictedDestroyedBuildingEntry::TimeoutTime");

// /Script/GiantPawnCoreRuntime.FortGameStateComponent_GiantPawnBlockerVolumes
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_GiantPawnBlockerVolumes
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* BlockerVolumeClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* BlockerVolumeTable; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_GiantPawnBlockerVolumes, BlockerVolumeClass) == 192, "Offset mismatch for UFortGameStateComponent_GiantPawnBlockerVolumes::BlockerVolumeClass");
static_assert(offsetof(UFortGameStateComponent_GiantPawnBlockerVolumes, BlockerVolumeTable) == 200, "Offset mismatch for UFortGameStateComponent_GiantPawnBlockerVolumes::BlockerVolumeTable");

// /Script/GiantPawnCoreRuntime.FortGameStateComponent_GiantPawnMode
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_GiantPawnMode
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

static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_GiantPawnMode, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_GiantPawnMode::OnComponentDeactivated");

// /Script/GiantPawnCoreRuntime.FortGiantPawnFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortGiantPawnFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GiantPawnCoreRuntime.FortGiantPlayerPawn
// Kind: Class; super: FortStandInPlayerPawn
class UFortGiantPlayerPawn
{
public:
    std::uint8_t Pad_0000[0x5EE8]; // 0x0000
    TArray<void*> InventoryItemsToRemoveWhileGiant; // 0x5EE8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUsesCharacterParts; // 0x5EF8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDedicatedServerAlwaysTickPoseAndRefreshBones; // 0x5EF9 (Size: 0x1, Type: BoolProperty)
    // 0x5EF9 BoolProperty bEquipWeaponOnControllerChange (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x5EFA
    void* DefaultWeapon; // 0x5F00 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeaponItemCopy[0x98]; // 0x5F08 (Size: 0x98, Type: StructProperty)
    void* GiantAbilitySet; // 0x5FA0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GiantAbilitySetHandle[0x1]; // 0x5FA8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGiantPlayerPawn, InventoryItemsToRemoveWhileGiant) == 24296, "Offset mismatch for UFortGiantPlayerPawn::InventoryItemsToRemoveWhileGiant");
static_assert(offsetof(UFortGiantPlayerPawn, bUsesCharacterParts) == 24312, "Offset mismatch for UFortGiantPlayerPawn::bUsesCharacterParts");
static_assert(offsetof(UFortGiantPlayerPawn, bDedicatedServerAlwaysTickPoseAndRefreshBones) == 24313, "Offset mismatch for UFortGiantPlayerPawn::bDedicatedServerAlwaysTickPoseAndRefreshBones");
static_assert(offsetof(UFortGiantPlayerPawn, DefaultWeapon) == 24320, "Offset mismatch for UFortGiantPlayerPawn::DefaultWeapon");
static_assert(offsetof(UFortGiantPlayerPawn, WeaponItemCopy) == 24328, "Offset mismatch for UFortGiantPlayerPawn::WeaponItemCopy");
static_assert(offsetof(UFortGiantPlayerPawn, GiantAbilitySet) == 24480, "Offset mismatch for UFortGiantPlayerPawn::GiantAbilitySet");
static_assert(offsetof(UFortGiantPlayerPawn, GiantAbilitySetHandle) == 24488, "Offset mismatch for UFortGiantPlayerPawn::GiantAbilitySetHandle");

// /Script/GiantPawnCoreRuntime.FortMovementMode_GiantWalking
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_GiantWalking
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t MaxMoveIterations[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_GiantWalking, MaxMoveIterations) == 440, "Offset mismatch for UFortMovementMode_GiantWalking::MaxMoveIterations");

// /Script/GiantPawnCoreRuntime.FortMovementMode_GiantWalkingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_GiantWalkingRuntimeData
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

static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_GiantWalkingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_GiantWalkingRuntimeData::EndReasonFlags");

// /Script/GiantPawnCoreRuntime.GiantGroupDestructionManager
// Kind: Class; super: FortGameStateComponent
class UGiantGroupDestructionManager
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

static_assert(offsetof(UGiantGroupDestructionManager, PrimaryComponentTick) == 56, "Offset mismatch for UGiantGroupDestructionManager::PrimaryComponentTick");
static_assert(offsetof(UGiantGroupDestructionManager, ComponentTags) == 104, "Offset mismatch for UGiantGroupDestructionManager::ComponentTags");
static_assert(offsetof(UGiantGroupDestructionManager, AssetUserData) == 120, "Offset mismatch for UGiantGroupDestructionManager::AssetUserData");
static_assert(offsetof(UGiantGroupDestructionManager, UCSSerializationIndex) == 144, "Offset mismatch for UGiantGroupDestructionManager::UCSSerializationIndex");
static_assert(offsetof(UGiantGroupDestructionManager, bNetAddressable) == 152, "Offset mismatch for UGiantGroupDestructionManager::bNetAddressable");
static_assert(offsetof(UGiantGroupDestructionManager, bAutoActivate) == 154, "Offset mismatch for UGiantGroupDestructionManager::bAutoActivate");
static_assert(offsetof(UGiantGroupDestructionManager, bIsEditorOnly) == 155, "Offset mismatch for UGiantGroupDestructionManager::bIsEditorOnly");
static_assert(offsetof(UGiantGroupDestructionManager, CreationMethod) == 185, "Offset mismatch for UGiantGroupDestructionManager::CreationMethod");
static_assert(offsetof(UGiantGroupDestructionManager, OnComponentActivated) == 186, "Offset mismatch for UGiantGroupDestructionManager::OnComponentActivated");
static_assert(offsetof(UGiantGroupDestructionManager, OnComponentDeactivated) == 187, "Offset mismatch for UGiantGroupDestructionManager::OnComponentDeactivated");

// /Script/GiantPawnCoreRuntime.GiantPawnDestructionComponent
// Kind: Class; super: ActorComponent
class UGiantPawnDestructionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MaxBuildingCountToPredictDestroyPerFrame[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxBuildingCountToSimplePredictDestroyPerFrame[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t AsyncDeathTag[0x4]; // 0x0120 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSetDamageDealt; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoNeighborProcessing; // 0x0125 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0126
    TArray<void*> BuildingEntriesWaitingForDestroy; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PredictedDestroyedBuildingEntries; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimplePredictDeathBuildingEntries; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuildingEntriesWaitingForSimpleDestroy; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGiantPawnDestructionComponent, MaxBuildingCountToPredictDestroyPerFrame) == 192, "Offset mismatch for UGiantPawnDestructionComponent::MaxBuildingCountToPredictDestroyPerFrame");
static_assert(offsetof(UGiantPawnDestructionComponent, MaxBuildingCountToSimplePredictDestroyPerFrame) == 240, "Offset mismatch for UGiantPawnDestructionComponent::MaxBuildingCountToSimplePredictDestroyPerFrame");
static_assert(offsetof(UGiantPawnDestructionComponent, AsyncDeathTag) == 288, "Offset mismatch for UGiantPawnDestructionComponent::AsyncDeathTag");
static_assert(offsetof(UGiantPawnDestructionComponent, bSetDamageDealt) == 292, "Offset mismatch for UGiantPawnDestructionComponent::bSetDamageDealt");
static_assert(offsetof(UGiantPawnDestructionComponent, bDoNeighborProcessing) == 293, "Offset mismatch for UGiantPawnDestructionComponent::bDoNeighborProcessing");
static_assert(offsetof(UGiantPawnDestructionComponent, BuildingEntriesWaitingForDestroy) == 296, "Offset mismatch for UGiantPawnDestructionComponent::BuildingEntriesWaitingForDestroy");
static_assert(offsetof(UGiantPawnDestructionComponent, PredictedDestroyedBuildingEntries) == 312, "Offset mismatch for UGiantPawnDestructionComponent::PredictedDestroyedBuildingEntries");
static_assert(offsetof(UGiantPawnDestructionComponent, SimplePredictDeathBuildingEntries) == 328, "Offset mismatch for UGiantPawnDestructionComponent::SimplePredictDeathBuildingEntries");
static_assert(offsetof(UGiantPawnDestructionComponent, BuildingEntriesWaitingForSimpleDestroy) == 344, "Offset mismatch for UGiantPawnDestructionComponent::BuildingEntriesWaitingForSimpleDestroy");
