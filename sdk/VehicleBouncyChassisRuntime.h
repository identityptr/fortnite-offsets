/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleBouncyChassisRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleBouncyChassisRuntime.AnimNode_VehicleBouncyChassisController
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_VehicleBouncyChassisController
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t ChassisBone[0xC]; // 0x00C8 (Size: 0xC, Type: StructProperty)
    std::uint8_t BouncyChassis[0x1]; // 0x00D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_VehicleBouncyChassisController, ChassisBone) == 200, "Offset mismatch for FAnimNode_VehicleBouncyChassisController::ChassisBone");
static_assert(offsetof(FAnimNode_VehicleBouncyChassisController, BouncyChassis) == 212, "Offset mismatch for FAnimNode_VehicleBouncyChassisController::BouncyChassis");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisSpringTravel
// Kind: ScriptStruct; super: none
struct FBouncyChassisSpringTravel
{
public:
    std::uint8_t Default[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Popped[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t TireModded[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TireModPopped[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisSpringTravel, Default) == 0, "Offset mismatch for FBouncyChassisSpringTravel::Default");
static_assert(offsetof(FBouncyChassisSpringTravel, Popped) == 8, "Offset mismatch for FBouncyChassisSpringTravel::Popped");
static_assert(offsetof(FBouncyChassisSpringTravel, TireModded) == 16, "Offset mismatch for FBouncyChassisSpringTravel::TireModded");
static_assert(offsetof(FBouncyChassisSpringTravel, TireModPopped) == 24, "Offset mismatch for FBouncyChassisSpringTravel::TireModPopped");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleBoxSpring
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleBoxSpring
{
public:
    std::uint8_t Setup[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisVehicleBoxSpring, Setup) == 0, "Offset mismatch for FBouncyChassisVehicleBoxSpring::Setup");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleBoxSpringSetup
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleBoxSpringSetup
{
public:
    std::uint8_t Strength[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Damping[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxDisplacement[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float MaxSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x004C (Size: 0x4, Type: FloatProperty)
    float MassZOffset; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, Strength) == 0, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::Strength");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, Damping) == 24, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::Damping");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, MaxDisplacement) == 48, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::MaxDisplacement");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, MaxSpeed) == 72, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::MaxSpeed");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, Mass) == 76, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::Mass");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, MassZOffset) == 80, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::MassZOffset");
static_assert(offsetof(FBouncyChassisVehicleBoxSpringSetup, GravityScale) == 84, "Offset mismatch for FBouncyChassisVehicleBoxSpringSetup::GravityScale");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleInstance
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleInstance
{
public:
    std::uint8_t Spring[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisVehicleInstance, Spring) == 0, "Offset mismatch for FBouncyChassisVehicleInstance::Spring");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleSetup
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleSetup
{
public:
    std::uint8_t PitchSpring[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t RollSpring[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t ZSpring[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    float MassZOffset; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseNormalizedDisplacement; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    float ZMaxDrop; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float ZMaxRaise; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float PitchMaxAngleDegrees; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RollMaxAngleDegrees; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DisplacementZOffset; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float PitchScale; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float RollScale; // 0x003C (Size: 0x4, Type: FloatProperty)
    float ZScale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t MaxDisplacement[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBouncyChassisVehicleSetup, PitchSpring) == 0, "Offset mismatch for FBouncyChassisVehicleSetup::PitchSpring");
static_assert(offsetof(FBouncyChassisVehicleSetup, RollSpring) == 8, "Offset mismatch for FBouncyChassisVehicleSetup::RollSpring");
static_assert(offsetof(FBouncyChassisVehicleSetup, ZSpring) == 16, "Offset mismatch for FBouncyChassisVehicleSetup::ZSpring");
static_assert(offsetof(FBouncyChassisVehicleSetup, MassZOffset) == 24, "Offset mismatch for FBouncyChassisVehicleSetup::MassZOffset");
static_assert(offsetof(FBouncyChassisVehicleSetup, GravityScale) == 28, "Offset mismatch for FBouncyChassisVehicleSetup::GravityScale");
static_assert(offsetof(FBouncyChassisVehicleSetup, bUseNormalizedDisplacement) == 32, "Offset mismatch for FBouncyChassisVehicleSetup::bUseNormalizedDisplacement");
static_assert(offsetof(FBouncyChassisVehicleSetup, ZMaxDrop) == 36, "Offset mismatch for FBouncyChassisVehicleSetup::ZMaxDrop");
static_assert(offsetof(FBouncyChassisVehicleSetup, ZMaxRaise) == 40, "Offset mismatch for FBouncyChassisVehicleSetup::ZMaxRaise");
static_assert(offsetof(FBouncyChassisVehicleSetup, PitchMaxAngleDegrees) == 44, "Offset mismatch for FBouncyChassisVehicleSetup::PitchMaxAngleDegrees");
static_assert(offsetof(FBouncyChassisVehicleSetup, RollMaxAngleDegrees) == 48, "Offset mismatch for FBouncyChassisVehicleSetup::RollMaxAngleDegrees");
static_assert(offsetof(FBouncyChassisVehicleSetup, DisplacementZOffset) == 52, "Offset mismatch for FBouncyChassisVehicleSetup::DisplacementZOffset");
static_assert(offsetof(FBouncyChassisVehicleSetup, PitchScale) == 56, "Offset mismatch for FBouncyChassisVehicleSetup::PitchScale");
static_assert(offsetof(FBouncyChassisVehicleSetup, RollScale) == 60, "Offset mismatch for FBouncyChassisVehicleSetup::RollScale");
static_assert(offsetof(FBouncyChassisVehicleSetup, ZScale) == 64, "Offset mismatch for FBouncyChassisVehicleSetup::ZScale");
static_assert(offsetof(FBouncyChassisVehicleSetup, MaxDisplacement) == 72, "Offset mismatch for FBouncyChassisVehicleSetup::MaxDisplacement");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleSpringSettings
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleSpringSettings
{
public:
    float Strength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBouncyChassisVehicleSpringSettings, Strength) == 0, "Offset mismatch for FBouncyChassisVehicleSpringSettings::Strength");
static_assert(offsetof(FBouncyChassisVehicleSpringSettings, Damping) == 4, "Offset mismatch for FBouncyChassisVehicleSpringSettings::Damping");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleState
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleState
{
public:
    float PitchDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RollDegrees; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TranslationZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBouncyChassisVehicleState, PitchDegrees) == 0, "Offset mismatch for FBouncyChassisVehicleState::PitchDegrees");
static_assert(offsetof(FBouncyChassisVehicleState, RollDegrees) == 4, "Offset mismatch for FBouncyChassisVehicleState::RollDegrees");
static_assert(offsetof(FBouncyChassisVehicleState, TranslationZ) == 8, "Offset mismatch for FBouncyChassisVehicleState::TranslationZ");

// /Script/VehicleBouncyChassisRuntime.BouncyChassisVehicleWheelAnimInfo
// Kind: ScriptStruct; super: none
struct FBouncyChassisVehicleWheelAnimInfo
{
public:
    float SpringToWheelOffsetZ; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringTravelRange[0x20]; // 0x0004 (Size: 0x20, Type: StructProperty)
    float WheelRadius; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVehicleRotationAffectTravelRange; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float SpringTravelOffsetWhenTirePopped; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TravelDistance; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, SpringToWheelOffsetZ) == 0, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::SpringToWheelOffsetZ");
static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, SpringTravelRange) == 4, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::SpringTravelRange");
static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, WheelRadius) == 36, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::WheelRadius");
static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, bVehicleRotationAffectTravelRange) == 40, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::bVehicleRotationAffectTravelRange");
static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, SpringTravelOffsetWhenTirePopped) == 44, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::SpringTravelOffsetWhenTirePopped");
static_assert(offsetof(FBouncyChassisVehicleWheelAnimInfo, TravelDistance) == 48, "Offset mismatch for FBouncyChassisVehicleWheelAnimInfo::TravelDistance");

