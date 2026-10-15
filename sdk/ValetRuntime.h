/**
 * decamp dumper generated SDK
 * Package: /Script/ValetRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ValetRuntime.DagwoodActionDefForUI
// Kind: ScriptStruct; super: none
struct FDagwoodActionDefForUI
{
public:
    TArray<void*> ActionDefForUI; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDagwoodActionDefForUI, ActionDefForUI) == 0, "Offset mismatch for FDagwoodActionDefForUI::ActionDefForUI");

// /Script/ValetRuntime.DagwoodCollisionHitFXConfig
// Kind: ScriptStruct; super: none
struct FDagwoodCollisionHitFXConfig
{
public:
    std::uint8_t HitMagnitudeParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float HitMagnitudeThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SpeedThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* PawnImpactFX; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ScrapeImpactFX; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDagwoodCollisionHitFXConfig, HitMagnitudeParameterName) == 0, "Offset mismatch for FDagwoodCollisionHitFXConfig::HitMagnitudeParameterName");
static_assert(offsetof(FDagwoodCollisionHitFXConfig, HitMagnitudeThreshold) == 4, "Offset mismatch for FDagwoodCollisionHitFXConfig::HitMagnitudeThreshold");
static_assert(offsetof(FDagwoodCollisionHitFXConfig, SpeedThreshold) == 8, "Offset mismatch for FDagwoodCollisionHitFXConfig::SpeedThreshold");
static_assert(offsetof(FDagwoodCollisionHitFXConfig, PawnImpactFX) == 16, "Offset mismatch for FDagwoodCollisionHitFXConfig::PawnImpactFX");
static_assert(offsetof(FDagwoodCollisionHitFXConfig, ScrapeImpactFX) == 24, "Offset mismatch for FDagwoodCollisionHitFXConfig::ScrapeImpactFX");

// /Script/ValetRuntime.DagwoodCollisionHitHapticsConfig
// Kind: ScriptStruct; super: none
struct FDagwoodCollisionHitHapticsConfig
{
public:
    float HitMagnitudeThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StrongHitMagnitudeThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BigCameraShakeVerticalHeadingThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BigCameraShakeAccelerationThreshold; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinBigCameraShakeAcceleration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxBigCameraShakeAcceleration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MinBigCameraShakeNormalizedAcceleration; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxBigCameraShakeNormalizedAcceleration; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinSmallCameraShakeHitMagnitude; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxSmallCameraShakeHitMagnitude; // 0x0024 (Size: 0x4, Type: FloatProperty)
    void* SmallHitCameraShakeEffect; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* BigHitCameraShakeEffect; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* SmallHitForceFeedbackEffect; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* BigHitForceFeedbackEffect; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, HitMagnitudeThreshold) == 0, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::HitMagnitudeThreshold");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, StrongHitMagnitudeThreshold) == 4, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::StrongHitMagnitudeThreshold");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, BigCameraShakeVerticalHeadingThreshold) == 8, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::BigCameraShakeVerticalHeadingThreshold");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, BigCameraShakeAccelerationThreshold) == 12, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::BigCameraShakeAccelerationThreshold");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MinBigCameraShakeAcceleration) == 16, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MinBigCameraShakeAcceleration");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MaxBigCameraShakeAcceleration) == 20, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MaxBigCameraShakeAcceleration");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MinBigCameraShakeNormalizedAcceleration) == 24, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MinBigCameraShakeNormalizedAcceleration");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MaxBigCameraShakeNormalizedAcceleration) == 28, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MaxBigCameraShakeNormalizedAcceleration");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MinSmallCameraShakeHitMagnitude) == 32, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MinSmallCameraShakeHitMagnitude");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, MaxSmallCameraShakeHitMagnitude) == 36, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::MaxSmallCameraShakeHitMagnitude");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, SmallHitCameraShakeEffect) == 40, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::SmallHitCameraShakeEffect");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, BigHitCameraShakeEffect) == 48, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::BigHitCameraShakeEffect");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, SmallHitForceFeedbackEffect) == 56, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::SmallHitForceFeedbackEffect");
static_assert(offsetof(FDagwoodCollisionHitHapticsConfig, BigHitForceFeedbackEffect) == 64, "Offset mismatch for FDagwoodCollisionHitHapticsConfig::BigHitForceFeedbackEffect");

// /Script/ValetRuntime.DagwoodFutureClientInput
// Kind: ScriptStruct; super: none
struct FDagwoodFutureClientInput
{
public:
    std::int32_t Frame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t InputCmd[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDagwoodFutureClientInput, Frame) == 0, "Offset mismatch for FDagwoodFutureClientInput::Frame");
static_assert(offsetof(FDagwoodFutureClientInput, InputCmd) == 8, "Offset mismatch for FDagwoodFutureClientInput::InputCmd");

// /Script/ValetRuntime.DagwoodInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FDagwoodInPersistent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* FortDagwoodVehicleConfigs; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DagwoodRuntimeModifiedProperties[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDagwoodInPersistent, FortDagwoodVehicleConfigs) == 448, "Offset mismatch for FDagwoodInPersistent::FortDagwoodVehicleConfigs");
static_assert(offsetof(FDagwoodInPersistent, DagwoodRuntimeModifiedProperties) == 456, "Offset mismatch for FDagwoodInPersistent::DagwoodRuntimeModifiedProperties");

// /Script/ValetRuntime.DagwoodInternal
// Kind: ScriptStruct; super: FortVehicleInternalPersistent
struct FDagwoodInternal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.DagwoodManagedState
// Kind: ScriptStruct; super: none
struct FDagwoodManagedState
{
public:
    std::int32_t Frame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t InputCmd[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t GT_State[0x280]; // 0x0038 (Size: 0x280, Type: StructProperty)
    std::uint8_t PT_State[0x230]; // 0x02B8 (Size: 0x230, Type: StructProperty)
    void* PC; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04F0
    TArray<void*> FutureInputs; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDagwoodManagedState, Frame) == 0, "Offset mismatch for FDagwoodManagedState::Frame");
static_assert(offsetof(FDagwoodManagedState, InputCmd) == 8, "Offset mismatch for FDagwoodManagedState::InputCmd");
static_assert(offsetof(FDagwoodManagedState, GT_State) == 56, "Offset mismatch for FDagwoodManagedState::GT_State");
static_assert(offsetof(FDagwoodManagedState, PT_State) == 696, "Offset mismatch for FDagwoodManagedState::PT_State");
static_assert(offsetof(FDagwoodManagedState, PC) == 1256, "Offset mismatch for FDagwoodManagedState::PC");
static_assert(offsetof(FDagwoodManagedState, FutureInputs) == 1272, "Offset mismatch for FDagwoodManagedState::FutureInputs");

// /Script/ValetRuntime.DagwoodOutContinuous
// Kind: ScriptStruct; super: FortVehicleOutContinuous
struct FDagwoodOutContinuous
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float SteeringAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t AverageSpringNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlatformVelocityDirection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDagwoodOutContinuous, SteeringAngle) == 8, "Offset mismatch for FDagwoodOutContinuous::SteeringAngle");
static_assert(offsetof(FDagwoodOutContinuous, AverageSpringNormal) == 16, "Offset mismatch for FDagwoodOutContinuous::AverageSpringNormal");
static_assert(offsetof(FDagwoodOutContinuous, PlatformVelocityDirection) == 40, "Offset mismatch for FDagwoodOutContinuous::PlatformVelocityDirection");

// /Script/ValetRuntime.DagwoodOutPersistent
// Kind: ScriptStruct; super: FortVehicleOutPersistent
struct FDagwoodOutPersistent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bHasTraction; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartHandBrakeCatchupForce; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDagwoodOutPersistent, bHasTraction) == 40, "Offset mismatch for FDagwoodOutPersistent::bHasTraction");
static_assert(offsetof(FDagwoodOutPersistent, bStartHandBrakeCatchupForce) == 41, "Offset mismatch for FDagwoodOutPersistent::bStartHandBrakeCatchupForce");

// /Script/ValetRuntime.DagwoodRuntimeModifiers
// Kind: ScriptStruct; super: none
struct FDagwoodRuntimeModifiers
{
public:
    std::uint8_t BoostInfo[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t FuelInfo[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t SpringsInfo[0x20]; // 0x0024 (Size: 0x20, Type: StructProperty)
    std::uint8_t bDamageFriendlyVehicles; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageOtherVehicles; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageOwnVehicle; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDamageAllowedFromOtherVehicle; // 0x0047 (Size: 0x1, Type: BoolProperty)
    float GravityMultiplier; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float MaxInclineAngle; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MaxTiltAngle; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    TArray<void*> GearInfos; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TireModTag[0x4]; // 0x0068 (Size: 0x4, Type: StructProperty)
    std::uint8_t ServerTireModVersion; // 0x006C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bTireModAdjustsPosition; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t DataVersion; // 0x006E (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDagwoodRuntimeModifiers, BoostInfo) == 0, "Offset mismatch for FDagwoodRuntimeModifiers::BoostInfo");
static_assert(offsetof(FDagwoodRuntimeModifiers, FuelInfo) == 24, "Offset mismatch for FDagwoodRuntimeModifiers::FuelInfo");
static_assert(offsetof(FDagwoodRuntimeModifiers, SpringsInfo) == 36, "Offset mismatch for FDagwoodRuntimeModifiers::SpringsInfo");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageFriendlyVehicles) == 68, "Offset mismatch for FDagwoodRuntimeModifiers::bDamageFriendlyVehicles");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageOtherVehicles) == 69, "Offset mismatch for FDagwoodRuntimeModifiers::bDamageOtherVehicles");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageOwnVehicle) == 70, "Offset mismatch for FDagwoodRuntimeModifiers::bDamageOwnVehicle");
static_assert(offsetof(FDagwoodRuntimeModifiers, bDamageAllowedFromOtherVehicle) == 71, "Offset mismatch for FDagwoodRuntimeModifiers::bDamageAllowedFromOtherVehicle");
static_assert(offsetof(FDagwoodRuntimeModifiers, GravityMultiplier) == 72, "Offset mismatch for FDagwoodRuntimeModifiers::GravityMultiplier");
static_assert(offsetof(FDagwoodRuntimeModifiers, MaxInclineAngle) == 76, "Offset mismatch for FDagwoodRuntimeModifiers::MaxInclineAngle");
static_assert(offsetof(FDagwoodRuntimeModifiers, MaxTiltAngle) == 80, "Offset mismatch for FDagwoodRuntimeModifiers::MaxTiltAngle");
static_assert(offsetof(FDagwoodRuntimeModifiers, GearInfos) == 88, "Offset mismatch for FDagwoodRuntimeModifiers::GearInfos");
static_assert(offsetof(FDagwoodRuntimeModifiers, TireModTag) == 104, "Offset mismatch for FDagwoodRuntimeModifiers::TireModTag");
static_assert(offsetof(FDagwoodRuntimeModifiers, ServerTireModVersion) == 108, "Offset mismatch for FDagwoodRuntimeModifiers::ServerTireModVersion");
static_assert(offsetof(FDagwoodRuntimeModifiers, bTireModAdjustsPosition) == 109, "Offset mismatch for FDagwoodRuntimeModifiers::bTireModAdjustsPosition");
static_assert(offsetof(FDagwoodRuntimeModifiers, DataVersion) == 110, "Offset mismatch for FDagwoodRuntimeModifiers::DataVersion");

// /Script/ValetRuntime.DagwoodState_PT
// Kind: ScriptStruct; super: none
struct FDagwoodState_PT
{
public:
    std::uint8_t Internal[0x198]; // 0x0000 (Size: 0x198, Type: StructProperty)
    std::uint8_t OutPersistent[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    std::uint8_t OutContinuous[0x60]; // 0x01C8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bOutValid; // 0x0228 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDagwoodState_PT, Internal) == 0, "Offset mismatch for FDagwoodState_PT::Internal");
static_assert(offsetof(FDagwoodState_PT, OutPersistent) == 408, "Offset mismatch for FDagwoodState_PT::OutPersistent");
static_assert(offsetof(FDagwoodState_PT, OutContinuous) == 456, "Offset mismatch for FDagwoodState_PT::OutContinuous");
static_assert(offsetof(FDagwoodState_PT, bOutValid) == 552, "Offset mismatch for FDagwoodState_PT::bOutValid");

// /Script/ValetRuntime.FortDagwoodCmd
// Kind: ScriptStruct; super: none
struct FFortDagwoodCmd
{
public:
    float ForwardAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RightAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AccelerationAlpha; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t MovementDir[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bBoost; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bHandbrake (shared storage)
};

static_assert(offsetof(FFortDagwoodCmd, ForwardAlpha) == 0, "Offset mismatch for FFortDagwoodCmd::ForwardAlpha");
static_assert(offsetof(FFortDagwoodCmd, RightAlpha) == 4, "Offset mismatch for FFortDagwoodCmd::RightAlpha");
static_assert(offsetof(FFortDagwoodCmd, AccelerationAlpha) == 8, "Offset mismatch for FFortDagwoodCmd::AccelerationAlpha");
static_assert(offsetof(FFortDagwoodCmd, MovementDir) == 16, "Offset mismatch for FFortDagwoodCmd::MovementDir");
static_assert(offsetof(FFortDagwoodCmd, bBoost) == 40, "Offset mismatch for FFortDagwoodCmd::bBoost");

// /Script/ValetRuntime.NetworkPhysicsState
// Kind: ScriptStruct; super: none
struct FNetworkPhysicsState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.NetworkPhysicsStateNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNetworkPhysicsStateNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
// Kind: ScriptStruct; super: none
struct FNetworkPhysicsStateNetSerializerDebugData
{
public:
    std::uint8_t Force[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Torque[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearImpulse[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularImpulse[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, Force) == 0, "Offset mismatch for FNetworkPhysicsStateNetSerializerDebugData::Force");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, Torque) == 24, "Offset mismatch for FNetworkPhysicsStateNetSerializerDebugData::Torque");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, LinearImpulse) == 48, "Offset mismatch for FNetworkPhysicsStateNetSerializerDebugData::LinearImpulse");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugData, AngularImpulse) == 72, "Offset mismatch for FNetworkPhysicsStateNetSerializerDebugData::AngularImpulse");

// /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
// Kind: ScriptStruct; super: none
struct FNetworkPhysicsStateNetSerializerDebugState
{
public:
    std::uint8_t DebugData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNetworkPhysicsStateNetSerializerDebugState, DebugData) == 0, "Offset mismatch for FNetworkPhysicsStateNetSerializerDebugState::DebugData");

// /Script/ValetRuntime.NetworkPhysicsStateNetSerializerState
// Kind: ScriptStruct; super: none
struct FNetworkPhysicsStateNetSerializerState
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::int32_t NetworkHandle; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t Frame; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t ObjectState; // 0x0078 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Location) == 0, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::Location");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, LinearVelocity) == 24, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::LinearVelocity");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, AngularVelocity) == 48, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::AngularVelocity");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Rotation) == 80, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::Rotation");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, NetworkHandle) == 112, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::NetworkHandle");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, Frame) == 116, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::Frame");
static_assert(offsetof(FNetworkPhysicsStateNetSerializerState, ObjectState) == 120, "Offset mismatch for FNetworkPhysicsStateNetSerializerState::ObjectState");

// /Script/ValetRuntime.RuntimeBoostInfo
// Kind: ScriptStruct; super: none
struct FRuntimeBoostInfo
{
public:
    std::uint8_t bCanBoost; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bUsesRechargeableBoost (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BoostPushForce; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedForceMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float RechargeableBoostRateOfRegen; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float RechargeableBoostRateOfUse; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRuntimeBoostInfo, bCanBoost) == 0, "Offset mismatch for FRuntimeBoostInfo::bCanBoost");
static_assert(offsetof(FRuntimeBoostInfo, BoostPushForce) == 4, "Offset mismatch for FRuntimeBoostInfo::BoostPushForce");
static_assert(offsetof(FRuntimeBoostInfo, BoostTopSpeedForceMultiplier) == 8, "Offset mismatch for FRuntimeBoostInfo::BoostTopSpeedForceMultiplier");
static_assert(offsetof(FRuntimeBoostInfo, BoostTopSpeedMultiplier) == 12, "Offset mismatch for FRuntimeBoostInfo::BoostTopSpeedMultiplier");
static_assert(offsetof(FRuntimeBoostInfo, RechargeableBoostRateOfRegen) == 16, "Offset mismatch for FRuntimeBoostInfo::RechargeableBoostRateOfRegen");
static_assert(offsetof(FRuntimeBoostInfo, RechargeableBoostRateOfUse) == 20, "Offset mismatch for FRuntimeBoostInfo::RechargeableBoostRateOfUse");

// /Script/ValetRuntime.RuntimeFuelInfo
// Kind: ScriptStruct; super: none
struct FRuntimeFuelInfo
{
public:
    float MaxFuel; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FuelPerSecondDriving; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FuelPerSecondBoosting; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRuntimeFuelInfo, MaxFuel) == 0, "Offset mismatch for FRuntimeFuelInfo::MaxFuel");
static_assert(offsetof(FRuntimeFuelInfo, FuelPerSecondDriving) == 4, "Offset mismatch for FRuntimeFuelInfo::FuelPerSecondDriving");
static_assert(offsetof(FRuntimeFuelInfo, FuelPerSecondBoosting) == 8, "Offset mismatch for FRuntimeFuelInfo::FuelPerSecondBoosting");

// /Script/ValetRuntime.RuntimeGearInfo
// Kind: ScriptStruct; super: none
struct FRuntimeGearInfo
{
public:
    std::int32_t GearIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float TopSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PushForce; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRuntimeGearInfo, GearIndex) == 0, "Offset mismatch for FRuntimeGearInfo::GearIndex");
static_assert(offsetof(FRuntimeGearInfo, TopSpeed) == 4, "Offset mismatch for FRuntimeGearInfo::TopSpeed");
static_assert(offsetof(FRuntimeGearInfo, MinSpeed) == 8, "Offset mismatch for FRuntimeGearInfo::MinSpeed");
static_assert(offsetof(FRuntimeGearInfo, PushForce) == 12, "Offset mismatch for FRuntimeGearInfo::PushForce");

// /Script/ValetRuntime.TireSimulationRuntimeData
// Kind: ScriptStruct; super: none
struct FTireSimulationRuntimeData
{
public:
    std::uint8_t HandlingInfo[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    float PoppedTireSpringLength; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringStiff; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringDamp; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTireSimulationRuntimeData, HandlingInfo) == 0, "Offset mismatch for FTireSimulationRuntimeData::HandlingInfo");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringLength) == 20, "Offset mismatch for FTireSimulationRuntimeData::PoppedTireSpringLength");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringStiff) == 24, "Offset mismatch for FTireSimulationRuntimeData::PoppedTireSpringStiff");
static_assert(offsetof(FTireSimulationRuntimeData, PoppedTireSpringDamp) == 28, "Offset mismatch for FTireSimulationRuntimeData::PoppedTireSpringDamp");

// /Script/ValetRuntime.ValetUpdateContext
// Kind: ScriptStruct; super: none
struct FValetUpdateContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.VehicleAttachment
// Kind: ScriptStruct; super: none
struct FVehicleAttachment
{
public:
    std::uint8_t ModName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SocketName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* SkeletalMesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVehicleAttachment, ModName) == 0, "Offset mismatch for FVehicleAttachment::ModName");
static_assert(offsetof(FVehicleAttachment, SocketName) == 4, "Offset mismatch for FVehicleAttachment::SocketName");
static_assert(offsetof(FVehicleAttachment, SkeletalMesh) == 8, "Offset mismatch for FVehicleAttachment::SkeletalMesh");

// /Script/ValetRuntime.VehiclePropReplacementData
// Kind: ScriptStruct; super: none
struct FVehiclePropReplacementData
{
public:
    std::uint8_t FortVehicleItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TransOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotOffset[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehiclePropReplacementData, FortVehicleItemDefinition) == 0, "Offset mismatch for FVehiclePropReplacementData::FortVehicleItemDefinition");
static_assert(offsetof(FVehiclePropReplacementData, TransOffset) == 32, "Offset mismatch for FVehiclePropReplacementData::TransOffset");
static_assert(offsetof(FVehiclePropReplacementData, RotOffset) == 56, "Offset mismatch for FVehiclePropReplacementData::RotOffset");

// /Script/ValetRuntime.DagwoodNetworkPhysicsComponent
// Kind: Class; super: ActorComponent
class UDagwoodNetworkPhysicsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t NetworkPhysicsState[0x90]; // 0x00C0 (Size: 0x90, Type: StructProperty)
    FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReplicatedManagedState[0x508]; // 0x0160 (Size: 0x508, Type: StructProperty)
    std::uint8_t InManagedState[0x508]; // 0x0668 (Size: 0x508, Type: StructProperty)
    std::uint8_t OutManagedState[0x1]; // 0x0B70 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDagwoodNetworkPhysicsComponent, NetworkPhysicsState) == 192, "Offset mismatch for UDagwoodNetworkPhysicsComponent::NetworkPhysicsState");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, OnGeneratedLocalInputCmd) == 336, "Offset mismatch for UDagwoodNetworkPhysicsComponent::OnGeneratedLocalInputCmd");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, ReplicatedManagedState) == 352, "Offset mismatch for UDagwoodNetworkPhysicsComponent::ReplicatedManagedState");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, InManagedState) == 1640, "Offset mismatch for UDagwoodNetworkPhysicsComponent::InManagedState");
static_assert(offsetof(UDagwoodNetworkPhysicsComponent, OutManagedState) == 2928, "Offset mismatch for UDagwoodNetworkPhysicsComponent::OutManagedState");

// /Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_OverrideValetVehicleParameters
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t MinInitialVehicleFuelPercent[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxInitialVehicleFuelPercent[0x1]; // 0x0308 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_OverrideValetVehicleParameters, MinInitialVehicleFuelPercent) == 736, "Offset mismatch for UFortAthenaMutator_OverrideValetVehicleParameters::MinInitialVehicleFuelPercent");
static_assert(offsetof(UFortAthenaMutator_OverrideValetVehicleParameters, MaxInitialVehicleFuelPercent) == 776, "Offset mismatch for UFortAthenaMutator_OverrideValetVehicleParameters::MaxInitialVehicleFuelPercent");

// /Script/ValetRuntime.FortCameraMode_Dagwood
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UFortCameraMode_Dagwood
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    float HorizontalCameraSpaceOffsetWhileTurning; // 0x20A0 (Size: 0x4, Type: FloatProperty)
    float SteeringAngleForMaxHorizontalOffset; // 0x20A4 (Size: 0x4, Type: FloatProperty)
    float InAirVerticalOffset; // 0x20A8 (Size: 0x4, Type: FloatProperty)
    float AirOffsetDampFactor; // 0x20AC (Size: 0x4, Type: FloatProperty)
    float SpeedAlphaDampFactor; // 0x20B0 (Size: 0x4, Type: FloatProperty)
    float TimeInAirRequiredForVertOffset; // 0x20B4 (Size: 0x4, Type: FloatProperty)
    float VehicleBasePitch; // 0x20B8 (Size: 0x4, Type: FloatProperty)
    float HorizOffsetInterpSpeed; // 0x20BC (Size: 0x4, Type: FloatProperty)
    float HorizOffsetInterpSpeedRecovery; // 0x20C0 (Size: 0x4, Type: FloatProperty)
    float CurrentSpeedAlpha; // 0x20C4 (Size: 0x4, Type: FloatProperty)
    float CurrentVerticalOffset; // 0x20C8 (Size: 0x4, Type: FloatProperty)
    float CurrentHorizontalOffset; // 0x20CC (Size: 0x4, Type: FloatProperty)
    float TimeInAir; // 0x20D0 (Size: 0x4, Type: FloatProperty)
    float PreviousSpeed; // 0x20D4 (Size: 0x4, Type: FloatProperty)
    float AppliedPitch; // 0x20D8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraMode_Dagwood, HorizontalCameraSpaceOffsetWhileTurning) == 8352, "Offset mismatch for UFortCameraMode_Dagwood::HorizontalCameraSpaceOffsetWhileTurning");
static_assert(offsetof(UFortCameraMode_Dagwood, SteeringAngleForMaxHorizontalOffset) == 8356, "Offset mismatch for UFortCameraMode_Dagwood::SteeringAngleForMaxHorizontalOffset");
static_assert(offsetof(UFortCameraMode_Dagwood, InAirVerticalOffset) == 8360, "Offset mismatch for UFortCameraMode_Dagwood::InAirVerticalOffset");
static_assert(offsetof(UFortCameraMode_Dagwood, AirOffsetDampFactor) == 8364, "Offset mismatch for UFortCameraMode_Dagwood::AirOffsetDampFactor");
static_assert(offsetof(UFortCameraMode_Dagwood, SpeedAlphaDampFactor) == 8368, "Offset mismatch for UFortCameraMode_Dagwood::SpeedAlphaDampFactor");
static_assert(offsetof(UFortCameraMode_Dagwood, TimeInAirRequiredForVertOffset) == 8372, "Offset mismatch for UFortCameraMode_Dagwood::TimeInAirRequiredForVertOffset");
static_assert(offsetof(UFortCameraMode_Dagwood, VehicleBasePitch) == 8376, "Offset mismatch for UFortCameraMode_Dagwood::VehicleBasePitch");
static_assert(offsetof(UFortCameraMode_Dagwood, HorizOffsetInterpSpeed) == 8380, "Offset mismatch for UFortCameraMode_Dagwood::HorizOffsetInterpSpeed");
static_assert(offsetof(UFortCameraMode_Dagwood, HorizOffsetInterpSpeedRecovery) == 8384, "Offset mismatch for UFortCameraMode_Dagwood::HorizOffsetInterpSpeedRecovery");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentSpeedAlpha) == 8388, "Offset mismatch for UFortCameraMode_Dagwood::CurrentSpeedAlpha");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentVerticalOffset) == 8392, "Offset mismatch for UFortCameraMode_Dagwood::CurrentVerticalOffset");
static_assert(offsetof(UFortCameraMode_Dagwood, CurrentHorizontalOffset) == 8396, "Offset mismatch for UFortCameraMode_Dagwood::CurrentHorizontalOffset");
static_assert(offsetof(UFortCameraMode_Dagwood, TimeInAir) == 8400, "Offset mismatch for UFortCameraMode_Dagwood::TimeInAir");
static_assert(offsetof(UFortCameraMode_Dagwood, PreviousSpeed) == 8404, "Offset mismatch for UFortCameraMode_Dagwood::PreviousSpeed");
static_assert(offsetof(UFortCameraMode_Dagwood, AppliedPitch) == 8408, "Offset mismatch for UFortCameraMode_Dagwood::AppliedPitch");

// /Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_VehicleValetLowFuel
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

static_assert(offsetof(UFortContextualTutorial_VehicleValetLowFuel, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_VehicleValetLowFuel::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_VehicleValetLowFuel, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_VehicleValetLowFuel::MarkerText");
static_assert(offsetof(UFortContextualTutorial_VehicleValetLowFuel, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_VehicleValetLowFuel::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_VehicleValetLowFuel, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_VehicleValetLowFuel::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_VehicleValetLowFuel, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_VehicleValetLowFuel::OwnerController");

// /Script/ValetRuntime.FortDagwoodModsConfigs
// Kind: Class; super: Object
class UFortDagwoodModsConfigs
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.FortDagwoodVehicle
// Kind: Class; super: FortAthenaSKMotorVehicle
class UFortDagwoodVehicle
{
public:
    std::uint8_t Pad_0000[0x2118]; // 0x0000
    FMulticastInlineDelegate OnStartHandbrakeDelegate; // 0x2118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStopHandbrakeDelegate; // 0x2128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartHandBrakeCatchupForceDelegate; // 0x2138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HardLandingCameraShake; // 0x2148 (Size: 0x8, Type: ClassProperty)
    void* DriverCamShakeClass; // 0x2150 (Size: 0x8, Type: ClassProperty)
    void* HandBrakeCamShakeClass; // 0x2158 (Size: 0x8, Type: ClassProperty)
    std::uint8_t VehicleClass; // 0x2160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x2161
    float FadeDelay; // 0x2164 (Size: 0x4, Type: FloatProperty)
    float FadeDuration; // 0x2168 (Size: 0x4, Type: FloatProperty)
    float MinBrakeForceForSkid; // 0x216C (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedForSkid; // 0x2170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpeedLinesCueTag[0x4]; // 0x2174 (Size: 0x4, Type: StructProperty)
    float FadeStartTime; // 0x2178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x217C
    void* NetworkPhysicsComponent; // 0x2180 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnTireModHealthChanged; // 0x2188 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float RechargeableBoostPercent; // 0x2198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x219C
    void* SplatterSourceComp; // 0x21A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableNativizedTick; // 0x21A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyPowerFunctionToMobileInput; // 0x21A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x21AA
    void* InputActionEBrake; // 0x21B0 (Size: 0x8, Type: ObjectProperty)
    void* InputActionUseTurret; // 0x21B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NativeCollisionHitFxConfig[0x28]; // 0x21C0 (Size: 0x28, Type: OptionalProperty)
    std::uint8_t NativeCollisionHapticsConfig[0x50]; // 0x21E8 (Size: 0x50, Type: OptionalProperty)
    TArray<void*> PassengerLeanSockets; // 0x2238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PassngerLeanRelativeOffsets; // 0x2248 (Size: 0x10, Type: ArrayProperty)
    void* PassengerCameraModeClass; // 0x2258 (Size: 0x8, Type: ClassProperty)
    void* PassengerCameraModeClass_ADS; // 0x2260 (Size: 0x8, Type: ClassProperty)
    TArray<void*> WheelSocketNames; // 0x2268 (Size: 0x10, Type: ArrayProperty)
    void* FortDagwoodVehicleConfigs; // 0x2278 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RearShocks; // 0x2280 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OffroadEnvironmentDamageTags[0x20]; // 0x2290 (Size: 0x20, Type: StructProperty)
    std::uint8_t FireDamageTags[0x20]; // 0x22B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NativeWheelScaleRear[0x18]; // 0x22D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t NativeWheelScaleFront[0x18]; // 0x22E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NativeTireScaleRear[0x18]; // 0x2300 (Size: 0x18, Type: StructProperty)
    std::uint8_t NativeTireScaleFront[0x18]; // 0x2318 (Size: 0x18, Type: StructProperty)
    std::uint8_t bTireSmokeActive; // 0x2330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBoostFailed; // 0x2331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanBoostPitch; // 0x2332 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x2333
    std::uint64_t AccelForceFeedbackHandle; // 0x2338 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SkidForceFeedbackHandle; // 0x2340 (Size: 0x8, Type: UInt64Property)
    std::uint64_t BrakeForceFeedbackHandle; // 0x2348 (Size: 0x8, Type: UInt64Property)
    std::uint64_t HandBrakeForceFeedbackHandle; // 0x2350 (Size: 0x8, Type: UInt64Property)
    void* SpringCompressionForceFeedback; // 0x2358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSpeedLinesActive; // 0x2360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1F]; // 0x2361
    std::uint8_t DagwoodRuntimeModifiedProperties[0x70]; // 0x2380 (Size: 0x70, Type: StructProperty)
    TArray<void*> ServerRepWheelData; // 0x23F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x10]; // 0x2400
    std::uint8_t FlipYawForwardTargetDirection[0x18]; // 0x2410 (Size: 0x18, Type: StructProperty)
    std::uint8_t FlipYawOriginalForward[0x18]; // 0x2428 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastPoppedTire; // 0x2440 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x2441
    float RoadTopSpeedMultiplier; // 0x2444 (Size: 0x4, Type: FloatProperty)
    float CurrentBumpiness; // 0x2448 (Size: 0x4, Type: FloatProperty)
    float CurrentForwardAcceleration; // 0x244C (Size: 0x4, Type: FloatProperty)
    float PreviousTurnAlpha; // 0x2450 (Size: 0x4, Type: FloatProperty)
    float CurrentCameraAssistStrength; // 0x2454 (Size: 0x4, Type: FloatProperty)
    float LostGripTime; // 0x2458 (Size: 0x4, Type: FloatProperty)
    float LostGripRightAlpha; // 0x245C (Size: 0x4, Type: FloatProperty)
    float HandbrakeTime; // 0x2460 (Size: 0x4, Type: FloatProperty)
    float HandbrakeStartTime; // 0x2464 (Size: 0x4, Type: FloatProperty)
    float HandbrakeEndTime; // 0x2468 (Size: 0x4, Type: FloatProperty)
    float FlipYawMult; // 0x246C (Size: 0x4, Type: FloatProperty)
    float FlipTimer; // 0x2470 (Size: 0x4, Type: FloatProperty)
    float FlipExplodeTimer; // 0x2474 (Size: 0x4, Type: FloatProperty)
    float FlipPushForceTimer; // 0x2478 (Size: 0x4, Type: FloatProperty)
    float FlipAirTimer; // 0x247C (Size: 0x4, Type: FloatProperty)
    float FlipLanding; // 0x2480 (Size: 0x4, Type: FloatProperty)
    float FlipStartTime; // 0x2484 (Size: 0x4, Type: FloatProperty)
    float LastFlipDamageTime; // 0x2488 (Size: 0x4, Type: FloatProperty)
    float PreFlipControlLossTimer; // 0x248C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDidCinematicFlip; // 0x2490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanCinematicFlip; // 0x2491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInPopTireVeer; // 0x2492 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInFlipRecovery; // 0x2493 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExplodeAfterFlip; // 0x2494 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLostGrip; // 0x2495 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyHandbrakeCatchupForce; // 0x2496 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDidHandbrakeCatchup; // 0x2497 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInFlipRoll; // 0x2498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInFlipYaw; // 0x2499 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInFlipPitch; // 0x249A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipDidLeaveGround; // 0x249B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBreakBuildingsIfBlockingLeaningPassenger; // 0x249C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x249D
    float LeanBreakTimeAccumulator; // 0x24A0 (Size: 0x4, Type: FloatProperty)
    float LeanBreakCheckInterval; // 0x24A4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SeatToWindowShapeNames; // 0x24A8 (Size: 0x10, Type: ArrayProperty)
    void* OffroadCameraShakeInstance; // 0x24B8 (Size: 0x8, Type: ObjectProperty)
    void* DriverCameraShakeInstance; // 0x24C0 (Size: 0x8, Type: ObjectProperty)
    void* AccelCameraShakeInstance; // 0x24C8 (Size: 0x8, Type: ObjectProperty)
    void* HandBrakeCameraShakeInstance; // 0x24D0 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_RoadAndExhaust; // 0x24D8 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_TireSkid; // 0x24E0 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_Damage; // 0x24E8 (Size: 0x8, Type: ObjectProperty)
    void* NativeComp_SpeedLines; // 0x24F0 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_TireExhaust; // 0x24F8 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_SpeedLines; // 0x2500 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_TireSkid; // 0x2508 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RoadAndExhaustSurfaceTypeArrayForFX; // 0x2510 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RoadAndExhaustPeelOutColorIndexName[0x4]; // 0x2520 (Size: 0x4, Type: NameProperty)
    FName BrakeLightsName; // 0x2524 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_000A[0xC]; // 0x252C
    TArray<void*> FakeTireStates; // 0x2538 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActivePoppedTireReaction; // 0x2548 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ReplicatedPoppedTireReaction; // 0x2549 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000B[0x2]; // 0x254A
    TWeakObjectPtr<void> ValetAudio; // 0x254C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000C[0x4]; // 0x2554
    TArray<void*> TireMeshes; // 0x2558 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FakeTireMeshes; // 0x2568 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x4]; // 0x2578
    std::uint8_t bIsInoperable; // 0x257C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x3]; // 0x257D
    std::int32_t RandomSeed; // 0x2580 (Size: 0x4, Type: IntProperty)
    std::uint8_t RandStream[0x8]; // 0x2584 (Size: 0x8, Type: StructProperty)
    std::uint8_t bHasTraction; // 0x258C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartHandBrakeCatchupForce; // 0x258D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x102]; // 0x258E
    std::uint8_t bClientUsesSelfDestructTimer; // 0x2690 (Size: 0x1, Type: BoolProperty)
    // 0x2690 BoolProperty bSelfDestructEnabled (shared storage)
    std::uint8_t Pad_0010[0x7]; // 0x2691
    void* TireBootMesh; // 0x2698 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> MapSelfDestructActionDefForUI; // 0x26A0 (Size: 0x10, Type: MapProperty)
    float MinimumTimeBetweenSelfDestructPromptChanges; // 0x26B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0011[0x38]; // 0x26B4
    float BoostEmissiveOnDuration; // 0x26EC (Size: 0x4, Type: FloatProperty)
    float BoostEmissiveOffDuration; // 0x26F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0012[0xC]; // 0x26F4
    void* BoostCameraFoVCurve; // 0x2700 (Size: 0x8, Type: ObjectProperty)
    void* BoostCameraRumbleCurve; // 0x2708 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsBoostCameraActive; // 0x2710 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0013[0x3]; // 0x2711
    float BoostCameraFoVRumbleTweenDuration; // 0x2714 (Size: 0x4, Type: FloatProperty)
    float BoostCameraMaxFoV; // 0x2718 (Size: 0x4, Type: FloatProperty)
    float BoostCameraRumbleDuration; // 0x271C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0014[0x48]; // 0x2720
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x2768 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDagwoodVehicle, OnStartHandbrakeDelegate) == 8472, "Offset mismatch for UFortDagwoodVehicle::OnStartHandbrakeDelegate");
static_assert(offsetof(UFortDagwoodVehicle, OnStopHandbrakeDelegate) == 8488, "Offset mismatch for UFortDagwoodVehicle::OnStopHandbrakeDelegate");
static_assert(offsetof(UFortDagwoodVehicle, OnStartHandBrakeCatchupForceDelegate) == 8504, "Offset mismatch for UFortDagwoodVehicle::OnStartHandBrakeCatchupForceDelegate");
static_assert(offsetof(UFortDagwoodVehicle, HardLandingCameraShake) == 8520, "Offset mismatch for UFortDagwoodVehicle::HardLandingCameraShake");
static_assert(offsetof(UFortDagwoodVehicle, DriverCamShakeClass) == 8528, "Offset mismatch for UFortDagwoodVehicle::DriverCamShakeClass");
static_assert(offsetof(UFortDagwoodVehicle, HandBrakeCamShakeClass) == 8536, "Offset mismatch for UFortDagwoodVehicle::HandBrakeCamShakeClass");
static_assert(offsetof(UFortDagwoodVehicle, VehicleClass) == 8544, "Offset mismatch for UFortDagwoodVehicle::VehicleClass");
static_assert(offsetof(UFortDagwoodVehicle, FadeDelay) == 8548, "Offset mismatch for UFortDagwoodVehicle::FadeDelay");
static_assert(offsetof(UFortDagwoodVehicle, FadeDuration) == 8552, "Offset mismatch for UFortDagwoodVehicle::FadeDuration");
static_assert(offsetof(UFortDagwoodVehicle, MinBrakeForceForSkid) == 8556, "Offset mismatch for UFortDagwoodVehicle::MinBrakeForceForSkid");
static_assert(offsetof(UFortDagwoodVehicle, MinForwardSpeedForSkid) == 8560, "Offset mismatch for UFortDagwoodVehicle::MinForwardSpeedForSkid");
static_assert(offsetof(UFortDagwoodVehicle, SpeedLinesCueTag) == 8564, "Offset mismatch for UFortDagwoodVehicle::SpeedLinesCueTag");
static_assert(offsetof(UFortDagwoodVehicle, FadeStartTime) == 8568, "Offset mismatch for UFortDagwoodVehicle::FadeStartTime");
static_assert(offsetof(UFortDagwoodVehicle, NetworkPhysicsComponent) == 8576, "Offset mismatch for UFortDagwoodVehicle::NetworkPhysicsComponent");
static_assert(offsetof(UFortDagwoodVehicle, OnTireModHealthChanged) == 8584, "Offset mismatch for UFortDagwoodVehicle::OnTireModHealthChanged");
static_assert(offsetof(UFortDagwoodVehicle, RechargeableBoostPercent) == 8600, "Offset mismatch for UFortDagwoodVehicle::RechargeableBoostPercent");
static_assert(offsetof(UFortDagwoodVehicle, SplatterSourceComp) == 8608, "Offset mismatch for UFortDagwoodVehicle::SplatterSourceComp");
static_assert(offsetof(UFortDagwoodVehicle, bEnableNativizedTick) == 8616, "Offset mismatch for UFortDagwoodVehicle::bEnableNativizedTick");
static_assert(offsetof(UFortDagwoodVehicle, bShouldApplyPowerFunctionToMobileInput) == 8617, "Offset mismatch for UFortDagwoodVehicle::bShouldApplyPowerFunctionToMobileInput");
static_assert(offsetof(UFortDagwoodVehicle, InputActionEBrake) == 8624, "Offset mismatch for UFortDagwoodVehicle::InputActionEBrake");
static_assert(offsetof(UFortDagwoodVehicle, InputActionUseTurret) == 8632, "Offset mismatch for UFortDagwoodVehicle::InputActionUseTurret");
static_assert(offsetof(UFortDagwoodVehicle, NativeCollisionHitFxConfig) == 8640, "Offset mismatch for UFortDagwoodVehicle::NativeCollisionHitFxConfig");
static_assert(offsetof(UFortDagwoodVehicle, NativeCollisionHapticsConfig) == 8680, "Offset mismatch for UFortDagwoodVehicle::NativeCollisionHapticsConfig");
static_assert(offsetof(UFortDagwoodVehicle, PassengerLeanSockets) == 8760, "Offset mismatch for UFortDagwoodVehicle::PassengerLeanSockets");
static_assert(offsetof(UFortDagwoodVehicle, PassngerLeanRelativeOffsets) == 8776, "Offset mismatch for UFortDagwoodVehicle::PassngerLeanRelativeOffsets");
static_assert(offsetof(UFortDagwoodVehicle, PassengerCameraModeClass) == 8792, "Offset mismatch for UFortDagwoodVehicle::PassengerCameraModeClass");
static_assert(offsetof(UFortDagwoodVehicle, PassengerCameraModeClass_ADS) == 8800, "Offset mismatch for UFortDagwoodVehicle::PassengerCameraModeClass_ADS");
static_assert(offsetof(UFortDagwoodVehicle, WheelSocketNames) == 8808, "Offset mismatch for UFortDagwoodVehicle::WheelSocketNames");
static_assert(offsetof(UFortDagwoodVehicle, FortDagwoodVehicleConfigs) == 8824, "Offset mismatch for UFortDagwoodVehicle::FortDagwoodVehicleConfigs");
static_assert(offsetof(UFortDagwoodVehicle, RearShocks) == 8832, "Offset mismatch for UFortDagwoodVehicle::RearShocks");
static_assert(offsetof(UFortDagwoodVehicle, OffroadEnvironmentDamageTags) == 8848, "Offset mismatch for UFortDagwoodVehicle::OffroadEnvironmentDamageTags");
static_assert(offsetof(UFortDagwoodVehicle, FireDamageTags) == 8880, "Offset mismatch for UFortDagwoodVehicle::FireDamageTags");
static_assert(offsetof(UFortDagwoodVehicle, NativeWheelScaleRear) == 8912, "Offset mismatch for UFortDagwoodVehicle::NativeWheelScaleRear");
static_assert(offsetof(UFortDagwoodVehicle, NativeWheelScaleFront) == 8936, "Offset mismatch for UFortDagwoodVehicle::NativeWheelScaleFront");
static_assert(offsetof(UFortDagwoodVehicle, NativeTireScaleRear) == 8960, "Offset mismatch for UFortDagwoodVehicle::NativeTireScaleRear");
static_assert(offsetof(UFortDagwoodVehicle, NativeTireScaleFront) == 8984, "Offset mismatch for UFortDagwoodVehicle::NativeTireScaleFront");
static_assert(offsetof(UFortDagwoodVehicle, bTireSmokeActive) == 9008, "Offset mismatch for UFortDagwoodVehicle::bTireSmokeActive");
static_assert(offsetof(UFortDagwoodVehicle, bBoostFailed) == 9009, "Offset mismatch for UFortDagwoodVehicle::bBoostFailed");
static_assert(offsetof(UFortDagwoodVehicle, bCanBoostPitch) == 9010, "Offset mismatch for UFortDagwoodVehicle::bCanBoostPitch");
static_assert(offsetof(UFortDagwoodVehicle, AccelForceFeedbackHandle) == 9016, "Offset mismatch for UFortDagwoodVehicle::AccelForceFeedbackHandle");
static_assert(offsetof(UFortDagwoodVehicle, SkidForceFeedbackHandle) == 9024, "Offset mismatch for UFortDagwoodVehicle::SkidForceFeedbackHandle");
static_assert(offsetof(UFortDagwoodVehicle, BrakeForceFeedbackHandle) == 9032, "Offset mismatch for UFortDagwoodVehicle::BrakeForceFeedbackHandle");
static_assert(offsetof(UFortDagwoodVehicle, HandBrakeForceFeedbackHandle) == 9040, "Offset mismatch for UFortDagwoodVehicle::HandBrakeForceFeedbackHandle");
static_assert(offsetof(UFortDagwoodVehicle, SpringCompressionForceFeedback) == 9048, "Offset mismatch for UFortDagwoodVehicle::SpringCompressionForceFeedback");
static_assert(offsetof(UFortDagwoodVehicle, bSpeedLinesActive) == 9056, "Offset mismatch for UFortDagwoodVehicle::bSpeedLinesActive");
static_assert(offsetof(UFortDagwoodVehicle, DagwoodRuntimeModifiedProperties) == 9088, "Offset mismatch for UFortDagwoodVehicle::DagwoodRuntimeModifiedProperties");
static_assert(offsetof(UFortDagwoodVehicle, ServerRepWheelData) == 9200, "Offset mismatch for UFortDagwoodVehicle::ServerRepWheelData");
static_assert(offsetof(UFortDagwoodVehicle, FlipYawForwardTargetDirection) == 9232, "Offset mismatch for UFortDagwoodVehicle::FlipYawForwardTargetDirection");
static_assert(offsetof(UFortDagwoodVehicle, FlipYawOriginalForward) == 9256, "Offset mismatch for UFortDagwoodVehicle::FlipYawOriginalForward");
static_assert(offsetof(UFortDagwoodVehicle, LastPoppedTire) == 9280, "Offset mismatch for UFortDagwoodVehicle::LastPoppedTire");
static_assert(offsetof(UFortDagwoodVehicle, RoadTopSpeedMultiplier) == 9284, "Offset mismatch for UFortDagwoodVehicle::RoadTopSpeedMultiplier");
static_assert(offsetof(UFortDagwoodVehicle, CurrentBumpiness) == 9288, "Offset mismatch for UFortDagwoodVehicle::CurrentBumpiness");
static_assert(offsetof(UFortDagwoodVehicle, CurrentForwardAcceleration) == 9292, "Offset mismatch for UFortDagwoodVehicle::CurrentForwardAcceleration");
static_assert(offsetof(UFortDagwoodVehicle, PreviousTurnAlpha) == 9296, "Offset mismatch for UFortDagwoodVehicle::PreviousTurnAlpha");
static_assert(offsetof(UFortDagwoodVehicle, CurrentCameraAssistStrength) == 9300, "Offset mismatch for UFortDagwoodVehicle::CurrentCameraAssistStrength");
static_assert(offsetof(UFortDagwoodVehicle, LostGripTime) == 9304, "Offset mismatch for UFortDagwoodVehicle::LostGripTime");
static_assert(offsetof(UFortDagwoodVehicle, LostGripRightAlpha) == 9308, "Offset mismatch for UFortDagwoodVehicle::LostGripRightAlpha");
static_assert(offsetof(UFortDagwoodVehicle, HandbrakeTime) == 9312, "Offset mismatch for UFortDagwoodVehicle::HandbrakeTime");
static_assert(offsetof(UFortDagwoodVehicle, HandbrakeStartTime) == 9316, "Offset mismatch for UFortDagwoodVehicle::HandbrakeStartTime");
static_assert(offsetof(UFortDagwoodVehicle, HandbrakeEndTime) == 9320, "Offset mismatch for UFortDagwoodVehicle::HandbrakeEndTime");
static_assert(offsetof(UFortDagwoodVehicle, FlipYawMult) == 9324, "Offset mismatch for UFortDagwoodVehicle::FlipYawMult");
static_assert(offsetof(UFortDagwoodVehicle, FlipTimer) == 9328, "Offset mismatch for UFortDagwoodVehicle::FlipTimer");
static_assert(offsetof(UFortDagwoodVehicle, FlipExplodeTimer) == 9332, "Offset mismatch for UFortDagwoodVehicle::FlipExplodeTimer");
static_assert(offsetof(UFortDagwoodVehicle, FlipPushForceTimer) == 9336, "Offset mismatch for UFortDagwoodVehicle::FlipPushForceTimer");
static_assert(offsetof(UFortDagwoodVehicle, FlipAirTimer) == 9340, "Offset mismatch for UFortDagwoodVehicle::FlipAirTimer");
static_assert(offsetof(UFortDagwoodVehicle, FlipLanding) == 9344, "Offset mismatch for UFortDagwoodVehicle::FlipLanding");
static_assert(offsetof(UFortDagwoodVehicle, FlipStartTime) == 9348, "Offset mismatch for UFortDagwoodVehicle::FlipStartTime");
static_assert(offsetof(UFortDagwoodVehicle, LastFlipDamageTime) == 9352, "Offset mismatch for UFortDagwoodVehicle::LastFlipDamageTime");
static_assert(offsetof(UFortDagwoodVehicle, PreFlipControlLossTimer) == 9356, "Offset mismatch for UFortDagwoodVehicle::PreFlipControlLossTimer");
static_assert(offsetof(UFortDagwoodVehicle, bDidCinematicFlip) == 9360, "Offset mismatch for UFortDagwoodVehicle::bDidCinematicFlip");
static_assert(offsetof(UFortDagwoodVehicle, bCanCinematicFlip) == 9361, "Offset mismatch for UFortDagwoodVehicle::bCanCinematicFlip");
static_assert(offsetof(UFortDagwoodVehicle, bInPopTireVeer) == 9362, "Offset mismatch for UFortDagwoodVehicle::bInPopTireVeer");
static_assert(offsetof(UFortDagwoodVehicle, bInFlipRecovery) == 9363, "Offset mismatch for UFortDagwoodVehicle::bInFlipRecovery");
static_assert(offsetof(UFortDagwoodVehicle, bExplodeAfterFlip) == 9364, "Offset mismatch for UFortDagwoodVehicle::bExplodeAfterFlip");
static_assert(offsetof(UFortDagwoodVehicle, bLostGrip) == 9365, "Offset mismatch for UFortDagwoodVehicle::bLostGrip");
static_assert(offsetof(UFortDagwoodVehicle, bApplyHandbrakeCatchupForce) == 9366, "Offset mismatch for UFortDagwoodVehicle::bApplyHandbrakeCatchupForce");
static_assert(offsetof(UFortDagwoodVehicle, bDidHandbrakeCatchup) == 9367, "Offset mismatch for UFortDagwoodVehicle::bDidHandbrakeCatchup");
static_assert(offsetof(UFortDagwoodVehicle, bInFlipRoll) == 9368, "Offset mismatch for UFortDagwoodVehicle::bInFlipRoll");
static_assert(offsetof(UFortDagwoodVehicle, bInFlipYaw) == 9369, "Offset mismatch for UFortDagwoodVehicle::bInFlipYaw");
static_assert(offsetof(UFortDagwoodVehicle, bInFlipPitch) == 9370, "Offset mismatch for UFortDagwoodVehicle::bInFlipPitch");
static_assert(offsetof(UFortDagwoodVehicle, bFlipDidLeaveGround) == 9371, "Offset mismatch for UFortDagwoodVehicle::bFlipDidLeaveGround");
static_assert(offsetof(UFortDagwoodVehicle, bBreakBuildingsIfBlockingLeaningPassenger) == 9372, "Offset mismatch for UFortDagwoodVehicle::bBreakBuildingsIfBlockingLeaningPassenger");
static_assert(offsetof(UFortDagwoodVehicle, LeanBreakTimeAccumulator) == 9376, "Offset mismatch for UFortDagwoodVehicle::LeanBreakTimeAccumulator");
static_assert(offsetof(UFortDagwoodVehicle, LeanBreakCheckInterval) == 9380, "Offset mismatch for UFortDagwoodVehicle::LeanBreakCheckInterval");
static_assert(offsetof(UFortDagwoodVehicle, SeatToWindowShapeNames) == 9384, "Offset mismatch for UFortDagwoodVehicle::SeatToWindowShapeNames");
static_assert(offsetof(UFortDagwoodVehicle, OffroadCameraShakeInstance) == 9400, "Offset mismatch for UFortDagwoodVehicle::OffroadCameraShakeInstance");
static_assert(offsetof(UFortDagwoodVehicle, DriverCameraShakeInstance) == 9408, "Offset mismatch for UFortDagwoodVehicle::DriverCameraShakeInstance");
static_assert(offsetof(UFortDagwoodVehicle, AccelCameraShakeInstance) == 9416, "Offset mismatch for UFortDagwoodVehicle::AccelCameraShakeInstance");
static_assert(offsetof(UFortDagwoodVehicle, HandBrakeCameraShakeInstance) == 9424, "Offset mismatch for UFortDagwoodVehicle::HandBrakeCameraShakeInstance");
static_assert(offsetof(UFortDagwoodVehicle, NativeComp_RoadAndExhaust) == 9432, "Offset mismatch for UFortDagwoodVehicle::NativeComp_RoadAndExhaust");
static_assert(offsetof(UFortDagwoodVehicle, NativeComp_TireSkid) == 9440, "Offset mismatch for UFortDagwoodVehicle::NativeComp_TireSkid");
static_assert(offsetof(UFortDagwoodVehicle, NativeComp_Damage) == 9448, "Offset mismatch for UFortDagwoodVehicle::NativeComp_Damage");
static_assert(offsetof(UFortDagwoodVehicle, NativeComp_SpeedLines) == 9456, "Offset mismatch for UFortDagwoodVehicle::NativeComp_SpeedLines");
static_assert(offsetof(UFortDagwoodVehicle, NativeSys_TireExhaust) == 9464, "Offset mismatch for UFortDagwoodVehicle::NativeSys_TireExhaust");
static_assert(offsetof(UFortDagwoodVehicle, NativeSys_SpeedLines) == 9472, "Offset mismatch for UFortDagwoodVehicle::NativeSys_SpeedLines");
static_assert(offsetof(UFortDagwoodVehicle, NativeSys_TireSkid) == 9480, "Offset mismatch for UFortDagwoodVehicle::NativeSys_TireSkid");
static_assert(offsetof(UFortDagwoodVehicle, RoadAndExhaustSurfaceTypeArrayForFX) == 9488, "Offset mismatch for UFortDagwoodVehicle::RoadAndExhaustSurfaceTypeArrayForFX");
static_assert(offsetof(UFortDagwoodVehicle, RoadAndExhaustPeelOutColorIndexName) == 9504, "Offset mismatch for UFortDagwoodVehicle::RoadAndExhaustPeelOutColorIndexName");
static_assert(offsetof(UFortDagwoodVehicle, BrakeLightsName) == 9508, "Offset mismatch for UFortDagwoodVehicle::BrakeLightsName");
static_assert(offsetof(UFortDagwoodVehicle, FakeTireStates) == 9528, "Offset mismatch for UFortDagwoodVehicle::FakeTireStates");
static_assert(offsetof(UFortDagwoodVehicle, ActivePoppedTireReaction) == 9544, "Offset mismatch for UFortDagwoodVehicle::ActivePoppedTireReaction");
static_assert(offsetof(UFortDagwoodVehicle, ReplicatedPoppedTireReaction) == 9545, "Offset mismatch for UFortDagwoodVehicle::ReplicatedPoppedTireReaction");
static_assert(offsetof(UFortDagwoodVehicle, ValetAudio) == 9548, "Offset mismatch for UFortDagwoodVehicle::ValetAudio");
static_assert(offsetof(UFortDagwoodVehicle, TireMeshes) == 9560, "Offset mismatch for UFortDagwoodVehicle::TireMeshes");
static_assert(offsetof(UFortDagwoodVehicle, FakeTireMeshes) == 9576, "Offset mismatch for UFortDagwoodVehicle::FakeTireMeshes");
static_assert(offsetof(UFortDagwoodVehicle, bIsInoperable) == 9596, "Offset mismatch for UFortDagwoodVehicle::bIsInoperable");
static_assert(offsetof(UFortDagwoodVehicle, RandomSeed) == 9600, "Offset mismatch for UFortDagwoodVehicle::RandomSeed");
static_assert(offsetof(UFortDagwoodVehicle, RandStream) == 9604, "Offset mismatch for UFortDagwoodVehicle::RandStream");
static_assert(offsetof(UFortDagwoodVehicle, bHasTraction) == 9612, "Offset mismatch for UFortDagwoodVehicle::bHasTraction");
static_assert(offsetof(UFortDagwoodVehicle, bStartHandBrakeCatchupForce) == 9613, "Offset mismatch for UFortDagwoodVehicle::bStartHandBrakeCatchupForce");
static_assert(offsetof(UFortDagwoodVehicle, bClientUsesSelfDestructTimer) == 9872, "Offset mismatch for UFortDagwoodVehicle::bClientUsesSelfDestructTimer");
static_assert(offsetof(UFortDagwoodVehicle, TireBootMesh) == 9880, "Offset mismatch for UFortDagwoodVehicle::TireBootMesh");
static_assert(offsetof(UFortDagwoodVehicle, MapSelfDestructActionDefForUI) == 9888, "Offset mismatch for UFortDagwoodVehicle::MapSelfDestructActionDefForUI");
static_assert(offsetof(UFortDagwoodVehicle, MinimumTimeBetweenSelfDestructPromptChanges) == 9904, "Offset mismatch for UFortDagwoodVehicle::MinimumTimeBetweenSelfDestructPromptChanges");
static_assert(offsetof(UFortDagwoodVehicle, BoostEmissiveOnDuration) == 9964, "Offset mismatch for UFortDagwoodVehicle::BoostEmissiveOnDuration");
static_assert(offsetof(UFortDagwoodVehicle, BoostEmissiveOffDuration) == 9968, "Offset mismatch for UFortDagwoodVehicle::BoostEmissiveOffDuration");
static_assert(offsetof(UFortDagwoodVehicle, BoostCameraFoVCurve) == 9984, "Offset mismatch for UFortDagwoodVehicle::BoostCameraFoVCurve");
static_assert(offsetof(UFortDagwoodVehicle, BoostCameraRumbleCurve) == 9992, "Offset mismatch for UFortDagwoodVehicle::BoostCameraRumbleCurve");
static_assert(offsetof(UFortDagwoodVehicle, bIsBoostCameraActive) == 10000, "Offset mismatch for UFortDagwoodVehicle::bIsBoostCameraActive");
static_assert(offsetof(UFortDagwoodVehicle, BoostCameraFoVRumbleTweenDuration) == 10004, "Offset mismatch for UFortDagwoodVehicle::BoostCameraFoVRumbleTweenDuration");
static_assert(offsetof(UFortDagwoodVehicle, BoostCameraMaxFoV) == 10008, "Offset mismatch for UFortDagwoodVehicle::BoostCameraMaxFoV");
static_assert(offsetof(UFortDagwoodVehicle, BoostCameraRumbleDuration) == 10012, "Offset mismatch for UFortDagwoodVehicle::BoostCameraRumbleDuration");
static_assert(offsetof(UFortDagwoodVehicle, NumAllowedVehicleCosmeticChanges) == 10088, "Offset mismatch for UFortDagwoodVehicle::NumAllowedVehicleCosmeticChanges");

// /Script/ValetRuntime.FortDagwoodVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortDagwoodVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* Dagwood; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GlassScale_FR[0x18]; // 0x0508 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlassScale_FL[0x18]; // 0x0520 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlassScale_BR[0x18]; // 0x0538 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlassScale_BL[0x1]; // 0x0550 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDagwoodVehicleAnimInstance, Dagwood) == 1280, "Offset mismatch for UFortDagwoodVehicleAnimInstance::Dagwood");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_FR) == 1288, "Offset mismatch for UFortDagwoodVehicleAnimInstance::GlassScale_FR");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_FL) == 1312, "Offset mismatch for UFortDagwoodVehicleAnimInstance::GlassScale_FL");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_BR) == 1336, "Offset mismatch for UFortDagwoodVehicleAnimInstance::GlassScale_BR");
static_assert(offsetof(UFortDagwoodVehicleAnimInstance, GlassScale_BL) == 1360, "Offset mismatch for UFortDagwoodVehicleAnimInstance::GlassScale_BL");

// /Script/ValetRuntime.FortDagwoodVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortDagwoodVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    float VehiclePowerSlideFrontMultiplier; // 0x0990 (Size: 0x4, Type: FloatProperty)
    float VehiclePowerSlideRearMultiplier; // 0x0994 (Size: 0x4, Type: FloatProperty)
    float IceVehiclePowerSlideFrontMultiplier; // 0x0998 (Size: 0x4, Type: FloatProperty)
    float IceVehiclePowerSlideRearMultiplier; // 0x099C (Size: 0x4, Type: FloatProperty)
    float MudVehiclePowerSlideFrontMultiplier; // 0x09A0 (Size: 0x4, Type: FloatProperty)
    float MudVehiclePowerSlideRearMultiplier; // 0x09A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAccelerationLean; // 0x09A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x09A9
    float HandbrakeGripAngle; // 0x09AC (Size: 0x4, Type: FloatProperty)
    float HandbrakeGripAngleRecovery; // 0x09B0 (Size: 0x4, Type: FloatProperty)
    float HandbrakeSpeedForGripLoss; // 0x09B4 (Size: 0x4, Type: FloatProperty)
    float MinSlipDuration; // 0x09B8 (Size: 0x4, Type: FloatProperty)
    float HandbrakeLateralFriction; // 0x09BC (Size: 0x4, Type: FloatProperty)
    float HandbrakeSteeringMultiplier; // 0x09C0 (Size: 0x4, Type: FloatProperty)
    float HandbrakeFrictionDampFactor; // 0x09C4 (Size: 0x4, Type: FloatProperty)
    float RestoreTractionDampFactor; // 0x09C8 (Size: 0x4, Type: FloatProperty)
    float HandbrakeForce; // 0x09CC (Size: 0x4, Type: FloatProperty)
    float HandbrakeForceNoAccel; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseHandbrakeToDrift; // 0x09D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x09D5
    float DriftMinSpeedSteeringAngle; // 0x09D8 (Size: 0x4, Type: FloatProperty)
    float DriftMaxSpeedSteeringAngle; // 0x09DC (Size: 0x4, Type: FloatProperty)
    float DriftFrontLateralFrictionMultiplier; // 0x09E0 (Size: 0x4, Type: FloatProperty)
    float DriftRearLateralFrictionMultiplier; // 0x09E4 (Size: 0x4, Type: FloatProperty)
    float DirtRoadTopSpeedMultiplier; // 0x09E8 (Size: 0x4, Type: FloatProperty)
    float DirtRoadFrontLateralFriction; // 0x09EC (Size: 0x4, Type: FloatProperty)
    float DirtRoadRearLateralFriction; // 0x09F0 (Size: 0x4, Type: FloatProperty)
    float DirtRoadAccelForceMultiplier; // 0x09F4 (Size: 0x4, Type: FloatProperty)
    float OffRoadTopSpeedMultiplier; // 0x09F8 (Size: 0x4, Type: FloatProperty)
    float OffRoadFrontLateralFriction; // 0x09FC (Size: 0x4, Type: FloatProperty)
    float OffRoadRearLateralFriction; // 0x0A00 (Size: 0x4, Type: FloatProperty)
    float OffRoadPushForceMultiplier; // 0x0A04 (Size: 0x4, Type: FloatProperty)
    float OffroadDamageImpactForceMin; // 0x0A08 (Size: 0x4, Type: FloatProperty)
    float OffroadDamageImpactForceMax; // 0x0A0C (Size: 0x4, Type: FloatProperty)
    float OffroadImpactDamageMin; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float OffroadImpactDamageMax; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForOffroadHandling; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float SnowFrontLateralFriction; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    float SnowRearLateralFriction; // 0x0A20 (Size: 0x4, Type: FloatProperty)
    float IceFrontLateralFriction; // 0x0A24 (Size: 0x4, Type: FloatProperty)
    float IceRearLateralFriction; // 0x0A28 (Size: 0x4, Type: FloatProperty)
    float MudFrontLateralFriction; // 0x0A2C (Size: 0x4, Type: FloatProperty)
    float MudRearLateralFriction; // 0x0A30 (Size: 0x4, Type: FloatProperty)
    float IcePushForceMultiplier; // 0x0A34 (Size: 0x4, Type: FloatProperty)
    float IceBrakeForceMultiplier; // 0x0A38 (Size: 0x4, Type: FloatProperty)
    float FireHealthPercentThreshold; // 0x0A3C (Size: 0x4, Type: FloatProperty)
    float OffroadRumbleIntensity; // 0x0A40 (Size: 0x4, Type: FloatProperty)
    float DirtRoadRumbleIntensity; // 0x0A44 (Size: 0x4, Type: FloatProperty)
    float OffroadDamageScaleExponent; // 0x0A48 (Size: 0x4, Type: FloatProperty)
    float HardLandingThresholdMin; // 0x0A4C (Size: 0x4, Type: FloatProperty)
    float HardLandingThresholdMax; // 0x0A50 (Size: 0x4, Type: FloatProperty)
    float HardLandingShakeZAmplitudeMin; // 0x0A54 (Size: 0x4, Type: FloatProperty)
    float HardLandingShakeZAmplitudeMax; // 0x0A58 (Size: 0x4, Type: FloatProperty)
    float SpeedLinesThreshold; // 0x0A5C (Size: 0x4, Type: FloatProperty)
    float PropDestructionImpulse; // 0x0A60 (Size: 0x4, Type: FloatProperty)
    float DestructionAngle; // 0x0A64 (Size: 0x4, Type: FloatProperty)
    float UpNormalMinProtected; // 0x0A68 (Size: 0x4, Type: FloatProperty)
    float UpForwardMinProtected; // 0x0A6C (Size: 0x4, Type: FloatProperty)
    float NonCameraSteeringAngleMultiplier; // 0x0A70 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthMax; // 0x0A74 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthMin; // 0x0A78 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthRecovery; // 0x0A7C (Size: 0x4, Type: FloatProperty)
    float CameraAssistInterpSpeed; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    float DriftExitPushForce; // 0x0A84 (Size: 0x4, Type: FloatProperty)
    float DriftExitCatchupSpeed; // 0x0A88 (Size: 0x4, Type: FloatProperty)
    float HandbrakeDurationRequiredForCatchup; // 0x0A8C (Size: 0x4, Type: FloatProperty)
    float ImpactMagnitudeToEndCatchup; // 0x0A90 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringLength; // 0x0A94 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringStiff; // 0x0A98 (Size: 0x4, Type: FloatProperty)
    float PoppedTireSpringDamp; // 0x0A9C (Size: 0x4, Type: FloatProperty)
    float PoppedTireScrapeFrictionMultiplier; // 0x0AA0 (Size: 0x4, Type: FloatProperty)
    float RimScrapeFlipRollMagnitude; // 0x0AA4 (Size: 0x4, Type: FloatProperty)
    float RimScrapeFlipPitchMagnitude; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float SpeedForRimFlip; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    float HealthPercentForFlip; // 0x0AB0 (Size: 0x4, Type: FloatProperty)
    float FlipYawDuration; // 0x0AB4 (Size: 0x4, Type: FloatProperty)
    float FlipRollDuration; // 0x0AB8 (Size: 0x4, Type: FloatProperty)
    float FlipPitchDuration; // 0x0ABC (Size: 0x4, Type: FloatProperty)
    float FlipExplodeDuration_Yaw; // 0x0AC0 (Size: 0x4, Type: FloatProperty)
    float FlipExplodeDuration_Pitch; // 0x0AC4 (Size: 0x4, Type: FloatProperty)
    float FlipPushForceDuration_Yaw; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    float FlipPushForceDuration_Pitch; // 0x0ACC (Size: 0x4, Type: FloatProperty)
    float FlipPushForcMultiplier; // 0x0AD0 (Size: 0x4, Type: FloatProperty)
    float FlipPushForce_UpComponentPitch; // 0x0AD4 (Size: 0x4, Type: FloatProperty)
    float FlipPushForce_UpComponentRoll; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
    float MinTimeInAirRequiredForExplodeLanding; // 0x0ADC (Size: 0x4, Type: FloatProperty)
    float FlipYawSpringStiff; // 0x0AE0 (Size: 0x4, Type: FloatProperty)
    float FlipYawSpringDamp; // 0x0AE4 (Size: 0x4, Type: FloatProperty)
    float FlipYawSpringMaxAccel; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    float HealthPercentForExplode; // 0x0AEC (Size: 0x4, Type: FloatProperty)
    float FlipRecoveryTime; // 0x0AF0 (Size: 0x4, Type: FloatProperty)
    float FlipMaxDuration; // 0x0AF4 (Size: 0x4, Type: FloatProperty)
    float FlipWiggleDuration; // 0x0AF8 (Size: 0x4, Type: FloatProperty)
    float PoppedTireVeerDuration; // 0x0AFC (Size: 0x4, Type: FloatProperty)
    float PoppedTireVeerSteeringAngle; // 0x0B00 (Size: 0x4, Type: FloatProperty)
    float FlipWiggleFrequency; // 0x0B04 (Size: 0x4, Type: FloatProperty)
    float FlipWiggleSteeringAngle; // 0x0B08 (Size: 0x4, Type: FloatProperty)
    float FlipYawAngleThreshold; // 0x0B0C (Size: 0x4, Type: FloatProperty)
    float AirGlideTurnForceMultiplier; // 0x0B10 (Size: 0x4, Type: FloatProperty)
    float AnalogDriftStickThreshold; // 0x0B14 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TireBootRightSocketName[0x4]; // 0x0B18 (Size: 0x4, Type: NameProperty)
    std::uint8_t TireBootLeftSocketName[0x4]; // 0x0B1C (Size: 0x4, Type: NameProperty)
    float TireBootRelativeDistance; // 0x0B20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0B24
    TArray<void*> TireSocketNames; // 0x0B28 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TireBoneNames; // 0x0B38 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RearTireIndices; // 0x0B48 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightSideTires; // 0x0B58 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FakeTireIndices; // 0x0B68 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bNoWheels; // 0x0B78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0B79
    float NoWheelsSpringLenMult; // 0x0B7C (Size: 0x4, Type: FloatProperty)
    TArray<void*> NoWheelsBonesToHide; // 0x0B80 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ForwardChangeDirectionBrakeForceMultiplier[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForwardChangeDirectionSpeedThreshold[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseChangeDirectionBrakeForceMultiplier[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReverseChangeDirectionSpeedThreshold[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesBoost[0x28]; // 0x0C30 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartWithFullBoost[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_MinPushForce[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_TopSpeedForceMultiplier[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_TopSpeedMultiplier[0x28]; // 0x0CD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_SteeringMultiplier[0x28]; // 0x0CF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_WaterMultiplier[0x28]; // 0x0D20 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_ForceInAir[0x28]; // 0x0D48 (Size: 0x28, Type: StructProperty)
    std::uint8_t Boost_AirMaxSpeed[0x28]; // 0x0D70 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesRechargeableBoost[0x28]; // 0x0D98 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfUse[0x28]; // 0x0DC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegen[0x28]; // 0x0DE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMin[0x28]; // 0x0E10 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMax[0x28]; // 0x0E38 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RegenMaxMultTime[0x28]; // 0x0E60 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RequiredPercentToActivate[0x28]; // 0x0E88 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MinPercent[0x28]; // 0x0EB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MaxPercent[0x28]; // 0x0ED8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TireModIdleUpdateSpeedThresholdKmH[0x38]; // 0x0F00 (Size: 0x38, Type: StructProperty)
    std::uint8_t bCachedUsesBoost; // 0x0F38 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDagwoodVehicleConfigs, VehiclePowerSlideFrontMultiplier) == 2448, "Offset mismatch for UFortDagwoodVehicleConfigs::VehiclePowerSlideFrontMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, VehiclePowerSlideRearMultiplier) == 2452, "Offset mismatch for UFortDagwoodVehicleConfigs::VehiclePowerSlideRearMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceVehiclePowerSlideFrontMultiplier) == 2456, "Offset mismatch for UFortDagwoodVehicleConfigs::IceVehiclePowerSlideFrontMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceVehiclePowerSlideRearMultiplier) == 2460, "Offset mismatch for UFortDagwoodVehicleConfigs::IceVehiclePowerSlideRearMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudVehiclePowerSlideFrontMultiplier) == 2464, "Offset mismatch for UFortDagwoodVehicleConfigs::MudVehiclePowerSlideFrontMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudVehiclePowerSlideRearMultiplier) == 2468, "Offset mismatch for UFortDagwoodVehicleConfigs::MudVehiclePowerSlideRearMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bUseAccelerationLean) == 2472, "Offset mismatch for UFortDagwoodVehicleConfigs::bUseAccelerationLean");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeGripAngle) == 2476, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeGripAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeGripAngleRecovery) == 2480, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeGripAngleRecovery");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeSpeedForGripLoss) == 2484, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeSpeedForGripLoss");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinSlipDuration) == 2488, "Offset mismatch for UFortDagwoodVehicleConfigs::MinSlipDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeLateralFriction) == 2492, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeSteeringMultiplier) == 2496, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeSteeringMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeFrictionDampFactor) == 2500, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeFrictionDampFactor");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RestoreTractionDampFactor) == 2504, "Offset mismatch for UFortDagwoodVehicleConfigs::RestoreTractionDampFactor");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeForce) == 2508, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeForce");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeForceNoAccel) == 2512, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeForceNoAccel");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bUseHandbrakeToDrift) == 2516, "Offset mismatch for UFortDagwoodVehicleConfigs::bUseHandbrakeToDrift");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftMinSpeedSteeringAngle) == 2520, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftMinSpeedSteeringAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftMaxSpeedSteeringAngle) == 2524, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftMaxSpeedSteeringAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftFrontLateralFrictionMultiplier) == 2528, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftFrontLateralFrictionMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftRearLateralFrictionMultiplier) == 2532, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftRearLateralFrictionMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadTopSpeedMultiplier) == 2536, "Offset mismatch for UFortDagwoodVehicleConfigs::DirtRoadTopSpeedMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadFrontLateralFriction) == 2540, "Offset mismatch for UFortDagwoodVehicleConfigs::DirtRoadFrontLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadRearLateralFriction) == 2544, "Offset mismatch for UFortDagwoodVehicleConfigs::DirtRoadRearLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadAccelForceMultiplier) == 2548, "Offset mismatch for UFortDagwoodVehicleConfigs::DirtRoadAccelForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadTopSpeedMultiplier) == 2552, "Offset mismatch for UFortDagwoodVehicleConfigs::OffRoadTopSpeedMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadFrontLateralFriction) == 2556, "Offset mismatch for UFortDagwoodVehicleConfigs::OffRoadFrontLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadRearLateralFriction) == 2560, "Offset mismatch for UFortDagwoodVehicleConfigs::OffRoadRearLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffRoadPushForceMultiplier) == 2564, "Offset mismatch for UFortDagwoodVehicleConfigs::OffRoadPushForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageImpactForceMin) == 2568, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadDamageImpactForceMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageImpactForceMax) == 2572, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadDamageImpactForceMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadImpactDamageMin) == 2576, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadImpactDamageMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadImpactDamageMax) == 2580, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadImpactDamageMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinSpeedForOffroadHandling) == 2584, "Offset mismatch for UFortDagwoodVehicleConfigs::MinSpeedForOffroadHandling");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SnowFrontLateralFriction) == 2588, "Offset mismatch for UFortDagwoodVehicleConfigs::SnowFrontLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SnowRearLateralFriction) == 2592, "Offset mismatch for UFortDagwoodVehicleConfigs::SnowRearLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceFrontLateralFriction) == 2596, "Offset mismatch for UFortDagwoodVehicleConfigs::IceFrontLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceRearLateralFriction) == 2600, "Offset mismatch for UFortDagwoodVehicleConfigs::IceRearLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudFrontLateralFriction) == 2604, "Offset mismatch for UFortDagwoodVehicleConfigs::MudFrontLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MudRearLateralFriction) == 2608, "Offset mismatch for UFortDagwoodVehicleConfigs::MudRearLateralFriction");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IcePushForceMultiplier) == 2612, "Offset mismatch for UFortDagwoodVehicleConfigs::IcePushForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, IceBrakeForceMultiplier) == 2616, "Offset mismatch for UFortDagwoodVehicleConfigs::IceBrakeForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FireHealthPercentThreshold) == 2620, "Offset mismatch for UFortDagwoodVehicleConfigs::FireHealthPercentThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadRumbleIntensity) == 2624, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadRumbleIntensity");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DirtRoadRumbleIntensity) == 2628, "Offset mismatch for UFortDagwoodVehicleConfigs::DirtRoadRumbleIntensity");
static_assert(offsetof(UFortDagwoodVehicleConfigs, OffroadDamageScaleExponent) == 2632, "Offset mismatch for UFortDagwoodVehicleConfigs::OffroadDamageScaleExponent");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingThresholdMin) == 2636, "Offset mismatch for UFortDagwoodVehicleConfigs::HardLandingThresholdMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingThresholdMax) == 2640, "Offset mismatch for UFortDagwoodVehicleConfigs::HardLandingThresholdMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingShakeZAmplitudeMin) == 2644, "Offset mismatch for UFortDagwoodVehicleConfigs::HardLandingShakeZAmplitudeMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HardLandingShakeZAmplitudeMax) == 2648, "Offset mismatch for UFortDagwoodVehicleConfigs::HardLandingShakeZAmplitudeMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SpeedLinesThreshold) == 2652, "Offset mismatch for UFortDagwoodVehicleConfigs::SpeedLinesThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PropDestructionImpulse) == 2656, "Offset mismatch for UFortDagwoodVehicleConfigs::PropDestructionImpulse");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DestructionAngle) == 2660, "Offset mismatch for UFortDagwoodVehicleConfigs::DestructionAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UpNormalMinProtected) == 2664, "Offset mismatch for UFortDagwoodVehicleConfigs::UpNormalMinProtected");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UpForwardMinProtected) == 2668, "Offset mismatch for UFortDagwoodVehicleConfigs::UpForwardMinProtected");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NonCameraSteeringAngleMultiplier) == 2672, "Offset mismatch for UFortDagwoodVehicleConfigs::NonCameraSteeringAngleMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthMax) == 2676, "Offset mismatch for UFortDagwoodVehicleConfigs::CameraAssistStrengthMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthMin) == 2680, "Offset mismatch for UFortDagwoodVehicleConfigs::CameraAssistStrengthMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistStrengthRecovery) == 2684, "Offset mismatch for UFortDagwoodVehicleConfigs::CameraAssistStrengthRecovery");
static_assert(offsetof(UFortDagwoodVehicleConfigs, CameraAssistInterpSpeed) == 2688, "Offset mismatch for UFortDagwoodVehicleConfigs::CameraAssistInterpSpeed");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftExitPushForce) == 2692, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftExitPushForce");
static_assert(offsetof(UFortDagwoodVehicleConfigs, DriftExitCatchupSpeed) == 2696, "Offset mismatch for UFortDagwoodVehicleConfigs::DriftExitCatchupSpeed");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HandbrakeDurationRequiredForCatchup) == 2700, "Offset mismatch for UFortDagwoodVehicleConfigs::HandbrakeDurationRequiredForCatchup");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ImpactMagnitudeToEndCatchup) == 2704, "Offset mismatch for UFortDagwoodVehicleConfigs::ImpactMagnitudeToEndCatchup");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringLength) == 2708, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireSpringLength");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringStiff) == 2712, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireSpringStiff");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireSpringDamp) == 2716, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireSpringDamp");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireScrapeFrictionMultiplier) == 2720, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireScrapeFrictionMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RimScrapeFlipRollMagnitude) == 2724, "Offset mismatch for UFortDagwoodVehicleConfigs::RimScrapeFlipRollMagnitude");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RimScrapeFlipPitchMagnitude) == 2728, "Offset mismatch for UFortDagwoodVehicleConfigs::RimScrapeFlipPitchMagnitude");
static_assert(offsetof(UFortDagwoodVehicleConfigs, SpeedForRimFlip) == 2732, "Offset mismatch for UFortDagwoodVehicleConfigs::SpeedForRimFlip");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HealthPercentForFlip) == 2736, "Offset mismatch for UFortDagwoodVehicleConfigs::HealthPercentForFlip");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawDuration) == 2740, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipYawDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipRollDuration) == 2744, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipRollDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPitchDuration) == 2748, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPitchDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipExplodeDuration_Yaw) == 2752, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipExplodeDuration_Yaw");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipExplodeDuration_Pitch) == 2756, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipExplodeDuration_Pitch");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForceDuration_Yaw) == 2760, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPushForceDuration_Yaw");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForceDuration_Pitch) == 2764, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPushForceDuration_Pitch");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForcMultiplier) == 2768, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPushForcMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForce_UpComponentPitch) == 2772, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPushForce_UpComponentPitch");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipPushForce_UpComponentRoll) == 2776, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipPushForce_UpComponentRoll");
static_assert(offsetof(UFortDagwoodVehicleConfigs, MinTimeInAirRequiredForExplodeLanding) == 2780, "Offset mismatch for UFortDagwoodVehicleConfigs::MinTimeInAirRequiredForExplodeLanding");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringStiff) == 2784, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipYawSpringStiff");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringDamp) == 2788, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipYawSpringDamp");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawSpringMaxAccel) == 2792, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipYawSpringMaxAccel");
static_assert(offsetof(UFortDagwoodVehicleConfigs, HealthPercentForExplode) == 2796, "Offset mismatch for UFortDagwoodVehicleConfigs::HealthPercentForExplode");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipRecoveryTime) == 2800, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipRecoveryTime");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipMaxDuration) == 2804, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipMaxDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleDuration) == 2808, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipWiggleDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireVeerDuration) == 2812, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireVeerDuration");
static_assert(offsetof(UFortDagwoodVehicleConfigs, PoppedTireVeerSteeringAngle) == 2816, "Offset mismatch for UFortDagwoodVehicleConfigs::PoppedTireVeerSteeringAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleFrequency) == 2820, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipWiggleFrequency");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipWiggleSteeringAngle) == 2824, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipWiggleSteeringAngle");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FlipYawAngleThreshold) == 2828, "Offset mismatch for UFortDagwoodVehicleConfigs::FlipYawAngleThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, AirGlideTurnForceMultiplier) == 2832, "Offset mismatch for UFortDagwoodVehicleConfigs::AirGlideTurnForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, AnalogDriftStickThreshold) == 2836, "Offset mismatch for UFortDagwoodVehicleConfigs::AnalogDriftStickThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootRightSocketName) == 2840, "Offset mismatch for UFortDagwoodVehicleConfigs::TireBootRightSocketName");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootLeftSocketName) == 2844, "Offset mismatch for UFortDagwoodVehicleConfigs::TireBootLeftSocketName");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBootRelativeDistance) == 2848, "Offset mismatch for UFortDagwoodVehicleConfigs::TireBootRelativeDistance");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireSocketNames) == 2856, "Offset mismatch for UFortDagwoodVehicleConfigs::TireSocketNames");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireBoneNames) == 2872, "Offset mismatch for UFortDagwoodVehicleConfigs::TireBoneNames");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RearTireIndices) == 2888, "Offset mismatch for UFortDagwoodVehicleConfigs::RearTireIndices");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RightSideTires) == 2904, "Offset mismatch for UFortDagwoodVehicleConfigs::RightSideTires");
static_assert(offsetof(UFortDagwoodVehicleConfigs, FakeTireIndices) == 2920, "Offset mismatch for UFortDagwoodVehicleConfigs::FakeTireIndices");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bNoWheels) == 2936, "Offset mismatch for UFortDagwoodVehicleConfigs::bNoWheels");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NoWheelsSpringLenMult) == 2940, "Offset mismatch for UFortDagwoodVehicleConfigs::NoWheelsSpringLenMult");
static_assert(offsetof(UFortDagwoodVehicleConfigs, NoWheelsBonesToHide) == 2944, "Offset mismatch for UFortDagwoodVehicleConfigs::NoWheelsBonesToHide");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ForwardChangeDirectionBrakeForceMultiplier) == 2960, "Offset mismatch for UFortDagwoodVehicleConfigs::ForwardChangeDirectionBrakeForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ForwardChangeDirectionSpeedThreshold) == 3000, "Offset mismatch for UFortDagwoodVehicleConfigs::ForwardChangeDirectionSpeedThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ReverseChangeDirectionBrakeForceMultiplier) == 3040, "Offset mismatch for UFortDagwoodVehicleConfigs::ReverseChangeDirectionBrakeForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, ReverseChangeDirectionSpeedThreshold) == 3080, "Offset mismatch for UFortDagwoodVehicleConfigs::ReverseChangeDirectionSpeedThreshold");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UsesBoost) == 3120, "Offset mismatch for UFortDagwoodVehicleConfigs::UsesBoost");
static_assert(offsetof(UFortDagwoodVehicleConfigs, StartWithFullBoost) == 3160, "Offset mismatch for UFortDagwoodVehicleConfigs::StartWithFullBoost");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_MinPushForce) == 3200, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_MinPushForce");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_TopSpeedForceMultiplier) == 3240, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_TopSpeedForceMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_TopSpeedMultiplier) == 3280, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_TopSpeedMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_SteeringMultiplier) == 3320, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_SteeringMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_WaterMultiplier) == 3360, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_WaterMultiplier");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_ForceInAir) == 3400, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_ForceInAir");
static_assert(offsetof(UFortDagwoodVehicleConfigs, Boost_AirMaxSpeed) == 3440, "Offset mismatch for UFortDagwoodVehicleConfigs::Boost_AirMaxSpeed");
static_assert(offsetof(UFortDagwoodVehicleConfigs, UsesRechargeableBoost) == 3480, "Offset mismatch for UFortDagwoodVehicleConfigs::UsesRechargeableBoost");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RateOfUse) == 3520, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RateOfUse");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RateOfRegen) == 3560, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RateOfRegen");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RateOfRegenMultMin) == 3600, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RateOfRegenMultMin");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RateOfRegenMultMax) == 3640, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RateOfRegenMultMax");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RegenMaxMultTime) == 3680, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RegenMaxMultTime");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_RequiredPercentToActivate) == 3720, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_RequiredPercentToActivate");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_MinPercent) == 3760, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_MinPercent");
static_assert(offsetof(UFortDagwoodVehicleConfigs, RechargeableBoost_MaxPercent) == 3800, "Offset mismatch for UFortDagwoodVehicleConfigs::RechargeableBoost_MaxPercent");
static_assert(offsetof(UFortDagwoodVehicleConfigs, TireModIdleUpdateSpeedThresholdKmH) == 3840, "Offset mismatch for UFortDagwoodVehicleConfigs::TireModIdleUpdateSpeedThresholdKmH");
static_assert(offsetof(UFortDagwoodVehicleConfigs, bCachedUsesBoost) == 3896, "Offset mismatch for UFortDagwoodVehicleConfigs::bCachedUsesBoost");

// /Script/ValetRuntime.FortDagwoodVehicleManager
// Kind: Class; super: GameStateComponent
class UFortDagwoodVehicleManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bHasUpdatedPropReplacement; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::int32_t NumVehiclesSpawnedWithTireMod; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDagwoodVehicleManager, bHasUpdatedPropReplacement) == 192, "Offset mismatch for UFortDagwoodVehicleManager::bHasUpdatedPropReplacement");
static_assert(offsetof(UFortDagwoodVehicleManager, NumVehiclesSpawnedWithTireMod) == 196, "Offset mismatch for UFortDagwoodVehicleManager::NumVehiclesSpawnedWithTireMod");

// /Script/ValetRuntime.FortValetAudioController
// Kind: Class; super: Actor
class UFortValetAudioController
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnEngineLoadChanged; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnShiftGearCompleted; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnShiftGearDelegate; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float RPMResetTime_Native; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float JitterAmount_Native; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float ShiftTimeThreshold_Native; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float TimeSinceShift_Native; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float EngineRPMInterp_Native; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float EngineRPMLinear_Native; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float MinRPMRange_Native; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float MaxRPMRange_Native; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentlyShifting_Native; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02C1
    float CurrentAccelRateGearModifier_Native; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float CurrentAccelRate_Native; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGear_Native; // 0x02CC (Size: 0x4, Type: IntProperty)
    std::int32_t MaxGear_Native; // 0x02D0 (Size: 0x4, Type: IntProperty)
    float DefaultAccelRateScalar_Native; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    float GearAttackInterpSpeed_Native; // 0x02D8 (Size: 0x4, Type: FloatProperty)
    float GearReleaseInterpSpeed_Native; // 0x02DC (Size: 0x4, Type: FloatProperty)
    float AccelRateScalarFirstGear_Native; // 0x02E0 (Size: 0x4, Type: FloatProperty)
    float AccelRateScalarMinGear_Native; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    float AccelRateScalarMaxGear_Native; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float ShiftToRPMStart_Native; // 0x02EC (Size: 0x4, Type: FloatProperty)
    float ShiftToRPMEnd_Native; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float ShiftFromRPMStart_Native; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    float ShiftFromRPMEnd_Native; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float MaxRPMSawtoothDecrement_Native; // 0x02FC (Size: 0x4, Type: FloatProperty)
    float MaxRPMSawtoothRepeatTime_Native; // 0x0300 (Size: 0x4, Type: FloatProperty)
    float DownhillAccelScalar_Native; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float UphillAccelScalar_Native; // 0x0308 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x030C
    void* RPMFloatCurveMapping; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    float NormalizedSpeed_Native; // 0x0318 (Size: 0x4, Type: FloatProperty)
    float SuspValue_Native; // 0x031C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsHandbraking_Native; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0321
    float MotoSynthVolume_Native; // 0x0324 (Size: 0x4, Type: FloatProperty)
    float MotoSynthInitialFadeInTime_Native; // 0x0328 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x032C
    float MotoSynthLogRPM_Native; // 0x0330 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasFuel_Native; // 0x0334 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInWater_Native; // 0x0335 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalPlayerInVehicle_Native; // 0x0336 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0337
    float TimeLocalPlayerEnteredVehicle_Native; // 0x0338 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAttemptingDirectionChange_Native; // 0x033C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreDestroy_Native; // 0x033D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEngineLoad_Native; // 0x033E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x033F
    float SkidAmount_Native; // 0x0340 (Size: 0x4, Type: FloatProperty)
    float TimeSinceAwoken_Native; // 0x0344 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDestroyed_Native; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0349
    float TimeSinceSurfaceChange_Native; // 0x034C (Size: 0x4, Type: FloatProperty)
    void* OnInitialSuspensionSound; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    float AngleForSkidding_Native; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float SpringCompressionMultiplier; // 0x035C (Size: 0x4, Type: FloatProperty)
    float MotoSynthMaxVolume_Native; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x0364
    std::uint8_t MotoSynthTimeInVehicleTimeRange[0x10]; // 0x0368 (Size: 0x10, Type: StructProperty)
    std::uint8_t MotoSynthTimeInVehicleVolumeRange[0x10]; // 0x0378 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> ValetVehicle; // 0x0388 (Size: 0x8, Type: WeakObjectProperty)
    void* Engine_Native; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* BoostAudioComponent_Native; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* SynthComponentMoto_Native; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* SuspensionCollisionComponent_Native; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortValetAudioController, OnEngineLoadChanged) == 624, "Offset mismatch for UFortValetAudioController::OnEngineLoadChanged");
static_assert(offsetof(UFortValetAudioController, OnShiftGearCompleted) == 640, "Offset mismatch for UFortValetAudioController::OnShiftGearCompleted");
static_assert(offsetof(UFortValetAudioController, OnShiftGearDelegate) == 656, "Offset mismatch for UFortValetAudioController::OnShiftGearDelegate");
static_assert(offsetof(UFortValetAudioController, RPMResetTime_Native) == 672, "Offset mismatch for UFortValetAudioController::RPMResetTime_Native");
static_assert(offsetof(UFortValetAudioController, JitterAmount_Native) == 676, "Offset mismatch for UFortValetAudioController::JitterAmount_Native");
static_assert(offsetof(UFortValetAudioController, ShiftTimeThreshold_Native) == 680, "Offset mismatch for UFortValetAudioController::ShiftTimeThreshold_Native");
static_assert(offsetof(UFortValetAudioController, TimeSinceShift_Native) == 684, "Offset mismatch for UFortValetAudioController::TimeSinceShift_Native");
static_assert(offsetof(UFortValetAudioController, EngineRPMInterp_Native) == 688, "Offset mismatch for UFortValetAudioController::EngineRPMInterp_Native");
static_assert(offsetof(UFortValetAudioController, EngineRPMLinear_Native) == 692, "Offset mismatch for UFortValetAudioController::EngineRPMLinear_Native");
static_assert(offsetof(UFortValetAudioController, MinRPMRange_Native) == 696, "Offset mismatch for UFortValetAudioController::MinRPMRange_Native");
static_assert(offsetof(UFortValetAudioController, MaxRPMRange_Native) == 700, "Offset mismatch for UFortValetAudioController::MaxRPMRange_Native");
static_assert(offsetof(UFortValetAudioController, bCurrentlyShifting_Native) == 704, "Offset mismatch for UFortValetAudioController::bCurrentlyShifting_Native");
static_assert(offsetof(UFortValetAudioController, CurrentAccelRateGearModifier_Native) == 708, "Offset mismatch for UFortValetAudioController::CurrentAccelRateGearModifier_Native");
static_assert(offsetof(UFortValetAudioController, CurrentAccelRate_Native) == 712, "Offset mismatch for UFortValetAudioController::CurrentAccelRate_Native");
static_assert(offsetof(UFortValetAudioController, CurrentGear_Native) == 716, "Offset mismatch for UFortValetAudioController::CurrentGear_Native");
static_assert(offsetof(UFortValetAudioController, MaxGear_Native) == 720, "Offset mismatch for UFortValetAudioController::MaxGear_Native");
static_assert(offsetof(UFortValetAudioController, DefaultAccelRateScalar_Native) == 724, "Offset mismatch for UFortValetAudioController::DefaultAccelRateScalar_Native");
static_assert(offsetof(UFortValetAudioController, GearAttackInterpSpeed_Native) == 728, "Offset mismatch for UFortValetAudioController::GearAttackInterpSpeed_Native");
static_assert(offsetof(UFortValetAudioController, GearReleaseInterpSpeed_Native) == 732, "Offset mismatch for UFortValetAudioController::GearReleaseInterpSpeed_Native");
static_assert(offsetof(UFortValetAudioController, AccelRateScalarFirstGear_Native) == 736, "Offset mismatch for UFortValetAudioController::AccelRateScalarFirstGear_Native");
static_assert(offsetof(UFortValetAudioController, AccelRateScalarMinGear_Native) == 740, "Offset mismatch for UFortValetAudioController::AccelRateScalarMinGear_Native");
static_assert(offsetof(UFortValetAudioController, AccelRateScalarMaxGear_Native) == 744, "Offset mismatch for UFortValetAudioController::AccelRateScalarMaxGear_Native");
static_assert(offsetof(UFortValetAudioController, ShiftToRPMStart_Native) == 748, "Offset mismatch for UFortValetAudioController::ShiftToRPMStart_Native");
static_assert(offsetof(UFortValetAudioController, ShiftToRPMEnd_Native) == 752, "Offset mismatch for UFortValetAudioController::ShiftToRPMEnd_Native");
static_assert(offsetof(UFortValetAudioController, ShiftFromRPMStart_Native) == 756, "Offset mismatch for UFortValetAudioController::ShiftFromRPMStart_Native");
static_assert(offsetof(UFortValetAudioController, ShiftFromRPMEnd_Native) == 760, "Offset mismatch for UFortValetAudioController::ShiftFromRPMEnd_Native");
static_assert(offsetof(UFortValetAudioController, MaxRPMSawtoothDecrement_Native) == 764, "Offset mismatch for UFortValetAudioController::MaxRPMSawtoothDecrement_Native");
static_assert(offsetof(UFortValetAudioController, MaxRPMSawtoothRepeatTime_Native) == 768, "Offset mismatch for UFortValetAudioController::MaxRPMSawtoothRepeatTime_Native");
static_assert(offsetof(UFortValetAudioController, DownhillAccelScalar_Native) == 772, "Offset mismatch for UFortValetAudioController::DownhillAccelScalar_Native");
static_assert(offsetof(UFortValetAudioController, UphillAccelScalar_Native) == 776, "Offset mismatch for UFortValetAudioController::UphillAccelScalar_Native");
static_assert(offsetof(UFortValetAudioController, RPMFloatCurveMapping) == 784, "Offset mismatch for UFortValetAudioController::RPMFloatCurveMapping");
static_assert(offsetof(UFortValetAudioController, NormalizedSpeed_Native) == 792, "Offset mismatch for UFortValetAudioController::NormalizedSpeed_Native");
static_assert(offsetof(UFortValetAudioController, SuspValue_Native) == 796, "Offset mismatch for UFortValetAudioController::SuspValue_Native");
static_assert(offsetof(UFortValetAudioController, bIsHandbraking_Native) == 800, "Offset mismatch for UFortValetAudioController::bIsHandbraking_Native");
static_assert(offsetof(UFortValetAudioController, MotoSynthVolume_Native) == 804, "Offset mismatch for UFortValetAudioController::MotoSynthVolume_Native");
static_assert(offsetof(UFortValetAudioController, MotoSynthInitialFadeInTime_Native) == 808, "Offset mismatch for UFortValetAudioController::MotoSynthInitialFadeInTime_Native");
static_assert(offsetof(UFortValetAudioController, MotoSynthLogRPM_Native) == 816, "Offset mismatch for UFortValetAudioController::MotoSynthLogRPM_Native");
static_assert(offsetof(UFortValetAudioController, bHasFuel_Native) == 820, "Offset mismatch for UFortValetAudioController::bHasFuel_Native");
static_assert(offsetof(UFortValetAudioController, bIsInWater_Native) == 821, "Offset mismatch for UFortValetAudioController::bIsInWater_Native");
static_assert(offsetof(UFortValetAudioController, bLocalPlayerInVehicle_Native) == 822, "Offset mismatch for UFortValetAudioController::bLocalPlayerInVehicle_Native");
static_assert(offsetof(UFortValetAudioController, TimeLocalPlayerEnteredVehicle_Native) == 824, "Offset mismatch for UFortValetAudioController::TimeLocalPlayerEnteredVehicle_Native");
static_assert(offsetof(UFortValetAudioController, bAttemptingDirectionChange_Native) == 828, "Offset mismatch for UFortValetAudioController::bAttemptingDirectionChange_Native");
static_assert(offsetof(UFortValetAudioController, bPreDestroy_Native) == 829, "Offset mismatch for UFortValetAudioController::bPreDestroy_Native");
static_assert(offsetof(UFortValetAudioController, bEngineLoad_Native) == 830, "Offset mismatch for UFortValetAudioController::bEngineLoad_Native");
static_assert(offsetof(UFortValetAudioController, SkidAmount_Native) == 832, "Offset mismatch for UFortValetAudioController::SkidAmount_Native");
static_assert(offsetof(UFortValetAudioController, TimeSinceAwoken_Native) == 836, "Offset mismatch for UFortValetAudioController::TimeSinceAwoken_Native");
static_assert(offsetof(UFortValetAudioController, bDestroyed_Native) == 840, "Offset mismatch for UFortValetAudioController::bDestroyed_Native");
static_assert(offsetof(UFortValetAudioController, TimeSinceSurfaceChange_Native) == 844, "Offset mismatch for UFortValetAudioController::TimeSinceSurfaceChange_Native");
static_assert(offsetof(UFortValetAudioController, OnInitialSuspensionSound) == 848, "Offset mismatch for UFortValetAudioController::OnInitialSuspensionSound");
static_assert(offsetof(UFortValetAudioController, AngleForSkidding_Native) == 856, "Offset mismatch for UFortValetAudioController::AngleForSkidding_Native");
static_assert(offsetof(UFortValetAudioController, SpringCompressionMultiplier) == 860, "Offset mismatch for UFortValetAudioController::SpringCompressionMultiplier");
static_assert(offsetof(UFortValetAudioController, MotoSynthMaxVolume_Native) == 864, "Offset mismatch for UFortValetAudioController::MotoSynthMaxVolume_Native");
static_assert(offsetof(UFortValetAudioController, MotoSynthTimeInVehicleTimeRange) == 872, "Offset mismatch for UFortValetAudioController::MotoSynthTimeInVehicleTimeRange");
static_assert(offsetof(UFortValetAudioController, MotoSynthTimeInVehicleVolumeRange) == 888, "Offset mismatch for UFortValetAudioController::MotoSynthTimeInVehicleVolumeRange");
static_assert(offsetof(UFortValetAudioController, ValetVehicle) == 904, "Offset mismatch for UFortValetAudioController::ValetVehicle");
static_assert(offsetof(UFortValetAudioController, Engine_Native) == 912, "Offset mismatch for UFortValetAudioController::Engine_Native");
static_assert(offsetof(UFortValetAudioController, BoostAudioComponent_Native) == 920, "Offset mismatch for UFortValetAudioController::BoostAudioComponent_Native");
static_assert(offsetof(UFortValetAudioController, SynthComponentMoto_Native) == 928, "Offset mismatch for UFortValetAudioController::SynthComponentMoto_Native");
static_assert(offsetof(UFortValetAudioController, SuspensionCollisionComponent_Native) == 936, "Offset mismatch for UFortValetAudioController::SuspensionCollisionComponent_Native");

// /Script/ValetRuntime.FortValetGameFeatureData
// Kind: Class; super: FortGameFeatureData
class UFortValetGameFeatureData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    TMap<void*, void*> PropReplacements; // 0x0448 (Size: 0x10, Type: MapProperty)
    std::uint8_t VehicleSpawnerClass[0x20]; // 0x0458 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SpawnActorCollisionHandlingMethod; // 0x0478 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortValetGameFeatureData, PropReplacements) == 1096, "Offset mismatch for UFortValetGameFeatureData::PropReplacements");
static_assert(offsetof(UFortValetGameFeatureData, VehicleSpawnerClass) == 1112, "Offset mismatch for UFortValetGameFeatureData::VehicleSpawnerClass");
static_assert(offsetof(UFortValetGameFeatureData, SpawnActorCollisionHandlingMethod) == 1144, "Offset mismatch for UFortValetGameFeatureData::SpawnActorCollisionHandlingMethod");

// /Script/ValetRuntime.FortValetMountedGunAnimInstance
// Kind: Class; super: FortAnimInstance
class UFortValetMountedGunAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    void* VehicleActor; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsUsingMountedGun; // 0x0458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0459
    std::int32_t SeatIndexCached; // 0x045C (Size: 0x4, Type: IntProperty)
    float AimingYaw; // 0x0460 (Size: 0x4, Type: FloatProperty)
    float AimingPitch; // 0x0464 (Size: 0x4, Type: FloatProperty)
    void* MountedWeapon; // 0x0468 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortValetMountedGunAnimInstance, VehicleActor) == 1104, "Offset mismatch for UFortValetMountedGunAnimInstance::VehicleActor");
static_assert(offsetof(UFortValetMountedGunAnimInstance, bIsUsingMountedGun) == 1112, "Offset mismatch for UFortValetMountedGunAnimInstance::bIsUsingMountedGun");
static_assert(offsetof(UFortValetMountedGunAnimInstance, SeatIndexCached) == 1116, "Offset mismatch for UFortValetMountedGunAnimInstance::SeatIndexCached");
static_assert(offsetof(UFortValetMountedGunAnimInstance, AimingYaw) == 1120, "Offset mismatch for UFortValetMountedGunAnimInstance::AimingYaw");
static_assert(offsetof(UFortValetMountedGunAnimInstance, AimingPitch) == 1124, "Offset mismatch for UFortValetMountedGunAnimInstance::AimingPitch");
static_assert(offsetof(UFortValetMountedGunAnimInstance, MountedWeapon) == 1128, "Offset mismatch for UFortValetMountedGunAnimInstance::MountedWeapon");

// /Script/ValetRuntime.FortValetPassengerAnimInstance
// Kind: Class; super: FortVehicleOccupantAnimInstance
class UFortValetPassengerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    std::uint8_t IntoVehicleCachedData[0x14]; // 0x0730 (Size: 0x14, Type: StructProperty)
    std::uint8_t OutOfVehicleCachedData[0x14]; // 0x0744 (Size: 0x14, Type: StructProperty)
    std::uint8_t DagwoodVehicleInstance[0x20]; // 0x0758 (Size: 0x20, Type: SoftObjectProperty)
    float TurnYaw; // 0x0778 (Size: 0x4, Type: FloatProperty)
    float InTime; // 0x077C (Size: 0x4, Type: FloatProperty)
    float OutTime; // 0x0780 (Size: 0x4, Type: FloatProperty)
    float NegativeTurnYaw; // 0x0784 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsReloading; // 0x0788 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargeting; // 0x0789 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x078A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsingConsumable; // 0x078B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAction; // 0x078C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPassengerBackLeft; // 0x078D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsThrowConsumable; // 0x078E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeaning; // 0x078F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsControllingTurret; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDBNO; // 0x0791 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0792
    std::uint8_t PawnControllingTurretTags[0x1]; // 0x0798 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortValetPassengerAnimInstance, IntoVehicleCachedData) == 1840, "Offset mismatch for UFortValetPassengerAnimInstance::IntoVehicleCachedData");
static_assert(offsetof(UFortValetPassengerAnimInstance, OutOfVehicleCachedData) == 1860, "Offset mismatch for UFortValetPassengerAnimInstance::OutOfVehicleCachedData");
static_assert(offsetof(UFortValetPassengerAnimInstance, DagwoodVehicleInstance) == 1880, "Offset mismatch for UFortValetPassengerAnimInstance::DagwoodVehicleInstance");
static_assert(offsetof(UFortValetPassengerAnimInstance, TurnYaw) == 1912, "Offset mismatch for UFortValetPassengerAnimInstance::TurnYaw");
static_assert(offsetof(UFortValetPassengerAnimInstance, InTime) == 1916, "Offset mismatch for UFortValetPassengerAnimInstance::InTime");
static_assert(offsetof(UFortValetPassengerAnimInstance, OutTime) == 1920, "Offset mismatch for UFortValetPassengerAnimInstance::OutTime");
static_assert(offsetof(UFortValetPassengerAnimInstance, NegativeTurnYaw) == 1924, "Offset mismatch for UFortValetPassengerAnimInstance::NegativeTurnYaw");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsReloading) == 1928, "Offset mismatch for UFortValetPassengerAnimInstance::bIsReloading");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsTargeting) == 1929, "Offset mismatch for UFortValetPassengerAnimInstance::bIsTargeting");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsFiring) == 1930, "Offset mismatch for UFortValetPassengerAnimInstance::bIsFiring");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsUsingConsumable) == 1931, "Offset mismatch for UFortValetPassengerAnimInstance::bIsUsingConsumable");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsInAction) == 1932, "Offset mismatch for UFortValetPassengerAnimInstance::bIsInAction");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsPassengerBackLeft) == 1933, "Offset mismatch for UFortValetPassengerAnimInstance::bIsPassengerBackLeft");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsThrowConsumable) == 1934, "Offset mismatch for UFortValetPassengerAnimInstance::bIsThrowConsumable");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsLeaning) == 1935, "Offset mismatch for UFortValetPassengerAnimInstance::bIsLeaning");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsControllingTurret) == 1936, "Offset mismatch for UFortValetPassengerAnimInstance::bIsControllingTurret");
static_assert(offsetof(UFortValetPassengerAnimInstance, bIsDBNO) == 1937, "Offset mismatch for UFortValetPassengerAnimInstance::bIsDBNO");
static_assert(offsetof(UFortValetPassengerAnimInstance, PawnControllingTurretTags) == 1944, "Offset mismatch for UFortValetPassengerAnimInstance::PawnControllingTurretTags");

// /Script/ValetRuntime.FortValetSedanAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortValetSedanAnimInstance
{
public:
    std::uint8_t Pad_0000[0x504]; // 0x0000
    std::uint8_t bHasTireMod; // 0x0504 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0505
    float TrunkDamageAlpha; // 0x0508 (Size: 0x4, Type: FloatProperty)
    float MirrorLeftDamageAlpha; // 0x050C (Size: 0x4, Type: FloatProperty)
    float MirrorRightDamageAlpha; // 0x0510 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortValetSedanAnimInstance, bHasTireMod) == 1284, "Offset mismatch for UFortValetSedanAnimInstance::bHasTireMod");
static_assert(offsetof(UFortValetSedanAnimInstance, TrunkDamageAlpha) == 1288, "Offset mismatch for UFortValetSedanAnimInstance::TrunkDamageAlpha");
static_assert(offsetof(UFortValetSedanAnimInstance, MirrorLeftDamageAlpha) == 1292, "Offset mismatch for UFortValetSedanAnimInstance::MirrorLeftDamageAlpha");
static_assert(offsetof(UFortValetSedanAnimInstance, MirrorRightDamageAlpha) == 1296, "Offset mismatch for UFortValetSedanAnimInstance::MirrorRightDamageAlpha");

// /Script/ValetRuntime.NetworkPhysicsManager
// Kind: Class; super: WorldSubsystem
class UNetworkPhysicsManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ValetRuntime.SportsCarVehicleAnimInstance
// Kind: Class; super: VehicleBouncyChassisAnimInstance
class USportsCarVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x7B0]; // 0x0000
    float TriggerSpoiler; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    float TriggerMirrorL; // 0x07B4 (Size: 0x4, Type: FloatProperty)
    float TriggerMirrorR; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasTireMod; // 0x07BC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USportsCarVehicleAnimInstance, TriggerSpoiler) == 1968, "Offset mismatch for USportsCarVehicleAnimInstance::TriggerSpoiler");
static_assert(offsetof(USportsCarVehicleAnimInstance, TriggerMirrorL) == 1972, "Offset mismatch for USportsCarVehicleAnimInstance::TriggerMirrorL");
static_assert(offsetof(USportsCarVehicleAnimInstance, TriggerMirrorR) == 1976, "Offset mismatch for USportsCarVehicleAnimInstance::TriggerMirrorR");
static_assert(offsetof(USportsCarVehicleAnimInstance, bHasTireMod) == 1980, "Offset mismatch for USportsCarVehicleAnimInstance::bHasTireMod");
