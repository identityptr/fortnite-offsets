/**
 * decamp dumper generated SDK
 * Package: /Script/LabradorRidingContentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LabradorRidingContentRuntime.LocomotionChooserOutput
// Kind: ScriptStruct; super: none
struct FLocomotionChooserOutput
{
public:
    FName CurveName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLocomotionChooserOutput, CurveName) == 0, "Offset mismatch for FLocomotionChooserOutput::CurveName");

// /Script/LabradorRidingContentRuntime.LabradorPlayerLayerAnimInstance
// Kind: Class; super: FortVehicleLayerAnimInstance_Riding
class ULabradorPlayerLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x9F0]; // 0x0000
    float AlphaValue; // 0x09F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x09F4
    double CurrentCurveValue; // 0x09F8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSurfaceSwimming; // 0x0A00 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayStopBackwards; // 0x0A01 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumping_BP; // 0x0A02 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling_BP; // 0x0A03 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleJumpLandMoving; // 0x0A04 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRunning; // 0x0A05 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting_BP; // 0x0A06 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeaningRight; // 0x0A07 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleFallIdle; // 0x0A08 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStateRuleIdleMoving; // 0x0A09 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToMovement; // 0x0A0A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMovementToIdle; // 0x0A0B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIdleToStartled; // 0x0A0C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLandToMovement; // 0x0A0D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0A0E
    FName CurrentCurve; // 0x0A10 (Size: 0x8, Type: NameProperty)
    double AimLeanSwitchThresholdAngleOffset; // 0x0A18 (Size: 0x8, Type: DoubleProperty)
    double MaxLeanAngle; // 0x0A20 (Size: 0x8, Type: DoubleProperty)
    double AimLeanSwitchThresholdAngle; // 0x0A28 (Size: 0x8, Type: DoubleProperty)
    void* LeanfromAngle_FallOff; // 0x0A30 (Size: 0x8, Type: ObjectProperty)
    void* LeanfromAngle; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    void* LabradorRidingPlayerBoostNMAnimMontage; // 0x0A40 (Size: 0x8, Type: ObjectProperty)
    void* LabradorRunBoundingBoostMountedMAnimMontage; // 0x0A48 (Size: 0x8, Type: ObjectProperty)
    void* ChooserLocomotion; // 0x0A50 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Locomotion_Output_Data[0x1]; // 0x0A58 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULabradorPlayerLayerAnimInstance, AlphaValue) == 2544, "Offset mismatch for ULabradorPlayerLayerAnimInstance::AlphaValue");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, CurrentCurveValue) == 2552, "Offset mismatch for ULabradorPlayerLayerAnimInstance::CurrentCurveValue");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsSurfaceSwimming) == 2560, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsSurfaceSwimming");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bShouldPlayStopBackwards) == 2561, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bShouldPlayStopBackwards");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsJumping_BP) == 2562, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsJumping_BP");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsFalling_BP) == 2563, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsFalling_BP");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bStateRuleJumpLandMoving) == 2564, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bStateRuleJumpLandMoving");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsRunning) == 2565, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsRunning");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsBoosting_BP) == 2566, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsBoosting_BP");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIsLeaningRight) == 2567, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIsLeaningRight");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bStateRuleFallIdle) == 2568, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bStateRuleFallIdle");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bStateRuleIdleMoving) == 2569, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bStateRuleIdleMoving");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIdleToMovement) == 2570, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIdleToMovement");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bMovementToIdle) == 2571, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bMovementToIdle");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bIdleToStartled) == 2572, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bIdleToStartled");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, bLandToMovement) == 2573, "Offset mismatch for ULabradorPlayerLayerAnimInstance::bLandToMovement");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, CurrentCurve) == 2576, "Offset mismatch for ULabradorPlayerLayerAnimInstance::CurrentCurve");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, AimLeanSwitchThresholdAngleOffset) == 2584, "Offset mismatch for ULabradorPlayerLayerAnimInstance::AimLeanSwitchThresholdAngleOffset");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, MaxLeanAngle) == 2592, "Offset mismatch for ULabradorPlayerLayerAnimInstance::MaxLeanAngle");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, AimLeanSwitchThresholdAngle) == 2600, "Offset mismatch for ULabradorPlayerLayerAnimInstance::AimLeanSwitchThresholdAngle");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, LeanfromAngle_FallOff) == 2608, "Offset mismatch for ULabradorPlayerLayerAnimInstance::LeanfromAngle_FallOff");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, LeanfromAngle) == 2616, "Offset mismatch for ULabradorPlayerLayerAnimInstance::LeanfromAngle");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, LabradorRidingPlayerBoostNMAnimMontage) == 2624, "Offset mismatch for ULabradorPlayerLayerAnimInstance::LabradorRidingPlayerBoostNMAnimMontage");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, LabradorRunBoundingBoostMountedMAnimMontage) == 2632, "Offset mismatch for ULabradorPlayerLayerAnimInstance::LabradorRunBoundingBoostMountedMAnimMontage");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, ChooserLocomotion) == 2640, "Offset mismatch for ULabradorPlayerLayerAnimInstance::ChooserLocomotion");
static_assert(offsetof(ULabradorPlayerLayerAnimInstance, Locomotion_Output_Data) == 2648, "Offset mismatch for ULabradorPlayerLayerAnimInstance::Locomotion_Output_Data");

// /Script/LabradorRidingContentRuntime.LabradorRidingFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULabradorRidingFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
