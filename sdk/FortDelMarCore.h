/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarCore
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarCore.FortDelMarActivatedInput
// Kind: ScriptStruct; super: none
struct FFortDelMarActivatedInput
{
public:
    void* Action; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarActivatedInput, Action) == 0, "Offset mismatch for FFortDelMarActivatedInput::Action");
static_assert(offsetof(FFortDelMarActivatedInput, Value) == 8, "Offset mismatch for FFortDelMarActivatedInput::Value");

// /Script/FortDelMarCore.FortDelMarActivatedInputFrame
// Kind: ScriptStruct; super: none
struct FFortDelMarActivatedInputFrame
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Inputs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarActivatedInputFrame, duration) == 0, "Offset mismatch for FFortDelMarActivatedInputFrame::duration");
static_assert(offsetof(FFortDelMarActivatedInputFrame, Inputs) == 8, "Offset mismatch for FFortDelMarActivatedInputFrame::Inputs");

// /Script/FortDelMarCore.FortDelMarAudioMixModifier
// Kind: ScriptStruct; super: none
struct FFortDelMarAudioMixModifier
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Target; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float DefaultValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Curve[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarAudioMixModifier, ParamName) == 0, "Offset mismatch for FFortDelMarAudioMixModifier::ParamName");
static_assert(offsetof(FFortDelMarAudioMixModifier, Target) == 4, "Offset mismatch for FFortDelMarAudioMixModifier::Target");
static_assert(offsetof(FFortDelMarAudioMixModifier, DefaultValue) == 8, "Offset mismatch for FFortDelMarAudioMixModifier::DefaultValue");
static_assert(offsetof(FFortDelMarAudioMixModifier, Curve) == 16, "Offset mismatch for FFortDelMarAudioMixModifier::Curve");

// /Script/FortDelMarCore.FortDelMarAudioMixModifierGroup
// Kind: ScriptStruct; super: none
struct FFortDelMarAudioMixModifierGroup
{
public:
    FName GroupName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Modifiers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarAudioMixModifierGroup, GroupName) == 0, "Offset mismatch for FFortDelMarAudioMixModifierGroup::GroupName");
static_assert(offsetof(FFortDelMarAudioMixModifierGroup, Modifiers) == 8, "Offset mismatch for FFortDelMarAudioMixModifierGroup::Modifiers");

// /Script/FortDelMarCore.FortDelMarDisabledInputData
// Kind: ScriptStruct; super: none
struct FFortDelMarDisabledInputData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* EffectClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortDelMarDisabledInputData, duration) == 0, "Offset mismatch for FFortDelMarDisabledInputData::duration");
static_assert(offsetof(FFortDelMarDisabledInputData, EffectClass) == 8, "Offset mismatch for FFortDelMarDisabledInputData::EffectClass");

// /Script/FortDelMarCore.FortDelMarEnvironmentVFX
// Kind: ScriptStruct; super: none
struct FFortDelMarEnvironmentVFX
{
public:
    void* OnAppliedFX; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* WhileAppliedFX; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* OnRemovedFX; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarEnvironmentVFX, OnAppliedFX) == 0, "Offset mismatch for FFortDelMarEnvironmentVFX::OnAppliedFX");
static_assert(offsetof(FFortDelMarEnvironmentVFX, WhileAppliedFX) == 8, "Offset mismatch for FFortDelMarEnvironmentVFX::WhileAppliedFX");
static_assert(offsetof(FFortDelMarEnvironmentVFX, OnRemovedFX) == 16, "Offset mismatch for FFortDelMarEnvironmentVFX::OnRemovedFX");

// /Script/FortDelMarCore.FortDelMarEventRouterExt
// Kind: ScriptStruct; super: none
struct FFortDelMarEventRouterExt
{
public:
    std::uint8_t bWorldIsTearingDown; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* EventRouter; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* EventRouterContextObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarEventRouterExt, bWorldIsTearingDown) == 0, "Offset mismatch for FFortDelMarEventRouterExt::bWorldIsTearingDown");
static_assert(offsetof(FFortDelMarEventRouterExt, EventRouter) == 8, "Offset mismatch for FFortDelMarEventRouterExt::EventRouter");
static_assert(offsetof(FFortDelMarEventRouterExt, EventRouterContextObject) == 16, "Offset mismatch for FFortDelMarEventRouterExt::EventRouterContextObject");

// /Script/FortDelMarCore.FortDelMarEvent_CountdownActive
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_CountdownActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_DialogRequest
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_DialogRequest
{
public:
    std::uint8_t DialogTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_DialogRequest, DialogTag) == 0, "Offset mismatch for FFortDelMarEvent_DialogRequest::DialogTag");

// /Script/FortDelMarCore.FortDelMarEvent_FirstPlayerFinishedCountdown
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_FirstPlayerFinishedCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardNewPersonalBest
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_GlobalLeaderboardNewPersonalBest
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PersonalBest[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_GlobalLeaderboardNewPersonalBest, player) == 0, "Offset mismatch for FFortDelMarEvent_GlobalLeaderboardNewPersonalBest::player");
static_assert(offsetof(FFortDelMarEvent_GlobalLeaderboardNewPersonalBest, PersonalBest) == 8, "Offset mismatch for FFortDelMarEvent_GlobalLeaderboardNewPersonalBest::PersonalBest");

// /Script/FortDelMarCore.FortDelMarEvent_LapComplete
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_LapComplete
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t CompletedLap; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentLap; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalLaps; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    double CompletedLapTime; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFortDelMarEvent_LapComplete, PlayerState) == 0, "Offset mismatch for FFortDelMarEvent_LapComplete::PlayerState");
static_assert(offsetof(FFortDelMarEvent_LapComplete, CompletedLap) == 8, "Offset mismatch for FFortDelMarEvent_LapComplete::CompletedLap");
static_assert(offsetof(FFortDelMarEvent_LapComplete, CurrentLap) == 12, "Offset mismatch for FFortDelMarEvent_LapComplete::CurrentLap");
static_assert(offsetof(FFortDelMarEvent_LapComplete, TotalLaps) == 16, "Offset mismatch for FFortDelMarEvent_LapComplete::TotalLaps");
static_assert(offsetof(FFortDelMarEvent_LapComplete, CompletedLapTime) == 24, "Offset mismatch for FFortDelMarEvent_LapComplete::CompletedLapTime");

// /Script/FortDelMarCore.FortDelMarEvent_LapStarted
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_LapStarted
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarEvent_LapStarted, PlayerState) == 0, "Offset mismatch for FFortDelMarEvent_LapStarted::PlayerState");

// /Script/FortDelMarCore.FortDelMarEvent_LoadedPlayerStates
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_LoadedPlayerStates
{
public:
    std::int32_t NumLoadedPlayers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlayers; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarEvent_LoadedPlayerStates, NumLoadedPlayers) == 0, "Offset mismatch for FFortDelMarEvent_LoadedPlayerStates::NumLoadedPlayers");
static_assert(offsetof(FFortDelMarEvent_LoadedPlayerStates, TotalPlayers) == 4, "Offset mismatch for FFortDelMarEvent_LoadedPlayerStates::TotalPlayers");

// /Script/FortDelMarCore.FortDelMarEvent_LoadingScreenData
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_LoadingScreenData
{
public:
    TWeakObjectPtr<void> LevelData; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RaceMode[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_LoadingScreenData, LevelData) == 0, "Offset mismatch for FFortDelMarEvent_LoadingScreenData::LevelData");
static_assert(offsetof(FFortDelMarEvent_LoadingScreenData, RaceMode) == 8, "Offset mismatch for FFortDelMarEvent_LoadingScreenData::RaceMode");

// /Script/FortDelMarCore.FortDelMarEvent_MatchmakingReadyUp
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_MatchmakingReadyUp
{
public:
    TWeakObjectPtr<void> LocalPlayer; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarEvent_MatchmakingReadyUp, LocalPlayer) == 0, "Offset mismatch for FFortDelMarEvent_MatchmakingReadyUp::LocalPlayer");

// /Script/FortDelMarCore.FortDelMarEvent_MatchmakingStateChanged
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_MatchmakingStateChanged
{
public:
    std::uint8_t NewPostMatchState; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortDelMarEvent_MatchmakingStateChanged, NewPostMatchState) == 0, "Offset mismatch for FFortDelMarEvent_MatchmakingStateChanged::NewPostMatchState");

// /Script/FortDelMarCore.FortDelMarEvent_MidTutorialModal
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_MidTutorialModal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_MissedCheckpointDemoCountdown
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_MissedCheckpointDemoCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_MusicPlaylistUpdated
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_MusicPlaylistUpdated
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> PreRaceMusic; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PostRaceMusic; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortDelMarEvent_MusicPlaylistUpdated, PreRaceMusic) == 8, "Offset mismatch for FFortDelMarEvent_MusicPlaylistUpdated::PreRaceMusic");
static_assert(offsetof(FFortDelMarEvent_MusicPlaylistUpdated, PostRaceMusic) == 16, "Offset mismatch for FFortDelMarEvent_MusicPlaylistUpdated::PostRaceMusic");

// /Script/FortDelMarCore.FortDelMarEvent_NuxConnectedHintActionPerformed
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_NuxConnectedHintActionPerformed
{
public:
    std::uint8_t HintTypeTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDidPerformAction; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarEvent_NuxConnectedHintActionPerformed, HintTypeTag) == 0, "Offset mismatch for FFortDelMarEvent_NuxConnectedHintActionPerformed::HintTypeTag");
static_assert(offsetof(FFortDelMarEvent_NuxConnectedHintActionPerformed, bDidPerformAction) == 4, "Offset mismatch for FFortDelMarEvent_NuxConnectedHintActionPerformed::bDidPerformAction");

// /Script/FortDelMarCore.FortDelMarEvent_OvertimeActive
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_OvertimeActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PawnEnteredVehicle
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PawnEnteredVehicle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PlayerBecomeSpectator
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PlayerBecomeSpectator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PlayerFinishedRace
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PlayerFinishedRace
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PlayerInVehicleEvent
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PlayerInVehicleEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PlayerStateAdded
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PlayerStateAdded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PostRaceNextRaceSelected
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PostRaceNextRaceSelected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PostRaceReturnToLobbySelected
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_PostRaceReturnToLobbySelected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_QuestScreenClosed
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_QuestScreenClosed
{
public:
    float OpenedDuration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RaceState[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_QuestScreenClosed, OpenedDuration) == 0, "Offset mismatch for FFortDelMarEvent_QuestScreenClosed::OpenedDuration");
static_assert(offsetof(FFortDelMarEvent_QuestScreenClosed, RaceState) == 4, "Offset mismatch for FFortDelMarEvent_QuestScreenClosed::RaceState");

// /Script/FortDelMarCore.FortDelMarEvent_QuestScreenOpened
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_QuestScreenOpened
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RaceState[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_QuestScreenOpened, PlayerState) == 0, "Offset mismatch for FFortDelMarEvent_QuestScreenOpened::PlayerState");
static_assert(offsetof(FFortDelMarEvent_QuestScreenOpened, RaceState) == 8, "Offset mismatch for FFortDelMarEvent_QuestScreenOpened::RaceState");

// /Script/FortDelMarCore.FortDelMarEvent_RaceActive
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_RaceActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_RaceFinished
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_RaceFinished
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_RaceModeSet
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_RaceModeSet
{
public:
    std::uint8_t RaceModeTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_RaceModeSet, RaceModeTag) == 0, "Offset mismatch for FFortDelMarEvent_RaceModeSet::RaceModeTag");

// /Script/FortDelMarCore.FortDelMarEvent_RacerStateChanged
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_RacerStateChanged
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PrevStateId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewStateId[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_RacerStateChanged, PrevStateId) == 8, "Offset mismatch for FFortDelMarEvent_RacerStateChanged::PrevStateId");
static_assert(offsetof(FFortDelMarEvent_RacerStateChanged, NewStateId) == 12, "Offset mismatch for FFortDelMarEvent_RacerStateChanged::NewStateId");

// /Script/FortDelMarCore.FortDelMarEvent_ResetRace
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_ResetRace
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_ResetRun
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_ResetRun
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_ReturnToTrackDemoCountdown
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_ReturnToTrackDemoCountdown
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_RunActive
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_RunActive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_ServerPostRaceEndTime
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_ServerPostRaceEndTime
{
public:
    double ServerTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFortDelMarEvent_ServerPostRaceEndTime, ServerTime) == 0, "Offset mismatch for FFortDelMarEvent_ServerPostRaceEndTime::ServerTime");

// /Script/FortDelMarCore.FortDelMarEvent_ServerRaceStartCountdownTime
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_ServerRaceStartCountdownTime
{
public:
    double ServerTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFortDelMarEvent_ServerRaceStartCountdownTime, ServerTime) == 0, "Offset mismatch for FFortDelMarEvent_ServerRaceStartCountdownTime::ServerTime");

// /Script/FortDelMarCore.FortDelMarEvent_SetControlsText
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_SetControlsText
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText GamepadText; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortDelMarEvent_SetControlsText, KBMText) == 0, "Offset mismatch for FFortDelMarEvent_SetControlsText::KBMText");
static_assert(offsetof(FFortDelMarEvent_SetControlsText, GamepadText) == 16, "Offset mismatch for FFortDelMarEvent_SetControlsText::GamepadText");

// /Script/FortDelMarCore.FortDelMarEvent_SetTutorialAnnouncement
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_SetTutorialAnnouncement
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TouchText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    TArray<void*> AssociatedInputActions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarEvent_SetTutorialAnnouncement, KBMText) == 0, "Offset mismatch for FFortDelMarEvent_SetTutorialAnnouncement::KBMText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialAnnouncement, GamepadText) == 16, "Offset mismatch for FFortDelMarEvent_SetTutorialAnnouncement::GamepadText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialAnnouncement, TouchText) == 32, "Offset mismatch for FFortDelMarEvent_SetTutorialAnnouncement::TouchText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialAnnouncement, AssociatedInputActions) == 48, "Offset mismatch for FFortDelMarEvent_SetTutorialAnnouncement::AssociatedInputActions");

// /Script/FortDelMarCore.FortDelMarEvent_SetTutorialHint
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_SetTutorialHint
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t TouchText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    float DisplayTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::int32_t Priority; // 0x0034 (Size: 0x4, Type: IntProperty)
    TArray<void*> AssociatedInputActions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, KBMText) == 0, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::KBMText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, GamepadText) == 16, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::GamepadText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, TouchText) == 32, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::TouchText");
static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, DisplayTime) == 48, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::DisplayTime");
static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, Priority) == 52, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::Priority");
static_assert(offsetof(FFortDelMarEvent_SetTutorialHint, AssociatedInputActions) == 56, "Offset mismatch for FFortDelMarEvent_SetTutorialHint::AssociatedInputActions");

// /Script/FortDelMarCore.FortDelMarEvent_TrackedPlayerReadyStates
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_TrackedPlayerReadyStates
{
public:
    TArray<void*> ReadyPlayers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnreadyPlayers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarEvent_TrackedPlayerReadyStates, ReadyPlayers) == 0, "Offset mismatch for FFortDelMarEvent_TrackedPlayerReadyStates::ReadyPlayers");
static_assert(offsetof(FFortDelMarEvent_TrackedPlayerReadyStates, UnreadyPlayers) == 16, "Offset mismatch for FFortDelMarEvent_TrackedPlayerReadyStates::UnreadyPlayers");

// /Script/FortDelMarCore.FortDelMarEvent_UIInputController
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_UIInputController
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PC; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarEvent_UIInputController, PC) == 8, "Offset mismatch for FFortDelMarEvent_UIInputController::PC");

// /Script/FortDelMarCore.FortDelMarEvent_VehicleAssignedToPawn
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_VehicleAssignedToPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_VehicleDemolished
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_VehicleDemolished
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CausedByTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarEvent_VehicleDemolished, CausedByTag) == 8, "Offset mismatch for FFortDelMarEvent_VehicleDemolished::CausedByTag");

// /Script/FortDelMarCore.FortDelMarEvent_VehicleManagerAdded
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_VehicleManagerAdded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_VehicleWrongwayStatus
// Kind: ScriptStruct; super: none
struct FFortDelMarEvent_VehicleWrongwayStatus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarFloatAttribute
// Kind: ScriptStruct; super: none
struct FFortDelMarFloatAttribute
{
public:
    float BaseValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FinalValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMin; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float MinValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMax; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float MaxValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Modifiers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentHandleIdx; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarFloatAttribute, BaseValue) == 0, "Offset mismatch for FFortDelMarFloatAttribute::BaseValue");
static_assert(offsetof(FFortDelMarFloatAttribute, FinalValue) == 4, "Offset mismatch for FFortDelMarFloatAttribute::FinalValue");
static_assert(offsetof(FFortDelMarFloatAttribute, bClampMin) == 8, "Offset mismatch for FFortDelMarFloatAttribute::bClampMin");
static_assert(offsetof(FFortDelMarFloatAttribute, MinValue) == 12, "Offset mismatch for FFortDelMarFloatAttribute::MinValue");
static_assert(offsetof(FFortDelMarFloatAttribute, bClampMax) == 16, "Offset mismatch for FFortDelMarFloatAttribute::bClampMax");
static_assert(offsetof(FFortDelMarFloatAttribute, MaxValue) == 20, "Offset mismatch for FFortDelMarFloatAttribute::MaxValue");
static_assert(offsetof(FFortDelMarFloatAttribute, Modifiers) == 24, "Offset mismatch for FFortDelMarFloatAttribute::Modifiers");
static_assert(offsetof(FFortDelMarFloatAttribute, CurrentHandleIdx) == 40, "Offset mismatch for FFortDelMarFloatAttribute::CurrentHandleIdx");

// /Script/FortDelMarCore.FortDelMarFloatModifier
// Kind: ScriptStruct; super: none
struct FFortDelMarFloatModifier
{
public:
    std::uint8_t Category[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Operation; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t StackingPolicy; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarFloatModifier, Category) == 0, "Offset mismatch for FFortDelMarFloatModifier::Category");
static_assert(offsetof(FFortDelMarFloatModifier, Priority) == 4, "Offset mismatch for FFortDelMarFloatModifier::Priority");
static_assert(offsetof(FFortDelMarFloatModifier, Value) == 8, "Offset mismatch for FFortDelMarFloatModifier::Value");
static_assert(offsetof(FFortDelMarFloatModifier, Operation) == 12, "Offset mismatch for FFortDelMarFloatModifier::Operation");
static_assert(offsetof(FFortDelMarFloatModifier, StackingPolicy) == 13, "Offset mismatch for FFortDelMarFloatModifier::StackingPolicy");
static_assert(offsetof(FFortDelMarFloatModifier, Handle) == 16, "Offset mismatch for FFortDelMarFloatModifier::Handle");

// /Script/FortDelMarCore.FortDelMarGameplayStateChangedEvent
// Kind: ScriptStruct; super: none
struct FFortDelMarGameplayStateChangedEvent
{
public:
    std::uint8_t PrevStateId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewStateId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarGameplayStateChangedEvent, PrevStateId) == 0, "Offset mismatch for FFortDelMarGameplayStateChangedEvent::PrevStateId");
static_assert(offsetof(FFortDelMarGameplayStateChangedEvent, NewStateId) == 4, "Offset mismatch for FFortDelMarGameplayStateChangedEvent::NewStateId");

// /Script/FortDelMarCore.FortDelMarGhostReplayFrame
// Kind: ScriptStruct; super: none
struct FFortDelMarGhostReplayFrame
{
public:
    std::uint8_t Location[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    double time; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFortDelMarGhostReplayFrame, Location) == 0, "Offset mismatch for FFortDelMarGhostReplayFrame::Location");
static_assert(offsetof(FFortDelMarGhostReplayFrame, Rotation) == 32, "Offset mismatch for FFortDelMarGhostReplayFrame::Rotation");
static_assert(offsetof(FFortDelMarGhostReplayFrame, time) == 64, "Offset mismatch for FFortDelMarGhostReplayFrame::time");

// /Script/FortDelMarCore.FortDelMarGlobalLeaderboardEntry
// Kind: ScriptStruct; super: none
struct FFortDelMarGlobalLeaderboardEntry
{
public:
    FString PlayerAccountId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlayerName; // 0x0010 (Size: 0x10, Type: StrProperty)
    double RunDuration; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::int64_t Rank; // 0x0028 (Size: 0x8, Type: Int64Property)
    double Percentile; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsLocalPlayer; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, PlayerAccountId) == 0, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::PlayerAccountId");
static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, PlayerName) == 16, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::PlayerName");
static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, RunDuration) == 32, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::RunDuration");
static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, Rank) == 40, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::Rank");
static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, Percentile) == 48, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::Percentile");
static_assert(offsetof(FFortDelMarGlobalLeaderboardEntry, bIsLocalPlayer) == 56, "Offset mismatch for FFortDelMarGlobalLeaderboardEntry::bIsLocalPlayer");

// /Script/FortDelMarCore.FortDelMarHintText
// Kind: ScriptStruct; super: none
struct FFortDelMarHintText
{
public:
    std::uint8_t KBMText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    FText TouchText; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FFortDelMarHintText, KBMText) == 0, "Offset mismatch for FFortDelMarHintText::KBMText");
static_assert(offsetof(FFortDelMarHintText, GamepadText) == 16, "Offset mismatch for FFortDelMarHintText::GamepadText");
static_assert(offsetof(FFortDelMarHintText, TouchText) == 32, "Offset mismatch for FFortDelMarHintText::TouchText");

// /Script/FortDelMarCore.FortDelMarInputAction
// Kind: ScriptStruct; super: none
struct FFortDelMarInputAction
{
public:
    void* Action; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisabledTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarInputAction, Action) == 0, "Offset mismatch for FFortDelMarInputAction::Action");
static_assert(offsetof(FFortDelMarInputAction, DisabledTag) == 8, "Offset mismatch for FFortDelMarInputAction::DisabledTag");

// /Script/FortDelMarCore.FortDelMarInputMappingContextData
// Kind: ScriptStruct; super: none
struct FFortDelMarInputMappingContextData
{
public:
    std::int32_t Priority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* MappingContext; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDelMarInputMappingContextData, Priority) == 0, "Offset mismatch for FFortDelMarInputMappingContextData::Priority");
