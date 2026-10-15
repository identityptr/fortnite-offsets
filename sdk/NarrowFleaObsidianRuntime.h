/**
 * decamp dumper generated SDK
 * Package: /Script/NarrowFleaObsidianRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NarrowFleaObsidianRuntime.FortMovementMode_NarrowFleaObsidianCreationData
// Kind: ScriptStruct; super: FortMovementMode_ESMCreationData
struct FFortMovementMode_NarrowFleaObsidianCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bPrimaryPressed; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryPressed; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRunnerMode; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0013
    TWeakObjectPtr<void> Booster; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMovementMode_NarrowFleaObsidianCreationData, bPrimaryPressed) == 16, "Offset mismatch for FFortMovementMode_NarrowFleaObsidianCreationData::bPrimaryPressed");
static_assert(offsetof(FFortMovementMode_NarrowFleaObsidianCreationData, bSecondaryPressed) == 17, "Offset mismatch for FFortMovementMode_NarrowFleaObsidianCreationData::bSecondaryPressed");
static_assert(offsetof(FFortMovementMode_NarrowFleaObsidianCreationData, bRunnerMode) == 18, "Offset mismatch for FFortMovementMode_NarrowFleaObsidianCreationData::bRunnerMode");
static_assert(offsetof(FFortMovementMode_NarrowFleaObsidianCreationData, Booster) == 20, "Offset mismatch for FFortMovementMode_NarrowFleaObsidianCreationData::Booster");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianEdgeLaunchSettings
// Kind: ScriptStruct; super: none
struct FNarrowFleaObsidianEdgeLaunchSettings
{
public:
    std::uint8_t bEnable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartBounceState; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t LaunchAngle[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t duration[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t Speed[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t LookAheadDistance[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t EdgeDropThreshold[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LookAheadProbeStartHeight[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlopeChangeAngleThreshold[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableTrueEdgeLaunch; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, bEnable) == 0, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::bEnable");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, bStartBounceState) == 1, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::bStartBounceState");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, LaunchAngle) == 8, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::LaunchAngle");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, duration) == 48, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::duration");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, Speed) == 88, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::Speed");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, LookAheadDistance) == 128, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::LookAheadDistance");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, EdgeDropThreshold) == 168, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::EdgeDropThreshold");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, LookAheadProbeStartHeight) == 208, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::LookAheadProbeStartHeight");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, SlopeChangeAngleThreshold) == 248, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::SlopeChangeAngleThreshold");
static_assert(offsetof(FNarrowFleaObsidianEdgeLaunchSettings, bEnableTrueEdgeLaunch) == 288, "Offset mismatch for FNarrowFleaObsidianEdgeLaunchSettings::bEnableTrueEdgeLaunch");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianJumpSettings
// Kind: ScriptStruct; super: none
struct FNarrowFleaObsidianJumpSettings
{
public:
    std::uint8_t EnableJump[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpDuration[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardForce[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaintainHorizontalVelocity[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProjectHorizontalVelocityOntoFloor[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpwardForce[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProjectForwardForceOntoFloor[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t OnlyProjectWhenMovingUphill[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseFloorNormalForUpwardForce[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t SteepSlopeMinAngle[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNarrowFleaObsidianJumpSettings, EnableJump) == 0, "Offset mismatch for FNarrowFleaObsidianJumpSettings::EnableJump");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, JumpDuration) == 40, "Offset mismatch for FNarrowFleaObsidianJumpSettings::JumpDuration");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, ForwardForce) == 80, "Offset mismatch for FNarrowFleaObsidianJumpSettings::ForwardForce");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, MaintainHorizontalVelocity) == 120, "Offset mismatch for FNarrowFleaObsidianJumpSettings::MaintainHorizontalVelocity");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, ProjectHorizontalVelocityOntoFloor) == 160, "Offset mismatch for FNarrowFleaObsidianJumpSettings::ProjectHorizontalVelocityOntoFloor");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, UpwardForce) == 200, "Offset mismatch for FNarrowFleaObsidianJumpSettings::UpwardForce");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, ProjectForwardForceOntoFloor) == 240, "Offset mismatch for FNarrowFleaObsidianJumpSettings::ProjectForwardForceOntoFloor");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, OnlyProjectWhenMovingUphill) == 280, "Offset mismatch for FNarrowFleaObsidianJumpSettings::OnlyProjectWhenMovingUphill");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, UseFloorNormalForUpwardForce) == 320, "Offset mismatch for FNarrowFleaObsidianJumpSettings::UseFloorNormalForUpwardForce");
static_assert(offsetof(FNarrowFleaObsidianJumpSettings, SteepSlopeMinAngle) == 360, "Offset mismatch for FNarrowFleaObsidianJumpSettings::SteepSlopeMinAngle");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianRuntimeSnapshot
// Kind: ScriptStruct; super: none
struct FNarrowFleaObsidianRuntimeSnapshot
{
public:
    std::uint8_t ActiveMovementStateTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float SpinDashTimeRemaining; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BlastStartupTimeRemaining; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BlastAttackTimeRemaining; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SpinHoldChargeTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpinDashDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BlastStartupDuration; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BlastAttackDuration; // 0x001C (Size: 0x4, Type: FloatProperty)
    float SpinDashAttackStaminaCost; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BlastAttackStaminaCost; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaxActiveDurability; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float CurrentActiveDurability; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ActiveDurabilityFractionRemaining; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRunnerMode; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInIntro; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInOutro; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0037
    TWeakObjectPtr<void> BlastTargetPawn; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, ActiveMovementStateTag) == 0, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::ActiveMovementStateTag");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, SpinDashTimeRemaining) == 4, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::SpinDashTimeRemaining");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastStartupTimeRemaining) == 8, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastStartupTimeRemaining");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastAttackTimeRemaining) == 12, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastAttackTimeRemaining");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, SpinHoldChargeTime) == 16, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::SpinHoldChargeTime");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, SpinDashDuration) == 20, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::SpinDashDuration");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastStartupDuration) == 24, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastStartupDuration");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastAttackDuration) == 28, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastAttackDuration");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, SpinDashAttackStaminaCost) == 32, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::SpinDashAttackStaminaCost");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastAttackStaminaCost) == 36, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastAttackStaminaCost");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, MaxActiveDurability) == 40, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::MaxActiveDurability");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, CurrentActiveDurability) == 44, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::CurrentActiveDurability");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, ActiveDurabilityFractionRemaining) == 48, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::ActiveDurabilityFractionRemaining");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, bRunnerMode) == 52, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::bRunnerMode");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, bIsInIntro) == 53, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::bIsInIntro");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, bIsInOutro) == 54, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::bIsInOutro");
static_assert(offsetof(FNarrowFleaObsidianRuntimeSnapshot, BlastTargetPawn) == 56, "Offset mismatch for FNarrowFleaObsidianRuntimeSnapshot::BlastTargetPawn");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianSteepSlopeBounceSettings
// Kind: ScriptStruct; super: none
struct FNarrowFleaObsidianSteepSlopeBounceSettings
{
public:
    std::uint8_t bEnable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartBounceState; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t BounceAngle[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSlopeAngle[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t duration[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t Speed[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, bEnable) == 0, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::bEnable");
static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, bStartBounceState) == 1, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::bStartBounceState");
static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, BounceAngle) == 8, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::BounceAngle");
static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, MinSlopeAngle) == 48, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::MinSlopeAngle");
static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, duration) == 88, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::duration");
static_assert(offsetof(FNarrowFleaObsidianSteepSlopeBounceSettings, Speed) == 128, "Offset mismatch for FNarrowFleaObsidianSteepSlopeBounceSettings::Speed");

// /Script/NarrowFleaObsidianRuntime.FortMovementMode_SMNarrowFleaObsidian
// Kind: Class; super: FortMovementMode_ExtStatefulMovement
class UFortMovementMode_SMNarrowFleaObsidian
{
public:
    std::uint8_t Pad_0000[0x458]; // 0x0000
    std::uint8_t WeaponEquippedTag[0x8]; // 0x0458 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExitToFallingWhenLaunchTags[0x20]; // 0x0460 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> EdgeLaunchSettingsByFloorTag; // 0x0480 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SteepSlopeBounceSettingsByFloorTag; // 0x0490 (Size: 0x10, Type: MapProperty)
    std::uint8_t LowSpeedThreshold[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowSpeedEndTime[0x28]; // 0x04C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableExitByInput[0x28]; // 0x04F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitInput; // 0x0518 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0519
    std::uint8_t ExitInputLockoutDuration[0x28]; // 0x0520 (Size: 0x28, Type: StructProperty)
    std::uint8_t IntroDuration[0x28]; // 0x0548 (Size: 0x28, Type: StructProperty)
    std::uint8_t OutroDuration[0x28]; // 0x0570 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownslopeSpeedBoost[0x28]; // 0x0598 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownslopeSpeedBoostIsMultiplicative[0x28]; // 0x05C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownslopeSpeedBoostDuration[0x28]; // 0x05E8 (Size: 0x28, Type: StructProperty)
    void* FloorSlopeSpeedMultiplierCurve; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DownslopeSpeedBoostMaxSpeed[0x28]; // 0x0618 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableAirborneBlastTargeting[0x28]; // 0x0640 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirborneBlastTargetingMinHeight[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirborneBlastTargetingDuration[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlastStateBlockedAbilityTags[0x1]; // 0x06B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, WeaponEquippedTag) == 1112, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::WeaponEquippedTag");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, ExitToFallingWhenLaunchTags) == 1120, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::ExitToFallingWhenLaunchTags");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, EdgeLaunchSettingsByFloorTag) == 1152, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::EdgeLaunchSettingsByFloorTag");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, SteepSlopeBounceSettingsByFloorTag) == 1168, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::SteepSlopeBounceSettingsByFloorTag");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, LowSpeedThreshold) == 1184, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::LowSpeedThreshold");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, LowSpeedEndTime) == 1224, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::LowSpeedEndTime");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, EnableExitByInput) == 1264, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::EnableExitByInput");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, ExitInput) == 1304, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::ExitInput");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, ExitInputLockoutDuration) == 1312, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::ExitInputLockoutDuration");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, IntroDuration) == 1352, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::IntroDuration");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, OutroDuration) == 1392, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::OutroDuration");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, DownslopeSpeedBoost) == 1432, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::DownslopeSpeedBoost");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, DownslopeSpeedBoostIsMultiplicative) == 1472, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::DownslopeSpeedBoostIsMultiplicative");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, DownslopeSpeedBoostDuration) == 1512, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::DownslopeSpeedBoostDuration");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, FloorSlopeSpeedMultiplierCurve) == 1552, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::FloorSlopeSpeedMultiplierCurve");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, DownslopeSpeedBoostMaxSpeed) == 1560, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::DownslopeSpeedBoostMaxSpeed");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, EnableAirborneBlastTargeting) == 1600, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::EnableAirborneBlastTargeting");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, AirborneBlastTargetingMinHeight) == 1640, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::AirborneBlastTargetingMinHeight");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, AirborneBlastTargetingDuration) == 1680, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::AirborneBlastTargetingDuration");
static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidian, BlastStateBlockedAbilityTags) == 1720, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidian::BlastStateBlockedAbilityTags");

// /Script/NarrowFleaObsidianRuntime.FortMovementMode_SMNarrowFleaObsidianRuntimeData
// Kind: Class; super: FortMovementMode_ESMRuntimeData
class UFortMovementMode_SMNarrowFleaObsidianRuntimeData
{
public:
    std::uint8_t Pad_0000[0x1BC]; // 0x0000
    TWeakObjectPtr<void> Booster; // 0x01BC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_SMNarrowFleaObsidianRuntimeData, Booster) == 444, "Offset mismatch for UFortMovementMode_SMNarrowFleaObsidianRuntimeData::Booster");

// /Script/NarrowFleaObsidianRuntime.FortPawnComponent_NarrowFleaObsidian
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_NarrowFleaObsidian
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t bAirBlastConsumed; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPawnComponent_NarrowFleaObsidian, bAirBlastConsumed) == 248, "Offset mismatch for UFortPawnComponent_NarrowFleaObsidian::bAirBlastConsumed");

// /Script/NarrowFleaObsidianRuntime.FortWeaponRanged_NarrowFleaObsidian
// Kind: Class; super: FortWeaponRanged
class UFortWeaponRanged_NarrowFleaObsidian
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    std::uint8_t MaxActiveDurability[0x28]; // 0x2968 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveDurabilityDrainPerSecond[0x28]; // 0x2990 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveDurabilityRegenPerSecond[0x28]; // 0x29B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveDurabilityLowThreshold[0x28]; // 0x29E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowActiveDurabilityRegenMultiplier[0x28]; // 0x2A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeaponDestroyDurabilityFloor[0x28]; // 0x2A30 (Size: 0x28, Type: StructProperty)
    float CurrentActiveDurability; // 0x2A58 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, MaxActiveDurability) == 10600, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::MaxActiveDurability");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, ActiveDurabilityDrainPerSecond) == 10640, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::ActiveDurabilityDrainPerSecond");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, ActiveDurabilityRegenPerSecond) == 10680, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::ActiveDurabilityRegenPerSecond");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, ActiveDurabilityLowThreshold) == 10720, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::ActiveDurabilityLowThreshold");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, LowActiveDurabilityRegenMultiplier) == 10760, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::LowActiveDurabilityRegenMultiplier");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, WeaponDestroyDurabilityFloor) == 10800, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::WeaponDestroyDurabilityFloor");
static_assert(offsetof(UFortWeaponRanged_NarrowFleaObsidian, CurrentActiveDurability) == 10840, "Offset mismatch for UFortWeaponRanged_NarrowFleaObsidian::CurrentActiveDurability");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianAnimInterface
// Kind: Class; super: Interface
class UNarrowFleaObsidianAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianBall
// Kind: Class; super: BuildingGameplayActor
class UNarrowFleaObsidianBall
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    void* BallCollision; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    void* DamageGameplayEffectClass; // 0x0928 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SetByCallerDamageTag[0x1]; // 0x0930 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNarrowFleaObsidianBall, BallCollision) == 2336, "Offset mismatch for UNarrowFleaObsidianBall::BallCollision");
static_assert(offsetof(UNarrowFleaObsidianBall, DamageGameplayEffectClass) == 2344, "Offset mismatch for UNarrowFleaObsidianBall::DamageGameplayEffectClass");
static_assert(offsetof(UNarrowFleaObsidianBall, SetByCallerDamageTag) == 2352, "Offset mismatch for UNarrowFleaObsidianBall::SetByCallerDamageTag");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianBallAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNarrowFleaObsidianBallAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float LeanYaw; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1174
    double VelocityZ_BP; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double RotationOffset; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double VelocityY; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    float NewLeanYaw; // 0x1190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bToFastFall; // 0x1194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGrounded; // 0x1195 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterFall; // 0x1196 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInputBounce; // 0x1197 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputBounceTagName[0x4]; // 0x1198 (Size: 0x4, Type: StructProperty)
    std::uint8_t GroundedTagName[0x4]; // 0x119C (Size: 0x4, Type: StructProperty)
    std::uint8_t SpinHoldTagName[0x4]; // 0x11A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpinDashTagName[0x1]; // 0x11A4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, LeanYaw) == 4464, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::LeanYaw");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, VelocityZ_BP) == 4472, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::VelocityZ_BP");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, RotationOffset) == 4480, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::RotationOffset");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, VelocityY) == 4488, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::VelocityY");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, NewLeanYaw) == 4496, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::NewLeanYaw");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, bToFastFall) == 4500, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::bToFastFall");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, bGrounded) == 4501, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::bGrounded");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, bCanEnterFall) == 4502, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::bCanEnterFall");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, bInputBounce) == 4503, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::bInputBounce");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, InputBounceTagName) == 4504, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::InputBounceTagName");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, GroundedTagName) == 4508, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::GroundedTagName");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, SpinHoldTagName) == 4512, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::SpinHoldTagName");
static_assert(offsetof(UNarrowFleaObsidianBallAnimInstance, SpinDashTagName) == 4516, "Offset mismatch for UNarrowFleaObsidianBallAnimInstance::SpinDashTagName");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianBooster
// Kind: Class; super: BuildingActor
class UNarrowFleaObsidianBooster
{
public:
    std::uint8_t Pad_0000[0x6A8]; // 0x0000
    std::uint8_t Speed[0x28]; // 0x06A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SplineOpposingDirectionDashAngle[0x28]; // 0x06D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterType; // 0x06F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEndMMEOnBoosterStateComplete; // 0x06F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEndMMEOnBoosterStateCompleteRunnerModeOnly; // 0x06FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideLaunchSettings; // 0x06FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLaunchSettingsExpireAfterFirstLaunch; // 0x06FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x06FD
    std::uint8_t SteepSlopeBounceOverride[0xA8]; // 0x0700 (Size: 0xA8, Type: StructProperty)
    std::uint8_t EdgeLaunchOverride[0x1]; // 0x07A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNarrowFleaObsidianBooster, Speed) == 1704, "Offset mismatch for UNarrowFleaObsidianBooster::Speed");
static_assert(offsetof(UNarrowFleaObsidianBooster, SplineOpposingDirectionDashAngle) == 1744, "Offset mismatch for UNarrowFleaObsidianBooster::SplineOpposingDirectionDashAngle");
static_assert(offsetof(UNarrowFleaObsidianBooster, BoosterType) == 1784, "Offset mismatch for UNarrowFleaObsidianBooster::BoosterType");
static_assert(offsetof(UNarrowFleaObsidianBooster, bEndMMEOnBoosterStateComplete) == 1785, "Offset mismatch for UNarrowFleaObsidianBooster::bEndMMEOnBoosterStateComplete");
static_assert(offsetof(UNarrowFleaObsidianBooster, bEndMMEOnBoosterStateCompleteRunnerModeOnly) == 1786, "Offset mismatch for UNarrowFleaObsidianBooster::bEndMMEOnBoosterStateCompleteRunnerModeOnly");
static_assert(offsetof(UNarrowFleaObsidianBooster, bOverrideLaunchSettings) == 1787, "Offset mismatch for UNarrowFleaObsidianBooster::bOverrideLaunchSettings");
static_assert(offsetof(UNarrowFleaObsidianBooster, bLaunchSettingsExpireAfterFirstLaunch) == 1788, "Offset mismatch for UNarrowFleaObsidianBooster::bLaunchSettingsExpireAfterFirstLaunch");
static_assert(offsetof(UNarrowFleaObsidianBooster, SteepSlopeBounceOverride) == 1792, "Offset mismatch for UNarrowFleaObsidianBooster::SteepSlopeBounceOverride");
static_assert(offsetof(UNarrowFleaObsidianBooster, EdgeLaunchOverride) == 1960, "Offset mismatch for UNarrowFleaObsidianBooster::EdgeLaunchOverride");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNarrowFleaObsidianLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float PitchTransformAlpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1174
    double VelocityPitch; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double SprintYawAngleAdjusted; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double FootBlendAlpha; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double TopSpeedLoopPlayrate; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bCanExitBallMode; // 0x1198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntro; // 0x1199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlastStartup; // 0x119A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGrounded; // 0x119B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitBoostLoop; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandTopSpeed; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoosterSpine; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterSpline; // 0x119F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterBoostedJumpStart; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterJumpM; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlastBounce; // 0x11A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterBoostLoop; // 0x11A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFailSafeExits; // 0x11A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterBoostedJumpStartUpdated; // 0x11A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x11A6
    std::uint8_t SpeedOvertimeTacSprint[0x10]; // 0x11A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TopSpeedOvertimeTacSprint[0x10]; // 0x11B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ImpactTagName[0x4]; // 0x11C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t RunnerModeTagName[0x4]; // 0x11CC (Size: 0x4, Type: StructProperty)
    std::uint8_t DashTagName[0x4]; // 0x11D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t SplineTagName[0x4]; // 0x11D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t BlastStartupTagName[0x4]; // 0x11D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t IntroTagName[0x4]; // 0x11DC (Size: 0x4, Type: StructProperty)
    std::uint8_t MaxSpeedTagName[0x4]; // 0x11E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t NarrowFleaObsidianTagName[0x4]; // 0x11E4 (Size: 0x4, Type: StructProperty)
    void* BallModeComponentClass; // 0x11E8 (Size: 0x8, Type: ClassProperty)
    double SplineRootZ_Offset; // 0x11F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bFailSafeExitsUpdated; // 0x11F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x11F9
    std::uint8_t IsGrindingTagName[0x4]; // 0x11FC (Size: 0x4, Type: StructProperty)
    std::uint8_t ClamberTagName[0x4]; // 0x1200 (Size: 0x4, Type: StructProperty)
    std::uint8_t LedgeMovingTagName[0x1]; // 0x1204 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, PitchTransformAlpha) == 4464, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::PitchTransformAlpha");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, VelocityPitch) == 4472, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::VelocityPitch");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, SprintYawAngleAdjusted) == 4480, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::SprintYawAngleAdjusted");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, FootBlendAlpha) == 4488, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::FootBlendAlpha");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, TopSpeedLoopPlayrate) == 4496, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::TopSpeedLoopPlayrate");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanExitBallMode) == 4504, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanExitBallMode");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bIntro) == 4505, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bIntro");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bBlastStartup) == 4506, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bBlastStartup");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bGrounded) == 4507, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bGrounded");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bExitBoostLoop) == 4508, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bExitBoostLoop");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bLandTopSpeed) == 4509, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bLandTopSpeed");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bBoosterSpine) == 4510, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bBoosterSpine");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanEnterSpline) == 4511, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanEnterSpline");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanEnterBoostedJumpStart) == 4512, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanEnterBoostedJumpStart");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanEnterJumpM) == 4513, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanEnterJumpM");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bBlastBounce) == 4514, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bBlastBounce");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanEnterBoostLoop) == 4515, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanEnterBoostLoop");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bFailSafeExits) == 4516, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bFailSafeExits");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bCanEnterBoostedJumpStartUpdated) == 4517, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bCanEnterBoostedJumpStartUpdated");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, SpeedOvertimeTacSprint) == 4520, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::SpeedOvertimeTacSprint");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, TopSpeedOvertimeTacSprint) == 4536, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::TopSpeedOvertimeTacSprint");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, ImpactTagName) == 4552, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::ImpactTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, RunnerModeTagName) == 4556, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::RunnerModeTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, DashTagName) == 4560, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::DashTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, SplineTagName) == 4564, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::SplineTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, BlastStartupTagName) == 4568, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::BlastStartupTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, IntroTagName) == 4572, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::IntroTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, MaxSpeedTagName) == 4576, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::MaxSpeedTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, NarrowFleaObsidianTagName) == 4580, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::NarrowFleaObsidianTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, BallModeComponentClass) == 4584, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::BallModeComponentClass");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, SplineRootZ_Offset) == 4592, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::SplineRootZ_Offset");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, bFailSafeExitsUpdated) == 4600, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::bFailSafeExitsUpdated");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, IsGrindingTagName) == 4604, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::IsGrindingTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, ClamberTagName) == 4608, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::ClamberTagName");
static_assert(offsetof(UNarrowFleaObsidianLayerAnimInstance, LedgeMovingTagName) == 4612, "Offset mismatch for UNarrowFleaObsidianLayerAnimInstance::LedgeMovingTagName");

// /Script/NarrowFleaObsidianRuntime.NarrowFleaObsidianPickup
// Kind: Class; super: FortPickupAthena
class UNarrowFleaObsidianPickup
{
public:
    std::uint8_t Pad_0000[0x740]; // 0x0000
    std::uint8_t StaticGameplayTags[0x1]; // 0x0740 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNarrowFleaObsidianPickup, StaticGameplayTags) == 1856, "Offset mismatch for UNarrowFleaObsidianPickup::StaticGameplayTags");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Airborne
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Airborne
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t DesiredMoveBias[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    void* ImpactAbilityClass; // 0x0318 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Airborne, DesiredMoveBias) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Airborne::DesiredMoveBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Airborne, ImpactAbilityClass) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Airborne::ImpactAbilityClass");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_BlastAttack
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_BlastAttack
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t AttackStaminaCost[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttackDuration[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    void* BlastAttackSpeedOverTime; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetConnectDistance[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetDirectionBias[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t ControlRotationBias[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t BounceUpwardAngle[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PerformImpactOnLandscape[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBounceAngleLimit[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t BounceAngleLimitWallsOnly[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t BounceMaxAngle[0x28]; // 0x0460 (Size: 0x28, Type: StructProperty)
    void* BlastAttackAbilityClass; // 0x0488 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, AttackStaminaCost) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::AttackStaminaCost");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, AttackDuration) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::AttackDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, BlastAttackSpeedOverTime) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::BlastAttackSpeedOverTime");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, TargetConnectDistance) == 840, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::TargetConnectDistance");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, TargetDirectionBias) == 880, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::TargetDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, ControlRotationBias) == 920, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::ControlRotationBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, BounceUpwardAngle) == 960, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::BounceUpwardAngle");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, PerformImpactOnLandscape) == 1000, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::PerformImpactOnLandscape");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, EnableBounceAngleLimit) == 1040, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::EnableBounceAngleLimit");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, BounceAngleLimitWallsOnly) == 1080, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::BounceAngleLimitWallsOnly");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, BounceMaxAngle) == 1120, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::BounceMaxAngle");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastAttack, BlastAttackAbilityClass) == 1160, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastAttack::BlastAttackAbilityClass");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_BlastBounce
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_BlastBounce
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t BounceDuration[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndMMEFromBounce[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndMMEAtBouncePeak[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastBounce, BounceDuration) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastBounce::BounceDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastBounce, EndMMEFromBounce) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastBounce::EndMMEFromBounce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastBounce, EndMMEAtBouncePeak) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastBounce::EndMMEAtBouncePeak");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_BlastStartup
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_BlastStartup
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t StartupDuration[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartupHeightThreshold[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartupRequiresHeightAboveThreshold[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartupEnableHeightThreshold[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartupInput; // 0x0390 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartupOrientation; // 0x0391 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0392
    void* BlastTargetingPreset; // 0x0398 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupDuration) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupHeightThreshold) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupHeightThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupRequiresHeightAboveThreshold) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupRequiresHeightAboveThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupEnableHeightThreshold) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupEnableHeightThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupInput) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupInput");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, StartupOrientation) == 913, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::StartupOrientation");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_BlastStartup, BlastTargetingPreset) == 920, "Offset mismatch for USMNarrowFleaObsidian_MovementState_BlastStartup::BlastTargetingPreset");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Booster_Dash
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Booster_Dash
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t BoosterDuration[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnablePlayerTurnInfluence[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionAccelerationThreshold[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionBias[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterDirectionBias[0x28]; // 0x0390 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBoosterInfluenceDecay[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterInfluenceDuration[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SteepSlopeBounce[0xA8]; // 0x0408 (Size: 0xA8, Type: StructProperty)
    std::uint8_t EdgeLaunch[0x128]; // 0x04B0 (Size: 0x128, Type: StructProperty)
    std::uint8_t Jump[0x190]; // 0x05D8 (Size: 0x190, Type: StructProperty)
    void* BoosterDashAbilityClass; // 0x0768 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, BoosterDuration) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::BoosterDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, EnablePlayerTurnInfluence) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::EnablePlayerTurnInfluence");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, TurnDirectionAccelerationThreshold) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::TurnDirectionAccelerationThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, TurnDirectionBias) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::TurnDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, BoosterDirectionBias) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::BoosterDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, EnableBoosterInfluenceDecay) == 952, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::EnableBoosterInfluenceDecay");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, BoosterInfluenceDuration) == 992, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::BoosterInfluenceDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, SteepSlopeBounce) == 1032, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::SteepSlopeBounce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, EdgeLaunch) == 1200, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::EdgeLaunch");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, Jump) == 1496, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::Jump");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Dash, BoosterDashAbilityClass) == 1896, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Dash::BoosterDashAbilityClass");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Booster_Spline
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Booster_Spline
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t VelocityDeterminesTravelDirection[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableRunnerMeshRoll[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t SplineZOffset[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBreakOut[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t BreakOutGracePeriod[0x28]; // 0x0390 (Size: 0x28, Type: StructProperty)
    std::uint8_t BreakOutInputThreshold[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BreakOutInputHoldDuration[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndMMEOnBreakOutInRunnerMode[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    void* BoosterSplineAbilityClass; // 0x0430 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, VelocityDeterminesTravelDirection) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::VelocityDeterminesTravelDirection");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, EnableRunnerMeshRoll) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::EnableRunnerMeshRoll");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, SplineZOffset) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::SplineZOffset");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, EnableBreakOut) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::EnableBreakOut");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, BreakOutGracePeriod) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::BreakOutGracePeriod");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, BreakOutInputThreshold) == 952, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::BreakOutInputThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, BreakOutInputHoldDuration) == 992, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::BreakOutInputHoldDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, EndMMEOnBreakOutInRunnerMode) == 1032, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::EndMMEOnBreakOutInRunnerMode");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Booster_Spline, BoosterSplineAbilityClass) == 1072, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Booster_Spline::BoosterSplineAbilityClass");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Bounce
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Bounce
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Speed[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSpeedAffectedByInput; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    std::uint8_t AccelerationRate[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t DecelerationRate[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t bInterpolateSpeed; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetMoveOrientationToControlRotationOnEnter; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceOrientationToControlRotation; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideMoveOrientation; // 0x00AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t RotationMode; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00AD
    std::uint8_t RotationRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToEnterState[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToRemainInState[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToRemainInStateGracePeriod[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t bMinSpeedToRemainOnlyAppliesWhenDecelerating; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0151
    std::uint8_t MaxForwardInputAngleToEnterState[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxForwardInputAngleToRemainInState[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t bVelocityAlsoRespectsInputAngles; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01A9
    std::uint8_t MinStaminaToEnterState[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaCostOnStart[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaCostPerSecond[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    void* CameraModeClass; // 0x0228 (Size: 0x8, Type: ClassProperty)
    std::int32_t CameraModePriority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0234 (Size: 0x4, Type: StructProperty)
    void* CameraModifierClass; // 0x0238 (Size: 0x8, Type: ClassProperty)
    TArray<void*> CameraShakes; // 0x0240 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MovementStateTag[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagRequirementQuery[0x48]; // 0x0258 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnterBurstGC[0x4]; // 0x02A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveLoopingGC[0x4]; // 0x02A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExitBurstGC[0x4]; // 0x02A8 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> OwningMME; // 0x02AC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerPawn; // 0x02B4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x02BC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x02C4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsSimulatedProxy; // 0x02CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayer; // 0x02CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServer; // 0x02CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServerBotControlled; // 0x02CF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, Speed) == 40, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::Speed");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bSpeedAffectedByInput) == 80, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bSpeedAffectedByInput");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, AccelerationRate) == 88, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::AccelerationRate");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, DecelerationRate) == 128, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::DecelerationRate");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bInterpolateSpeed) == 168, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bInterpolateSpeed");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bSetMoveOrientationToControlRotationOnEnter) == 169, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bSetMoveOrientationToControlRotationOnEnter");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bForceOrientationToControlRotation) == 170, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bForceOrientationToControlRotation");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bOverrideMoveOrientation) == 171, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bOverrideMoveOrientation");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, RotationMode) == 172, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::RotationMode");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, RotationRate) == 176, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::RotationRate");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MinSpeedToEnterState) == 216, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MinSpeedToEnterState");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MinSpeedToRemainInState) == 256, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MinSpeedToRemainInState");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MinSpeedToRemainInStateGracePeriod) == 296, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MinSpeedToRemainInStateGracePeriod");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bMinSpeedToRemainOnlyAppliesWhenDecelerating) == 336, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bMinSpeedToRemainOnlyAppliesWhenDecelerating");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MaxForwardInputAngleToEnterState) == 344, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MaxForwardInputAngleToEnterState");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MaxForwardInputAngleToRemainInState) == 384, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MaxForwardInputAngleToRemainInState");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bVelocityAlsoRespectsInputAngles) == 424, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bVelocityAlsoRespectsInputAngles");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MinStaminaToEnterState) == 432, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MinStaminaToEnterState");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, StaminaCostOnStart) == 472, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::StaminaCostOnStart");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, StaminaCostPerSecond) == 512, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::StaminaCostPerSecond");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, CameraModeClass) == 552, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::CameraModeClass");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, CameraModePriority) == 560, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::CameraModePriority");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, CameraModeTag) == 564, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::CameraModeTag");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, CameraModifierClass) == 568, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::CameraModifierClass");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, CameraShakes) == 576, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::CameraShakes");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, MovementStateTag) == 592, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::MovementStateTag");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, TagRequirementQuery) == 600, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::TagRequirementQuery");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, EnterBurstGC) == 672, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::EnterBurstGC");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, ActiveLoopingGC) == 676, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::ActiveLoopingGC");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, ExitBurstGC) == 680, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::ExitBurstGC");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, OwningMME) == 684, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::OwningMME");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, OwnerPawn) == 692, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::OwnerPawn");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, OwnerMovementComponent) == 700, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::OwnerMovementComponent");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, OwnerAbilitySystemComponent) == 708, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::OwnerAbilitySystemComponent");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bIsSimulatedProxy) == 716, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bIsSimulatedProxy");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bIsLocalPlayer) == 717, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bIsLocalPlayer");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bIsServer) == 718, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bIsServer");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Bounce, bIsServerBotControlled) == 719, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Bounce::bIsServerBotControlled");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Grounded
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Grounded
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    void* ImpactAbilityClass; // 0x02F0 (Size: 0x8, Type: ClassProperty)
    void* FloorSlopeSpeedMultiplierCurve; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TurnDirectionAccelerationThreshold[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t ControlRotationBias[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputDirectionBias[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableReflectLogic[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeadOnReflectMaxAngle[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeadOnReflectDuration[0x28]; // 0x03C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LittleReflectMinAngle[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LittleReflectDuration[0x28]; // 0x0418 (Size: 0x28, Type: StructProperty)
    std::uint8_t BigReflectMinAngle[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    std::uint8_t BigReflectDuration[0x28]; // 0x0468 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactReactionCooldownDuration[0x28]; // 0x0490 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactReactionDistanceSquaredThreshold[0x28]; // 0x04B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SteepSlopeBounce[0xA8]; // 0x04E0 (Size: 0xA8, Type: StructProperty)
    std::uint8_t EdgeLaunch[0x1]; // 0x0588 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, ImpactAbilityClass) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::ImpactAbilityClass");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, FloorSlopeSpeedMultiplierCurve) == 760, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::FloorSlopeSpeedMultiplierCurve");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, TurnDirectionAccelerationThreshold) == 768, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::TurnDirectionAccelerationThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, ControlRotationBias) == 808, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::ControlRotationBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, InputDirectionBias) == 848, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::InputDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, EnableReflectLogic) == 888, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::EnableReflectLogic");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, HeadOnReflectMaxAngle) == 928, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::HeadOnReflectMaxAngle");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, HeadOnReflectDuration) == 968, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::HeadOnReflectDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, LittleReflectMinAngle) == 1008, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::LittleReflectMinAngle");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, LittleReflectDuration) == 1048, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::LittleReflectDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, BigReflectMinAngle) == 1088, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::BigReflectMinAngle");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, BigReflectDuration) == 1128, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::BigReflectDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, ImpactReactionCooldownDuration) == 1168, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::ImpactReactionCooldownDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, ImpactReactionDistanceSquaredThreshold) == 1208, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::ImpactReactionDistanceSquaredThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, SteepSlopeBounce) == 1248, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::SteepSlopeBounce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Grounded, EdgeLaunch) == 1416, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Grounded::EdgeLaunch");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_InputBounce
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_InputBounce
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t BounceDuration[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BounceForwardForce[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaintainHorizontalVelocity[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProjectHorizontalVelocityOntoFloor[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t BounceUpwardForce[0x28]; // 0x0390 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProjectForwardForceOntoFloor[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t OnlyProjectWhenMovingUphill[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseFloorNormalForUpwardForce[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t SteepSlopeMinAngle[0x1]; // 0x0430 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, BounceDuration) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::BounceDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, BounceForwardForce) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::BounceForwardForce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, MaintainHorizontalVelocity) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::MaintainHorizontalVelocity");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, ProjectHorizontalVelocityOntoFloor) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::ProjectHorizontalVelocityOntoFloor");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, BounceUpwardForce) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::BounceUpwardForce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, ProjectForwardForceOntoFloor) == 952, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::ProjectForwardForceOntoFloor");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, OnlyProjectWhenMovingUphill) == 992, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::OnlyProjectWhenMovingUphill");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, UseFloorNormalForUpwardForce) == 1032, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::UseFloorNormalForUpwardForce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_InputBounce, SteepSlopeMinAngle) == 1072, "Offset mismatch for USMNarrowFleaObsidian_MovementState_InputBounce::SteepSlopeMinAngle");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_Runner
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_Runner
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t RunnerDuration[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnablePlayerTurnInfluence[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionAccelerationThreshold[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionBias[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterDirectionBias[0x28]; // 0x0390 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableBoosterInfluenceDecay[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoosterInfluenceDuration[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SteepSlopeBounce[0xA8]; // 0x0408 (Size: 0xA8, Type: StructProperty)
    std::uint8_t EdgeLaunch[0x128]; // 0x04B0 (Size: 0x128, Type: StructProperty)
    std::uint8_t Jump[0x190]; // 0x05D8 (Size: 0x190, Type: StructProperty)
    std::uint8_t EndMMEAfterJump[0x28]; // 0x0768 (Size: 0x28, Type: StructProperty)
    void* RunnerAbilityClass; // 0x0790 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, RunnerDuration) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::RunnerDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, EnablePlayerTurnInfluence) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::EnablePlayerTurnInfluence");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, TurnDirectionAccelerationThreshold) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::TurnDirectionAccelerationThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, TurnDirectionBias) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::TurnDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, BoosterDirectionBias) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::BoosterDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, EnableBoosterInfluenceDecay) == 952, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::EnableBoosterInfluenceDecay");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, BoosterInfluenceDuration) == 992, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::BoosterInfluenceDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, SteepSlopeBounce) == 1032, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::SteepSlopeBounce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, EdgeLaunch) == 1200, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::EdgeLaunch");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, Jump) == 1496, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::Jump");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, EndMMEAfterJump) == 1896, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::EndMMEAfterJump");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_Runner, RunnerAbilityClass) == 1936, "Offset mismatch for USMNarrowFleaObsidian_MovementState_Runner::RunnerAbilityClass");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_SpinDash
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_SpinDash
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t AttackStaminaCost[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfChargeThreshold[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullChargeThreshold[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowChargeSpeed[0x28]; // 0x0368 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfChargeSpeed[0x28]; // 0x0390 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullChargeSpeed[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashDuration[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionAccelerationThreshold[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDirectionBias[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    void* SpinDashAbilityClass; // 0x0458 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpinDashAbilityEventTag[0x8]; // 0x0460 (Size: 0x8, Type: StructProperty)
    std::uint8_t SteepSlopeBounce[0xA8]; // 0x0468 (Size: 0xA8, Type: StructProperty)
    std::uint8_t EdgeLaunch[0x128]; // 0x0510 (Size: 0x128, Type: StructProperty)
    std::uint8_t Jump[0x1]; // 0x0638 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, AttackStaminaCost) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::AttackStaminaCost");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, HalfChargeThreshold) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::HalfChargeThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, FullChargeThreshold) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::FullChargeThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, LowChargeSpeed) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::LowChargeSpeed");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, HalfChargeSpeed) == 912, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::HalfChargeSpeed");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, FullChargeSpeed) == 952, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::FullChargeSpeed");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, DashDuration) == 992, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::DashDuration");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, TurnDirectionAccelerationThreshold) == 1032, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::TurnDirectionAccelerationThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, TurnDirectionBias) == 1072, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::TurnDirectionBias");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, SpinDashAbilityClass) == 1112, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::SpinDashAbilityClass");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, SpinDashAbilityEventTag) == 1120, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::SpinDashAbilityEventTag");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, SteepSlopeBounce) == 1128, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::SteepSlopeBounce");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, EdgeLaunch) == 1296, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::EdgeLaunch");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinDash, Jump) == 1592, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinDash::Jump");

// /Script/NarrowFleaObsidianRuntime.SMNarrowFleaObsidian_MovementState_SpinHold
// Kind: Class; super: SM_MovementState
class USMNarrowFleaObsidian_MovementState_SpinHold
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t SpinHoldHeightThreshold[0x28]; // 0x02F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpinHoldRequiresHeightAboveThreshold[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpinHoldEnableHeightThreshold[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpinHoldInput; // 0x0368 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinHold, SpinHoldHeightThreshold) == 752, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinHold::SpinHoldHeightThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinHold, SpinHoldRequiresHeightAboveThreshold) == 792, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinHold::SpinHoldRequiresHeightAboveThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinHold, SpinHoldEnableHeightThreshold) == 832, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinHold::SpinHoldEnableHeightThreshold");
static_assert(offsetof(USMNarrowFleaObsidian_MovementState_SpinHold, SpinHoldInput) == 872, "Offset mismatch for USMNarrowFleaObsidian_MovementState_SpinHold::SpinHoldInput");

// /Script/NarrowFleaObsidianRuntime.TargetingFilterTask_NarrowFleaObsidian_FOV
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UTargetingFilterTask_NarrowFleaObsidian_FOV
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FieldOfViewHalfAngleDegrees; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAimDirection; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTargetingFilterTask_NarrowFleaObsidian_FOV, FieldOfViewHalfAngleDegrees) == 40, "Offset mismatch for UTargetingFilterTask_NarrowFleaObsidian_FOV::FieldOfViewHalfAngleDegrees");
static_assert(offsetof(UTargetingFilterTask_NarrowFleaObsidian_FOV, bUseAimDirection) == 44, "Offset mismatch for UTargetingFilterTask_NarrowFleaObsidian_FOV::bUseAimDirection");
