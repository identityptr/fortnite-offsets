/**
 * decamp dumper generated SDK
 * Package: /Script/WallStickCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WallStickCodeRuntime.FortMovementMode_WallStickCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_WallStickCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TargetLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetRotation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> RefActor; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RefActorComponent; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    FName RefActorBoneName; // 0x0050 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortMovementMode_WallStickCreationData, TargetLocation) == 16, "Offset mismatch for FFortMovementMode_WallStickCreationData::TargetLocation");
static_assert(offsetof(FFortMovementMode_WallStickCreationData, TargetRotation) == 40, "Offset mismatch for FFortMovementMode_WallStickCreationData::TargetRotation");
static_assert(offsetof(FFortMovementMode_WallStickCreationData, RefActor) == 64, "Offset mismatch for FFortMovementMode_WallStickCreationData::RefActor");
static_assert(offsetof(FFortMovementMode_WallStickCreationData, RefActorComponent) == 72, "Offset mismatch for FFortMovementMode_WallStickCreationData::RefActorComponent");
static_assert(offsetof(FFortMovementMode_WallStickCreationData, RefActorBoneName) == 80, "Offset mismatch for FFortMovementMode_WallStickCreationData::RefActorBoneName");

// /Script/WallStickCodeRuntime.WallStickTargetingData
// Kind: ScriptStruct; super: ContextualTraversalTargetingData
struct FWallStickTargetingData
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bIsValid; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    TWeakObjectPtr<void> TargetActor; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetActorComponent; // 0x0054 (Size: 0x8, Type: WeakObjectProperty)
    FName TargetActorBoneName; // 0x005C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FWallStickTargetingData, bIsValid) == 72, "Offset mismatch for FWallStickTargetingData::bIsValid");
static_assert(offsetof(FWallStickTargetingData, TargetActor) == 76, "Offset mismatch for FWallStickTargetingData::TargetActor");
static_assert(offsetof(FWallStickTargetingData, TargetActorComponent) == 84, "Offset mismatch for FWallStickTargetingData::TargetActorComponent");
static_assert(offsetof(FWallStickTargetingData, TargetActorBoneName) == 92, "Offset mismatch for FWallStickTargetingData::TargetActorBoneName");

// /Script/WallStickCodeRuntime.FortMovementMode_ExtLogicWallStick
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicWallStick
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* WallRunUpAnimMontage; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    void* WallDropAnimMontage; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreventHolsterTag[0x8]; // 0x01D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t JumpDirectionTolerance[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallStickTime[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    void* FrictionCurve; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MinVertFriction[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxVertFriction[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinVerticalClearanceForUpwardJump[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinForwardCastDistanceBeforeDrop[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PushFromWallBackwardForce[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PushFromWallStateTime[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    void* WallJumpLogicClass; // 0x0320 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ClamberTargetingTag[0x8]; // 0x0328 (Size: 0x8, Type: StructProperty)
    std::uint8_t ClamberMovementTag[0x20]; // 0x0330 (Size: 0x20, Type: StructProperty)
    std::uint8_t AvoidanceDistance[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t AvoidanceDistanceForward[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t AvoidanceHeight[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    void* RunUpFallOffCurve; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RunUpStartZVelocity[0x28]; // 0x03D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InCollisionMaxTime[0x28]; // 0x03F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WallUpAdjustmentClampSpeed[0x28]; // 0x0420 (Size: 0x28, Type: StructProperty)
    void* FallRotationCurve; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AllowDetachWithJump[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    float MaxWallAngleForAdjustment; // 0x0478 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, WallRunUpAnimMontage) == 448, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::WallRunUpAnimMontage");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, WallDropAnimMontage) == 456, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::WallDropAnimMontage");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, PreventHolsterTag) == 464, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::PreventHolsterTag");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, JumpDirectionTolerance) == 472, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::JumpDirectionTolerance");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, WallStickTime) == 512, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::WallStickTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, FrictionCurve) == 552, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::FrictionCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, MinVertFriction) == 560, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::MinVertFriction");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, MaxVertFriction) == 600, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::MaxVertFriction");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, MinVerticalClearanceForUpwardJump) == 640, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::MinVerticalClearanceForUpwardJump");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, MinForwardCastDistanceBeforeDrop) == 680, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::MinForwardCastDistanceBeforeDrop");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, PushFromWallBackwardForce) == 720, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::PushFromWallBackwardForce");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, PushFromWallStateTime) == 760, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::PushFromWallStateTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, WallJumpLogicClass) == 800, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::WallJumpLogicClass");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, ClamberTargetingTag) == 808, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::ClamberTargetingTag");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, ClamberMovementTag) == 816, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::ClamberMovementTag");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, AvoidanceDistance) == 848, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::AvoidanceDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, AvoidanceDistanceForward) == 888, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::AvoidanceDistanceForward");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, AvoidanceHeight) == 928, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::AvoidanceHeight");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, RunUpFallOffCurve) == 968, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::RunUpFallOffCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, RunUpStartZVelocity) == 976, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::RunUpStartZVelocity");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, InCollisionMaxTime) == 1016, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::InCollisionMaxTime");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, WallUpAdjustmentClampSpeed) == 1056, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::WallUpAdjustmentClampSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, FallRotationCurve) == 1096, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::FallRotationCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, AllowDetachWithJump) == 1104, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::AllowDetachWithJump");
static_assert(offsetof(UFortMovementMode_ExtLogicWallStick, MaxWallAngleForAdjustment) == 1144, "Offset mismatch for UFortMovementMode_ExtLogicWallStick::MaxWallAngleForAdjustment");

// /Script/WallStickCodeRuntime.FortMovementMode_WallStickRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_WallStickRuntimeData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t NetSynchedActionWarpPointInfo[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_WallStickRuntimeData, NetSynchedActionWarpPointInfo) == 64, "Offset mismatch for UFortMovementMode_WallStickRuntimeData::NetSynchedActionWarpPointInfo");

// /Script/WallStickCodeRuntime.FortWallStickAnimInstance
// Kind: Class; super: FortBaseLayerAnimInstance
class UFortWallStickAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> MainAnimInstanceWeakPtr; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnableLinkedLayerPersistence; // 0x0338 (Size: 0x1, Type: BoolProperty)
    // 0x0338 BoolProperty bEnableLocomotionAdditives (shared storage)
};

static_assert(offsetof(UFortWallStickAnimInstance, MainAnimInstanceWeakPtr) == 816, "Offset mismatch for UFortWallStickAnimInstance::MainAnimInstanceWeakPtr");
static_assert(offsetof(UFortWallStickAnimInstance, bEnableLinkedLayerPersistence) == 824, "Offset mismatch for UFortWallStickAnimInstance::bEnableLinkedLayerPersistence");

// /Script/WallStickCodeRuntime.WallStickComponent
// Kind: Class; super: FortPawnComponent
class UWallStickComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* MovementModeExtension; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D0
    std::uint8_t WallStickScoringModifier[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickWallLocationZOffset[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickWallLocationForwardDistance[0x30]; // 0x0160 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickWallAngleMax[0x30]; // 0x0190 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickEnabled[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDownVelocityForWallStick[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickSpeedToActivate[0x30]; // 0x0218 (Size: 0x30, Type: StructProperty)
    std::uint8_t AutoStartMovementThreshold[0x30]; // 0x0248 (Size: 0x30, Type: StructProperty)
    std::uint8_t HeldInputDuration[0x30]; // 0x0278 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinTimeInTargeting[0x30]; // 0x02A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t WallStickCeilingCheckDistance[0x2C]; // 0x02D8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t InTargetingRangeTag[0x1]; // 0x0304 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWallStickComponent, MovementModeExtension) == 200, "Offset mismatch for UWallStickComponent::MovementModeExtension");
static_assert(offsetof(UWallStickComponent, WallStickScoringModifier) == 256, "Offset mismatch for UWallStickComponent::WallStickScoringModifier");
static_assert(offsetof(UWallStickComponent, WallStickWallLocationZOffset) == 304, "Offset mismatch for UWallStickComponent::WallStickWallLocationZOffset");
static_assert(offsetof(UWallStickComponent, WallStickWallLocationForwardDistance) == 352, "Offset mismatch for UWallStickComponent::WallStickWallLocationForwardDistance");
static_assert(offsetof(UWallStickComponent, WallStickWallAngleMax) == 400, "Offset mismatch for UWallStickComponent::WallStickWallAngleMax");
static_assert(offsetof(UWallStickComponent, WallStickEnabled) == 448, "Offset mismatch for UWallStickComponent::WallStickEnabled");
static_assert(offsetof(UWallStickComponent, MaxDownVelocityForWallStick) == 488, "Offset mismatch for UWallStickComponent::MaxDownVelocityForWallStick");
static_assert(offsetof(UWallStickComponent, WallStickSpeedToActivate) == 536, "Offset mismatch for UWallStickComponent::WallStickSpeedToActivate");
static_assert(offsetof(UWallStickComponent, AutoStartMovementThreshold) == 584, "Offset mismatch for UWallStickComponent::AutoStartMovementThreshold");
static_assert(offsetof(UWallStickComponent, HeldInputDuration) == 632, "Offset mismatch for UWallStickComponent::HeldInputDuration");
static_assert(offsetof(UWallStickComponent, MinTimeInTargeting) == 680, "Offset mismatch for UWallStickComponent::MinTimeInTargeting");
static_assert(offsetof(UWallStickComponent, WallStickCeilingCheckDistance) == 728, "Offset mismatch for UWallStickComponent::WallStickCeilingCheckDistance");
static_assert(offsetof(UWallStickComponent, InTargetingRangeTag) == 772, "Offset mismatch for UWallStickComponent::InTargetingRangeTag");
