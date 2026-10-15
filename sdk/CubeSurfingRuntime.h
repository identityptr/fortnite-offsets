/**
 * decamp dumper generated SDK
 * Package: /Script/CubeSurfingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CubeSurfingRuntime.CubeSurfingEvent_BoostCooldown
// Kind: ScriptStruct; super: none
struct FCubeSurfingEvent_BoostCooldown
{
public:
    float CooldownLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCubeSurfingEvent_BoostCooldown, CooldownLength) == 0, "Offset mismatch for FCubeSurfingEvent_BoostCooldown::CooldownLength");

// /Script/CubeSurfingRuntime.CubeSurfingEvent_BoostDuration
// Kind: ScriptStruct; super: none
struct FCubeSurfingEvent_BoostDuration
{
public:
    float MaxDuration; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCubeSurfingEvent_BoostDuration, MaxDuration) == 0, "Offset mismatch for FCubeSurfingEvent_BoostDuration::MaxDuration");

// /Script/CubeSurfingRuntime.CubeSurfingEvent_BoostFailed
// Kind: ScriptStruct; super: none
struct FCubeSurfingEvent_BoostFailed
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CubeSurfingRuntime.CubeSurfingEvent_CrashLanding
// Kind: ScriptStruct; super: none
struct FCubeSurfingEvent_CrashLanding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CubeSurfingRuntime.CubeSurfingEvent_Jump
// Kind: ScriptStruct; super: none
struct FCubeSurfingEvent_Jump
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CubeSurfingRuntime.CubeSurfingHoverData
// Kind: ScriptStruct; super: none
struct FCubeSurfingHoverData
{
public:
    std::uint8_t TargetHeight[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t ThrustForce[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t Dampening[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t DampeningMagnet[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t MagnetMultiplier[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MagnetMaxHeight[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCubeSurfingHoverData, TargetHeight) == 0, "Offset mismatch for FCubeSurfingHoverData::TargetHeight");
static_assert(offsetof(FCubeSurfingHoverData, ThrustForce) == 48, "Offset mismatch for FCubeSurfingHoverData::ThrustForce");
static_assert(offsetof(FCubeSurfingHoverData, Dampening) == 96, "Offset mismatch for FCubeSurfingHoverData::Dampening");
static_assert(offsetof(FCubeSurfingHoverData, DampeningMagnet) == 144, "Offset mismatch for FCubeSurfingHoverData::DampeningMagnet");
static_assert(offsetof(FCubeSurfingHoverData, MagnetMultiplier) == 192, "Offset mismatch for FCubeSurfingHoverData::MagnetMultiplier");
static_assert(offsetof(FCubeSurfingHoverData, MagnetMaxHeight) == 240, "Offset mismatch for FCubeSurfingHoverData::MagnetMaxHeight");

// /Script/CubeSurfingRuntime.CubeSurfingThrustData
// Kind: ScriptStruct; super: none
struct FCubeSurfingThrustData
{
public:
    std::uint8_t TargetSpeed[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t DragForward[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t DragRight[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t DragUp[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t TurnSpeed[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCubeSurfingThrustData, TargetSpeed) == 0, "Offset mismatch for FCubeSurfingThrustData::TargetSpeed");
static_assert(offsetof(FCubeSurfingThrustData, DragForward) == 48, "Offset mismatch for FCubeSurfingThrustData::DragForward");
static_assert(offsetof(FCubeSurfingThrustData, DragRight) == 96, "Offset mismatch for FCubeSurfingThrustData::DragRight");
static_assert(offsetof(FCubeSurfingThrustData, DragUp) == 144, "Offset mismatch for FCubeSurfingThrustData::DragUp");
static_assert(offsetof(FCubeSurfingThrustData, TurnSpeed) == 192, "Offset mismatch for FCubeSurfingThrustData::TurnSpeed");

// /Script/CubeSurfingRuntime.FortMovementMode_CreationDataCubeSurfing
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_CreationDataCubeSurfing
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_CreationDataCubeSurfing, LogicClass) == 8, "Offset mismatch for FFortMovementMode_CreationDataCubeSurfing::LogicClass");

// /Script/CubeSurfingRuntime.FortAnimInstanceProxy_CubeSurfing
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortAnimInstanceProxy_CubeSurfing
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t BoostingTag[0x4]; // 0x1170 (Size: 0x4, Type: StructProperty)
    std::uint8_t CubeSurfingTag[0x4]; // 0x1174 (Size: 0x4, Type: StructProperty)
    std::uint8_t TacSprintTag[0x4]; // 0x1178 (Size: 0x4, Type: StructProperty)
    std::uint8_t WalkingTag[0x4]; // 0x117C (Size: 0x4, Type: StructProperty)
    std::uint8_t ClamberingTag[0x4]; // 0x1180 (Size: 0x4, Type: StructProperty)
    std::uint8_t FallingTag[0x4]; // 0x1184 (Size: 0x4, Type: StructProperty)
    std::uint8_t AirborneTag[0x4]; // 0x1188 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreBoostTag[0x4]; // 0x118C (Size: 0x4, Type: StructProperty)
    std::uint8_t HurdlingTag[0x8]; // 0x1190 (Size: 0x8, Type: StructProperty)
    void* ActivateMontage; // 0x1198 (Size: 0x8, Type: ObjectProperty)
    float MaxHardTurnValue; // 0x11A0 (Size: 0x4, Type: FloatProperty)
    float MinHardTurnValue; // 0x11A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttachLocation[0x18]; // 0x11A8 (Size: 0x18, Type: StructProperty)
    float InputLeftRight; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    float InputFrontBack; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    float ZVelocity; // 0x11C8 (Size: 0x4, Type: FloatProperty)
    float NoiseAlpha; // 0x11CC (Size: 0x4, Type: FloatProperty)
    float NoiseRate; // 0x11D0 (Size: 0x4, Type: FloatProperty)
    float StanceAdjustValue; // 0x11D4 (Size: 0x4, Type: FloatProperty)
    float ReactAlpha; // 0x11D8 (Size: 0x4, Type: FloatProperty)
    float SharpTurnAlphaFast; // 0x11DC (Size: 0x4, Type: FloatProperty)
    float SharpTurnAlphaSlow; // 0x11E0 (Size: 0x4, Type: FloatProperty)
    float SpringStiffnessXY; // 0x11E4 (Size: 0x4, Type: FloatProperty)
    float SpringStiffnessZ; // 0x11E8 (Size: 0x4, Type: FloatProperty)
    float SpringDampingXY; // 0x11EC (Size: 0x4, Type: FloatProperty)
    float SpringDampingZ; // 0x11F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSurfing; // 0x11F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoost; // 0x11F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWalking; // 0x11F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTacSprint; // 0x11F7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreBoost; // 0x11F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActivateMontage; // 0x11F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsClambering; // 0x11FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActorHiddenInGame; // 0x11FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreLand; // 0x11FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLanding; // 0x11FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFall; // 0x11FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBypassArmAdditive; // 0x11FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t RootRotInterp[0x18]; // 0x1200 (Size: 0x18, Type: StructProperty)
    float ChangeInDirection; // 0x1218 (Size: 0x4, Type: FloatProperty)
    float PreviousTurn; // 0x121C (Size: 0x4, Type: FloatProperty)
    float ZVelocityInterp; // 0x1220 (Size: 0x4, Type: FloatProperty)
    float SlopePitch; // 0x1224 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTurn; // 0x1228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnLeft; // 0x1229 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnLeft180; // 0x122A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnRight; // 0x122B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurnRight180; // 0x122C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStanceAdjustGateOpen; // 0x122D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetOpenStanceAdjustGateAftterDelayDoOnce; // 0x122E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDoorBashing; // 0x122F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, BoostingTag) == 4464, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::BoostingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, CubeSurfingTag) == 4468, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::CubeSurfingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, TacSprintTag) == 4472, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::TacSprintTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, WalkingTag) == 4476, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::WalkingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ClamberingTag) == 4480, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ClamberingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, FallingTag) == 4484, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::FallingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, AirborneTag) == 4488, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::AirborneTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, PreBoostTag) == 4492, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::PreBoostTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, HurdlingTag) == 4496, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::HurdlingTag");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ActivateMontage) == 4504, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ActivateMontage");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, MaxHardTurnValue) == 4512, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::MaxHardTurnValue");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, MinHardTurnValue) == 4516, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::MinHardTurnValue");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, AttachLocation) == 4520, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::AttachLocation");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, InputLeftRight) == 4544, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::InputLeftRight");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, InputFrontBack) == 4548, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::InputFrontBack");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ZVelocity) == 4552, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ZVelocity");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, NoiseAlpha) == 4556, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::NoiseAlpha");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, NoiseRate) == 4560, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::NoiseRate");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, StanceAdjustValue) == 4564, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::StanceAdjustValue");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ReactAlpha) == 4568, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ReactAlpha");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SharpTurnAlphaFast) == 4572, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SharpTurnAlphaFast");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SharpTurnAlphaSlow) == 4576, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SharpTurnAlphaSlow");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SpringStiffnessXY) == 4580, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SpringStiffnessXY");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SpringStiffnessZ) == 4584, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SpringStiffnessZ");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SpringDampingXY) == 4588, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SpringDampingXY");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SpringDampingZ) == 4592, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SpringDampingZ");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsSurfing) == 4596, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsSurfing");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsBoost) == 4597, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsBoost");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsWalking) == 4598, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsWalking");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTacSprint) == 4599, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTacSprint");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsPreBoost) == 4600, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsPreBoost");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsActivateMontage) == 4601, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsActivateMontage");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsClambering) == 4602, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsClambering");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bActorHiddenInGame) == 4603, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bActorHiddenInGame");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsPreLand) == 4604, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsPreLand");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsLanding) == 4605, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsLanding");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsFall) == 4606, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsFall");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bBypassArmAdditive) == 4607, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bBypassArmAdditive");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, RootRotInterp) == 4608, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::RootRotInterp");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ChangeInDirection) == 4632, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ChangeInDirection");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, PreviousTurn) == 4636, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::PreviousTurn");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, ZVelocityInterp) == 4640, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::ZVelocityInterp");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, SlopePitch) == 4644, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::SlopePitch");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTurn) == 4648, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTurn");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTurnLeft) == 4649, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTurnLeft");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTurnLeft180) == 4650, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTurnLeft180");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTurnRight) == 4651, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTurnRight");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsTurnRight180) == 4652, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsTurnRight180");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsStanceAdjustGateOpen) == 4653, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsStanceAdjustGateOpen");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bResetOpenStanceAdjustGateAftterDelayDoOnce) == 4654, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bResetOpenStanceAdjustGateAftterDelayDoOnce");
static_assert(offsetof(UFortAnimInstanceProxy_CubeSurfing, bIsDoorBashing) == 4655, "Offset mismatch for UFortAnimInstanceProxy_CubeSurfing::bIsDoorBashing");

// /Script/CubeSurfingRuntime.FortMovementMode_ExtLogicCubeSurfing
// Kind: Class; super: FortMovementMode_ItemActivated
class UFortMovementMode_ExtLogicCubeSurfing
{
public:
    std::uint8_t Pad_0000[0x3A0]; // 0x0000
    TMap<void*, void*> StateTags; // 0x03A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t OverWaterTag[0x8]; // 0x03B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t MovementRampUpTime[0x28]; // 0x03B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostReadyDelay[0x28]; // 0x03E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementInputRecoveryTimeStart[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementInputRecoveryTimeEnd[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalSpeedLimit[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplyForcesRelativeToGroundNormal[0x28]; // 0x0480 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownwardVelocityCancelHeight[0x28]; // 0x04A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RampUpThrustData[0xF0]; // 0x04D0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t GroundedThrustData[0xF0]; // 0x05C0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t GroundedNeutralThrustData[0xF0]; // 0x06B0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t GroundedBrakingThrustData[0xF0]; // 0x07A0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t CuttingThrustData[0xF0]; // 0x0890 (Size: 0xF0, Type: StructProperty)
    std::uint8_t PreBoostThrustData[0xF0]; // 0x0980 (Size: 0xF0, Type: StructProperty)
    std::uint8_t BoostingThrustData[0xF0]; // 0x0A70 (Size: 0xF0, Type: StructProperty)
    std::uint8_t TurnInputMode; // 0x0B60 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B61
    std::uint8_t MaxStrafeAngleDegrees[0x28]; // 0x0B68 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDampeningMultiplier[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t TurnDampeningStartAngleDegrees[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSlopeAngleDegrees[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSlopeAngleDegrees[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplySlopeForceWhileMovingDownSlopes[0x28]; // 0x0C30 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlopeForce[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlopeForceRight[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTurnAroundForwardAngle[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultHoverData[0x120]; // 0x0CD0 (Size: 0x120, Type: StructProperty)
    std::uint8_t Gravity[0x28]; // 0x0DF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverMaxUpdateRate[0x28]; // 0x0E18 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverMaxUpwardVelocity[0x28]; // 0x0E40 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpMode; // 0x0E68 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0E69
    std::uint8_t DoubleJumpExitTime[0x28]; // 0x0E70 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpSpeed[0x28]; // 0x0E98 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxJumpSpeed[0x28]; // 0x0EC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpSpeedIsMinimum[0x28]; // 0x0EE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanJumpOnSteepSlopes[0x28]; // 0x0F10 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSlopeJumpAngleDegrees[0x28]; // 0x0F38 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanBoostWithSprint[0x28]; // 0x0F60 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanBoostWithSecondary[0x28]; // 0x0F88 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostActivationMode; // 0x0FB0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BoostMode; // 0x0FB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0FB2
    std::uint8_t BoostFullChargeTime[0x28]; // 0x0FB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostAutoChargeTime[0x28]; // 0x0FE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostRetentionTimeStart[0x28]; // 0x1008 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostRetentionTimeEnd[0x28]; // 0x1030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBoostDuration[0x28]; // 0x1058 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBoostDuration[0x28]; // 0x1080 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreBoostDuration[0x28]; // 0x10A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTimeBetweenBoosts[0x28]; // 0x10D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostGrantsFlight[0x28]; // 0x10F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostImmediatelyToMaxSpeed[0x28]; // 0x1120 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostPopUpTime[0x28]; // 0x1148 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostPopUpMinUpDirection[0x28]; // 0x1170 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingCameraUpDirectionMagnification[0x28]; // 0x1198 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingJumpMinUpDirection[0x28]; // 0x11C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingCrouchMaxUpDirection[0xE0]; // 0x11E8 (Size: 0xE0, Type: StructProperty)
    FMulticastInlineDelegate OnCubeSurfingBoostCooldownCompleted; // 0x12C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingBoostCharging; // 0x12D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingBoost; // 0x12E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingBoostEnd; // 0x12F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingFailedBoost; // 0x1308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingBeginRaiseWave; // 0x1318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingEndRaiseWave; // 0x1328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingLanded; // 0x1338 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingAirborne; // 0x1348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCubeSurfingJump; // 0x1358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWaterActorChanged; // 0x1368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCrashLanding; // 0x1378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, StateTags) == 928, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::StateTags");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OverWaterTag) == 944, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OverWaterTag");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MovementRampUpTime) == 952, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MovementRampUpTime");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostReadyDelay) == 992, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostReadyDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MovementInputRecoveryTimeStart) == 1032, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MovementInputRecoveryTimeStart");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MovementInputRecoveryTimeEnd) == 1072, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MovementInputRecoveryTimeEnd");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, GlobalSpeedLimit) == 1112, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::GlobalSpeedLimit");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, ApplyForcesRelativeToGroundNormal) == 1152, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::ApplyForcesRelativeToGroundNormal");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, DownwardVelocityCancelHeight) == 1192, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::DownwardVelocityCancelHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, RampUpThrustData) == 1232, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::RampUpThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, GroundedThrustData) == 1472, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::GroundedThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, GroundedNeutralThrustData) == 1712, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::GroundedNeutralThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, GroundedBrakingThrustData) == 1952, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::GroundedBrakingThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, CuttingThrustData) == 2192, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::CuttingThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, PreBoostThrustData) == 2432, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::PreBoostThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostingThrustData) == 2672, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostingThrustData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, TurnInputMode) == 2912, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::TurnInputMode");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxStrafeAngleDegrees) == 2920, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxStrafeAngleDegrees");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, TurnDampeningMultiplier) == 2960, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::TurnDampeningMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, TurnDampeningStartAngleDegrees) == 3000, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::TurnDampeningStartAngleDegrees");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MinSlopeAngleDegrees) == 3040, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MinSlopeAngleDegrees");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxSlopeAngleDegrees) == 3080, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxSlopeAngleDegrees");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, ApplySlopeForceWhileMovingDownSlopes) == 3120, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::ApplySlopeForceWhileMovingDownSlopes");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, SlopeForce) == 3160, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::SlopeForce");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, SlopeForceRight) == 3200, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::SlopeForceRight");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxTurnAroundForwardAngle) == 3240, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxTurnAroundForwardAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, DefaultHoverData) == 3280, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::DefaultHoverData");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, Gravity) == 3568, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::Gravity");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, HoverMaxUpdateRate) == 3608, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::HoverMaxUpdateRate");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, HoverMaxUpwardVelocity) == 3648, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::HoverMaxUpwardVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, JumpMode) == 3688, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::JumpMode");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, DoubleJumpExitTime) == 3696, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::DoubleJumpExitTime");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, JumpSpeed) == 3736, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::JumpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxJumpSpeed) == 3776, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxJumpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, JumpSpeedIsMinimum) == 3816, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::JumpSpeedIsMinimum");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, CanJumpOnSteepSlopes) == 3856, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::CanJumpOnSteepSlopes");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxSlopeJumpAngleDegrees) == 3896, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxSlopeJumpAngleDegrees");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, CanBoostWithSprint) == 3936, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::CanBoostWithSprint");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, CanBoostWithSecondary) == 3976, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::CanBoostWithSecondary");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostActivationMode) == 4016, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostActivationMode");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostMode) == 4017, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostMode");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostFullChargeTime) == 4024, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostFullChargeTime");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostAutoChargeTime) == 4064, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostAutoChargeTime");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostRetentionTimeStart) == 4104, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostRetentionTimeStart");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostRetentionTimeEnd) == 4144, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostRetentionTimeEnd");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MaxBoostDuration) == 4184, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MaxBoostDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MinBoostDuration) == 4224, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MinBoostDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, PreBoostDuration) == 4264, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::PreBoostDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, MinTimeBetweenBoosts) == 4304, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::MinTimeBetweenBoosts");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostGrantsFlight) == 4344, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostGrantsFlight");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostImmediatelyToMaxSpeed) == 4384, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostImmediatelyToMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostPopUpTime) == 4424, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostPopUpTime");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, BoostPopUpMinUpDirection) == 4464, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::BoostPopUpMinUpDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, FlyingCameraUpDirectionMagnification) == 4504, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::FlyingCameraUpDirectionMagnification");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, FlyingJumpMinUpDirection) == 4544, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::FlyingJumpMinUpDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, FlyingCrouchMaxUpDirection) == 4584, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::FlyingCrouchMaxUpDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingBoostCooldownCompleted) == 4808, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingBoostCooldownCompleted");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingBoostCharging) == 4824, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingBoostCharging");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingBoost) == 4840, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingBoostEnd) == 4856, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingBoostEnd");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingFailedBoost) == 4872, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingFailedBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingBeginRaiseWave) == 4888, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingBeginRaiseWave");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingEndRaiseWave) == 4904, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingEndRaiseWave");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingLanded) == 4920, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingLanded");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingAirborne) == 4936, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingAirborne");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCubeSurfingJump) == 4952, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCubeSurfingJump");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnWaterActorChanged) == 4968, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnWaterActorChanged");
static_assert(offsetof(UFortMovementMode_ExtLogicCubeSurfing, OnCrashLanding) == 4984, "Offset mismatch for UFortMovementMode_ExtLogicCubeSurfing::OnCrashLanding");

// /Script/CubeSurfingRuntime.FortMovementMode_RuntimeDataCubeSurfing
// Kind: Class; super: FortMovementMode_ItemActivatedRuntimeData
class UFortMovementMode_RuntimeDataCubeSurfing
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TWeakObjectPtr<void> PendingSimProxyWaterBody; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0088
    TWeakObjectPtr<void> WaterBody; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_RuntimeDataCubeSurfing, PendingSimProxyWaterBody) == 128, "Offset mismatch for UFortMovementMode_RuntimeDataCubeSurfing::PendingSimProxyWaterBody");
static_assert(offsetof(UFortMovementMode_RuntimeDataCubeSurfing, WaterBody) == 224, "Offset mismatch for UFortMovementMode_RuntimeDataCubeSurfing::WaterBody");
