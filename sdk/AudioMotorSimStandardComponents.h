/**
 * decamp dumper generated SDK
 * Package: /Script/AudioMotorSimStandardComponents
 */
#pragma once
#include "Basic.h"

// /Script/AudioMotorSimStandardComponents.MotorPhysicsSimConfigData
// Kind: ScriptStruct; super: AudioMotorSimConfigData
struct FMotorPhysicsSimConfigData
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EngineTorque; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BrakingHorsePower; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotorPhysicsSimConfigData, Weight) == 0, "Offset mismatch for FMotorPhysicsSimConfigData::Weight");
static_assert(offsetof(FMotorPhysicsSimConfigData, EngineTorque) == 4, "Offset mismatch for FMotorPhysicsSimConfigData::EngineTorque");
static_assert(offsetof(FMotorPhysicsSimConfigData, BrakingHorsePower) == 8, "Offset mismatch for FMotorPhysicsSimConfigData::BrakingHorsePower");

// /Script/AudioMotorSimStandardComponents.MotorSimGearCurve
// Kind: ScriptStruct; super: none
struct FMotorSimGearCurve
{
public:
    std::uint8_t RpmCurve[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    float SpeedTopThreshold; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotorSimGearCurve, RpmCurve) == 0, "Offset mismatch for FMotorSimGearCurve::RpmCurve");
static_assert(offsetof(FMotorSimGearCurve, SpeedTopThreshold) == 72, "Offset mismatch for FMotorSimGearCurve::SpeedTopThreshold");

// /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UBoostMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float ThrottleScale; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float InterpExp; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float InterpTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaleThrottleWithBoostStrength; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModifyPitch; // 0x00DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00DE
    float PitchModifierInterpSpeed; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00E4
    std::uint8_t BoostToPitchCurve[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBoostMotorSimComponent, ThrottleScale) == 208, "Offset mismatch for UBoostMotorSimComponent::ThrottleScale");
static_assert(offsetof(UBoostMotorSimComponent, InterpExp) == 212, "Offset mismatch for UBoostMotorSimComponent::InterpExp");
static_assert(offsetof(UBoostMotorSimComponent, InterpTime) == 216, "Offset mismatch for UBoostMotorSimComponent::InterpTime");
static_assert(offsetof(UBoostMotorSimComponent, ScaleThrottleWithBoostStrength) == 220, "Offset mismatch for UBoostMotorSimComponent::ScaleThrottleWithBoostStrength");
static_assert(offsetof(UBoostMotorSimComponent, bModifyPitch) == 221, "Offset mismatch for UBoostMotorSimComponent::bModifyPitch");
static_assert(offsetof(UBoostMotorSimComponent, PitchModifierInterpSpeed) == 224, "Offset mismatch for UBoostMotorSimComponent::PitchModifierInterpSpeed");
static_assert(offsetof(UBoostMotorSimComponent, BoostToPitchCurve) == 232, "Offset mismatch for UBoostMotorSimComponent::BoostToPitchCurve");

// /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UMotorPhysicsSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float Weight; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float EngineTorque; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float BrakingHorsePower; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    TArray<void*> GearRatios; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    float ClutchedGearRatio; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseInfiniteGears; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysDownshiftToZerothGear; // 0x00F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00F6
    float InfiniteGearRatio; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float UpShiftMaxRpm; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float DownShiftStartRpm; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float ClutchedForceModifier; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float ClutchedDecelScale; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float EngineGearRatio; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EngineFriction; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float GroundFriction; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float WindResistancePerVelocity; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float ThrottleInterpolationTime; // 0x011C (Size: 0x4, Type: FloatProperty)
    float RpmInterpSpeed; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0124
    FMulticastInlineDelegate OnGearChangedEvent; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMotorPhysicsSimComponent, Weight) == 208, "Offset mismatch for UMotorPhysicsSimComponent::Weight");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineTorque) == 212, "Offset mismatch for UMotorPhysicsSimComponent::EngineTorque");
