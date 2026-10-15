/**
 * decamp dumper generated SDK
 * Package: /Script/LFNVehicleNative
 */
#pragma once
#include "Basic.h"

// /Script/LFNVehicleNative.LFNVehicleOccupantAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class ULFNVehicleOccupantAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    float AimYaw; // 0x0330 (Size: 0x4, Type: FloatProperty)
    float AimPitch; // 0x0334 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPlayerHeadShouldFollowCamera; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0339
    std::uint8_t VelocityImpact[0xF0]; // 0x0340 (Size: 0xF0, Type: StructProperty)
    std::uint8_t RightHandIKTarget[0x40]; // 0x0430 (Size: 0x40, Type: StructProperty)
    std::uint8_t LeftHandIKTarget[0x40]; // 0x0470 (Size: 0x40, Type: StructProperty)
    std::uint8_t CurrentDriverAnimSet[0xB0]; // 0x04B0 (Size: 0xB0, Type: StructProperty)
    void* VehicleAnimSet; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ImpactDisplacement[0x18]; // 0x0568 (Size: 0x18, Type: StructProperty)
    std::uint8_t DriveStartPlayRateSpeedRange[0x10]; // 0x0580 (Size: 0x10, Type: StructProperty)
    float Speed; // 0x0590 (Size: 0x4, Type: FloatProperty)
    float DesiredSpeed; // 0x0594 (Size: 0x4, Type: FloatProperty)
    float SlopePitchDegreeAngle; // 0x0598 (Size: 0x4, Type: FloatProperty)
    float SlopeRollDegreeAngle; // 0x059C (Size: 0x4, Type: FloatProperty)
    float SteeringAngle; // 0x05A0 (Size: 0x4, Type: FloatProperty)
    float DriveStartPlayRate; // 0x05A4 (Size: 0x4, Type: FloatProperty)
    float AimYawSmoothed; // 0x05A8 (Size: 0x4, Type: FloatProperty)
    float AimYawLastFrame; // 0x05AC (Size: 0x4, Type: FloatProperty)
    float ReversingSpeedThreshold; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    float BrakingDeltaThreshold; // 0x05B4 (Size: 0x4, Type: FloatProperty)
    float MovingThreshold; // 0x05B8 (Size: 0x4, Type: FloatProperty)
    float MovingForwardThreshold; // 0x05BC (Size: 0x4, Type: FloatProperty)
    float MovingFastThreshold; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    float SteeringLeftThreshold; // 0x05C4 (Size: 0x4, Type: FloatProperty)
    float SteeringRightThreshold; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float StartAimYawLerpingDeltaThreshold; // 0x05CC (Size: 0x4, Type: FloatProperty)
    float StopAimYawLerpingDeltaThreshold; // 0x05D0 (Size: 0x4, Type: FloatProperty)
    float AimYawSmoothSpeed; // 0x05D4 (Size: 0x4, Type: FloatProperty)
    float PawnToVehicleDeltaYawAngleDegrees; // 0x05D8 (Size: 0x4, Type: FloatProperty)
    float AimCardDirDeadZoneAngleDegrees; // 0x05DC (Size: 0x4, Type: FloatProperty)
    float AimCardDirAngleOffsetDegrees; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    float AimFWDDeltaAngleDegrees; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    float AimBWDDeltaAngleDegrees; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    float AimLFTDeltaAngleDegrees; // 0x05EC (Size: 0x4, Type: FloatProperty)
    float AimRGTDeltaAngleDegrees; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t LastCardDirIndex; // 0x05F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBackLeftPassenger; // 0x05F8 (Size: 0x1, Type: BoolProperty)
    // 0x05F8 BoolProperty bIsBackRightPassenger (shared storage)
    // 0x05F8 BoolProperty bIsBoosting (shared storage)
    // 0x05F8 BoolProperty bIsBraking (shared storage)
    // 0x05F8 BoolProperty bIsDriver (shared storage)
    // 0x05F8 BoolProperty bIsFemale (shared storage)
    // 0x05F8 BoolProperty bIsFrontPassenger (shared storage)
    // 0x05F8 BoolProperty bIsReversing (shared storage)
    std::uint8_t bAimBWD; // 0x05F9 (Size: 0x1, Type: BoolProperty)
    // 0x05F9 BoolProperty bAimFWD (shared storage)
    // 0x05F9 BoolProperty bIsMoving (shared storage)
    // 0x05F9 BoolProperty bIsMovingFast (shared storage)
    // 0x05F9 BoolProperty bIsMovingForward (shared storage)
    // 0x05F9 BoolProperty bIsSmoothingAimYaw (shared storage)
    // 0x05F9 BoolProperty bIsSteeringLeft (shared storage)
    // 0x05F9 BoolProperty bIsSteeringRight (shared storage)
    std::uint8_t bAimLFT; // 0x05FA (Size: 0x1, Type: BoolProperty)
    // 0x05FA BoolProperty bAimRGT (shared storage)
    // 0x05FA BoolProperty bEnableLocomotionAdditives (shared storage)
    std::uint8_t Pad_0002[0x5]; // 0x05FB
    void* FortPlayerPawn; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WorldVelocity[0x1]; // 0x0608 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimYaw) == 816, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimYaw");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimPitch) == 820, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimPitch");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, bPlayerHeadShouldFollowCamera) == 824, "Offset mismatch for ULFNVehicleOccupantAnimInstance::bPlayerHeadShouldFollowCamera");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, VelocityImpact) == 832, "Offset mismatch for ULFNVehicleOccupantAnimInstance::VelocityImpact");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, RightHandIKTarget) == 1072, "Offset mismatch for ULFNVehicleOccupantAnimInstance::RightHandIKTarget");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, LeftHandIKTarget) == 1136, "Offset mismatch for ULFNVehicleOccupantAnimInstance::LeftHandIKTarget");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, CurrentDriverAnimSet) == 1200, "Offset mismatch for ULFNVehicleOccupantAnimInstance::CurrentDriverAnimSet");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, VehicleAnimSet) == 1376, "Offset mismatch for ULFNVehicleOccupantAnimInstance::VehicleAnimSet");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, ImpactDisplacement) == 1384, "Offset mismatch for ULFNVehicleOccupantAnimInstance::ImpactDisplacement");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, DriveStartPlayRateSpeedRange) == 1408, "Offset mismatch for ULFNVehicleOccupantAnimInstance::DriveStartPlayRateSpeedRange");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, Speed) == 1424, "Offset mismatch for ULFNVehicleOccupantAnimInstance::Speed");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, DesiredSpeed) == 1428, "Offset mismatch for ULFNVehicleOccupantAnimInstance::DesiredSpeed");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, SlopePitchDegreeAngle) == 1432, "Offset mismatch for ULFNVehicleOccupantAnimInstance::SlopePitchDegreeAngle");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, SlopeRollDegreeAngle) == 1436, "Offset mismatch for ULFNVehicleOccupantAnimInstance::SlopeRollDegreeAngle");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, SteeringAngle) == 1440, "Offset mismatch for ULFNVehicleOccupantAnimInstance::SteeringAngle");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, DriveStartPlayRate) == 1444, "Offset mismatch for ULFNVehicleOccupantAnimInstance::DriveStartPlayRate");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimYawSmoothed) == 1448, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimYawSmoothed");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimYawLastFrame) == 1452, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimYawLastFrame");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, ReversingSpeedThreshold) == 1456, "Offset mismatch for ULFNVehicleOccupantAnimInstance::ReversingSpeedThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, BrakingDeltaThreshold) == 1460, "Offset mismatch for ULFNVehicleOccupantAnimInstance::BrakingDeltaThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, MovingThreshold) == 1464, "Offset mismatch for ULFNVehicleOccupantAnimInstance::MovingThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, MovingForwardThreshold) == 1468, "Offset mismatch for ULFNVehicleOccupantAnimInstance::MovingForwardThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, MovingFastThreshold) == 1472, "Offset mismatch for ULFNVehicleOccupantAnimInstance::MovingFastThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, SteeringLeftThreshold) == 1476, "Offset mismatch for ULFNVehicleOccupantAnimInstance::SteeringLeftThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, SteeringRightThreshold) == 1480, "Offset mismatch for ULFNVehicleOccupantAnimInstance::SteeringRightThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, StartAimYawLerpingDeltaThreshold) == 1484, "Offset mismatch for ULFNVehicleOccupantAnimInstance::StartAimYawLerpingDeltaThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, StopAimYawLerpingDeltaThreshold) == 1488, "Offset mismatch for ULFNVehicleOccupantAnimInstance::StopAimYawLerpingDeltaThreshold");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimYawSmoothSpeed) == 1492, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimYawSmoothSpeed");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, PawnToVehicleDeltaYawAngleDegrees) == 1496, "Offset mismatch for ULFNVehicleOccupantAnimInstance::PawnToVehicleDeltaYawAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimCardDirDeadZoneAngleDegrees) == 1500, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimCardDirDeadZoneAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimCardDirAngleOffsetDegrees) == 1504, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimCardDirAngleOffsetDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimFWDDeltaAngleDegrees) == 1508, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimFWDDeltaAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimBWDDeltaAngleDegrees) == 1512, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimBWDDeltaAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimLFTDeltaAngleDegrees) == 1516, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimLFTDeltaAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, AimRGTDeltaAngleDegrees) == 1520, "Offset mismatch for ULFNVehicleOccupantAnimInstance::AimRGTDeltaAngleDegrees");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, LastCardDirIndex) == 1524, "Offset mismatch for ULFNVehicleOccupantAnimInstance::LastCardDirIndex");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, bIsBackLeftPassenger) == 1528, "Offset mismatch for ULFNVehicleOccupantAnimInstance::bIsBackLeftPassenger");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, bAimBWD) == 1529, "Offset mismatch for ULFNVehicleOccupantAnimInstance::bAimBWD");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, bAimLFT) == 1530, "Offset mismatch for ULFNVehicleOccupantAnimInstance::bAimLFT");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, FortPlayerPawn) == 1536, "Offset mismatch for ULFNVehicleOccupantAnimInstance::FortPlayerPawn");
static_assert(offsetof(ULFNVehicleOccupantAnimInstance, WorldVelocity) == 1544, "Offset mismatch for ULFNVehicleOccupantAnimInstance::WorldVelocity");
