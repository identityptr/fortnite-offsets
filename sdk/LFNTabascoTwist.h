/**
 * decamp dumper generated SDK
 * Package: /Script/LFNTabascoTwist
 */
#pragma once
#include "Basic.h"

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwistCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_TabascoTwistCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_TabascoTwistCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_TabascoTwistCreationData::LogicClass");

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwistLaunchCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_TabascoTwistLaunchCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PendingLaunchVelocity[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float TimeUntilLaunch; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMovementMode_TabascoTwistLaunchCreationData, PendingLaunchVelocity) == 16, "Offset mismatch for FFortMovementMode_TabascoTwistLaunchCreationData::PendingLaunchVelocity");
static_assert(offsetof(FFortMovementMode_TabascoTwistLaunchCreationData, TimeUntilLaunch) == 40, "Offset mismatch for FFortMovementMode_TabascoTwistLaunchCreationData::TimeUntilLaunch");

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwist
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_TabascoTwist
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t MaxHorizontalSpeed[0x30]; // 0x01C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t HorizontalAcceleration[0x30]; // 0x01F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t HorizontalBrakingAcceleration[0x30]; // 0x0220 (Size: 0x30, Type: StructProperty)
    std::uint8_t GravityScale[0x30]; // 0x0250 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinBounceAngle[0x30]; // 0x0280 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxReflectedVelocity[0x30]; // 0x02B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t BounceDebounceDelay[0x30]; // 0x02E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForceMovement[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirborneTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t JumpActionTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t MidairJumpCount[0x30]; // 0x0340 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpImpulseVelocity[0x30]; // 0x0370 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxJumpTime[0x30]; // 0x03A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpHoldForce[0x30]; // 0x03D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpCoyoteTime[0x30]; // 0x0400 (Size: 0x30, Type: StructProperty)
    std::uint8_t EnergyComponentTagQuery[0x48]; // 0x0430 (Size: 0x48, Type: StructProperty)
    std::uint8_t InitialEnergyCost[0x30]; // 0x0478 (Size: 0x30, Type: StructProperty)
    std::uint8_t EnergyConsumptionRate[0x2C]; // 0x04A8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t EnergyConsumptionTag[0x4]; // 0x04D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t JumpCueTag[0x4]; // 0x04D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t LandCueTag[0x4]; // 0x04DC (Size: 0x4, Type: StructProperty)
    std::uint8_t BounceCueTag[0x4]; // 0x04E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t KnockbackEventTag[0x4]; // 0x04E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t KnockbackTargetQuery[0x48]; // 0x04E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t KnockbackCapsuleRadius[0x30]; // 0x0530 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackCapsuleHalfHeight[0x30]; // 0x0560 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackSweepVerticalOffset[0x30]; // 0x0590 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackSweepDistance[0x2C]; // 0x05C0 (Size: 0x2C, Type: StructProperty)
    std::uint8_t KnockbackSweepChannel; // 0x05EC (Size: 0x1, Type: ByteProperty)
    std::uint8_t KnockbackCollisionChannel; // 0x05ED (Size: 0x1, Type: ByteProperty)
    std::uint8_t BounceOffPawns; // 0x05EE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x05EF
    void* AbilitySet; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ScrollTag[0x4]; // 0x05F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ScrollInventoryGroup[0x1]; // 0x05FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_TabascoTwist, MaxHorizontalSpeed) == 448, "Offset mismatch for UFortMovementMode_TabascoTwist::MaxHorizontalSpeed");
