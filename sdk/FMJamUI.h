/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamUI
 */
#pragma once
#include "Basic.h"

// /Script/FMJamUI.FortSettingRegistryExtension_FMJam
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortSettingRegistryExtension_FMJam
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MarkupBase; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingRegistryExtension_FMJam, MarkupBase) == 40, "Offset mismatch for UFortSettingRegistryExtension_FMJam::MarkupBase");

// /Script/FMJamUI.JamDynamicUIDirector
// Kind: Class; super: SparksDynamicUIDirector
class UJamDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamDynamicUIDirector, DefaultScenes) == 624, "Offset mismatch for UJamDynamicUIDirector::DefaultScenes");
static_assert(offsetof(UJamDynamicUIDirector, OwningLocalPlayer) == 640, "Offset mismatch for UJamDynamicUIDirector::OwningLocalPlayer");
static_assert(offsetof(UJamDynamicUIDirector, bEnabledDuringReplay) == 648, "Offset mismatch for UJamDynamicUIDirector::bEnabledDuringReplay");
static_assert(offsetof(UJamDynamicUIDirector, ScenesManuallyAdded) == 656, "Offset mismatch for UJamDynamicUIDirector::ScenesManuallyAdded");

// /Script/FMJamUI.JamEmoteWheelOverlay
// Kind: Class; super: CommonActivatableWidget
class UJamEmoteWheelOverlay
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJamEmoteWheelOverlay, bIsBackHandler) == 816, "Offset mismatch for UJamEmoteWheelOverlay::bIsBackHandler");
static_assert(offsetof(UJamEmoteWheelOverlay, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJamEmoteWheelOverlay::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJamEmoteWheelOverlay, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJamEmoteWheelOverlay::OverrideBackActionDisplayName");
static_assert(offsetof(UJamEmoteWheelOverlay, bAutoActivate) == 840, "Offset mismatch for UJamEmoteWheelOverlay::bAutoActivate");
static_assert(offsetof(UJamEmoteWheelOverlay, bSupportsActivationFocus) == 841, "Offset mismatch for UJamEmoteWheelOverlay::bSupportsActivationFocus");
static_assert(offsetof(UJamEmoteWheelOverlay, bIsModal) == 842, "Offset mismatch for UJamEmoteWheelOverlay::bIsModal");
static_assert(offsetof(UJamEmoteWheelOverlay, bAutoRestoreFocus) == 843, "Offset mismatch for UJamEmoteWheelOverlay::bAutoRestoreFocus");
static_assert(offsetof(UJamEmoteWheelOverlay, bOverrideActionDomain) == 844, "Offset mismatch for UJamEmoteWheelOverlay::bOverrideActionDomain");
static_assert(offsetof(UJamEmoteWheelOverlay, InputMapping) == 848, "Offset mismatch for UJamEmoteWheelOverlay::InputMapping");
static_assert(offsetof(UJamEmoteWheelOverlay, InputMappingPriority) == 856, "Offset mismatch for UJamEmoteWheelOverlay::InputMappingPriority");
static_assert(offsetof(UJamEmoteWheelOverlay, InputModeTagsToAdd) == 864, "Offset mismatch for UJamEmoteWheelOverlay::InputModeTagsToAdd");
static_assert(offsetof(UJamEmoteWheelOverlay, InputModeTagsToRemove) == 896, "Offset mismatch for UJamEmoteWheelOverlay::InputModeTagsToRemove");
static_assert(offsetof(UJamEmoteWheelOverlay, ActionDomainOverride) == 928, "Offset mismatch for UJamEmoteWheelOverlay::ActionDomainOverride");
static_assert(offsetof(UJamEmoteWheelOverlay, BP_OnWidgetActivated) == 960, "Offset mismatch for UJamEmoteWheelOverlay::BP_OnWidgetActivated");
static_assert(offsetof(UJamEmoteWheelOverlay, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJamEmoteWheelOverlay::BP_OnWidgetDeactivated");
static_assert(offsetof(UJamEmoteWheelOverlay, bIsActive) == 992, "Offset mismatch for UJamEmoteWheelOverlay::bIsActive");
static_assert(offsetof(UJamEmoteWheelOverlay, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJamEmoteWheelOverlay::VisibilityBoundWidgets");
static_assert(offsetof(UJamEmoteWheelOverlay, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJamEmoteWheelOverlay::bSetVisibilityOnActivated");
static_assert(offsetof(UJamEmoteWheelOverlay, ActivatedVisibility) == 1177, "Offset mismatch for UJamEmoteWheelOverlay::ActivatedVisibility");
static_assert(offsetof(UJamEmoteWheelOverlay, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJamEmoteWheelOverlay::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJamEmoteWheelOverlay, DeactivatedVisibility) == 1179, "Offset mismatch for UJamEmoteWheelOverlay::DeactivatedVisibility");

// /Script/FMJamUI.JamGlobalStateVM
// Kind: Class; super: MVVMViewModelBase
class UJamGlobalStateVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Key; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t KeyMode; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::int32_t Tempo; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerCount; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t PrivacySetting; // 0x0074 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJamGlobalStateVM, Key) == 104, "Offset mismatch for UJamGlobalStateVM::Key");
static_assert(offsetof(UJamGlobalStateVM, KeyMode) == 105, "Offset mismatch for UJamGlobalStateVM::KeyMode");
static_assert(offsetof(UJamGlobalStateVM, Tempo) == 108, "Offset mismatch for UJamGlobalStateVM::Tempo");
static_assert(offsetof(UJamGlobalStateVM, PlayerCount) == 112, "Offset mismatch for UJamGlobalStateVM::PlayerCount");
static_assert(offsetof(UJamGlobalStateVM, PrivacySetting) == 116, "Offset mismatch for UJamGlobalStateVM::PrivacySetting");

// /Script/FMJamUI.JamHUDBase
// Kind: Class; super: FortNullHUD
class UJamHUDBase
{
public:
    std::uint8_t Pad_0000[0x538]; // 0x0000
    void* AthenaHudMenu; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* ActionBar_BottomBar; // 0x0540 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamHUDBase, AthenaHudMenu) == 1336, "Offset mismatch for UJamHUDBase::AthenaHudMenu");
static_assert(offsetof(UJamHUDBase, ActionBar_BottomBar) == 1344, "Offset mismatch for UJamHUDBase::ActionBar_BottomBar");

// /Script/FMJamUI.JamMusicSlotManagerVM
// Kind: Class; super: FortPerUserViewModel
class UJamMusicSlotManagerVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> MusicSlots; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJamMusicSlotManagerVM, MusicSlots) == 120, "Offset mismatch for UJamMusicSlotManagerVM::MusicSlots");

// /Script/FMJamUI.JamMusicSlotVM
// Kind: Class; super: MVVMViewModelBase
class UJamMusicSlotVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OwningPlayerID[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t Title[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    FName SongShortName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Artist[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t TitleAndArtist[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UserMode; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayState; // 0x00D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ResolveState; // 0x00D2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LoopType; // 0x00D3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FocusState; // 0x00D4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    std::int32_t SlotIndex; // 0x00D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJamMusicSlotVM, OwningPlayerID) == 104, "Offset mismatch for UJamMusicSlotVM::OwningPlayerID");
static_assert(offsetof(UJamMusicSlotVM, Title) == 152, "Offset mismatch for UJamMusicSlotVM::Title");
static_assert(offsetof(UJamMusicSlotVM, SongShortName) == 168, "Offset mismatch for UJamMusicSlotVM::SongShortName");
static_assert(offsetof(UJamMusicSlotVM, Artist) == 176, "Offset mismatch for UJamMusicSlotVM::Artist");
static_assert(offsetof(UJamMusicSlotVM, TitleAndArtist) == 192, "Offset mismatch for UJamMusicSlotVM::TitleAndArtist");
static_assert(offsetof(UJamMusicSlotVM, UserMode) == 208, "Offset mismatch for UJamMusicSlotVM::UserMode");
static_assert(offsetof(UJamMusicSlotVM, PlayState) == 209, "Offset mismatch for UJamMusicSlotVM::PlayState");
static_assert(offsetof(UJamMusicSlotVM, ResolveState) == 210, "Offset mismatch for UJamMusicSlotVM::ResolveState");
static_assert(offsetof(UJamMusicSlotVM, LoopType) == 211, "Offset mismatch for UJamMusicSlotVM::LoopType");
static_assert(offsetof(UJamMusicSlotVM, FocusState) == 212, "Offset mismatch for UJamMusicSlotVM::FocusState");
static_assert(offsetof(UJamMusicSlotVM, SlotIndex) == 216, "Offset mismatch for UJamMusicSlotVM::SlotIndex");

// /Script/FMJamUI.JamPartSwitcherVM
// Kind: Class; super: FortPerUserViewModel
class UJamPartSwitcherVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamUI.JamSettingRotator
// Kind: Class; super: FortSettingsRotator
class UJamSettingRotator
{
public:
    std::uint8_t Pad_0000[0x1620]; // 0x0000
    void* Button_OptionValue; // 0x1620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamSettingRotator, Button_OptionValue) == 5664, "Offset mismatch for UJamSettingRotator::Button_OptionValue");

// /Script/FMJamUI.JamSongIndicator
// Kind: Class; super: FortActorIndicatorWidget
class UJamSongIndicator
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    TWeakObjectPtr<void> IndicatedActor; // 0x0378 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> IndicatedActorComponent; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RelativeLocation[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    float MaxDistance; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampOnScreen; // 0x03A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowClampToScreenArrow; // 0x03A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x03A6
    std::uint8_t ElevationArrowData[0x1C]; // 0x03A8 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bUseScreenSpacePosition; // 0x03C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x03C5
    std::uint8_t ScreenSpaceRelativeOffset[0x10]; // 0x03C8 (Size: 0x10, Type: StructProperty)
    std::int32_t ScreenPriority; // 0x03D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJamSongIndicator, IndicatedActor) == 888, "Offset mismatch for UJamSongIndicator::IndicatedActor");
static_assert(offsetof(UJamSongIndicator, IndicatedActorComponent) == 896, "Offset mismatch for UJamSongIndicator::IndicatedActorComponent");
static_assert(offsetof(UJamSongIndicator, RelativeLocation) == 904, "Offset mismatch for UJamSongIndicator::RelativeLocation");
static_assert(offsetof(UJamSongIndicator, MaxDistance) == 928, "Offset mismatch for UJamSongIndicator::MaxDistance");
static_assert(offsetof(UJamSongIndicator, bClampOnScreen) == 932, "Offset mismatch for UJamSongIndicator::bClampOnScreen");
static_assert(offsetof(UJamSongIndicator, bShowClampToScreenArrow) == 933, "Offset mismatch for UJamSongIndicator::bShowClampToScreenArrow");
static_assert(offsetof(UJamSongIndicator, ElevationArrowData) == 936, "Offset mismatch for UJamSongIndicator::ElevationArrowData");
static_assert(offsetof(UJamSongIndicator, bUseScreenSpacePosition) == 964, "Offset mismatch for UJamSongIndicator::bUseScreenSpacePosition");
static_assert(offsetof(UJamSongIndicator, ScreenSpaceRelativeOffset) == 968, "Offset mismatch for UJamSongIndicator::ScreenSpaceRelativeOffset");
static_assert(offsetof(UJamSongIndicator, ScreenPriority) == 984, "Offset mismatch for UJamSongIndicator::ScreenPriority");

// /Script/FMJamUI.JamUIManagerComponent_SongIndicators
// Kind: Class; super: FortControllerComponent
class UJamUIManagerComponent_SongIndicators
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* JamSongIndicatorClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t IndicatorPool[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamUIManagerComponent_SongIndicators, JamSongIndicatorClass) == 200, "Offset mismatch for UJamUIManagerComponent_SongIndicators::JamSongIndicatorClass");
static_assert(offsetof(UJamUIManagerComponent_SongIndicators, IndicatorPool) == 208, "Offset mismatch for UJamUIManagerComponent_SongIndicators::IndicatorPool");

// /Script/FMJamUI.SparksSongEmoteWheelCategoryConfig
// Kind: Class; super: EmoteWheelLockerCategoryConfig
class USparksSongEmoteWheelCategoryConfig
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> LockerCategoryConfig; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USparksSongEmoteWheelCategoryConfig, LockerCategoryConfig) == 168, "Offset mismatch for USparksSongEmoteWheelCategoryConfig::LockerCategoryConfig");

// /Script/FMJamUI.SparksSongEmoteWheelCategoryVM
// Kind: Class; super: EmoteWheelLockerCategoryVM
class USparksSongEmoteWheelCategoryVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerCategoryVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongEmoteWheelCategoryVM, LockerCategoryVM) == 176, "Offset mismatch for USparksSongEmoteWheelCategoryVM::LockerCategoryVM");

// /Script/FMJamUI.SparksSongEmoteWheelItemVM
// Kind: Class; super: EmoteWheelLockerItemVM
class USparksSongEmoteWheelItemVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* LockerItemVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongEmoteWheelItemVM, LockerItemVM) == 176, "Offset mismatch for USparksSongEmoteWheelItemVM::LockerItemVM");