static_assert(offsetof(FFortDelMarInputMappingContextData, MappingContext) == 8, "Offset mismatch for FFortDelMarInputMappingContextData::MappingContext");

// /Script/FortDelMarCore.FortDelMarLayeredInputMappingContextData
// Kind: ScriptStruct; super: none
struct FFortDelMarLayeredInputMappingContextData
{
public:
    std::int32_t Priority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> MappingContextArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarLayeredInputMappingContextData, Priority) == 0, "Offset mismatch for FFortDelMarLayeredInputMappingContextData::Priority");
static_assert(offsetof(FFortDelMarLayeredInputMappingContextData, MappingContextArray) == 8, "Offset mismatch for FFortDelMarLayeredInputMappingContextData::MappingContextArray");

// /Script/FortDelMarCore.FortDelMarMapSet
// Kind: ScriptStruct; super: none
struct FFortDelMarMapSet
{
public:
    std::uint8_t bShouldConsiderValid; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayLevelsRandomly; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldRepeat; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    TArray<void*> Levels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarMapSet, bShouldConsiderValid) == 0, "Offset mismatch for FFortDelMarMapSet::bShouldConsiderValid");
static_assert(offsetof(FFortDelMarMapSet, bPlayLevelsRandomly) == 1, "Offset mismatch for FFortDelMarMapSet::bPlayLevelsRandomly");
static_assert(offsetof(FFortDelMarMapSet, bShouldRepeat) == 2, "Offset mismatch for FFortDelMarMapSet::bShouldRepeat");
static_assert(offsetof(FFortDelMarMapSet, Levels) == 8, "Offset mismatch for FFortDelMarMapSet::Levels");

// /Script/FortDelMarCore.FortDelMarMapStatus
// Kind: ScriptStruct; super: none
struct FFortDelMarMapStatus
{
public:
    TWeakObjectPtr<void> MapAsset; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bHasBeenPlayed; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortDelMarMapStatus, MapAsset) == 0, "Offset mismatch for FFortDelMarMapStatus::MapAsset");
static_assert(offsetof(FFortDelMarMapStatus, bHasBeenPlayed) == 8, "Offset mismatch for FFortDelMarMapStatus::bHasBeenPlayed");

// /Script/FortDelMarCore.FortDelMarMusicTrack
// Kind: ScriptStruct; super: none
struct FFortDelMarMusicTrack
{
public:
    void* StartLineIntro; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MainTrack; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MainTrack_LowSpec; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float Bpm; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarMusicTrack, StartLineIntro) == 0, "Offset mismatch for FFortDelMarMusicTrack::StartLineIntro");
static_assert(offsetof(FFortDelMarMusicTrack, MainTrack) == 8, "Offset mismatch for FFortDelMarMusicTrack::MainTrack");
static_assert(offsetof(FFortDelMarMusicTrack, MainTrack_LowSpec) == 16, "Offset mismatch for FFortDelMarMusicTrack::MainTrack_LowSpec");
static_assert(offsetof(FFortDelMarMusicTrack, Bpm) == 24, "Offset mismatch for FFortDelMarMusicTrack::Bpm");

// /Script/FortDelMarCore.FortDelMarPhysicalMaterialAttributes_X
// Kind: ScriptStruct; super: none
struct FFortDelMarPhysicalMaterialAttributes_X
{
public:
    TArray<void*> Attributes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarPhysicalMaterialAttributes_X, Attributes) == 0, "Offset mismatch for FFortDelMarPhysicalMaterialAttributes_X::Attributes");

// /Script/FortDelMarCore.FortDelMarProxyMeshMaterialInfo
// Kind: ScriptStruct; super: none
struct FFortDelMarProxyMeshMaterialInfo
{
public:
    TArray<void*> MaterialArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortDelMarProxyMeshMaterialInfo, MaterialArray) == 0, "Offset mismatch for FFortDelMarProxyMeshMaterialInfo::MaterialArray");

// /Script/FortDelMarCore.FortDelMarRandomRange
// Kind: ScriptStruct; super: none
struct FFortDelMarRandomRange
{
public:
    float MinValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarRandomRange, MinValue) == 0, "Offset mismatch for FFortDelMarRandomRange::MinValue");
static_assert(offsetof(FFortDelMarRandomRange, MaxValue) == 4, "Offset mismatch for FFortDelMarRandomRange::MaxValue");

// /Script/FortDelMarCore.FortDelMarScaledCurve
// Kind: ScriptStruct; super: none
struct FFortDelMarScaledCurve
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Curve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortDelMarScaledCurve, Scale) == 0, "Offset mismatch for FFortDelMarScaledCurve::Scale");
static_assert(offsetof(FFortDelMarScaledCurve, Curve) == 8, "Offset mismatch for FFortDelMarScaledCurve::Curve");

// /Script/FortDelMarCore.FortDelMarStartlineConfig
// Kind: ScriptStruct; super: none
struct FFortDelMarStartlineConfig
{
public:
    std::uint8_t bEnableDynamicStartline; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InitialCountdownDelayTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RequestCountdownDelayTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DefaultIntervalSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    TArray<void*> IntervalRanges; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CountdownIntervalNum; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortDelMarStartlineConfig, bEnableDynamicStartline) == 0, "Offset mismatch for FFortDelMarStartlineConfig::bEnableDynamicStartline");
static_assert(offsetof(FFortDelMarStartlineConfig, InitialCountdownDelayTime) == 4, "Offset mismatch for FFortDelMarStartlineConfig::InitialCountdownDelayTime");
static_assert(offsetof(FFortDelMarStartlineConfig, RequestCountdownDelayTime) == 8, "Offset mismatch for FFortDelMarStartlineConfig::RequestCountdownDelayTime");
static_assert(offsetof(FFortDelMarStartlineConfig, DefaultIntervalSeconds) == 12, "Offset mismatch for FFortDelMarStartlineConfig::DefaultIntervalSeconds");
static_assert(offsetof(FFortDelMarStartlineConfig, IntervalRanges) == 16, "Offset mismatch for FFortDelMarStartlineConfig::IntervalRanges");
static_assert(offsetof(FFortDelMarStartlineConfig, CountdownIntervalNum) == 32, "Offset mismatch for FFortDelMarStartlineConfig::CountdownIntervalNum");

// /Script/FortDelMarCore.FortDelMarTerrainData
// Kind: ScriptStruct; super: none
struct FFortDelMarTerrainData
{
public:
    float MaxForwardSpeedPercentage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AccelerationMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DecelerationMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SteerMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SlipMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetSpeedPenalty; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarTerrainData, MaxForwardSpeedPercentage) == 0, "Offset mismatch for FFortDelMarTerrainData::MaxForwardSpeedPercentage");
static_assert(offsetof(FFortDelMarTerrainData, AccelerationMultiplier) == 4, "Offset mismatch for FFortDelMarTerrainData::AccelerationMultiplier");
static_assert(offsetof(FFortDelMarTerrainData, DecelerationMultiplier) == 8, "Offset mismatch for FFortDelMarTerrainData::DecelerationMultiplier");
static_assert(offsetof(FFortDelMarTerrainData, SteerMultiplier) == 12, "Offset mismatch for FFortDelMarTerrainData::SteerMultiplier");
static_assert(offsetof(FFortDelMarTerrainData, SlipMultiplier) == 16, "Offset mismatch for FFortDelMarTerrainData::SlipMultiplier");
static_assert(offsetof(FFortDelMarTerrainData, TargetSpeedPenalty) == 20, "Offset mismatch for FFortDelMarTerrainData::TargetSpeedPenalty");

// /Script/FortDelMarCore.FortDelMarTimeDelayedState
// Kind: ScriptStruct; super: none
struct FFortDelMarTimeDelayedState
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float duration; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelMarTimeDelayedState, Name) == 0, "Offset mismatch for FFortDelMarTimeDelayedState::Name");
static_assert(offsetof(FFortDelMarTimeDelayedState, duration) == 4, "Offset mismatch for FFortDelMarTimeDelayedState::duration");

// /Script/FortDelMarCore.FortDelmarEvent_VehicleManagerDeinitialized
// Kind: ScriptStruct; super: none
struct FFortDelmarEvent_VehicleManagerDeinitialized
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelmarEvent_VehicleManagerInitialized
// Kind: ScriptStruct; super: none
struct FFortDelmarEvent_VehicleManagerInitialized
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarActorMover
// Kind: Class; super: FortCreativeDeviceProp
class UFortDelMarActorMover
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    void* ActorClass; // 0x0B28 (Size: 0x8, Type: ClassProperty)
    void* MovementSpline; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MovementType; // 0x0B38 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B39
    void* ManagedActor; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    void* SplineMovementComponent; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0B50
    float ServerMovementStartTime; // 0x0B58 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarActorMover, ActorClass) == 2856, "Offset mismatch for UFortDelMarActorMover::ActorClass");
static_assert(offsetof(UFortDelMarActorMover, MovementSpline) == 2864, "Offset mismatch for UFortDelMarActorMover::MovementSpline");
static_assert(offsetof(UFortDelMarActorMover, MovementType) == 2872, "Offset mismatch for UFortDelMarActorMover::MovementType");
static_assert(offsetof(UFortDelMarActorMover, ManagedActor) == 2880, "Offset mismatch for UFortDelMarActorMover::ManagedActor");
static_assert(offsetof(UFortDelMarActorMover, SplineMovementComponent) == 2888, "Offset mismatch for UFortDelMarActorMover::SplineMovementComponent");
static_assert(offsetof(UFortDelMarActorMover, ServerMovementStartTime) == 2904, "Offset mismatch for UFortDelMarActorMover::ServerMovementStartTime");

// /Script/FortDelMarCore.FortDelMarAsyncPhysicsTickMutator
// Kind: Class; super: FortDelMarMutator
class UFortDelMarAsyncPhysicsTickMutator
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    float AsyncTickRate; // 0x02E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarAsyncPhysicsTickMutator, AsyncTickRate) == 744, "Offset mismatch for UFortDelMarAsyncPhysicsTickMutator::AsyncTickRate");

// /Script/FortDelMarCore.FortDelMarAudioComponentGroup
// Kind: Class; super: AudioComponentGroup
class UFortDelMarAudioComponentGroup
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* MixModifierExtension; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* SubmixSendExtension; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarAudioComponentGroup, MixModifierExtension) == 816, "Offset mismatch for UFortDelMarAudioComponentGroup::MixModifierExtension");
static_assert(offsetof(UFortDelMarAudioComponentGroup, SubmixSendExtension) == 824, "Offset mismatch for UFortDelMarAudioComponentGroup::SubmixSendExtension");

// /Script/FortDelMarCore.FortDelMarAudioController
// Kind: Class; super: FortAthenaVehicleAudioController
class UFortDelMarAudioController
{
public:
    std::uint8_t Pad_0000[0x3D8]; // 0x0000
    FMulticastInlineDelegate OnBigAirStarted; // 0x03D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBigAirStopped; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ComponentGroup; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsLocal; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0401
    float FinishLineDistanceThreshold; // 0x0404 (Size: 0x4, Type: FloatProperty)
    float ApproachingFinishLineMinTime; // 0x0408 (Size: 0x4, Type: FloatProperty)
    float BigAirLandingDistanceThreshold; // 0x040C (Size: 0x4, Type: FloatProperty)
    float BigAirTimeThreshold; // 0x0410 (Size: 0x4, Type: FloatProperty)
    float BigAirDownSpeedThreshold; // 0x0414 (Size: 0x4, Type: FloatProperty)
    float NonLocalVelocityInterpSpeed; // 0x0418 (Size: 0x4, Type: FloatProperty)
    float MaxAcceleration; // 0x041C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInBigAir; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0421
    void* CachedVehicle; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0430
    std::uint8_t bCanShift; // 0x0438 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarAudioController, OnBigAirStarted) == 984, "Offset mismatch for UFortDelMarAudioController::OnBigAirStarted");
static_assert(offsetof(UFortDelMarAudioController, OnBigAirStopped) == 1000, "Offset mismatch for UFortDelMarAudioController::OnBigAirStopped");
static_assert(offsetof(UFortDelMarAudioController, ComponentGroup) == 1016, "Offset mismatch for UFortDelMarAudioController::ComponentGroup");
static_assert(offsetof(UFortDelMarAudioController, bIsLocal) == 1024, "Offset mismatch for UFortDelMarAudioController::bIsLocal");
static_assert(offsetof(UFortDelMarAudioController, FinishLineDistanceThreshold) == 1028, "Offset mismatch for UFortDelMarAudioController::FinishLineDistanceThreshold");
static_assert(offsetof(UFortDelMarAudioController, ApproachingFinishLineMinTime) == 1032, "Offset mismatch for UFortDelMarAudioController::ApproachingFinishLineMinTime");
static_assert(offsetof(UFortDelMarAudioController, BigAirLandingDistanceThreshold) == 1036, "Offset mismatch for UFortDelMarAudioController::BigAirLandingDistanceThreshold");
static_assert(offsetof(UFortDelMarAudioController, BigAirTimeThreshold) == 1040, "Offset mismatch for UFortDelMarAudioController::BigAirTimeThreshold");
static_assert(offsetof(UFortDelMarAudioController, BigAirDownSpeedThreshold) == 1044, "Offset mismatch for UFortDelMarAudioController::BigAirDownSpeedThreshold");
static_assert(offsetof(UFortDelMarAudioController, NonLocalVelocityInterpSpeed) == 1048, "Offset mismatch for UFortDelMarAudioController::NonLocalVelocityInterpSpeed");
static_assert(offsetof(UFortDelMarAudioController, MaxAcceleration) == 1052, "Offset mismatch for UFortDelMarAudioController::MaxAcceleration");
static_assert(offsetof(UFortDelMarAudioController, bInBigAir) == 1056, "Offset mismatch for UFortDelMarAudioController::bInBigAir");
static_assert(offsetof(UFortDelMarAudioController, CachedVehicle) == 1064, "Offset mismatch for UFortDelMarAudioController::CachedVehicle");
static_assert(offsetof(UFortDelMarAudioController, bCanShift) == 1080, "Offset mismatch for UFortDelMarAudioController::bCanShift");

// /Script/FortDelMarCore.FortDelMarAudioMixModifierExtension
// Kind: Class; super: ActorComponent
class UFortDelMarAudioMixModifierExtension
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

static_assert(offsetof(UFortDelMarAudioMixModifierExtension, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarAudioMixModifierExtension::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, ComponentTags) == 104, "Offset mismatch for UFortDelMarAudioMixModifierExtension::ComponentTags");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, AssetUserData) == 120, "Offset mismatch for UFortDelMarAudioMixModifierExtension::AssetUserData");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarAudioMixModifierExtension::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, bNetAddressable) == 152, "Offset mismatch for UFortDelMarAudioMixModifierExtension::bNetAddressable");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, bAutoActivate) == 154, "Offset mismatch for UFortDelMarAudioMixModifierExtension::bAutoActivate");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarAudioMixModifierExtension::bIsEditorOnly");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, CreationMethod) == 185, "Offset mismatch for UFortDelMarAudioMixModifierExtension::CreationMethod");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarAudioMixModifierExtension::OnComponentActivated");
static_assert(offsetof(UFortDelMarAudioMixModifierExtension, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarAudioMixModifierExtension::OnComponentDeactivated");

// /Script/FortDelMarCore.FortDelMarAudioReverbComponent
// Kind: Class; super: ActorComponent
class UFortDelMarAudioReverbComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ReverbSend; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* EarlyReflectionSend; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnclosureReverbBlendCurve[0x48]; // 0x00D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t WallDistanceBlendCurve[0x48]; // 0x0118 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnclosureSendLevelCurve[0x48]; // 0x0160 (Size: 0x48, Type: StructProperty)
    std::uint8_t WallDistanceSendLevelCurve[0x48]; // 0x01A8 (Size: 0x48, Type: StructProperty)
    std::int32_t NumPoints; // 0x01F0 (Size: 0x4, Type: IntProperty)
    float TraceRadius; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceOrigin[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::int32_t NumTracesPerFrame; // 0x0210 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarAudioReverbComponent, ReverbSend) == 192, "Offset mismatch for UFortDelMarAudioReverbComponent::ReverbSend");
static_assert(offsetof(UFortDelMarAudioReverbComponent, EarlyReflectionSend) == 200, "Offset mismatch for UFortDelMarAudioReverbComponent::EarlyReflectionSend");
static_assert(offsetof(UFortDelMarAudioReverbComponent, EnclosureReverbBlendCurve) == 208, "Offset mismatch for UFortDelMarAudioReverbComponent::EnclosureReverbBlendCurve");
static_assert(offsetof(UFortDelMarAudioReverbComponent, WallDistanceBlendCurve) == 280, "Offset mismatch for UFortDelMarAudioReverbComponent::WallDistanceBlendCurve");
static_assert(offsetof(UFortDelMarAudioReverbComponent, EnclosureSendLevelCurve) == 352, "Offset mismatch for UFortDelMarAudioReverbComponent::EnclosureSendLevelCurve");
static_assert(offsetof(UFortDelMarAudioReverbComponent, WallDistanceSendLevelCurve) == 424, "Offset mismatch for UFortDelMarAudioReverbComponent::WallDistanceSendLevelCurve");
static_assert(offsetof(UFortDelMarAudioReverbComponent, NumPoints) == 496, "Offset mismatch for UFortDelMarAudioReverbComponent::NumPoints");
static_assert(offsetof(UFortDelMarAudioReverbComponent, TraceRadius) == 500, "Offset mismatch for UFortDelMarAudioReverbComponent::TraceRadius");
static_assert(offsetof(UFortDelMarAudioReverbComponent, TraceOrigin) == 504, "Offset mismatch for UFortDelMarAudioReverbComponent::TraceOrigin");
static_assert(offsetof(UFortDelMarAudioReverbComponent, NumTracesPerFrame) == 528, "Offset mismatch for UFortDelMarAudioReverbComponent::NumTracesPerFrame");

// /Script/FortDelMarCore.FortDelMarBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortDelMarBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarCameraInputControllerComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarCameraInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TurnCameraAction[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LookUpCameraAction[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReverseCameraAction[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    void* InputManagerClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortSettings; // 0x0100 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarCameraInputControllerComponent, TurnCameraAction) == 192, "Offset mismatch for UFortDelMarCameraInputControllerComponent::TurnCameraAction");
static_assert(offsetof(UFortDelMarCameraInputControllerComponent, LookUpCameraAction) == 208, "Offset mismatch for UFortDelMarCameraInputControllerComponent::LookUpCameraAction");
static_assert(offsetof(UFortDelMarCameraInputControllerComponent, ReverseCameraAction) == 224, "Offset mismatch for UFortDelMarCameraInputControllerComponent::ReverseCameraAction");
static_assert(offsetof(UFortDelMarCameraInputControllerComponent, InputManagerClass) == 240, "Offset mismatch for UFortDelMarCameraInputControllerComponent::InputManagerClass");
static_assert(offsetof(UFortDelMarCameraInputControllerComponent, InputComponent) == 248, "Offset mismatch for UFortDelMarCameraInputControllerComponent::InputComponent");
static_assert(offsetof(UFortDelMarCameraInputControllerComponent, FortSettings) == 256, "Offset mismatch for UFortDelMarCameraInputControllerComponent::FortSettings");

// /Script/FortDelMarCore.FortDelMarConsoleVariableMutator
// Kind: Class; super: FortDelMarMutator
class UFortDelMarConsoleVariableMutator
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    FString VariableName; // 0x02E8 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x02F8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortDelMarConsoleVariableMutator, VariableName) == 744, "Offset mismatch for UFortDelMarConsoleVariableMutator::VariableName");
static_assert(offsetof(UFortDelMarConsoleVariableMutator, Value) == 760, "Offset mismatch for UFortDelMarConsoleVariableMutator::Value");

// /Script/FortDelMarCore.FortDelMarContextualHintComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarContextualHintComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t HazardHitHint[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    TMap<void*, void*> DemolishedByHints; // 0x0108 (Size: 0x10, Type: MapProperty)
    std::uint8_t SlowerTerrainHint[0x48]; // 0x0118 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> CachedPlayerController; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarContextualHintComponent, HazardHitHint) == 192, "Offset mismatch for UFortDelMarContextualHintComponent::HazardHitHint");
static_assert(offsetof(UFortDelMarContextualHintComponent, DemolishedByHints) == 264, "Offset mismatch for UFortDelMarContextualHintComponent::DemolishedByHints");
static_assert(offsetof(UFortDelMarContextualHintComponent, SlowerTerrainHint) == 280, "Offset mismatch for UFortDelMarContextualHintComponent::SlowerTerrainHint");
static_assert(offsetof(UFortDelMarContextualHintComponent, CachedPlayerController) == 352, "Offset mismatch for UFortDelMarContextualHintComponent::CachedPlayerController");

// /Script/FortDelMarCore.FortDelMarDoubleTapInputTrigger
// Kind: Class; super: InputTrigger
class UFortDelMarDoubleTapInputTrigger
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float Delay; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarDoubleTapInputTrigger, Delay) == 80, "Offset mismatch for UFortDelMarDoubleTapInputTrigger::Delay");

// /Script/FortDelMarCore.FortDelMarDriveParticlesPhysMatAttribute
// Kind: Class; super: FortDelMarPhysMatAttribute
class UFortDelMarDriveParticlesPhysMatAttribute
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DriveParticles; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarDriveParticlesPhysMatAttribute, DriveParticles) == 40, "Offset mismatch for UFortDelMarDriveParticlesPhysMatAttribute::DriveParticles");

