/**
 * decamp dumper generated SDK
 * Package: /Script/TowHookWeaponRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TowHookWeaponRuntime.FortMovementMode_TetheredCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_TetheredCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> TetheredActor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LocalTetherLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Projectile; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bAutoReelIn; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_TetheredCreationData, TetheredActor) == 16, "Offset mismatch for FFortMovementMode_TetheredCreationData::TetheredActor");
static_assert(offsetof(FFortMovementMode_TetheredCreationData, LocalTetherLocation) == 24, "Offset mismatch for FFortMovementMode_TetheredCreationData::LocalTetherLocation");
static_assert(offsetof(FFortMovementMode_TetheredCreationData, Projectile) == 48, "Offset mismatch for FFortMovementMode_TetheredCreationData::Projectile");
static_assert(offsetof(FFortMovementMode_TetheredCreationData, bAutoReelIn) == 56, "Offset mismatch for FFortMovementMode_TetheredCreationData::bAutoReelIn");

// /Script/TowHookWeaponRuntime.ReplicatedRopeData
// Kind: ScriptStruct; super: none
struct FReplicatedRopeData
{
public:
    TWeakObjectPtr<void> Projectile; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TetheredActor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LocalTetherLocation[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedRopeData, Projectile) == 0, "Offset mismatch for FReplicatedRopeData::Projectile");
static_assert(offsetof(FReplicatedRopeData, TetheredActor) == 8, "Offset mismatch for FReplicatedRopeData::TetheredActor");
static_assert(offsetof(FReplicatedRopeData, LocalTetherLocation) == 16, "Offset mismatch for FReplicatedRopeData::LocalTetherLocation");

// /Script/TowHookWeaponRuntime.TowHookWeaponTargetInfo
// Kind: ScriptStruct; super: none
struct FTowHookWeaponTargetInfo
{
public:
    std::uint8_t bHitTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> TargetActor; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetComponent; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t TargetPoint[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float HitDistance; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTowHookWeaponTargetInfo, bHitTarget) == 0, "Offset mismatch for FTowHookWeaponTargetInfo::bHitTarget");
static_assert(offsetof(FTowHookWeaponTargetInfo, TargetActor) == 4, "Offset mismatch for FTowHookWeaponTargetInfo::TargetActor");
static_assert(offsetof(FTowHookWeaponTargetInfo, TargetComponent) == 12, "Offset mismatch for FTowHookWeaponTargetInfo::TargetComponent");
static_assert(offsetof(FTowHookWeaponTargetInfo, TargetPoint) == 24, "Offset mismatch for FTowHookWeaponTargetInfo::TargetPoint");
static_assert(offsetof(FTowHookWeaponTargetInfo, HitDistance) == 48, "Offset mismatch for FTowHookWeaponTargetInfo::HitDistance");

// /Script/TowHookWeaponRuntime.TowHookWeaponTargetingConfig
// Kind: ScriptStruct; super: none
struct FTowHookWeaponTargetingConfig
{
public:
    std::uint8_t PrimarySearchDistance[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t PrimarySearchStartDistance[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t SecondarySearchDistance[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t PrimarySearchRadius[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t SecondarySearchRadius[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    TArray<void*> TraceObjectTypes; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AutoTargetZOffset[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HookRange[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTowHookWeaponTargetingConfig, PrimarySearchDistance) == 0, "Offset mismatch for FTowHookWeaponTargetingConfig::PrimarySearchDistance");
static_assert(offsetof(FTowHookWeaponTargetingConfig, PrimarySearchStartDistance) == 40, "Offset mismatch for FTowHookWeaponTargetingConfig::PrimarySearchStartDistance");
static_assert(offsetof(FTowHookWeaponTargetingConfig, SecondarySearchDistance) == 80, "Offset mismatch for FTowHookWeaponTargetingConfig::SecondarySearchDistance");
static_assert(offsetof(FTowHookWeaponTargetingConfig, PrimarySearchRadius) == 120, "Offset mismatch for FTowHookWeaponTargetingConfig::PrimarySearchRadius");
static_assert(offsetof(FTowHookWeaponTargetingConfig, SecondarySearchRadius) == 160, "Offset mismatch for FTowHookWeaponTargetingConfig::SecondarySearchRadius");
static_assert(offsetof(FTowHookWeaponTargetingConfig, TraceObjectTypes) == 200, "Offset mismatch for FTowHookWeaponTargetingConfig::TraceObjectTypes");
static_assert(offsetof(FTowHookWeaponTargetingConfig, AutoTargetZOffset) == 216, "Offset mismatch for FTowHookWeaponTargetingConfig::AutoTargetZOffset");
static_assert(offsetof(FTowHookWeaponTargetingConfig, HookRange) == 256, "Offset mismatch for FTowHookWeaponTargetingConfig::HookRange");

// /Script/TowHookWeaponRuntime.FortMovementMode_ExtLogicTethered
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicTethered
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t LocationTolerance[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultTetherDistance[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTetherDistance[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t AutoReelOutTetherDistance[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTetherDistance[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t TetherReelAccel[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerLateralAccel[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerLateralAccelMultiplierMinSpeed[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerLateralAccelMultiplierMaxSpeed[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerLateralAccelMultiplierMinMultiplier[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerLateralAccelMultiplierMaxMultiplier[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundedFriction[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t GroundedBrakingDeceleration[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinGroundFrictionMultiplier[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxGroundFrictionMultiplier[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrictionMultiplierDistance[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpVelocity[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t TetherSnapDistance[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxStuckTime[0x28]; // 0x0488 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanReelIn[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanReelOut[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInSpeed[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelOutSpeed[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    void* ReelInSpeedOverTimeMultiplier; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* ReelOutSpeedOverTimeMultiplier; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReelInDeadZone[0x28]; // 0x0560 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInCatchupMinSpeed[0x28]; // 0x0588 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInCatchupSpeedMultiplier[0x28]; // 0x05B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInCatchupMinDistance[0x28]; // 0x05D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanMount[0x28]; // 0x0600 (Size: 0x28, Type: StructProperty)
    std::uint8_t MountMovementTolerance[0x28]; // 0x0628 (Size: 0x28, Type: StructProperty)
    std::uint8_t MountAllowList[0x20]; // 0x0650 (Size: 0x20, Type: StructProperty)
    std::uint8_t MountDenyList[0x20]; // 0x0670 (Size: 0x20, Type: StructProperty)
    std::uint8_t MountApexHeight[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeToMount[0x28]; // 0x06B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MountTargetOffset[0x18]; // 0x06E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t MountingLateralVelocityLimiter[0x28]; // 0x06F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MountingUpwardVelocityLimiter[0x28]; // 0x0720 (Size: 0x28, Type: StructProperty)
    std::uint8_t MountingDownwardVelocityLimiter[0x28]; // 0x0748 (Size: 0x28, Type: StructProperty)
    std::uint8_t WalkingSpeedThreshold[0x28]; // 0x0770 (Size: 0x28, Type: StructProperty)
    std::uint8_t WalkingTimeThreshold[0x28]; // 0x0798 (Size: 0x28, Type: StructProperty)
    std::uint8_t WalkingTetherSnapDistance[0x28]; // 0x07C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TetheredActorMinReEnterVelocity[0x28]; // 0x07E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TetheredBlockedTags[0x20]; // 0x0810 (Size: 0x20, Type: StructProperty)
    std::uint8_t MountColliderBoundsExtentsBuffer[0x18]; // 0x0830 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterBobMinSpeed[0x28]; // 0x0848 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaterGravityMultiplier[0x28]; // 0x0870 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaterBobTargetImmersionDepth[0x28]; // 0x0898 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeTraceBackwardsOffset[0x28]; // 0x08C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeTraceStartZOffset[0x28]; // 0x08E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeTraceEndZOffset[0x1]; // 0x0910 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicTethered, LocationTolerance) == 440, "Offset mismatch for UFortMovementMode_ExtLogicTethered::LocationTolerance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, DefaultTetherDistance) == 480, "Offset mismatch for UFortMovementMode_ExtLogicTethered::DefaultTetherDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MinTetherDistance) == 520, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MinTetherDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, AutoReelOutTetherDistance) == 560, "Offset mismatch for UFortMovementMode_ExtLogicTethered::AutoReelOutTetherDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MaxTetherDistance) == 600, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MaxTetherDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, TetherReelAccel) == 640, "Offset mismatch for UFortMovementMode_ExtLogicTethered::TetherReelAccel");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, PlayerLateralAccel) == 680, "Offset mismatch for UFortMovementMode_ExtLogicTethered::PlayerLateralAccel");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, PlayerLateralAccelMultiplierMinSpeed) == 720, "Offset mismatch for UFortMovementMode_ExtLogicTethered::PlayerLateralAccelMultiplierMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, PlayerLateralAccelMultiplierMaxSpeed) == 760, "Offset mismatch for UFortMovementMode_ExtLogicTethered::PlayerLateralAccelMultiplierMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, PlayerLateralAccelMultiplierMinMultiplier) == 800, "Offset mismatch for UFortMovementMode_ExtLogicTethered::PlayerLateralAccelMultiplierMinMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, PlayerLateralAccelMultiplierMaxMultiplier) == 840, "Offset mismatch for UFortMovementMode_ExtLogicTethered::PlayerLateralAccelMultiplierMaxMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, GroundedFriction) == 880, "Offset mismatch for UFortMovementMode_ExtLogicTethered::GroundedFriction");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, GroundedBrakingDeceleration) == 920, "Offset mismatch for UFortMovementMode_ExtLogicTethered::GroundedBrakingDeceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MinGroundFrictionMultiplier) == 960, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MinGroundFrictionMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MaxGroundFrictionMultiplier) == 1000, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MaxGroundFrictionMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, FrictionMultiplierDistance) == 1040, "Offset mismatch for UFortMovementMode_ExtLogicTethered::FrictionMultiplierDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, JumpVelocity) == 1080, "Offset mismatch for UFortMovementMode_ExtLogicTethered::JumpVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, TetherSnapDistance) == 1120, "Offset mismatch for UFortMovementMode_ExtLogicTethered::TetherSnapDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MaxStuckTime) == 1160, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MaxStuckTime");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, CanReelIn) == 1200, "Offset mismatch for UFortMovementMode_ExtLogicTethered::CanReelIn");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, CanReelOut) == 1240, "Offset mismatch for UFortMovementMode_ExtLogicTethered::CanReelOut");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInSpeed) == 1280, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelOutSpeed) == 1320, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelOutSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInSpeedOverTimeMultiplier) == 1360, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInSpeedOverTimeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelOutSpeedOverTimeMultiplier) == 1368, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelOutSpeedOverTimeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInDeadZone) == 1376, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInDeadZone");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInCatchupMinSpeed) == 1416, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInCatchupMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInCatchupSpeedMultiplier) == 1456, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInCatchupSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, ReelInCatchupMinDistance) == 1496, "Offset mismatch for UFortMovementMode_ExtLogicTethered::ReelInCatchupMinDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, CanMount) == 1536, "Offset mismatch for UFortMovementMode_ExtLogicTethered::CanMount");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountMovementTolerance) == 1576, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountMovementTolerance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountAllowList) == 1616, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountAllowList");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountDenyList) == 1648, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountDenyList");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountApexHeight) == 1680, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountApexHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, TimeToMount) == 1720, "Offset mismatch for UFortMovementMode_ExtLogicTethered::TimeToMount");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountTargetOffset) == 1760, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountTargetOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountingLateralVelocityLimiter) == 1784, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountingLateralVelocityLimiter");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountingUpwardVelocityLimiter) == 1824, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountingUpwardVelocityLimiter");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountingDownwardVelocityLimiter) == 1864, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountingDownwardVelocityLimiter");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WalkingSpeedThreshold) == 1904, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WalkingSpeedThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WalkingTimeThreshold) == 1944, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WalkingTimeThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WalkingTetherSnapDistance) == 1984, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WalkingTetherSnapDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, TetheredActorMinReEnterVelocity) == 2024, "Offset mismatch for UFortMovementMode_ExtLogicTethered::TetheredActorMinReEnterVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, TetheredBlockedTags) == 2064, "Offset mismatch for UFortMovementMode_ExtLogicTethered::TetheredBlockedTags");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, MountColliderBoundsExtentsBuffer) == 2096, "Offset mismatch for UFortMovementMode_ExtLogicTethered::MountColliderBoundsExtentsBuffer");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WaterBobMinSpeed) == 2120, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WaterBobMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WaterGravityMultiplier) == 2160, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WaterGravityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, WaterBobTargetImmersionDepth) == 2200, "Offset mismatch for UFortMovementMode_ExtLogicTethered::WaterBobTargetImmersionDepth");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, LedgeTraceBackwardsOffset) == 2240, "Offset mismatch for UFortMovementMode_ExtLogicTethered::LedgeTraceBackwardsOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, LedgeTraceStartZOffset) == 2280, "Offset mismatch for UFortMovementMode_ExtLogicTethered::LedgeTraceStartZOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicTethered, LedgeTraceEndZOffset) == 2320, "Offset mismatch for UFortMovementMode_ExtLogicTethered::LedgeTraceEndZOffset");

// /Script/TowHookWeaponRuntime.FortMovementMode_TetheredRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_TetheredRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> NetTetheredActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0040
    std::uint8_t NetLocalTetherLocation[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> NetProjectile; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x00C0
    std::uint8_t bGrounded; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMountingTarget; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInWater; // 0x00C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1C]; // 0x00C4
    std::uint8_t State; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndReason; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xC2]; // 0x00E2
    float TimeAtSlowSpeed; // 0x01A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, NetTetheredActor) == 56, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::NetTetheredActor");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, NetLocalTetherLocation) == 136, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::NetLocalTetherLocation");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, NetProjectile) == 184, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::NetProjectile");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, bGrounded) == 193, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::bGrounded");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, bMountingTarget) == 194, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::bMountingTarget");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, bIsInWater) == 195, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::bIsInWater");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, State) == 224, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::State");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, EndReason) == 225, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::EndReason");
static_assert(offsetof(UFortMovementMode_TetheredRuntimeData, TimeAtSlowSpeed) == 420, "Offset mismatch for UFortMovementMode_TetheredRuntimeData::TimeAtSlowSpeed");

// /Script/TowHookWeaponRuntime.FortPawnComponent_TetheredMovement
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_TetheredMovement
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnGroundedStateChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWaterStateChanged; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TetheredMovementModeExtension; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    void* TetherRopeMesh; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* TetherRopeMaterial; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PawnTetherRopeSocket[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    std::uint8_t RopeMaterialWiggleParameter[0x4]; // 0x0104 (Size: 0x4, Type: NameProperty)
    float RopeMaterialWiggleValue; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float PawnTetherRopeZOffset; // 0x010C (Size: 0x4, Type: FloatProperty)
    FName ProjectileTetherRopeSocket; // 0x0110 (Size: 0x8, Type: NameProperty)
    std::uint8_t ReplicatedRopeData[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    void* TetherRopeComp; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_TetheredMovement, OnGroundedStateChanged) == 200, "Offset mismatch for UFortPawnComponent_TetheredMovement::OnGroundedStateChanged");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, OnWaterStateChanged) == 216, "Offset mismatch for UFortPawnComponent_TetheredMovement::OnWaterStateChanged");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, TetheredMovementModeExtension) == 232, "Offset mismatch for UFortPawnComponent_TetheredMovement::TetheredMovementModeExtension");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, TetherRopeMesh) == 240, "Offset mismatch for UFortPawnComponent_TetheredMovement::TetherRopeMesh");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, TetherRopeMaterial) == 248, "Offset mismatch for UFortPawnComponent_TetheredMovement::TetherRopeMaterial");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, PawnTetherRopeSocket) == 256, "Offset mismatch for UFortPawnComponent_TetheredMovement::PawnTetherRopeSocket");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, RopeMaterialWiggleParameter) == 260, "Offset mismatch for UFortPawnComponent_TetheredMovement::RopeMaterialWiggleParameter");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, RopeMaterialWiggleValue) == 264, "Offset mismatch for UFortPawnComponent_TetheredMovement::RopeMaterialWiggleValue");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, PawnTetherRopeZOffset) == 268, "Offset mismatch for UFortPawnComponent_TetheredMovement::PawnTetherRopeZOffset");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, ProjectileTetherRopeSocket) == 272, "Offset mismatch for UFortPawnComponent_TetheredMovement::ProjectileTetherRopeSocket");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, ReplicatedRopeData) == 280, "Offset mismatch for UFortPawnComponent_TetheredMovement::ReplicatedRopeData");
static_assert(offsetof(UFortPawnComponent_TetheredMovement, TetherRopeComp) == 328, "Offset mismatch for UFortPawnComponent_TetheredMovement::TetherRopeComp");

// /Script/TowHookWeaponRuntime.TowHookCameraModifier
// Kind: Class; super: CameraModifier
class UTowHookCameraModifier
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CameraOffsetBlendInSeconds[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraOffsetBlendOutSeconds[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraFovBlendInSeconds[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraFovBlendOutSeconds[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAdditionalFov[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAdditionalFov[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraOffsetX[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraOffsetY[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraOffsetZ[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTowHookCameraModifier, CameraOffsetBlendInSeconds) == 72, "Offset mismatch for UTowHookCameraModifier::CameraOffsetBlendInSeconds");
static_assert(offsetof(UTowHookCameraModifier, CameraOffsetBlendOutSeconds) == 112, "Offset mismatch for UTowHookCameraModifier::CameraOffsetBlendOutSeconds");
static_assert(offsetof(UTowHookCameraModifier, CameraFovBlendInSeconds) == 152, "Offset mismatch for UTowHookCameraModifier::CameraFovBlendInSeconds");
static_assert(offsetof(UTowHookCameraModifier, CameraFovBlendOutSeconds) == 192, "Offset mismatch for UTowHookCameraModifier::CameraFovBlendOutSeconds");
static_assert(offsetof(UTowHookCameraModifier, MinAdditionalFov) == 232, "Offset mismatch for UTowHookCameraModifier::MinAdditionalFov");
static_assert(offsetof(UTowHookCameraModifier, MaxAdditionalFov) == 272, "Offset mismatch for UTowHookCameraModifier::MaxAdditionalFov");
static_assert(offsetof(UTowHookCameraModifier, CameraOffsetX) == 312, "Offset mismatch for UTowHookCameraModifier::CameraOffsetX");
static_assert(offsetof(UTowHookCameraModifier, CameraOffsetY) == 352, "Offset mismatch for UTowHookCameraModifier::CameraOffsetY");
static_assert(offsetof(UTowHookCameraModifier, CameraOffsetZ) == 392, "Offset mismatch for UTowHookCameraModifier::CameraOffsetZ");

// /Script/TowHookWeaponRuntime.TowHookLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UTowHookLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsTethered; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTetheredJumping; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1172
    float TetheredDirection; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float TetheredSpeed; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsRightLean; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeftLean; // 0x117D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAnyLean; // 0x117E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x117F
    float NoisePlayRate; // 0x1180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsForward; // 0x1184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBack; // 0x1185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeft; // 0x1186 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRight; // 0x1187 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsYank; // 0x1188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsYankWeak; // 0x1189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsYankStrong; // 0x118A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x118B
    float TetherLateralAccel; // 0x118C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAttachWait; // 0x1190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMounting; // 0x1191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAltMount; // 0x1192 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x1193
    std::int32_t JumpPicker; // 0x1194 (Size: 0x4, Type: IntProperty)
    float LeanCurve; // 0x1198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAdditiveLeans; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackwardLean; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsForwardLean; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x119F
    std::int32_t PoseShift; // 0x11A0 (Size: 0x4, Type: IntProperty)
    std::int32_t NoisePicker; // 0x11A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBackOrLeftOrRight; // 0x11A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x11A9
    float YankInAirAlpha; // 0x11AC (Size: 0x4, Type: FloatProperty)
    float AttachFullBodyAlpha; // 0x11B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAttachSlow; // 0x11B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAttachFast; // 0x11B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x11B6
    std::uint8_t PlayerTetheredTagName[0x4]; // 0x11B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t WaterTagName[0x1]; // 0x11BC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTowHookLayerAnimInstance, bIsTethered) == 4464, "Offset mismatch for UTowHookLayerAnimInstance::bIsTethered");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsTetheredJumping) == 4465, "Offset mismatch for UTowHookLayerAnimInstance::bIsTetheredJumping");
static_assert(offsetof(UTowHookLayerAnimInstance, TetheredDirection) == 4468, "Offset mismatch for UTowHookLayerAnimInstance::TetheredDirection");
static_assert(offsetof(UTowHookLayerAnimInstance, TetheredSpeed) == 4472, "Offset mismatch for UTowHookLayerAnimInstance::TetheredSpeed");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsRightLean) == 4476, "Offset mismatch for UTowHookLayerAnimInstance::bIsRightLean");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsLeftLean) == 4477, "Offset mismatch for UTowHookLayerAnimInstance::bIsLeftLean");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAnyLean) == 4478, "Offset mismatch for UTowHookLayerAnimInstance::bIsAnyLean");
static_assert(offsetof(UTowHookLayerAnimInstance, NoisePlayRate) == 4480, "Offset mismatch for UTowHookLayerAnimInstance::NoisePlayRate");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsForward) == 4484, "Offset mismatch for UTowHookLayerAnimInstance::bIsForward");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsBack) == 4485, "Offset mismatch for UTowHookLayerAnimInstance::bIsBack");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsLeft) == 4486, "Offset mismatch for UTowHookLayerAnimInstance::bIsLeft");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsRight) == 4487, "Offset mismatch for UTowHookLayerAnimInstance::bIsRight");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsYank) == 4488, "Offset mismatch for UTowHookLayerAnimInstance::bIsYank");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsYankWeak) == 4489, "Offset mismatch for UTowHookLayerAnimInstance::bIsYankWeak");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsYankStrong) == 4490, "Offset mismatch for UTowHookLayerAnimInstance::bIsYankStrong");
static_assert(offsetof(UTowHookLayerAnimInstance, TetherLateralAccel) == 4492, "Offset mismatch for UTowHookLayerAnimInstance::TetherLateralAccel");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAttachWait) == 4496, "Offset mismatch for UTowHookLayerAnimInstance::bIsAttachWait");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsMounting) == 4497, "Offset mismatch for UTowHookLayerAnimInstance::bIsMounting");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAltMount) == 4498, "Offset mismatch for UTowHookLayerAnimInstance::bIsAltMount");
static_assert(offsetof(UTowHookLayerAnimInstance, JumpPicker) == 4500, "Offset mismatch for UTowHookLayerAnimInstance::JumpPicker");
static_assert(offsetof(UTowHookLayerAnimInstance, LeanCurve) == 4504, "Offset mismatch for UTowHookLayerAnimInstance::LeanCurve");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAdditiveLeans) == 4508, "Offset mismatch for UTowHookLayerAnimInstance::bIsAdditiveLeans");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsBackwardLean) == 4509, "Offset mismatch for UTowHookLayerAnimInstance::bIsBackwardLean");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsForwardLean) == 4510, "Offset mismatch for UTowHookLayerAnimInstance::bIsForwardLean");
static_assert(offsetof(UTowHookLayerAnimInstance, PoseShift) == 4512, "Offset mismatch for UTowHookLayerAnimInstance::PoseShift");
static_assert(offsetof(UTowHookLayerAnimInstance, NoisePicker) == 4516, "Offset mismatch for UTowHookLayerAnimInstance::NoisePicker");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsBackOrLeftOrRight) == 4520, "Offset mismatch for UTowHookLayerAnimInstance::bIsBackOrLeftOrRight");
static_assert(offsetof(UTowHookLayerAnimInstance, YankInAirAlpha) == 4524, "Offset mismatch for UTowHookLayerAnimInstance::YankInAirAlpha");
static_assert(offsetof(UTowHookLayerAnimInstance, AttachFullBodyAlpha) == 4528, "Offset mismatch for UTowHookLayerAnimInstance::AttachFullBodyAlpha");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAttachSlow) == 4532, "Offset mismatch for UTowHookLayerAnimInstance::bIsAttachSlow");
static_assert(offsetof(UTowHookLayerAnimInstance, bIsAttachFast) == 4533, "Offset mismatch for UTowHookLayerAnimInstance::bIsAttachFast");
static_assert(offsetof(UTowHookLayerAnimInstance, PlayerTetheredTagName) == 4536, "Offset mismatch for UTowHookLayerAnimInstance::PlayerTetheredTagName");
static_assert(offsetof(UTowHookLayerAnimInstance, WaterTagName) == 4540, "Offset mismatch for UTowHookLayerAnimInstance::WaterTagName");

// /Script/TowHookWeaponRuntime.TowHookWeaponAnimInstance
// Kind: Class; super: AnimInstance
class UTowHookWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bHasAmmo; // 0x0260 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTowHookWeaponAnimInstance, bHasAmmo) == 608, "Offset mismatch for UTowHookWeaponAnimInstance::bHasAmmo");

// /Script/TowHookWeaponRuntime.TowHookWeaponBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTowHookWeaponBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
