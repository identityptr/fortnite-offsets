/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimQuickplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_CuratedSetlistModeChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_CuratedSetlistModeChanged
{
public:
    std::uint8_t bIsCuratedSetlist; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> Owner; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_CuratedSetlistModeChanged, bIsCuratedSetlist) == 0, "Offset mismatch for FPilgrimEvent_CuratedSetlistModeChanged::bIsCuratedSetlist");
static_assert(offsetof(FPilgrimEvent_CuratedSetlistModeChanged, Owner) == 4, "Offset mismatch for FPilgrimEvent_CuratedSetlistModeChanged::Owner");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_Intro_PlayerChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Intro_PlayerChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_Intro_PlayerChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Intro_PlayerChanged::PlayerState");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_PlayersTeleported
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayersTeleported
{
public:
    std::uint8_t TeleportTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> PlayerTeleportInfos; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayersTeleported, TeleportTag) == 0, "Offset mismatch for FPilgrimEvent_PlayersTeleported::TeleportTag");
static_assert(offsetof(FPilgrimEvent_PlayersTeleported, PlayerTeleportInfos) == 8, "Offset mismatch for FPilgrimEvent_PlayersTeleported::PlayerTeleportInfos");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_PlayersTeleported_Client
// Kind: ScriptStruct; super: PilgrimEvent_PlayersTeleported
struct FPilgrimEvent_PlayersTeleported_Client
{
public:
    std::uint8_t TeleportTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> PlayerTeleportInfos; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayersTeleported_Client, TeleportTag) == 0, "Offset mismatch for FPilgrimEvent_PlayersTeleported_Client::TeleportTag");
static_assert(offsetof(FPilgrimEvent_PlayersTeleported_Client, PlayerTeleportInfos) == 8, "Offset mismatch for FPilgrimEvent_PlayersTeleported_Client::PlayerTeleportInfos");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_PlayersTeleported_Server
// Kind: ScriptStruct; super: PilgrimEvent_PlayersTeleported
struct FPilgrimEvent_PlayersTeleported_Server
{
public:
    std::uint8_t TeleportTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> PlayerTeleportInfos; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayersTeleported_Server, TeleportTag) == 0, "Offset mismatch for FPilgrimEvent_PlayersTeleported_Server::TeleportTag");
static_assert(offsetof(FPilgrimEvent_PlayersTeleported_Server, PlayerTeleportInfos) == 8, "Offset mismatch for FPilgrimEvent_PlayersTeleported_Server::PlayerTeleportInfos");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_MatchRecorded
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickplayScoring_MatchRecorded
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SetlistIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSoloMatch; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayScoring_MatchRecorded, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_QuickplayScoring_MatchRecorded::ForPlayer");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_MatchRecorded, SetlistIndex) == 8, "Offset mismatch for FPilgrimEvent_QuickplayScoring_MatchRecorded::SetlistIndex");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_MatchRecorded, bIsSoloMatch) == 12, "Offset mismatch for FPilgrimEvent_QuickplayScoring_MatchRecorded::bIsSoloMatch");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_NewHighScoreReceived
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickplayScoring_NewHighScoreReceived
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SetlistIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayScoring_NewHighScoreReceived, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_QuickplayScoring_NewHighScoreReceived::ForPlayer");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_NewHighScoreReceived, SetlistIndex) == 8, "Offset mismatch for FPilgrimEvent_QuickplayScoring_NewHighScoreReceived::SetlistIndex");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_PerformanceDataReceived
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickplayScoring_PerformanceDataReceived
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SetlistIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t PerformanceData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayScoring_PerformanceDataReceived, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_QuickplayScoring_PerformanceDataReceived::ForPlayer");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_PerformanceDataReceived, SetlistIndex) == 8, "Offset mismatch for FPilgrimEvent_QuickplayScoring_PerformanceDataReceived::SetlistIndex");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_PerformanceDataReceived, PerformanceData) == 16, "Offset mismatch for FPilgrimEvent_QuickplayScoring_PerformanceDataReceived::PerformanceData");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_SongResultPlayerData
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickplayScoring_SongResultPlayerData
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SetlistIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t SongResultData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickplayScoring_SongResultPlayerData, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_QuickplayScoring_SongResultPlayerData::ForPlayer");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_SongResultPlayerData, SetlistIndex) == 8, "Offset mismatch for FPilgrimEvent_QuickplayScoring_SongResultPlayerData::SetlistIndex");
static_assert(offsetof(FPilgrimEvent_QuickplayScoring_SongResultPlayerData, SongResultData) == 16, "Offset mismatch for FPilgrimEvent_QuickplayScoring_SongResultPlayerData::SongResultData");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_SoloUserSessionChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SoloUserSessionChanged
{
public:
    std::uint8_t bIsSoloUserSession; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> Owner; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_SoloUserSessionChanged, bIsSoloUserSession) == 0, "Offset mismatch for FPilgrimEvent_SoloUserSessionChanged::bIsSoloUserSession");
static_assert(offsetof(FPilgrimEvent_SoloUserSessionChanged, Owner) == 4, "Offset mismatch for FPilgrimEvent_SoloUserSessionChanged::Owner");

// /Script/PilgrimQuickplayRuntime.PilgrimEvent_StartIntro
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_StartIntro
{
public:
    TArray<void*> Players; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_StartIntro, Players) == 0, "Offset mismatch for FPilgrimEvent_StartIntro::Players");

// /Script/PilgrimQuickplayRuntime.PilgrimFastStartSettings
// Kind: ScriptStruct; super: none
struct FPilgrimFastStartSettings
{
public:
    std::uint8_t bEnableFastStart; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float GreenRoomTimeSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bManualKick; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartInIntro; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartInGameplay; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLogToScreen; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TArray<void*> SongSetList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimFastStartSettings, bEnableFastStart) == 0, "Offset mismatch for FPilgrimFastStartSettings::bEnableFastStart");
static_assert(offsetof(FPilgrimFastStartSettings, GreenRoomTimeSeconds) == 4, "Offset mismatch for FPilgrimFastStartSettings::GreenRoomTimeSeconds");
static_assert(offsetof(FPilgrimFastStartSettings, bManualKick) == 8, "Offset mismatch for FPilgrimFastStartSettings::bManualKick");
static_assert(offsetof(FPilgrimFastStartSettings, bStartInIntro) == 9, "Offset mismatch for FPilgrimFastStartSettings::bStartInIntro");
static_assert(offsetof(FPilgrimFastStartSettings, bStartInGameplay) == 10, "Offset mismatch for FPilgrimFastStartSettings::bStartInGameplay");
static_assert(offsetof(FPilgrimFastStartSettings, bLogToScreen) == 11, "Offset mismatch for FPilgrimFastStartSettings::bLogToScreen");
static_assert(offsetof(FPilgrimFastStartSettings, SongSetList) == 16, "Offset mismatch for FPilgrimFastStartSettings::SongSetList");

// /Script/PilgrimQuickplayRuntime.PilgrimHistogramSample
// Kind: ScriptStruct; super: none
struct FPilgrimHistogramSample
{
public:
    std::int32_t OffsetMs; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumSamples; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimHistogramSample, OffsetMs) == 0, "Offset mismatch for FPilgrimHistogramSample::OffsetMs");
static_assert(offsetof(FPilgrimHistogramSample, NumSamples) == 4, "Offset mismatch for FPilgrimHistogramSample::NumSamples");

// /Script/PilgrimQuickplayRuntime.PilgrimPlayerIntroInfo
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerIntroInfo
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Pawn; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Spawn[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPlayerIntroInfo, PlayerState) == 0, "Offset mismatch for FPilgrimPlayerIntroInfo::PlayerState");
static_assert(offsetof(FPilgrimPlayerIntroInfo, Pawn) == 8, "Offset mismatch for FPilgrimPlayerIntroInfo::Pawn");
static_assert(offsetof(FPilgrimPlayerIntroInfo, Spawn) == 16, "Offset mismatch for FPilgrimPlayerIntroInfo::Spawn");