static_assert(offsetof(UMotorPhysicsSimComponent, BrakingHorsePower) == 216, "Offset mismatch for UMotorPhysicsSimComponent::BrakingHorsePower");
static_assert(offsetof(UMotorPhysicsSimComponent, GearRatios) == 224, "Offset mismatch for UMotorPhysicsSimComponent::GearRatios");
static_assert(offsetof(UMotorPhysicsSimComponent, ClutchedGearRatio) == 240, "Offset mismatch for UMotorPhysicsSimComponent::ClutchedGearRatio");
static_assert(offsetof(UMotorPhysicsSimComponent, bUseInfiniteGears) == 244, "Offset mismatch for UMotorPhysicsSimComponent::bUseInfiniteGears");
static_assert(offsetof(UMotorPhysicsSimComponent, bAlwaysDownshiftToZerothGear) == 245, "Offset mismatch for UMotorPhysicsSimComponent::bAlwaysDownshiftToZerothGear");
static_assert(offsetof(UMotorPhysicsSimComponent, InfiniteGearRatio) == 248, "Offset mismatch for UMotorPhysicsSimComponent::InfiniteGearRatio");
static_assert(offsetof(UMotorPhysicsSimComponent, UpShiftMaxRpm) == 252, "Offset mismatch for UMotorPhysicsSimComponent::UpShiftMaxRpm");
static_assert(offsetof(UMotorPhysicsSimComponent, DownShiftStartRpm) == 256, "Offset mismatch for UMotorPhysicsSimComponent::DownShiftStartRpm");
static_assert(offsetof(UMotorPhysicsSimComponent, ClutchedForceModifier) == 260, "Offset mismatch for UMotorPhysicsSimComponent::ClutchedForceModifier");
static_assert(offsetof(UMotorPhysicsSimComponent, ClutchedDecelScale) == 264, "Offset mismatch for UMotorPhysicsSimComponent::ClutchedDecelScale");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineGearRatio) == 268, "Offset mismatch for UMotorPhysicsSimComponent::EngineGearRatio");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineFriction) == 272, "Offset mismatch for UMotorPhysicsSimComponent::EngineFriction");
static_assert(offsetof(UMotorPhysicsSimComponent, GroundFriction) == 276, "Offset mismatch for UMotorPhysicsSimComponent::GroundFriction");
static_assert(offsetof(UMotorPhysicsSimComponent, WindResistancePerVelocity) == 280, "Offset mismatch for UMotorPhysicsSimComponent::WindResistancePerVelocity");
static_assert(offsetof(UMotorPhysicsSimComponent, ThrottleInterpolationTime) == 284, "Offset mismatch for UMotorPhysicsSimComponent::ThrottleInterpolationTime");
static_assert(offsetof(UMotorPhysicsSimComponent, RpmInterpSpeed) == 288, "Offset mismatch for UMotorPhysicsSimComponent::RpmInterpSpeed");
static_assert(offsetof(UMotorPhysicsSimComponent, OnGearChangedEvent) == 296, "Offset mismatch for UMotorPhysicsSimComponent::OnGearChangedEvent");

// /Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UResistanceMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float UpSpeedMaxFriction; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SideSpeedFrictionCurve[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UResistanceMotorSimComponent, UpSpeedMaxFriction) == 208, "Offset mismatch for UResistanceMotorSimComponent::UpSpeedMaxFriction");
static_assert(offsetof(UResistanceMotorSimComponent, MinSpeed) == 212, "Offset mismatch for UResistanceMotorSimComponent::MinSpeed");
static_assert(offsetof(UResistanceMotorSimComponent, SideSpeedFrictionCurve) == 216, "Offset mismatch for UResistanceMotorSimComponent::SideSpeedFrictionCurve");

// /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class URevLimiterMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float LimitTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float DecelScale; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float AirMaxThrottleTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float SideSpeedThreshold; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float LimiterMaxRpm; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShiftBackToZero; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRevLimitOnClutchEngaged; // 0x00E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E6
    float ClutchedRecoverRPM; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRevLimitOnReverse; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00ED
    float ReverseMaxRPM; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float ReverseRecoverRPM; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHoldRPMInReverse; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00F9
    FMulticastInlineDelegate OnRevLimiterHit; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRevLimiterStateChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(URevLimiterMotorSimComponent, LimitTime) == 208, "Offset mismatch for URevLimiterMotorSimComponent::LimitTime");
