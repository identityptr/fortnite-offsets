/**
 * decamp dumper generated SDK
 * Package: /Script/DirtbikeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DirtbikeRuntime.FortDirtbikeVehicle
// Kind: Class; super: FortMotorcycleVehicle
class UFortDirtbikeVehicle
{
public:
    std::uint8_t Pad_0000[0x2500]; // 0x0000
    void* InputActionJump; // 0x2500 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDirtbikeVehicle, InputActionJump) == 9472, "Offset mismatch for UFortDirtbikeVehicle::InputActionJump");

// /Script/DirtbikeRuntime.FortDirtbikeVehicleConfigs
// Kind: Class; super: FortMotorcycleVehicleConfigs
class UFortDirtbikeVehicleConfigs
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    TArray<void*> Wheels; // 0x0990 (Size: 0x10, Type: ArrayProperty)
    float SpringInterpDamp; // 0x09A0 (Size: 0x4, Type: FloatProperty)
    float WheelieSpringInterpDamp; // 0x09A4 (Size: 0x4, Type: FloatProperty)
    float WallPushStiff; // 0x09A8 (Size: 0x4, Type: FloatProperty)
    float WallPushDamp; // 0x09AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t WallPushXTraceOffset[0x18]; // 0x09B0 (Size: 0x18, Type: StructProperty)
    float WallPushForwardTraceLengthScale; // 0x09C8 (Size: 0x4, Type: FloatProperty)
    float WallPushBackTraceLengthScale; // 0x09CC (Size: 0x4, Type: FloatProperty)
    float WallPushRightTraceLength; // 0x09D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x09D4
    std::uint8_t WallPushRightTraceOffset[0x18]; // 0x09D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WallPushRearRightTraceOffset[0x18]; // 0x09F0 (Size: 0x18, Type: StructProperty)
    float WallPushAngle; // 0x0A08 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseWallPushTracesForWalls; // 0x0A0C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseWallPushRearSideTracesForWalls; // 0x0A0D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0A0E
    float MaxJumpChargeTime; // 0x0A10 (Size: 0x4, Type: FloatProperty)
    float MinChargeJumpForce; // 0x0A14 (Size: 0x4, Type: FloatProperty)
    float MaxChargeJumpForce; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    float MinJumpForwardAngle; // 0x0A1C (Size: 0x4, Type: FloatProperty)
    float MaxJumpForwardAngle; // 0x0A20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0A24
    std::uint8_t JumpForceMinCOMOffset[0x18]; // 0x0A28 (Size: 0x18, Type: StructProperty)
    std::uint8_t JumpForceMaxCOMOffset[0x18]; // 0x0A40 (Size: 0x18, Type: StructProperty)
    float JumpChargeGraceTimeSeconds; // 0x0A58 (Size: 0x4, Type: FloatProperty)
    float JumpGraceTimeSeconds; // 0x0A5C (Size: 0x4, Type: FloatProperty)
    float LeanAngleScale; // 0x0A60 (Size: 0x4, Type: FloatProperty)
    float LeanStiff; // 0x0A64 (Size: 0x4, Type: FloatProperty)
    float LeanDamp; // 0x0A68 (Size: 0x4, Type: FloatProperty)
    float LeanStrength; // 0x0A6C (Size: 0x4, Type: FloatProperty)
    float SlideCatchupForceTime; // 0x0A70 (Size: 0x4, Type: FloatProperty)
    float SlideCatchupSpeed; // 0x0A74 (Size: 0x4, Type: FloatProperty)
    float SlideCatchupPushForce; // 0x0A78 (Size: 0x4, Type: FloatProperty)
    float AutoAirPitchAngle; // 0x0A7C (Size: 0x4, Type: FloatProperty)
    float MinSteeringAngleForModifiedFriction; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForModifiedFriction; // 0x0A84 (Size: 0x4, Type: FloatProperty)
    float MinSteeringAngleToConsiderTractionLost; // 0x0A88 (Size: 0x4, Type: FloatProperty)
    float FrictionRatioToConsiderTractionLost; // 0x0A8C (Size: 0x4, Type: FloatProperty)
    float WheeliePitchStiffMin; // 0x0A90 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchStiffMax; // 0x0A94 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchDampMin; // 0x0A98 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchDampMax; // 0x0A9C (Size: 0x4, Type: FloatProperty)
    float WheeliePitchAngleMin; // 0x0AA0 (Size: 0x4, Type: FloatProperty)
    float WheeliePitchAngleMax; // 0x0AA4 (Size: 0x4, Type: FloatProperty)
    float StoppiePitchAngle; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float StoppiePitchStiff; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    float StoppiePitchDamp; // 0x0AB0 (Size: 0x4, Type: FloatProperty)
    float WheelieRampSeconds; // 0x0AB4 (Size: 0x4, Type: FloatProperty)
    float WheelieFailPitchAngle; // 0x0AB8 (Size: 0x4, Type: FloatProperty)
    float WheelieRecoveryRate; // 0x0ABC (Size: 0x4, Type: FloatProperty)
    float WheelieFailRecoveryRate; // 0x0AC0 (Size: 0x4, Type: FloatProperty)
    float WheelieMinStartSpeed; // 0x0AC4 (Size: 0x4, Type: FloatProperty)
    float StoppieMinStopSpeed; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    float WheelieSteerFactor; // 0x0ACC (Size: 0x4, Type: FloatProperty)
    float StoppieSteerFactor; // 0x0AD0 (Size: 0x4, Type: FloatProperty)
    float WheelieSteerAlphaThreshold; // 0x0AD4 (Size: 0x4, Type: FloatProperty)
    float WheelieStoppieMaxLeanAllowedToInitiate; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
    float WheelieGroundBufferTime; // 0x0ADC (Size: 0x4, Type: FloatProperty)
    float StoppieGroundBufferTime; // 0x0AE0 (Size: 0x4, Type: FloatProperty)
    float WheelieSpringLengthExponent; // 0x0AE4 (Size: 0x4, Type: FloatProperty)
    float WheelieWheelOffsetLerpMultiplier; // 0x0AE8 (Size: 0x4, Type: FloatProperty)
    float WheelieBrakeFactor; // 0x0AEC (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeed; // 0x0AF0 (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeedIce; // 0x0AF4 (Size: 0x4, Type: FloatProperty)
    float StoppieTurnInPlaceSpeedMud; // 0x0AF8 (Size: 0x4, Type: FloatProperty)
    float MinSpeedKmhForMaxStoppie; // 0x0AFC (Size: 0x4, Type: FloatProperty)
    float StoppieTurnAngleExponent; // 0x0B00 (Size: 0x4, Type: FloatProperty)
    float StoppieMaxTurnAngle; // 0x0B04 (Size: 0x4, Type: FloatProperty)
    float WheelieTireTractionMultiplier_Min; // 0x0B08 (Size: 0x4, Type: FloatProperty)
    float WheelieCameraMinStraightFactor; // 0x0B0C (Size: 0x4, Type: FloatProperty)
    float MaxLeanAccel; // 0x0B10 (Size: 0x4, Type: FloatProperty)
    float CruiseControlForwardAlpha; // 0x0B14 (Size: 0x4, Type: FloatProperty)
    float InventoryModeSpeedKmh; // 0x0B18 (Size: 0x4, Type: FloatProperty)
    float CruiseControlDisengageSpeedKmh; // 0x0B1C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPowerSlideIsSuperSlide; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0B21
    float PowerSlideFrontFrictionMultiplier; // 0x0B24 (Size: 0x4, Type: FloatProperty)
    float PowerSlideRearFrictionMultiplier; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    float PowerSlideRoadFrontFrictionMultiplier; // 0x0B2C (Size: 0x4, Type: FloatProperty)
    float PowerSlideRoadRearFrictionMultiplier; // 0x0B30 (Size: 0x4, Type: FloatProperty)
    float PowerSlideDirtFrontFrictionMultiplier; // 0x0B34 (Size: 0x4, Type: FloatProperty)
    float PowerSlideDirtRearFrictionMultiplier; // 0x0B38 (Size: 0x4, Type: FloatProperty)
    float PowerSlideGrassFrontFrictionMultiplier; // 0x0B3C (Size: 0x4, Type: FloatProperty)
    float PowerSlideGrassRearFrictionMultiplier; // 0x0B40 (Size: 0x4, Type: FloatProperty)
    float PowerSlideSnowFrontFrictionMultiplier; // 0x0B44 (Size: 0x4, Type: FloatProperty)
    float PowerSlideSnowRearFrictionMultiplier; // 0x0B48 (Size: 0x4, Type: FloatProperty)
    float PowerSlideIceFrontFrictionMultiplier; // 0x0B4C (Size: 0x4, Type: FloatProperty)
    float PowerSlideIceRearFrictionMultiplier; // 0x0B50 (Size: 0x4, Type: FloatProperty)
    float PowerSlideMudFrontFrictionMultiplier; // 0x0B54 (Size: 0x4, Type: FloatProperty)
    float PowerSlideMudRearFrictionMultiplier; // 0x0B58 (Size: 0x4, Type: FloatProperty)
    float PowerSlideFactor; // 0x0B5C (Size: 0x4, Type: FloatProperty)
    float PowerSlideDampFactor; // 0x0B60 (Size: 0x4, Type: FloatProperty)
    float FrictionDampFactor; // 0x0B64 (Size: 0x4, Type: FloatProperty)
    float PowerSlideLeanAngleScale; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    float SuperSlideLeanAngle; // 0x0B6C (Size: 0x4, Type: FloatProperty)
    float SuperSlideMinStartYawSpeedDegrees; // 0x0B70 (Size: 0x4, Type: FloatProperty)
    float SuperSlideMinStartSpeedKmh; // 0x0B74 (Size: 0x4, Type: FloatProperty)
    float SuperSlideMaxEndSpeedKmh; // 0x0B78 (Size: 0x4, Type: FloatProperty)
    float PowerslideInputWindow; // 0x0B7C (Size: 0x4, Type: FloatProperty)
    float ShootingMinSpeedSteeringAngle; // 0x0B80 (Size: 0x4, Type: FloatProperty)
    float ShootingMaxSpeedSteeringAngle; // 0x0B84 (Size: 0x4, Type: FloatProperty)
    float InventoryModeCameraYawConstraint; // 0x0B88 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0B8C
    std::uint8_t BoostTopSpeedMultiplier[0x28]; // 0x0B90 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostPushForceMultiplier[0x28]; // 0x0BB8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostMinPushForce[0x28]; // 0x0BE0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostSteeringMultiplier[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesBoost[0x28]; // 0x0C30 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartWithFullBoost[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t UsesRechargeableBoost[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfUse[0x28]; // 0x0CA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegen[0x28]; // 0x0CD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMin[0x28]; // 0x0CF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RateOfRegenMultMax[0x28]; // 0x0D20 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RegenMaxMultTime[0x28]; // 0x0D48 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_RequiredPercentToActivate[0x28]; // 0x0D70 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MinPercent[0x28]; // 0x0D98 (Size: 0x28, Type: StructProperty)
    std::uint8_t RechargeableBoost_MaxPercent[0x28]; // 0x0DC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPlayHolsterAnimsOnClient; // 0x0DE8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0DE9
    float FrontWheelSteeringFactor; // 0x0DEC (Size: 0x4, Type: FloatProperty)
    float FrontWheelRotationAcceleration; // 0x0DF0 (Size: 0x4, Type: FloatProperty)
    float PassengerInventoryCooldown; // 0x0DF4 (Size: 0x4, Type: FloatProperty)
    float DriverInventoryCooldown; // 0x0DF8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0DFC
    std::uint8_t BoostAttackShapes[0x10]; // 0x0E00 (Size: 0x10, Type: SetProperty)
    float CameraAssistStrengthMax; // 0x0E10 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthMin; // 0x0E14 (Size: 0x4, Type: FloatProperty)
    float CameraAssistStrengthRecovery; // 0x0E18 (Size: 0x4, Type: FloatProperty)
    float CameraAssistInterpSpeed; // 0x0E1C (Size: 0x4, Type: FloatProperty)
    float AirTrickIncrementInterval; // 0x0E20 (Size: 0x4, Type: FloatProperty)
    float AirTrickFeedStartTime; // 0x0E24 (Size: 0x4, Type: FloatProperty)
    float AirTrickPitchMultiplier; // 0x0E28 (Size: 0x4, Type: FloatProperty)
    float AirTrickYawMultiplier; // 0x0E2C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowAirTrickNeutral; // 0x0E30 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowAirTrickRight; // 0x0E31 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowAirTrickLeft; // 0x0E32 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x1]; // 0x0E33
    float PoppedTireTractionScalar_Front; // 0x0E34 (Size: 0x4, Type: FloatProperty)
    float PoppedTireTractionScalar_Rear; // 0x0E38 (Size: 0x4, Type: FloatProperty)
    float PoppedTireTractionScalar_Both; // 0x0E3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TopSpeedKmh[0x28]; // 0x0E40 (Size: 0x28, Type: StructProperty)
    float CachedTopSpeedKmh; // 0x0E68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCachedUsesRechargeableBoost; // 0x0E6C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDirtbikeVehicleConfigs, Wheels) == 2448, "Offset mismatch for UFortDirtbikeVehicleConfigs::Wheels");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SpringInterpDamp) == 2464, "Offset mismatch for UFortDirtbikeVehicleConfigs::SpringInterpDamp");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieSpringInterpDamp) == 2468, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieSpringInterpDamp");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushStiff) == 2472, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushStiff");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushDamp) == 2476, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushDamp");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushXTraceOffset) == 2480, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushXTraceOffset");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushForwardTraceLengthScale) == 2504, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushForwardTraceLengthScale");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushBackTraceLengthScale) == 2508, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushBackTraceLengthScale");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushRightTraceLength) == 2512, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushRightTraceLength");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushRightTraceOffset) == 2520, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushRightTraceOffset");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushRearRightTraceOffset) == 2544, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushRearRightTraceOffset");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WallPushAngle) == 2568, "Offset mismatch for UFortDirtbikeVehicleConfigs::WallPushAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bUseWallPushTracesForWalls) == 2572, "Offset mismatch for UFortDirtbikeVehicleConfigs::bUseWallPushTracesForWalls");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bUseWallPushRearSideTracesForWalls) == 2573, "Offset mismatch for UFortDirtbikeVehicleConfigs::bUseWallPushRearSideTracesForWalls");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MaxJumpChargeTime) == 2576, "Offset mismatch for UFortDirtbikeVehicleConfigs::MaxJumpChargeTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinChargeJumpForce) == 2580, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinChargeJumpForce");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MaxChargeJumpForce) == 2584, "Offset mismatch for UFortDirtbikeVehicleConfigs::MaxChargeJumpForce");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinJumpForwardAngle) == 2588, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinJumpForwardAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MaxJumpForwardAngle) == 2592, "Offset mismatch for UFortDirtbikeVehicleConfigs::MaxJumpForwardAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, JumpForceMinCOMOffset) == 2600, "Offset mismatch for UFortDirtbikeVehicleConfigs::JumpForceMinCOMOffset");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, JumpForceMaxCOMOffset) == 2624, "Offset mismatch for UFortDirtbikeVehicleConfigs::JumpForceMaxCOMOffset");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, JumpChargeGraceTimeSeconds) == 2648, "Offset mismatch for UFortDirtbikeVehicleConfigs::JumpChargeGraceTimeSeconds");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, JumpGraceTimeSeconds) == 2652, "Offset mismatch for UFortDirtbikeVehicleConfigs::JumpGraceTimeSeconds");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, LeanAngleScale) == 2656, "Offset mismatch for UFortDirtbikeVehicleConfigs::LeanAngleScale");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, LeanStiff) == 2660, "Offset mismatch for UFortDirtbikeVehicleConfigs::LeanStiff");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, LeanDamp) == 2664, "Offset mismatch for UFortDirtbikeVehicleConfigs::LeanDamp");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, LeanStrength) == 2668, "Offset mismatch for UFortDirtbikeVehicleConfigs::LeanStrength");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SlideCatchupForceTime) == 2672, "Offset mismatch for UFortDirtbikeVehicleConfigs::SlideCatchupForceTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SlideCatchupSpeed) == 2676, "Offset mismatch for UFortDirtbikeVehicleConfigs::SlideCatchupSpeed");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SlideCatchupPushForce) == 2680, "Offset mismatch for UFortDirtbikeVehicleConfigs::SlideCatchupPushForce");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, AutoAirPitchAngle) == 2684, "Offset mismatch for UFortDirtbikeVehicleConfigs::AutoAirPitchAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinSteeringAngleForModifiedFriction) == 2688, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinSteeringAngleForModifiedFriction");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinSpeedForModifiedFriction) == 2692, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinSpeedForModifiedFriction");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinSteeringAngleToConsiderTractionLost) == 2696, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinSteeringAngleToConsiderTractionLost");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, FrictionRatioToConsiderTractionLost) == 2700, "Offset mismatch for UFortDirtbikeVehicleConfigs::FrictionRatioToConsiderTractionLost");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchStiffMin) == 2704, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchStiffMin");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchStiffMax) == 2708, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchStiffMax");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchDampMin) == 2712, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchDampMin");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchDampMax) == 2716, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchDampMax");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchAngleMin) == 2720, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchAngleMin");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheeliePitchAngleMax) == 2724, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheeliePitchAngleMax");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppiePitchAngle) == 2728, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppiePitchAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppiePitchStiff) == 2732, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppiePitchStiff");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppiePitchDamp) == 2736, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppiePitchDamp");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieRampSeconds) == 2740, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieRampSeconds");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieFailPitchAngle) == 2744, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieFailPitchAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieRecoveryRate) == 2748, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieRecoveryRate");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieFailRecoveryRate) == 2752, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieFailRecoveryRate");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieMinStartSpeed) == 2756, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieMinStartSpeed");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieMinStopSpeed) == 2760, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieMinStopSpeed");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieSteerFactor) == 2764, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieSteerFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieSteerFactor) == 2768, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieSteerFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieSteerAlphaThreshold) == 2772, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieSteerAlphaThreshold");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieStoppieMaxLeanAllowedToInitiate) == 2776, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieStoppieMaxLeanAllowedToInitiate");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieGroundBufferTime) == 2780, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieGroundBufferTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieGroundBufferTime) == 2784, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieGroundBufferTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieSpringLengthExponent) == 2788, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieSpringLengthExponent");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieWheelOffsetLerpMultiplier) == 2792, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieWheelOffsetLerpMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieBrakeFactor) == 2796, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieBrakeFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieTurnInPlaceSpeed) == 2800, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieTurnInPlaceSpeed");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieTurnInPlaceSpeedIce) == 2804, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieTurnInPlaceSpeedIce");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieTurnInPlaceSpeedMud) == 2808, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieTurnInPlaceSpeedMud");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MinSpeedKmhForMaxStoppie) == 2812, "Offset mismatch for UFortDirtbikeVehicleConfigs::MinSpeedKmhForMaxStoppie");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieTurnAngleExponent) == 2816, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieTurnAngleExponent");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StoppieMaxTurnAngle) == 2820, "Offset mismatch for UFortDirtbikeVehicleConfigs::StoppieMaxTurnAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieTireTractionMultiplier_Min) == 2824, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieTireTractionMultiplier_Min");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, WheelieCameraMinStraightFactor) == 2828, "Offset mismatch for UFortDirtbikeVehicleConfigs::WheelieCameraMinStraightFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, MaxLeanAccel) == 2832, "Offset mismatch for UFortDirtbikeVehicleConfigs::MaxLeanAccel");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CruiseControlForwardAlpha) == 2836, "Offset mismatch for UFortDirtbikeVehicleConfigs::CruiseControlForwardAlpha");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, InventoryModeSpeedKmh) == 2840, "Offset mismatch for UFortDirtbikeVehicleConfigs::InventoryModeSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CruiseControlDisengageSpeedKmh) == 2844, "Offset mismatch for UFortDirtbikeVehicleConfigs::CruiseControlDisengageSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bPowerSlideIsSuperSlide) == 2848, "Offset mismatch for UFortDirtbikeVehicleConfigs::bPowerSlideIsSuperSlide");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideFrontFrictionMultiplier) == 2852, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideRearFrictionMultiplier) == 2856, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideRoadFrontFrictionMultiplier) == 2860, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideRoadFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideRoadRearFrictionMultiplier) == 2864, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideRoadRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideDirtFrontFrictionMultiplier) == 2868, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideDirtFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideDirtRearFrictionMultiplier) == 2872, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideDirtRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideGrassFrontFrictionMultiplier) == 2876, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideGrassFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideGrassRearFrictionMultiplier) == 2880, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideGrassRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideSnowFrontFrictionMultiplier) == 2884, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideSnowFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideSnowRearFrictionMultiplier) == 2888, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideSnowRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideIceFrontFrictionMultiplier) == 2892, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideIceFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideIceRearFrictionMultiplier) == 2896, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideIceRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideMudFrontFrictionMultiplier) == 2900, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideMudFrontFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideMudRearFrictionMultiplier) == 2904, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideMudRearFrictionMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideFactor) == 2908, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideDampFactor) == 2912, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideDampFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, FrictionDampFactor) == 2916, "Offset mismatch for UFortDirtbikeVehicleConfigs::FrictionDampFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerSlideLeanAngleScale) == 2920, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerSlideLeanAngleScale");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SuperSlideLeanAngle) == 2924, "Offset mismatch for UFortDirtbikeVehicleConfigs::SuperSlideLeanAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SuperSlideMinStartYawSpeedDegrees) == 2928, "Offset mismatch for UFortDirtbikeVehicleConfigs::SuperSlideMinStartYawSpeedDegrees");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SuperSlideMinStartSpeedKmh) == 2932, "Offset mismatch for UFortDirtbikeVehicleConfigs::SuperSlideMinStartSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, SuperSlideMaxEndSpeedKmh) == 2936, "Offset mismatch for UFortDirtbikeVehicleConfigs::SuperSlideMaxEndSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PowerslideInputWindow) == 2940, "Offset mismatch for UFortDirtbikeVehicleConfigs::PowerslideInputWindow");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, ShootingMinSpeedSteeringAngle) == 2944, "Offset mismatch for UFortDirtbikeVehicleConfigs::ShootingMinSpeedSteeringAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, ShootingMaxSpeedSteeringAngle) == 2948, "Offset mismatch for UFortDirtbikeVehicleConfigs::ShootingMaxSpeedSteeringAngle");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, InventoryModeCameraYawConstraint) == 2952, "Offset mismatch for UFortDirtbikeVehicleConfigs::InventoryModeCameraYawConstraint");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, BoostTopSpeedMultiplier) == 2960, "Offset mismatch for UFortDirtbikeVehicleConfigs::BoostTopSpeedMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, BoostPushForceMultiplier) == 3000, "Offset mismatch for UFortDirtbikeVehicleConfigs::BoostPushForceMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, BoostMinPushForce) == 3040, "Offset mismatch for UFortDirtbikeVehicleConfigs::BoostMinPushForce");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, BoostSteeringMultiplier) == 3080, "Offset mismatch for UFortDirtbikeVehicleConfigs::BoostSteeringMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, UsesBoost) == 3120, "Offset mismatch for UFortDirtbikeVehicleConfigs::UsesBoost");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, StartWithFullBoost) == 3160, "Offset mismatch for UFortDirtbikeVehicleConfigs::StartWithFullBoost");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, UsesRechargeableBoost) == 3200, "Offset mismatch for UFortDirtbikeVehicleConfigs::UsesRechargeableBoost");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RateOfUse) == 3240, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RateOfUse");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RateOfRegen) == 3280, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RateOfRegen");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RateOfRegenMultMin) == 3320, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RateOfRegenMultMin");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RateOfRegenMultMax) == 3360, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RateOfRegenMultMax");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RegenMaxMultTime) == 3400, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RegenMaxMultTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_RequiredPercentToActivate) == 3440, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_RequiredPercentToActivate");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_MinPercent) == 3480, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_MinPercent");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, RechargeableBoost_MaxPercent) == 3520, "Offset mismatch for UFortDirtbikeVehicleConfigs::RechargeableBoost_MaxPercent");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bPlayHolsterAnimsOnClient) == 3560, "Offset mismatch for UFortDirtbikeVehicleConfigs::bPlayHolsterAnimsOnClient");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, FrontWheelSteeringFactor) == 3564, "Offset mismatch for UFortDirtbikeVehicleConfigs::FrontWheelSteeringFactor");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, FrontWheelRotationAcceleration) == 3568, "Offset mismatch for UFortDirtbikeVehicleConfigs::FrontWheelRotationAcceleration");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PassengerInventoryCooldown) == 3572, "Offset mismatch for UFortDirtbikeVehicleConfigs::PassengerInventoryCooldown");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, DriverInventoryCooldown) == 3576, "Offset mismatch for UFortDirtbikeVehicleConfigs::DriverInventoryCooldown");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, BoostAttackShapes) == 3584, "Offset mismatch for UFortDirtbikeVehicleConfigs::BoostAttackShapes");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CameraAssistStrengthMax) == 3600, "Offset mismatch for UFortDirtbikeVehicleConfigs::CameraAssistStrengthMax");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CameraAssistStrengthMin) == 3604, "Offset mismatch for UFortDirtbikeVehicleConfigs::CameraAssistStrengthMin");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CameraAssistStrengthRecovery) == 3608, "Offset mismatch for UFortDirtbikeVehicleConfigs::CameraAssistStrengthRecovery");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CameraAssistInterpSpeed) == 3612, "Offset mismatch for UFortDirtbikeVehicleConfigs::CameraAssistInterpSpeed");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, AirTrickIncrementInterval) == 3616, "Offset mismatch for UFortDirtbikeVehicleConfigs::AirTrickIncrementInterval");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, AirTrickFeedStartTime) == 3620, "Offset mismatch for UFortDirtbikeVehicleConfigs::AirTrickFeedStartTime");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, AirTrickPitchMultiplier) == 3624, "Offset mismatch for UFortDirtbikeVehicleConfigs::AirTrickPitchMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, AirTrickYawMultiplier) == 3628, "Offset mismatch for UFortDirtbikeVehicleConfigs::AirTrickYawMultiplier");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bAllowAirTrickNeutral) == 3632, "Offset mismatch for UFortDirtbikeVehicleConfigs::bAllowAirTrickNeutral");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bAllowAirTrickRight) == 3633, "Offset mismatch for UFortDirtbikeVehicleConfigs::bAllowAirTrickRight");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bAllowAirTrickLeft) == 3634, "Offset mismatch for UFortDirtbikeVehicleConfigs::bAllowAirTrickLeft");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PoppedTireTractionScalar_Front) == 3636, "Offset mismatch for UFortDirtbikeVehicleConfigs::PoppedTireTractionScalar_Front");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PoppedTireTractionScalar_Rear) == 3640, "Offset mismatch for UFortDirtbikeVehicleConfigs::PoppedTireTractionScalar_Rear");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, PoppedTireTractionScalar_Both) == 3644, "Offset mismatch for UFortDirtbikeVehicleConfigs::PoppedTireTractionScalar_Both");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, TopSpeedKmh) == 3648, "Offset mismatch for UFortDirtbikeVehicleConfigs::TopSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, CachedTopSpeedKmh) == 3688, "Offset mismatch for UFortDirtbikeVehicleConfigs::CachedTopSpeedKmh");
static_assert(offsetof(UFortDirtbikeVehicleConfigs, bCachedUsesRechargeableBoost) == 3692, "Offset mismatch for UFortDirtbikeVehicleConfigs::bCachedUsesRechargeableBoost");