static_assert(offsetof(UFortMovementMode_TabascoTwist, HorizontalAcceleration) == 496, "Offset mismatch for UFortMovementMode_TabascoTwist::HorizontalAcceleration");
static_assert(offsetof(UFortMovementMode_TabascoTwist, HorizontalBrakingAcceleration) == 544, "Offset mismatch for UFortMovementMode_TabascoTwist::HorizontalBrakingAcceleration");
static_assert(offsetof(UFortMovementMode_TabascoTwist, GravityScale) == 592, "Offset mismatch for UFortMovementMode_TabascoTwist::GravityScale");
static_assert(offsetof(UFortMovementMode_TabascoTwist, MinBounceAngle) == 640, "Offset mismatch for UFortMovementMode_TabascoTwist::MinBounceAngle");
static_assert(offsetof(UFortMovementMode_TabascoTwist, MaxReflectedVelocity) == 688, "Offset mismatch for UFortMovementMode_TabascoTwist::MaxReflectedVelocity");
static_assert(offsetof(UFortMovementMode_TabascoTwist, BounceDebounceDelay) == 736, "Offset mismatch for UFortMovementMode_TabascoTwist::BounceDebounceDelay");
static_assert(offsetof(UFortMovementMode_TabascoTwist, ForceMovement) == 784, "Offset mismatch for UFortMovementMode_TabascoTwist::ForceMovement");
static_assert(offsetof(UFortMovementMode_TabascoTwist, AirborneTag) == 824, "Offset mismatch for UFortMovementMode_TabascoTwist::AirborneTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, JumpActionTag) == 828, "Offset mismatch for UFortMovementMode_TabascoTwist::JumpActionTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, MidairJumpCount) == 832, "Offset mismatch for UFortMovementMode_TabascoTwist::MidairJumpCount");
static_assert(offsetof(UFortMovementMode_TabascoTwist, JumpImpulseVelocity) == 880, "Offset mismatch for UFortMovementMode_TabascoTwist::JumpImpulseVelocity");
static_assert(offsetof(UFortMovementMode_TabascoTwist, MaxJumpTime) == 928, "Offset mismatch for UFortMovementMode_TabascoTwist::MaxJumpTime");
static_assert(offsetof(UFortMovementMode_TabascoTwist, JumpHoldForce) == 976, "Offset mismatch for UFortMovementMode_TabascoTwist::JumpHoldForce");
static_assert(offsetof(UFortMovementMode_TabascoTwist, JumpCoyoteTime) == 1024, "Offset mismatch for UFortMovementMode_TabascoTwist::JumpCoyoteTime");
static_assert(offsetof(UFortMovementMode_TabascoTwist, EnergyComponentTagQuery) == 1072, "Offset mismatch for UFortMovementMode_TabascoTwist::EnergyComponentTagQuery");
static_assert(offsetof(UFortMovementMode_TabascoTwist, InitialEnergyCost) == 1144, "Offset mismatch for UFortMovementMode_TabascoTwist::InitialEnergyCost");
static_assert(offsetof(UFortMovementMode_TabascoTwist, EnergyConsumptionRate) == 1192, "Offset mismatch for UFortMovementMode_TabascoTwist::EnergyConsumptionRate");
static_assert(offsetof(UFortMovementMode_TabascoTwist, EnergyConsumptionTag) == 1236, "Offset mismatch for UFortMovementMode_TabascoTwist::EnergyConsumptionTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, JumpCueTag) == 1240, "Offset mismatch for UFortMovementMode_TabascoTwist::JumpCueTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, LandCueTag) == 1244, "Offset mismatch for UFortMovementMode_TabascoTwist::LandCueTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, BounceCueTag) == 1248, "Offset mismatch for UFortMovementMode_TabascoTwist::BounceCueTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackEventTag) == 1252, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackEventTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackTargetQuery) == 1256, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackTargetQuery");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackCapsuleRadius) == 1328, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackCapsuleRadius");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackCapsuleHalfHeight) == 1376, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackCapsuleHalfHeight");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackSweepVerticalOffset) == 1424, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackSweepVerticalOffset");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackSweepDistance) == 1472, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackSweepDistance");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackSweepChannel) == 1516, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackSweepChannel");
static_assert(offsetof(UFortMovementMode_TabascoTwist, KnockbackCollisionChannel) == 1517, "Offset mismatch for UFortMovementMode_TabascoTwist::KnockbackCollisionChannel");
static_assert(offsetof(UFortMovementMode_TabascoTwist, BounceOffPawns) == 1518, "Offset mismatch for UFortMovementMode_TabascoTwist::BounceOffPawns");
static_assert(offsetof(UFortMovementMode_TabascoTwist, AbilitySet) == 1520, "Offset mismatch for UFortMovementMode_TabascoTwist::AbilitySet");
static_assert(offsetof(UFortMovementMode_TabascoTwist, ScrollTag) == 1528, "Offset mismatch for UFortMovementMode_TabascoTwist::ScrollTag");
static_assert(offsetof(UFortMovementMode_TabascoTwist, ScrollInventoryGroup) == 1532, "Offset mismatch for UFortMovementMode_TabascoTwist::ScrollInventoryGroup");

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwistLaunch
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_TabascoTwistLaunch
{
public:
    std::uint8_t Pad_0000[0x44]; // 0x0000
    TWeakObjectPtr<void> OwnerPawn; // 0x0044 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x0054 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseFullSimulation; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SimProxyTickMode; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseDilatedDeltaTime; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x19]; // 0x005F
    std::uint8_t MovementModeExtensionIDTag[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuestMovementMode; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t StartMMECue[0x4]; // 0x009C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndMMECue[0x4]; // 0x00A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MMEContinuousCue[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbilityIDTag[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t StartEventTag[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t StopEventTag[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeActionTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t BlockingMMETags[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToPush[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t CancelAbilityTags[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilityTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredMMETags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShouldSkipRootMotionResimulation; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSimulatedProxy; // 0x0179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayer; // 0x017A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServer; // 0x017B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServerBotControlled; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x017D
    void* CameraMode; // 0x0188 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    float MaxSpeedThresholdCombine; // 0x0194 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, OwnerPawn) == 68, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::OwnerPawn");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, OwnerMovementComponent) == 76, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::OwnerMovementComponent");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, OwnerAbilitySystemComponent) == 84, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::OwnerAbilitySystemComponent");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bUseFullSimulation) == 92, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bUseFullSimulation");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, SimProxyTickMode) == 93, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::SimProxyTickMode");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bUseDilatedDeltaTime) == 94, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bUseDilatedDeltaTime");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, MovementModeExtensionIDTag) == 120, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::MovementModeExtensionIDTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, QuestMovementMode) == 152, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::QuestMovementMode");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, StartMMECue) == 156, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::StartMMECue");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, EndMMECue) == 160, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::EndMMECue");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, MMEContinuousCue) == 164, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::MMEContinuousCue");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, AbilityIDTag) == 168, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::AbilityIDTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, StartEventTag) == 200, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::StartEventTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, StopEventTag) == 204, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::StopEventTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, NativeActionTag) == 208, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::NativeActionTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, BlockingMMETags) == 216, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::BlockingMMETags");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, TagsToPush) == 248, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::TagsToPush");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, CancelAbilityTags) == 280, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::CancelAbilityTags");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, BlockAbilityTags) == 312, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::BlockAbilityTags");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, RequiredMMETags) == 344, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::RequiredMMETags");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bShouldSkipRootMotionResimulation) == 376, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bShouldSkipRootMotionResimulation");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bIsSimulatedProxy) == 377, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bIsSimulatedProxy");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bIsLocalPlayer) == 378, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bIsLocalPlayer");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bIsServer) == 379, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bIsServer");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, bIsServerBotControlled) == 380, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::bIsServerBotControlled");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, CameraMode) == 392, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::CameraMode");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, CameraModeTag) == 400, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::CameraModeTag");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunch, MaxSpeedThresholdCombine) == 404, "Offset mismatch for UFortMovementMode_TabascoTwistLaunch::MaxSpeedThresholdCombine");

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwistLaunchRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_TabascoTwistLaunchRuntimeData
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

static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_TabascoTwistLaunchRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_TabascoTwistLaunchRuntimeData::EndReasonFlags");

// /Script/LFNTabascoTwist.FortMovementMode_TabascoTwistRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_TabascoTwistRuntimeData
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

static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_TabascoTwistRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_TabascoTwistRuntimeData::EndReasonFlags");

// /Script/LFNTabascoTwist.JunoCameraModifierTabascoTwist
// Kind: Class; super: CameraModifier
class UJunoCameraModifierTabascoTwist
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t RowAddedFOV[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowJumpForward[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightOffsetClamp[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardOffsetOldRangeMin[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardOffsetOldRangeMax[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardOffsetNewRangeMin[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardOffsetNewRangeMax[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t T_Jumping[0x8]; // 0x0160 (Size: 0x8, Type: StructProperty)
    std::uint8_t RowForwardMultiplier[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetUpOffset[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightOffsetBaseMod[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowFOVMaxSpeed[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightOffsetOldRangeMin[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightOffsetOldRangeMax[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardRightConversionOldRangeMin[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardRightConversionOldRangeMax[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardRightConversionNewRangeMin[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardRightConversionNewRangeMax[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowForwardInterpSpeed[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightInterpSpeed[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowUpInterpSpeed[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowRightOffsetSpeedGivenMod[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowFOVInterpSpeed[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowOffsetVectorInterpSpeed[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowUpSpeedForwardOldRangeMin[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowUpSpeedForwardOldRangeMax[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowUpSpeedForwardNewRangeMin[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    std::uint8_t RowUpSpeedForwardNewRangeMax[0x1]; // 0x0460 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowAddedFOV) == 72, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowAddedFOV");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowJumpForward) == 112, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowJumpForward");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightOffsetClamp) == 152, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightOffsetClamp");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardOffsetOldRangeMin) == 192, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardOffsetOldRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardOffsetOldRangeMax) == 232, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardOffsetOldRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardOffsetNewRangeMin) == 272, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardOffsetNewRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardOffsetNewRangeMax) == 312, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardOffsetNewRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, T_Jumping) == 352, "Offset mismatch for UJunoCameraModifierTabascoTwist::T_Jumping");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardMultiplier) == 360, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardMultiplier");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, TargetUpOffset) == 400, "Offset mismatch for UJunoCameraModifierTabascoTwist::TargetUpOffset");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightOffsetBaseMod) == 440, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightOffsetBaseMod");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowFOVMaxSpeed) == 480, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowFOVMaxSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightOffsetOldRangeMin) == 520, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightOffsetOldRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightOffsetOldRangeMax) == 560, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightOffsetOldRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardRightConversionOldRangeMin) == 600, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardRightConversionOldRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardRightConversionOldRangeMax) == 640, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardRightConversionOldRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardRightConversionNewRangeMin) == 680, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardRightConversionNewRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardRightConversionNewRangeMax) == 720, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardRightConversionNewRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowForwardInterpSpeed) == 760, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowForwardInterpSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightInterpSpeed) == 800, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightInterpSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowUpInterpSpeed) == 840, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowUpInterpSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowRightOffsetSpeedGivenMod) == 880, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowRightOffsetSpeedGivenMod");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowFOVInterpSpeed) == 920, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowFOVInterpSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowOffsetVectorInterpSpeed) == 960, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowOffsetVectorInterpSpeed");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowUpSpeedForwardOldRangeMin) == 1000, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowUpSpeedForwardOldRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowUpSpeedForwardOldRangeMax) == 1040, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowUpSpeedForwardOldRangeMax");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowUpSpeedForwardNewRangeMin) == 1080, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowUpSpeedForwardNewRangeMin");
static_assert(offsetof(UJunoCameraModifierTabascoTwist, RowUpSpeedForwardNewRangeMax) == 1120, "Offset mismatch for UJunoCameraModifierTabascoTwist::RowUpSpeedForwardNewRangeMax");

// /Script/LFNTabascoTwist.JunoTabascoTwistCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoTabascoTwistCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TabascoTwistMovementAbility; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoTabascoTwistCheatManager, TabascoTwistMovementAbility) == 40, "Offset mismatch for UJunoTabascoTwistCheatManager::TabascoTwistMovementAbility");
