/**
 * decamp dumper generated SDK
 * Package: /Script/SkyDivingCode
 */
#pragma once
#include "Basic.h"

// /Script/SkyDivingCode.FortMovementMode_ExtLogicSkyDiving
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicSkyDiving
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t ActiveControlParam[0x140]; // 0x01C8 (Size: 0x140, Type: StructProperty)
    std::uint8_t PassiveControlParam[0x140]; // 0x0308 (Size: 0x140, Type: StructProperty)
    std::uint8_t TerminalVelocityMinimumDrag[0x28]; // 0x0448 (Size: 0x28, Type: StructProperty)
    std::uint8_t VortexOrbitParachuteVelocityMultiplier[0x28]; // 0x0470 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkydiveVortexOrbitDragCoef[0x28]; // 0x0498 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkydiveModifiedJumpHorizontalVelocity[0x28]; // 0x04C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkydivingMaxSmoothUpdateDistanceScale[0x1]; // 0x04E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, ActiveControlParam) == 456, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::ActiveControlParam");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, PassiveControlParam) == 776, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::PassiveControlParam");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, TerminalVelocityMinimumDrag) == 1096, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::TerminalVelocityMinimumDrag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, VortexOrbitParachuteVelocityMultiplier) == 1136, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::VortexOrbitParachuteVelocityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, SkydiveVortexOrbitDragCoef) == 1176, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::SkydiveVortexOrbitDragCoef");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, SkydiveModifiedJumpHorizontalVelocity) == 1216, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::SkydiveModifiedJumpHorizontalVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDiving, SkydivingMaxSmoothUpdateDistanceScale) == 1256, "Offset mismatch for UFortMovementMode_ExtLogicSkyDiving::SkydivingMaxSmoothUpdateDistanceScale");

// /Script/SkyDivingCode.FortMovementMode_ExtLogicSkyDivingFollowing
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicSkyDivingFollowing
{
public:
    std::uint8_t Pad_0000[0x44]; // 0x0000
    TWeakObjectPtr<void> OwnerPawn; // 0x0044 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x0054 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseFullSimulation; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SimProxyTickMode; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseDilatedDeltaTime; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x19]; // 0x005F
    std::uint8_t MovementModeExtensionIDTag[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuestMovementMode; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t StartMMECue[0x4]; // 0x009C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndMMECue[0x4]; // 0x00A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MMEContinuousCue[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbilityIDTag[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t StartEventTag[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t StopEventTag[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeActionTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t BlockingMMETags[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToPush[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t CancelAbilityTags[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilityTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredMMETags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShouldSkipRootMotionResimulation; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSimulatedProxy; // 0x0179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayer; // 0x017A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServer; // 0x017B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServerBotControlled; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x017D
    void* CameraMode; // 0x0188 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    float MaxSpeedThresholdCombine; // 0x0194 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, OwnerPawn) == 68, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::OwnerPawn");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, OwnerMovementComponent) == 76, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::OwnerMovementComponent");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, OwnerAbilitySystemComponent) == 84, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::OwnerAbilitySystemComponent");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bUseFullSimulation) == 92, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bUseFullSimulation");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, SimProxyTickMode) == 93, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::SimProxyTickMode");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bUseDilatedDeltaTime) == 94, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bUseDilatedDeltaTime");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, MovementModeExtensionIDTag) == 120, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::MovementModeExtensionIDTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, QuestMovementMode) == 152, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::QuestMovementMode");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, StartMMECue) == 156, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::StartMMECue");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, EndMMECue) == 160, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::EndMMECue");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, MMEContinuousCue) == 164, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::MMEContinuousCue");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, AbilityIDTag) == 168, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::AbilityIDTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, StartEventTag) == 200, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::StartEventTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, StopEventTag) == 204, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::StopEventTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, NativeActionTag) == 208, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::NativeActionTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, BlockingMMETags) == 216, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::BlockingMMETags");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, TagsToPush) == 248, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::TagsToPush");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, CancelAbilityTags) == 280, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::CancelAbilityTags");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, BlockAbilityTags) == 312, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::BlockAbilityTags");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, RequiredMMETags) == 344, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::RequiredMMETags");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bShouldSkipRootMotionResimulation) == 376, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bShouldSkipRootMotionResimulation");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bIsSimulatedProxy) == 377, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bIsSimulatedProxy");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bIsLocalPlayer) == 378, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bIsLocalPlayer");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bIsServer) == 379, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bIsServer");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, bIsServerBotControlled) == 380, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::bIsServerBotControlled");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, CameraMode) == 392, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::CameraMode");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, CameraModeTag) == 400, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::CameraModeTag");
static_assert(offsetof(UFortMovementMode_ExtLogicSkyDivingFollowing, MaxSpeedThresholdCombine) == 404, "Offset mismatch for UFortMovementMode_ExtLogicSkyDivingFollowing::MaxSpeedThresholdCombine");

// /Script/SkyDivingCode.FortMovementMode_SkyDivingFollowingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_SkyDivingFollowingRuntimeData
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

static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_SkyDivingFollowingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_SkyDivingFollowingRuntimeData::EndReasonFlags");

// /Script/SkyDivingCode.FortMovementMode_SkyDivingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_SkyDivingRuntimeData
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

static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_SkyDivingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_SkyDivingRuntimeData::EndReasonFlags");

// /Script/SkyDivingCode.FortPawnComponent_SkyDiving
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_SkyDiving
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* MovementModeExtensionSkyDiving; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* MovementModeExtensionSkyDivingFollowing; // 0x00E0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortPawnComponent_SkyDiving, MovementModeExtensionSkyDiving) == 216, "Offset mismatch for UFortPawnComponent_SkyDiving::MovementModeExtensionSkyDiving");
static_assert(offsetof(UFortPawnComponent_SkyDiving, MovementModeExtensionSkyDivingFollowing) == 224, "Offset mismatch for UFortPawnComponent_SkyDiving::MovementModeExtensionSkyDivingFollowing");
