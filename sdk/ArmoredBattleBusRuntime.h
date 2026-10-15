/**
 * decamp dumper generated SDK
 * Package: /Script/ArmoredBattleBusRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortArmoredBattleBusPassengerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t PreviousVehicleRotator[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    float SmoothedVehicleYawRate; // 0x1188 (Size: 0x4, Type: FloatProperty)
    std::int32_t PawnSeat; // 0x118C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsFrontTurretPassenger; // 0x1190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRearTurretPassenger; // 0x1191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1192
    float Speed; // 0x1194 (Size: 0x4, Type: FloatProperty)
    float YawDelta; // 0x1198 (Size: 0x4, Type: FloatProperty)
    float TurretYaw; // 0x119C (Size: 0x4, Type: FloatProperty)
    float TurretPitch; // 0x11A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x11A4
    std::uint8_t TurretYawRotator[0x18]; // 0x11A8 (Size: 0x18, Type: StructProperty)
    float SlopeRollDegreeAngle; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    float SlopePitchDegreeAngle; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HandAttachL[0x18]; // 0x11C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachR[0x18]; // 0x11E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TransformSpace; // 0x11F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x11F9
    float UpdateYawDeltaSmoothedLerpRate; // 0x11FC (Size: 0x4, Type: FloatProperty)
    std::int32_t TurretPassengerFront; // 0x1200 (Size: 0x4, Type: IntProperty)
    std::int32_t TurretPassengerRear; // 0x1204 (Size: 0x4, Type: IntProperty)
    std::uint8_t FrontFootBoneName[0x4]; // 0x1208 (Size: 0x4, Type: NameProperty)
    std::uint8_t RearFootBoneName[0x4]; // 0x120C (Size: 0x4, Type: NameProperty)
    std::uint8_t GunHandAttachBoneName_FrontLeft[0x4]; // 0x1210 (Size: 0x4, Type: NameProperty)
    std::uint8_t GunHandAttachBoneName_RearLeft[0x4]; // 0x1214 (Size: 0x4, Type: NameProperty)
    std::uint8_t GunHandAttachBoneName_FrontRight[0x4]; // 0x1218 (Size: 0x4, Type: NameProperty)
    std::uint8_t GunHandAttachBoneName_RearRight[0x4]; // 0x121C (Size: 0x4, Type: NameProperty)
    std::uint8_t PassengerBoneName_Front[0x4]; // 0x1220 (Size: 0x4, Type: NameProperty)
    std::uint8_t PassengerBoneName_Rear[0x4]; // 0x1224 (Size: 0x4, Type: NameProperty)
    float TurretPitchDegMin; // 0x1228 (Size: 0x4, Type: FloatProperty)
    float TurretPitchDegMax; // 0x122C (Size: 0x4, Type: FloatProperty)
    float LocalPlayerTurretPitchEaseRate; // 0x1230 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PreviousVehicleRotator) == 4464, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::PreviousVehicleRotator");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SmoothedVehicleYawRate) == 4488, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::SmoothedVehicleYawRate");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PawnSeat) == 4492, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::PawnSeat");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, bIsFrontTurretPassenger) == 4496, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::bIsFrontTurretPassenger");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, bIsRearTurretPassenger) == 4497, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::bIsRearTurretPassenger");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, Speed) == 4500, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::Speed");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, YawDelta) == 4504, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::YawDelta");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretYaw) == 4508, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretYaw");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitch) == 4512, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretPitch");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretYawRotator) == 4520, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretYawRotator");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SlopeRollDegreeAngle) == 4544, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::SlopeRollDegreeAngle");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, SlopePitchDegreeAngle) == 4548, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::SlopePitchDegreeAngle");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, HandAttachL) == 4552, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::HandAttachL");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, HandAttachR) == 4576, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::HandAttachR");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TransformSpace) == 4600, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TransformSpace");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, UpdateYawDeltaSmoothedLerpRate) == 4604, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::UpdateYawDeltaSmoothedLerpRate");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPassengerFront) == 4608, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretPassengerFront");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPassengerRear) == 4612, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretPassengerRear");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, FrontFootBoneName) == 4616, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::FrontFootBoneName");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, RearFootBoneName) == 4620, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::RearFootBoneName");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_FrontLeft) == 4624, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_FrontLeft");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_RearLeft) == 4628, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_RearLeft");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_FrontRight) == 4632, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_FrontRight");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, GunHandAttachBoneName_RearRight) == 4636, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::GunHandAttachBoneName_RearRight");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PassengerBoneName_Front) == 4640, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::PassengerBoneName_Front");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, PassengerBoneName_Rear) == 4644, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::PassengerBoneName_Rear");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitchDegMin) == 4648, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretPitchDegMin");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, TurretPitchDegMax) == 4652, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::TurretPitchDegMax");
static_assert(offsetof(UFortArmoredBattleBusPassengerAnimInstance, LocalPlayerTurretPitchEaseRate) == 4656, "Offset mismatch for UFortArmoredBattleBusPassengerAnimInstance::LocalPlayerTurretPitchEaseRate");

// /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UFortArmoredBattleBusVehicleAnimInstance
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    float FrontTurretAimPitch; // 0x0500 (Size: 0x4, Type: FloatProperty)
    float RearTurretAimPitch; // 0x0504 (Size: 0x4, Type: FloatProperty)
    float FrontYawDeltaSmoothed; // 0x0508 (Size: 0x4, Type: FloatProperty)
    float RearYawDeltaSmoothed; // 0x050C (Size: 0x4, Type: FloatProperty)
    float SmoothedVehicleYawRate; // 0x0510 (Size: 0x4, Type: FloatProperty)
    float FrontYawDeltaSmoothedAlpha; // 0x0514 (Size: 0x4, Type: FloatProperty)
    float RearYawDeltaSmoothedAlpha; // 0x0518 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x051C
    std::uint8_t FrontWeaponYaw[0x18]; // 0x0520 (Size: 0x18, Type: StructProperty)
    std::uint8_t RearWeaponYaw[0x18]; // 0x0538 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousVehicleRotator[0x18]; // 0x0550 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasFrontTurretPassenger; // 0x0568 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasRearTurretPassenger; // 0x0569 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x056A
    float NetworkEaseRate; // 0x056C (Size: 0x4, Type: FloatProperty)
    float UpdateYawDeltaSmoothedLerpRate; // 0x0570 (Size: 0x4, Type: FloatProperty)
    std::int32_t FrontPassengerSeatIndex; // 0x0574 (Size: 0x4, Type: IntProperty)
    std::int32_t RearPassengerSeatIndex; // 0x0578 (Size: 0x4, Type: IntProperty)
    float FrontPassengerYawOffset; // 0x057C (Size: 0x4, Type: FloatProperty)
    float RearPassengerYawOffset; // 0x0580 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrontPassengerBoneName[0x4]; // 0x0584 (Size: 0x4, Type: NameProperty)
    FName RearPassengerBoneName; // 0x0588 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontTurretAimPitch) == 1280, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontTurretAimPitch");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearTurretAimPitch) == 1284, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearTurretAimPitch");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontYawDeltaSmoothed) == 1288, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontYawDeltaSmoothed");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearYawDeltaSmoothed) == 1292, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearYawDeltaSmoothed");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, SmoothedVehicleYawRate) == 1296, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::SmoothedVehicleYawRate");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontYawDeltaSmoothedAlpha) == 1300, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontYawDeltaSmoothedAlpha");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearYawDeltaSmoothedAlpha) == 1304, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearYawDeltaSmoothedAlpha");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontWeaponYaw) == 1312, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontWeaponYaw");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearWeaponYaw) == 1336, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearWeaponYaw");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, PreviousVehicleRotator) == 1360, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::PreviousVehicleRotator");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, bHasFrontTurretPassenger) == 1384, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::bHasFrontTurretPassenger");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, bHasRearTurretPassenger) == 1385, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::bHasRearTurretPassenger");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, NetworkEaseRate) == 1388, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::NetworkEaseRate");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, UpdateYawDeltaSmoothedLerpRate) == 1392, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::UpdateYawDeltaSmoothedLerpRate");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerSeatIndex) == 1396, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerSeatIndex");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerSeatIndex) == 1400, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearPassengerSeatIndex");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerYawOffset) == 1404, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerYawOffset");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerYawOffset) == 1408, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearPassengerYawOffset");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, FrontPassengerBoneName) == 1412, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::FrontPassengerBoneName");
static_assert(offsetof(UFortArmoredBattleBusVehicleAnimInstance, RearPassengerBoneName) == 1416, "Offset mismatch for UFortArmoredBattleBusVehicleAnimInstance::RearPassengerBoneName");
