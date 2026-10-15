/**
 * decamp dumper generated SDK
 * Package: /Script/SpecialEventGameplayUI
 */
#pragma once
#include "Basic.h"

// /Script/SpecialEventGameplayUI.ActiveMediaPlayer
// Kind: ScriptStruct; super: none
struct FActiveMediaPlayer
{
public:
    std::uint8_t Handle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Config[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    void* StreamingVideo; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* MovieWidget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ActiveScene; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActiveMediaPlayer, Handle) == 0, "Offset mismatch for FActiveMediaPlayer::Handle");
static_assert(offsetof(FActiveMediaPlayer, Config) == 16, "Offset mismatch for FActiveMediaPlayer::Config");
static_assert(offsetof(FActiveMediaPlayer, StreamingVideo) == 48, "Offset mismatch for FActiveMediaPlayer::StreamingVideo");
static_assert(offsetof(FActiveMediaPlayer, MovieWidget) == 56, "Offset mismatch for FActiveMediaPlayer::MovieWidget");
static_assert(offsetof(FActiveMediaPlayer, ActiveScene) == 64, "Offset mismatch for FActiveMediaPlayer::ActiveScene");

// /Script/SpecialEventGameplayUI.CinematicWidgetData
// Kind: ScriptStruct; super: none
struct FCinematicWidgetData
{
public:
    FName WidgetEntryName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* WidgetClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FCinematicWidgetData, WidgetEntryName) == 0, "Offset mismatch for FCinematicWidgetData::WidgetEntryName");
static_assert(offsetof(FCinematicWidgetData, WidgetClass) == 8, "Offset mismatch for FCinematicWidgetData::WidgetClass");

// /Script/SpecialEventGameplayUI.SpecialEventMediaConfig
// Kind: ScriptStruct; super: none
struct FSpecialEventMediaConfig
{
public:
    void* OverrideVideoWidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StreamLimits; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DisplayMode; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    void* WidgetOverride; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowSkipping; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableLooping; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    float PreEndTimeSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventMediaConfig, OverrideVideoWidgetClass) == 0, "Offset mismatch for FSpecialEventMediaConfig::OverrideVideoWidgetClass");
static_assert(offsetof(FSpecialEventMediaConfig, StreamLimits) == 8, "Offset mismatch for FSpecialEventMediaConfig::StreamLimits");
static_assert(offsetof(FSpecialEventMediaConfig, DisplayMode) == 9, "Offset mismatch for FSpecialEventMediaConfig::DisplayMode");
static_assert(offsetof(FSpecialEventMediaConfig, WidgetOverride) == 16, "Offset mismatch for FSpecialEventMediaConfig::WidgetOverride");
static_assert(offsetof(FSpecialEventMediaConfig, bAllowSkipping) == 24, "Offset mismatch for FSpecialEventMediaConfig::bAllowSkipping");
static_assert(offsetof(FSpecialEventMediaConfig, bEnableLooping) == 25, "Offset mismatch for FSpecialEventMediaConfig::bEnableLooping");
static_assert(offsetof(FSpecialEventMediaConfig, PreEndTimeSeconds) == 28, "Offset mismatch for FSpecialEventMediaConfig::PreEndTimeSeconds");

// /Script/SpecialEventGameplayUI.SpecialEventMediaPlayerHandle
// Kind: ScriptStruct; super: none
struct FSpecialEventMediaPlayerHandle
{
public:
    FString FriendlyName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSpecialEventMediaPlayerHandle, FriendlyName) == 0, "Offset mismatch for FSpecialEventMediaPlayerHandle::FriendlyName");

// /Script/SpecialEventGameplayUI.SpecialEventVideoSettingsEntry
// Kind: ScriptStruct; super: none
struct FSpecialEventVideoSettingsEntry
{
public:
    FString FriendlyName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSpecialEventVideoSettingsEntry, FriendlyName) == 0, "Offset mismatch for FSpecialEventVideoSettingsEntry::FriendlyName");
static_assert(offsetof(FSpecialEventVideoSettingsEntry, VUID) == 16, "Offset mismatch for FSpecialEventVideoSettingsEntry::VUID");

// /Script/SpecialEventGameplayUI.SpecialEventVideoSettingsMetadata
// Kind: ScriptStruct; super: none
struct FSpecialEventVideoSettingsMetadata
{
public:
    TArray<void*> VideoSettings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpecialEventVideoSettingsMetadata, VideoSettings) == 0, "Offset mismatch for FSpecialEventVideoSettingsMetadata::VideoSettings");

