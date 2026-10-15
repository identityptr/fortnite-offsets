/**
 * decamp dumper generated SDK
 * Package: /Script/TacticalSprintRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TacticalSprintRuntime.FortGameplayCueNotifyLoop_TacticalSprint
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotifyLoop_TacticalSprint
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t EnergyPercentageName[0x4]; // 0x0C48 (Size: 0x4, Type: NameProperty)
    std::uint8_t KickAdditiveGainFadeName[0x4]; // 0x0C4C (Size: 0x4, Type: NameProperty)
    float FXUpdateRate; // 0x0C50 (Size: 0x4, Type: FloatProperty)
    float LowestGainLevelValue; // 0x0C54 (Size: 0x4, Type: FloatProperty)
    std::uint32_t NativePreStepFadeDelay; // 0x0C58 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x0C5C
    void* EnergyComponentClass; // 0x0C60 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StartSprintSoundTag[0x8]; // 0x0C68 (Size: 0x8, Type: StructProperty)
    void* StartSoundContextClass; // 0x0C70 (Size: 0x8, Type: ClassProperty)
    void* OwnerPlayerPawn; // 0x0C78 (Size: 0x8, Type: ObjectProperty)
    void* OwnerEnergyComponent; // 0x0C80 (Size: 0x8, Type: ObjectProperty)
    void* OwnerAudioParameterComponent; // 0x0C88 (Size: 0x8, Type: ObjectProperty)
    void* SprintSoundLibraryContext; // 0x0C90 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, EnergyPercentageName) == 3144, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::EnergyPercentageName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, KickAdditiveGainFadeName) == 3148, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::KickAdditiveGainFadeName");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, FXUpdateRate) == 3152, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::FXUpdateRate");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, LowestGainLevelValue) == 3156, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::LowestGainLevelValue");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, NativePreStepFadeDelay) == 3160, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::NativePreStepFadeDelay");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, EnergyComponentClass) == 3168, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::EnergyComponentClass");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, StartSprintSoundTag) == 3176, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::StartSprintSoundTag");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, StartSoundContextClass) == 3184, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::StartSoundContextClass");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, OwnerPlayerPawn) == 3192, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::OwnerPlayerPawn");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, OwnerEnergyComponent) == 3200, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::OwnerEnergyComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, OwnerAudioParameterComponent) == 3208, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::OwnerAudioParameterComponent");
static_assert(offsetof(UFortGameplayCueNotifyLoop_TacticalSprint, SprintSoundLibraryContext) == 3216, "Offset mismatch for UFortGameplayCueNotifyLoop_TacticalSprint::SprintSoundLibraryContext");

// /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
// Kind: Class; super: FortMovementMode_ItemActivated
class UFortMovementMode_ELTacSprint
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t TacticalSprintFail[0x20]; // 0x01E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TacticalSprintFailLowEnergy[0x20]; // 0x0208 (Size: 0x20, Type: StructProperty)
    std::uint8_t MinEnergyToActivate[0x30]; // 0x0228 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinEnergyToActivateCreative[0x2C]; // 0x0258 (Size: 0x2C, Type: StructProperty)
    std::uint8_t GCEnergyDrain[0x4]; // 0x0284 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCSpeedLines[0x4]; // 0x0288 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCSprintEnd[0x4]; // 0x028C (Size: 0x4, Type: StructProperty)
    std::uint8_t ShowSpeedLines[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedMultiplier[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationMultiplier[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RampUpSpeed[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t ModifiedRotationRate[0x30]; // 0x0330 (Size: 0x30, Type: StructProperty)
    std::uint8_t JumpHeightMultiplier[0x2C]; // 0x0360 (Size: 0x2C, Type: StructProperty)
    std::uint8_t TutorialGameplayTag[0x4]; // 0x038C (Size: 0x4, Type: StructProperty)
    std::uint8_t TutorialAdditionalSourceTag[0x20]; // 0x0390 (Size: 0x20, Type: StructProperty)
    std::uint8_t TutorialTargetTag[0x20]; // 0x03B0 (Size: 0x20, Type: StructProperty)
    void* OnEnergyFullyDrainedSound; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TacticalBehaviorTag[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsCancelledBySliding; // 0x03DC (Size: 0x1, Type: BoolProperty)
    // 0x03DC BoolProperty bUseModifiedRotationRate (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x03DD
    std::uint8_t AllowWeaponHolster[0x2C]; // 0x03E0 (Size: 0x2C, Type: StructProperty)
    std::uint8_t bOnlyShowEnergyDrainOnLocalClient; // 0x040C (Size: 0x1, Type: BoolProperty)
    // 0x040C BoolProperty bOnlyShowSpeedLinesOnLocalClient (shared storage)
    // 0x040C BoolProperty bOnlyShowSprintEndOnLocalClient (shared storage)
    // 0x040C BoolProperty bShouldDropHeldObjectOnActivate (shared storage)
    // 0x040C BoolProperty bShouldHolsterWeapon (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x040D
    std::uint8_t TagPreventWeaponHolster[0x4]; // 0x0410 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagPreventHeldObjectDrop[0x4]; // 0x0414 (Size: 0x4, Type: StructProperty)
    float MinSpeedForHolster; // 0x0418 (Size: 0x4, Type: FloatProperty)
    float HolsterTimeAttemptDelay; // 0x041C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxTryHolsterAttempt; // 0x0420 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0xF]; // 0x0421
    void* EnergyComponentClass; // 0x0430 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HF_EnergyCostOnStart[0x30]; // 0x0438 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_EnergyCostPerSecond[0x30]; // 0x0468 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_EnergyCostOnJump[0x30]; // 0x0498 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_DurabilityCostOnStart[0x30]; // 0x04C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t HF_DurabilityCostOnJump[0x2C]; // 0x04F8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t IgnoreJumpCostTag[0x4]; // 0x0524 (Size: 0x4, Type: StructProperty)
    std::uint8_t ShouldPauseEnergyUseOnFalling[0x30]; // 0x0528 (Size: 0x30, Type: StructProperty)
    std::uint8_t ShouldStopEnergyRegenerationOnPaused[0x2C]; // 0x0558 (Size: 0x2C, Type: StructProperty)
    std::uint8_t StopEnergyRegenerationOnPauseTag[0x4]; // 0x0584 (Size: 0x4, Type: StructProperty)
    std::uint8_t TacticalSprintTag[0x4]; // 0x0588 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnergyUseIdentifier[0x4]; // 0x058C (Size: 0x4, Type: StructProperty)
    void* SprintStartedSoundMix; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* SprintStartedSound2D; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x05A0
    std::uint8_t HF_TacSprintEnabled[0x1]; // 0x05A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ELTacSprint, TacticalSprintFail) == 488, "Offset mismatch for UFortMovementMode_ELTacSprint::TacticalSprintFail");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TacticalSprintFailLowEnergy) == 520, "Offset mismatch for UFortMovementMode_ELTacSprint::TacticalSprintFailLowEnergy");
static_assert(offsetof(UFortMovementMode_ELTacSprint, MinEnergyToActivate) == 552, "Offset mismatch for UFortMovementMode_ELTacSprint::MinEnergyToActivate");
static_assert(offsetof(UFortMovementMode_ELTacSprint, MinEnergyToActivateCreative) == 600, "Offset mismatch for UFortMovementMode_ELTacSprint::MinEnergyToActivateCreative");
static_assert(offsetof(UFortMovementMode_ELTacSprint, GCEnergyDrain) == 644, "Offset mismatch for UFortMovementMode_ELTacSprint::GCEnergyDrain");
static_assert(offsetof(UFortMovementMode_ELTacSprint, GCSpeedLines) == 648, "Offset mismatch for UFortMovementMode_ELTacSprint::GCSpeedLines");
static_assert(offsetof(UFortMovementMode_ELTacSprint, GCSprintEnd) == 652, "Offset mismatch for UFortMovementMode_ELTacSprint::GCSprintEnd");
static_assert(offsetof(UFortMovementMode_ELTacSprint, ShowSpeedLines) == 656, "Offset mismatch for UFortMovementMode_ELTacSprint::ShowSpeedLines");
static_assert(offsetof(UFortMovementMode_ELTacSprint, MaxSpeedMultiplier) == 696, "Offset mismatch for UFortMovementMode_ELTacSprint::MaxSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ELTacSprint, AccelerationMultiplier) == 736, "Offset mismatch for UFortMovementMode_ELTacSprint::AccelerationMultiplier");
static_assert(offsetof(UFortMovementMode_ELTacSprint, RampUpSpeed) == 776, "Offset mismatch for UFortMovementMode_ELTacSprint::RampUpSpeed");
static_assert(offsetof(UFortMovementMode_ELTacSprint, ModifiedRotationRate) == 816, "Offset mismatch for UFortMovementMode_ELTacSprint::ModifiedRotationRate");
static_assert(offsetof(UFortMovementMode_ELTacSprint, JumpHeightMultiplier) == 864, "Offset mismatch for UFortMovementMode_ELTacSprint::JumpHeightMultiplier");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TutorialGameplayTag) == 908, "Offset mismatch for UFortMovementMode_ELTacSprint::TutorialGameplayTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TutorialAdditionalSourceTag) == 912, "Offset mismatch for UFortMovementMode_ELTacSprint::TutorialAdditionalSourceTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TutorialTargetTag) == 944, "Offset mismatch for UFortMovementMode_ELTacSprint::TutorialTargetTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, OnEnergyFullyDrainedSound) == 976, "Offset mismatch for UFortMovementMode_ELTacSprint::OnEnergyFullyDrainedSound");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TacticalBehaviorTag) == 984, "Offset mismatch for UFortMovementMode_ELTacSprint::TacticalBehaviorTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, bIsCancelledBySliding) == 988, "Offset mismatch for UFortMovementMode_ELTacSprint::bIsCancelledBySliding");
static_assert(offsetof(UFortMovementMode_ELTacSprint, AllowWeaponHolster) == 992, "Offset mismatch for UFortMovementMode_ELTacSprint::AllowWeaponHolster");
static_assert(offsetof(UFortMovementMode_ELTacSprint, bOnlyShowEnergyDrainOnLocalClient) == 1036, "Offset mismatch for UFortMovementMode_ELTacSprint::bOnlyShowEnergyDrainOnLocalClient");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TagPreventWeaponHolster) == 1040, "Offset mismatch for UFortMovementMode_ELTacSprint::TagPreventWeaponHolster");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TagPreventHeldObjectDrop) == 1044, "Offset mismatch for UFortMovementMode_ELTacSprint::TagPreventHeldObjectDrop");
static_assert(offsetof(UFortMovementMode_ELTacSprint, MinSpeedForHolster) == 1048, "Offset mismatch for UFortMovementMode_ELTacSprint::MinSpeedForHolster");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HolsterTimeAttemptDelay) == 1052, "Offset mismatch for UFortMovementMode_ELTacSprint::HolsterTimeAttemptDelay");
static_assert(offsetof(UFortMovementMode_ELTacSprint, MaxTryHolsterAttempt) == 1056, "Offset mismatch for UFortMovementMode_ELTacSprint::MaxTryHolsterAttempt");
static_assert(offsetof(UFortMovementMode_ELTacSprint, EnergyComponentClass) == 1072, "Offset mismatch for UFortMovementMode_ELTacSprint::EnergyComponentClass");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_EnergyCostOnStart) == 1080, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_EnergyCostOnStart");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_EnergyCostPerSecond) == 1128, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_EnergyCostPerSecond");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_EnergyCostOnJump) == 1176, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_EnergyCostOnJump");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_DurabilityCostOnStart) == 1224, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_DurabilityCostOnStart");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_DurabilityCostOnJump) == 1272, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_DurabilityCostOnJump");
static_assert(offsetof(UFortMovementMode_ELTacSprint, IgnoreJumpCostTag) == 1316, "Offset mismatch for UFortMovementMode_ELTacSprint::IgnoreJumpCostTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, ShouldPauseEnergyUseOnFalling) == 1320, "Offset mismatch for UFortMovementMode_ELTacSprint::ShouldPauseEnergyUseOnFalling");
static_assert(offsetof(UFortMovementMode_ELTacSprint, ShouldStopEnergyRegenerationOnPaused) == 1368, "Offset mismatch for UFortMovementMode_ELTacSprint::ShouldStopEnergyRegenerationOnPaused");
static_assert(offsetof(UFortMovementMode_ELTacSprint, StopEnergyRegenerationOnPauseTag) == 1412, "Offset mismatch for UFortMovementMode_ELTacSprint::StopEnergyRegenerationOnPauseTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, TacticalSprintTag) == 1416, "Offset mismatch for UFortMovementMode_ELTacSprint::TacticalSprintTag");
static_assert(offsetof(UFortMovementMode_ELTacSprint, EnergyUseIdentifier) == 1420, "Offset mismatch for UFortMovementMode_ELTacSprint::EnergyUseIdentifier");
static_assert(offsetof(UFortMovementMode_ELTacSprint, SprintStartedSoundMix) == 1424, "Offset mismatch for UFortMovementMode_ELTacSprint::SprintStartedSoundMix");
static_assert(offsetof(UFortMovementMode_ELTacSprint, SprintStartedSound2D) == 1432, "Offset mismatch for UFortMovementMode_ELTacSprint::SprintStartedSound2D");
static_assert(offsetof(UFortMovementMode_ELTacSprint, HF_TacSprintEnabled) == 1448, "Offset mismatch for UFortMovementMode_ELTacSprint::HF_TacSprintEnabled");

// /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
// Kind: Class; super: FortMovementMode_ItemActivatedRuntimeData
class UFortMovementMode_TacSprintRuntimeData
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

static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_TacSprintRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_TacSprintRuntimeData::EndReasonFlags");

// /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
// Kind: Class; super: ControllerComponent
class UFortPlayerControllerComponent_TacticalSprint
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnFailedToSprint; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MovementModeExtension; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    void* CurrentBoundPlayerPawn; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFireAnalyticsEventOnEndPlay; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    // 0x00F8 BoolProperty bHandlingMoveForward (shared storage)
    // 0x00F8 BoolProperty bIsSprinting (shared storage)
    // 0x00F8 BoolProperty bTacticalSprintEnabled (shared storage)
    // 0x00F8 BoolProperty bWantsToTacticalSprint (shared storage)
    // 0x00F8 BoolProperty bWasInBuildMode (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x00F9
    std::uint8_t TacticalSprintAbilityGameplayTag[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::uint8_t DisableTacticalSprintAbilityGameplayTag[0x8]; // 0x0100 (Size: 0x8, Type: StructProperty)
    std::uint8_t TacticalSprintEnabled[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t TacticalSprintToggleGracePeriod[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseSpeedToAccelerationOverrideCurve; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0159
    std::uint8_t SpeedToAccelerationOverrideCurve[0x48]; // 0x0160 (Size: 0x48, Type: StructProperty)
    FMulticastInlineDelegate OnTacticalSprintStarted; // 0x01A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTacticalSprintEnded; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bUseMovementModeExtension; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x01C9
    std::uint8_t AllowPrimaryFireTag[0x4]; // 0x01D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AllowSecondaryFireTag[0x4]; // 0x01DC (Size: 0x4, Type: StructProperty)
    std::uint8_t AllowSprintWhileAlreadyFiring[0x8]; // 0x01E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t StopWantingToSprintTimerReceipt[0x78]; // 0x01E8 (Size: 0x78, Type: StructProperty)
    void* InputComponent; // 0x0260 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnFailedToSprint) == 216, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::OnFailedToSprint");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, MovementModeExtension) == 232, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::MovementModeExtension");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, CurrentBoundPlayerPawn) == 240, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::CurrentBoundPlayerPawn");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, bFireAnalyticsEventOnEndPlay) == 248, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::bFireAnalyticsEventOnEndPlay");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintAbilityGameplayTag) == 252, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::TacticalSprintAbilityGameplayTag");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, DisableTacticalSprintAbilityGameplayTag) == 256, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::DisableTacticalSprintAbilityGameplayTag");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintEnabled) == 264, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::TacticalSprintEnabled");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, TacticalSprintToggleGracePeriod) == 304, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::TacticalSprintToggleGracePeriod");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, bUseSpeedToAccelerationOverrideCurve) == 344, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::bUseSpeedToAccelerationOverrideCurve");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, SpeedToAccelerationOverrideCurve) == 352, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::SpeedToAccelerationOverrideCurve");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnTacticalSprintStarted) == 424, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::OnTacticalSprintStarted");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, OnTacticalSprintEnded) == 440, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::OnTacticalSprintEnded");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, bUseMovementModeExtension) == 456, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::bUseMovementModeExtension");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, AllowPrimaryFireTag) == 472, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::AllowPrimaryFireTag");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, AllowSecondaryFireTag) == 476, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::AllowSecondaryFireTag");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, AllowSprintWhileAlreadyFiring) == 480, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::AllowSprintWhileAlreadyFiring");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, StopWantingToSprintTimerReceipt) == 488, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::StopWantingToSprintTimerReceipt");
static_assert(offsetof(UFortPlayerControllerComponent_TacticalSprint, InputComponent) == 608, "Offset mismatch for UFortPlayerControllerComponent_TacticalSprint::InputComponent");

// /Script/TacticalSprintRuntime.FortTacticalSprintSoundLibraryContext
// Kind: Class; super: FortSoundLibraryContext
class UFortTacticalSprintSoundLibraryContext
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float StartEnergyPercentage; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float EnergyFireThreshold; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortTacticalSprintSoundLibraryContext, StartEnergyPercentage) == 192, "Offset mismatch for UFortTacticalSprintSoundLibraryContext::StartEnergyPercentage");
static_assert(offsetof(UFortTacticalSprintSoundLibraryContext, EnergyFireThreshold) == 196, "Offset mismatch for UFortTacticalSprintSoundLibraryContext::EnergyFireThreshold");