// /Script/VehicleBouncyChassisRuntime.BouncyVehicleSpringInterface
// Kind: Class; super: Interface
class UBouncyVehicleSpringInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleBouncyChassisRuntime.VehicleBouncyChassisAnimInstance
// Kind: Class; super: FortVehicleAnimInstance
class UVehicleBouncyChassisAnimInstance
{
public:
    std::uint8_t Pad_0000[0x508]; // 0x0000
    std::uint8_t BouncyChassis[0x10]; // 0x0508 (Size: 0x10, Type: StructProperty)
    std::uint8_t BouncyChassisSetup[0x60]; // 0x0518 (Size: 0x60, Type: StructProperty)
    float BouncyChassisOnGroundBlend; // 0x0578 (Size: 0x4, Type: FloatProperty)
    float BouncyChassisOffGroundBlend; // 0x057C (Size: 0x4, Type: FloatProperty)
    float BouncyChassisBlendRate; // 0x0580 (Size: 0x4, Type: FloatProperty)
    float VisualSteerAngleInterpRate; // 0x0584 (Size: 0x4, Type: FloatProperty)
    float WheelLerpSpeed; // 0x0588 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WheelInfoFR[0x34]; // 0x058C (Size: 0x34, Type: StructProperty)
    std::uint8_t WheelInfoFL[0x34]; // 0x05C0 (Size: 0x34, Type: StructProperty)
    std::uint8_t WheelInfoBR[0x34]; // 0x05F4 (Size: 0x34, Type: StructProperty)
    std::uint8_t WheelInfoBL[0x34]; // 0x0628 (Size: 0x34, Type: StructProperty)
    std::uint8_t bThrottling; // 0x065C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReversing; // 0x065D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccelerating; // 0x065E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBraking; // 0x065F (Size: 0x1, Type: BoolProperty)
    float Throttle; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float Steering; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float SteeringAngle; // 0x0668 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWheelsOnGround; // 0x066C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x066D
    float ForwardSpeed; // 0x0670 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVehicleBouncyChassisAnimInstance, BouncyChassis) == 1288, "Offset mismatch for UVehicleBouncyChassisAnimInstance::BouncyChassis");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, BouncyChassisSetup) == 1304, "Offset mismatch for UVehicleBouncyChassisAnimInstance::BouncyChassisSetup");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, BouncyChassisOnGroundBlend) == 1400, "Offset mismatch for UVehicleBouncyChassisAnimInstance::BouncyChassisOnGroundBlend");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, BouncyChassisOffGroundBlend) == 1404, "Offset mismatch for UVehicleBouncyChassisAnimInstance::BouncyChassisOffGroundBlend");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, BouncyChassisBlendRate) == 1408, "Offset mismatch for UVehicleBouncyChassisAnimInstance::BouncyChassisBlendRate");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, VisualSteerAngleInterpRate) == 1412, "Offset mismatch for UVehicleBouncyChassisAnimInstance::VisualSteerAngleInterpRate");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, WheelLerpSpeed) == 1416, "Offset mismatch for UVehicleBouncyChassisAnimInstance::WheelLerpSpeed");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, WheelInfoFR) == 1420, "Offset mismatch for UVehicleBouncyChassisAnimInstance::WheelInfoFR");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, WheelInfoFL) == 1472, "Offset mismatch for UVehicleBouncyChassisAnimInstance::WheelInfoFL");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, WheelInfoBR) == 1524, "Offset mismatch for UVehicleBouncyChassisAnimInstance::WheelInfoBR");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, WheelInfoBL) == 1576, "Offset mismatch for UVehicleBouncyChassisAnimInstance::WheelInfoBL");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, bThrottling) == 1628, "Offset mismatch for UVehicleBouncyChassisAnimInstance::bThrottling");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, bReversing) == 1629, "Offset mismatch for UVehicleBouncyChassisAnimInstance::bReversing");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, bAccelerating) == 1630, "Offset mismatch for UVehicleBouncyChassisAnimInstance::bAccelerating");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, bBraking) == 1631, "Offset mismatch for UVehicleBouncyChassisAnimInstance::bBraking");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, Throttle) == 1632, "Offset mismatch for UVehicleBouncyChassisAnimInstance::Throttle");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, Steering) == 1636, "Offset mismatch for UVehicleBouncyChassisAnimInstance::Steering");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, SteeringAngle) == 1640, "Offset mismatch for UVehicleBouncyChassisAnimInstance::SteeringAngle");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, bWheelsOnGround) == 1644, "Offset mismatch for UVehicleBouncyChassisAnimInstance::bWheelsOnGround");
static_assert(offsetof(UVehicleBouncyChassisAnimInstance, ForwardSpeed) == 1648, "Offset mismatch for UVehicleBouncyChassisAnimInstance::ForwardSpeed");