// /Script/FortDelMarCore.FortDelMarEnvironmentEffectCueNotify_Actor
// Kind: Class; super: GameplayCueNotify_Actor
class UFortDelMarEnvironmentEffectCueNotify_Actor
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    std::uint8_t Effects[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowOnAllClients; // 0x02D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarEnvironmentEffectCueNotify_Actor, Effects) == 696, "Offset mismatch for UFortDelMarEnvironmentEffectCueNotify_Actor::Effects");
static_assert(offsetof(UFortDelMarEnvironmentEffectCueNotify_Actor, bShowOnAllClients) == 720, "Offset mismatch for UFortDelMarEnvironmentEffectCueNotify_Actor::bShowOnAllClients");

// /Script/FortDelMarCore.FortDelMarEnvironmentEffectsVolume
// Kind: Class; super: Actor
class UFortDelMarEnvironmentEffectsVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* AppliedEffect; // 0x0270 (Size: 0x8, Type: ClassProperty)
    void* BoxCollider; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarEnvironmentEffectsVolume, AppliedEffect) == 624, "Offset mismatch for UFortDelMarEnvironmentEffectsVolume::AppliedEffect");
static_assert(offsetof(UFortDelMarEnvironmentEffectsVolume, BoxCollider) == 632, "Offset mismatch for UFortDelMarEnvironmentEffectsVolume::BoxCollider");

// /Script/FortDelMarCore.FortDelMarEvent_AttachmentChanged
// Kind: Class; super: Object
class UFortDelMarEvent_AttachmentChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> PlayerAttachedTo; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevPlayerAttachedTo; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarEvent_AttachmentChanged, PlayerAttachedTo) == 40, "Offset mismatch for UFortDelMarEvent_AttachmentChanged::PlayerAttachedTo");
static_assert(offsetof(UFortDelMarEvent_AttachmentChanged, PrevPlayerAttachedTo) == 48, "Offset mismatch for UFortDelMarEvent_AttachmentChanged::PrevPlayerAttachedTo");

// /Script/FortDelMarCore.FortDelMarEvent_FinalFirstPlaceChanged
// Kind: Class; super: Object
class UFortDelMarEvent_FinalFirstPlaceChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> NewFirstPlace; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PrevFirstPlace; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarEvent_FinalFirstPlaceChanged, NewFirstPlace) == 40, "Offset mismatch for UFortDelMarEvent_FinalFirstPlaceChanged::NewFirstPlace");
static_assert(offsetof(UFortDelMarEvent_FinalFirstPlaceChanged, PrevFirstPlace) == 48, "Offset mismatch for UFortDelMarEvent_FinalFirstPlaceChanged::PrevFirstPlace");

// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardActive
// Kind: Class; super: Object
class UFortDelMarEvent_GlobalLeaderboardActive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString LeaderboardEventId; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString LeaderboardWindowId; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortDelMarEvent_GlobalLeaderboardActive, LeaderboardEventId) == 40, "Offset mismatch for UFortDelMarEvent_GlobalLeaderboardActive::LeaderboardEventId");
static_assert(offsetof(UFortDelMarEvent_GlobalLeaderboardActive, LeaderboardWindowId) == 56, "Offset mismatch for UFortDelMarEvent_GlobalLeaderboardActive::LeaderboardWindowId");

// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UFortDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UFortDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved
// Kind: Class; super: Object
class UFortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PersonalBest[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved, PersonalBest) == 40, "Offset mismatch for UFortDelMarEvent_GlobalLeaderboardPersonalBestRetrieved::PersonalBest");

// /Script/FortDelMarCore.FortDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
// Kind: Class; super: Object
class UFortDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarEvent_PlayerFinishRace
// Kind: Class; super: Object
class UFortDelMarEvent_PlayerFinishRace
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double RunTime; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bValidRun; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarEvent_PlayerFinishRace, RunTime) == 40, "Offset mismatch for UFortDelMarEvent_PlayerFinishRace::RunTime");
static_assert(offsetof(UFortDelMarEvent_PlayerFinishRace, bValidRun) == 48, "Offset mismatch for UFortDelMarEvent_PlayerFinishRace::bValidRun");

// /Script/FortDelMarCore.FortDelMarEvent_PlayerInVehicle
// Kind: Class; super: Object
class UFortDelMarEvent_PlayerInVehicle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Vehicle; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t SeatIndex; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarEvent_PlayerInVehicle, Vehicle) == 40, "Offset mismatch for UFortDelMarEvent_PlayerInVehicle::Vehicle");
static_assert(offsetof(UFortDelMarEvent_PlayerInVehicle, SeatIndex) == 48, "Offset mismatch for UFortDelMarEvent_PlayerInVehicle::SeatIndex");

// /Script/FortDelMarCore.FortDelMarEvent_PlayerPointsChanged
// Kind: Class; super: Object
class UFortDelMarEvent_PlayerPointsChanged
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t PreviousPoints; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPoints; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarEvent_PlayerPointsChanged, PreviousPoints) == 40, "Offset mismatch for UFortDelMarEvent_PlayerPointsChanged::PreviousPoints");
static_assert(offsetof(UFortDelMarEvent_PlayerPointsChanged, CurrentPoints) == 44, "Offset mismatch for UFortDelMarEvent_PlayerPointsChanged::CurrentPoints");

// /Script/FortDelMarCore.FortDelMarEvent_VehicleDemolish
// Kind: Class; super: Object
class UFortDelMarEvent_VehicleDemolish
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DemolishReason[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> Vehicle; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarEvent_VehicleDemolish, DemolishReason) == 40, "Offset mismatch for UFortDelMarEvent_VehicleDemolish::DemolishReason");
static_assert(offsetof(UFortDelMarEvent_VehicleDemolish, Vehicle) == 44, "Offset mismatch for UFortDelMarEvent_VehicleDemolish::Vehicle");

// /Script/FortDelMarCore.FortDelMarGameUserSettings
// Kind: Class; super: Object
class UFortDelMarGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NuxLastViewedVideoVersion; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNuxHasPromptedToPlayTutorial; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPromptedToPlaySpeedRun; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNuxHasShownDefaultMode; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002F
    FString LastPlayedFortDelMarMnemonic; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortDelMarGameUserSettings, NuxLastViewedVideoVersion) == 40, "Offset mismatch for UFortDelMarGameUserSettings::NuxLastViewedVideoVersion");
static_assert(offsetof(UFortDelMarGameUserSettings, bNuxHasPromptedToPlayTutorial) == 44, "Offset mismatch for UFortDelMarGameUserSettings::bNuxHasPromptedToPlayTutorial");
static_assert(offsetof(UFortDelMarGameUserSettings, bHasPromptedToPlaySpeedRun) == 45, "Offset mismatch for UFortDelMarGameUserSettings::bHasPromptedToPlaySpeedRun");
static_assert(offsetof(UFortDelMarGameUserSettings, bNuxHasShownDefaultMode) == 46, "Offset mismatch for UFortDelMarGameUserSettings::bNuxHasShownDefaultMode");
static_assert(offsetof(UFortDelMarGameUserSettings, LastPlayedFortDelMarMnemonic) == 48, "Offset mismatch for UFortDelMarGameUserSettings::LastPlayedFortDelMarMnemonic");

// /Script/FortDelMarCore.FortDelMarGameplayModifier
// Kind: Class; super: Actor
class UFortDelMarGameplayModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarGameplayModifier, PrimaryActorTick) == 40, "Offset mismatch for UFortDelMarGameplayModifier::PrimaryActorTick");
static_assert(offsetof(UFortDelMarGameplayModifier, bAlwaysRelevant) == 88, "Offset mismatch for UFortDelMarGameplayModifier::bAlwaysRelevant");
static_assert(offsetof(UFortDelMarGameplayModifier, bExchangedRoles) == 89, "Offset mismatch for UFortDelMarGameplayModifier::bExchangedRoles");
static_assert(offsetof(UFortDelMarGameplayModifier, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortDelMarGameplayModifier::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortDelMarGameplayModifier, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortDelMarGameplayModifier::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortDelMarGameplayModifier, bActorEnableCollision) == 93, "Offset mismatch for UFortDelMarGameplayModifier::bActorEnableCollision");
static_assert(offsetof(UFortDelMarGameplayModifier, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortDelMarGameplayModifier::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarGameplayModifier, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortDelMarGameplayModifier::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarGameplayModifier, RemoteRole) == 96, "Offset mismatch for UFortDelMarGameplayModifier::RemoteRole");
static_assert(offsetof(UFortDelMarGameplayModifier, InitialLifeSpan) == 100, "Offset mismatch for UFortDelMarGameplayModifier::InitialLifeSpan");
static_assert(offsetof(UFortDelMarGameplayModifier, CustomTimeDilation) == 104, "Offset mismatch for UFortDelMarGameplayModifier::CustomTimeDilation");
static_assert(offsetof(UFortDelMarGameplayModifier, RayTracingGroupId) == 108, "Offset mismatch for UFortDelMarGameplayModifier::RayTracingGroupId");
static_assert(offsetof(UFortDelMarGameplayModifier, AttachmentReplication) == 112, "Offset mismatch for UFortDelMarGameplayModifier::AttachmentReplication");
static_assert(offsetof(UFortDelMarGameplayModifier, ReplicatedMovement) == 208, "Offset mismatch for UFortDelMarGameplayModifier::ReplicatedMovement");
static_assert(offsetof(UFortDelMarGameplayModifier, Owner) == 344, "Offset mismatch for UFortDelMarGameplayModifier::Owner");
static_assert(offsetof(UFortDelMarGameplayModifier, NetDriverName) == 352, "Offset mismatch for UFortDelMarGameplayModifier::NetDriverName");
static_assert(offsetof(UFortDelMarGameplayModifier, Role) == 356, "Offset mismatch for UFortDelMarGameplayModifier::Role");
static_assert(offsetof(UFortDelMarGameplayModifier, NetDormancy) == 357, "Offset mismatch for UFortDelMarGameplayModifier::NetDormancy");
static_assert(offsetof(UFortDelMarGameplayModifier, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortDelMarGameplayModifier::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortDelMarGameplayModifier, AutoReceiveInput) == 359, "Offset mismatch for UFortDelMarGameplayModifier::AutoReceiveInput");
static_assert(offsetof(UFortDelMarGameplayModifier, InputPriority) == 360, "Offset mismatch for UFortDelMarGameplayModifier::InputPriority");
static_assert(offsetof(UFortDelMarGameplayModifier, InputComponent) == 368, "Offset mismatch for UFortDelMarGameplayModifier::InputComponent");
static_assert(offsetof(UFortDelMarGameplayModifier, NetTag) == 376, "Offset mismatch for UFortDelMarGameplayModifier::NetTag");
static_assert(offsetof(UFortDelMarGameplayModifier, NetCullDistanceSquared) == 380, "Offset mismatch for UFortDelMarGameplayModifier::NetCullDistanceSquared");
static_assert(offsetof(UFortDelMarGameplayModifier, NetUpdateFrequency) == 384, "Offset mismatch for UFortDelMarGameplayModifier::NetUpdateFrequency");
static_assert(offsetof(UFortDelMarGameplayModifier, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortDelMarGameplayModifier::MinNetUpdateFrequency");
static_assert(offsetof(UFortDelMarGameplayModifier, NetPriority) == 392, "Offset mismatch for UFortDelMarGameplayModifier::NetPriority");
static_assert(offsetof(UFortDelMarGameplayModifier, PhysicsReplicationMode) == 396, "Offset mismatch for UFortDelMarGameplayModifier::PhysicsReplicationMode");
static_assert(offsetof(UFortDelMarGameplayModifier, Instigator) == 408, "Offset mismatch for UFortDelMarGameplayModifier::Instigator");
static_assert(offsetof(UFortDelMarGameplayModifier, Children) == 416, "Offset mismatch for UFortDelMarGameplayModifier::Children");
static_assert(offsetof(UFortDelMarGameplayModifier, RootComponent) == 432, "Offset mismatch for UFortDelMarGameplayModifier::RootComponent");
static_assert(offsetof(UFortDelMarGameplayModifier, HLODLayer) == 448, "Offset mismatch for UFortDelMarGameplayModifier::HLODLayer");
static_assert(offsetof(UFortDelMarGameplayModifier, Layers) == 456, "Offset mismatch for UFortDelMarGameplayModifier::Layers");
static_assert(offsetof(UFortDelMarGameplayModifier, ParentComponent) == 472, "Offset mismatch for UFortDelMarGameplayModifier::ParentComponent");
static_assert(offsetof(UFortDelMarGameplayModifier, Tags) == 496, "Offset mismatch for UFortDelMarGameplayModifier::Tags");
static_assert(offsetof(UFortDelMarGameplayModifier, OnTakeAnyDamage) == 512, "Offset mismatch for UFortDelMarGameplayModifier::OnTakeAnyDamage");
static_assert(offsetof(UFortDelMarGameplayModifier, OnTakePointDamage) == 513, "Offset mismatch for UFortDelMarGameplayModifier::OnTakePointDamage");
static_assert(offsetof(UFortDelMarGameplayModifier, OnTakeRadialDamage) == 514, "Offset mismatch for UFortDelMarGameplayModifier::OnTakeRadialDamage");
static_assert(offsetof(UFortDelMarGameplayModifier, OnActorBeginOverlap) == 515, "Offset mismatch for UFortDelMarGameplayModifier::OnActorBeginOverlap");
static_assert(offsetof(UFortDelMarGameplayModifier, OnActorEndOverlap) == 516, "Offset mismatch for UFortDelMarGameplayModifier::OnActorEndOverlap");
static_assert(offsetof(UFortDelMarGameplayModifier, OnBeginCursorOver) == 517, "Offset mismatch for UFortDelMarGameplayModifier::OnBeginCursorOver");
static_assert(offsetof(UFortDelMarGameplayModifier, OnEndCursorOver) == 518, "Offset mismatch for UFortDelMarGameplayModifier::OnEndCursorOver");
static_assert(offsetof(UFortDelMarGameplayModifier, OnClicked) == 519, "Offset mismatch for UFortDelMarGameplayModifier::OnClicked");
static_assert(offsetof(UFortDelMarGameplayModifier, OnReleased) == 520, "Offset mismatch for UFortDelMarGameplayModifier::OnReleased");
static_assert(offsetof(UFortDelMarGameplayModifier, OnInputTouchBegin) == 521, "Offset mismatch for UFortDelMarGameplayModifier::OnInputTouchBegin");
static_assert(offsetof(UFortDelMarGameplayModifier, OnInputTouchEnd) == 522, "Offset mismatch for UFortDelMarGameplayModifier::OnInputTouchEnd");
static_assert(offsetof(UFortDelMarGameplayModifier, OnInputTouchEnter) == 523, "Offset mismatch for UFortDelMarGameplayModifier::OnInputTouchEnter");
static_assert(offsetof(UFortDelMarGameplayModifier, OnInputTouchLeave) == 524, "Offset mismatch for UFortDelMarGameplayModifier::OnInputTouchLeave");
static_assert(offsetof(UFortDelMarGameplayModifier, OnActorHit) == 525, "Offset mismatch for UFortDelMarGameplayModifier::OnActorHit");
static_assert(offsetof(UFortDelMarGameplayModifier, OnDestroyed) == 526, "Offset mismatch for UFortDelMarGameplayModifier::OnDestroyed");
static_assert(offsetof(UFortDelMarGameplayModifier, OnEndPlay) == 527, "Offset mismatch for UFortDelMarGameplayModifier::OnEndPlay");
static_assert(offsetof(UFortDelMarGameplayModifier, InstanceComponents) == 592, "Offset mismatch for UFortDelMarGameplayModifier::InstanceComponents");
static_assert(offsetof(UFortDelMarGameplayModifier, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortDelMarGameplayModifier::BlueprintCreatedComponents");

// /Script/FortDelMarCore.FortDelMarGameplayModifier_AttachmentManager
// Kind: Class; super: FortDelMarGameplayModifier
class UFortDelMarGameplayModifier_AttachmentManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, PrimaryActorTick) == 40, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::PrimaryActorTick");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, bAlwaysRelevant) == 88, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::bAlwaysRelevant");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, bExchangedRoles) == 89, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::bExchangedRoles");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, bActorEnableCollision) == 93, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::bActorEnableCollision");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, RemoteRole) == 96, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::RemoteRole");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, InitialLifeSpan) == 100, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::InitialLifeSpan");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, CustomTimeDilation) == 104, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::CustomTimeDilation");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, RayTracingGroupId) == 108, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::RayTracingGroupId");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, AttachmentReplication) == 112, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::AttachmentReplication");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, ReplicatedMovement) == 208, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::ReplicatedMovement");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Owner) == 344, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Owner");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetDriverName) == 352, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetDriverName");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Role) == 356, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Role");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetDormancy) == 357, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetDormancy");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, AutoReceiveInput) == 359, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::AutoReceiveInput");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, InputPriority) == 360, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::InputPriority");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, InputComponent) == 368, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::InputComponent");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetTag) == 376, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetTag");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetCullDistanceSquared) == 380, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetCullDistanceSquared");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetUpdateFrequency) == 384, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetUpdateFrequency");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::MinNetUpdateFrequency");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, NetPriority) == 392, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::NetPriority");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, PhysicsReplicationMode) == 396, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::PhysicsReplicationMode");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Instigator) == 408, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Instigator");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Children) == 416, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Children");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, RootComponent) == 432, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::RootComponent");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, HLODLayer) == 448, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::HLODLayer");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Layers) == 456, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Layers");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, ParentComponent) == 472, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::ParentComponent");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, Tags) == 496, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::Tags");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnTakeAnyDamage) == 512, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnTakeAnyDamage");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnTakePointDamage) == 513, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnTakePointDamage");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnTakeRadialDamage) == 514, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnTakeRadialDamage");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnActorBeginOverlap) == 515, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnActorBeginOverlap");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnActorEndOverlap) == 516, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnActorEndOverlap");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnBeginCursorOver) == 517, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnBeginCursorOver");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnEndCursorOver) == 518, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnEndCursorOver");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnClicked) == 519, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnClicked");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnReleased) == 520, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnReleased");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnInputTouchBegin) == 521, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnInputTouchBegin");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnInputTouchEnd) == 522, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnInputTouchEnd");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnInputTouchEnter) == 523, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnInputTouchEnter");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnInputTouchLeave) == 524, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnInputTouchLeave");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnActorHit) == 525, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnActorHit");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnDestroyed) == 526, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnDestroyed");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, OnEndPlay) == 527, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::OnEndPlay");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, InstanceComponents) == 592, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::InstanceComponents");
static_assert(offsetof(UFortDelMarGameplayModifier_AttachmentManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortDelMarGameplayModifier_AttachmentManager::BlueprintCreatedComponents");

// /Script/FortDelMarCore.FortDelMarGameplayModifier_CVarOverride
// Kind: Class; super: FortDelMarGameplayModifier
class UFortDelMarGameplayModifier_CVarOverride
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString VariableName; // 0x0270 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0280 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortDelMarGameplayModifier_CVarOverride, VariableName) == 624, "Offset mismatch for UFortDelMarGameplayModifier_CVarOverride::VariableName");
static_assert(offsetof(UFortDelMarGameplayModifier_CVarOverride, Value) == 640, "Offset mismatch for UFortDelMarGameplayModifier_CVarOverride::Value");

// /Script/FortDelMarCore.FortDelMarGameplayModifier_FriendlyFire
// Kind: Class; super: FortDelMarGameplayModifier
class UFortDelMarGameplayModifier_FriendlyFire
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t FriendlyFireType; // 0x0270 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortDelMarGameplayModifier_FriendlyFire, FriendlyFireType) == 624, "Offset mismatch for UFortDelMarGameplayModifier_FriendlyFire::FriendlyFireType");

// /Script/FortDelMarCore.FortDelMarGhostPlaybackSessionComponent
// Kind: Class; super: FortDelMarGhostSessionComponent
class UFortDelMarGhostPlaybackSessionComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t TeleportSetting; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* PlaybackActorClass; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    std::int32_t CurrentFrame; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    void* PlaybackLog; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* PlaybackActor; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarGhostPlaybackSessionComponent, TeleportSetting) == 240, "Offset mismatch for UFortDelMarGhostPlaybackSessionComponent::TeleportSetting");
static_assert(offsetof(UFortDelMarGhostPlaybackSessionComponent, PlaybackActorClass) == 248, "Offset mismatch for UFortDelMarGhostPlaybackSessionComponent::PlaybackActorClass");
static_assert(offsetof(UFortDelMarGhostPlaybackSessionComponent, CurrentFrame) == 256, "Offset mismatch for UFortDelMarGhostPlaybackSessionComponent::CurrentFrame");
static_assert(offsetof(UFortDelMarGhostPlaybackSessionComponent, PlaybackLog) == 264, "Offset mismatch for UFortDelMarGhostPlaybackSessionComponent::PlaybackLog");
static_assert(offsetof(UFortDelMarGhostPlaybackSessionComponent, PlaybackActor) == 272, "Offset mismatch for UFortDelMarGhostPlaybackSessionComponent::PlaybackActor");

// /Script/FortDelMarCore.FortDelMarGhostPlaybackTrigger
// Kind: Class; super: Actor
class UFortDelMarGhostPlaybackTrigger
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::int32_t PreviewFrame; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::int32_t StartFrame; // 0x0274 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFrame; // 0x027C (Size: 0x4, Type: IntProperty)
    void* PlaybackLog; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* BoxCollider; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* PlaybackSessionClassOverride; // 0x0290 (Size: 0x8, Type: ClassProperty)
    void* PlaybackSession; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, PreviewFrame) == 624, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::PreviewFrame");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, StartFrame) == 628, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::StartFrame");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, EndFrame) == 632, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::EndFrame");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, MaxFrame) == 636, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::MaxFrame");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, PlaybackLog) == 640, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::PlaybackLog");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, BoxCollider) == 648, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::BoxCollider");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, PlaybackSessionClassOverride) == 656, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::PlaybackSessionClassOverride");
static_assert(offsetof(UFortDelMarGhostPlaybackTrigger, PlaybackSession) == 664, "Offset mismatch for UFortDelMarGhostPlaybackTrigger::PlaybackSession");

// /Script/FortDelMarCore.FortDelMarGhostRecordingSessionComponent
// Kind: Class; super: FortDelMarGhostSessionComponent
class UFortDelMarGhostRecordingSessionComponent
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

static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::ComponentTags");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::AssetUserData");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::CreationMethod");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarGhostRecordingSessionComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarGhostRecordingSessionComponent::OnComponentDeactivated");

