/**
 * decamp dumper generated SDK
 * Package: /Script/TankRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TankRuntime.ServerSocketTransformOverride
// Kind: ScriptStruct; super: none
struct FServerSocketTransformOverride
{
public:
    FName SocketName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t PivotOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetFromPivot[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FServerSocketTransformOverride, SocketName) == 0, "Offset mismatch for FServerSocketTransformOverride::SocketName");
static_assert(offsetof(FServerSocketTransformOverride, PivotOffset) == 8, "Offset mismatch for FServerSocketTransformOverride::PivotOffset");
static_assert(offsetof(FServerSocketTransformOverride, OffsetFromPivot) == 32, "Offset mismatch for FServerSocketTransformOverride::OffsetFromPivot");

// /Script/TankRuntime.TankAnimAimingData
// Kind: ScriptStruct; super: none
struct FTankAnimAimingData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TankRuntime.TankAudioUpdateContext
// Kind: ScriptStruct; super: none
struct FTankAudioUpdateContext
{
public:
    std::uint8_t bIsAwake; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float SpeedParamValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LeftTrackPower; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RightTrackPower; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TurningParamValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentGear; // 0x0014 (Size: 0x4, Type: IntProperty)
    float AccelSpeedThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float LastGearChangeTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float AccelWaitTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTurningRight; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurningLeft; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreviousTryMotion; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0027
    float LastForwardSpeed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TimeUntilAccelOneShotFade; // 0x002C (Size: 0x4, Type: FloatProperty)
    float DecelSpeedThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float EngineIdleThreshold; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeaponsMovementThreshold[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t CannonSocketName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t TurretSocketName[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    std::int32_t SurfaceID; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    void* DecelOneShot; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* AccelOneShot; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TurningOneShot; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* TracksLeftAudio; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TracksRightAudio; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTankAudioUpdateContext, bIsAwake) == 0, "Offset mismatch for FTankAudioUpdateContext::bIsAwake");
static_assert(offsetof(FTankAudioUpdateContext, SpeedParamValue) == 4, "Offset mismatch for FTankAudioUpdateContext::SpeedParamValue");
static_assert(offsetof(FTankAudioUpdateContext, LeftTrackPower) == 8, "Offset mismatch for FTankAudioUpdateContext::LeftTrackPower");
static_assert(offsetof(FTankAudioUpdateContext, RightTrackPower) == 12, "Offset mismatch for FTankAudioUpdateContext::RightTrackPower");
static_assert(offsetof(FTankAudioUpdateContext, TurningParamValue) == 16, "Offset mismatch for FTankAudioUpdateContext::TurningParamValue");
static_assert(offsetof(FTankAudioUpdateContext, CurrentGear) == 20, "Offset mismatch for FTankAudioUpdateContext::CurrentGear");
static_assert(offsetof(FTankAudioUpdateContext, AccelSpeedThreshold) == 24, "Offset mismatch for FTankAudioUpdateContext::AccelSpeedThreshold");
static_assert(offsetof(FTankAudioUpdateContext, LastGearChangeTime) == 28, "Offset mismatch for FTankAudioUpdateContext::LastGearChangeTime");
static_assert(offsetof(FTankAudioUpdateContext, AccelWaitTime) == 32, "Offset mismatch for FTankAudioUpdateContext::AccelWaitTime");
static_assert(offsetof(FTankAudioUpdateContext, bTurningRight) == 36, "Offset mismatch for FTankAudioUpdateContext::bTurningRight");
static_assert(offsetof(FTankAudioUpdateContext, bTurningLeft) == 37, "Offset mismatch for FTankAudioUpdateContext::bTurningLeft");
static_assert(offsetof(FTankAudioUpdateContext, bPreviousTryMotion) == 38, "Offset mismatch for FTankAudioUpdateContext::bPreviousTryMotion");
static_assert(offsetof(FTankAudioUpdateContext, LastForwardSpeed) == 40, "Offset mismatch for FTankAudioUpdateContext::LastForwardSpeed");
static_assert(offsetof(FTankAudioUpdateContext, TimeUntilAccelOneShotFade) == 44, "Offset mismatch for FTankAudioUpdateContext::TimeUntilAccelOneShotFade");
static_assert(offsetof(FTankAudioUpdateContext, DecelSpeedThreshold) == 48, "Offset mismatch for FTankAudioUpdateContext::DecelSpeedThreshold");
static_assert(offsetof(FTankAudioUpdateContext, EngineIdleThreshold) == 52, "Offset mismatch for FTankAudioUpdateContext::EngineIdleThreshold");
static_assert(offsetof(FTankAudioUpdateContext, WeaponsMovementThreshold) == 56, "Offset mismatch for FTankAudioUpdateContext::WeaponsMovementThreshold");
static_assert(offsetof(FTankAudioUpdateContext, CannonSocketName) == 72, "Offset mismatch for FTankAudioUpdateContext::CannonSocketName");
static_assert(offsetof(FTankAudioUpdateContext, TurretSocketName) == 76, "Offset mismatch for FTankAudioUpdateContext::TurretSocketName");
static_assert(offsetof(FTankAudioUpdateContext, SurfaceID) == 80, "Offset mismatch for FTankAudioUpdateContext::SurfaceID");
static_assert(offsetof(FTankAudioUpdateContext, DecelOneShot) == 88, "Offset mismatch for FTankAudioUpdateContext::DecelOneShot");
static_assert(offsetof(FTankAudioUpdateContext, AccelOneShot) == 96, "Offset mismatch for FTankAudioUpdateContext::AccelOneShot");
static_assert(offsetof(FTankAudioUpdateContext, TurningOneShot) == 104, "Offset mismatch for FTankAudioUpdateContext::TurningOneShot");
static_assert(offsetof(FTankAudioUpdateContext, TracksLeftAudio) == 112, "Offset mismatch for FTankAudioUpdateContext::TracksLeftAudio");
static_assert(offsetof(FTankAudioUpdateContext, TracksRightAudio) == 120, "Offset mismatch for FTankAudioUpdateContext::TracksRightAudio");

// /Script/TankRuntime.TankWeaponAimingData
// Kind: ScriptStruct; super: none
struct FTankWeaponAimingData
{
public:
    std::int32_t SeatIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAimRotationLerpWithEasing; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t AimRotationLerpSpeed[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimYawRotationEasingCurve[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t AimPitchRotationEasingCurve[0x48]; // 0x0078 (Size: 0x48, Type: StructProperty)
    std::uint8_t AimingMode; // 0x00C0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t AimingCameraToMuzzleDistanceScalar[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimingWhileTargetingCameraToMuzzleDistanceScalar[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AimingPitchAdjust[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTankWeaponAimingData, SeatIndex) == 0, "Offset mismatch for FTankWeaponAimingData::SeatIndex");
static_assert(offsetof(FTankWeaponAimingData, bAimRotationLerpWithEasing) == 4, "Offset mismatch for FTankWeaponAimingData::bAimRotationLerpWithEasing");
static_assert(offsetof(FTankWeaponAimingData, AimRotationLerpSpeed) == 8, "Offset mismatch for FTankWeaponAimingData::AimRotationLerpSpeed");
static_assert(offsetof(FTankWeaponAimingData, AimYawRotationEasingCurve) == 48, "Offset mismatch for FTankWeaponAimingData::AimYawRotationEasingCurve");
static_assert(offsetof(FTankWeaponAimingData, AimPitchRotationEasingCurve) == 120, "Offset mismatch for FTankWeaponAimingData::AimPitchRotationEasingCurve");
static_assert(offsetof(FTankWeaponAimingData, AimingMode) == 192, "Offset mismatch for FTankWeaponAimingData::AimingMode");
static_assert(offsetof(FTankWeaponAimingData, AimingCameraToMuzzleDistanceScalar) == 200, "Offset mismatch for FTankWeaponAimingData::AimingCameraToMuzzleDistanceScalar");
static_assert(offsetof(FTankWeaponAimingData, AimingWhileTargetingCameraToMuzzleDistanceScalar) == 240, "Offset mismatch for FTankWeaponAimingData::AimingWhileTargetingCameraToMuzzleDistanceScalar");
static_assert(offsetof(FTankWeaponAimingData, AimingPitchAdjust) == 280, "Offset mismatch for FTankWeaponAimingData::AimingPitchAdjust");

// /Script/TankRuntime.FortTankAnimFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortTankAnimFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TankRuntime.FortTankVehicle
// Kind: Class; super: FortTreadVehicle
class UFortTankVehicle
{
public:
    std::uint8_t Pad_0000[0x2038]; // 0x0000
    FMulticastInlineDelegate OnTankRepairedDelegate; // 0x2038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName BarrelSocketName; // 0x2048 (Size: 0x8, Type: NameProperty)
    void* BarrelCollision; // 0x2050 (Size: 0x8, Type: ObjectProperty)
    void* UnderVehicleCollision; // 0x2058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SocketOverrideArray; // 0x2060 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SocketTransformOverrideMap; // 0x2070 (Size: 0x10, Type: MapProperty)
    void* CachedSkeletalMeshComponent; // 0x2080 (Size: 0x8, Type: ObjectProperty)
    void* CachedVehicleAudioController; // 0x2088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultServerVisibilityBasedAnimTickOption; // 0x2090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultServerSkeletalMeshTickEnabled; // 0x2091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x2092
    std::uint8_t YawPivotSocketName[0x4]; // 0x2094 (Size: 0x4, Type: NameProperty)
    FName PitchPivotSocketName; // 0x2098 (Size: 0x8, Type: NameProperty)
    void* DriverCameraShakeInstance; // 0x20A0 (Size: 0x8, Type: ObjectProperty)
    void* AcceleratingCameraShakeInstance; // 0x20A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x20B0
    void* CachedNiagaraComponentRoadAndExhaust; // 0x20B8 (Size: 0x8, Type: ObjectProperty)
    FString RoadAndExhaustNiagaraComponentName; // 0x20C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t RoadAndExhaustPeelOutLeftName[0x4]; // 0x20D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustPeelOutRightName[0x4]; // 0x20D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustVehicleSpeedName[0x4]; // 0x20D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustSlideDirectionName[0x4]; // 0x20DC (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustMinSpeedForDust; // 0x20E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustDustColorLerpName[0x4]; // 0x20E4 (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustDustColorLerpOffRoad; // 0x20E8 (Size: 0x4, Type: FloatProperty)
    float RoadAndExhaustDustColorLerpOnRoad; // 0x20EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustDustAlphaMultiplierName[0x4]; // 0x20F0 (Size: 0x4, Type: NameProperty)
    float RoadAndExhaustDustAlphaMultiplierOffRoad; // 0x20F4 (Size: 0x4, Type: FloatProperty)
    float RoadAndExhaustDustAlphaMultiplierOnRoad; // 0x20F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoadAndExhaustDustFrontLeftName[0x4]; // 0x20FC (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustFrontRightName[0x4]; // 0x2100 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustMiddleLeftName[0x4]; // 0x2104 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustMiddleRightName[0x4]; // 0x2108 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustRearLeftName[0x4]; // 0x210C (Size: 0x4, Type: NameProperty)
    std::uint8_t RoadAndExhaustDustRearRightName[0x4]; // 0x2110 (Size: 0x4, Type: NameProperty)
    FName RoadAndExhaustIsOnDirtName; // 0x2114 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortTankVehicle, OnTankRepairedDelegate) == 8248, "Offset mismatch for UFortTankVehicle::OnTankRepairedDelegate");
static_assert(offsetof(UFortTankVehicle, BarrelSocketName) == 8264, "Offset mismatch for UFortTankVehicle::BarrelSocketName");
static_assert(offsetof(UFortTankVehicle, BarrelCollision) == 8272, "Offset mismatch for UFortTankVehicle::BarrelCollision");
static_assert(offsetof(UFortTankVehicle, UnderVehicleCollision) == 8280, "Offset mismatch for UFortTankVehicle::UnderVehicleCollision");
static_assert(offsetof(UFortTankVehicle, SocketOverrideArray) == 8288, "Offset mismatch for UFortTankVehicle::SocketOverrideArray");
static_assert(offsetof(UFortTankVehicle, SocketTransformOverrideMap) == 8304, "Offset mismatch for UFortTankVehicle::SocketTransformOverrideMap");
static_assert(offsetof(UFortTankVehicle, CachedSkeletalMeshComponent) == 8320, "Offset mismatch for UFortTankVehicle::CachedSkeletalMeshComponent");
static_assert(offsetof(UFortTankVehicle, CachedVehicleAudioController) == 8328, "Offset mismatch for UFortTankVehicle::CachedVehicleAudioController");
static_assert(offsetof(UFortTankVehicle, DefaultServerVisibilityBasedAnimTickOption) == 8336, "Offset mismatch for UFortTankVehicle::DefaultServerVisibilityBasedAnimTickOption");
static_assert(offsetof(UFortTankVehicle, DefaultServerSkeletalMeshTickEnabled) == 8337, "Offset mismatch for UFortTankVehicle::DefaultServerSkeletalMeshTickEnabled");
static_assert(offsetof(UFortTankVehicle, YawPivotSocketName) == 8340, "Offset mismatch for UFortTankVehicle::YawPivotSocketName");
static_assert(offsetof(UFortTankVehicle, PitchPivotSocketName) == 8344, "Offset mismatch for UFortTankVehicle::PitchPivotSocketName");
static_assert(offsetof(UFortTankVehicle, DriverCameraShakeInstance) == 8352, "Offset mismatch for UFortTankVehicle::DriverCameraShakeInstance");
static_assert(offsetof(UFortTankVehicle, AcceleratingCameraShakeInstance) == 8360, "Offset mismatch for UFortTankVehicle::AcceleratingCameraShakeInstance");
static_assert(offsetof(UFortTankVehicle, CachedNiagaraComponentRoadAndExhaust) == 8376, "Offset mismatch for UFortTankVehicle::CachedNiagaraComponentRoadAndExhaust");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustNiagaraComponentName) == 8384, "Offset mismatch for UFortTankVehicle::RoadAndExhaustNiagaraComponentName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustPeelOutLeftName) == 8400, "Offset mismatch for UFortTankVehicle::RoadAndExhaustPeelOutLeftName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustPeelOutRightName) == 8404, "Offset mismatch for UFortTankVehicle::RoadAndExhaustPeelOutRightName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustVehicleSpeedName) == 8408, "Offset mismatch for UFortTankVehicle::RoadAndExhaustVehicleSpeedName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustSlideDirectionName) == 8412, "Offset mismatch for UFortTankVehicle::RoadAndExhaustSlideDirectionName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustMinSpeedForDust) == 8416, "Offset mismatch for UFortTankVehicle::RoadAndExhaustMinSpeedForDust");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustColorLerpName) == 8420, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustColorLerpName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustColorLerpOffRoad) == 8424, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustColorLerpOffRoad");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustColorLerpOnRoad) == 8428, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustColorLerpOnRoad");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustAlphaMultiplierName) == 8432, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustAlphaMultiplierName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustAlphaMultiplierOffRoad) == 8436, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustAlphaMultiplierOffRoad");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustAlphaMultiplierOnRoad) == 8440, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustAlphaMultiplierOnRoad");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustFrontLeftName) == 8444, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustFrontLeftName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustFrontRightName) == 8448, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustFrontRightName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustMiddleLeftName) == 8452, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustMiddleLeftName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustMiddleRightName) == 8456, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustMiddleRightName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustRearLeftName) == 8460, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustRearLeftName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustDustRearRightName) == 8464, "Offset mismatch for UFortTankVehicle::RoadAndExhaustDustRearRightName");
static_assert(offsetof(UFortTankVehicle, RoadAndExhaustIsOnDirtName) == 8468, "Offset mismatch for UFortTankVehicle::RoadAndExhaustIsOnDirtName");

// /Script/TankRuntime.FortTankVehicleAnimInstance
// Kind: Class; super: FortTreadVehicleAnimInstance
class UFortTankVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x550]; // 0x0000
    void* TankVehicle; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentAimRotation[0x18]; // 0x0558 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentTurretAimRotation[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    std::uint8_t SmoothedTurretDeltaRotation[0x18]; // 0x0588 (Size: 0x18, Type: StructProperty)
    float InterpolationRate; // 0x05A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEngineOverheated; // 0x05A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPassenger; // 0x05A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFired; // 0x05A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReady; // 0x05A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriverCoverOnCooldown; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05A9
    float LeftTreadPower; // 0x05AC (Size: 0x4, Type: FloatProperty)
    float RightTreadPower; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    float LeftTreadVelocity; // 0x05B4 (Size: 0x4, Type: FloatProperty)
    float RightTreadVelocity; // 0x05B8 (Size: 0x4, Type: FloatProperty)
    float TurretYawAlpha; // 0x05BC (Size: 0x4, Type: FloatProperty)
    float TurretYawAlphaSmoothingRate; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    float CannonYaw; // 0x05C4 (Size: 0x4, Type: FloatProperty)
    float CannonPitch; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float TurretYaw; // 0x05CC (Size: 0x4, Type: FloatProperty)
    float TurretPitch; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MIDTreadPositionColor[0x10]; // 0x05D4 (Size: 0x10, Type: StructProperty)
    float MIDTreadDamageLeft; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    float MIDTreadDamageRight; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    float MIDExhaustShakeSpeed; // 0x05EC (Size: 0x4, Type: FloatProperty)
    float MIDExhaustShakeAmp; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float MIDEngineBoostGlow; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float MIDEngineHealthRatio; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float TurretBlendValue; // 0x05FC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> AimingData; // 0x0600 (Size: 0x10, Type: MapProperty)
    std::uint8_t PreviousTurretAimRotation[0x1]; // 0x0610 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTankVehicleAnimInstance, TankVehicle) == 1360, "Offset mismatch for UFortTankVehicleAnimInstance::TankVehicle");
static_assert(offsetof(UFortTankVehicleAnimInstance, CurrentAimRotation) == 1368, "Offset mismatch for UFortTankVehicleAnimInstance::CurrentAimRotation");
static_assert(offsetof(UFortTankVehicleAnimInstance, CurrentTurretAimRotation) == 1392, "Offset mismatch for UFortTankVehicleAnimInstance::CurrentTurretAimRotation");
static_assert(offsetof(UFortTankVehicleAnimInstance, SmoothedTurretDeltaRotation) == 1416, "Offset mismatch for UFortTankVehicleAnimInstance::SmoothedTurretDeltaRotation");
static_assert(offsetof(UFortTankVehicleAnimInstance, InterpolationRate) == 1440, "Offset mismatch for UFortTankVehicleAnimInstance::InterpolationRate");
static_assert(offsetof(UFortTankVehicleAnimInstance, bEngineOverheated) == 1444, "Offset mismatch for UFortTankVehicleAnimInstance::bEngineOverheated");
static_assert(offsetof(UFortTankVehicleAnimInstance, bHasPassenger) == 1445, "Offset mismatch for UFortTankVehicleAnimInstance::bHasPassenger");
static_assert(offsetof(UFortTankVehicleAnimInstance, bIsFired) == 1446, "Offset mismatch for UFortTankVehicleAnimInstance::bIsFired");
static_assert(offsetof(UFortTankVehicleAnimInstance, bIsReady) == 1447, "Offset mismatch for UFortTankVehicleAnimInstance::bIsReady");
static_assert(offsetof(UFortTankVehicleAnimInstance, bDriverCoverOnCooldown) == 1448, "Offset mismatch for UFortTankVehicleAnimInstance::bDriverCoverOnCooldown");
static_assert(offsetof(UFortTankVehicleAnimInstance, LeftTreadPower) == 1452, "Offset mismatch for UFortTankVehicleAnimInstance::LeftTreadPower");
static_assert(offsetof(UFortTankVehicleAnimInstance, RightTreadPower) == 1456, "Offset mismatch for UFortTankVehicleAnimInstance::RightTreadPower");
static_assert(offsetof(UFortTankVehicleAnimInstance, LeftTreadVelocity) == 1460, "Offset mismatch for UFortTankVehicleAnimInstance::LeftTreadVelocity");
static_assert(offsetof(UFortTankVehicleAnimInstance, RightTreadVelocity) == 1464, "Offset mismatch for UFortTankVehicleAnimInstance::RightTreadVelocity");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYawAlpha) == 1468, "Offset mismatch for UFortTankVehicleAnimInstance::TurretYawAlpha");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYawAlphaSmoothingRate) == 1472, "Offset mismatch for UFortTankVehicleAnimInstance::TurretYawAlphaSmoothingRate");
static_assert(offsetof(UFortTankVehicleAnimInstance, CannonYaw) == 1476, "Offset mismatch for UFortTankVehicleAnimInstance::CannonYaw");
static_assert(offsetof(UFortTankVehicleAnimInstance, CannonPitch) == 1480, "Offset mismatch for UFortTankVehicleAnimInstance::CannonPitch");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretYaw) == 1484, "Offset mismatch for UFortTankVehicleAnimInstance::TurretYaw");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretPitch) == 1488, "Offset mismatch for UFortTankVehicleAnimInstance::TurretPitch");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadPositionColor) == 1492, "Offset mismatch for UFortTankVehicleAnimInstance::MIDTreadPositionColor");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadDamageLeft) == 1508, "Offset mismatch for UFortTankVehicleAnimInstance::MIDTreadDamageLeft");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDTreadDamageRight) == 1512, "Offset mismatch for UFortTankVehicleAnimInstance::MIDTreadDamageRight");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDExhaustShakeSpeed) == 1516, "Offset mismatch for UFortTankVehicleAnimInstance::MIDExhaustShakeSpeed");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDExhaustShakeAmp) == 1520, "Offset mismatch for UFortTankVehicleAnimInstance::MIDExhaustShakeAmp");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDEngineBoostGlow) == 1524, "Offset mismatch for UFortTankVehicleAnimInstance::MIDEngineBoostGlow");
static_assert(offsetof(UFortTankVehicleAnimInstance, MIDEngineHealthRatio) == 1528, "Offset mismatch for UFortTankVehicleAnimInstance::MIDEngineHealthRatio");
static_assert(offsetof(UFortTankVehicleAnimInstance, TurretBlendValue) == 1532, "Offset mismatch for UFortTankVehicleAnimInstance::TurretBlendValue");
static_assert(offsetof(UFortTankVehicleAnimInstance, AimingData) == 1536, "Offset mismatch for UFortTankVehicleAnimInstance::AimingData");
static_assert(offsetof(UFortTankVehicleAnimInstance, PreviousTurretAimRotation) == 1552, "Offset mismatch for UFortTankVehicleAnimInstance::PreviousTurretAimRotation");

// /Script/TankRuntime.FortTankVehicleAudioController
// Kind: Class; super: FortAthenaVehicleAudioController
class UFortTankVehicleAudioController
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    std::uint8_t SpeedParam[0x38]; // 0x03C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t TurnPowerParam[0x38]; // 0x03F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t OutOfFuelParam[0x38]; // 0x0430 (Size: 0x38, Type: StructProperty)
    std::uint8_t IdleParam[0x38]; // 0x0468 (Size: 0x38, Type: StructProperty)
    std::uint8_t TurningParam[0x38]; // 0x04A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ForwardParam[0x38]; // 0x04D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReverseParam[0x38]; // 0x0510 (Size: 0x38, Type: StructProperty)
    std::uint8_t SurfaceParam[0x38]; // 0x0548 (Size: 0x38, Type: StructProperty)
    std::uint8_t IsInWaterParam[0x38]; // 0x0580 (Size: 0x38, Type: StructProperty)
    std::uint8_t IsInAirParam[0x38]; // 0x05B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BoostParam[0x38]; // 0x05F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CannonHorizontalMovementParam[0x38]; // 0x0628 (Size: 0x38, Type: StructProperty)
    std::uint8_t CannonVerticalMovementParam[0x38]; // 0x0660 (Size: 0x38, Type: StructProperty)
    std::uint8_t TurretHorizontalMovementParam[0x38]; // 0x0698 (Size: 0x38, Type: StructProperty)
    std::uint8_t TurretVerticalMovementParam[0x38]; // 0x06D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t Context[0x1]; // 0x0708 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTankVehicleAudioController, SpeedParam) == 960, "Offset mismatch for UFortTankVehicleAudioController::SpeedParam");
static_assert(offsetof(UFortTankVehicleAudioController, TurnPowerParam) == 1016, "Offset mismatch for UFortTankVehicleAudioController::TurnPowerParam");
static_assert(offsetof(UFortTankVehicleAudioController, OutOfFuelParam) == 1072, "Offset mismatch for UFortTankVehicleAudioController::OutOfFuelParam");
static_assert(offsetof(UFortTankVehicleAudioController, IdleParam) == 1128, "Offset mismatch for UFortTankVehicleAudioController::IdleParam");
static_assert(offsetof(UFortTankVehicleAudioController, TurningParam) == 1184, "Offset mismatch for UFortTankVehicleAudioController::TurningParam");
static_assert(offsetof(UFortTankVehicleAudioController, ForwardParam) == 1240, "Offset mismatch for UFortTankVehicleAudioController::ForwardParam");
static_assert(offsetof(UFortTankVehicleAudioController, ReverseParam) == 1296, "Offset mismatch for UFortTankVehicleAudioController::ReverseParam");
static_assert(offsetof(UFortTankVehicleAudioController, SurfaceParam) == 1352, "Offset mismatch for UFortTankVehicleAudioController::SurfaceParam");
static_assert(offsetof(UFortTankVehicleAudioController, IsInWaterParam) == 1408, "Offset mismatch for UFortTankVehicleAudioController::IsInWaterParam");
static_assert(offsetof(UFortTankVehicleAudioController, IsInAirParam) == 1464, "Offset mismatch for UFortTankVehicleAudioController::IsInAirParam");
static_assert(offsetof(UFortTankVehicleAudioController, BoostParam) == 1520, "Offset mismatch for UFortTankVehicleAudioController::BoostParam");
static_assert(offsetof(UFortTankVehicleAudioController, CannonHorizontalMovementParam) == 1576, "Offset mismatch for UFortTankVehicleAudioController::CannonHorizontalMovementParam");
static_assert(offsetof(UFortTankVehicleAudioController, CannonVerticalMovementParam) == 1632, "Offset mismatch for UFortTankVehicleAudioController::CannonVerticalMovementParam");
static_assert(offsetof(UFortTankVehicleAudioController, TurretHorizontalMovementParam) == 1688, "Offset mismatch for UFortTankVehicleAudioController::TurretHorizontalMovementParam");
static_assert(offsetof(UFortTankVehicleAudioController, TurretVerticalMovementParam) == 1744, "Offset mismatch for UFortTankVehicleAudioController::TurretVerticalMovementParam");
static_assert(offsetof(UFortTankVehicleAudioController, Context) == 1800, "Offset mismatch for UFortTankVehicleAudioController::Context");

// /Script/TankRuntime.FortTankVehicleConfigs
// Kind: Class; super: FortTreadVehicleConfigs
class UFortTankVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0xA60]; // 0x0000
    TArray<void*> TankWeaponAimingData; // 0x0A60 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SecondInteractText[0x10]; // 0x0A70 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondInteractType; // 0x0A80 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0A81
    std::uint8_t SecondInteractDuration[0x1]; // 0x0A88 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTankVehicleConfigs, TankWeaponAimingData) == 2656, "Offset mismatch for UFortTankVehicleConfigs::TankWeaponAimingData");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractText) == 2672, "Offset mismatch for UFortTankVehicleConfigs::SecondInteractText");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractType) == 2688, "Offset mismatch for UFortTankVehicleConfigs::SecondInteractType");
static_assert(offsetof(UFortTankVehicleConfigs, SecondInteractDuration) == 2696, "Offset mismatch for UFortTankVehicleConfigs::SecondInteractDuration");

// /Script/TankRuntime.TankVehicleActorAnimInterface
// Kind: Class; super: Interface
class UTankVehicleActorAnimInterface
{
public:
    std::uint8_t Opaque[1];
};
