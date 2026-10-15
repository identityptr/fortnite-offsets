/**
 * decamp dumper generated SDK
 * Package: /Script/DeployableTurretGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeployableTurretGameplayRuntime.DeployableTurretBPAnimData
// Kind: ScriptStruct; super: none
struct FDeployableTurretBPAnimData
{
public:
    std::uint8_t AimRotation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float SurfaceRollDegrees; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SurfacePitchDegrees; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t State; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDeployableTurretBPAnimData, AimRotation) == 0, "Offset mismatch for FDeployableTurretBPAnimData::AimRotation");
static_assert(offsetof(FDeployableTurretBPAnimData, SurfaceRollDegrees) == 24, "Offset mismatch for FDeployableTurretBPAnimData::SurfaceRollDegrees");
static_assert(offsetof(FDeployableTurretBPAnimData, SurfacePitchDegrees) == 28, "Offset mismatch for FDeployableTurretBPAnimData::SurfacePitchDegrees");
static_assert(offsetof(FDeployableTurretBPAnimData, State) == 32, "Offset mismatch for FDeployableTurretBPAnimData::State");

// /Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance
// Kind: Class; super: AnimInstance
class UDeployableTurretAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bFallAndDeployToDeactivated; // 0x0260 (Size: 0x1, Type: BoolProperty)
    // 0x0260 BoolProperty bIsAggro (shared storage)
    // 0x0260 BoolProperty bIsAttacking (shared storage)
    // 0x0260 BoolProperty bIsDeactivated (shared storage)
    // 0x0260 BoolProperty bIsScanning (shared storage)
    // 0x0260 BoolProperty bIsTracking (shared storage)
    // 0x0260 BoolProperty bIsWindDown (shared storage)
    // 0x0260 BoolProperty bIsWindUp (shared storage)
    std::uint8_t bAggroToFire; // 0x0261 (Size: 0x1, Type: BoolProperty)
    // 0x0261 BoolProperty bFallAndDeployToScan (shared storage)
    // 0x0261 BoolProperty bInterruptibleCurveOverThreshold (shared storage)
    // 0x0261 BoolProperty bTurnEndCurveOverThreshold (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0262
    std::uint8_t InterruptibleCurveName[0x4]; // 0x0264 (Size: 0x4, Type: NameProperty)
    float InterruptibleCurveThreshold; // 0x0268 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TurnEndCurveName[0x4]; // 0x026C (Size: 0x4, Type: NameProperty)
    float TurnEndCurveThreshold; // 0x0270 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0274
    std::uint8_t AimRotationInComponentSpace[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t SurfaceRotation[0x1]; // 0x0290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDeployableTurretAnimInstance, bFallAndDeployToDeactivated) == 608, "Offset mismatch for UDeployableTurretAnimInstance::bFallAndDeployToDeactivated");
static_assert(offsetof(UDeployableTurretAnimInstance, bAggroToFire) == 609, "Offset mismatch for UDeployableTurretAnimInstance::bAggroToFire");
static_assert(offsetof(UDeployableTurretAnimInstance, InterruptibleCurveName) == 612, "Offset mismatch for UDeployableTurretAnimInstance::InterruptibleCurveName");
static_assert(offsetof(UDeployableTurretAnimInstance, InterruptibleCurveThreshold) == 616, "Offset mismatch for UDeployableTurretAnimInstance::InterruptibleCurveThreshold");
static_assert(offsetof(UDeployableTurretAnimInstance, TurnEndCurveName) == 620, "Offset mismatch for UDeployableTurretAnimInstance::TurnEndCurveName");
static_assert(offsetof(UDeployableTurretAnimInstance, TurnEndCurveThreshold) == 624, "Offset mismatch for UDeployableTurretAnimInstance::TurnEndCurveThreshold");
static_assert(offsetof(UDeployableTurretAnimInstance, AimRotationInComponentSpace) == 632, "Offset mismatch for UDeployableTurretAnimInstance::AimRotationInComponentSpace");
static_assert(offsetof(UDeployableTurretAnimInstance, SurfaceRotation) == 656, "Offset mismatch for UDeployableTurretAnimInstance::SurfaceRotation");

// /Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDeployableTurretLibrary
{
public:
    std::uint8_t Opaque[1];
};