// /Script/FortDelMarCore.FortDelMarGhostReplayLog
// Kind: Class; super: Object
class UFortDelMarGhostReplayLog
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Frames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarGhostReplayLog, Frames) == 48, "Offset mismatch for UFortDelMarGhostReplayLog::Frames");

// /Script/FortDelMarCore.FortDelMarGhostSessionComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarGhostSessionComponent
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

static_assert(offsetof(UFortDelMarGhostSessionComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarGhostSessionComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarGhostSessionComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarGhostSessionComponent::ComponentTags");
static_assert(offsetof(UFortDelMarGhostSessionComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarGhostSessionComponent::AssetUserData");
static_assert(offsetof(UFortDelMarGhostSessionComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarGhostSessionComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarGhostSessionComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarGhostSessionComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarGhostSessionComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarGhostSessionComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarGhostSessionComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarGhostSessionComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarGhostSessionComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarGhostSessionComponent::CreationMethod");
static_assert(offsetof(UFortDelMarGhostSessionComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarGhostSessionComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarGhostSessionComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarGhostSessionComponent::OnComponentDeactivated");

// /Script/FortDelMarCore.FortDelMarGhostVehicle
// Kind: Class; super: FortAthenaVehicle
class UFortDelMarGhostVehicle
{
public:
    std::uint8_t Pad_0000[0x590]; // 0x0000
    std::uint8_t VehicleContextTag[0x8]; // 0x0590 (Size: 0x8, Type: StructProperty)
    void* VehicleEventRouter; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnActorRecentlyHit; // 0x05A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t VehicleImpactDamageTag[0x8]; // 0x05B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t NetPredictionProxy_AP[0x18]; // 0x05B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetPredictionProxy_SP[0x18]; // 0x05D0 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnScrapingSidesOrTopChangedDelegate; // 0x05E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCurrentGearChangedDelegate; // 0x05F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString CustomOwnerName; // 0x0608 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultOwnerName[0x10]; // 0x0618 (Size: 0x10, Type: TextProperty)
    std::uint8_t CustomOwnerAccountId[0x30]; // 0x0628 (Size: 0x30, Type: StructProperty)
    std::uint8_t CustomName[0x10]; // 0x0658 (Size: 0x10, Type: TextProperty)
    std::uint8_t SoftOverrideItemWrap[0x20]; // 0x0668 (Size: 0x20, Type: SoftObjectProperty)
    void* OverrideItemWrap; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnSpringCompressionDelegate; // 0x0690 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PlayersBasedOnVehicle[0x28]; // 0x06A0 (Size: 0x28, Type: SetProperty)
    FMulticastInlineDelegate OnSleepStateChangedDelegate; // 0x06C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bUseDeprecatedSleepOnSpawn; // 0x06D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x06D9
    std::uint8_t WaterSurfaceDataCache[0x78]; // 0x06E0 (Size: 0x78, Type: StructProperty)
    TWeakObjectPtr<void> LastDamageInstigator; // 0x0758 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastOutOfHealthInstigator; // 0x0760 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastOutOfHealthDamageCauser; // 0x0768 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x80]; // 0x0770
    void* BoundsXYSplineComponent; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x28]; // 0x07F8
    void* SkeletalMesh; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0xC]; // 0x0828
    std::int32_t CustomDepthStencilValue; // 0x0834 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValueForHighlightedVehicle; // 0x0838 (Size: 0x4, Type: IntProperty)
    std::uint8_t SquadId; // 0x083C (Size: 0x1, Type: ByteProperty)
    std::uint8_t TeamId; // 0x083D (Size: 0x1, Type: ByteProperty)
    std::uint8_t InitialOverlapBehavior; // 0x083E (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x19]; // 0x083F
    std::uint8_t bDisableUpdateAutoRun; // 0x0858 (Size: 0x1, Type: BoolProperty)
    // 0x0858 BoolProperty bDisableUpdateForcedDebugInput (shared storage)
    // 0x0858 BoolProperty bDisableUpdateHonk (shared storage)
    // 0x0858 BoolProperty bDisableUpdateIgnoredBuildingActors (shared storage)
    // 0x0858 BoolProperty bDisableUpdateIngoredPawnsForDamage (shared storage)
    // 0x0858 BoolProperty bDisableUpdateSafeTeleport (shared storage)
    // 0x0858 BoolProperty bUseForceHeading (shared storage)
    std::uint8_t bDestroyBuildingSMActorOnForceExit; // 0x0859 (Size: 0x1, Type: BoolProperty)
    // 0x0859 BoolProperty bDestroyOnLastExit (shared storage)
    // 0x0859 BoolProperty bIgnoreAllFallingDamage (shared storage)
    // 0x0859 BoolProperty bPlayDamageAudio (shared storage)
    // 0x0859 BoolProperty bShowDamageNumbers (shared storage)
    // 0x0859 BoolProperty bShowDamageNumbersAtImpactLocation (shared storage)
    // 0x0859 BoolProperty bShowDamageNumbersToTeam (shared storage)
    // 0x0859 BoolProperty bShowVehicleHealthBarOnPlayerHUD (shared storage)
    std::uint8_t bForceDeath; // 0x085A (Size: 0x1, Type: BoolProperty)
    // 0x085A BoolProperty bHasDriver (shared storage)
    // 0x085A BoolProperty bHasPassengers (shared storage)
    // 0x085A BoolProperty bIgnoreNextFallingDamage (shared storage)
    // 0x085A BoolProperty bIsBraking (shared storage)
    // 0x085A BoolProperty bPlayInstantDeathEffects (shared storage)
    // 0x085A BoolProperty bPlayedDying (shared storage)
    // 0x085A BoolProperty bShouldClearFallDamageImmunityForPawnsOnExit (shared storage)
    std::uint8_t bCanCoastOnIncline; // 0x085B (Size: 0x1, Type: BoolProperty)
    // 0x085B BoolProperty bCanDriveOnIncline (shared storage)
    // 0x085B BoolProperty bCanSleepWhileNotTouchingAnything (shared storage)
    // 0x085B BoolProperty bIsFullyInWaterBody (shared storage)
    // 0x085B BoolProperty bIsInWater (shared storage)
    // 0x085B BoolProperty bIsInWaterBody (shared storage)
    // 0x085B BoolProperty bIsOverlappingWaterBody (shared storage)
    // 0x085B BoolProperty bIsTouchingAnything (shared storage)
    std::uint8_t bAnyWheelsOnGround; // 0x085C (Size: 0x1, Type: BoolProperty)
    // 0x085C BoolProperty bDisableCollisionAllowed (shared storage)
    // 0x085C BoolProperty bIsTouchingDrivableGround (shared storage)
    // 0x085C BoolProperty bIsTouchingGroundWithoutWheels (shared storage)
    // 0x085C BoolProperty bPossiblyTouchingTop (shared storage)
    // 0x085C BoolProperty bWheelsOnGround (shared storage)
    std::uint8_t Pad_0006[0x2]; // 0x085D
    std::uint8_t bUseGravity; // 0x085F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractBetweenFortVolumes; // 0x0860 (Size: 0x1, Type: BoolProperty)
    // 0x0860 BoolProperty bCanPassengerPawnsTakeDamage (shared storage)
    // 0x0860 BoolProperty bCosmeticPhysicsInitializing (shared storage)
    // 0x0860 BoolProperty bCosmeticsFinished (shared storage)
    // 0x0860 BoolProperty bEnableCurieMaterial (shared storage)
    // 0x0860 BoolProperty bServerIsInUndergroundVolume (shared storage)
    std::uint8_t bEnforceMinigameClassRestriction; // 0x0861 (Size: 0x1, Type: BoolProperty)
    // 0x0861 BoolProperty bEnforceTeamRestrictionForMiniGame (shared storage)
    // 0x0861 BoolProperty bStencilEnabled (shared storage)
    // 0x0861 BoolProperty bUseCustomDepthStencilValue (shared storage)
    std::uint8_t bAllowPassengerInteractions; // 0x0862 (Size: 0x1, Type: BoolProperty)
    // 0x0862 BoolProperty bCachedSquadRestrictionEnabled (shared storage)
    // 0x0862 BoolProperty bEnforceTeamRestriction (shared storage)
    // 0x0862 BoolProperty bMoveStickAcceleratesVehicles (shared storage)
    std::uint8_t Pad_0007[0x1D]; // 0x0863
    std::int32_t MinigameClassID; // 0x0880 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0008[0x4]; // 0x0884
    FMulticastInlineDelegate OnPawnEnteredVehicleAtSeat; // 0x0888 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnEnteredVehicleSeat; // 0x0898 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnExitedVehicleSeat; // 0x08A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnExitedVehicleFromSeat; // 0x08B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnFinishEnteringVehicle; // 0x08C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleHornEvent; // 0x08D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleOwnerChanged; // 0x08E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleSignificanceRecentlyRenderedChanged; // 0x08F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x18]; // 0x0908
    std::uint8_t bAttemptAsyncOrientationCorrection; // 0x0920 (Size: 0x1, Type: BoolProperty)
    // 0x0920 BoolProperty bIsAsyncCorrectingOrientation (shared storage)
    // 0x0920 BoolProperty bWaitingForSleep (shared storage)
    std::uint8_t bAllowInteractBetweenFortVolumes_Runtime; // 0x0921 (Size: 0x1, Type: BoolProperty)
    // 0x0921 BoolProperty bAlwaysCreateNavComponent (shared storage)
    // 0x0921 BoolProperty bTricksEnabled (shared storage)
    std::uint8_t Pad_000A[0x6]; // 0x0922
    float FireDamageTickTimer; // 0x0928 (Size: 0x4, Type: FloatProperty)
    float CurrentFOV; // 0x092C (Size: 0x4, Type: FloatProperty)
    std::uint8_t FireEnvDamageTags[0x20]; // 0x0930 (Size: 0x20, Type: StructProperty)
    std::uint8_t PawnIgnoreBumpTags[0x20]; // 0x0950 (Size: 0x20, Type: StructProperty)
    void* DriverReticleBrush; // 0x0970 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AppliedVehicleModTags[0x20]; // 0x0978 (Size: 0x20, Type: StructProperty)
    void* CollectedVehicleModData; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x09A0
    float WaterEffectsVehicleMaxSpeedKmh; // 0x09A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x4]; // 0x09AC
    void* WaterEffectsAsset; // 0x09B0 (Size: 0x8, Type: ObjectProperty)
    void* WaterEffectsComponent; // 0x09B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000D[0x8]; // 0x09C0
    std::uint8_t GameplayTags[0x20]; // 0x09C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PawnsToIgnoreForDamge[0x10]; // 0x09E8 (Size: 0x10, Type: SetProperty)
    TArray<void*> PawnsToIgnoreForCollision; // 0x09F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IgnoredPawnsPendingTeleport; // 0x0A08 (Size: 0x10, Type: ArrayProperty)
    float LastPropImpactImpulseTime; // 0x0A18 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000E[0x4]; // 0x0A1C
    TArray<void*> PredictedDestroyedBuildings; // 0x0A20 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WallsVehicleCanDestroy; // 0x0A30 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WallsVehicleCannotDestroyWhenBoosting; // 0x0A40 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuildingPropClassesVehicleCanDestroy; // 0x0A50 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuildingPropClassesVehicleCannotDestroyWhenBoosting; // 0x0A60 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SeatInputProviders; // 0x0A70 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EmptyDriverInputState[0x40]; // 0x0A80 (Size: 0x40, Type: StructProperty)
    std::uint8_t AverageSpringNormal[0x18]; // 0x0AC0 (Size: 0x18, Type: StructProperty)
    float TopSpeedCurrentMultiplier; // 0x0AD8 (Size: 0x4, Type: FloatProperty)
    float PushForceCurrentMultiplier; // 0x0ADC (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastStickInput[0x20]; // 0x0AE0 (Size: 0x20, Type: StructProperty)
    float SteeringAngle; // 0x0B00 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x1C]; // 0x0B04
    std::int32_t CurrentGearIdx; // 0x0B20 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0010[0x4]; // 0x0B24
    float FrontLateralFrictionRuntimeMultiplier; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    float RearLateralFrictionRuntimeMultiplier; // 0x0B2C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocalRearFrictionPt[0x18]; // 0x0B30 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalFrontFrictionPt[0x18]; // 0x0B48 (Size: 0x18, Type: StructProperty)
    float FrontMassRatio; // 0x0B60 (Size: 0x4, Type: FloatProperty)
    float RearMassRatio; // 0x0B64 (Size: 0x4, Type: FloatProperty)
    float TimeBetweenLandscapeDamageEvents; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0011[0x24]; // 0x0B6C
    float TotalBrakingDelta; // 0x0B90 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0012[0x69]; // 0x0B94
    std::uint8_t PrimarySurfaceType; // 0x0BFD (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeaponResponseType; // 0x0BFE (Size: 0x1, Type: ByteProperty)
    std::uint8_t VTDMode; // 0x0BFF (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0013[0x3]; // 0x0C00
    std::uint8_t SurfaceTypeVehicleOn; // 0x0C03 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0014[0x14]; // 0x0C04
    std::int32_t ForcedMaterialVariantIndex; // 0x0C18 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0015[0x4]; // 0x0C1C
    std::uint8_t FuelCharge[0xD8]; // 0x0C20 (Size: 0xD8, Type: StructProperty)
    FMulticastInlineDelegate OnRechargeableFuelAboveThreshold; // 0x0CF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRechargeableFuelBelowThreshold; // 0x0D08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOutOfRechargeableFuel; // 0x0D18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNotOutOfRechargeableFuel; // 0x0D28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMountedWeaponFiredEvent; // 0x0D38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0016[0x4]; // 0x0D48
    float SeatSwitchCooldown; // 0x0D4C (Size: 0x4, Type: FloatProperty)
    std::uint8_t VehicleTags[0x20]; // 0x0D50 (Size: 0x20, Type: StructProperty)
    TArray<void*> Springs; // 0x0D70 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GroundTriangle[0x10]; // 0x0D80 (Size: 0x10, Type: StructProperty)
    TArray<void*> Gears; // 0x0D90 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SprintGears; // 0x0DA0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReverseGears; // 0x0DB0 (Size: 0x10, Type: ArrayProperty)
    float ForwardDrivingAntiGravityScaler; // 0x0DC0 (Size: 0x4, Type: FloatProperty)
    float CameraSpaceForwardDistanceOffset; // 0x0DC4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0017[0x4]; // 0x0DC8
    float CameraAssistStrength; // 0x0DCC (Size: 0x4, Type: FloatProperty)
    float CameraAssistRampUp; // 0x0DD0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowAutoCamera; // 0x0DD4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0018[0x3]; // 0x0DD5
    float TimeToAutoCamera; // 0x0DD8 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForAutoCamera; // 0x0DDC (Size: 0x4, Type: FloatProperty)
    float CameraAssistBaseHeight; // 0x0DE0 (Size: 0x4, Type: FloatProperty)
    float CameraAssistUpHillScaler; // 0x0DE4 (Size: 0x4, Type: FloatProperty)
    float CameraAssistSteerScaler; // 0x0DE8 (Size: 0x4, Type: FloatProperty)
    float CameraAssistForwardScale; // 0x0DEC (Size: 0x4, Type: FloatProperty)
    float AngleDegreesThresholdFromCurrentCameraToTarget; // 0x0DF0 (Size: 0x4, Type: FloatProperty)
    float CameraFOVOffset; // 0x0DF4 (Size: 0x4, Type: FloatProperty)
    void* TetheredCamera; // 0x0DF8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0019[0x30]; // 0x0E00
    void* PlayerCollisionGameplayEffect; // 0x0E30 (Size: 0x8, Type: ClassProperty)
    void* OverlapComponent; // 0x0E38 (Size: 0x8, Type: ObjectProperty)
    void* WaterOverlapComponent; // 0x0E40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedOverlapVolumeShape[0x3C]; // 0x0E48 (Size: 0x3C, Type: OptionalProperty)
    float WaterLevel; // 0x0E84 (Size: 0x4, Type: FloatProperty)
    std::int32_t WaterOverlapCount; // 0x0E88 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_001A[0x4]; // 0x0E8C
    float VehicleMinHorSpeedToDamage; // 0x0E90 (Size: 0x4, Type: FloatProperty)
    float VehicleMaxHorSpeedToDamage; // 0x0E94 (Size: 0x4, Type: FloatProperty)
    float VehicleMinHorSpeedDamage; // 0x0E98 (Size: 0x4, Type: FloatProperty)
    float VehicleMaxHorSpeedDamage; // 0x0E9C (Size: 0x4, Type: FloatProperty)
    float TargetingZOffset; // 0x0EA0 (Size: 0x4, Type: FloatProperty)
    float BrakeAboveTopSpeedDelta; // 0x0EA4 (Size: 0x4, Type: FloatProperty)
    float TimeToIdleBrake; // 0x0EA8 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient; // 0x0EAC (Size: 0x4, Type: FloatProperty)
    float PrimaryCameraPitchConstraint; // 0x0EB0 (Size: 0x4, Type: FloatProperty)
    float PrimaryCameraYawConstraint; // 0x0EB4 (Size: 0x4, Type: FloatProperty)
    float CachedSpeed; // 0x0EB8 (Size: 0x4, Type: FloatProperty)
    float CachedLocalSpeed; // 0x0EBC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedLocalVelocity[0x18]; // 0x0EC0 (Size: 0x18, Type: StructProperty)
    FName MainBodyCollision; // 0x0ED8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TestInitialLinearVelocity[0x18]; // 0x0EE0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TestInitialAngularVelocity[0x18]; // 0x0EF8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LookAheadHit[0xF8]; // 0x0F10 (Size: 0xF8, Type: StructProperty)
    void* TrickSet; // 0x1008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PushForceSocket[0x4]; // 0x1010 (Size: 0x4, Type: NameProperty)
    std::uint8_t FrontWheelsSocket[0x4]; // 0x1014 (Size: 0x4, Type: NameProperty)
    FName RearWheelSockets; // 0x1018 (Size: 0x8, Type: NameProperty)
    void* DefaultHitNotifyAudioBank; // 0x1020 (Size: 0x8, Type: ObjectProperty)
    void* SoundLibraryComponent; // 0x1028 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnHandleOutOfHealthDelegate; // 0x1030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHealthChanged; // 0x1040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_001B[0x18]; // 0x1050
    FMulticastInlineDelegate OnDamageablePartHealthChanged; // 0x1068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName BulletCollisionComponentTag; // 0x1078 (Size: 0x8, Type: NameProperty)
    void* GEDamagePassengersOnDeath; // 0x1080 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate OnVehicleSquadChanged; // 0x1088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSurfaceTypeVehicleIsOnChangedDelegate; // 0x1098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float LifespanAfterDeath; // 0x10A8 (Size: 0x4, Type: FloatProperty)
    float LifespanAfterForceDeath; // 0x10AC (Size: 0x4, Type: FloatProperty)
    float LastDamagedTime; // 0x10B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001C[0x4]; // 0x10B4
    TArray<void*> SeatTransitions; // 0x10B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_001D[0x30]; // 0x10C8
    FMulticastInlineDelegate OnVehicleEnteredWaterBody; // 0x10F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleExitedWaterBody; // 0x1108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t RuntimeModifiedProperties[0x18]; // 0x1118 (Size: 0x18, Type: StructProperty)
    TArray<void*> LocallyIgnoredBuildingActors; // 0x1130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PreviousBuildingQueryPosition[0x18]; // 0x1140 (Size: 0x18, Type: StructProperty)
    float ImpulseResponseMultiplier; // 0x1158 (Size: 0x4, Type: FloatProperty)
    float ImpulseResponseZBias; // 0x115C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001E[0x28]; // 0x1160
    std::uint8_t WaterSubmergedTimerHandle[0x28]; // 0x1188 (Size: 0x28, Type: StructProperty)
    void* EmoteAudioSourcePresetChain; // 0x11B0 (Size: 0x8, Type: ObjectProperty)
    void* EmoteAudioAttenuation; // 0x11B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MarkerDisplay[0xB0]; // 0x11C0 (Size: 0xB0, Type: StructProperty)
    void* StartupAbilitySet; // 0x1270 (Size: 0x8, Type: ObjectProperty)
    void* VehicleSeatComponent; // 0x1278 (Size: 0x8, Type: ObjectProperty)
    void* VehicleInteractionOverrideComponent; // 0x1280 (Size: 0x8, Type: ObjectProperty)
    void* SkyTubePhysicsComponent; // 0x1288 (Size: 0x8, Type: ObjectProperty)
    void* PontoonsComponent; // 0x1290 (Size: 0x8, Type: ObjectProperty)
    void* TrackableAIObjectComponent; // 0x1298 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlayerSlots; // 0x12A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerSlotsBackup; // 0x12B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerSlotsUnreplicated; // 0x12C0 (Size: 0x10, Type: ArrayProperty)
    void* VehicleMovementSet; // 0x12D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VehicleAttributes[0x20]; // 0x12D8 (Size: 0x20, Type: StructProperty)
    void* CachedVehiclePhysicsCollisionDamageComponent; // 0x12F8 (Size: 0x8, Type: ObjectProperty)
    void* CachedFuelComponent; // 0x1300 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ReasonsWhyCantContainPlayers; // 0x1308 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IgnoredBuildingActors; // 0x1318 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RecentlyHitActorsData; // 0x1328 (Size: 0x10, Type: ArrayProperty)
    std::uint64_t LastRecentlyHitActorsUpdateFrame; // 0x1338 (Size: 0x8, Type: UInt64Property)
    TArray<void*> RecentlyHitBuildingActorsData; // 0x1340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DamageableParts; // 0x1350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ToggledParts; // 0x1360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_001F[0x268]; // 0x1370
    std::uint8_t CorrectTargetOrientation[0x48]; // 0x15D8 (Size: 0x48, Type: StructProperty)
    void* CameraModeClass; // 0x1620 (Size: 0x8, Type: ClassProperty)
    void* DrivingAnimClass; // 0x1628 (Size: 0x8, Type: ClassProperty)
    void* DriverAnimLayerOverlayClass; // 0x1630 (Size: 0x8, Type: ClassProperty)
    void* PassengerAnimLayerOverlayClass; // 0x1638 (Size: 0x8, Type: ClassProperty)
    void* AnimSet; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0020[0xF8]; // 0x1648
    std::uint8_t AttributeInitKey[0x8]; // 0x1740 (Size: 0x8, Type: StructProperty)
    void* AbilitySystemComponent; // 0x1748 (Size: 0x8, Type: ObjectProperty)
    void* HealthSet; // 0x1750 (Size: 0x8, Type: ObjectProperty)
    void* ImpulseResponseSet; // 0x1758 (Size: 0x8, Type: ObjectProperty)
    void* DamageSet; // 0x1760 (Size: 0x8, Type: ObjectProperty)
    void* HealthBarIndicator; // 0x1768 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VehicleCosmeticInfo[0x48]; // 0x1770 (Size: 0x48, Type: StructProperty)
    void* NavModifierComponent; // 0x17B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldSleepAtSpawn; // 0x17C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnedSleepLockActive; // 0x17C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0021[0x2]; // 0x17C2
    std::uint32_t ForceKinematicOnClientCount; // 0x17C4 (Size: 0x4, Type: UInt32Property)
    void* ImpactInstigator; // 0x17C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0022[0x60]; // 0x17D0
    float NormalizedRPM; // 0x1830 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0023[0x4]; // 0x1834
    TArray<void*> CustomUI; // 0x1838 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VehicleEnhancedInputContextDriver; // 0x1848 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VehicleEnhancedInputContextPassenger; // 0x1858 (Size: 0x10, Type: ArrayProperty)
    void* InputActionMoveGamepad; // 0x1868 (Size: 0x8, Type: ObjectProperty)
    void* InputActionChangeSeat; // 0x1870 (Size: 0x8, Type: ObjectProperty)
    void* InputActionHonk; // 0x1878 (Size: 0x8, Type: ObjectProperty)
    void* InputActionBoost; // 0x1880 (Size: 0x8, Type: ObjectProperty)
    void* InputActionUseOrExit; // 0x1888 (Size: 0x8, Type: ObjectProperty)
    void* InputActionGamepadTriggerForward; // 0x1890 (Size: 0x8, Type: ObjectProperty)
    void* InputActionGamepadTriggerReverse; // 0x1898 (Size: 0x8, Type: ObjectProperty)
    void* MobileMoveForwardCurve; // 0x18A0 (Size: 0x8, Type: ObjectProperty)
    void* MobileMoveRightCurve; // 0x18A8 (Size: 0x8, Type: ObjectProperty)
    float MobileReversingAngle; // 0x18B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldConsumeTouchStickVector; // 0x18B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0024[0x3]; // 0x18B5
    TArray<void*> ActiveCustomUI; // 0x18B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MobileCustomUI; // 0x18C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0025[0x4]; // 0x18D8
    std::uint8_t AlwaysDamageVehiclesWithTag[0x4]; // 0x18DC (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate OnModAppliedOnClientDelegate; // 0x18E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t BaseTireInfo[0x1F0]; // 0x18F0 (Size: 0x1F0, Type: StructProperty)
    void* CurrentOverlapComponent; // 0x1AE0 (Size: 0x8, Type: ObjectProperty)
    void* VehicleConfigsClass; // 0x1AE8 (Size: 0x8, Type: ClassProperty)
    void* VehicleConfigsClass_BR; // 0x1AF0 (Size: 0x8, Type: ClassProperty)
    void* FortPhysicsVehicleConfigs; // 0x1AF8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bBoosting; // 0x1B00 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasBoostingEventStarted; // 0x1B01 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0026[0x2]; // 0x1B02
    float BoostEndTime; // 0x1B04 (Size: 0x4, Type: FloatProperty)
    FMulticastInlineDelegate OnBoostStartedDelegate; // 0x1B08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBoostRequestFailedDelegate; // 0x1B18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBoostFinishedDelegate; // 0x1B28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRechargeableBoostPercentChangedDelegate; // 0x1B38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRechargeableBoostFullDelegate; // 0x1B48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftStartedDelegate; // 0x1B58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDriftFinishedDelegate; // 0x1B68 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SoundIndicatorComponent; // 0x1B78 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldDealDamage; // 0x1B80 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0027[0x7]; // 0x1B81
    void* NativeComp_LowFuelSputter; // 0x1B88 (Size: 0x8, Type: ObjectProperty)
    void* NativeSys_LowFuelSputter; // 0x1B90 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnRefuelStartDelegate; // 0x1B98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRefuelStopDelegate; // 0x1BA8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRefueledFromEmptyDelegate; // 0x1BB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOutOfFuelDelegate; // 0x1BC8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFuelChangedDelegate; // 0x1BD8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLowFuelDelegate; // 0x1BE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t DebugDestroyLogCount; // 0x1BF8 (Size: 0x4, Type: IntProperty)
    float ServerCriticalHealth; // 0x1BFC (Size: 0x4, Type: FloatProperty)
    float HealthZeroTime; // 0x1C00 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExploded; // 0x1C04 (Size: 0x1, Type: BoolProperty)
    // 0x1C04 BoolProperty bOnFire (shared storage)
    // 0x1C04 BoolProperty bPendingDeath (shared storage)
    std::uint8_t Pad_0028[0x3]; // 0x1C05
    FMulticastInlineDelegate OnStartCriticalHealth; // 0x1C08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleExplodeDelegate; // 0x1C18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0029[0x18]; // 0x1C28
    std::uint8_t bOnRoad; // 0x1C40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnLandscape; // 0x1C41 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnDirt; // 0x1C42 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnGrass; // 0x1C43 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnIce; // 0x1C44 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnSnow; // 0x1C45 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnMud; // 0x1C46 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartedWithFullBoost; // 0x1C47 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnVehicle; // 0x1C48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_002A[0x7]; // 0x1C49
    TArray<void*> TireSurfaces; // 0x1C50 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnTirePoppedDelegate; // 0x1C60 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTireRepairedDelegate; // 0x1C70 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float LastPopTireTime; // 0x1C80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_002B[0x4]; // 0x1C84
    TArray<void*> TireStates; // 0x1C88 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnDisabledChangedDelegate; // 0x1C98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_002C[0x20]; // 0x1CA8
    FMulticastInlineDelegate OnRimScrapingChangedDelegate; // 0x1CC8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PlatformVelocityDirection[0x3C]; // 0x1CD8 (Size: 0x3C, Type: StructProperty)
    float RimScrapeDamageTimer; // 0x1D14 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_002D[0x20]; // 0x1D18
    std::uint8_t ExceptionsForClearFallDamageImmunityOnExitTagQuery[0x48]; // 0x1D38 (Size: 0x48, Type: StructProperty)
    std::uint8_t ActiveGameplayEffectGrantedTagsToForceRemove[0x78]; // 0x1D80 (Size: 0x78, Type: StructProperty)
    FMulticastInlineDelegate OnVehicleCosmeticsPartUpdatedDelegate; // 0x1DF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRefuelingCosmeticsStarted; // 0x1E08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRefuelingCosmeticsFinished; // 0x1E18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VehicleCosmeticsForceApplyDelegate; // 0x1E28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> CachedWheelFXInfos; // 0x1E38 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_002E[0x11]; // 0x1E48
    std::uint8_t bIsRefuelingCosmeticsActive; // 0x1E59 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_002F[0xBE]; // 0x1E5A
    TArray<void*> OwningSpawnerResolverScopes; // 0x1F18 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0030[0x30]; // 0x1F28
    TWeakObjectPtr<void> CachedVehicleSimStepsManager; // 0x1F58 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0031[0x8]; // 0x1F60
    TArray<void*> VehicleHudData; // 0x1F68 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSkydivePlayerOnVehicleExit; // 0x1F78 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0032[0x3]; // 0x1F79
    float HeightToBeginSkydive; // 0x1F7C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarGhostVehicle, VehicleContextTag) == 1424, "Offset mismatch for UFortDelMarGhostVehicle::VehicleContextTag");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleEventRouter) == 1432, "Offset mismatch for UFortDelMarGhostVehicle::VehicleEventRouter");
static_assert(offsetof(UFortDelMarGhostVehicle, OnActorRecentlyHit) == 1440, "Offset mismatch for UFortDelMarGhostVehicle::OnActorRecentlyHit");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleImpactDamageTag) == 1456, "Offset mismatch for UFortDelMarGhostVehicle::VehicleImpactDamageTag");
static_assert(offsetof(UFortDelMarGhostVehicle, NetPredictionProxy_AP) == 1464, "Offset mismatch for UFortDelMarGhostVehicle::NetPredictionProxy_AP");
static_assert(offsetof(UFortDelMarGhostVehicle, NetPredictionProxy_SP) == 1488, "Offset mismatch for UFortDelMarGhostVehicle::NetPredictionProxy_SP");
static_assert(offsetof(UFortDelMarGhostVehicle, OnScrapingSidesOrTopChangedDelegate) == 1512, "Offset mismatch for UFortDelMarGhostVehicle::OnScrapingSidesOrTopChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnCurrentGearChangedDelegate) == 1528, "Offset mismatch for UFortDelMarGhostVehicle::OnCurrentGearChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomOwnerName) == 1544, "Offset mismatch for UFortDelMarGhostVehicle::CustomOwnerName");
static_assert(offsetof(UFortDelMarGhostVehicle, DefaultOwnerName) == 1560, "Offset mismatch for UFortDelMarGhostVehicle::DefaultOwnerName");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomOwnerAccountId) == 1576, "Offset mismatch for UFortDelMarGhostVehicle::CustomOwnerAccountId");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomName) == 1624, "Offset mismatch for UFortDelMarGhostVehicle::CustomName");
static_assert(offsetof(UFortDelMarGhostVehicle, SoftOverrideItemWrap) == 1640, "Offset mismatch for UFortDelMarGhostVehicle::SoftOverrideItemWrap");
static_assert(offsetof(UFortDelMarGhostVehicle, OverrideItemWrap) == 1672, "Offset mismatch for UFortDelMarGhostVehicle::OverrideItemWrap");
static_assert(offsetof(UFortDelMarGhostVehicle, OnSpringCompressionDelegate) == 1680, "Offset mismatch for UFortDelMarGhostVehicle::OnSpringCompressionDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, PlayersBasedOnVehicle) == 1696, "Offset mismatch for UFortDelMarGhostVehicle::PlayersBasedOnVehicle");
static_assert(offsetof(UFortDelMarGhostVehicle, OnSleepStateChangedDelegate) == 1736, "Offset mismatch for UFortDelMarGhostVehicle::OnSleepStateChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, bUseDeprecatedSleepOnSpawn) == 1752, "Offset mismatch for UFortDelMarGhostVehicle::bUseDeprecatedSleepOnSpawn");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterSurfaceDataCache) == 1760, "Offset mismatch for UFortDelMarGhostVehicle::WaterSurfaceDataCache");
static_assert(offsetof(UFortDelMarGhostVehicle, LastDamageInstigator) == 1880, "Offset mismatch for UFortDelMarGhostVehicle::LastDamageInstigator");
static_assert(offsetof(UFortDelMarGhostVehicle, LastOutOfHealthInstigator) == 1888, "Offset mismatch for UFortDelMarGhostVehicle::LastOutOfHealthInstigator");
static_assert(offsetof(UFortDelMarGhostVehicle, LastOutOfHealthDamageCauser) == 1896, "Offset mismatch for UFortDelMarGhostVehicle::LastOutOfHealthDamageCauser");
static_assert(offsetof(UFortDelMarGhostVehicle, BoundsXYSplineComponent) == 2032, "Offset mismatch for UFortDelMarGhostVehicle::BoundsXYSplineComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, SkeletalMesh) == 2080, "Offset mismatch for UFortDelMarGhostVehicle::SkeletalMesh");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomDepthStencilValue) == 2100, "Offset mismatch for UFortDelMarGhostVehicle::CustomDepthStencilValue");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomDepthStencilValueForHighlightedVehicle) == 2104, "Offset mismatch for UFortDelMarGhostVehicle::CustomDepthStencilValueForHighlightedVehicle");
static_assert(offsetof(UFortDelMarGhostVehicle, SquadId) == 2108, "Offset mismatch for UFortDelMarGhostVehicle::SquadId");
static_assert(offsetof(UFortDelMarGhostVehicle, TeamId) == 2109, "Offset mismatch for UFortDelMarGhostVehicle::TeamId");
static_assert(offsetof(UFortDelMarGhostVehicle, InitialOverlapBehavior) == 2110, "Offset mismatch for UFortDelMarGhostVehicle::InitialOverlapBehavior");
static_assert(offsetof(UFortDelMarGhostVehicle, bDisableUpdateAutoRun) == 2136, "Offset mismatch for UFortDelMarGhostVehicle::bDisableUpdateAutoRun");
static_assert(offsetof(UFortDelMarGhostVehicle, bDestroyBuildingSMActorOnForceExit) == 2137, "Offset mismatch for UFortDelMarGhostVehicle::bDestroyBuildingSMActorOnForceExit");
static_assert(offsetof(UFortDelMarGhostVehicle, bForceDeath) == 2138, "Offset mismatch for UFortDelMarGhostVehicle::bForceDeath");
static_assert(offsetof(UFortDelMarGhostVehicle, bCanCoastOnIncline) == 2139, "Offset mismatch for UFortDelMarGhostVehicle::bCanCoastOnIncline");
static_assert(offsetof(UFortDelMarGhostVehicle, bAnyWheelsOnGround) == 2140, "Offset mismatch for UFortDelMarGhostVehicle::bAnyWheelsOnGround");
static_assert(offsetof(UFortDelMarGhostVehicle, bUseGravity) == 2143, "Offset mismatch for UFortDelMarGhostVehicle::bUseGravity");
static_assert(offsetof(UFortDelMarGhostVehicle, bAllowInteractBetweenFortVolumes) == 2144, "Offset mismatch for UFortDelMarGhostVehicle::bAllowInteractBetweenFortVolumes");
static_assert(offsetof(UFortDelMarGhostVehicle, bEnforceMinigameClassRestriction) == 2145, "Offset mismatch for UFortDelMarGhostVehicle::bEnforceMinigameClassRestriction");
static_assert(offsetof(UFortDelMarGhostVehicle, bAllowPassengerInteractions) == 2146, "Offset mismatch for UFortDelMarGhostVehicle::bAllowPassengerInteractions");
static_assert(offsetof(UFortDelMarGhostVehicle, MinigameClassID) == 2176, "Offset mismatch for UFortDelMarGhostVehicle::MinigameClassID");
static_assert(offsetof(UFortDelMarGhostVehicle, OnPawnEnteredVehicleAtSeat) == 2184, "Offset mismatch for UFortDelMarGhostVehicle::OnPawnEnteredVehicleAtSeat");
static_assert(offsetof(UFortDelMarGhostVehicle, OnPawnEnteredVehicleSeat) == 2200, "Offset mismatch for UFortDelMarGhostVehicle::OnPawnEnteredVehicleSeat");
static_assert(offsetof(UFortDelMarGhostVehicle, OnPawnExitedVehicleSeat) == 2216, "Offset mismatch for UFortDelMarGhostVehicle::OnPawnExitedVehicleSeat");
static_assert(offsetof(UFortDelMarGhostVehicle, OnPawnExitedVehicleFromSeat) == 2232, "Offset mismatch for UFortDelMarGhostVehicle::OnPawnExitedVehicleFromSeat");
static_assert(offsetof(UFortDelMarGhostVehicle, OnPawnFinishEnteringVehicle) == 2248, "Offset mismatch for UFortDelMarGhostVehicle::OnPawnFinishEnteringVehicle");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleHornEvent) == 2264, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleHornEvent");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleOwnerChanged) == 2280, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleOwnerChanged");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleSignificanceRecentlyRenderedChanged) == 2296, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleSignificanceRecentlyRenderedChanged");
static_assert(offsetof(UFortDelMarGhostVehicle, bAttemptAsyncOrientationCorrection) == 2336, "Offset mismatch for UFortDelMarGhostVehicle::bAttemptAsyncOrientationCorrection");
static_assert(offsetof(UFortDelMarGhostVehicle, bAllowInteractBetweenFortVolumes_Runtime) == 2337, "Offset mismatch for UFortDelMarGhostVehicle::bAllowInteractBetweenFortVolumes_Runtime");
static_assert(offsetof(UFortDelMarGhostVehicle, FireDamageTickTimer) == 2344, "Offset mismatch for UFortDelMarGhostVehicle::FireDamageTickTimer");
static_assert(offsetof(UFortDelMarGhostVehicle, CurrentFOV) == 2348, "Offset mismatch for UFortDelMarGhostVehicle::CurrentFOV");
static_assert(offsetof(UFortDelMarGhostVehicle, FireEnvDamageTags) == 2352, "Offset mismatch for UFortDelMarGhostVehicle::FireEnvDamageTags");
static_assert(offsetof(UFortDelMarGhostVehicle, PawnIgnoreBumpTags) == 2384, "Offset mismatch for UFortDelMarGhostVehicle::PawnIgnoreBumpTags");
static_assert(offsetof(UFortDelMarGhostVehicle, DriverReticleBrush) == 2416, "Offset mismatch for UFortDelMarGhostVehicle::DriverReticleBrush");
static_assert(offsetof(UFortDelMarGhostVehicle, AppliedVehicleModTags) == 2424, "Offset mismatch for UFortDelMarGhostVehicle::AppliedVehicleModTags");
static_assert(offsetof(UFortDelMarGhostVehicle, CollectedVehicleModData) == 2456, "Offset mismatch for UFortDelMarGhostVehicle::CollectedVehicleModData");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterEffectsVehicleMaxSpeedKmh) == 2472, "Offset mismatch for UFortDelMarGhostVehicle::WaterEffectsVehicleMaxSpeedKmh");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterEffectsAsset) == 2480, "Offset mismatch for UFortDelMarGhostVehicle::WaterEffectsAsset");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterEffectsComponent) == 2488, "Offset mismatch for UFortDelMarGhostVehicle::WaterEffectsComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, GameplayTags) == 2504, "Offset mismatch for UFortDelMarGhostVehicle::GameplayTags");
static_assert(offsetof(UFortDelMarGhostVehicle, PawnsToIgnoreForDamge) == 2536, "Offset mismatch for UFortDelMarGhostVehicle::PawnsToIgnoreForDamge");
static_assert(offsetof(UFortDelMarGhostVehicle, PawnsToIgnoreForCollision) == 2552, "Offset mismatch for UFortDelMarGhostVehicle::PawnsToIgnoreForCollision");
static_assert(offsetof(UFortDelMarGhostVehicle, IgnoredPawnsPendingTeleport) == 2568, "Offset mismatch for UFortDelMarGhostVehicle::IgnoredPawnsPendingTeleport");
static_assert(offsetof(UFortDelMarGhostVehicle, LastPropImpactImpulseTime) == 2584, "Offset mismatch for UFortDelMarGhostVehicle::LastPropImpactImpulseTime");
static_assert(offsetof(UFortDelMarGhostVehicle, PredictedDestroyedBuildings) == 2592, "Offset mismatch for UFortDelMarGhostVehicle::PredictedDestroyedBuildings");
static_assert(offsetof(UFortDelMarGhostVehicle, WallsVehicleCanDestroy) == 2608, "Offset mismatch for UFortDelMarGhostVehicle::WallsVehicleCanDestroy");
static_assert(offsetof(UFortDelMarGhostVehicle, WallsVehicleCannotDestroyWhenBoosting) == 2624, "Offset mismatch for UFortDelMarGhostVehicle::WallsVehicleCannotDestroyWhenBoosting");
static_assert(offsetof(UFortDelMarGhostVehicle, BuildingPropClassesVehicleCanDestroy) == 2640, "Offset mismatch for UFortDelMarGhostVehicle::BuildingPropClassesVehicleCanDestroy");
static_assert(offsetof(UFortDelMarGhostVehicle, BuildingPropClassesVehicleCannotDestroyWhenBoosting) == 2656, "Offset mismatch for UFortDelMarGhostVehicle::BuildingPropClassesVehicleCannotDestroyWhenBoosting");
static_assert(offsetof(UFortDelMarGhostVehicle, SeatInputProviders) == 2672, "Offset mismatch for UFortDelMarGhostVehicle::SeatInputProviders");
static_assert(offsetof(UFortDelMarGhostVehicle, EmptyDriverInputState) == 2688, "Offset mismatch for UFortDelMarGhostVehicle::EmptyDriverInputState");
static_assert(offsetof(UFortDelMarGhostVehicle, AverageSpringNormal) == 2752, "Offset mismatch for UFortDelMarGhostVehicle::AverageSpringNormal");
static_assert(offsetof(UFortDelMarGhostVehicle, TopSpeedCurrentMultiplier) == 2776, "Offset mismatch for UFortDelMarGhostVehicle::TopSpeedCurrentMultiplier");
static_assert(offsetof(UFortDelMarGhostVehicle, PushForceCurrentMultiplier) == 2780, "Offset mismatch for UFortDelMarGhostVehicle::PushForceCurrentMultiplier");
static_assert(offsetof(UFortDelMarGhostVehicle, LastStickInput) == 2784, "Offset mismatch for UFortDelMarGhostVehicle::LastStickInput");
static_assert(offsetof(UFortDelMarGhostVehicle, SteeringAngle) == 2816, "Offset mismatch for UFortDelMarGhostVehicle::SteeringAngle");
static_assert(offsetof(UFortDelMarGhostVehicle, CurrentGearIdx) == 2848, "Offset mismatch for UFortDelMarGhostVehicle::CurrentGearIdx");
static_assert(offsetof(UFortDelMarGhostVehicle, FrontLateralFrictionRuntimeMultiplier) == 2856, "Offset mismatch for UFortDelMarGhostVehicle::FrontLateralFrictionRuntimeMultiplier");
static_assert(offsetof(UFortDelMarGhostVehicle, RearLateralFrictionRuntimeMultiplier) == 2860, "Offset mismatch for UFortDelMarGhostVehicle::RearLateralFrictionRuntimeMultiplier");
static_assert(offsetof(UFortDelMarGhostVehicle, LocalRearFrictionPt) == 2864, "Offset mismatch for UFortDelMarGhostVehicle::LocalRearFrictionPt");
static_assert(offsetof(UFortDelMarGhostVehicle, LocalFrontFrictionPt) == 2888, "Offset mismatch for UFortDelMarGhostVehicle::LocalFrontFrictionPt");
static_assert(offsetof(UFortDelMarGhostVehicle, FrontMassRatio) == 2912, "Offset mismatch for UFortDelMarGhostVehicle::FrontMassRatio");
static_assert(offsetof(UFortDelMarGhostVehicle, RearMassRatio) == 2916, "Offset mismatch for UFortDelMarGhostVehicle::RearMassRatio");
static_assert(offsetof(UFortDelMarGhostVehicle, TimeBetweenLandscapeDamageEvents) == 2920, "Offset mismatch for UFortDelMarGhostVehicle::TimeBetweenLandscapeDamageEvents");
static_assert(offsetof(UFortDelMarGhostVehicle, TotalBrakingDelta) == 2960, "Offset mismatch for UFortDelMarGhostVehicle::TotalBrakingDelta");
static_assert(offsetof(UFortDelMarGhostVehicle, PrimarySurfaceType) == 3069, "Offset mismatch for UFortDelMarGhostVehicle::PrimarySurfaceType");
static_assert(offsetof(UFortDelMarGhostVehicle, WeaponResponseType) == 3070, "Offset mismatch for UFortDelMarGhostVehicle::WeaponResponseType");
static_assert(offsetof(UFortDelMarGhostVehicle, VTDMode) == 3071, "Offset mismatch for UFortDelMarGhostVehicle::VTDMode");
static_assert(offsetof(UFortDelMarGhostVehicle, SurfaceTypeVehicleOn) == 3075, "Offset mismatch for UFortDelMarGhostVehicle::SurfaceTypeVehicleOn");
static_assert(offsetof(UFortDelMarGhostVehicle, ForcedMaterialVariantIndex) == 3096, "Offset mismatch for UFortDelMarGhostVehicle::ForcedMaterialVariantIndex");
static_assert(offsetof(UFortDelMarGhostVehicle, FuelCharge) == 3104, "Offset mismatch for UFortDelMarGhostVehicle::FuelCharge");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRechargeableFuelAboveThreshold) == 3320, "Offset mismatch for UFortDelMarGhostVehicle::OnRechargeableFuelAboveThreshold");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRechargeableFuelBelowThreshold) == 3336, "Offset mismatch for UFortDelMarGhostVehicle::OnRechargeableFuelBelowThreshold");
static_assert(offsetof(UFortDelMarGhostVehicle, OnOutOfRechargeableFuel) == 3352, "Offset mismatch for UFortDelMarGhostVehicle::OnOutOfRechargeableFuel");
static_assert(offsetof(UFortDelMarGhostVehicle, OnNotOutOfRechargeableFuel) == 3368, "Offset mismatch for UFortDelMarGhostVehicle::OnNotOutOfRechargeableFuel");
static_assert(offsetof(UFortDelMarGhostVehicle, OnMountedWeaponFiredEvent) == 3384, "Offset mismatch for UFortDelMarGhostVehicle::OnMountedWeaponFiredEvent");
static_assert(offsetof(UFortDelMarGhostVehicle, SeatSwitchCooldown) == 3404, "Offset mismatch for UFortDelMarGhostVehicle::SeatSwitchCooldown");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleTags) == 3408, "Offset mismatch for UFortDelMarGhostVehicle::VehicleTags");
static_assert(offsetof(UFortDelMarGhostVehicle, Springs) == 3440, "Offset mismatch for UFortDelMarGhostVehicle::Springs");
static_assert(offsetof(UFortDelMarGhostVehicle, GroundTriangle) == 3456, "Offset mismatch for UFortDelMarGhostVehicle::GroundTriangle");
static_assert(offsetof(UFortDelMarGhostVehicle, Gears) == 3472, "Offset mismatch for UFortDelMarGhostVehicle::Gears");
static_assert(offsetof(UFortDelMarGhostVehicle, SprintGears) == 3488, "Offset mismatch for UFortDelMarGhostVehicle::SprintGears");
static_assert(offsetof(UFortDelMarGhostVehicle, ReverseGears) == 3504, "Offset mismatch for UFortDelMarGhostVehicle::ReverseGears");
static_assert(offsetof(UFortDelMarGhostVehicle, ForwardDrivingAntiGravityScaler) == 3520, "Offset mismatch for UFortDelMarGhostVehicle::ForwardDrivingAntiGravityScaler");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraSpaceForwardDistanceOffset) == 3524, "Offset mismatch for UFortDelMarGhostVehicle::CameraSpaceForwardDistanceOffset");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistStrength) == 3532, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistStrength");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistRampUp) == 3536, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistRampUp");
static_assert(offsetof(UFortDelMarGhostVehicle, bAllowAutoCamera) == 3540, "Offset mismatch for UFortDelMarGhostVehicle::bAllowAutoCamera");
static_assert(offsetof(UFortDelMarGhostVehicle, TimeToAutoCamera) == 3544, "Offset mismatch for UFortDelMarGhostVehicle::TimeToAutoCamera");
static_assert(offsetof(UFortDelMarGhostVehicle, MinSpeedForAutoCamera) == 3548, "Offset mismatch for UFortDelMarGhostVehicle::MinSpeedForAutoCamera");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistBaseHeight) == 3552, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistBaseHeight");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistUpHillScaler) == 3556, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistUpHillScaler");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistSteerScaler) == 3560, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistSteerScaler");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraAssistForwardScale) == 3564, "Offset mismatch for UFortDelMarGhostVehicle::CameraAssistForwardScale");
static_assert(offsetof(UFortDelMarGhostVehicle, AngleDegreesThresholdFromCurrentCameraToTarget) == 3568, "Offset mismatch for UFortDelMarGhostVehicle::AngleDegreesThresholdFromCurrentCameraToTarget");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraFOVOffset) == 3572, "Offset mismatch for UFortDelMarGhostVehicle::CameraFOVOffset");
static_assert(offsetof(UFortDelMarGhostVehicle, TetheredCamera) == 3576, "Offset mismatch for UFortDelMarGhostVehicle::TetheredCamera");
static_assert(offsetof(UFortDelMarGhostVehicle, PlayerCollisionGameplayEffect) == 3632, "Offset mismatch for UFortDelMarGhostVehicle::PlayerCollisionGameplayEffect");
static_assert(offsetof(UFortDelMarGhostVehicle, OverlapComponent) == 3640, "Offset mismatch for UFortDelMarGhostVehicle::OverlapComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterOverlapComponent) == 3648, "Offset mismatch for UFortDelMarGhostVehicle::WaterOverlapComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedOverlapVolumeShape) == 3656, "Offset mismatch for UFortDelMarGhostVehicle::CachedOverlapVolumeShape");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterLevel) == 3716, "Offset mismatch for UFortDelMarGhostVehicle::WaterLevel");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterOverlapCount) == 3720, "Offset mismatch for UFortDelMarGhostVehicle::WaterOverlapCount");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleMinHorSpeedToDamage) == 3728, "Offset mismatch for UFortDelMarGhostVehicle::VehicleMinHorSpeedToDamage");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleMaxHorSpeedToDamage) == 3732, "Offset mismatch for UFortDelMarGhostVehicle::VehicleMaxHorSpeedToDamage");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleMinHorSpeedDamage) == 3736, "Offset mismatch for UFortDelMarGhostVehicle::VehicleMinHorSpeedDamage");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleMaxHorSpeedDamage) == 3740, "Offset mismatch for UFortDelMarGhostVehicle::VehicleMaxHorSpeedDamage");
static_assert(offsetof(UFortDelMarGhostVehicle, TargetingZOffset) == 3744, "Offset mismatch for UFortDelMarGhostVehicle::TargetingZOffset");
static_assert(offsetof(UFortDelMarGhostVehicle, BrakeAboveTopSpeedDelta) == 3748, "Offset mismatch for UFortDelMarGhostVehicle::BrakeAboveTopSpeedDelta");
static_assert(offsetof(UFortDelMarGhostVehicle, TimeToIdleBrake) == 3752, "Offset mismatch for UFortDelMarGhostVehicle::TimeToIdleBrake");
static_assert(offsetof(UFortDelMarGhostVehicle, DragCoefficient) == 3756, "Offset mismatch for UFortDelMarGhostVehicle::DragCoefficient");
static_assert(offsetof(UFortDelMarGhostVehicle, PrimaryCameraPitchConstraint) == 3760, "Offset mismatch for UFortDelMarGhostVehicle::PrimaryCameraPitchConstraint");
static_assert(offsetof(UFortDelMarGhostVehicle, PrimaryCameraYawConstraint) == 3764, "Offset mismatch for UFortDelMarGhostVehicle::PrimaryCameraYawConstraint");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedSpeed) == 3768, "Offset mismatch for UFortDelMarGhostVehicle::CachedSpeed");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedLocalSpeed) == 3772, "Offset mismatch for UFortDelMarGhostVehicle::CachedLocalSpeed");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedLocalVelocity) == 3776, "Offset mismatch for UFortDelMarGhostVehicle::CachedLocalVelocity");
static_assert(offsetof(UFortDelMarGhostVehicle, MainBodyCollision) == 3800, "Offset mismatch for UFortDelMarGhostVehicle::MainBodyCollision");
static_assert(offsetof(UFortDelMarGhostVehicle, TestInitialLinearVelocity) == 3808, "Offset mismatch for UFortDelMarGhostVehicle::TestInitialLinearVelocity");
static_assert(offsetof(UFortDelMarGhostVehicle, TestInitialAngularVelocity) == 3832, "Offset mismatch for UFortDelMarGhostVehicle::TestInitialAngularVelocity");
static_assert(offsetof(UFortDelMarGhostVehicle, LookAheadHit) == 3856, "Offset mismatch for UFortDelMarGhostVehicle::LookAheadHit");
static_assert(offsetof(UFortDelMarGhostVehicle, TrickSet) == 4104, "Offset mismatch for UFortDelMarGhostVehicle::TrickSet");
static_assert(offsetof(UFortDelMarGhostVehicle, PushForceSocket) == 4112, "Offset mismatch for UFortDelMarGhostVehicle::PushForceSocket");
static_assert(offsetof(UFortDelMarGhostVehicle, FrontWheelsSocket) == 4116, "Offset mismatch for UFortDelMarGhostVehicle::FrontWheelsSocket");
static_assert(offsetof(UFortDelMarGhostVehicle, RearWheelSockets) == 4120, "Offset mismatch for UFortDelMarGhostVehicle::RearWheelSockets");
static_assert(offsetof(UFortDelMarGhostVehicle, DefaultHitNotifyAudioBank) == 4128, "Offset mismatch for UFortDelMarGhostVehicle::DefaultHitNotifyAudioBank");
static_assert(offsetof(UFortDelMarGhostVehicle, SoundLibraryComponent) == 4136, "Offset mismatch for UFortDelMarGhostVehicle::SoundLibraryComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, OnHandleOutOfHealthDelegate) == 4144, "Offset mismatch for UFortDelMarGhostVehicle::OnHandleOutOfHealthDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnHealthChanged) == 4160, "Offset mismatch for UFortDelMarGhostVehicle::OnHealthChanged");
static_assert(offsetof(UFortDelMarGhostVehicle, OnDamageablePartHealthChanged) == 4200, "Offset mismatch for UFortDelMarGhostVehicle::OnDamageablePartHealthChanged");
static_assert(offsetof(UFortDelMarGhostVehicle, BulletCollisionComponentTag) == 4216, "Offset mismatch for UFortDelMarGhostVehicle::BulletCollisionComponentTag");
static_assert(offsetof(UFortDelMarGhostVehicle, GEDamagePassengersOnDeath) == 4224, "Offset mismatch for UFortDelMarGhostVehicle::GEDamagePassengersOnDeath");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleSquadChanged) == 4232, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleSquadChanged");
static_assert(offsetof(UFortDelMarGhostVehicle, OnSurfaceTypeVehicleIsOnChangedDelegate) == 4248, "Offset mismatch for UFortDelMarGhostVehicle::OnSurfaceTypeVehicleIsOnChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, LifespanAfterDeath) == 4264, "Offset mismatch for UFortDelMarGhostVehicle::LifespanAfterDeath");
static_assert(offsetof(UFortDelMarGhostVehicle, LifespanAfterForceDeath) == 4268, "Offset mismatch for UFortDelMarGhostVehicle::LifespanAfterForceDeath");
static_assert(offsetof(UFortDelMarGhostVehicle, LastDamagedTime) == 4272, "Offset mismatch for UFortDelMarGhostVehicle::LastDamagedTime");
static_assert(offsetof(UFortDelMarGhostVehicle, SeatTransitions) == 4280, "Offset mismatch for UFortDelMarGhostVehicle::SeatTransitions");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleEnteredWaterBody) == 4344, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleEnteredWaterBody");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleExitedWaterBody) == 4360, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleExitedWaterBody");
static_assert(offsetof(UFortDelMarGhostVehicle, RuntimeModifiedProperties) == 4376, "Offset mismatch for UFortDelMarGhostVehicle::RuntimeModifiedProperties");
static_assert(offsetof(UFortDelMarGhostVehicle, LocallyIgnoredBuildingActors) == 4400, "Offset mismatch for UFortDelMarGhostVehicle::LocallyIgnoredBuildingActors");
static_assert(offsetof(UFortDelMarGhostVehicle, PreviousBuildingQueryPosition) == 4416, "Offset mismatch for UFortDelMarGhostVehicle::PreviousBuildingQueryPosition");
static_assert(offsetof(UFortDelMarGhostVehicle, ImpulseResponseMultiplier) == 4440, "Offset mismatch for UFortDelMarGhostVehicle::ImpulseResponseMultiplier");
static_assert(offsetof(UFortDelMarGhostVehicle, ImpulseResponseZBias) == 4444, "Offset mismatch for UFortDelMarGhostVehicle::ImpulseResponseZBias");
static_assert(offsetof(UFortDelMarGhostVehicle, WaterSubmergedTimerHandle) == 4488, "Offset mismatch for UFortDelMarGhostVehicle::WaterSubmergedTimerHandle");
static_assert(offsetof(UFortDelMarGhostVehicle, EmoteAudioSourcePresetChain) == 4528, "Offset mismatch for UFortDelMarGhostVehicle::EmoteAudioSourcePresetChain");
static_assert(offsetof(UFortDelMarGhostVehicle, EmoteAudioAttenuation) == 4536, "Offset mismatch for UFortDelMarGhostVehicle::EmoteAudioAttenuation");
static_assert(offsetof(UFortDelMarGhostVehicle, MarkerDisplay) == 4544, "Offset mismatch for UFortDelMarGhostVehicle::MarkerDisplay");
static_assert(offsetof(UFortDelMarGhostVehicle, StartupAbilitySet) == 4720, "Offset mismatch for UFortDelMarGhostVehicle::StartupAbilitySet");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleSeatComponent) == 4728, "Offset mismatch for UFortDelMarGhostVehicle::VehicleSeatComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleInteractionOverrideComponent) == 4736, "Offset mismatch for UFortDelMarGhostVehicle::VehicleInteractionOverrideComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, SkyTubePhysicsComponent) == 4744, "Offset mismatch for UFortDelMarGhostVehicle::SkyTubePhysicsComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, PontoonsComponent) == 4752, "Offset mismatch for UFortDelMarGhostVehicle::PontoonsComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, TrackableAIObjectComponent) == 4760, "Offset mismatch for UFortDelMarGhostVehicle::TrackableAIObjectComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, PlayerSlots) == 4768, "Offset mismatch for UFortDelMarGhostVehicle::PlayerSlots");
static_assert(offsetof(UFortDelMarGhostVehicle, PlayerSlotsBackup) == 4784, "Offset mismatch for UFortDelMarGhostVehicle::PlayerSlotsBackup");
static_assert(offsetof(UFortDelMarGhostVehicle, PlayerSlotsUnreplicated) == 4800, "Offset mismatch for UFortDelMarGhostVehicle::PlayerSlotsUnreplicated");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleMovementSet) == 4816, "Offset mismatch for UFortDelMarGhostVehicle::VehicleMovementSet");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleAttributes) == 4824, "Offset mismatch for UFortDelMarGhostVehicle::VehicleAttributes");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedVehiclePhysicsCollisionDamageComponent) == 4856, "Offset mismatch for UFortDelMarGhostVehicle::CachedVehiclePhysicsCollisionDamageComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedFuelComponent) == 4864, "Offset mismatch for UFortDelMarGhostVehicle::CachedFuelComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, ReasonsWhyCantContainPlayers) == 4872, "Offset mismatch for UFortDelMarGhostVehicle::ReasonsWhyCantContainPlayers");
static_assert(offsetof(UFortDelMarGhostVehicle, IgnoredBuildingActors) == 4888, "Offset mismatch for UFortDelMarGhostVehicle::IgnoredBuildingActors");
static_assert(offsetof(UFortDelMarGhostVehicle, RecentlyHitActorsData) == 4904, "Offset mismatch for UFortDelMarGhostVehicle::RecentlyHitActorsData");
static_assert(offsetof(UFortDelMarGhostVehicle, LastRecentlyHitActorsUpdateFrame) == 4920, "Offset mismatch for UFortDelMarGhostVehicle::LastRecentlyHitActorsUpdateFrame");
static_assert(offsetof(UFortDelMarGhostVehicle, RecentlyHitBuildingActorsData) == 4928, "Offset mismatch for UFortDelMarGhostVehicle::RecentlyHitBuildingActorsData");
static_assert(offsetof(UFortDelMarGhostVehicle, DamageableParts) == 4944, "Offset mismatch for UFortDelMarGhostVehicle::DamageableParts");
static_assert(offsetof(UFortDelMarGhostVehicle, ToggledParts) == 4960, "Offset mismatch for UFortDelMarGhostVehicle::ToggledParts");
static_assert(offsetof(UFortDelMarGhostVehicle, CorrectTargetOrientation) == 5592, "Offset mismatch for UFortDelMarGhostVehicle::CorrectTargetOrientation");
static_assert(offsetof(UFortDelMarGhostVehicle, CameraModeClass) == 5664, "Offset mismatch for UFortDelMarGhostVehicle::CameraModeClass");
static_assert(offsetof(UFortDelMarGhostVehicle, DrivingAnimClass) == 5672, "Offset mismatch for UFortDelMarGhostVehicle::DrivingAnimClass");
static_assert(offsetof(UFortDelMarGhostVehicle, DriverAnimLayerOverlayClass) == 5680, "Offset mismatch for UFortDelMarGhostVehicle::DriverAnimLayerOverlayClass");
static_assert(offsetof(UFortDelMarGhostVehicle, PassengerAnimLayerOverlayClass) == 5688, "Offset mismatch for UFortDelMarGhostVehicle::PassengerAnimLayerOverlayClass");
static_assert(offsetof(UFortDelMarGhostVehicle, AnimSet) == 5696, "Offset mismatch for UFortDelMarGhostVehicle::AnimSet");
static_assert(offsetof(UFortDelMarGhostVehicle, AttributeInitKey) == 5952, "Offset mismatch for UFortDelMarGhostVehicle::AttributeInitKey");
static_assert(offsetof(UFortDelMarGhostVehicle, AbilitySystemComponent) == 5960, "Offset mismatch for UFortDelMarGhostVehicle::AbilitySystemComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, HealthSet) == 5968, "Offset mismatch for UFortDelMarGhostVehicle::HealthSet");
static_assert(offsetof(UFortDelMarGhostVehicle, ImpulseResponseSet) == 5976, "Offset mismatch for UFortDelMarGhostVehicle::ImpulseResponseSet");
static_assert(offsetof(UFortDelMarGhostVehicle, DamageSet) == 5984, "Offset mismatch for UFortDelMarGhostVehicle::DamageSet");
static_assert(offsetof(UFortDelMarGhostVehicle, HealthBarIndicator) == 5992, "Offset mismatch for UFortDelMarGhostVehicle::HealthBarIndicator");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleCosmeticInfo) == 6000, "Offset mismatch for UFortDelMarGhostVehicle::VehicleCosmeticInfo");
static_assert(offsetof(UFortDelMarGhostVehicle, NavModifierComponent) == 6072, "Offset mismatch for UFortDelMarGhostVehicle::NavModifierComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, bShouldSleepAtSpawn) == 6080, "Offset mismatch for UFortDelMarGhostVehicle::bShouldSleepAtSpawn");
static_assert(offsetof(UFortDelMarGhostVehicle, bSpawnedSleepLockActive) == 6081, "Offset mismatch for UFortDelMarGhostVehicle::bSpawnedSleepLockActive");
static_assert(offsetof(UFortDelMarGhostVehicle, ForceKinematicOnClientCount) == 6084, "Offset mismatch for UFortDelMarGhostVehicle::ForceKinematicOnClientCount");
static_assert(offsetof(UFortDelMarGhostVehicle, ImpactInstigator) == 6088, "Offset mismatch for UFortDelMarGhostVehicle::ImpactInstigator");
static_assert(offsetof(UFortDelMarGhostVehicle, NormalizedRPM) == 6192, "Offset mismatch for UFortDelMarGhostVehicle::NormalizedRPM");
static_assert(offsetof(UFortDelMarGhostVehicle, CustomUI) == 6200, "Offset mismatch for UFortDelMarGhostVehicle::CustomUI");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleEnhancedInputContextDriver) == 6216, "Offset mismatch for UFortDelMarGhostVehicle::VehicleEnhancedInputContextDriver");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleEnhancedInputContextPassenger) == 6232, "Offset mismatch for UFortDelMarGhostVehicle::VehicleEnhancedInputContextPassenger");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionMoveGamepad) == 6248, "Offset mismatch for UFortDelMarGhostVehicle::InputActionMoveGamepad");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionChangeSeat) == 6256, "Offset mismatch for UFortDelMarGhostVehicle::InputActionChangeSeat");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionHonk) == 6264, "Offset mismatch for UFortDelMarGhostVehicle::InputActionHonk");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionBoost) == 6272, "Offset mismatch for UFortDelMarGhostVehicle::InputActionBoost");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionUseOrExit) == 6280, "Offset mismatch for UFortDelMarGhostVehicle::InputActionUseOrExit");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionGamepadTriggerForward) == 6288, "Offset mismatch for UFortDelMarGhostVehicle::InputActionGamepadTriggerForward");
static_assert(offsetof(UFortDelMarGhostVehicle, InputActionGamepadTriggerReverse) == 6296, "Offset mismatch for UFortDelMarGhostVehicle::InputActionGamepadTriggerReverse");
static_assert(offsetof(UFortDelMarGhostVehicle, MobileMoveForwardCurve) == 6304, "Offset mismatch for UFortDelMarGhostVehicle::MobileMoveForwardCurve");
static_assert(offsetof(UFortDelMarGhostVehicle, MobileMoveRightCurve) == 6312, "Offset mismatch for UFortDelMarGhostVehicle::MobileMoveRightCurve");
static_assert(offsetof(UFortDelMarGhostVehicle, MobileReversingAngle) == 6320, "Offset mismatch for UFortDelMarGhostVehicle::MobileReversingAngle");
static_assert(offsetof(UFortDelMarGhostVehicle, bShouldConsumeTouchStickVector) == 6324, "Offset mismatch for UFortDelMarGhostVehicle::bShouldConsumeTouchStickVector");
static_assert(offsetof(UFortDelMarGhostVehicle, ActiveCustomUI) == 6328, "Offset mismatch for UFortDelMarGhostVehicle::ActiveCustomUI");
static_assert(offsetof(UFortDelMarGhostVehicle, MobileCustomUI) == 6344, "Offset mismatch for UFortDelMarGhostVehicle::MobileCustomUI");
static_assert(offsetof(UFortDelMarGhostVehicle, AlwaysDamageVehiclesWithTag) == 6364, "Offset mismatch for UFortDelMarGhostVehicle::AlwaysDamageVehiclesWithTag");
static_assert(offsetof(UFortDelMarGhostVehicle, OnModAppliedOnClientDelegate) == 6368, "Offset mismatch for UFortDelMarGhostVehicle::OnModAppliedOnClientDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, BaseTireInfo) == 6384, "Offset mismatch for UFortDelMarGhostVehicle::BaseTireInfo");
static_assert(offsetof(UFortDelMarGhostVehicle, CurrentOverlapComponent) == 6880, "Offset mismatch for UFortDelMarGhostVehicle::CurrentOverlapComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleConfigsClass) == 6888, "Offset mismatch for UFortDelMarGhostVehicle::VehicleConfigsClass");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleConfigsClass_BR) == 6896, "Offset mismatch for UFortDelMarGhostVehicle::VehicleConfigsClass_BR");
static_assert(offsetof(UFortDelMarGhostVehicle, FortPhysicsVehicleConfigs) == 6904, "Offset mismatch for UFortDelMarGhostVehicle::FortPhysicsVehicleConfigs");
static_assert(offsetof(UFortDelMarGhostVehicle, bBoosting) == 6912, "Offset mismatch for UFortDelMarGhostVehicle::bBoosting");
static_assert(offsetof(UFortDelMarGhostVehicle, bHasBoostingEventStarted) == 6913, "Offset mismatch for UFortDelMarGhostVehicle::bHasBoostingEventStarted");
static_assert(offsetof(UFortDelMarGhostVehicle, BoostEndTime) == 6916, "Offset mismatch for UFortDelMarGhostVehicle::BoostEndTime");
static_assert(offsetof(UFortDelMarGhostVehicle, OnBoostStartedDelegate) == 6920, "Offset mismatch for UFortDelMarGhostVehicle::OnBoostStartedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnBoostRequestFailedDelegate) == 6936, "Offset mismatch for UFortDelMarGhostVehicle::OnBoostRequestFailedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnBoostFinishedDelegate) == 6952, "Offset mismatch for UFortDelMarGhostVehicle::OnBoostFinishedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRechargeableBoostPercentChangedDelegate) == 6968, "Offset mismatch for UFortDelMarGhostVehicle::OnRechargeableBoostPercentChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRechargeableBoostFullDelegate) == 6984, "Offset mismatch for UFortDelMarGhostVehicle::OnRechargeableBoostFullDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnDriftStartedDelegate) == 7000, "Offset mismatch for UFortDelMarGhostVehicle::OnDriftStartedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnDriftFinishedDelegate) == 7016, "Offset mismatch for UFortDelMarGhostVehicle::OnDriftFinishedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, SoundIndicatorComponent) == 7032, "Offset mismatch for UFortDelMarGhostVehicle::SoundIndicatorComponent");
static_assert(offsetof(UFortDelMarGhostVehicle, bShouldDealDamage) == 7040, "Offset mismatch for UFortDelMarGhostVehicle::bShouldDealDamage");
static_assert(offsetof(UFortDelMarGhostVehicle, NativeComp_LowFuelSputter) == 7048, "Offset mismatch for UFortDelMarGhostVehicle::NativeComp_LowFuelSputter");
static_assert(offsetof(UFortDelMarGhostVehicle, NativeSys_LowFuelSputter) == 7056, "Offset mismatch for UFortDelMarGhostVehicle::NativeSys_LowFuelSputter");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRefuelStartDelegate) == 7064, "Offset mismatch for UFortDelMarGhostVehicle::OnRefuelStartDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRefuelStopDelegate) == 7080, "Offset mismatch for UFortDelMarGhostVehicle::OnRefuelStopDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRefueledFromEmptyDelegate) == 7096, "Offset mismatch for UFortDelMarGhostVehicle::OnRefueledFromEmptyDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnOutOfFuelDelegate) == 7112, "Offset mismatch for UFortDelMarGhostVehicle::OnOutOfFuelDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnFuelChangedDelegate) == 7128, "Offset mismatch for UFortDelMarGhostVehicle::OnFuelChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnLowFuelDelegate) == 7144, "Offset mismatch for UFortDelMarGhostVehicle::OnLowFuelDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, DebugDestroyLogCount) == 7160, "Offset mismatch for UFortDelMarGhostVehicle::DebugDestroyLogCount");
static_assert(offsetof(UFortDelMarGhostVehicle, ServerCriticalHealth) == 7164, "Offset mismatch for UFortDelMarGhostVehicle::ServerCriticalHealth");
static_assert(offsetof(UFortDelMarGhostVehicle, HealthZeroTime) == 7168, "Offset mismatch for UFortDelMarGhostVehicle::HealthZeroTime");
static_assert(offsetof(UFortDelMarGhostVehicle, bExploded) == 7172, "Offset mismatch for UFortDelMarGhostVehicle::bExploded");
static_assert(offsetof(UFortDelMarGhostVehicle, OnStartCriticalHealth) == 7176, "Offset mismatch for UFortDelMarGhostVehicle::OnStartCriticalHealth");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleExplodeDelegate) == 7192, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleExplodeDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnRoad) == 7232, "Offset mismatch for UFortDelMarGhostVehicle::bOnRoad");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnLandscape) == 7233, "Offset mismatch for UFortDelMarGhostVehicle::bOnLandscape");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnDirt) == 7234, "Offset mismatch for UFortDelMarGhostVehicle::bOnDirt");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnGrass) == 7235, "Offset mismatch for UFortDelMarGhostVehicle::bOnGrass");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnIce) == 7236, "Offset mismatch for UFortDelMarGhostVehicle::bOnIce");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnSnow) == 7237, "Offset mismatch for UFortDelMarGhostVehicle::bOnSnow");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnMud) == 7238, "Offset mismatch for UFortDelMarGhostVehicle::bOnMud");
static_assert(offsetof(UFortDelMarGhostVehicle, bStartedWithFullBoost) == 7239, "Offset mismatch for UFortDelMarGhostVehicle::bStartedWithFullBoost");
static_assert(offsetof(UFortDelMarGhostVehicle, bOnVehicle) == 7240, "Offset mismatch for UFortDelMarGhostVehicle::bOnVehicle");
static_assert(offsetof(UFortDelMarGhostVehicle, TireSurfaces) == 7248, "Offset mismatch for UFortDelMarGhostVehicle::TireSurfaces");
static_assert(offsetof(UFortDelMarGhostVehicle, OnTirePoppedDelegate) == 7264, "Offset mismatch for UFortDelMarGhostVehicle::OnTirePoppedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnTireRepairedDelegate) == 7280, "Offset mismatch for UFortDelMarGhostVehicle::OnTireRepairedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, LastPopTireTime) == 7296, "Offset mismatch for UFortDelMarGhostVehicle::LastPopTireTime");
static_assert(offsetof(UFortDelMarGhostVehicle, TireStates) == 7304, "Offset mismatch for UFortDelMarGhostVehicle::TireStates");
static_assert(offsetof(UFortDelMarGhostVehicle, OnDisabledChangedDelegate) == 7320, "Offset mismatch for UFortDelMarGhostVehicle::OnDisabledChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRimScrapingChangedDelegate) == 7368, "Offset mismatch for UFortDelMarGhostVehicle::OnRimScrapingChangedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, PlatformVelocityDirection) == 7384, "Offset mismatch for UFortDelMarGhostVehicle::PlatformVelocityDirection");
static_assert(offsetof(UFortDelMarGhostVehicle, RimScrapeDamageTimer) == 7444, "Offset mismatch for UFortDelMarGhostVehicle::RimScrapeDamageTimer");
static_assert(offsetof(UFortDelMarGhostVehicle, ExceptionsForClearFallDamageImmunityOnExitTagQuery) == 7480, "Offset mismatch for UFortDelMarGhostVehicle::ExceptionsForClearFallDamageImmunityOnExitTagQuery");
static_assert(offsetof(UFortDelMarGhostVehicle, ActiveGameplayEffectGrantedTagsToForceRemove) == 7552, "Offset mismatch for UFortDelMarGhostVehicle::ActiveGameplayEffectGrantedTagsToForceRemove");
static_assert(offsetof(UFortDelMarGhostVehicle, OnVehicleCosmeticsPartUpdatedDelegate) == 7672, "Offset mismatch for UFortDelMarGhostVehicle::OnVehicleCosmeticsPartUpdatedDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRefuelingCosmeticsStarted) == 7688, "Offset mismatch for UFortDelMarGhostVehicle::OnRefuelingCosmeticsStarted");
static_assert(offsetof(UFortDelMarGhostVehicle, OnRefuelingCosmeticsFinished) == 7704, "Offset mismatch for UFortDelMarGhostVehicle::OnRefuelingCosmeticsFinished");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleCosmeticsForceApplyDelegate) == 7720, "Offset mismatch for UFortDelMarGhostVehicle::VehicleCosmeticsForceApplyDelegate");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedWheelFXInfos) == 7736, "Offset mismatch for UFortDelMarGhostVehicle::CachedWheelFXInfos");
static_assert(offsetof(UFortDelMarGhostVehicle, bIsRefuelingCosmeticsActive) == 7769, "Offset mismatch for UFortDelMarGhostVehicle::bIsRefuelingCosmeticsActive");
static_assert(offsetof(UFortDelMarGhostVehicle, OwningSpawnerResolverScopes) == 7960, "Offset mismatch for UFortDelMarGhostVehicle::OwningSpawnerResolverScopes");
static_assert(offsetof(UFortDelMarGhostVehicle, CachedVehicleSimStepsManager) == 8024, "Offset mismatch for UFortDelMarGhostVehicle::CachedVehicleSimStepsManager");
static_assert(offsetof(UFortDelMarGhostVehicle, VehicleHudData) == 8040, "Offset mismatch for UFortDelMarGhostVehicle::VehicleHudData");
static_assert(offsetof(UFortDelMarGhostVehicle, bSkydivePlayerOnVehicleExit) == 8056, "Offset mismatch for UFortDelMarGhostVehicle::bSkydivePlayerOnVehicleExit");
static_assert(offsetof(UFortDelMarGhostVehicle, HeightToBeginSkydive) == 8060, "Offset mismatch for UFortDelMarGhostVehicle::HeightToBeginSkydive");

