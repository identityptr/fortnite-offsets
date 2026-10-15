/**
 * decamp dumper generated SDK
 * Package: /Script/TeaCakeSpacePlungeSharedRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TeaCakeSpacePlungeSharedRuntime.DarkVoyagerDroneCreatureAnimInstance
// Kind: Class; super: FortAIAnimInstance
class UDarkVoyagerDroneCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t bDoHitReact; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bState_IsAlerted; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bState_IsScanning; // 0x0492 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bState_IsMoving; // 0x0493 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMovingToAlerted_Transition; // 0x0494 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0495
    std::uint8_t AlertedTagName[0x4]; // 0x0498 (Size: 0x4, Type: StructProperty)
    std::uint8_t ScanningTagName[0x4]; // 0x049C (Size: 0x4, Type: StructProperty)
    std::uint8_t MovingTagName[0x1]; // 0x04A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, bDoHitReact) == 1168, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::bDoHitReact");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, bState_IsAlerted) == 1169, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::bState_IsAlerted");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, bState_IsScanning) == 1170, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::bState_IsScanning");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, bState_IsMoving) == 1171, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::bState_IsMoving");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, bMovingToAlerted_Transition) == 1172, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::bMovingToAlerted_Transition");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, AlertedTagName) == 1176, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::AlertedTagName");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, ScanningTagName) == 1180, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::ScanningTagName");
static_assert(offsetof(UDarkVoyagerDroneCreatureAnimInstance, MovingTagName) == 1184, "Offset mismatch for UDarkVoyagerDroneCreatureAnimInstance::MovingTagName");

// /Script/TeaCakeSpacePlungeSharedRuntime.TeacakeSpacePlungeDroneBase
// Kind: Class; super: BuildingGameplayActor
class UTeacakeSpacePlungeDroneBase
{
public:
    std::uint8_t Pad_0000[0x6C8]; // 0x0000
    void* InherentAbilitySets; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x06D0
    std::uint8_t DamageStatHandle[0x10]; // 0x06F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAllowRidingOnActor; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0701
    FMulticastInlineDelegate OnProximityPulseDelegate; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityPrePulseDelegate; // 0x0718 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityEffectsAppliedDelegate; // 0x0728 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoAppliedToTouchingActor; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoChangedForExitingTouchActor; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDidDamage; // 0x0758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIgnoreInstigatorCollision; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddOwnerVelocity; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x076A
    std::int32_t AbilitySourceLevel; // 0x076C (Size: 0x4, Type: IntProperty)
    std::uint8_t DeliverableAbilityInfo[0xA0]; // 0x0770 (Size: 0xA0, Type: StructProperty)
    std::uint8_t bApplyDefaultEnabledAbilityBucketsOnInit; // 0x0810 (Size: 0x1, Type: BoolProperty)
    // 0x0810 BoolProperty bBlockMarking (shared storage)
    // 0x0810 BoolProperty bCanBeMarked (shared storage)
    // 0x0810 BoolProperty bShowInteractKeybind (shared storage)
    // 0x0810 BoolProperty bUseSimpleActorTouchSetupForAbilityBuckets (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0811
    std::uint8_t MarkerDisplay[0xB0]; // 0x0818 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    void* RegisteredTouchComponent; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x08E8
    std::uint8_t AnalyticsTags[0x20]; // 0x08F0 (Size: 0x20, Type: StructProperty)
    float PostProcessOverlapBlendWeight; // 0x0910 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0914
    void* CustomInteractionWidget; // 0x0918 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTeacakeSpacePlungeDroneBase, InherentAbilitySets) == 1736, "Offset mismatch for UTeacakeSpacePlungeDroneBase::InherentAbilitySets");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, DamageStatHandle) == 1776, "Offset mismatch for UTeacakeSpacePlungeDroneBase::DamageStatHandle");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, bAllowRidingOnActor) == 1792, "Offset mismatch for UTeacakeSpacePlungeDroneBase::bAllowRidingOnActor");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnProximityPulseDelegate) == 1800, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnProximityPulseDelegate");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnProximityPrePulseDelegate");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, OnDidDamage) == 1880, "Offset mismatch for UTeacakeSpacePlungeDroneBase::OnDidDamage");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UTeacakeSpacePlungeDroneBase::bIgnoreInstigatorCollision");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, bAddOwnerVelocity) == 1897, "Offset mismatch for UTeacakeSpacePlungeDroneBase::bAddOwnerVelocity");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, AbilitySourceLevel) == 1900, "Offset mismatch for UTeacakeSpacePlungeDroneBase::AbilitySourceLevel");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, DeliverableAbilityInfo) == 1904, "Offset mismatch for UTeacakeSpacePlungeDroneBase::DeliverableAbilityInfo");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UTeacakeSpacePlungeDroneBase::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, MarkerDisplay) == 2072, "Offset mismatch for UTeacakeSpacePlungeDroneBase::MarkerDisplay");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, MarkerPositionOffset) == 2248, "Offset mismatch for UTeacakeSpacePlungeDroneBase::MarkerPositionOffset");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, RegisteredTouchComponent) == 2272, "Offset mismatch for UTeacakeSpacePlungeDroneBase::RegisteredTouchComponent");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, AnalyticsTags) == 2288, "Offset mismatch for UTeacakeSpacePlungeDroneBase::AnalyticsTags");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UTeacakeSpacePlungeDroneBase::PostProcessOverlapBlendWeight");
static_assert(offsetof(UTeacakeSpacePlungeDroneBase, CustomInteractionWidget) == 2328, "Offset mismatch for UTeacakeSpacePlungeDroneBase::CustomInteractionWidget");