// /Script/PilgrimQuickplayRuntime.PilgrimPlayerTeleportInfo
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerTeleportInfo
{
public:
    TWeakObjectPtr<void> Pawn; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Destination[0x70]; // 0x0010 (Size: 0x70, Type: StructProperty)
    std::uint8_t GameplayCueToExecute[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsStandin; // 0x0084 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimPlayerTeleportInfo, Pawn) == 0, "Offset mismatch for FPilgrimPlayerTeleportInfo::Pawn");
static_assert(offsetof(FPilgrimPlayerTeleportInfo, Destination) == 16, "Offset mismatch for FPilgrimPlayerTeleportInfo::Destination");
static_assert(offsetof(FPilgrimPlayerTeleportInfo, GameplayCueToExecute) == 128, "Offset mismatch for FPilgrimPlayerTeleportInfo::GameplayCueToExecute");
static_assert(offsetof(FPilgrimPlayerTeleportInfo, bIsStandin) == 132, "Offset mismatch for FPilgrimPlayerTeleportInfo::bIsStandin");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayAllPlayersReadyEvent
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplayAllPlayersReadyEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayGreenRoomPlaylistDisplayRequest
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplayGreenRoomPlaylistDisplayRequest
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimQuickplayGreenRoomPlaylistDisplayRequest, PlayerController) == 0, "Offset mismatch for FPilgrimQuickplayGreenRoomPlaylistDisplayRequest::PlayerController");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayGreenRoomPlaylistHideRequest
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplayGreenRoomPlaylistHideRequest
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimQuickplayGreenRoomPlaylistHideRequest, PlayerController) == 0, "Offset mismatch for FPilgrimQuickplayGreenRoomPlaylistHideRequest::PlayerController");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerPerformanceData
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplayPlayerPerformanceData
{
public:
    float Accuracy; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AverageOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StandardDeviation; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FullCombo; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t NotesHit; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NotesPassed; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t NotesMissed; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNotes; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t LongestStreak; // 0x0020 (Size: 0x4, Type: IntProperty)
    float TimeInOverdriveMs; // 0x0024 (Size: 0x4, Type: FloatProperty)
    TArray<void*> HistogramSamples; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AccuracyTierCounts; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SectionsCompletedByTier; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, Accuracy) == 0, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::Accuracy");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, AverageOffset) == 4, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::AverageOffset");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, StandardDeviation) == 8, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::StandardDeviation");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, FullCombo) == 12, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::FullCombo");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, NotesHit) == 16, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::NotesHit");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, NotesPassed) == 20, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::NotesPassed");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, NotesMissed) == 24, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::NotesMissed");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, TotalNotes) == 28, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::TotalNotes");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, LongestStreak) == 32, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::LongestStreak");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, TimeInOverdriveMs) == 36, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::TimeInOverdriveMs");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, HistogramSamples) == 40, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::HistogramSamples");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, AccuracyTierCounts) == 56, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::AccuracyTierCounts");
static_assert(offsetof(FPilgrimQuickplayPlayerPerformanceData, SectionsCompletedByTier) == 72, "Offset mismatch for FPilgrimQuickplayPlayerPerformanceData::SectionsCompletedByTier");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultData
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplaySetlistResultData
{
public:
    std::int32_t SetlistIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t SongResultData[0x68]; // 0x0008 (Size: 0x68, Type: StructProperty)
    std::uint8_t PerformanceData[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimQuickplaySetlistResultData, SetlistIndex) == 0, "Offset mismatch for FPilgrimQuickplaySetlistResultData::SetlistIndex");
static_assert(offsetof(FPilgrimQuickplaySetlistResultData, SongResultData) == 8, "Offset mismatch for FPilgrimQuickplaySetlistResultData::SongResultData");
static_assert(offsetof(FPilgrimQuickplaySetlistResultData, PerformanceData) == 112, "Offset mismatch for FPilgrimQuickplaySetlistResultData::PerformanceData");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultBandData
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplaySongResultBandData
{
public:
    std::uint8_t Team; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumTeamMembers; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t BandScore; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t BandModifierBonus; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t BandInstrumentVarietyBonus; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t BandStars; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t BaseBandScore; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t BandOverdriveBonus; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimQuickplaySongResultBandData, Team) == 0, "Offset mismatch for FPilgrimQuickplaySongResultBandData::Team");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, NumTeamMembers) == 1, "Offset mismatch for FPilgrimQuickplaySongResultBandData::NumTeamMembers");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BandScore) == 4, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BandScore");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BandModifierBonus) == 8, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BandModifierBonus");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BandInstrumentVarietyBonus) == 12, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BandInstrumentVarietyBonus");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BandStars) == 16, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BandStars");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BaseBandScore) == 20, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BaseBandScore");
static_assert(offsetof(FPilgrimQuickplaySongResultBandData, BandOverdriveBonus) == 24, "Offset mismatch for FPilgrimQuickplaySongResultBandData::BandOverdriveBonus");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultData
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplaySongResultData
{
public:
    FString SongName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SongTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    FName SongShortName; // 0x0030 (Size: 0x8, Type: NameProperty)
    TArray<void*> BandData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Team; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0059
    std::int32_t LocalPlayerBandDataIndex; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t LocalPlayerDataIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimQuickplaySongResultData, SongName) == 0, "Offset mismatch for FPilgrimQuickplaySongResultData::SongName");
static_assert(offsetof(FPilgrimQuickplaySongResultData, SongTags) == 16, "Offset mismatch for FPilgrimQuickplaySongResultData::SongTags");
static_assert(offsetof(FPilgrimQuickplaySongResultData, SongShortName) == 48, "Offset mismatch for FPilgrimQuickplaySongResultData::SongShortName");
static_assert(offsetof(FPilgrimQuickplaySongResultData, BandData) == 56, "Offset mismatch for FPilgrimQuickplaySongResultData::BandData");
static_assert(offsetof(FPilgrimQuickplaySongResultData, PlayerData) == 72, "Offset mismatch for FPilgrimQuickplaySongResultData::PlayerData");
static_assert(offsetof(FPilgrimQuickplaySongResultData, Team) == 88, "Offset mismatch for FPilgrimQuickplaySongResultData::Team");
static_assert(offsetof(FPilgrimQuickplaySongResultData, LocalPlayerBandDataIndex) == 92, "Offset mismatch for FPilgrimQuickplaySongResultData::LocalPlayerBandDataIndex");
static_assert(offsetof(FPilgrimQuickplaySongResultData, LocalPlayerDataIndex) == 96, "Offset mismatch for FPilgrimQuickplaySongResultData::LocalPlayerDataIndex");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySongResultPlayerData
// Kind: ScriptStruct; super: none
struct FPilgrimQuickplaySongResultPlayerData
{
public:
    FString PlayerName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t PlayerAccountId[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InstrumentType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    std::uint8_t InstrumentTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::int32_t PlayerStars; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerScore; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t PlayerDifficulty; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t SongTrackDifficulty; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t Team; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerName) == 0, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerName");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerAccountId) == 16, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerAccountId");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerState) == 64, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerState");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, InstrumentType) == 72, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::InstrumentType");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, InstrumentTags) == 80, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::InstrumentTags");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerStars) == 112, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerStars");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerScore) == 116, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerScore");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, PlayerDifficulty) == 120, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::PlayerDifficulty");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, SongTrackDifficulty) == 124, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::SongTrackDifficulty");
static_assert(offsetof(FPilgrimQuickplaySongResultPlayerData, Team) == 128, "Offset mismatch for FPilgrimQuickplaySongResultPlayerData::Team");

// /Script/PilgrimQuickplayRuntime.PilgrimStandinCosmeticData
// Kind: ScriptStruct; super: none
struct FPilgrimStandinCosmeticData
{
public:
    TMap<void*, void*> ItemData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPilgrimStandinCosmeticData, ItemData) == 0, "Offset mismatch for FPilgrimStandinCosmeticData::ItemData");