// /Script/FortDelMarCore.FortDelMarGlobalInputDisabler
// Kind: Class; super: GameFrameworkComponent
class UFortDelMarGlobalInputDisabler
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t DisabledInputTags[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarGlobalInputDisabler, DisabledInputTags) == 216, "Offset mismatch for UFortDelMarGlobalInputDisabler::DisabledInputTags");

// /Script/FortDelMarCore.FortDelMarGlobals
// Kind: Class; super: Object
class UFortDelMarGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarInputModifierHazard
// Kind: Class; super: Actor
class UFortDelMarInputModifierHazard
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> ActivatedInputSequence; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisabledEffects; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    void* BoxCollider; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* LocalController; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayerInput; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    float StartOverlapTime; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float TotalActivationSequenceTime; // 0x02AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarInputModifierHazard, ActivatedInputSequence) == 624, "Offset mismatch for UFortDelMarInputModifierHazard::ActivatedInputSequence");
static_assert(offsetof(UFortDelMarInputModifierHazard, DisabledEffects) == 640, "Offset mismatch for UFortDelMarInputModifierHazard::DisabledEffects");
static_assert(offsetof(UFortDelMarInputModifierHazard, BoxCollider) == 656, "Offset mismatch for UFortDelMarInputModifierHazard::BoxCollider");
static_assert(offsetof(UFortDelMarInputModifierHazard, LocalController) == 664, "Offset mismatch for UFortDelMarInputModifierHazard::LocalController");
static_assert(offsetof(UFortDelMarInputModifierHazard, LocalPlayerInput) == 672, "Offset mismatch for UFortDelMarInputModifierHazard::LocalPlayerInput");
static_assert(offsetof(UFortDelMarInputModifierHazard, StartOverlapTime) == 680, "Offset mismatch for UFortDelMarInputModifierHazard::StartOverlapTime");
static_assert(offsetof(UFortDelMarInputModifierHazard, TotalActivationSequenceTime) == 684, "Offset mismatch for UFortDelMarInputModifierHazard::TotalActivationSequenceTime");

