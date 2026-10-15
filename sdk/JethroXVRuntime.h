/**
 * decamp dumper generated SDK
 * Package: /Script/JethroXVRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JethroXVRuntime.FortVehicleLayerAnimInstance_JethroXVPassenger
// Kind: Class; super: FortVehicleLayerAnimInstance_FerretPassenger
class UFortVehicleLayerAnimInstance_JethroXVPassenger
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    float ReturnValueYPitch; // 0x0400 (Size: 0x4, Type: FloatProperty)
    float ReturnValueXRoll; // 0x0404 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortVehicleLayerAnimInstance_JethroXVPassenger, ReturnValueYPitch) == 1024, "Offset mismatch for UFortVehicleLayerAnimInstance_JethroXVPassenger::ReturnValueYPitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_JethroXVPassenger, ReturnValueXRoll) == 1028, "Offset mismatch for UFortVehicleLayerAnimInstance_JethroXVPassenger::ReturnValueXRoll");

// /Script/JethroXVRuntime.JethroXVVehicleLayerAnimInstance
// Kind: Class; super: FortVehicleLayerAnimInstance
class UJethroXVVehicleLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    float TakeOffStartPos; // 0x0470 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0474
    double Repairing; // 0x0478 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bFlight; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartUp; // 0x0481 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_Hover; // 0x0482 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_HoverFlightConduit; // 0x0483 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_ToLanding; // 0x0484 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartUpLift; // 0x0485 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFP_Landing_to_CancelLanding; // 0x0486 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0487
    std::uint8_t StartupTagName[0x4]; // 0x0488 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartupLiftTagName[0x4]; // 0x048C (Size: 0x4, Type: StructProperty)
    std::uint8_t ConstantSpeedLandingTagName[0x4]; // 0x0490 (Size: 0x4, Type: StructProperty)
    std::uint8_t ForceCurveLandingTagName[0x4]; // 0x0494 (Size: 0x4, Type: StructProperty)
    std::uint8_t HoverTagName[0x4]; // 0x0498 (Size: 0x4, Type: StructProperty)
    std::uint8_t FlightTagName[0x4]; // 0x049C (Size: 0x4, Type: StructProperty)
    std::uint8_t RebootingTagName[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, TakeOffStartPos) == 1136, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::TakeOffStartPos");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, Repairing) == 1144, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::Repairing");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bFlight) == 1152, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bFlight");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bStartUp) == 1153, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bStartUp");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bFP_Hover) == 1154, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bFP_Hover");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bFP_HoverFlightConduit) == 1155, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bFP_HoverFlightConduit");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bFP_ToLanding) == 1156, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bFP_ToLanding");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bStartUpLift) == 1157, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bStartUpLift");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, bFP_Landing_to_CancelLanding) == 1158, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::bFP_Landing_to_CancelLanding");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, StartupTagName) == 1160, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::StartupTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, StartupLiftTagName) == 1164, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::StartupLiftTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, ConstantSpeedLandingTagName) == 1168, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::ConstantSpeedLandingTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, ForceCurveLandingTagName) == 1172, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::ForceCurveLandingTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, HoverTagName) == 1176, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::HoverTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, FlightTagName) == 1180, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::FlightTagName");
static_assert(offsetof(UJethroXVVehicleLayerAnimInstance, RebootingTagName) == 1184, "Offset mismatch for UJethroXVVehicleLayerAnimInstance::RebootingTagName");
