/**
 * decamp dumper generated SDK
 * Package: /Script/BoostJumpCode
 */
#pragma once
#include "Basic.h"

// /Script/BoostJumpCode.FortBoostedJumpActivationConfig
// Kind: ScriptStruct; super: none
struct FFortBoostedJumpActivationConfig
{
public:
    std::uint8_t MinSpeedToActivate[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTimeSpentInModeToActivate[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t EdgeMinHeightToTheGround[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t EdgeForwardPredictionMultiplier[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortBoostedJumpActivationConfig, MinSpeedToActivate) == 0, "Offset mismatch for FFortBoostedJumpActivationConfig::MinSpeedToActivate");
static_assert(offsetof(FFortBoostedJumpActivationConfig, MinTimeSpentInModeToActivate) == 40, "Offset mismatch for FFortBoostedJumpActivationConfig::MinTimeSpentInModeToActivate");
static_assert(offsetof(FFortBoostedJumpActivationConfig, EdgeMinHeightToTheGround) == 80, "Offset mismatch for FFortBoostedJumpActivationConfig::EdgeMinHeightToTheGround");
static_assert(offsetof(FFortBoostedJumpActivationConfig, EdgeForwardPredictionMultiplier) == 120, "Offset mismatch for FFortBoostedJumpActivationConfig::EdgeForwardPredictionMultiplier");

// /Script/BoostJumpCode.FortControllerComponent_BoostedJump
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_BoostedJump
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DefaultBlockingTags[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoostedJumpCanBeActivatedTag[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    void* MovementModeExtension; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BoostJumpWalkingConfig[0xA0]; // 0x00F0 (Size: 0xA0, Type: StructProperty)
    std::uint8_t BoostedJumpFeatureEnabled[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    float BoostedJumpMonitorRate; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoostedJumpContextualTutorialTag[0x1]; // 0x01BC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_BoostedJump, DefaultBlockingTags) == 192, "Offset mismatch for UFortControllerComponent_BoostedJump::DefaultBlockingTags");
static_assert(offsetof(UFortControllerComponent_BoostedJump, BoostedJumpCanBeActivatedTag) == 224, "Offset mismatch for UFortControllerComponent_BoostedJump::BoostedJumpCanBeActivatedTag");
static_assert(offsetof(UFortControllerComponent_BoostedJump, MovementModeExtension) == 232, "Offset mismatch for UFortControllerComponent_BoostedJump::MovementModeExtension");
static_assert(offsetof(UFortControllerComponent_BoostedJump, BoostJumpWalkingConfig) == 240, "Offset mismatch for UFortControllerComponent_BoostedJump::BoostJumpWalkingConfig");
static_assert(offsetof(UFortControllerComponent_BoostedJump, BoostedJumpFeatureEnabled) == 400, "Offset mismatch for UFortControllerComponent_BoostedJump::BoostedJumpFeatureEnabled");
static_assert(offsetof(UFortControllerComponent_BoostedJump, BoostedJumpMonitorRate) == 440, "Offset mismatch for UFortControllerComponent_BoostedJump::BoostedJumpMonitorRate");
static_assert(offsetof(UFortControllerComponent_BoostedJump, BoostedJumpContextualTutorialTag) == 444, "Offset mismatch for UFortControllerComponent_BoostedJump::BoostedJumpContextualTutorialTag");

// /Script/BoostJumpCode.FortMovementMode_BoostedJumpRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_BoostedJumpRuntimeData
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

static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_BoostedJumpRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_BoostedJumpRuntimeData::EndReasonFlags");

// /Script/BoostJumpCode.FortMovementMode_ExtLogicBoostedJump
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicBoostedJump
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t JumpAddedVelocityMultiplier[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpZVelocity[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpHorizontalVelocityMax[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    float MaxTimeSpentInBoostedJump; // 0x0238 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x023C
    void* AnimLayer; // 0x0240 (Size: 0x8, Type: ClassProperty)
    void* CameraStartShake; // 0x0248 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GC_BoostedJumpBeingActivated[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    void* AnimationMontage; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SkipAnimationTag[0x8]; // 0x0260 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreventHolsterTags[0x20]; // 0x0268 (Size: 0x20, Type: StructProperty)
    std::uint8_t AllowPrimaryFireTag[0x4]; // 0x0288 (Size: 0x4, Type: StructProperty)
    std::uint8_t AllowSecondaryFireTag[0x1]; // 0x028C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, JumpAddedVelocityMultiplier) == 448, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::JumpAddedVelocityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, JumpZVelocity) == 488, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::JumpZVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, JumpHorizontalVelocityMax) == 528, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::JumpHorizontalVelocityMax");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, MaxTimeSpentInBoostedJump) == 568, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::MaxTimeSpentInBoostedJump");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, AnimLayer) == 576, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::AnimLayer");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, CameraStartShake) == 584, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::CameraStartShake");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, GC_BoostedJumpBeingActivated) == 592, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::GC_BoostedJumpBeingActivated");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, AnimationMontage) == 600, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::AnimationMontage");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, SkipAnimationTag) == 608, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::SkipAnimationTag");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, PreventHolsterTags) == 616, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::PreventHolsterTags");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, AllowPrimaryFireTag) == 648, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::AllowPrimaryFireTag");
static_assert(offsetof(UFortMovementMode_ExtLogicBoostedJump, AllowSecondaryFireTag) == 652, "Offset mismatch for UFortMovementMode_ExtLogicBoostedJump::AllowSecondaryFireTag");