// /Script/FortDelMarCore.FortDelMarLevelDataAsset
// Kind: Class; super: PrimaryDataAsset
class UFortDelMarLevelDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t LevelDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t LevelBackgroundImage[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Levels; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldPartitionDataLayers; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LevelDescriptionTags[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDelMarLevelDataAsset, DisplayName) == 40, "Offset mismatch for UFortDelMarLevelDataAsset::DisplayName");
static_assert(offsetof(UFortDelMarLevelDataAsset, LevelDescription) == 56, "Offset mismatch for UFortDelMarLevelDataAsset::LevelDescription");
static_assert(offsetof(UFortDelMarLevelDataAsset, LevelBackgroundImage) == 72, "Offset mismatch for UFortDelMarLevelDataAsset::LevelBackgroundImage");
static_assert(offsetof(UFortDelMarLevelDataAsset, Levels) == 104, "Offset mismatch for UFortDelMarLevelDataAsset::Levels");
static_assert(offsetof(UFortDelMarLevelDataAsset, WorldPartitionDataLayers) == 120, "Offset mismatch for UFortDelMarLevelDataAsset::WorldPartitionDataLayers");
static_assert(offsetof(UFortDelMarLevelDataAsset, LevelDescriptionTags) == 136, "Offset mismatch for UFortDelMarLevelDataAsset::LevelDescriptionTags");