// /Script/PilgrimQuickplayRuntime.PilgrimStandinDirectorPlayerCosmeticData
// Kind: ScriptStruct; super: none
struct FPilgrimStandinDirectorPlayerCosmeticData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Loadouts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimStandinDirectorPlayerCosmeticData, Loadouts) == 8, "Offset mismatch for FPilgrimStandinDirectorPlayerCosmeticData::Loadouts");

// /Script/PilgrimQuickplayRuntime.PilgrimStandinVariantArray
// Kind: ScriptStruct; super: none
struct FPilgrimStandinVariantArray
{
public:
    TWeakObjectPtr<void> Item; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> VariantData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimStandinVariantArray, Item) == 0, "Offset mismatch for FPilgrimStandinVariantArray::Item");
static_assert(offsetof(FPilgrimStandinVariantArray, VariantData) == 8, "Offset mismatch for FPilgrimStandinVariantArray::VariantData");

// /Script/PilgrimQuickplayRuntime.PilgrimStreamContext
// Kind: ScriptStruct; super: none
struct FPilgrimStreamContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimTeamTeleportInfo
// Kind: ScriptStruct; super: none
struct FPilgrimTeamTeleportInfo
{
public:
    TArray<void*> AvailablePlayerStarts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimTeamTeleportInfo, AvailablePlayerStarts) == 0, "Offset mismatch for FPilgrimTeamTeleportInfo::AvailablePlayerStarts");

// /Script/PilgrimQuickplayRuntime.PilgrimTeleportDestination
// Kind: ScriptStruct; super: none
struct FPilgrimTeleportDestination
{
public:
    TWeakObjectPtr<void> PlayerStart; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTeleportDestination, PlayerStart) == 0, "Offset mismatch for FPilgrimTeleportDestination::PlayerStart");
static_assert(offsetof(FPilgrimTeleportDestination, Transform) == 16, "Offset mismatch for FPilgrimTeleportDestination::Transform");

// /Script/PilgrimQuickplayRuntime.PilgrimTeleportParams
// Kind: ScriptStruct; super: none
struct FPilgrimTeleportParams
{
public:
    std::uint8_t bTeleportStandins; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnStandins; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t TeleportTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueToExecute[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTeleportParams, bTeleportStandins) == 0, "Offset mismatch for FPilgrimTeleportParams::bTeleportStandins");
static_assert(offsetof(FPilgrimTeleportParams, bSpawnStandins) == 1, "Offset mismatch for FPilgrimTeleportParams::bSpawnStandins");
static_assert(offsetof(FPilgrimTeleportParams, TeleportTag) == 4, "Offset mismatch for FPilgrimTeleportParams::TeleportTag");
static_assert(offsetof(FPilgrimTeleportParams, GameplayCueToExecute) == 8, "Offset mismatch for FPilgrimTeleportParams::GameplayCueToExecute");

// /Script/PilgrimQuickplayRuntime.SpawnTagByConsoleVar
// Kind: ScriptStruct; super: none
struct FSpawnTagByConsoleVar
{
public:
    std::uint8_t bIsForPrimaryPlayer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ConsoleVariableName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bTrueWhenCVarEquals; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t SpawnTags[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpawnTagByConsoleVar, bIsForPrimaryPlayer) == 0, "Offset mismatch for FSpawnTagByConsoleVar::bIsForPrimaryPlayer");
static_assert(offsetof(FSpawnTagByConsoleVar, ConsoleVariableName) == 4, "Offset mismatch for FSpawnTagByConsoleVar::ConsoleVariableName");
static_assert(offsetof(FSpawnTagByConsoleVar, bTrueWhenCVarEquals) == 8, "Offset mismatch for FSpawnTagByConsoleVar::bTrueWhenCVarEquals");
static_assert(offsetof(FSpawnTagByConsoleVar, SpawnTags) == 16, "Offset mismatch for FSpawnTagByConsoleVar::SpawnTags");

// /Script/PilgrimQuickplayRuntime.BandReplicationGraphNode
// Kind: Class; super: FortReplicationGraphNode_Custom
class UBandReplicationGraphNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllChildNodes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBandReplicationGraphNode, AllChildNodes) == 40, "Offset mismatch for UBandReplicationGraphNode::AllChildNodes");

// /Script/PilgrimQuickplayRuntime.PilgrimConversationRequirement_NotUsingTouch
// Kind: Class; super: ConversationRequirementNode
class UPilgrimConversationRequirement_NotUsingTouch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* EvalWorldContextObj; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Compiled_NodeGUID[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    void* ParentNode; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimConversationRequirement_NotUsingTouch, EvalWorldContextObj) == 40, "Offset mismatch for UPilgrimConversationRequirement_NotUsingTouch::EvalWorldContextObj");
static_assert(offsetof(UPilgrimConversationRequirement_NotUsingTouch, NodeName) == 48, "Offset mismatch for UPilgrimConversationRequirement_NotUsingTouch::NodeName");
static_assert(offsetof(UPilgrimConversationRequirement_NotUsingTouch, Compiled_NodeGUID) == 64, "Offset mismatch for UPilgrimConversationRequirement_NotUsingTouch::Compiled_NodeGUID");
static_assert(offsetof(UPilgrimConversationRequirement_NotUsingTouch, ParentNode) == 80, "Offset mismatch for UPilgrimConversationRequirement_NotUsingTouch::ParentNode");

