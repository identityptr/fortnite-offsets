/**
 * decamp dumper generated SDK
 * Package: /Script/BikeKidRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BikeKidRuntime.BikeKidDismissalData
// Kind: ScriptStruct; super: none
struct FBikeKidDismissalData
{
public:
    float DeposessDelay; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInstantDestruction; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t DismissalReason[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float ServerDismissStartTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBikeKidDismissalData, DeposessDelay) == 0, "Offset mismatch for FBikeKidDismissalData::DeposessDelay");
static_assert(offsetof(FBikeKidDismissalData, bInstantDestruction) == 4, "Offset mismatch for FBikeKidDismissalData::bInstantDestruction");
static_assert(offsetof(FBikeKidDismissalData, DismissalReason) == 8, "Offset mismatch for FBikeKidDismissalData::DismissalReason");
static_assert(offsetof(FBikeKidDismissalData, ServerDismissStartTime) == 12, "Offset mismatch for FBikeKidDismissalData::ServerDismissStartTime");

// /Script/BikeKidRuntime.BikeKidInputTriggerableEvent
// Kind: ScriptStruct; super: none
struct FBikeKidInputTriggerableEvent
{
public:
    FName InputActionName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* InputAction; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayEventToTrigger[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBikeKidInputTriggerableEvent, InputActionName) == 0, "Offset mismatch for FBikeKidInputTriggerableEvent::InputActionName");
static_assert(offsetof(FBikeKidInputTriggerableEvent, InputAction) == 8, "Offset mismatch for FBikeKidInputTriggerableEvent::InputAction");
static_assert(offsetof(FBikeKidInputTriggerableEvent, GameplayEventToTrigger) == 16, "Offset mismatch for FBikeKidInputTriggerableEvent::GameplayEventToTrigger");

// /Script/BikeKidRuntime.BikeKidStatusData
// Kind: ScriptStruct; super: none
struct FBikeKidStatusData
{
public:
    std::uint8_t Status; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ServerTimeStatusChanged; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBikeKidStatusData, Status) == 0, "Offset mismatch for FBikeKidStatusData::Status");
static_assert(offsetof(FBikeKidStatusData, ServerTimeStatusChanged) == 4, "Offset mismatch for FBikeKidStatusData::ServerTimeStatusChanged");

// /Script/BikeKidRuntime.OnFortBikeKidDeployed
// Kind: ScriptStruct; super: none
struct FOnFortBikeKidDeployed
{
public:
    TWeakObjectPtr<void> DeployedBikeKid; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FOnFortBikeKidDeployed, DeployedBikeKid) == 0, "Offset mismatch for FOnFortBikeKidDeployed::DeployedBikeKid");

// /Script/BikeKidRuntime.OnFortBikeKidDismissed
// Kind: ScriptStruct; super: none
struct FOnFortBikeKidDismissed
{
public:
    std::uint8_t DismissalReason[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOnFortBikeKidDismissed, DismissalReason) == 0, "Offset mismatch for FOnFortBikeKidDismissed::DismissalReason");

// /Script/BikeKidRuntime.OnFortBikeKidMarkedEnemies
// Kind: ScriptStruct; super: none
struct FOnFortBikeKidMarkedEnemies
{
public:
    std::uint8_t Source[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> MarkedActors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnFortBikeKidMarkedEnemies, Source) == 0, "Offset mismatch for FOnFortBikeKidMarkedEnemies::Source");
static_assert(offsetof(FOnFortBikeKidMarkedEnemies, MarkedActors) == 8, "Offset mismatch for FOnFortBikeKidMarkedEnemies::MarkedActors");

// /Script/BikeKidRuntime.BikeKidDeferredDestructionPayload
// Kind: Class; super: Object
class UBikeKidDeferredDestructionPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DeferredDestructionData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBikeKidDeferredDestructionPayload, DeferredDestructionData) == 40, "Offset mismatch for UBikeKidDeferredDestructionPayload::DeferredDestructionData");

// /Script/BikeKidRuntime.BikeKidPassiveMarkPayload
// Kind: Class; super: Object
class UBikeKidPassiveMarkPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TargetStatus[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBikeKidPassiveMarkPayload, TargetStatus) == 40, "Offset mismatch for UBikeKidPassiveMarkPayload::TargetStatus");

// /Script/BikeKidRuntime.FortAthenaMutator_BikeKid
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_BikeKid
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bIsControllingBikeKid; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_BikeKid, bIsControllingBikeKid) == 736, "Offset mismatch for UFortAthenaMutator_BikeKid::bIsControllingBikeKid");

// /Script/BikeKidRuntime.FortBikeKid
// Kind: Class; super: Character
class UFortBikeKid
{
public:
    std::uint8_t Pad_0000[0x678]; // 0x0000
    void* NSBikeKidIdle_Native; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* TeamMateIndicatorMarkerWidgetClass; // 0x0680 (Size: 0x8, Type: ClassProperty)
    void* BikeKidMotorLoopComponent; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* BikeKidThrustSoundComponent; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultTags[0x20]; // 0x0698 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplosionCueTag[0x4]; // 0x06B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bExploded; // 0x06BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x06BD
    void* AbilitySystemComponent; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* AffiliationComponent; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    void* StartupAbilitySet; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    void* ControllingPlayerPawn; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    void* HealthSet; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* EnergySet; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttributeInitKey[0x8]; // 0x06F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimarySurfaceType; // 0x0700 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeaponResponseType; // 0x0701 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPlayedDeath; // 0x0702 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0703
    std::uint8_t OutOfHealthDismissDelayData[0x14]; // 0x0704 (Size: 0x14, Type: StructProperty)
    TArray<void*> ExplodeEffectContainerSpecs; // 0x0718 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnTeamIndexChanged; // 0x0728 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PawnOverrideComponentClass; // 0x0738 (Size: 0x8, Type: ClassProperty)
    void* BikeKidMotorLoopSound; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* BikeKidThrusterSound; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* AudioParameter; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocallyViewedPawnAudioParamName[0x4]; // 0x0758 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsEnemyAudioParamName[0x4]; // 0x075C (Size: 0x4, Type: NameProperty)
    std::uint8_t ThrustAmountAudioParamName[0x4]; // 0x0760 (Size: 0x4, Type: NameProperty)
    float ThrustSoundThreshold; // 0x0764 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0768
    std::uint8_t LaunchDelay[0x28]; // 0x0770 (Size: 0x28, Type: StructProperty)
    float ServerWorldCreationTime; // 0x0798 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortBikeKid, NSBikeKidIdle_Native) == 1656, "Offset mismatch for UFortBikeKid::NSBikeKidIdle_Native");
static_assert(offsetof(UFortBikeKid, TeamMateIndicatorMarkerWidgetClass) == 1664, "Offset mismatch for UFortBikeKid::TeamMateIndicatorMarkerWidgetClass");
static_assert(offsetof(UFortBikeKid, BikeKidMotorLoopComponent) == 1672, "Offset mismatch for UFortBikeKid::BikeKidMotorLoopComponent");
static_assert(offsetof(UFortBikeKid, BikeKidThrustSoundComponent) == 1680, "Offset mismatch for UFortBikeKid::BikeKidThrustSoundComponent");
static_assert(offsetof(UFortBikeKid, DefaultTags) == 1688, "Offset mismatch for UFortBikeKid::DefaultTags");
static_assert(offsetof(UFortBikeKid, ExplosionCueTag) == 1720, "Offset mismatch for UFortBikeKid::ExplosionCueTag");
static_assert(offsetof(UFortBikeKid, bExploded) == 1724, "Offset mismatch for UFortBikeKid::bExploded");
static_assert(offsetof(UFortBikeKid, AbilitySystemComponent) == 1736, "Offset mismatch for UFortBikeKid::AbilitySystemComponent");
static_assert(offsetof(UFortBikeKid, AffiliationComponent) == 1744, "Offset mismatch for UFortBikeKid::AffiliationComponent");
static_assert(offsetof(UFortBikeKid, StartupAbilitySet) == 1752, "Offset mismatch for UFortBikeKid::StartupAbilitySet");
static_assert(offsetof(UFortBikeKid, ControllingPlayerPawn) == 1760, "Offset mismatch for UFortBikeKid::ControllingPlayerPawn");
static_assert(offsetof(UFortBikeKid, HealthSet) == 1768, "Offset mismatch for UFortBikeKid::HealthSet");
static_assert(offsetof(UFortBikeKid, EnergySet) == 1776, "Offset mismatch for UFortBikeKid::EnergySet");
static_assert(offsetof(UFortBikeKid, AttributeInitKey) == 1784, "Offset mismatch for UFortBikeKid::AttributeInitKey");
static_assert(offsetof(UFortBikeKid, PrimarySurfaceType) == 1792, "Offset mismatch for UFortBikeKid::PrimarySurfaceType");
static_assert(offsetof(UFortBikeKid, WeaponResponseType) == 1793, "Offset mismatch for UFortBikeKid::WeaponResponseType");
static_assert(offsetof(UFortBikeKid, bPlayedDeath) == 1794, "Offset mismatch for UFortBikeKid::bPlayedDeath");
static_assert(offsetof(UFortBikeKid, OutOfHealthDismissDelayData) == 1796, "Offset mismatch for UFortBikeKid::OutOfHealthDismissDelayData");
static_assert(offsetof(UFortBikeKid, ExplodeEffectContainerSpecs) == 1816, "Offset mismatch for UFortBikeKid::ExplodeEffectContainerSpecs");
static_assert(offsetof(UFortBikeKid, OnTeamIndexChanged) == 1832, "Offset mismatch for UFortBikeKid::OnTeamIndexChanged");
static_assert(offsetof(UFortBikeKid, PawnOverrideComponentClass) == 1848, "Offset mismatch for UFortBikeKid::PawnOverrideComponentClass");
static_assert(offsetof(UFortBikeKid, BikeKidMotorLoopSound) == 1856, "Offset mismatch for UFortBikeKid::BikeKidMotorLoopSound");
static_assert(offsetof(UFortBikeKid, BikeKidThrusterSound) == 1864, "Offset mismatch for UFortBikeKid::BikeKidThrusterSound");
static_assert(offsetof(UFortBikeKid, AudioParameter) == 1872, "Offset mismatch for UFortBikeKid::AudioParameter");
static_assert(offsetof(UFortBikeKid, LocallyViewedPawnAudioParamName) == 1880, "Offset mismatch for UFortBikeKid::LocallyViewedPawnAudioParamName");
static_assert(offsetof(UFortBikeKid, IsEnemyAudioParamName) == 1884, "Offset mismatch for UFortBikeKid::IsEnemyAudioParamName");
static_assert(offsetof(UFortBikeKid, ThrustAmountAudioParamName) == 1888, "Offset mismatch for UFortBikeKid::ThrustAmountAudioParamName");
static_assert(offsetof(UFortBikeKid, ThrustSoundThreshold) == 1892, "Offset mismatch for UFortBikeKid::ThrustSoundThreshold");
static_assert(offsetof(UFortBikeKid, LaunchDelay) == 1904, "Offset mismatch for UFortBikeKid::LaunchDelay");
static_assert(offsetof(UFortBikeKid, ServerWorldCreationTime) == 1944, "Offset mismatch for UFortBikeKid::ServerWorldCreationTime");

// /Script/BikeKidRuntime.FortBikeKidAnalyticsComponent
// Kind: Class; super: FortControllerComponent
class UFortBikeKidAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float SessionStartTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float SessionLength; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinSessionLength[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    float DistanceTraveled; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DismissalReason[0xC]; // 0x00FC (Size: 0xC, Type: StructProperty)
    std::uint8_t DistanceTraveledUpdateInterval[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistanceTraveledUpdateTimerHandle[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastRecorderBikeKidLocation[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBikeKidAnalyticsComponent, SessionStartTime) == 200, "Offset mismatch for UFortBikeKidAnalyticsComponent::SessionStartTime");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, SessionLength) == 204, "Offset mismatch for UFortBikeKidAnalyticsComponent::SessionLength");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, MinSessionLength) == 208, "Offset mismatch for UFortBikeKidAnalyticsComponent::MinSessionLength");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, DistanceTraveled) == 248, "Offset mismatch for UFortBikeKidAnalyticsComponent::DistanceTraveled");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, DismissalReason) == 252, "Offset mismatch for UFortBikeKidAnalyticsComponent::DismissalReason");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, DistanceTraveledUpdateInterval) == 264, "Offset mismatch for UFortBikeKidAnalyticsComponent::DistanceTraveledUpdateInterval");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, DistanceTraveledUpdateTimerHandle) == 304, "Offset mismatch for UFortBikeKidAnalyticsComponent::DistanceTraveledUpdateTimerHandle");
static_assert(offsetof(UFortBikeKidAnalyticsComponent, LastRecorderBikeKidLocation) == 312, "Offset mismatch for UFortBikeKidAnalyticsComponent::LastRecorderBikeKidLocation");

// /Script/BikeKidRuntime.FortBikeKidCameraMode
// Kind: Class; super: Fort3PCameraMode
class UFortBikeKidCameraMode
{
public:
    std::uint8_t Pad_0000[0x208]; // 0x0000
    std::uint8_t bShouldInterpolateLocation; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldInterpolateRotation; // 0x0209 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBikeKidCameraMode, bShouldInterpolateLocation) == 520, "Offset mismatch for UFortBikeKidCameraMode::bShouldInterpolateLocation");
static_assert(offsetof(UFortBikeKidCameraMode, bShouldInterpolateRotation) == 521, "Offset mismatch for UFortBikeKidCameraMode::bShouldInterpolateRotation");

// /Script/BikeKidRuntime.FortBikeKidControllingComponent
// Kind: Class; super: FortControllerComponent
class UFortBikeKidControllingComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CachedControllerRotator[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    void* BikeKidInputComponent; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* ControlledBikeKid; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* LastControlledBikeKid; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* OriginalBikeKidOwner; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* BikeKidInputContext; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InputTriggerableEvents; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* DismissAction; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0150
    std::uint8_t OwningActorStencilData[0x80]; // 0x0158 (Size: 0x80, Type: StructProperty)
    std::uint8_t CurrentDismissalData[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    void* FirstPersonCameraModeOverride; // 0x01E8 (Size: 0x8, Type: ClassProperty)
    void* ThirdPersonCameraModeOverride; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FakeCameraAbilitySpec[0xE8]; // 0x01F8 (Size: 0xE8, Type: StructProperty)
    TArray<void*> LegacyInputActionsToBlock; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    void* BlockActionsGameplayEffect; // 0x02F0 (Size: 0x8, Type: ClassProperty)
    void* DismissPayloadCache; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DismissButtonPressCooldown[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    float InitialDismissInputCooldown; // 0x0328 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x032C
    std::uint8_t PlayerToBikeKidTransitionParams[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    std::uint8_t BikeKidToPlayerTransitionParams[0x10]; // 0x0348 (Size: 0x10, Type: StructProperty)
    std::uint8_t InterruptingPlayerTags[0x30]; // 0x0358 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxTurnRate[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t MouseTurnRate[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GamepadTurnRate[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TouchLookAccelerationMultiplier[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t GyroTurnRate[0x1]; // 0x0428 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBikeKidControllingComponent, CachedControllerRotator) == 200, "Offset mismatch for UFortBikeKidControllingComponent::CachedControllerRotator");
static_assert(offsetof(UFortBikeKidControllingComponent, BikeKidInputComponent) == 272, "Offset mismatch for UFortBikeKidControllingComponent::BikeKidInputComponent");
static_assert(offsetof(UFortBikeKidControllingComponent, ControlledBikeKid) == 280, "Offset mismatch for UFortBikeKidControllingComponent::ControlledBikeKid");
static_assert(offsetof(UFortBikeKidControllingComponent, LastControlledBikeKid) == 288, "Offset mismatch for UFortBikeKidControllingComponent::LastControlledBikeKid");
static_assert(offsetof(UFortBikeKidControllingComponent, OriginalBikeKidOwner) == 296, "Offset mismatch for UFortBikeKidControllingComponent::OriginalBikeKidOwner");
static_assert(offsetof(UFortBikeKidControllingComponent, BikeKidInputContext) == 304, "Offset mismatch for UFortBikeKidControllingComponent::BikeKidInputContext");
static_assert(offsetof(UFortBikeKidControllingComponent, InputTriggerableEvents) == 312, "Offset mismatch for UFortBikeKidControllingComponent::InputTriggerableEvents");
static_assert(offsetof(UFortBikeKidControllingComponent, DismissAction) == 328, "Offset mismatch for UFortBikeKidControllingComponent::DismissAction");
static_assert(offsetof(UFortBikeKidControllingComponent, OwningActorStencilData) == 344, "Offset mismatch for UFortBikeKidControllingComponent::OwningActorStencilData");
static_assert(offsetof(UFortBikeKidControllingComponent, CurrentDismissalData) == 472, "Offset mismatch for UFortBikeKidControllingComponent::CurrentDismissalData");
static_assert(offsetof(UFortBikeKidControllingComponent, FirstPersonCameraModeOverride) == 488, "Offset mismatch for UFortBikeKidControllingComponent::FirstPersonCameraModeOverride");
static_assert(offsetof(UFortBikeKidControllingComponent, ThirdPersonCameraModeOverride) == 496, "Offset mismatch for UFortBikeKidControllingComponent::ThirdPersonCameraModeOverride");
static_assert(offsetof(UFortBikeKidControllingComponent, FakeCameraAbilitySpec) == 504, "Offset mismatch for UFortBikeKidControllingComponent::FakeCameraAbilitySpec");
static_assert(offsetof(UFortBikeKidControllingComponent, LegacyInputActionsToBlock) == 736, "Offset mismatch for UFortBikeKidControllingComponent::LegacyInputActionsToBlock");
static_assert(offsetof(UFortBikeKidControllingComponent, BlockActionsGameplayEffect) == 752, "Offset mismatch for UFortBikeKidControllingComponent::BlockActionsGameplayEffect");
static_assert(offsetof(UFortBikeKidControllingComponent, DismissPayloadCache) == 760, "Offset mismatch for UFortBikeKidControllingComponent::DismissPayloadCache");
static_assert(offsetof(UFortBikeKidControllingComponent, DismissButtonPressCooldown) == 768, "Offset mismatch for UFortBikeKidControllingComponent::DismissButtonPressCooldown");
static_assert(offsetof(UFortBikeKidControllingComponent, InitialDismissInputCooldown) == 808, "Offset mismatch for UFortBikeKidControllingComponent::InitialDismissInputCooldown");
static_assert(offsetof(UFortBikeKidControllingComponent, PlayerToBikeKidTransitionParams) == 824, "Offset mismatch for UFortBikeKidControllingComponent::PlayerToBikeKidTransitionParams");
static_assert(offsetof(UFortBikeKidControllingComponent, BikeKidToPlayerTransitionParams) == 840, "Offset mismatch for UFortBikeKidControllingComponent::BikeKidToPlayerTransitionParams");
static_assert(offsetof(UFortBikeKidControllingComponent, InterruptingPlayerTags) == 856, "Offset mismatch for UFortBikeKidControllingComponent::InterruptingPlayerTags");
static_assert(offsetof(UFortBikeKidControllingComponent, MaxTurnRate) == 904, "Offset mismatch for UFortBikeKidControllingComponent::MaxTurnRate");
static_assert(offsetof(UFortBikeKidControllingComponent, MouseTurnRate) == 944, "Offset mismatch for UFortBikeKidControllingComponent::MouseTurnRate");
static_assert(offsetof(UFortBikeKidControllingComponent, GamepadTurnRate) == 984, "Offset mismatch for UFortBikeKidControllingComponent::GamepadTurnRate");
static_assert(offsetof(UFortBikeKidControllingComponent, TouchLookAccelerationMultiplier) == 1024, "Offset mismatch for UFortBikeKidControllingComponent::TouchLookAccelerationMultiplier");
static_assert(offsetof(UFortBikeKidControllingComponent, GyroTurnRate) == 1064, "Offset mismatch for UFortBikeKidControllingComponent::GyroTurnRate");

// /Script/BikeKidRuntime.FortBikeKidMovementComponent
// Kind: Class; super: CharacterMovementComponent
class UFortBikeKidMovementComponent
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    std::uint8_t PreLaunchSpeed[0x28]; // 0x0FF0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostLaunchSpeed[0x28]; // 0x1018 (Size: 0x28, Type: StructProperty)
    void* HitBoxComponent; // 0x1040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortBikeKidMovementComponent, PreLaunchSpeed) == 4080, "Offset mismatch for UFortBikeKidMovementComponent::PreLaunchSpeed");
static_assert(offsetof(UFortBikeKidMovementComponent, PostLaunchSpeed) == 4120, "Offset mismatch for UFortBikeKidMovementComponent::PostLaunchSpeed");
static_assert(offsetof(UFortBikeKidMovementComponent, HitBoxComponent) == 4160, "Offset mismatch for UFortBikeKidMovementComponent::HitBoxComponent");

// /Script/BikeKidRuntime.FortBikeKidPawnOverrideComponent
// Kind: Class; super: FortPawnOverrideComponent
class UFortBikeKidPawnOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BikeKidSpectateCameraMode; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortBikeKidPawnOverrideComponent, BikeKidSpectateCameraMode) == 200, "Offset mismatch for UFortBikeKidPawnOverrideComponent::BikeKidSpectateCameraMode");

// /Script/BikeKidRuntime.FortBikeKidPawnOwnerOverrideComponent
// Kind: Class; super: FortPawnOverrideComponent
class UFortBikeKidPawnOwnerOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> ControlledBikeKid; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortBikeKidPawnOwnerOverrideComponent, ControlledBikeKid) == 200, "Offset mismatch for UFortBikeKidPawnOwnerOverrideComponent::ControlledBikeKid");

// /Script/BikeKidRuntime.FortChargingSet_BikeKidEnergy
// Kind: Class; super: FortChargingSet_Base
class UFortChargingSet_BikeKidEnergy
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Energy[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxEnergy[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyChargeRate[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ServerTimeEnergyIncrements[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_BikeKidEnergy, Energy) == 96, "Offset mismatch for UFortChargingSet_BikeKidEnergy::Energy");
static_assert(offsetof(UFortChargingSet_BikeKidEnergy, MaxEnergy) == 136, "Offset mismatch for UFortChargingSet_BikeKidEnergy::MaxEnergy");
static_assert(offsetof(UFortChargingSet_BikeKidEnergy, EnergyChargeRate) == 176, "Offset mismatch for UFortChargingSet_BikeKidEnergy::EnergyChargeRate");
static_assert(offsetof(UFortChargingSet_BikeKidEnergy, ServerTimeEnergyIncrements) == 216, "Offset mismatch for UFortChargingSet_BikeKidEnergy::ServerTimeEnergyIncrements");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_Activate
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_BikeKid_Activate
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* RCActorClass; // 0x0B20 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpawnOffset[0x18]; // 0x0B28 (Size: 0x18, Type: StructProperty)
    float ForwardObstructionCheckDistance; // 0x0B40 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGameplayAbility_BikeKid_Activate, RCActorClass) == 2848, "Offset mismatch for UFortGameplayAbility_BikeKid_Activate::RCActorClass");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Activate, SpawnOffset) == 2856, "Offset mismatch for UFortGameplayAbility_BikeKid_Activate::SpawnOffset");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Activate, ForwardObstructionCheckDistance) == 2880, "Offset mismatch for UFortGameplayAbility_BikeKid_Activate::ForwardObstructionCheckDistance");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_Dismiss
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_BikeKid_Dismiss
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t DismissDelayData[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_BikeKid_Dismiss, DismissDelayData) == 2848, "Offset mismatch for UFortGameplayAbility_BikeKid_Dismiss::DismissDelayData");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_MarkPotentialTargets
// Kind: Class; super: FortGameplayAbility_BikeKid_TargetingBase
class UFortGameplayAbility_BikeKid_MarkPotentialTargets
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t IndicatedActorData[0x110]; // 0x0B68 (Size: 0x110, Type: StructProperty)
    std::uint8_t MaxNumberOfPotentialTargets[0x1]; // 0x0C78 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_BikeKid_MarkPotentialTargets, IndicatedActorData) == 2920, "Offset mismatch for UFortGameplayAbility_BikeKid_MarkPotentialTargets::IndicatedActorData");
static_assert(offsetof(UFortGameplayAbility_BikeKid_MarkPotentialTargets, MaxNumberOfPotentialTargets) == 3192, "Offset mismatch for UFortGameplayAbility_BikeKid_MarkPotentialTargets::MaxNumberOfPotentialTargets");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_PassiveMark
// Kind: Class; super: FortGameplayAbility_BikeKid_TargetingBase
class UFortGameplayAbility_BikeKid_PassiveMark
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

static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, CurrentTargetStatus) == 2920, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::CurrentTargetStatus");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, StenciledActorData) == 2928, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::StenciledActorData");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, IndicatedActorData) == 3056, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::IndicatedActorData");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, ActorTargetingRange) == 3312, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::ActorTargetingRange");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, TimeToConfirmTarget) == 3352, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::TimeToConfirmTarget");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, CurrentTarget) == 3392, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::CurrentTarget");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, TargetConfirmationTimerHandle) == 3400, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::TargetConfirmationTimerHandle");
static_assert(offsetof(UFortGameplayAbility_BikeKid_PassiveMark, PayloadCache) == 3408, "Offset mismatch for UFortGameplayAbility_BikeKid_PassiveMark::PayloadCache");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_SpeedBoost
// Kind: Class; super: FortGameplayAbility_BikeKid_TargetingBase
class UFortGameplayAbility_BikeKid_SpeedBoost
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

static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashCueTag) == 2920, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashCueTag");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DamageGameplayEffectClass) == 2928, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DamageGameplayEffectClass");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashPawnLaunchGameplayCueTag) == 2936, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashPawnLaunchGameplayCueTag");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashEnabledHotfix) == 2944, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashEnabledHotfix");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashSphereRadiusForPawnLaunch) == 2984, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashSphereRadiusForPawnLaunch");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashScalarForPawnLaunch) == 3024, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashScalarForPawnLaunch");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashCollisionTypesForPawn) == 3064, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashCollisionTypesForPawn");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DoorBashEnabled) == 3080, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DoorBashEnabled");
static_assert(offsetof(UFortGameplayAbility_BikeKid_SpeedBoost, DamageOnBoostEnabled) == 3120, "Offset mismatch for UFortGameplayAbility_BikeKid_SpeedBoost::DamageOnBoostEnabled");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_TargetingBase
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_BikeKid_TargetingBase
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* TargetingPreset; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AsyncTargetingHandle[0x8]; // 0x0B28 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingTimerHandle[0x8]; // 0x0B30 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingInterval[0x28]; // 0x0B38 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseControllerAsInstigator; // 0x0B60 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayAbility_BikeKid_TargetingBase, TargetingPreset) == 2848, "Offset mismatch for UFortGameplayAbility_BikeKid_TargetingBase::TargetingPreset");
static_assert(offsetof(UFortGameplayAbility_BikeKid_TargetingBase, AsyncTargetingHandle) == 2856, "Offset mismatch for UFortGameplayAbility_BikeKid_TargetingBase::AsyncTargetingHandle");
static_assert(offsetof(UFortGameplayAbility_BikeKid_TargetingBase, TargetingTimerHandle) == 2864, "Offset mismatch for UFortGameplayAbility_BikeKid_TargetingBase::TargetingTimerHandle");
static_assert(offsetof(UFortGameplayAbility_BikeKid_TargetingBase, TargetingInterval) == 2872, "Offset mismatch for UFortGameplayAbility_BikeKid_TargetingBase::TargetingInterval");
static_assert(offsetof(UFortGameplayAbility_BikeKid_TargetingBase, bUseControllerAsInstigator) == 2912, "Offset mismatch for UFortGameplayAbility_BikeKid_TargetingBase::bUseControllerAsInstigator");

// /Script/BikeKidRuntime.FortGameplayAbility_BikeKid_Tether
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_BikeKid_Tether
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

static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, WarningRange) == 2848, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::WarningRange");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, SignalLossRange) == 2888, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::SignalLossRange");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, bIsInWarningRange) == 2928, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::bIsInWarningRange");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, bIsInSignalLossRange) == 2929, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::bIsInSignalLossRange");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, TetheringTimerHandle) == 2936, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::TetheringTimerHandle");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, TetheringReportTimerHandle) == 2944, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::TetheringReportTimerHandle");
static_assert(offsetof(UFortGameplayAbility_BikeKid_Tether, DismissDelayData) == 2952, "Offset mismatch for UFortGameplayAbility_BikeKid_Tether::DismissDelayData");
