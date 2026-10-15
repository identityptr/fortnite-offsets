/**
 * decamp dumper generated SDK
 * Package: /Script/PlotTwistRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PlotTwistRuntime.PlotTwistForceHeldObjectTypeWithTargetLocation
// Kind: ScriptStruct; super: none
struct FPlotTwistForceHeldObjectTypeWithTargetLocation
{
public:
    std::uint8_t ObjectType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t TargetLocation[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlotTwistForceHeldObjectTypeWithTargetLocation, ObjectType) == 0, "Offset mismatch for FPlotTwistForceHeldObjectTypeWithTargetLocation::ObjectType");
static_assert(offsetof(FPlotTwistForceHeldObjectTypeWithTargetLocation, TargetLocation) == 8, "Offset mismatch for FPlotTwistForceHeldObjectTypeWithTargetLocation::TargetLocation");

// /Script/PlotTwistRuntime.FortContextualTutorialDefinition_EquipWeaponAndAugment
// Kind: Class; super: FortContextualTutorialDefinition
class UFortContextualTutorialDefinition_EquipWeaponAndAugment
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    TArray<void*> TemplateIDs; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AugmentItemTags[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortContextualTutorialDefinition_EquipWeaponAndAugment, TemplateIDs) == 240, "Offset mismatch for UFortContextualTutorialDefinition_EquipWeaponAndAugment::TemplateIDs");
static_assert(offsetof(UFortContextualTutorialDefinition_EquipWeaponAndAugment, AugmentItemTags) == 256, "Offset mismatch for UFortContextualTutorialDefinition_EquipWeaponAndAugment::AugmentItemTags");

// /Script/PlotTwistRuntime.FortContextualTutorial_NoLearnedForcePowers
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_NoLearnedForcePowers
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_NoLearnedForcePowers, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_NoLearnedForcePowers::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_NoLearnedForcePowers, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_NoLearnedForcePowers::MarkerText");
static_assert(offsetof(UFortContextualTutorial_NoLearnedForcePowers, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_NoLearnedForcePowers::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_NoLearnedForcePowers, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_NoLearnedForcePowers::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_NoLearnedForcePowers, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_NoLearnedForcePowers::OwnerController");

// /Script/PlotTwistRuntime.PlotTwistCheatManager
// Kind: Class; super: ChildCheatManager
class UPlotTwistCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WhiteRiftGateClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* PushRiftGateClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* PullRiftGateClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* ThrowRiftGateClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* LightningRiftGateClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UPlotTwistCheatManager, WhiteRiftGateClass) == 40, "Offset mismatch for UPlotTwistCheatManager::WhiteRiftGateClass");
static_assert(offsetof(UPlotTwistCheatManager, PushRiftGateClass) == 48, "Offset mismatch for UPlotTwistCheatManager::PushRiftGateClass");
static_assert(offsetof(UPlotTwistCheatManager, PullRiftGateClass) == 56, "Offset mismatch for UPlotTwistCheatManager::PullRiftGateClass");
static_assert(offsetof(UPlotTwistCheatManager, ThrowRiftGateClass) == 64, "Offset mismatch for UPlotTwistCheatManager::ThrowRiftGateClass");
static_assert(offsetof(UPlotTwistCheatManager, LightningRiftGateClass) == 72, "Offset mismatch for UPlotTwistCheatManager::LightningRiftGateClass");

// /Script/PlotTwistRuntime.PlotTwistForcePowersAbility
// Kind: Class; super: FortGameplayAbility_Action
class UPlotTwistForcePowersAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    FName ActionName; // 0x0B20 (Size: 0x8, Type: NameProperty)
    TArray<void*> ExtraActionNames; // 0x0B28 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EnhancedInputActionsToBind; // 0x0B38 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0B48
    std::uint8_t bActivateOnInputPress; // 0x0B68 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlotTwistForcePowersAbility, ActionName) == 2848, "Offset mismatch for UPlotTwistForcePowersAbility::ActionName");
static_assert(offsetof(UPlotTwistForcePowersAbility, ExtraActionNames) == 2856, "Offset mismatch for UPlotTwistForcePowersAbility::ExtraActionNames");
static_assert(offsetof(UPlotTwistForcePowersAbility, EnhancedInputActionsToBind) == 2872, "Offset mismatch for UPlotTwistForcePowersAbility::EnhancedInputActionsToBind");
static_assert(offsetof(UPlotTwistForcePowersAbility, bActivateOnInputPress) == 2920, "Offset mismatch for UPlotTwistForcePowersAbility::bActivateOnInputPress");

// /Script/PlotTwistRuntime.PlotTwistForcePowersInput
// Kind: Class; super: FortInputComponent
class UPlotTwistForcePowersInput
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    TArray<void*> CachedKeyToActionInfo; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlotTwistForcePowersInput, CachedKeyToActionInfo) == 304, "Offset mismatch for UPlotTwistForcePowersInput::CachedKeyToActionInfo");

// /Script/PlotTwistRuntime.PlotTwistForcePowersProjectileAbility
// Kind: Class; super: PlotTwistForcePowersAbility
class UPlotTwistForcePowersProjectileAbility
{
public:
    std::uint8_t Pad_0000[0xB70]; // 0x0000
    void* ProjectileQuery; // 0x0B70 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NativeGCCast[0x4]; // 0x0B78 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeGCHeldActor[0x4]; // 0x0B7C (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeTagGCThrow[0x8]; // 0x0B80 (Size: 0x8, Type: StructProperty)
    void* NativeMontageIntro; // 0x0B88 (Size: 0x8, Type: ObjectProperty)
    void* NativeMontageIntroNoRootMotion; // 0x0B90 (Size: 0x8, Type: ObjectProperty)
    void* NativeMontageOutro; // 0x0B98 (Size: 0x8, Type: ObjectProperty)
    void* NativeMontageOutroNoRootMotion; // 0x0BA0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0BA8
    void* NativeProjectile; // 0x0BD8 (Size: 0x8, Type: ClassProperty)
    void* NativeProjectileWood; // 0x0BE0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeProjectileGravityScale[0x30]; // 0x0BE8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeProjectileSpawnDistance[0x30]; // 0x0C18 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnergyCost[0x30]; // 0x0C48 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeMinEnergyToActivate[0x2C]; // 0x0C78 (Size: 0x2C, Type: StructProperty)
    std::uint8_t NativeSizeExcludeSmallerThan; // 0x0CA4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0CA5
    std::uint8_t NativeTagsExcludeFromHeldActors[0x20]; // 0x0CA8 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeMaxObjectDiameterLimit[0x30]; // 0x0CC8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeIncludeVehicles[0x30]; // 0x0CF8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTagsIsVehicle[0x20]; // 0x0D28 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeIncludeHighPriorityPhysicsObjects[0x30]; // 0x0D48 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTagsIsHighPriorityPhysicsObject[0x20]; // 0x0D78 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeIncludeGeneralPhysicsObjects[0x30]; // 0x0D98 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePhysicsObjectRotationRateMin[0x30]; // 0x0DC8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePhysicsObjectRotationRateMax[0x30]; // 0x0DF8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeVehicleRotationRateMin[0x30]; // 0x0E28 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeVehicleRotationRateMax[0x30]; // 0x0E58 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeAngularDampingVehicle[0x30]; // 0x0E88 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeAngularDampingPhysics[0x30]; // 0x0EB8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeHeldActorsUpdateInterval[0x30]; // 0x0EE8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeHeldActorsUpdateVelocityMult[0x30]; // 0x0F18 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeIdleLocationsArcAngle[0x30]; // 0x0F48 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeIdleLocationsDistance[0x30]; // 0x0F78 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeIdleLocationsHeight[0x30]; // 0x0FA8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowSpeedVehicle[0x30]; // 0x0FD8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowSpeedPhysicsObject[0x30]; // 0x1008 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowSpeedProjectile[0x30]; // 0x1038 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeLaunchAngle[0x30]; // 0x1068 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeMaxZVelocityProjectile[0x30]; // 0x1098 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeMaxZVelocityVehicle[0x30]; // 0x10C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeMaxZVelocityPhysicsObject[0x30]; // 0x10F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePhysicsObjectThrownRotationRateMin[0x30]; // 0x1128 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePhysicsObjectThrownRotationRateMax[0x30]; // 0x1158 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeVehicleThrownRotationRateMin[0x30]; // 0x1188 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeVehicleThrownRotationRateMax[0x30]; // 0x11B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDestroyBlockingObjects[0x30]; // 0x11E8 (Size: 0x30, Type: StructProperty)
    TArray<void*> NativeObjectTypesDestroyObjectsInArea; // 0x1218 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeTagsExcludeFromDestroyObjectsInArea[0x20]; // 0x1228 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeBuildingExclusionHalfWidth[0x30]; // 0x1248 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBuildingExclusionHalfHeight[0x30]; // 0x1278 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDestroyObjectsInAreaOffsetHeight[0x30]; // 0x12A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDestroyActorsOverlappingSpawnedProjectiles[0x30]; // 0x12D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTagsIsBuilding[0x20]; // 0x1308 (Size: 0x20, Type: StructProperty)
    TArray<void*> NativeObjectTypesBuilds; // 0x1328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeDestroyObjectsInAreaHeight[0x30]; // 0x1338 (Size: 0x30, Type: StructProperty)
    void* NativeGEDamageBuildAtProjectileSpawn; // 0x1368 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeBuildDamageAtProjectileSpawnPercentCurrentHealth[0x30]; // 0x1370 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBuildDamageAtProjectileSpawnMin[0x30]; // 0x13A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeUseAdjustedTargetLocation[0x30]; // 0x13D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetAdjustUseAngleChanceNegative[0x30]; // 0x1400 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetAdjustChanceNegative[0x30]; // 0x1430 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeOffsetMaxHalfAngle[0x30]; // 0x1460 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeOffsetDistanceMin[0x30]; // 0x1490 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeOffsetDistanceMax[0x30]; // 0x14C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeUseAimAngleOffset[0x30]; // 0x14F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePitchOffsetMin[0x30]; // 0x1520 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePitchOffsetMax[0x30]; // 0x1550 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeAngleOffsetChanceNegative[0x30]; // 0x1580 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeYawOffsetMin[0x30]; // 0x15B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeYawOffsetMax[0x30]; // 0x15E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePitchOffsetNegMin[0x30]; // 0x1610 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativePitchOffsetNegMax[0x30]; // 0x1640 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeYawOffsetNegMin[0x30]; // 0x1670 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeYawOffsetNegMax[0x30]; // 0x16A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeUseActorTargeting[0x30]; // 0x16D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeActorTargetingDistance[0x30]; // 0x1700 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeActorTargetingAngle[0x30]; // 0x1730 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeActorTargetingGroundCheckHeight[0x30]; // 0x1760 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetDistance[0x30]; // 0x1790 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeShuffleProjectileAimAdjustments[0x30]; // 0x17C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowDelay[0x30]; // 0x17F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowAnimDurationOffset[0x30]; // 0x1820 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeAbilityTotalDuration[0x30]; // 0x1850 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeThrowInterval[0x30]; // 0x1880 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeHeldVehicleInitialZImpulse[0x30]; // 0x18B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeProjectileCount[0x30]; // 0x18E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeSpawnProjectilesFromDestroyedObjects[0x30]; // 0x1910 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableWoodProjectiles[0x30]; // 0x1940 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeSpawnDirection[0x38]; // 0x1970 (Size: 0x38, Type: StructProperty)
    std::int32_t NativeAdditionalProjectilesToSpawn; // 0x19A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x164]; // 0x19AC
    TArray<void*> NativeSortedSizeList; // 0x1B10 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> NativeActorToModify; // 0x1B20 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0004[0xC4]; // 0x1B28
    TWeakObjectPtr<void> NativeClosestActorToSpawnPoint; // 0x1BEC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0005[0x4]; // 0x1BF4
    std::uint8_t NativePlayerPawn[0x20]; // 0x1BF8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NativePlayerController[0x20]; // 0x1C18 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NativeTagsAddedToHeldActors[0x20]; // 0x1C38 (Size: 0x20, Type: StructProperty)
    void* NativeGEThrownActor; // 0x1C58 (Size: 0x8, Type: ClassProperty)
    void* NativeGEIgniteExplosive; // 0x1C60 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagExplosiveObject[0x8]; // 0x1C68 (Size: 0x8, Type: StructProperty)
    void* NativeGEHeldActor; // 0x1C70 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeEventTagThrow[0x8]; // 0x1C78 (Size: 0x8, Type: StructProperty)
    void* NativeGEMoveSpeedWhileCasting; // 0x1C80 (Size: 0x8, Type: ClassProperty)
    void* NativeGEPreventMove; // 0x1C88 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagsMoveSpeedWhileCasting[0x20]; // 0x1C90 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeTagsPreventMove[0x20]; // 0x1CB0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeHolsterID[0x4]; // 0x1CD0 (Size: 0x4, Type: NameProperty)
    std::uint8_t NativeTagNotifyEndAbility[0x4]; // 0x1CD4 (Size: 0x4, Type: StructProperty)
    TArray<void*> NativeObjectTypesAimPointVsTargetedActor; // 0x1CD8 (Size: 0x10, Type: ArrayProperty)
    void* NativeGEUICooldown; // 0x1CE8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagsHUDElementsToHide[0x20]; // 0x1CF0 (Size: 0x20, Type: StructProperty)
    FName NativeHideHUDElementsReason; // 0x1D10 (Size: 0x8, Type: NameProperty)
    std::uint8_t NativeTagFailedToActivateNoThrowableActors[0x20]; // 0x1D18 (Size: 0x20, Type: StructProperty)
    void* NativeTacticalSprintEnergyComponent; // 0x1D38 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagsNoRootMotion[0x20]; // 0x1D40 (Size: 0x20, Type: StructProperty)
    float NativeProjectileSphereTraceRadius; // 0x1D60 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x1D64
    void* RiftGateForceProjectile; // 0x1D68 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagBuilding[0x4]; // 0x1D70 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeTagPhysicsObject[0x4]; // 0x1D74 (Size: 0x4, Type: StructProperty)
    float RiftGateProjectileHalfHeight; // 0x1D78 (Size: 0x4, Type: FloatProperty)
    float RiftGateProjectileRadius; // 0x1D7C (Size: 0x4, Type: FloatProperty)
    float NativeDefaultGravity; // 0x1D80 (Size: 0x4, Type: FloatProperty)
    float NativeDefaultGravityVehicle; // 0x1D84 (Size: 0x4, Type: FloatProperty)
    void* NativeGEUseAimOffset; // 0x1D88 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagsUseAimOffset[0x20]; // 0x1D90 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeVehicleGravityMult[0xF0]; // 0x1DB0 (Size: 0xF0, Type: StructProperty)
    TArray<void*> ForceThrowDenyList; // 0x1EA0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, ProjectileQuery) == 2928, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::ProjectileQuery");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGCCast) == 2936, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGCCast");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGCHeldActor) == 2940, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGCHeldActor");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagGCThrow) == 2944, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagGCThrow");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMontageIntro) == 2952, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMontageIntro");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMontageIntroNoRootMotion) == 2960, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMontageIntroNoRootMotion");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMontageOutro) == 2968, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMontageOutro");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMontageOutroNoRootMotion) == 2976, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMontageOutroNoRootMotion");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectile) == 3032, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectile");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectileWood) == 3040, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectileWood");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectileGravityScale) == 3048, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectileGravityScale");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectileSpawnDistance) == 3096, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectileSpawnDistance");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeEnergyCost) == 3144, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeEnergyCost");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMinEnergyToActivate) == 3192, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMinEnergyToActivate");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeSizeExcludeSmallerThan) == 3236, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeSizeExcludeSmallerThan");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsExcludeFromHeldActors) == 3240, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsExcludeFromHeldActors");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMaxObjectDiameterLimit) == 3272, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMaxObjectDiameterLimit");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIncludeVehicles) == 3320, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIncludeVehicles");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsIsVehicle) == 3368, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsIsVehicle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIncludeHighPriorityPhysicsObjects) == 3400, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIncludeHighPriorityPhysicsObjects");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsIsHighPriorityPhysicsObject) == 3448, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsIsHighPriorityPhysicsObject");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIncludeGeneralPhysicsObjects) == 3480, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIncludeGeneralPhysicsObjects");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePhysicsObjectRotationRateMin) == 3528, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePhysicsObjectRotationRateMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePhysicsObjectRotationRateMax) == 3576, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePhysicsObjectRotationRateMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeVehicleRotationRateMin) == 3624, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeVehicleRotationRateMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeVehicleRotationRateMax) == 3672, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeVehicleRotationRateMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeAngularDampingVehicle) == 3720, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeAngularDampingVehicle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeAngularDampingPhysics) == 3768, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeAngularDampingPhysics");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeHeldActorsUpdateInterval) == 3816, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeHeldActorsUpdateInterval");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeHeldActorsUpdateVelocityMult) == 3864, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeHeldActorsUpdateVelocityMult");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIdleLocationsArcAngle) == 3912, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIdleLocationsArcAngle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIdleLocationsDistance) == 3960, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIdleLocationsDistance");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeIdleLocationsHeight) == 4008, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeIdleLocationsHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowSpeedVehicle) == 4056, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowSpeedVehicle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowSpeedPhysicsObject) == 4104, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowSpeedPhysicsObject");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowSpeedProjectile) == 4152, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowSpeedProjectile");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeLaunchAngle) == 4200, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeLaunchAngle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMaxZVelocityProjectile) == 4248, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMaxZVelocityProjectile");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMaxZVelocityVehicle) == 4296, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMaxZVelocityVehicle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeMaxZVelocityPhysicsObject) == 4344, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeMaxZVelocityPhysicsObject");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePhysicsObjectThrownRotationRateMin) == 4392, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePhysicsObjectThrownRotationRateMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePhysicsObjectThrownRotationRateMax) == 4440, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePhysicsObjectThrownRotationRateMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeVehicleThrownRotationRateMin) == 4488, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeVehicleThrownRotationRateMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeVehicleThrownRotationRateMax) == 4536, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeVehicleThrownRotationRateMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDestroyBlockingObjects) == 4584, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDestroyBlockingObjects");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeObjectTypesDestroyObjectsInArea) == 4632, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeObjectTypesDestroyObjectsInArea");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsExcludeFromDestroyObjectsInArea) == 4648, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsExcludeFromDestroyObjectsInArea");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeBuildingExclusionHalfWidth) == 4680, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeBuildingExclusionHalfWidth");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeBuildingExclusionHalfHeight) == 4728, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeBuildingExclusionHalfHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDestroyObjectsInAreaOffsetHeight) == 4776, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDestroyObjectsInAreaOffsetHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDestroyActorsOverlappingSpawnedProjectiles) == 4824, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDestroyActorsOverlappingSpawnedProjectiles");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsIsBuilding) == 4872, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsIsBuilding");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeObjectTypesBuilds) == 4904, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeObjectTypesBuilds");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDestroyObjectsInAreaHeight) == 4920, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDestroyObjectsInAreaHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEDamageBuildAtProjectileSpawn) == 4968, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEDamageBuildAtProjectileSpawn");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeBuildDamageAtProjectileSpawnPercentCurrentHealth) == 4976, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeBuildDamageAtProjectileSpawnPercentCurrentHealth");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeBuildDamageAtProjectileSpawnMin) == 5024, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeBuildDamageAtProjectileSpawnMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeUseAdjustedTargetLocation) == 5072, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeUseAdjustedTargetLocation");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTargetAdjustUseAngleChanceNegative) == 5120, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTargetAdjustUseAngleChanceNegative");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTargetAdjustChanceNegative) == 5168, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTargetAdjustChanceNegative");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeOffsetMaxHalfAngle) == 5216, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeOffsetMaxHalfAngle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeOffsetDistanceMin) == 5264, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeOffsetDistanceMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeOffsetDistanceMax) == 5312, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeOffsetDistanceMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeUseAimAngleOffset) == 5360, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeUseAimAngleOffset");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePitchOffsetMin) == 5408, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePitchOffsetMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePitchOffsetMax) == 5456, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePitchOffsetMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeAngleOffsetChanceNegative) == 5504, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeAngleOffsetChanceNegative");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeYawOffsetMin) == 5552, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeYawOffsetMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeYawOffsetMax) == 5600, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeYawOffsetMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePitchOffsetNegMin) == 5648, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePitchOffsetNegMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePitchOffsetNegMax) == 5696, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePitchOffsetNegMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeYawOffsetNegMin) == 5744, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeYawOffsetNegMin");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeYawOffsetNegMax) == 5792, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeYawOffsetNegMax");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeUseActorTargeting) == 5840, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeUseActorTargeting");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeActorTargetingDistance) == 5888, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeActorTargetingDistance");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeActorTargetingAngle) == 5936, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeActorTargetingAngle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeActorTargetingGroundCheckHeight) == 5984, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeActorTargetingGroundCheckHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTargetDistance) == 6032, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTargetDistance");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeShuffleProjectileAimAdjustments) == 6080, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeShuffleProjectileAimAdjustments");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowDelay) == 6128, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowDelay");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowAnimDurationOffset) == 6176, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowAnimDurationOffset");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeAbilityTotalDuration) == 6224, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeAbilityTotalDuration");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeThrowInterval) == 6272, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeThrowInterval");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeHeldVehicleInitialZImpulse) == 6320, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeHeldVehicleInitialZImpulse");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectileCount) == 6368, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectileCount");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeSpawnProjectilesFromDestroyedObjects) == 6416, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeSpawnProjectilesFromDestroyedObjects");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeEnableWoodProjectiles) == 6464, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeEnableWoodProjectiles");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeSpawnDirection) == 6512, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeSpawnDirection");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeAdditionalProjectilesToSpawn) == 6568, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeAdditionalProjectilesToSpawn");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeSortedSizeList) == 6928, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeSortedSizeList");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeActorToModify) == 6944, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeActorToModify");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeClosestActorToSpawnPoint) == 7148, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeClosestActorToSpawnPoint");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePlayerPawn) == 7160, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePlayerPawn");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativePlayerController) == 7192, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativePlayerController");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsAddedToHeldActors) == 7224, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsAddedToHeldActors");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEThrownActor) == 7256, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEThrownActor");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEIgniteExplosive) == 7264, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEIgniteExplosive");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagExplosiveObject) == 7272, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagExplosiveObject");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEHeldActor) == 7280, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEHeldActor");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeEventTagThrow) == 7288, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeEventTagThrow");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEMoveSpeedWhileCasting) == 7296, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEMoveSpeedWhileCasting");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEPreventMove) == 7304, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEPreventMove");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsMoveSpeedWhileCasting) == 7312, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsMoveSpeedWhileCasting");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsPreventMove) == 7344, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsPreventMove");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeHolsterID) == 7376, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeHolsterID");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagNotifyEndAbility) == 7380, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagNotifyEndAbility");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeObjectTypesAimPointVsTargetedActor) == 7384, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeObjectTypesAimPointVsTargetedActor");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEUICooldown) == 7400, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEUICooldown");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsHUDElementsToHide) == 7408, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsHUDElementsToHide");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeHideHUDElementsReason) == 7440, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeHideHUDElementsReason");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagFailedToActivateNoThrowableActors) == 7448, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagFailedToActivateNoThrowableActors");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTacticalSprintEnergyComponent) == 7480, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTacticalSprintEnergyComponent");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsNoRootMotion) == 7488, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsNoRootMotion");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeProjectileSphereTraceRadius) == 7520, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeProjectileSphereTraceRadius");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, RiftGateForceProjectile) == 7528, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::RiftGateForceProjectile");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagBuilding) == 7536, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagBuilding");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagPhysicsObject) == 7540, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagPhysicsObject");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, RiftGateProjectileHalfHeight) == 7544, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::RiftGateProjectileHalfHeight");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, RiftGateProjectileRadius) == 7548, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::RiftGateProjectileRadius");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDefaultGravity) == 7552, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDefaultGravity");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeDefaultGravityVehicle) == 7556, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeDefaultGravityVehicle");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeGEUseAimOffset) == 7560, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeGEUseAimOffset");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeTagsUseAimOffset) == 7568, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeTagsUseAimOffset");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, NativeVehicleGravityMult) == 7600, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::NativeVehicleGravityMult");
static_assert(offsetof(UPlotTwistForcePowersProjectileAbility, ForceThrowDenyList) == 7840, "Offset mismatch for UPlotTwistForcePowersProjectileAbility::ForceThrowDenyList");

// /Script/PlotTwistRuntime.PlotTwistForcePowersPushEventHandlerAbility
// Kind: Class; super: FortGameplayAbility
class UPlotTwistForcePowersPushEventHandlerAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    TArray<void*> NativeTargetingObjectTypesAll; // 0x0B20 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeTargetingObjectTypesBuilds; // 0x0B30 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeTargetingObjectTypesNonBuilds; // 0x0B40 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeTargetingTravelSpeed[0x30]; // 0x0B50 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingInterval[0x30]; // 0x0B80 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingRangeMax[0x30]; // 0x0BB0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingRangeUseMaxSize[0x30]; // 0x0BE0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingHalfWidthMin[0x30]; // 0x0C10 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingHalfWidthMax[0x30]; // 0x0C40 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingHalfHeightMin[0x30]; // 0x0C70 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingHalfHeightMax[0x30]; // 0x0CA0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingBuildsHalfWidthMin[0x30]; // 0x0CD0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingBuildsHalfWidthMax[0x30]; // 0x0D00 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingBuildsHalfHeightMin[0x30]; // 0x0D30 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTargetingBuildsHalfHeightMax[0x30]; // 0x0D60 (Size: 0x30, Type: StructProperty)
    TArray<void*> NativeExclusionObjectTypes; // 0x0D90 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeExclusionObjectTypesExperimental; // 0x0DA0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeBuildingInclusionRange[0x30]; // 0x0DB0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBuildingInclusionRangeStart[0x30]; // 0x0DE0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBuildingExclusionHeight[0x30]; // 0x0E10 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeBuildingExclusionRadius[0x30]; // 0x0E40 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnvDamageMin[0x30]; // 0x0E70 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnvDamageMax[0x30]; // 0x0EA0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDamageFalloffRangeMin[0x30]; // 0x0ED0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDamageFalloffRangeMax[0x30]; // 0x0F00 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeTagsExcludeFromThrownActors[0x20]; // 0x0F30 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeMaxPhysicsActorsToThrow[0x30]; // 0x0F50 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeVehiclesCountTowardsThrownActorLimit[0x30]; // 0x0F80 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeApplyBuildingEffectsToPhysicsActorsPastThrownActorLimit[0x30]; // 0x0FB0 (Size: 0x30, Type: StructProperty)
    TArray<void*> NativeObjectsBlockLOS; // 0x0FE0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeLOSBlockingActorsDepthLimit[0x30]; // 0x0FF0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeNonLOSBlockingActorsDepthLimit[0x30]; // 0x1020 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeDepthPenetrationEnvironmentDamageMult[0x28]; // 0x1050 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeEnableVsPlayers[0x30]; // 0x1078 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsFriends[0x30]; // 0x10A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsEnemies[0x30]; // 0x10D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsDBNOFriends[0x30]; // 0x1108 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsDBNOEnemies[0x30]; // 0x1138 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsCreatures[0x30]; // 0x1168 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsVehicles[0x30]; // 0x1198 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsPhysicsObjects[0x30]; // 0x11C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsBuildings[0x30]; // 0x11F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsItemPickups[0x30]; // 0x1228 (Size: 0x30, Type: StructProperty)
    std::uint8_t NativeEnableVsProjectiles[0x30]; // 0x1258 (Size: 0x30, Type: StructProperty)
    void* NativeGEDamage; // 0x1288 (Size: 0x8, Type: ClassProperty)
    void* NativeGEKnock; // 0x1290 (Size: 0x8, Type: ClassProperty)
    void* NativeGEThrownActor; // 0x1298 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NativeTagsPreventThrow[0x20]; // 0x12A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeTagsPreventDamage[0x20]; // 0x12C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeTagsPreventAllEffects[0x20]; // 0x12E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeTagsPreventAllEffectsExperimental[0x20]; // 0x1300 (Size: 0x20, Type: StructProperty)
    std::int32_t NativeIntervalsBeforeMaxSize; // 0x1320 (Size: 0x4, Type: IntProperty)
    float NativeTravelDistancePerIntervalBeforeMaxSize; // 0x1324 (Size: 0x4, Type: FloatProperty)
    std::int32_t NativeIntervalsAfterMaxSize; // 0x1328 (Size: 0x4, Type: IntProperty)
    float NativeTravelDistancePerIntervalAfterMaxSize; // 0x132C (Size: 0x4, Type: FloatProperty)
    float NativeHalfWidthGrowthPerInterval; // 0x1330 (Size: 0x4, Type: FloatProperty)
    float NativeHalfHeightGrowthPerInterval; // 0x1334 (Size: 0x4, Type: FloatProperty)
    std::int32_t NativeTotalTargetingIntervals; // 0x1338 (Size: 0x4, Type: IntProperty)
    std::int32_t NativeCurrentTargetingInterval; // 0x133C (Size: 0x4, Type: IntProperty)
    float NativeCurrentHalfLength; // 0x1340 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentHalfWidth; // 0x1344 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentHalfHeight; // 0x1348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x134C
    std::uint8_t NativeTargetingLocationStart[0x18]; // 0x1350 (Size: 0x18, Type: StructProperty)
    std::uint8_t NativeTargetingRotation[0x18]; // 0x1368 (Size: 0x18, Type: StructProperty)
    std::uint8_t NativeTargetingLocationCurrent[0x18]; // 0x1380 (Size: 0x18, Type: StructProperty)
    float NativeTimeStartTargetSelection; // 0x1398 (Size: 0x4, Type: FloatProperty)
    float NativeHalfWidthGrowthPerIntervalBuilds; // 0x139C (Size: 0x4, Type: FloatProperty)
    float NativeHalfHeightGrowthPerIntervalBuilds; // 0x13A0 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentHalfWidthBuilds; // 0x13A4 (Size: 0x4, Type: FloatProperty)
    float NativeCurrentHalfHeightBuilds; // 0x13A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x13AC
    TArray<void*> NativeActorsToInclude; // 0x13B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeActorsToExclude; // 0x13C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeUnsortedActorsToProcess; // 0x13D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeProcessedActors; // 0x13E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeUnsortedPhysicsActorsToThrow; // 0x13F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeSortedPhysicsActorsToThrow; // 0x1400 (Size: 0x10, Type: ArrayProperty)
    void* NativeCurrentActorToProcess; // 0x1410 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NativeLOSBlockingActorsToProcess; // 0x1418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeNonLOSBlockingActorsToProcess; // 0x1428 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NativeMapLOSBlockingActorsToDepth; // 0x1438 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> NativeMapNonLOSBlockingActorsToDepth; // 0x1448 (Size: 0x10, Type: MapProperty)
    std::uint8_t bNativeCurrentlyProcessingLOSBlockingActors; // 0x1458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x1459
    std::int32_t NativeCurrentActorDepth; // 0x145C (Size: 0x4, Type: IntProperty)
    std::uint8_t NativeTagSetByCallerEnvironmentDamage[0x4]; // 0x1460 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> NativePlayerPawn; // 0x1464 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> NativePlayerController; // 0x146C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t NativeTagGCImpact[0x4]; // 0x1474 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeTagExplosiveObject[0x4]; // 0x1478 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeTagBuilding[0x4]; // 0x147C (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeTagPhysicsObject[0x8]; // 0x1480 (Size: 0x8, Type: StructProperty)
    std::uint8_t NativeTagsBuildingPiece[0x20]; // 0x1488 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeQuestTagsImpact[0x28]; // 0x14A8 (Size: 0x28, Type: StructProperty)
    TArray<void*> DamagedBuildingActors; // 0x14D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x8]; // 0x14E0
    TArray<void*> ForcePushPullDenyList; // 0x14E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingObjectTypesAll) == 2848, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingObjectTypesAll");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingObjectTypesBuilds) == 2864, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingObjectTypesBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingObjectTypesNonBuilds) == 2880, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingObjectTypesNonBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingTravelSpeed) == 2896, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingTravelSpeed");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingInterval) == 2944, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingInterval");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingRangeMax) == 2992, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingRangeMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingRangeUseMaxSize) == 3040, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingRangeUseMaxSize");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingHalfWidthMin) == 3088, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingHalfWidthMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingHalfWidthMax) == 3136, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingHalfWidthMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingHalfHeightMin) == 3184, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingHalfHeightMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingHalfHeightMax) == 3232, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingHalfHeightMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingBuildsHalfWidthMin) == 3280, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingBuildsHalfWidthMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingBuildsHalfWidthMax) == 3328, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingBuildsHalfWidthMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingBuildsHalfHeightMin) == 3376, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingBuildsHalfHeightMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingBuildsHalfHeightMax) == 3424, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingBuildsHalfHeightMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeExclusionObjectTypes) == 3472, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeExclusionObjectTypes");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeExclusionObjectTypesExperimental) == 3488, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeExclusionObjectTypesExperimental");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeBuildingInclusionRange) == 3504, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeBuildingInclusionRange");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeBuildingInclusionRangeStart) == 3552, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeBuildingInclusionRangeStart");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeBuildingExclusionHeight) == 3600, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeBuildingExclusionHeight");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeBuildingExclusionRadius) == 3648, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeBuildingExclusionRadius");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnvDamageMin) == 3696, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnvDamageMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnvDamageMax) == 3744, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnvDamageMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeDamageFalloffRangeMin) == 3792, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeDamageFalloffRangeMin");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeDamageFalloffRangeMax) == 3840, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeDamageFalloffRangeMax");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsExcludeFromThrownActors) == 3888, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsExcludeFromThrownActors");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeMaxPhysicsActorsToThrow) == 3920, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeMaxPhysicsActorsToThrow");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeVehiclesCountTowardsThrownActorLimit) == 3968, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeVehiclesCountTowardsThrownActorLimit");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeApplyBuildingEffectsToPhysicsActorsPastThrownActorLimit) == 4016, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeApplyBuildingEffectsToPhysicsActorsPastThrownActorLimit");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeObjectsBlockLOS) == 4064, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeObjectsBlockLOS");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeLOSBlockingActorsDepthLimit) == 4080, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeLOSBlockingActorsDepthLimit");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeNonLOSBlockingActorsDepthLimit) == 4128, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeNonLOSBlockingActorsDepthLimit");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeDepthPenetrationEnvironmentDamageMult) == 4176, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeDepthPenetrationEnvironmentDamageMult");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsPlayers) == 4216, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsPlayers");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsFriends) == 4264, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsFriends");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsEnemies) == 4312, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsEnemies");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsDBNOFriends) == 4360, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsDBNOFriends");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsDBNOEnemies) == 4408, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsDBNOEnemies");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsCreatures) == 4456, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsCreatures");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsVehicles) == 4504, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsVehicles");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsPhysicsObjects) == 4552, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsPhysicsObjects");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsBuildings) == 4600, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsBuildings");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsItemPickups) == 4648, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsItemPickups");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeEnableVsProjectiles) == 4696, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeEnableVsProjectiles");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeGEDamage) == 4744, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeGEDamage");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeGEKnock) == 4752, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeGEKnock");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeGEThrownActor) == 4760, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeGEThrownActor");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsPreventThrow) == 4768, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsPreventThrow");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsPreventDamage) == 4800, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsPreventDamage");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsPreventAllEffects) == 4832, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsPreventAllEffects");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsPreventAllEffectsExperimental) == 4864, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsPreventAllEffectsExperimental");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeIntervalsBeforeMaxSize) == 4896, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeIntervalsBeforeMaxSize");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTravelDistancePerIntervalBeforeMaxSize) == 4900, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTravelDistancePerIntervalBeforeMaxSize");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeIntervalsAfterMaxSize) == 4904, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeIntervalsAfterMaxSize");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTravelDistancePerIntervalAfterMaxSize) == 4908, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTravelDistancePerIntervalAfterMaxSize");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeHalfWidthGrowthPerInterval) == 4912, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeHalfWidthGrowthPerInterval");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeHalfHeightGrowthPerInterval) == 4916, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeHalfHeightGrowthPerInterval");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTotalTargetingIntervals) == 4920, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTotalTargetingIntervals");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentTargetingInterval) == 4924, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentTargetingInterval");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentHalfLength) == 4928, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentHalfLength");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentHalfWidth) == 4932, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentHalfWidth");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentHalfHeight) == 4936, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentHalfHeight");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingLocationStart) == 4944, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingLocationStart");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingRotation) == 4968, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingRotation");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTargetingLocationCurrent) == 4992, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTargetingLocationCurrent");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTimeStartTargetSelection) == 5016, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTimeStartTargetSelection");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeHalfWidthGrowthPerIntervalBuilds) == 5020, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeHalfWidthGrowthPerIntervalBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeHalfHeightGrowthPerIntervalBuilds) == 5024, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeHalfHeightGrowthPerIntervalBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentHalfWidthBuilds) == 5028, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentHalfWidthBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentHalfHeightBuilds) == 5032, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentHalfHeightBuilds");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeActorsToInclude) == 5040, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeActorsToInclude");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeActorsToExclude) == 5056, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeActorsToExclude");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeUnsortedActorsToProcess) == 5072, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeUnsortedActorsToProcess");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeProcessedActors) == 5088, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeProcessedActors");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeUnsortedPhysicsActorsToThrow) == 5104, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeUnsortedPhysicsActorsToThrow");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeSortedPhysicsActorsToThrow) == 5120, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeSortedPhysicsActorsToThrow");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentActorToProcess) == 5136, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentActorToProcess");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeLOSBlockingActorsToProcess) == 5144, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeLOSBlockingActorsToProcess");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeNonLOSBlockingActorsToProcess) == 5160, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeNonLOSBlockingActorsToProcess");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeMapLOSBlockingActorsToDepth) == 5176, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeMapLOSBlockingActorsToDepth");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeMapNonLOSBlockingActorsToDepth) == 5192, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeMapNonLOSBlockingActorsToDepth");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, bNativeCurrentlyProcessingLOSBlockingActors) == 5208, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::bNativeCurrentlyProcessingLOSBlockingActors");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeCurrentActorDepth) == 5212, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeCurrentActorDepth");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagSetByCallerEnvironmentDamage) == 5216, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagSetByCallerEnvironmentDamage");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativePlayerPawn) == 5220, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativePlayerPawn");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativePlayerController) == 5228, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativePlayerController");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagGCImpact) == 5236, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagGCImpact");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagExplosiveObject) == 5240, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagExplosiveObject");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagBuilding) == 5244, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagBuilding");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagPhysicsObject) == 5248, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagPhysicsObject");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeTagsBuildingPiece) == 5256, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeTagsBuildingPiece");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, NativeQuestTagsImpact) == 5288, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::NativeQuestTagsImpact");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, DamagedBuildingActors) == 5328, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::DamagedBuildingActors");
static_assert(offsetof(UPlotTwistForcePowersPushEventHandlerAbility, ForcePushPullDenyList) == 5352, "Offset mismatch for UPlotTwistForcePowersPushEventHandlerAbility::ForcePushPullDenyList");

// /Script/PlotTwistRuntime.PlotTwistForceProjectileBase
// Kind: Class; super: FortProjectileBase
class UPlotTwistForceProjectileBase
{
public:
    std::uint8_t Pad_0000[0xAD8]; // 0x0000
    std::uint8_t bNativeShouldPlaySpawnFX; // 0x0AD8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNativeShouldUseSpawnOffset; // 0x0AD9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlotTwistForceProjectileBase, bNativeShouldPlaySpawnFX) == 2776, "Offset mismatch for UPlotTwistForceProjectileBase::bNativeShouldPlaySpawnFX");
static_assert(offsetof(UPlotTwistForceProjectileBase, bNativeShouldUseSpawnOffset) == 2777, "Offset mismatch for UPlotTwistForceProjectileBase::bNativeShouldUseSpawnOffset");

// /Script/PlotTwistRuntime.PlotTwistRiftGateConversationComponent
// Kind: Class; super: ActorComponent
class UPlotTwistRiftGateConversationComponent
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

static_assert(offsetof(UPlotTwistRiftGateConversationComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPlotTwistRiftGateConversationComponent::PrimaryComponentTick");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, ComponentTags) == 104, "Offset mismatch for UPlotTwistRiftGateConversationComponent::ComponentTags");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, AssetUserData) == 120, "Offset mismatch for UPlotTwistRiftGateConversationComponent::AssetUserData");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPlotTwistRiftGateConversationComponent::UCSSerializationIndex");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, bNetAddressable) == 152, "Offset mismatch for UPlotTwistRiftGateConversationComponent::bNetAddressable");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, bAutoActivate) == 154, "Offset mismatch for UPlotTwistRiftGateConversationComponent::bAutoActivate");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, bIsEditorOnly) == 155, "Offset mismatch for UPlotTwistRiftGateConversationComponent::bIsEditorOnly");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, CreationMethod) == 185, "Offset mismatch for UPlotTwistRiftGateConversationComponent::CreationMethod");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, OnComponentActivated) == 186, "Offset mismatch for UPlotTwistRiftGateConversationComponent::OnComponentActivated");
static_assert(offsetof(UPlotTwistRiftGateConversationComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPlotTwistRiftGateConversationComponent::OnComponentDeactivated");

// /Script/PlotTwistRuntime.PlotTwistRiftGateEnterAbility
// Kind: Class; super: FortGameplayAbility
class UPlotTwistRiftGateEnterAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* WatchedPlayerController; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlotTwistRiftGateEnterAbility, WatchedPlayerController) == 2848, "Offset mismatch for UPlotTwistRiftGateEnterAbility::WatchedPlayerController");

// /Script/PlotTwistRuntime.RiftGateCinematicSequence
// Kind: Class; super: FortGameplayAbility
class URiftGateCinematicSequence
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

static_assert(offsetof(URiftGateCinematicSequence, ActivationType) == 936, "Offset mismatch for URiftGateCinematicSequence::ActivationType");
static_assert(offsetof(URiftGateCinematicSequence, EffectContainers) == 944, "Offset mismatch for URiftGateCinematicSequence::EffectContainers");
static_assert(offsetof(URiftGateCinematicSequence, GameplayEffectContainers) == 1864, "Offset mismatch for URiftGateCinematicSequence::GameplayEffectContainers");
static_assert(offsetof(URiftGateCinematicSequence, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for URiftGateCinematicSequence::DynamicGameplayEffectContainers");
static_assert(offsetof(URiftGateCinematicSequence, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for URiftGateCinematicSequence::OwnerPreviewImageOverrideTags");
static_assert(offsetof(URiftGateCinematicSequence, ProjectileClass) == 1928, "Offset mismatch for URiftGateCinematicSequence::ProjectileClass");
static_assert(offsetof(URiftGateCinematicSequence, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for URiftGateCinematicSequence::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(URiftGateCinematicSequence, DamageStatHandle) == 1944, "Offset mismatch for URiftGateCinematicSequence::DamageStatHandle");
static_assert(offsetof(URiftGateCinematicSequence, AbilityCosts) == 1960, "Offset mismatch for URiftGateCinematicSequence::AbilityCosts");
static_assert(offsetof(URiftGateCinematicSequence, Costs) == 1976, "Offset mismatch for URiftGateCinematicSequence::Costs");
static_assert(offsetof(URiftGateCinematicSequence, bApplyingCostsEnabled) == 1992, "Offset mismatch for URiftGateCinematicSequence::bApplyingCostsEnabled");
static_assert(offsetof(URiftGateCinematicSequence, MovementCancellationLeashLength) == 2000, "Offset mismatch for URiftGateCinematicSequence::MovementCancellationLeashLength");
static_assert(offsetof(URiftGateCinematicSequence, ExplicitCooldownDuration) == 2040, "Offset mismatch for URiftGateCinematicSequence::ExplicitCooldownDuration");
static_assert(offsetof(URiftGateCinematicSequence, ExplicitCooldownTags) == 2080, "Offset mismatch for URiftGateCinematicSequence::ExplicitCooldownTags");
static_assert(offsetof(URiftGateCinematicSequence, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for URiftGateCinematicSequence::ExplicitCooldownAssetTags");
static_assert(offsetof(URiftGateCinematicSequence, CustomFiringSequenceLength) == 2144, "Offset mismatch for URiftGateCinematicSequence::CustomFiringSequenceLength");
static_assert(offsetof(URiftGateCinematicSequence, bDisableMoveCombining) == 2148, "Offset mismatch for URiftGateCinematicSequence::bDisableMoveCombining");
static_assert(offsetof(URiftGateCinematicSequence, bForceNormalAILOD) == 2149, "Offset mismatch for URiftGateCinematicSequence::bForceNormalAILOD");
static_assert(offsetof(URiftGateCinematicSequence, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for URiftGateCinematicSequence::MinimumRequiredAILODLevel");
static_assert(offsetof(URiftGateCinematicSequence, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for URiftGateCinematicSequence::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(URiftGateCinematicSequence, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for URiftGateCinematicSequence::bUseAIFireLocationAndRotation");
static_assert(offsetof(URiftGateCinematicSequence, AIWeaponUsage) == 2160, "Offset mismatch for URiftGateCinematicSequence::AIWeaponUsage");
static_assert(offsetof(URiftGateCinematicSequence, WeaponTestApplicationTag) == 2164, "Offset mismatch for URiftGateCinematicSequence::WeaponTestApplicationTag");
static_assert(offsetof(URiftGateCinematicSequence, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for URiftGateCinematicSequence::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(URiftGateCinematicSequence, FireOffset) == 2176, "Offset mismatch for URiftGateCinematicSequence::FireOffset");
static_assert(offsetof(URiftGateCinematicSequence, ActivationNoiseRange) == 2200, "Offset mismatch for URiftGateCinematicSequence::ActivationNoiseRange");
static_assert(offsetof(URiftGateCinematicSequence, ImpactNoiseRange) == 2204, "Offset mismatch for URiftGateCinematicSequence::ImpactNoiseRange");
static_assert(offsetof(URiftGateCinematicSequence, ActivationNoiseLoudness) == 2208, "Offset mismatch for URiftGateCinematicSequence::ActivationNoiseLoudness");
static_assert(offsetof(URiftGateCinematicSequence, ImpactNoiseLoudness) == 2212, "Offset mismatch for URiftGateCinematicSequence::ImpactNoiseLoudness");
static_assert(offsetof(URiftGateCinematicSequence, ProhibitedTargetTags) == 2216, "Offset mismatch for URiftGateCinematicSequence::ProhibitedTargetTags");
static_assert(offsetof(URiftGateCinematicSequence, bLeadPawnTargets) == 2249, "Offset mismatch for URiftGateCinematicSequence::bLeadPawnTargets");
static_assert(offsetof(URiftGateCinematicSequence, DesiredThrowAngle) == 2252, "Offset mismatch for URiftGateCinematicSequence::DesiredThrowAngle");
static_assert(offsetof(URiftGateCinematicSequence, MaxYawAngleToFire) == 2256, "Offset mismatch for URiftGateCinematicSequence::MaxYawAngleToFire");
static_assert(offsetof(URiftGateCinematicSequence, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for URiftGateCinematicSequence::bClampMaxYawAngleToFire");
static_assert(offsetof(URiftGateCinematicSequence, bUseTargetActorLocation) == 2261, "Offset mismatch for URiftGateCinematicSequence::bUseTargetActorLocation");
static_assert(offsetof(URiftGateCinematicSequence, InitialAccuracyMax) == 2264, "Offset mismatch for URiftGateCinematicSequence::InitialAccuracyMax");
static_assert(offsetof(URiftGateCinematicSequence, InitialAccuracyMin) == 2268, "Offset mismatch for URiftGateCinematicSequence::InitialAccuracyMin");
static_assert(offsetof(URiftGateCinematicSequence, TargetAccuracyMax) == 2272, "Offset mismatch for URiftGateCinematicSequence::TargetAccuracyMax");
static_assert(offsetof(URiftGateCinematicSequence, TargetAccuracyMin) == 2276, "Offset mismatch for URiftGateCinematicSequence::TargetAccuracyMin");
static_assert(offsetof(URiftGateCinematicSequence, MinAccuracyDistance) == 2280, "Offset mismatch for URiftGateCinematicSequence::MinAccuracyDistance");
static_assert(offsetof(URiftGateCinematicSequence, MaxAccuracyDistance) == 2284, "Offset mismatch for URiftGateCinematicSequence::MaxAccuracyDistance");
static_assert(offsetof(URiftGateCinematicSequence, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for URiftGateCinematicSequence::AccuracyDistanceMultiplier");
static_assert(offsetof(URiftGateCinematicSequence, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for URiftGateCinematicSequence::NumUsesToReachTargetAccuracy");
static_assert(offsetof(URiftGateCinematicSequence, UseCount) == 2296, "Offset mismatch for URiftGateCinematicSequence::UseCount");
static_assert(offsetof(URiftGateCinematicSequence, bIsMobileToggle) == 2300, "Offset mismatch for URiftGateCinematicSequence::bIsMobileToggle");
static_assert(offsetof(URiftGateCinematicSequence, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for URiftGateCinematicSequence::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(URiftGateCinematicSequence, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for URiftGateCinematicSequence::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(URiftGateCinematicSequence, MontageInfo) == 2424, "Offset mismatch for URiftGateCinematicSequence::MontageInfo");
static_assert(offsetof(URiftGateCinematicSequence, PreviousMontageInfo) == 2512, "Offset mismatch for URiftGateCinematicSequence::PreviousMontageInfo");
static_assert(offsetof(URiftGateCinematicSequence, ModList) == 2600, "Offset mismatch for URiftGateCinematicSequence::ModList");
static_assert(offsetof(URiftGateCinematicSequence, AbilityWeapon) == 2616, "Offset mismatch for URiftGateCinematicSequence::AbilityWeapon");
static_assert(offsetof(URiftGateCinematicSequence, DisplayName) == 2624, "Offset mismatch for URiftGateCinematicSequence::DisplayName");
static_assert(offsetof(URiftGateCinematicSequence, Description) == 2640, "Offset mismatch for URiftGateCinematicSequence::Description");
static_assert(offsetof(URiftGateCinematicSequence, SmallPreviewImageOverride) == 2664, "Offset mismatch for URiftGateCinematicSequence::SmallPreviewImageOverride");
static_assert(offsetof(URiftGateCinematicSequence, ChargeStartTime) == 2688, "Offset mismatch for URiftGateCinematicSequence::ChargeStartTime");
static_assert(offsetof(URiftGateCinematicSequence, ChargeState) == 2696, "Offset mismatch for URiftGateCinematicSequence::ChargeState");
static_assert(offsetof(URiftGateCinematicSequence, ToolTip) == 2736, "Offset mismatch for URiftGateCinematicSequence::ToolTip");
static_assert(offsetof(URiftGateCinematicSequence, StatList) == 2744, "Offset mismatch for URiftGateCinematicSequence::StatList");
static_assert(offsetof(URiftGateCinematicSequence, ActorTrackingSettings) == 2760, "Offset mismatch for URiftGateCinematicSequence::ActorTrackingSettings");
static_assert(offsetof(URiftGateCinematicSequence, AnalyticsTags) == 2800, "Offset mismatch for URiftGateCinematicSequence::AnalyticsTags");
static_assert(offsetof(URiftGateCinematicSequence, TagChangedActions) == 2832, "Offset mismatch for URiftGateCinematicSequence::TagChangedActions");
