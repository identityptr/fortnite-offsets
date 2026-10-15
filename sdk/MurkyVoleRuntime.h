/**
 * decamp dumper generated SDK
 * Package: /Script/MurkyVoleRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MurkyVoleRuntime.MurkyVoleDrunkProjectileConfig
// Kind: ScriptStruct; super: none
struct FMurkyVoleDrunkProjectileConfig
{
public:
    void* DrunkSpeedScaleCurve; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DrunkGravityScaleCurve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float MaxRandomTurnAngle; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinRandomTurnAngle; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DirectionChangeRate; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAbovePlaneLimitation; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    float AbovePlaneDistanceThreshold; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxAngleToLoseAbovePlaneLimit; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MinAngleToLoseAbovePlaneLimit; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TargetedInitialDelay; // 0x002C (Size: 0x4, Type: FloatProperty)
    float DrunkVelocityInitialDelay; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DrunkVelocityDuration; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableDrunkTarget; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float DrunkTargetInitialDelay; // 0x003C (Size: 0x4, Type: FloatProperty)
    float DrunkTargetPositionLookaheadDist; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float StartBlendOutRange; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float FinishBlendOutRange; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TimeThresholdForBlendOutOnTime; // 0x004C (Size: 0x4, Type: FloatProperty)
    float BlendAlphaThresholdForBlendOutOnTime; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float DurationForBlendOutOnTime; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float HomingDrunkBlendOutTurnSpeed; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TurnAngleBlendOutMultiplier; // 0x005C (Size: 0x4, Type: FloatProperty)
    float DeviateStartAngle; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float DeviateEndAngle; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float DeviateMinBlendOutAlphaAddition; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float DeviateMaxBlendOutAlphaAddition; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkSpeedScaleCurve) == 0, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkSpeedScaleCurve");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkGravityScaleCurve) == 8, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkGravityScaleCurve");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, MaxRandomTurnAngle) == 16, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::MaxRandomTurnAngle");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, MinRandomTurnAngle) == 20, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::MinRandomTurnAngle");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DirectionChangeRate) == 24, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DirectionChangeRate");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, bEnableAbovePlaneLimitation) == 28, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::bEnableAbovePlaneLimitation");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, AbovePlaneDistanceThreshold) == 32, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::AbovePlaneDistanceThreshold");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, MaxAngleToLoseAbovePlaneLimit) == 36, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::MaxAngleToLoseAbovePlaneLimit");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, MinAngleToLoseAbovePlaneLimit) == 40, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::MinAngleToLoseAbovePlaneLimit");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, TargetedInitialDelay) == 44, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::TargetedInitialDelay");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkVelocityInitialDelay) == 48, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkVelocityInitialDelay");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkVelocityDuration) == 52, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkVelocityDuration");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, bEnableDrunkTarget) == 56, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::bEnableDrunkTarget");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkTargetInitialDelay) == 60, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkTargetInitialDelay");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DrunkTargetPositionLookaheadDist) == 64, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DrunkTargetPositionLookaheadDist");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, StartBlendOutRange) == 68, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::StartBlendOutRange");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, FinishBlendOutRange) == 72, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::FinishBlendOutRange");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, TimeThresholdForBlendOutOnTime) == 76, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::TimeThresholdForBlendOutOnTime");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, BlendAlphaThresholdForBlendOutOnTime) == 80, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::BlendAlphaThresholdForBlendOutOnTime");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DurationForBlendOutOnTime) == 84, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DurationForBlendOutOnTime");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, HomingDrunkBlendOutTurnSpeed) == 88, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::HomingDrunkBlendOutTurnSpeed");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, TurnAngleBlendOutMultiplier) == 92, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::TurnAngleBlendOutMultiplier");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DeviateStartAngle) == 96, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DeviateStartAngle");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DeviateEndAngle) == 100, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DeviateEndAngle");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DeviateMinBlendOutAlphaAddition) == 104, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DeviateMinBlendOutAlphaAddition");
static_assert(offsetof(FMurkyVoleDrunkProjectileConfig, DeviateMaxBlendOutAlphaAddition) == 108, "Offset mismatch for FMurkyVoleDrunkProjectileConfig::DeviateMaxBlendOutAlphaAddition");

// /Script/MurkyVoleRuntime.MurkyVoleMissileSpawnInfo
// Kind: ScriptStruct; super: none
struct FMurkyVoleMissileSpawnInfo
{
public:
    std::uint8_t TraceStart[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TraceEnd[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnRotation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> HomingTarget; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMurkyVoleMissileSpawnInfo, TraceStart) == 0, "Offset mismatch for FMurkyVoleMissileSpawnInfo::TraceStart");
static_assert(offsetof(FMurkyVoleMissileSpawnInfo, TraceEnd) == 24, "Offset mismatch for FMurkyVoleMissileSpawnInfo::TraceEnd");
static_assert(offsetof(FMurkyVoleMissileSpawnInfo, SpawnRotation) == 48, "Offset mismatch for FMurkyVoleMissileSpawnInfo::SpawnRotation");
static_assert(offsetof(FMurkyVoleMissileSpawnInfo, HomingTarget) == 72, "Offset mismatch for FMurkyVoleMissileSpawnInfo::HomingTarget");

// /Script/MurkyVoleRuntime.MurkyVoleTurretAttachment_UpdateLaserVisualsParams
// Kind: ScriptStruct; super: none
struct FMurkyVoleTurretAttachment_UpdateLaserVisualsParams
{
public:
    std::uint8_t IdleLaserOpacityParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ScanningLaserEdgeColorHostile[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScanningLaserEdgeColorFriendly[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetingLaserEdgeColorHostile[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetingLaserEdgeColorFriendly[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetingLaserCenterColorHostile[0x10]; // 0x0044 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetingLaserCenterColorFriendly[0x14]; // 0x0054 (Size: 0x14, Type: StructProperty)
    double ScannerRaysConeAngle; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserEdgeWidthEnd; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserEdgeWidthEndTargeting; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserEdgeWidthFront; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserEdgeWidthFrontTargeting; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserFalloff; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double ScannerRaysLaserFalloffTargeting; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    double IdleLaserOpacityStart; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    double IdleLaserOpacityEnd; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    double LaserCenterColorAlpha; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ScannerRaysStartingScale[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScannerRaysTargetingScale[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    double TimelineAlpha; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, IdleLaserOpacityParameterName) == 0, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::IdleLaserOpacityParameterName");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScanningLaserEdgeColorHostile) == 4, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScanningLaserEdgeColorHostile");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScanningLaserEdgeColorFriendly) == 20, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScanningLaserEdgeColorFriendly");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, TargetingLaserEdgeColorHostile) == 36, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::TargetingLaserEdgeColorHostile");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, TargetingLaserEdgeColorFriendly) == 52, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::TargetingLaserEdgeColorFriendly");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, TargetingLaserCenterColorHostile) == 68, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::TargetingLaserCenterColorHostile");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, TargetingLaserCenterColorFriendly) == 84, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::TargetingLaserCenterColorFriendly");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysConeAngle) == 104, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysConeAngle");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserEdgeWidthEnd) == 112, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserEdgeWidthEnd");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserEdgeWidthEndTargeting) == 120, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserEdgeWidthEndTargeting");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserEdgeWidthFront) == 128, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserEdgeWidthFront");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserEdgeWidthFrontTargeting) == 136, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserEdgeWidthFrontTargeting");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserFalloff) == 144, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserFalloff");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysLaserFalloffTargeting) == 152, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysLaserFalloffTargeting");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, IdleLaserOpacityStart) == 160, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::IdleLaserOpacityStart");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, IdleLaserOpacityEnd) == 168, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::IdleLaserOpacityEnd");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, LaserCenterColorAlpha) == 176, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::LaserCenterColorAlpha");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysStartingScale) == 184, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysStartingScale");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, ScannerRaysTargetingScale) == 208, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::ScannerRaysTargetingScale");
static_assert(offsetof(FMurkyVoleTurretAttachment_UpdateLaserVisualsParams, TimelineAlpha) == 232, "Offset mismatch for FMurkyVoleTurretAttachment_UpdateLaserVisualsParams::TimelineAlpha");

// /Script/MurkyVoleRuntime.FortControllerComponent_MurkyVole
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_MurkyVole
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

static_assert(offsetof(UFortControllerComponent_MurkyVole, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_MurkyVole::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_MurkyVole, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_MurkyVole::ComponentTags");
static_assert(offsetof(UFortControllerComponent_MurkyVole, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_MurkyVole::AssetUserData");
static_assert(offsetof(UFortControllerComponent_MurkyVole, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_MurkyVole::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_MurkyVole, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_MurkyVole::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_MurkyVole, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_MurkyVole::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_MurkyVole, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_MurkyVole::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_MurkyVole, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_MurkyVole::CreationMethod");
static_assert(offsetof(UFortControllerComponent_MurkyVole, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_MurkyVole::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_MurkyVole, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_MurkyVole::OnComponentDeactivated");

// /Script/MurkyVoleRuntime.FortGameplayAbility_MurkyVoleMissileManager
// Kind: Class; super: FortGameplayAbility_Action
class UFortGameplayAbility_MurkyVoleMissileManager
{
public:
    std::uint8_t Pad_0000[0xB70]; // 0x0000
    void* CurrentWeapon; // 0x0B70 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_MurkyVoleMissileManager, CurrentWeapon) == 2928, "Offset mismatch for UFortGameplayAbility_MurkyVoleMissileManager::CurrentWeapon");

// /Script/MurkyVoleRuntime.FortProjectileAthena_MurkyVole
// Kind: Class; super: FortProjectileAthena
class UFortProjectileAthena_MurkyVole
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t PawnHitResult[0xF8]; // 0x0AE0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t FireStartLoc[0x18]; // 0x0BD8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExplodeOnPawnHit; // 0x0BF0 (Size: 0x1, Type: BoolProperty)
    // 0x0BF0 BoolProperty bIgnoreActorsAttachedToFiringPawn (shared storage)
    // 0x0BF0 BoolProperty bNoCollisionForNonOwningClients (shared storage)
    // 0x0BF0 BoolProperty bUseAsyncExplosions (shared storage)
    // 0x0BF0 BoolProperty bUseAsyncExplosionsOnlyOnce (shared storage)
    std::uint8_t bEstimateCollisionForSniperTrace; // 0x0BF1 (Size: 0x1, Type: BoolProperty)
    // 0x0BF1 BoolProperty bPredictMaxSimulationDistanceExceeded (shared storage)
    // 0x0BF1 BoolProperty bProcessLocalHits (shared storage)
    // 0x0BF1 BoolProperty bProcessOnServerForFortAIControllers (shared storage)
    // 0x0BF1 BoolProperty bSkipOnTouchedEventForInitialOwnerHit (shared storage)
    // 0x0BF1 BoolProperty bTriggerTouchForAllSniperTraceHits (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0BF2
    float TimeToWaitForPawnHitBeforeKillOnServer; // 0x0BF4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0BF8
    void* PredictedHitActor; // 0x0C08 (Size: 0x8, Type: ObjectProperty)
    void* PredictedHitComp; // 0x0C10 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortProjectileAthena_MurkyVole, PawnHitResult) == 2784, "Offset mismatch for UFortProjectileAthena_MurkyVole::PawnHitResult");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, FireStartLoc) == 3032, "Offset mismatch for UFortProjectileAthena_MurkyVole::FireStartLoc");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, bExplodeOnPawnHit) == 3056, "Offset mismatch for UFortProjectileAthena_MurkyVole::bExplodeOnPawnHit");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, bEstimateCollisionForSniperTrace) == 3057, "Offset mismatch for UFortProjectileAthena_MurkyVole::bEstimateCollisionForSniperTrace");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, TimeToWaitForPawnHitBeforeKillOnServer) == 3060, "Offset mismatch for UFortProjectileAthena_MurkyVole::TimeToWaitForPawnHitBeforeKillOnServer");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, PredictedHitActor) == 3080, "Offset mismatch for UFortProjectileAthena_MurkyVole::PredictedHitActor");
static_assert(offsetof(UFortProjectileAthena_MurkyVole, PredictedHitComp) == 3088, "Offset mismatch for UFortProjectileAthena_MurkyVole::PredictedHitComp");

// /Script/MurkyVoleRuntime.FortProjectileMoveComp_DrunkMurkyVole
// Kind: Class; super: FortProjectileMoveComp_Drunk
class UFortProjectileMoveComp_DrunkMurkyVole
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t NewDrunkConfig[0x70]; // 0x0570 (Size: 0x70, Type: StructProperty)
    std::uint8_t bKeepInitialSpeed; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x05E1
    void* DrunkSpeedScaleCurve; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* DrunkGravityScaleCurve; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxRandomTurnAngle[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinRandomTurnAngle[0x28]; // 0x0620 (Size: 0x28, Type: StructProperty)
    std::uint8_t DirectionChangeRate[0x28]; // 0x0648 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableAbovePlaneLimitation[0x28]; // 0x0670 (Size: 0x28, Type: StructProperty)
    std::uint8_t AbovePlaneDistanceThreshold[0x28]; // 0x0698 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAngleToLoseAbovePlaneLimit[0x28]; // 0x06C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAngleToLoseAbovePlaneLimit[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HomingRandomTargetPositionRadius[0x28]; // 0x0710 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetedInitialDelay[0x28]; // 0x0738 (Size: 0x28, Type: StructProperty)
    std::uint8_t DrunkVelocityInitialDelay[0x28]; // 0x0760 (Size: 0x28, Type: StructProperty)
    std::uint8_t DrunkVelocityDuration[0x28]; // 0x0788 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableDrunkTarget[0x28]; // 0x07B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DrunkTargetInitialDelay[0x28]; // 0x07D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DrunkTargetPositionLookaheadDist[0x28]; // 0x0800 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartBlendOutRange[0x28]; // 0x0828 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinishBlendOutRange[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeThresholdForBlendOutOnTime[0x28]; // 0x0878 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlendAlphaThresholdForBlendOutOnTime[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DurationForBlendOutOnTime[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HomingDrunkBlendOutTurnSpeed[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnAngleBlendOutMultiplier[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeviateStartAngle[0x28]; // 0x0940 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeviateEndAngle[0x28]; // 0x0968 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeviateMinBlendOutAlphaAddition[0x28]; // 0x0990 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeviateMaxBlendOutAlphaAddition[0x1]; // 0x09B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, NewDrunkConfig) == 1392, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::NewDrunkConfig");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, bKeepInitialSpeed) == 1504, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::bKeepInitialSpeed");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkSpeedScaleCurve) == 1512, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkSpeedScaleCurve");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkGravityScaleCurve) == 1520, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkGravityScaleCurve");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, MaxRandomTurnAngle) == 1528, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::MaxRandomTurnAngle");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, MinRandomTurnAngle) == 1568, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::MinRandomTurnAngle");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DirectionChangeRate) == 1608, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DirectionChangeRate");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, EnableAbovePlaneLimitation) == 1648, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::EnableAbovePlaneLimitation");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, AbovePlaneDistanceThreshold) == 1688, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::AbovePlaneDistanceThreshold");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, MaxAngleToLoseAbovePlaneLimit) == 1728, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::MaxAngleToLoseAbovePlaneLimit");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, MinAngleToLoseAbovePlaneLimit) == 1768, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::MinAngleToLoseAbovePlaneLimit");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, HomingRandomTargetPositionRadius) == 1808, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::HomingRandomTargetPositionRadius");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, TargetedInitialDelay) == 1848, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::TargetedInitialDelay");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkVelocityInitialDelay) == 1888, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkVelocityInitialDelay");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkVelocityDuration) == 1928, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkVelocityDuration");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, bEnableDrunkTarget) == 1968, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::bEnableDrunkTarget");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkTargetInitialDelay) == 2008, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkTargetInitialDelay");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DrunkTargetPositionLookaheadDist) == 2048, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DrunkTargetPositionLookaheadDist");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, StartBlendOutRange) == 2088, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::StartBlendOutRange");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, FinishBlendOutRange) == 2128, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::FinishBlendOutRange");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, TimeThresholdForBlendOutOnTime) == 2168, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::TimeThresholdForBlendOutOnTime");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, BlendAlphaThresholdForBlendOutOnTime) == 2208, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::BlendAlphaThresholdForBlendOutOnTime");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DurationForBlendOutOnTime) == 2248, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DurationForBlendOutOnTime");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, HomingDrunkBlendOutTurnSpeed) == 2288, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::HomingDrunkBlendOutTurnSpeed");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, TurnAngleBlendOutMultiplier) == 2328, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::TurnAngleBlendOutMultiplier");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DeviateStartAngle) == 2368, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DeviateStartAngle");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DeviateEndAngle) == 2408, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DeviateEndAngle");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DeviateMinBlendOutAlphaAddition) == 2448, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DeviateMinBlendOutAlphaAddition");
static_assert(offsetof(UFortProjectileMoveComp_DrunkMurkyVole, DeviateMaxBlendOutAlphaAddition) == 2488, "Offset mismatch for UFortProjectileMoveComp_DrunkMurkyVole::DeviateMaxBlendOutAlphaAddition");

// /Script/MurkyVoleRuntime.FortWeaponRangedDual_MurkyVole
// Kind: Class; super: FortWeaponRanged
class UFortWeaponRangedDual_MurkyVole
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    FMulticastInlineDelegate OnMissileNumberChanged; // 0x2968 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MissileAmmoDefinition; // 0x2978 (Size: 0x8, Type: ObjectProperty)
    void* MissileProjectileClass; // 0x2980 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MissileGravityScale[0x28]; // 0x2988 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileMinTurnSpeed[0x28]; // 0x29B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileMaxTurnSpeed[0x28]; // 0x29D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileRampTimeForTurnSpeed[0x28]; // 0x2A00 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileLockTargetDistanceThreshold[0x28]; // 0x2A28 (Size: 0x28, Type: StructProperty)
    std::int32_t MissileFiredNumber; // 0x2A50 (Size: 0x4, Type: IntProperty)
    std::int32_t LocalMissileNumber; // 0x2A54 (Size: 0x4, Type: IntProperty)
    std::int32_t ActualMissileNumber; // 0x2A58 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, OnMissileNumberChanged) == 10600, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::OnMissileNumberChanged");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileAmmoDefinition) == 10616, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileAmmoDefinition");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileProjectileClass) == 10624, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileProjectileClass");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileGravityScale) == 10632, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileGravityScale");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileMinTurnSpeed) == 10672, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileMinTurnSpeed");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileMaxTurnSpeed) == 10712, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileMaxTurnSpeed");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileRampTimeForTurnSpeed) == 10752, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileRampTimeForTurnSpeed");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileLockTargetDistanceThreshold) == 10792, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileLockTargetDistanceThreshold");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, MissileFiredNumber) == 10832, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::MissileFiredNumber");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, LocalMissileNumber) == 10836, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::LocalMissileNumber");
static_assert(offsetof(UFortWeaponRangedDual_MurkyVole, ActualMissileNumber) == 10840, "Offset mismatch for UFortWeaponRangedDual_MurkyVole::ActualMissileNumber");

// /Script/MurkyVoleRuntime.MurkyVoleHoverLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UMurkyVoleHoverLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float LeanX; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float LeanY; // 0x1174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsHoverDash; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1179
    float HoverYawDelta; // 0x117C (Size: 0x4, Type: FloatProperty)
    float DashX; // 0x1180 (Size: 0x4, Type: FloatProperty)
    float DashY; // 0x1184 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsHoverAddArms; // 0x1188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterPostBoost; // 0x1189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x118A
    std::uint8_t CooldownTagName[0x4]; // 0x118C (Size: 0x4, Type: StructProperty)
    TArray<void*> WeaponDisplayNameSubStringsToAddArmsAnim; // 0x1190 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1; // 0x11A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoostToPostBoostRelevancyData[0x1]; // 0x11B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, LeanX) == 4464, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::LeanX");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, LeanY) == 4468, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::LeanY");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, bIsHoverDash) == 4472, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::bIsHoverDash");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, HoverYawDelta) == 4476, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::HoverYawDelta");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, DashX) == 4480, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::DashX");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, DashY) == 4484, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::DashY");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, bIsHoverAddArms) == 4488, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::bIsHoverAddArms");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, bCanEnterPostBoost) == 4489, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::bCanEnterPostBoost");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, CooldownTagName) == 4492, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::CooldownTagName");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, WeaponDisplayNameSubStringsToAddArmsAnim) == 4496, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::WeaponDisplayNameSubStringsToAddArmsAnim");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1) == 4512, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1");
static_assert(offsetof(UMurkyVoleHoverLayerAnimInstance, BoostToPostBoostRelevancyData) == 4528, "Offset mismatch for UMurkyVoleHoverLayerAnimInstance::BoostToPostBoostRelevancyData");

// /Script/MurkyVoleRuntime.MurkyVolePackCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UMurkyVolePackCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t bHasHoverJets; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasMissileSwarm; // 0x0631 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTurret; // 0x0632 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActiveMissileSwarm; // 0x0633 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActiveHover; // 0x0634 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0635
    float LeanX; // 0x0638 (Size: 0x4, Type: FloatProperty)
    float LeanY; // 0x063C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsHoverDash; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0641
    std::uint8_t AimRotationCurrent[0x18]; // 0x0648 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsWindUp; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWindDown; // 0x0661 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0662
    std::uint8_t PlayerAimRotation[0x18]; // 0x0668 (Size: 0x18, Type: StructProperty)
    std::uint8_t TurretAimRotation[0x18]; // 0x0680 (Size: 0x18, Type: StructProperty)
    std::uint8_t AdjustedRocketPodRot[0x18]; // 0x0698 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsTurretFire; // 0x06B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurretReFire; // 0x06B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x06B2
    float TurretRailOffset; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAutoTargetOff; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAshtonShieldBlocking; // 0x06B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCrouchMoving; // 0x06BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPawnSpeed2DAboveThreshold; // 0x06BB (Size: 0x1, Type: BoolProperty)
    float TurretPitchOffset; // 0x06BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t HoverJetsTagName[0x4]; // 0x06C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MissileSwarmTagName[0x4]; // 0x06C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t TurretTagName[0x4]; // 0x06C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveTagName[0x4]; // 0x06CC (Size: 0x4, Type: StructProperty)
    std::uint8_t CooldownTagName[0x4]; // 0x06D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ShotFiredTagName[0x4]; // 0x06D4 (Size: 0x4, Type: StructProperty)
    void* MurkyVoleGameplayGameDataCurveTable; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bHasHoverJets) == 1584, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bHasHoverJets");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bHasMissileSwarm) == 1585, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bHasMissileSwarm");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bHasTurret) == 1586, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bHasTurret");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsActiveMissileSwarm) == 1587, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsActiveMissileSwarm");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsActiveHover) == 1588, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsActiveHover");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, LeanX) == 1592, "Offset mismatch for UMurkyVolePackCCPAnimInstance::LeanX");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, LeanY) == 1596, "Offset mismatch for UMurkyVolePackCCPAnimInstance::LeanY");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsHoverDash) == 1600, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsHoverDash");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, AimRotationCurrent) == 1608, "Offset mismatch for UMurkyVolePackCCPAnimInstance::AimRotationCurrent");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsWindUp) == 1632, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsWindUp");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsWindDown) == 1633, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsWindDown");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, PlayerAimRotation) == 1640, "Offset mismatch for UMurkyVolePackCCPAnimInstance::PlayerAimRotation");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, TurretAimRotation) == 1664, "Offset mismatch for UMurkyVolePackCCPAnimInstance::TurretAimRotation");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, AdjustedRocketPodRot) == 1688, "Offset mismatch for UMurkyVolePackCCPAnimInstance::AdjustedRocketPodRot");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsTurretFire) == 1712, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsTurretFire");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsTurretReFire) == 1713, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsTurretReFire");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, TurretRailOffset) == 1716, "Offset mismatch for UMurkyVolePackCCPAnimInstance::TurretRailOffset");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsAutoTargetOff) == 1720, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsAutoTargetOff");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsAshtonShieldBlocking) == 1721, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsAshtonShieldBlocking");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsCrouchMoving) == 1722, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsCrouchMoving");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, bIsPawnSpeed2DAboveThreshold) == 1723, "Offset mismatch for UMurkyVolePackCCPAnimInstance::bIsPawnSpeed2DAboveThreshold");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, TurretPitchOffset) == 1724, "Offset mismatch for UMurkyVolePackCCPAnimInstance::TurretPitchOffset");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, HoverJetsTagName) == 1728, "Offset mismatch for UMurkyVolePackCCPAnimInstance::HoverJetsTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, MissileSwarmTagName) == 1732, "Offset mismatch for UMurkyVolePackCCPAnimInstance::MissileSwarmTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, TurretTagName) == 1736, "Offset mismatch for UMurkyVolePackCCPAnimInstance::TurretTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, ActiveTagName) == 1740, "Offset mismatch for UMurkyVolePackCCPAnimInstance::ActiveTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, CooldownTagName) == 1744, "Offset mismatch for UMurkyVolePackCCPAnimInstance::CooldownTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, ShotFiredTagName) == 1748, "Offset mismatch for UMurkyVolePackCCPAnimInstance::ShotFiredTagName");
static_assert(offsetof(UMurkyVolePackCCPAnimInstance, MurkyVoleGameplayGameDataCurveTable) == 1752, "Offset mismatch for UMurkyVolePackCCPAnimInstance::MurkyVoleGameplayGameDataCurveTable");

// /Script/MurkyVoleRuntime.MurkyVoleTurretAttachment
// Kind: Class; super: Actor
class UMurkyVoleTurretAttachment
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TMap<void*, void*> PlayerPawnTargetTagToPctCapsuleHalfHeightZOffset; // 0x0270 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> NonPlayerPawnTargetTagToZOffsetMap; // 0x0280 (Size: 0x10, Type: MapProperty)
    std::uint8_t AimRotation_Server[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    std::uint8_t AimRotation_Client[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetActorLastKnownLocation[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScannerRays_TargetingScale[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector_AimSourceLocationOffset[0x18]; // 0x02F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Vector_AimSourceLocationOffset_Crouch[0x18]; // 0x0308 (Size: 0x18, Type: StructProperty)
    std::uint8_t Row_PlayerPctCapsuleHalfHeightOffset_Default[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_LaserMaxRange[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_LaserDistanceMulti[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    double ScannerRays_LastScaleUpdateTime; // 0x0398 (Size: 0x8, Type: DoubleProperty)
    double ScannerRays_ScaleUpdateInterval; // 0x03A0 (Size: 0x8, Type: DoubleProperty)
    double ScannerRays_ScaleUpdateInterpSpeed; // 0x03A8 (Size: 0x8, Type: DoubleProperty)
    void* TargetActor; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bForceLaserOnWhileAttacking; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTargetIsObstructed; // 0x03B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6E]; // 0x03BA
    std::uint8_t NativeCrouchTag[0x4]; // 0x0428 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeBackpackAttachSocket[0x4]; // 0x042C (Size: 0x4, Type: NameProperty)
    std::uint8_t NativePitchSpeed[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeYawSpeed[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    double NativeBigPitchRangeMin; // 0x0480 (Size: 0x8, Type: DoubleProperty)
    double NativeBigPitchRangeMax; // 0x0488 (Size: 0x8, Type: DoubleProperty)
    double NativeBigYawRangeMin; // 0x0490 (Size: 0x8, Type: DoubleProperty)
    double NativeBigYawRangeMax; // 0x0498 (Size: 0x8, Type: DoubleProperty)
    double NativeSmallYawRangeMin; // 0x04A0 (Size: 0x8, Type: DoubleProperty)
    double NativeSmallYawRangeMax; // 0x04A8 (Size: 0x8, Type: DoubleProperty)
    float NativeBigTimerRangeMin; // 0x04B0 (Size: 0x4, Type: FloatProperty)
    float NativeBigTimerRangeMax; // 0x04B4 (Size: 0x4, Type: FloatProperty)
    float NativeSmallTimerRangeMin; // 0x04B8 (Size: 0x4, Type: FloatProperty)
    float NativeSmallTimerRangeMax; // 0x04BC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMurkyVoleTurretAttachment, PlayerPawnTargetTagToPctCapsuleHalfHeightZOffset) == 624, "Offset mismatch for UMurkyVoleTurretAttachment::PlayerPawnTargetTagToPctCapsuleHalfHeightZOffset");
static_assert(offsetof(UMurkyVoleTurretAttachment, NonPlayerPawnTargetTagToZOffsetMap) == 640, "Offset mismatch for UMurkyVoleTurretAttachment::NonPlayerPawnTargetTagToZOffsetMap");
static_assert(offsetof(UMurkyVoleTurretAttachment, AimRotation_Server) == 656, "Offset mismatch for UMurkyVoleTurretAttachment::AimRotation_Server");
static_assert(offsetof(UMurkyVoleTurretAttachment, AimRotation_Client) == 680, "Offset mismatch for UMurkyVoleTurretAttachment::AimRotation_Client");
static_assert(offsetof(UMurkyVoleTurretAttachment, TargetActorLastKnownLocation) == 704, "Offset mismatch for UMurkyVoleTurretAttachment::TargetActorLastKnownLocation");
static_assert(offsetof(UMurkyVoleTurretAttachment, ScannerRays_TargetingScale) == 728, "Offset mismatch for UMurkyVoleTurretAttachment::ScannerRays_TargetingScale");
static_assert(offsetof(UMurkyVoleTurretAttachment, Vector_AimSourceLocationOffset) == 752, "Offset mismatch for UMurkyVoleTurretAttachment::Vector_AimSourceLocationOffset");
static_assert(offsetof(UMurkyVoleTurretAttachment, Vector_AimSourceLocationOffset_Crouch) == 776, "Offset mismatch for UMurkyVoleTurretAttachment::Vector_AimSourceLocationOffset_Crouch");
static_assert(offsetof(UMurkyVoleTurretAttachment, Row_PlayerPctCapsuleHalfHeightOffset_Default) == 800, "Offset mismatch for UMurkyVoleTurretAttachment::Row_PlayerPctCapsuleHalfHeightOffset_Default");
static_assert(offsetof(UMurkyVoleTurretAttachment, Row_LaserMaxRange) == 840, "Offset mismatch for UMurkyVoleTurretAttachment::Row_LaserMaxRange");
static_assert(offsetof(UMurkyVoleTurretAttachment, Row_LaserDistanceMulti) == 880, "Offset mismatch for UMurkyVoleTurretAttachment::Row_LaserDistanceMulti");
static_assert(offsetof(UMurkyVoleTurretAttachment, ScannerRays_LastScaleUpdateTime) == 920, "Offset mismatch for UMurkyVoleTurretAttachment::ScannerRays_LastScaleUpdateTime");
static_assert(offsetof(UMurkyVoleTurretAttachment, ScannerRays_ScaleUpdateInterval) == 928, "Offset mismatch for UMurkyVoleTurretAttachment::ScannerRays_ScaleUpdateInterval");
static_assert(offsetof(UMurkyVoleTurretAttachment, ScannerRays_ScaleUpdateInterpSpeed) == 936, "Offset mismatch for UMurkyVoleTurretAttachment::ScannerRays_ScaleUpdateInterpSpeed");
static_assert(offsetof(UMurkyVoleTurretAttachment, TargetActor) == 944, "Offset mismatch for UMurkyVoleTurretAttachment::TargetActor");
static_assert(offsetof(UMurkyVoleTurretAttachment, bForceLaserOnWhileAttacking) == 952, "Offset mismatch for UMurkyVoleTurretAttachment::bForceLaserOnWhileAttacking");
static_assert(offsetof(UMurkyVoleTurretAttachment, bTargetIsObstructed) == 953, "Offset mismatch for UMurkyVoleTurretAttachment::bTargetIsObstructed");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeCrouchTag) == 1064, "Offset mismatch for UMurkyVoleTurretAttachment::NativeCrouchTag");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBackpackAttachSocket) == 1068, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBackpackAttachSocket");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativePitchSpeed) == 1072, "Offset mismatch for UMurkyVoleTurretAttachment::NativePitchSpeed");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeYawSpeed) == 1112, "Offset mismatch for UMurkyVoleTurretAttachment::NativeYawSpeed");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigPitchRangeMin) == 1152, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigPitchRangeMin");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigPitchRangeMax) == 1160, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigPitchRangeMax");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigYawRangeMin) == 1168, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigYawRangeMin");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigYawRangeMax) == 1176, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigYawRangeMax");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeSmallYawRangeMin) == 1184, "Offset mismatch for UMurkyVoleTurretAttachment::NativeSmallYawRangeMin");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeSmallYawRangeMax) == 1192, "Offset mismatch for UMurkyVoleTurretAttachment::NativeSmallYawRangeMax");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigTimerRangeMin) == 1200, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigTimerRangeMin");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeBigTimerRangeMax) == 1204, "Offset mismatch for UMurkyVoleTurretAttachment::NativeBigTimerRangeMax");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeSmallTimerRangeMin) == 1208, "Offset mismatch for UMurkyVoleTurretAttachment::NativeSmallTimerRangeMin");
static_assert(offsetof(UMurkyVoleTurretAttachment, NativeSmallTimerRangeMax) == 1212, "Offset mismatch for UMurkyVoleTurretAttachment::NativeSmallTimerRangeMax");

// /Script/MurkyVoleRuntime.MurkyVoleTurretAttachmentActorInterface
// Kind: Class; super: Interface
class UMurkyVoleTurretAttachmentActorInterface
{
public:
    std::uint8_t Opaque[1];
};
