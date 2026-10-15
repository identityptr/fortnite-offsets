/**
 * decamp dumper generated SDK
 * Package: /Script/SpecterGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpecterGameplayRuntime.DootAnalyticsData
// Kind: ScriptStruct; super: none
struct FDootAnalyticsData
{
public:
    FString TargetId; // 0x0000 (Size: 0x10, Type: StrProperty)
    double DootMatchTime; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DootCoords[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    FString DootItemSpawned; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDootAnalyticsData, TargetId) == 0, "Offset mismatch for FDootAnalyticsData::TargetId");
static_assert(offsetof(FDootAnalyticsData, DootMatchTime) == 16, "Offset mismatch for FDootAnalyticsData::DootMatchTime");
static_assert(offsetof(FDootAnalyticsData, DootCoords) == 24, "Offset mismatch for FDootAnalyticsData::DootCoords");
static_assert(offsetof(FDootAnalyticsData, DootItemSpawned) == 48, "Offset mismatch for FDootAnalyticsData::DootItemSpawned");

// /Script/SpecterGameplayRuntime.HauntingAnalyticsData
// Kind: ScriptStruct; super: none
struct FHauntingAnalyticsData
{
public:
    FString TargetId; // 0x0000 (Size: 0x10, Type: StrProperty)
    double HauntStartTime; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double HauntDuration; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FHauntingAnalyticsData, TargetId) == 0, "Offset mismatch for FHauntingAnalyticsData::TargetId");
static_assert(offsetof(FHauntingAnalyticsData, HauntStartTime) == 16, "Offset mismatch for FHauntingAnalyticsData::HauntStartTime");
static_assert(offsetof(FHauntingAnalyticsData, HauntDuration) == 24, "Offset mismatch for FHauntingAnalyticsData::HauntDuration");

// /Script/SpecterGameplayRuntime.FortAthenaMutator_SpecterRespawn
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_SpecterRespawn
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    void* SpecterPawnClass; // 0x0400 (Size: 0x8, Type: ClassProperty)
    FText SpecterRespawnText; // 0x0408 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortAthenaMutator_SpecterRespawn, SpecterPawnClass) == 1024, "Offset mismatch for UFortAthenaMutator_SpecterRespawn::SpecterPawnClass");
static_assert(offsetof(UFortAthenaMutator_SpecterRespawn, SpecterRespawnText) == 1032, "Offset mismatch for UFortAthenaMutator_SpecterRespawn::SpecterRespawnText");

// /Script/SpecterGameplayRuntime.FortMovementMode_SMFlightSpecter
// Kind: Class; super: FortMovementMode_ExtStatefulMovement
class UFortMovementMode_SMFlightSpecter
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    void* InputMappingContext; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* AscendAction; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    void* DescendAction; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MinimumTimeBeforeAllowLanding[0x28]; // 0x0468 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHeightAboveGround[0x28]; // 0x0490 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> WeakRuntimeData; // 0x04B8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_SMFlightSpecter, InputMappingContext) == 1104, "Offset mismatch for UFortMovementMode_SMFlightSpecter::InputMappingContext");
static_assert(offsetof(UFortMovementMode_SMFlightSpecter, AscendAction) == 1112, "Offset mismatch for UFortMovementMode_SMFlightSpecter::AscendAction");
static_assert(offsetof(UFortMovementMode_SMFlightSpecter, DescendAction) == 1120, "Offset mismatch for UFortMovementMode_SMFlightSpecter::DescendAction");
static_assert(offsetof(UFortMovementMode_SMFlightSpecter, MinimumTimeBeforeAllowLanding) == 1128, "Offset mismatch for UFortMovementMode_SMFlightSpecter::MinimumTimeBeforeAllowLanding");
static_assert(offsetof(UFortMovementMode_SMFlightSpecter, MaxHeightAboveGround) == 1168, "Offset mismatch for UFortMovementMode_SMFlightSpecter::MaxHeightAboveGround");
static_assert(offsetof(UFortMovementMode_SMFlightSpecter, WeakRuntimeData) == 1208, "Offset mismatch for UFortMovementMode_SMFlightSpecter::WeakRuntimeData");

// /Script/SpecterGameplayRuntime.FortMovementMode_SMFlightSpecterRuntimeData
// Kind: Class; super: FortMovementMode_ESMRuntimeData
class UFortMovementMode_SMFlightSpecterRuntimeData
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

static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_SMFlightSpecterRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_SMFlightSpecterRuntimeData::EndReasonFlags");

// /Script/SpecterGameplayRuntime.FortProjectileMoveComp_SpecterUpdoot
// Kind: Class; super: FortProjectileMovementComponent
class UFortProjectileMoveComp_SpecterUpdoot
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    float CollideDistanceToTarget; // 0x0450 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortProjectileMoveComp_SpecterUpdoot, CollideDistanceToTarget) == 1104, "Offset mismatch for UFortProjectileMoveComp_SpecterUpdoot::CollideDistanceToTarget");

// /Script/SpecterGameplayRuntime.SMFlightSpecter_MovementStates
// Kind: Class; super: SM_MovementState
class USMFlightSpecter_MovementStates
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t bCanLandFromThisState; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreLandingBlockedTimer; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02F2
    std::uint8_t TopFlyingAccelerationRate[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TopFlyingDecelerationRate[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t TopFlyingSpeed[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t TopSpeedHeight[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t BottomSpeedHeight[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t StopFlightHeight[0x1]; // 0x03C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USMFlightSpecter_MovementStates, bCanLandFromThisState) == 752, "Offset mismatch for USMFlightSpecter_MovementStates::bCanLandFromThisState");
static_assert(offsetof(USMFlightSpecter_MovementStates, bIgnoreLandingBlockedTimer) == 753, "Offset mismatch for USMFlightSpecter_MovementStates::bIgnoreLandingBlockedTimer");
static_assert(offsetof(USMFlightSpecter_MovementStates, TopFlyingAccelerationRate) == 760, "Offset mismatch for USMFlightSpecter_MovementStates::TopFlyingAccelerationRate");
static_assert(offsetof(USMFlightSpecter_MovementStates, TopFlyingDecelerationRate) == 800, "Offset mismatch for USMFlightSpecter_MovementStates::TopFlyingDecelerationRate");
static_assert(offsetof(USMFlightSpecter_MovementStates, TopFlyingSpeed) == 840, "Offset mismatch for USMFlightSpecter_MovementStates::TopFlyingSpeed");
static_assert(offsetof(USMFlightSpecter_MovementStates, TopSpeedHeight) == 880, "Offset mismatch for USMFlightSpecter_MovementStates::TopSpeedHeight");
static_assert(offsetof(USMFlightSpecter_MovementStates, BottomSpeedHeight) == 920, "Offset mismatch for USMFlightSpecter_MovementStates::BottomSpeedHeight");
static_assert(offsetof(USMFlightSpecter_MovementStates, StopFlightHeight) == 960, "Offset mismatch for USMFlightSpecter_MovementStates::StopFlightHeight");

// /Script/SpecterGameplayRuntime.SpecterAnalytics
// Kind: Class; super: Object
class USpecterAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecterGameplayRuntime.SpecterHauntInteractionExtensionComponent
// Kind: Class; super: FortActorComponent_FortInteractExtension
class USpecterHauntInteractionExtensionComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t StartHauntInteractText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t StopHauntInteractText[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t HauntInteractionType; // 0x0110 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HauntInteractionAttempt; // 0x0111 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HauntInteractionAttemptSecondary; // 0x0112 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0113
    std::uint8_t HauntInteractionColliderExtents[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    void* HauntInteractCollisionComponent; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::int32_t HaunterCount; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x013C
    double NextWorldTimeToAllowHaunt; // 0x0140 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(USpecterHauntInteractionExtensionComponent, StartHauntInteractText) == 240, "Offset mismatch for USpecterHauntInteractionExtensionComponent::StartHauntInteractText");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, StopHauntInteractText) == 256, "Offset mismatch for USpecterHauntInteractionExtensionComponent::StopHauntInteractText");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HauntInteractionType) == 272, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HauntInteractionType");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HauntInteractionAttempt) == 273, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HauntInteractionAttempt");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HauntInteractionAttemptSecondary) == 274, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HauntInteractionAttemptSecondary");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HauntInteractionColliderExtents) == 280, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HauntInteractionColliderExtents");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HauntInteractCollisionComponent) == 304, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HauntInteractCollisionComponent");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, HaunterCount) == 312, "Offset mismatch for USpecterHauntInteractionExtensionComponent::HaunterCount");
static_assert(offsetof(USpecterHauntInteractionExtensionComponent, NextWorldTimeToAllowHaunt) == 320, "Offset mismatch for USpecterHauntInteractionExtensionComponent::NextWorldTimeToAllowHaunt");

// /Script/SpecterGameplayRuntime.SpecterHauntingComponent
// Kind: Class; super: FortPawnComponent
class USpecterHauntingComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t AllowedActionTagsWhileHaunting[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t HauntCameraEaseTime[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HauntCameraEaseFunction; // 0x0110 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    TWeakObjectPtr<void> HauntedPawn; // 0x0114 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    TArray<void*> HauntingAnalytics; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpecterHauntingComponent, AllowedActionTagsWhileHaunting) == 200, "Offset mismatch for USpecterHauntingComponent::AllowedActionTagsWhileHaunting");
static_assert(offsetof(USpecterHauntingComponent, HauntCameraEaseTime) == 232, "Offset mismatch for USpecterHauntingComponent::HauntCameraEaseTime");
static_assert(offsetof(USpecterHauntingComponent, HauntCameraEaseFunction) == 272, "Offset mismatch for USpecterHauntingComponent::HauntCameraEaseFunction");
static_assert(offsetof(USpecterHauntingComponent, HauntedPawn) == 276, "Offset mismatch for USpecterHauntingComponent::HauntedPawn");
static_assert(offsetof(USpecterHauntingComponent, HauntingAnalytics) == 288, "Offset mismatch for USpecterHauntingComponent::HauntingAnalytics");

// /Script/SpecterGameplayRuntime.SpecterPawn
// Kind: Class; super: FortStandInPlayerPawn
class USpecterPawn
{
public:
    std::uint8_t Pad_0000[0x5EE8]; // 0x0000
    TArray<void*> ComponentsToUnregister; // 0x5EE8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsHaunting; // 0x5EF8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x5EF9
    TArray<void*> DootAnalytics; // 0x5F00 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StartLocation[0x18]; // 0x5F10 (Size: 0x18, Type: StructProperty)
    double StartMatchTime; // 0x5F28 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(USpecterPawn, ComponentsToUnregister) == 24296, "Offset mismatch for USpecterPawn::ComponentsToUnregister");
static_assert(offsetof(USpecterPawn, bIsHaunting) == 24312, "Offset mismatch for USpecterPawn::bIsHaunting");
static_assert(offsetof(USpecterPawn, DootAnalytics) == 24320, "Offset mismatch for USpecterPawn::DootAnalytics");
static_assert(offsetof(USpecterPawn, StartLocation) == 24336, "Offset mismatch for USpecterPawn::StartLocation");
static_assert(offsetof(USpecterPawn, StartMatchTime) == 24360, "Offset mismatch for USpecterPawn::StartMatchTime");

// /Script/SpecterGameplayRuntime.SpecterRelevancyManagerComponent
// Kind: Class; super: FortGameStateComponent
class USpecterRelevancyManagerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(USpecterRelevancyManagerComponent, PrimaryComponentTick) == 56, "Offset mismatch for USpecterRelevancyManagerComponent::PrimaryComponentTick");
static_assert(offsetof(USpecterRelevancyManagerComponent, ComponentTags) == 104, "Offset mismatch for USpecterRelevancyManagerComponent::ComponentTags");
static_assert(offsetof(USpecterRelevancyManagerComponent, AssetUserData) == 120, "Offset mismatch for USpecterRelevancyManagerComponent::AssetUserData");
static_assert(offsetof(USpecterRelevancyManagerComponent, UCSSerializationIndex) == 144, "Offset mismatch for USpecterRelevancyManagerComponent::UCSSerializationIndex");
static_assert(offsetof(USpecterRelevancyManagerComponent, bNetAddressable) == 152, "Offset mismatch for USpecterRelevancyManagerComponent::bNetAddressable");
static_assert(offsetof(USpecterRelevancyManagerComponent, bAutoActivate) == 154, "Offset mismatch for USpecterRelevancyManagerComponent::bAutoActivate");
static_assert(offsetof(USpecterRelevancyManagerComponent, bIsEditorOnly) == 155, "Offset mismatch for USpecterRelevancyManagerComponent::bIsEditorOnly");
static_assert(offsetof(USpecterRelevancyManagerComponent, CreationMethod) == 185, "Offset mismatch for USpecterRelevancyManagerComponent::CreationMethod");
static_assert(offsetof(USpecterRelevancyManagerComponent, OnComponentActivated) == 186, "Offset mismatch for USpecterRelevancyManagerComponent::OnComponentActivated");
static_assert(offsetof(USpecterRelevancyManagerComponent, OnComponentDeactivated) == 187, "Offset mismatch for USpecterRelevancyManagerComponent::OnComponentDeactivated");

// /Script/SpecterGameplayRuntime.SpriteGhostAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class USpriteGhostAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    float MoveAngle; // 0x0330 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0334
    double MoveSpeed; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    double Move_Tilt_AO_Alpha; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsMoving; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFlying; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasFlying; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTacSprinting; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustLanded; // 0x034D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGrounded; // 0x034E (Size: 0x1, Type: BoolProperty)
    std::uint8_t ABP_IsGrounded; // 0x034F (Size: 0x1, Type: BoolProperty)
    std::uint8_t ABP_IsMoving; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ABP_JumpTriggered; // 0x0351 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGroundedPrevious; // 0x0352 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHaunting; // 0x0353 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpTriggered; // 0x0354 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTacSprintTag; // 0x0355 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0356
    float SpiralAcceleration; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float SpiralCurrentValue; // 0x035C (Size: 0x4, Type: FloatProperty)
    void* OwningActorPtr; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpriteGhostAnimInstance, MoveAngle) == 816, "Offset mismatch for USpriteGhostAnimInstance::MoveAngle");
static_assert(offsetof(USpriteGhostAnimInstance, MoveSpeed) == 824, "Offset mismatch for USpriteGhostAnimInstance::MoveSpeed");
static_assert(offsetof(USpriteGhostAnimInstance, Move_Tilt_AO_Alpha) == 832, "Offset mismatch for USpriteGhostAnimInstance::Move_Tilt_AO_Alpha");
static_assert(offsetof(USpriteGhostAnimInstance, bIsMoving) == 840, "Offset mismatch for USpriteGhostAnimInstance::bIsMoving");
static_assert(offsetof(USpriteGhostAnimInstance, bIsFalling) == 841, "Offset mismatch for USpriteGhostAnimInstance::bIsFalling");
static_assert(offsetof(USpriteGhostAnimInstance, bIsFlying) == 842, "Offset mismatch for USpriteGhostAnimInstance::bIsFlying");
static_assert(offsetof(USpriteGhostAnimInstance, bWasFlying) == 843, "Offset mismatch for USpriteGhostAnimInstance::bWasFlying");
static_assert(offsetof(USpriteGhostAnimInstance, bIsTacSprinting) == 844, "Offset mismatch for USpriteGhostAnimInstance::bIsTacSprinting");
static_assert(offsetof(USpriteGhostAnimInstance, bJustLanded) == 845, "Offset mismatch for USpriteGhostAnimInstance::bJustLanded");
static_assert(offsetof(USpriteGhostAnimInstance, bIsGrounded) == 846, "Offset mismatch for USpriteGhostAnimInstance::bIsGrounded");
static_assert(offsetof(USpriteGhostAnimInstance, ABP_IsGrounded) == 847, "Offset mismatch for USpriteGhostAnimInstance::ABP_IsGrounded");
static_assert(offsetof(USpriteGhostAnimInstance, ABP_IsMoving) == 848, "Offset mismatch for USpriteGhostAnimInstance::ABP_IsMoving");
static_assert(offsetof(USpriteGhostAnimInstance, ABP_JumpTriggered) == 849, "Offset mismatch for USpriteGhostAnimInstance::ABP_JumpTriggered");
static_assert(offsetof(USpriteGhostAnimInstance, bIsGroundedPrevious) == 850, "Offset mismatch for USpriteGhostAnimInstance::bIsGroundedPrevious");
static_assert(offsetof(USpriteGhostAnimInstance, bIsHaunting) == 851, "Offset mismatch for USpriteGhostAnimInstance::bIsHaunting");
static_assert(offsetof(USpriteGhostAnimInstance, bJumpTriggered) == 852, "Offset mismatch for USpriteGhostAnimInstance::bJumpTriggered");
static_assert(offsetof(USpriteGhostAnimInstance, bHasTacSprintTag) == 853, "Offset mismatch for USpriteGhostAnimInstance::bHasTacSprintTag");
static_assert(offsetof(USpriteGhostAnimInstance, SpiralAcceleration) == 856, "Offset mismatch for USpriteGhostAnimInstance::SpiralAcceleration");
static_assert(offsetof(USpriteGhostAnimInstance, SpiralCurrentValue) == 860, "Offset mismatch for USpriteGhostAnimInstance::SpiralCurrentValue");
static_assert(offsetof(USpriteGhostAnimInstance, OwningActorPtr) == 864, "Offset mismatch for USpriteGhostAnimInstance::OwningActorPtr");

// /Script/SpecterGameplayRuntime.SpriteGhostPawnInterface
// Kind: Class; super: Interface
class USpriteGhostPawnInterface
{
public:
    std::uint8_t Opaque[1];
};
