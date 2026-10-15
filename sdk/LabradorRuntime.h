/**
 * decamp dumper generated SDK
 * Package: /Script/LabradorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LabradorRuntime.FortAIFaunaAnimInstance_Labrador
// Kind: Class; super: FortAIFaunaAnimInstance
class UFortAIFaunaAnimInstance_Labrador
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    std::uint8_t bHighVelocity; // 0x0610 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInterruptible; // 0x0611 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocoToIdle; // 0x0612 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToLoco; // 0x0613 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpStartToJumpLoop; // 0x0614 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpLandToMovement; // 0x0615 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRunning; // 0x0616 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToFalling; // 0x0617 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToppledOnGround; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionToLand; // 0x0619 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x061A
    float TargetDistance; // 0x061C (Size: 0x4, Type: FloatProperty)
    float FPWeight; // 0x0620 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTargetIsClose; // 0x0624 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToMovement; // 0x0625 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToStartled; // 0x0626 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandToMovement; // 0x0627 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsToppled; // 0x0628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeaking; // 0x0629 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustLanded; // 0x062A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x062B
    float MinHighVelocityMagnitude; // 0x062C (Size: 0x4, Type: FloatProperty)
    float MaxInterruptibleCurveValue; // 0x0630 (Size: 0x4, Type: FloatProperty)
    float LocoIdleTransitionThreshold; // 0x0634 (Size: 0x4, Type: FloatProperty)
    float RunSpeedThreshold; // 0x0638 (Size: 0x4, Type: FloatProperty)
    float JumpLandToMovementInterruptibleThreshold; // 0x063C (Size: 0x4, Type: FloatProperty)
    float MinTargetIsCloseDistance; // 0x0640 (Size: 0x4, Type: FloatProperty)
    FName CurveName_Interruptible; // 0x0644 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bHighVelocity) == 1552, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bHighVelocity");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsInterruptible) == 1553, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIsInterruptible");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bLocoToIdle) == 1554, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bLocoToIdle");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToLoco) == 1555, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIdleToLoco");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bJumpStartToJumpLoop) == 1556, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bJumpStartToJumpLoop");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bJumpLandToMovement) == 1557, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bJumpLandToMovement");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsRunning) == 1558, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIsRunning");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToFalling) == 1559, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIdleToFalling");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bToppledOnGround) == 1560, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bToppledOnGround");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bTransitionToLand) == 1561, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bTransitionToLand");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, TargetDistance) == 1564, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::TargetDistance");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, FPWeight) == 1568, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::FPWeight");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bTargetIsClose) == 1572, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bTargetIsClose");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToMovement) == 1573, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIdleToMovement");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIdleToStartled) == 1574, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIdleToStartled");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bLandToMovement) == 1575, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bLandToMovement");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsToppled) == 1576, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIsToppled");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bIsLeaking) == 1577, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bIsLeaking");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, bJustLanded) == 1578, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::bJustLanded");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MinHighVelocityMagnitude) == 1580, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::MinHighVelocityMagnitude");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MaxInterruptibleCurveValue) == 1584, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::MaxInterruptibleCurveValue");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, LocoIdleTransitionThreshold) == 1588, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::LocoIdleTransitionThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, RunSpeedThreshold) == 1592, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::RunSpeedThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, JumpLandToMovementInterruptibleThreshold) == 1596, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::JumpLandToMovementInterruptibleThreshold");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, MinTargetIsCloseDistance) == 1600, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::MinTargetIsCloseDistance");
static_assert(offsetof(UFortAIFaunaAnimInstance_Labrador, CurveName_Interruptible) == 1604, "Offset mismatch for UFortAIFaunaAnimInstance_Labrador::CurveName_Interruptible");

// /Script/LabradorRuntime.FortLabradorComponent_Telemetry
// Kind: Class; super: FortAIComponent_Telemetry
class UFortLabradorComponent_Telemetry
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t bWasAwake; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0129
    FString InstigatorAwakeNetIDString; // 0x0130 (Size: 0x10, Type: StrProperty)
    std::uint8_t DespawnReason; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0141
    float DamageReceivedFromPlayers; // 0x0144 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortLabradorComponent_Telemetry, bWasAwake) == 296, "Offset mismatch for UFortLabradorComponent_Telemetry::bWasAwake");
static_assert(offsetof(UFortLabradorComponent_Telemetry, InstigatorAwakeNetIDString) == 304, "Offset mismatch for UFortLabradorComponent_Telemetry::InstigatorAwakeNetIDString");
static_assert(offsetof(UFortLabradorComponent_Telemetry, DespawnReason) == 320, "Offset mismatch for UFortLabradorComponent_Telemetry::DespawnReason");
static_assert(offsetof(UFortLabradorComponent_Telemetry, DamageReceivedFromPlayers) == 324, "Offset mismatch for UFortLabradorComponent_Telemetry::DamageReceivedFromPlayers");