// /Script/PilgrimQuickplayRuntime.PilgrimCuratedSetlistContextCollector
// Kind: Class; super: FilteredEventContextCollectorBase
class UPilgrimCuratedSetlistContextCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimDynamicSceneInjectorInterface
// Kind: Class; super: Interface
class UPilgrimDynamicSceneInjectorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimGameplayAbility_DisableMovementReplication
// Kind: Class; super: FortGameplayAbility
class UPilgrimGameplayAbility_DisableMovementReplication
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    std::uint8_t ActivationType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03A9
    std::uint8_t EffectContainers[0x398]; // 0x03B0 (Size: 0x398, Type: StructProperty)
    TArray<void*> GameplayEffectContainers; // 0x0748 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DynamicGameplayEffectContainers; // 0x0758 (Size: 0x10, Type: MapProperty)
    std::uint8_t OwnerPreviewImageOverrideTags[0x20]; // 0x0768 (Size: 0x20, Type: StructProperty)
    void* ProjectileClass; // 0x0788 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowBlueprintReplicatedVariables; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0791
    std::uint8_t DamageStatHandle[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    TArray<void*> AbilityCosts; // 0x07A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Costs; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyingCostsEnabled; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    // 0x07C8 BoolProperty bShowWidgetForCosts (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x07C9
    std::uint8_t MovementCancellationLeashLength[0x28]; // 0x07D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownDuration[0x28]; // 0x07F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExplicitCooldownTags[0x20]; // 0x0820 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExplicitCooldownAssetTags[0x20]; // 0x0840 (Size: 0x20, Type: StructProperty)
    std::uint8_t CustomFiringSequenceLength; // 0x0860 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0861
    std::uint8_t bDisableMoveCombining; // 0x0864 (Size: 0x1, Type: BoolProperty)
    // 0x0864 BoolProperty bIgnoreClientActivationAttempts (shared storage)
    // 0x0864 BoolProperty bPersistOnDeath (shared storage)
    // 0x0864 BoolProperty bRequireServerTimeValidationPass (shared storage)
    // 0x0864 BoolProperty bRequireServerValidationPass (shared storage)
    // 0x0864 BoolProperty bStartWithCooldown (shared storage)
    // 0x0864 BoolProperty bStopsAIBehaviorLogic (shared storage)
    // 0x0864 BoolProperty bStopsAIMovement (shared storage)
    std::uint8_t bForceNormalAILOD; // 0x0865 (Size: 0x1, Type: BoolProperty)
    // 0x0865 BoolProperty bStopsRVOAvoidance (shared storage)
    std::uint8_t Pad_0005[0x2]; // 0x0866
    std::uint8_t MinimumRequiredAILODLevel; // 0x0868 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0869
    std::uint8_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests; // 0x086C (Size: 0x1, Type: BoolProperty)
    // 0x086C BoolProperty bAcceptTargetActorVehicleForCanHitTests (shared storage)
    // 0x086C BoolProperty bRelevantForAIDespawning (shared storage)
    // 0x086C BoolProperty bUseOwnerInstigatorAsInstigator (shared storage)
    // 0x086C BoolProperty bUseTetheredPawnAsInstigator (shared storage)
    std::uint8_t bUseAIFireLocationAndRotation; // 0x086D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x2]; // 0x086E
    std::uint8_t AIWeaponUsage; // 0x0870 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0871
    std::uint8_t WeaponTestApplicationTag[0x4]; // 0x0874 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x0878 (Size: 0x1, Type: BoolProperty)
    // 0x0878 BoolProperty bVerifyFireOffsetIsNotObstructedByWorldGeometry (shared storage)
    std::uint8_t Pad_0009[0x7]; // 0x0879
    std::uint8_t FireOffset[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    float ActivationNoiseRange; // 0x0898 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseRange; // 0x089C (Size: 0x4, Type: FloatProperty)
    float ActivationNoiseLoudness; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float ImpactNoiseLoudness; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProhibitedTargetTags[0x21]; // 0x08A8 (Size: 0x21, Type: StructProperty)
    std::uint8_t bLeadPawnTargets; // 0x08C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x2]; // 0x08CA
    float DesiredThrowAngle; // 0x08CC (Size: 0x4, Type: FloatProperty)
    float MaxYawAngleToFire; // 0x08D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampMaxYawAngleToFire; // 0x08D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTargetActorLocation; // 0x08D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x2]; // 0x08D6
    float InitialAccuracyMax; // 0x08D8 (Size: 0x4, Type: FloatProperty)
    float InitialAccuracyMin; // 0x08DC (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMax; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float TargetAccuracyMin; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    float MinAccuracyDistance; // 0x08E8 (Size: 0x4, Type: FloatProperty)
    float MaxAccuracyDistance; // 0x08EC (Size: 0x4, Type: FloatProperty)
    float AccuracyDistanceMultiplier; // 0x08F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUsesToReachTargetAccuracy; // 0x08F4 (Size: 0x4, Type: IntProperty)
    std::int32_t UseCount; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMobileToggle; // 0x08FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateIfTagsAlreadyPresent; // 0x08FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0xA]; // 0x08FE
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x60]; // 0x0918
    std::uint8_t MontageInfo[0x58]; // 0x0978 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousMontageInfo[0x58]; // 0x09D0 (Size: 0x58, Type: StructProperty)
    TArray<void*> ModList; // 0x0A28 (Size: 0x10, Type: ArrayProperty)
    void* AbilityWeapon; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0A40 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0A50 (Size: 0x18, Type: TextProperty)
    void* SmallPreviewImageOverride; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000E[0x10]; // 0x0A70
    float ChargeStartTime; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0A84
    std::uint8_t ChargeState; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x27]; // 0x0A89
    void* ToolTip; // 0x0AB0 (Size: 0x8, Type: ClassProperty)
    void* StatList; // 0x0AB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0AC0
    std::uint8_t ActorTrackingSettings[0x28]; // 0x0AC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnalyticsTags[0x20]; // 0x0AF0 (Size: 0x20, Type: StructProperty)
    TArray<void*> TagChangedActions; // 0x0B10 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ActivationType) == 936, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ActivationType");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, EffectContainers) == 944, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::EffectContainers");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, GameplayEffectContainers) == 1864, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::GameplayEffectContainers");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::DynamicGameplayEffectContainers");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ProjectileClass) == 1928, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ProjectileClass");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, DamageStatHandle) == 1944, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::DamageStatHandle");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, AbilityCosts) == 1960, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::AbilityCosts");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, Costs) == 1976, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::Costs");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bApplyingCostsEnabled) == 1992, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bApplyingCostsEnabled");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MovementCancellationLeashLength) == 2000, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MovementCancellationLeashLength");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ExplicitCooldownDuration) == 2040, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ExplicitCooldownDuration");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ExplicitCooldownTags) == 2080, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ExplicitCooldownTags");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ExplicitCooldownAssetTags");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, CustomFiringSequenceLength) == 2144, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::CustomFiringSequenceLength");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bDisableMoveCombining) == 2148, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bDisableMoveCombining");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bForceNormalAILOD) == 2149, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bForceNormalAILOD");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MinimumRequiredAILODLevel");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bUseAIFireLocationAndRotation");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, AIWeaponUsage) == 2160, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::AIWeaponUsage");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, WeaponTestApplicationTag) == 2164, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::WeaponTestApplicationTag");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, FireOffset) == 2176, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::FireOffset");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ActivationNoiseRange) == 2200, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ActivationNoiseRange");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ImpactNoiseRange) == 2204, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ImpactNoiseRange");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ActivationNoiseLoudness) == 2208, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ActivationNoiseLoudness");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ImpactNoiseLoudness) == 2212, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ImpactNoiseLoudness");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ProhibitedTargetTags) == 2216, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ProhibitedTargetTags");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bLeadPawnTargets) == 2249, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bLeadPawnTargets");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, DesiredThrowAngle) == 2252, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::DesiredThrowAngle");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MaxYawAngleToFire) == 2256, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MaxYawAngleToFire");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bClampMaxYawAngleToFire");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bUseTargetActorLocation) == 2261, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bUseTargetActorLocation");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, InitialAccuracyMax) == 2264, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::InitialAccuracyMax");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, InitialAccuracyMin) == 2268, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::InitialAccuracyMin");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, TargetAccuracyMax) == 2272, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::TargetAccuracyMax");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, TargetAccuracyMin) == 2276, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::TargetAccuracyMin");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MinAccuracyDistance) == 2280, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MinAccuracyDistance");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MaxAccuracyDistance) == 2284, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MaxAccuracyDistance");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::AccuracyDistanceMultiplier");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, UseCount) == 2296, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::UseCount");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bIsMobileToggle) == 2300, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bIsMobileToggle");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, MontageInfo) == 2424, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::MontageInfo");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, PreviousMontageInfo) == 2512, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::PreviousMontageInfo");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ModList) == 2600, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ModList");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, AbilityWeapon) == 2616, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::AbilityWeapon");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, DisplayName) == 2624, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::DisplayName");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, Description) == 2640, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::Description");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, SmallPreviewImageOverride) == 2664, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::SmallPreviewImageOverride");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ChargeStartTime) == 2688, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ChargeStartTime");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ChargeState) == 2696, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ChargeState");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ToolTip) == 2736, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ToolTip");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, StatList) == 2744, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::StatList");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, ActorTrackingSettings) == 2760, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::ActorTrackingSettings");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, AnalyticsTags) == 2800, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::AnalyticsTags");
static_assert(offsetof(UPilgrimGameplayAbility_DisableMovementReplication, TagChangedActions) == 2832, "Offset mismatch for UPilgrimGameplayAbility_DisableMovementReplication::TagChangedActions");

// /Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher
// Kind: Class; super: PlayspaceComponent
class UPilgrimGreenRoomLayoutSwitcher
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t CurrentLayout; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* LayoutEnumType; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGreenRoomLayoutSwitcher, CurrentLayout) == 192, "Offset mismatch for UPilgrimGreenRoomLayoutSwitcher::CurrentLayout");
static_assert(offsetof(UPilgrimGreenRoomLayoutSwitcher, LayoutEnumType) == 200, "Offset mismatch for UPilgrimGreenRoomLayoutSwitcher::LayoutEnumType");

// /Script/PilgrimQuickplayRuntime.PilgrimIrisDistanceOverrideFilter
// Kind: Class; super: NetObjectFilter
class UPilgrimIrisDistanceOverrideFilter
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Config; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimIrisDistanceOverrideFilter, Config) == 112, "Offset mismatch for UPilgrimIrisDistanceOverrideFilter::Config");