// /Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget
// Kind: Class; super: FortHUDElementWidget
class UFortGameplayCinematicHostWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    FName IntroWidgetEntryName; // 0x0370 (Size: 0x8, Type: NameProperty)
    TArray<void*> WidgetEntries; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    void* LoadingScreenDefinition; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayCinematicHostWidget, IntroWidgetEntryName) == 880, "Offset mismatch for UFortGameplayCinematicHostWidget::IntroWidgetEntryName");
static_assert(offsetof(UFortGameplayCinematicHostWidget, WidgetEntries) == 888, "Offset mismatch for UFortGameplayCinematicHostWidget::WidgetEntries");
static_assert(offsetof(UFortGameplayCinematicHostWidget, LoadingScreenDefinition) == 904, "Offset mismatch for UFortGameplayCinematicHostWidget::LoadingScreenDefinition");

// /Script/SpecialEventGameplayUI.FortGameplayCinematicWidget
// Kind: Class; super: CommonActivatableWidget
class UFortGameplayCinematicWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t bSkipCinematics; // 0x04A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayCinematicWidget, bSkipCinematics) == 1192, "Offset mismatch for UFortGameplayCinematicWidget::bSkipCinematics");

// /Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget
// Kind: Class; super: CommonActivatableWidget
class UFortGameplayIntroPanelWidget
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

