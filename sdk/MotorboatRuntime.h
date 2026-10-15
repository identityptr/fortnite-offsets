/**
 * decamp dumper generated SDK
 * Package: /Script/MotorboatRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MotorboatRuntime.MeatballInPersistent
// Kind: ScriptStruct; super: FortVehicleInPersistent
struct FMeatballInPersistent
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    void* FortMeatballVehicleConfigs; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    float PushForceCurrentMultiplier; // 0x01E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMeatballInPersistent, FortMeatballVehicleConfigs) == 472, "Offset mismatch for FMeatballInPersistent::FortMeatballVehicleConfigs");
static_assert(offsetof(FMeatballInPersistent, PushForceCurrentMultiplier) == 480, "Offset mismatch for FMeatballInPersistent::PushForceCurrentMultiplier");

// /Script/MotorboatRuntime.FortMeatballPontoonsComponent
// Kind: Class; super: FortVehiclePontoonsComponent
class UFortMeatballPontoonsComponent
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    TArray<void*> WaterEffectsPontoonParameters; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverridePontoonRadiuses; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PushForcePontoons; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LeftTurnPontoons; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RightTurnPontoons; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    void* OwnerVehicle; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterLineStartPontoonIndex; // 0x0240 (Size: 0x4, Type: IntProperty)
    std::int32_t WaterLineEndPontoonIndex; // 0x0244 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0248
    TMap<void*, void*> ExtraBuoyancyData; // 0x0250 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortMeatballPontoonsComponent, WaterEffectsPontoonParameters) == 488, "Offset mismatch for UFortMeatballPontoonsComponent::WaterEffectsPontoonParameters");
static_assert(offsetof(UFortMeatballPontoonsComponent, OverridePontoonRadiuses) == 504, "Offset mismatch for UFortMeatballPontoonsComponent::OverridePontoonRadiuses");
static_assert(offsetof(UFortMeatballPontoonsComponent, PushForcePontoons) == 520, "Offset mismatch for UFortMeatballPontoonsComponent::PushForcePontoons");
static_assert(offsetof(UFortMeatballPontoonsComponent, LeftTurnPontoons) == 536, "Offset mismatch for UFortMeatballPontoonsComponent::LeftTurnPontoons");
static_assert(offsetof(UFortMeatballPontoonsComponent, RightTurnPontoons) == 552, "Offset mismatch for UFortMeatballPontoonsComponent::RightTurnPontoons");
static_assert(offsetof(UFortMeatballPontoonsComponent, OwnerVehicle) == 568, "Offset mismatch for UFortMeatballPontoonsComponent::OwnerVehicle");
static_assert(offsetof(UFortMeatballPontoonsComponent, WaterLineStartPontoonIndex) == 576, "Offset mismatch for UFortMeatballPontoonsComponent::WaterLineStartPontoonIndex");
static_assert(offsetof(UFortMeatballPontoonsComponent, WaterLineEndPontoonIndex) == 580, "Offset mismatch for UFortMeatballPontoonsComponent::WaterLineEndPontoonIndex");
static_assert(offsetof(UFortMeatballPontoonsComponent, ExtraBuoyancyData) == 592, "Offset mismatch for UFortMeatballPontoonsComponent::ExtraBuoyancyData");

// /Script/MotorboatRuntime.FortMeatballVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UFortMeatballVehicle
{
public:
    std::uint8_t Pad_0000[0x2020]; // 0x0000
    std::uint8_t BoostAction[0xD8]; // 0x2020 (Size: 0xD8, Type: StructProperty)
    float FxNormalizationMaxSpeedKmh; // 0x20F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x20FC
    void* CacheAudioEngineUp; // 0x2100 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioEngineDown; // 0x2108 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioWakeTurn; // 0x2110 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioWakeSpeed; // 0x2118 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioScrape; // 0x2120 (Size: 0x8, Type: ObjectProperty)
    void* CacheAudioEngineOutOfFuel; // 0x2128 (Size: 0x8, Type: ObjectProperty)
    void* BoostMID; // 0x2130 (Size: 0x8, Type: ObjectProperty)
    void* CachedGroundFXComponent; // 0x2138 (Size: 0x8, Type: ObjectProperty)
    void* DrivingPlayerController; // 0x2140 (Size: 0x8, Type: ObjectProperty)
    void* LandCameraShake; // 0x2148 (Size: 0x8, Type: ObjectProperty)
    void* LandCameraShakeClass; // 0x2150 (Size: 0x8, Type: ClassProperty)
    void* DriverCameraShake; // 0x2158 (Size: 0x8, Type: ObjectProperty)
    void* DriverCameraShakeClass; // 0x2160 (Size: 0x8, Type: ClassProperty)
    float LandRumbleIntensity; // 0x2168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x216C
    std::uint64_t LandForceFeedbackHandle; // 0x2170 (Size: 0x8, Type: UInt64Property)
    float TurnRumbleIntensity; // 0x2178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x217C
    std::uint64_t TurnForceFeedbackHandle; // 0x2180 (Size: 0x8, Type: UInt64Property)
    float CurrentSnowAltitude; // 0x2188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasSnow; // 0x218C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLargeRumble; // 0x218D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurnRumbleActive; // 0x218E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaterDropsOnScreen; // 0x218F (Size: 0x1, Type: BoolProperty)
    std::uint8_t GCVehicleScreenDrips[0x8]; // 0x2190 (Size: 0x8, Type: StructProperty)
    std::uint8_t GCParamsEmpty[0xD0]; // 0x2198 (Size: 0xD0, Type: StructProperty)
    void* BoostingCamera; // 0x2268 (Size: 0x8, Type: ClassProperty)
    void* VehicleCameraNoWeaponOverride; // 0x2270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0004[0x10]; // 0x2278
    void* FortMeatballVehicleConfigs; // 0x2288 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WaterLineStartPontoonIndex; // 0x2290 (Size: 0x4, Type: IntProperty)
    std::int32_t WaterLineEndPontoonIndex; // 0x2294 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x38]; // 0x2298
    std::uint8_t bBoostFailed; // 0x22D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMeatballVehicle, BoostAction) == 8224, "Offset mismatch for UFortMeatballVehicle::BoostAction");
static_assert(offsetof(UFortMeatballVehicle, FxNormalizationMaxSpeedKmh) == 8440, "Offset mismatch for UFortMeatballVehicle::FxNormalizationMaxSpeedKmh");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioEngineUp) == 8448, "Offset mismatch for UFortMeatballVehicle::CacheAudioEngineUp");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioEngineDown) == 8456, "Offset mismatch for UFortMeatballVehicle::CacheAudioEngineDown");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioWakeTurn) == 8464, "Offset mismatch for UFortMeatballVehicle::CacheAudioWakeTurn");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioWakeSpeed) == 8472, "Offset mismatch for UFortMeatballVehicle::CacheAudioWakeSpeed");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioScrape) == 8480, "Offset mismatch for UFortMeatballVehicle::CacheAudioScrape");
static_assert(offsetof(UFortMeatballVehicle, CacheAudioEngineOutOfFuel) == 8488, "Offset mismatch for UFortMeatballVehicle::CacheAudioEngineOutOfFuel");
static_assert(offsetof(UFortMeatballVehicle, BoostMID) == 8496, "Offset mismatch for UFortMeatballVehicle::BoostMID");
static_assert(offsetof(UFortMeatballVehicle, CachedGroundFXComponent) == 8504, "Offset mismatch for UFortMeatballVehicle::CachedGroundFXComponent");
static_assert(offsetof(UFortMeatballVehicle, DrivingPlayerController) == 8512, "Offset mismatch for UFortMeatballVehicle::DrivingPlayerController");
static_assert(offsetof(UFortMeatballVehicle, LandCameraShake) == 8520, "Offset mismatch for UFortMeatballVehicle::LandCameraShake");
static_assert(offsetof(UFortMeatballVehicle, LandCameraShakeClass) == 8528, "Offset mismatch for UFortMeatballVehicle::LandCameraShakeClass");
static_assert(offsetof(UFortMeatballVehicle, DriverCameraShake) == 8536, "Offset mismatch for UFortMeatballVehicle::DriverCameraShake");
static_assert(offsetof(UFortMeatballVehicle, DriverCameraShakeClass) == 8544, "Offset mismatch for UFortMeatballVehicle::DriverCameraShakeClass");
static_assert(offsetof(UFortMeatballVehicle, LandRumbleIntensity) == 8552, "Offset mismatch for UFortMeatballVehicle::LandRumbleIntensity");
static_assert(offsetof(UFortMeatballVehicle, LandForceFeedbackHandle) == 8560, "Offset mismatch for UFortMeatballVehicle::LandForceFeedbackHandle");
static_assert(offsetof(UFortMeatballVehicle, TurnRumbleIntensity) == 8568, "Offset mismatch for UFortMeatballVehicle::TurnRumbleIntensity");
static_assert(offsetof(UFortMeatballVehicle, TurnForceFeedbackHandle) == 8576, "Offset mismatch for UFortMeatballVehicle::TurnForceFeedbackHandle");
static_assert(offsetof(UFortMeatballVehicle, CurrentSnowAltitude) == 8584, "Offset mismatch for UFortMeatballVehicle::CurrentSnowAltitude");
static_assert(offsetof(UFortMeatballVehicle, bHasSnow) == 8588, "Offset mismatch for UFortMeatballVehicle::bHasSnow");
static_assert(offsetof(UFortMeatballVehicle, bLargeRumble) == 8589, "Offset mismatch for UFortMeatballVehicle::bLargeRumble");
static_assert(offsetof(UFortMeatballVehicle, bTurnRumbleActive) == 8590, "Offset mismatch for UFortMeatballVehicle::bTurnRumbleActive");
static_assert(offsetof(UFortMeatballVehicle, bWaterDropsOnScreen) == 8591, "Offset mismatch for UFortMeatballVehicle::bWaterDropsOnScreen");
static_assert(offsetof(UFortMeatballVehicle, GCVehicleScreenDrips) == 8592, "Offset mismatch for UFortMeatballVehicle::GCVehicleScreenDrips");
static_assert(offsetof(UFortMeatballVehicle, GCParamsEmpty) == 8600, "Offset mismatch for UFortMeatballVehicle::GCParamsEmpty");
static_assert(offsetof(UFortMeatballVehicle, BoostingCamera) == 8808, "Offset mismatch for UFortMeatballVehicle::BoostingCamera");
static_assert(offsetof(UFortMeatballVehicle, VehicleCameraNoWeaponOverride) == 8816, "Offset mismatch for UFortMeatballVehicle::VehicleCameraNoWeaponOverride");
static_assert(offsetof(UFortMeatballVehicle, FortMeatballVehicleConfigs) == 8840, "Offset mismatch for UFortMeatballVehicle::FortMeatballVehicleConfigs");
static_assert(offsetof(UFortMeatballVehicle, WaterLineStartPontoonIndex) == 8848, "Offset mismatch for UFortMeatballVehicle::WaterLineStartPontoonIndex");
static_assert(offsetof(UFortMeatballVehicle, WaterLineEndPontoonIndex) == 8852, "Offset mismatch for UFortMeatballVehicle::WaterLineEndPontoonIndex");
static_assert(offsetof(UFortMeatballVehicle, bBoostFailed) == 8912, "Offset mismatch for UFortMeatballVehicle::bBoostFailed");

// /Script/MotorboatRuntime.FortMeatballVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortMeatballVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* Meatball; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    float MeatballSpeed; // 0x0508 (Size: 0x4, Type: FloatProperty)
    float SteeringAngle; // 0x050C (Size: 0x4, Type: FloatProperty)
    float BoostCharge; // 0x0510 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0514
    std::uint8_t SeatOffset[0x18]; // 0x0518 (Size: 0x18, Type: StructProperty)
    std::uint8_t SeatRotation[0x18]; // 0x0530 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentDriveJiggle[0x18]; // 0x0548 (Size: 0x18, Type: StructProperty)
    std::uint8_t SteeringRotator[0x18]; // 0x0560 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpeedGuageRotator[0x18]; // 0x0578 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoostPercentRotator[0x18]; // 0x0590 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomJiggleRotatorMotorTop[0x18]; // 0x05A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomJiggleRotatorMotorBase[0x18]; // 0x05C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsMovingForward; // 0x05D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDrivingFast; // 0x05D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBraking; // 0x05DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x05DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostReady; // 0x05DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostStarting; // 0x05DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoostEnding; // 0x05DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRocketReady; // 0x05DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRocketOnCoolDown; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSteeringLeft; // 0x05E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSteeringRight; // 0x05E2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMeatballVehicleAnimInstance, Meatball) == 1280, "Offset mismatch for UFortMeatballVehicleAnimInstance::Meatball");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, MeatballSpeed) == 1288, "Offset mismatch for UFortMeatballVehicleAnimInstance::MeatballSpeed");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, SteeringAngle) == 1292, "Offset mismatch for UFortMeatballVehicleAnimInstance::SteeringAngle");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, BoostCharge) == 1296, "Offset mismatch for UFortMeatballVehicleAnimInstance::BoostCharge");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, SeatOffset) == 1304, "Offset mismatch for UFortMeatballVehicleAnimInstance::SeatOffset");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, SeatRotation) == 1328, "Offset mismatch for UFortMeatballVehicleAnimInstance::SeatRotation");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, CurrentDriveJiggle) == 1352, "Offset mismatch for UFortMeatballVehicleAnimInstance::CurrentDriveJiggle");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, SteeringRotator) == 1376, "Offset mismatch for UFortMeatballVehicleAnimInstance::SteeringRotator");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, SpeedGuageRotator) == 1400, "Offset mismatch for UFortMeatballVehicleAnimInstance::SpeedGuageRotator");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, BoostPercentRotator) == 1424, "Offset mismatch for UFortMeatballVehicleAnimInstance::BoostPercentRotator");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, RandomJiggleRotatorMotorTop) == 1448, "Offset mismatch for UFortMeatballVehicleAnimInstance::RandomJiggleRotatorMotorTop");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, RandomJiggleRotatorMotorBase) == 1472, "Offset mismatch for UFortMeatballVehicleAnimInstance::RandomJiggleRotatorMotorBase");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsMovingForward) == 1496, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsMovingForward");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsDrivingFast) == 1497, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsDrivingFast");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsBraking) == 1498, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsBraking");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsBoosting) == 1499, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsBoosting");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsBoostReady) == 1500, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsBoostReady");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsBoostStarting) == 1501, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsBoostStarting");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsBoostEnding) == 1502, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsBoostEnding");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsRocketReady) == 1503, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsRocketReady");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsRocketOnCoolDown) == 1504, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsRocketOnCoolDown");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsSteeringLeft) == 1505, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsSteeringLeft");
static_assert(offsetof(UFortMeatballVehicleAnimInstance, bIsSteeringRight) == 1506, "Offset mismatch for UFortMeatballVehicleAnimInstance::bIsSteeringRight");

// /Script/MotorboatRuntime.FortMeatballVehicleConfigs
// Kind: Class; super: FortPhysicsVehicleConfigs
class UFortMeatballVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    float WaterSteerRollFactor; // 0x0990 (Size: 0x4, Type: FloatProperty)
    float InnerTurnPontoonOffsetMultiplier; // 0x0994 (Size: 0x4, Type: FloatProperty)
    float OuterTurnPontoonOffsetMultiplier; // 0x0998 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedToBankOnTurn; // 0x099C (Size: 0x4, Type: FloatProperty)
    float BoostMinPushForce; // 0x09A0 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedForceMultiplier; // 0x09A4 (Size: 0x4, Type: FloatProperty)
    float BoostTopSpeedMultiplier; // 0x09A8 (Size: 0x4, Type: FloatProperty)
    float MaxPontoonOffsetPerSecond; // 0x09AC (Size: 0x4, Type: FloatProperty)
    float LandTopSpeedMultiplier; // 0x09B0 (Size: 0x4, Type: FloatProperty)
    float LandPushForceMultiplier; // 0x09B4 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinPushPontoonsForWaterDriving; // 0x09B8 (Size: 0x4, Type: IntProperty)
    float MaxWaterPitchAngle; // 0x09BC (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedToPitch; // 0x09C0 (Size: 0x4, Type: FloatProperty)
    float MinForwardSpeedForMaxPitch; // 0x09C4 (Size: 0x4, Type: FloatProperty)
    float MaxForwardSpeedForMaxPitch; // 0x09C8 (Size: 0x4, Type: FloatProperty)
    float MaxFowrardSpeedPitchFactor; // 0x09CC (Size: 0x4, Type: FloatProperty)
    float BoostMaxForwardSpeedPitchFactor; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    float FrontLateralFrictionFactor; // 0x09D4 (Size: 0x4, Type: FloatProperty)
    float RearLateralFrictionFactor; // 0x09D8 (Size: 0x4, Type: FloatProperty)
    float LandFrontLateralFrictionFactor; // 0x09DC (Size: 0x4, Type: FloatProperty)
    float LandRearLateralFrictionFactor; // 0x09E0 (Size: 0x4, Type: FloatProperty)
    float LateralFrictionModStartSpeedKmh; // 0x09E4 (Size: 0x4, Type: FloatProperty)
    float RearLateralFrictionModPerSpeedKmh; // 0x09E8 (Size: 0x4, Type: FloatProperty)
    float FrontLateralFrictionModPerSpeedKmh; // 0x09EC (Size: 0x4, Type: FloatProperty)
    float SeatOffsetScaleX; // 0x09F0 (Size: 0x4, Type: FloatProperty)
    float SeatOffsetScaleY; // 0x09F4 (Size: 0x4, Type: FloatProperty)
    float SeatYawAngleMax; // 0x09F8 (Size: 0x4, Type: FloatProperty)
    float SeatPitchAngleMax; // 0x09FC (Size: 0x4, Type: FloatProperty)
    float BoostSteeringMultiplier; // 0x0A00 (Size: 0x4, Type: FloatProperty)
    float BoostSteeringMultiplierRampTime; // 0x0A04 (Size: 0x4, Type: FloatProperty)
    float LandSteeringMultiplier; // 0x0A08 (Size: 0x4, Type: FloatProperty)
    float LandMinSpeedSteeringAngle; // 0x0A0C (Size: 0x4, Type: FloatProperty)
    float LandMaxSpeedSteeringAngle; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientNoAccel; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient2NoAccel; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierRoad; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierGrass; // 0x0A20 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierDirt; // 0x0A24 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierSnow; // 0x0A28 (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierIce; // 0x0A2C (Size: 0x4, Type: FloatProperty)
    float DragCoefficientMultiplierMud; // 0x0A30 (Size: 0x4, Type: FloatProperty)
    float MinSteerAlphaForWaterFriction; // 0x0A34 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceYawStiff; // 0x0A38 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceYawDamp; // 0x0A3C (Size: 0x4, Type: FloatProperty)
    float MaxSteerRollAngle; // 0x0A40 (Size: 0x4, Type: FloatProperty)
    float MaxTurnInPlaceYawAngle; // 0x0A44 (Size: 0x4, Type: FloatProperty)
    float UprightSpringSteerStrength; // 0x0A48 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceYawStrength; // 0x0A4C (Size: 0x4, Type: FloatProperty)
    float MaxSpeedForTurnInPlaceKmH; // 0x0A50 (Size: 0x4, Type: FloatProperty)
    float BlendOutExtraSpeedTurnInPlaceKmH; // 0x0A54 (Size: 0x4, Type: FloatProperty)
    float MaxPitchForCameraInPlaceSteer; // 0x0A58 (Size: 0x4, Type: FloatProperty)
    float SpringLengthMutliplierWater; // 0x0A5C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMeatballVehicleConfigs, WaterSteerRollFactor) == 2448, "Offset mismatch for UFortMeatballVehicleConfigs::WaterSteerRollFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, InnerTurnPontoonOffsetMultiplier) == 2452, "Offset mismatch for UFortMeatballVehicleConfigs::InnerTurnPontoonOffsetMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, OuterTurnPontoonOffsetMultiplier) == 2456, "Offset mismatch for UFortMeatballVehicleConfigs::OuterTurnPontoonOffsetMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, MinForwardSpeedToBankOnTurn) == 2460, "Offset mismatch for UFortMeatballVehicleConfigs::MinForwardSpeedToBankOnTurn");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostMinPushForce) == 2464, "Offset mismatch for UFortMeatballVehicleConfigs::BoostMinPushForce");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostTopSpeedForceMultiplier) == 2468, "Offset mismatch for UFortMeatballVehicleConfigs::BoostTopSpeedForceMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostTopSpeedMultiplier) == 2472, "Offset mismatch for UFortMeatballVehicleConfigs::BoostTopSpeedMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxPontoonOffsetPerSecond) == 2476, "Offset mismatch for UFortMeatballVehicleConfigs::MaxPontoonOffsetPerSecond");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandTopSpeedMultiplier) == 2480, "Offset mismatch for UFortMeatballVehicleConfigs::LandTopSpeedMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandPushForceMultiplier) == 2484, "Offset mismatch for UFortMeatballVehicleConfigs::LandPushForceMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, MinPushPontoonsForWaterDriving) == 2488, "Offset mismatch for UFortMeatballVehicleConfigs::MinPushPontoonsForWaterDriving");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxWaterPitchAngle) == 2492, "Offset mismatch for UFortMeatballVehicleConfigs::MaxWaterPitchAngle");
static_assert(offsetof(UFortMeatballVehicleConfigs, MinForwardSpeedToPitch) == 2496, "Offset mismatch for UFortMeatballVehicleConfigs::MinForwardSpeedToPitch");
static_assert(offsetof(UFortMeatballVehicleConfigs, MinForwardSpeedForMaxPitch) == 2500, "Offset mismatch for UFortMeatballVehicleConfigs::MinForwardSpeedForMaxPitch");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxForwardSpeedForMaxPitch) == 2504, "Offset mismatch for UFortMeatballVehicleConfigs::MaxForwardSpeedForMaxPitch");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxFowrardSpeedPitchFactor) == 2508, "Offset mismatch for UFortMeatballVehicleConfigs::MaxFowrardSpeedPitchFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostMaxForwardSpeedPitchFactor) == 2512, "Offset mismatch for UFortMeatballVehicleConfigs::BoostMaxForwardSpeedPitchFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, FrontLateralFrictionFactor) == 2516, "Offset mismatch for UFortMeatballVehicleConfigs::FrontLateralFrictionFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, RearLateralFrictionFactor) == 2520, "Offset mismatch for UFortMeatballVehicleConfigs::RearLateralFrictionFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandFrontLateralFrictionFactor) == 2524, "Offset mismatch for UFortMeatballVehicleConfigs::LandFrontLateralFrictionFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandRearLateralFrictionFactor) == 2528, "Offset mismatch for UFortMeatballVehicleConfigs::LandRearLateralFrictionFactor");
static_assert(offsetof(UFortMeatballVehicleConfigs, LateralFrictionModStartSpeedKmh) == 2532, "Offset mismatch for UFortMeatballVehicleConfigs::LateralFrictionModStartSpeedKmh");
static_assert(offsetof(UFortMeatballVehicleConfigs, RearLateralFrictionModPerSpeedKmh) == 2536, "Offset mismatch for UFortMeatballVehicleConfigs::RearLateralFrictionModPerSpeedKmh");
static_assert(offsetof(UFortMeatballVehicleConfigs, FrontLateralFrictionModPerSpeedKmh) == 2540, "Offset mismatch for UFortMeatballVehicleConfigs::FrontLateralFrictionModPerSpeedKmh");
static_assert(offsetof(UFortMeatballVehicleConfigs, SeatOffsetScaleX) == 2544, "Offset mismatch for UFortMeatballVehicleConfigs::SeatOffsetScaleX");
static_assert(offsetof(UFortMeatballVehicleConfigs, SeatOffsetScaleY) == 2548, "Offset mismatch for UFortMeatballVehicleConfigs::SeatOffsetScaleY");
static_assert(offsetof(UFortMeatballVehicleConfigs, SeatYawAngleMax) == 2552, "Offset mismatch for UFortMeatballVehicleConfigs::SeatYawAngleMax");
static_assert(offsetof(UFortMeatballVehicleConfigs, SeatPitchAngleMax) == 2556, "Offset mismatch for UFortMeatballVehicleConfigs::SeatPitchAngleMax");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostSteeringMultiplier) == 2560, "Offset mismatch for UFortMeatballVehicleConfigs::BoostSteeringMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, BoostSteeringMultiplierRampTime) == 2564, "Offset mismatch for UFortMeatballVehicleConfigs::BoostSteeringMultiplierRampTime");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandSteeringMultiplier) == 2568, "Offset mismatch for UFortMeatballVehicleConfigs::LandSteeringMultiplier");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandMinSpeedSteeringAngle) == 2572, "Offset mismatch for UFortMeatballVehicleConfigs::LandMinSpeedSteeringAngle");
static_assert(offsetof(UFortMeatballVehicleConfigs, LandMaxSpeedSteeringAngle) == 2576, "Offset mismatch for UFortMeatballVehicleConfigs::LandMaxSpeedSteeringAngle");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientNoAccel) == 2580, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientNoAccel");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficient2NoAccel) == 2584, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficient2NoAccel");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierRoad) == 2588, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierRoad");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierGrass) == 2592, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierGrass");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierDirt) == 2596, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierDirt");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierSnow) == 2600, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierSnow");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierIce) == 2604, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierIce");
static_assert(offsetof(UFortMeatballVehicleConfigs, DragCoefficientMultiplierMud) == 2608, "Offset mismatch for UFortMeatballVehicleConfigs::DragCoefficientMultiplierMud");
static_assert(offsetof(UFortMeatballVehicleConfigs, MinSteerAlphaForWaterFriction) == 2612, "Offset mismatch for UFortMeatballVehicleConfigs::MinSteerAlphaForWaterFriction");
static_assert(offsetof(UFortMeatballVehicleConfigs, TurnInPlaceYawStiff) == 2616, "Offset mismatch for UFortMeatballVehicleConfigs::TurnInPlaceYawStiff");
static_assert(offsetof(UFortMeatballVehicleConfigs, TurnInPlaceYawDamp) == 2620, "Offset mismatch for UFortMeatballVehicleConfigs::TurnInPlaceYawDamp");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxSteerRollAngle) == 2624, "Offset mismatch for UFortMeatballVehicleConfigs::MaxSteerRollAngle");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxTurnInPlaceYawAngle) == 2628, "Offset mismatch for UFortMeatballVehicleConfigs::MaxTurnInPlaceYawAngle");
static_assert(offsetof(UFortMeatballVehicleConfigs, UprightSpringSteerStrength) == 2632, "Offset mismatch for UFortMeatballVehicleConfigs::UprightSpringSteerStrength");
static_assert(offsetof(UFortMeatballVehicleConfigs, TurnInPlaceYawStrength) == 2636, "Offset mismatch for UFortMeatballVehicleConfigs::TurnInPlaceYawStrength");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxSpeedForTurnInPlaceKmH) == 2640, "Offset mismatch for UFortMeatballVehicleConfigs::MaxSpeedForTurnInPlaceKmH");
static_assert(offsetof(UFortMeatballVehicleConfigs, BlendOutExtraSpeedTurnInPlaceKmH) == 2644, "Offset mismatch for UFortMeatballVehicleConfigs::BlendOutExtraSpeedTurnInPlaceKmH");
static_assert(offsetof(UFortMeatballVehicleConfigs, MaxPitchForCameraInPlaceSteer) == 2648, "Offset mismatch for UFortMeatballVehicleConfigs::MaxPitchForCameraInPlaceSteer");
static_assert(offsetof(UFortMeatballVehicleConfigs, SpringLengthMutliplierWater) == 2652, "Offset mismatch for UFortMeatballVehicleConfigs::SpringLengthMutliplierWater");
