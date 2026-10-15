/**
 * decamp dumper generated SDK
 * Package: /Script/RockVehicleRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RockVehicleRuntime.AnimNode_RockVehicleController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_RockVehicleController
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t ChassisBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t BouncyChassis[0x1]; // 0x00D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_RockVehicleController, ChassisBone) == 200, "Offset mismatch for FAnimNode_RockVehicleController::ChassisBone");
static_assert(offsetof(FAnimNode_RockVehicleController, BouncyChassis) == 212, "Offset mismatch for FAnimNode_RockVehicleController::BouncyChassis");

// /Script/RockVehicleRuntime.BouncyChassisInstance
// Kind: ScriptStruct; super: none
struct FBouncyChassisInstance
{
public:
    std::uint8_t Spring[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisInstance, Spring) == 0, "Offset mismatch for FBouncyChassisInstance::Spring");

// /Script/RockVehicleRuntime.BouncyChassisSetup
// Kind: ScriptStruct; super: none
struct FBouncyChassisSetup
{
public:
    std::uint8_t PitchSpring[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float PitchMaxAngleDegrees; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RollSpring[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    float RollMaxAngleDegrees; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ZSpring[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    float ZMaxDrop; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ZMaxRaise; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MassOffset[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisSetup, PitchSpring) == 0, "Offset mismatch for FBouncyChassisSetup::PitchSpring");
static_assert(offsetof(FBouncyChassisSetup, PitchMaxAngleDegrees) == 8, "Offset mismatch for FBouncyChassisSetup::PitchMaxAngleDegrees");
static_assert(offsetof(FBouncyChassisSetup, RollSpring) == 12, "Offset mismatch for FBouncyChassisSetup::RollSpring");
static_assert(offsetof(FBouncyChassisSetup, RollMaxAngleDegrees) == 20, "Offset mismatch for FBouncyChassisSetup::RollMaxAngleDegrees");
static_assert(offsetof(FBouncyChassisSetup, ZSpring) == 24, "Offset mismatch for FBouncyChassisSetup::ZSpring");
static_assert(offsetof(FBouncyChassisSetup, ZMaxDrop) == 32, "Offset mismatch for FBouncyChassisSetup::ZMaxDrop");
static_assert(offsetof(FBouncyChassisSetup, ZMaxRaise) == 36, "Offset mismatch for FBouncyChassisSetup::ZMaxRaise");
static_assert(offsetof(FBouncyChassisSetup, MaxDisplacement) == 40, "Offset mismatch for FBouncyChassisSetup::MaxDisplacement");
static_assert(offsetof(FBouncyChassisSetup, MassOffset) == 64, "Offset mismatch for FBouncyChassisSetup::MassOffset");

// /Script/RockVehicleRuntime.BouncyChassisState
// Kind: ScriptStruct; super: none
struct FBouncyChassisState
{
public:
    float PitchDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RollDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslationZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBouncyChassisState, PitchDegrees) == 0, "Offset mismatch for FBouncyChassisState::PitchDegrees");
static_assert(offsetof(FBouncyChassisState, RollDegrees) == 4, "Offset mismatch for FBouncyChassisState::RollDegrees");
static_assert(offsetof(FBouncyChassisState, TranslationZ) == 8, "Offset mismatch for FBouncyChassisState::TranslationZ");

// /Script/RockVehicleRuntime.GroundTrailsData
// Kind: ScriptStruct; super: none
struct FGroundTrailsData
{
public:
    std::uint8_t SurfaceType; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* NiagaraFx; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGroundTrailsData, SurfaceType) == 0, "Offset mismatch for FGroundTrailsData::SurfaceType");
static_assert(offsetof(FGroundTrailsData, NiagaraFx) == 8, "Offset mismatch for FGroundTrailsData::NiagaraFx");

// /Script/RockVehicleRuntime.GroundTrailsMap
// Kind: ScriptStruct; super: none
struct FGroundTrailsMap
{
public:
    void* DefaultTrails; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GroundTrails; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGroundTrailsMap, DefaultTrails) == 0, "Offset mismatch for FGroundTrailsMap::DefaultTrails");
static_assert(offsetof(FGroundTrailsMap, GroundTrails) == 8, "Offset mismatch for FGroundTrailsMap::GroundTrails");

// /Script/RockVehicleRuntime.RockBoxSpring
// Kind: ScriptStruct; super: none
struct FRockBoxSpring
{
public:
    std::uint8_t Setup[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockBoxSpring, Setup) == 0, "Offset mismatch for FRockBoxSpring::Setup");

// /Script/RockVehicleRuntime.RockBoxSpringSetup
// Kind: ScriptStruct; super: none
struct FRockBoxSpringSetup
{
public:
    std::uint8_t Strength[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Damping[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockBoxSpringSetup, Strength) == 0, "Offset mismatch for FRockBoxSpringSetup::Strength");
static_assert(offsetof(FRockBoxSpringSetup, Damping) == 24, "Offset mismatch for FRockBoxSpringSetup::Damping");
static_assert(offsetof(FRockBoxSpringSetup, MaxDisplacement) == 48, "Offset mismatch for FRockBoxSpringSetup::MaxDisplacement");
static_assert(offsetof(FRockBoxSpringSetup, MaxSpeed) == 72, "Offset mismatch for FRockBoxSpringSetup::MaxSpeed");
static_assert(offsetof(FRockBoxSpringSetup, Mass) == 76, "Offset mismatch for FRockBoxSpringSetup::Mass");

// /Script/RockVehicleRuntime.RockCameraSettings
// Kind: ScriptStruct; super: none
struct FRockCameraSettings
{
public:
    float FOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SwivelSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TransitionSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockCameraSettings, FOV) == 0, "Offset mismatch for FRockCameraSettings::FOV");
static_assert(offsetof(FRockCameraSettings, Height) == 4, "Offset mismatch for FRockCameraSettings::Height");
static_assert(offsetof(FRockCameraSettings, Pitch) == 8, "Offset mismatch for FRockCameraSettings::Pitch");
static_assert(offsetof(FRockCameraSettings, Distance) == 12, "Offset mismatch for FRockCameraSettings::Distance");
static_assert(offsetof(FRockCameraSettings, Stiffness) == 16, "Offset mismatch for FRockCameraSettings::Stiffness");
static_assert(offsetof(FRockCameraSettings, SwivelSpeed) == 20, "Offset mismatch for FRockCameraSettings::SwivelSpeed");
static_assert(offsetof(FRockCameraSettings, TransitionSpeed) == 24, "Offset mismatch for FRockCameraSettings::TransitionSpeed");

// /Script/RockVehicleRuntime.RockDodgeImpulse
// Kind: ScriptStruct; super: none
struct FRockDodgeImpulse
{
public:
    std::uint8_t VelocityChange[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxSpeedScale[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockDodgeImpulse, VelocityChange) == 0, "Offset mismatch for FRockDodgeImpulse::VelocityChange");
static_assert(offsetof(FRockDodgeImpulse, MaxSpeedScale) == 48, "Offset mismatch for FRockDodgeImpulse::MaxSpeedScale");

// /Script/RockVehicleRuntime.RockDodgeImpulse_PhysicsThread
// Kind: ScriptStruct; super: none
struct FRockDodgeImpulse_PhysicsThread
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockRuntimeConfigOverrides
// Kind: ScriptStruct; super: none
struct FRockRuntimeConfigOverrides
{
public:
    std::uint8_t bDamageFriendlyVehicles; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageOtherVehicles; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageOwnVehicle; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageAllowedFromOtherVehicle; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageFriendlyVehicles) == 0, "Offset mismatch for FRockRuntimeConfigOverrides::bDamageFriendlyVehicles");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageOtherVehicles) == 1, "Offset mismatch for FRockRuntimeConfigOverrides::bDamageOtherVehicles");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageOwnVehicle) == 2, "Offset mismatch for FRockRuntimeConfigOverrides::bDamageOwnVehicle");
static_assert(offsetof(FRockRuntimeConfigOverrides, bDamageAllowedFromOtherVehicle) == 3, "Offset mismatch for FRockRuntimeConfigOverrides::bDamageAllowedFromOtherVehicle");

// /Script/RockVehicleRuntime.RockScalableFloat
// Kind: ScriptStruct; super: ScalableFloat
struct FRockScalableFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float CachedValue; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockScalableFloat, CachedValue) == 40, "Offset mismatch for FRockScalableFloat::CachedValue");

// /Script/RockVehicleRuntime.RockThrottledValue
// Kind: ScriptStruct; super: none
struct FRockThrottledValue
{
public:
    float RiseRate; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FallRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockThrottledValue, RiseRate) == 0, "Offset mismatch for FRockThrottledValue::RiseRate");
static_assert(offsetof(FRockThrottledValue, FallRate) == 4, "Offset mismatch for FRockThrottledValue::FallRate");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous
// Kind: ScriptStruct; super: none
struct FRockVehicleAbilityInContinuous
{
public:
    std::uint8_t InputState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous, InputState) == 0, "Offset mismatch for FRockVehicleAbilityInContinuous::InputState");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AirControl
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous_AirControl
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bAnyWheelsOnGround; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeActive; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoUprightActive; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bAnyWheelsOnGround) == 64, "Offset mismatch for FRockVehicleAbilityInContinuous_AirControl::bAnyWheelsOnGround");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bDodgeActive) == 65, "Offset mismatch for FRockVehicleAbilityInContinuous_AirControl::bDodgeActive");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AirControl, bAutoUprightActive) == 66, "Offset mismatch for FRockVehicleAbilityInContinuous_AirControl::bAutoUprightActive");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_AutoUpright
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous_AutoUpright
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::int32_t LastWorldContactFrame; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bWheelsOnGround; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeActive; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBodyContact; // 0x0047 (Size: 0x1, Type: BoolProperty)
    float TimeSinceLastBodyContact; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, LastWorldContactFrame) == 64, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::LastWorldContactFrame");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bWheelsOnGround) == 68, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::bWheelsOnGround");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bAnyWheelsOnGround) == 69, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::bAnyWheelsOnGround");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bDodgeActive) == 70, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::bDodgeActive");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, bBodyContact) == 71, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::bBodyContact");
static_assert(offsetof(FRockVehicleAbilityInContinuous_AutoUpright, TimeSinceLastBodyContact) == 72, "Offset mismatch for FRockVehicleAbilityInContinuous_AutoUpright::TimeSinceLastBodyContact");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Boost
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous_Boost
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bHasBoost; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous_Boost, bHasBoost) == 64, "Offset mismatch for FRockVehicleAbilityInContinuous_Boost::bHasBoost");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Dodge
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous_Dodge
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bWheelsOnGround; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous_Dodge, bWheelsOnGround) == 64, "Offset mismatch for FRockVehicleAbilityInContinuous_Dodge::bWheelsOnGround");

// /Script/RockVehicleRuntime.RockVehicleAbilityInContinuous_Flip
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehicleAbilityInContinuous_Flip
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bWheelsOnGround; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehicleAbilityInContinuous_Flip, bWheelsOnGround) == 64, "Offset mismatch for FRockVehicleAbilityInContinuous_Flip::bWheelsOnGround");

// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent
// Kind: ScriptStruct; super: none
struct FRockVehicleAbilityInPersistent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AirControl
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_AirControl
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TorqueAccel[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t TorqueDamping[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float DisableForDodgeTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, TorqueAccel) == 8, "Offset mismatch for FRockVehicleAbilityInPersistent_AirControl::TorqueAccel");
static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, TorqueDamping) == 32, "Offset mismatch for FRockVehicleAbilityInPersistent_AirControl::TorqueDamping");
static_assert(offsetof(FRockVehicleAbilityInPersistent_AirControl, DisableForDodgeTime) == 56, "Offset mismatch for FRockVehicleAbilityInPersistent_AirControl::DisableForDodgeTime");

// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_AutoUpright
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_AutoUpright
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Boost
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_Boost
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Dodge
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_Dodge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_DoubleJump
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_DoubleJump
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Flip
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_Flip
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityInPersistent_Jump
// Kind: ScriptStruct; super: RockVehicleAbilityInPersistent
struct FRockVehicleAbilityInPersistent_Jump
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicleAbilityOutContinuous
// Kind: ScriptStruct; super: none
struct FRockVehicleAbilityOutContinuous
{
public:
    std::uint8_t bShouldStayActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehicleAbilityOutContinuous, bShouldStayActive) == 0, "Offset mismatch for FRockVehicleAbilityOutContinuous::bShouldStayActive");

// /Script/RockVehicleRuntime.RockVehicleAbilityOutPersistent
// Kind: ScriptStruct; super: none
struct FRockVehicleAbilityOutPersistent
{
public:
    float ActiveSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleAbilityOutPersistent, ActiveSeconds) == 0, "Offset mismatch for FRockVehicleAbilityOutPersistent::ActiveSeconds");

// /Script/RockVehicleRuntime.RockVehicleAnalyticsSession
// Kind: ScriptStruct; super: none
struct FRockVehicleAnalyticsSession
{
public:
    void* DriverPC; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRockVehicleAnalyticsSession, DriverPC) == 0, "Offset mismatch for FRockVehicleAnalyticsSession::DriverPC");

// /Script/RockVehicleRuntime.RockVehicleAxleConfig
// Kind: ScriptStruct; super: none
struct FRockVehicleAxleConfig
{
public:
    float TranslateX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TranslateY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslateZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RestDistanceZ; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Suspension[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockVehicleAxleConfig, TranslateX) == 0, "Offset mismatch for FRockVehicleAxleConfig::TranslateX");
static_assert(offsetof(FRockVehicleAxleConfig, TranslateY) == 4, "Offset mismatch for FRockVehicleAxleConfig::TranslateY");
static_assert(offsetof(FRockVehicleAxleConfig, TranslateZ) == 8, "Offset mismatch for FRockVehicleAxleConfig::TranslateZ");
static_assert(offsetof(FRockVehicleAxleConfig, WheelRadius) == 12, "Offset mismatch for FRockVehicleAxleConfig::WheelRadius");
static_assert(offsetof(FRockVehicleAxleConfig, RestDistanceZ) == 16, "Offset mismatch for FRockVehicleAxleConfig::RestDistanceZ");
static_assert(offsetof(FRockVehicleAxleConfig, Suspension) == 20, "Offset mismatch for FRockVehicleAxleConfig::Suspension");

// /Script/RockVehicleRuntime.RockVehicleDemoConfig
// Kind: ScriptStruct; super: none
struct FRockVehicleDemoConfig
{
public:
    std::uint8_t VehiclesThatCanBeDemolished[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    float DemolishAngleYaw; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DemolishAnglePitch; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleDemoConfig, VehiclesThatCanBeDemolished) == 0, "Offset mismatch for FRockVehicleDemoConfig::VehiclesThatCanBeDemolished");
static_assert(offsetof(FRockVehicleDemoConfig, DemolishAngleYaw) == 32, "Offset mismatch for FRockVehicleDemoConfig::DemolishAngleYaw");
static_assert(offsetof(FRockVehicleDemoConfig, DemolishAnglePitch) == 36, "Offset mismatch for FRockVehicleDemoConfig::DemolishAnglePitch");

// /Script/RockVehicleRuntime.RockVehicleDriveConfig
// Kind: ScriptStruct; super: none
struct FRockVehicleDriveConfig
{
public:
    std::uint8_t DriveAccel[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t DriveTopSpeed[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t BrakeAccel[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t StopSpeed[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    float IdleBrakeFactor; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00C4
    std::uint8_t DriveAccelCurve[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t SteerAngleCurve[0x48]; // 0x0110 (Size: 0x48, Type: StructProperty)
    std::uint8_t LatFrictionCurve[0x48]; // 0x0158 (Size: 0x48, Type: StructProperty)
    std::uint8_t LongFrictionCurve[0x48]; // 0x01A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t WallFrictionCurve[0x48]; // 0x01E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t HandbrakeSteerAngleCurve[0x48]; // 0x0230 (Size: 0x48, Type: StructProperty)
    std::uint8_t HandbrakeLatFrictionCurve[0x48]; // 0x0278 (Size: 0x48, Type: StructProperty)
    std::uint8_t HandbrakeLongFrictionCurve[0x48]; // 0x02C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t HandbrakeRate[0x1]; // 0x0308 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockVehicleDriveConfig, DriveAccel) == 0, "Offset mismatch for FRockVehicleDriveConfig::DriveAccel");
static_assert(offsetof(FRockVehicleDriveConfig, DriveTopSpeed) == 48, "Offset mismatch for FRockVehicleDriveConfig::DriveTopSpeed");
static_assert(offsetof(FRockVehicleDriveConfig, BrakeAccel) == 96, "Offset mismatch for FRockVehicleDriveConfig::BrakeAccel");
static_assert(offsetof(FRockVehicleDriveConfig, StopSpeed) == 144, "Offset mismatch for FRockVehicleDriveConfig::StopSpeed");
static_assert(offsetof(FRockVehicleDriveConfig, IdleBrakeFactor) == 192, "Offset mismatch for FRockVehicleDriveConfig::IdleBrakeFactor");
static_assert(offsetof(FRockVehicleDriveConfig, DriveAccelCurve) == 200, "Offset mismatch for FRockVehicleDriveConfig::DriveAccelCurve");
static_assert(offsetof(FRockVehicleDriveConfig, SteerAngleCurve) == 272, "Offset mismatch for FRockVehicleDriveConfig::SteerAngleCurve");
static_assert(offsetof(FRockVehicleDriveConfig, LatFrictionCurve) == 344, "Offset mismatch for FRockVehicleDriveConfig::LatFrictionCurve");
static_assert(offsetof(FRockVehicleDriveConfig, LongFrictionCurve) == 416, "Offset mismatch for FRockVehicleDriveConfig::LongFrictionCurve");
static_assert(offsetof(FRockVehicleDriveConfig, WallFrictionCurve) == 488, "Offset mismatch for FRockVehicleDriveConfig::WallFrictionCurve");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeSteerAngleCurve) == 560, "Offset mismatch for FRockVehicleDriveConfig::HandbrakeSteerAngleCurve");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeLatFrictionCurve) == 632, "Offset mismatch for FRockVehicleDriveConfig::HandbrakeLatFrictionCurve");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeLongFrictionCurve) == 704, "Offset mismatch for FRockVehicleDriveConfig::HandbrakeLongFrictionCurve");
static_assert(offsetof(FRockVehicleDriveConfig, HandbrakeRate) == 776, "Offset mismatch for FRockVehicleDriveConfig::HandbrakeRate");

// /Script/RockVehicleRuntime.RockVehicleState
// Kind: ScriptStruct; super: none
struct FRockVehicleState
{
public:
    std::uint8_t RigidBodyState[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    std::uint8_t PrevDriverInput[0x40]; // 0x0080 (Size: 0x40, Type: StructProperty)
    std::uint8_t bWheelsOnGround; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x00C2
    std::uint8_t AverageSpringNormal[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRockVehicleState, RigidBodyState) == 0, "Offset mismatch for FRockVehicleState::RigidBodyState");
static_assert(offsetof(FRockVehicleState, PrevDriverInput) == 128, "Offset mismatch for FRockVehicleState::PrevDriverInput");
static_assert(offsetof(FRockVehicleState, bWheelsOnGround) == 192, "Offset mismatch for FRockVehicleState::bWheelsOnGround");
static_assert(offsetof(FRockVehicleState, bAnyWheelsOnGround) == 193, "Offset mismatch for FRockVehicleState::bAnyWheelsOnGround");
static_assert(offsetof(FRockVehicleState, AverageSpringNormal) == 200, "Offset mismatch for FRockVehicleState::AverageSpringNormal");

// /Script/RockVehicleRuntime.RockVehicleSuspensionConfig
// Kind: ScriptStruct; super: none
struct FRockVehicleSuspensionConfig
{
public:
    float MaxRaise; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxDrop; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DampingCompression; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DampingRelaxation; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RockDampingCompression; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float RockDampingRelaxation; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleSuspensionConfig, MaxRaise) == 0, "Offset mismatch for FRockVehicleSuspensionConfig::MaxRaise");
static_assert(offsetof(FRockVehicleSuspensionConfig, MaxDrop) == 4, "Offset mismatch for FRockVehicleSuspensionConfig::MaxDrop");
static_assert(offsetof(FRockVehicleSuspensionConfig, Stiffness) == 8, "Offset mismatch for FRockVehicleSuspensionConfig::Stiffness");
static_assert(offsetof(FRockVehicleSuspensionConfig, DampingCompression) == 12, "Offset mismatch for FRockVehicleSuspensionConfig::DampingCompression");
static_assert(offsetof(FRockVehicleSuspensionConfig, DampingRelaxation) == 16, "Offset mismatch for FRockVehicleSuspensionConfig::DampingRelaxation");
static_assert(offsetof(FRockVehicleSuspensionConfig, Strength) == 20, "Offset mismatch for FRockVehicleSuspensionConfig::Strength");
static_assert(offsetof(FRockVehicleSuspensionConfig, RockDampingCompression) == 24, "Offset mismatch for FRockVehicleSuspensionConfig::RockDampingCompression");
static_assert(offsetof(FRockVehicleSuspensionConfig, RockDampingRelaxation) == 28, "Offset mismatch for FRockVehicleSuspensionConfig::RockDampingRelaxation");

// /Script/RockVehicleRuntime.RockVehicleWheelAnimInfo
// Kind: ScriptStruct; super: none
struct FRockVehicleWheelAnimInfo
{
public:
    float SpringToWheelOffsetZ; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringTravelRange[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    float WheelRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRockVehicleWheelAnimInfo, SpringToWheelOffsetZ) == 0, "Offset mismatch for FRockVehicleWheelAnimInfo::SpringToWheelOffsetZ");
static_assert(offsetof(FRockVehicleWheelAnimInfo, SpringTravelRange) == 4, "Offset mismatch for FRockVehicleWheelAnimInfo::SpringTravelRange");
static_assert(offsetof(FRockVehicleWheelAnimInfo, WheelRadius) == 12, "Offset mismatch for FRockVehicleWheelAnimInfo::WheelRadius");

// /Script/RockVehicleRuntime.RockVehileAbilityInContinous_StickyWheels
// Kind: ScriptStruct; super: RockVehicleAbilityInContinuous
struct FRockVehileAbilityInContinous_StickyWheels
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t ContactNormal[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, ContactNormal) == 64, "Offset mismatch for FRockVehileAbilityInContinous_StickyWheels::ContactNormal");
static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, Scale) == 88, "Offset mismatch for FRockVehileAbilityInContinous_StickyWheels::Scale");
static_assert(offsetof(FRockVehileAbilityInContinous_StickyWheels, bAnyWheelsOnGround) == 92, "Offset mismatch for FRockVehileAbilityInContinous_StickyWheels::bAnyWheelsOnGround");

// /Script/RockVehicleRuntime.SpringSettings
// Kind: ScriptStruct; super: none
struct FSpringSettings
{
public:
    float Strength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpringSettings, Strength) == 0, "Offset mismatch for FSpringSettings::Strength");
static_assert(offsetof(FSpringSettings, Damping) == 4, "Offset mismatch for FSpringSettings::Damping");

// /Script/RockVehicleRuntime.FortCheatManager_RockVehicle
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_RockVehicle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RockVehicleRuntime.RockVehicle
// Kind: Class; super: FortAthenaSKVehicle
class URockVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    float InputSwivelPitch; // 0x2020 (Size: 0x4, Type: FloatProperty)
    float InputSwivelYaw; // 0x2024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasDodged; // 0x2028 (Size: 0x1, Type: BoolProperty)
    // 0x2028 BoolProperty bHasDoubleJumped (shared storage)
    // 0x2028 BoolProperty bInputReverseCamera (shared storage)
    std::uint8_t bFreeLookCamera; // 0x2029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x202A
    FMulticastInlineDelegate OnFreeCamToggled; // 0x2030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x1]; // 0x2040
    std::uint8_t RockRuntimeConfigs[0x1F]; // 0x2041 (Size: 0x1F, Type: StructProperty)
    FMulticastInlineDelegate OnSpringImpact; // 0x2060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x78]; // 0x2070
    void* RockAnalyticsComp; // 0x20E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VehicleAbilities; // 0x20F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VehicleAbilityTickOrder; // 0x2100 (Size: 0x10, Type: ArrayProperty)
    void* CachedVehicleAudioController; // 0x2110 (Size: 0x8, Type: ObjectProperty)
    void* SupersonicAbility; // 0x2118 (Size: 0x8, Type: ObjectProperty)
    void* RockAnimInstance; // 0x2120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PendingDriverInputState[0x40]; // 0x2128 (Size: 0x40, Type: StructProperty)
    std::uint8_t PrevDriverInputState[0x40]; // 0x2168 (Size: 0x40, Type: StructProperty)
    std::uint8_t EnterExitImpulse[0x18]; // 0x21A8 (Size: 0x18, Type: StructProperty)
    void* InputActionThrottleForward; // 0x21C0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionThrottleBackward; // 0x21C8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionSteerLeft; // 0x21D0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionSteerRight; // 0x21D8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionPitchForward; // 0x21E0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionPitchBackward; // 0x21E8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionYawLeft; // 0x21F0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionYawRight; // 0x21F8 (Size: 0x8, Type: ObjectProperty)
    void* InputActionHandbrake; // 0x2200 (Size: 0x8, Type: ObjectProperty)
    void* InputActionJump; // 0x2208 (Size: 0x8, Type: ObjectProperty)
    void* InputActionRollToggle; // 0x2210 (Size: 0x8, Type: ObjectProperty)
    void* InputActionCameraToggle; // 0x2218 (Size: 0x8, Type: ObjectProperty)
    void* InputActionReverseCamera; // 0x2220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicle, InputSwivelPitch) == 8224, "Offset mismatch for URockVehicle::InputSwivelPitch");
static_assert(offsetof(URockVehicle, InputSwivelYaw) == 8228, "Offset mismatch for URockVehicle::InputSwivelYaw");
static_assert(offsetof(URockVehicle, bHasDodged) == 8232, "Offset mismatch for URockVehicle::bHasDodged");
static_assert(offsetof(URockVehicle, bFreeLookCamera) == 8233, "Offset mismatch for URockVehicle::bFreeLookCamera");
static_assert(offsetof(URockVehicle, OnFreeCamToggled) == 8240, "Offset mismatch for URockVehicle::OnFreeCamToggled");
static_assert(offsetof(URockVehicle, RockRuntimeConfigs) == 8257, "Offset mismatch for URockVehicle::RockRuntimeConfigs");
static_assert(offsetof(URockVehicle, OnSpringImpact) == 8288, "Offset mismatch for URockVehicle::OnSpringImpact");
static_assert(offsetof(URockVehicle, RockAnalyticsComp) == 8424, "Offset mismatch for URockVehicle::RockAnalyticsComp");
static_assert(offsetof(URockVehicle, VehicleAbilities) == 8432, "Offset mismatch for URockVehicle::VehicleAbilities");
static_assert(offsetof(URockVehicle, VehicleAbilityTickOrder) == 8448, "Offset mismatch for URockVehicle::VehicleAbilityTickOrder");
static_assert(offsetof(URockVehicle, CachedVehicleAudioController) == 8464, "Offset mismatch for URockVehicle::CachedVehicleAudioController");
static_assert(offsetof(URockVehicle, SupersonicAbility) == 8472, "Offset mismatch for URockVehicle::SupersonicAbility");
static_assert(offsetof(URockVehicle, RockAnimInstance) == 8480, "Offset mismatch for URockVehicle::RockAnimInstance");
static_assert(offsetof(URockVehicle, PendingDriverInputState) == 8488, "Offset mismatch for URockVehicle::PendingDriverInputState");
static_assert(offsetof(URockVehicle, PrevDriverInputState) == 8552, "Offset mismatch for URockVehicle::PrevDriverInputState");
static_assert(offsetof(URockVehicle, EnterExitImpulse) == 8616, "Offset mismatch for URockVehicle::EnterExitImpulse");
static_assert(offsetof(URockVehicle, InputActionThrottleForward) == 8640, "Offset mismatch for URockVehicle::InputActionThrottleForward");
static_assert(offsetof(URockVehicle, InputActionThrottleBackward) == 8648, "Offset mismatch for URockVehicle::InputActionThrottleBackward");
static_assert(offsetof(URockVehicle, InputActionSteerLeft) == 8656, "Offset mismatch for URockVehicle::InputActionSteerLeft");
static_assert(offsetof(URockVehicle, InputActionSteerRight) == 8664, "Offset mismatch for URockVehicle::InputActionSteerRight");
static_assert(offsetof(URockVehicle, InputActionPitchForward) == 8672, "Offset mismatch for URockVehicle::InputActionPitchForward");
static_assert(offsetof(URockVehicle, InputActionPitchBackward) == 8680, "Offset mismatch for URockVehicle::InputActionPitchBackward");
static_assert(offsetof(URockVehicle, InputActionYawLeft) == 8688, "Offset mismatch for URockVehicle::InputActionYawLeft");
static_assert(offsetof(URockVehicle, InputActionYawRight) == 8696, "Offset mismatch for URockVehicle::InputActionYawRight");
static_assert(offsetof(URockVehicle, InputActionHandbrake) == 8704, "Offset mismatch for URockVehicle::InputActionHandbrake");
static_assert(offsetof(URockVehicle, InputActionJump) == 8712, "Offset mismatch for URockVehicle::InputActionJump");
static_assert(offsetof(URockVehicle, InputActionRollToggle) == 8720, "Offset mismatch for URockVehicle::InputActionRollToggle");
static_assert(offsetof(URockVehicle, InputActionCameraToggle) == 8728, "Offset mismatch for URockVehicle::InputActionCameraToggle");
static_assert(offsetof(URockVehicle, InputActionReverseCamera) == 8736, "Offset mismatch for URockVehicle::InputActionReverseCamera");

// /Script/RockVehicleRuntime.RockVehicleAbility
// Kind: Class; super: ActorComponent
class URockVehicleAbility
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* Vehicle; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    float ActiveSeconds; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float LastDeactivationTimeSeconds; // 0x00CC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleAbility, Vehicle) == 192, "Offset mismatch for URockVehicleAbility::Vehicle");
static_assert(offsetof(URockVehicleAbility, ActiveSeconds) == 200, "Offset mismatch for URockVehicleAbility::ActiveSeconds");
static_assert(offsetof(URockVehicleAbility, LastDeactivationTimeSeconds) == 204, "Offset mismatch for URockVehicleAbility::LastDeactivationTimeSeconds");

// /Script/RockVehicleRuntime.RockVehicleAbility_AirControl
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_AirControl
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t TorqueAccel[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t TorqueDamping[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    float DisableForDodgeTime; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeActive; // 0x0175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoUprightActive; // 0x0176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0177
    void* DodgeAbility; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* AutoUprightAbility; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleAbility_AirControl, TorqueAccel) == 320, "Offset mismatch for URockVehicleAbility_AirControl::TorqueAccel");
static_assert(offsetof(URockVehicleAbility_AirControl, TorqueDamping) == 344, "Offset mismatch for URockVehicleAbility_AirControl::TorqueDamping");
static_assert(offsetof(URockVehicleAbility_AirControl, DisableForDodgeTime) == 368, "Offset mismatch for URockVehicleAbility_AirControl::DisableForDodgeTime");
static_assert(offsetof(URockVehicleAbility_AirControl, bAnyWheelsOnGround) == 372, "Offset mismatch for URockVehicleAbility_AirControl::bAnyWheelsOnGround");
static_assert(offsetof(URockVehicleAbility_AirControl, bDodgeActive) == 373, "Offset mismatch for URockVehicleAbility_AirControl::bDodgeActive");
static_assert(offsetof(URockVehicleAbility_AirControl, bAutoUprightActive) == 374, "Offset mismatch for URockVehicleAbility_AirControl::bAutoUprightActive");
static_assert(offsetof(URockVehicleAbility_AirControl, DodgeAbility) == 376, "Offset mismatch for URockVehicleAbility_AirControl::DodgeAbility");
static_assert(offsetof(URockVehicleAbility_AirControl, AutoUprightAbility) == 384, "Offset mismatch for URockVehicleAbility_AirControl::AutoUprightAbility");

// /Script/RockVehicleRuntime.RockVehicleAbility_AutoUpright
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_AutoUpright
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t RollTorque[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t PitchTorque[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t PushForce[0x30]; // 0x01A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinActiveSeconds[0x30]; // 0x01D0 (Size: 0x30, Type: StructProperty)
    void* DodgeAbility; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LastWorldContactFrame; // 0x0208 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x020C
    std::uint8_t LastContactNormal[0x18]; // 0x0210 (Size: 0x18, Type: StructProperty)
    std::uint8_t bWheelsOnGround; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x0229 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDodgeActive; // 0x022A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBodyContact; // 0x022B (Size: 0x1, Type: BoolProperty)
    float TimeSinceLastBodyContact; // 0x022C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleAbility_AutoUpright, RollTorque) == 320, "Offset mismatch for URockVehicleAbility_AutoUpright::RollTorque");
static_assert(offsetof(URockVehicleAbility_AutoUpright, PitchTorque) == 368, "Offset mismatch for URockVehicleAbility_AutoUpright::PitchTorque");
static_assert(offsetof(URockVehicleAbility_AutoUpright, PushForce) == 416, "Offset mismatch for URockVehicleAbility_AutoUpright::PushForce");
static_assert(offsetof(URockVehicleAbility_AutoUpright, MinActiveSeconds) == 464, "Offset mismatch for URockVehicleAbility_AutoUpright::MinActiveSeconds");
static_assert(offsetof(URockVehicleAbility_AutoUpright, DodgeAbility) == 512, "Offset mismatch for URockVehicleAbility_AutoUpright::DodgeAbility");
static_assert(offsetof(URockVehicleAbility_AutoUpright, LastWorldContactFrame) == 520, "Offset mismatch for URockVehicleAbility_AutoUpright::LastWorldContactFrame");
static_assert(offsetof(URockVehicleAbility_AutoUpright, LastContactNormal) == 528, "Offset mismatch for URockVehicleAbility_AutoUpright::LastContactNormal");
static_assert(offsetof(URockVehicleAbility_AutoUpright, bWheelsOnGround) == 552, "Offset mismatch for URockVehicleAbility_AutoUpright::bWheelsOnGround");
static_assert(offsetof(URockVehicleAbility_AutoUpright, bAnyWheelsOnGround) == 553, "Offset mismatch for URockVehicleAbility_AutoUpright::bAnyWheelsOnGround");
static_assert(offsetof(URockVehicleAbility_AutoUpright, bDodgeActive) == 554, "Offset mismatch for URockVehicleAbility_AutoUpright::bDodgeActive");
static_assert(offsetof(URockVehicleAbility_AutoUpright, bBodyContact) == 555, "Offset mismatch for URockVehicleAbility_AutoUpright::bBodyContact");
static_assert(offsetof(URockVehicleAbility_AutoUpright, TimeSinceLastBodyContact) == 556, "Offset mismatch for URockVehicleAbility_AutoUpright::TimeSinceLastBodyContact");

// /Script/RockVehicleRuntime.RockVehicleAbility_Boost
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_Boost
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t BoostAccel[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    FMulticastInlineDelegate OnBoostFailed; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* BoostTank; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasBoost; // 0x0188 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URockVehicleAbility_Boost, BoostAccel) == 320, "Offset mismatch for URockVehicleAbility_Boost::BoostAccel");
static_assert(offsetof(URockVehicleAbility_Boost, OnBoostFailed) == 368, "Offset mismatch for URockVehicleAbility_Boost::OnBoostFailed");
static_assert(offsetof(URockVehicleAbility_Boost, BoostTank) == 384, "Offset mismatch for URockVehicleAbility_Boost::BoostTank");
static_assert(offsetof(URockVehicleAbility_Boost, bHasBoost) == 392, "Offset mismatch for URockVehicleAbility_Boost::bHasBoost");

// /Script/RockVehicleRuntime.RockVehicleAbility_Dodge
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_Dodge
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t ForwardImpulse[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    std::uint8_t BackwardImpulse[0x60]; // 0x01A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t SideImpulse[0x60]; // 0x0200 (Size: 0x60, Type: StructProperty)
    std::uint8_t MinTimeAfterJump[0x30]; // 0x0260 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinTorqueTime[0x30]; // 0x0290 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxTorqueTime[0x30]; // 0x02C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForwardTorque[0x30]; // 0x02F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SideTorque[0x30]; // 0x0320 (Size: 0x30, Type: StructProperty)
    std::uint8_t ZLiftTime[0x30]; // 0x0350 (Size: 0x30, Type: StructProperty)
    std::uint8_t ZLiftAccel[0x30]; // 0x0380 (Size: 0x30, Type: StructProperty)
    std::uint8_t ZDampingTime[0x30]; // 0x03B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ZDamping[0x30]; // 0x03E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t InputThreshold[0x30]; // 0x0410 (Size: 0x30, Type: StructProperty)
    std::uint8_t DodgeInput[0x10]; // 0x0440 (Size: 0x10, Type: StructProperty)
    std::uint8_t bWheelsOnGround; // 0x0450 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URockVehicleAbility_Dodge, ForwardImpulse) == 320, "Offset mismatch for URockVehicleAbility_Dodge::ForwardImpulse");
static_assert(offsetof(URockVehicleAbility_Dodge, BackwardImpulse) == 416, "Offset mismatch for URockVehicleAbility_Dodge::BackwardImpulse");
static_assert(offsetof(URockVehicleAbility_Dodge, SideImpulse) == 512, "Offset mismatch for URockVehicleAbility_Dodge::SideImpulse");
static_assert(offsetof(URockVehicleAbility_Dodge, MinTimeAfterJump) == 608, "Offset mismatch for URockVehicleAbility_Dodge::MinTimeAfterJump");
static_assert(offsetof(URockVehicleAbility_Dodge, MinTorqueTime) == 656, "Offset mismatch for URockVehicleAbility_Dodge::MinTorqueTime");
static_assert(offsetof(URockVehicleAbility_Dodge, MaxTorqueTime) == 704, "Offset mismatch for URockVehicleAbility_Dodge::MaxTorqueTime");
static_assert(offsetof(URockVehicleAbility_Dodge, ForwardTorque) == 752, "Offset mismatch for URockVehicleAbility_Dodge::ForwardTorque");
static_assert(offsetof(URockVehicleAbility_Dodge, SideTorque) == 800, "Offset mismatch for URockVehicleAbility_Dodge::SideTorque");
static_assert(offsetof(URockVehicleAbility_Dodge, ZLiftTime) == 848, "Offset mismatch for URockVehicleAbility_Dodge::ZLiftTime");
static_assert(offsetof(URockVehicleAbility_Dodge, ZLiftAccel) == 896, "Offset mismatch for URockVehicleAbility_Dodge::ZLiftAccel");
static_assert(offsetof(URockVehicleAbility_Dodge, ZDampingTime) == 944, "Offset mismatch for URockVehicleAbility_Dodge::ZDampingTime");
static_assert(offsetof(URockVehicleAbility_Dodge, ZDamping) == 992, "Offset mismatch for URockVehicleAbility_Dodge::ZDamping");
static_assert(offsetof(URockVehicleAbility_Dodge, InputThreshold) == 1040, "Offset mismatch for URockVehicleAbility_Dodge::InputThreshold");
static_assert(offsetof(URockVehicleAbility_Dodge, DodgeInput) == 1088, "Offset mismatch for URockVehicleAbility_Dodge::DodgeInput");
static_assert(offsetof(URockVehicleAbility_Dodge, bWheelsOnGround) == 1104, "Offset mismatch for URockVehicleAbility_Dodge::bWheelsOnGround");

// /Script/RockVehicleRuntime.RockVehicleAbility_DoubleJump
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_DoubleJump
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t JumpVelocity[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    void* JumpAbility; // 0x0170 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleAbility_DoubleJump, JumpVelocity) == 320, "Offset mismatch for URockVehicleAbility_DoubleJump::JumpVelocity");
static_assert(offsetof(URockVehicleAbility_DoubleJump, JumpAbility) == 368, "Offset mismatch for URockVehicleAbility_DoubleJump::JumpAbility");

// /Script/RockVehicleRuntime.RockVehicleAbility_Flip
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_Flip
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Impulse[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t Torque[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t duration[0x30]; // 0x01A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ContactNormalThresholdDegrees[0x30]; // 0x01D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bWheelsOnGround; // 0x0200 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URockVehicleAbility_Flip, Impulse) == 320, "Offset mismatch for URockVehicleAbility_Flip::Impulse");
static_assert(offsetof(URockVehicleAbility_Flip, Torque) == 368, "Offset mismatch for URockVehicleAbility_Flip::Torque");
static_assert(offsetof(URockVehicleAbility_Flip, duration) == 416, "Offset mismatch for URockVehicleAbility_Flip::duration");
static_assert(offsetof(URockVehicleAbility_Flip, ContactNormalThresholdDegrees) == 464, "Offset mismatch for URockVehicleAbility_Flip::ContactNormalThresholdDegrees");
static_assert(offsetof(URockVehicleAbility_Flip, bWheelsOnGround) == 512, "Offset mismatch for URockVehicleAbility_Flip::bWheelsOnGround");

// /Script/RockVehicleRuntime.RockVehicleAbility_GroundTrails
// Kind: Class; super: RockVehicleAbility
class URockVehicleAbility_GroundTrails
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t GroundTrailsMap[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    TArray<void*> GroundTrailSockets; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* HandbrakeSystem; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GroundTrailComponents; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HandbrakeComponents; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URockVehicleAbility_GroundTrails, GroundTrailsMap) == 208, "Offset mismatch for URockVehicleAbility_GroundTrails::GroundTrailsMap");
static_assert(offsetof(URockVehicleAbility_GroundTrails, GroundTrailSockets) == 232, "Offset mismatch for URockVehicleAbility_GroundTrails::GroundTrailSockets");
static_assert(offsetof(URockVehicleAbility_GroundTrails, HandbrakeSystem) == 248, "Offset mismatch for URockVehicleAbility_GroundTrails::HandbrakeSystem");
static_assert(offsetof(URockVehicleAbility_GroundTrails, GroundTrailComponents) == 256, "Offset mismatch for URockVehicleAbility_GroundTrails::GroundTrailComponents");
static_assert(offsetof(URockVehicleAbility_GroundTrails, HandbrakeComponents) == 272, "Offset mismatch for URockVehicleAbility_GroundTrails::HandbrakeComponents");

// /Script/RockVehicleRuntime.RockVehicleAbility_Jump
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_Jump
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t JumpVelocity[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpAccel[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinJumpSeconds[0x30]; // 0x01A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxJumpSeconds[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URockVehicleAbility_Jump, JumpVelocity) == 320, "Offset mismatch for URockVehicleAbility_Jump::JumpVelocity");
static_assert(offsetof(URockVehicleAbility_Jump, JumpAccel) == 368, "Offset mismatch for URockVehicleAbility_Jump::JumpAccel");
static_assert(offsetof(URockVehicleAbility_Jump, MinJumpSeconds) == 416, "Offset mismatch for URockVehicleAbility_Jump::MinJumpSeconds");
static_assert(offsetof(URockVehicleAbility_Jump, MaxJumpSeconds) == 464, "Offset mismatch for URockVehicleAbility_Jump::MaxJumpSeconds");

// /Script/RockVehicleRuntime.RockVehicleAbility_Physics
// Kind: Class; super: RockVehicleAbility
class URockVehicleAbility_Physics
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bShouldStayActive; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t InputState[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URockVehicleAbility_Physics, bShouldStayActive) == 208, "Offset mismatch for URockVehicleAbility_Physics::bShouldStayActive");
static_assert(offsetof(URockVehicleAbility_Physics, InputState) == 216, "Offset mismatch for URockVehicleAbility_Physics::InputState");

// /Script/RockVehicleRuntime.RockVehicleAbility_StickyWheels
// Kind: Class; super: RockVehicleAbility_Physics
class URockVehicleAbility_StickyWheels
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t StickyForceScaleGround[0x30]; // 0x0140 (Size: 0x30, Type: StructProperty)
    std::uint8_t StickyForceScaleWall[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t ContactNormal[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAnyWheelsOnGround; // 0x01BC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URockVehicleAbility_StickyWheels, StickyForceScaleGround) == 320, "Offset mismatch for URockVehicleAbility_StickyWheels::StickyForceScaleGround");
static_assert(offsetof(URockVehicleAbility_StickyWheels, StickyForceScaleWall) == 368, "Offset mismatch for URockVehicleAbility_StickyWheels::StickyForceScaleWall");
static_assert(offsetof(URockVehicleAbility_StickyWheels, ContactNormal) == 416, "Offset mismatch for URockVehicleAbility_StickyWheels::ContactNormal");
static_assert(offsetof(URockVehicleAbility_StickyWheels, Scale) == 440, "Offset mismatch for URockVehicleAbility_StickyWheels::Scale");
static_assert(offsetof(URockVehicleAbility_StickyWheels, bAnyWheelsOnGround) == 444, "Offset mismatch for URockVehicleAbility_StickyWheels::bAnyWheelsOnGround");

// /Script/RockVehicleRuntime.RockVehicleAbility_Supersonic
// Kind: Class; super: RockVehicleAbility
class URockVehicleAbility_Supersonic
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnTrailsActivate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrailsDeactivate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TurnOffTime[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TurnOnTime[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTurnOnTimeRequirement; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0151
    std::uint8_t TurnOffSpeedBuffer[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    float TimeBelowSupersonic; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float WorldTimeSupersonicExceeded; // 0x018C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleAbility_Supersonic, OnTrailsActivate) == 208, "Offset mismatch for URockVehicleAbility_Supersonic::OnTrailsActivate");
static_assert(offsetof(URockVehicleAbility_Supersonic, OnTrailsDeactivate) == 224, "Offset mismatch for URockVehicleAbility_Supersonic::OnTrailsDeactivate");
static_assert(offsetof(URockVehicleAbility_Supersonic, TurnOffTime) == 240, "Offset mismatch for URockVehicleAbility_Supersonic::TurnOffTime");
static_assert(offsetof(URockVehicleAbility_Supersonic, TurnOnTime) == 288, "Offset mismatch for URockVehicleAbility_Supersonic::TurnOnTime");
static_assert(offsetof(URockVehicleAbility_Supersonic, bUseTurnOnTimeRequirement) == 336, "Offset mismatch for URockVehicleAbility_Supersonic::bUseTurnOnTimeRequirement");
static_assert(offsetof(URockVehicleAbility_Supersonic, TurnOffSpeedBuffer) == 344, "Offset mismatch for URockVehicleAbility_Supersonic::TurnOffSpeedBuffer");
static_assert(offsetof(URockVehicleAbility_Supersonic, TimeBelowSupersonic) == 392, "Offset mismatch for URockVehicleAbility_Supersonic::TimeBelowSupersonic");
static_assert(offsetof(URockVehicleAbility_Supersonic, WorldTimeSupersonicExceeded) == 396, "Offset mismatch for URockVehicleAbility_Supersonic::WorldTimeSupersonicExceeded");

// /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent
// Kind: Class; super: ActorComponent
class URockVehicleAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CurrentSession[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    void* Vehicle; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleAnalyticsComponent, CurrentSession) == 200, "Offset mismatch for URockVehicleAnalyticsComponent::CurrentSession");
static_assert(offsetof(URockVehicleAnalyticsComponent, Vehicle) == 240, "Offset mismatch for URockVehicleAnalyticsComponent::Vehicle");

// /Script/RockVehicleRuntime.RockVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class URockVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    std::uint8_t BouncyChassis[0xC]; // 0x0500 (Size: 0xC, Type: StructProperty)
    std::uint8_t WheelInfoFR[0x14]; // 0x050C (Size: 0x14, Type: StructProperty)
    std::uint8_t WheelInfoFL[0x14]; // 0x0520 (Size: 0x14, Type: StructProperty)
    std::uint8_t WheelInfoBR[0x14]; // 0x0534 (Size: 0x14, Type: StructProperty)
    std::uint8_t WheelInfoBL[0x14]; // 0x0548 (Size: 0x14, Type: StructProperty)
    float WheelLerpSpeed; // 0x055C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleAnimInstance, BouncyChassis) == 1280, "Offset mismatch for URockVehicleAnimInstance::BouncyChassis");
static_assert(offsetof(URockVehicleAnimInstance, WheelInfoFR) == 1292, "Offset mismatch for URockVehicleAnimInstance::WheelInfoFR");
static_assert(offsetof(URockVehicleAnimInstance, WheelInfoFL) == 1312, "Offset mismatch for URockVehicleAnimInstance::WheelInfoFL");
static_assert(offsetof(URockVehicleAnimInstance, WheelInfoBR) == 1332, "Offset mismatch for URockVehicleAnimInstance::WheelInfoBR");
static_assert(offsetof(URockVehicleAnimInstance, WheelInfoBL) == 1352, "Offset mismatch for URockVehicleAnimInstance::WheelInfoBL");
static_assert(offsetof(URockVehicleAnimInstance, WheelLerpSpeed) == 1372, "Offset mismatch for URockVehicleAnimInstance::WheelLerpSpeed");

// /Script/RockVehicleRuntime.RockVehicleAudioController
// Kind: Class; super: FortAthenaVehicleAudioController
class URockVehicleAudioController
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    std::uint8_t SideSpeedToSkidVolume[0x48]; // 0x03C0 (Size: 0x48, Type: StructProperty)
    float SurfaceTypeInterpSpeed; // 0x0408 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x040C
    void* TireSurfaceComponent; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    void* AirLoopComponent; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* SuperSonicComponent; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInWater; // 0x0428 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0429
    void* MotorModel; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    void* CachedVehicle; // 0x0438 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleAudioController, SideSpeedToSkidVolume) == 960, "Offset mismatch for URockVehicleAudioController::SideSpeedToSkidVolume");
static_assert(offsetof(URockVehicleAudioController, SurfaceTypeInterpSpeed) == 1032, "Offset mismatch for URockVehicleAudioController::SurfaceTypeInterpSpeed");
static_assert(offsetof(URockVehicleAudioController, TireSurfaceComponent) == 1040, "Offset mismatch for URockVehicleAudioController::TireSurfaceComponent");
static_assert(offsetof(URockVehicleAudioController, AirLoopComponent) == 1048, "Offset mismatch for URockVehicleAudioController::AirLoopComponent");
static_assert(offsetof(URockVehicleAudioController, SuperSonicComponent) == 1056, "Offset mismatch for URockVehicleAudioController::SuperSonicComponent");
static_assert(offsetof(URockVehicleAudioController, bInWater) == 1064, "Offset mismatch for URockVehicleAudioController::bInWater");
static_assert(offsetof(URockVehicleAudioController, MotorModel) == 1072, "Offset mismatch for URockVehicleAudioController::MotorModel");
static_assert(offsetof(URockVehicleAudioController, CachedVehicle) == 1080, "Offset mismatch for URockVehicleAudioController::CachedVehicle");

// /Script/RockVehicleRuntime.RockVehicleBoostTank
// Kind: Class; super: ActorComponent
class URockVehicleBoostTank
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSecondsChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartSeconds[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxSeconds[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    std::uint8_t BoostLogic; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0131
    float BoostRechargeRate; // 0x0134 (Size: 0x4, Type: FloatProperty)
    float BoostRechargeDelay; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float SecondsRemaining; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleBoostTank, OnSecondsChanged) == 192, "Offset mismatch for URockVehicleBoostTank::OnSecondsChanged");
static_assert(offsetof(URockVehicleBoostTank, StartSeconds) == 208, "Offset mismatch for URockVehicleBoostTank::StartSeconds");
static_assert(offsetof(URockVehicleBoostTank, MaxSeconds) == 256, "Offset mismatch for URockVehicleBoostTank::MaxSeconds");
static_assert(offsetof(URockVehicleBoostTank, BoostLogic) == 304, "Offset mismatch for URockVehicleBoostTank::BoostLogic");
static_assert(offsetof(URockVehicleBoostTank, BoostRechargeRate) == 308, "Offset mismatch for URockVehicleBoostTank::BoostRechargeRate");
static_assert(offsetof(URockVehicleBoostTank, BoostRechargeDelay) == 312, "Offset mismatch for URockVehicleBoostTank::BoostRechargeDelay");
static_assert(offsetof(URockVehicleBoostTank, SecondsRemaining) == 316, "Offset mismatch for URockVehicleBoostTank::SecondsRemaining");

// /Script/RockVehicleRuntime.RockVehicleCameraMode
// Kind: Class; super: FortCameraMode_AthenaVehicle
class URockVehicleCameraMode
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    float SwivelPitchMax; // 0x20A0 (Size: 0x4, Type: FloatProperty)
    float SwivelYawMax; // 0x20A4 (Size: 0x4, Type: FloatProperty)
    float GroundNormalInterpRate; // 0x20A8 (Size: 0x4, Type: FloatProperty)
    float GroundNormalAirInterpRate; // 0x20AC (Size: 0x4, Type: FloatProperty)
    float GroundYawRate; // 0x20B0 (Size: 0x4, Type: FloatProperty)
    float WallYawRate; // 0x20B4 (Size: 0x4, Type: FloatProperty)
    float InterpToGroundTime; // 0x20B8 (Size: 0x4, Type: FloatProperty)
    float InterpToAirTime; // 0x20BC (Size: 0x4, Type: FloatProperty)
    float AverageVelocityInterpRate; // 0x20C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x20C4
    std::uint8_t AirRotationInterpRateForSpeed[0x48]; // 0x20C8 (Size: 0x48, Type: StructProperty)
    float FocusOffsetInterpRate; // 0x2110 (Size: 0x4, Type: FloatProperty)
    float DistanceSpeedScale; // 0x2114 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMin; // 0x2118 (Size: 0x4, Type: FloatProperty)
    float DistanceOffsetMax; // 0x211C (Size: 0x4, Type: FloatProperty)
    float DistanceInterpRate; // 0x2120 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedFOVOffset; // 0x2124 (Size: 0x4, Type: FloatProperty)
    float SupersonicFOVOffset; // 0x2128 (Size: 0x4, Type: FloatProperty)
    float FOVInterpRate; // 0x212C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CameraSettings[0x20]; // 0x2130 (Size: 0x20, Type: StructProperty)
    void* VehicleTarget; // 0x2150 (Size: 0x8, Type: ObjectProperty)
    void* JumpAbility; // 0x2158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleCameraMode, SwivelPitchMax) == 8352, "Offset mismatch for URockVehicleCameraMode::SwivelPitchMax");
static_assert(offsetof(URockVehicleCameraMode, SwivelYawMax) == 8356, "Offset mismatch for URockVehicleCameraMode::SwivelYawMax");
static_assert(offsetof(URockVehicleCameraMode, GroundNormalInterpRate) == 8360, "Offset mismatch for URockVehicleCameraMode::GroundNormalInterpRate");
static_assert(offsetof(URockVehicleCameraMode, GroundNormalAirInterpRate) == 8364, "Offset mismatch for URockVehicleCameraMode::GroundNormalAirInterpRate");
static_assert(offsetof(URockVehicleCameraMode, GroundYawRate) == 8368, "Offset mismatch for URockVehicleCameraMode::GroundYawRate");
static_assert(offsetof(URockVehicleCameraMode, WallYawRate) == 8372, "Offset mismatch for URockVehicleCameraMode::WallYawRate");
static_assert(offsetof(URockVehicleCameraMode, InterpToGroundTime) == 8376, "Offset mismatch for URockVehicleCameraMode::InterpToGroundTime");
static_assert(offsetof(URockVehicleCameraMode, InterpToAirTime) == 8380, "Offset mismatch for URockVehicleCameraMode::InterpToAirTime");
static_assert(offsetof(URockVehicleCameraMode, AverageVelocityInterpRate) == 8384, "Offset mismatch for URockVehicleCameraMode::AverageVelocityInterpRate");
static_assert(offsetof(URockVehicleCameraMode, AirRotationInterpRateForSpeed) == 8392, "Offset mismatch for URockVehicleCameraMode::AirRotationInterpRateForSpeed");
static_assert(offsetof(URockVehicleCameraMode, FocusOffsetInterpRate) == 8464, "Offset mismatch for URockVehicleCameraMode::FocusOffsetInterpRate");
static_assert(offsetof(URockVehicleCameraMode, DistanceSpeedScale) == 8468, "Offset mismatch for URockVehicleCameraMode::DistanceSpeedScale");
static_assert(offsetof(URockVehicleCameraMode, DistanceOffsetMin) == 8472, "Offset mismatch for URockVehicleCameraMode::DistanceOffsetMin");
static_assert(offsetof(URockVehicleCameraMode, DistanceOffsetMax) == 8476, "Offset mismatch for URockVehicleCameraMode::DistanceOffsetMax");
static_assert(offsetof(URockVehicleCameraMode, DistanceInterpRate) == 8480, "Offset mismatch for URockVehicleCameraMode::DistanceInterpRate");
static_assert(offsetof(URockVehicleCameraMode, MaxSpeedFOVOffset) == 8484, "Offset mismatch for URockVehicleCameraMode::MaxSpeedFOVOffset");
static_assert(offsetof(URockVehicleCameraMode, SupersonicFOVOffset) == 8488, "Offset mismatch for URockVehicleCameraMode::SupersonicFOVOffset");
static_assert(offsetof(URockVehicleCameraMode, FOVInterpRate) == 8492, "Offset mismatch for URockVehicleCameraMode::FOVInterpRate");
static_assert(offsetof(URockVehicleCameraMode, CameraSettings) == 8496, "Offset mismatch for URockVehicleCameraMode::CameraSettings");
static_assert(offsetof(URockVehicleCameraMode, VehicleTarget) == 8528, "Offset mismatch for URockVehicleCameraMode::VehicleTarget");
static_assert(offsetof(URockVehicleCameraMode, JumpAbility) == 8536, "Offset mismatch for URockVehicleCameraMode::JumpAbility");

// /Script/RockVehicleRuntime.RockVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class URockVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    std::uint8_t FrontAxle[0x34]; // 0x0990 (Size: 0x34, Type: StructProperty)
    std::uint8_t BackAxle[0x34]; // 0x09C4 (Size: 0x34, Type: StructProperty)
    std::uint8_t Drive[0x310]; // 0x09F8 (Size: 0x310, Type: StructProperty)
    std::uint8_t DemolitionConfiguration[0x28]; // 0x0D08 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLinearSpeed[0x30]; // 0x0D30 (Size: 0x30, Type: StructProperty)
    std::uint8_t SupersonicSpeed[0x30]; // 0x0D60 (Size: 0x30, Type: StructProperty)
    float MaxAngularSpeed; // 0x0D90 (Size: 0x4, Type: FloatProperty)
    float SafeBuildingLandingDegrees; // 0x0D94 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URockVehicleConfigs, FrontAxle) == 2448, "Offset mismatch for URockVehicleConfigs::FrontAxle");
static_assert(offsetof(URockVehicleConfigs, BackAxle) == 2500, "Offset mismatch for URockVehicleConfigs::BackAxle");
static_assert(offsetof(URockVehicleConfigs, Drive) == 2552, "Offset mismatch for URockVehicleConfigs::Drive");
static_assert(offsetof(URockVehicleConfigs, DemolitionConfiguration) == 3336, "Offset mismatch for URockVehicleConfigs::DemolitionConfiguration");
static_assert(offsetof(URockVehicleConfigs, MaxLinearSpeed) == 3376, "Offset mismatch for URockVehicleConfigs::MaxLinearSpeed");
static_assert(offsetof(URockVehicleConfigs, SupersonicSpeed) == 3424, "Offset mismatch for URockVehicleConfigs::SupersonicSpeed");
static_assert(offsetof(URockVehicleConfigs, MaxAngularSpeed) == 3472, "Offset mismatch for URockVehicleConfigs::MaxAngularSpeed");
static_assert(offsetof(URockVehicleConfigs, SafeBuildingLandingDegrees) == 3476, "Offset mismatch for URockVehicleConfigs::SafeBuildingLandingDegrees");

// /Script/RockVehicleRuntime.RockVehicleManager
// Kind: Class; super: Actor
class URockVehicleManager
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> RockVehicles; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URockVehicleManager, RockVehicles) == 640, "Offset mismatch for URockVehicleManager::RockVehicles");

// /Script/RockVehicleRuntime.RockVehicleWorldSubsystem
// Kind: Class; super: WorldSubsystem
class URockVehicleWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* VehicleManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URockVehicleWorldSubsystem, VehicleManager) == 56, "Offset mismatch for URockVehicleWorldSubsystem::VehicleManager");

// /Script/RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
// Kind: Class; super: FortVehicleInteractionOverrideComponent
class URockVehicle_InteractionOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* SecondContextOverrideWidget; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bContextOverrideWidgetApplied; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URockVehicle_InteractionOverrideComponent, SecondContextOverrideWidget) == 192, "Offset mismatch for URockVehicle_InteractionOverrideComponent::SecondContextOverrideWidget");
static_assert(offsetof(URockVehicle_InteractionOverrideComponent, bContextOverrideWidgetApplied) == 200, "Offset mismatch for URockVehicle_InteractionOverrideComponent::bContextOverrideWidgetApplied");

// /Script/RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
// Kind: Class; super: StreamingRadioPlayerComponent
class UStreamingRadioPlayerComponent_Rock
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TMap<void*, void*> InputMappingData; // 0x00D8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RadialMenuInputMappingData; // 0x00E8 (Size: 0x10, Type: MapProperty)
    FMulticastInlineDelegate OnSourceLoading; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourcePlayed; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourceStopped; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourceFailed; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetadataChanged; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRadioExplicitStop; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float PercentAutostartRadio; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x015C
    TArray<void*> DisabledVehicleList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ExteriorVolumeMultiplierMap; // 0x0170 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InteriorVolumeMultiplierMap; // 0x0180 (Size: 0x10, Type: MapProperty)
    std::uint8_t bMinimalStateOnPlatform; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0191
    TArray<void*> DisabledStationList; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutostartOnEntry; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisabledForCurrentPlayerState; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01AA
    std::uint8_t ReplicatedRadioSourceData[0x68]; // 0x01B0 (Size: 0x68, Type: StructProperty)
    FMulticastInlineDelegate OnReplicatedStateChangedDelegate; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SoundComponent; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    void* AudioShape; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* SoundCompTemplateSource; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LastSource[0x58]; // 0x0240 (Size: 0x58, Type: StructProperty)
    std::uint8_t LastMetadata[0x90]; // 0x0298 (Size: 0x90, Type: StructProperty)
    TArray<void*> Sources; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackSource[0x58]; // 0x0338 (Size: 0x58, Type: StructProperty)
    TMap<void*, void*> SpecialSeatList; // 0x0390 (Size: 0x10, Type: MapProperty)
    void* BasePlayerInstance; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSoundSubmix; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSoundSubmix; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMode; // 0x03B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x03B9
    std::int32_t MaximumRetries; // 0x03BC (Size: 0x4, Type: IntProperty)
    std::int32_t FadeoutWhenUnpoweredInMS; // 0x03C0 (Size: 0x4, Type: IntProperty)
    std::int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x03C4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFadeoutTimeMS; // 0x03C8 (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultPlayingIndex; // 0x03CC (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceAutoStartOnInit; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryStopRadioOnSeatChanges; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopRadioOnNetConnectionLost; // 0x03D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x03D3
    void* SoundMixInside; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* SoundMixOutside; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x4]; // 0x03E8
    float ActivationRadius; // 0x03EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComponentToAttachTo[0x4]; // 0x03F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentSocketAttachTo[0x4]; // 0x03F4 (Size: 0x4, Type: NameProperty)
    void* MediaSource; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    FString CMSSuffix; // 0x0400 (Size: 0x10, Type: StrProperty)
    TArray<void*> RadioStationList; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MockedRadioStationList; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    void* DelegateContextObject; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0438
    float MediaStartTimeFromInit; // 0x043C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x20]; // 0x0440
    void* CachedDriverLocalPlayer; // 0x0460 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, InputMappingData) == 216, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::InputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, RadialMenuInputMappingData) == 232, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::RadialMenuInputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnSourceLoading) == 248, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnSourceLoading");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnSourcePlayed) == 264, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnSourcePlayed");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnSourceStopped) == 280, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnSourceStopped");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnSourceFailed) == 296, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnSourceFailed");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnMetadataChanged) == 312, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnMetadataChanged");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnRadioExplicitStop) == 328, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnRadioExplicitStop");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, PercentAutostartRadio) == 344, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::PercentAutostartRadio");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, DisabledVehicleList) == 352, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::DisabledVehicleList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, ExteriorVolumeMultiplierMap) == 368, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::ExteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, InteriorVolumeMultiplierMap) == 384, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::InteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bMinimalStateOnPlatform) == 400, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bMinimalStateOnPlatform");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, DisabledStationList) == 408, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::DisabledStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bAutostartOnEntry) == 424, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bAutostartOnEntry");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bDisabledForCurrentPlayerState) == 425, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bDisabledForCurrentPlayerState");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, ReplicatedRadioSourceData) == 432, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::ReplicatedRadioSourceData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, OnReplicatedStateChangedDelegate) == 536, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::OnReplicatedStateChangedDelegate");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, SoundComponent) == 552, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::SoundComponent");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, AudioShape) == 560, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::AudioShape");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, SoundCompTemplateSource) == 568, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::SoundCompTemplateSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, LastSource) == 576, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::LastSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, LastMetadata) == 664, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::LastMetadata");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, Sources) == 808, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::Sources");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, FallbackSource) == 824, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::FallbackSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, SpecialSeatList) == 912, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::SpecialSeatList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, BasePlayerInstance) == 928, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::BasePlayerInstance");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, DefaultSoundSubmix) == 936, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::DefaultSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, LicensedSoundSubmix) == 944, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::LicensedSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, CurrentMode) == 952, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::CurrentMode");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, MaximumRetries) == 956, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::MaximumRetries");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, FadeoutWhenUnpoweredInMS) == 960, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::FadeoutWhenUnpoweredInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, FadeoutWhenOwnerBeingDestroyedInMS) == 964, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::FadeoutWhenOwnerBeingDestroyedInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, MaxFadeoutTimeMS) == 968, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::MaxFadeoutTimeMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, DefaultPlayingIndex) == 972, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::DefaultPlayingIndex");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bForceAutoStartOnInit) == 976, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bForceAutoStartOnInit");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bTryStopRadioOnSeatChanges) == 977, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bTryStopRadioOnSeatChanges");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, bStopRadioOnNetConnectionLost) == 978, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::bStopRadioOnNetConnectionLost");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, SoundMixInside) == 984, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::SoundMixInside");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, SoundMixOutside) == 992, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::SoundMixOutside");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, ActivationRadius) == 1004, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::ActivationRadius");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, ComponentToAttachTo) == 1008, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::ComponentToAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, ComponentSocketAttachTo) == 1012, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::ComponentSocketAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, MediaSource) == 1016, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::MediaSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, CMSSuffix) == 1024, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::CMSSuffix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, RadioStationList) == 1040, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::RadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, MockedRadioStationList) == 1056, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::MockedRadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, DelegateContextObject) == 1072, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::DelegateContextObject");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, MediaStartTimeFromInit) == 1084, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::MediaStartTimeFromInit");
static_assert(offsetof(UStreamingRadioPlayerComponent_Rock, CachedDriverLocalPlayer) == 1120, "Offset mismatch for UStreamingRadioPlayerComponent_Rock::CachedDriverLocalPlayer");