// /Script/PilgrimQuickplayRuntime.PilgrimIrisDistanceOverrideFilterConfig
// Kind: Class; super: NetObjectGridFilterConfig
class UPilgrimIrisDistanceOverrideFilterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t ViewPosRelevancyFrameCount; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint16_t DefaultFrameCountBeforeCulling; // 0x002C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x2]; // 0x002E
    float CellSizeX; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CellSizeY; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DefaultCullDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExactCullDistance; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultUse2DCullDistance; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003E
    TArray<void*> FilterProfiles; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, ViewPosRelevancyFrameCount) == 40, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::ViewPosRelevancyFrameCount");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, DefaultFrameCountBeforeCulling) == 44, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::DefaultFrameCountBeforeCulling");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, CellSizeX) == 48, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::CellSizeX");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, CellSizeY) == 52, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::CellSizeY");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, DefaultCullDistance) == 56, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::DefaultCullDistance");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, bUseExactCullDistance) == 60, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::bUseExactCullDistance");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, bDefaultUse2DCullDistance) == 61, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::bDefaultUse2DCullDistance");
static_assert(offsetof(UPilgrimIrisDistanceOverrideFilterConfig, FilterProfiles) == 64, "Offset mismatch for UPilgrimIrisDistanceOverrideFilterConfig::FilterProfiles");

// /Script/PilgrimQuickplayRuntime.PilgrimLeaderboardScoreReporter
// Kind: Class; super: PlayspaceComponent
class UPilgrimLeaderboardScoreReporter
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

static_assert(offsetof(UPilgrimLeaderboardScoreReporter, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimLeaderboardScoreReporter::PrimaryComponentTick");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, ComponentTags) == 104, "Offset mismatch for UPilgrimLeaderboardScoreReporter::ComponentTags");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, AssetUserData) == 120, "Offset mismatch for UPilgrimLeaderboardScoreReporter::AssetUserData");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimLeaderboardScoreReporter::UCSSerializationIndex");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, bNetAddressable) == 152, "Offset mismatch for UPilgrimLeaderboardScoreReporter::bNetAddressable");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, bAutoActivate) == 154, "Offset mismatch for UPilgrimLeaderboardScoreReporter::bAutoActivate");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimLeaderboardScoreReporter::bIsEditorOnly");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, CreationMethod) == 185, "Offset mismatch for UPilgrimLeaderboardScoreReporter::CreationMethod");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, OnComponentActivated) == 186, "Offset mismatch for UPilgrimLeaderboardScoreReporter::OnComponentActivated");
static_assert(offsetof(UPilgrimLeaderboardScoreReporter, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimLeaderboardScoreReporter::OnComponentDeactivated");

// /Script/PilgrimQuickplayRuntime.PilgrimPawnComponent
// Kind: Class; super: FortPawnComponent
class UPilgrimPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bInteractionEffectsEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimPawnComponent, bInteractionEffectsEnabled) == 200, "Offset mismatch for UPilgrimPawnComponent::bInteractionEffectsEnabled");

// /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector
// Kind: Class; super: FortPlayspaceComponent
class UPilgrimPlayspaceComponent_IntroDirector
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t bEnableIntroDirector; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0119
    TArray<void*> GuitarSpotlights; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DrumSpotlights; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BassSpotlights; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MicSpotlights; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeytarSpotlights; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    void* AllowEmotingEffect; // 0x0170 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x1C8]; // 0x0178
    std::int32_t SpotlightIndexLock; // 0x0340 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, bEnableIntroDirector) == 280, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::bEnableIntroDirector");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, GuitarSpotlights) == 288, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::GuitarSpotlights");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, DrumSpotlights) == 304, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::DrumSpotlights");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, BassSpotlights) == 320, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::BassSpotlights");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, MicSpotlights) == 336, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::MicSpotlights");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, KeytarSpotlights) == 352, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::KeytarSpotlights");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, AllowEmotingEffect) == 368, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::AllowEmotingEffect");
static_assert(offsetof(UPilgrimPlayspaceComponent_IntroDirector, SpotlightIndexLock) == 832, "Offset mismatch for UPilgrimPlayspaceComponent_IntroDirector::SpotlightIndexLock");

// /Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_ServerExpiration
// Kind: Class; super: PlayspaceComponent_ServerExpiration
class UPilgrimPlayspaceComponent_ServerExpiration
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

static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, ReplicatedShutdownTimeInSeconds) == 344, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::ReplicatedShutdownTimeInSeconds");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, StartShutdownTimerOnGracefulShutdownRequest) == 348, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::StartShutdownTimerOnGracefulShutdownRequest");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, bDisableBackfillBeforeExpiration) == 349, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::bDisableBackfillBeforeExpiration");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, bDisableBackfillOnGracefulShutdown) == 350, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::bDisableBackfillOnGracefulShutdown");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, AlertDataList) == 352, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::AlertDataList");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, ServerShutdownTimeInSeconds) == 368, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::ServerShutdownTimeInSeconds");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, DisableBackfillBeforeExpireTimeInSeconds) == 372, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::DisableBackfillBeforeExpireTimeInSeconds");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, PostShutdownForceRestartTimeInSeconds) == 376, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::PostShutdownForceRestartTimeInSeconds");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, UINotificationIcon) == 384, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::UINotificationIcon");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, GracefulShutdownInitiatedEventHandle) == 496, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::GracefulShutdownInitiatedEventHandle");
static_assert(offsetof(UPilgrimPlayspaceComponent_ServerExpiration, ShutdownTimeOverrides) == 528, "Offset mismatch for UPilgrimPlayspaceComponent_ServerExpiration::ShutdownTimeOverrides");

// /Script/PilgrimQuickplayRuntime.PilgrimPlayspacePawnProviderInterface
// Kind: Class; super: Interface
class UPilgrimPlayspacePawnProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimQuickplayBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent
// Kind: Class; super: PilgrimCoreBandStateComponent
class UPilgrimQuickplayBandStateComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnSongReplayingChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SetlistVoteWinner; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentSetlistIndex; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsReplayingPreviousSong; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00ED
    TMap<void*, void*> SetlistResultMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimQuickplayBandStateComponent, OnSongReplayingChanged) == 208, "Offset mismatch for UPilgrimQuickplayBandStateComponent::OnSongReplayingChanged");
