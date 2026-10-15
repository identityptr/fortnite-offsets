/**
 * decamp dumper generated SDK
 * Package: /Script/SproutVehiclesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SproutVehiclesRuntime.JunoVehicleAnimInstance_Jackal
// Kind: Class; super: FortVehicleAnimInstance
class UJunoVehicleAnimInstance_Jackal
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    void* JackalVehicle; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsSprinting; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LocomotionCardinalDirection; // 0x0509 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x050A
    float RunForwardAlpha; // 0x050C (Size: 0x4, Type: FloatProperty)
    float LeanYaw; // 0x0510 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMoving; // 0x0514 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInAir; // 0x0515 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVehicleJumping; // 0x0516 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x0517 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnSlope; // 0x0518 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayMovingFast; // 0x0519 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayDriveSouth; // 0x051A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToMovementStartTransition; // 0x051B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMovementLoopToMovementStopTransition; // 0x051C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocomotionPoseToJumpTransitionAndNotBoosting; // 0x051D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpToLocomotionPoseTransition; // 0x051E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToMovementLoopTransition; // 0x051F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMovementLoopToPivotTransition; // 0x0520 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMovementLoopToIdleTransition; // 0x0521 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpApexToJumpFallTransition; // 0x0522 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultToJumpStartTransition; // 0x0523 (Size: 0x1, Type: BoolProperty)
    float SlopeCheckPitchThresholdDegrees; // 0x0524 (Size: 0x4, Type: FloatProperty)
    float SlopeCheckYawThresholdDegrees; // 0x0528 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayingEmote; // 0x052C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, JackalVehicle) == 1280, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::JackalVehicle");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsSprinting) == 1288, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsSprinting");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, LocomotionCardinalDirection) == 1289, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::LocomotionCardinalDirection");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, RunForwardAlpha) == 1292, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::RunForwardAlpha");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, LeanYaw) == 1296, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::LeanYaw");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsMoving) == 1300, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsMoving");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bInAir) == 1301, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bInAir");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsVehicleJumping) == 1302, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsVehicleJumping");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsBoosting) == 1303, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsBoosting");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsOnSlope) == 1304, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsOnSlope");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bPlayMovingFast) == 1305, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bPlayMovingFast");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bPlayDriveSouth) == 1306, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bPlayDriveSouth");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIdleToMovementStartTransition) == 1307, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIdleToMovementStartTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bMovementLoopToMovementStopTransition) == 1308, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bMovementLoopToMovementStopTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bLocomotionPoseToJumpTransitionAndNotBoosting) == 1309, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bLocomotionPoseToJumpTransitionAndNotBoosting");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bJumpToLocomotionPoseTransition) == 1310, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bJumpToLocomotionPoseTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIdleToMovementLoopTransition) == 1311, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIdleToMovementLoopTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bMovementLoopToPivotTransition) == 1312, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bMovementLoopToPivotTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bMovementLoopToIdleTransition) == 1313, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bMovementLoopToIdleTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bJumpApexToJumpFallTransition) == 1314, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bJumpApexToJumpFallTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bDefaultToJumpStartTransition) == 1315, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bDefaultToJumpStartTransition");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, SlopeCheckPitchThresholdDegrees) == 1316, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::SlopeCheckPitchThresholdDegrees");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, SlopeCheckYawThresholdDegrees) == 1320, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::SlopeCheckYawThresholdDegrees");
static_assert(offsetof(UJunoVehicleAnimInstance_Jackal, bIsPlayingEmote) == 1324, "Offset mismatch for UJunoVehicleAnimInstance_Jackal::bIsPlayingEmote");

// /Script/SproutVehiclesRuntime.JunoVehicleLayerAnimInstance_Jackal
// Kind: Class; super: FortVehicleLayerAnimInstance
class UJunoVehicleLayerAnimInstance_Jackal
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    void* JackalVehicle; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    float AimYaw; // 0x0478 (Size: 0x4, Type: FloatProperty)
    float AimPitch; // 0x047C (Size: 0x4, Type: FloatProperty)
    float LeanYaw; // 0x0480 (Size: 0x4, Type: FloatProperty)
    float SteerAngle; // 0x0484 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsMoving; // 0x0488 (Size: 0x1, Type: BoolProperty)
    // 0x0488 BoolProperty bIsMovingForward (shared storage)
    // 0x0488 BoolProperty bIsPlayingEmote (shared storage)
    // 0x0488 BoolProperty bIsReversing (shared storage)
    // 0x0488 BoolProperty bIsSprinting (shared storage)
    // 0x0488 BoolProperty bLocomotionPoseToJumpTransitionAndNotOnWater (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0489
    std::uint8_t EmoteHoverboardPosition[0x18]; // 0x0490 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmoteHoverboardRotation[0x1]; // 0x04A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, JackalVehicle) == 1136, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::JackalVehicle");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, AimYaw) == 1144, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::AimYaw");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, AimPitch) == 1148, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::AimPitch");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, LeanYaw) == 1152, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::LeanYaw");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, SteerAngle) == 1156, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::SteerAngle");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, bIsMoving) == 1160, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::bIsMoving");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, EmoteHoverboardPosition) == 1168, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::EmoteHoverboardPosition");
static_assert(offsetof(UJunoVehicleLayerAnimInstance_Jackal, EmoteHoverboardRotation) == 1192, "Offset mismatch for UJunoVehicleLayerAnimInstance_Jackal::EmoteHoverboardRotation");

// /Script/SproutVehiclesRuntime.SproutVehicle_InteractionOverrideComponent
// Kind: Class; super: FortVehicleInteractionOverrideComponent
class USproutVehicle_InteractionOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bPrimaryInteractionAvailable; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryInteractionAvailable; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00D2
    std::uint8_t SecondaryInteractionText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryInteractionSubText[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    FMulticastInlineDelegate OnServerSecondaryInteraction; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutVehicle_InteractionOverrideComponent, bPrimaryInteractionAvailable) == 208, "Offset mismatch for USproutVehicle_InteractionOverrideComponent::bPrimaryInteractionAvailable");
static_assert(offsetof(USproutVehicle_InteractionOverrideComponent, bSecondaryInteractionAvailable) == 209, "Offset mismatch for USproutVehicle_InteractionOverrideComponent::bSecondaryInteractionAvailable");
static_assert(offsetof(USproutVehicle_InteractionOverrideComponent, SecondaryInteractionText) == 216, "Offset mismatch for USproutVehicle_InteractionOverrideComponent::SecondaryInteractionText");
static_assert(offsetof(USproutVehicle_InteractionOverrideComponent, SecondaryInteractionSubText) == 232, "Offset mismatch for USproutVehicle_InteractionOverrideComponent::SecondaryInteractionSubText");
static_assert(offsetof(USproutVehicle_InteractionOverrideComponent, OnServerSecondaryInteraction) == 248, "Offset mismatch for USproutVehicle_InteractionOverrideComponent::OnServerSecondaryInteraction");