static_assert(offsetof(URevLimiterMotorSimComponent, DecelScale) == 212, "Offset mismatch for URevLimiterMotorSimComponent::DecelScale");
static_assert(offsetof(URevLimiterMotorSimComponent, AirMaxThrottleTime) == 216, "Offset mismatch for URevLimiterMotorSimComponent::AirMaxThrottleTime");
static_assert(offsetof(URevLimiterMotorSimComponent, SideSpeedThreshold) == 220, "Offset mismatch for URevLimiterMotorSimComponent::SideSpeedThreshold");
static_assert(offsetof(URevLimiterMotorSimComponent, LimiterMaxRpm) == 224, "Offset mismatch for URevLimiterMotorSimComponent::LimiterMaxRpm");
static_assert(offsetof(URevLimiterMotorSimComponent, bShiftBackToZero) == 228, "Offset mismatch for URevLimiterMotorSimComponent::bShiftBackToZero");
static_assert(offsetof(URevLimiterMotorSimComponent, bRevLimitOnClutchEngaged) == 229, "Offset mismatch for URevLimiterMotorSimComponent::bRevLimitOnClutchEngaged");
static_assert(offsetof(URevLimiterMotorSimComponent, ClutchedRecoverRPM) == 232, "Offset mismatch for URevLimiterMotorSimComponent::ClutchedRecoverRPM");
static_assert(offsetof(URevLimiterMotorSimComponent, bRevLimitOnReverse) == 236, "Offset mismatch for URevLimiterMotorSimComponent::bRevLimitOnReverse");
static_assert(offsetof(URevLimiterMotorSimComponent, ReverseMaxRPM) == 240, "Offset mismatch for URevLimiterMotorSimComponent::ReverseMaxRPM");
static_assert(offsetof(URevLimiterMotorSimComponent, ReverseRecoverRPM) == 244, "Offset mismatch for URevLimiterMotorSimComponent::ReverseRecoverRPM");
static_assert(offsetof(URevLimiterMotorSimComponent, bHoldRPMInReverse) == 248, "Offset mismatch for URevLimiterMotorSimComponent::bHoldRPMInReverse");
static_assert(offsetof(URevLimiterMotorSimComponent, OnRevLimiterHit) == 256, "Offset mismatch for URevLimiterMotorSimComponent::OnRevLimiterHit");
static_assert(offsetof(URevLimiterMotorSimComponent, OnRevLimiterStateChanged) == 272, "Offset mismatch for URevLimiterMotorSimComponent::OnRevLimiterStateChanged");

// /Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UReverseMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float ReverseEngineResistanceModifier; // 0x00D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UReverseMotorSimComponent, ReverseEngineResistanceModifier) == 208, "Offset mismatch for UReverseMotorSimComponent::ReverseEngineResistanceModifier");

// /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class URpmCurveMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> Gears; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    float InterpSpeed; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    FMulticastInlineDelegate OnUpShift; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDownShift; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(URpmCurveMotorSimComponent, Gears) == 208, "Offset mismatch for URpmCurveMotorSimComponent::Gears");
static_assert(offsetof(URpmCurveMotorSimComponent, InterpSpeed) == 224, "Offset mismatch for URpmCurveMotorSimComponent::InterpSpeed");
static_assert(offsetof(URpmCurveMotorSimComponent, OnUpShift) == 232, "Offset mismatch for URpmCurveMotorSimComponent::OnUpShift");
static_assert(offsetof(URpmCurveMotorSimComponent, OnDownShift) == 248, "Offset mismatch for URpmCurveMotorSimComponent::OnDownShift");

// /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UThrottleStateMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnThrottleEngaged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnThrottleReleased; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEngineBlowoff; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float BlowoffMinThrottleTime; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UThrottleStateMotorSimComponent, OnThrottleEngaged) == 208, "Offset mismatch for UThrottleStateMotorSimComponent::OnThrottleEngaged");
static_assert(offsetof(UThrottleStateMotorSimComponent, OnThrottleReleased) == 224, "Offset mismatch for UThrottleStateMotorSimComponent::OnThrottleReleased");
static_assert(offsetof(UThrottleStateMotorSimComponent, OnEngineBlowoff) == 240, "Offset mismatch for UThrottleStateMotorSimComponent::OnEngineBlowoff");
static_assert(offsetof(UThrottleStateMotorSimComponent, BlowoffMinThrottleTime) == 256, "Offset mismatch for UThrottleStateMotorSimComponent::BlowoffMinThrottleTime");

// /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
// Kind: Class; super: AudioMotorSimComponent
class UVelocitySyncMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float NoThrottleTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float SpeedThreshold; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedToRpmCurve[0x48]; // 0x00D8 (Size: 0x48, Type: StructProperty)
    float InterpSpeed; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float InterpTime; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float FirstGearThrottleThreshold; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVelocitySyncMotorSimComponent, NoThrottleTime) == 208, "Offset mismatch for UVelocitySyncMotorSimComponent::NoThrottleTime");
static_assert(offsetof(UVelocitySyncMotorSimComponent, SpeedThreshold) == 212, "Offset mismatch for UVelocitySyncMotorSimComponent::SpeedThreshold");
static_assert(offsetof(UVelocitySyncMotorSimComponent, SpeedToRpmCurve) == 216, "Offset mismatch for UVelocitySyncMotorSimComponent::SpeedToRpmCurve");
static_assert(offsetof(UVelocitySyncMotorSimComponent, InterpSpeed) == 288, "Offset mismatch for UVelocitySyncMotorSimComponent::InterpSpeed");
static_assert(offsetof(UVelocitySyncMotorSimComponent, InterpTime) == 292, "Offset mismatch for UVelocitySyncMotorSimComponent::InterpTime");
static_assert(offsetof(UVelocitySyncMotorSimComponent, FirstGearThrottleThreshold) == 296, "Offset mismatch for UVelocitySyncMotorSimComponent::FirstGearThrottleThreshold");