static_assert(offsetof(UPilgrimQuickplayBandStateComponent, SetlistVoteWinner) == 224, "Offset mismatch for UPilgrimQuickplayBandStateComponent::SetlistVoteWinner");
static_assert(offsetof(UPilgrimQuickplayBandStateComponent, CurrentSetlistIndex) == 232, "Offset mismatch for UPilgrimQuickplayBandStateComponent::CurrentSetlistIndex");
static_assert(offsetof(UPilgrimQuickplayBandStateComponent, bIsReplayingPreviousSong) == 236, "Offset mismatch for UPilgrimQuickplayBandStateComponent::bIsReplayingPreviousSong");
static_assert(offsetof(UPilgrimQuickplayBandStateComponent, SetlistResultMap) == 240, "Offset mismatch for UPilgrimQuickplayBandStateComponent::SetlistResultMap");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource
// Kind: Class; super: SparksCameraPluginDataProvider
class UPilgrimQuickplayCameraDataSource
{
public:
    std::uint8_t Pad_0000[0x228]; // 0x0000
    std::uint8_t bCutOnMeasuresInsteadOfBeats; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0229
    TWeakObjectPtr<void> PilgrimMBI; // 0x022C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayCameraDataSource, bCutOnMeasuresInsteadOfBeats) == 552, "Offset mismatch for UPilgrimQuickplayCameraDataSource::bCutOnMeasuresInsteadOfBeats");
static_assert(offsetof(UPilgrimQuickplayCameraDataSource, PilgrimMBI) == 556, "Offset mismatch for UPilgrimQuickplayCameraDataSource::PilgrimMBI");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UPilgrimQuickplayDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t OverrideGamestateSettings; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SongGameplay_SkipToGreenRoom; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    float SongResults_TransitionTimeInSeconds; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SongResults_OverrideSongData; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    std::uint8_t SongResults_SongData[0x68]; // 0x0040 (Size: 0x68, Type: StructProperty)
    std::uint8_t SongResults_OverrideSetlistResultData; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    TArray<void*> SongResults_SetlistResultsData; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Gameplay_ShowSongStats; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SongResults_SetlistChallengeOverrideConsole; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SongResults_SetlistChallengeDebug; // 0x00C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SongResults_SetlistChallengeFilenameAbsolute; // 0x00C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00C4
    FString SongResults_SetlistChallengeJSONDumpFilename; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t SongResults_SetlistChallengeIncludeHistogramData; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x00D9
    std::uint8_t FastStartSettings[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ForcedGameMode[0x1]; // 0x0100 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, OverrideGamestateSettings) == 48, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::OverrideGamestateSettings");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongGameplay_SkipToGreenRoom) == 49, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongGameplay_SkipToGreenRoom");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_TransitionTimeInSeconds) == 52, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_TransitionTimeInSeconds");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_OverrideSongData) == 56, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_OverrideSongData");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SongData) == 64, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SongData");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_OverrideSetlistResultData) == 168, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_OverrideSetlistResultData");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistResultsData) == 176, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistResultsData");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, Gameplay_ShowSongStats) == 192, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::Gameplay_ShowSongStats");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistChallengeOverrideConsole) == 193, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistChallengeOverrideConsole");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistChallengeDebug) == 194, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistChallengeDebug");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistChallengeFilenameAbsolute) == 195, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistChallengeFilenameAbsolute");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistChallengeJSONDumpFilename) == 200, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistChallengeJSONDumpFilename");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, SongResults_SetlistChallengeIncludeHistogramData) == 216, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::SongResults_SetlistChallengeIncludeHistogramData");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, FastStartSettings) == 224, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::FastStartSettings");
static_assert(offsetof(UPilgrimQuickplayDeveloperSettings, ForcedGameMode) == 256, "Offset mismatch for UPilgrimQuickplayDeveloperSettings::ForcedGameMode");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimQuickplayEmoteBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayInputBasedAFKComponent
// Kind: Class; super: FortInputBasedAFKComponent
class UPilgrimQuickplayInputBasedAFKComponent
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    std::uint8_t AFKTableRowEntry[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedAFKDetectionParameters[0x80]; // 0x01E8 (Size: 0x80, Type: StructProperty)
    void* WaitForEventRouterAction; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayInputBasedAFKComponent, AFKTableRowEntry) == 472, "Offset mismatch for UPilgrimQuickplayInputBasedAFKComponent::AFKTableRowEntry");
static_assert(offsetof(UPilgrimQuickplayInputBasedAFKComponent, CachedAFKDetectionParameters) == 488, "Offset mismatch for UPilgrimQuickplayInputBasedAFKComponent::CachedAFKDetectionParameters");
static_assert(offsetof(UPilgrimQuickplayInputBasedAFKComponent, WaitForEventRouterAction) == 616, "Offset mismatch for UPilgrimQuickplayInputBasedAFKComponent::WaitForEventRouterAction");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerControllerComponent
// Kind: Class; super: FortControllerComponent
class UPilgrimQuickplayPlayerControllerComponent
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

static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimQuickplayPlayerControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimQuickplayPlayerControllerComponent::OnComponentDeactivated");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerSpawningComponent
// Kind: Class; super: PlayspaceComponent_PlayerSpawning
class UPilgrimQuickplayPlayerSpawningComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t PregameSpawnTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NonPrimaryPlayerPregameSpawnTags[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> OverrideTagsByConsoleVariable; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayerSpawningComponent, PregameSpawnTags) == 208, "Offset mismatch for UPilgrimQuickplayPlayerSpawningComponent::PregameSpawnTags");
static_assert(offsetof(UPilgrimQuickplayPlayerSpawningComponent, NonPrimaryPlayerPregameSpawnTags) == 240, "Offset mismatch for UPilgrimQuickplayPlayerSpawningComponent::NonPrimaryPlayerPregameSpawnTags");
static_assert(offsetof(UPilgrimQuickplayPlayerSpawningComponent, OverrideTagsByConsoleVariable) == 272, "Offset mismatch for UPilgrimQuickplayPlayerSpawningComponent::OverrideTagsByConsoleVariable");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStart
// Kind: Class; super: FortPlayerStart
class UPilgrimQuickplayPlayerStart
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    std::uint8_t Team; // 0x02E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PlayerStartIndex; // 0x02E9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayerStart, Team) == 744, "Offset mismatch for UPilgrimQuickplayPlayerStart::Team");
static_assert(offsetof(UPilgrimQuickplayPlayerStart, PlayerStartIndex) == 745, "Offset mismatch for UPilgrimQuickplayPlayerStart::PlayerStartIndex");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent
// Kind: Class; super: PilgrimCorePlayerStateComponent
class UPilgrimQuickplayPlayerStateComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SongVote; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* SetlistVote; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasSongSelectMenuOpen; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    TMap<void*, void*> SetlistHighscoreMap; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SetlistResultMap; // 0x0108 (Size: 0x10, Type: MapProperty)
    float CloseupCameraTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x011C
    TArray<void*> GrantedQuests; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x30]; // 0x0130
    std::uint8_t bInitialSpawningDone; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutoEmoteSetting; // 0x0161 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, SongVote) == 224, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::SongVote");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, SetlistVote) == 232, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::SetlistVote");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, bHasSongSelectMenuOpen) == 240, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::bHasSongSelectMenuOpen");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, SetlistHighscoreMap) == 248, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::SetlistHighscoreMap");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, SetlistResultMap) == 264, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::SetlistResultMap");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, CloseupCameraTime) == 280, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::CloseupCameraTime");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, GrantedQuests) == 288, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::GrantedQuests");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, bInitialSpawningDone) == 352, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::bInitialSpawningDone");
