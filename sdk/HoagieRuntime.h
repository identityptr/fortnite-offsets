/**
 * decamp dumper generated SDK
 * Package: /Script/HoagieRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HoagieRuntime.CachedSeatCollision
// Kind: ScriptStruct; super: none
struct FCachedSeatCollision
{
public:
    std::int32_t SeatIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOccupied; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCachedSeatCollision, SeatIndex) == 0, "Offset mismatch for FCachedSeatCollision::SeatIndex");
static_assert(offsetof(FCachedSeatCollision, bOccupied) == 4, "Offset mismatch for FCachedSeatCollision::bOccupied");

// /Script/HoagieRuntime.FortHeliFlightModel
// Kind: ScriptStruct; super: none
struct FFortHeliFlightModel
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    void* Configs; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortHeliFlightModel, Configs) == 472, "Offset mismatch for FFortHeliFlightModel::Configs");

// /Script/HoagieRuntime.HoagieCmd
// Kind: ScriptStruct; super: none
struct FHoagieCmd
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HoagieRuntime.HoagieDeathEffectInfo
// Kind: ScriptStruct; super: none
struct FHoagieDeathEffectInfo
{
public:
    float Damage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t DamageTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t Momentum[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitInfo[0xF8]; // 0x0040 (Size: 0xF8, Type: StructProperty)
    void* InstigatedBy; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* DamageCauser; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EffectContext[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHoagieDeathEffectInfo, Damage) == 0, "Offset mismatch for FHoagieDeathEffectInfo::Damage");
static_assert(offsetof(FHoagieDeathEffectInfo, DamageTags) == 8, "Offset mismatch for FHoagieDeathEffectInfo::DamageTags");
static_assert(offsetof(FHoagieDeathEffectInfo, Momentum) == 40, "Offset mismatch for FHoagieDeathEffectInfo::Momentum");
static_assert(offsetof(FHoagieDeathEffectInfo, HitInfo) == 64, "Offset mismatch for FHoagieDeathEffectInfo::HitInfo");
static_assert(offsetof(FHoagieDeathEffectInfo, InstigatedBy) == 312, "Offset mismatch for FHoagieDeathEffectInfo::InstigatedBy");
static_assert(offsetof(FHoagieDeathEffectInfo, DamageCauser) == 320, "Offset mismatch for FHoagieDeathEffectInfo::DamageCauser");
static_assert(offsetof(FHoagieDeathEffectInfo, EffectContext) == 328, "Offset mismatch for FHoagieDeathEffectInfo::EffectContext");

// /Script/HoagieRuntime.HoagieInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FHoagieInPersistent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* FortHoagieVehicleConfigs; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentHoagieState; // 0x01C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01C9
    float LastRotorImpulseTime; // 0x01CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotorHitLinearImpulse[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotorHitAngularImpulse[0x1]; // 0x01E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHoagieInPersistent, FortHoagieVehicleConfigs) == 448, "Offset mismatch for FHoagieInPersistent::FortHoagieVehicleConfigs");
static_assert(offsetof(FHoagieInPersistent, CurrentHoagieState) == 456, "Offset mismatch for FHoagieInPersistent::CurrentHoagieState");
static_assert(offsetof(FHoagieInPersistent, LastRotorImpulseTime) == 460, "Offset mismatch for FHoagieInPersistent::LastRotorImpulseTime");
static_assert(offsetof(FHoagieInPersistent, RotorHitLinearImpulse) == 464, "Offset mismatch for FHoagieInPersistent::RotorHitLinearImpulse");
static_assert(offsetof(FHoagieInPersistent, RotorHitAngularImpulse) == 488, "Offset mismatch for FHoagieInPersistent::RotorHitAngularImpulse");

// /Script/HoagieRuntime.HoagieInternal
// Kind: ScriptStruct; super: FortVehicleInternalPersistent
struct FHoagieInternal
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t FlightModel[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHoagieInternal, FlightModel) == 224, "Offset mismatch for FHoagieInternal::FlightModel");

// /Script/HoagieRuntime.HoagieOutContinuous
// Kind: ScriptStruct; super: FortVehicleOutContinuous
struct FHoagieOutContinuous
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float SteeringAngle; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t AverageSpringNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlatformVelocityDirection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHoagieOutContinuous, SteeringAngle) == 8, "Offset mismatch for FHoagieOutContinuous::SteeringAngle");
static_assert(offsetof(FHoagieOutContinuous, AverageSpringNormal) == 16, "Offset mismatch for FHoagieOutContinuous::AverageSpringNormal");
static_assert(offsetof(FHoagieOutContinuous, PlatformVelocityDirection) == 40, "Offset mismatch for FHoagieOutContinuous::PlatformVelocityDirection");

// /Script/HoagieRuntime.HoagieOutPersistent
// Kind: ScriptStruct; super: FortVehicleOutPersistent
struct FHoagieOutPersistent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAnyWheelsOnGround; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bCanDriveOnIncline (shared storage)
    // 0x0008 BoolProperty bIsAsyncCorrectingOrientation (shared storage)
    // 0x0008 BoolProperty bIsTouchingDrivableGround (shared storage)
    // 0x0008 BoolProperty bIsTouchingGroundWithoutWheels (shared storage)
    // 0x0008 BoolProperty bOnRoad (shared storage)
    // 0x0008 BoolProperty bPossiblyTouchingTop (shared storage)
    // 0x0008 BoolProperty bWheelsOnGround (shared storage)
    std::uint8_t bBoosting; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty bOnDirt (shared storage)
    // 0x0009 BoolProperty bOnGrass (shared storage)
    // 0x0009 BoolProperty bOnIce (shared storage)
    // 0x0009 BoolProperty bOnLandscape (shared storage)
    // 0x0009 BoolProperty bOnMud (shared storage)
    // 0x0009 BoolProperty bOnSnow (shared storage)
    // 0x0009 BoolProperty bOnVehicle (shared storage)
    std::uint8_t bStartedWithFullBoost; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x000B
    TArray<void*> TireSurfaces; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float TotalBrakingDelta; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGearIdx; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHoagieOutPersistent, bAnyWheelsOnGround) == 8, "Offset mismatch for FHoagieOutPersistent::bAnyWheelsOnGround");
static_assert(offsetof(FHoagieOutPersistent, bBoosting) == 9, "Offset mismatch for FHoagieOutPersistent::bBoosting");
static_assert(offsetof(FHoagieOutPersistent, bStartedWithFullBoost) == 10, "Offset mismatch for FHoagieOutPersistent::bStartedWithFullBoost");
static_assert(offsetof(FHoagieOutPersistent, TireSurfaces) == 16, "Offset mismatch for FHoagieOutPersistent::TireSurfaces");
static_assert(offsetof(FHoagieOutPersistent, TotalBrakingDelta) == 32, "Offset mismatch for FHoagieOutPersistent::TotalBrakingDelta");
static_assert(offsetof(FHoagieOutPersistent, CurrentGearIdx) == 36, "Offset mismatch for FHoagieOutPersistent::CurrentGearIdx");

// /Script/HoagieRuntime.ReplicatedHeliControlState
// Kind: ScriptStruct; super: none
struct FReplicatedHeliControlState
{
public:
    std::uint8_t Up[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Forward[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedHeliControlState, Up) == 0, "Offset mismatch for FReplicatedHeliControlState::Up");
static_assert(offsetof(FReplicatedHeliControlState, Forward) == 24, "Offset mismatch for FReplicatedHeliControlState::Forward");

// /Script/HoagieRuntime.RotorHit
// Kind: ScriptStruct; super: none
struct FRotorHit
{
public:
    std::uint8_t HitObjectHandle[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    float LastHitTimer; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRotorHit, HitObjectHandle) == 0, "Offset mismatch for FRotorHit::HitObjectHandle");
static_assert(offsetof(FRotorHit, LastHitTimer) == 32, "Offset mismatch for FRotorHit::LastHitTimer");

// /Script/HoagieRuntime.FortCameraMode_Hoagie
// Kind: Class; super: FortCameraMode_AthenaVehicle
class UFortCameraMode_Hoagie
{
public:
    std::uint8_t Pad_0000[0x20A0]; // 0x0000
    float CurrentRollMultiplier; // 0x20A0 (Size: 0x4, Type: FloatProperty)
    float CurrentPitchMultiplier; // 0x20A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastOrigin[0x18]; // 0x20A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentInterpSpeed[0x18]; // 0x20C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoostInterpSpeed[0x18]; // 0x20D8 (Size: 0x18, Type: StructProperty)
    float BaseRollMultiplier; // 0x20F0 (Size: 0x4, Type: FloatProperty)
    float BasePitchMultiplier; // 0x20F4 (Size: 0x4, Type: FloatProperty)
    float BoostRollMultiplier; // 0x20F8 (Size: 0x4, Type: FloatProperty)
    float BoostPitchMultiplier; // 0x20FC (Size: 0x4, Type: FloatProperty)
    float BoostRollDampFactor; // 0x2100 (Size: 0x4, Type: FloatProperty)
    float BoostRollRecoveryDampFactor; // 0x2104 (Size: 0x4, Type: FloatProperty)
    float BoostRecoveryInterpSpeed; // 0x2108 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraMode_Hoagie, CurrentRollMultiplier) == 8352, "Offset mismatch for UFortCameraMode_Hoagie::CurrentRollMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, CurrentPitchMultiplier) == 8356, "Offset mismatch for UFortCameraMode_Hoagie::CurrentPitchMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, LastOrigin) == 8360, "Offset mismatch for UFortCameraMode_Hoagie::LastOrigin");
static_assert(offsetof(UFortCameraMode_Hoagie, CurrentInterpSpeed) == 8384, "Offset mismatch for UFortCameraMode_Hoagie::CurrentInterpSpeed");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostInterpSpeed) == 8408, "Offset mismatch for UFortCameraMode_Hoagie::BoostInterpSpeed");
static_assert(offsetof(UFortCameraMode_Hoagie, BaseRollMultiplier) == 8432, "Offset mismatch for UFortCameraMode_Hoagie::BaseRollMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, BasePitchMultiplier) == 8436, "Offset mismatch for UFortCameraMode_Hoagie::BasePitchMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollMultiplier) == 8440, "Offset mismatch for UFortCameraMode_Hoagie::BoostRollMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostPitchMultiplier) == 8444, "Offset mismatch for UFortCameraMode_Hoagie::BoostPitchMultiplier");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollDampFactor) == 8448, "Offset mismatch for UFortCameraMode_Hoagie::BoostRollDampFactor");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRollRecoveryDampFactor) == 8452, "Offset mismatch for UFortCameraMode_Hoagie::BoostRollRecoveryDampFactor");
static_assert(offsetof(UFortCameraMode_Hoagie, BoostRecoveryInterpSpeed) == 8456, "Offset mismatch for UFortCameraMode_Hoagie::BoostRecoveryInterpSpeed");

// /Script/HoagieRuntime.FortHoagieAudioController
// Kind: Class; super: Actor
class UFortHoagieAudioController
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bHighQualityOverride; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalPlayerInHoagie; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCriticalDamageNative; // 0x0272 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotorHitNative; // 0x0273 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRotorWashActiveNative; // 0x0274 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0275
    float RotorWashRelativeZOffset; // 0x0278 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> Vehicle; // 0x027C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0284
    void* EngineAudio; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* RotorAudio; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHoagieAudioController, bHighQualityOverride) == 624, "Offset mismatch for UFortHoagieAudioController::bHighQualityOverride");
static_assert(offsetof(UFortHoagieAudioController, bLocalPlayerInHoagie) == 625, "Offset mismatch for UFortHoagieAudioController::bLocalPlayerInHoagie");
static_assert(offsetof(UFortHoagieAudioController, bCriticalDamageNative) == 626, "Offset mismatch for UFortHoagieAudioController::bCriticalDamageNative");
static_assert(offsetof(UFortHoagieAudioController, bRotorHitNative) == 627, "Offset mismatch for UFortHoagieAudioController::bRotorHitNative");
static_assert(offsetof(UFortHoagieAudioController, bIsRotorWashActiveNative) == 628, "Offset mismatch for UFortHoagieAudioController::bIsRotorWashActiveNative");
static_assert(offsetof(UFortHoagieAudioController, RotorWashRelativeZOffset) == 632, "Offset mismatch for UFortHoagieAudioController::RotorWashRelativeZOffset");
static_assert(offsetof(UFortHoagieAudioController, Vehicle) == 636, "Offset mismatch for UFortHoagieAudioController::Vehicle");
static_assert(offsetof(UFortHoagieAudioController, EngineAudio) == 648, "Offset mismatch for UFortHoagieAudioController::EngineAudio");
static_assert(offsetof(UFortHoagieAudioController, RotorAudio) == 656, "Offset mismatch for UFortHoagieAudioController::RotorAudio");

// /Script/HoagieRuntime.FortHoagieDriverAnimInstance
// Kind: Class; super: FortVehicleOccupantAnimInstance
class UFortHoagieDriverAnimInstance
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    std::uint8_t LeftHandIKPositionOffset[0x18]; // 0x0730 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKPositionOffset[0x18]; // 0x0748 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftHandIKRotationOffset[0x18]; // 0x0760 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightHandIKRotationOffset[0x18]; // 0x0778 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoostCardinalDirection; // 0x0790 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0791
    float NormalizedAcceleration; // 0x0794 (Size: 0x4, Type: FloatProperty)
    float VehicleRoll; // 0x0798 (Size: 0x4, Type: FloatProperty)
    float VehicleYaw; // 0x079C (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x07A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMovingAnyDirection; // 0x07A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingFastAnyDirection; // 0x07A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldReverse; // 0x07A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldGoBackToIdle; // 0x07A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Default_ReverseStart; // 0x07A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_BoostLoop_Reverse; // 0x07A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortHoagieDriverAnimInstance, LeftHandIKPositionOffset) == 1840, "Offset mismatch for UFortHoagieDriverAnimInstance::LeftHandIKPositionOffset");
static_assert(offsetof(UFortHoagieDriverAnimInstance, RightHandIKPositionOffset) == 1864, "Offset mismatch for UFortHoagieDriverAnimInstance::RightHandIKPositionOffset");
static_assert(offsetof(UFortHoagieDriverAnimInstance, LeftHandIKRotationOffset) == 1888, "Offset mismatch for UFortHoagieDriverAnimInstance::LeftHandIKRotationOffset");
static_assert(offsetof(UFortHoagieDriverAnimInstance, RightHandIKRotationOffset) == 1912, "Offset mismatch for UFortHoagieDriverAnimInstance::RightHandIKRotationOffset");
static_assert(offsetof(UFortHoagieDriverAnimInstance, BoostCardinalDirection) == 1936, "Offset mismatch for UFortHoagieDriverAnimInstance::BoostCardinalDirection");
static_assert(offsetof(UFortHoagieDriverAnimInstance, NormalizedAcceleration) == 1940, "Offset mismatch for UFortHoagieDriverAnimInstance::NormalizedAcceleration");
static_assert(offsetof(UFortHoagieDriverAnimInstance, VehicleRoll) == 1944, "Offset mismatch for UFortHoagieDriverAnimInstance::VehicleRoll");
static_assert(offsetof(UFortHoagieDriverAnimInstance, VehicleYaw) == 1948, "Offset mismatch for UFortHoagieDriverAnimInstance::VehicleYaw");
static_assert(offsetof(UFortHoagieDriverAnimInstance, ForwardSpeed) == 1952, "Offset mismatch for UFortHoagieDriverAnimInstance::ForwardSpeed");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bIsMovingAnyDirection) == 1956, "Offset mismatch for UFortHoagieDriverAnimInstance::bIsMovingAnyDirection");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bIsMovingFastAnyDirection) == 1957, "Offset mismatch for UFortHoagieDriverAnimInstance::bIsMovingFastAnyDirection");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bShouldReverse) == 1958, "Offset mismatch for UFortHoagieDriverAnimInstance::bShouldReverse");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bShouldGoBackToIdle) == 1959, "Offset mismatch for UFortHoagieDriverAnimInstance::bShouldGoBackToIdle");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bTransition_Default_ReverseStart) == 1960, "Offset mismatch for UFortHoagieDriverAnimInstance::bTransition_Default_ReverseStart");
static_assert(offsetof(UFortHoagieDriverAnimInstance, bTransition_BoostLoop_Reverse) == 1961, "Offset mismatch for UFortHoagieDriverAnimInstance::bTransition_BoostLoop_Reverse");

// /Script/HoagieRuntime.FortHoagieVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UFortHoagieVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    std::uint8_t PassengerCollision[0x4]; // 0x2020 (Size: 0x4, Type: NameProperty)
    float CameraBoomDistance; // 0x2024 (Size: 0x4, Type: FloatProperty)
    float CameraBoomHeight; // 0x2028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x202C
    FMulticastInlineDelegate OnBoostStateChanged; // 0x2030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAltimeterTraceUpdated; // 0x2040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCrashingStateEntered; // 0x2050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEngineAudioDisabled; // 0x2060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x2061
    float LiftRumbleTimer; // 0x2064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLiftUp; // 0x2068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2069
    std::uint64_t LiftForceFeedbackHandle; // 0x2070 (Size: 0x8, Type: UInt64Property)
    std::uint64_t PassiveForceFeedbackHandle; // 0x2078 (Size: 0x8, Type: UInt64Property)
    float Theta_Native; // 0x2080 (Size: 0x4, Type: FloatProperty)
    float WashAltAlpha_Native; // 0x2084 (Size: 0x4, Type: FloatProperty)
    float RotorWashTickTimer; // 0x2088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x208C
    TArray<void*> RotorTraceArray; // 0x2090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RotorWashObjectsTypes; // 0x20A0 (Size: 0x10, Type: ArrayProperty)
    void* CachedBoostComponent; // 0x20B0 (Size: 0x8, Type: ObjectProperty)
    void* FortHoagieVehicleConfigs; // 0x20B8 (Size: 0x8, Type: ObjectProperty)
    void* RumbleIntensity; // 0x20C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FlightModel[0x1E0]; // 0x20C8 (Size: 0x1E0, Type: StructProperty)
    std::uint8_t bClearPitchInput; // 0x22A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x22A9
    float BoostTimeLeft; // 0x22AC (Size: 0x4, Type: FloatProperty)
    float BoostBrakingTimeLeft; // 0x22B0 (Size: 0x4, Type: FloatProperty)
    float BoostCooldown; // 0x22B4 (Size: 0x4, Type: FloatProperty)
    float ShutdownTimer; // 0x22B8 (Size: 0x4, Type: FloatProperty)
    float FoliageDestructionTimer; // 0x22BC (Size: 0x4, Type: FloatProperty)
    float CrashingScrapingTimer; // 0x22C0 (Size: 0x4, Type: FloatProperty)
    float CrashingNotMovingTimer; // 0x22C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanSleep; // 0x22C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasAppliedCrashDamage; // 0x22C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOrientedForLanding; // 0x22CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceNegativeLift; // 0x22CB (Size: 0x1, Type: BoolProperty)
    float AltimeterTraceTimer; // 0x22CC (Size: 0x4, Type: FloatProperty)
    float RotorDamageTimer; // 0x22D0 (Size: 0x4, Type: FloatProperty)
    float LastRotorImpulseTime; // 0x22D4 (Size: 0x4, Type: FloatProperty)
    float CriticalExplodeTimer; // 0x22D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCriticalExplosionPlayed; // 0x22DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x22DD
    float TimeWhileCritical; // 0x22E0 (Size: 0x4, Type: FloatProperty)
    float TimeWhileLanding; // 0x22E4 (Size: 0x4, Type: FloatProperty)
    float LiftFromOverrideButton; // 0x22E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x22EC
    std::uint8_t BoostDirection[0x18]; // 0x22F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastRotorSweepDirection[0x18]; // 0x2308 (Size: 0x18, Type: StructProperty)
    std::uint8_t AltimeterTraceResult[0xF8]; // 0x2320 (Size: 0xF8, Type: StructProperty)
    std::int32_t HoagieStateRep; // 0x2418 (Size: 0x4, Type: IntProperty)
    std::uint8_t CurrentHoagieState; // 0x241C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x241D
    float CurrentRotorSpeed; // 0x2420 (Size: 0x4, Type: FloatProperty)
    float CurrentRotorAngle; // 0x2424 (Size: 0x4, Type: FloatProperty)
    float RotorImpactTraceAngle; // 0x2428 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LiftInputs[0xC]; // 0x242C (Size: 0xC, Type: StructProperty)
    TArray<void*> RotorHits; // 0x2438 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSeatCollision; // 0x2448 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotorHitLinearImpulse[0x18]; // 0x2458 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotorHitAngularImpulse[0x18]; // 0x2470 (Size: 0x18, Type: StructProperty)
    void* HoagieIdleFX_Native; // 0x2488 (Size: 0x8, Type: ObjectProperty)
    void* DamageFX_Native; // 0x2490 (Size: 0x8, Type: ObjectProperty)
    void* RotorWashFX_Native; // 0x2498 (Size: 0x8, Type: ObjectProperty)
    void* HoagieAnimBP_Native; // 0x24A0 (Size: 0x8, Type: ObjectProperty)
    void* RotorWashComponent; // 0x24A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AltimeterTraceSocketName[0x4]; // 0x24B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RotorDamageTraceSocketName[0x4]; // 0x24B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MainRotorCritSocketName[0x4]; // 0x24B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t TailRotorCritSocketName[0x4]; // 0x24BC (Size: 0x4, Type: NameProperty)
    void* SeatTransition_ToDriver; // 0x24C0 (Size: 0x8, Type: ObjectProperty)
    void* SeatTransition_ToPassenger; // 0x24C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RotorTraceProfile[0x4]; // 0x24D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FoliageOverlapsBoxTag[0x4]; // 0x24D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ControlState[0x30]; // 0x24D8 (Size: 0x30, Type: StructProperty)
    float CurrentViewDistanceScale; // 0x2508 (Size: 0x4, Type: FloatProperty)
    float CurrentHLODDistanceOverrideScale; // 0x250C (Size: 0x4, Type: FloatProperty)
    float CurrentHLODMaxDrawDistanceScale; // 0x2510 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0xC]; // 0x2514
    std::uint8_t CachedDeathEffectInfo[0x1]; // 0x2520 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortHoagieVehicle, PassengerCollision) == 8224, "Offset mismatch for UFortHoagieVehicle::PassengerCollision");
static_assert(offsetof(UFortHoagieVehicle, CameraBoomDistance) == 8228, "Offset mismatch for UFortHoagieVehicle::CameraBoomDistance");
static_assert(offsetof(UFortHoagieVehicle, CameraBoomHeight) == 8232, "Offset mismatch for UFortHoagieVehicle::CameraBoomHeight");
static_assert(offsetof(UFortHoagieVehicle, OnBoostStateChanged) == 8240, "Offset mismatch for UFortHoagieVehicle::OnBoostStateChanged");
static_assert(offsetof(UFortHoagieVehicle, OnAltimeterTraceUpdated) == 8256, "Offset mismatch for UFortHoagieVehicle::OnAltimeterTraceUpdated");
static_assert(offsetof(UFortHoagieVehicle, OnCrashingStateEntered) == 8272, "Offset mismatch for UFortHoagieVehicle::OnCrashingStateEntered");
static_assert(offsetof(UFortHoagieVehicle, bEngineAudioDisabled) == 8288, "Offset mismatch for UFortHoagieVehicle::bEngineAudioDisabled");
static_assert(offsetof(UFortHoagieVehicle, LiftRumbleTimer) == 8292, "Offset mismatch for UFortHoagieVehicle::LiftRumbleTimer");
static_assert(offsetof(UFortHoagieVehicle, bLiftUp) == 8296, "Offset mismatch for UFortHoagieVehicle::bLiftUp");
static_assert(offsetof(UFortHoagieVehicle, LiftForceFeedbackHandle) == 8304, "Offset mismatch for UFortHoagieVehicle::LiftForceFeedbackHandle");
static_assert(offsetof(UFortHoagieVehicle, PassiveForceFeedbackHandle) == 8312, "Offset mismatch for UFortHoagieVehicle::PassiveForceFeedbackHandle");
static_assert(offsetof(UFortHoagieVehicle, Theta_Native) == 8320, "Offset mismatch for UFortHoagieVehicle::Theta_Native");
static_assert(offsetof(UFortHoagieVehicle, WashAltAlpha_Native) == 8324, "Offset mismatch for UFortHoagieVehicle::WashAltAlpha_Native");
static_assert(offsetof(UFortHoagieVehicle, RotorWashTickTimer) == 8328, "Offset mismatch for UFortHoagieVehicle::RotorWashTickTimer");
static_assert(offsetof(UFortHoagieVehicle, RotorTraceArray) == 8336, "Offset mismatch for UFortHoagieVehicle::RotorTraceArray");
static_assert(offsetof(UFortHoagieVehicle, RotorWashObjectsTypes) == 8352, "Offset mismatch for UFortHoagieVehicle::RotorWashObjectsTypes");
static_assert(offsetof(UFortHoagieVehicle, CachedBoostComponent) == 8368, "Offset mismatch for UFortHoagieVehicle::CachedBoostComponent");
static_assert(offsetof(UFortHoagieVehicle, FortHoagieVehicleConfigs) == 8376, "Offset mismatch for UFortHoagieVehicle::FortHoagieVehicleConfigs");
static_assert(offsetof(UFortHoagieVehicle, RumbleIntensity) == 8384, "Offset mismatch for UFortHoagieVehicle::RumbleIntensity");
static_assert(offsetof(UFortHoagieVehicle, FlightModel) == 8392, "Offset mismatch for UFortHoagieVehicle::FlightModel");
static_assert(offsetof(UFortHoagieVehicle, bClearPitchInput) == 8872, "Offset mismatch for UFortHoagieVehicle::bClearPitchInput");
static_assert(offsetof(UFortHoagieVehicle, BoostTimeLeft) == 8876, "Offset mismatch for UFortHoagieVehicle::BoostTimeLeft");
static_assert(offsetof(UFortHoagieVehicle, BoostBrakingTimeLeft) == 8880, "Offset mismatch for UFortHoagieVehicle::BoostBrakingTimeLeft");
static_assert(offsetof(UFortHoagieVehicle, BoostCooldown) == 8884, "Offset mismatch for UFortHoagieVehicle::BoostCooldown");
static_assert(offsetof(UFortHoagieVehicle, ShutdownTimer) == 8888, "Offset mismatch for UFortHoagieVehicle::ShutdownTimer");
static_assert(offsetof(UFortHoagieVehicle, FoliageDestructionTimer) == 8892, "Offset mismatch for UFortHoagieVehicle::FoliageDestructionTimer");
static_assert(offsetof(UFortHoagieVehicle, CrashingScrapingTimer) == 8896, "Offset mismatch for UFortHoagieVehicle::CrashingScrapingTimer");
static_assert(offsetof(UFortHoagieVehicle, CrashingNotMovingTimer) == 8900, "Offset mismatch for UFortHoagieVehicle::CrashingNotMovingTimer");
static_assert(offsetof(UFortHoagieVehicle, bCanSleep) == 8904, "Offset mismatch for UFortHoagieVehicle::bCanSleep");
static_assert(offsetof(UFortHoagieVehicle, bHasAppliedCrashDamage) == 8905, "Offset mismatch for UFortHoagieVehicle::bHasAppliedCrashDamage");
static_assert(offsetof(UFortHoagieVehicle, bOrientedForLanding) == 8906, "Offset mismatch for UFortHoagieVehicle::bOrientedForLanding");
static_assert(offsetof(UFortHoagieVehicle, bForceNegativeLift) == 8907, "Offset mismatch for UFortHoagieVehicle::bForceNegativeLift");
static_assert(offsetof(UFortHoagieVehicle, AltimeterTraceTimer) == 8908, "Offset mismatch for UFortHoagieVehicle::AltimeterTraceTimer");
static_assert(offsetof(UFortHoagieVehicle, RotorDamageTimer) == 8912, "Offset mismatch for UFortHoagieVehicle::RotorDamageTimer");
static_assert(offsetof(UFortHoagieVehicle, LastRotorImpulseTime) == 8916, "Offset mismatch for UFortHoagieVehicle::LastRotorImpulseTime");
static_assert(offsetof(UFortHoagieVehicle, CriticalExplodeTimer) == 8920, "Offset mismatch for UFortHoagieVehicle::CriticalExplodeTimer");
static_assert(offsetof(UFortHoagieVehicle, bCriticalExplosionPlayed) == 8924, "Offset mismatch for UFortHoagieVehicle::bCriticalExplosionPlayed");
static_assert(offsetof(UFortHoagieVehicle, TimeWhileCritical) == 8928, "Offset mismatch for UFortHoagieVehicle::TimeWhileCritical");
static_assert(offsetof(UFortHoagieVehicle, TimeWhileLanding) == 8932, "Offset mismatch for UFortHoagieVehicle::TimeWhileLanding");
static_assert(offsetof(UFortHoagieVehicle, LiftFromOverrideButton) == 8936, "Offset mismatch for UFortHoagieVehicle::LiftFromOverrideButton");
static_assert(offsetof(UFortHoagieVehicle, BoostDirection) == 8944, "Offset mismatch for UFortHoagieVehicle::BoostDirection");
static_assert(offsetof(UFortHoagieVehicle, LastRotorSweepDirection) == 8968, "Offset mismatch for UFortHoagieVehicle::LastRotorSweepDirection");
static_assert(offsetof(UFortHoagieVehicle, AltimeterTraceResult) == 8992, "Offset mismatch for UFortHoagieVehicle::AltimeterTraceResult");
static_assert(offsetof(UFortHoagieVehicle, HoagieStateRep) == 9240, "Offset mismatch for UFortHoagieVehicle::HoagieStateRep");
static_assert(offsetof(UFortHoagieVehicle, CurrentHoagieState) == 9244, "Offset mismatch for UFortHoagieVehicle::CurrentHoagieState");
static_assert(offsetof(UFortHoagieVehicle, CurrentRotorSpeed) == 9248, "Offset mismatch for UFortHoagieVehicle::CurrentRotorSpeed");
static_assert(offsetof(UFortHoagieVehicle, CurrentRotorAngle) == 9252, "Offset mismatch for UFortHoagieVehicle::CurrentRotorAngle");
static_assert(offsetof(UFortHoagieVehicle, RotorImpactTraceAngle) == 9256, "Offset mismatch for UFortHoagieVehicle::RotorImpactTraceAngle");
static_assert(offsetof(UFortHoagieVehicle, LiftInputs) == 9260, "Offset mismatch for UFortHoagieVehicle::LiftInputs");
static_assert(offsetof(UFortHoagieVehicle, RotorHits) == 9272, "Offset mismatch for UFortHoagieVehicle::RotorHits");
static_assert(offsetof(UFortHoagieVehicle, CachedSeatCollision) == 9288, "Offset mismatch for UFortHoagieVehicle::CachedSeatCollision");
static_assert(offsetof(UFortHoagieVehicle, RotorHitLinearImpulse) == 9304, "Offset mismatch for UFortHoagieVehicle::RotorHitLinearImpulse");
static_assert(offsetof(UFortHoagieVehicle, RotorHitAngularImpulse) == 9328, "Offset mismatch for UFortHoagieVehicle::RotorHitAngularImpulse");
static_assert(offsetof(UFortHoagieVehicle, HoagieIdleFX_Native) == 9352, "Offset mismatch for UFortHoagieVehicle::HoagieIdleFX_Native");
static_assert(offsetof(UFortHoagieVehicle, DamageFX_Native) == 9360, "Offset mismatch for UFortHoagieVehicle::DamageFX_Native");
static_assert(offsetof(UFortHoagieVehicle, RotorWashFX_Native) == 9368, "Offset mismatch for UFortHoagieVehicle::RotorWashFX_Native");
static_assert(offsetof(UFortHoagieVehicle, HoagieAnimBP_Native) == 9376, "Offset mismatch for UFortHoagieVehicle::HoagieAnimBP_Native");
static_assert(offsetof(UFortHoagieVehicle, RotorWashComponent) == 9384, "Offset mismatch for UFortHoagieVehicle::RotorWashComponent");
static_assert(offsetof(UFortHoagieVehicle, AltimeterTraceSocketName) == 9392, "Offset mismatch for UFortHoagieVehicle::AltimeterTraceSocketName");
static_assert(offsetof(UFortHoagieVehicle, RotorDamageTraceSocketName) == 9396, "Offset mismatch for UFortHoagieVehicle::RotorDamageTraceSocketName");
static_assert(offsetof(UFortHoagieVehicle, MainRotorCritSocketName) == 9400, "Offset mismatch for UFortHoagieVehicle::MainRotorCritSocketName");
static_assert(offsetof(UFortHoagieVehicle, TailRotorCritSocketName) == 9404, "Offset mismatch for UFortHoagieVehicle::TailRotorCritSocketName");
static_assert(offsetof(UFortHoagieVehicle, SeatTransition_ToDriver) == 9408, "Offset mismatch for UFortHoagieVehicle::SeatTransition_ToDriver");
static_assert(offsetof(UFortHoagieVehicle, SeatTransition_ToPassenger) == 9416, "Offset mismatch for UFortHoagieVehicle::SeatTransition_ToPassenger");
static_assert(offsetof(UFortHoagieVehicle, RotorTraceProfile) == 9424, "Offset mismatch for UFortHoagieVehicle::RotorTraceProfile");
static_assert(offsetof(UFortHoagieVehicle, FoliageOverlapsBoxTag) == 9428, "Offset mismatch for UFortHoagieVehicle::FoliageOverlapsBoxTag");
static_assert(offsetof(UFortHoagieVehicle, ControlState) == 9432, "Offset mismatch for UFortHoagieVehicle::ControlState");
static_assert(offsetof(UFortHoagieVehicle, CurrentViewDistanceScale) == 9480, "Offset mismatch for UFortHoagieVehicle::CurrentViewDistanceScale");
static_assert(offsetof(UFortHoagieVehicle, CurrentHLODDistanceOverrideScale) == 9484, "Offset mismatch for UFortHoagieVehicle::CurrentHLODDistanceOverrideScale");
static_assert(offsetof(UFortHoagieVehicle, CurrentHLODMaxDrawDistanceScale) == 9488, "Offset mismatch for UFortHoagieVehicle::CurrentHLODMaxDrawDistanceScale");
static_assert(offsetof(UFortHoagieVehicle, CachedDeathEffectInfo) == 9504, "Offset mismatch for UFortHoagieVehicle::CachedDeathEffectInfo");

// /Script/HoagieRuntime.FortHoagieVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortHoagieVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t EngineRotation[0x18]; // 0x0630 (Size: 0x18, Type: StructProperty)
    std::uint8_t MainRotorRotation[0x18]; // 0x0648 (Size: 0x18, Type: StructProperty)
    std::uint8_t TailRotorRotaton[0x18]; // 0x0660 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoosterFanRotation[0x18]; // 0x0678 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoostCardinalDirection; // 0x0690 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1B]; // 0x0691
    float EngineRotationInterpSpeed; // 0x06AC (Size: 0x4, Type: FloatProperty)
    float EngineRotationDuringBoostInterpSpeed; // 0x06B0 (Size: 0x4, Type: FloatProperty)
    float EngineFlipSpeedThreshold; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    float BoostDirectionDeadzone; // 0x06B8 (Size: 0x4, Type: FloatProperty)
    float EngineFlipDeadzone; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float DriverRoll; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    float DriverYaw; // 0x06C4 (Size: 0x4, Type: FloatProperty)
    float VerticalSpeed; // 0x06C8 (Size: 0x4, Type: FloatProperty)
    float FwdSpeed; // 0x06CC (Size: 0x4, Type: FloatProperty)
    float LocalBoostDirection; // 0x06D0 (Size: 0x4, Type: FloatProperty)
    float YawBlendSpaceInput; // 0x06D4 (Size: 0x4, Type: FloatProperty)
    float NormalizedAcceleration; // 0x06D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x1]; // 0x06DC
    std::uint8_t bShouldHideBlades; // 0x06DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostOnCD; // 0x06DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostReady; // 0x06DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingForward; // 0x06E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReversing; // 0x06E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMovingAnyDirection; // 0x06E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x06E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldReverse; // 0x06E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldGoBackToIdle; // 0x06E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplyBoostAdditive; // 0x06E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEngineShuttingOff; // 0x06E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_Default_ReverseStart; // 0x06E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransition_BoostLoop_Reverse; // 0x06E9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotation) == 1584, "Offset mismatch for UFortHoagieVehicleAnimInstance::EngineRotation");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, MainRotorRotation) == 1608, "Offset mismatch for UFortHoagieVehicleAnimInstance::MainRotorRotation");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, TailRotorRotaton) == 1632, "Offset mismatch for UFortHoagieVehicleAnimInstance::TailRotorRotaton");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoosterFanRotation) == 1656, "Offset mismatch for UFortHoagieVehicleAnimInstance::BoosterFanRotation");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoostCardinalDirection) == 1680, "Offset mismatch for UFortHoagieVehicleAnimInstance::BoostCardinalDirection");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotationInterpSpeed) == 1708, "Offset mismatch for UFortHoagieVehicleAnimInstance::EngineRotationInterpSpeed");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineRotationDuringBoostInterpSpeed) == 1712, "Offset mismatch for UFortHoagieVehicleAnimInstance::EngineRotationDuringBoostInterpSpeed");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineFlipSpeedThreshold) == 1716, "Offset mismatch for UFortHoagieVehicleAnimInstance::EngineFlipSpeedThreshold");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, BoostDirectionDeadzone) == 1720, "Offset mismatch for UFortHoagieVehicleAnimInstance::BoostDirectionDeadzone");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, EngineFlipDeadzone) == 1724, "Offset mismatch for UFortHoagieVehicleAnimInstance::EngineFlipDeadzone");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, DriverRoll) == 1728, "Offset mismatch for UFortHoagieVehicleAnimInstance::DriverRoll");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, DriverYaw) == 1732, "Offset mismatch for UFortHoagieVehicleAnimInstance::DriverYaw");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, VerticalSpeed) == 1736, "Offset mismatch for UFortHoagieVehicleAnimInstance::VerticalSpeed");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, FwdSpeed) == 1740, "Offset mismatch for UFortHoagieVehicleAnimInstance::FwdSpeed");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, LocalBoostDirection) == 1744, "Offset mismatch for UFortHoagieVehicleAnimInstance::LocalBoostDirection");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, YawBlendSpaceInput) == 1748, "Offset mismatch for UFortHoagieVehicleAnimInstance::YawBlendSpaceInput");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, NormalizedAcceleration) == 1752, "Offset mismatch for UFortHoagieVehicleAnimInstance::NormalizedAcceleration");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldHideBlades) == 1757, "Offset mismatch for UFortHoagieVehicleAnimInstance::bShouldHideBlades");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoostOnCD) == 1758, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsBoostOnCD");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoostReady) == 1759, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsBoostReady");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsMovingForward) == 1760, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsMovingForward");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsReversing) == 1761, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsReversing");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsMovingAnyDirection) == 1762, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsMovingAnyDirection");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsBoosting) == 1763, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsBoosting");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldReverse) == 1764, "Offset mismatch for UFortHoagieVehicleAnimInstance::bShouldReverse");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldGoBackToIdle) == 1765, "Offset mismatch for UFortHoagieVehicleAnimInstance::bShouldGoBackToIdle");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bShouldApplyBoostAdditive) == 1766, "Offset mismatch for UFortHoagieVehicleAnimInstance::bShouldApplyBoostAdditive");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bIsEngineShuttingOff) == 1767, "Offset mismatch for UFortHoagieVehicleAnimInstance::bIsEngineShuttingOff");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bTransition_Default_ReverseStart) == 1768, "Offset mismatch for UFortHoagieVehicleAnimInstance::bTransition_Default_ReverseStart");
static_assert(offsetof(UFortHoagieVehicleAnimInstance, bTransition_BoostLoop_Reverse) == 1769, "Offset mismatch for UFortHoagieVehicleAnimInstance::bTransition_BoostLoop_Reverse");

// /Script/HoagieRuntime.FortHoagieVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortHoagieVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    float StrafeForce; // 0x0990 (Size: 0x4, Type: FloatProperty)
    float StrafeForceMin; // 0x0994 (Size: 0x4, Type: FloatProperty)
    float MaxStrafeSpeedKmh; // 0x0998 (Size: 0x4, Type: FloatProperty)
    float StrafeTooFastBrakeForce; // 0x099C (Size: 0x4, Type: FloatProperty)
    float LandedBrakeForce; // 0x09A0 (Size: 0x4, Type: FloatProperty)
    float LiftForce; // 0x09A4 (Size: 0x4, Type: FloatProperty)
    float MaxLiftSpeedKmh; // 0x09A8 (Size: 0x4, Type: FloatProperty)
    float LiftTooFastBrakeForce; // 0x09AC (Size: 0x4, Type: FloatProperty)
    float LateralDragCoefficient; // 0x09B0 (Size: 0x4, Type: FloatProperty)
    float LateralDragCoefficient2; // 0x09B4 (Size: 0x4, Type: FloatProperty)
    float LiftDragCoefficient; // 0x09B8 (Size: 0x4, Type: FloatProperty)
    float LiftDragCoefficient2; // 0x09BC (Size: 0x4, Type: FloatProperty)
    float MaxPitchForCameraYaw; // 0x09C0 (Size: 0x4, Type: FloatProperty)
    float MaxCameraYawAngle; // 0x09C4 (Size: 0x4, Type: FloatProperty)
    float CameraYawStiff; // 0x09C8 (Size: 0x4, Type: FloatProperty)
    float CameraYawDamp; // 0x09CC (Size: 0x4, Type: FloatProperty)
    float CameraYawStrength; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    float UprightStiff; // 0x09D4 (Size: 0x4, Type: FloatProperty)
    float UprightDamp; // 0x09D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseVehiclePivotForCameraPitch; // 0x09DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x09DD
    float ThrustTorqueAnglePercent; // 0x09E0 (Size: 0x4, Type: FloatProperty)
    float BoostThrustTorqueAnglePercent; // 0x09E4 (Size: 0x4, Type: FloatProperty)
    float ThrustTorqueStiff; // 0x09E8 (Size: 0x4, Type: FloatProperty)
    float ThrustTorqueDamp; // 0x09EC (Size: 0x4, Type: FloatProperty)
    float ThrustTorqueMaxAccel; // 0x09F0 (Size: 0x4, Type: FloatProperty)
    float ThrustTorque; // 0x09F4 (Size: 0x4, Type: FloatProperty)
    float YawTorque; // 0x09F8 (Size: 0x4, Type: FloatProperty)
    float YawTorqueDampingSpeed; // 0x09FC (Size: 0x4, Type: FloatProperty)
    float BoostForce; // 0x0A00 (Size: 0x4, Type: FloatProperty)
    float BoostMaxSpeedKmh; // 0x0A04 (Size: 0x4, Type: FloatProperty)
    float BoostDuration; // 0x0A08 (Size: 0x4, Type: FloatProperty)
    float BoostCooldown; // 0x0A0C (Size: 0x4, Type: FloatProperty)
    float BoostTorqueStiff; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float BoostTorqueDamp; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float AfterBoostBrakingForce; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float AfterBoostBrakingDuration; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    float AfterBoostBrakingMinSpeed; // 0x0A20 (Size: 0x4, Type: FloatProperty)
    float PitchAngleRequiredForFullThrust; // 0x0A24 (Size: 0x4, Type: FloatProperty)
    float DistanceToGroundForLanding; // 0x0A28 (Size: 0x4, Type: FloatProperty)
    float StartupDelay; // 0x0A2C (Size: 0x4, Type: FloatProperty)
    float LandingSequenceDelay; // 0x0A30 (Size: 0x4, Type: FloatProperty)
    float LandingSequenceDelayWithPassengers; // 0x0A34 (Size: 0x4, Type: FloatProperty)
    float RotorsRadius; // 0x0A38 (Size: 0x4, Type: FloatProperty)
    float RotorBoxHalfExtantX; // 0x0A3C (Size: 0x4, Type: FloatProperty)
    float RotorBoxHalfExtantY; // 0x0A40 (Size: 0x4, Type: FloatProperty)
    float RotorsRadiusInner; // 0x0A44 (Size: 0x4, Type: FloatProperty)
    float NoDriverBrakeForce; // 0x0A48 (Size: 0x4, Type: FloatProperty)
    float TimeBetweenRotorDamageTicks; // 0x0A4C (Size: 0x4, Type: FloatProperty)
    float AutoLandingForce; // 0x0A50 (Size: 0x4, Type: FloatProperty)
    float RotorDamageBoxSweepLength; // 0x0A54 (Size: 0x4, Type: FloatProperty)
    float CriticalStateLiftForce; // 0x0A58 (Size: 0x4, Type: FloatProperty)
    float IdleRotationMultiplier; // 0x0A5C (Size: 0x4, Type: FloatProperty)
    float LiftPitchDegrees; // 0x0A60 (Size: 0x4, Type: FloatProperty)
    float MinAltitudeForIdleNoise; // 0x0A64 (Size: 0x4, Type: FloatProperty)
    float DefaultLinearDamp; // 0x0A68 (Size: 0x4, Type: FloatProperty)
    float DefaultAngularDamp; // 0x0A6C (Size: 0x4, Type: FloatProperty)
    float LandingLinearDamp; // 0x0A70 (Size: 0x4, Type: FloatProperty)
    float LandingAngularDamp; // 0x0A74 (Size: 0x4, Type: FloatProperty)
    float LandingLiftAlpha; // 0x0A78 (Size: 0x4, Type: FloatProperty)
    float CriticalStateThrustMultiplier; // 0x0A7C (Size: 0x4, Type: FloatProperty)
    float BodyUpDotThresholdForLanding; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::int32_t CriticalHealthThreshold; // 0x0A84 (Size: 0x4, Type: IntProperty)
    float DamagePerImpulseWhileCritical; // 0x0A88 (Size: 0x4, Type: FloatProperty)
    float RotorImpulseLinear; // 0x0A8C (Size: 0x4, Type: FloatProperty)
    float RotorImpulseAngular; // 0x0A90 (Size: 0x4, Type: FloatProperty)
    float RotorImpulseCooldown; // 0x0A94 (Size: 0x4, Type: FloatProperty)
    float StartupLift; // 0x0A98 (Size: 0x4, Type: FloatProperty)
    float StartupLiftTime; // 0x0A9C (Size: 0x4, Type: FloatProperty)
    float MaxAltitude; // 0x0AA0 (Size: 0x4, Type: FloatProperty)
    float AltitudeForSpinning; // 0x0AA4 (Size: 0x4, Type: FloatProperty)
    float RotorMaxSpeed; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float RotorAccel; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    float RotorDecel; // 0x0AB0 (Size: 0x4, Type: FloatProperty)
    float ExplodeRotorDecel; // 0x0AB4 (Size: 0x4, Type: FloatProperty)
    float MinRotorSpeedForSkippingStartup; // 0x0AB8 (Size: 0x4, Type: FloatProperty)
    float RotorSpeedForStartupLift; // 0x0ABC (Size: 0x4, Type: FloatProperty)
    float CriticalLiftForceDecay; // 0x0AC0 (Size: 0x4, Type: FloatProperty)
    float CriticalYawTorqueMin; // 0x0AC4 (Size: 0x4, Type: FloatProperty)
    float CriticalYawTorqueMax; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    float CriticalYawTorqueRampDuration; // 0x0ACC (Size: 0x4, Type: FloatProperty)
    float RotorTraceRotationSpeed; // 0x0AD0 (Size: 0x4, Type: FloatProperty)
    float RotorTraceBoxSize; // 0x0AD4 (Size: 0x4, Type: FloatProperty)
    float RotorTraceBoxHeight; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
    float MaxCriticalFallForce; // 0x0ADC (Size: 0x4, Type: FloatProperty)
    float BoostFOV; // 0x0AE0 (Size: 0x4, Type: FloatProperty)
    float GentleCrashTimeToExplode; // 0x0AE4 (Size: 0x4, Type: FloatProperty)
    float CriticalTimeForGentleCrash; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    float AutoLandingYawTorque; // 0x0AEC (Size: 0x4, Type: FloatProperty)
    float MinHeightForAutoLandingYawTorque; // 0x0AF0 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForScrapingBottom; // 0x0AF4 (Size: 0x4, Type: FloatProperty)
    float FallDamageHeightBuffer; // 0x0AF8 (Size: 0x4, Type: FloatProperty)
    float TimeBetweenRotorPlayerDamage; // 0x0AFC (Size: 0x4, Type: FloatProperty)
    float RotorMoveSpeedRequiredToUpdateTraceDirSqr; // 0x0B00 (Size: 0x4, Type: FloatProperty)
    float FoliageTraceRate; // 0x0B04 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotorWashTicksPerFrame; // 0x0B08 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B09
    float RotorWashSpeed; // 0x0B0C (Size: 0x4, Type: FloatProperty)
    float CriticalHitRadius; // 0x0B10 (Size: 0x4, Type: FloatProperty)
    float AngleNormalUpForLockMovement; // 0x0B14 (Size: 0x4, Type: FloatProperty)
    float MaxAutoLandingTime; // 0x0B18 (Size: 0x4, Type: FloatProperty)
    float SpeedThresholdForCrashed; // 0x0B1C (Size: 0x4, Type: FloatProperty)
    float CritMultiplier; // 0x0B20 (Size: 0x4, Type: FloatProperty)
    float AltitudeForSprings; // 0x0B24 (Size: 0x4, Type: FloatProperty)
    float MaxCrashingTime; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    float MaxCrashingScrapingTime; // 0x0B2C (Size: 0x4, Type: FloatProperty)
    float MaxCrashingTimeSpentNotMoving; // 0x0B30 (Size: 0x4, Type: FloatProperty)
    float LandscapeRotorImpulseMag; // 0x0B34 (Size: 0x4, Type: FloatProperty)
    float HealthThresholdForLandscapeRotorImpulse; // 0x0B38 (Size: 0x4, Type: FloatProperty)
    float MaxHeightBuffer; // 0x0B3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bImpulseOnOuterRotorHitLandscape; // 0x0B40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipRotorImpulses; // 0x0B41 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0B42
    std::uint8_t FoliageTraceBoxSize[0x18]; // 0x0B48 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterBoxSize[0x18]; // 0x0B60 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaterBoxOffset[0x18]; // 0x0B78 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotorOffsetFromActorLocationOnServer[0x18]; // 0x0B90 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSkipContactRotations; // 0x0BA8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0BA9
    std::uint8_t MaxAutoLandHeightWhenOutOfFuel[0x28]; // 0x0BB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanBeBaseForCharacter; // 0x0BD8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0BD9
    float RoughnessMinDamagePercent; // 0x0BDC (Size: 0x4, Type: FloatProperty)
    float RoughnessMaxDamagePercent; // 0x0BE0 (Size: 0x4, Type: FloatProperty)
    float MinRoughnessFromDamage; // 0x0BE4 (Size: 0x4, Type: FloatProperty)
    float MaxRoughnessFromDamage; // 0x0BE8 (Size: 0x4, Type: FloatProperty)
    float RotorWashForceCutoffMargin; // 0x0BEC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeForce) == 2448, "Offset mismatch for UFortHoagieVehicleConfigs::StrafeForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeForceMin) == 2452, "Offset mismatch for UFortHoagieVehicleConfigs::StrafeForceMin");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxStrafeSpeedKmh) == 2456, "Offset mismatch for UFortHoagieVehicleConfigs::MaxStrafeSpeedKmh");
static_assert(offsetof(UFortHoagieVehicleConfigs, StrafeTooFastBrakeForce) == 2460, "Offset mismatch for UFortHoagieVehicleConfigs::StrafeTooFastBrakeForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandedBrakeForce) == 2464, "Offset mismatch for UFortHoagieVehicleConfigs::LandedBrakeForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftForce) == 2468, "Offset mismatch for UFortHoagieVehicleConfigs::LiftForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxLiftSpeedKmh) == 2472, "Offset mismatch for UFortHoagieVehicleConfigs::MaxLiftSpeedKmh");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftTooFastBrakeForce) == 2476, "Offset mismatch for UFortHoagieVehicleConfigs::LiftTooFastBrakeForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, LateralDragCoefficient) == 2480, "Offset mismatch for UFortHoagieVehicleConfigs::LateralDragCoefficient");
static_assert(offsetof(UFortHoagieVehicleConfigs, LateralDragCoefficient2) == 2484, "Offset mismatch for UFortHoagieVehicleConfigs::LateralDragCoefficient2");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftDragCoefficient) == 2488, "Offset mismatch for UFortHoagieVehicleConfigs::LiftDragCoefficient");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftDragCoefficient2) == 2492, "Offset mismatch for UFortHoagieVehicleConfigs::LiftDragCoefficient2");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxPitchForCameraYaw) == 2496, "Offset mismatch for UFortHoagieVehicleConfigs::MaxPitchForCameraYaw");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCameraYawAngle) == 2500, "Offset mismatch for UFortHoagieVehicleConfigs::MaxCameraYawAngle");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawStiff) == 2504, "Offset mismatch for UFortHoagieVehicleConfigs::CameraYawStiff");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawDamp) == 2508, "Offset mismatch for UFortHoagieVehicleConfigs::CameraYawDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, CameraYawStrength) == 2512, "Offset mismatch for UFortHoagieVehicleConfigs::CameraYawStrength");
static_assert(offsetof(UFortHoagieVehicleConfigs, UprightStiff) == 2516, "Offset mismatch for UFortHoagieVehicleConfigs::UprightStiff");
static_assert(offsetof(UFortHoagieVehicleConfigs, UprightDamp) == 2520, "Offset mismatch for UFortHoagieVehicleConfigs::UprightDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, bUseVehiclePivotForCameraPitch) == 2524, "Offset mismatch for UFortHoagieVehicleConfigs::bUseVehiclePivotForCameraPitch");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueAnglePercent) == 2528, "Offset mismatch for UFortHoagieVehicleConfigs::ThrustTorqueAnglePercent");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostThrustTorqueAnglePercent) == 2532, "Offset mismatch for UFortHoagieVehicleConfigs::BoostThrustTorqueAnglePercent");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueStiff) == 2536, "Offset mismatch for UFortHoagieVehicleConfigs::ThrustTorqueStiff");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueDamp) == 2540, "Offset mismatch for UFortHoagieVehicleConfigs::ThrustTorqueDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorqueMaxAccel) == 2544, "Offset mismatch for UFortHoagieVehicleConfigs::ThrustTorqueMaxAccel");
static_assert(offsetof(UFortHoagieVehicleConfigs, ThrustTorque) == 2548, "Offset mismatch for UFortHoagieVehicleConfigs::ThrustTorque");
static_assert(offsetof(UFortHoagieVehicleConfigs, YawTorque) == 2552, "Offset mismatch for UFortHoagieVehicleConfigs::YawTorque");
static_assert(offsetof(UFortHoagieVehicleConfigs, YawTorqueDampingSpeed) == 2556, "Offset mismatch for UFortHoagieVehicleConfigs::YawTorqueDampingSpeed");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostForce) == 2560, "Offset mismatch for UFortHoagieVehicleConfigs::BoostForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostMaxSpeedKmh) == 2564, "Offset mismatch for UFortHoagieVehicleConfigs::BoostMaxSpeedKmh");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostDuration) == 2568, "Offset mismatch for UFortHoagieVehicleConfigs::BoostDuration");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostCooldown) == 2572, "Offset mismatch for UFortHoagieVehicleConfigs::BoostCooldown");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostTorqueStiff) == 2576, "Offset mismatch for UFortHoagieVehicleConfigs::BoostTorqueStiff");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostTorqueDamp) == 2580, "Offset mismatch for UFortHoagieVehicleConfigs::BoostTorqueDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingForce) == 2584, "Offset mismatch for UFortHoagieVehicleConfigs::AfterBoostBrakingForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingDuration) == 2588, "Offset mismatch for UFortHoagieVehicleConfigs::AfterBoostBrakingDuration");
static_assert(offsetof(UFortHoagieVehicleConfigs, AfterBoostBrakingMinSpeed) == 2592, "Offset mismatch for UFortHoagieVehicleConfigs::AfterBoostBrakingMinSpeed");
static_assert(offsetof(UFortHoagieVehicleConfigs, PitchAngleRequiredForFullThrust) == 2596, "Offset mismatch for UFortHoagieVehicleConfigs::PitchAngleRequiredForFullThrust");
static_assert(offsetof(UFortHoagieVehicleConfigs, DistanceToGroundForLanding) == 2600, "Offset mismatch for UFortHoagieVehicleConfigs::DistanceToGroundForLanding");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupDelay) == 2604, "Offset mismatch for UFortHoagieVehicleConfigs::StartupDelay");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingSequenceDelay) == 2608, "Offset mismatch for UFortHoagieVehicleConfigs::LandingSequenceDelay");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingSequenceDelayWithPassengers) == 2612, "Offset mismatch for UFortHoagieVehicleConfigs::LandingSequenceDelayWithPassengers");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorsRadius) == 2616, "Offset mismatch for UFortHoagieVehicleConfigs::RotorsRadius");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorBoxHalfExtantX) == 2620, "Offset mismatch for UFortHoagieVehicleConfigs::RotorBoxHalfExtantX");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorBoxHalfExtantY) == 2624, "Offset mismatch for UFortHoagieVehicleConfigs::RotorBoxHalfExtantY");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorsRadiusInner) == 2628, "Offset mismatch for UFortHoagieVehicleConfigs::RotorsRadiusInner");
static_assert(offsetof(UFortHoagieVehicleConfigs, NoDriverBrakeForce) == 2632, "Offset mismatch for UFortHoagieVehicleConfigs::NoDriverBrakeForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, TimeBetweenRotorDamageTicks) == 2636, "Offset mismatch for UFortHoagieVehicleConfigs::TimeBetweenRotorDamageTicks");
static_assert(offsetof(UFortHoagieVehicleConfigs, AutoLandingForce) == 2640, "Offset mismatch for UFortHoagieVehicleConfigs::AutoLandingForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorDamageBoxSweepLength) == 2644, "Offset mismatch for UFortHoagieVehicleConfigs::RotorDamageBoxSweepLength");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalStateLiftForce) == 2648, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalStateLiftForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, IdleRotationMultiplier) == 2652, "Offset mismatch for UFortHoagieVehicleConfigs::IdleRotationMultiplier");
static_assert(offsetof(UFortHoagieVehicleConfigs, LiftPitchDegrees) == 2656, "Offset mismatch for UFortHoagieVehicleConfigs::LiftPitchDegrees");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinAltitudeForIdleNoise) == 2660, "Offset mismatch for UFortHoagieVehicleConfigs::MinAltitudeForIdleNoise");
static_assert(offsetof(UFortHoagieVehicleConfigs, DefaultLinearDamp) == 2664, "Offset mismatch for UFortHoagieVehicleConfigs::DefaultLinearDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, DefaultAngularDamp) == 2668, "Offset mismatch for UFortHoagieVehicleConfigs::DefaultAngularDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingLinearDamp) == 2672, "Offset mismatch for UFortHoagieVehicleConfigs::LandingLinearDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingAngularDamp) == 2676, "Offset mismatch for UFortHoagieVehicleConfigs::LandingAngularDamp");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandingLiftAlpha) == 2680, "Offset mismatch for UFortHoagieVehicleConfigs::LandingLiftAlpha");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalStateThrustMultiplier) == 2684, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalStateThrustMultiplier");
static_assert(offsetof(UFortHoagieVehicleConfigs, BodyUpDotThresholdForLanding) == 2688, "Offset mismatch for UFortHoagieVehicleConfigs::BodyUpDotThresholdForLanding");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalHealthThreshold) == 2692, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalHealthThreshold");
static_assert(offsetof(UFortHoagieVehicleConfigs, DamagePerImpulseWhileCritical) == 2696, "Offset mismatch for UFortHoagieVehicleConfigs::DamagePerImpulseWhileCritical");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseLinear) == 2700, "Offset mismatch for UFortHoagieVehicleConfigs::RotorImpulseLinear");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseAngular) == 2704, "Offset mismatch for UFortHoagieVehicleConfigs::RotorImpulseAngular");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorImpulseCooldown) == 2708, "Offset mismatch for UFortHoagieVehicleConfigs::RotorImpulseCooldown");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupLift) == 2712, "Offset mismatch for UFortHoagieVehicleConfigs::StartupLift");
static_assert(offsetof(UFortHoagieVehicleConfigs, StartupLiftTime) == 2716, "Offset mismatch for UFortHoagieVehicleConfigs::StartupLiftTime");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAltitude) == 2720, "Offset mismatch for UFortHoagieVehicleConfigs::MaxAltitude");
static_assert(offsetof(UFortHoagieVehicleConfigs, AltitudeForSpinning) == 2724, "Offset mismatch for UFortHoagieVehicleConfigs::AltitudeForSpinning");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorMaxSpeed) == 2728, "Offset mismatch for UFortHoagieVehicleConfigs::RotorMaxSpeed");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorAccel) == 2732, "Offset mismatch for UFortHoagieVehicleConfigs::RotorAccel");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorDecel) == 2736, "Offset mismatch for UFortHoagieVehicleConfigs::RotorDecel");
static_assert(offsetof(UFortHoagieVehicleConfigs, ExplodeRotorDecel) == 2740, "Offset mismatch for UFortHoagieVehicleConfigs::ExplodeRotorDecel");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinRotorSpeedForSkippingStartup) == 2744, "Offset mismatch for UFortHoagieVehicleConfigs::MinRotorSpeedForSkippingStartup");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorSpeedForStartupLift) == 2748, "Offset mismatch for UFortHoagieVehicleConfigs::RotorSpeedForStartupLift");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalLiftForceDecay) == 2752, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalLiftForceDecay");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueMin) == 2756, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalYawTorqueMin");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueMax) == 2760, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalYawTorqueMax");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalYawTorqueRampDuration) == 2764, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalYawTorqueRampDuration");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceRotationSpeed) == 2768, "Offset mismatch for UFortHoagieVehicleConfigs::RotorTraceRotationSpeed");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceBoxSize) == 2772, "Offset mismatch for UFortHoagieVehicleConfigs::RotorTraceBoxSize");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorTraceBoxHeight) == 2776, "Offset mismatch for UFortHoagieVehicleConfigs::RotorTraceBoxHeight");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCriticalFallForce) == 2780, "Offset mismatch for UFortHoagieVehicleConfigs::MaxCriticalFallForce");
static_assert(offsetof(UFortHoagieVehicleConfigs, BoostFOV) == 2784, "Offset mismatch for UFortHoagieVehicleConfigs::BoostFOV");
static_assert(offsetof(UFortHoagieVehicleConfigs, GentleCrashTimeToExplode) == 2788, "Offset mismatch for UFortHoagieVehicleConfigs::GentleCrashTimeToExplode");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalTimeForGentleCrash) == 2792, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalTimeForGentleCrash");
static_assert(offsetof(UFortHoagieVehicleConfigs, AutoLandingYawTorque) == 2796, "Offset mismatch for UFortHoagieVehicleConfigs::AutoLandingYawTorque");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinHeightForAutoLandingYawTorque) == 2800, "Offset mismatch for UFortHoagieVehicleConfigs::MinHeightForAutoLandingYawTorque");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinSpeedForScrapingBottom) == 2804, "Offset mismatch for UFortHoagieVehicleConfigs::MinSpeedForScrapingBottom");
static_assert(offsetof(UFortHoagieVehicleConfigs, FallDamageHeightBuffer) == 2808, "Offset mismatch for UFortHoagieVehicleConfigs::FallDamageHeightBuffer");
static_assert(offsetof(UFortHoagieVehicleConfigs, TimeBetweenRotorPlayerDamage) == 2812, "Offset mismatch for UFortHoagieVehicleConfigs::TimeBetweenRotorPlayerDamage");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorMoveSpeedRequiredToUpdateTraceDirSqr) == 2816, "Offset mismatch for UFortHoagieVehicleConfigs::RotorMoveSpeedRequiredToUpdateTraceDirSqr");
static_assert(offsetof(UFortHoagieVehicleConfigs, FoliageTraceRate) == 2820, "Offset mismatch for UFortHoagieVehicleConfigs::FoliageTraceRate");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorWashTicksPerFrame) == 2824, "Offset mismatch for UFortHoagieVehicleConfigs::RotorWashTicksPerFrame");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorWashSpeed) == 2828, "Offset mismatch for UFortHoagieVehicleConfigs::RotorWashSpeed");
static_assert(offsetof(UFortHoagieVehicleConfigs, CriticalHitRadius) == 2832, "Offset mismatch for UFortHoagieVehicleConfigs::CriticalHitRadius");
static_assert(offsetof(UFortHoagieVehicleConfigs, AngleNormalUpForLockMovement) == 2836, "Offset mismatch for UFortHoagieVehicleConfigs::AngleNormalUpForLockMovement");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAutoLandingTime) == 2840, "Offset mismatch for UFortHoagieVehicleConfigs::MaxAutoLandingTime");
static_assert(offsetof(UFortHoagieVehicleConfigs, SpeedThresholdForCrashed) == 2844, "Offset mismatch for UFortHoagieVehicleConfigs::SpeedThresholdForCrashed");
static_assert(offsetof(UFortHoagieVehicleConfigs, CritMultiplier) == 2848, "Offset mismatch for UFortHoagieVehicleConfigs::CritMultiplier");
static_assert(offsetof(UFortHoagieVehicleConfigs, AltitudeForSprings) == 2852, "Offset mismatch for UFortHoagieVehicleConfigs::AltitudeForSprings");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingTime) == 2856, "Offset mismatch for UFortHoagieVehicleConfigs::MaxCrashingTime");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingScrapingTime) == 2860, "Offset mismatch for UFortHoagieVehicleConfigs::MaxCrashingScrapingTime");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxCrashingTimeSpentNotMoving) == 2864, "Offset mismatch for UFortHoagieVehicleConfigs::MaxCrashingTimeSpentNotMoving");
static_assert(offsetof(UFortHoagieVehicleConfigs, LandscapeRotorImpulseMag) == 2868, "Offset mismatch for UFortHoagieVehicleConfigs::LandscapeRotorImpulseMag");
static_assert(offsetof(UFortHoagieVehicleConfigs, HealthThresholdForLandscapeRotorImpulse) == 2872, "Offset mismatch for UFortHoagieVehicleConfigs::HealthThresholdForLandscapeRotorImpulse");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxHeightBuffer) == 2876, "Offset mismatch for UFortHoagieVehicleConfigs::MaxHeightBuffer");
static_assert(offsetof(UFortHoagieVehicleConfigs, bImpulseOnOuterRotorHitLandscape) == 2880, "Offset mismatch for UFortHoagieVehicleConfigs::bImpulseOnOuterRotorHitLandscape");
static_assert(offsetof(UFortHoagieVehicleConfigs, bSkipRotorImpulses) == 2881, "Offset mismatch for UFortHoagieVehicleConfigs::bSkipRotorImpulses");
static_assert(offsetof(UFortHoagieVehicleConfigs, FoliageTraceBoxSize) == 2888, "Offset mismatch for UFortHoagieVehicleConfigs::FoliageTraceBoxSize");
static_assert(offsetof(UFortHoagieVehicleConfigs, WaterBoxSize) == 2912, "Offset mismatch for UFortHoagieVehicleConfigs::WaterBoxSize");
static_assert(offsetof(UFortHoagieVehicleConfigs, WaterBoxOffset) == 2936, "Offset mismatch for UFortHoagieVehicleConfigs::WaterBoxOffset");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorOffsetFromActorLocationOnServer) == 2960, "Offset mismatch for UFortHoagieVehicleConfigs::RotorOffsetFromActorLocationOnServer");
static_assert(offsetof(UFortHoagieVehicleConfigs, bSkipContactRotations) == 2984, "Offset mismatch for UFortHoagieVehicleConfigs::bSkipContactRotations");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxAutoLandHeightWhenOutOfFuel) == 2992, "Offset mismatch for UFortHoagieVehicleConfigs::MaxAutoLandHeightWhenOutOfFuel");
static_assert(offsetof(UFortHoagieVehicleConfigs, bCanBeBaseForCharacter) == 3032, "Offset mismatch for UFortHoagieVehicleConfigs::bCanBeBaseForCharacter");
static_assert(offsetof(UFortHoagieVehicleConfigs, RoughnessMinDamagePercent) == 3036, "Offset mismatch for UFortHoagieVehicleConfigs::RoughnessMinDamagePercent");
static_assert(offsetof(UFortHoagieVehicleConfigs, RoughnessMaxDamagePercent) == 3040, "Offset mismatch for UFortHoagieVehicleConfigs::RoughnessMaxDamagePercent");
static_assert(offsetof(UFortHoagieVehicleConfigs, MinRoughnessFromDamage) == 3044, "Offset mismatch for UFortHoagieVehicleConfigs::MinRoughnessFromDamage");
static_assert(offsetof(UFortHoagieVehicleConfigs, MaxRoughnessFromDamage) == 3048, "Offset mismatch for UFortHoagieVehicleConfigs::MaxRoughnessFromDamage");
static_assert(offsetof(UFortHoagieVehicleConfigs, RotorWashForceCutoffMargin) == 3052, "Offset mismatch for UFortHoagieVehicleConfigs::RotorWashForceCutoffMargin");