static_assert(offsetof(UFortGameplayIntroPanelWidget, bIsBackHandler) == 816, "Offset mismatch for UFortGameplayIntroPanelWidget::bIsBackHandler");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UFortGameplayIntroPanelWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UFortGameplayIntroPanelWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UFortGameplayIntroPanelWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bAutoActivate) == 840, "Offset mismatch for UFortGameplayIntroPanelWidget::bAutoActivate");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UFortGameplayIntroPanelWidget::bSupportsActivationFocus");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bIsModal) == 842, "Offset mismatch for UFortGameplayIntroPanelWidget::bIsModal");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UFortGameplayIntroPanelWidget::bAutoRestoreFocus");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bOverrideActionDomain) == 844, "Offset mismatch for UFortGameplayIntroPanelWidget::bOverrideActionDomain");
static_assert(offsetof(UFortGameplayIntroPanelWidget, InputMapping) == 848, "Offset mismatch for UFortGameplayIntroPanelWidget::InputMapping");
static_assert(offsetof(UFortGameplayIntroPanelWidget, InputMappingPriority) == 856, "Offset mismatch for UFortGameplayIntroPanelWidget::InputMappingPriority");
static_assert(offsetof(UFortGameplayIntroPanelWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UFortGameplayIntroPanelWidget::InputModeTagsToAdd");
static_assert(offsetof(UFortGameplayIntroPanelWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UFortGameplayIntroPanelWidget::InputModeTagsToRemove");
static_assert(offsetof(UFortGameplayIntroPanelWidget, ActionDomainOverride) == 928, "Offset mismatch for UFortGameplayIntroPanelWidget::ActionDomainOverride");
static_assert(offsetof(UFortGameplayIntroPanelWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UFortGameplayIntroPanelWidget::BP_OnWidgetActivated");
static_assert(offsetof(UFortGameplayIntroPanelWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UFortGameplayIntroPanelWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bIsActive) == 992, "Offset mismatch for UFortGameplayIntroPanelWidget::bIsActive");
static_assert(offsetof(UFortGameplayIntroPanelWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UFortGameplayIntroPanelWidget::VisibilityBoundWidgets");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UFortGameplayIntroPanelWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UFortGameplayIntroPanelWidget, ActivatedVisibility) == 1177, "Offset mismatch for UFortGameplayIntroPanelWidget::ActivatedVisibility");
static_assert(offsetof(UFortGameplayIntroPanelWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UFortGameplayIntroPanelWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UFortGameplayIntroPanelWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UFortGameplayIntroPanelWidget::DeactivatedVisibility");

// /Script/SpecialEventGameplayUI.SpecialEventCursorWidget
// Kind: Class; super: UserWidget
class USpecialEventCursorWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    std::uint8_t bAutomaticallyChangeVisibility; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0311
    void* CursorPawnComponent; // 0x0318 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventCursorWidget, bAutomaticallyChangeVisibility) == 784, "Offset mismatch for USpecialEventCursorWidget::bAutomaticallyChangeVisibility");
static_assert(offsetof(USpecialEventCursorWidget, CursorPawnComponent) == 792, "Offset mismatch for USpecialEventCursorWidget::CursorPawnComponent");

// /Script/SpecialEventGameplayUI.SpecialEventLeaderboardInputComponent
// Kind: Class; super: FortControllerComponent
class USpecialEventLeaderboardInputComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* ScoreboardInputMappingContext; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* InputAction_ToggleLeaderboard; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Priority; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    void* LeaderboardUIScene; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLeaderboardUIEnabled; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E9
    FText OpenLeaderboardDisplayText; // 0x00F0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(USpecialEventLeaderboardInputComponent, ScoreboardInputMappingContext) == 200, "Offset mismatch for USpecialEventLeaderboardInputComponent::ScoreboardInputMappingContext");
static_assert(offsetof(USpecialEventLeaderboardInputComponent, InputAction_ToggleLeaderboard) == 208, "Offset mismatch for USpecialEventLeaderboardInputComponent::InputAction_ToggleLeaderboard");
static_assert(offsetof(USpecialEventLeaderboardInputComponent, Priority) == 216, "Offset mismatch for USpecialEventLeaderboardInputComponent::Priority");
static_assert(offsetof(USpecialEventLeaderboardInputComponent, LeaderboardUIScene) == 224, "Offset mismatch for USpecialEventLeaderboardInputComponent::LeaderboardUIScene");
static_assert(offsetof(USpecialEventLeaderboardInputComponent, bLeaderboardUIEnabled) == 232, "Offset mismatch for USpecialEventLeaderboardInputComponent::bLeaderboardUIEnabled");
static_assert(offsetof(USpecialEventLeaderboardInputComponent, OpenLeaderboardDisplayText) == 240, "Offset mismatch for USpecialEventLeaderboardInputComponent::OpenLeaderboardDisplayText");

// /Script/SpecialEventGameplayUI.SpecialEventMediaSettings
// Kind: Class; super: DeveloperSettings
class USpecialEventMediaSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftClassPtr<void> DefaultVideoWidgetClass; // 0x0030 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USpecialEventMediaSettings, DefaultVideoWidgetClass) == 48, "Offset mismatch for USpecialEventMediaSettings::DefaultVideoWidgetClass");

// /Script/SpecialEventGameplayUI.SpecialEventMediaSubsystem
// Kind: Class; super: GameInstanceSubsystem
class USpecialEventMediaSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnVUIDChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreBufferingStarted; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreBufferingFailed; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayStarted; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayStopped; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayResumed; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayFailed; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPaused; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPausedFailed; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayStopFailed; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSlotUnavailable; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreEnded; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSkipped; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnShowPlayer; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHidePlayer; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnShowPlayerFailed; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHidePlayerFailed; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerStateChanged; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> ActivePlayers; // 0x0168 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USpecialEventMediaSubsystem, OnVUIDChanged) == 56, "Offset mismatch for USpecialEventMediaSubsystem::OnVUIDChanged");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPreBufferingStarted) == 72, "Offset mismatch for USpecialEventMediaSubsystem::OnPreBufferingStarted");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPreBufferingFailed) == 88, "Offset mismatch for USpecialEventMediaSubsystem::OnPreBufferingFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayStarted) == 104, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayStarted");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayEnded) == 120, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayEnded");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayStopped) == 136, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayStopped");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayResumed) == 152, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayResumed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayFailed) == 168, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPaused) == 184, "Offset mismatch for USpecialEventMediaSubsystem::OnPaused");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPausedFailed) == 200, "Offset mismatch for USpecialEventMediaSubsystem::OnPausedFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayStopFailed) == 216, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayStopFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnSlotUnavailable) == 232, "Offset mismatch for USpecialEventMediaSubsystem::OnSlotUnavailable");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPreEnded) == 248, "Offset mismatch for USpecialEventMediaSubsystem::OnPreEnded");
static_assert(offsetof(USpecialEventMediaSubsystem, OnSkipped) == 264, "Offset mismatch for USpecialEventMediaSubsystem::OnSkipped");
static_assert(offsetof(USpecialEventMediaSubsystem, OnShowPlayer) == 280, "Offset mismatch for USpecialEventMediaSubsystem::OnShowPlayer");
static_assert(offsetof(USpecialEventMediaSubsystem, OnHidePlayer) == 296, "Offset mismatch for USpecialEventMediaSubsystem::OnHidePlayer");
static_assert(offsetof(USpecialEventMediaSubsystem, OnShowPlayerFailed) == 312, "Offset mismatch for USpecialEventMediaSubsystem::OnShowPlayerFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnHidePlayerFailed) == 328, "Offset mismatch for USpecialEventMediaSubsystem::OnHidePlayerFailed");
static_assert(offsetof(USpecialEventMediaSubsystem, OnPlayerStateChanged) == 344, "Offset mismatch for USpecialEventMediaSubsystem::OnPlayerStateChanged");
static_assert(offsetof(USpecialEventMediaSubsystem, ActivePlayers) == 360, "Offset mismatch for USpecialEventMediaSubsystem::ActivePlayers");

// /Script/SpecialEventGameplayUI.SpecialEventMeshLeaderboardEntryVM
// Kind: Class; super: FortPerUserViewModel
class USpecialEventMeshLeaderboardEntryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString PlayerName; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::int32_t PlayerScore; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerPosition; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t IsLocalPlayer; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEven; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOdd; // 0x0092 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, PlayerName) == 120, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::PlayerName");
static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, PlayerScore) == 136, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::PlayerScore");
static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, PlayerPosition) == 140, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::PlayerPosition");
static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, IsLocalPlayer) == 144, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::IsLocalPlayer");
static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, bIsEven) == 145, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::bIsEven");
static_assert(offsetof(USpecialEventMeshLeaderboardEntryVM, bIsOdd) == 146, "Offset mismatch for USpecialEventMeshLeaderboardEntryVM::bIsOdd");

// /Script/SpecialEventGameplayUI.SpecialEventMeshLeaderboardInstanceVM
// Kind: Class; super: FortPerUserViewModel
class USpecialEventMeshLeaderboardInstanceVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> EntryVMs; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LeaderboardEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpecialEventMeshLeaderboardInstanceVM, EntryVMs) == 120, "Offset mismatch for USpecialEventMeshLeaderboardInstanceVM::EntryVMs");
static_assert(offsetof(USpecialEventMeshLeaderboardInstanceVM, LeaderboardEnabled) == 136, "Offset mismatch for USpecialEventMeshLeaderboardInstanceVM::LeaderboardEnabled");

// /Script/SpecialEventGameplayUI.SpecialEventMeshLeaderboardVM
// Kind: Class; super: FortPerUserViewModel
class USpecialEventMeshLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t LocalPlayerScore; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMeshLeaderboardFeatureEnabled; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x007D
    void* GlobalLeaderboard; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* LocalLeaderboard; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventMeshLeaderboardVM, LocalPlayerScore) == 120, "Offset mismatch for USpecialEventMeshLeaderboardVM::LocalPlayerScore");
static_assert(offsetof(USpecialEventMeshLeaderboardVM, bIsMeshLeaderboardFeatureEnabled) == 124, "Offset mismatch for USpecialEventMeshLeaderboardVM::bIsMeshLeaderboardFeatureEnabled");
static_assert(offsetof(USpecialEventMeshLeaderboardVM, GlobalLeaderboard) == 136, "Offset mismatch for USpecialEventMeshLeaderboardVM::GlobalLeaderboard");
static_assert(offsetof(USpecialEventMeshLeaderboardVM, LocalLeaderboard) == 144, "Offset mismatch for USpecialEventMeshLeaderboardVM::LocalLeaderboard");

// /Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
// Kind: Class; super: FortHUDElementWidget
class USpecialEventPlayerInfoWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USpecialEventPlayerInfoWidget, OnRepresentedPlayerStateChanged) == 888, "Offset mismatch for USpecialEventPlayerInfoWidget::OnRepresentedPlayerStateChanged");

// /Script/SpecialEventGameplayUI.SpecialEventStreamingVideo
// Kind: Class; super: FortBaseStreamingVideo
class USpecialEventStreamingVideo
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    FMulticastInlineDelegate MetadataChangedEvent; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x50]; // 0x0180
    void* LocalizedOverlays; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* SubtitlesPlayer; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01E0
    void* HeldMediaTexture; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventStreamingVideo, MetadataChangedEvent) == 368, "Offset mismatch for USpecialEventStreamingVideo::MetadataChangedEvent");
static_assert(offsetof(USpecialEventStreamingVideo, LocalizedOverlays) == 464, "Offset mismatch for USpecialEventStreamingVideo::LocalizedOverlays");
static_assert(offsetof(USpecialEventStreamingVideo, SubtitlesPlayer) == 472, "Offset mismatch for USpecialEventStreamingVideo::SubtitlesPlayer");
static_assert(offsetof(USpecialEventStreamingVideo, HeldMediaTexture) == 488, "Offset mismatch for USpecialEventStreamingVideo::HeldMediaTexture");

// /Script/SpecialEventGameplayUI.SpecialEventUILibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USpecialEventUILibrary
{
public:
    std::uint8_t Opaque[1];
};