static_assert(offsetof(UPilgrimQuickplayPlayerStateComponent, AutoEmoteSetting) == 353, "Offset mismatch for UPilgrimQuickplayPlayerStateComponent::AutoEmoteSetting");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace
// Kind: Class; super: PilgrimPlayspace
class UPilgrimQuickplayPlayspace
{
public:
    std::uint8_t Pad_0000[0x718]; // 0x0000
    void* StandinDirector; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimQuickplayStateMachineClass; // 0x0720 (Size: 0x8, Type: ClassProperty)
    void* StateMachineManager; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* MainStateMachine; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* BandState; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* SparksCameraPluginDataProviderClass; // 0x0740 (Size: 0x8, Type: ClassProperty)
    void* CameraDataSource; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* AuraManager; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSongResultsDynamicUIScene; // 0x0758 (Size: 0x8, Type: ObjectProperty)
    void* DefaultLayoutDefinitions; // 0x0760 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayspace, StandinDirector) == 1816, "Offset mismatch for UPilgrimQuickplayPlayspace::StandinDirector");
static_assert(offsetof(UPilgrimQuickplayPlayspace, PilgrimQuickplayStateMachineClass) == 1824, "Offset mismatch for UPilgrimQuickplayPlayspace::PilgrimQuickplayStateMachineClass");
static_assert(offsetof(UPilgrimQuickplayPlayspace, StateMachineManager) == 1832, "Offset mismatch for UPilgrimQuickplayPlayspace::StateMachineManager");
static_assert(offsetof(UPilgrimQuickplayPlayspace, MainStateMachine) == 1840, "Offset mismatch for UPilgrimQuickplayPlayspace::MainStateMachine");
static_assert(offsetof(UPilgrimQuickplayPlayspace, BandState) == 1848, "Offset mismatch for UPilgrimQuickplayPlayspace::BandState");
static_assert(offsetof(UPilgrimQuickplayPlayspace, SparksCameraPluginDataProviderClass) == 1856, "Offset mismatch for UPilgrimQuickplayPlayspace::SparksCameraPluginDataProviderClass");
static_assert(offsetof(UPilgrimQuickplayPlayspace, CameraDataSource) == 1864, "Offset mismatch for UPilgrimQuickplayPlayspace::CameraDataSource");
static_assert(offsetof(UPilgrimQuickplayPlayspace, AuraManager) == 1872, "Offset mismatch for UPilgrimQuickplayPlayspace::AuraManager");
static_assert(offsetof(UPilgrimQuickplayPlayspace, DefaultSongResultsDynamicUIScene) == 1880, "Offset mismatch for UPilgrimQuickplayPlayspace::DefaultSongResultsDynamicUIScene");
static_assert(offsetof(UPilgrimQuickplayPlayspace, DefaultLayoutDefinitions) == 1888, "Offset mismatch for UPilgrimQuickplayPlayspace::DefaultLayoutDefinitions");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_AuraManager
// Kind: Class; super: FortPlayspaceComponent
class UPilgrimQuickplayPlayspaceComponent_AuraManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::OnMeshNetworkReady_BP");
static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_AuraManager, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_AuraManager::bSubscribeToMeshNetwork");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_LoadingScreen
// Kind: Class; super: PlayspaceComponent_LoadingScreen
class UPilgrimQuickplayPlayspaceComponent_LoadingScreen
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bAllowHoldingLoadingScreen; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_LoadingScreen, bAllowHoldingLoadingScreen) == 192, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_LoadingScreen::bAllowHoldingLoadingScreen");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager
// Kind: Class; super: FortPlayspaceComponent
class UPilgrimQuickplayPlayspaceComponent_PlayerManager
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TWeakObjectPtr<void> LocalPlayerOverride; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayPlayspaceComponent_PlayerManager, LocalPlayerOverride) == 280, "Offset mismatch for UPilgrimQuickplayPlayspaceComponent_PlayerManager::LocalPlayerOverride");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultProxyInstance
// Kind: Class; super: Object
class UPilgrimQuickplaySetlistResultProxyInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ResultData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimQuickplaySetlistResultProxyInstance, ResultData) == 40, "Offset mismatch for UPilgrimQuickplaySetlistResultProxyInstance::ResultData");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStandinDirector
// Kind: Class; super: PilgrimStandinDirector
class UPilgrimQuickplayStandinDirector
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    TMap<void*, void*> InstrumentToWeaponMap; // 0x0138 (Size: 0x10, Type: MapProperty)
    TArray<void*> PlayspaceUsers; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ActiveStandinCount; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x14]; // 0x015C
    std::uint8_t CosmeticCategories[0x10]; // 0x0170 (Size: 0x10, Type: SetProperty)
    void* AISpawnerData; // 0x0180 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Emotes; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    void* AbilitySet; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PlayerToCosmeticDataMap; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AssignedStandinCosmetics; // 0x01B0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SpawnRequestToStandinLoadoutMap; // 0x01C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimQuickplayStandinDirector, InstrumentToWeaponMap) == 312, "Offset mismatch for UPilgrimQuickplayStandinDirector::InstrumentToWeaponMap");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, PlayspaceUsers) == 328, "Offset mismatch for UPilgrimQuickplayStandinDirector::PlayspaceUsers");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, ActiveStandinCount) == 344, "Offset mismatch for UPilgrimQuickplayStandinDirector::ActiveStandinCount");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, CosmeticCategories) == 368, "Offset mismatch for UPilgrimQuickplayStandinDirector::CosmeticCategories");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, AISpawnerData) == 384, "Offset mismatch for UPilgrimQuickplayStandinDirector::AISpawnerData");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, Emotes) == 392, "Offset mismatch for UPilgrimQuickplayStandinDirector::Emotes");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, AbilitySet) == 408, "Offset mismatch for UPilgrimQuickplayStandinDirector::AbilitySet");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, PlayerToCosmeticDataMap) == 416, "Offset mismatch for UPilgrimQuickplayStandinDirector::PlayerToCosmeticDataMap");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, AssignedStandinCosmetics) == 432, "Offset mismatch for UPilgrimQuickplayStandinDirector::AssignedStandinCosmetics");
static_assert(offsetof(UPilgrimQuickplayStandinDirector, SpawnRequestToStandinLoadoutMap) == 448, "Offset mismatch for UPilgrimQuickplayStandinDirector::SpawnRequestToStandinLoadoutMap");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimQuickplayStateBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase
// Kind: Class; super: GameplayState
class UPilgrimQuickplayStateBase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* AbilitySetForState; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> GrantedAbilitySets; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GrantedAdditionalAbilitySets; // 0x0090 (Size: 0x10, Type: MapProperty)
    void* InputMappingContext; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    float AddSongAndPlayCooldownSeconds; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayStateBase, AbilitySetForState) == 120, "Offset mismatch for UPilgrimQuickplayStateBase::AbilitySetForState");
static_assert(offsetof(UPilgrimQuickplayStateBase, GrantedAbilitySets) == 128, "Offset mismatch for UPilgrimQuickplayStateBase::GrantedAbilitySets");
static_assert(offsetof(UPilgrimQuickplayStateBase, GrantedAdditionalAbilitySets) == 144, "Offset mismatch for UPilgrimQuickplayStateBase::GrantedAdditionalAbilitySets");
static_assert(offsetof(UPilgrimQuickplayStateBase, InputMappingContext) == 160, "Offset mismatch for UPilgrimQuickplayStateBase::InputMappingContext");
static_assert(offsetof(UPilgrimQuickplayStateBase, AddSongAndPlayCooldownSeconds) == 168, "Offset mismatch for UPilgrimQuickplayStateBase::AddSongAndPlayCooldownSeconds");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine
// Kind: Class; super: GameplayStateMachine
class UPilgrimQuickplayStateMachine
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> GrantedQuests; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimQuickplayStateMachine, GrantedQuests) == 200, "Offset mismatch for UPilgrimQuickplayStateMachine::GrantedQuests");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_Intro
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* EmoteAbilitySet; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TeleportTagRequirements[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    float CameraWaitTime; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_Intro, EmoteAbilitySet) == 184, "Offset mismatch for UPilgrimQuickplayState_Intro::EmoteAbilitySet");
static_assert(offsetof(UPilgrimQuickplayState_Intro, TeleportTagRequirements) == 192, "Offset mismatch for UPilgrimQuickplayState_Intro::TeleportTagRequirements");
static_assert(offsetof(UPilgrimQuickplayState_Intro, CameraWaitTime) == 224, "Offset mismatch for UPilgrimQuickplayState_Intro::CameraWaitTime");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_Loading
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* AbilitySetForState; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> GrantedAbilitySets; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GrantedAdditionalAbilitySets; // 0x0090 (Size: 0x10, Type: MapProperty)
    void* InputMappingContext; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    float AddSongAndPlayCooldownSeconds; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_Loading, AbilitySetForState) == 120, "Offset mismatch for UPilgrimQuickplayState_Loading::AbilitySetForState");
