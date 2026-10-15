/**
 * decamp dumper generated SDK
 * Package: /Script/GravWellGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GravWellGameplayRuntime.GravWellProjectileMovementComponent
// Kind: Class; super: FortProjectileMovementComponent_FloorSnapped
class UGravWellProjectileMovementComponent
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    FMulticastInlineDelegate OnIsSlidingChanged; // 0x0450 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSteepSlopeWasHit; // 0x0460 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PhaseThroughActorsTagQuery[0x48]; // 0x0470 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaxClimbableSlope[0x28]; // 0x04B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GravityScaleAfterTouchedFloor[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    float MaxPenetrationDepthAllowedForSliding; // 0x0508 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumFramesBeforeHandleStoppedDeflecting; // 0x050C (Size: 0x4, Type: IntProperty)
    float ReplicatedGravity; // 0x0510 (Size: 0x4, Type: FloatProperty)
    float CorrectionDuration; // 0x0514 (Size: 0x4, Type: FloatProperty)
    float CorrectionUpSpeed; // 0x0518 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x051C
    std::uint8_t FloatAwayFromSurfaceDistance[0x28]; // 0x0520 (Size: 0x28, Type: StructProperty)
    std::uint8_t bNeedsCorrection; // 0x0548 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitingForDeflectionStop; // 0x0549 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x054A
    std::int32_t NumFramesNotMoved; // 0x054C (Size: 0x4, Type: IntProperty)
    std::int32_t NumFramesSinceDeflection; // 0x0550 (Size: 0x4, Type: IntProperty)
    std::int32_t NumFramesNotMovedToConsiderStuck; // 0x0554 (Size: 0x4, Type: IntProperty)
    std::uint8_t LastRecordedLocation[0x18]; // 0x0558 (Size: 0x18, Type: StructProperty)
    float TimeElapsedSinceCorrectionStarted; // 0x0570 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0574
    std::uint8_t DebugCorrectionDrawingTimerHandle[0x1]; // 0x0578 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGravWellProjectileMovementComponent, OnIsSlidingChanged) == 1104, "Offset mismatch for UGravWellProjectileMovementComponent::OnIsSlidingChanged");
static_assert(offsetof(UGravWellProjectileMovementComponent, OnSteepSlopeWasHit) == 1120, "Offset mismatch for UGravWellProjectileMovementComponent::OnSteepSlopeWasHit");
static_assert(offsetof(UGravWellProjectileMovementComponent, PhaseThroughActorsTagQuery) == 1136, "Offset mismatch for UGravWellProjectileMovementComponent::PhaseThroughActorsTagQuery");
static_assert(offsetof(UGravWellProjectileMovementComponent, MaxClimbableSlope) == 1208, "Offset mismatch for UGravWellProjectileMovementComponent::MaxClimbableSlope");
static_assert(offsetof(UGravWellProjectileMovementComponent, GravityScaleAfterTouchedFloor) == 1248, "Offset mismatch for UGravWellProjectileMovementComponent::GravityScaleAfterTouchedFloor");
static_assert(offsetof(UGravWellProjectileMovementComponent, MaxPenetrationDepthAllowedForSliding) == 1288, "Offset mismatch for UGravWellProjectileMovementComponent::MaxPenetrationDepthAllowedForSliding");
static_assert(offsetof(UGravWellProjectileMovementComponent, NumFramesBeforeHandleStoppedDeflecting) == 1292, "Offset mismatch for UGravWellProjectileMovementComponent::NumFramesBeforeHandleStoppedDeflecting");
static_assert(offsetof(UGravWellProjectileMovementComponent, ReplicatedGravity) == 1296, "Offset mismatch for UGravWellProjectileMovementComponent::ReplicatedGravity");
static_assert(offsetof(UGravWellProjectileMovementComponent, CorrectionDuration) == 1300, "Offset mismatch for UGravWellProjectileMovementComponent::CorrectionDuration");
static_assert(offsetof(UGravWellProjectileMovementComponent, CorrectionUpSpeed) == 1304, "Offset mismatch for UGravWellProjectileMovementComponent::CorrectionUpSpeed");
static_assert(offsetof(UGravWellProjectileMovementComponent, FloatAwayFromSurfaceDistance) == 1312, "Offset mismatch for UGravWellProjectileMovementComponent::FloatAwayFromSurfaceDistance");
static_assert(offsetof(UGravWellProjectileMovementComponent, bNeedsCorrection) == 1352, "Offset mismatch for UGravWellProjectileMovementComponent::bNeedsCorrection");
static_assert(offsetof(UGravWellProjectileMovementComponent, bWaitingForDeflectionStop) == 1353, "Offset mismatch for UGravWellProjectileMovementComponent::bWaitingForDeflectionStop");
static_assert(offsetof(UGravWellProjectileMovementComponent, NumFramesNotMoved) == 1356, "Offset mismatch for UGravWellProjectileMovementComponent::NumFramesNotMoved");
static_assert(offsetof(UGravWellProjectileMovementComponent, NumFramesSinceDeflection) == 1360, "Offset mismatch for UGravWellProjectileMovementComponent::NumFramesSinceDeflection");
static_assert(offsetof(UGravWellProjectileMovementComponent, NumFramesNotMovedToConsiderStuck) == 1364, "Offset mismatch for UGravWellProjectileMovementComponent::NumFramesNotMovedToConsiderStuck");
static_assert(offsetof(UGravWellProjectileMovementComponent, LastRecordedLocation) == 1368, "Offset mismatch for UGravWellProjectileMovementComponent::LastRecordedLocation");
static_assert(offsetof(UGravWellProjectileMovementComponent, TimeElapsedSinceCorrectionStarted) == 1392, "Offset mismatch for UGravWellProjectileMovementComponent::TimeElapsedSinceCorrectionStarted");
static_assert(offsetof(UGravWellProjectileMovementComponent, DebugCorrectionDrawingTimerHandle) == 1400, "Offset mismatch for UGravWellProjectileMovementComponent::DebugCorrectionDrawingTimerHandle");

// /Script/GravWellGameplayRuntime.GravWellShield
// Kind: Class; super: BuildingGameplayActor
class UGravWellShield
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t ShieldMaximumSpeed[0x28]; // 0x0920 (Size: 0x28, Type: StructProperty)
    void* ProjectileMovementComponentFloor; // 0x0948 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGravWellShield, ShieldMaximumSpeed) == 2336, "Offset mismatch for UGravWellShield::ShieldMaximumSpeed");
static_assert(offsetof(UGravWellShield, ProjectileMovementComponentFloor) == 2376, "Offset mismatch for UGravWellShield::ProjectileMovementComponentFloor");

// /Script/GravWellGameplayRuntime.GravWellWeapon
// Kind: Class; super: FortWeapon
class UGravWellWeapon
{
public:
    std::uint8_t Pad_0000[0x19F8]; // 0x0000
    std::uint8_t OwnedTagsThatIndicateFiring[0x1]; // 0x19F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGravWellWeapon, OwnedTagsThatIndicateFiring) == 6648, "Offset mismatch for UGravWellWeapon::OwnedTagsThatIndicateFiring");

// /Script/GravWellGameplayRuntime.PolarityLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UPolarityLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float LeapAngle; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float FallTime; // 0x1174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLaunchAbilityActive; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldShieldActive; // 0x1179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanExitLeapFall; // 0x117A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterLeap; // 0x117B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x117D
    std::uint8_t InitialWorldSpaceDodgeDirection[0x1]; // 0x1180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPolarityLayerAnimInstance, LeapAngle) == 4464, "Offset mismatch for UPolarityLayerAnimInstance::LeapAngle");
static_assert(offsetof(UPolarityLayerAnimInstance, FallTime) == 4468, "Offset mismatch for UPolarityLayerAnimInstance::FallTime");
static_assert(offsetof(UPolarityLayerAnimInstance, bLaunchAbilityActive) == 4472, "Offset mismatch for UPolarityLayerAnimInstance::bLaunchAbilityActive");
static_assert(offsetof(UPolarityLayerAnimInstance, bHoldShieldActive) == 4473, "Offset mismatch for UPolarityLayerAnimInstance::bHoldShieldActive");
static_assert(offsetof(UPolarityLayerAnimInstance, bCanExitLeapFall) == 4474, "Offset mismatch for UPolarityLayerAnimInstance::bCanExitLeapFall");
static_assert(offsetof(UPolarityLayerAnimInstance, bCanEnterLeap) == 4475, "Offset mismatch for UPolarityLayerAnimInstance::bCanEnterLeap");
static_assert(offsetof(UPolarityLayerAnimInstance, bIsFiring) == 4476, "Offset mismatch for UPolarityLayerAnimInstance::bIsFiring");
static_assert(offsetof(UPolarityLayerAnimInstance, InitialWorldSpaceDodgeDirection) == 4480, "Offset mismatch for UPolarityLayerAnimInstance::InitialWorldSpaceDodgeDirection");

// /Script/GravWellGameplayRuntime.PolarityWeaponInterface
// Kind: Class; super: Interface
class UPolarityWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
