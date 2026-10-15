/**
 * decamp dumper generated SDK
 * Package: /Script/DashRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DashRuntime.FortMovementMode_DashCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_DashCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t AimDirection[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasMovementInput; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_DashCreationData, AimDirection) == 16, "Offset mismatch for FFortMovementMode_DashCreationData::AimDirection");
static_assert(offsetof(FFortMovementMode_DashCreationData, bHasMovementInput) == 40, "Offset mismatch for FFortMovementMode_DashCreationData::bHasMovementInput");

// /Script/DashRuntime.FortAttributeSet_DashCharges
// Kind: Class; super: FortAttributeSet
class UFortAttributeSet_DashCharges
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentDashCharges[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDashCharges[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAttributeSet_DashCharges, CurrentDashCharges) == 72, "Offset mismatch for UFortAttributeSet_DashCharges::CurrentDashCharges");
static_assert(offsetof(UFortAttributeSet_DashCharges, MaxDashCharges) == 112, "Offset mismatch for UFortAttributeSet_DashCharges::MaxDashCharges");

// /Script/DashRuntime.FortMovementMode_DashRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_DashRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_DashRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_DashRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_DashRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_DashRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_DashRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_DashRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_DashRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_DashRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_DashRuntimeData::EndReasonFlags");

// /Script/DashRuntime.FortMovementMode_ExtDash
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtDash
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t DashDistance[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashDuration[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseMovementForTargetDeadzone[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseDynamicZTarget[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicZMaxReverseAngle[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicZMinReverseAngle[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicZReverseModifier[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DynamicZReverseTargetMinZ[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashEndVelocity[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDashEndVelocityUseZ[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashAccelerationMultiplier[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndVelocityMultiplier[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndVelocityMultiplierOnNoUserInput[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRestrictSpeedToExpected[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VelocityOnFinishMode; // 0x03E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03E9
    std::uint8_t ClampVelocityOnFinish[0x28]; // 0x03F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightAboveGround[0x28]; // 0x0418 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnsureHeightAboveGround[0x28]; // 0x0440 (Size: 0x28, Type: StructProperty)
    void* PathOffsetCurve; // 0x0468 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMovementMode_ExtDash, DashDistance) == 440, "Offset mismatch for UFortMovementMode_ExtDash::DashDistance");
static_assert(offsetof(UFortMovementMode_ExtDash, DashDuration) == 480, "Offset mismatch for UFortMovementMode_ExtDash::DashDuration");
static_assert(offsetof(UFortMovementMode_ExtDash, UseMovementForTargetDeadzone) == 520, "Offset mismatch for UFortMovementMode_ExtDash::UseMovementForTargetDeadzone");
static_assert(offsetof(UFortMovementMode_ExtDash, bUseDynamicZTarget) == 560, "Offset mismatch for UFortMovementMode_ExtDash::bUseDynamicZTarget");
static_assert(offsetof(UFortMovementMode_ExtDash, DynamicZMaxReverseAngle) == 600, "Offset mismatch for UFortMovementMode_ExtDash::DynamicZMaxReverseAngle");
static_assert(offsetof(UFortMovementMode_ExtDash, DynamicZMinReverseAngle) == 640, "Offset mismatch for UFortMovementMode_ExtDash::DynamicZMinReverseAngle");
static_assert(offsetof(UFortMovementMode_ExtDash, DynamicZReverseModifier) == 680, "Offset mismatch for UFortMovementMode_ExtDash::DynamicZReverseModifier");
static_assert(offsetof(UFortMovementMode_ExtDash, DynamicZReverseTargetMinZ) == 720, "Offset mismatch for UFortMovementMode_ExtDash::DynamicZReverseTargetMinZ");
static_assert(offsetof(UFortMovementMode_ExtDash, DashEndVelocity) == 760, "Offset mismatch for UFortMovementMode_ExtDash::DashEndVelocity");
static_assert(offsetof(UFortMovementMode_ExtDash, bDashEndVelocityUseZ) == 800, "Offset mismatch for UFortMovementMode_ExtDash::bDashEndVelocityUseZ");
static_assert(offsetof(UFortMovementMode_ExtDash, DashAccelerationMultiplier) == 840, "Offset mismatch for UFortMovementMode_ExtDash::DashAccelerationMultiplier");
static_assert(offsetof(UFortMovementMode_ExtDash, EndVelocityMultiplier) == 880, "Offset mismatch for UFortMovementMode_ExtDash::EndVelocityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtDash, EndVelocityMultiplierOnNoUserInput) == 920, "Offset mismatch for UFortMovementMode_ExtDash::EndVelocityMultiplierOnNoUserInput");
static_assert(offsetof(UFortMovementMode_ExtDash, bRestrictSpeedToExpected) == 960, "Offset mismatch for UFortMovementMode_ExtDash::bRestrictSpeedToExpected");
static_assert(offsetof(UFortMovementMode_ExtDash, VelocityOnFinishMode) == 1000, "Offset mismatch for UFortMovementMode_ExtDash::VelocityOnFinishMode");
static_assert(offsetof(UFortMovementMode_ExtDash, ClampVelocityOnFinish) == 1008, "Offset mismatch for UFortMovementMode_ExtDash::ClampVelocityOnFinish");
static_assert(offsetof(UFortMovementMode_ExtDash, HeightAboveGround) == 1048, "Offset mismatch for UFortMovementMode_ExtDash::HeightAboveGround");
static_assert(offsetof(UFortMovementMode_ExtDash, bEnsureHeightAboveGround) == 1088, "Offset mismatch for UFortMovementMode_ExtDash::bEnsureHeightAboveGround");
static_assert(offsetof(UFortMovementMode_ExtDash, PathOffsetCurve) == 1128, "Offset mismatch for UFortMovementMode_ExtDash::PathOffsetCurve");