static_assert(offsetof(UPilgrimQuickplayState_Loading, GrantedAbilitySets) == 128, "Offset mismatch for UPilgrimQuickplayState_Loading::GrantedAbilitySets");
static_assert(offsetof(UPilgrimQuickplayState_Loading, GrantedAdditionalAbilitySets) == 144, "Offset mismatch for UPilgrimQuickplayState_Loading::GrantedAdditionalAbilitySets");
static_assert(offsetof(UPilgrimQuickplayState_Loading, InputMappingContext) == 160, "Offset mismatch for UPilgrimQuickplayState_Loading::InputMappingContext");
static_assert(offsetof(UPilgrimQuickplayState_Loading, AddSongAndPlayCooldownSeconds) == 168, "Offset mismatch for UPilgrimQuickplayState_Loading::AddSongAndPlayCooldownSeconds");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Outro
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_Outro
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    float StateTTL; // 0x00B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_Outro, StateTTL) == 184, "Offset mismatch for UPilgrimQuickplayState_Outro::StateTTL");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_PreIntro
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_PreIntro
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    float StateTTLSeconds; // 0x00B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_PreIntro, StateTTLSeconds) == 184, "Offset mismatch for UPilgrimQuickplayState_PreIntro::StateTTLSeconds");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Pregame
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_Pregame
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> EffectsToApplyOnTransition; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    std::uint8_t TeleportTagRequirements[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t NoRoamTeleportTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TeleportGameplayCue[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_Pregame, EffectsToApplyOnTransition) == 184, "Offset mismatch for UPilgrimQuickplayState_Pregame::EffectsToApplyOnTransition");
static_assert(offsetof(UPilgrimQuickplayState_Pregame, TeleportTagRequirements) == 208, "Offset mismatch for UPilgrimQuickplayState_Pregame::TeleportTagRequirements");
static_assert(offsetof(UPilgrimQuickplayState_Pregame, NoRoamTeleportTag) == 240, "Offset mismatch for UPilgrimQuickplayState_Pregame::NoRoamTeleportTag");
static_assert(offsetof(UPilgrimQuickplayState_Pregame, TeleportGameplayCue) == 272, "Offset mismatch for UPilgrimQuickplayState_Pregame::TeleportGameplayCue");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SetResults
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_SetResults
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* AbilitySetForState; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> GrantedAbilitySets; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GrantedAdditionalAbilitySets; // 0x0090 (Size: 0x10, Type: MapProperty)
    void* InputMappingContext; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    float AddSongAndPlayCooldownSeconds; // 0x00A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_SetResults, AbilitySetForState) == 120, "Offset mismatch for UPilgrimQuickplayState_SetResults::AbilitySetForState");
static_assert(offsetof(UPilgrimQuickplayState_SetResults, GrantedAbilitySets) == 128, "Offset mismatch for UPilgrimQuickplayState_SetResults::GrantedAbilitySets");
static_assert(offsetof(UPilgrimQuickplayState_SetResults, GrantedAdditionalAbilitySets) == 144, "Offset mismatch for UPilgrimQuickplayState_SetResults::GrantedAdditionalAbilitySets");
static_assert(offsetof(UPilgrimQuickplayState_SetResults, InputMappingContext) == 160, "Offset mismatch for UPilgrimQuickplayState_SetResults::InputMappingContext");
static_assert(offsetof(UPilgrimQuickplayState_SetResults, AddSongAndPlayCooldownSeconds) == 168, "Offset mismatch for UPilgrimQuickplayState_SetResults::AddSongAndPlayCooldownSeconds");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_SongGameplay
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t StageTeleportTagRequirements[0x20]; // 0x00B8 (Size: 0x20, Type: StructProperty)
    void* PilgrimMusicBattleInstanceClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHaveTriggeredMBIFinished; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3B]; // 0x00E1
    std::uint8_t bCreateSpectatorMBI; // 0x011C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_SongGameplay, StageTeleportTagRequirements) == 184, "Offset mismatch for UPilgrimQuickplayState_SongGameplay::StageTeleportTagRequirements");
static_assert(offsetof(UPilgrimQuickplayState_SongGameplay, PilgrimMusicBattleInstanceClass) == 216, "Offset mismatch for UPilgrimQuickplayState_SongGameplay::PilgrimMusicBattleInstanceClass");
static_assert(offsetof(UPilgrimQuickplayState_SongGameplay, bHaveTriggeredMBIFinished) == 224, "Offset mismatch for UPilgrimQuickplayState_SongGameplay::bHaveTriggeredMBIFinished");
static_assert(offsetof(UPilgrimQuickplayState_SongGameplay, bCreateSpectatorMBI) == 284, "Offset mismatch for UPilgrimQuickplayState_SongGameplay::bCreateSpectatorMBI");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults
// Kind: Class; super: PilgrimQuickplayStateBase
class UPilgrimQuickplayState_SongResults
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    double ServerEndTime; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t WaitTimeWithMoreSongs[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTimeWithNoMoreSongs[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTimeAllPlayersReady[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTimerHandle[0x8]; // 0x0138 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayerList[0x10]; // 0x0140 (Size: 0x10, Type: SetProperty)
    TSet<void*> ReadyPlayers; // 0x0150 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPilgrimQuickplayState_SongResults, ServerEndTime) == 184, "Offset mismatch for UPilgrimQuickplayState_SongResults::ServerEndTime");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, WaitTimeWithMoreSongs) == 192, "Offset mismatch for UPilgrimQuickplayState_SongResults::WaitTimeWithMoreSongs");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, WaitTimeWithNoMoreSongs) == 232, "Offset mismatch for UPilgrimQuickplayState_SongResults::WaitTimeWithNoMoreSongs");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, WaitTimeAllPlayersReady) == 272, "Offset mismatch for UPilgrimQuickplayState_SongResults::WaitTimeAllPlayersReady");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, WaitTimerHandle) == 312, "Offset mismatch for UPilgrimQuickplayState_SongResults::WaitTimerHandle");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, PlayerList) == 320, "Offset mismatch for UPilgrimQuickplayState_SongResults::PlayerList");
static_assert(offsetof(UPilgrimQuickplayState_SongResults, ReadyPlayers) == 336, "Offset mismatch for UPilgrimQuickplayState_SongResults::ReadyPlayers");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplayStreamingAnalytics
// Kind: Class; super: PlayspaceComponent
class UPilgrimQuickplayStreamingAnalytics
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

static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::PrimaryComponentTick");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, ComponentTags) == 104, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::ComponentTags");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, AssetUserData) == 120, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::AssetUserData");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::UCSSerializationIndex");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, bNetAddressable) == 152, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::bNetAddressable");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, bAutoActivate) == 154, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::bAutoActivate");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::bIsEditorOnly");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, CreationMethod) == 185, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::CreationMethod");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, OnComponentActivated) == 186, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::OnComponentActivated");
static_assert(offsetof(UPilgrimQuickplayStreamingAnalytics, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimQuickplayStreamingAnalytics::OnComponentDeactivated");

// /Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent
// Kind: Class; super: ActorComponent
class UPilgrimQuickplaySuspendHandleComponent
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

static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::ComponentTags");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::AssetUserData");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::bNetAddressable");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::bAutoActivate");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::CreationMethod");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimQuickplaySuspendHandleComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimQuickplaySuspendHandleComponent::OnComponentDeactivated");

// /Script/PilgrimQuickplayRuntime.PilgrimSessionPlayerCountComponent
// Kind: Class; super: FortPlayspaceComponent
class UPilgrimSessionPlayerCountComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t bIsSoloUserSession; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSessionPlayerCountComponent, bIsSoloUserSession) == 280, "Offset mismatch for UPilgrimSessionPlayerCountComponent::bIsSoloUserSession");

// /Script/PilgrimQuickplayRuntime.PilgrimSetlistComponent
// Kind: Class; super: PilgrimGameModeComponentBase
class UPilgrimSetlistComponent
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t ActiveSetlistData[0x88]; // 0x00E8 (Size: 0x88, Type: StructProperty)
    std::uint8_t bCustomSetlistsEnabled; // 0x0170 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSetlistComponent, ActiveSetlistData) == 232, "Offset mismatch for UPilgrimSetlistComponent::ActiveSetlistData");
static_assert(offsetof(UPilgrimSetlistComponent, bCustomSetlistsEnabled) == 368, "Offset mismatch for UPilgrimSetlistComponent::bCustomSetlistsEnabled");

// /Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent
// Kind: Class; super: PilgrimPawnComponent
class UPilgrimStandinPawnComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t SpawninEffect[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimStandinPawnComponent, SpawninEffect) == 208, "Offset mismatch for UPilgrimStandinPawnComponent::SpawninEffect");
