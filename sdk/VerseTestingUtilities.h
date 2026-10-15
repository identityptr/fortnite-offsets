/**
 * decamp dumper generated SDK
 * Package: /Script/VerseTestingUtilities
 */
#pragma once
#include "Basic.h"

// /Script/VerseTestingUtilities.ClientEntityData
// Kind: ScriptStruct; super: none
struct FClientEntityData
{
public:
    std::uint64_t VerificationID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint8_t EntityID[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExpectedTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t bIsLocalTransform; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0081
    float Timeout; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClientEntityData, VerificationID) == 0, "Offset mismatch for FClientEntityData::VerificationID");
static_assert(offsetof(FClientEntityData, EntityID) == 8, "Offset mismatch for FClientEntityData::EntityID");
static_assert(offsetof(FClientEntityData, ExpectedTransform) == 32, "Offset mismatch for FClientEntityData::ExpectedTransform");
static_assert(offsetof(FClientEntityData, bIsLocalTransform) == 128, "Offset mismatch for FClientEntityData::bIsLocalTransform");
static_assert(offsetof(FClientEntityData, Timeout) == 132, "Offset mismatch for FClientEntityData::Timeout");

// /Script/VerseTestingUtilities.ClientTeleportData
// Kind: ScriptStruct; super: none
struct FClientTeleportData
{
public:
    std::uint64_t VerificationID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint8_t ExpectedPosition[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExpectedRotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    float PositionTolerance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float RotationToleranceDegrees; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreUp; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0049
    float VelocityTolerance; // 0x004C (Size: 0x4, Type: FloatProperty)
    float Timeout; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClientTeleportData, VerificationID) == 0, "Offset mismatch for FClientTeleportData::VerificationID");
static_assert(offsetof(FClientTeleportData, ExpectedPosition) == 8, "Offset mismatch for FClientTeleportData::ExpectedPosition");
static_assert(offsetof(FClientTeleportData, ExpectedRotation) == 32, "Offset mismatch for FClientTeleportData::ExpectedRotation");
static_assert(offsetof(FClientTeleportData, PositionTolerance) == 64, "Offset mismatch for FClientTeleportData::PositionTolerance");
static_assert(offsetof(FClientTeleportData, RotationToleranceDegrees) == 68, "Offset mismatch for FClientTeleportData::RotationToleranceDegrees");
static_assert(offsetof(FClientTeleportData, bIgnoreUp) == 72, "Offset mismatch for FClientTeleportData::bIgnoreUp");
static_assert(offsetof(FClientTeleportData, VelocityTolerance) == 76, "Offset mismatch for FClientTeleportData::VelocityTolerance");
static_assert(offsetof(FClientTeleportData, Timeout) == 80, "Offset mismatch for FClientTeleportData::Timeout");

// /Script/VerseTestingUtilities.TeleportVerificationComponent
// Kind: Class; super: ActorComponent
class UTeleportVerificationComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> ClientTeleportData; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTeleportVerificationComponent, ClientTeleportData) == 216, "Offset mismatch for UTeleportVerificationComponent::ClientTeleportData");

// /Script/VerseTestingUtilities.TransformVerificationComponent
// Kind: Class; super: ActorComponent
class UTransformVerificationComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> ClientEntityData; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTransformVerificationComponent, ClientEntityData) == 216, "Offset mismatch for UTransformVerificationComponent::ClientEntityData");
