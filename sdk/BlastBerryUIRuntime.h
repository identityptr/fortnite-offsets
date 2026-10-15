/**
 * decamp dumper generated SDK
 * Package: /Script/BlastBerryUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BlastBerryUIRuntime.BlastBerryDeathLocationIndicator
// Kind: Class; super: AthenaEliminationIndicator
class UBlastBerryDeathLocationIndicator
{
public:
    std::uint8_t Pad_0000[0x441]; // 0x0000
    std::uint8_t bIsAiming; // 0x0441 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAnchored; // 0x0442 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1D]; // 0x0443
    std::uint8_t MarkerData[0xE0]; // 0x0460 (Size: 0xE0, Type: StructProperty)
    std::uint8_t MarkerDisplay[0xB0]; // 0x0540 (Size: 0xB0, Type: StructProperty)
    void* DetailsTable; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    float FreshLargeItemShowTime; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float IndicatorDotSizeThreshold; // 0x05FC (Size: 0x4, Type: FloatProperty)
    void* MarkerConfirmationSound; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsBelowLookThreshold; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0609
    float MinimumDistanceDeltaToFireOnDistanceUpdated; // 0x060C (Size: 0x4, Type: FloatProperty)
    void* Switcher_IndicatorSize; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* Panel_SmallIndicator; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* Panel_LargeIndicator; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* Text_Distance; // 0x0628 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlastBerryDeathLocationIndicator, bIsAiming) == 1089, "Offset mismatch for UBlastBerryDeathLocationIndicator::bIsAiming");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, bIsAnchored) == 1090, "Offset mismatch for UBlastBerryDeathLocationIndicator::bIsAnchored");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, MarkerData) == 1120, "Offset mismatch for UBlastBerryDeathLocationIndicator::MarkerData");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, MarkerDisplay) == 1344, "Offset mismatch for UBlastBerryDeathLocationIndicator::MarkerDisplay");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, DetailsTable) == 1520, "Offset mismatch for UBlastBerryDeathLocationIndicator::DetailsTable");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, FreshLargeItemShowTime) == 1528, "Offset mismatch for UBlastBerryDeathLocationIndicator::FreshLargeItemShowTime");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, IndicatorDotSizeThreshold) == 1532, "Offset mismatch for UBlastBerryDeathLocationIndicator::IndicatorDotSizeThreshold");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, MarkerConfirmationSound) == 1536, "Offset mismatch for UBlastBerryDeathLocationIndicator::MarkerConfirmationSound");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, bIsBelowLookThreshold) == 1544, "Offset mismatch for UBlastBerryDeathLocationIndicator::bIsBelowLookThreshold");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, MinimumDistanceDeltaToFireOnDistanceUpdated) == 1548, "Offset mismatch for UBlastBerryDeathLocationIndicator::MinimumDistanceDeltaToFireOnDistanceUpdated");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, Switcher_IndicatorSize) == 1552, "Offset mismatch for UBlastBerryDeathLocationIndicator::Switcher_IndicatorSize");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, Panel_SmallIndicator) == 1560, "Offset mismatch for UBlastBerryDeathLocationIndicator::Panel_SmallIndicator");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, Panel_LargeIndicator) == 1568, "Offset mismatch for UBlastBerryDeathLocationIndicator::Panel_LargeIndicator");
static_assert(offsetof(UBlastBerryDeathLocationIndicator, Text_Distance) == 1576, "Offset mismatch for UBlastBerryDeathLocationIndicator::Text_Distance");

// /Script/BlastBerryUIRuntime.BlastBerryInstantRebootWidget
// Kind: Class; super: FortHUDElementWidget
class UBlastBerryInstantRebootWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    float HoldDuration; // 0x0370 (Size: 0x4, Type: FloatProperty)
    float InvulnerabilityRespawnDisplayDelay; // 0x0374 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InvulnerabilityGameplayTag[0x8]; // 0x0378 (Size: 0x8, Type: StructProperty)
    void* KeyBindWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0388
    void* BlastBerryInstantRebootInputComponent; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03B0
    TWeakObjectPtr<void> OwnerASC; // 0x03B4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UBlastBerryInstantRebootWidget, HoldDuration) == 880, "Offset mismatch for UBlastBerryInstantRebootWidget::HoldDuration");
static_assert(offsetof(UBlastBerryInstantRebootWidget, InvulnerabilityRespawnDisplayDelay) == 884, "Offset mismatch for UBlastBerryInstantRebootWidget::InvulnerabilityRespawnDisplayDelay");
static_assert(offsetof(UBlastBerryInstantRebootWidget, InvulnerabilityGameplayTag) == 888, "Offset mismatch for UBlastBerryInstantRebootWidget::InvulnerabilityGameplayTag");
static_assert(offsetof(UBlastBerryInstantRebootWidget, KeyBindWidget) == 896, "Offset mismatch for UBlastBerryInstantRebootWidget::KeyBindWidget");
static_assert(offsetof(UBlastBerryInstantRebootWidget, BlastBerryInstantRebootInputComponent) == 936, "Offset mismatch for UBlastBerryInstantRebootWidget::BlastBerryInstantRebootInputComponent");
static_assert(offsetof(UBlastBerryInstantRebootWidget, OwnerASC) == 948, "Offset mismatch for UBlastBerryInstantRebootWidget::OwnerASC");

// /Script/BlastBerryUIRuntime.BlastBerryPlayerInfoRespawn
// Kind: Class; super: FortHUDElementWidget
class UBlastBerryPlayerInfoRespawn
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    TWeakObjectPtr<void> WeakPlayerStateAthena_RepresentedPlayer; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
    void* Text_Time; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlastBerryPlayerInfoRespawn, WeakPlayerStateAthena_RepresentedPlayer) == 888, "Offset mismatch for UBlastBerryPlayerInfoRespawn::WeakPlayerStateAthena_RepresentedPlayer");
static_assert(offsetof(UBlastBerryPlayerInfoRespawn, Text_Time) == 896, "Offset mismatch for UBlastBerryPlayerInfoRespawn::Text_Time");

// /Script/BlastBerryUIRuntime.FortMobileActionButtonBehaviorExtension_Reboot
// Kind: Class; super: FortMobileActionButtonBehaviorExtension
class UFortMobileActionButtonBehaviorExtension_Reboot
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> ActionNames; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ButtonBehaviorComponentsCached; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_Reboot, ActionNames) == 112, "Offset mismatch for UFortMobileActionButtonBehaviorExtension_Reboot::ActionNames");
static_assert(offsetof(UFortMobileActionButtonBehaviorExtension_Reboot, ButtonBehaviorComponentsCached) == 128, "Offset mismatch for UFortMobileActionButtonBehaviorExtension_Reboot::ButtonBehaviorComponentsCached");

// /Script/BlastBerryUIRuntime.ReloadDuelRewardVM
// Kind: Class; super: FortPerUserViewModel
class UReloadDuelRewardVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* AssignedReward; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UReloadDuelRewardVM, AssignedReward) == 120, "Offset mismatch for UReloadDuelRewardVM::AssignedReward");

// /Script/BlastBerryUIRuntime.ReloadDynamicUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UReloadDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UReloadDynamicUIDirector, DefaultScenes) == 624, "Offset mismatch for UReloadDynamicUIDirector::DefaultScenes");
static_assert(offsetof(UReloadDynamicUIDirector, OwningLocalPlayer) == 640, "Offset mismatch for UReloadDynamicUIDirector::OwningLocalPlayer");
static_assert(offsetof(UReloadDynamicUIDirector, bEnabledDuringReplay) == 648, "Offset mismatch for UReloadDynamicUIDirector::bEnabledDuringReplay");
static_assert(offsetof(UReloadDynamicUIDirector, ScenesManuallyAdded) == 656, "Offset mismatch for UReloadDynamicUIDirector::ScenesManuallyAdded");

// /Script/BlastBerryUIRuntime.ReloadRespawnVM
// Kind: Class; super: FortPerUserViewModel
class UReloadRespawnVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryUIRuntime.ReloadTeamLivesVM
// Kind: Class; super: FortPerUserViewModel
class UReloadTeamLivesVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnRespawnRewardReceived; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bLastRespawn; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UReloadTeamLivesVM, OnRespawnRewardReceived) == 120, "Offset mismatch for UReloadTeamLivesVM::OnRespawnRewardReceived");
static_assert(offsetof(UReloadTeamLivesVM, bLastRespawn) == 136, "Offset mismatch for UReloadTeamLivesVM::bLastRespawn");
