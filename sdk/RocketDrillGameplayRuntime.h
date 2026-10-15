/**
 * decamp dumper generated SDK
 * Package: /Script/RocketDrillGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RocketDrillGameplayRuntime.FortMovementMode_ExtRocketDrill
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtRocketDrill
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t ActivationGameplayTag[0x4]; // 0x01B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BlockedByObstacleGameplayTag[0x4]; // 0x01BC (Size: 0x4, Type: StructProperty)
    std::uint8_t Gravity[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GravityGrounded[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlopeMaxSpeedModifierMax[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationAdjustment[0x18]; // 0x0238 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationInterpSpeed[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOrientRotationToMovement[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseCustomRotation[0x30]; // 0x02A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TimeSecondsToReachMaxSpeed[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BaseMaxSpeed[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockedMaxSpeed[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEngineGimbalAngle[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEngineGimbalWorldZAngle[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinEngineGimbalWorldZAngle[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedReductionOnHit[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCorrectRotation[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bMaintainHorizontalGroundVelocity[0x28]; // 0x0410 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialSpeed[0x30]; // 0x0438 (Size: 0x30, Type: StructProperty)
    std::uint8_t bIgnorePriorVelocityOnStart[0x30]; // 0x0468 (Size: 0x30, Type: StructProperty)
    std::uint8_t DirectionalControlBlendInDelay[0x30]; // 0x0498 (Size: 0x30, Type: StructProperty)
    std::uint8_t DirectionalControlBlendInTime[0x30]; // 0x04C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DirectionalControlInterpSpeed[0x30]; // 0x04F8 (Size: 0x30, Type: StructProperty)
    float EngineAccelerationScaler; // 0x0528 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x052C
    void* CameraModifierClass; // 0x0530 (Size: 0x8, Type: ClassProperty)
    float CameraModifierFadeOutTime; // 0x0538 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtRocketDrill, ActivationGameplayTag) == 440, "Offset mismatch for UFortMovementMode_ExtRocketDrill::ActivationGameplayTag");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, BlockedByObstacleGameplayTag) == 444, "Offset mismatch for UFortMovementMode_ExtRocketDrill::BlockedByObstacleGameplayTag");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, Gravity) == 448, "Offset mismatch for UFortMovementMode_ExtRocketDrill::Gravity");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, GravityGrounded) == 488, "Offset mismatch for UFortMovementMode_ExtRocketDrill::GravityGrounded");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, SlopeMaxSpeedModifierMax) == 528, "Offset mismatch for UFortMovementMode_ExtRocketDrill::SlopeMaxSpeedModifierMax");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, RotationAdjustment) == 568, "Offset mismatch for UFortMovementMode_ExtRocketDrill::RotationAdjustment");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, RotationInterpSpeed) == 592, "Offset mismatch for UFortMovementMode_ExtRocketDrill::RotationInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, bOrientRotationToMovement) == 632, "Offset mismatch for UFortMovementMode_ExtRocketDrill::bOrientRotationToMovement");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, bUseCustomRotation) == 672, "Offset mismatch for UFortMovementMode_ExtRocketDrill::bUseCustomRotation");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, TimeSecondsToReachMaxSpeed) == 720, "Offset mismatch for UFortMovementMode_ExtRocketDrill::TimeSecondsToReachMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, BaseMaxSpeed) == 760, "Offset mismatch for UFortMovementMode_ExtRocketDrill::BaseMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, BlockedMaxSpeed) == 800, "Offset mismatch for UFortMovementMode_ExtRocketDrill::BlockedMaxSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, MaxEngineGimbalAngle) == 840, "Offset mismatch for UFortMovementMode_ExtRocketDrill::MaxEngineGimbalAngle");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, MaxEngineGimbalWorldZAngle) == 880, "Offset mismatch for UFortMovementMode_ExtRocketDrill::MaxEngineGimbalWorldZAngle");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, MinEngineGimbalWorldZAngle) == 920, "Offset mismatch for UFortMovementMode_ExtRocketDrill::MinEngineGimbalWorldZAngle");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, SpeedReductionOnHit) == 960, "Offset mismatch for UFortMovementMode_ExtRocketDrill::SpeedReductionOnHit");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, bCorrectRotation) == 1000, "Offset mismatch for UFortMovementMode_ExtRocketDrill::bCorrectRotation");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, bMaintainHorizontalGroundVelocity) == 1040, "Offset mismatch for UFortMovementMode_ExtRocketDrill::bMaintainHorizontalGroundVelocity");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, InitialSpeed) == 1080, "Offset mismatch for UFortMovementMode_ExtRocketDrill::InitialSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, bIgnorePriorVelocityOnStart) == 1128, "Offset mismatch for UFortMovementMode_ExtRocketDrill::bIgnorePriorVelocityOnStart");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, DirectionalControlBlendInDelay) == 1176, "Offset mismatch for UFortMovementMode_ExtRocketDrill::DirectionalControlBlendInDelay");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, DirectionalControlBlendInTime) == 1224, "Offset mismatch for UFortMovementMode_ExtRocketDrill::DirectionalControlBlendInTime");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, DirectionalControlInterpSpeed) == 1272, "Offset mismatch for UFortMovementMode_ExtRocketDrill::DirectionalControlInterpSpeed");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, EngineAccelerationScaler) == 1320, "Offset mismatch for UFortMovementMode_ExtRocketDrill::EngineAccelerationScaler");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, CameraModifierClass) == 1328, "Offset mismatch for UFortMovementMode_ExtRocketDrill::CameraModifierClass");
static_assert(offsetof(UFortMovementMode_ExtRocketDrill, CameraModifierFadeOutTime) == 1336, "Offset mismatch for UFortMovementMode_ExtRocketDrill::CameraModifierFadeOutTime");

// /Script/RocketDrillGameplayRuntime.FortMovementMode_RocketDrillRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_RocketDrillRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t State; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x0039
    std::uint8_t ActualVelocity[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_RocketDrillRuntimeData, State) == 56, "Offset mismatch for UFortMovementMode_RocketDrillRuntimeData::State");
static_assert(offsetof(UFortMovementMode_RocketDrillRuntimeData, ActualVelocity) == 88, "Offset mismatch for UFortMovementMode_RocketDrillRuntimeData::ActualVelocity");

// /Script/RocketDrillGameplayRuntime.RocketDrillAttributeSet
// Kind: Class; super: FortAttributeSet
class URocketDrillAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaxFuel[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Fuel[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxReserveFuel[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReserveFuel[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URocketDrillAttributeSet, MaxFuel) == 80, "Offset mismatch for URocketDrillAttributeSet::MaxFuel");
static_assert(offsetof(URocketDrillAttributeSet, Fuel) == 120, "Offset mismatch for URocketDrillAttributeSet::Fuel");
static_assert(offsetof(URocketDrillAttributeSet, MaxReserveFuel) == 160, "Offset mismatch for URocketDrillAttributeSet::MaxReserveFuel");
static_assert(offsetof(URocketDrillAttributeSet, ReserveFuel) == 200, "Offset mismatch for URocketDrillAttributeSet::ReserveFuel");

// /Script/RocketDrillGameplayRuntime.RocketDrillLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class URocketDrillLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float Drill_Burst_Stop_Float; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float IdleNoiseAlpha; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float StartBoostYaw; // 0x1178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x117C
    double VelocityYaw; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double Yaw; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double Pitch; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    double DrillingAO_Alpha; // 0x1198 (Size: 0x8, Type: DoubleProperty)
    double BoostPitch; // 0x11A0 (Size: 0x8, Type: DoubleProperty)
    double VelocityPitch; // 0x11A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsOtherMovementMode; // 0x11B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandingWithImpact; // 0x11B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrillSkid; // 0x11B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrillActive; // 0x11B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving; // 0x11B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBurstStartBlendIn; // 0x11B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIntoWallHit; // 0x11B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterToLand; // 0x11B7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterToBase; // 0x11B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterIntoFall; // 0x11B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitHardLand; // 0x11BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x11BB
    std::uint8_t DrivingTagName[0x4]; // 0x11BC (Size: 0x4, Type: StructProperty)
    std::uint8_t PassengerTagName[0x4]; // 0x11C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveTagName[0x4]; // 0x11C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkidTagName[0x4]; // 0x11C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t LandingWithImpactTagName[0x4]; // 0x11CC (Size: 0x4, Type: StructProperty)
    std::uint8_t HardImpactTagName[0x4]; // 0x11D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MeleeAttackTagName[0x4]; // 0x11D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t OtherMovementModesTagNames[0x1]; // 0x11D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URocketDrillLayerAnimInstance, Drill_Burst_Stop_Float) == 4464, "Offset mismatch for URocketDrillLayerAnimInstance::Drill_Burst_Stop_Float");
static_assert(offsetof(URocketDrillLayerAnimInstance, IdleNoiseAlpha) == 4468, "Offset mismatch for URocketDrillLayerAnimInstance::IdleNoiseAlpha");
static_assert(offsetof(URocketDrillLayerAnimInstance, StartBoostYaw) == 4472, "Offset mismatch for URocketDrillLayerAnimInstance::StartBoostYaw");
static_assert(offsetof(URocketDrillLayerAnimInstance, VelocityYaw) == 4480, "Offset mismatch for URocketDrillLayerAnimInstance::VelocityYaw");
static_assert(offsetof(URocketDrillLayerAnimInstance, Yaw) == 4488, "Offset mismatch for URocketDrillLayerAnimInstance::Yaw");
static_assert(offsetof(URocketDrillLayerAnimInstance, Pitch) == 4496, "Offset mismatch for URocketDrillLayerAnimInstance::Pitch");
static_assert(offsetof(URocketDrillLayerAnimInstance, DrillingAO_Alpha) == 4504, "Offset mismatch for URocketDrillLayerAnimInstance::DrillingAO_Alpha");
static_assert(offsetof(URocketDrillLayerAnimInstance, BoostPitch) == 4512, "Offset mismatch for URocketDrillLayerAnimInstance::BoostPitch");
static_assert(offsetof(URocketDrillLayerAnimInstance, VelocityPitch) == 4520, "Offset mismatch for URocketDrillLayerAnimInstance::VelocityPitch");
static_assert(offsetof(URocketDrillLayerAnimInstance, bIsOtherMovementMode) == 4528, "Offset mismatch for URocketDrillLayerAnimInstance::bIsOtherMovementMode");
static_assert(offsetof(URocketDrillLayerAnimInstance, bLandingWithImpact) == 4529, "Offset mismatch for URocketDrillLayerAnimInstance::bLandingWithImpact");
static_assert(offsetof(URocketDrillLayerAnimInstance, bDrillSkid) == 4530, "Offset mismatch for URocketDrillLayerAnimInstance::bDrillSkid");
static_assert(offsetof(URocketDrillLayerAnimInstance, bDrillActive) == 4531, "Offset mismatch for URocketDrillLayerAnimInstance::bDrillActive");
static_assert(offsetof(URocketDrillLayerAnimInstance, bIsMoving) == 4532, "Offset mismatch for URocketDrillLayerAnimInstance::bIsMoving");
static_assert(offsetof(URocketDrillLayerAnimInstance, bBurstStartBlendIn) == 4533, "Offset mismatch for URocketDrillLayerAnimInstance::bBurstStartBlendIn");
static_assert(offsetof(URocketDrillLayerAnimInstance, bIntoWallHit) == 4534, "Offset mismatch for URocketDrillLayerAnimInstance::bIntoWallHit");
static_assert(offsetof(URocketDrillLayerAnimInstance, bCanEnterToLand) == 4535, "Offset mismatch for URocketDrillLayerAnimInstance::bCanEnterToLand");
static_assert(offsetof(URocketDrillLayerAnimInstance, bCanEnterToBase) == 4536, "Offset mismatch for URocketDrillLayerAnimInstance::bCanEnterToBase");
static_assert(offsetof(URocketDrillLayerAnimInstance, bCanEnterIntoFall) == 4537, "Offset mismatch for URocketDrillLayerAnimInstance::bCanEnterIntoFall");
static_assert(offsetof(URocketDrillLayerAnimInstance, bExitHardLand) == 4538, "Offset mismatch for URocketDrillLayerAnimInstance::bExitHardLand");
static_assert(offsetof(URocketDrillLayerAnimInstance, DrivingTagName) == 4540, "Offset mismatch for URocketDrillLayerAnimInstance::DrivingTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, PassengerTagName) == 4544, "Offset mismatch for URocketDrillLayerAnimInstance::PassengerTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, ActiveTagName) == 4548, "Offset mismatch for URocketDrillLayerAnimInstance::ActiveTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, SkidTagName) == 4552, "Offset mismatch for URocketDrillLayerAnimInstance::SkidTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, LandingWithImpactTagName) == 4556, "Offset mismatch for URocketDrillLayerAnimInstance::LandingWithImpactTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, HardImpactTagName) == 4560, "Offset mismatch for URocketDrillLayerAnimInstance::HardImpactTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, MeleeAttackTagName) == 4564, "Offset mismatch for URocketDrillLayerAnimInstance::MeleeAttackTagName");
static_assert(offsetof(URocketDrillLayerAnimInstance, OtherMovementModesTagNames) == 4568, "Offset mismatch for URocketDrillLayerAnimInstance::OtherMovementModesTagNames");

// /Script/RocketDrillGameplayRuntime.RocketDrillWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class URocketDrillWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t DrillBitRotation[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    float ReturnValueYPitch; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x037C
    double DrillingAO_Alpha; // 0x0380 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDrillSkid; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrillActive; // 0x0389 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterTacSprint; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandingWithImpact; // 0x038B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInTacSprintInto; // 0x038C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitHardLand; // 0x038D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDrillMobilityPose; // 0x038E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterIntoFall; // 0x038F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterToBase; // 0x0390 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterToLand; // 0x0391 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBurstStartBlendIn; // 0x0392 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotSprintingRule; // 0x0393 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0394
    std::uint8_t DrillBitActiveTags[0x20]; // 0x0398 (Size: 0x20, Type: StructProperty)
    std::uint8_t DrillBit_RampUpCurve[0x48]; // 0x03B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t DrillBit_RampDownCurve[0x48]; // 0x0400 (Size: 0x48, Type: StructProperty)
    double DrillBitMaxSpeed; // 0x0448 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillBitRotation) == 864, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillBitRotation");
static_assert(offsetof(URocketDrillWeaponAnimInstance, ReturnValueYPitch) == 888, "Offset mismatch for URocketDrillWeaponAnimInstance::ReturnValueYPitch");
static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillingAO_Alpha) == 896, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillingAO_Alpha");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bDrillSkid) == 904, "Offset mismatch for URocketDrillWeaponAnimInstance::bDrillSkid");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bDrillActive) == 905, "Offset mismatch for URocketDrillWeaponAnimInstance::bDrillActive");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bEnterTacSprint) == 906, "Offset mismatch for URocketDrillWeaponAnimInstance::bEnterTacSprint");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bLandingWithImpact) == 907, "Offset mismatch for URocketDrillWeaponAnimInstance::bLandingWithImpact");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bInTacSprintInto) == 908, "Offset mismatch for URocketDrillWeaponAnimInstance::bInTacSprintInto");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bExitHardLand) == 909, "Offset mismatch for URocketDrillWeaponAnimInstance::bExitHardLand");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bIsDrillMobilityPose) == 910, "Offset mismatch for URocketDrillWeaponAnimInstance::bIsDrillMobilityPose");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bCanEnterIntoFall) == 911, "Offset mismatch for URocketDrillWeaponAnimInstance::bCanEnterIntoFall");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bCanEnterToBase) == 912, "Offset mismatch for URocketDrillWeaponAnimInstance::bCanEnterToBase");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bCanEnterToLand) == 913, "Offset mismatch for URocketDrillWeaponAnimInstance::bCanEnterToLand");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bBurstStartBlendIn) == 914, "Offset mismatch for URocketDrillWeaponAnimInstance::bBurstStartBlendIn");
static_assert(offsetof(URocketDrillWeaponAnimInstance, bNotSprintingRule) == 915, "Offset mismatch for URocketDrillWeaponAnimInstance::bNotSprintingRule");
static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillBitActiveTags) == 920, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillBitActiveTags");
static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillBit_RampUpCurve) == 952, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillBit_RampUpCurve");
static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillBit_RampDownCurve) == 1024, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillBit_RampDownCurve");
static_assert(offsetof(URocketDrillWeaponAnimInstance, DrillBitMaxSpeed) == 1096, "Offset mismatch for URocketDrillWeaponAnimInstance::DrillBitMaxSpeed");
