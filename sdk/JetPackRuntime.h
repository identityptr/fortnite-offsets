/**
 * decamp dumper generated SDK
 * Package: /Script/JetPackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JetPackRuntime.JetpackDestructionTraceConfig
// Kind: ScriptStruct; super: none
struct FJetpackDestructionTraceConfig
{
public:
    std::uint8_t bEnableDebugForDestructionTrace; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MaxTraceIteration; // 0x0004 (Size: 0x4, Type: IntProperty)
    FName TraceProfileName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* DamageGEClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DestructionTraceMinDistance[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmallCapsuleRadius[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmallCapsuleHalfHeight[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullCapsuleRadius[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullCapsuleHalfHeight[0x28]; // 0x00B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t KnockbackMagnitudeForVehicle[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VehicleImpulseAdditive[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmallPropSmashingSizeThreshold[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJetpackDestructionTraceConfig, bEnableDebugForDestructionTrace) == 0, "Offset mismatch for FJetpackDestructionTraceConfig::bEnableDebugForDestructionTrace");
static_assert(offsetof(FJetpackDestructionTraceConfig, MaxTraceIteration) == 4, "Offset mismatch for FJetpackDestructionTraceConfig::MaxTraceIteration");
static_assert(offsetof(FJetpackDestructionTraceConfig, TraceProfileName) == 8, "Offset mismatch for FJetpackDestructionTraceConfig::TraceProfileName");
static_assert(offsetof(FJetpackDestructionTraceConfig, DamageGEClass) == 16, "Offset mismatch for FJetpackDestructionTraceConfig::DamageGEClass");
static_assert(offsetof(FJetpackDestructionTraceConfig, DestructionTraceMinDistance) == 24, "Offset mismatch for FJetpackDestructionTraceConfig::DestructionTraceMinDistance");
static_assert(offsetof(FJetpackDestructionTraceConfig, SmallCapsuleRadius) == 64, "Offset mismatch for FJetpackDestructionTraceConfig::SmallCapsuleRadius");
static_assert(offsetof(FJetpackDestructionTraceConfig, SmallCapsuleHalfHeight) == 104, "Offset mismatch for FJetpackDestructionTraceConfig::SmallCapsuleHalfHeight");
static_assert(offsetof(FJetpackDestructionTraceConfig, FullCapsuleRadius) == 144, "Offset mismatch for FJetpackDestructionTraceConfig::FullCapsuleRadius");
static_assert(offsetof(FJetpackDestructionTraceConfig, FullCapsuleHalfHeight) == 184, "Offset mismatch for FJetpackDestructionTraceConfig::FullCapsuleHalfHeight");
static_assert(offsetof(FJetpackDestructionTraceConfig, KnockbackMagnitudeForVehicle) == 224, "Offset mismatch for FJetpackDestructionTraceConfig::KnockbackMagnitudeForVehicle");
static_assert(offsetof(FJetpackDestructionTraceConfig, VehicleImpulseAdditive) == 264, "Offset mismatch for FJetpackDestructionTraceConfig::VehicleImpulseAdditive");
static_assert(offsetof(FJetpackDestructionTraceConfig, SmallPropSmashingSizeThreshold) == 304, "Offset mismatch for FJetpackDestructionTraceConfig::SmallPropSmashingSizeThreshold");

// /Script/JetPackRuntime.JetpackFlyingStatusConfig
// Kind: ScriptStruct; super: none
struct FJetpackFlyingStatusConfig
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t CooldownTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t CooldownDuration[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJetpackFlyingStatusConfig, Status) == 0, "Offset mismatch for FJetpackFlyingStatusConfig::Status");
static_assert(offsetof(FJetpackFlyingStatusConfig, CooldownTag) == 4, "Offset mismatch for FJetpackFlyingStatusConfig::CooldownTag");
static_assert(offsetof(FJetpackFlyingStatusConfig, CooldownDuration) == 8, "Offset mismatch for FJetpackFlyingStatusConfig::CooldownDuration");

// /Script/JetPackRuntime.AFortGameplayCueNotifyLoop_Jetpack
// Kind: Class; super: FortGameplayCueNotify_Loop
class UAFortGameplayCueNotifyLoop_Jetpack
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t IsAscendingParamName[0x4]; // 0x0C48 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsFlappingParamName[0x4]; // 0x0C4C (Size: 0x4, Type: NameProperty)
    std::uint8_t FlappingAlphaParamName[0x4]; // 0x0C50 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsRollingParamName[0x4]; // 0x0C54 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsBoostingParamName[0x4]; // 0x0C58 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsDivingParamName[0x4]; // 0x0C5C (Size: 0x4, Type: NameProperty)
    std::uint8_t PitchParamName[0x4]; // 0x0C60 (Size: 0x4, Type: NameProperty)
    std::uint8_t RollParamName[0x4]; // 0x0C64 (Size: 0x4, Type: NameProperty)
    std::uint8_t SpeedParamName[0x4]; // 0x0C68 (Size: 0x4, Type: NameProperty)
    std::uint8_t AltitudeInterpParamName[0x4]; // 0x0C6C (Size: 0x4, Type: NameProperty)
    std::uint8_t HeightRange[0x1]; // 0x0C70 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, IsAscendingParamName) == 3144, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::IsAscendingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, IsFlappingParamName) == 3148, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::IsFlappingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, FlappingAlphaParamName) == 3152, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::FlappingAlphaParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, IsRollingParamName) == 3156, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::IsRollingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, IsBoostingParamName) == 3160, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::IsBoostingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, IsDivingParamName) == 3164, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::IsDivingParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, PitchParamName) == 3168, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::PitchParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, RollParamName) == 3172, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::RollParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, SpeedParamName) == 3176, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::SpeedParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, AltitudeInterpParamName) == 3180, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::AltitudeInterpParamName");
static_assert(offsetof(UAFortGameplayCueNotifyLoop_Jetpack, HeightRange) == 3184, "Offset mismatch for UAFortGameplayCueNotifyLoop_Jetpack::HeightRange");

// /Script/JetPackRuntime.FortCameraModifier_Jetpack
// Kind: Class; super: FortCameraModifier_Custom
class UFortCameraModifier_Jetpack
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t NativeWindingUpThrustEventTag[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeStartedThrustingEventTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeQuickThrustEventTag[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeHoveringTag[0x4]; // 0x008C (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeRepulsorCannonTag[0x4]; // 0x0090 (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeBoostingTag[0x4]; // 0x0094 (Size: 0x4, Type: StructProperty)
    void* NativeQuickThrustAnchorPercentCurve; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* NativeThrustingAnchorPercentCurve; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* NativeLeadInForwardPercentCurve; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* NativeLeadInPercentCurveStraightUp; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* NativeLeadInUpPercentCurve; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* NativeThrustingLateralAmountCurve; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* NativeThurstingForwardAmountCurve; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NativeScreenShakeOffsetVelocityOldRange[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeScreenShakeOffsetAccelerationOldRange[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentForwardVelocityLengthXYOldRange[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentForwardVelocityLengthXYNewRange[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentForwardUpSpeedABSOldRange[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentForwardUpSpeedABSNewRange[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentRightSpeedOldRange[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentRightSpeedNewRange[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentRightForwardABSOldRange[0x10]; // 0x0150 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentRightForwardABSNewRange[0x10]; // 0x0160 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentUpSpeedOldRange[0x10]; // 0x0170 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentUpSpeedNewRange[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentUpForwardABSOldRange[0x10]; // 0x0190 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentUpForwardABSNewRange[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentOffsetSpeedOldRange[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentOffsetSpeedNewRange[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentOffsetThrustPercentOldRange[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t NativeCurrentOffsetThrustPercentNewRange[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    double NativeLeadInTime; // 0x01F0 (Size: 0x8, Type: DoubleProperty)
    double NativeQuickThrustPullBackTime; // 0x01F8 (Size: 0x8, Type: DoubleProperty)
    double NativeDivePercentMax; // 0x0200 (Size: 0x8, Type: DoubleProperty)
    double NativeWindUpHoverTime; // 0x0208 (Size: 0x8, Type: DoubleProperty)
    double NativeInitialHoverXInputThreshold; // 0x0210 (Size: 0x8, Type: DoubleProperty)
    double NativeScreenShakeOffsetTimeMultiplier; // 0x0218 (Size: 0x8, Type: DoubleProperty)
    double NativeScreenShakeOffsetThrustingSinMultiplier; // 0x0220 (Size: 0x8, Type: DoubleProperty)
    double NativeScreenShakeOffsetNonThrustingSinMultiplier; // 0x0228 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentForwardIsHovering; // 0x0230 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentForwardIsNotHovering; // 0x0238 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentForwardIsBoosting; // 0x0240 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentRightIsHovering; // 0x0248 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentRightIsNotHovering; // 0x0250 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentRightIsBoosting; // 0x0258 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentRightSavedSignIsHovering; // 0x0260 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentRightSavedSignIsNotHovering; // 0x0268 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsInLeadIn; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsNotInLeadIn; // 0x0278 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpLowUpSpeed; // 0x0280 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsHovering; // 0x0288 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsNotHovering; // 0x0290 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsBoosting; // 0x0298 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentUpIsNotBoosting; // 0x02A0 (Size: 0x8, Type: DoubleProperty)
    double NativeCalculatedOffsetInterpSpeedRepulsorCannon; // 0x02A8 (Size: 0x8, Type: DoubleProperty)
    double NativeCalculatedOffsetInterpSpeedIsHovering; // 0x02B0 (Size: 0x8, Type: DoubleProperty)
    double NativeCalculatedOffsetInterpSpeedIsNotHovering; // 0x02B8 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetInInitialHover; // 0x02C0 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedInInitialHover; // 0x02C8 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetNotInInitialHover; // 0x02D0 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedNotInInitialHover; // 0x02D8 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetRepulsorCannon; // 0x02E0 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedRepulsorCannon; // 0x02E8 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetThrustWindingUp; // 0x02F0 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedThrustWindingUp; // 0x02F8 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetThrustNotWindingUp; // 0x0300 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedThrustNotWindingUp; // 0x0308 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetIsHovering; // 0x0310 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedIsHovering; // 0x0318 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVTargetIsNotHovering; // 0x0320 (Size: 0x8, Type: DoubleProperty)
    double NativeFOVInterpSpeedIsNotHovering; // 0x0328 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetInterpSpeed; // 0x0330 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetUpSubtrahend; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetForwardVectorMultiplier; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetRightVectorMultiplier; // 0x0348 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetUpVectorMultiplier; // 0x0350 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetThrustWindingUpInterpRate; // 0x0358 (Size: 0x8, Type: DoubleProperty)
    double NativeCurrentOffsetNotThrustingInterpRate; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    double NativeNewViewLocationForwardVectorMultiplier; // 0x0368 (Size: 0x8, Type: DoubleProperty)
    double NativeNewViewLocationUpVectorMultiplier; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    double NativePreThrustWindupDuration; // 0x0378 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFortCameraModifier_Jetpack, NativeWindingUpThrustEventTag) == 128, "Offset mismatch for UFortCameraModifier_Jetpack::NativeWindingUpThrustEventTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeStartedThrustingEventTag) == 132, "Offset mismatch for UFortCameraModifier_Jetpack::NativeStartedThrustingEventTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeQuickThrustEventTag) == 136, "Offset mismatch for UFortCameraModifier_Jetpack::NativeQuickThrustEventTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeHoveringTag) == 140, "Offset mismatch for UFortCameraModifier_Jetpack::NativeHoveringTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeRepulsorCannonTag) == 144, "Offset mismatch for UFortCameraModifier_Jetpack::NativeRepulsorCannonTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeBoostingTag) == 148, "Offset mismatch for UFortCameraModifier_Jetpack::NativeBoostingTag");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeQuickThrustAnchorPercentCurve) == 152, "Offset mismatch for UFortCameraModifier_Jetpack::NativeQuickThrustAnchorPercentCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeThrustingAnchorPercentCurve) == 160, "Offset mismatch for UFortCameraModifier_Jetpack::NativeThrustingAnchorPercentCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeLeadInForwardPercentCurve) == 168, "Offset mismatch for UFortCameraModifier_Jetpack::NativeLeadInForwardPercentCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeLeadInPercentCurveStraightUp) == 176, "Offset mismatch for UFortCameraModifier_Jetpack::NativeLeadInPercentCurveStraightUp");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeLeadInUpPercentCurve) == 184, "Offset mismatch for UFortCameraModifier_Jetpack::NativeLeadInUpPercentCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeThrustingLateralAmountCurve) == 192, "Offset mismatch for UFortCameraModifier_Jetpack::NativeThrustingLateralAmountCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeThurstingForwardAmountCurve) == 200, "Offset mismatch for UFortCameraModifier_Jetpack::NativeThurstingForwardAmountCurve");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeScreenShakeOffsetVelocityOldRange) == 208, "Offset mismatch for UFortCameraModifier_Jetpack::NativeScreenShakeOffsetVelocityOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeScreenShakeOffsetAccelerationOldRange) == 224, "Offset mismatch for UFortCameraModifier_Jetpack::NativeScreenShakeOffsetAccelerationOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardVelocityLengthXYOldRange) == 240, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardVelocityLengthXYOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardVelocityLengthXYNewRange) == 256, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardVelocityLengthXYNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardUpSpeedABSOldRange) == 272, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardUpSpeedABSOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardUpSpeedABSNewRange) == 288, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardUpSpeedABSNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightSpeedOldRange) == 304, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightSpeedNewRange) == 320, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightForwardABSOldRange) == 336, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightForwardABSOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightForwardABSNewRange) == 352, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightForwardABSNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpSpeedOldRange) == 368, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpSpeedNewRange) == 384, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpForwardABSOldRange) == 400, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpForwardABSOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpForwardABSNewRange) == 416, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpForwardABSNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetSpeedOldRange) == 432, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetSpeedOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetSpeedNewRange) == 448, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetSpeedNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetThrustPercentOldRange) == 464, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetThrustPercentOldRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetThrustPercentNewRange) == 480, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetThrustPercentNewRange");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeLeadInTime) == 496, "Offset mismatch for UFortCameraModifier_Jetpack::NativeLeadInTime");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeQuickThrustPullBackTime) == 504, "Offset mismatch for UFortCameraModifier_Jetpack::NativeQuickThrustPullBackTime");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeDivePercentMax) == 512, "Offset mismatch for UFortCameraModifier_Jetpack::NativeDivePercentMax");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeWindUpHoverTime) == 520, "Offset mismatch for UFortCameraModifier_Jetpack::NativeWindUpHoverTime");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeInitialHoverXInputThreshold) == 528, "Offset mismatch for UFortCameraModifier_Jetpack::NativeInitialHoverXInputThreshold");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeScreenShakeOffsetTimeMultiplier) == 536, "Offset mismatch for UFortCameraModifier_Jetpack::NativeScreenShakeOffsetTimeMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeScreenShakeOffsetThrustingSinMultiplier) == 544, "Offset mismatch for UFortCameraModifier_Jetpack::NativeScreenShakeOffsetThrustingSinMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeScreenShakeOffsetNonThrustingSinMultiplier) == 552, "Offset mismatch for UFortCameraModifier_Jetpack::NativeScreenShakeOffsetNonThrustingSinMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardIsHovering) == 560, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardIsNotHovering) == 568, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentForwardIsBoosting) == 576, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentForwardIsBoosting");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightIsHovering) == 584, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightIsNotHovering) == 592, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightIsBoosting) == 600, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightIsBoosting");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightSavedSignIsHovering) == 608, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightSavedSignIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentRightSavedSignIsNotHovering) == 616, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentRightSavedSignIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsInLeadIn) == 624, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsInLeadIn");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsNotInLeadIn) == 632, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsNotInLeadIn");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpLowUpSpeed) == 640, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpLowUpSpeed");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsHovering) == 648, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsNotHovering) == 656, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsBoosting) == 664, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsBoosting");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentUpIsNotBoosting) == 672, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentUpIsNotBoosting");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCalculatedOffsetInterpSpeedRepulsorCannon) == 680, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCalculatedOffsetInterpSpeedRepulsorCannon");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCalculatedOffsetInterpSpeedIsHovering) == 688, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCalculatedOffsetInterpSpeedIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCalculatedOffsetInterpSpeedIsNotHovering) == 696, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCalculatedOffsetInterpSpeedIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetInInitialHover) == 704, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetInInitialHover");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedInInitialHover) == 712, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedInInitialHover");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetNotInInitialHover) == 720, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetNotInInitialHover");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedNotInInitialHover) == 728, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedNotInInitialHover");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetRepulsorCannon) == 736, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetRepulsorCannon");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedRepulsorCannon) == 744, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedRepulsorCannon");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetThrustWindingUp) == 752, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetThrustWindingUp");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedThrustWindingUp) == 760, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedThrustWindingUp");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetThrustNotWindingUp) == 768, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetThrustNotWindingUp");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedThrustNotWindingUp) == 776, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedThrustNotWindingUp");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetIsHovering) == 784, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedIsHovering) == 792, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedIsHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVTargetIsNotHovering) == 800, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVTargetIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeFOVInterpSpeedIsNotHovering) == 808, "Offset mismatch for UFortCameraModifier_Jetpack::NativeFOVInterpSpeedIsNotHovering");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetInterpSpeed) == 816, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetInterpSpeed");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetUpSubtrahend) == 824, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetUpSubtrahend");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetForwardVectorMultiplier) == 832, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetForwardVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetRightVectorMultiplier) == 840, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetRightVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetUpVectorMultiplier) == 848, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetUpVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetThrustWindingUpInterpRate) == 856, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetThrustWindingUpInterpRate");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeCurrentOffsetNotThrustingInterpRate) == 864, "Offset mismatch for UFortCameraModifier_Jetpack::NativeCurrentOffsetNotThrustingInterpRate");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeNewViewLocationForwardVectorMultiplier) == 872, "Offset mismatch for UFortCameraModifier_Jetpack::NativeNewViewLocationForwardVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativeNewViewLocationUpVectorMultiplier) == 880, "Offset mismatch for UFortCameraModifier_Jetpack::NativeNewViewLocationUpVectorMultiplier");
static_assert(offsetof(UFortCameraModifier_Jetpack, NativePreThrustWindupDuration) == 888, "Offset mismatch for UFortCameraModifier_Jetpack::NativePreThrustWindupDuration");

// /Script/JetPackRuntime.FortGameplayAbility_LaunchJetpack
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_LaunchJetpack
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t TraceConfig[0x158]; // 0x0B20 (Size: 0x158, Type: StructProperty)
    std::uint8_t SmashThroughSmallPropsWhileThrusting[0x28]; // 0x0C78 (Size: 0x28, Type: StructProperty)
    std::uint8_t DestructionTraceDistanceMultiplier[0x28]; // 0x0CA0 (Size: 0x28, Type: StructProperty)
    double MinTimeBetweenHitThingsGCPlay; // 0x0CC8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HitThingsGCTag[0x4]; // 0x0CD0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DelayFuelUIEventTag[0x4]; // 0x0CD4 (Size: 0x4, Type: StructProperty)
    float ResetDestructionFuelCostTime; // 0x0CD8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0CDC
    void* UseFuelOnHitThingsGEClass; // 0x0CE0 (Size: 0x8, Type: ClassProperty)
    void* ThrustTelegraphClass; // 0x0CE8 (Size: 0x8, Type: ClassProperty)
    void* ThrustTelegraphWaterFX; // 0x0CF0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TraceObjectTypes; // 0x0CF8 (Size: 0x10, Type: ArrayProperty)
    double SpeedThresholdForSlowThrusting; // 0x0D08 (Size: 0x8, Type: DoubleProperty)
    double TracingStartDeltaDistance; // 0x0D10 (Size: 0x8, Type: DoubleProperty)
    double TracingEndDeltaDistance; // 0x0D18 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x60]; // 0x0D20
    void* TelegraphWaterNS; // 0x0D80 (Size: 0x8, Type: ObjectProperty)
    void* TelegraphActor; // 0x0D88 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NativeDestructionTraceIgnoredActors; // 0x0D90 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NativeDestructionTraceCameraIgnoredActors; // 0x0DA0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NativeCurrentLaunchState; // 0x0DB0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TraceConfig) == 2848, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TraceConfig");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, SmashThroughSmallPropsWhileThrusting) == 3192, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::SmashThroughSmallPropsWhileThrusting");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, DestructionTraceDistanceMultiplier) == 3232, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::DestructionTraceDistanceMultiplier");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, MinTimeBetweenHitThingsGCPlay) == 3272, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::MinTimeBetweenHitThingsGCPlay");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, HitThingsGCTag) == 3280, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::HitThingsGCTag");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, DelayFuelUIEventTag) == 3284, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::DelayFuelUIEventTag");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, ResetDestructionFuelCostTime) == 3288, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::ResetDestructionFuelCostTime");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, UseFuelOnHitThingsGEClass) == 3296, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::UseFuelOnHitThingsGEClass");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, ThrustTelegraphClass) == 3304, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::ThrustTelegraphClass");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, ThrustTelegraphWaterFX) == 3312, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::ThrustTelegraphWaterFX");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TraceObjectTypes) == 3320, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TraceObjectTypes");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, SpeedThresholdForSlowThrusting) == 3336, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::SpeedThresholdForSlowThrusting");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TracingStartDeltaDistance) == 3344, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TracingStartDeltaDistance");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TracingEndDeltaDistance) == 3352, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TracingEndDeltaDistance");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TelegraphWaterNS) == 3456, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TelegraphWaterNS");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, TelegraphActor) == 3464, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::TelegraphActor");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, NativeDestructionTraceIgnoredActors) == 3472, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::NativeDestructionTraceIgnoredActors");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, NativeDestructionTraceCameraIgnoredActors) == 3488, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::NativeDestructionTraceCameraIgnoredActors");
static_assert(offsetof(UFortGameplayAbility_LaunchJetpack, NativeCurrentLaunchState) == 3504, "Offset mismatch for UFortGameplayAbility_LaunchJetpack::NativeCurrentLaunchState");

// /Script/JetPackRuntime.FortJetpackFlyingBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortJetpackFlyingBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JetPackRuntime.FortMovementMode_ExtLogicFlyingJetpack
// Kind: Class; super: FortMovementMode_ExtLogicFlying
class UFortMovementMode_ExtLogicFlyingJetpack
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    std::uint8_t bIntendsToDescend; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToFly; // 0x01D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToAscend; // 0x01DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToHover; // 0x01DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToWindUp; // 0x01DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToThrust; // 0x01DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToRollLeft; // 0x01DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntendsToRollRight; // 0x01DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t TagQueryToFly[0x48]; // 0x01E0 (Size: 0x48, Type: StructProperty)
    TArray<void*> FlyingStatusConfigs; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    void* FlyingThroughCeilingGE; // 0x0238 (Size: 0x8, Type: ClassProperty)
    void* LowFrictionLandingGE; // 0x0240 (Size: 0x8, Type: ClassProperty)
    void* FuelUsageRateGE; // 0x0248 (Size: 0x8, Type: ClassProperty)
    void* SmashingGE; // 0x0250 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FlyingThroughCeilingTag[0x4]; // 0x0258 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnergyDrainCueTag[0x4]; // 0x025C (Size: 0x4, Type: StructProperty)
    std::uint8_t HitBonkCueTag[0x4]; // 0x0260 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventTagToTriggerCrashImpact[0x4]; // 0x0264 (Size: 0x4, Type: StructProperty)
    std::uint8_t ForceCrashDamagedTags[0x20]; // 0x0268 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToPreventLowFrictionLanding[0x20]; // 0x0288 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmashingThingsTags[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t HitResponseCrashImpactTags[0x20]; // 0x02C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagToSetByCallerDuration[0x4]; // 0x02E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagUsageRateSetByCallerMagnitude[0x4]; // 0x02EC (Size: 0x4, Type: StructProperty)
    std::uint8_t IsInChargingStateRepulsorCannonTag[0x4]; // 0x02F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RepulsorCannonTag[0x4]; // 0x02F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t JetpackInteriorTag[0x4]; // 0x02F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t InstantThrustEventTag[0x4]; // 0x02FC (Size: 0x4, Type: StructProperty)
    void* NativeDodgeSpeedCurve; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* NativeDodgeSpeedHoveringCurve; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DodgeSpeedMin[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedMax[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedDecayInitialDelay[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedRampExponent[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeSpeedDecayExponent[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DodgeDuration[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingTransitionDuration[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingSpeedBoundForInterpMin[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingSpeedBoundForInterpMax[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingVelocityInterpSpeedAtMinSpeed[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartedFlyingVelocityInterpSpeedAtMaxSpeed[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingLookPitchClampMin[0x28]; // 0x04C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingLookPitchClampMax[0x28]; // 0x04F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultLookPitchAngleOffset[0x28]; // 0x0518 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampMin[0x28]; // 0x0540 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampMax[0x28]; // 0x0568 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingInputWeightLookDirection[0x28]; // 0x0590 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingInputWeightLockDirection[0x28]; // 0x05B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingInputWeightHorizontal[0x28]; // 0x05E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedWhileThrusting[0x28]; // 0x0608 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtBaseSpeed[0x28]; // 0x0630 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtMaxLateralSpeed[0x28]; // 0x0658 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchInterpSpeedAtMaxTotalSpeed[0x28]; // 0x0680 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedWhileThrusting[0x28]; // 0x06A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedWhileBoosting[0x28]; // 0x06D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtMinBrakeSpeed[0x28]; // 0x06F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtBaseSpeed[0x28]; // 0x0720 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawInterpSpeedAtMaxLateralSpeed[0x28]; // 0x0748 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputInterpSpeedHorizontal[0x28]; // 0x0770 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingMovementInterpSpeed[0x28]; // 0x0798 (Size: 0x28, Type: StructProperty)
    std::uint8_t MoveInputActiveThreshold[0x28]; // 0x07C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingLookPitchClampMin[0x28]; // 0x07E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileAscendingMin[0x28]; // 0x0810 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileAscendingMax[0x28]; // 0x0838 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCeilingHeightAddLimitFromAscend[0x28]; // 0x0860 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingSpeedZUpAddedMin[0x28]; // 0x0888 (Size: 0x28, Type: StructProperty)
    std::uint8_t AscendingSpeedZUpAddedMax[0x28]; // 0x08B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCeilingHeightAddLimitFromBoost[0x28]; // 0x08D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileBoostingMin[0x28]; // 0x0900 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileBoostingMax[0x28]; // 0x0928 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentMaxLookPitchForMaxBoostCeilingHeightIncrease[0x28]; // 0x0950 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreThrustWindUpDuration[0x28]; // 0x0978 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingSpeedBase[0x28]; // 0x09A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingSpeedAddedAtMaxDistanceFromCeilingHeight[0x28]; // 0x09C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceFromCeilingHeightForMaxCrashingSpeedAdded[0x28]; // 0x09F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampFinalMax[0x28]; // 0x0A18 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampDelayBeforeLerpToFinalMax[0x28]; // 0x0A40 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashingLookPitchClampDurationToLerpToFinalMax[0x28]; // 0x0A68 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreCrashingSpeedBase[0x28]; // 0x0A90 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreCrashingInterpToSpeedMod[0x28]; // 0x0AB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAngleToPreventCrash[0x28]; // 0x0AE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrashImpactIgnoreWaterDuration[0x28]; // 0x0B08 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAngleForLowFrictionLanding[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationMin[0x28]; // 0x0B58 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationMax[0x28]; // 0x0B80 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionDurationScalar[0x28]; // 0x0BA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMinLowFrictionMult[0x28]; // 0x0BD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedForMaxLowFrictionMult[0x28]; // 0x0BF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromSpeedMin[0x28]; // 0x0C20 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromSpeedMax[0x28]; // 0x0C48 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactAngleForMaxLowFrictionDuration[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    std::uint8_t ImpactAngleForMinLowFrictionDuration[0x28]; // 0x0C98 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromImpactAngleMax[0x28]; // 0x0CC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowFrictionMultFromImpactAngleMin[0x28]; // 0x0CE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingSpeedBase[0x28]; // 0x0D10 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingSpeedAddedAtMaxDistanceFromCeilingHeight[0x28]; // 0x0D38 (Size: 0x28, Type: StructProperty)
    std::uint8_t FlyingDownZSpeedAddedWhileFalling[0x28]; // 0x0D60 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceFromCeilingHeightForMaxFlyingSpeedAdded[0x28]; // 0x0D88 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirBrakingDefaultMultiMin[0x28]; // 0x0DB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirBrakingDownSpeedMultiMin[0x28]; // 0x0DD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput[0x28]; // 0x0E00 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileHoldingForwardMin[0x28]; // 0x0E28 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightIncreaseSpeedWhileHoldingForwardMax[0x28]; // 0x0E50 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight[0x28]; // 0x0E78 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileFlying[0x28]; // 0x0EA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileBoosting[0x28]; // 0x0EC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight[0x28]; // 0x0EF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightMinDecreaseSpeedWhileAscending[0x28]; // 0x0F18 (Size: 0x28, Type: StructProperty)
    std::uint8_t CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight[0x28]; // 0x0F40 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightAboveWorldInterpSpeedIncreasing[0x28]; // 0x0F68 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightAboveWorldInterpSpeedDecreasing[0x28]; // 0x0F90 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightForMinAddedCeilingDecay[0x28]; // 0x0FB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightForMaxAddedCeilingDecay[0x28]; // 0x0FE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAddedCeilingDecayFromHeight[0x28]; // 0x1008 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightMax[0x28]; // 0x1030 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightDiminishingReturnsExponent[0x28]; // 0x1058 (Size: 0x28, Type: StructProperty)
    std::uint8_t GlobalCeilingHeightDiminishingReturnsRange[0x28]; // 0x1080 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredAngleToSurface[0x28]; // 0x10A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredVelocityAlongSurface[0x28]; // 0x10D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkimmingMinRequiredHeightAboveWorld[0x28]; // 0x10F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAngleForGroundHit[0x28]; // 0x1120 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityClampOnBonk[0x28]; // 0x1148 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputMultiplierOnRotationMovementInputMax[0x28]; // 0x1170 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputMultiplierOnRotationNotHoveringFactor[0x28]; // 0x1198 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputMultiplierOnRotationChargingStateMultiplier[0x28]; // 0x11C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeInitialHoverTime[0x28]; // 0x11E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchTurnSpeedMultiplier[0x28]; // 0x1210 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewOrientationYawInterpSpeedMultiplier[0x28]; // 0x1238 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeLoweredAccelerationFromHitSomethingMaxTime[0x28]; // 0x1260 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorAscendOffsetInterpSpeed[0x28]; // 0x1288 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLengthOldRangeX[0x28]; // 0x12B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLengthOldRangeY[0x28]; // 0x12D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLengthNewRangeX[0x28]; // 0x1300 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLengthNewRangeY[0x28]; // 0x1328 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorInputBackwardsThreshold[0x28]; // 0x1350 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorClampedMin[0x28]; // 0x1378 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorClampedMaxHovering[0x28]; // 0x13A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorClampedMaxNotHovering[0x28]; // 0x13C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLastLengthWithInputDeltaTimeMultiplier[0x28]; // 0x13F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLastLengthWithInputClampMin[0x28]; // 0x1418 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLastLengthWithInputClampMax[0x28]; // 0x1440 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorHoveringTimeThreshold[0x28]; // 0x1468 (Size: 0x28, Type: StructProperty)
    std::uint8_t UpdateMovementVectorLastLengthHoveringMultiplier[0x28]; // 0x1490 (Size: 0x28, Type: StructProperty)
    std::uint8_t NoiseOffsetInterpSpeed[0x28]; // 0x14B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotateMeshInitialHoverBuffer[0x28]; // 0x14E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleTargetMultiplerUp[0x28]; // 0x1508 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleTargetMultiplerDown[0x28]; // 0x1530 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleInterpSpeedOldRangeX[0x28]; // 0x1558 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleInterpSpeedOldRangeY[0x28]; // 0x1580 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleInterpSpeedNewRangeX[0x28]; // 0x15A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraSpeedFromFlightAngleInterpSpeedNewRangeY[0x28]; // 0x15D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BreakingVelocityInterpSpeed[0x28]; // 0x15F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostReductionLastFinialVelocityLengthThreshold[0x28]; // 0x1620 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostReductionValue[0x28]; // 0x1648 (Size: 0x28, Type: StructProperty)
    std::uint8_t RepulsorCannonBoost[0x28]; // 0x1670 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeBoostDepletionRate[0x28]; // 0x1698 (Size: 0x28, Type: StructProperty)
    std::uint8_t BonusBoostDepletionRate[0x28]; // 0x16C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BonusBoostUnNormalizedMax[0x28]; // 0x16E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NativeBoostMaxSpeedIncrease[0x28]; // 0x1710 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverBoost[0x28]; // 0x1738 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowerAccelerationFromHitPostProcessMovementVectorWeight[0x28]; // 0x1760 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementBelowHoveringFlyingDurationNewRangeX[0x28]; // 0x1788 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementBelowHoveringFlyingDurationNewRangeY[0x28]; // 0x17B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementBelowHoveringNewVelocityInterpTargetMaxSize[0x28]; // 0x17D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementBelowHoveringNewVelocityInterpSpeed[0x28]; // 0x1800 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringTransitionDurationModifier[0x28]; // 0x1828 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringFlyingDurationUpNewRangeX[0x28]; // 0x1850 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringFlyingDurationUpNewRangeY[0x28]; // 0x1878 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringFlyingDurationThreshold[0x28]; // 0x18A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeX[0x28]; // 0x18C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeY[0x28]; // 0x18F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeX[0x28]; // 0x1918 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeY[0x28]; // 0x1940 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeX[0x28]; // 0x1968 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeY[0x28]; // 0x1990 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeX[0x28]; // 0x19B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeY[0x28]; // 0x19E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementInitialHoverTimeMinModifier[0x28]; // 0x1A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementInitialHoverTimeMaxModifier[0x28]; // 0x1A30 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementBoost[0x28]; // 0x1A58 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementInitialHoverTimeMultipler[0x28]; // 0x1A80 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementStartedFlyingTransitionDurationSubtrahend[0x28]; // 0x1AA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementVelocityMultiplierFlyingDurationNewRangeX[0x28]; // 0x1AD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LaunchingMovementVelocityMultiplierFlyingDurationNewRangeY[0x28]; // 0x1AF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModeThrustingDurationThreshold[0x28]; // 0x1B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModePreCrashWindUpDurationModifier[0x28]; // 0x1B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModeBoost[0x28]; // 0x1B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModeRemapTimeCrashingOldRangeX[0x28]; // 0x1B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModeRemapTimeCrashingOldRangeY[0x28]; // 0x1BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewCrashingModeTimeCrashingDownVectorZ[0x28]; // 0x1BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateGoalYawMovementInputThreshold[0x28]; // 0x1C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverMovementVectorThreshold[0x28]; // 0x1C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverMovementInputXThreshold[0x28]; // 0x1C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverMovementInputXBackwardThreshold[0x28]; // 0x1C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverCameraRelativeMovementVectorXThreshold[0x28]; // 0x1CB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverMovementInputLengthThreshold[0x28]; // 0x1CD8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverInputAgreementWithMovementThreshold[0x28]; // 0x1D00 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnterHoverLoweredAccelerationFromHitSomethingCurrentTimeThreshold[0x28]; // 0x1D28 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverMovementInputXBackwardThreshold[0x28]; // 0x1D50 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverABSMovementInputYThreshold[0x28]; // 0x1D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverMovementVectorLengthThreshold[0x28]; // 0x1DA0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverMovementInputXThreshold[0x28]; // 0x1DC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverCameraRelativeMovementVectorXThreshold[0x28]; // 0x1DF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitHoverInputAgreementWithMovementThreshold[0x28]; // 0x1E18 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseFlyingTimeMultiplierOldRangeX[0x28]; // 0x1E40 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseFlyingTimeMultiplierOldRangeY[0x28]; // 0x1E68 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseFlyingTimeMultiplierNewRangeX[0x28]; // 0x1E90 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseFlyingTimeMultiplierNewRangeY[0x28]; // 0x1EB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseDotResultMultiplerOldRangeX[0x28]; // 0x1EE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseDotResultMultiplerOldRangeY[0x28]; // 0x1F08 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseDotResultMultiplerNewRangeX[0x28]; // 0x1F30 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseDotResultMultiplerNewRangeY[0x28]; // 0x1F58 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeX[0x28]; // 0x1F80 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeY[0x28]; // 0x1FA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeX[0x28]; // 0x1FD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeY[0x28]; // 0x1FF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMoveOrientationYawOldRangeX[0x28]; // 0x2020 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMoveOrientationYawOldRangeY[0x28]; // 0x2048 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMoveOrientationYawNewRangeX[0x28]; // 0x2070 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMoveOrientationYawNewRangeY[0x28]; // 0x2098 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMovementVectorLengthOldRangeX[0x28]; // 0x20C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMovementVectorLengthOldRangeY[0x28]; // 0x20E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMovementVectorLengthNewRangeX[0x28]; // 0x2110 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseMovementVectorLengthNewRangeY[0x28]; // 0x2138 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateYawNoiseFlyingTimeMultiplier[0x28]; // 0x2160 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationReturnValueWhenThrusting[0x28]; // 0x2188 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationReturnValueWhenHovering[0x28]; // 0x21B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationMovementVectorLengthOldRangeX[0x28]; // 0x21D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationMovementVectorLengthOldRangeY[0x28]; // 0x2200 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationMovementVectorLengthNewRangeX[0x28]; // 0x2228 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationMovementVectorLengthNewRangeY[0x28]; // 0x2250 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationHitSomethingTimeOldRangeX[0x28]; // 0x2278 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationHitSomethingTimeNewRangeX[0x28]; // 0x22A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalculateAccelerationHitSomethingTimeNewRangeY[0x28]; // 0x22C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampToMaxHeightCeilingHeightMaxModifier[0x28]; // 0x22F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampToMaxHeightPawnLocationZNewRangeX[0x28]; // 0x2318 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampToMaxHeightPawnLocationZNewRangeY[0x28]; // 0x2340 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampToMaxHeightAboveWorldNewRangeX[0x28]; // 0x2368 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampToMaxHeightAboveWorldNewRangeY[0x28]; // 0x2390 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorStartedFlyingTimeModifier[0x28]; // 0x23B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorTotalFlyingTimeNewRangeX[0x28]; // 0x23E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorTotalFlyingTimeNewRangeY[0x28]; // 0x2408 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorCurrentNoiseOffsetMultiplier[0x28]; // 0x2430 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorClampedLengthNewRangeX[0x28]; // 0x2458 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostProcessMovementVectorClampedLengthNewRangeY[0x28]; // 0x2480 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitResponseIsInInitialHoverBufferTime[0x28]; // 0x24A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HitResponseMovementVectorMultiplier[0x28]; // 0x24D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LoweredAccelerationFromHitSomethingMaxTime[0x28]; // 0x24F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRateUpdateInterval[0x28]; // 0x2520 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRateMagnitudeOldRangeX[0x28]; // 0x2548 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRateMagnitudeOldRangeY[0x28]; // 0x2570 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRateMagnitudeNewRangeX[0x28]; // 0x2598 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRateMagnitudeNewRangeY[0x28]; // 0x25C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayHitFXMovementVectorLengthThreshold[0x28]; // 0x25E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialHoverTargetTimeMultipler[0x28]; // 0x2610 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialHoverTargetXYCalculationNewRangeY[0x28]; // 0x2638 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstantThrustBoost[0x28]; // 0x2660 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstantThrustBonusBoost[0x28]; // 0x2688 (Size: 0x28, Type: StructProperty)
    std::uint8_t OutOfFuelCrashImpactMinSpeed[0x1]; // 0x26B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToDescend) == 472, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToDescend");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToFly) == 473, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToFly");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToAscend) == 474, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToAscend");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToHover) == 475, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToHover");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToWindUp) == 476, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToWindUp");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToThrust) == 477, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToThrust");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToRollLeft) == 478, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToRollLeft");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, bIntendsToRollRight) == 479, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::bIntendsToRollRight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, TagQueryToFly) == 480, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::TagQueryToFly");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingStatusConfigs) == 552, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingStatusConfigs");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingThroughCeilingGE) == 568, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingThroughCeilingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionLandingGE) == 576, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionLandingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateGE) == 584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SmashingGE) == 592, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SmashingGE");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingThroughCeilingTag) == 600, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingThroughCeilingTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnergyDrainCueTag) == 604, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnergyDrainCueTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HitBonkCueTag) == 608, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HitBonkCueTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EventTagToTriggerCrashImpact) == 612, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EventTagToTriggerCrashImpact");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ForceCrashDamagedTags) == 616, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ForceCrashDamagedTags");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, TagsToPreventLowFrictionLanding) == 648, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::TagsToPreventLowFrictionLanding");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SmashingThingsTags) == 680, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SmashingThingsTags");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HitResponseCrashImpactTags) == 712, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HitResponseCrashImpactTags");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, TagToSetByCallerDuration) == 744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::TagToSetByCallerDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, TagUsageRateSetByCallerMagnitude) == 748, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::TagUsageRateSetByCallerMagnitude");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, IsInChargingStateRepulsorCannonTag) == 752, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::IsInChargingStateRepulsorCannonTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, RepulsorCannonTag) == 756, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::RepulsorCannonTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, JetpackInteriorTag) == 760, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::JetpackInteriorTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InstantThrustEventTag) == 764, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InstantThrustEventTag");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeDodgeSpeedCurve) == 768, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeDodgeSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeDodgeSpeedHoveringCurve) == 776, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeDodgeSpeedHoveringCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeSpeedMin) == 784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeSpeedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeSpeedMax) == 824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeSpeedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeSpeedDecayInitialDelay) == 864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeSpeedDecayInitialDelay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeSpeedRampExponent) == 904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeSpeedRampExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeSpeedDecayExponent) == 944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeSpeedDecayExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DodgeDuration) == 984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DodgeDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, StartedFlyingTransitionDuration) == 1024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::StartedFlyingTransitionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, StartedFlyingSpeedBoundForInterpMin) == 1064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::StartedFlyingSpeedBoundForInterpMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, StartedFlyingSpeedBoundForInterpMax) == 1104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::StartedFlyingSpeedBoundForInterpMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, StartedFlyingVelocityInterpSpeedAtMinSpeed) == 1144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::StartedFlyingVelocityInterpSpeedAtMinSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, StartedFlyingVelocityInterpSpeedAtMaxSpeed) == 1184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::StartedFlyingVelocityInterpSpeedAtMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingLookPitchClampMin) == 1224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingLookPitchClampMax) == 1264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingLookPitchClampMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DefaultLookPitchAngleOffset) == 1304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DefaultLookPitchAngleOffset");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingLookPitchClampMin) == 1344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingLookPitchClampMax) == 1384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingLookPitchClampMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingInputWeightLookDirection) == 1424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingInputWeightLookDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingInputWeightLockDirection) == 1464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingInputWeightLockDirection");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingInputWeightHorizontal) == 1504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingInputWeightHorizontal");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PitchInterpSpeedWhileThrusting) == 1544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PitchInterpSpeedWhileThrusting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PitchInterpSpeedAtBaseSpeed) == 1584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PitchInterpSpeedAtBaseSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PitchInterpSpeedAtMaxLateralSpeed) == 1624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PitchInterpSpeedAtMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PitchInterpSpeedAtMaxTotalSpeed) == 1664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PitchInterpSpeedAtMaxTotalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, YawInterpSpeedWhileThrusting) == 1704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::YawInterpSpeedWhileThrusting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, YawInterpSpeedWhileBoosting) == 1744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::YawInterpSpeedWhileBoosting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, YawInterpSpeedAtMinBrakeSpeed) == 1784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::YawInterpSpeedAtMinBrakeSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, YawInterpSpeedAtBaseSpeed) == 1824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::YawInterpSpeedAtBaseSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, YawInterpSpeedAtMaxLateralSpeed) == 1864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::YawInterpSpeedAtMaxLateralSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InputInterpSpeedHorizontal) == 1904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InputInterpSpeedHorizontal");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingMovementInterpSpeed) == 1944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingMovementInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MoveInputActiveThreshold) == 1984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MoveInputActiveThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, AscendingLookPitchClampMin) == 2024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::AscendingLookPitchClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileAscendingMin) == 2064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileAscendingMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileAscendingMax) == 2104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileAscendingMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MaxCeilingHeightAddLimitFromAscend) == 2144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MaxCeilingHeightAddLimitFromAscend");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, AscendingSpeedZUpAddedMin) == 2184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::AscendingSpeedZUpAddedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, AscendingSpeedZUpAddedMax) == 2224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::AscendingSpeedZUpAddedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MaxCeilingHeightAddLimitFromBoost) == 2264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MaxCeilingHeightAddLimitFromBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileBoostingMin) == 2304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileBoostingMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileBoostingMax) == 2344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileBoostingMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PercentMaxLookPitchForMaxBoostCeilingHeightIncrease) == 2384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PercentMaxLookPitchForMaxBoostCeilingHeightIncrease");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PreThrustWindUpDuration) == 2424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PreThrustWindUpDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingSpeedBase) == 2464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingSpeedAddedAtMaxDistanceFromCeilingHeight) == 2504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingSpeedAddedAtMaxDistanceFromCeilingHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DistanceFromCeilingHeightForMaxCrashingSpeedAdded) == 2544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DistanceFromCeilingHeightForMaxCrashingSpeedAdded");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingLookPitchClampFinalMax) == 2584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingLookPitchClampFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingLookPitchClampDelayBeforeLerpToFinalMax) == 2624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingLookPitchClampDelayBeforeLerpToFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashingLookPitchClampDurationToLerpToFinalMax) == 2664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashingLookPitchClampDurationToLerpToFinalMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PreCrashingSpeedBase) == 2704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PreCrashingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PreCrashingInterpToSpeedMod) == 2744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PreCrashingInterpToSpeedMod");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MinAngleToPreventCrash) == 2784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MinAngleToPreventCrash");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CrashImpactIgnoreWaterDuration) == 2824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CrashImpactIgnoreWaterDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MaxAngleForLowFrictionLanding) == 2864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MaxAngleForLowFrictionLanding");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionDurationMin) == 2904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionDurationMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionDurationMax) == 2944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionDurationMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionDurationScalar) == 2984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionDurationScalar");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SpeedForMinLowFrictionMult) == 3024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SpeedForMinLowFrictionMult");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SpeedForMaxLowFrictionMult) == 3064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SpeedForMaxLowFrictionMult");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionMultFromSpeedMin) == 3104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionMultFromSpeedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionMultFromSpeedMax) == 3144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionMultFromSpeedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ImpactAngleForMaxLowFrictionDuration) == 3184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ImpactAngleForMaxLowFrictionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ImpactAngleForMinLowFrictionDuration) == 3224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ImpactAngleForMinLowFrictionDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionMultFromImpactAngleMax) == 3264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionMultFromImpactAngleMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowFrictionMultFromImpactAngleMin) == 3304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowFrictionMultFromImpactAngleMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingSpeedBase) == 3344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingSpeedBase");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingSpeedAddedAtMaxDistanceFromCeilingHeight) == 3384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingSpeedAddedAtMaxDistanceFromCeilingHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FlyingDownZSpeedAddedWhileFalling) == 3424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FlyingDownZSpeedAddedWhileFalling");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, DistanceFromCeilingHeightForMaxFlyingSpeedAdded) == 3464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::DistanceFromCeilingHeightForMaxFlyingSpeedAdded");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, AirBrakingDefaultMultiMin) == 3504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::AirBrakingDefaultMultiMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, AirBrakingDownSpeedMultiMin) == 3544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::AirBrakingDownSpeedMultiMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput) == 3584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileHoldingForwardMin) == 3624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileHoldingForwardMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightIncreaseSpeedWhileHoldingForwardMax) == 3664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightIncreaseSpeedWhileHoldingForwardMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight) == 3704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightMinDecreaseSpeedWhileFlying) == 3744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightMinDecreaseSpeedWhileFlying");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightMinDecreaseSpeedWhileBoosting) == 3784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightMinDecreaseSpeedWhileBoosting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight) == 3824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightMinDecreaseSpeedWhileAscending) == 3864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightMinDecreaseSpeedWhileAscending");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight) == 3904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HeightAboveWorldInterpSpeedIncreasing) == 3944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HeightAboveWorldInterpSpeedIncreasing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HeightAboveWorldInterpSpeedDecreasing) == 3984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HeightAboveWorldInterpSpeedDecreasing");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HeightForMinAddedCeilingDecay) == 4024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HeightForMinAddedCeilingDecay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HeightForMaxAddedCeilingDecay) == 4064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HeightForMaxAddedCeilingDecay");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MaxAddedCeilingDecayFromHeight) == 4104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MaxAddedCeilingDecayFromHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, GlobalCeilingHeightMax) == 4144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::GlobalCeilingHeightMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, GlobalCeilingHeightDiminishingReturnsExponent) == 4184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::GlobalCeilingHeightDiminishingReturnsExponent");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, GlobalCeilingHeightDiminishingReturnsRange) == 4224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::GlobalCeilingHeightDiminishingReturnsRange");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SkimmingMinRequiredAngleToSurface) == 4264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SkimmingMinRequiredAngleToSurface");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SkimmingMinRequiredVelocityAlongSurface) == 4304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SkimmingMinRequiredVelocityAlongSurface");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, SkimmingMinRequiredHeightAboveWorld) == 4344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::SkimmingMinRequiredHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, MaxAngleForGroundHit) == 4384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::MaxAngleForGroundHit");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, VelocityClampOnBonk) == 4424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::VelocityClampOnBonk");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InputMultiplierOnRotationMovementInputMax) == 4464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InputMultiplierOnRotationMovementInputMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InputMultiplierOnRotationNotHoveringFactor) == 4504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InputMultiplierOnRotationNotHoveringFactor");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InputMultiplierOnRotationChargingStateMultiplier) == 4544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InputMultiplierOnRotationChargingStateMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeInitialHoverTime) == 4584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeInitialHoverTime");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PitchTurnSpeedMultiplier) == 4624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PitchTurnSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewOrientationYawInterpSpeedMultiplier) == 4664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewOrientationYawInterpSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeLoweredAccelerationFromHitSomethingMaxTime) == 4704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeLoweredAccelerationFromHitSomethingMaxTime");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorAscendOffsetInterpSpeed) == 4744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorAscendOffsetInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLengthOldRangeX) == 4784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLengthOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLengthOldRangeY) == 4824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLengthOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLengthNewRangeX) == 4864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLengthNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLengthNewRangeY) == 4904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLengthNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorInputBackwardsThreshold) == 4944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorInputBackwardsThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorClampedMin) == 4984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorClampedMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorClampedMaxHovering) == 5024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorClampedMaxHovering");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorClampedMaxNotHovering) == 5064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorClampedMaxNotHovering");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLastLengthWithInputDeltaTimeMultiplier) == 5104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLastLengthWithInputDeltaTimeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLastLengthWithInputClampMin) == 5144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLastLengthWithInputClampMin");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLastLengthWithInputClampMax) == 5184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLastLengthWithInputClampMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorHoveringTimeThreshold) == 5224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorHoveringTimeThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, UpdateMovementVectorLastLengthHoveringMultiplier) == 5264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::UpdateMovementVectorLastLengthHoveringMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NoiseOffsetInterpSpeed) == 5304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NoiseOffsetInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, RotateMeshInitialHoverBuffer) == 5344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::RotateMeshInitialHoverBuffer");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleTargetMultiplerUp) == 5384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleTargetMultiplerUp");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleTargetMultiplerDown) == 5424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleTargetMultiplerDown");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleInterpSpeedOldRangeX) == 5464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleInterpSpeedOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleInterpSpeedOldRangeY) == 5504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleInterpSpeedOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleInterpSpeedNewRangeX) == 5544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleInterpSpeedNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExtraSpeedFromFlightAngleInterpSpeedNewRangeY) == 5584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExtraSpeedFromFlightAngleInterpSpeedNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, BreakingVelocityInterpSpeed) == 5624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::BreakingVelocityInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, BoostReductionLastFinialVelocityLengthThreshold) == 5664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::BoostReductionLastFinialVelocityLengthThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, BoostReductionValue) == 5704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::BoostReductionValue");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, RepulsorCannonBoost) == 5744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::RepulsorCannonBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeBoostDepletionRate) == 5784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeBoostDepletionRate");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, BonusBoostDepletionRate) == 5824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::BonusBoostDepletionRate");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, BonusBoostUnNormalizedMax) == 5864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::BonusBoostUnNormalizedMax");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NativeBoostMaxSpeedIncrease) == 5904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NativeBoostMaxSpeedIncrease");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverBoost) == 5944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LowerAccelerationFromHitPostProcessMovementVectorWeight) == 5984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LowerAccelerationFromHitPostProcessMovementVectorWeight");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementBelowHoveringFlyingDurationNewRangeX) == 6024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementBelowHoveringFlyingDurationNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementBelowHoveringFlyingDurationNewRangeY) == 6064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementBelowHoveringFlyingDurationNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementBelowHoveringNewVelocityInterpTargetMaxSize) == 6104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementBelowHoveringNewVelocityInterpTargetMaxSize");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementBelowHoveringNewVelocityInterpSpeed) == 6144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementBelowHoveringNewVelocityInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringTransitionDurationModifier) == 6184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringTransitionDurationModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringFlyingDurationUpNewRangeX) == 6224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringFlyingDurationUpNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringFlyingDurationUpNewRangeY) == 6264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringFlyingDurationUpNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringFlyingDurationThreshold) == 6304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringFlyingDurationThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeX) == 6344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeY) == 6384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringLowDurationInterpSpeedOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeX) == 6424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeY) == 6464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringLowDurationInterpSpeedNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeX) == 6504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeY) == 6544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringHighDurationInterpSpeedOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeX) == 6584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeY) == 6624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementAboveHoveringHighDurationInterpSpeedNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementInitialHoverTimeMinModifier) == 6664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementInitialHoverTimeMinModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementInitialHoverTimeMaxModifier) == 6704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementInitialHoverTimeMaxModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementBoost) == 6744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementInitialHoverTimeMultipler) == 6784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementInitialHoverTimeMultipler");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementStartedFlyingTransitionDurationSubtrahend) == 6824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementStartedFlyingTransitionDurationSubtrahend");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementVelocityMultiplierFlyingDurationNewRangeX) == 6864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementVelocityMultiplierFlyingDurationNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LaunchingMovementVelocityMultiplierFlyingDurationNewRangeY) == 6904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LaunchingMovementVelocityMultiplierFlyingDurationNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModeThrustingDurationThreshold) == 6944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModeThrustingDurationThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModePreCrashWindUpDurationModifier) == 6984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModePreCrashWindUpDurationModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModeBoost) == 7024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModeBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModeRemapTimeCrashingOldRangeX) == 7064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModeRemapTimeCrashingOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModeRemapTimeCrashingOldRangeY) == 7104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModeRemapTimeCrashingOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, NewCrashingModeTimeCrashingDownVectorZ) == 7144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::NewCrashingModeTimeCrashingDownVectorZ");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateGoalYawMovementInputThreshold) == 7184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateGoalYawMovementInputThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverMovementVectorThreshold) == 7224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverMovementVectorThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverMovementInputXThreshold) == 7264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverMovementInputXThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverMovementInputXBackwardThreshold) == 7304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverMovementInputXBackwardThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverCameraRelativeMovementVectorXThreshold) == 7344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverCameraRelativeMovementVectorXThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverMovementInputLengthThreshold) == 7384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverMovementInputLengthThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverInputAgreementWithMovementThreshold) == 7424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverInputAgreementWithMovementThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, EnterHoverLoweredAccelerationFromHitSomethingCurrentTimeThreshold) == 7464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::EnterHoverLoweredAccelerationFromHitSomethingCurrentTimeThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverMovementInputXBackwardThreshold) == 7504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverMovementInputXBackwardThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverABSMovementInputYThreshold) == 7544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverABSMovementInputYThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverMovementVectorLengthThreshold) == 7584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverMovementVectorLengthThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverMovementInputXThreshold) == 7624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverMovementInputXThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverCameraRelativeMovementVectorXThreshold) == 7664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverCameraRelativeMovementVectorXThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ExitHoverInputAgreementWithMovementThreshold) == 7704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ExitHoverInputAgreementWithMovementThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseFlyingTimeMultiplierOldRangeX) == 7744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseFlyingTimeMultiplierOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseFlyingTimeMultiplierOldRangeY) == 7784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseFlyingTimeMultiplierOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseFlyingTimeMultiplierNewRangeX) == 7824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseFlyingTimeMultiplierNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseFlyingTimeMultiplierNewRangeY) == 7864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseFlyingTimeMultiplierNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseDotResultMultiplerOldRangeX) == 7904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseDotResultMultiplerOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseDotResultMultiplerOldRangeY) == 7944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseDotResultMultiplerOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseDotResultMultiplerNewRangeX) == 7984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseDotResultMultiplerNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseDotResultMultiplerNewRangeY) == 8024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseDotResultMultiplerNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeX) == 8064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeY) == 8104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseMovementVectorLengthMultiplierOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeX) == 8144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeY) == 8184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculatePitchNoiseMovementVectorLengthMultiplierNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMoveOrientationYawOldRangeX) == 8224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMoveOrientationYawOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMoveOrientationYawOldRangeY) == 8264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMoveOrientationYawOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMoveOrientationYawNewRangeX) == 8304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMoveOrientationYawNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMoveOrientationYawNewRangeY) == 8344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMoveOrientationYawNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMovementVectorLengthOldRangeX) == 8384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMovementVectorLengthOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMovementVectorLengthOldRangeY) == 8424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMovementVectorLengthOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMovementVectorLengthNewRangeX) == 8464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMovementVectorLengthNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseMovementVectorLengthNewRangeY) == 8504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseMovementVectorLengthNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateYawNoiseFlyingTimeMultiplier) == 8544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateYawNoiseFlyingTimeMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationReturnValueWhenThrusting) == 8584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationReturnValueWhenThrusting");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationReturnValueWhenHovering) == 8624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationReturnValueWhenHovering");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationMovementVectorLengthOldRangeX) == 8664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationMovementVectorLengthOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationMovementVectorLengthOldRangeY) == 8704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationMovementVectorLengthOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationMovementVectorLengthNewRangeX) == 8744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationMovementVectorLengthNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationMovementVectorLengthNewRangeY) == 8784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationMovementVectorLengthNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationHitSomethingTimeOldRangeX) == 8824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationHitSomethingTimeOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationHitSomethingTimeNewRangeX) == 8864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationHitSomethingTimeNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, CalculateAccelerationHitSomethingTimeNewRangeY) == 8904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::CalculateAccelerationHitSomethingTimeNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ClampToMaxHeightCeilingHeightMaxModifier) == 8944, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ClampToMaxHeightCeilingHeightMaxModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ClampToMaxHeightPawnLocationZNewRangeX) == 8984, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ClampToMaxHeightPawnLocationZNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ClampToMaxHeightPawnLocationZNewRangeY) == 9024, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ClampToMaxHeightPawnLocationZNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ClampToMaxHeightAboveWorldNewRangeX) == 9064, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ClampToMaxHeightAboveWorldNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, ClampToMaxHeightAboveWorldNewRangeY) == 9104, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::ClampToMaxHeightAboveWorldNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorStartedFlyingTimeModifier) == 9144, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorStartedFlyingTimeModifier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorTotalFlyingTimeNewRangeX) == 9184, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorTotalFlyingTimeNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorTotalFlyingTimeNewRangeY) == 9224, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorTotalFlyingTimeNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorCurrentNoiseOffsetMultiplier) == 9264, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorCurrentNoiseOffsetMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorClampedLengthNewRangeX) == 9304, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorClampedLengthNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PostProcessMovementVectorClampedLengthNewRangeY) == 9344, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PostProcessMovementVectorClampedLengthNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HitResponseIsInInitialHoverBufferTime) == 9384, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HitResponseIsInInitialHoverBufferTime");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, HitResponseMovementVectorMultiplier) == 9424, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::HitResponseMovementVectorMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, LoweredAccelerationFromHitSomethingMaxTime) == 9464, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::LoweredAccelerationFromHitSomethingMaxTime");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateUpdateInterval) == 9504, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateUpdateInterval");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateMagnitudeOldRangeX) == 9544, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateMagnitudeOldRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateMagnitudeOldRangeY) == 9584, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateMagnitudeOldRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateMagnitudeNewRangeX) == 9624, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateMagnitudeNewRangeX");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, FuelUsageRateMagnitudeNewRangeY) == 9664, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::FuelUsageRateMagnitudeNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, PlayHitFXMovementVectorLengthThreshold) == 9704, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::PlayHitFXMovementVectorLengthThreshold");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InitialHoverTargetTimeMultipler) == 9744, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InitialHoverTargetTimeMultipler");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InitialHoverTargetXYCalculationNewRangeY) == 9784, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InitialHoverTargetXYCalculationNewRangeY");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InstantThrustBoost) == 9824, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InstantThrustBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, InstantThrustBonusBoost) == 9864, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::InstantThrustBonusBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicFlyingJetpack, OutOfFuelCrashImpactMinSpeed) == 9904, "Offset mismatch for UFortMovementMode_ExtLogicFlyingJetpack::OutOfFuelCrashImpactMinSpeed");

// /Script/JetPackRuntime.FortMovementMode_JetpackFlyingRuntimeData
// Kind: Class; super: FortMovementMode_FlyingRuntimeData
class UFortMovementMode_JetpackFlyingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t FlyingStatus; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float CurrentHeightAboveWorld; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float InterpolatedHeightAboveWorld; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierFromForwardInput; // 0x007C (Size: 0x4, Type: FloatProperty)
    float AscendMoveOffset; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float LoweredAccelerationFromHitSomethingCurrentTime; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float LastMoveVecLengthWithInput; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float InterpolatedExtraSpeedFromFlightAngle; // 0x008C (Size: 0x4, Type: FloatProperty)
    float Boost; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float BonusBoost; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementInputWhenLastValid[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t MovementVector[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t InterpolatedCurrentNoiseOffset[0x19]; // 0x00C0 (Size: 0x19, Type: StructProperty)
    std::uint8_t bHasStartedMME; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStartingFlying; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoostWasSetThisFrame; // 0x00DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x00DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, FlyingStatus) == 112, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::FlyingStatus");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, CurrentHeightAboveWorld) == 116, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::CurrentHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, InterpolatedHeightAboveWorld) == 120, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::InterpolatedHeightAboveWorld");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, SpeedMultiplierFromForwardInput) == 124, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::SpeedMultiplierFromForwardInput");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, AscendMoveOffset) == 128, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::AscendMoveOffset");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, LoweredAccelerationFromHitSomethingCurrentTime) == 132, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::LoweredAccelerationFromHitSomethingCurrentTime");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, LastMoveVecLengthWithInput) == 136, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::LastMoveVecLengthWithInput");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, InterpolatedExtraSpeedFromFlightAngle) == 140, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::InterpolatedExtraSpeedFromFlightAngle");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, Boost) == 144, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::Boost");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, BonusBoost) == 148, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::BonusBoost");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, MovementInputWhenLastValid) == 152, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::MovementInputWhenLastValid");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, MovementVector) == 168, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::MovementVector");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, InterpolatedCurrentNoiseOffset) == 192, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::InterpolatedCurrentNoiseOffset");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, bHasStartedMME) == 217, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::bHasStartedMME");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, bIsStartingFlying) == 218, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::bIsStartingFlying");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, bBoostWasSetThisFrame) == 219, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::bBoostWasSetThisFrame");
static_assert(offsetof(UFortMovementMode_JetpackFlyingRuntimeData, bIsBoosting) == 220, "Offset mismatch for UFortMovementMode_JetpackFlyingRuntimeData::bIsBoosting");

// /Script/JetPackRuntime.FortWeaponJetpack
// Kind: Class; super: FortWeapon
class UFortWeaponJetpack
{
public:
    std::uint8_t Pad_0000[0x19F8]; // 0x0000
    std::uint8_t FlyingStatus; // 0x19F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x19F9
    float NativeCurrentHeightAboveWorld; // 0x19FC (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x1A00 (Size: 0x4, Type: FloatProperty)
    float ForAnimTimeLeftInInitialHover; // 0x1A04 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForAnimCurrentNoiseOffset[0x18]; // 0x1A08 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForAnimMovementGoalDirection[0x18]; // 0x1A20 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForAnimDodgeVelocity[0x18]; // 0x1A38 (Size: 0x18, Type: StructProperty)
    std::uint8_t ForAnimMovementInput[0x10]; // 0x1A50 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForAnimGoalMoveOrientation[0x18]; // 0x1A60 (Size: 0x18, Type: StructProperty)
    std::uint8_t bForAnimIsStartingFlying; // 0x1A78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForAnimIsInInitialHover; // 0x1A79 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForAnimIsInInitialHoverWithBuffer; // 0x1A7A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x65]; // 0x1A7B
    void* FlyingMovementModeExtension; // 0x1AE0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TagToEnableHeightCheck[0x8]; // 0x1AE8 (Size: 0x8, Type: StructProperty)
    std::uint8_t HeightCheckInterval[0x28]; // 0x1AF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightCheckTraceLength[0x1]; // 0x1B18 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponJetpack, FlyingStatus) == 6648, "Offset mismatch for UFortWeaponJetpack::FlyingStatus");
static_assert(offsetof(UFortWeaponJetpack, NativeCurrentHeightAboveWorld) == 6652, "Offset mismatch for UFortWeaponJetpack::NativeCurrentHeightAboveWorld");
static_assert(offsetof(UFortWeaponJetpack, ForwardSpeed) == 6656, "Offset mismatch for UFortWeaponJetpack::ForwardSpeed");
static_assert(offsetof(UFortWeaponJetpack, ForAnimTimeLeftInInitialHover) == 6660, "Offset mismatch for UFortWeaponJetpack::ForAnimTimeLeftInInitialHover");
static_assert(offsetof(UFortWeaponJetpack, ForAnimCurrentNoiseOffset) == 6664, "Offset mismatch for UFortWeaponJetpack::ForAnimCurrentNoiseOffset");
static_assert(offsetof(UFortWeaponJetpack, ForAnimMovementGoalDirection) == 6688, "Offset mismatch for UFortWeaponJetpack::ForAnimMovementGoalDirection");
static_assert(offsetof(UFortWeaponJetpack, ForAnimDodgeVelocity) == 6712, "Offset mismatch for UFortWeaponJetpack::ForAnimDodgeVelocity");
static_assert(offsetof(UFortWeaponJetpack, ForAnimMovementInput) == 6736, "Offset mismatch for UFortWeaponJetpack::ForAnimMovementInput");
static_assert(offsetof(UFortWeaponJetpack, ForAnimGoalMoveOrientation) == 6752, "Offset mismatch for UFortWeaponJetpack::ForAnimGoalMoveOrientation");
static_assert(offsetof(UFortWeaponJetpack, bForAnimIsStartingFlying) == 6776, "Offset mismatch for UFortWeaponJetpack::bForAnimIsStartingFlying");
static_assert(offsetof(UFortWeaponJetpack, bForAnimIsInInitialHover) == 6777, "Offset mismatch for UFortWeaponJetpack::bForAnimIsInInitialHover");
static_assert(offsetof(UFortWeaponJetpack, bForAnimIsInInitialHoverWithBuffer) == 6778, "Offset mismatch for UFortWeaponJetpack::bForAnimIsInInitialHoverWithBuffer");
static_assert(offsetof(UFortWeaponJetpack, FlyingMovementModeExtension) == 6880, "Offset mismatch for UFortWeaponJetpack::FlyingMovementModeExtension");
static_assert(offsetof(UFortWeaponJetpack, TagToEnableHeightCheck) == 6888, "Offset mismatch for UFortWeaponJetpack::TagToEnableHeightCheck");
static_assert(offsetof(UFortWeaponJetpack, HeightCheckInterval) == 6896, "Offset mismatch for UFortWeaponJetpack::HeightCheckInterval");
static_assert(offsetof(UFortWeaponJetpack, HeightCheckTraceLength) == 6936, "Offset mismatch for UFortWeaponJetpack::HeightCheckTraceLength");

// /Script/JetPackRuntime.JetpackLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UJetpackLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsFlying; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1171
    double FlyingPitch; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double FlyingRoll; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bNoFuel; // 0x1188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHovering; // 0x1189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x118A
    float YawOffset; // 0x118C (Size: 0x4, Type: FloatProperty)
    float AimingPitch; // 0x1190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x1194
    double LateralSpeedInterp; // 0x1198 (Size: 0x8, Type: DoubleProperty)
    double ForwardSpeedInterp; // 0x11A0 (Size: 0x8, Type: DoubleProperty)
    double LateralSpeedDif; // 0x11A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDodgeRight; // 0x11B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeLeft; // 0x11B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x11B2
    double ForwardSpeedDif; // 0x11B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bWindingUpThrust; // 0x11C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bThrusting; // 0x11C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLowFrictionLand; // 0x11C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x11C3
    float RotationState; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAccelerating; // 0x11C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x11C9
    double ForAnimMovementInputX; // 0x11D0 (Size: 0x8, Type: DoubleProperty)
    double ForAnimMovementInputY; // 0x11D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bInForceFall; // 0x11E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x11E1
    std::uint8_t LastFrameVelocity[0x18]; // 0x11E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bForAnimIsInInitialHover; // 0x1200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeLeftInto1; // 0x1201 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeLeftInto2; // 0x1202 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeRightInto1; // 0x1203 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeRightInto2; // 0x1204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterSlam; // 0x1205 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitSoftLand; // 0x1206 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x1]; // 0x1207
    float FalseBlendTime; // 0x1208 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x4]; // 0x120C
    double LaterSpeedDiffMulti; // 0x1210 (Size: 0x8, Type: DoubleProperty)
    float Cur_BlendIn; // 0x1218 (Size: 0x4, Type: FloatProperty)
    float Cur_foot_r; // 0x121C (Size: 0x4, Type: FloatProperty)
    float Cur_foot_l; // 0x1220 (Size: 0x4, Type: FloatProperty)
    float Cur_BlendOut; // 0x1224 (Size: 0x4, Type: FloatProperty)
    double ExitBoostLeftRight; // 0x1228 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bFP_IntoFlightToIntoFlightLoop; // 0x1230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_IntoFlightToIntoFlightToHover; // 0x1231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ConduitToFlightLoop; // 0x1232 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ExitFlight; // 0x1233 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_NotHovering; // 0x1234 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_DodgeReturnToConduit; // 0x1235 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_EnterFlightLoopToConduit; // 0x1236 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ExitFlightToConduit; // 0x1237 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ExitFlightToConduit2; // 0x1238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ExitFlightToEnterFlightLoop; // 0x1239 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_SlamIntroToConduit; // 0x123A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x5]; // 0x123B
    double FP_StrafeLR_Hover_SpeedBS; // 0x1240 (Size: 0x8, Type: DoubleProperty)
    double FP_Speed_Hover_SpeedBS; // 0x1248 (Size: 0x8, Type: DoubleProperty)
    double FP_StrafeLR_Hover_Pitch_Roll_BS; // 0x1250 (Size: 0x8, Type: DoubleProperty)
    double FP_Speed_Hover_Pitch_Roll_BS; // 0x1258 (Size: 0x8, Type: DoubleProperty)
    double ZSpeedDiff; // 0x1260 (Size: 0x8, Type: DoubleProperty)
    double FPZSpeed; // 0x1268 (Size: 0x8, Type: DoubleProperty)
    float GlideRollCombined; // 0x1270 (Size: 0x4, Type: FloatProperty)
    float GlidePitchAlpha; // 0x1274 (Size: 0x4, Type: FloatProperty)
    float RollAlpha; // 0x1278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAscending; // 0x127C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCrashing; // 0x127D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x127E
    std::uint8_t FlyingTagName[0x4]; // 0x1280 (Size: 0x4, Type: StructProperty)
    std::uint8_t OutOfFuelTagName[0x4]; // 0x1284 (Size: 0x4, Type: StructProperty)
    std::uint8_t LowFrictionLandingTagName[0x4]; // 0x1288 (Size: 0x4, Type: StructProperty)
    std::uint8_t DamageTagName[0x4]; // 0x128C (Size: 0x4, Type: StructProperty)
    std::uint8_t SmashingThingsTagName[0x1]; // 0x1290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJetpackLayerAnimInstance, bIsFlying) == 4464, "Offset mismatch for UJetpackLayerAnimInstance::bIsFlying");
static_assert(offsetof(UJetpackLayerAnimInstance, FlyingPitch) == 4472, "Offset mismatch for UJetpackLayerAnimInstance::FlyingPitch");
static_assert(offsetof(UJetpackLayerAnimInstance, FlyingRoll) == 4480, "Offset mismatch for UJetpackLayerAnimInstance::FlyingRoll");
static_assert(offsetof(UJetpackLayerAnimInstance, bNoFuel) == 4488, "Offset mismatch for UJetpackLayerAnimInstance::bNoFuel");
static_assert(offsetof(UJetpackLayerAnimInstance, bIsHovering) == 4489, "Offset mismatch for UJetpackLayerAnimInstance::bIsHovering");
static_assert(offsetof(UJetpackLayerAnimInstance, YawOffset) == 4492, "Offset mismatch for UJetpackLayerAnimInstance::YawOffset");
static_assert(offsetof(UJetpackLayerAnimInstance, AimingPitch) == 4496, "Offset mismatch for UJetpackLayerAnimInstance::AimingPitch");
static_assert(offsetof(UJetpackLayerAnimInstance, LateralSpeedInterp) == 4504, "Offset mismatch for UJetpackLayerAnimInstance::LateralSpeedInterp");
static_assert(offsetof(UJetpackLayerAnimInstance, ForwardSpeedInterp) == 4512, "Offset mismatch for UJetpackLayerAnimInstance::ForwardSpeedInterp");
static_assert(offsetof(UJetpackLayerAnimInstance, LateralSpeedDif) == 4520, "Offset mismatch for UJetpackLayerAnimInstance::LateralSpeedDif");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeRight) == 4528, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeRight");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeLeft) == 4529, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeLeft");
static_assert(offsetof(UJetpackLayerAnimInstance, ForwardSpeedDif) == 4536, "Offset mismatch for UJetpackLayerAnimInstance::ForwardSpeedDif");
static_assert(offsetof(UJetpackLayerAnimInstance, bWindingUpThrust) == 4544, "Offset mismatch for UJetpackLayerAnimInstance::bWindingUpThrust");
static_assert(offsetof(UJetpackLayerAnimInstance, bThrusting) == 4545, "Offset mismatch for UJetpackLayerAnimInstance::bThrusting");
static_assert(offsetof(UJetpackLayerAnimInstance, bLowFrictionLand) == 4546, "Offset mismatch for UJetpackLayerAnimInstance::bLowFrictionLand");
static_assert(offsetof(UJetpackLayerAnimInstance, RotationState) == 4548, "Offset mismatch for UJetpackLayerAnimInstance::RotationState");
static_assert(offsetof(UJetpackLayerAnimInstance, bIsAccelerating) == 4552, "Offset mismatch for UJetpackLayerAnimInstance::bIsAccelerating");
static_assert(offsetof(UJetpackLayerAnimInstance, ForAnimMovementInputX) == 4560, "Offset mismatch for UJetpackLayerAnimInstance::ForAnimMovementInputX");
static_assert(offsetof(UJetpackLayerAnimInstance, ForAnimMovementInputY) == 4568, "Offset mismatch for UJetpackLayerAnimInstance::ForAnimMovementInputY");
static_assert(offsetof(UJetpackLayerAnimInstance, bInForceFall) == 4576, "Offset mismatch for UJetpackLayerAnimInstance::bInForceFall");
static_assert(offsetof(UJetpackLayerAnimInstance, LastFrameVelocity) == 4584, "Offset mismatch for UJetpackLayerAnimInstance::LastFrameVelocity");
static_assert(offsetof(UJetpackLayerAnimInstance, bForAnimIsInInitialHover) == 4608, "Offset mismatch for UJetpackLayerAnimInstance::bForAnimIsInInitialHover");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeLeftInto1) == 4609, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeLeftInto1");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeLeftInto2) == 4610, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeLeftInto2");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeRightInto1) == 4611, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeRightInto1");
static_assert(offsetof(UJetpackLayerAnimInstance, bDodgeRightInto2) == 4612, "Offset mismatch for UJetpackLayerAnimInstance::bDodgeRightInto2");
static_assert(offsetof(UJetpackLayerAnimInstance, bCanEnterSlam) == 4613, "Offset mismatch for UJetpackLayerAnimInstance::bCanEnterSlam");
static_assert(offsetof(UJetpackLayerAnimInstance, bExitSoftLand) == 4614, "Offset mismatch for UJetpackLayerAnimInstance::bExitSoftLand");
static_assert(offsetof(UJetpackLayerAnimInstance, FalseBlendTime) == 4616, "Offset mismatch for UJetpackLayerAnimInstance::FalseBlendTime");
static_assert(offsetof(UJetpackLayerAnimInstance, LaterSpeedDiffMulti) == 4624, "Offset mismatch for UJetpackLayerAnimInstance::LaterSpeedDiffMulti");
static_assert(offsetof(UJetpackLayerAnimInstance, Cur_BlendIn) == 4632, "Offset mismatch for UJetpackLayerAnimInstance::Cur_BlendIn");
static_assert(offsetof(UJetpackLayerAnimInstance, Cur_foot_r) == 4636, "Offset mismatch for UJetpackLayerAnimInstance::Cur_foot_r");
static_assert(offsetof(UJetpackLayerAnimInstance, Cur_foot_l) == 4640, "Offset mismatch for UJetpackLayerAnimInstance::Cur_foot_l");
static_assert(offsetof(UJetpackLayerAnimInstance, Cur_BlendOut) == 4644, "Offset mismatch for UJetpackLayerAnimInstance::Cur_BlendOut");
static_assert(offsetof(UJetpackLayerAnimInstance, ExitBoostLeftRight) == 4648, "Offset mismatch for UJetpackLayerAnimInstance::ExitBoostLeftRight");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_IntoFlightToIntoFlightLoop) == 4656, "Offset mismatch for UJetpackLayerAnimInstance::bFP_IntoFlightToIntoFlightLoop");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_IntoFlightToIntoFlightToHover) == 4657, "Offset mismatch for UJetpackLayerAnimInstance::bFP_IntoFlightToIntoFlightToHover");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_ConduitToFlightLoop) == 4658, "Offset mismatch for UJetpackLayerAnimInstance::bFP_ConduitToFlightLoop");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_ExitFlight) == 4659, "Offset mismatch for UJetpackLayerAnimInstance::bFP_ExitFlight");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_NotHovering) == 4660, "Offset mismatch for UJetpackLayerAnimInstance::bFP_NotHovering");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_DodgeReturnToConduit) == 4661, "Offset mismatch for UJetpackLayerAnimInstance::bFP_DodgeReturnToConduit");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_EnterFlightLoopToConduit) == 4662, "Offset mismatch for UJetpackLayerAnimInstance::bFP_EnterFlightLoopToConduit");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_ExitFlightToConduit) == 4663, "Offset mismatch for UJetpackLayerAnimInstance::bFP_ExitFlightToConduit");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_ExitFlightToConduit2) == 4664, "Offset mismatch for UJetpackLayerAnimInstance::bFP_ExitFlightToConduit2");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_ExitFlightToEnterFlightLoop) == 4665, "Offset mismatch for UJetpackLayerAnimInstance::bFP_ExitFlightToEnterFlightLoop");
static_assert(offsetof(UJetpackLayerAnimInstance, bFP_SlamIntroToConduit) == 4666, "Offset mismatch for UJetpackLayerAnimInstance::bFP_SlamIntroToConduit");
static_assert(offsetof(UJetpackLayerAnimInstance, FP_StrafeLR_Hover_SpeedBS) == 4672, "Offset mismatch for UJetpackLayerAnimInstance::FP_StrafeLR_Hover_SpeedBS");
static_assert(offsetof(UJetpackLayerAnimInstance, FP_Speed_Hover_SpeedBS) == 4680, "Offset mismatch for UJetpackLayerAnimInstance::FP_Speed_Hover_SpeedBS");
static_assert(offsetof(UJetpackLayerAnimInstance, FP_StrafeLR_Hover_Pitch_Roll_BS) == 4688, "Offset mismatch for UJetpackLayerAnimInstance::FP_StrafeLR_Hover_Pitch_Roll_BS");
static_assert(offsetof(UJetpackLayerAnimInstance, FP_Speed_Hover_Pitch_Roll_BS) == 4696, "Offset mismatch for UJetpackLayerAnimInstance::FP_Speed_Hover_Pitch_Roll_BS");
static_assert(offsetof(UJetpackLayerAnimInstance, ZSpeedDiff) == 4704, "Offset mismatch for UJetpackLayerAnimInstance::ZSpeedDiff");
static_assert(offsetof(UJetpackLayerAnimInstance, FPZSpeed) == 4712, "Offset mismatch for UJetpackLayerAnimInstance::FPZSpeed");
static_assert(offsetof(UJetpackLayerAnimInstance, GlideRollCombined) == 4720, "Offset mismatch for UJetpackLayerAnimInstance::GlideRollCombined");
static_assert(offsetof(UJetpackLayerAnimInstance, GlidePitchAlpha) == 4724, "Offset mismatch for UJetpackLayerAnimInstance::GlidePitchAlpha");
static_assert(offsetof(UJetpackLayerAnimInstance, RollAlpha) == 4728, "Offset mismatch for UJetpackLayerAnimInstance::RollAlpha");
static_assert(offsetof(UJetpackLayerAnimInstance, bIsAscending) == 4732, "Offset mismatch for UJetpackLayerAnimInstance::bIsAscending");
static_assert(offsetof(UJetpackLayerAnimInstance, bIsCrashing) == 4733, "Offset mismatch for UJetpackLayerAnimInstance::bIsCrashing");
static_assert(offsetof(UJetpackLayerAnimInstance, FlyingTagName) == 4736, "Offset mismatch for UJetpackLayerAnimInstance::FlyingTagName");
static_assert(offsetof(UJetpackLayerAnimInstance, OutOfFuelTagName) == 4740, "Offset mismatch for UJetpackLayerAnimInstance::OutOfFuelTagName");
static_assert(offsetof(UJetpackLayerAnimInstance, LowFrictionLandingTagName) == 4744, "Offset mismatch for UJetpackLayerAnimInstance::LowFrictionLandingTagName");
static_assert(offsetof(UJetpackLayerAnimInstance, DamageTagName) == 4748, "Offset mismatch for UJetpackLayerAnimInstance::DamageTagName");
static_assert(offsetof(UJetpackLayerAnimInstance, SmashingThingsTagName) == 4752, "Offset mismatch for UJetpackLayerAnimInstance::SmashingThingsTagName");

// /Script/JetPackRuntime.JetpackWeaponInterface
// Kind: Class; super: Interface
class UJetpackWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