// /Script/FortDelMarCore.FortDelMarMutator
// Kind: Class; super: FortAthenaMutator
class UFortDelMarMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarMutator, bMutatesGameMode) == 688, "Offset mismatch for UFortDelMarMutator::bMutatesGameMode");
static_assert(offsetof(UFortDelMarMutator, CachedGameMode) == 696, "Offset mismatch for UFortDelMarMutator::CachedGameMode");
static_assert(offsetof(UFortDelMarMutator, CachedGameState) == 704, "Offset mismatch for UFortDelMarMutator::CachedGameState");
static_assert(offsetof(UFortDelMarMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UFortDelMarMutator::InitializedPlayerControllers");
static_assert(offsetof(UFortDelMarMutator, OverridePriority) == 732, "Offset mismatch for UFortDelMarMutator::OverridePriority");
static_assert(offsetof(UFortDelMarMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortDelMarMutator::bOnlyRunOnGameThread");

// /Script/FortDelMarCore.FortDelMarMutator_AllowSpectateOtherTeams
// Kind: Class; super: FortAthenaMutator_AllowSpectateOtherTeams
class UFortDelMarMutator_AllowSpectateOtherTeams
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bAllowSpectateOtherTeams; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarMutator_AllowSpectateOtherTeams, bAllowSpectateOtherTeams) == 736, "Offset mismatch for UFortDelMarMutator_AllowSpectateOtherTeams::bAllowSpectateOtherTeams");

// /Script/FortDelMarCore.FortDelMarNetModelSubsystem
// Kind: Class; super: WorldSubsystem
class UFortDelMarNetModelSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarNetworkPredictionMutator
// Kind: Class; super: FortDelMarMutator
class UFortDelMarNetworkPredictionMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarNetworkPredictionMutator, bMutatesGameMode) == 688, "Offset mismatch for UFortDelMarNetworkPredictionMutator::bMutatesGameMode");
static_assert(offsetof(UFortDelMarNetworkPredictionMutator, CachedGameMode) == 696, "Offset mismatch for UFortDelMarNetworkPredictionMutator::CachedGameMode");
static_assert(offsetof(UFortDelMarNetworkPredictionMutator, CachedGameState) == 704, "Offset mismatch for UFortDelMarNetworkPredictionMutator::CachedGameState");
static_assert(offsetof(UFortDelMarNetworkPredictionMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UFortDelMarNetworkPredictionMutator::InitializedPlayerControllers");
static_assert(offsetof(UFortDelMarNetworkPredictionMutator, OverridePriority) == 732, "Offset mismatch for UFortDelMarNetworkPredictionMutator::OverridePriority");
static_assert(offsetof(UFortDelMarNetworkPredictionMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortDelMarNetworkPredictionMutator::bOnlyRunOnGameThread");

// /Script/FortDelMarCore.FortDelMarPhysMatAttribute
// Kind: Class; super: Object
class UFortDelMarPhysMatAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarPhysMatAttributeMap
// Kind: Class; super: DataAsset
class UFortDelMarPhysMatAttributeMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MaterialAttributesMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarPhysMatAttributeMap, MaterialAttributesMap) == 40, "Offset mismatch for UFortDelMarPhysMatAttributeMap::MaterialAttributesMap");

// /Script/FortDelMarCore.FortDelMarPhysMatAttribute_SoundTag
// Kind: Class; super: FortDelMarPhysMatAttribute
class UFortDelMarPhysMatAttribute_SoundTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SoundTag[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t Priority; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarPhysMatAttribute_SoundTag, SoundTag) == 40, "Offset mismatch for UFortDelMarPhysMatAttribute_SoundTag::SoundTag");
static_assert(offsetof(UFortDelMarPhysMatAttribute_SoundTag, Priority) == 44, "Offset mismatch for UFortDelMarPhysMatAttribute_SoundTag::Priority");

// /Script/FortDelMarCore.FortDelMarPhysMatAttribute_Terrain
// Kind: Class; super: FortDelMarPhysMatAttribute
class UFortDelMarPhysMatAttribute_Terrain
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TerrainData[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDriveableSurface; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarPhysMatAttribute_Terrain, TerrainData) == 40, "Offset mismatch for UFortDelMarPhysMatAttribute_Terrain::TerrainData");
static_assert(offsetof(UFortDelMarPhysMatAttribute_Terrain, bDriveableSurface) == 64, "Offset mismatch for UFortDelMarPhysMatAttribute_Terrain::bDriveableSurface");

// /Script/FortDelMarCore.FortDelMarPhysicsRateDevice
// Kind: Class; super: FortCreativeDeviceProp
class UFortDelMarPhysicsRateDevice
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t bSuppressPlayTimeSimpleInteractionWidgetForTouch; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerNotifyOnLongUseInteraction; // 0x0B21 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCollisionForInteractDistanceCheck; // 0x0B22 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActorsBeingDeleted; // 0x0B23 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarPhysicsRateDevice, bSuppressPlayTimeSimpleInteractionWidgetForTouch) == 2848, "Offset mismatch for UFortDelMarPhysicsRateDevice::bSuppressPlayTimeSimpleInteractionWidgetForTouch");
static_assert(offsetof(UFortDelMarPhysicsRateDevice, bServerNotifyOnLongUseInteraction) == 2849, "Offset mismatch for UFortDelMarPhysicsRateDevice::bServerNotifyOnLongUseInteraction");
static_assert(offsetof(UFortDelMarPhysicsRateDevice, bUseCollisionForInteractDistanceCheck) == 2850, "Offset mismatch for UFortDelMarPhysicsRateDevice::bUseCollisionForInteractDistanceCheck");
static_assert(offsetof(UFortDelMarPhysicsRateDevice, bActorsBeingDeleted) == 2851, "Offset mismatch for UFortDelMarPhysicsRateDevice::bActorsBeingDeleted");

// /Script/FortDelMarCore.FortDelMarPlayerAttachmentComponent
// Kind: Class; super: FortDelMarPlayerStateComponent
class UFortDelMarPlayerAttachmentComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> AttachedPlayer; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarPlayerAttachmentComponent, AttachedPlayer) == 192, "Offset mismatch for UFortDelMarPlayerAttachmentComponent::AttachedPlayer");

// /Script/FortDelMarCore.FortDelMarPlayerInputManagerComponent
// Kind: Class; super: FortDelMarPlayerStateComponent
class UFortDelMarPlayerInputManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> InputMappingContextMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    void* PlatformDigitalRedirect; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedController; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarPlayerInputManagerComponent, InputMappingContextMap) == 192, "Offset mismatch for UFortDelMarPlayerInputManagerComponent::InputMappingContextMap");
static_assert(offsetof(UFortDelMarPlayerInputManagerComponent, PlatformDigitalRedirect) == 208, "Offset mismatch for UFortDelMarPlayerInputManagerComponent::PlatformDigitalRedirect");
static_assert(offsetof(UFortDelMarPlayerInputManagerComponent, CachedController) == 216, "Offset mismatch for UFortDelMarPlayerInputManagerComponent::CachedController");

