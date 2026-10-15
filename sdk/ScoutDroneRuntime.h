/**
 * decamp dumper generated SDK
 * Package: /Script/ScoutDroneRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ScoutDroneRuntime.FortScoutDroneDiveTransitionData
// Kind: ScriptStruct; super: none
struct FFortScoutDroneDiveTransitionData
{
public:
    void* Curve; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransitionDuration[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortScoutDroneDiveTransitionData, Curve) == 0, "Offset mismatch for FFortScoutDroneDiveTransitionData::Curve");
static_assert(offsetof(FFortScoutDroneDiveTransitionData, TransitionDuration) == 8, "Offset mismatch for FFortScoutDroneDiveTransitionData::TransitionDuration");

// /Script/ScoutDroneRuntime.OnFortScoutDroneDeployed
// Kind: ScriptStruct; super: none
struct FOnFortScoutDroneDeployed
{
public:
    TWeakObjectPtr<void> DeployedDrone; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOnFortScoutDroneDeployed, DeployedDrone) == 0, "Offset mismatch for FOnFortScoutDroneDeployed::DeployedDrone");

// /Script/ScoutDroneRuntime.OnFortScoutDroneDismissed
// Kind: ScriptStruct; super: none
struct FOnFortScoutDroneDismissed
{
public:
    std::uint8_t DismissalReason[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOnFortScoutDroneDismissed, DismissalReason) == 0, "Offset mismatch for FOnFortScoutDroneDismissed::DismissalReason");

// /Script/ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
// Kind: ScriptStruct; super: none
struct FOnFortScoutDroneFinishedLongInteract
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
// Kind: ScriptStruct; super: none
struct FOnFortScoutDroneMarkedEnemies
{
public:
    std::uint8_t Source[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> MarkedActors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnFortScoutDroneMarkedEnemies, Source) == 0, "Offset mismatch for FOnFortScoutDroneMarkedEnemies::Source");
static_assert(offsetof(FOnFortScoutDroneMarkedEnemies, MarkedActors) == 8, "Offset mismatch for FOnFortScoutDroneMarkedEnemies::MarkedActors");

// /Script/ScoutDroneRuntime.ScoutDroneCapsuleSizeData
// Kind: ScriptStruct; super: none
struct FScoutDroneCapsuleSizeData
{
public:
    std::uint8_t CapsuleHalfHeight[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t CapsuleRadius[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScoutDroneCapsuleSizeData, CapsuleHalfHeight) == 0, "Offset mismatch for FScoutDroneCapsuleSizeData::CapsuleHalfHeight");
static_assert(offsetof(FScoutDroneCapsuleSizeData, CapsuleRadius) == 40, "Offset mismatch for FScoutDroneCapsuleSizeData::CapsuleRadius");

// /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionData
// Kind: ScriptStruct; super: none
struct FScoutDroneDeferredDestructionData
{
public:
    float DeposessDelay; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DestroyDelay; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DismissalReason[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float ServerDismissStartTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScoutDroneDeferredDestructionData, DeposessDelay) == 0, "Offset mismatch for FScoutDroneDeferredDestructionData::DeposessDelay");
static_assert(offsetof(FScoutDroneDeferredDestructionData, DestroyDelay) == 4, "Offset mismatch for FScoutDroneDeferredDestructionData::DestroyDelay");
static_assert(offsetof(FScoutDroneDeferredDestructionData, DismissalReason) == 8, "Offset mismatch for FScoutDroneDeferredDestructionData::DismissalReason");
static_assert(offsetof(FScoutDroneDeferredDestructionData, ServerDismissStartTime) == 12, "Offset mismatch for FScoutDroneDeferredDestructionData::ServerDismissStartTime");

// /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
// Kind: ScriptStruct; super: none
struct FScoutDroneInputTriggerableEvent
{
public:
    FName InputActionName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* InputAction; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayEventToTrigger[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScoutDroneInputTriggerableEvent, InputActionName) == 0, "Offset mismatch for FScoutDroneInputTriggerableEvent::InputActionName");
static_assert(offsetof(FScoutDroneInputTriggerableEvent, InputAction) == 8, "Offset mismatch for FScoutDroneInputTriggerableEvent::InputAction");
static_assert(offsetof(FScoutDroneInputTriggerableEvent, GameplayEventToTrigger) == 16, "Offset mismatch for FScoutDroneInputTriggerableEvent::GameplayEventToTrigger");

// /Script/ScoutDroneRuntime.ScoutDronePickupTargets
// Kind: ScriptStruct; super: none
struct FScoutDronePickupTargets
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* DBNOPawn; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FScoutDronePickupTargets, Items) == 0, "Offset mismatch for FScoutDronePickupTargets::Items");
static_assert(offsetof(FScoutDronePickupTargets, DBNOPawn) == 16, "Offset mismatch for FScoutDronePickupTargets::DBNOPawn");

// /Script/ScoutDroneRuntime.ScoutDroneStatusData
// Kind: ScriptStruct; super: none
struct FScoutDroneStatusData
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ServerTimeStatusChanged; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScoutDroneStatusData, Status) == 0, "Offset mismatch for FScoutDroneStatusData::Status");
static_assert(offsetof(FScoutDroneStatusData, ServerTimeStatusChanged) == 4, "Offset mismatch for FScoutDroneStatusData::ServerTimeStatusChanged");

// /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_ScoutDrone
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t DroneAllowedInteractionTags[0x20]; // 0x02E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t DroneBlockedInteractionTags[0x20]; // 0x0300 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsControllingDrone; // 0x0320 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_ScoutDrone, DroneAllowedInteractionTags) == 736, "Offset mismatch for UFortAthenaMutator_ScoutDrone::DroneAllowedInteractionTags");
static_assert(offsetof(UFortAthenaMutator_ScoutDrone, DroneBlockedInteractionTags) == 768, "Offset mismatch for UFortAthenaMutator_ScoutDrone::DroneBlockedInteractionTags");
static_assert(offsetof(UFortAthenaMutator_ScoutDrone, bIsControllingDrone) == 800, "Offset mismatch for UFortAthenaMutator_ScoutDrone::bIsControllingDrone");

// /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
// Kind: Class; super: FortChargingSet_Base
class UFortChargingSet_ScoutDroneEnergy
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Energy[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEnergy[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyChargeRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerTimeEnergyIncrements[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, Energy) == 96, "Offset mismatch for UFortChargingSet_ScoutDroneEnergy::Energy");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, MaxEnergy) == 136, "Offset mismatch for UFortChargingSet_ScoutDroneEnergy::MaxEnergy");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, EnergyChargeRate) == 176, "Offset mismatch for UFortChargingSet_ScoutDroneEnergy::EnergyChargeRate");
static_assert(offsetof(UFortChargingSet_ScoutDroneEnergy, ServerTimeEnergyIncrements) == 216, "Offset mismatch for UFortChargingSet_ScoutDroneEnergy::ServerTimeEnergyIncrements");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ScoutDrone_Activate
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* RCActorClass; // 0x0B20 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpawnOffset[0x1]; // 0x0B28 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Activate, RCActorClass) == 2848, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Activate::RCActorClass");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Activate, SpawnOffset) == 2856, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Activate::SpawnOffset");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ScoutDrone_Dismiss
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t DismissDelayData[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dismiss, DismissDelayData) == 2848, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dismiss::DismissDelayData");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ScoutDrone_Dive
{
public:
    std::uint8_t Pad_0000[0xB30]; // 0x0000
    std::uint8_t EaseInData[0x30]; // 0x0B30 (Size: 0x30, Type: StructProperty)
    std::uint8_t EaseOutData[0x38]; // 0x0B60 (Size: 0x38, Type: StructProperty)
    std::uint8_t DiveUpdateInterval[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t DiveSpeedIncrease[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeedToDive[0x28]; // 0x0BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistToGround[0x28]; // 0x0C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetPitchToDive[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t DivingGravityScale[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedDivingGravityScale[0x1]; // 0x0C88 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, EaseInData) == 2864, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::EaseInData");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, EaseOutData) == 2912, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::EaseOutData");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DiveUpdateInterval) == 2968, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::DiveUpdateInterval");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DiveSpeedIncrease) == 3008, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::DiveSpeedIncrease");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MinSpeedToDive) == 3048, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::MinSpeedToDive");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MinDistToGround) == 3088, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::MinDistToGround");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, TargetPitchToDive) == 3128, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::TargetPitchToDive");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, DivingGravityScale) == 3168, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::DivingGravityScale");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Dive, MaxSpeedDivingGravityScale) == 3208, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Dive::MaxSpeedDivingGravityScale");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
// Kind: Class; super: FortGameplayAbility_ScoutDrone_TargetingBase
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t IndicatedActorData[0x110]; // 0x0B68 (Size: 0x110, Type: StructProperty)
    std::uint8_t MaxNumberOfPotentialTargets[0x1]; // 0x0C78 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets, IndicatedActorData) == 2920, "Offset mismatch for UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::IndicatedActorData");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_MarkPotentialTargets, MaxNumberOfPotentialTargets) == 3192, "Offset mismatch for UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::MaxNumberOfPotentialTargets");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
// Kind: Class; super: FortGameplayAbility_ScoutDrone_TargetingBase
class UFortGameplayAbility_ScoutDrone_PassiveMark
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t CurrentTargetStatus[0x8]; // 0x0B68 (Size: 0x8, Type: StructProperty)
    std::uint8_t StenciledActorData[0x80]; // 0x0B70 (Size: 0x80, Type: StructProperty)
    std::uint8_t IndicatedActorData[0x100]; // 0x0BF0 (Size: 0x100, Type: StructProperty)
    std::uint8_t ActorTargetingRange[0x28]; // 0x0CF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeToConfirmTarget[0x28]; // 0x0D18 (Size: 0x28, Type: StructProperty)
    void* CurrentTarget; // 0x0D40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetConfirmationTimerHandle[0x8]; // 0x0D48 (Size: 0x8, Type: StructProperty)
    void* PayloadCache; // 0x0D50 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, CurrentTargetStatus) == 2920, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::CurrentTargetStatus");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, StenciledActorData) == 2928, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::StenciledActorData");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, IndicatedActorData) == 3056, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::IndicatedActorData");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, ActorTargetingRange) == 3312, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::ActorTargetingRange");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, TimeToConfirmTarget) == 3352, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::TimeToConfirmTarget");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, CurrentTarget) == 3392, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::CurrentTarget");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, TargetConfirmationTimerHandle) == 3400, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::TargetConfirmationTimerHandle");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PassiveMark, PayloadCache) == 3408, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PassiveMark::PayloadCache");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
// Kind: Class; super: FortGameplayAbility_ScoutDrone_TargetingBase
class UFortGameplayAbility_ScoutDrone_PickUp
{
public:
    std::uint8_t Pad_0000[0xB70]; // 0x0000
    std::uint8_t MaxNumberOfItemsToGrab[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    void* PayloadCache; // 0x0B98 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PickupToggleCooldownDuration[0x38]; // 0x0BA0 (Size: 0x38, Type: StructProperty)
    void* AttachedPawnGEClass; // 0x0BD8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, MaxNumberOfItemsToGrab) == 2928, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PickUp::MaxNumberOfItemsToGrab");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, PayloadCache) == 2968, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PickUp::PayloadCache");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, PickupToggleCooldownDuration) == 2976, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PickUp::PickupToggleCooldownDuration");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_PickUp, AttachedPawnGEClass) == 3032, "Offset mismatch for UFortGameplayAbility_ScoutDrone_PickUp::AttachedPawnGEClass");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
// Kind: Class; super: FortGameplayAbility_ScoutDrone_TargetingBase
class UFortGameplayAbility_ScoutDrone_SpeedBoost
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t DoorBashCueTag[0x8]; // 0x0B68 (Size: 0x8, Type: StructProperty)
    void* DamageGameplayEffectClass; // 0x0B70 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DoorBashPawnLaunchGameplayCueTag[0x8]; // 0x0B78 (Size: 0x8, Type: StructProperty)
    std::uint8_t DoorBashEnabledHotfix[0x28]; // 0x0B80 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashSphereRadiusForPawnLaunch[0x28]; // 0x0BA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DoorBashScalarForPawnLaunch[0x28]; // 0x0BD0 (Size: 0x28, Type: StructProperty)
    TArray<void*> DoorBashCollisionTypesForPawn; // 0x0BF8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DoorBashEnabled[0x28]; // 0x0C08 (Size: 0x28, Type: StructProperty)
    std::uint8_t DamageOnBoostEnabled[0x1]; // 0x0C30 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashCueTag) == 2920, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashCueTag");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DamageGameplayEffectClass) == 2928, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DamageGameplayEffectClass");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashPawnLaunchGameplayCueTag) == 2936, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashPawnLaunchGameplayCueTag");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashEnabledHotfix) == 2944, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashEnabledHotfix");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashSphereRadiusForPawnLaunch) == 2984, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashSphereRadiusForPawnLaunch");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashScalarForPawnLaunch) == 3024, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashScalarForPawnLaunch");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashCollisionTypesForPawn) == 3064, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashCollisionTypesForPawn");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DoorBashEnabled) == 3080, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DoorBashEnabled");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_SpeedBoost, DamageOnBoostEnabled) == 3120, "Offset mismatch for UFortGameplayAbility_ScoutDrone_SpeedBoost::DamageOnBoostEnabled");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ScoutDrone_TargetingBase
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* TargetingPreset; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AsyncTargetingHandle[0x8]; // 0x0B28 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingTimerHandle[0x8]; // 0x0B30 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingInterval[0x28]; // 0x0B38 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseControllerAsInstigator; // 0x0B60 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingPreset) == 2848, "Offset mismatch for UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingPreset");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, AsyncTargetingHandle) == 2856, "Offset mismatch for UFortGameplayAbility_ScoutDrone_TargetingBase::AsyncTargetingHandle");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingTimerHandle) == 2864, "Offset mismatch for UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingTimerHandle");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, TargetingInterval) == 2872, "Offset mismatch for UFortGameplayAbility_ScoutDrone_TargetingBase::TargetingInterval");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_TargetingBase, bUseControllerAsInstigator) == 2912, "Offset mismatch for UFortGameplayAbility_ScoutDrone_TargetingBase::bUseControllerAsInstigator");

// /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ScoutDrone_Tether
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t WarningRange[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t SignalLossRange[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsInWarningRange; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInSignalLossRange; // 0x0B71 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0B72
    std::uint8_t TetheringTimerHandle[0x8]; // 0x0B78 (Size: 0x8, Type: StructProperty)
    std::uint8_t TetheringReportTimerHandle[0x8]; // 0x0B80 (Size: 0x8, Type: StructProperty)
    std::uint8_t DismissDelayData[0x1]; // 0x0B88 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, WarningRange) == 2848, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::WarningRange");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, SignalLossRange) == 2888, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::SignalLossRange");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, bIsInWarningRange) == 2928, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::bIsInWarningRange");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, bIsInSignalLossRange) == 2929, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::bIsInSignalLossRange");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, TetheringTimerHandle) == 2936, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::TetheringTimerHandle");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, TetheringReportTimerHandle) == 2944, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::TetheringReportTimerHandle");
static_assert(offsetof(UFortGameplayAbility_ScoutDrone_Tether, DismissDelayData) == 2952, "Offset mismatch for UFortGameplayAbility_ScoutDrone_Tether::DismissDelayData");

// /Script/ScoutDroneRuntime.FortScoutDrone
// Kind: Class; super: Character
class UFortScoutDrone
{
public:
    std::uint8_t Pad_0000[0x688]; // 0x0000
    std::uint8_t bIsDiving; // 0x0688 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0689
    std::uint8_t DivingEnabled[0x28]; // 0x0690 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsSpeedBoosting; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x06B9
    void* NSScoutDroneIdle_Native; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* PickupManagerComponent_Native; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* TeamMateIndicatorMarkerWidgetClass; // 0x06D0 (Size: 0x8, Type: ClassProperty)
    void* DroneMotorLoopComponent; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    void* DroneThrustSoundComponent; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BaseMaxFlySpeed[0x28]; // 0x06E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultTags[0x28]; // 0x0710 (Size: 0x28, Type: StructProperty)
    void* AbilitySystemComponent; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* AffiliationComponent; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* StartupAbilitySet; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* ControllingPlayerPawn; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    void* HealthSet; // 0x0758 (Size: 0x8, Type: ObjectProperty)
    void* EnergySet; // 0x0760 (Size: 0x8, Type: ObjectProperty)
    float LifespanAfterDeath; // 0x0768 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttributeInitKey[0x8]; // 0x076C (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimarySurfaceType; // 0x0774 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeaponResponseType; // 0x0775 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPlayedDeath; // 0x0776 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0777
    std::uint8_t OutOfHealthDismissDelayData[0x10]; // 0x0778 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutOfEnergyDismissDelayData[0x10]; // 0x0788 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnTeamIndexChanged; // 0x0798 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PawnOverrideComponentClass; // 0x07A8 (Size: 0x8, Type: ClassProperty)
    void* DroneMotorLoopSound; // 0x07B0 (Size: 0x8, Type: ObjectProperty)
    void* DroneThrusterSound; // 0x07B8 (Size: 0x8, Type: ObjectProperty)
    void* AudioParameter; // 0x07C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocallyViewedPawnAudioParamName[0x4]; // 0x07C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsEnemyAudioParamName[0x4]; // 0x07CC (Size: 0x4, Type: NameProperty)
    std::uint8_t ThrustAmountAudioParamName[0x4]; // 0x07D0 (Size: 0x4, Type: NameProperty)
    float ThrustSoundThreshold; // 0x07D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortScoutDrone, bIsDiving) == 1672, "Offset mismatch for UFortScoutDrone::bIsDiving");
static_assert(offsetof(UFortScoutDrone, DivingEnabled) == 1680, "Offset mismatch for UFortScoutDrone::DivingEnabled");
static_assert(offsetof(UFortScoutDrone, bIsSpeedBoosting) == 1720, "Offset mismatch for UFortScoutDrone::bIsSpeedBoosting");
static_assert(offsetof(UFortScoutDrone, NSScoutDroneIdle_Native) == 1728, "Offset mismatch for UFortScoutDrone::NSScoutDroneIdle_Native");
static_assert(offsetof(UFortScoutDrone, PickupManagerComponent_Native) == 1736, "Offset mismatch for UFortScoutDrone::PickupManagerComponent_Native");
static_assert(offsetof(UFortScoutDrone, TeamMateIndicatorMarkerWidgetClass) == 1744, "Offset mismatch for UFortScoutDrone::TeamMateIndicatorMarkerWidgetClass");
static_assert(offsetof(UFortScoutDrone, DroneMotorLoopComponent) == 1752, "Offset mismatch for UFortScoutDrone::DroneMotorLoopComponent");
static_assert(offsetof(UFortScoutDrone, DroneThrustSoundComponent) == 1760, "Offset mismatch for UFortScoutDrone::DroneThrustSoundComponent");
static_assert(offsetof(UFortScoutDrone, BaseMaxFlySpeed) == 1768, "Offset mismatch for UFortScoutDrone::BaseMaxFlySpeed");
static_assert(offsetof(UFortScoutDrone, DefaultTags) == 1808, "Offset mismatch for UFortScoutDrone::DefaultTags");
static_assert(offsetof(UFortScoutDrone, AbilitySystemComponent) == 1848, "Offset mismatch for UFortScoutDrone::AbilitySystemComponent");
static_assert(offsetof(UFortScoutDrone, AffiliationComponent) == 1856, "Offset mismatch for UFortScoutDrone::AffiliationComponent");
static_assert(offsetof(UFortScoutDrone, StartupAbilitySet) == 1864, "Offset mismatch for UFortScoutDrone::StartupAbilitySet");
static_assert(offsetof(UFortScoutDrone, ControllingPlayerPawn) == 1872, "Offset mismatch for UFortScoutDrone::ControllingPlayerPawn");
static_assert(offsetof(UFortScoutDrone, HealthSet) == 1880, "Offset mismatch for UFortScoutDrone::HealthSet");
static_assert(offsetof(UFortScoutDrone, EnergySet) == 1888, "Offset mismatch for UFortScoutDrone::EnergySet");
static_assert(offsetof(UFortScoutDrone, LifespanAfterDeath) == 1896, "Offset mismatch for UFortScoutDrone::LifespanAfterDeath");
static_assert(offsetof(UFortScoutDrone, AttributeInitKey) == 1900, "Offset mismatch for UFortScoutDrone::AttributeInitKey");
static_assert(offsetof(UFortScoutDrone, PrimarySurfaceType) == 1908, "Offset mismatch for UFortScoutDrone::PrimarySurfaceType");
static_assert(offsetof(UFortScoutDrone, WeaponResponseType) == 1909, "Offset mismatch for UFortScoutDrone::WeaponResponseType");
static_assert(offsetof(UFortScoutDrone, bPlayedDeath) == 1910, "Offset mismatch for UFortScoutDrone::bPlayedDeath");
static_assert(offsetof(UFortScoutDrone, OutOfHealthDismissDelayData) == 1912, "Offset mismatch for UFortScoutDrone::OutOfHealthDismissDelayData");
static_assert(offsetof(UFortScoutDrone, OutOfEnergyDismissDelayData) == 1928, "Offset mismatch for UFortScoutDrone::OutOfEnergyDismissDelayData");
static_assert(offsetof(UFortScoutDrone, OnTeamIndexChanged) == 1944, "Offset mismatch for UFortScoutDrone::OnTeamIndexChanged");
static_assert(offsetof(UFortScoutDrone, PawnOverrideComponentClass) == 1960, "Offset mismatch for UFortScoutDrone::PawnOverrideComponentClass");
static_assert(offsetof(UFortScoutDrone, DroneMotorLoopSound) == 1968, "Offset mismatch for UFortScoutDrone::DroneMotorLoopSound");
static_assert(offsetof(UFortScoutDrone, DroneThrusterSound) == 1976, "Offset mismatch for UFortScoutDrone::DroneThrusterSound");
static_assert(offsetof(UFortScoutDrone, AudioParameter) == 1984, "Offset mismatch for UFortScoutDrone::AudioParameter");
static_assert(offsetof(UFortScoutDrone, LocallyViewedPawnAudioParamName) == 1992, "Offset mismatch for UFortScoutDrone::LocallyViewedPawnAudioParamName");
static_assert(offsetof(UFortScoutDrone, IsEnemyAudioParamName) == 1996, "Offset mismatch for UFortScoutDrone::IsEnemyAudioParamName");
static_assert(offsetof(UFortScoutDrone, ThrustAmountAudioParamName) == 2000, "Offset mismatch for UFortScoutDrone::ThrustAmountAudioParamName");
static_assert(offsetof(UFortScoutDrone, ThrustSoundThreshold) == 2004, "Offset mismatch for UFortScoutDrone::ThrustSoundThreshold");

// /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
// Kind: Class; super: FortControllerComponent
class UFortScoutDroneAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float SessionStartTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float SessionLength; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinSessionLength[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    float DistanceTraveled; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumberOfContainersInteractedWith; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::uint8_t DismissalReason[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::int32_t NumberOfItemsPickedUp; // 0x0104 (Size: 0x4, Type: IntProperty)
    TArray<void*> DBNOCarriedPlayers; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumberOfEnemiesPassivelyMarked; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfEnemiesMarkedOnCaw; // 0x011C (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfCaws; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0124
    std::uint8_t DistanceTraveledUpdateInterval[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceTraveledUpdateTimerHandle[0x8]; // 0x0158 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastRecorderDroneLocation[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDroneAnalyticsComponent, SessionStartTime) == 200, "Offset mismatch for UFortScoutDroneAnalyticsComponent::SessionStartTime");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, SessionLength) == 204, "Offset mismatch for UFortScoutDroneAnalyticsComponent::SessionLength");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, MinSessionLength) == 208, "Offset mismatch for UFortScoutDroneAnalyticsComponent::MinSessionLength");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveled) == 248, "Offset mismatch for UFortScoutDroneAnalyticsComponent::DistanceTraveled");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfContainersInteractedWith) == 252, "Offset mismatch for UFortScoutDroneAnalyticsComponent::NumberOfContainersInteractedWith");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DismissalReason) == 256, "Offset mismatch for UFortScoutDroneAnalyticsComponent::DismissalReason");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfItemsPickedUp) == 260, "Offset mismatch for UFortScoutDroneAnalyticsComponent::NumberOfItemsPickedUp");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DBNOCarriedPlayers) == 264, "Offset mismatch for UFortScoutDroneAnalyticsComponent::DBNOCarriedPlayers");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfEnemiesPassivelyMarked) == 280, "Offset mismatch for UFortScoutDroneAnalyticsComponent::NumberOfEnemiesPassivelyMarked");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfEnemiesMarkedOnCaw) == 284, "Offset mismatch for UFortScoutDroneAnalyticsComponent::NumberOfEnemiesMarkedOnCaw");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, NumberOfCaws) == 288, "Offset mismatch for UFortScoutDroneAnalyticsComponent::NumberOfCaws");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveledUpdateInterval) == 304, "Offset mismatch for UFortScoutDroneAnalyticsComponent::DistanceTraveledUpdateInterval");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, DistanceTraveledUpdateTimerHandle) == 344, "Offset mismatch for UFortScoutDroneAnalyticsComponent::DistanceTraveledUpdateTimerHandle");
static_assert(offsetof(UFortScoutDroneAnalyticsComponent, LastRecorderDroneLocation) == 352, "Offset mismatch for UFortScoutDroneAnalyticsComponent::LastRecorderDroneLocation");

// /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UFortScoutDroneAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* FortScoutDroneMovementComponent; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    double YawDeltaLastTick; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ActorCurrentRotationTick[0x18]; // 0x0340 (Size: 0x18, Type: StructProperty)
    double YawDeltaCurrentTick; // 0x0358 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ActorRotationLastTick[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsFlying; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0379
    double CurrentVelocity; // 0x0380 (Size: 0x8, Type: DoubleProperty)
    double LastVelocity; // 0x0388 (Size: 0x8, Type: DoubleProperty)
    double Velocity; // 0x0390 (Size: 0x8, Type: DoubleProperty)
    double ForwardInputAlpha; // 0x0398 (Size: 0x8, Type: DoubleProperty)
    double StrafeInputAlpha; // 0x03A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DroneRotation[0x18]; // 0x03A8 (Size: 0x18, Type: StructProperty)
    double Acceleration; // 0x03C0 (Size: 0x8, Type: DoubleProperty)
    void* ScoutDrone; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsBoosting; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsDiving; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x03D2
    double AimPitch; // 0x03D8 (Size: 0x8, Type: DoubleProperty)
    double NegativeAimPitch; // 0x03E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FinalFanRotationL[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalFanRotationR[0x18]; // 0x0400 (Size: 0x18, Type: StructProperty)
    double FanIdleSpeed; // 0x0418 (Size: 0x8, Type: DoubleProperty)
    double FanAuthoredSpeed; // 0x0420 (Size: 0x8, Type: DoubleProperty)
    double FanIdleAuthoredSpeed; // 0x0428 (Size: 0x8, Type: DoubleProperty)
    double FanBwdSpeed; // 0x0430 (Size: 0x8, Type: DoubleProperty)
    double FanFwdSpeed; // 0x0438 (Size: 0x8, Type: DoubleProperty)
    double TurnNoiseAlpha; // 0x0440 (Size: 0x8, Type: DoubleProperty)
    double LeanAlpha; // 0x0448 (Size: 0x8, Type: DoubleProperty)
    double TurnAlpha; // 0x0450 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsColliding; // 0x0458 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFlyingBwd; // 0x0459 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldExitFromFlying; // 0x045A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldExitFromDiving; // 0x045B (Size: 0x1, Type: BoolProperty)
    std::uint8_t EarlyIntoLoop; // 0x045C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x045D
    double AccelerationZ; // 0x0460 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsLeftStrafe; // 0x0468 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WasStrafing; // 0x0469 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x046A
    double GroundDistance; // 0x0470 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HasDivingConditionBeenMet; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsItemAttached; // 0x0479 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPlayerAttached; // 0x047A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x047B
    double FlapTime; // 0x0480 (Size: 0x8, Type: DoubleProperty)
    std::int32_t FlapRandomPick; // 0x0488 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsFlapSmall; // 0x048C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x048D
    std::int32_t FlapRandomMaxRange; // 0x0490 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0494
    double FlapSmallTimeThreshold; // 0x0498 (Size: 0x8, Type: DoubleProperty)
    double FlapBigTimeThreshold; // 0x04A0 (Size: 0x8, Type: DoubleProperty)
    double FlapSmallResetDelayDuration; // 0x04A8 (Size: 0x8, Type: DoubleProperty)
    double FlapBigResetDelayDuration; // 0x04B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsFlapBig; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x04B9
    double VerticalInputAlpha; // 0x04C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t WasVerticalUp; // 0x04C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsFlyingVerticalUp; // 0x04C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldExitFromBoostOutro; // 0x04CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasSpawned; // 0x04CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldExitFromSpawning; // 0x04CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldAllowTransition; // 0x04CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t StateRuleFromBoostOutroToFlying; // 0x04CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t WasBoosting; // 0x04CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t SpeedBoostForceBoostVelocity[0x28]; // 0x04D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedBoostMaxSpeedIncrease[0x28]; // 0x04F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsFlappingTime; // 0x0520 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortScoutDroneAnimInstance, FortScoutDroneMovementComponent) == 816, "Offset mismatch for UFortScoutDroneAnimInstance::FortScoutDroneMovementComponent");
static_assert(offsetof(UFortScoutDroneAnimInstance, YawDeltaLastTick) == 824, "Offset mismatch for UFortScoutDroneAnimInstance::YawDeltaLastTick");
static_assert(offsetof(UFortScoutDroneAnimInstance, ActorCurrentRotationTick) == 832, "Offset mismatch for UFortScoutDroneAnimInstance::ActorCurrentRotationTick");
static_assert(offsetof(UFortScoutDroneAnimInstance, YawDeltaCurrentTick) == 856, "Offset mismatch for UFortScoutDroneAnimInstance::YawDeltaCurrentTick");
static_assert(offsetof(UFortScoutDroneAnimInstance, ActorRotationLastTick) == 864, "Offset mismatch for UFortScoutDroneAnimInstance::ActorRotationLastTick");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlying) == 888, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlying");
static_assert(offsetof(UFortScoutDroneAnimInstance, CurrentVelocity) == 896, "Offset mismatch for UFortScoutDroneAnimInstance::CurrentVelocity");
static_assert(offsetof(UFortScoutDroneAnimInstance, LastVelocity) == 904, "Offset mismatch for UFortScoutDroneAnimInstance::LastVelocity");
static_assert(offsetof(UFortScoutDroneAnimInstance, Velocity) == 912, "Offset mismatch for UFortScoutDroneAnimInstance::Velocity");
static_assert(offsetof(UFortScoutDroneAnimInstance, ForwardInputAlpha) == 920, "Offset mismatch for UFortScoutDroneAnimInstance::ForwardInputAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, StrafeInputAlpha) == 928, "Offset mismatch for UFortScoutDroneAnimInstance::StrafeInputAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, DroneRotation) == 936, "Offset mismatch for UFortScoutDroneAnimInstance::DroneRotation");
static_assert(offsetof(UFortScoutDroneAnimInstance, Acceleration) == 960, "Offset mismatch for UFortScoutDroneAnimInstance::Acceleration");
static_assert(offsetof(UFortScoutDroneAnimInstance, ScoutDrone) == 968, "Offset mismatch for UFortScoutDroneAnimInstance::ScoutDrone");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsBoosting) == 976, "Offset mismatch for UFortScoutDroneAnimInstance::IsBoosting");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsDiving) == 977, "Offset mismatch for UFortScoutDroneAnimInstance::IsDiving");
static_assert(offsetof(UFortScoutDroneAnimInstance, AimPitch) == 984, "Offset mismatch for UFortScoutDroneAnimInstance::AimPitch");
static_assert(offsetof(UFortScoutDroneAnimInstance, NegativeAimPitch) == 992, "Offset mismatch for UFortScoutDroneAnimInstance::NegativeAimPitch");
static_assert(offsetof(UFortScoutDroneAnimInstance, FinalFanRotationL) == 1000, "Offset mismatch for UFortScoutDroneAnimInstance::FinalFanRotationL");
static_assert(offsetof(UFortScoutDroneAnimInstance, FinalFanRotationR) == 1024, "Offset mismatch for UFortScoutDroneAnimInstance::FinalFanRotationR");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanIdleSpeed) == 1048, "Offset mismatch for UFortScoutDroneAnimInstance::FanIdleSpeed");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanAuthoredSpeed) == 1056, "Offset mismatch for UFortScoutDroneAnimInstance::FanAuthoredSpeed");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanIdleAuthoredSpeed) == 1064, "Offset mismatch for UFortScoutDroneAnimInstance::FanIdleAuthoredSpeed");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanBwdSpeed) == 1072, "Offset mismatch for UFortScoutDroneAnimInstance::FanBwdSpeed");
static_assert(offsetof(UFortScoutDroneAnimInstance, FanFwdSpeed) == 1080, "Offset mismatch for UFortScoutDroneAnimInstance::FanFwdSpeed");
static_assert(offsetof(UFortScoutDroneAnimInstance, TurnNoiseAlpha) == 1088, "Offset mismatch for UFortScoutDroneAnimInstance::TurnNoiseAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, LeanAlpha) == 1096, "Offset mismatch for UFortScoutDroneAnimInstance::LeanAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, TurnAlpha) == 1104, "Offset mismatch for UFortScoutDroneAnimInstance::TurnAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsColliding) == 1112, "Offset mismatch for UFortScoutDroneAnimInstance::IsColliding");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlyingBwd) == 1113, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlyingBwd");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromFlying) == 1114, "Offset mismatch for UFortScoutDroneAnimInstance::ShouldExitFromFlying");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromDiving) == 1115, "Offset mismatch for UFortScoutDroneAnimInstance::ShouldExitFromDiving");
static_assert(offsetof(UFortScoutDroneAnimInstance, EarlyIntoLoop) == 1116, "Offset mismatch for UFortScoutDroneAnimInstance::EarlyIntoLoop");
static_assert(offsetof(UFortScoutDroneAnimInstance, AccelerationZ) == 1120, "Offset mismatch for UFortScoutDroneAnimInstance::AccelerationZ");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsLeftStrafe) == 1128, "Offset mismatch for UFortScoutDroneAnimInstance::IsLeftStrafe");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasStrafing) == 1129, "Offset mismatch for UFortScoutDroneAnimInstance::WasStrafing");
static_assert(offsetof(UFortScoutDroneAnimInstance, GroundDistance) == 1136, "Offset mismatch for UFortScoutDroneAnimInstance::GroundDistance");
static_assert(offsetof(UFortScoutDroneAnimInstance, HasDivingConditionBeenMet) == 1144, "Offset mismatch for UFortScoutDroneAnimInstance::HasDivingConditionBeenMet");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsItemAttached) == 1145, "Offset mismatch for UFortScoutDroneAnimInstance::IsItemAttached");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsPlayerAttached) == 1146, "Offset mismatch for UFortScoutDroneAnimInstance::IsPlayerAttached");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapTime) == 1152, "Offset mismatch for UFortScoutDroneAnimInstance::FlapTime");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapRandomPick) == 1160, "Offset mismatch for UFortScoutDroneAnimInstance::FlapRandomPick");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlapSmall) == 1164, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlapSmall");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapRandomMaxRange) == 1168, "Offset mismatch for UFortScoutDroneAnimInstance::FlapRandomMaxRange");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapSmallTimeThreshold) == 1176, "Offset mismatch for UFortScoutDroneAnimInstance::FlapSmallTimeThreshold");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapBigTimeThreshold) == 1184, "Offset mismatch for UFortScoutDroneAnimInstance::FlapBigTimeThreshold");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapSmallResetDelayDuration) == 1192, "Offset mismatch for UFortScoutDroneAnimInstance::FlapSmallResetDelayDuration");
static_assert(offsetof(UFortScoutDroneAnimInstance, FlapBigResetDelayDuration) == 1200, "Offset mismatch for UFortScoutDroneAnimInstance::FlapBigResetDelayDuration");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlapBig) == 1208, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlapBig");
static_assert(offsetof(UFortScoutDroneAnimInstance, VerticalInputAlpha) == 1216, "Offset mismatch for UFortScoutDroneAnimInstance::VerticalInputAlpha");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasVerticalUp) == 1224, "Offset mismatch for UFortScoutDroneAnimInstance::WasVerticalUp");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlyingVerticalUp) == 1225, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlyingVerticalUp");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromBoostOutro) == 1226, "Offset mismatch for UFortScoutDroneAnimInstance::ShouldExitFromBoostOutro");
static_assert(offsetof(UFortScoutDroneAnimInstance, HasSpawned) == 1227, "Offset mismatch for UFortScoutDroneAnimInstance::HasSpawned");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldExitFromSpawning) == 1228, "Offset mismatch for UFortScoutDroneAnimInstance::ShouldExitFromSpawning");
static_assert(offsetof(UFortScoutDroneAnimInstance, ShouldAllowTransition) == 1229, "Offset mismatch for UFortScoutDroneAnimInstance::ShouldAllowTransition");
static_assert(offsetof(UFortScoutDroneAnimInstance, StateRuleFromBoostOutroToFlying) == 1230, "Offset mismatch for UFortScoutDroneAnimInstance::StateRuleFromBoostOutroToFlying");
static_assert(offsetof(UFortScoutDroneAnimInstance, WasBoosting) == 1231, "Offset mismatch for UFortScoutDroneAnimInstance::WasBoosting");
static_assert(offsetof(UFortScoutDroneAnimInstance, SpeedBoostForceBoostVelocity) == 1232, "Offset mismatch for UFortScoutDroneAnimInstance::SpeedBoostForceBoostVelocity");
static_assert(offsetof(UFortScoutDroneAnimInstance, SpeedBoostMaxSpeedIncrease) == 1272, "Offset mismatch for UFortScoutDroneAnimInstance::SpeedBoostMaxSpeedIncrease");
static_assert(offsetof(UFortScoutDroneAnimInstance, IsFlappingTime) == 1312, "Offset mismatch for UFortScoutDroneAnimInstance::IsFlappingTime");

// /Script/ScoutDroneRuntime.FortScoutDroneCameraMode
// Kind: Class; super: Fort3PCameraMode
class UFortScoutDroneCameraMode
{
public:
    std::uint8_t Pad_0000[0x208]; // 0x0000
    std::uint8_t bShouldInterpolateLocation; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldInterpolateRotation; // 0x0209 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortScoutDroneCameraMode, bShouldInterpolateLocation) == 520, "Offset mismatch for UFortScoutDroneCameraMode::bShouldInterpolateLocation");
static_assert(offsetof(UFortScoutDroneCameraMode, bShouldInterpolateRotation) == 521, "Offset mismatch for UFortScoutDroneCameraMode::bShouldInterpolateRotation");

// /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
// Kind: Class; super: FortControllerComponent
class UFortScoutDroneControllingComponent
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* DroneInputComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ControlledDrone; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* OriginalDroneOwner; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* DroneInputContext; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InputTriggerableEvents; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    void* MoveUpAction; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* MoveAction; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* DismissAction; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* DroneCooldownEffectClass; // 0x0140 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0148
    std::uint8_t OwningActorStencilData[0x80]; // 0x0160 (Size: 0x80, Type: StructProperty)
    std::uint8_t CurrentDestructionData[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    void* FirstPersonCameraModeOverride; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    void* ThirdPersonCameraModeOverride; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FakeCameraAbilitySpec[0xE8]; // 0x0200 (Size: 0xE8, Type: StructProperty)
    TArray<void*> LegacyInputActionsToBlock; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    void* DismissPayloadCache; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DismissButtonPressCooldown[0x30]; // 0x0300 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerToDroneTransitionParams[0x18]; // 0x0330 (Size: 0x18, Type: StructProperty)
    std::uint8_t InterruptingPlayerTags[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDroneControllingComponent, DroneInputComponent) == 248, "Offset mismatch for UFortScoutDroneControllingComponent::DroneInputComponent");
static_assert(offsetof(UFortScoutDroneControllingComponent, ControlledDrone) == 256, "Offset mismatch for UFortScoutDroneControllingComponent::ControlledDrone");
static_assert(offsetof(UFortScoutDroneControllingComponent, OriginalDroneOwner) == 264, "Offset mismatch for UFortScoutDroneControllingComponent::OriginalDroneOwner");
static_assert(offsetof(UFortScoutDroneControllingComponent, DroneInputContext) == 272, "Offset mismatch for UFortScoutDroneControllingComponent::DroneInputContext");
static_assert(offsetof(UFortScoutDroneControllingComponent, InputTriggerableEvents) == 280, "Offset mismatch for UFortScoutDroneControllingComponent::InputTriggerableEvents");
static_assert(offsetof(UFortScoutDroneControllingComponent, MoveUpAction) == 296, "Offset mismatch for UFortScoutDroneControllingComponent::MoveUpAction");
static_assert(offsetof(UFortScoutDroneControllingComponent, MoveAction) == 304, "Offset mismatch for UFortScoutDroneControllingComponent::MoveAction");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissAction) == 312, "Offset mismatch for UFortScoutDroneControllingComponent::DismissAction");
static_assert(offsetof(UFortScoutDroneControllingComponent, DroneCooldownEffectClass) == 320, "Offset mismatch for UFortScoutDroneControllingComponent::DroneCooldownEffectClass");
static_assert(offsetof(UFortScoutDroneControllingComponent, OwningActorStencilData) == 352, "Offset mismatch for UFortScoutDroneControllingComponent::OwningActorStencilData");
static_assert(offsetof(UFortScoutDroneControllingComponent, CurrentDestructionData) == 480, "Offset mismatch for UFortScoutDroneControllingComponent::CurrentDestructionData");
static_assert(offsetof(UFortScoutDroneControllingComponent, FirstPersonCameraModeOverride) == 496, "Offset mismatch for UFortScoutDroneControllingComponent::FirstPersonCameraModeOverride");
static_assert(offsetof(UFortScoutDroneControllingComponent, ThirdPersonCameraModeOverride) == 504, "Offset mismatch for UFortScoutDroneControllingComponent::ThirdPersonCameraModeOverride");
static_assert(offsetof(UFortScoutDroneControllingComponent, FakeCameraAbilitySpec) == 512, "Offset mismatch for UFortScoutDroneControllingComponent::FakeCameraAbilitySpec");
static_assert(offsetof(UFortScoutDroneControllingComponent, LegacyInputActionsToBlock) == 744, "Offset mismatch for UFortScoutDroneControllingComponent::LegacyInputActionsToBlock");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissPayloadCache) == 760, "Offset mismatch for UFortScoutDroneControllingComponent::DismissPayloadCache");
static_assert(offsetof(UFortScoutDroneControllingComponent, DismissButtonPressCooldown) == 768, "Offset mismatch for UFortScoutDroneControllingComponent::DismissButtonPressCooldown");
static_assert(offsetof(UFortScoutDroneControllingComponent, PlayerToDroneTransitionParams) == 816, "Offset mismatch for UFortScoutDroneControllingComponent::PlayerToDroneTransitionParams");
static_assert(offsetof(UFortScoutDroneControllingComponent, InterruptingPlayerTags) == 840, "Offset mismatch for UFortScoutDroneControllingComponent::InterruptingPlayerTags");

// /Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
// Kind: Class; super: FortGameplayModMagnitudeCalculation
class UFortScoutDroneCooldownMagnitudeCalculation
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t MinDroneCooldown[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDroneCooldownMagnitudeCalculation, MinDroneCooldown) == 64, "Offset mismatch for UFortScoutDroneCooldownMagnitudeCalculation::MinDroneCooldown");

// /Script/ScoutDroneRuntime.FortScoutDroneGlove
// Kind: Class; super: FortWeapon
class UFortScoutDroneGlove
{
public:
    std::uint8_t Pad_0000[0x19F8]; // 0x0000
    std::uint8_t HoldToDeployTime[0x1]; // 0x19F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDroneGlove, HoldToDeployTime) == 6648, "Offset mismatch for UFortScoutDroneGlove::HoldToDeployTime");

// /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
// Kind: Class; super: CharacterMovementComponent
class UFortScoutDroneMovementComponent
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    std::uint8_t LocalInputState[0x18]; // 0x0FF0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastInputState[0x18]; // 0x1008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReplicatedAcceleration[0x18]; // 0x1020 (Size: 0x18, Type: StructProperty)
    std::uint8_t StrafeInputMultiplier[0x28]; // 0x1038 (Size: 0x28, Type: StructProperty)
    std::uint8_t BacktrackingInputMultiplier[0x28]; // 0x1060 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerticalMovementInputMultiplier[0x1]; // 0x1088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDroneMovementComponent, LocalInputState) == 4080, "Offset mismatch for UFortScoutDroneMovementComponent::LocalInputState");
static_assert(offsetof(UFortScoutDroneMovementComponent, LastInputState) == 4104, "Offset mismatch for UFortScoutDroneMovementComponent::LastInputState");
static_assert(offsetof(UFortScoutDroneMovementComponent, ReplicatedAcceleration) == 4128, "Offset mismatch for UFortScoutDroneMovementComponent::ReplicatedAcceleration");
static_assert(offsetof(UFortScoutDroneMovementComponent, StrafeInputMultiplier) == 4152, "Offset mismatch for UFortScoutDroneMovementComponent::StrafeInputMultiplier");
static_assert(offsetof(UFortScoutDroneMovementComponent, BacktrackingInputMultiplier) == 4192, "Offset mismatch for UFortScoutDroneMovementComponent::BacktrackingInputMultiplier");
static_assert(offsetof(UFortScoutDroneMovementComponent, VerticalMovementInputMultiplier) == 4232, "Offset mismatch for UFortScoutDroneMovementComponent::VerticalMovementInputMultiplier");

// /Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
// Kind: Class; super: FortPawnOverrideComponent
class UFortScoutDronePawnOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* DroneSpectateCameraMode; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortScoutDronePawnOverrideComponent, DroneSpectateCameraMode) == 200, "Offset mismatch for UFortScoutDronePawnOverrideComponent::DroneSpectateCameraMode");

// /Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
// Kind: Class; super: FortPawnOverrideComponent
class UFortScoutDronePawnOwnerOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> ControlledDrone; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortScoutDronePawnOwnerOverrideComponent, ControlledDrone) == 200, "Offset mismatch for UFortScoutDronePawnOwnerOverrideComponent::ControlledDrone");

// /Script/ScoutDroneRuntime.FortScoutDronePickupManager
// Kind: Class; super: PawnComponent
class UFortScoutDronePickupManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t AttachedTargets[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    FName AttachPointSocketName; // 0x00D8 (Size: 0x8, Type: NameProperty)
    std::uint8_t PreviouslyAttachedTargets[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ItemOffset[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DBNOPawnOffset[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    float CurrentlyAppliedCameraOffset; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x012C
    std::uint8_t MaxExtraCapsuleDimensions[0x50]; // 0x0130 (Size: 0x50, Type: StructProperty)
    std::uint8_t MaxPickupSpread[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t PickupTossSpeed[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ItemsPickupTags[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScoutDronePickupManager, AttachedTargets) == 192, "Offset mismatch for UFortScoutDronePickupManager::AttachedTargets");
static_assert(offsetof(UFortScoutDronePickupManager, AttachPointSocketName) == 216, "Offset mismatch for UFortScoutDronePickupManager::AttachPointSocketName");
static_assert(offsetof(UFortScoutDronePickupManager, PreviouslyAttachedTargets) == 224, "Offset mismatch for UFortScoutDronePickupManager::PreviouslyAttachedTargets");
static_assert(offsetof(UFortScoutDronePickupManager, ItemOffset) == 248, "Offset mismatch for UFortScoutDronePickupManager::ItemOffset");
static_assert(offsetof(UFortScoutDronePickupManager, DBNOPawnOffset) == 272, "Offset mismatch for UFortScoutDronePickupManager::DBNOPawnOffset");
static_assert(offsetof(UFortScoutDronePickupManager, CurrentlyAppliedCameraOffset) == 296, "Offset mismatch for UFortScoutDronePickupManager::CurrentlyAppliedCameraOffset");
static_assert(offsetof(UFortScoutDronePickupManager, MaxExtraCapsuleDimensions) == 304, "Offset mismatch for UFortScoutDronePickupManager::MaxExtraCapsuleDimensions");
static_assert(offsetof(UFortScoutDronePickupManager, MaxPickupSpread) == 384, "Offset mismatch for UFortScoutDronePickupManager::MaxPickupSpread");
static_assert(offsetof(UFortScoutDronePickupManager, PickupTossSpeed) == 424, "Offset mismatch for UFortScoutDronePickupManager::PickupTossSpeed");
static_assert(offsetof(UFortScoutDronePickupManager, ItemsPickupTags) == 464, "Offset mismatch for UFortScoutDronePickupManager::ItemsPickupTags");

// /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
// Kind: Class; super: Object
class UScoutDroneDeferredDestructionPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DeferredDestructionData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScoutDroneDeferredDestructionPayload, DeferredDestructionData) == 40, "Offset mismatch for UScoutDroneDeferredDestructionPayload::DeferredDestructionData");

// /Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload
// Kind: Class; super: Object
class UScoutDronePassiveMarkPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TargetStatus[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScoutDronePassiveMarkPayload, TargetStatus) == 40, "Offset mismatch for UScoutDronePassiveMarkPayload::TargetStatus");

// /Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
// Kind: Class; super: Object
class UScoutDronePickUpTargetsPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PickUpTargets[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScoutDronePickUpTargetsPayload, PickUpTargets) == 40, "Offset mismatch for UScoutDronePickUpTargetsPayload::PickUpTargets");