// /Script/FortDelMarCore.FortDelMarPlayerPreferencesComponent
// Kind: Class; super: FortDelMarPlayerStateComponent
class UFortDelMarPlayerPreferencesComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnUseExpandableHudWidgetToggleChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUseOnlyIconPlayerNameplatesChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLayoutTouchControlsChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bPitchInverted; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVerticalKickflipInverted; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAerialPitchActivationEnabled; // 0x00F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseToggleOnExpandableHudWidget; // 0x00F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseIconOnlyPlayerNameplates; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InvertSteerMethod; // 0x00F5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00F6
    std::uint8_t TouchControlsLayout[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> CachedVehicle; // 0x00FC (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortSettings; // 0x0104 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, OnUseExpandableHudWidgetToggleChanged) == 192, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::OnUseExpandableHudWidgetToggleChanged");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, OnUseOnlyIconPlayerNameplatesChanged) == 208, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::OnUseOnlyIconPlayerNameplatesChanged");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, OnLayoutTouchControlsChanged) == 224, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::OnLayoutTouchControlsChanged");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, bPitchInverted) == 240, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::bPitchInverted");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, bVerticalKickflipInverted) == 241, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::bVerticalKickflipInverted");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, bAerialPitchActivationEnabled) == 242, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::bAerialPitchActivationEnabled");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, bUseToggleOnExpandableHudWidget) == 243, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::bUseToggleOnExpandableHudWidget");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, bUseIconOnlyPlayerNameplates) == 244, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::bUseIconOnlyPlayerNameplates");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, InvertSteerMethod) == 245, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::InvertSteerMethod");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, TouchControlsLayout) == 248, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::TouchControlsLayout");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, CachedVehicle) == 252, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::CachedVehicle");
static_assert(offsetof(UFortDelMarPlayerPreferencesComponent, FortSettings) == 260, "Offset mismatch for UFortDelMarPlayerPreferencesComponent::FortSettings");

// /Script/FortDelMarCore.FortDelMarPlayerStateComponent
// Kind: Class; super: PlayerStateComponent
class UFortDelMarPlayerStateComponent
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

static_assert(offsetof(UFortDelMarPlayerStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarPlayerStateComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarPlayerStateComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarPlayerStateComponent::ComponentTags");
static_assert(offsetof(UFortDelMarPlayerStateComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarPlayerStateComponent::AssetUserData");
static_assert(offsetof(UFortDelMarPlayerStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarPlayerStateComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarPlayerStateComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarPlayerStateComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarPlayerStateComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarPlayerStateComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarPlayerStateComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarPlayerStateComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarPlayerStateComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarPlayerStateComponent::CreationMethod");
static_assert(offsetof(UFortDelMarPlayerStateComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarPlayerStateComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarPlayerStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarPlayerStateComponent::OnComponentDeactivated");

// /Script/FortDelMarCore.FortDelMarPlayspaceComponent_ServerExpiration
// Kind: Class; super: PlayspaceComponent_ServerExpiration
class UFortDelMarPlayspaceComponent_ServerExpiration
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::int32_t ReplicatedShutdownTimeInSeconds; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartShutdownTimerOnGracefulShutdownRequest; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillBeforeExpiration; // 0x015D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillOnGracefulShutdown; // 0x015E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x015F
    TArray<void*> AlertDataList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ServerShutdownTimeInSeconds; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t DisableBackfillBeforeExpireTimeInSeconds; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::int32_t PostShutdownForceRestartTimeInSeconds; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x017C
    TSoftObjectPtr<void> UINotificationIcon; // 0x0180 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0003[0x48]; // 0x01A8
    std::uint8_t GracefulShutdownInitiatedEventHandle[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ShutdownTimeOverrides; // 0x0210 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, ReplicatedShutdownTimeInSeconds) == 344, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::ReplicatedShutdownTimeInSeconds");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, StartShutdownTimerOnGracefulShutdownRequest) == 348, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::StartShutdownTimerOnGracefulShutdownRequest");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, bDisableBackfillBeforeExpiration) == 349, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::bDisableBackfillBeforeExpiration");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, bDisableBackfillOnGracefulShutdown) == 350, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::bDisableBackfillOnGracefulShutdown");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, AlertDataList) == 352, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::AlertDataList");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, ServerShutdownTimeInSeconds) == 368, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::ServerShutdownTimeInSeconds");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, DisableBackfillBeforeExpireTimeInSeconds) == 372, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::DisableBackfillBeforeExpireTimeInSeconds");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, PostShutdownForceRestartTimeInSeconds) == 376, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::PostShutdownForceRestartTimeInSeconds");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, UINotificationIcon) == 384, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::UINotificationIcon");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, GracefulShutdownInitiatedEventHandle) == 496, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::GracefulShutdownInitiatedEventHandle");
static_assert(offsetof(UFortDelMarPlayspaceComponent_ServerExpiration, ShutdownTimeOverrides) == 528, "Offset mismatch for UFortDelMarPlayspaceComponent_ServerExpiration::ShutdownTimeOverrides");

// /Script/FortDelMarCore.FortDelMarProxyGhostVisualComponent
// Kind: Class; super: FortDelMarPlayerStateComponent
class UFortDelMarProxyGhostVisualComponent
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

static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::PrimaryComponentTick");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, ComponentTags) == 104, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::ComponentTags");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, AssetUserData) == 120, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::AssetUserData");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::UCSSerializationIndex");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, bNetAddressable) == 152, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::bNetAddressable");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, bAutoActivate) == 154, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::bAutoActivate");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::bIsEditorOnly");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, CreationMethod) == 185, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::CreationMethod");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, OnComponentActivated) == 186, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::OnComponentActivated");
static_assert(offsetof(UFortDelMarProxyGhostVisualComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortDelMarProxyGhostVisualComponent::OnComponentDeactivated");

// /Script/FortDelMarCore.FortDelMarRaceMusicPlaylist
// Kind: Class; super: PrimaryDataAsset
class UFortDelMarRaceMusicPlaylist
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Tracks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarRaceMusicPlaylist, Tracks) == 40, "Offset mismatch for UFortDelMarRaceMusicPlaylist::Tracks");

// /Script/FortDelMarCore.FortDelMarSpeedUpDevice
// Kind: Class; super: FortCreativeDeviceProp
class UFortDelMarSpeedUpDevice
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t bSuppressPlayTimeSimpleInteractionWidgetForTouch; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bServerNotifyOnLongUseInteraction; // 0x0B21 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCollisionForInteractDistanceCheck; // 0x0B22 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActorsBeingDeleted; // 0x0B23 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDelMarSpeedUpDevice, bSuppressPlayTimeSimpleInteractionWidgetForTouch) == 2848, "Offset mismatch for UFortDelMarSpeedUpDevice::bSuppressPlayTimeSimpleInteractionWidgetForTouch");
static_assert(offsetof(UFortDelMarSpeedUpDevice, bServerNotifyOnLongUseInteraction) == 2849, "Offset mismatch for UFortDelMarSpeedUpDevice::bServerNotifyOnLongUseInteraction");
static_assert(offsetof(UFortDelMarSpeedUpDevice, bUseCollisionForInteractDistanceCheck) == 2850, "Offset mismatch for UFortDelMarSpeedUpDevice::bUseCollisionForInteractDistanceCheck");
static_assert(offsetof(UFortDelMarSpeedUpDevice, bActorsBeingDeleted) == 2851, "Offset mismatch for UFortDelMarSpeedUpDevice::bActorsBeingDeleted");

// /Script/FortDelMarCore.FortDelMarSplineActorMovementComponent
// Kind: Class; super: ActorComponent
class UFortDelMarSplineActorMovementComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> MovementSpline; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    float MovementSpeed; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarSplineActorMovementComponent, MovementSpline) == 192, "Offset mismatch for UFortDelMarSplineActorMovementComponent::MovementSpline");
static_assert(offsetof(UFortDelMarSplineActorMovementComponent, MovementSpeed) == 200, "Offset mismatch for UFortDelMarSplineActorMovementComponent::MovementSpeed");

// /Script/FortDelMarCore.FortDelMarStateSequencerFXComponent
// Kind: Class; super: ActorComponent
class UFortDelMarStateSequencerFXComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float FXSizeScalar; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TMap<void*, void*> ParticleClassMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00D8
    std::uint8_t SpawnParams[0x70]; // 0x00E0 (Size: 0x70, Type: StructProperty)
    void* ParentRef; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ParticleComponentMap; // 0x0158 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortDelMarStateSequencerFXComponent, FXSizeScalar) == 192, "Offset mismatch for UFortDelMarStateSequencerFXComponent::FXSizeScalar");
static_assert(offsetof(UFortDelMarStateSequencerFXComponent, ParticleClassMap) == 200, "Offset mismatch for UFortDelMarStateSequencerFXComponent::ParticleClassMap");
static_assert(offsetof(UFortDelMarStateSequencerFXComponent, SpawnParams) == 224, "Offset mismatch for UFortDelMarStateSequencerFXComponent::SpawnParams");
static_assert(offsetof(UFortDelMarStateSequencerFXComponent, ParentRef) == 336, "Offset mismatch for UFortDelMarStateSequencerFXComponent::ParentRef");
static_assert(offsetof(UFortDelMarStateSequencerFXComponent, ParticleComponentMap) == 344, "Offset mismatch for UFortDelMarStateSequencerFXComponent::ParticleComponentMap");

// /Script/FortDelMarCore.FortDelMarSubmixSendExtension
// Kind: Class; super: ActorComponent
class UFortDelMarSubmixSendExtension
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float SendInterpTime; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarSubmixSendExtension, SendInterpTime) == 200, "Offset mismatch for UFortDelMarSubmixSendExtension::SendInterpTime");

// /Script/FortDelMarCore.FortDelMarTimeDelayedStateSequencer
// Kind: Class; super: Actor
class UFortDelMarTimeDelayedStateSequencer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnCurrentStateChanged; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEnabledChanged; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableOnSpawn; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoopSpecificAmount; // 0x0291 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0292
    std::int32_t TotalLoopCount; // 0x0294 (Size: 0x4, Type: IntProperty)
    TArray<void*> StateArray; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0xC]; // 0x02A8
    std::uint8_t bIsEnabled; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x02B5
    std::int32_t CurrentStateIndex; // 0x02B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, OnCurrentStateChanged) == 624, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::OnCurrentStateChanged");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, OnEnabledChanged) == 640, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::OnEnabledChanged");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, bEnableOnSpawn) == 656, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::bEnableOnSpawn");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, bLoopSpecificAmount) == 657, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::bLoopSpecificAmount");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, TotalLoopCount) == 660, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::TotalLoopCount");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, StateArray) == 664, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::StateArray");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, bIsEnabled) == 692, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::bIsEnabled");
static_assert(offsetof(UFortDelMarTimeDelayedStateSequencer, CurrentStateIndex) == 696, "Offset mismatch for UFortDelMarTimeDelayedStateSequencer::CurrentStateIndex");

// /Script/FortDelMarCore.FortDelMarTutorialInteractableSpline
// Kind: Class; super: Actor
class UFortDelMarTutorialInteractableSpline
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTutorialInteractableSpline, PrimaryActorTick) == 40, "Offset mismatch for UFortDelMarTutorialInteractableSpline::PrimaryActorTick");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, bAlwaysRelevant) == 88, "Offset mismatch for UFortDelMarTutorialInteractableSpline::bAlwaysRelevant");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, bExchangedRoles) == 89, "Offset mismatch for UFortDelMarTutorialInteractableSpline::bExchangedRoles");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortDelMarTutorialInteractableSpline::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortDelMarTutorialInteractableSpline::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, bActorEnableCollision) == 93, "Offset mismatch for UFortDelMarTutorialInteractableSpline::bActorEnableCollision");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortDelMarTutorialInteractableSpline::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortDelMarTutorialInteractableSpline::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, RemoteRole) == 96, "Offset mismatch for UFortDelMarTutorialInteractableSpline::RemoteRole");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, InitialLifeSpan) == 100, "Offset mismatch for UFortDelMarTutorialInteractableSpline::InitialLifeSpan");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, CustomTimeDilation) == 104, "Offset mismatch for UFortDelMarTutorialInteractableSpline::CustomTimeDilation");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, RayTracingGroupId) == 108, "Offset mismatch for UFortDelMarTutorialInteractableSpline::RayTracingGroupId");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, AttachmentReplication) == 112, "Offset mismatch for UFortDelMarTutorialInteractableSpline::AttachmentReplication");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, ReplicatedMovement) == 208, "Offset mismatch for UFortDelMarTutorialInteractableSpline::ReplicatedMovement");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Owner) == 344, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Owner");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetDriverName) == 352, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetDriverName");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Role) == 356, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Role");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetDormancy) == 357, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetDormancy");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortDelMarTutorialInteractableSpline::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, AutoReceiveInput) == 359, "Offset mismatch for UFortDelMarTutorialInteractableSpline::AutoReceiveInput");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, InputPriority) == 360, "Offset mismatch for UFortDelMarTutorialInteractableSpline::InputPriority");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, InputComponent) == 368, "Offset mismatch for UFortDelMarTutorialInteractableSpline::InputComponent");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetTag) == 376, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetTag");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetCullDistanceSquared) == 380, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetCullDistanceSquared");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetUpdateFrequency) == 384, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetUpdateFrequency");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortDelMarTutorialInteractableSpline::MinNetUpdateFrequency");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, NetPriority) == 392, "Offset mismatch for UFortDelMarTutorialInteractableSpline::NetPriority");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, PhysicsReplicationMode) == 396, "Offset mismatch for UFortDelMarTutorialInteractableSpline::PhysicsReplicationMode");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Instigator) == 408, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Instigator");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Children) == 416, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Children");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, RootComponent) == 432, "Offset mismatch for UFortDelMarTutorialInteractableSpline::RootComponent");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, HLODLayer) == 448, "Offset mismatch for UFortDelMarTutorialInteractableSpline::HLODLayer");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Layers) == 456, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Layers");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, ParentComponent) == 472, "Offset mismatch for UFortDelMarTutorialInteractableSpline::ParentComponent");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, Tags) == 496, "Offset mismatch for UFortDelMarTutorialInteractableSpline::Tags");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnTakeAnyDamage) == 512, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnTakeAnyDamage");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnTakePointDamage) == 513, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnTakePointDamage");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnTakeRadialDamage) == 514, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnTakeRadialDamage");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnActorBeginOverlap) == 515, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnActorBeginOverlap");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnActorEndOverlap) == 516, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnActorEndOverlap");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnBeginCursorOver) == 517, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnBeginCursorOver");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnEndCursorOver) == 518, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnEndCursorOver");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnClicked) == 519, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnClicked");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnReleased) == 520, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnReleased");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnInputTouchBegin) == 521, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnInputTouchBegin");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnInputTouchEnd) == 522, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnInputTouchEnd");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnInputTouchEnter) == 523, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnInputTouchEnter");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnInputTouchLeave) == 524, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnInputTouchLeave");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnActorHit) == 525, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnActorHit");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnDestroyed) == 526, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnDestroyed");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, OnEndPlay) == 527, "Offset mismatch for UFortDelMarTutorialInteractableSpline::OnEndPlay");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, InstanceComponents) == 592, "Offset mismatch for UFortDelMarTutorialInteractableSpline::InstanceComponents");
static_assert(offsetof(UFortDelMarTutorialInteractableSpline, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortDelMarTutorialInteractableSpline::BlueprintCreatedComponents");

// /Script/FortDelMarCore.FortDelMarTutorialTriggerActor
// Kind: Class; super: Actor
class UFortDelMarTutorialTriggerActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarTutorialTriggerActor, PrimaryActorTick) == 40, "Offset mismatch for UFortDelMarTutorialTriggerActor::PrimaryActorTick");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, bAlwaysRelevant) == 88, "Offset mismatch for UFortDelMarTutorialTriggerActor::bAlwaysRelevant");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, bExchangedRoles) == 89, "Offset mismatch for UFortDelMarTutorialTriggerActor::bExchangedRoles");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortDelMarTutorialTriggerActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortDelMarTutorialTriggerActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, bActorEnableCollision) == 93, "Offset mismatch for UFortDelMarTutorialTriggerActor::bActorEnableCollision");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortDelMarTutorialTriggerActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortDelMarTutorialTriggerActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, RemoteRole) == 96, "Offset mismatch for UFortDelMarTutorialTriggerActor::RemoteRole");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, InitialLifeSpan) == 100, "Offset mismatch for UFortDelMarTutorialTriggerActor::InitialLifeSpan");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, CustomTimeDilation) == 104, "Offset mismatch for UFortDelMarTutorialTriggerActor::CustomTimeDilation");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, RayTracingGroupId) == 108, "Offset mismatch for UFortDelMarTutorialTriggerActor::RayTracingGroupId");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, AttachmentReplication) == 112, "Offset mismatch for UFortDelMarTutorialTriggerActor::AttachmentReplication");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, ReplicatedMovement) == 208, "Offset mismatch for UFortDelMarTutorialTriggerActor::ReplicatedMovement");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Owner) == 344, "Offset mismatch for UFortDelMarTutorialTriggerActor::Owner");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetDriverName) == 352, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetDriverName");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Role) == 356, "Offset mismatch for UFortDelMarTutorialTriggerActor::Role");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetDormancy) == 357, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetDormancy");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortDelMarTutorialTriggerActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, AutoReceiveInput) == 359, "Offset mismatch for UFortDelMarTutorialTriggerActor::AutoReceiveInput");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, InputPriority) == 360, "Offset mismatch for UFortDelMarTutorialTriggerActor::InputPriority");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, InputComponent) == 368, "Offset mismatch for UFortDelMarTutorialTriggerActor::InputComponent");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetTag) == 376, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetTag");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetCullDistanceSquared) == 380, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetCullDistanceSquared");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetUpdateFrequency) == 384, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetUpdateFrequency");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortDelMarTutorialTriggerActor::MinNetUpdateFrequency");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, NetPriority) == 392, "Offset mismatch for UFortDelMarTutorialTriggerActor::NetPriority");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, PhysicsReplicationMode) == 396, "Offset mismatch for UFortDelMarTutorialTriggerActor::PhysicsReplicationMode");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Instigator) == 408, "Offset mismatch for UFortDelMarTutorialTriggerActor::Instigator");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Children) == 416, "Offset mismatch for UFortDelMarTutorialTriggerActor::Children");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, RootComponent) == 432, "Offset mismatch for UFortDelMarTutorialTriggerActor::RootComponent");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, HLODLayer) == 448, "Offset mismatch for UFortDelMarTutorialTriggerActor::HLODLayer");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Layers) == 456, "Offset mismatch for UFortDelMarTutorialTriggerActor::Layers");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, ParentComponent) == 472, "Offset mismatch for UFortDelMarTutorialTriggerActor::ParentComponent");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, Tags) == 496, "Offset mismatch for UFortDelMarTutorialTriggerActor::Tags");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnTakeAnyDamage) == 512, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnTakeAnyDamage");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnTakePointDamage) == 513, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnTakePointDamage");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnTakeRadialDamage) == 514, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnTakeRadialDamage");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnActorBeginOverlap) == 515, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnActorBeginOverlap");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnActorEndOverlap) == 516, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnActorEndOverlap");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnBeginCursorOver) == 517, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnBeginCursorOver");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnEndCursorOver) == 518, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnEndCursorOver");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnClicked) == 519, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnClicked");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnReleased) == 520, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnReleased");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnInputTouchBegin) == 521, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnInputTouchBegin");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnInputTouchEnd) == 522, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnInputTouchEnd");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnInputTouchEnter) == 523, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnInputTouchEnter");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnInputTouchLeave) == 524, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnInputTouchLeave");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnActorHit) == 525, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnActorHit");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnDestroyed) == 526, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnDestroyed");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, OnEndPlay) == 527, "Offset mismatch for UFortDelMarTutorialTriggerActor::OnEndPlay");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, InstanceComponents) == 592, "Offset mismatch for UFortDelMarTutorialTriggerActor::InstanceComponents");
static_assert(offsetof(UFortDelMarTutorialTriggerActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortDelMarTutorialTriggerActor::BlueprintCreatedComponents");

// /Script/FortDelMarCore.FortDelMarUIInputControllerComponent
// Kind: Class; super: ControllerComponent
class UFortDelMarUIInputControllerComponent
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* HudWidgetExpandAction; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* ToggleQuestListAction; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* InputManagerClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> InputComponent; // 0x0140 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0148 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0150 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerPreferences; // 0x0158 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDelMarUIInputControllerComponent, HudWidgetExpandAction) == 296, "Offset mismatch for UFortDelMarUIInputControllerComponent::HudWidgetExpandAction");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, ToggleQuestListAction) == 304, "Offset mismatch for UFortDelMarUIInputControllerComponent::ToggleQuestListAction");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, InputManagerClass) == 312, "Offset mismatch for UFortDelMarUIInputControllerComponent::InputManagerClass");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, InputComponent) == 320, "Offset mismatch for UFortDelMarUIInputControllerComponent::InputComponent");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, PlayerState) == 328, "Offset mismatch for UFortDelMarUIInputControllerComponent::PlayerState");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, PlayerController) == 336, "Offset mismatch for UFortDelMarUIInputControllerComponent::PlayerController");
static_assert(offsetof(UFortDelMarUIInputControllerComponent, PlayerPreferences) == 344, "Offset mismatch for UFortDelMarUIInputControllerComponent::PlayerPreferences");

// /Script/FortDelMarCore.FortDelMarVehicleAudioInterface
// Kind: Class; super: Interface
class UFortDelMarVehicleAudioInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortDelMarCore.FortDelMarVehiclePreferencesInterface
// Kind: Class; super: Interface
class UFortDelMarVehiclePreferencesInterface
{
public:
    std::uint8_t Opaque[1];
};
