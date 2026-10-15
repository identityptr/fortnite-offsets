/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimCoreRuntime.DifficultyInfo
// Kind: ScriptStruct; super: none
struct FDifficultyInfo
{
public:
    TArray<void*> GemsInProgress; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDifficultyInfo, GemsInProgress) == 0, "Offset mismatch for FDifficultyInfo::GemsInProgress");

// /Script/PilgrimCoreRuntime.MinimalSongTimestampData
// Kind: ScriptStruct; super: none
struct FMinimalSongTimestampData
{
public:
    float ServerWorldTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SecondsIncludingCountIn; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMinimalSongTimestampData, ServerWorldTime) == 0, "Offset mismatch for FMinimalSongTimestampData::ServerWorldTime");
static_assert(offsetof(FMinimalSongTimestampData, SecondsIncludingCountIn) == 4, "Offset mismatch for FMinimalSongTimestampData::SecondsIncludingCountIn");

// /Script/PilgrimCoreRuntime.MusicClockCatchUpData
// Kind: ScriptStruct; super: none
struct FMusicClockCatchUpData
{
public:
    std::uint8_t StartData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float StartTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxDesyncMs; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicClockCatchUpData, StartData) == 0, "Offset mismatch for FMusicClockCatchUpData::StartData");
static_assert(offsetof(FMusicClockCatchUpData, StartTime) == 16, "Offset mismatch for FMusicClockCatchUpData::StartTime");
static_assert(offsetof(FMusicClockCatchUpData, MaxDesyncMs) == 20, "Offset mismatch for FMusicClockCatchUpData::MaxDesyncMs");

// /Script/PilgrimCoreRuntime.MusicClockCatchUpEnded
// Kind: ScriptStruct; super: none
struct FMusicClockCatchUpEnded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.MusicClockCatchUpStarted
// Kind: ScriptStruct; super: none
struct FMusicClockCatchUpStarted
{
public:
    float CatchupSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentExperiencedTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> WeakLocalPlayer; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMusicClockCatchUpStarted, CatchupSpeed) == 0, "Offset mismatch for FMusicClockCatchUpStarted::CatchupSpeed");
static_assert(offsetof(FMusicClockCatchUpStarted, CurrentExperiencedTime) == 4, "Offset mismatch for FMusicClockCatchUpStarted::CurrentExperiencedTime");
static_assert(offsetof(FMusicClockCatchUpStarted, WeakLocalPlayer) == 8, "Offset mismatch for FMusicClockCatchUpStarted::WeakLocalPlayer");

// /Script/PilgrimCoreRuntime.MusicClockCatchUpUpdated
// Kind: ScriptStruct; super: none
struct FMusicClockCatchUpUpdated
{
public:
    float DeltaTimestamp; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicClockCatchUpUpdated, DeltaTimestamp) == 0, "Offset mismatch for FMusicClockCatchUpUpdated::DeltaTimestamp");

// /Script/PilgrimCoreRuntime.PilgrimAccuracyTier
// Kind: ScriptStruct; super: none
struct FPilgrimAccuracyTier
{
public:
    float ThresholdMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ScoreMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    FText Name; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPilgrimAccuracyTier, ThresholdMs) == 0, "Offset mismatch for FPilgrimAccuracyTier::ThresholdMs");
static_assert(offsetof(FPilgrimAccuracyTier, ScoreMultiplier) == 4, "Offset mismatch for FPilgrimAccuracyTier::ScoreMultiplier");
static_assert(offsetof(FPilgrimAccuracyTier, Name) == 8, "Offset mismatch for FPilgrimAccuracyTier::Name");

// /Script/PilgrimCoreRuntime.PilgrimActorPoolParams
// Kind: ScriptStruct; super: none
struct FPilgrimActorPoolParams
{
public:
    void* ActorClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t InitialPoolSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDeferActorSpawnAndDestroy; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepExcessActors; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimActorPoolParams, ActorClass) == 0, "Offset mismatch for FPilgrimActorPoolParams::ActorClass");
static_assert(offsetof(FPilgrimActorPoolParams, InitialPoolSize) == 8, "Offset mismatch for FPilgrimActorPoolParams::InitialPoolSize");
static_assert(offsetof(FPilgrimActorPoolParams, bDeferActorSpawnAndDestroy) == 12, "Offset mismatch for FPilgrimActorPoolParams::bDeferActorSpawnAndDestroy");
static_assert(offsetof(FPilgrimActorPoolParams, bKeepExcessActors) == 13, "Offset mismatch for FPilgrimActorPoolParams::bKeepExcessActors");

// /Script/PilgrimCoreRuntime.PilgrimAnalyticsEvent_ResultsReturn
// Kind: ScriptStruct; super: none
struct FPilgrimAnalyticsEvent_ResultsReturn
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ResultsReturn; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimAnalyticsEvent_ResultsReturn, PlayerController) == 0, "Offset mismatch for FPilgrimAnalyticsEvent_ResultsReturn::PlayerController");
static_assert(offsetof(FPilgrimAnalyticsEvent_ResultsReturn, ResultsReturn) == 8, "Offset mismatch for FPilgrimAnalyticsEvent_ResultsReturn::ResultsReturn");

// /Script/PilgrimCoreRuntime.PilgrimBotAccuracyData
// Kind: ScriptStruct; super: none
struct FPilgrimBotAccuracyData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimCaptureConfigOverride
// Kind: ScriptStruct; super: none
struct FPilgrimCaptureConfigOverride
{
public:
    std::uint8_t CaptureTransformOverride[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    float CaptureFOVOverride; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimCaptureConfigOverride, CaptureTransformOverride) == 0, "Offset mismatch for FPilgrimCaptureConfigOverride::CaptureTransformOverride");
static_assert(offsetof(FPilgrimCaptureConfigOverride, CaptureFOVOverride) == 96, "Offset mismatch for FPilgrimCaptureConfigOverride::CaptureFOVOverride");

// /Script/PilgrimCoreRuntime.PilgrimCheatPerformanceArgument
// Kind: ScriptStruct; super: none
struct FPilgrimCheatPerformanceArgument
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimCoreToggleRenderTargetEvent
// Kind: ScriptStruct; super: none
struct FPilgrimCoreToggleRenderTargetEvent
{
public:
    std::uint8_t bToggleRenderTargetOn; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimCoreToggleRenderTargetEvent, bToggleRenderTargetOn) == 0, "Offset mismatch for FPilgrimCoreToggleRenderTargetEvent::bToggleRenderTargetOn");

// /Script/PilgrimCoreRuntime.PilgrimCreateTrackAndGemsParams
// Kind: ScriptStruct; super: none
struct FPilgrimCreateTrackAndGemsParams
{
public:
    void* PilgrimGameOwner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGameConfig; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* PlayerController; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongDifficulty; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    std::int32_t CurrentTrackIndex; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalTracksToSpawn; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, PilgrimGameOwner) == 0, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::PilgrimGameOwner");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, PilgrimGameConfig) == 8, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::PilgrimGameConfig");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, PlayerController) == 16, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::PlayerController");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, SongDifficulty) == 24, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::SongDifficulty");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, TrackType) == 25, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::TrackType");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, CurrentTrackIndex) == 28, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::CurrentTrackIndex");
static_assert(offsetof(FPilgrimCreateTrackAndGemsParams, TotalTracksToSpawn) == 32, "Offset mismatch for FPilgrimCreateTrackAndGemsParams::TotalTracksToSpawn");

// /Script/PilgrimCoreRuntime.PilgrimCustomSetlistEntry
// Kind: ScriptStruct; super: none
struct FPilgrimCustomSetlistEntry
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> AddedByPlayer; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimCustomSetlistEntry, SongShortName) == 0, "Offset mismatch for FPilgrimCustomSetlistEntry::SongShortName");
static_assert(offsetof(FPilgrimCustomSetlistEntry, AddedByPlayer) == 4, "Offset mismatch for FPilgrimCustomSetlistEntry::AddedByPlayer");

// /Script/PilgrimCoreRuntime.PilgrimDefaultUnbindingData
// Kind: ScriptStruct; super: TableRowBase
struct FPilgrimDefaultUnbindingData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bDoUnbindPressed; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoUnbindReleased; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimDefaultUnbindingData, bDoUnbindPressed) == 8, "Offset mismatch for FPilgrimDefaultUnbindingData::bDoUnbindPressed");
static_assert(offsetof(FPilgrimDefaultUnbindingData, bDoUnbindReleased) == 9, "Offset mismatch for FPilgrimDefaultUnbindingData::bDoUnbindReleased");

// /Script/PilgrimCoreRuntime.PilgrimDifficultyTrackTypePair
// Kind: ScriptStruct; super: none
struct FPilgrimDifficultyTrackTypePair
{
public:
    std::uint8_t Difficulty; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackType; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimDifficultyTrackTypePair, Difficulty) == 0, "Offset mismatch for FPilgrimDifficultyTrackTypePair::Difficulty");
static_assert(offsetof(FPilgrimDifficultyTrackTypePair, TrackType) == 1, "Offset mismatch for FPilgrimDifficultyTrackTypePair::TrackType");

// /Script/PilgrimCoreRuntime.PilgrimDuelInfo
// Kind: ScriptStruct; super: none
struct FPilgrimDuelInfo
{
public:
    std::uint8_t EventMessage[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> Pawn; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t OriginalLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t OriginalRotation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimDuelInfo, EventMessage) == 0, "Offset mismatch for FPilgrimDuelInfo::EventMessage");
static_assert(offsetof(FPilgrimDuelInfo, Pawn) == 4, "Offset mismatch for FPilgrimDuelInfo::Pawn");
static_assert(offsetof(FPilgrimDuelInfo, OriginalLocation) == 16, "Offset mismatch for FPilgrimDuelInfo::OriginalLocation");
static_assert(offsetof(FPilgrimDuelInfo, OriginalRotation) == 40, "Offset mismatch for FPilgrimDuelInfo::OriginalRotation");

// /Script/PilgrimCoreRuntime.PilgrimEvaluatorGuitarState
// Kind: ScriptStruct; super: none
struct FPilgrimEvaluatorGuitarState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvaluatorState
// Kind: ScriptStruct; super: none
struct FPilgrimEvaluatorState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEventCacheDownload
// Kind: ScriptStruct; super: none
struct FPilgrimEventCacheDownload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEventMessageData
// Kind: ScriptStruct; super: none
struct FPilgrimEventMessageData
{
public:
    std::uint8_t EventMessage[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Challenger[0x40]; // 0x0008 (Size: 0x40, Type: StructProperty)
    std::uint8_t Challenged[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEventMessageData, EventMessage) == 0, "Offset mismatch for FPilgrimEventMessageData::EventMessage");
static_assert(offsetof(FPilgrimEventMessageData, Challenger) == 8, "Offset mismatch for FPilgrimEventMessageData::Challenger");
static_assert(offsetof(FPilgrimEventMessageData, Challenged) == 72, "Offset mismatch for FPilgrimEventMessageData::Challenged");

// /Script/PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested
{
public:
    float Offset; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested, Offset) == 0, "Offset mismatch for FPilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested::Offset");

// /Script/PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested
{
public:
    TArray<void*> Samples; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested, Samples) == 0, "Offset mismatch for FPilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested::Samples");

// /Script/PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_OffsetChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_AutoCalibration_OffsetChanged
{
public:
    float Offset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SampleAverage; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_AutoCalibration_OffsetChanged, Offset) == 0, "Offset mismatch for FPilgrimEvent_AutoCalibration_OffsetChanged::Offset");
static_assert(offsetof(FPilgrimEvent_AutoCalibration_OffsetChanged, SampleAverage) == 4, "Offset mismatch for FPilgrimEvent_AutoCalibration_OffsetChanged::SampleAverage");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllMaxStreakChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_AllMaxStreakChanged
{
public:
    std::uint8_t bAllPlayersHaveMaxStreak; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_AllMaxStreakChanged, bAllPlayersHaveMaxStreak) == 0, "Offset mismatch for FPilgrimEvent_BandState_AllMaxStreakChanged::bAllPlayersHaveMaxStreak");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveActiveChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_AllOverdriveActiveChanged
{
public:
    std::uint8_t bAllPlayersHaveActiveOverdrive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_AllOverdriveActiveChanged, bAllPlayersHaveActiveOverdrive) == 0, "Offset mismatch for FPilgrimEvent_BandState_AllOverdriveActiveChanged::bAllPlayersHaveActiveOverdrive");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveReadyChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_AllOverdriveReadyChanged
{
public:
    std::uint8_t bAllPlayersHaveOverdriveReady; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_AllOverdriveReadyChanged, bAllPlayersHaveOverdriveReady) == 0, "Offset mismatch for FPilgrimEvent_BandState_AllOverdriveReadyChanged::bAllPlayersHaveOverdriveReady");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_BandHealthChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_BandHealthChanged
{
public:
    float LastBandHealth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NewBandHealth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t LastBandHealthTier; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NewBandHealthTier; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_BandHealthChanged, LastBandHealth) == 0, "Offset mismatch for FPilgrimEvent_BandState_BandHealthChanged::LastBandHealth");
static_assert(offsetof(FPilgrimEvent_BandState_BandHealthChanged, NewBandHealth) == 4, "Offset mismatch for FPilgrimEvent_BandState_BandHealthChanged::NewBandHealth");
static_assert(offsetof(FPilgrimEvent_BandState_BandHealthChanged, LastBandHealthTier) == 8, "Offset mismatch for FPilgrimEvent_BandState_BandHealthChanged::LastBandHealthTier");
static_assert(offsetof(FPilgrimEvent_BandState_BandHealthChanged, NewBandHealthTier) == 12, "Offset mismatch for FPilgrimEvent_BandState_BandHealthChanged::NewBandHealthTier");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_CustomSetlistChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_CustomSetlistChanged
{
public:
    TWeakObjectPtr<void> ChangedSetlist; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_CustomSetlistChanged, ChangedSetlist) == 0, "Offset mismatch for FPilgrimEvent_BandState_CustomSetlistChanged::ChangedSetlist");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_OverdriveActiveChanged
{
public:
    std::uint8_t IsActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ForPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_OverdriveActiveChanged, IsActive) == 0, "Offset mismatch for FPilgrimEvent_BandState_OverdriveActiveChanged::IsActive");
static_assert(offsetof(FPilgrimEvent_BandState_OverdriveActiveChanged, ForPlayer) == 8, "Offset mismatch for FPilgrimEvent_BandState_OverdriveActiveChanged::ForPlayer");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
{
public:
    std::uint8_t Membership[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged, Membership) == 0, "Offset mismatch for FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged::Membership");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_OverdriveReadyChanged
{
public:
    std::uint8_t IsReady; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ForPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_OverdriveReadyChanged, IsReady) == 0, "Offset mismatch for FPilgrimEvent_BandState_OverdriveReadyChanged::IsReady");
static_assert(offsetof(FPilgrimEvent_BandState_OverdriveReadyChanged, ForPlayer) == 8, "Offset mismatch for FPilgrimEvent_BandState_OverdriveReadyChanged::ForPlayer");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
{
public:
    std::uint8_t Membership[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged, Membership) == 0, "Offset mismatch for FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged::Membership");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_PlayerHealthChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_PlayerHealthChanged
{
public:
    float LastPlayerHealth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NewPlayerHealth; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_PlayerHealthChanged, LastPlayerHealth) == 0, "Offset mismatch for FPilgrimEvent_BandState_PlayerHealthChanged::LastPlayerHealth");
static_assert(offsetof(FPilgrimEvent_BandState_PlayerHealthChanged, NewPlayerHealth) == 4, "Offset mismatch for FPilgrimEvent_BandState_PlayerHealthChanged::NewPlayerHealth");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_ReadinessChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_ReadinessChanged
{
public:
    std::uint8_t bAreAllPlayersReady; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_ReadinessChanged, bAreAllPlayersReady) == 0, "Offset mismatch for FPilgrimEvent_BandState_ReadinessChanged::bAreAllPlayersReady");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistLockedStateChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_SetlistLockedStateChanged
{
public:
    TWeakObjectPtr<void> ChangedSetlist; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsSetlistLocked; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_SetlistLockedStateChanged, ChangedSetlist) == 0, "Offset mismatch for FPilgrimEvent_BandState_SetlistLockedStateChanged::ChangedSetlist");
static_assert(offsetof(FPilgrimEvent_BandState_SetlistLockedStateChanged, bIsSetlistLocked) == 8, "Offset mismatch for FPilgrimEvent_BandState_SetlistLockedStateChanged::bIsSetlistLocked");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistSongAdded
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_SetlistSongAdded
{
public:
    std::uint8_t SongAdded[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_SetlistSongAdded, SongAdded) == 0, "Offset mismatch for FPilgrimEvent_BandState_SetlistSongAdded::SongAdded");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistSongRemoved
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_SetlistSongRemoved
{
public:
    std::uint8_t SongRemoved[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_SetlistSongRemoved, SongRemoved) == 0, "Offset mismatch for FPilgrimEvent_BandState_SetlistSongRemoved::SongRemoved");

// /Script/PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistVoteWinnerChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_BandState_SetlistVoteWinnerChanged
{
public:
    void* NewVoteWinner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PrevVoteWinner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_BandState_SetlistVoteWinnerChanged, NewVoteWinner) == 0, "Offset mismatch for FPilgrimEvent_BandState_SetlistVoteWinnerChanged::NewVoteWinner");
static_assert(offsetof(FPilgrimEvent_BandState_SetlistVoteWinnerChanged, PrevVoteWinner) == 8, "Offset mismatch for FPilgrimEvent_BandState_SetlistVoteWinnerChanged::PrevVoteWinner");

// /Script/PilgrimCoreRuntime.PilgrimEvent_CameraPresetChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_CameraPresetChanged
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimEvent_CameraPresetChanged, Name) == 0, "Offset mismatch for FPilgrimEvent_CameraPresetChanged::Name");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Cheat_SeekFinished
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Cheat_SeekFinished
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_Cheat_SeekToTime
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Cheat_SeekToTime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_EnableChoppedCheeseCvarChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_EnableChoppedCheeseCvarChanged
{
public:
    std::uint8_t bIsChoppedCheeseCvarEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_EnableChoppedCheeseCvarChanged, bIsChoppedCheeseCvarEnabled) == 0, "Offset mismatch for FPilgrimEvent_EnableChoppedCheeseCvarChanged::bIsChoppedCheeseCvarEnabled");

// /Script/PilgrimCoreRuntime.PilgrimEvent_EnableChoppedCheeseOverridePartCvarChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_EnableChoppedCheeseOverridePartCvarChanged
{
public:
    std::uint8_t bIsChoppedCheeseOverridePartCvarEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_EnableChoppedCheeseOverridePartCvarChanged, bIsChoppedCheeseOverridePartCvarEnabled) == 0, "Offset mismatch for FPilgrimEvent_EnableChoppedCheeseOverridePartCvarChanged::bIsChoppedCheeseOverridePartCvarEnabled");

// /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Base
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_GemBreak_Base
{
public:
    std::uint8_t Break[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* Listener; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float CurrentSongMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentSongBar; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_GemBreak_Base, Break) == 0, "Offset mismatch for FPilgrimEvent_GemBreak_Base::Break");
static_assert(offsetof(FPilgrimEvent_GemBreak_Base, Listener) == 40, "Offset mismatch for FPilgrimEvent_GemBreak_Base::Listener");
static_assert(offsetof(FPilgrimEvent_GemBreak_Base, PlayerState) == 48, "Offset mismatch for FPilgrimEvent_GemBreak_Base::PlayerState");
static_assert(offsetof(FPilgrimEvent_GemBreak_Base, CurrentSongMS) == 56, "Offset mismatch for FPilgrimEvent_GemBreak_Base::CurrentSongMS");
static_assert(offsetof(FPilgrimEvent_GemBreak_Base, CurrentSongBar) == 60, "Offset mismatch for FPilgrimEvent_GemBreak_Base::CurrentSongBar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_End_Pending
// Kind: ScriptStruct; super: PilgrimEvent_GemBreak_Base
struct FPilgrimEvent_GemBreak_End_Pending
{
public:
    std::uint8_t Break[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* Listener; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float CurrentSongMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentSongBar; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_GemBreak_End_Pending, Break) == 0, "Offset mismatch for FPilgrimEvent_GemBreak_End_Pending::Break");
static_assert(offsetof(FPilgrimEvent_GemBreak_End_Pending, Listener) == 40, "Offset mismatch for FPilgrimEvent_GemBreak_End_Pending::Listener");
static_assert(offsetof(FPilgrimEvent_GemBreak_End_Pending, PlayerState) == 48, "Offset mismatch for FPilgrimEvent_GemBreak_End_Pending::PlayerState");
static_assert(offsetof(FPilgrimEvent_GemBreak_End_Pending, CurrentSongMS) == 56, "Offset mismatch for FPilgrimEvent_GemBreak_End_Pending::CurrentSongMS");
static_assert(offsetof(FPilgrimEvent_GemBreak_End_Pending, CurrentSongBar) == 60, "Offset mismatch for FPilgrimEvent_GemBreak_End_Pending::CurrentSongBar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Ended
// Kind: ScriptStruct; super: PilgrimEvent_GemBreak_Base
struct FPilgrimEvent_GemBreak_Ended
{
public:
    std::uint8_t Break[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* Listener; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float CurrentSongMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentSongBar; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_GemBreak_Ended, Break) == 0, "Offset mismatch for FPilgrimEvent_GemBreak_Ended::Break");
static_assert(offsetof(FPilgrimEvent_GemBreak_Ended, Listener) == 40, "Offset mismatch for FPilgrimEvent_GemBreak_Ended::Listener");
static_assert(offsetof(FPilgrimEvent_GemBreak_Ended, PlayerState) == 48, "Offset mismatch for FPilgrimEvent_GemBreak_Ended::PlayerState");
static_assert(offsetof(FPilgrimEvent_GemBreak_Ended, CurrentSongMS) == 56, "Offset mismatch for FPilgrimEvent_GemBreak_Ended::CurrentSongMS");
static_assert(offsetof(FPilgrimEvent_GemBreak_Ended, CurrentSongBar) == 60, "Offset mismatch for FPilgrimEvent_GemBreak_Ended::CurrentSongBar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Pending
// Kind: ScriptStruct; super: PilgrimEvent_GemBreak_Base
struct FPilgrimEvent_GemBreak_Pending
{
public:
    std::uint8_t Break[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* Listener; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float CurrentSongMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentSongBar; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_GemBreak_Pending, Break) == 0, "Offset mismatch for FPilgrimEvent_GemBreak_Pending::Break");
static_assert(offsetof(FPilgrimEvent_GemBreak_Pending, Listener) == 40, "Offset mismatch for FPilgrimEvent_GemBreak_Pending::Listener");
static_assert(offsetof(FPilgrimEvent_GemBreak_Pending, PlayerState) == 48, "Offset mismatch for FPilgrimEvent_GemBreak_Pending::PlayerState");
static_assert(offsetof(FPilgrimEvent_GemBreak_Pending, CurrentSongMS) == 56, "Offset mismatch for FPilgrimEvent_GemBreak_Pending::CurrentSongMS");
static_assert(offsetof(FPilgrimEvent_GemBreak_Pending, CurrentSongBar) == 60, "Offset mismatch for FPilgrimEvent_GemBreak_Pending::CurrentSongBar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_GemBreak_Started
// Kind: ScriptStruct; super: PilgrimEvent_GemBreak_Base
struct FPilgrimEvent_GemBreak_Started
{
public:
    std::uint8_t Break[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* Listener; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PlayerState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float CurrentSongMS; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CurrentSongBar; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_GemBreak_Started, Break) == 0, "Offset mismatch for FPilgrimEvent_GemBreak_Started::Break");
static_assert(offsetof(FPilgrimEvent_GemBreak_Started, Listener) == 40, "Offset mismatch for FPilgrimEvent_GemBreak_Started::Listener");
static_assert(offsetof(FPilgrimEvent_GemBreak_Started, PlayerState) == 48, "Offset mismatch for FPilgrimEvent_GemBreak_Started::PlayerState");
static_assert(offsetof(FPilgrimEvent_GemBreak_Started, CurrentSongMS) == 56, "Offset mismatch for FPilgrimEvent_GemBreak_Started::CurrentSongMS");
static_assert(offsetof(FPilgrimEvent_GemBreak_Started, CurrentSongBar) == 60, "Offset mismatch for FPilgrimEvent_GemBreak_Started::CurrentSongBar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_InputOffsetCalculated
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_InputOffsetCalculated
{
public:
    std::uint8_t Lane; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Offset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t TrackerGemIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t GemInfo[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_InputOffsetCalculated, Lane) == 0, "Offset mismatch for FPilgrimEvent_InputOffsetCalculated::Lane");
static_assert(offsetof(FPilgrimEvent_InputOffsetCalculated, Offset) == 4, "Offset mismatch for FPilgrimEvent_InputOffsetCalculated::Offset");
static_assert(offsetof(FPilgrimEvent_InputOffsetCalculated, TrackerGemIndex) == 8, "Offset mismatch for FPilgrimEvent_InputOffsetCalculated::TrackerGemIndex");
static_assert(offsetof(FPilgrimEvent_InputOffsetCalculated, GemInfo) == 12, "Offset mismatch for FPilgrimEvent_InputOffsetCalculated::GemInfo");

// /Script/PilgrimCoreRuntime.PilgrimEvent_InputReceived
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_InputReceived
{
public:
    TWeakObjectPtr<void> UserController; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InputAction[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPressEvent; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_InputReceived, UserController) == 0, "Offset mismatch for FPilgrimEvent_InputReceived::UserController");
static_assert(offsetof(FPilgrimEvent_InputReceived, InputAction) == 8, "Offset mismatch for FPilgrimEvent_InputReceived::InputAction");
static_assert(offsetof(FPilgrimEvent_InputReceived, bPressEvent) == 12, "Offset mismatch for FPilgrimEvent_InputReceived::bPressEvent");

// /Script/PilgrimCoreRuntime.PilgrimEvent_KaraokeDataInitialized
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_KaraokeDataInitialized
{
public:
    std::int32_t MaxNumberOfWordsInPhrase; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_KaraokeDataInitialized, MaxNumberOfWordsInPhrase) == 0, "Offset mismatch for FPilgrimEvent_KaraokeDataInitialized::MaxNumberOfWordsInPhrase");

// /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetActivated
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_KeybindPresetActivated
{
public:
    void* InputMappingContextGamepad; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InputMappingContextKeyboard; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_KeybindPresetActivated, InputMappingContextGamepad) == 0, "Offset mismatch for FPilgrimEvent_KeybindPresetActivated::InputMappingContextGamepad");
static_assert(offsetof(FPilgrimEvent_KeybindPresetActivated, InputMappingContextKeyboard) == 8, "Offset mismatch for FPilgrimEvent_KeybindPresetActivated::InputMappingContextKeyboard");

// /Script/PilgrimCoreRuntime.PilgrimEvent_KeybindPresetChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_KeybindPresetChanged
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* InputMappingContext; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_KeybindPresetChanged, Name) == 0, "Offset mismatch for FPilgrimEvent_KeybindPresetChanged::Name");
static_assert(offsetof(FPilgrimEvent_KeybindPresetChanged, InputMappingContext) == 16, "Offset mismatch for FPilgrimEvent_KeybindPresetChanged::InputMappingContext");

// /Script/PilgrimCoreRuntime.PilgrimEvent_LocalPlayerMiss
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_LocalPlayerMiss
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentTrackType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Lanes; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_LocalPlayerMiss, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_LocalPlayerMiss::PlayerState");
static_assert(offsetof(FPilgrimEvent_LocalPlayerMiss, CurrentTrackType) == 8, "Offset mismatch for FPilgrimEvent_LocalPlayerMiss::CurrentTrackType");
static_assert(offsetof(FPilgrimEvent_LocalPlayerMiss, Lanes) == 9, "Offset mismatch for FPilgrimEvent_LocalPlayerMiss::Lanes");

// /Script/PilgrimCoreRuntime.PilgrimEvent_LocalPlayerStrummed
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_LocalPlayerStrummed
{
public:
    TArray<void*> LanesPressed; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_LocalPlayerStrummed, LanesPressed) == 0, "Offset mismatch for FPilgrimEvent_LocalPlayerStrummed::LanesPressed");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_CVarEnableTraversalChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_MBI_CVarEnableTraversalChanged
{
public:
    std::uint8_t EnabledTraversal; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_CVarEnableTraversalChanged, EnabledTraversal) == 0, "Offset mismatch for FPilgrimEvent_MBI_CVarEnableTraversalChanged::EnabledTraversal");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientGotSongToPlay
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_ClientGotSongToPlay
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SongToPlay; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_ClientGotSongToPlay, SongToPlay) == 8, "Offset mismatch for FPilgrimEvent_MBI_ClientGotSongToPlay::SongToPlay");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientPlayingSong
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_ClientPlayingSong
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_ClientPlayingSong, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_ClientPlayingSong::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ClientStopSong
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_ClientStopSong
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_ClientStopSong, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_ClientStopSong::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_EventBase
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_MBI_EventBase
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_EventBase, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_EventBase::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Finished
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_Finished
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_Finished, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_Finished::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerDecidedSongToPlay
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_ServerDecidedSongToPlay
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SongToPlay; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_ServerDecidedSongToPlay, SongToPlay) == 8, "Offset mismatch for FPilgrimEvent_MBI_ServerDecidedSongToPlay::SongToPlay");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_ServerInitializedScoring
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_ServerInitializedScoring
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_ServerInitializedScoring, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_ServerInitializedScoring::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_SongLoaded
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_SongLoaded
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> LoadedSong; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PlayMethod; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_SongLoaded, LoadedSong) == 8, "Offset mismatch for FPilgrimEvent_MBI_SongLoaded::LoadedSong");
static_assert(offsetof(FPilgrimEvent_MBI_SongLoaded, PlayMethod) == 16, "Offset mismatch for FPilgrimEvent_MBI_SongLoaded::PlayMethod");

// /Script/PilgrimCoreRuntime.PilgrimEvent_MBI_Started
// Kind: ScriptStruct; super: PilgrimEvent_MBI_EventBase
struct FPilgrimEvent_MBI_Started
{
public:
    TWeakObjectPtr<void> MusicBattleInstance; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_MBI_Started, MusicBattleInstance) == 0, "Offset mismatch for FPilgrimEvent_MBI_Started::MusicBattleInstance");

// /Script/PilgrimCoreRuntime.PilgrimEvent_OnPhraseProcessed
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_OnPhraseProcessed
{
public:
    TArray<void*> Lyrics; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_OnPhraseProcessed, Lyrics) == 0, "Offset mismatch for FPilgrimEvent_OnPhraseProcessed::Lyrics");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PartPickerOpen
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PartPickerOpen
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsEnhacedInputAction; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PartPickerOpen, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_PartPickerOpen::PlayerController");
static_assert(offsetof(FPilgrimEvent_PartPickerOpen, bIsEnhacedInputAction) == 8, "Offset mismatch for FPilgrimEvent_PartPickerOpen::bIsEnhacedInputAction");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PartPickerProVocalsSelected
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PartPickerProVocalsSelected
{
public:
    std::uint8_t bIsEntryFocused; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PartPickerProVocalsSelected, bIsEntryFocused) == 0, "Offset mismatch for FPilgrimEvent_PartPickerProVocalsSelected::bIsEntryFocused");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_ClientKicked
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_ClientKicked
{
public:
    std::uint8_t Reason; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString MediaErrorReason; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Detail; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_ClientKicked, Reason) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_ClientKicked::Reason");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ClientKicked, MediaErrorReason) == 8, "Offset mismatch for FPilgrimEvent_PilgrimGame_ClientKicked::MediaErrorReason");
static_assert(offsetof(FPilgrimEvent_PilgrimGame_ClientKicked, Detail) == 24, "Offset mismatch for FPilgrimEvent_PilgrimGame_ClientKicked::Detail");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_GameplayLogCurrentTickUpdate
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_GameplayLogCurrentTickUpdate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_GameplayLogEvent
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_GameplayLogEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_GameplayLogGuitarStateUpdate
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_GameplayLogGuitarStateUpdate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_PlayingSong
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_PlayingSong
{
public:
    void* PilgrimGame; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_PlayingSong, PilgrimGame) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_PlayingSong::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_RequestWriteGameplayLog
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_RequestWriteGameplayLog
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_SongStopped
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_SongStopped
{
public:
    void* PilgrimGame; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_SongStopped, PilgrimGame) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_SongStopped::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_TrackFadeEnded
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimGame_TrackFadeEnded
{
public:
    void* PilgrimGame; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimGame_TrackFadeEnded, PilgrimGame) == 0, "Offset mismatch for FPilgrimEvent_PilgrimGame_TrackFadeEnded::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged
{
public:
    void* Track; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float SecondaryElementsPhase; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged, Track) == 0, "Offset mismatch for FPilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged::Track");
static_assert(offsetof(FPilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged, SecondaryElementsPhase) == 8, "Offset mismatch for FPilgrimEvent_PilgrimTrack_SecondaryElementsPhaseChanged::SecondaryElementsPhase");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerExperience_PlayerOpenedSongSelectMenu
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerExperience_PlayerOpenedSongSelectMenu
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerExperience_PlayerOpenedSongSelectMenu, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerExperience_PlayerOpenedSongSelectMenu::ForPlayer");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerExperience_SelectedASong
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerExperience_SelectedASong
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerExperience_SelectedASong, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerExperience_SelectedASong::ForPlayer");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ConnectedPeripheralsChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PeripheralType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConnectionState; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged, PeripheralType) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged::PeripheralType");
static_assert(offsetof(FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged, ConnectionState) == 9, "Offset mismatch for FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged::ConnectionState");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_DifficultyChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_DifficultyChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NewSongDifficulty; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrevSongDifficulty; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_DifficultyChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_DifficultyChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_PlayerState_DifficultyChanged, NewSongDifficulty) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_DifficultyChanged::NewSongDifficulty");
static_assert(offsetof(FPilgrimEvent_PlayerState_DifficultyChanged, PrevSongDifficulty) == 9, "Offset mismatch for FPilgrimEvent_PlayerState_DifficultyChanged::PrevSongDifficulty");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_HasConnectedPeripheralChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PeripheralType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HasConnectedPeripheral; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged, PeripheralType) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged::PeripheralType");
static_assert(offsetof(FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged, HasConnectedPeripheral) == 9, "Offset mismatch for FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged::HasConnectedPeripheral");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_HighscoreChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_HighscoreChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NewHighScore[0x100]; // 0x0008 (Size: 0x100, Type: StructProperty)
    std::uint8_t PrevHighscore[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_HighscoreChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_HighscoreChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_HighscoreChanged, NewHighScore) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_HighscoreChanged::NewHighScore");
static_assert(offsetof(FPilgrimEvent_PlayerState_HighscoreChanged, PrevHighscore) == 264, "Offset mismatch for FPilgrimEvent_PlayerState_HighscoreChanged::PrevHighscore");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_InstrumentChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_InstrumentChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NewInstrumentChoice; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrevInstrumentChoice; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_InstrumentChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_InstrumentChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_PlayerState_InstrumentChanged, NewInstrumentChoice) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_InstrumentChanged::NewInstrumentChoice");
static_assert(offsetof(FPilgrimEvent_PlayerState_InstrumentChanged, PrevInstrumentChoice) == 9, "Offset mismatch for FPilgrimEvent_PlayerState_InstrumentChanged::PrevInstrumentChoice");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_NewHighscore
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_NewHighscore
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Score; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t BestType; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_NewHighscore, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_NewHighscore::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_NewHighscore, Score) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_NewHighscore::Score");
static_assert(offsetof(FPilgrimEvent_PlayerState_NewHighscore, BestType) == 12, "Offset mismatch for FPilgrimEvent_PlayerState_NewHighscore::BestType");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_PartPickingStateChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_PartPickingStateChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PartPickingState; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PreviousState; // 0x0009 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_PartPickingStateChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_PartPickingStateChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_PlayerState_PartPickingStateChanged, PartPickingState) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_PartPickingStateChanged::PartPickingState");
static_assert(offsetof(FPilgrimEvent_PlayerState_PartPickingStateChanged, PreviousState) == 9, "Offset mismatch for FPilgrimEvent_PlayerState_PartPickingStateChanged::PreviousState");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NewConnectionState; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t RemainingConnectedDevicesForUser; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged::PlayerController");
static_assert(offsetof(FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged, NewConnectionState) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged::NewConnectionState");
static_assert(offsetof(FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged, RemainingConnectedDevicesForUser) == 12, "Offset mismatch for FPilgrimEvent_PlayerState_PlayerInputDeviceConnectionChanged::RemainingConnectedDevicesForUser");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_PregameChoicesLockedChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_PregameChoicesLockedChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPregameChoicesLocked; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_PregameChoicesLockedChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_PregameChoicesLockedChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_PregameChoicesLockedChanged, bPregameChoicesLocked) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_PregameChoicesLockedChanged::bPregameChoicesLocked");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ReadinessChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_ReadinessChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsReady; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_ReadinessChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_ReadinessChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_ReadinessChanged, bIsReady) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_ReadinessChanged::bIsReady");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_ReadinessToReturnChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_ReadinessToReturnChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsReadyToReturn; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_ReadinessToReturnChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_ReadinessToReturnChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_ReadinessToReturnChanged, bIsReadyToReturn) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_ReadinessToReturnChanged::bIsReadyToReturn");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SetlistVoteChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_SetlistVoteChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NewSetlistVote; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* PrevSetlistVote; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_SetlistVoteChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_SetlistVoteChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_SetlistVoteChanged, NewSetlistVote) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_SetlistVoteChanged::NewSetlistVote");
static_assert(offsetof(FPilgrimEvent_PlayerState_SetlistVoteChanged, PrevSetlistVote) == 16, "Offset mismatch for FPilgrimEvent_PlayerState_SetlistVoteChanged::PrevSetlistVote");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SongSelectMenuStateChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_SongSelectMenuStateChanged
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMenuOpen; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_SongSelectMenuStateChanged, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_SongSelectMenuStateChanged::PlayerController");
static_assert(offsetof(FPilgrimEvent_PlayerState_SongSelectMenuStateChanged, bMenuOpen) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_SongSelectMenuStateChanged::bMenuOpen");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerState_SongVoteChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerState_SongVoteChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* NewSongVote; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* PrevSongVote; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerState_SongVoteChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerState_SongVoteChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerState_SongVoteChanged, NewSongVote) == 8, "Offset mismatch for FPilgrimEvent_PlayerState_SongVoteChanged::NewSongVote");
static_assert(offsetof(FPilgrimEvent_PlayerState_SongVoteChanged, PrevSongVote) == 16, "Offset mismatch for FPilgrimEvent_PlayerState_SongVoteChanged::PrevSongVote");

// /Script/PilgrimCoreRuntime.PilgrimEvent_PlayerUsingPeripheralChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_PlayerUsingPeripheralChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsUsingPeripheral; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInputDeviceValidForTrackType; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentPeripheralDeviceType; // 0x000A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_PlayerUsingPeripheralChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_PlayerUsingPeripheralChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_PlayerUsingPeripheralChanged, bIsUsingPeripheral) == 8, "Offset mismatch for FPilgrimEvent_PlayerUsingPeripheralChanged::bIsUsingPeripheral");
static_assert(offsetof(FPilgrimEvent_PlayerUsingPeripheralChanged, bIsInputDeviceValidForTrackType) == 9, "Offset mismatch for FPilgrimEvent_PlayerUsingPeripheralChanged::bIsInputDeviceValidForTrackType");
static_assert(offsetof(FPilgrimEvent_PlayerUsingPeripheralChanged, CurrentPeripheralDeviceType) == 10, "Offset mismatch for FPilgrimEvent_PlayerUsingPeripheralChanged::CurrentPeripheralDeviceType");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Playspace_PlayerAdded
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Playspace_PlayerAdded
{
public:
    std::uint8_t PlayerInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_Playspace_PlayerAdded, PlayerInfo) == 0, "Offset mismatch for FPilgrimEvent_Playspace_PlayerAdded::PlayerInfo");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Playspace_PlayerListState
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Playspace_PlayerListState
{
public:
    TArray<void*> PlayerList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MultiplayerState; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_Playspace_PlayerListState, PlayerList) == 0, "Offset mismatch for FPilgrimEvent_Playspace_PlayerListState::PlayerList");
static_assert(offsetof(FPilgrimEvent_Playspace_PlayerListState, MultiplayerState) == 16, "Offset mismatch for FPilgrimEvent_Playspace_PlayerListState::MultiplayerState");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Playspace_PlayerRemoved
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Playspace_PlayerRemoved
{
public:
    std::uint8_t PlayerInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimEvent_Playspace_PlayerRemoved, PlayerInfo) == 0, "Offset mismatch for FPilgrimEvent_Playspace_PlayerRemoved::PlayerInfo");

// /Script/PilgrimCoreRuntime.PilgrimEvent_QuickEmote_Pressed
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickEmote_Pressed
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickEmote_Pressed, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_QuickEmote_Pressed::PlayerController");

// /Script/PilgrimCoreRuntime.PilgrimEvent_QuickEmote_Released
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickEmote_Released
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickEmote_Released, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_QuickEmote_Released::PlayerController");

// /Script/PilgrimCoreRuntime.PilgrimEvent_QuickEmote_Stopped
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_QuickEmote_Stopped
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_QuickEmote_Stopped, PlayerController) == 0, "Offset mismatch for FPilgrimEvent_QuickEmote_Stopped::PlayerController");

// /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierAdded
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_ScoringModifierAdded
{
public:
    void* ScoringModifier; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ScoringModifiers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Target; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_ScoringModifierAdded, ScoringModifier) == 0, "Offset mismatch for FPilgrimEvent_ScoringModifierAdded::ScoringModifier");
static_assert(offsetof(FPilgrimEvent_ScoringModifierAdded, ScoringModifiers) == 8, "Offset mismatch for FPilgrimEvent_ScoringModifierAdded::ScoringModifiers");
static_assert(offsetof(FPilgrimEvent_ScoringModifierAdded, Target) == 24, "Offset mismatch for FPilgrimEvent_ScoringModifierAdded::Target");

// /Script/PilgrimCoreRuntime.PilgrimEvent_ScoringModifierRemoved
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_ScoringModifierRemoved
{
public:
    void* ScoringModifier; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RemainingScoringModifiers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Target; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_ScoringModifierRemoved, ScoringModifier) == 0, "Offset mismatch for FPilgrimEvent_ScoringModifierRemoved::ScoringModifier");
static_assert(offsetof(FPilgrimEvent_ScoringModifierRemoved, RemainingScoringModifiers) == 8, "Offset mismatch for FPilgrimEvent_ScoringModifierRemoved::RemainingScoringModifiers");
static_assert(offsetof(FPilgrimEvent_ScoringModifierRemoved, Target) == 24, "Offset mismatch for FPilgrimEvent_ScoringModifierRemoved::Target");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_AutoplayActiveChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_AutoplayActiveChanged
{
public:
    std::uint8_t bIsAutoplayActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_AutoplayActiveChanged, bIsAutoplayActive) == 0, "Offset mismatch for FPilgrimEvent_Scoring_AutoplayActiveChanged::bIsAutoplayActive");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FinishedOverdriveSection
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_FinishedOverdriveSection
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsSuccess; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_FinishedOverdriveSection, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_FinishedOverdriveSection::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_FinishedOverdriveSection, bIsSuccess) == 8, "Offset mismatch for FPilgrimEvent_Scoring_FinishedOverdriveSection::bIsSuccess");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_FullComboLost
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_FullComboLost
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PlayerIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_FullComboLost, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_FullComboLost::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_FullComboLost, PlayerIndex) == 8, "Offset mismatch for FPilgrimEvent_Scoring_FullComboLost::PlayerIndex");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_GemScored
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_GemScored
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Accuracy[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t Gem[0x4C]; // 0x0030 (Size: 0x4C, Type: StructProperty)
    float BaseScore; // 0x007C (Size: 0x4, Type: FloatProperty)
    float BonusScore; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_GemScored, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_GemScored::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_GemScored, Accuracy) == 8, "Offset mismatch for FPilgrimEvent_Scoring_GemScored::Accuracy");
static_assert(offsetof(FPilgrimEvent_Scoring_GemScored, Gem) == 48, "Offset mismatch for FPilgrimEvent_Scoring_GemScored::Gem");
static_assert(offsetof(FPilgrimEvent_Scoring_GemScored, BaseScore) == 124, "Offset mismatch for FPilgrimEvent_Scoring_GemScored::BaseScore");
static_assert(offsetof(FPilgrimEvent_Scoring_GemScored, BonusScore) == 128, "Offset mismatch for FPilgrimEvent_Scoring_GemScored::BonusScore");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_LocalPlayerBandScoreChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_LocalPlayerBandScoreChanged
{
public:
    float LocalPlayerBandStateScore; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_LocalPlayerBandScoreChanged, LocalPlayerBandStateScore) == 0, "Offset mismatch for FPilgrimEvent_Scoring_LocalPlayerBandScoreChanged::LocalPlayerBandStateScore");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_MaxStreakStateChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_MaxStreakStateChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PlayerIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAtMaxStreak; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_MaxStreakStateChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_MaxStreakStateChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_MaxStreakStateChanged, PlayerIndex) == 8, "Offset mismatch for FPilgrimEvent_Scoring_MaxStreakStateChanged::PlayerIndex");
static_assert(offsetof(FPilgrimEvent_Scoring_MaxStreakStateChanged, bIsAtMaxStreak) == 12, "Offset mismatch for FPilgrimEvent_Scoring_MaxStreakStateChanged::bIsAtMaxStreak");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_Modulated
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_Modulated
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float CurrentModulation; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LastModulation; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_Modulated, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_Modulated::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_Modulated, CurrentModulation) == 8, "Offset mismatch for FPilgrimEvent_Scoring_Modulated::CurrentModulation");
static_assert(offsetof(FPilgrimEvent_Scoring_Modulated, LastModulation) == 12, "Offset mismatch for FPilgrimEvent_Scoring_Modulated::LastModulation");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OnMistake
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_OnMistake
{
public:
    std::uint8_t MistakeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* player; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_OnMistake, MistakeType) == 0, "Offset mismatch for FPilgrimEvent_Scoring_OnMistake::MistakeType");
static_assert(offsetof(FPilgrimEvent_Scoring_OnMistake, player) == 8, "Offset mismatch for FPilgrimEvent_Scoring_OnMistake::player");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveActiveChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_OverdriveActiveChanged
{
public:
    std::uint8_t IsActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* DeployingPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_OverdriveActiveChanged, IsActive) == 0, "Offset mismatch for FPilgrimEvent_Scoring_OverdriveActiveChanged::IsActive");
static_assert(offsetof(FPilgrimEvent_Scoring_OverdriveActiveChanged, DeployingPlayer) == 8, "Offset mismatch for FPilgrimEvent_Scoring_OverdriveActiveChanged::DeployingPlayer");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveDrained
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_OverdriveDrained
{
public:
    void* OwningPlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float PreviousOverdrive; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_OverdriveDrained, OwningPlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_OverdriveDrained::OwningPlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_OverdriveDrained, PreviousOverdrive) == 8, "Offset mismatch for FPilgrimEvent_Scoring_OverdriveDrained::PreviousOverdrive");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveReady
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_OverdriveReady
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_OverdriveReady, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_OverdriveReady::PlayerState");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerfectComboLost
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_PerfectComboLost
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PlayerIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_PerfectComboLost, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_PerfectComboLost::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_PerfectComboLost, PlayerIndex) == 8, "Offset mismatch for FPilgrimEvent_Scoring_PerfectComboLost::PlayerIndex");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_PerformanceDataResult
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_PerformanceDataResult
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    double TotalOffset; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::int32_t TotalSamples; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalGems; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalHits; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalMisses; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPasses; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNotes; // 0x0024 (Size: 0x4, Type: IntProperty)
    float MaxValue; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinValue; // 0x002C (Size: 0x4, Type: FloatProperty)
    float StandardDeviation; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float AverageOffset; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxStreak; // 0x0038 (Size: 0x4, Type: IntProperty)
    float TimeInOverdriveMs; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Histogram[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> AccuracyTierCounts; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalOffset) == 8, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalOffset");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalSamples) == 16, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalSamples");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalGems) == 20, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalGems");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalHits) == 24, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalHits");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalMisses) == 28, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalMisses");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalPasses) == 32, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalPasses");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TotalNotes) == 36, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TotalNotes");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, MaxValue) == 40, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::MaxValue");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, MinValue) == 44, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::MinValue");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, StandardDeviation) == 48, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::StandardDeviation");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, AverageOffset) == 52, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::AverageOffset");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, MaxStreak) == 56, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::MaxStreak");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, TimeInOverdriveMs) == 60, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::TimeInOverdriveMs");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, Histogram) == 64, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::Histogram");
static_assert(offsetof(FPilgrimEvent_Scoring_PerformanceDataResult, AccuracyTierCounts) == 80, "Offset mismatch for FPilgrimEvent_Scoring_PerformanceDataResult::AccuracyTierCounts");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_ScoreChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_ScoreChanged
{
public:
    void* ForPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PlayerIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    float SoloDelta; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BandDelta; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SoloScore; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BandScore; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, ForPlayer) == 0, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::ForPlayer");
static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, PlayerIndex) == 8, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::PlayerIndex");
static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, SoloDelta) == 12, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::SoloDelta");
static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, BandDelta) == 16, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::BandDelta");
static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, SoloScore) == 20, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::SoloScore");
static_assert(offsetof(FPilgrimEvent_Scoring_ScoreChanged, BandScore) == 24, "Offset mismatch for FPilgrimEvent_Scoring_ScoreChanged::BandScore");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_ServerMultiplierChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_ServerMultiplierChanged
{
public:
    void* OwningPlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MultiplierSources; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float TotalMultiplierEffect; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasEffects; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_ServerMultiplierChanged, OwningPlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_ServerMultiplierChanged::OwningPlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerMultiplierChanged, MultiplierSources) == 8, "Offset mismatch for FPilgrimEvent_Scoring_ServerMultiplierChanged::MultiplierSources");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerMultiplierChanged, TotalMultiplierEffect) == 24, "Offset mismatch for FPilgrimEvent_Scoring_ServerMultiplierChanged::TotalMultiplierEffect");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerMultiplierChanged, bHasEffects) == 28, "Offset mismatch for FPilgrimEvent_Scoring_ServerMultiplierChanged::bHasEffects");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_ServerScoreAdjustment
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_ServerScoreAdjustment
{
public:
    void* OwningPlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> SourceActor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    float ScoreAdjustment; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float OverdriveAdjustment; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_ServerScoreAdjustment, OwningPlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_ServerScoreAdjustment::OwningPlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerScoreAdjustment, SourceActor) == 8, "Offset mismatch for FPilgrimEvent_Scoring_ServerScoreAdjustment::SourceActor");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerScoreAdjustment, ScoreAdjustment) == 16, "Offset mismatch for FPilgrimEvent_Scoring_ServerScoreAdjustment::ScoreAdjustment");
static_assert(offsetof(FPilgrimEvent_Scoring_ServerScoreAdjustment, OverdriveAdjustment) == 20, "Offset mismatch for FPilgrimEvent_Scoring_ServerScoreAdjustment::OverdriveAdjustment");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StarChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_StarChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentStar; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousStar; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStar; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_StarChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_StarChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_StarChanged, CurrentStar) == 8, "Offset mismatch for FPilgrimEvent_Scoring_StarChanged::CurrentStar");
static_assert(offsetof(FPilgrimEvent_Scoring_StarChanged, PreviousStar) == 12, "Offset mismatch for FPilgrimEvent_Scoring_StarChanged::PreviousStar");
static_assert(offsetof(FPilgrimEvent_Scoring_StarChanged, MaxStar) == 16, "Offset mismatch for FPilgrimEvent_Scoring_StarChanged::MaxStar");

// /Script/PilgrimCoreRuntime.PilgrimEvent_Scoring_StreakChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_Scoring_StreakChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentStreak; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousStreak; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStreak; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_Scoring_StreakChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_Scoring_StreakChanged::PlayerState");
static_assert(offsetof(FPilgrimEvent_Scoring_StreakChanged, CurrentStreak) == 8, "Offset mismatch for FPilgrimEvent_Scoring_StreakChanged::CurrentStreak");
static_assert(offsetof(FPilgrimEvent_Scoring_StreakChanged, PreviousStreak) == 12, "Offset mismatch for FPilgrimEvent_Scoring_StreakChanged::PreviousStreak");
static_assert(offsetof(FPilgrimEvent_Scoring_StreakChanged, MaxStreak) == 16, "Offset mismatch for FPilgrimEvent_Scoring_StreakChanged::MaxStreak");

// /Script/PilgrimCoreRuntime.PilgrimEvent_ServerMultiplierSource
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_ServerMultiplierSource
{
public:
    TWeakObjectPtr<void> SourceActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float MultiplierEffect; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_ServerMultiplierSource, SourceActor) == 0, "Offset mismatch for FPilgrimEvent_ServerMultiplierSource::SourceActor");
static_assert(offsetof(FPilgrimEvent_ServerMultiplierSource, MultiplierEffect) == 8, "Offset mismatch for FPilgrimEvent_ServerMultiplierSource::MultiplierEffect");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_EveryoneFinished
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongLoading_EveryoneFinished
{
public:
    FName Song; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimEvent_SongLoading_EveryoneFinished, Song) == 0, "Offset mismatch for FPilgrimEvent_SongLoading_EveryoneFinished::Song");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_LocalClientFinished
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongLoading_LocalClientFinished
{
public:
    FName Song; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimEvent_SongLoading_LocalClientFinished, Song) == 0, "Offset mismatch for FPilgrimEvent_SongLoading_LocalClientFinished::Song");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_ServerFinished
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongLoading_ServerFinished
{
public:
    FName Song; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimEvent_SongLoading_ServerFinished, Song) == 0, "Offset mismatch for FPilgrimEvent_SongLoading_ServerFinished::Song");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongLoading_Started
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongLoading_Started
{
public:
    FName Song; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimEvent_SongLoading_Started, Song) == 0, "Offset mismatch for FPilgrimEvent_SongLoading_Started::Song");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongPlay_SongAudioResponseCueChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongPlay_SongAudioResponseCueChanged
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_SongPlay_SongAudioResponseCueChanged, PlayerState) == 0, "Offset mismatch for FPilgrimEvent_SongPlay_SongAudioResponseCueChanged::PlayerState");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongVoting_CancelVoteFailure
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongVoting_CancelVoteFailure
{
public:
    std::uint8_t Response; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_SongVoting_CancelVoteFailure, Response) == 0, "Offset mismatch for FPilgrimEvent_SongVoting_CancelVoteFailure::Response");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongVoting_VoteCanceled
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongVoting_VoteCanceled
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimEvent_SongVoting_VoteCanceled, player) == 0, "Offset mismatch for FPilgrimEvent_SongVoting_VoteCanceled::player");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongVoting_VoteCast
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongVoting_VoteCast
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName SongShortName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimEvent_SongVoting_VoteCast, player) == 0, "Offset mismatch for FPilgrimEvent_SongVoting_VoteCast::player");
static_assert(offsetof(FPilgrimEvent_SongVoting_VoteCast, SongShortName) == 8, "Offset mismatch for FPilgrimEvent_SongVoting_VoteCast::SongShortName");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongVoting_VoteCastFailure
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongVoting_VoteCastFailure
{
public:
    std::uint8_t Response; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimEvent_SongVoting_VoteCastFailure, Response) == 0, "Offset mismatch for FPilgrimEvent_SongVoting_VoteCastFailure::Response");

// /Script/PilgrimCoreRuntime.PilgrimEvent_SongVoting_VoteCountUpdated
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_SongVoting_VoteCountUpdated
{
public:
    std::int32_t NumVotesCast; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimEvent_SongVoting_VoteCountUpdated, NumVotesCast) == 0, "Offset mismatch for FPilgrimEvent_SongVoting_VoteCountUpdated::NumVotesCast");

// /Script/PilgrimCoreRuntime.PilgrimEvent_ToggleDebugCalibrationWidget
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_ToggleDebugCalibrationWidget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimEvent_TrackLayoutPresetChanged
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_TrackLayoutPresetChanged
{
public:
    FString PresetName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimEvent_TrackLayoutPresetChanged, PresetName) == 0, "Offset mismatch for FPilgrimEvent_TrackLayoutPresetChanged::PresetName");

// /Script/PilgrimCoreRuntime.PilgrimEvent_UpdatePhraseDisplay
// Kind: ScriptStruct; super: none
struct FPilgrimEvent_UpdatePhraseDisplay
{
public:
    std::int32_t CurrentPhraseIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentLyricIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    float LyricProgress; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PhraseProgress; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimEvent_UpdatePhraseDisplay, CurrentPhraseIndex) == 0, "Offset mismatch for FPilgrimEvent_UpdatePhraseDisplay::CurrentPhraseIndex");
static_assert(offsetof(FPilgrimEvent_UpdatePhraseDisplay, CurrentLyricIndex) == 4, "Offset mismatch for FPilgrimEvent_UpdatePhraseDisplay::CurrentLyricIndex");
static_assert(offsetof(FPilgrimEvent_UpdatePhraseDisplay, LyricProgress) == 8, "Offset mismatch for FPilgrimEvent_UpdatePhraseDisplay::LyricProgress");
static_assert(offsetof(FPilgrimEvent_UpdatePhraseDisplay, PhraseProgress) == 12, "Offset mismatch for FPilgrimEvent_UpdatePhraseDisplay::PhraseProgress");

// /Script/PilgrimCoreRuntime.PilgrimGameConfigSettings
// Kind: ScriptStruct; super: none
struct FPilgrimGameConfigSettings
{
public:
    float SlopMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GemBreakEndInputUnlockMs; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndOfTrackBuffer; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MsToNowBar; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BackgroundTrackDb; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float BackgroundTrackGain; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> SongAudioResponceCueSettingsMap; // 0x0018 (Size: 0x10, Type: MapProperty)
    float FireMidiEventTicksEarly; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    TMap<void*, void*> BaseGemScoreValue; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BaseCymbalGemScoreValue; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::int32_t SustainScorePerBeat; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNormalizeScores; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::uint8_t NormalizedScaleTowardsHighestInDifficulty[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t NormalizedScaleTowardsHighestInExpert[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    float OutroPreAlertSeconds; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00AC
    TArray<void*> ScoreMultiplierDefinitions; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerHealthModifiers; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> PilgrimHealthCrowdResponseTiers; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> IndividualStarPercentageThresholds; // 0x00E0 (Size: 0x10, Type: MapProperty)
    TArray<void*> BandStarPercentageThresholds; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsBandMultiplierBasedOnUniqueInstruments; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsBandVarietyBonusScoredDuringPlay; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0102
    TArray<void*> BandOverdriveScoreMultipliers; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BandVarietyScoreMultipliers; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AccuracyTiers; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaximumDisplayedAccuracyTierIndex; // 0x0138 (Size: 0x4, Type: IntProperty)
    float TeamQuickplayInitialHealth; // 0x013C (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayOverdriveDecayRate; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayInitialOverdrive; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayOverdrive; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayOverdriveScoreMultiplier; // 0x014C (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayOverdriveHealthGainMultiplier; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayRequiredOverdriveToActivate; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float TeamQuickplayOverdriveAddedOnSuccesfulSection; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverdriveClearsGems; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverdriveClearAutoHoldSustain; // 0x015D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x015E
    float GemBreakPendingBars; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableInputSpecificGemsAndSmashers; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0165
    void* InputConfig; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableOverdriveDeploys; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableOverdrivePhrases; // 0x0171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCaptureSystem; // 0x0172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBandPerformanceScoring; // 0x0173 (Size: 0x1, Type: BoolProperty)
    float ArenaInitialShields; // 0x0174 (Size: 0x4, Type: FloatProperty)
    float ArenaInitialHealth; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ArenaInitialAmmo; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x017D
    TMap<void*, void*> DifficultyCaptureFactors; // 0x0180 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerInstrumentConfigs; // 0x0190 (Size: 0x10, Type: MapProperty)
    TArray<void*> StreakToastThresholds; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> InstrumentTypeMissCues; // 0x01B0 (Size: 0x10, Type: MapProperty)
    void* DefaultInstrumentTypeMissCue; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CreateStandinBandmembers; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x01C9
    float SongIntroEmbargoMs; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float DeployOverdriveGem_BarsUntilGemSpawn; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float DeployOverdriveGem_TailDurationBar; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float RollsMinInputForgivenessMs; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float SwellsMinInputForgivenessMs; // 0x01DC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> ProVocalPitchThresholds; // 0x01E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ProVocalSectionCompletionThresholds; // 0x01F0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ProVocalsSectionMaxValue; // 0x0200 (Size: 0x10, Type: MapProperty)
    TArray<void*> ProVocalsSectionRatings; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProVocalsScoreMultiplierDefinitions; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    void* ScoreWeightInSection; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ProVocalsTrackDensityTiers; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    void* StaticLyricsAspectRatioTimeWindow; // 0x0248 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimGameConfigSettings, SlopMs) == 0, "Offset mismatch for FPilgrimGameConfigSettings::SlopMs");
static_assert(offsetof(FPilgrimGameConfigSettings, GemBreakEndInputUnlockMs) == 4, "Offset mismatch for FPilgrimGameConfigSettings::GemBreakEndInputUnlockMs");
static_assert(offsetof(FPilgrimGameConfigSettings, EndOfTrackBuffer) == 8, "Offset mismatch for FPilgrimGameConfigSettings::EndOfTrackBuffer");
static_assert(offsetof(FPilgrimGameConfigSettings, MsToNowBar) == 12, "Offset mismatch for FPilgrimGameConfigSettings::MsToNowBar");
static_assert(offsetof(FPilgrimGameConfigSettings, BackgroundTrackDb) == 16, "Offset mismatch for FPilgrimGameConfigSettings::BackgroundTrackDb");
static_assert(offsetof(FPilgrimGameConfigSettings, BackgroundTrackGain) == 20, "Offset mismatch for FPilgrimGameConfigSettings::BackgroundTrackGain");
static_assert(offsetof(FPilgrimGameConfigSettings, SongAudioResponceCueSettingsMap) == 24, "Offset mismatch for FPilgrimGameConfigSettings::SongAudioResponceCueSettingsMap");
static_assert(offsetof(FPilgrimGameConfigSettings, FireMidiEventTicksEarly) == 40, "Offset mismatch for FPilgrimGameConfigSettings::FireMidiEventTicksEarly");
static_assert(offsetof(FPilgrimGameConfigSettings, BaseGemScoreValue) == 48, "Offset mismatch for FPilgrimGameConfigSettings::BaseGemScoreValue");
static_assert(offsetof(FPilgrimGameConfigSettings, BaseCymbalGemScoreValue) == 64, "Offset mismatch for FPilgrimGameConfigSettings::BaseCymbalGemScoreValue");
static_assert(offsetof(FPilgrimGameConfigSettings, SustainScorePerBeat) == 80, "Offset mismatch for FPilgrimGameConfigSettings::SustainScorePerBeat");
static_assert(offsetof(FPilgrimGameConfigSettings, bNormalizeScores) == 84, "Offset mismatch for FPilgrimGameConfigSettings::bNormalizeScores");
static_assert(offsetof(FPilgrimGameConfigSettings, NormalizedScaleTowardsHighestInDifficulty) == 88, "Offset mismatch for FPilgrimGameConfigSettings::NormalizedScaleTowardsHighestInDifficulty");
static_assert(offsetof(FPilgrimGameConfigSettings, NormalizedScaleTowardsHighestInExpert) == 128, "Offset mismatch for FPilgrimGameConfigSettings::NormalizedScaleTowardsHighestInExpert");
static_assert(offsetof(FPilgrimGameConfigSettings, OutroPreAlertSeconds) == 168, "Offset mismatch for FPilgrimGameConfigSettings::OutroPreAlertSeconds");
static_assert(offsetof(FPilgrimGameConfigSettings, ScoreMultiplierDefinitions) == 176, "Offset mismatch for FPilgrimGameConfigSettings::ScoreMultiplierDefinitions");
static_assert(offsetof(FPilgrimGameConfigSettings, PlayerHealthModifiers) == 192, "Offset mismatch for FPilgrimGameConfigSettings::PlayerHealthModifiers");
static_assert(offsetof(FPilgrimGameConfigSettings, PilgrimHealthCrowdResponseTiers) == 208, "Offset mismatch for FPilgrimGameConfigSettings::PilgrimHealthCrowdResponseTiers");
static_assert(offsetof(FPilgrimGameConfigSettings, IndividualStarPercentageThresholds) == 224, "Offset mismatch for FPilgrimGameConfigSettings::IndividualStarPercentageThresholds");
static_assert(offsetof(FPilgrimGameConfigSettings, BandStarPercentageThresholds) == 240, "Offset mismatch for FPilgrimGameConfigSettings::BandStarPercentageThresholds");
static_assert(offsetof(FPilgrimGameConfigSettings, IsBandMultiplierBasedOnUniqueInstruments) == 256, "Offset mismatch for FPilgrimGameConfigSettings::IsBandMultiplierBasedOnUniqueInstruments");
static_assert(offsetof(FPilgrimGameConfigSettings, IsBandVarietyBonusScoredDuringPlay) == 257, "Offset mismatch for FPilgrimGameConfigSettings::IsBandVarietyBonusScoredDuringPlay");
static_assert(offsetof(FPilgrimGameConfigSettings, BandOverdriveScoreMultipliers) == 264, "Offset mismatch for FPilgrimGameConfigSettings::BandOverdriveScoreMultipliers");
static_assert(offsetof(FPilgrimGameConfigSettings, BandVarietyScoreMultipliers) == 280, "Offset mismatch for FPilgrimGameConfigSettings::BandVarietyScoreMultipliers");
static_assert(offsetof(FPilgrimGameConfigSettings, AccuracyTiers) == 296, "Offset mismatch for FPilgrimGameConfigSettings::AccuracyTiers");
static_assert(offsetof(FPilgrimGameConfigSettings, MaximumDisplayedAccuracyTierIndex) == 312, "Offset mismatch for FPilgrimGameConfigSettings::MaximumDisplayedAccuracyTierIndex");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayInitialHealth) == 316, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayInitialHealth");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayOverdriveDecayRate) == 320, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayOverdriveDecayRate");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayInitialOverdrive) == 324, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayInitialOverdrive");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayOverdrive) == 328, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayOverdrive");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayOverdriveScoreMultiplier) == 332, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayOverdriveScoreMultiplier");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayOverdriveHealthGainMultiplier) == 336, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayOverdriveHealthGainMultiplier");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayRequiredOverdriveToActivate) == 340, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayRequiredOverdriveToActivate");
static_assert(offsetof(FPilgrimGameConfigSettings, TeamQuickplayOverdriveAddedOnSuccesfulSection) == 344, "Offset mismatch for FPilgrimGameConfigSettings::TeamQuickplayOverdriveAddedOnSuccesfulSection");
static_assert(offsetof(FPilgrimGameConfigSettings, bOverdriveClearsGems) == 348, "Offset mismatch for FPilgrimGameConfigSettings::bOverdriveClearsGems");
static_assert(offsetof(FPilgrimGameConfigSettings, bOverdriveClearAutoHoldSustain) == 349, "Offset mismatch for FPilgrimGameConfigSettings::bOverdriveClearAutoHoldSustain");
static_assert(offsetof(FPilgrimGameConfigSettings, GemBreakPendingBars) == 352, "Offset mismatch for FPilgrimGameConfigSettings::GemBreakPendingBars");
static_assert(offsetof(FPilgrimGameConfigSettings, bEnableInputSpecificGemsAndSmashers) == 356, "Offset mismatch for FPilgrimGameConfigSettings::bEnableInputSpecificGemsAndSmashers");
static_assert(offsetof(FPilgrimGameConfigSettings, InputConfig) == 360, "Offset mismatch for FPilgrimGameConfigSettings::InputConfig");
static_assert(offsetof(FPilgrimGameConfigSettings, bEnableOverdriveDeploys) == 368, "Offset mismatch for FPilgrimGameConfigSettings::bEnableOverdriveDeploys");
static_assert(offsetof(FPilgrimGameConfigSettings, bEnableOverdrivePhrases) == 369, "Offset mismatch for FPilgrimGameConfigSettings::bEnableOverdrivePhrases");
static_assert(offsetof(FPilgrimGameConfigSettings, bEnableCaptureSystem) == 370, "Offset mismatch for FPilgrimGameConfigSettings::bEnableCaptureSystem");
static_assert(offsetof(FPilgrimGameConfigSettings, bEnableBandPerformanceScoring) == 371, "Offset mismatch for FPilgrimGameConfigSettings::bEnableBandPerformanceScoring");
static_assert(offsetof(FPilgrimGameConfigSettings, ArenaInitialShields) == 372, "Offset mismatch for FPilgrimGameConfigSettings::ArenaInitialShields");
static_assert(offsetof(FPilgrimGameConfigSettings, ArenaInitialHealth) == 376, "Offset mismatch for FPilgrimGameConfigSettings::ArenaInitialHealth");
static_assert(offsetof(FPilgrimGameConfigSettings, ArenaInitialAmmo) == 380, "Offset mismatch for FPilgrimGameConfigSettings::ArenaInitialAmmo");
static_assert(offsetof(FPilgrimGameConfigSettings, DifficultyCaptureFactors) == 384, "Offset mismatch for FPilgrimGameConfigSettings::DifficultyCaptureFactors");
static_assert(offsetof(FPilgrimGameConfigSettings, PerInstrumentConfigs) == 400, "Offset mismatch for FPilgrimGameConfigSettings::PerInstrumentConfigs");
static_assert(offsetof(FPilgrimGameConfigSettings, StreakToastThresholds) == 416, "Offset mismatch for FPilgrimGameConfigSettings::StreakToastThresholds");
static_assert(offsetof(FPilgrimGameConfigSettings, InstrumentTypeMissCues) == 432, "Offset mismatch for FPilgrimGameConfigSettings::InstrumentTypeMissCues");
static_assert(offsetof(FPilgrimGameConfigSettings, DefaultInstrumentTypeMissCue) == 448, "Offset mismatch for FPilgrimGameConfigSettings::DefaultInstrumentTypeMissCue");
static_assert(offsetof(FPilgrimGameConfigSettings, CreateStandinBandmembers) == 456, "Offset mismatch for FPilgrimGameConfigSettings::CreateStandinBandmembers");
static_assert(offsetof(FPilgrimGameConfigSettings, SongIntroEmbargoMs) == 460, "Offset mismatch for FPilgrimGameConfigSettings::SongIntroEmbargoMs");
static_assert(offsetof(FPilgrimGameConfigSettings, DeployOverdriveGem_BarsUntilGemSpawn) == 464, "Offset mismatch for FPilgrimGameConfigSettings::DeployOverdriveGem_BarsUntilGemSpawn");
static_assert(offsetof(FPilgrimGameConfigSettings, DeployOverdriveGem_TailDurationBar) == 468, "Offset mismatch for FPilgrimGameConfigSettings::DeployOverdriveGem_TailDurationBar");
static_assert(offsetof(FPilgrimGameConfigSettings, RollsMinInputForgivenessMs) == 472, "Offset mismatch for FPilgrimGameConfigSettings::RollsMinInputForgivenessMs");
static_assert(offsetof(FPilgrimGameConfigSettings, SwellsMinInputForgivenessMs) == 476, "Offset mismatch for FPilgrimGameConfigSettings::SwellsMinInputForgivenessMs");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalPitchThresholds) == 480, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalPitchThresholds");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalSectionCompletionThresholds) == 496, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalSectionCompletionThresholds");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalsSectionMaxValue) == 512, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalsSectionMaxValue");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalsSectionRatings) == 528, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalsSectionRatings");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalsScoreMultiplierDefinitions) == 544, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalsScoreMultiplierDefinitions");
static_assert(offsetof(FPilgrimGameConfigSettings, ScoreWeightInSection) == 560, "Offset mismatch for FPilgrimGameConfigSettings::ScoreWeightInSection");
static_assert(offsetof(FPilgrimGameConfigSettings, ProVocalsTrackDensityTiers) == 568, "Offset mismatch for FPilgrimGameConfigSettings::ProVocalsTrackDensityTiers");
static_assert(offsetof(FPilgrimGameConfigSettings, StaticLyricsAspectRatioTimeWindow) == 584, "Offset mismatch for FPilgrimGameConfigSettings::StaticLyricsAspectRatioTimeWindow");

// /Script/PilgrimCoreRuntime.PilgrimGameReplicatedClientSettings
// Kind: ScriptStruct; super: none
struct FPilgrimGameReplicatedClientSettings
{
public:
    std::uint8_t bProDrumsEnableRedCymbals; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableGreenCymbals; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableYellowCymbals; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProDrumsEnableBlueCymbals; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLeftyFlipEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoubleKickEnabled; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bProDrumsEnableRedCymbals) == 0, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bProDrumsEnableRedCymbals");
static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bProDrumsEnableGreenCymbals) == 1, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bProDrumsEnableGreenCymbals");
static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bProDrumsEnableYellowCymbals) == 2, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bProDrumsEnableYellowCymbals");
static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bProDrumsEnableBlueCymbals) == 3, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bProDrumsEnableBlueCymbals");
static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bLeftyFlipEnabled) == 4, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bLeftyFlipEnabled");
static_assert(offsetof(FPilgrimGameReplicatedClientSettings, bDoubleKickEnabled) == 5, "Offset mismatch for FPilgrimGameReplicatedClientSettings::bDoubleKickEnabled");

// /Script/PilgrimCoreRuntime.PilgrimGameplayLogEntry
// Kind: ScriptStruct; super: none
struct FPilgrimGameplayLogEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimGemActionResultData
// Kind: ScriptStruct; super: none
struct FPilgrimGemActionResultData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimGemBreak
// Kind: ScriptStruct; super: none
struct FPilgrimGemBreak
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsValidGemBreak; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float StartBreakAtBar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StartBreakAtMs; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BreakBarDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float BreakMsDuration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float EndBreakAtBar; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EndBreakAtMs; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsStartingBreak; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEndingBreak; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimGemBreak, ID) == 0, "Offset mismatch for FPilgrimGemBreak::ID");
static_assert(offsetof(FPilgrimGemBreak, bIsValidGemBreak) == 4, "Offset mismatch for FPilgrimGemBreak::bIsValidGemBreak");
static_assert(offsetof(FPilgrimGemBreak, StartBreakAtBar) == 8, "Offset mismatch for FPilgrimGemBreak::StartBreakAtBar");
static_assert(offsetof(FPilgrimGemBreak, StartBreakAtMs) == 12, "Offset mismatch for FPilgrimGemBreak::StartBreakAtMs");
static_assert(offsetof(FPilgrimGemBreak, BreakBarDuration) == 16, "Offset mismatch for FPilgrimGemBreak::BreakBarDuration");
static_assert(offsetof(FPilgrimGemBreak, BreakMsDuration) == 20, "Offset mismatch for FPilgrimGemBreak::BreakMsDuration");
static_assert(offsetof(FPilgrimGemBreak, EndBreakAtBar) == 24, "Offset mismatch for FPilgrimGemBreak::EndBreakAtBar");
static_assert(offsetof(FPilgrimGemBreak, EndBreakAtMs) == 28, "Offset mismatch for FPilgrimGemBreak::EndBreakAtMs");
static_assert(offsetof(FPilgrimGemBreak, bIsStartingBreak) == 32, "Offset mismatch for FPilgrimGemBreak::bIsStartingBreak");
static_assert(offsetof(FPilgrimGemBreak, bIsEndingBreak) == 33, "Offset mismatch for FPilgrimGemBreak::bIsEndingBreak");

// /Script/PilgrimCoreRuntime.PilgrimGemBreaks
// Kind: ScriptStruct; super: none
struct FPilgrimGemBreaks
{
public:
    TArray<void*> Breaks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimGemBreaks, Breaks) == 0, "Offset mismatch for FPilgrimGemBreaks::Breaks");

// /Script/PilgrimCoreRuntime.PilgrimGemDensityData
// Kind: ScriptStruct; super: none
struct FPilgrimGemDensityData
{
public:
    std::int32_t SectionIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumGems; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t SustainDurationTotal[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimGemDensityData, SectionIndex) == 0, "Offset mismatch for FPilgrimGemDensityData::SectionIndex");
static_assert(offsetof(FPilgrimGemDensityData, NumGems) == 4, "Offset mismatch for FPilgrimGemDensityData::NumGems");
static_assert(offsetof(FPilgrimGemDensityData, SustainDurationTotal) == 8, "Offset mismatch for FPilgrimGemDensityData::SustainDurationTotal");

// /Script/PilgrimCoreRuntime.PilgrimGemDensityDataArray
// Kind: ScriptStruct; super: none
struct FPilgrimGemDensityDataArray
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimGemHitAccuracy
// Kind: ScriptStruct; super: none
struct FPilgrimGemHitAccuracy
{
public:
    float AccuracyMs; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t AccuracyTier[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::int32_t TierIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimGemHitAccuracy, AccuracyMs) == 0, "Offset mismatch for FPilgrimGemHitAccuracy::AccuracyMs");
static_assert(offsetof(FPilgrimGemHitAccuracy, AccuracyTier) == 8, "Offset mismatch for FPilgrimGemHitAccuracy::AccuracyTier");
static_assert(offsetof(FPilgrimGemHitAccuracy, TierIndex) == 32, "Offset mismatch for FPilgrimGemHitAccuracy::TierIndex");

// /Script/PilgrimCoreRuntime.PilgrimGetSpotlightParams
// Kind: ScriptStruct; super: none
struct FPilgrimGetSpotlightParams
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t InstrumentType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t StartsBefore[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndsAfter[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimGetSpotlightParams, SongShortName) == 0, "Offset mismatch for FPilgrimGetSpotlightParams::SongShortName");
static_assert(offsetof(FPilgrimGetSpotlightParams, InstrumentType) == 4, "Offset mismatch for FPilgrimGetSpotlightParams::InstrumentType");
static_assert(offsetof(FPilgrimGetSpotlightParams, StartsBefore) == 8, "Offset mismatch for FPilgrimGetSpotlightParams::StartsBefore");
static_assert(offsetof(FPilgrimGetSpotlightParams, EndsAfter) == 16, "Offset mismatch for FPilgrimGetSpotlightParams::EndsAfter");

// /Script/PilgrimCoreRuntime.PilgrimGuitarFretPressedState
// Kind: ScriptStruct; super: none
struct FPilgrimGuitarFretPressedState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimInputActionBrushConfig
// Kind: ScriptStruct; super: none
struct FPilgrimInputActionBrushConfig
{
public:
    void* BoundInputAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t KeyBrush[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimInputActionBrushConfig, BoundInputAction) == 0, "Offset mismatch for FPilgrimInputActionBrushConfig::BoundInputAction");
static_assert(offsetof(FPilgrimInputActionBrushConfig, KeyBrush) == 16, "Offset mismatch for FPilgrimInputActionBrushConfig::KeyBrush");

// /Script/PilgrimCoreRuntime.PilgrimInputKeyBinding
// Kind: ScriptStruct; super: none
struct FPilgrimInputKeyBinding
{
public:
    std::uint8_t KeyBinding[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t InputAction[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSendToServer; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendToClient; // 0x001D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimInputKeyBinding, KeyBinding) == 0, "Offset mismatch for FPilgrimInputKeyBinding::KeyBinding");
static_assert(offsetof(FPilgrimInputKeyBinding, InputAction) == 24, "Offset mismatch for FPilgrimInputKeyBinding::InputAction");
static_assert(offsetof(FPilgrimInputKeyBinding, bSendToServer) == 28, "Offset mismatch for FPilgrimInputKeyBinding::bSendToServer");
static_assert(offsetof(FPilgrimInputKeyBinding, bSendToClient) == 29, "Offset mismatch for FPilgrimInputKeyBinding::bSendToClient");

// /Script/PilgrimCoreRuntime.PilgrimInputPresetData
// Kind: ScriptStruct; super: TableRowBase
struct FPilgrimInputPresetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PresetDescription[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> LaneBindings; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsGameplayBinding; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMouseKeyboardBinding; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimInputPresetData, PresetDescription) == 8, "Offset mismatch for FPilgrimInputPresetData::PresetDescription");
static_assert(offsetof(FPilgrimInputPresetData, LaneBindings) == 24, "Offset mismatch for FPilgrimInputPresetData::LaneBindings");
static_assert(offsetof(FPilgrimInputPresetData, bIsGameplayBinding) == 40, "Offset mismatch for FPilgrimInputPresetData::bIsGameplayBinding");
static_assert(offsetof(FPilgrimInputPresetData, bIsMouseKeyboardBinding) == 41, "Offset mismatch for FPilgrimInputPresetData::bIsMouseKeyboardBinding");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardCache
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardCache
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntry
// Kind: ScriptStruct; super: PilgrimLeaderboardEntryRpl
struct FPilgrimLeaderboardEntry
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bHasLocalPlayer; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TMap<void*, void*> PlayerAccountIdToDisplayNameMap; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPilgrimLeaderboardEntry, bHasLocalPlayer) == 64, "Offset mismatch for FPilgrimLeaderboardEntry::bHasLocalPlayer");
static_assert(offsetof(FPilgrimLeaderboardEntry, PlayerAccountIdToDisplayNameMap) == 72, "Offset mismatch for FPilgrimLeaderboardEntry::PlayerAccountIdToDisplayNameMap");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardEntryRpl
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardEntryRpl
{
public:
    std::int32_t Rank; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Percentile; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScoreData[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DateTime[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::int32_t FriendRank; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimLeaderboardEntryRpl, Rank) == 0, "Offset mismatch for FPilgrimLeaderboardEntryRpl::Rank");
static_assert(offsetof(FPilgrimLeaderboardEntryRpl, Percentile) == 4, "Offset mismatch for FPilgrimLeaderboardEntryRpl::Percentile");
static_assert(offsetof(FPilgrimLeaderboardEntryRpl, ScoreData) == 8, "Offset mismatch for FPilgrimLeaderboardEntryRpl::ScoreData");
static_assert(offsetof(FPilgrimLeaderboardEntryRpl, DateTime) == 48, "Offset mismatch for FPilgrimLeaderboardEntryRpl::DateTime");
static_assert(offsetof(FPilgrimLeaderboardEntryRpl, FriendRank) == 56, "Offset mismatch for FPilgrimLeaderboardEntryRpl::FriendRank");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardIdParams
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardIdParams
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsSpotlightCompetition; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    FString SpotlightGroup; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAllTimeHighScore; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimLeaderboardIdParams, SongShortName) == 0, "Offset mismatch for FPilgrimLeaderboardIdParams::SongShortName");
static_assert(offsetof(FPilgrimLeaderboardIdParams, LeaderboardType) == 4, "Offset mismatch for FPilgrimLeaderboardIdParams::LeaderboardType");
static_assert(offsetof(FPilgrimLeaderboardIdParams, bIsSpotlightCompetition) == 5, "Offset mismatch for FPilgrimLeaderboardIdParams::bIsSpotlightCompetition");
static_assert(offsetof(FPilgrimLeaderboardIdParams, SpotlightGroup) == 8, "Offset mismatch for FPilgrimLeaderboardIdParams::SpotlightGroup");
static_assert(offsetof(FPilgrimLeaderboardIdParams, bIsAllTimeHighScore) == 24, "Offset mismatch for FPilgrimLeaderboardIdParams::bIsAllTimeHighScore");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardPage
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardPage
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t Page; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPages; // 0x000C (Size: 0x4, Type: IntProperty)
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsSpotlightCompetition; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    FString SpotlightGroup; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAllTimeHighScore; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimLeaderboardPage, SongShortName) == 0, "Offset mismatch for FPilgrimLeaderboardPage::SongShortName");
static_assert(offsetof(FPilgrimLeaderboardPage, LeaderboardType) == 4, "Offset mismatch for FPilgrimLeaderboardPage::LeaderboardType");
static_assert(offsetof(FPilgrimLeaderboardPage, Page) == 8, "Offset mismatch for FPilgrimLeaderboardPage::Page");
static_assert(offsetof(FPilgrimLeaderboardPage, TotalPages) == 12, "Offset mismatch for FPilgrimLeaderboardPage::TotalPages");
static_assert(offsetof(FPilgrimLeaderboardPage, Entries) == 16, "Offset mismatch for FPilgrimLeaderboardPage::Entries");
static_assert(offsetof(FPilgrimLeaderboardPage, bIsSpotlightCompetition) == 32, "Offset mismatch for FPilgrimLeaderboardPage::bIsSpotlightCompetition");
static_assert(offsetof(FPilgrimLeaderboardPage, SpotlightGroup) == 40, "Offset mismatch for FPilgrimLeaderboardPage::SpotlightGroup");
static_assert(offsetof(FPilgrimLeaderboardPage, bIsAllTimeHighScore) == 56, "Offset mismatch for FPilgrimLeaderboardPage::bIsAllTimeHighScore");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardPageCache
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardPageCache
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimLeaderboardRequestParams
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardRequestParams
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t RequestingPlayerAccountId[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t bFriendsOnly; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCenteredOnRequestingPlayer; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t Page; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t ControllerId; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSpotlightCompetition; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    FString SpotlightGroup; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAllTimeHighScore; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCache; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x005A
    std::int32_t FreshnessTime; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t Priority; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0061
    std::uint64_t RequestID; // 0x0068 (Size: 0x8, Type: UInt64Property)
    std::uint64_t ParamKey; // 0x0070 (Size: 0x8, Type: UInt64Property)
    TWeakObjectPtr<void> LocalPlayer; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WorldContextObject; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimLeaderboardRequestParams, SongShortName) == 0, "Offset mismatch for FPilgrimLeaderboardRequestParams::SongShortName");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, LeaderboardType) == 4, "Offset mismatch for FPilgrimLeaderboardRequestParams::LeaderboardType");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, RequestingPlayerAccountId) == 8, "Offset mismatch for FPilgrimLeaderboardRequestParams::RequestingPlayerAccountId");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, bFriendsOnly) == 56, "Offset mismatch for FPilgrimLeaderboardRequestParams::bFriendsOnly");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, bCenteredOnRequestingPlayer) == 57, "Offset mismatch for FPilgrimLeaderboardRequestParams::bCenteredOnRequestingPlayer");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, Page) == 60, "Offset mismatch for FPilgrimLeaderboardRequestParams::Page");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, ControllerId) == 64, "Offset mismatch for FPilgrimLeaderboardRequestParams::ControllerId");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, bIsSpotlightCompetition) == 68, "Offset mismatch for FPilgrimLeaderboardRequestParams::bIsSpotlightCompetition");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, SpotlightGroup) == 72, "Offset mismatch for FPilgrimLeaderboardRequestParams::SpotlightGroup");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, bIsAllTimeHighScore) == 88, "Offset mismatch for FPilgrimLeaderboardRequestParams::bIsAllTimeHighScore");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, bUseCache) == 89, "Offset mismatch for FPilgrimLeaderboardRequestParams::bUseCache");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, FreshnessTime) == 92, "Offset mismatch for FPilgrimLeaderboardRequestParams::FreshnessTime");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, Priority) == 96, "Offset mismatch for FPilgrimLeaderboardRequestParams::Priority");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, RequestID) == 104, "Offset mismatch for FPilgrimLeaderboardRequestParams::RequestID");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, ParamKey) == 112, "Offset mismatch for FPilgrimLeaderboardRequestParams::ParamKey");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, LocalPlayer) == 120, "Offset mismatch for FPilgrimLeaderboardRequestParams::LocalPlayer");
static_assert(offsetof(FPilgrimLeaderboardRequestParams, WorldContextObject) == 128, "Offset mismatch for FPilgrimLeaderboardRequestParams::WorldContextObject");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardScoreData
// Kind: ScriptStruct; super: none
struct FPilgrimLeaderboardScoreData
{
public:
    std::int32_t Score; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t StarsEarned; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Accuracy; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFullCombo; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Difficulty; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    TArray<void*> InstrumentsPlayed; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SeasonNumber; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimLeaderboardScoreData, Score) == 0, "Offset mismatch for FPilgrimLeaderboardScoreData::Score");
static_assert(offsetof(FPilgrimLeaderboardScoreData, StarsEarned) == 4, "Offset mismatch for FPilgrimLeaderboardScoreData::StarsEarned");
static_assert(offsetof(FPilgrimLeaderboardScoreData, Accuracy) == 8, "Offset mismatch for FPilgrimLeaderboardScoreData::Accuracy");
static_assert(offsetof(FPilgrimLeaderboardScoreData, bFullCombo) == 12, "Offset mismatch for FPilgrimLeaderboardScoreData::bFullCombo");
static_assert(offsetof(FPilgrimLeaderboardScoreData, Difficulty) == 13, "Offset mismatch for FPilgrimLeaderboardScoreData::Difficulty");
static_assert(offsetof(FPilgrimLeaderboardScoreData, InstrumentsPlayed) == 16, "Offset mismatch for FPilgrimLeaderboardScoreData::InstrumentsPlayed");
static_assert(offsetof(FPilgrimLeaderboardScoreData, SeasonNumber) == 32, "Offset mismatch for FPilgrimLeaderboardScoreData::SeasonNumber");

// /Script/PilgrimCoreRuntime.PilgrimMsAndTick
// Kind: ScriptStruct; super: none
struct FPilgrimMsAndTick
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimOverdriveSectionInfo
// Kind: ScriptStruct; super: none
struct FPilgrimOverdriveSectionInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimPendingPersonalBestRequestData
// Kind: ScriptStruct; super: none
struct FPilgrimPendingPersonalBestRequestData
{
public:
    std::int32_t PendingRequestIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::int64_t GlobalRequestIndex; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::uint8_t bFinished; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t RequestParams[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPendingPersonalBestRequestData, PendingRequestIndex) == 0, "Offset mismatch for FPilgrimPendingPersonalBestRequestData::PendingRequestIndex");
static_assert(offsetof(FPilgrimPendingPersonalBestRequestData, GlobalRequestIndex) == 8, "Offset mismatch for FPilgrimPendingPersonalBestRequestData::GlobalRequestIndex");
static_assert(offsetof(FPilgrimPendingPersonalBestRequestData, bFinished) == 16, "Offset mismatch for FPilgrimPendingPersonalBestRequestData::bFinished");
static_assert(offsetof(FPilgrimPendingPersonalBestRequestData, RequestParams) == 24, "Offset mismatch for FPilgrimPendingPersonalBestRequestData::RequestParams");

// /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerData
// Kind: ScriptStruct; super: none
struct FPilgrimPerformanceTrackerData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerHistogram
// Kind: ScriptStruct; super: none
struct FPilgrimPerformanceTrackerHistogram
{
public:
    TMap<void*, void*> Buckets; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPilgrimPerformanceTrackerHistogram, Buckets) == 0, "Offset mismatch for FPilgrimPerformanceTrackerHistogram::Buckets");

// /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerOffsetStats
// Kind: ScriptStruct; super: none
struct FPilgrimPerformanceTrackerOffsetStats
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimPeripheralIMCs
// Kind: ScriptStruct; super: none
struct FPilgrimPeripheralIMCs
{
public:
    void* PeripheralBeatmatchIMC; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* KeyboardAsPeripheralBeatmatchIMC; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* GamepadAsPeripheralBeatmatchIMC; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* PeripheralBeatmatchIMC_NonPro4Lanes; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* PeripheralBeatmatchIMC_NonPro5Lanes; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimPeripheralIMCs, PeripheralBeatmatchIMC) == 0, "Offset mismatch for FPilgrimPeripheralIMCs::PeripheralBeatmatchIMC");
static_assert(offsetof(FPilgrimPeripheralIMCs, KeyboardAsPeripheralBeatmatchIMC) == 8, "Offset mismatch for FPilgrimPeripheralIMCs::KeyboardAsPeripheralBeatmatchIMC");
static_assert(offsetof(FPilgrimPeripheralIMCs, GamepadAsPeripheralBeatmatchIMC) == 16, "Offset mismatch for FPilgrimPeripheralIMCs::GamepadAsPeripheralBeatmatchIMC");
static_assert(offsetof(FPilgrimPeripheralIMCs, PeripheralBeatmatchIMC_NonPro4Lanes) == 24, "Offset mismatch for FPilgrimPeripheralIMCs::PeripheralBeatmatchIMC_NonPro4Lanes");
static_assert(offsetof(FPilgrimPeripheralIMCs, PeripheralBeatmatchIMC_NonPro5Lanes) == 32, "Offset mismatch for FPilgrimPeripheralIMCs::PeripheralBeatmatchIMC_NonPro5Lanes");

// /Script/PilgrimCoreRuntime.PilgrimPersonalBestHistoryRpl
// Kind: ScriptStruct; super: none
struct FPilgrimPersonalBestHistoryRpl
{
public:
    std::uint8_t bSoloReachedNewHighscore; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBandReachedNewHighscore; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpotlightReachedNewHighscore; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlltimeReachedNewHighscore; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t LoadedScore[0x100]; // 0x0008 (Size: 0x100, Type: StructProperty)
    std::uint8_t NewScore[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, bSoloReachedNewHighscore) == 0, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::bSoloReachedNewHighscore");
static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, bBandReachedNewHighscore) == 1, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::bBandReachedNewHighscore");
static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, bSpotlightReachedNewHighscore) == 2, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::bSpotlightReachedNewHighscore");
static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, bAlltimeReachedNewHighscore) == 3, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::bAlltimeReachedNewHighscore");
static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, LoadedScore) == 8, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::LoadedScore");
static_assert(offsetof(FPilgrimPersonalBestHistoryRpl, NewScore) == 264, "Offset mismatch for FPilgrimPersonalBestHistoryRpl::NewScore");

// /Script/PilgrimCoreRuntime.PilgrimPersonalBestParams
// Kind: ScriptStruct; super: none
struct FPilgrimPersonalBestParams
{
public:
    std::uint8_t PlayerAccountId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SongShortName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t InstrumentType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    std::int32_t ControllerId; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t BandSize; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t SetlistIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseCache; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    std::int32_t FreshnessTime; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Priority; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    FString SpotlightGroup; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t BestScoreFlags; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimPersonalBestParams, PlayerAccountId) == 0, "Offset mismatch for FPilgrimPersonalBestParams::PlayerAccountId");
static_assert(offsetof(FPilgrimPersonalBestParams, SongShortName) == 48, "Offset mismatch for FPilgrimPersonalBestParams::SongShortName");
static_assert(offsetof(FPilgrimPersonalBestParams, InstrumentType) == 52, "Offset mismatch for FPilgrimPersonalBestParams::InstrumentType");
static_assert(offsetof(FPilgrimPersonalBestParams, ControllerId) == 56, "Offset mismatch for FPilgrimPersonalBestParams::ControllerId");
static_assert(offsetof(FPilgrimPersonalBestParams, BandSize) == 60, "Offset mismatch for FPilgrimPersonalBestParams::BandSize");
static_assert(offsetof(FPilgrimPersonalBestParams, SetlistIndex) == 64, "Offset mismatch for FPilgrimPersonalBestParams::SetlistIndex");
static_assert(offsetof(FPilgrimPersonalBestParams, bUseCache) == 68, "Offset mismatch for FPilgrimPersonalBestParams::bUseCache");
static_assert(offsetof(FPilgrimPersonalBestParams, FreshnessTime) == 72, "Offset mismatch for FPilgrimPersonalBestParams::FreshnessTime");
static_assert(offsetof(FPilgrimPersonalBestParams, Priority) == 76, "Offset mismatch for FPilgrimPersonalBestParams::Priority");
static_assert(offsetof(FPilgrimPersonalBestParams, SpotlightGroup) == 80, "Offset mismatch for FPilgrimPersonalBestParams::SpotlightGroup");
static_assert(offsetof(FPilgrimPersonalBestParams, BestScoreFlags) == 96, "Offset mismatch for FPilgrimPersonalBestParams::BestScoreFlags");

// /Script/PilgrimCoreRuntime.PilgrimPersonalBestResult
// Kind: ScriptStruct; super: none
struct FPilgrimPersonalBestResult
{
public:
    std::uint8_t BestSolo[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t BestBand[0x58]; // 0x0058 (Size: 0x58, Type: StructProperty)
    std::uint8_t BestSpotlight[0x58]; // 0x00B0 (Size: 0x58, Type: StructProperty)
    std::uint8_t BestAlltime[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPersonalBestResult, BestSolo) == 0, "Offset mismatch for FPilgrimPersonalBestResult::BestSolo");
static_assert(offsetof(FPilgrimPersonalBestResult, BestBand) == 88, "Offset mismatch for FPilgrimPersonalBestResult::BestBand");
static_assert(offsetof(FPilgrimPersonalBestResult, BestSpotlight) == 176, "Offset mismatch for FPilgrimPersonalBestResult::BestSpotlight");
static_assert(offsetof(FPilgrimPersonalBestResult, BestAlltime) == 264, "Offset mismatch for FPilgrimPersonalBestResult::BestAlltime");

// /Script/PilgrimCoreRuntime.PilgrimPersonalBestResultRpl
// Kind: ScriptStruct; super: none
struct FPilgrimPersonalBestResultRpl
{
public:
    std::uint8_t BestSolo[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t BestBand[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t BestSpotlight[0x40]; // 0x0080 (Size: 0x40, Type: StructProperty)
    std::uint8_t BestAlltime[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPersonalBestResultRpl, BestSolo) == 0, "Offset mismatch for FPilgrimPersonalBestResultRpl::BestSolo");
static_assert(offsetof(FPilgrimPersonalBestResultRpl, BestBand) == 64, "Offset mismatch for FPilgrimPersonalBestResultRpl::BestBand");
static_assert(offsetof(FPilgrimPersonalBestResultRpl, BestSpotlight) == 128, "Offset mismatch for FPilgrimPersonalBestResultRpl::BestSpotlight");
static_assert(offsetof(FPilgrimPersonalBestResultRpl, BestAlltime) == 192, "Offset mismatch for FPilgrimPersonalBestResultRpl::BestAlltime");

// /Script/PilgrimCoreRuntime.PilgrimPlacementAnalyticsData
// Kind: ScriptStruct; super: none
struct FPilgrimPlacementAnalyticsData
{
public:
    std::int32_t Placement; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsEliminated; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t MatchmakingRating; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t RoundNumber; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimPlacementAnalyticsData, Placement) == 0, "Offset mismatch for FPilgrimPlacementAnalyticsData::Placement");
static_assert(offsetof(FPilgrimPlacementAnalyticsData, bIsEliminated) == 4, "Offset mismatch for FPilgrimPlacementAnalyticsData::bIsEliminated");
static_assert(offsetof(FPilgrimPlacementAnalyticsData, MatchmakingRating) == 8, "Offset mismatch for FPilgrimPlacementAnalyticsData::MatchmakingRating");
static_assert(offsetof(FPilgrimPlacementAnalyticsData, RoundNumber) == 12, "Offset mismatch for FPilgrimPlacementAnalyticsData::RoundNumber");

// /Script/PilgrimCoreRuntime.PilgrimPlacementAnalyticsQuestCounts
// Kind: ScriptStruct; super: none
struct FPilgrimPlacementAnalyticsQuestCounts
{
public:
    TMap<void*, void*> Active; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Completed; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPilgrimPlacementAnalyticsQuestCounts, Active) == 0, "Offset mismatch for FPilgrimPlacementAnalyticsQuestCounts::Active");
static_assert(offsetof(FPilgrimPlacementAnalyticsQuestCounts, Completed) == 16, "Offset mismatch for FPilgrimPlacementAnalyticsQuestCounts::Completed");

// /Script/PilgrimCoreRuntime.PilgrimPlaySongParams
// Kind: ScriptStruct; super: none
struct FPilgrimPlaySongParams
{
public:
    void* MetasoundPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Song; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* SongData; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongPlayMethod; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimPlaySongParams, MetasoundPlayer) == 0, "Offset mismatch for FPilgrimPlaySongParams::MetasoundPlayer");
static_assert(offsetof(FPilgrimPlaySongParams, MusicClock) == 8, "Offset mismatch for FPilgrimPlaySongParams::MusicClock");
static_assert(offsetof(FPilgrimPlaySongParams, Song) == 16, "Offset mismatch for FPilgrimPlaySongParams::Song");
static_assert(offsetof(FPilgrimPlaySongParams, SongData) == 24, "Offset mismatch for FPilgrimPlaySongParams::SongData");
static_assert(offsetof(FPilgrimPlaySongParams, SongPlayMethod) == 32, "Offset mismatch for FPilgrimPlaySongParams::SongPlayMethod");

// /Script/PilgrimCoreRuntime.PilgrimPlayerControllerInstrumentTierCollection
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerControllerInstrumentTierCollection
{
public:
    TMap<void*, void*> InstrumentCollection; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> TrackOrder; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerControllerInstrumentTierCollection, InstrumentCollection) == 0, "Offset mismatch for FPilgrimPlayerControllerInstrumentTierCollection::InstrumentCollection");
static_assert(offsetof(FPilgrimPlayerControllerInstrumentTierCollection, TrackOrder) == 16, "Offset mismatch for FPilgrimPlayerControllerInstrumentTierCollection::TrackOrder");

// /Script/PilgrimCoreRuntime.PilgrimPlayerControllerInstrumentTierItem
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerControllerInstrumentTierItem
{
public:
    std::uint8_t FortItem[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> AltFortItem; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPilgrimPlayerControllerInstrumentTierItem, FortItem) == 0, "Offset mismatch for FPilgrimPlayerControllerInstrumentTierItem::FortItem");
static_assert(offsetof(FPilgrimPlayerControllerInstrumentTierItem, AltFortItem) == 32, "Offset mismatch for FPilgrimPlayerControllerInstrumentTierItem::AltFortItem");

// /Script/PilgrimCoreRuntime.PilgrimPlayerControllerInstrumentTierMap
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerControllerInstrumentTierMap
{
public:
    TMap<void*, void*> RarityMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPilgrimPlayerControllerInstrumentTierMap, RarityMap) == 0, "Offset mismatch for FPilgrimPlayerControllerInstrumentTierMap::RarityMap");

// /Script/PilgrimCoreRuntime.PilgrimPlayerFeedParams
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerFeedParams
{
public:
    std::uint8_t SortType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ControllerId; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t SongQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortNameMatcher[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TArray<void*> Leaderboards; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FriendIds; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerFeedParams, SortType) == 0, "Offset mismatch for FPilgrimPlayerFeedParams::SortType");
static_assert(offsetof(FPilgrimPlayerFeedParams, ControllerId) == 4, "Offset mismatch for FPilgrimPlayerFeedParams::ControllerId");
static_assert(offsetof(FPilgrimPlayerFeedParams, SongQuery) == 8, "Offset mismatch for FPilgrimPlayerFeedParams::SongQuery");
static_assert(offsetof(FPilgrimPlayerFeedParams, SongShortNameMatcher) == 80, "Offset mismatch for FPilgrimPlayerFeedParams::SongShortNameMatcher");
static_assert(offsetof(FPilgrimPlayerFeedParams, Leaderboards) == 104, "Offset mismatch for FPilgrimPlayerFeedParams::Leaderboards");
static_assert(offsetof(FPilgrimPlayerFeedParams, FriendIds) == 120, "Offset mismatch for FPilgrimPlayerFeedParams::FriendIds");

// /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResult
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerFeedResult
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SongSummary; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerFeedResult, Entries) == 0, "Offset mismatch for FPilgrimPlayerFeedResult::Entries");
static_assert(offsetof(FPilgrimPlayerFeedResult, SongSummary) == 16, "Offset mismatch for FPilgrimPlayerFeedResult::SongSummary");

// /Script/PilgrimCoreRuntime.PilgrimPlayerFeedResultEntry
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerFeedResultEntry
{
public:
    FString FriendName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SongShortName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    TArray<void*> InstrumentsPlayed; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PlayerHighScore; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t FriendHighscore; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t FriendAchievedScoreDate[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPlayerFeedResultEntry, FriendName) == 0, "Offset mismatch for FPilgrimPlayerFeedResultEntry::FriendName");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, SongShortName) == 16, "Offset mismatch for FPilgrimPlayerFeedResultEntry::SongShortName");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, LeaderboardType) == 20, "Offset mismatch for FPilgrimPlayerFeedResultEntry::LeaderboardType");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, InstrumentsPlayed) == 24, "Offset mismatch for FPilgrimPlayerFeedResultEntry::InstrumentsPlayed");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, PlayerHighScore) == 40, "Offset mismatch for FPilgrimPlayerFeedResultEntry::PlayerHighScore");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, FriendHighscore) == 44, "Offset mismatch for FPilgrimPlayerFeedResultEntry::FriendHighscore");
static_assert(offsetof(FPilgrimPlayerFeedResultEntry, FriendAchievedScoreDate) == 48, "Offset mismatch for FPilgrimPlayerFeedResultEntry::FriendAchievedScoreDate");

// /Script/PilgrimCoreRuntime.PilgrimPlayerFeedSongSummary
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerFeedSongSummary
{
public:
    FName SongShortName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> EntryIndexes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerFeedSongSummary, SongShortName) == 0, "Offset mismatch for FPilgrimPlayerFeedSongSummary::SongShortName");
static_assert(offsetof(FPilgrimPlayerFeedSongSummary, EntryIndexes) == 8, "Offset mismatch for FPilgrimPlayerFeedSongSummary::EntryIndexes");

// /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheEntry
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerHistoryCacheEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryCacheParams
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerHistoryCacheParams
{
public:
    std::uint8_t PlayerAccountId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FString GameId; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString EventId; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString EventWindowId; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimPlayerHistoryCacheParams, PlayerAccountId) == 0, "Offset mismatch for FPilgrimPlayerHistoryCacheParams::PlayerAccountId");
static_assert(offsetof(FPilgrimPlayerHistoryCacheParams, GameId) == 48, "Offset mismatch for FPilgrimPlayerHistoryCacheParams::GameId");
static_assert(offsetof(FPilgrimPlayerHistoryCacheParams, EventId) == 64, "Offset mismatch for FPilgrimPlayerHistoryCacheParams::EventId");
static_assert(offsetof(FPilgrimPlayerHistoryCacheParams, EventWindowId) == 80, "Offset mismatch for FPilgrimPlayerHistoryCacheParams::EventWindowId");

// /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryEvent
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerHistoryEvent
{
public:
    FString GameId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EventId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString EventWindowId; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString TeamId; // 0x0030 (Size: 0x10, Type: StrProperty)
    TArray<void*> TeamAccountIds; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PointsEarned; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    std::int64_t Rank; // 0x0058 (Size: 0x8, Type: Int64Property)
    double Score; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double Percentile; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> SessionHistory; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerHistoryEvent, GameId) == 0, "Offset mismatch for FPilgrimPlayerHistoryEvent::GameId");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, EventId) == 16, "Offset mismatch for FPilgrimPlayerHistoryEvent::EventId");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, EventWindowId) == 32, "Offset mismatch for FPilgrimPlayerHistoryEvent::EventWindowId");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, TeamId) == 48, "Offset mismatch for FPilgrimPlayerHistoryEvent::TeamId");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, TeamAccountIds) == 64, "Offset mismatch for FPilgrimPlayerHistoryEvent::TeamAccountIds");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, PointsEarned) == 80, "Offset mismatch for FPilgrimPlayerHistoryEvent::PointsEarned");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, Rank) == 88, "Offset mismatch for FPilgrimPlayerHistoryEvent::Rank");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, Score) == 96, "Offset mismatch for FPilgrimPlayerHistoryEvent::Score");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, Percentile) == 104, "Offset mismatch for FPilgrimPlayerHistoryEvent::Percentile");
static_assert(offsetof(FPilgrimPlayerHistoryEvent, SessionHistory) == 112, "Offset mismatch for FPilgrimPlayerHistoryEvent::SessionHistory");

// /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryParams
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerHistoryParams
{
public:
    std::uint8_t PlayerAccountId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SongQuery[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortNameMatcher[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t InstrumentType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ScoreParam; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsSpotlightCompetition; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0093
    FString SpotlightGroup; // 0x0098 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsAllTimeHighScore; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t ControllerId; // 0x00AC (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> RequestingPlayer; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPilgrimPlayerHistoryParams, PlayerAccountId) == 0, "Offset mismatch for FPilgrimPlayerHistoryParams::PlayerAccountId");
static_assert(offsetof(FPilgrimPlayerHistoryParams, SongQuery) == 48, "Offset mismatch for FPilgrimPlayerHistoryParams::SongQuery");
static_assert(offsetof(FPilgrimPlayerHistoryParams, SongShortNameMatcher) == 120, "Offset mismatch for FPilgrimPlayerHistoryParams::SongShortNameMatcher");
static_assert(offsetof(FPilgrimPlayerHistoryParams, InstrumentType) == 144, "Offset mismatch for FPilgrimPlayerHistoryParams::InstrumentType");
static_assert(offsetof(FPilgrimPlayerHistoryParams, ScoreParam) == 145, "Offset mismatch for FPilgrimPlayerHistoryParams::ScoreParam");
static_assert(offsetof(FPilgrimPlayerHistoryParams, bIsSpotlightCompetition) == 146, "Offset mismatch for FPilgrimPlayerHistoryParams::bIsSpotlightCompetition");
static_assert(offsetof(FPilgrimPlayerHistoryParams, SpotlightGroup) == 152, "Offset mismatch for FPilgrimPlayerHistoryParams::SpotlightGroup");
static_assert(offsetof(FPilgrimPlayerHistoryParams, bIsAllTimeHighScore) == 168, "Offset mismatch for FPilgrimPlayerHistoryParams::bIsAllTimeHighScore");
static_assert(offsetof(FPilgrimPlayerHistoryParams, ControllerId) == 172, "Offset mismatch for FPilgrimPlayerHistoryParams::ControllerId");
static_assert(offsetof(FPilgrimPlayerHistoryParams, RequestingPlayer) == 176, "Offset mismatch for FPilgrimPlayerHistoryParams::RequestingPlayer");

// /Script/PilgrimCoreRuntime.PilgrimPlayerHistoryResult
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerHistoryResult
{
public:
    std::uint8_t PlayerAccountId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TArray<void*> Events; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimPlayerHistoryResult, PlayerAccountId) == 0, "Offset mismatch for FPilgrimPlayerHistoryResult::PlayerAccountId");
static_assert(offsetof(FPilgrimPlayerHistoryResult, Events) == 48, "Offset mismatch for FPilgrimPlayerHistoryResult::Events");

// /Script/PilgrimCoreRuntime.PilgrimPlayerInfo
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerInfo
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsLocalPlayer; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimPlayerInfo, PlayerState) == 0, "Offset mismatch for FPilgrimPlayerInfo::PlayerState");
static_assert(offsetof(FPilgrimPlayerInfo, PlayerController) == 8, "Offset mismatch for FPilgrimPlayerInfo::PlayerController");
static_assert(offsetof(FPilgrimPlayerInfo, bIsLocalPlayer) == 16, "Offset mismatch for FPilgrimPlayerInfo::bIsLocalPlayer");

// /Script/PilgrimCoreRuntime.PilgrimPlayerSessionHistory
// Kind: ScriptStruct; super: none
struct FPilgrimPlayerSessionHistory
{
public:
    FString SessionID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t EndTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TrackedStats[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimPlayerSessionHistory, SessionID) == 0, "Offset mismatch for FPilgrimPlayerSessionHistory::SessionID");
static_assert(offsetof(FPilgrimPlayerSessionHistory, EndTime) == 16, "Offset mismatch for FPilgrimPlayerSessionHistory::EndTime");
static_assert(offsetof(FPilgrimPlayerSessionHistory, TrackedStats) == 24, "Offset mismatch for FPilgrimPlayerSessionHistory::TrackedStats");

// /Script/PilgrimCoreRuntime.PilgrimPresetIndices
// Kind: ScriptStruct; super: none
struct FPilgrimPresetIndices
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimProVocalsTrackDensityTier
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalsTrackDensityTier
{
public:
    std::uint8_t TierName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float LyricsPerSecondThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float TimeWindowSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimProVocalsTrackDensityTier, TierName) == 0, "Offset mismatch for FPilgrimProVocalsTrackDensityTier::TierName");
static_assert(offsetof(FPilgrimProVocalsTrackDensityTier, LyricsPerSecondThreshold) == 4, "Offset mismatch for FPilgrimProVocalsTrackDensityTier::LyricsPerSecondThreshold");
static_assert(offsetof(FPilgrimProVocalsTrackDensityTier, TimeWindowSeconds) == 8, "Offset mismatch for FPilgrimProVocalsTrackDensityTier::TimeWindowSeconds");

// /Script/PilgrimCoreRuntime.PilgrimQuestDisplayInfo
// Kind: ScriptStruct; super: none
struct FPilgrimQuestDisplayInfo
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t CompletionText[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t RewardInfo[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimQuestDisplayInfo, Name) == 0, "Offset mismatch for FPilgrimQuestDisplayInfo::Name");
static_assert(offsetof(FPilgrimQuestDisplayInfo, Description) == 16, "Offset mismatch for FPilgrimQuestDisplayInfo::Description");
static_assert(offsetof(FPilgrimQuestDisplayInfo, ShortDescription) == 32, "Offset mismatch for FPilgrimQuestDisplayInfo::ShortDescription");
static_assert(offsetof(FPilgrimQuestDisplayInfo, CompletionText) == 48, "Offset mismatch for FPilgrimQuestDisplayInfo::CompletionText");
static_assert(offsetof(FPilgrimQuestDisplayInfo, RewardInfo) == 64, "Offset mismatch for FPilgrimQuestDisplayInfo::RewardInfo");

// /Script/PilgrimCoreRuntime.PilgrimQuestFilter
// Kind: ScriptStruct; super: none
struct FPilgrimQuestFilter
{
public:
    std::uint8_t QuestTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuestObjectiveFilterQuery[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuestObjectiveFilterMatcher[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t QuestObjectiveSongSIDMatcher[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowCompletedQuests; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUpdatedQuests; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUnchangedQuests; // 0x00C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimQuestFilter, QuestTagQuery) == 0, "Offset mismatch for FPilgrimQuestFilter::QuestTagQuery");
static_assert(offsetof(FPilgrimQuestFilter, QuestObjectiveFilterQuery) == 72, "Offset mismatch for FPilgrimQuestFilter::QuestObjectiveFilterQuery");
static_assert(offsetof(FPilgrimQuestFilter, QuestObjectiveFilterMatcher) == 144, "Offset mismatch for FPilgrimQuestFilter::QuestObjectiveFilterMatcher");
static_assert(offsetof(FPilgrimQuestFilter, QuestObjectiveSongSIDMatcher) == 168, "Offset mismatch for FPilgrimQuestFilter::QuestObjectiveSongSIDMatcher");
static_assert(offsetof(FPilgrimQuestFilter, bShowCompletedQuests) == 192, "Offset mismatch for FPilgrimQuestFilter::bShowCompletedQuests");
static_assert(offsetof(FPilgrimQuestFilter, bShowUpdatedQuests) == 193, "Offset mismatch for FPilgrimQuestFilter::bShowUpdatedQuests");
static_assert(offsetof(FPilgrimQuestFilter, bShowUnchangedQuests) == 194, "Offset mismatch for FPilgrimQuestFilter::bShowUnchangedQuests");

// /Script/PilgrimCoreRuntime.PilgrimScoreMultiplierInfo
// Kind: ScriptStruct; super: none
struct FPilgrimScoreMultiplierInfo
{
public:
    std::int32_t NotesCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ScoreMultiplier; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimScoreMultiplierInfo, NotesCount) == 0, "Offset mismatch for FPilgrimScoreMultiplierInfo::NotesCount");
static_assert(offsetof(FPilgrimScoreMultiplierInfo, ScoreMultiplier) == 4, "Offset mismatch for FPilgrimScoreMultiplierInfo::ScoreMultiplier");

// /Script/PilgrimCoreRuntime.PilgrimSetlistTrackAnalyticsInfo
// Kind: ScriptStruct; super: none
struct FPilgrimSetlistTrackAnalyticsInfo
{
public:
    std::int32_t SetlistTrackNumber; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString TrackId; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString TrackTitle; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString TrackArtist; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPilgrimSetlistTrackAnalyticsInfo, SetlistTrackNumber) == 0, "Offset mismatch for FPilgrimSetlistTrackAnalyticsInfo::SetlistTrackNumber");
static_assert(offsetof(FPilgrimSetlistTrackAnalyticsInfo, TrackId) == 8, "Offset mismatch for FPilgrimSetlistTrackAnalyticsInfo::TrackId");
static_assert(offsetof(FPilgrimSetlistTrackAnalyticsInfo, TrackTitle) == 24, "Offset mismatch for FPilgrimSetlistTrackAnalyticsInfo::TrackTitle");
static_assert(offsetof(FPilgrimSetlistTrackAnalyticsInfo, TrackArtist) == 40, "Offset mismatch for FPilgrimSetlistTrackAnalyticsInfo::TrackArtist");

// /Script/PilgrimCoreRuntime.PilgrimSetlistTrackDiffAnalyticsInfo
// Kind: ScriptStruct; super: none
struct FPilgrimSetlistTrackDiffAnalyticsInfo
{
public:
    FString TrackId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TrackTitle; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString TrackArtist; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::int32_t QuantityAdded; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimSetlistTrackDiffAnalyticsInfo, TrackId) == 0, "Offset mismatch for FPilgrimSetlistTrackDiffAnalyticsInfo::TrackId");
static_assert(offsetof(FPilgrimSetlistTrackDiffAnalyticsInfo, TrackTitle) == 16, "Offset mismatch for FPilgrimSetlistTrackDiffAnalyticsInfo::TrackTitle");
static_assert(offsetof(FPilgrimSetlistTrackDiffAnalyticsInfo, TrackArtist) == 32, "Offset mismatch for FPilgrimSetlistTrackDiffAnalyticsInfo::TrackArtist");
static_assert(offsetof(FPilgrimSetlistTrackDiffAnalyticsInfo, QuantityAdded) == 48, "Offset mismatch for FPilgrimSetlistTrackDiffAnalyticsInfo::QuantityAdded");

// /Script/PilgrimCoreRuntime.PilgrimSongAudioResponseCueSettings
// Kind: ScriptStruct; super: none
struct FPilgrimSongAudioResponseCueSettings
{
public:
    float TrackGain; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float FadeDurationMs; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimSongAudioResponseCueSettings, TrackGain) == 0, "Offset mismatch for FPilgrimSongAudioResponseCueSettings::TrackGain");
static_assert(offsetof(FPilgrimSongAudioResponseCueSettings, FadeDurationMs) == 4, "Offset mismatch for FPilgrimSongAudioResponseCueSettings::FadeDurationMs");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengeFoundHighScore
// Kind: ScriptStruct; super: none
struct FPilgrimSongChallengeFoundHighScore
{
public:
    std::int32_t PlayerHighScore; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerRank; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimSongChallengeFoundHighScore, PlayerHighScore) == 0, "Offset mismatch for FPilgrimSongChallengeFoundHighScore::PlayerHighScore");
static_assert(offsetof(FPilgrimSongChallengeFoundHighScore, PlayerRank) == 4, "Offset mismatch for FPilgrimSongChallengeFoundHighScore::PlayerRank");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengeFoundQuest
// Kind: ScriptStruct; super: none
struct FPilgrimSongChallengeFoundQuest
{
public:
    std::uint8_t QuestView[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimSongChallengeFoundQuest, QuestView) == 0, "Offset mismatch for FPilgrimSongChallengeFoundQuest::QuestView");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengeFoundRival
// Kind: ScriptStruct; super: none
struct FPilgrimSongChallengeFoundRival
{
public:
    FString RivalDisplayName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t RivalScore; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t RivalRank; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t RivalFriendRank; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimSongChallengeFoundRival, RivalDisplayName) == 0, "Offset mismatch for FPilgrimSongChallengeFoundRival::RivalDisplayName");
static_assert(offsetof(FPilgrimSongChallengeFoundRival, RivalScore) == 16, "Offset mismatch for FPilgrimSongChallengeFoundRival::RivalScore");
static_assert(offsetof(FPilgrimSongChallengeFoundRival, RivalRank) == 20, "Offset mismatch for FPilgrimSongChallengeFoundRival::RivalRank");
static_assert(offsetof(FPilgrimSongChallengeFoundRival, RivalFriendRank) == 24, "Offset mismatch for FPilgrimSongChallengeFoundRival::RivalFriendRank");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengeKey
// Kind: ScriptStruct; super: none
struct FPilgrimSongChallengeKey
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Instrument; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimSongChallengeKey, SongShortName) == 0, "Offset mismatch for FPilgrimSongChallengeKey::SongShortName");
static_assert(offsetof(FPilgrimSongChallengeKey, Instrument) == 4, "Offset mismatch for FPilgrimSongChallengeKey::Instrument");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengeLookupResult
// Kind: ScriptStruct; super: none
struct FPilgrimSongChallengeLookupResult
{
public:
    std::uint8_t FoundChallengeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t RivalChallenge[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t HighScoreChallenge[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t QuestChallenge[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimSongChallengeLookupResult, FoundChallengeType) == 0, "Offset mismatch for FPilgrimSongChallengeLookupResult::FoundChallengeType");
static_assert(offsetof(FPilgrimSongChallengeLookupResult, RivalChallenge) == 8, "Offset mismatch for FPilgrimSongChallengeLookupResult::RivalChallenge");
static_assert(offsetof(FPilgrimSongChallengeLookupResult, HighScoreChallenge) == 40, "Offset mismatch for FPilgrimSongChallengeLookupResult::HighScoreChallenge");
static_assert(offsetof(FPilgrimSongChallengeLookupResult, QuestChallenge) == 48, "Offset mismatch for FPilgrimSongChallengeLookupResult::QuestChallenge");

// /Script/PilgrimCoreRuntime.PilgrimSongMeasurePosition
// Kind: ScriptStruct; super: none
struct FPilgrimSongMeasurePosition
{
public:
    std::int32_t Measure; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Beat; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Tick; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimSongMeasurePosition, Measure) == 0, "Offset mismatch for FPilgrimSongMeasurePosition::Measure");
static_assert(offsetof(FPilgrimSongMeasurePosition, Beat) == 4, "Offset mismatch for FPilgrimSongMeasurePosition::Beat");
static_assert(offsetof(FPilgrimSongMeasurePosition, Tick) == 8, "Offset mismatch for FPilgrimSongMeasurePosition::Tick");

// /Script/PilgrimCoreRuntime.PilgrimSongPlaylistEntry
// Kind: ScriptStruct; super: none
struct FPilgrimSongPlaylistEntry
{
public:
    void* Song; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongDifficulty; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimSongPlaylistEntry, Song) == 0, "Offset mismatch for FPilgrimSongPlaylistEntry::Song");
static_assert(offsetof(FPilgrimSongPlaylistEntry, SongDifficulty) == 8, "Offset mismatch for FPilgrimSongPlaylistEntry::SongDifficulty");

// /Script/PilgrimCoreRuntime.PilgrimSongSettings
// Kind: ScriptStruct; super: none
struct FPilgrimSongSettings
{
public:
    void* Song; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongShortName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Difficulty; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackType; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimSongSettings, Song) == 0, "Offset mismatch for FPilgrimSongSettings::Song");
static_assert(offsetof(FPilgrimSongSettings, SongShortName) == 8, "Offset mismatch for FPilgrimSongSettings::SongShortName");
static_assert(offsetof(FPilgrimSongSettings, Difficulty) == 12, "Offset mismatch for FPilgrimSongSettings::Difficulty");
static_assert(offsetof(FPilgrimSongSettings, TrackType) == 13, "Offset mismatch for FPilgrimSongSettings::TrackType");

// /Script/PilgrimCoreRuntime.PilgrimSongTime
// Kind: ScriptStruct; super: none
struct FPilgrimSongTime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimSpotlightChallengeCache
// Kind: ScriptStruct; super: none
struct FPilgrimSpotlightChallengeCache
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetition
// Kind: ScriptStruct; super: none
struct FPilgrimSpotlightCompetition
{
public:
    FString SpotlightName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SpotlightGroup; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t BeginTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TArray<void*> SongUIDs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SongShortNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Constraints[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimSpotlightCompetition, SpotlightName) == 0, "Offset mismatch for FPilgrimSpotlightCompetition::SpotlightName");
static_assert(offsetof(FPilgrimSpotlightCompetition, SpotlightGroup) == 16, "Offset mismatch for FPilgrimSpotlightCompetition::SpotlightGroup");
static_assert(offsetof(FPilgrimSpotlightCompetition, BeginTime) == 32, "Offset mismatch for FPilgrimSpotlightCompetition::BeginTime");
static_assert(offsetof(FPilgrimSpotlightCompetition, EndTime) == 40, "Offset mismatch for FPilgrimSpotlightCompetition::EndTime");
static_assert(offsetof(FPilgrimSpotlightCompetition, SongUIDs) == 48, "Offset mismatch for FPilgrimSpotlightCompetition::SongUIDs");
static_assert(offsetof(FPilgrimSpotlightCompetition, SongShortNames) == 64, "Offset mismatch for FPilgrimSpotlightCompetition::SongShortNames");
static_assert(offsetof(FPilgrimSpotlightCompetition, Constraints) == 80, "Offset mismatch for FPilgrimSpotlightCompetition::Constraints");

// /Script/PilgrimCoreRuntime.PilgrimSpotlightCompetitionParams
// Kind: ScriptStruct; super: none
struct FPilgrimSpotlightCompetitionParams
{
public:
    std::uint8_t SongQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortNameMatcher[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t InstrumentType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseCache; // 0x0061 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimSpotlightCompetitionParams, SongQuery) == 0, "Offset mismatch for FPilgrimSpotlightCompetitionParams::SongQuery");
static_assert(offsetof(FPilgrimSpotlightCompetitionParams, SongShortNameMatcher) == 72, "Offset mismatch for FPilgrimSpotlightCompetitionParams::SongShortNameMatcher");
static_assert(offsetof(FPilgrimSpotlightCompetitionParams, InstrumentType) == 96, "Offset mismatch for FPilgrimSpotlightCompetitionParams::InstrumentType");
static_assert(offsetof(FPilgrimSpotlightCompetitionParams, bUseCache) == 97, "Offset mismatch for FPilgrimSpotlightCompetitionParams::bUseCache");

// /Script/PilgrimCoreRuntime.PilgrimStoredGameUserSettings
// Kind: ScriptStruct; super: none
struct FPilgrimStoredGameUserSettings
{
public:
    std::uint8_t SongDifficulty; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Instrument; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimStoredGameUserSettings, SongDifficulty) == 0, "Offset mismatch for FPilgrimStoredGameUserSettings::SongDifficulty");
static_assert(offsetof(FPilgrimStoredGameUserSettings, Instrument) == 1, "Offset mismatch for FPilgrimStoredGameUserSettings::Instrument");

// /Script/PilgrimCoreRuntime.PilgrimStreakInfo
// Kind: ScriptStruct; super: none
struct FPilgrimStreakInfo
{
public:
    std::int32_t NotesCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    float DamageMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimStreakInfo, NotesCount) == 0, "Offset mismatch for FPilgrimStreakInfo::NotesCount");
static_assert(offsetof(FPilgrimStreakInfo, DamageMultiplier) == 4, "Offset mismatch for FPilgrimStreakInfo::DamageMultiplier");

// /Script/PilgrimCoreRuntime.PilgrimTimedInput
// Kind: ScriptStruct; super: none
struct FPilgrimTimedInput
{
public:
    std::uint8_t InputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsPress; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSpecialInput; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float ExperiencedTick; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TrackLane; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float InputStrength; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimTimedInput, InputType) == 0, "Offset mismatch for FPilgrimTimedInput::InputType");
static_assert(offsetof(FPilgrimTimedInput, bIsPress) == 1, "Offset mismatch for FPilgrimTimedInput::bIsPress");
static_assert(offsetof(FPilgrimTimedInput, bIsSpecialInput) == 2, "Offset mismatch for FPilgrimTimedInput::bIsSpecialInput");
static_assert(offsetof(FPilgrimTimedInput, ExperiencedTick) == 4, "Offset mismatch for FPilgrimTimedInput::ExperiencedTick");
static_assert(offsetof(FPilgrimTimedInput, TrackLane) == 8, "Offset mismatch for FPilgrimTimedInput::TrackLane");
static_assert(offsetof(FPilgrimTimedInput, InputStrength) == 12, "Offset mismatch for FPilgrimTimedInput::InputStrength");

// /Script/PilgrimCoreRuntime.PilgrimTimedInputArray
// Kind: ScriptStruct; super: none
struct FPilgrimTimedInputArray
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimTouchBrushesMappingConfig
// Kind: ScriptStruct; super: none
struct FPilgrimTouchBrushesMappingConfig
{
public:
    TArray<void*> Mappings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimTouchBrushesMappingConfig, Mappings) == 0, "Offset mismatch for FPilgrimTouchBrushesMappingConfig::Mappings");

// /Script/PilgrimCoreRuntime.PilgrimTrackAndGame
// Kind: ScriptStruct; super: none
struct FPilgrimTrackAndGame
{
public:
    void* PilgrimTrack; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGame; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimTrackAndGame, PilgrimTrack) == 0, "Offset mismatch for FPilgrimTrackAndGame::PilgrimTrack");
static_assert(offsetof(FPilgrimTrackAndGame, PilgrimGame) == 8, "Offset mismatch for FPilgrimTrackAndGame::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimTrackAndGameInternalData
// Kind: ScriptStruct; super: none
struct FPilgrimTrackAndGameInternalData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureBox
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureBox
{
public:
    std::uint8_t LeftTop[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t RightBottom[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureBox, LeftTop) == 0, "Offset mismatch for FPilgrimTrackCaptureBox::LeftTop");
static_assert(offsetof(FPilgrimTrackCaptureBox, RightBottom) == 16, "Offset mismatch for FPilgrimTrackCaptureBox::RightBottom");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureFade
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureFade
{
public:
    std::uint8_t SafeZoneMargin[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Crop[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t bHasCropAspectRatioOverride; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float CropAspectRatioOverride; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t EdgeLengths[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t InnerBounds[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t OuterBounds[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureFade, SafeZoneMargin) == 0, "Offset mismatch for FPilgrimTrackCaptureFade::SafeZoneMargin");
static_assert(offsetof(FPilgrimTrackCaptureFade, Crop) == 8, "Offset mismatch for FPilgrimTrackCaptureFade::Crop");
static_assert(offsetof(FPilgrimTrackCaptureFade, bHasCropAspectRatioOverride) == 40, "Offset mismatch for FPilgrimTrackCaptureFade::bHasCropAspectRatioOverride");
static_assert(offsetof(FPilgrimTrackCaptureFade, CropAspectRatioOverride) == 44, "Offset mismatch for FPilgrimTrackCaptureFade::CropAspectRatioOverride");
static_assert(offsetof(FPilgrimTrackCaptureFade, EdgeLengths) == 48, "Offset mismatch for FPilgrimTrackCaptureFade::EdgeLengths");
static_assert(offsetof(FPilgrimTrackCaptureFade, InnerBounds) == 80, "Offset mismatch for FPilgrimTrackCaptureFade::InnerBounds");
static_assert(offsetof(FPilgrimTrackCaptureFade, OuterBounds) == 112, "Offset mismatch for FPilgrimTrackCaptureFade::OuterBounds");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureLayout
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureLayout
{
public:
    std::uint8_t AdjustView[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    std::uint8_t AdjustProjection[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureLayout, AdjustView) == 0, "Offset mismatch for FPilgrimTrackCaptureLayout::AdjustView");
static_assert(offsetof(FPilgrimTrackCaptureLayout, AdjustProjection) == 144, "Offset mismatch for FPilgrimTrackCaptureLayout::AdjustProjection");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureLayoutDefinition
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureLayoutDefinition
{
public:
    std::uint8_t Fade[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    TArray<void*> Layouts; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LayoutsWithExternalTrack; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FadeWithExternalTrack[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureLayoutDefinition, Fade) == 0, "Offset mismatch for FPilgrimTrackCaptureLayoutDefinition::Fade");
static_assert(offsetof(FPilgrimTrackCaptureLayoutDefinition, Layouts) == 144, "Offset mismatch for FPilgrimTrackCaptureLayoutDefinition::Layouts");
static_assert(offsetof(FPilgrimTrackCaptureLayoutDefinition, LayoutsWithExternalTrack) == 160, "Offset mismatch for FPilgrimTrackCaptureLayoutDefinition::LayoutsWithExternalTrack");
static_assert(offsetof(FPilgrimTrackCaptureLayoutDefinition, FadeWithExternalTrack) == 176, "Offset mismatch for FPilgrimTrackCaptureLayoutDefinition::FadeWithExternalTrack");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureSafeZoneMargin
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureSafeZoneMargin
{
public:
    std::uint8_t Left; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Right; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Top; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Bottom; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureSafeZoneMargin, Left) == 0, "Offset mismatch for FPilgrimTrackCaptureSafeZoneMargin::Left");
static_assert(offsetof(FPilgrimTrackCaptureSafeZoneMargin, Right) == 1, "Offset mismatch for FPilgrimTrackCaptureSafeZoneMargin::Right");
static_assert(offsetof(FPilgrimTrackCaptureSafeZoneMargin, Top) == 2, "Offset mismatch for FPilgrimTrackCaptureSafeZoneMargin::Top");
static_assert(offsetof(FPilgrimTrackCaptureSafeZoneMargin, Bottom) == 3, "Offset mismatch for FPilgrimTrackCaptureSafeZoneMargin::Bottom");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureTransform
// Kind: ScriptStruct; super: none
struct FPilgrimTrackCaptureTransform
{
public:
    std::uint8_t FirstAxisSkew[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondAxisSkew[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimTrackCaptureTransform, FirstAxisSkew) == 0, "Offset mismatch for FPilgrimTrackCaptureTransform::FirstAxisSkew");
static_assert(offsetof(FPilgrimTrackCaptureTransform, SecondAxisSkew) == 24, "Offset mismatch for FPilgrimTrackCaptureTransform::SecondAxisSkew");
static_assert(offsetof(FPilgrimTrackCaptureTransform, Transform) == 48, "Offset mismatch for FPilgrimTrackCaptureTransform::Transform");

// /Script/PilgrimCoreRuntime.PilgrimTrackItemKey
// Kind: ScriptStruct; super: none
struct FPilgrimTrackItemKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimTrackTypesStateMembership
// Kind: ScriptStruct; super: none
struct FPilgrimTrackTypesStateMembership
{
public:
    std::uint8_t TrackTypesInState[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    TSet<void*> TrackTypesNotInState; // 0x0010 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FPilgrimTrackTypesStateMembership, TrackTypesInState) == 0, "Offset mismatch for FPilgrimTrackTypesStateMembership::TrackTypesInState");
static_assert(offsetof(FPilgrimTrackTypesStateMembership, TrackTypesNotInState) == 16, "Offset mismatch for FPilgrimTrackTypesStateMembership::TrackTypesNotInState");

// /Script/PilgrimCoreRuntime.PilgrimWidgetMenuStateChange
// Kind: ScriptStruct; super: none
struct FPilgrimWidgetMenuStateChange
{
public:
    std::uint8_t WidgetClassPath[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float ReplayTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMenuOpen; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimWidgetMenuStateChange, WidgetClassPath) == 0, "Offset mismatch for FPilgrimWidgetMenuStateChange::WidgetClassPath");
static_assert(offsetof(FPilgrimWidgetMenuStateChange, ReplayTime) == 24, "Offset mismatch for FPilgrimWidgetMenuStateChange::ReplayTime");
static_assert(offsetof(FPilgrimWidgetMenuStateChange, bMenuOpen) == 28, "Offset mismatch for FPilgrimWidgetMenuStateChange::bMenuOpen");

// /Script/PilgrimCoreRuntime.PlayerExperienceRecord
// Kind: ScriptStruct; super: none
struct FPlayerExperienceRecord
{
public:
    std::uint8_t bPlayerHasInteractedWithSongSelectorThisMatch; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerHasSelectedASongThisMatch; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerHasReadiedUpThisMatch; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerExperienceRecord, bPlayerHasInteractedWithSongSelectorThisMatch) == 0, "Offset mismatch for FPlayerExperienceRecord::bPlayerHasInteractedWithSongSelectorThisMatch");
static_assert(offsetof(FPlayerExperienceRecord, bPlayerHasSelectedASongThisMatch) == 1, "Offset mismatch for FPlayerExperienceRecord::bPlayerHasSelectedASongThisMatch");
static_assert(offsetof(FPlayerExperienceRecord, bPlayerHasReadiedUpThisMatch) == 2, "Offset mismatch for FPlayerExperienceRecord::bPlayerHasReadiedUpThisMatch");

// /Script/PilgrimCoreRuntime.PlayerHealthModifiers
// Kind: ScriptStruct; super: none
struct FPlayerHealthModifiers
{
public:
    float GemHit; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GemMiss; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GemPass; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlayerHealthModifiers, GemHit) == 0, "Offset mismatch for FPlayerHealthModifiers::GemHit");
static_assert(offsetof(FPlayerHealthModifiers, GemMiss) == 4, "Offset mismatch for FPlayerHealthModifiers::GemMiss");
static_assert(offsetof(FPlayerHealthModifiers, GemPass) == 8, "Offset mismatch for FPlayerHealthModifiers::GemPass");

// /Script/PilgrimCoreRuntime.ProVocalScoringPitchRange
// Kind: ScriptStruct; super: none
struct FProVocalScoringPitchRange
{
public:
    float PerfectThresholdInSemitones; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OuterThresholdInSemitones; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FProVocalScoringPitchRange, PerfectThresholdInSemitones) == 0, "Offset mismatch for FProVocalScoringPitchRange::PerfectThresholdInSemitones");
static_assert(offsetof(FProVocalScoringPitchRange, OuterThresholdInSemitones) == 4, "Offset mismatch for FProVocalScoringPitchRange::OuterThresholdInSemitones");

// /Script/PilgrimCoreRuntime.ProVocalsSectionRating
// Kind: ScriptStruct; super: none
struct FProVocalsSectionRating
{
public:
    float Threshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Name[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t RatingType; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FProVocalsSectionRating, Threshold) == 0, "Offset mismatch for FProVocalsSectionRating::Threshold");
static_assert(offsetof(FProVocalsSectionRating, Name) == 8, "Offset mismatch for FProVocalsSectionRating::Name");
static_assert(offsetof(FProVocalsSectionRating, RatingType) == 24, "Offset mismatch for FProVocalsSectionRating::RatingType");

// /Script/PilgrimCoreRuntime.RBTrackInfo
// Kind: ScriptStruct; super: none
struct FRBTrackInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.SongTimestampData
// Kind: ScriptStruct; super: none
struct FSongTimestampData
{
public:
    float ServerWorldTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t ServerSongPosition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSongTimestampData, ServerWorldTime) == 0, "Offset mismatch for FSongTimestampData::ServerWorldTime");
static_assert(offsetof(FSongTimestampData, ServerSongPosition) == 8, "Offset mismatch for FSongTimestampData::ServerSongPosition");

// /Script/PilgrimCoreRuntime.StarPercentageThresholds
// Kind: ScriptStruct; super: none
struct FStarPercentageThresholds
{
public:
    TArray<void*> Thresholds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStarPercentageThresholds, Thresholds) == 0, "Offset mismatch for FStarPercentageThresholds::Thresholds");

// /Script/PilgrimCoreRuntime.ActiveMusicBattleInstanceComponent
// Kind: Class; super: PlayspaceComponent
class UActiveMusicBattleInstanceComponent
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

static_assert(offsetof(UActiveMusicBattleInstanceComponent, PrimaryComponentTick) == 56, "Offset mismatch for UActiveMusicBattleInstanceComponent::PrimaryComponentTick");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, ComponentTags) == 104, "Offset mismatch for UActiveMusicBattleInstanceComponent::ComponentTags");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, AssetUserData) == 120, "Offset mismatch for UActiveMusicBattleInstanceComponent::AssetUserData");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, UCSSerializationIndex) == 144, "Offset mismatch for UActiveMusicBattleInstanceComponent::UCSSerializationIndex");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, bNetAddressable) == 152, "Offset mismatch for UActiveMusicBattleInstanceComponent::bNetAddressable");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, bAutoActivate) == 154, "Offset mismatch for UActiveMusicBattleInstanceComponent::bAutoActivate");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, bIsEditorOnly) == 155, "Offset mismatch for UActiveMusicBattleInstanceComponent::bIsEditorOnly");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, CreationMethod) == 185, "Offset mismatch for UActiveMusicBattleInstanceComponent::CreationMethod");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, OnComponentActivated) == 186, "Offset mismatch for UActiveMusicBattleInstanceComponent::OnComponentActivated");
static_assert(offsetof(UActiveMusicBattleInstanceComponent, OnComponentDeactivated) == 187, "Offset mismatch for UActiveMusicBattleInstanceComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.FortAthenaMutator_Pilgrim
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_Pilgrim
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> PlayerStateEventHandles; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_Pilgrim, PlayerStateEventHandles) == 736, "Offset mismatch for UFortAthenaMutator_Pilgrim::PlayerStateEventHandles");

// /Script/PilgrimCoreRuntime.NetworkedMusicClockManager
// Kind: Class; super: SparksSongPlayerPlayCoordinator
class UNetworkedMusicClockManager
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    FMulticastInlineDelegate OnBeatEvent; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBarEvent; // 0x01A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PinnedMusicClockComponent; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakMetasoundPlayer; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentSongServerTimestamp[0x50]; // 0x01C8 (Size: 0x50, Type: StructProperty)
    std::uint8_t ServerTimestampRecordingTimerHandle[0x8]; // 0x0218 (Size: 0x8, Type: StructProperty)
    std::uint8_t ServerTimestampRecordingFrequency[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDeltaForSeek[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndCorrectionDelta[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedAdjustmentFactor[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    float CurrentSpeed; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MetasoundSpeedParamName[0x4]; // 0x02C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MetasoundSeekParamName[0x4]; // 0x02C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MetasoundTriggerName[0x4]; // 0x02CC (Size: 0x4, Type: NameProperty)
    FName MetasoundOuputPinName; // 0x02D0 (Size: 0x8, Type: NameProperty)
    void* MetasoundPlayerGeneratorHandle; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundPlayerSeekParamPack; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayMethod; // 0x02E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02E9
    std::uint8_t SongLoadedGameplayEventHandle[0x1]; // 0x02EC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNetworkedMusicClockManager, OnBeatEvent) == 408, "Offset mismatch for UNetworkedMusicClockManager::OnBeatEvent");
static_assert(offsetof(UNetworkedMusicClockManager, OnBarEvent) == 424, "Offset mismatch for UNetworkedMusicClockManager::OnBarEvent");
static_assert(offsetof(UNetworkedMusicClockManager, PinnedMusicClockComponent) == 440, "Offset mismatch for UNetworkedMusicClockManager::PinnedMusicClockComponent");
static_assert(offsetof(UNetworkedMusicClockManager, WeakMetasoundPlayer) == 448, "Offset mismatch for UNetworkedMusicClockManager::WeakMetasoundPlayer");
static_assert(offsetof(UNetworkedMusicClockManager, CurrentSongServerTimestamp) == 456, "Offset mismatch for UNetworkedMusicClockManager::CurrentSongServerTimestamp");
static_assert(offsetof(UNetworkedMusicClockManager, ServerTimestampRecordingTimerHandle) == 536, "Offset mismatch for UNetworkedMusicClockManager::ServerTimestampRecordingTimerHandle");
static_assert(offsetof(UNetworkedMusicClockManager, ServerTimestampRecordingFrequency) == 544, "Offset mismatch for UNetworkedMusicClockManager::ServerTimestampRecordingFrequency");
static_assert(offsetof(UNetworkedMusicClockManager, MinDeltaForSeek) == 584, "Offset mismatch for UNetworkedMusicClockManager::MinDeltaForSeek");
static_assert(offsetof(UNetworkedMusicClockManager, EndCorrectionDelta) == 624, "Offset mismatch for UNetworkedMusicClockManager::EndCorrectionDelta");
static_assert(offsetof(UNetworkedMusicClockManager, SpeedAdjustmentFactor) == 664, "Offset mismatch for UNetworkedMusicClockManager::SpeedAdjustmentFactor");
static_assert(offsetof(UNetworkedMusicClockManager, CurrentSpeed) == 704, "Offset mismatch for UNetworkedMusicClockManager::CurrentSpeed");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundSpeedParamName) == 708, "Offset mismatch for UNetworkedMusicClockManager::MetasoundSpeedParamName");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundSeekParamName) == 712, "Offset mismatch for UNetworkedMusicClockManager::MetasoundSeekParamName");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundTriggerName) == 716, "Offset mismatch for UNetworkedMusicClockManager::MetasoundTriggerName");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundOuputPinName) == 720, "Offset mismatch for UNetworkedMusicClockManager::MetasoundOuputPinName");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundPlayerGeneratorHandle) == 728, "Offset mismatch for UNetworkedMusicClockManager::MetasoundPlayerGeneratorHandle");
static_assert(offsetof(UNetworkedMusicClockManager, MetasoundPlayerSeekParamPack) == 736, "Offset mismatch for UNetworkedMusicClockManager::MetasoundPlayerSeekParamPack");
static_assert(offsetof(UNetworkedMusicClockManager, PlayMethod) == 744, "Offset mismatch for UNetworkedMusicClockManager::PlayMethod");
static_assert(offsetof(UNetworkedMusicClockManager, SongLoadedGameplayEventHandle) == 748, "Offset mismatch for UNetworkedMusicClockManager::SongLoadedGameplayEventHandle");

// /Script/PilgrimCoreRuntime.PawnComponent_PilgrimInstrumentAnim
// Kind: Class; super: SparksInstrumentAnimPawnComponent
class UPawnComponent_PilgrimInstrumentAnim
{
public:
    std::uint8_t Pad_0000[0x218]; // 0x0000
    void* SparksPlayspace; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    void* SparksPlayspaceType; // 0x0220 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate BP_OnEnteredSparksMusicPlayspace; // 0x0228 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0238
    FMulticastInlineDelegate BP_OnExitedSparksMusicPlayspace; // 0x0250 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPawnComponent_PilgrimInstrumentAnim, SparksPlayspace) == 536, "Offset mismatch for UPawnComponent_PilgrimInstrumentAnim::SparksPlayspace");
static_assert(offsetof(UPawnComponent_PilgrimInstrumentAnim, SparksPlayspaceType) == 544, "Offset mismatch for UPawnComponent_PilgrimInstrumentAnim::SparksPlayspaceType");
static_assert(offsetof(UPawnComponent_PilgrimInstrumentAnim, BP_OnEnteredSparksMusicPlayspace) == 552, "Offset mismatch for UPawnComponent_PilgrimInstrumentAnim::BP_OnEnteredSparksMusicPlayspace");
static_assert(offsetof(UPawnComponent_PilgrimInstrumentAnim, BP_OnExitedSparksMusicPlayspace) == 592, "Offset mismatch for UPawnComponent_PilgrimInstrumentAnim::BP_OnExitedSparksMusicPlayspace");

// /Script/PilgrimCoreRuntime.PilgramGuitarTiltOverdriveTrigger
// Kind: Class; super: InputTrigger
class UPilgramGuitarTiltOverdriveTrigger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActuationThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAlwaysTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t LastValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgramGuitarTiltOverdriveTrigger, ActuationThreshold) == 40, "Offset mismatch for UPilgramGuitarTiltOverdriveTrigger::ActuationThreshold");
static_assert(offsetof(UPilgramGuitarTiltOverdriveTrigger, bShouldAlwaysTick) == 44, "Offset mismatch for UPilgramGuitarTiltOverdriveTrigger::bShouldAlwaysTick");
static_assert(offsetof(UPilgramGuitarTiltOverdriveTrigger, LastValue) == 48, "Offset mismatch for UPilgramGuitarTiltOverdriveTrigger::LastValue");

// /Script/PilgrimCoreRuntime.PilgrimAICosmeticLibraryData
// Kind: Class; super: PrimaryDataAsset
class UPilgrimAICosmeticLibraryData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExcludedCosmeticsRegistryType[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t AurasDataTable[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GuitarDataTable[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BassDataTable[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t KeyboardDataTable[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MicrophoneDataTable[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DrumsDataTable; // 0x00D0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPilgrimAICosmeticLibraryData, ExcludedCosmeticsRegistryType) == 40, "Offset mismatch for UPilgrimAICosmeticLibraryData::ExcludedCosmeticsRegistryType");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, AurasDataTable) == 48, "Offset mismatch for UPilgrimAICosmeticLibraryData::AurasDataTable");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, GuitarDataTable) == 80, "Offset mismatch for UPilgrimAICosmeticLibraryData::GuitarDataTable");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, BassDataTable) == 112, "Offset mismatch for UPilgrimAICosmeticLibraryData::BassDataTable");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, KeyboardDataTable) == 144, "Offset mismatch for UPilgrimAICosmeticLibraryData::KeyboardDataTable");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, MicrophoneDataTable) == 176, "Offset mismatch for UPilgrimAICosmeticLibraryData::MicrophoneDataTable");
static_assert(offsetof(UPilgrimAICosmeticLibraryData, DrumsDataTable) == 208, "Offset mismatch for UPilgrimAICosmeticLibraryData::DrumsDataTable");

// /Script/PilgrimCoreRuntime.PilgrimAIPerformanceTrackerComponent
// Kind: Class; super: PawnComponent
class UPilgrimAIPerformanceTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GameScoreTracker; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimAIPerformanceTrackerComponent, GameScoreTracker) == 192, "Offset mismatch for UPilgrimAIPerformanceTrackerComponent::GameScoreTracker");

// /Script/PilgrimCoreRuntime.PilgrimAIService
// Kind: Class; super: AthenaAIService
class UPilgrimAIService
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t BotNameLibraryData[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    float ProbabilityAnonymous; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    void* AISpawnerData; // 0x00A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GreenRoomTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> InstrumentToWeaponMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t PilgrimCosmeticLibrary[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    void* BotDataTable; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PartLeadRowName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartVocalsRowName[0x4]; // 0x0104 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartDrumsRowName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartBassRowName[0x4]; // 0x010C (Size: 0x4, Type: NameProperty)
    std::uint8_t DifficultyEasyRowName[0x4]; // 0x0110 (Size: 0x4, Type: NameProperty)
    std::uint8_t DifficultyMediumRowName[0x4]; // 0x0114 (Size: 0x4, Type: NameProperty)
    std::uint8_t DifficultyHardRowName[0x4]; // 0x0118 (Size: 0x4, Type: NameProperty)
    FName DifficultyExpertRowName; // 0x011C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPilgrimAIService, BotNameLibraryData) == 120, "Offset mismatch for UPilgrimAIService::BotNameLibraryData");
static_assert(offsetof(UPilgrimAIService, ProbabilityAnonymous) == 152, "Offset mismatch for UPilgrimAIService::ProbabilityAnonymous");
static_assert(offsetof(UPilgrimAIService, AISpawnerData) == 160, "Offset mismatch for UPilgrimAIService::AISpawnerData");
static_assert(offsetof(UPilgrimAIService, GreenRoomTags) == 168, "Offset mismatch for UPilgrimAIService::GreenRoomTags");
static_assert(offsetof(UPilgrimAIService, InstrumentToWeaponMap) == 200, "Offset mismatch for UPilgrimAIService::InstrumentToWeaponMap");
static_assert(offsetof(UPilgrimAIService, PilgrimCosmeticLibrary) == 216, "Offset mismatch for UPilgrimAIService::PilgrimCosmeticLibrary");
static_assert(offsetof(UPilgrimAIService, BotDataTable) == 248, "Offset mismatch for UPilgrimAIService::BotDataTable");
static_assert(offsetof(UPilgrimAIService, PartLeadRowName) == 256, "Offset mismatch for UPilgrimAIService::PartLeadRowName");
static_assert(offsetof(UPilgrimAIService, PartVocalsRowName) == 260, "Offset mismatch for UPilgrimAIService::PartVocalsRowName");
static_assert(offsetof(UPilgrimAIService, PartDrumsRowName) == 264, "Offset mismatch for UPilgrimAIService::PartDrumsRowName");
static_assert(offsetof(UPilgrimAIService, PartBassRowName) == 268, "Offset mismatch for UPilgrimAIService::PartBassRowName");
static_assert(offsetof(UPilgrimAIService, DifficultyEasyRowName) == 272, "Offset mismatch for UPilgrimAIService::DifficultyEasyRowName");
static_assert(offsetof(UPilgrimAIService, DifficultyMediumRowName) == 276, "Offset mismatch for UPilgrimAIService::DifficultyMediumRowName");
static_assert(offsetof(UPilgrimAIService, DifficultyHardRowName) == 280, "Offset mismatch for UPilgrimAIService::DifficultyHardRowName");
static_assert(offsetof(UPilgrimAIService, DifficultyExpertRowName) == 284, "Offset mismatch for UPilgrimAIService::DifficultyExpertRowName");

// /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars
// Kind: Class; super: AbilityTask
class UPilgrimAbilityTask_WaitForBars
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnBarHit; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t BarCount; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetBar; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t EndAfterHits; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentIteration; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimAbilityTask_WaitForBars, OnBarHit) == 120, "Offset mismatch for UPilgrimAbilityTask_WaitForBars::OnBarHit");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBars, BarCount) == 136, "Offset mismatch for UPilgrimAbilityTask_WaitForBars::BarCount");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBars, TargetBar) == 140, "Offset mismatch for UPilgrimAbilityTask_WaitForBars::TargetBar");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBars, EndAfterHits) == 144, "Offset mismatch for UPilgrimAbilityTask_WaitForBars::EndAfterHits");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBars, CurrentIteration) == 148, "Offset mismatch for UPilgrimAbilityTask_WaitForBars::CurrentIteration");

// /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats
// Kind: Class; super: AbilityTask
class UPilgrimAbilityTask_WaitForBeats
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnBeatHit; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t BeatCount; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetBeat; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t EndAfterHits; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentIteration; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimAbilityTask_WaitForBeats, OnBeatHit) == 120, "Offset mismatch for UPilgrimAbilityTask_WaitForBeats::OnBeatHit");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBeats, BeatCount) == 136, "Offset mismatch for UPilgrimAbilityTask_WaitForBeats::BeatCount");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBeats, TargetBeat) == 140, "Offset mismatch for UPilgrimAbilityTask_WaitForBeats::TargetBeat");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBeats, EndAfterHits) == 144, "Offset mismatch for UPilgrimAbilityTask_WaitForBeats::EndAfterHits");
static_assert(offsetof(UPilgrimAbilityTask_WaitForBeats, CurrentIteration) == 148, "Offset mismatch for UPilgrimAbilityTask_WaitForBeats::CurrentIteration");

// /Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection
// Kind: Class; super: AbilityTask
class UPilgrimAbilityTask_WaitForSection
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnSectionStarted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString TargetSectionName; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t bWaitForNextSection; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimAbilityTask_WaitForSection, OnSectionStarted) == 120, "Offset mismatch for UPilgrimAbilityTask_WaitForSection::OnSectionStarted");
static_assert(offsetof(UPilgrimAbilityTask_WaitForSection, TargetSectionName) == 136, "Offset mismatch for UPilgrimAbilityTask_WaitForSection::TargetSectionName");
static_assert(offsetof(UPilgrimAbilityTask_WaitForSection, bWaitForNextSection) == 152, "Offset mismatch for UPilgrimAbilityTask_WaitForSection::bWaitForNextSection");

// /Script/PilgrimCoreRuntime.PilgrimActorPool
// Kind: Class; super: Object
class UPilgrimActorPool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate BP_OnActorSpawned; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xA0]; // 0x0038
    std::uint8_t AvailableActors[0x10]; // 0x00D8 (Size: 0x10, Type: SetProperty)
    std::uint8_t InUseActors[0x10]; // 0x00E8 (Size: 0x10, Type: SetProperty)
    void* OwnerPoolComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimActorPool, BP_OnActorSpawned) == 40, "Offset mismatch for UPilgrimActorPool::BP_OnActorSpawned");
static_assert(offsetof(UPilgrimActorPool, AvailableActors) == 216, "Offset mismatch for UPilgrimActorPool::AvailableActors");
static_assert(offsetof(UPilgrimActorPool, InUseActors) == 232, "Offset mismatch for UPilgrimActorPool::InUseActors");
static_assert(offsetof(UPilgrimActorPool, OwnerPoolComponent) == 248, "Offset mismatch for UPilgrimActorPool::OwnerPoolComponent");

// /Script/PilgrimCoreRuntime.PilgrimActorPoolComponent
// Kind: Class; super: ActorComponent
class UPilgrimActorPoolComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ActorPoolMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> DeferredDestroyActors; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> DeferredWorkPools; // 0x00E0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPilgrimActorPoolComponent, ActorPoolMap) == 192, "Offset mismatch for UPilgrimActorPoolComponent::ActorPoolMap");
static_assert(offsetof(UPilgrimActorPoolComponent, DeferredDestroyActors) == 208, "Offset mismatch for UPilgrimActorPoolComponent::DeferredDestroyActors");
static_assert(offsetof(UPilgrimActorPoolComponent, DeferredWorkPools) == 224, "Offset mismatch for UPilgrimActorPoolComponent::DeferredWorkPools");

// /Script/PilgrimCoreRuntime.PilgrimAnalytics
// Kind: Class; super: PlayspaceComponent
class UPilgrimAnalytics
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentCatchUpSession[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimAnalytics, CurrentCatchUpSession) == 192, "Offset mismatch for UPilgrimAnalytics::CurrentCatchUpSession");

// /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard
// Kind: Class; super: CancellableAsyncAction
class UPilgrimAsyncAction_RequestLeaderboard
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimAsyncAction_RequestLeaderboard, OnSuccess) == 48, "Offset mismatch for UPilgrimAsyncAction_RequestLeaderboard::OnSuccess");
static_assert(offsetof(UPilgrimAsyncAction_RequestLeaderboard, OnFailure) == 64, "Offset mismatch for UPilgrimAsyncAction_RequestLeaderboard::OnFailure");

// /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest
// Kind: Class; super: CancellableAsyncAction
class UPilgrimAsyncAction_RequestPersonalBest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimAsyncAction_RequestPersonalBest, OnSuccess) == 48, "Offset mismatch for UPilgrimAsyncAction_RequestPersonalBest::OnSuccess");
static_assert(offsetof(UPilgrimAsyncAction_RequestPersonalBest, OnFailure) == 64, "Offset mismatch for UPilgrimAsyncAction_RequestPersonalBest::OnFailure");

// /Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed
// Kind: Class; super: CancellableAsyncAction
class UPilgrimAsyncAction_RequestPlayerFeed
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimAsyncAction_RequestPlayerFeed, OnSuccess) == 48, "Offset mismatch for UPilgrimAsyncAction_RequestPlayerFeed::OnSuccess");
static_assert(offsetof(UPilgrimAsyncAction_RequestPlayerFeed, OnFailure) == 64, "Offset mismatch for UPilgrimAsyncAction_RequestPlayerFeed::OnFailure");

// /Script/PilgrimCoreRuntime.PilgrimAutoCalibrator
// Kind: Class; super: Object
class UPilgrimAutoCalibrator
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> OwningPlayerState; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    void* CurrentSongData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0050
    void* AutocalibrationComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimAutoCalibrator, OwningPlayerState) == 64, "Offset mismatch for UPilgrimAutoCalibrator::OwningPlayerState");
static_assert(offsetof(UPilgrimAutoCalibrator, CurrentSongData) == 72, "Offset mismatch for UPilgrimAutoCalibrator::CurrentSongData");
static_assert(offsetof(UPilgrimAutoCalibrator, AutocalibrationComponent) == 104, "Offset mismatch for UPilgrimAutoCalibrator::AutocalibrationComponent");

// /Script/PilgrimCoreRuntime.PilgrimAutocalibrationComponent
// Kind: Class; super: PlayerStateComponent
class UPilgrimAutocalibrationComponent
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

static_assert(offsetof(UPilgrimAutocalibrationComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimAutocalibrationComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimAutocalibrationComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimAutocalibrationComponent::ComponentTags");
static_assert(offsetof(UPilgrimAutocalibrationComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimAutocalibrationComponent::AssetUserData");
static_assert(offsetof(UPilgrimAutocalibrationComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimAutocalibrationComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimAutocalibrationComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimAutocalibrationComponent::bNetAddressable");
static_assert(offsetof(UPilgrimAutocalibrationComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimAutocalibrationComponent::bAutoActivate");
static_assert(offsetof(UPilgrimAutocalibrationComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimAutocalibrationComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimAutocalibrationComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimAutocalibrationComponent::CreationMethod");
static_assert(offsetof(UPilgrimAutocalibrationComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimAutocalibrationComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimAutocalibrationComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimAutocalibrationComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimBeatMarker
// Kind: Class; super: PilgrimTrackItem
class UPilgrimBeatMarker
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    void* ParentNowBar; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimBeatMarker, ParentNowBar) == 744, "Offset mismatch for UPilgrimBeatMarker::ParentNowBar");

// /Script/PilgrimCoreRuntime.PilgrimBeatMarkerTrackItemMgr
// Kind: Class; super: PilgrimTrackItemMgr
class UPilgrimBeatMarkerTrackItemMgr
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CheckedItemBaseClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Track; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* ItemPool; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActiveItems; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveItemsMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, CheckedItemBaseClass) == 192, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::CheckedItemBaseClass");
static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, Track) == 200, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::Track");
static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, ItemPool) == 208, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::ItemPool");
static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, PilgrimGame) == 216, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::PilgrimGame");
static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, ActiveItems) == 224, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::ActiveItems");
static_assert(offsetof(UPilgrimBeatMarkerTrackItemMgr, ActiveItemsMap) == 240, "Offset mismatch for UPilgrimBeatMarkerTrackItemMgr::ActiveItemsMap");

// /Script/PilgrimCoreRuntime.PilgrimCheatManager
// Kind: Class; super: ChildCheatManager
class UPilgrimCheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnAutoplayUpdated; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimCheatManager, OnAutoplayUpdated) == 40, "Offset mismatch for UPilgrimCheatManager::OnAutoplayUpdated");

// /Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader
// Kind: Class; super: SparksSongPlayerPreloadControllerComponent
class UPilgrimControllerComponent_SongPreloader
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

static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::PrimaryComponentTick");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, ComponentTags) == 104, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::ComponentTags");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, AssetUserData) == 120, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::AssetUserData");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::UCSSerializationIndex");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, bNetAddressable) == 152, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::bNetAddressable");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, bAutoActivate) == 154, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::bAutoActivate");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::bIsEditorOnly");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, CreationMethod) == 185, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::CreationMethod");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, OnComponentActivated) == 186, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::OnComponentActivated");
static_assert(offsetof(UPilgrimControllerComponent_SongPreloader, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimControllerComponent_SongPreloader::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent
// Kind: Class; super: PlayspaceComponent
class UPilgrimCoreBandStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> OwnedSongs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimCoreBandStateComponent, OwnedSongs) == 192, "Offset mismatch for UPilgrimCoreBandStateComponent::OwnedSongs");

// /Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent
// Kind: Class; super: SparksPlayerStateComponent
class UPilgrimCorePlayerStateComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPeripheralInputModeChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PartPickingState; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SongDifficulty; // 0x00D9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsReady; // 0x00DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreReadyTimeoutReadiness; // 0x00DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReadyToReturn; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPregameChoicesLocked; // 0x00DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimCorePlayerStateComponent, OnPeripheralInputModeChanged) == 200, "Offset mismatch for UPilgrimCorePlayerStateComponent::OnPeripheralInputModeChanged");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, PartPickingState) == 216, "Offset mismatch for UPilgrimCorePlayerStateComponent::PartPickingState");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, SongDifficulty) == 217, "Offset mismatch for UPilgrimCorePlayerStateComponent::SongDifficulty");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, bIsReady) == 218, "Offset mismatch for UPilgrimCorePlayerStateComponent::bIsReady");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, bPreReadyTimeoutReadiness) == 219, "Offset mismatch for UPilgrimCorePlayerStateComponent::bPreReadyTimeoutReadiness");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, bIsReadyToReturn) == 220, "Offset mismatch for UPilgrimCorePlayerStateComponent::bIsReadyToReturn");
static_assert(offsetof(UPilgrimCorePlayerStateComponent, bPregameChoicesLocked) == 221, "Offset mismatch for UPilgrimCorePlayerStateComponent::bPregameChoicesLocked");

// /Script/PilgrimCoreRuntime.PilgrimCore_BPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimCore_BPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimCustomSetlist
// Kind: Class; super: PlayspaceComponent
class UPilgrimCustomSetlist
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FMulticastInlineDelegate OnLockedStateChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> SetlistEntries; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSongsPerPlayer; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSetlistLocked; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0105
    std::uint8_t SetlistId[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimCustomSetlist, OnLockedStateChanged) == 224, "Offset mismatch for UPilgrimCustomSetlist::OnLockedStateChanged");
static_assert(offsetof(UPilgrimCustomSetlist, SetlistEntries) == 240, "Offset mismatch for UPilgrimCustomSetlist::SetlistEntries");
static_assert(offsetof(UPilgrimCustomSetlist, MaxSongsPerPlayer) == 256, "Offset mismatch for UPilgrimCustomSetlist::MaxSongsPerPlayer");
static_assert(offsetof(UPilgrimCustomSetlist, bIsSetlistLocked) == 260, "Offset mismatch for UPilgrimCustomSetlist::bIsSetlistLocked");
static_assert(offsetof(UPilgrimCustomSetlist, SetlistId) == 264, "Offset mismatch for UPilgrimCustomSetlist::SetlistId");

// /Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick
// Kind: Class; super: BlueprintAsyncActionBase
class UPilgrimDelayUntilTimeBeforeMidiTick
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    void* PilgrimGame; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* Passthrough; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimDelayUntilTimeBeforeMidiTick, OnFinished) == 48, "Offset mismatch for UPilgrimDelayUntilTimeBeforeMidiTick::OnFinished");
static_assert(offsetof(UPilgrimDelayUntilTimeBeforeMidiTick, PilgrimGame) == 80, "Offset mismatch for UPilgrimDelayUntilTimeBeforeMidiTick::PilgrimGame");
static_assert(offsetof(UPilgrimDelayUntilTimeBeforeMidiTick, Passthrough) == 88, "Offset mismatch for UPilgrimDelayUntilTimeBeforeMidiTick::Passthrough");

// /Script/PilgrimCoreRuntime.PilgrimDeviceMapperControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimDeviceMapperControllerComponent
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

static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimDeviceMapperControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimDeviceMapperControllerComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimEditCustomSetlistComponent
// Kind: Class; super: FMEditCustomSetlistComponent
class UPilgrimEditCustomSetlistComponent
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

static_assert(offsetof(UPilgrimEditCustomSetlistComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimEditCustomSetlistComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimEditCustomSetlistComponent::ComponentTags");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimEditCustomSetlistComponent::AssetUserData");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimEditCustomSetlistComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimEditCustomSetlistComponent::bNetAddressable");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimEditCustomSetlistComponent::bAutoActivate");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimEditCustomSetlistComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimEditCustomSetlistComponent::CreationMethod");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimEditCustomSetlistComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimEditCustomSetlistComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimEditCustomSetlistComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimEventRouterLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimForceFeedbackConfig
// Kind: Class; super: DataAsset
class UPilgrimForceFeedbackConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OverdriveReadyToDeployForceFeedback; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OverdriveDeployedForceFeedback; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* GemHitForceFeedback; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimForceFeedbackConfig, OverdriveReadyToDeployForceFeedback) == 40, "Offset mismatch for UPilgrimForceFeedbackConfig::OverdriveReadyToDeployForceFeedback");
static_assert(offsetof(UPilgrimForceFeedbackConfig, OverdriveDeployedForceFeedback) == 48, "Offset mismatch for UPilgrimForceFeedbackConfig::OverdriveDeployedForceFeedback");
static_assert(offsetof(UPilgrimForceFeedbackConfig, GemHitForceFeedback) == 56, "Offset mismatch for UPilgrimForceFeedbackConfig::GemHitForceFeedback");

// /Script/PilgrimCoreRuntime.PilgrimGame
// Kind: Class; super: ActorComponent
class UPilgrimGame
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnGameScoreUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOverdriveActiveUpdated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongEnded; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00F8
    FMulticastInlineDelegate OnDisableMissUpdated; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrackTransparencyUpdated; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOverdriveHiddenChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGemSizeChanged; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGhostNoteChanged; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSmasherEffectsChanged; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ScoringModel; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGameConfig; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0178
    void* OwnerControllerComponent; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    void* SongPlayerComponent; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundPlayer; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* MidiDeviceEventHandler; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* MainTrack; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* MissSound; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGameEvaluator; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimAutoCalibrator; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimLyricParsingManager; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> InProgressSustains; // 0x01D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x2B0]; // 0x01E8
    void* SongData; // 0x0498 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGame, OnGameScoreUpdated) == 200, "Offset mismatch for UPilgrimGame::OnGameScoreUpdated");
static_assert(offsetof(UPilgrimGame, OnOverdriveActiveUpdated) == 216, "Offset mismatch for UPilgrimGame::OnOverdriveActiveUpdated");
static_assert(offsetof(UPilgrimGame, OnSongEnded) == 232, "Offset mismatch for UPilgrimGame::OnSongEnded");
static_assert(offsetof(UPilgrimGame, OnDisableMissUpdated) == 264, "Offset mismatch for UPilgrimGame::OnDisableMissUpdated");
static_assert(offsetof(UPilgrimGame, OnTrackTransparencyUpdated) == 280, "Offset mismatch for UPilgrimGame::OnTrackTransparencyUpdated");
static_assert(offsetof(UPilgrimGame, OnOverdriveHiddenChanged) == 296, "Offset mismatch for UPilgrimGame::OnOverdriveHiddenChanged");
static_assert(offsetof(UPilgrimGame, OnGemSizeChanged) == 312, "Offset mismatch for UPilgrimGame::OnGemSizeChanged");
static_assert(offsetof(UPilgrimGame, OnGhostNoteChanged) == 328, "Offset mismatch for UPilgrimGame::OnGhostNoteChanged");
static_assert(offsetof(UPilgrimGame, OnSmasherEffectsChanged) == 344, "Offset mismatch for UPilgrimGame::OnSmasherEffectsChanged");
static_assert(offsetof(UPilgrimGame, ScoringModel) == 360, "Offset mismatch for UPilgrimGame::ScoringModel");
static_assert(offsetof(UPilgrimGame, PilgrimGameConfig) == 368, "Offset mismatch for UPilgrimGame::PilgrimGameConfig");
static_assert(offsetof(UPilgrimGame, OwnerControllerComponent) == 392, "Offset mismatch for UPilgrimGame::OwnerControllerComponent");
static_assert(offsetof(UPilgrimGame, SongPlayerComponent) == 400, "Offset mismatch for UPilgrimGame::SongPlayerComponent");
static_assert(offsetof(UPilgrimGame, MetasoundPlayer) == 408, "Offset mismatch for UPilgrimGame::MetasoundPlayer");
static_assert(offsetof(UPilgrimGame, MusicClock) == 416, "Offset mismatch for UPilgrimGame::MusicClock");
static_assert(offsetof(UPilgrimGame, MidiDeviceEventHandler) == 424, "Offset mismatch for UPilgrimGame::MidiDeviceEventHandler");
static_assert(offsetof(UPilgrimGame, MainTrack) == 432, "Offset mismatch for UPilgrimGame::MainTrack");
static_assert(offsetof(UPilgrimGame, MissSound) == 440, "Offset mismatch for UPilgrimGame::MissSound");
static_assert(offsetof(UPilgrimGame, PilgrimGameEvaluator) == 448, "Offset mismatch for UPilgrimGame::PilgrimGameEvaluator");
static_assert(offsetof(UPilgrimGame, PilgrimAutoCalibrator) == 456, "Offset mismatch for UPilgrimGame::PilgrimAutoCalibrator");
static_assert(offsetof(UPilgrimGame, PilgrimLyricParsingManager) == 464, "Offset mismatch for UPilgrimGame::PilgrimLyricParsingManager");
static_assert(offsetof(UPilgrimGame, InProgressSustains) == 472, "Offset mismatch for UPilgrimGame::InProgressSustains");
static_assert(offsetof(UPilgrimGame, SongData) == 1176, "Offset mismatch for UPilgrimGame::SongData");

// /Script/PilgrimCoreRuntime.PilgrimGameConfig
// Kind: Class; super: PrimaryDataAsset
class UPilgrimGameConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SongSettings[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t ConfigSettings[0x250]; // 0x0038 (Size: 0x250, Type: StructProperty)
    void* MissSound; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    float MaxHp; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float DamagePerHit; // 0x0294 (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> WeaponRarityToNoteDamage; // 0x0298 (Size: 0x10, Type: MapProperty)
    TArray<void*> StreakDefinitions; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SideloadLipsyncAnim_BoneCompressionSettings; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SideloadLipsyncAnim_CurveCompressionSettings; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimGameConfig, SongSettings) == 40, "Offset mismatch for UPilgrimGameConfig::SongSettings");
static_assert(offsetof(UPilgrimGameConfig, ConfigSettings) == 56, "Offset mismatch for UPilgrimGameConfig::ConfigSettings");
static_assert(offsetof(UPilgrimGameConfig, MissSound) == 648, "Offset mismatch for UPilgrimGameConfig::MissSound");
static_assert(offsetof(UPilgrimGameConfig, MaxHp) == 656, "Offset mismatch for UPilgrimGameConfig::MaxHp");
static_assert(offsetof(UPilgrimGameConfig, DamagePerHit) == 660, "Offset mismatch for UPilgrimGameConfig::DamagePerHit");
static_assert(offsetof(UPilgrimGameConfig, WeaponRarityToNoteDamage) == 664, "Offset mismatch for UPilgrimGameConfig::WeaponRarityToNoteDamage");
static_assert(offsetof(UPilgrimGameConfig, StreakDefinitions) == 680, "Offset mismatch for UPilgrimGameConfig::StreakDefinitions");
static_assert(offsetof(UPilgrimGameConfig, SideloadLipsyncAnim_BoneCompressionSettings) == 696, "Offset mismatch for UPilgrimGameConfig::SideloadLipsyncAnim_BoneCompressionSettings");
static_assert(offsetof(UPilgrimGameConfig, SideloadLipsyncAnim_CurveCompressionSettings) == 712, "Offset mismatch for UPilgrimGameConfig::SideloadLipsyncAnim_CurveCompressionSettings");

// /Script/PilgrimCoreRuntime.PilgrimGameDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UPilgrimGameDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SongOverrides[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnforceSongEntitlements; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimGameDeveloperSettings, SongOverrides) == 48, "Offset mismatch for UPilgrimGameDeveloperSettings::SongOverrides");
static_assert(offsetof(UPilgrimGameDeveloperSettings, bEnforceSongEntitlements) == 64, "Offset mismatch for UPilgrimGameDeveloperSettings::bEnforceSongEntitlements");

// /Script/PilgrimCoreRuntime.PilgrimGameEvaluator
// Kind: Class; super: Object
class UPilgrimGameEvaluator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedAutoplayPlayerControllerComponent; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0030
    void* CurrentSongData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* SongMetadata; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* DebugScoreListener; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> OwningPlayerState; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    void* PilgrimGameConfig; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* GameplayLog; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* ScoringModel; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGameEvaluator, CachedAutoplayPlayerControllerComponent) == 40, "Offset mismatch for UPilgrimGameEvaluator::CachedAutoplayPlayerControllerComponent");
static_assert(offsetof(UPilgrimGameEvaluator, CurrentSongData) == 80, "Offset mismatch for UPilgrimGameEvaluator::CurrentSongData");
static_assert(offsetof(UPilgrimGameEvaluator, SongMetadata) == 88, "Offset mismatch for UPilgrimGameEvaluator::SongMetadata");
static_assert(offsetof(UPilgrimGameEvaluator, DebugScoreListener) == 96, "Offset mismatch for UPilgrimGameEvaluator::DebugScoreListener");
static_assert(offsetof(UPilgrimGameEvaluator, OwningPlayerState) == 104, "Offset mismatch for UPilgrimGameEvaluator::OwningPlayerState");
static_assert(offsetof(UPilgrimGameEvaluator, PilgrimGameConfig) == 112, "Offset mismatch for UPilgrimGameEvaluator::PilgrimGameConfig");
static_assert(offsetof(UPilgrimGameEvaluator, GameplayLog) == 120, "Offset mismatch for UPilgrimGameEvaluator::GameplayLog");
static_assert(offsetof(UPilgrimGameEvaluator, ScoringModel) == 128, "Offset mismatch for UPilgrimGameEvaluator::ScoringModel");

// /Script/PilgrimCoreRuntime.PilgrimGameModeComponentBase
// Kind: Class; super: GameStateComponent
class UPilgrimGameModeComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentGameMode; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimGameModeComponentBase, CurrentGameMode) == 192, "Offset mismatch for UPilgrimGameModeComponentBase::CurrentGameMode");

// /Script/PilgrimCoreRuntime.PilgrimGameScoreInterface
// Kind: Class; super: Interface
class UPilgrimGameScoreInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimGameScoreTracker
// Kind: Class; super: Object
class UPilgrimGameScoreTracker
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> SongPerformanceData; // 0x0030 (Size: 0x10, Type: MapProperty)
    void* PilgrimGame; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerState; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverdriveActiveEventHandle[0x1C]; // 0x0050 (Size: 0x1C, Type: StructProperty)
    std::int32_t MaxStreak; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentStreak; // 0x0070 (Size: 0x4, Type: IntProperty)
    float TimeInOverdriveMs; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InOverdrive; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimGameScoreTracker, SongPerformanceData) == 48, "Offset mismatch for UPilgrimGameScoreTracker::SongPerformanceData");
static_assert(offsetof(UPilgrimGameScoreTracker, PilgrimGame) == 64, "Offset mismatch for UPilgrimGameScoreTracker::PilgrimGame");
static_assert(offsetof(UPilgrimGameScoreTracker, OwningPlayerState) == 72, "Offset mismatch for UPilgrimGameScoreTracker::OwningPlayerState");
static_assert(offsetof(UPilgrimGameScoreTracker, OverdriveActiveEventHandle) == 80, "Offset mismatch for UPilgrimGameScoreTracker::OverdriveActiveEventHandle");
static_assert(offsetof(UPilgrimGameScoreTracker, MaxStreak) == 108, "Offset mismatch for UPilgrimGameScoreTracker::MaxStreak");
static_assert(offsetof(UPilgrimGameScoreTracker, CurrentStreak) == 112, "Offset mismatch for UPilgrimGameScoreTracker::CurrentStreak");
static_assert(offsetof(UPilgrimGameScoreTracker, TimeInOverdriveMs) == 116, "Offset mismatch for UPilgrimGameScoreTracker::TimeInOverdriveMs");
static_assert(offsetof(UPilgrimGameScoreTracker, InOverdrive) == 120, "Offset mismatch for UPilgrimGameScoreTracker::InOverdrive");

// /Script/PilgrimCoreRuntime.PilgrimGameUserSettings
// Kind: Class; super: Object
class UPilgrimGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bHasSeenFTUEMainStage; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSeenFTUEBattleStage; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSeenFTUELocalMultiplayer; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> PerLocalPlayerSettings; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SongDifficulty; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SelectedInstrument; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HasSeenRoadieCoachMark; // 0x0042 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimGameUserSettings, bHasSeenFTUEMainStage) == 40, "Offset mismatch for UPilgrimGameUserSettings::bHasSeenFTUEMainStage");
static_assert(offsetof(UPilgrimGameUserSettings, bHasSeenFTUEBattleStage) == 41, "Offset mismatch for UPilgrimGameUserSettings::bHasSeenFTUEBattleStage");
static_assert(offsetof(UPilgrimGameUserSettings, bHasSeenFTUELocalMultiplayer) == 42, "Offset mismatch for UPilgrimGameUserSettings::bHasSeenFTUELocalMultiplayer");
static_assert(offsetof(UPilgrimGameUserSettings, PerLocalPlayerSettings) == 48, "Offset mismatch for UPilgrimGameUserSettings::PerLocalPlayerSettings");
static_assert(offsetof(UPilgrimGameUserSettings, SongDifficulty) == 64, "Offset mismatch for UPilgrimGameUserSettings::SongDifficulty");
static_assert(offsetof(UPilgrimGameUserSettings, SelectedInstrument) == 65, "Offset mismatch for UPilgrimGameUserSettings::SelectedInstrument");
static_assert(offsetof(UPilgrimGameUserSettings, HasSeenRoadieCoachMark) == 66, "Offset mismatch for UPilgrimGameUserSettings::HasSeenRoadieCoachMark");

// /Script/PilgrimCoreRuntime.PilgrimGameUserSettingsComponent
// Kind: Class; super: GameStateComponent
class UPilgrimGameUserSettingsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GameUserSettings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGameUserSettingsComponent, GameUserSettings) == 192, "Offset mismatch for UPilgrimGameUserSettingsComponent::GameUserSettings");

// /Script/PilgrimCoreRuntime.PilgrimGameplayLog
// Kind: Class; super: Object
class UPilgrimGameplayLog
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> OwningPlayerState; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* CurrentSongData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGameplayLog, OwningPlayerState) == 72, "Offset mismatch for UPilgrimGameplayLog::OwningPlayerState");
static_assert(offsetof(UPilgrimGameplayLog, CurrentSongData) == 80, "Offset mismatch for UPilgrimGameplayLog::CurrentSongData");

// /Script/PilgrimCoreRuntime.PilgrimGem
// Kind: Class; super: PilgrimTrackItem
class UPilgrimGem
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    FMulticastInlineDelegate OnGemSmashFinished; // 0x02E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGemEnteredSlopWindow; // 0x02F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGemExitedSlopWindow; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ParentSmasher; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* RelatedSustain; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGem, OnGemSmashFinished) == 744, "Offset mismatch for UPilgrimGem::OnGemSmashFinished");
static_assert(offsetof(UPilgrimGem, OnGemEnteredSlopWindow) == 760, "Offset mismatch for UPilgrimGem::OnGemEnteredSlopWindow");
static_assert(offsetof(UPilgrimGem, OnGemExitedSlopWindow) == 776, "Offset mismatch for UPilgrimGem::OnGemExitedSlopWindow");
static_assert(offsetof(UPilgrimGem, ParentSmasher) == 792, "Offset mismatch for UPilgrimGem::ParentSmasher");
static_assert(offsetof(UPilgrimGem, RelatedSustain) == 800, "Offset mismatch for UPilgrimGem::RelatedSustain");

// /Script/PilgrimCoreRuntime.PilgrimGemAnalyzer
// Kind: Class; super: PlayspaceComponent
class UPilgrimGemAnalyzer
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> SongSectionGemDensityDataMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GameplaySectionGemDensityDataMap; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimGemAnalyzer, SongSectionGemDensityDataMap) == 200, "Offset mismatch for UPilgrimGemAnalyzer::SongSectionGemDensityDataMap");
static_assert(offsetof(UPilgrimGemAnalyzer, GameplaySectionGemDensityDataMap) == 216, "Offset mismatch for UPilgrimGemAnalyzer::GameplaySectionGemDensityDataMap");

// /Script/PilgrimCoreRuntime.PilgrimGemBreakListener
// Kind: Class; super: Object
class UPilgrimGemBreakListener
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* PlayerState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerController; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Difficulty; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrackType; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    std::uint8_t InBreak[0x24]; // 0x004C (Size: 0x24, Type: StructProperty)
    std::uint8_t LastPendingGemBreak[0x24]; // 0x0070 (Size: 0x24, Type: StructProperty)
    float LastProcessedSongMs; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInitialized; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    float BarThresholdForEndPendingEvent; // 0x009C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimGemBreakListener, PlayerState) == 56, "Offset mismatch for UPilgrimGemBreakListener::PlayerState");
static_assert(offsetof(UPilgrimGemBreakListener, OwningPlayerController) == 64, "Offset mismatch for UPilgrimGemBreakListener::OwningPlayerController");
static_assert(offsetof(UPilgrimGemBreakListener, Difficulty) == 72, "Offset mismatch for UPilgrimGemBreakListener::Difficulty");
static_assert(offsetof(UPilgrimGemBreakListener, TrackType) == 73, "Offset mismatch for UPilgrimGemBreakListener::TrackType");
static_assert(offsetof(UPilgrimGemBreakListener, InBreak) == 76, "Offset mismatch for UPilgrimGemBreakListener::InBreak");
static_assert(offsetof(UPilgrimGemBreakListener, LastPendingGemBreak) == 112, "Offset mismatch for UPilgrimGemBreakListener::LastPendingGemBreak");
static_assert(offsetof(UPilgrimGemBreakListener, LastProcessedSongMs) == 148, "Offset mismatch for UPilgrimGemBreakListener::LastProcessedSongMs");
static_assert(offsetof(UPilgrimGemBreakListener, bInitialized) == 152, "Offset mismatch for UPilgrimGemBreakListener::bInitialized");
static_assert(offsetof(UPilgrimGemBreakListener, BarThresholdForEndPendingEvent) == 156, "Offset mismatch for UPilgrimGemBreakListener::BarThresholdForEndPendingEvent");

// /Script/PilgrimCoreRuntime.PilgrimGemSmasher
// Kind: Class; super: Actor
class UPilgrimGemSmasher
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* GemSplinePath; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SceneComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* GemSlot; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TrackLane; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0289
    float SplineStartInputKey; // 0x028C (Size: 0x4, Type: FloatProperty)
    float SplineOriginInputKey; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float SplineEndInputKey; // 0x0294 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x0298 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t TrackIndex; // 0x02A0 (Size: 0x4, Type: IntProperty)
    float PulseDuration; // 0x02A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimGemSmasher, GemSplinePath) == 624, "Offset mismatch for UPilgrimGemSmasher::GemSplinePath");
static_assert(offsetof(UPilgrimGemSmasher, SceneComp) == 632, "Offset mismatch for UPilgrimGemSmasher::SceneComp");
static_assert(offsetof(UPilgrimGemSmasher, GemSlot) == 640, "Offset mismatch for UPilgrimGemSmasher::GemSlot");
static_assert(offsetof(UPilgrimGemSmasher, TrackLane) == 648, "Offset mismatch for UPilgrimGemSmasher::TrackLane");
static_assert(offsetof(UPilgrimGemSmasher, SplineStartInputKey) == 652, "Offset mismatch for UPilgrimGemSmasher::SplineStartInputKey");
static_assert(offsetof(UPilgrimGemSmasher, SplineOriginInputKey) == 656, "Offset mismatch for UPilgrimGemSmasher::SplineOriginInputKey");
static_assert(offsetof(UPilgrimGemSmasher, SplineEndInputKey) == 660, "Offset mismatch for UPilgrimGemSmasher::SplineEndInputKey");
static_assert(offsetof(UPilgrimGemSmasher, PilgrimGame) == 664, "Offset mismatch for UPilgrimGemSmasher::PilgrimGame");
static_assert(offsetof(UPilgrimGemSmasher, TrackIndex) == 672, "Offset mismatch for UPilgrimGemSmasher::TrackIndex");
static_assert(offsetof(UPilgrimGemSmasher, PulseDuration) == 676, "Offset mismatch for UPilgrimGemSmasher::PulseDuration");

// /Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr
// Kind: Class; super: PilgrimTrackItemMgr
class UPilgrimGemTrackItemMgr
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t GemsInSlopWindow[0x10]; // 0x0130 (Size: 0x10, Type: SetProperty)
    void* SustainTrackItemMgr; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimGemTrackItemMgr, GemsInSlopWindow) == 304, "Offset mismatch for UPilgrimGemTrackItemMgr::GemsInSlopWindow");
static_assert(offsetof(UPilgrimGemTrackItemMgr, SustainTrackItemMgr) == 320, "Offset mismatch for UPilgrimGemTrackItemMgr::SustainTrackItemMgr");

// /Script/PilgrimCoreRuntime.PilgrimInputConfig
// Kind: Class; super: PrimaryDataAsset
class UPilgrimInputConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> InputActionToPilgrimLanePress; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InputActionToSpecialPilgrimLanePress; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InputActionToPilgrimLaneRelease; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* OverdriveInputAction; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* Overdrive5LaneInputAction; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* GuitarStrumInputAction; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* Modulate; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimInputConfig, InputActionToPilgrimLanePress) == 40, "Offset mismatch for UPilgrimInputConfig::InputActionToPilgrimLanePress");
static_assert(offsetof(UPilgrimInputConfig, InputActionToSpecialPilgrimLanePress) == 56, "Offset mismatch for UPilgrimInputConfig::InputActionToSpecialPilgrimLanePress");
static_assert(offsetof(UPilgrimInputConfig, InputActionToPilgrimLaneRelease) == 72, "Offset mismatch for UPilgrimInputConfig::InputActionToPilgrimLaneRelease");
static_assert(offsetof(UPilgrimInputConfig, OverdriveInputAction) == 88, "Offset mismatch for UPilgrimInputConfig::OverdriveInputAction");
static_assert(offsetof(UPilgrimInputConfig, Overdrive5LaneInputAction) == 96, "Offset mismatch for UPilgrimInputConfig::Overdrive5LaneInputAction");
static_assert(offsetof(UPilgrimInputConfig, GuitarStrumInputAction) == 104, "Offset mismatch for UPilgrimInputConfig::GuitarStrumInputAction");
static_assert(offsetof(UPilgrimInputConfig, Modulate) == 112, "Offset mismatch for UPilgrimInputConfig::Modulate");

// /Script/PilgrimCoreRuntime.PilgrimInstrumentConfig
// Kind: Class; super: PrimaryDataAsset
class UPilgrimInstrumentConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ScoreMultiplierDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SustainScorePerBeat[0x8]; // 0x0038 (Size: 0x8, Type: OptionalProperty)
    TMap<void*, void*> IndividualStarPercentageThresholds; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> BaseGemScoreValue; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimInstrumentConfig, ScoreMultiplierDefinitions) == 40, "Offset mismatch for UPilgrimInstrumentConfig::ScoreMultiplierDefinitions");
static_assert(offsetof(UPilgrimInstrumentConfig, SustainScorePerBeat) == 56, "Offset mismatch for UPilgrimInstrumentConfig::SustainScorePerBeat");
static_assert(offsetof(UPilgrimInstrumentConfig, IndividualStarPercentageThresholds) == 64, "Offset mismatch for UPilgrimInstrumentConfig::IndividualStarPercentageThresholds");
static_assert(offsetof(UPilgrimInstrumentConfig, BaseGemScoreValue) == 80, "Offset mismatch for UPilgrimInstrumentConfig::BaseGemScoreValue");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimLeaderboardLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimLeaderboardManager
// Kind: Class; super: GameStateComponent
class UPilgrimLeaderboardManager
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TMap<void*, void*> RequestCacheWrapperMap; // 0x00E0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimLeaderboardManager, RequestCacheWrapperMap) == 224, "Offset mismatch for UPilgrimLeaderboardManager::RequestCacheWrapperMap");

// /Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimLeaderboardPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnFriendsSurpassed; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBandFriendLeaderboardOptionChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableBandFriendLeaderboardOption; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x67]; // 0x00E1
    float FriendPopupTimeSeconds; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x014C
    std::uint8_t bClientSelectedAllTimeOption; // 0x015C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimLeaderboardPlayerComponent, OnFriendsSurpassed) == 192, "Offset mismatch for UPilgrimLeaderboardPlayerComponent::OnFriendsSurpassed");
static_assert(offsetof(UPilgrimLeaderboardPlayerComponent, OnBandFriendLeaderboardOptionChanged) == 208, "Offset mismatch for UPilgrimLeaderboardPlayerComponent::OnBandFriendLeaderboardOptionChanged");
static_assert(offsetof(UPilgrimLeaderboardPlayerComponent, bEnableBandFriendLeaderboardOption) == 224, "Offset mismatch for UPilgrimLeaderboardPlayerComponent::bEnableBandFriendLeaderboardOption");
static_assert(offsetof(UPilgrimLeaderboardPlayerComponent, FriendPopupTimeSeconds) == 328, "Offset mismatch for UPilgrimLeaderboardPlayerComponent::FriendPopupTimeSeconds");
static_assert(offsetof(UPilgrimLeaderboardPlayerComponent, bClientSelectedAllTimeOption) == 348, "Offset mismatch for UPilgrimLeaderboardPlayerComponent::bClientSelectedAllTimeOption");

// /Script/PilgrimCoreRuntime.PilgrimLyricParsingManager
// Kind: Class; super: Object
class UPilgrimLyricParsingManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SongData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> OwningPlayerState; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimLyricParsingManager, SongData) == 56, "Offset mismatch for UPilgrimLyricParsingManager::SongData");
static_assert(offsetof(UPilgrimLyricParsingManager, OwningPlayerState) == 64, "Offset mismatch for UPilgrimLyricParsingManager::OwningPlayerState");

// /Script/PilgrimCoreRuntime.PilgrimMBIGameManagerInterface
// Kind: Class; super: Interface
class UPilgrimMBIGameManagerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance
// Kind: Class; super: Actor
class UPilgrimMusicBattleInstance
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnMusicBattleFinished; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongScoringFinished; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Team; // 0x0290 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    void* UIStateConfig; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MusicBattleData[0x48]; // 0x02A0 (Size: 0x48, Type: StructProperty)
    FName SongToPlayShortName; // 0x02E8 (Size: 0x8, Type: NameProperty)
    void* SongToPlay; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongDifficultyToPlay; // 0x02F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClientHasReceivedSongToPlay; // 0x02F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x02FA
    void* PrimaryLocalPlayerController; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LocalPlayerControllers; // 0x0308 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0318
    TArray<void*> MusicBattlePlayers; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SinglePlayerBattleOptions[0x8]; // 0x0330 (Size: 0x8, Type: StructProperty)
    std::uint8_t MusicBattleType; // 0x0338 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0339
    std::int32_t CurrentSetlistIndex; // 0x033C (Size: 0x4, Type: IntProperty)
    TArray<void*> DisableScoreCeilingForSongs; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientPilgrimGames; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SrvFIThrMs; // 0x0360 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0xA4]; // 0x0364
    void* FFTAnalyzerResultsProvider; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* SongPlayerComponent; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CurrentPlayerToIndexMap; // 0x0418 (Size: 0x10, Type: MapProperty)
    void* SongData; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x0430
    TMap<void*, void*> ServerPilgrimGameMap; // 0x0440 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0007[0x68]; // 0x0450
    TArray<void*> GemBreakListeners; // 0x04B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0008[0x38]; // 0x04C8
    std::uint8_t PlayersWhoOwnCurrentSong[0x11]; // 0x0500 (Size: 0x11, Type: SetProperty)
    std::uint8_t bServerWaitForAllMbisAndPlayersToBeReady; // 0x0511 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x6]; // 0x0512
    std::uint8_t ServerWaitForAllPlayersTimerHandle[0x18]; // 0x0518 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowServerToApplyMultipliers; // 0x0530 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowReturnToBackStageForSinglePlayerInstances; // 0x0531 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimMusicBattleInstance, OnMusicBattleFinished) == 624, "Offset mismatch for UPilgrimMusicBattleInstance::OnMusicBattleFinished");
static_assert(offsetof(UPilgrimMusicBattleInstance, OnSongScoringFinished) == 640, "Offset mismatch for UPilgrimMusicBattleInstance::OnSongScoringFinished");
static_assert(offsetof(UPilgrimMusicBattleInstance, Team) == 656, "Offset mismatch for UPilgrimMusicBattleInstance::Team");
static_assert(offsetof(UPilgrimMusicBattleInstance, UIStateConfig) == 664, "Offset mismatch for UPilgrimMusicBattleInstance::UIStateConfig");
static_assert(offsetof(UPilgrimMusicBattleInstance, MusicBattleData) == 672, "Offset mismatch for UPilgrimMusicBattleInstance::MusicBattleData");
static_assert(offsetof(UPilgrimMusicBattleInstance, SongToPlayShortName) == 744, "Offset mismatch for UPilgrimMusicBattleInstance::SongToPlayShortName");
static_assert(offsetof(UPilgrimMusicBattleInstance, SongToPlay) == 752, "Offset mismatch for UPilgrimMusicBattleInstance::SongToPlay");
static_assert(offsetof(UPilgrimMusicBattleInstance, SongDifficultyToPlay) == 760, "Offset mismatch for UPilgrimMusicBattleInstance::SongDifficultyToPlay");
static_assert(offsetof(UPilgrimMusicBattleInstance, bClientHasReceivedSongToPlay) == 761, "Offset mismatch for UPilgrimMusicBattleInstance::bClientHasReceivedSongToPlay");
static_assert(offsetof(UPilgrimMusicBattleInstance, PrimaryLocalPlayerController) == 768, "Offset mismatch for UPilgrimMusicBattleInstance::PrimaryLocalPlayerController");
static_assert(offsetof(UPilgrimMusicBattleInstance, LocalPlayerControllers) == 776, "Offset mismatch for UPilgrimMusicBattleInstance::LocalPlayerControllers");
static_assert(offsetof(UPilgrimMusicBattleInstance, MusicBattlePlayers) == 800, "Offset mismatch for UPilgrimMusicBattleInstance::MusicBattlePlayers");
static_assert(offsetof(UPilgrimMusicBattleInstance, SinglePlayerBattleOptions) == 816, "Offset mismatch for UPilgrimMusicBattleInstance::SinglePlayerBattleOptions");
static_assert(offsetof(UPilgrimMusicBattleInstance, MusicBattleType) == 824, "Offset mismatch for UPilgrimMusicBattleInstance::MusicBattleType");
static_assert(offsetof(UPilgrimMusicBattleInstance, CurrentSetlistIndex) == 828, "Offset mismatch for UPilgrimMusicBattleInstance::CurrentSetlistIndex");
static_assert(offsetof(UPilgrimMusicBattleInstance, DisableScoreCeilingForSongs) == 832, "Offset mismatch for UPilgrimMusicBattleInstance::DisableScoreCeilingForSongs");
static_assert(offsetof(UPilgrimMusicBattleInstance, ClientPilgrimGames) == 848, "Offset mismatch for UPilgrimMusicBattleInstance::ClientPilgrimGames");
static_assert(offsetof(UPilgrimMusicBattleInstance, SrvFIThrMs) == 864, "Offset mismatch for UPilgrimMusicBattleInstance::SrvFIThrMs");
static_assert(offsetof(UPilgrimMusicBattleInstance, FFTAnalyzerResultsProvider) == 1032, "Offset mismatch for UPilgrimMusicBattleInstance::FFTAnalyzerResultsProvider");
static_assert(offsetof(UPilgrimMusicBattleInstance, SongPlayerComponent) == 1040, "Offset mismatch for UPilgrimMusicBattleInstance::SongPlayerComponent");
static_assert(offsetof(UPilgrimMusicBattleInstance, CurrentPlayerToIndexMap) == 1048, "Offset mismatch for UPilgrimMusicBattleInstance::CurrentPlayerToIndexMap");
static_assert(offsetof(UPilgrimMusicBattleInstance, SongData) == 1064, "Offset mismatch for UPilgrimMusicBattleInstance::SongData");
static_assert(offsetof(UPilgrimMusicBattleInstance, ServerPilgrimGameMap) == 1088, "Offset mismatch for UPilgrimMusicBattleInstance::ServerPilgrimGameMap");
static_assert(offsetof(UPilgrimMusicBattleInstance, GemBreakListeners) == 1208, "Offset mismatch for UPilgrimMusicBattleInstance::GemBreakListeners");
static_assert(offsetof(UPilgrimMusicBattleInstance, PlayersWhoOwnCurrentSong) == 1280, "Offset mismatch for UPilgrimMusicBattleInstance::PlayersWhoOwnCurrentSong");
static_assert(offsetof(UPilgrimMusicBattleInstance, bServerWaitForAllMbisAndPlayersToBeReady) == 1297, "Offset mismatch for UPilgrimMusicBattleInstance::bServerWaitForAllMbisAndPlayersToBeReady");
static_assert(offsetof(UPilgrimMusicBattleInstance, ServerWaitForAllPlayersTimerHandle) == 1304, "Offset mismatch for UPilgrimMusicBattleInstance::ServerWaitForAllPlayersTimerHandle");
static_assert(offsetof(UPilgrimMusicBattleInstance, bAllowServerToApplyMultipliers) == 1328, "Offset mismatch for UPilgrimMusicBattleInstance::bAllowServerToApplyMultipliers");
static_assert(offsetof(UPilgrimMusicBattleInstance, bAllowReturnToBackStageForSinglePlayerInstances) == 1329, "Offset mismatch for UPilgrimMusicBattleInstance::bAllowReturnToBackStageForSinglePlayerInstances");

// /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstanceGameplayOverridesConfig
// Kind: Class; super: DataAsset
class UPilgrimMusicBattleInstanceGameplayOverridesConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TrackClassToSpawnOverride; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FourLaneCaptureConfigOverride[0x70]; // 0x0030 (Size: 0x70, Type: StructProperty)
    std::uint8_t FiveLaneCaptureConfigOverride[0x70]; // 0x00A0 (Size: 0x70, Type: StructProperty)
    float LateTrackSpeedMultiplierOverride; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimMusicBattleInstanceGameplayOverridesConfig, TrackClassToSpawnOverride) == 40, "Offset mismatch for UPilgrimMusicBattleInstanceGameplayOverridesConfig::TrackClassToSpawnOverride");
static_assert(offsetof(UPilgrimMusicBattleInstanceGameplayOverridesConfig, FourLaneCaptureConfigOverride) == 48, "Offset mismatch for UPilgrimMusicBattleInstanceGameplayOverridesConfig::FourLaneCaptureConfigOverride");
static_assert(offsetof(UPilgrimMusicBattleInstanceGameplayOverridesConfig, FiveLaneCaptureConfigOverride) == 160, "Offset mismatch for UPilgrimMusicBattleInstanceGameplayOverridesConfig::FiveLaneCaptureConfigOverride");
static_assert(offsetof(UPilgrimMusicBattleInstanceGameplayOverridesConfig, LateTrackSpeedMultiplierOverride) == 272, "Offset mismatch for UPilgrimMusicBattleInstanceGameplayOverridesConfig::LateTrackSpeedMultiplierOverride");

// /Script/PilgrimCoreRuntime.PilgrimMusicBattleInstanceUIStateConfig
// Kind: Class; super: DataAsset
class UPilgrimMusicBattleInstanceUIStateConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TouchUIScene; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GreenRoomScene; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* TouchGreenRoomScene; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SongResultsScene; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* LocalMultiplayerUIScene; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* LocalSingleplayerUIScene; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, TouchUIScene) == 40, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::TouchUIScene");
static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, GreenRoomScene) == 48, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::GreenRoomScene");
static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, TouchGreenRoomScene) == 56, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::TouchGreenRoomScene");
static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, SongResultsScene) == 64, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::SongResultsScene");
static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, LocalMultiplayerUIScene) == 72, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::LocalMultiplayerUIScene");
static_assert(offsetof(UPilgrimMusicBattleInstanceUIStateConfig, LocalSingleplayerUIScene) == 80, "Offset mismatch for UPilgrimMusicBattleInstanceUIStateConfig::LocalSingleplayerUIScene");

// /Script/PilgrimCoreRuntime.PilgrimNowBar
// Kind: Class; super: Actor
class UPilgrimNowBar
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SceneComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* BeatMarkerSlot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* BeatMarkerSplinePath; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> LaneToSmasherMap; // 0x0288 (Size: 0x10, Type: MapProperty)
    std::int32_t TrackIndex; // 0x0298 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x029C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimNowBar, SceneComp) == 624, "Offset mismatch for UPilgrimNowBar::SceneComp");
static_assert(offsetof(UPilgrimNowBar, BeatMarkerSlot) == 632, "Offset mismatch for UPilgrimNowBar::BeatMarkerSlot");
static_assert(offsetof(UPilgrimNowBar, BeatMarkerSplinePath) == 640, "Offset mismatch for UPilgrimNowBar::BeatMarkerSplinePath");
static_assert(offsetof(UPilgrimNowBar, LaneToSmasherMap) == 648, "Offset mismatch for UPilgrimNowBar::LaneToSmasherMap");
static_assert(offsetof(UPilgrimNowBar, TrackIndex) == 664, "Offset mismatch for UPilgrimNowBar::TrackIndex");
static_assert(offsetof(UPilgrimNowBar, PilgrimGame) == 668, "Offset mismatch for UPilgrimNowBar::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimPerformanceTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GameScoreTracker; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGame; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPerformanceTrackerComponent, GameScoreTracker) == 192, "Offset mismatch for UPilgrimPerformanceTrackerComponent::GameScoreTracker");
static_assert(offsetof(UPilgrimPerformanceTrackerComponent, PilgrimGame) == 200, "Offset mismatch for UPilgrimPerformanceTrackerComponent::PilgrimGame");

// /Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent
// Kind: Class; super: FortControllerComponent
class UPilgrimPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FMulticastInlineDelegate OnServerTimedInputReceived; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnServerSettingUpdatedReceived; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnServerSyncHeartbeatMessageReceived; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PilgrimForceFeedbackConfig; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseMobileHapticFeedback; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HapticFeedbackType_GemHit; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HapticFeedbackType_OverdriveReady; // 0x011A (Size: 0x1, Type: EnumProperty)
    std::uint8_t HapticFeedbackType_OverdriveDeployed; // 0x011B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    FMulticastInlineDelegate OnActivateInputPreset; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDesiredInputPresetChanged; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInputSettingsChanged; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMusicBattleClientUpdateReceived; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStateMachineMessageReceived; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bUseAutoplay; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0171
    TArray<void*> PlayerStateEventHandles; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScoringEventHandles; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InstrumentCollection[0x20]; // 0x01B0 (Size: 0x20, Type: StructProperty)
    void* DefaultUnbindsDataTable; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* CycleInputsInputAction; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01E0
    void* CycleLanesInputAction; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x01F0
    void* EmotePickerInputAction; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> FallbackKeyboardLaneInputMappingConfigs; // 0x0200 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FallbackControllerLaneInputMappingConfigs; // 0x0210 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PeripheralIMCMap; // 0x0220 (Size: 0x10, Type: MapProperty)
    void* PSPeripheralGuitarGreenRoomIMC; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* SwitchPeripheralGuitarBeatmatchIMC; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    void* SwitchPeripheralGuitarBeatmatchIMC_NonPro4Lanes; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> LaneInputMappingConfigs; // 0x0248 (Size: 0x10, Type: MapProperty)
    std::uint8_t TouchBrushesConfig[0x10]; // 0x0258 (Size: 0x10, Type: StructProperty)
    std::uint8_t SelectedNumInputLanes; // 0x0268 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0269
    void* SelectedPCBeatmatchIMC; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x0278
    void* SelectedConsoleBeatmatchIMC; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x28]; // 0x0288
    TWeakObjectPtr<void> PilgrimPresetConfiguration; // 0x02B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0008[0x10]; // 0x02B8
    TWeakObjectPtr<void> ClientPilgrimGame; // 0x02C8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x02D0
    void* WaitForEventRouterAction; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerEnhancedInputSubsystem; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CurrentlyAddedPlayerIMCs; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimPlayerControllerComponent, OnServerTimedInputReceived) == 224, "Offset mismatch for UPilgrimPlayerControllerComponent::OnServerTimedInputReceived");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnServerSettingUpdatedReceived) == 240, "Offset mismatch for UPilgrimPlayerControllerComponent::OnServerSettingUpdatedReceived");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnServerSyncHeartbeatMessageReceived) == 256, "Offset mismatch for UPilgrimPlayerControllerComponent::OnServerSyncHeartbeatMessageReceived");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PilgrimForceFeedbackConfig) == 272, "Offset mismatch for UPilgrimPlayerControllerComponent::PilgrimForceFeedbackConfig");
static_assert(offsetof(UPilgrimPlayerControllerComponent, bUseMobileHapticFeedback) == 280, "Offset mismatch for UPilgrimPlayerControllerComponent::bUseMobileHapticFeedback");
static_assert(offsetof(UPilgrimPlayerControllerComponent, HapticFeedbackType_GemHit) == 281, "Offset mismatch for UPilgrimPlayerControllerComponent::HapticFeedbackType_GemHit");
static_assert(offsetof(UPilgrimPlayerControllerComponent, HapticFeedbackType_OverdriveReady) == 282, "Offset mismatch for UPilgrimPlayerControllerComponent::HapticFeedbackType_OverdriveReady");
static_assert(offsetof(UPilgrimPlayerControllerComponent, HapticFeedbackType_OverdriveDeployed) == 283, "Offset mismatch for UPilgrimPlayerControllerComponent::HapticFeedbackType_OverdriveDeployed");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnActivateInputPreset) == 288, "Offset mismatch for UPilgrimPlayerControllerComponent::OnActivateInputPreset");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnDesiredInputPresetChanged) == 304, "Offset mismatch for UPilgrimPlayerControllerComponent::OnDesiredInputPresetChanged");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnInputSettingsChanged) == 320, "Offset mismatch for UPilgrimPlayerControllerComponent::OnInputSettingsChanged");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnMusicBattleClientUpdateReceived) == 336, "Offset mismatch for UPilgrimPlayerControllerComponent::OnMusicBattleClientUpdateReceived");
static_assert(offsetof(UPilgrimPlayerControllerComponent, OnStateMachineMessageReceived) == 352, "Offset mismatch for UPilgrimPlayerControllerComponent::OnStateMachineMessageReceived");
static_assert(offsetof(UPilgrimPlayerControllerComponent, bUseAutoplay) == 368, "Offset mismatch for UPilgrimPlayerControllerComponent::bUseAutoplay");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PlayerStateEventHandles) == 400, "Offset mismatch for UPilgrimPlayerControllerComponent::PlayerStateEventHandles");
static_assert(offsetof(UPilgrimPlayerControllerComponent, ScoringEventHandles) == 416, "Offset mismatch for UPilgrimPlayerControllerComponent::ScoringEventHandles");
static_assert(offsetof(UPilgrimPlayerControllerComponent, InstrumentCollection) == 432, "Offset mismatch for UPilgrimPlayerControllerComponent::InstrumentCollection");
static_assert(offsetof(UPilgrimPlayerControllerComponent, DefaultUnbindsDataTable) == 464, "Offset mismatch for UPilgrimPlayerControllerComponent::DefaultUnbindsDataTable");
static_assert(offsetof(UPilgrimPlayerControllerComponent, CycleInputsInputAction) == 472, "Offset mismatch for UPilgrimPlayerControllerComponent::CycleInputsInputAction");
static_assert(offsetof(UPilgrimPlayerControllerComponent, CycleLanesInputAction) == 488, "Offset mismatch for UPilgrimPlayerControllerComponent::CycleLanesInputAction");
static_assert(offsetof(UPilgrimPlayerControllerComponent, EmotePickerInputAction) == 504, "Offset mismatch for UPilgrimPlayerControllerComponent::EmotePickerInputAction");
static_assert(offsetof(UPilgrimPlayerControllerComponent, FallbackKeyboardLaneInputMappingConfigs) == 512, "Offset mismatch for UPilgrimPlayerControllerComponent::FallbackKeyboardLaneInputMappingConfigs");
static_assert(offsetof(UPilgrimPlayerControllerComponent, FallbackControllerLaneInputMappingConfigs) == 528, "Offset mismatch for UPilgrimPlayerControllerComponent::FallbackControllerLaneInputMappingConfigs");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PeripheralIMCMap) == 544, "Offset mismatch for UPilgrimPlayerControllerComponent::PeripheralIMCMap");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PSPeripheralGuitarGreenRoomIMC) == 560, "Offset mismatch for UPilgrimPlayerControllerComponent::PSPeripheralGuitarGreenRoomIMC");
static_assert(offsetof(UPilgrimPlayerControllerComponent, SwitchPeripheralGuitarBeatmatchIMC) == 568, "Offset mismatch for UPilgrimPlayerControllerComponent::SwitchPeripheralGuitarBeatmatchIMC");
static_assert(offsetof(UPilgrimPlayerControllerComponent, SwitchPeripheralGuitarBeatmatchIMC_NonPro4Lanes) == 576, "Offset mismatch for UPilgrimPlayerControllerComponent::SwitchPeripheralGuitarBeatmatchIMC_NonPro4Lanes");
static_assert(offsetof(UPilgrimPlayerControllerComponent, LaneInputMappingConfigs) == 584, "Offset mismatch for UPilgrimPlayerControllerComponent::LaneInputMappingConfigs");
static_assert(offsetof(UPilgrimPlayerControllerComponent, TouchBrushesConfig) == 600, "Offset mismatch for UPilgrimPlayerControllerComponent::TouchBrushesConfig");
static_assert(offsetof(UPilgrimPlayerControllerComponent, SelectedNumInputLanes) == 616, "Offset mismatch for UPilgrimPlayerControllerComponent::SelectedNumInputLanes");
static_assert(offsetof(UPilgrimPlayerControllerComponent, SelectedPCBeatmatchIMC) == 624, "Offset mismatch for UPilgrimPlayerControllerComponent::SelectedPCBeatmatchIMC");
static_assert(offsetof(UPilgrimPlayerControllerComponent, SelectedConsoleBeatmatchIMC) == 640, "Offset mismatch for UPilgrimPlayerControllerComponent::SelectedConsoleBeatmatchIMC");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PilgrimPresetConfiguration) == 688, "Offset mismatch for UPilgrimPlayerControllerComponent::PilgrimPresetConfiguration");
static_assert(offsetof(UPilgrimPlayerControllerComponent, ClientPilgrimGame) == 712, "Offset mismatch for UPilgrimPlayerControllerComponent::ClientPilgrimGame");
static_assert(offsetof(UPilgrimPlayerControllerComponent, WaitForEventRouterAction) == 728, "Offset mismatch for UPilgrimPlayerControllerComponent::WaitForEventRouterAction");
static_assert(offsetof(UPilgrimPlayerControllerComponent, PlayerEnhancedInputSubsystem) == 736, "Offset mismatch for UPilgrimPlayerControllerComponent::PlayerEnhancedInputSubsystem");
static_assert(offsetof(UPilgrimPlayerControllerComponent, CurrentlyAddedPlayerIMCs) == 744, "Offset mismatch for UPilgrimPlayerControllerComponent::CurrentlyAddedPlayerIMCs");

// /Script/PilgrimCoreRuntime.PilgrimPlayerManager
// Kind: Class; super: PlayspaceComponent
class UPilgrimPlayerManager
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t bReadyTimerHasEverExpiredThisMatch; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimPlayerManager, bReadyTimerHasEverExpiredThisMatch) == 272, "Offset mismatch for UPilgrimPlayerManager::bReadyTimerHasEverExpiredThisMatch");

// /Script/PilgrimCoreRuntime.PilgrimPlayerTravelControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimPlayerTravelControllerComponent
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

static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimPlayerTravelControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimPlayerTravelControllerComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimPlayspace
// Kind: Class; super: SparksMusicPlayspace
class UPilgrimPlayspace
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    void* AudioReactivityComponent; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* ActorPoolComponent; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PilgrimMusicBattleInstances; // 0x06D0 (Size: 0x10, Type: ArrayProperty)
    void* MusicClockManager; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    void* MusicTempometer; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* SongPreloader; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* GemAnalyzer; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGameConfig; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimSupportedGameplayConfig; // 0x0708 (Size: 0x8, Type: ObjectProperty)
    void* GameplayOverridesConfig; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPlayspace, AudioReactivityComponent) == 1728, "Offset mismatch for UPilgrimPlayspace::AudioReactivityComponent");
static_assert(offsetof(UPilgrimPlayspace, ActorPoolComponent) == 1736, "Offset mismatch for UPilgrimPlayspace::ActorPoolComponent");
static_assert(offsetof(UPilgrimPlayspace, PilgrimMusicBattleInstances) == 1744, "Offset mismatch for UPilgrimPlayspace::PilgrimMusicBattleInstances");
static_assert(offsetof(UPilgrimPlayspace, MusicClockManager) == 1760, "Offset mismatch for UPilgrimPlayspace::MusicClockManager");
static_assert(offsetof(UPilgrimPlayspace, MusicTempometer) == 1768, "Offset mismatch for UPilgrimPlayspace::MusicTempometer");
static_assert(offsetof(UPilgrimPlayspace, SongPreloader) == 1776, "Offset mismatch for UPilgrimPlayspace::SongPreloader");
static_assert(offsetof(UPilgrimPlayspace, GemAnalyzer) == 1784, "Offset mismatch for UPilgrimPlayspace::GemAnalyzer");
static_assert(offsetof(UPilgrimPlayspace, PilgrimGameConfig) == 1792, "Offset mismatch for UPilgrimPlayspace::PilgrimGameConfig");
static_assert(offsetof(UPilgrimPlayspace, PilgrimSupportedGameplayConfig) == 1800, "Offset mismatch for UPilgrimPlayspace::PilgrimSupportedGameplayConfig");
static_assert(offsetof(UPilgrimPlayspace, GameplayOverridesConfig) == 1808, "Offset mismatch for UPilgrimPlayspace::GameplayOverridesConfig");

// /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_AudioReactivity
// Kind: Class; super: PlayspaceComponent
class UPilgrimPlayspaceComponent_AudioReactivity
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t HarmonixPeakTamerSettings[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    void* MPCSparksAudioParameters; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00E0
    void* MPCSparksAudioParametersInstance; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPlayspaceComponent_AudioReactivity, HarmonixPeakTamerSettings) == 192, "Offset mismatch for UPilgrimPlayspaceComponent_AudioReactivity::HarmonixPeakTamerSettings");
static_assert(offsetof(UPilgrimPlayspaceComponent_AudioReactivity, MPCSparksAudioParameters) == 216, "Offset mismatch for UPilgrimPlayspaceComponent_AudioReactivity::MPCSparksAudioParameters");
static_assert(offsetof(UPilgrimPlayspaceComponent_AudioReactivity, MPCSparksAudioParametersInstance) == 256, "Offset mismatch for UPilgrimPlayspaceComponent_AudioReactivity::MPCSparksAudioParametersInstance");

// /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager
// Kind: Class; super: PlayspaceComponent_LipSyncAssetManager
class UPilgrimPlayspaceComponent_LipSyncAssetManager
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* LipSyncSkeleton; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPlayspaceComponent_LipSyncAssetManager, LipSyncSkeleton) == 256, "Offset mismatch for UPilgrimPlayspaceComponent_LipSyncAssetManager::LipSyncSkeleton");

// /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_MidiEventDataManager
// Kind: Class; super: PlayspaceComponent_MidiEventDataManager
class UPilgrimPlayspaceComponent_MidiEventDataManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    FMulticastInlineDelegate OnMidiEventDataParsed; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimPlayspaceComponent_MidiEventDataManager, OnMidiEventDriverChanged) == 192, "Offset mismatch for UPilgrimPlayspaceComponent_MidiEventDataManager::OnMidiEventDriverChanged");
static_assert(offsetof(UPilgrimPlayspaceComponent_MidiEventDataManager, OnMidiEventDataParsed) == 232, "Offset mismatch for UPilgrimPlayspaceComponent_MidiEventDataManager::OnMidiEventDataParsed");

// /Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader
// Kind: Class; super: PlayspaceComponent
class UPilgrimPlayspaceComponent_SongPreloader
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FName SongToLoad; // 0x00D8 (Size: 0x8, Type: NameProperty)
    void* SongMetadata; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PlayersFinishedLoading; // 0x00E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bServerFinishedLoading; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBroadcastedLoadingFinished; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x00FA
    std::uint8_t LoadTimeoutTimerHandle[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, SongToLoad) == 216, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::SongToLoad");
static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, SongMetadata) == 224, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::SongMetadata");
static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, PlayersFinishedLoading) == 232, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::PlayersFinishedLoading");
static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, bServerFinishedLoading) == 248, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::bServerFinishedLoading");
static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, bBroadcastedLoadingFinished) == 249, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::bBroadcastedLoadingFinished");
static_assert(offsetof(UPilgrimPlayspaceComponent_SongPreloader, LoadTimeoutTimerHandle) == 272, "Offset mismatch for UPilgrimPlayspaceComponent_SongPreloader::LoadTimeoutTimerHandle");

// /Script/PilgrimCoreRuntime.PilgrimPremadeSetlist
// Kind: Class; super: DataAsset
class UPilgrimPremadeSetlist
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SetlistTitle[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    TArray<void*> SongShortNameList; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SetlistTag[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t AdditionalTags[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    TSoftObjectPtr<void> SetlistArt; // 0x0088 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UPilgrimPremadeSetlist, SetlistTitle) == 48, "Offset mismatch for UPilgrimPremadeSetlist::SetlistTitle");
static_assert(offsetof(UPilgrimPremadeSetlist, Description) == 64, "Offset mismatch for UPilgrimPremadeSetlist::Description");
static_assert(offsetof(UPilgrimPremadeSetlist, SongShortNameList) == 80, "Offset mismatch for UPilgrimPremadeSetlist::SongShortNameList");
static_assert(offsetof(UPilgrimPremadeSetlist, SetlistTag) == 96, "Offset mismatch for UPilgrimPremadeSetlist::SetlistTag");
static_assert(offsetof(UPilgrimPremadeSetlist, AdditionalTags) == 104, "Offset mismatch for UPilgrimPremadeSetlist::AdditionalTags");
static_assert(offsetof(UPilgrimPremadeSetlist, SetlistArt) == 136, "Offset mismatch for UPilgrimPremadeSetlist::SetlistArt");

// /Script/PilgrimCoreRuntime.PilgrimQuestDefinitionComponent_TextFormat
// Kind: Class; super: FortQuestDefinitionComponent_TextFormat
class UPilgrimQuestDefinitionComponent_TextFormat
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimQuestDefinitionComponent_TextFormat, ObjectivesExtensionData) == 48, "Offset mismatch for UPilgrimQuestDefinitionComponent_TextFormat::ObjectivesExtensionData");

// /Script/PilgrimCoreRuntime.PilgrimQuestLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPilgrimQuestLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimRandomSetlist
// Kind: Class; super: PlayspaceComponent
class UPilgrimRandomSetlist
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::int32_t NumSongsToPopulate; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    std::uint8_t SongFilterQuery[0x48]; // 0x00D0 (Size: 0x48, Type: StructProperty)
    TArray<void*> SongList; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimRandomSetlist, NumSongsToPopulate) == 200, "Offset mismatch for UPilgrimRandomSetlist::NumSongsToPopulate");
static_assert(offsetof(UPilgrimRandomSetlist, SongFilterQuery) == 208, "Offset mismatch for UPilgrimRandomSetlist::SongFilterQuery");
static_assert(offsetof(UPilgrimRandomSetlist, SongList) == 280, "Offset mismatch for UPilgrimRandomSetlist::SongList");

// /Script/PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper
// Kind: Class; super: Object
class UPilgrimRequestFriendScoreWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimScoreDebugPrinter
// Kind: Class; super: Object
class UPilgrimScoreDebugPrinter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimScoringModel
// Kind: Class; super: Object
class UPilgrimScoringModel
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GameProgress[0xC0]; // 0x0030 (Size: 0xC0, Type: StructProperty)
    std::uint8_t GameConfigSettings[0x250]; // 0x00F0 (Size: 0x250, Type: StructProperty)
    void* GameConfig; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnGemActionResult; // 0x0348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0358
    TWeakObjectPtr<void> OwningPlayerState; // 0x0380 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimScoringModel, GameProgress) == 48, "Offset mismatch for UPilgrimScoringModel::GameProgress");
static_assert(offsetof(UPilgrimScoringModel, GameConfigSettings) == 240, "Offset mismatch for UPilgrimScoringModel::GameConfigSettings");
static_assert(offsetof(UPilgrimScoringModel, GameConfig) == 832, "Offset mismatch for UPilgrimScoringModel::GameConfig");
static_assert(offsetof(UPilgrimScoringModel, OnGemActionResult) == 840, "Offset mismatch for UPilgrimScoringModel::OnGemActionResult");
static_assert(offsetof(UPilgrimScoringModel, OwningPlayerState) == 896, "Offset mismatch for UPilgrimScoringModel::OwningPlayerState");

// /Script/PilgrimCoreRuntime.PilgrimScoringModifier
// Kind: Class; super: PrimaryDataAsset
class UPilgrimScoringModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimSetlistInterface
// Kind: Class; super: Interface
class UPilgrimSetlistInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimCoreRuntime.PilgrimSongCatalog
// Kind: Class; super: GameStateComponent
class UPilgrimSongCatalog
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> SongsByShortName; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SongsByShortMcpTemplateId; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimSongCatalog, SongsByShortName) == 192, "Offset mismatch for UPilgrimSongCatalog::SongsByShortName");
static_assert(offsetof(UPilgrimSongCatalog, SongsByShortMcpTemplateId) == 208, "Offset mismatch for UPilgrimSongCatalog::SongsByShortMcpTemplateId");

// /Script/PilgrimCoreRuntime.PilgrimSongChallenge
// Kind: Class; super: Object
class UPilgrimSongChallenge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSongChallengeLookupStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongChallengeProgressionStateChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongQuestChallengeProgressionChanged; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    void* OwningComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LookupResult[0x58]; // 0x0070 (Size: 0x58, Type: StructProperty)
    void* PendingRequest; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongChallenge, OnSongChallengeLookupStateChanged) == 40, "Offset mismatch for UPilgrimSongChallenge::OnSongChallengeLookupStateChanged");
static_assert(offsetof(UPilgrimSongChallenge, OnSongChallengeProgressionStateChanged) == 56, "Offset mismatch for UPilgrimSongChallenge::OnSongChallengeProgressionStateChanged");
static_assert(offsetof(UPilgrimSongChallenge, OnSongQuestChallengeProgressionChanged) == 72, "Offset mismatch for UPilgrimSongChallenge::OnSongQuestChallengeProgressionChanged");
static_assert(offsetof(UPilgrimSongChallenge, OwningComponent) == 104, "Offset mismatch for UPilgrimSongChallenge::OwningComponent");
static_assert(offsetof(UPilgrimSongChallenge, LookupResult) == 112, "Offset mismatch for UPilgrimSongChallenge::LookupResult");
static_assert(offsetof(UPilgrimSongChallenge, PendingRequest) == 200, "Offset mismatch for UPilgrimSongChallenge::PendingRequest");

// /Script/PilgrimCoreRuntime.PilgrimSongChallengesComponent
// Kind: Class; super: PlayerStateComponent
class UPilgrimSongChallengesComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSongChallengeLookupStateChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongChallengeProgressionStateChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> Challenges; // 0x00E0 (Size: 0x10, Type: MapProperty)
    void* ActiveChallenge; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NextQuestChallengeType; // 0x00F8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimSongChallengesComponent, OnSongChallengeLookupStateChanged) == 192, "Offset mismatch for UPilgrimSongChallengesComponent::OnSongChallengeLookupStateChanged");
static_assert(offsetof(UPilgrimSongChallengesComponent, OnSongChallengeProgressionStateChanged) == 208, "Offset mismatch for UPilgrimSongChallengesComponent::OnSongChallengeProgressionStateChanged");
static_assert(offsetof(UPilgrimSongChallengesComponent, Challenges) == 224, "Offset mismatch for UPilgrimSongChallengesComponent::Challenges");
static_assert(offsetof(UPilgrimSongChallengesComponent, ActiveChallenge) == 240, "Offset mismatch for UPilgrimSongChallengesComponent::ActiveChallenge");
static_assert(offsetof(UPilgrimSongChallengesComponent, NextQuestChallengeType) == 248, "Offset mismatch for UPilgrimSongChallengesComponent::NextQuestChallengeType");

// /Script/PilgrimCoreRuntime.PilgrimSongController
// Kind: Class; super: PlayspaceComponent
class UPilgrimSongController
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* MetasoundMixer; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x00C8
    void* PilgrimGameConfig; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongController, MetasoundMixer) == 192, "Offset mismatch for UPilgrimSongController::MetasoundMixer");
static_assert(offsetof(UPilgrimSongController, PilgrimGameConfig) == 240, "Offset mismatch for UPilgrimSongController::PilgrimGameConfig");

// /Script/PilgrimCoreRuntime.PilgrimSongData
// Kind: Class; super: ParsedMidiEventData
class UPilgrimSongData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TMap<void*, void*> TracksPerDifficulty; // 0x0060 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0070
    TArray<void*> BeatMarkers; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSongData, TracksPerDifficulty) == 96, "Offset mismatch for UPilgrimSongData::TracksPerDifficulty");
static_assert(offsetof(UPilgrimSongData, BeatMarkers) == 200, "Offset mismatch for UPilgrimSongData::BeatMarkers");

// /Script/PilgrimCoreRuntime.PilgrimSongMetadata
// Kind: Class; super: SparksSongData
class UPilgrimSongMetadata
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t StageMoodTag[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    TArray<void*> Genre; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Year; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    FString StreamingVUID; // 0x00F8 (Size: 0x10, Type: StrProperty)
    FString PreviewVUID; // 0x0108 (Size: 0x10, Type: StrProperty)
    std::uint8_t duration[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t DrumStartingIntrument; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BassStartingIntrument; // 0x0121 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GuitarStartingIntrument; // 0x0122 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VocalsStartingIntrument; // 0x0123 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0124
    std::uint8_t StemmedMusicAsset[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StemmedMusicAssetRuntime[0x20]; // 0x0148 (Size: 0x20, Type: SoftObjectProperty)
    FString SanitizedSearchString; // 0x0168 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPilgrimSongMetadata, StageMoodTag) == 216, "Offset mismatch for UPilgrimSongMetadata::StageMoodTag");
static_assert(offsetof(UPilgrimSongMetadata, Genre) == 224, "Offset mismatch for UPilgrimSongMetadata::Genre");
static_assert(offsetof(UPilgrimSongMetadata, Year) == 240, "Offset mismatch for UPilgrimSongMetadata::Year");
static_assert(offsetof(UPilgrimSongMetadata, StreamingVUID) == 248, "Offset mismatch for UPilgrimSongMetadata::StreamingVUID");
static_assert(offsetof(UPilgrimSongMetadata, PreviewVUID) == 264, "Offset mismatch for UPilgrimSongMetadata::PreviewVUID");
static_assert(offsetof(UPilgrimSongMetadata, duration) == 280, "Offset mismatch for UPilgrimSongMetadata::duration");
static_assert(offsetof(UPilgrimSongMetadata, DrumStartingIntrument) == 288, "Offset mismatch for UPilgrimSongMetadata::DrumStartingIntrument");
static_assert(offsetof(UPilgrimSongMetadata, BassStartingIntrument) == 289, "Offset mismatch for UPilgrimSongMetadata::BassStartingIntrument");
static_assert(offsetof(UPilgrimSongMetadata, GuitarStartingIntrument) == 290, "Offset mismatch for UPilgrimSongMetadata::GuitarStartingIntrument");
static_assert(offsetof(UPilgrimSongMetadata, VocalsStartingIntrument) == 291, "Offset mismatch for UPilgrimSongMetadata::VocalsStartingIntrument");
static_assert(offsetof(UPilgrimSongMetadata, StemmedMusicAsset) == 296, "Offset mismatch for UPilgrimSongMetadata::StemmedMusicAsset");
static_assert(offsetof(UPilgrimSongMetadata, StemmedMusicAssetRuntime) == 328, "Offset mismatch for UPilgrimSongMetadata::StemmedMusicAssetRuntime");
static_assert(offsetof(UPilgrimSongMetadata, SanitizedSearchString) == 360, "Offset mismatch for UPilgrimSongMetadata::SanitizedSearchString");

// /Script/PilgrimCoreRuntime.PilgrimSongPlayerComponent
// Kind: Class; super: ActorComponent
class UPilgrimSongPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t PlayingSongParams[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    void* PlayingSongData; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* PlayingMusicAsset; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* MediaStreamer; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundPlayerGeneratorHandle; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* MetasoundPlayerSeekParamPack; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimSongPlayerComponent, PlayingSongParams) == 224, "Offset mismatch for UPilgrimSongPlayerComponent::PlayingSongParams");
static_assert(offsetof(UPilgrimSongPlayerComponent, PlayingSongData) == 264, "Offset mismatch for UPilgrimSongPlayerComponent::PlayingSongData");
static_assert(offsetof(UPilgrimSongPlayerComponent, PlayingMusicAsset) == 272, "Offset mismatch for UPilgrimSongPlayerComponent::PlayingMusicAsset");
static_assert(offsetof(UPilgrimSongPlayerComponent, MediaStreamer) == 280, "Offset mismatch for UPilgrimSongPlayerComponent::MediaStreamer");
static_assert(offsetof(UPilgrimSongPlayerComponent, MetasoundPlayerGeneratorHandle) == 288, "Offset mismatch for UPilgrimSongPlayerComponent::MetasoundPlayerGeneratorHandle");
static_assert(offsetof(UPilgrimSongPlayerComponent, MetasoundPlayerSeekParamPack) == 296, "Offset mismatch for UPilgrimSongPlayerComponent::MetasoundPlayerSeekParamPack");

// /Script/PilgrimCoreRuntime.PilgrimSongVotingComponent
// Kind: Class; super: PlayspaceComponent
class UPilgrimSongVotingComponent
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

static_assert(offsetof(UPilgrimSongVotingComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimSongVotingComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimSongVotingComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimSongVotingComponent::ComponentTags");
static_assert(offsetof(UPilgrimSongVotingComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimSongVotingComponent::AssetUserData");
static_assert(offsetof(UPilgrimSongVotingComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimSongVotingComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimSongVotingComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimSongVotingComponent::bNetAddressable");
static_assert(offsetof(UPilgrimSongVotingComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimSongVotingComponent::bAutoActivate");
static_assert(offsetof(UPilgrimSongVotingComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimSongVotingComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimSongVotingComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimSongVotingComponent::CreationMethod");
static_assert(offsetof(UPilgrimSongVotingComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimSongVotingComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimSongVotingComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimSongVotingComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimSongVotingControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimSongVotingControllerComponent
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

static_assert(offsetof(UPilgrimSongVotingControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimSongVotingControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimSongVotingControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimSongVotingControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimSongVotingControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimSongVotingControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimSongVotingControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimSongVotingControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimSongVotingControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimSongVotingControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimSongVotingControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimSongVotingControllerComponent::OnComponentDeactivated");

// /Script/PilgrimCoreRuntime.PilgrimStandinDirector
// Kind: Class; super: FortPlayspaceComponent
class UPilgrimStandinDirector
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TArray<void*> SpawnedStandinPawns; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpawnedStandinStates; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimStandinDirector, SpawnedStandinPawns) == 280, "Offset mismatch for UPilgrimStandinDirector::SpawnedStandinPawns");
static_assert(offsetof(UPilgrimStandinDirector, SpawnedStandinStates) == 296, "Offset mismatch for UPilgrimStandinDirector::SpawnedStandinStates");

// /Script/PilgrimCoreRuntime.PilgrimSupportedGameplayConfig
// Kind: Class; super: PrimaryDataAsset
class UPilgrimSupportedGameplayConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SupportedDifficulties; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SupportedTrackTypes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TouchInputSupportedTrackTypes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimSupportedGameplayConfig, SupportedDifficulties) == 40, "Offset mismatch for UPilgrimSupportedGameplayConfig::SupportedDifficulties");
static_assert(offsetof(UPilgrimSupportedGameplayConfig, SupportedTrackTypes) == 56, "Offset mismatch for UPilgrimSupportedGameplayConfig::SupportedTrackTypes");
static_assert(offsetof(UPilgrimSupportedGameplayConfig, TouchInputSupportedTrackTypes) == 72, "Offset mismatch for UPilgrimSupportedGameplayConfig::TouchInputSupportedTrackTypes");

// /Script/PilgrimCoreRuntime.PilgrimSustainTrackItemMgr
// Kind: Class; super: PilgrimTrackItemMgr
class UPilgrimSustainTrackItemMgr
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CheckedItemBaseClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Track; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* ItemPool; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActiveItems; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveItemsMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimSustainTrackItemMgr, CheckedItemBaseClass) == 192, "Offset mismatch for UPilgrimSustainTrackItemMgr::CheckedItemBaseClass");
static_assert(offsetof(UPilgrimSustainTrackItemMgr, Track) == 200, "Offset mismatch for UPilgrimSustainTrackItemMgr::Track");
static_assert(offsetof(UPilgrimSustainTrackItemMgr, ItemPool) == 208, "Offset mismatch for UPilgrimSustainTrackItemMgr::ItemPool");
static_assert(offsetof(UPilgrimSustainTrackItemMgr, PilgrimGame) == 216, "Offset mismatch for UPilgrimSustainTrackItemMgr::PilgrimGame");
static_assert(offsetof(UPilgrimSustainTrackItemMgr, ActiveItems) == 224, "Offset mismatch for UPilgrimSustainTrackItemMgr::ActiveItems");
static_assert(offsetof(UPilgrimSustainTrackItemMgr, ActiveItemsMap) == 240, "Offset mismatch for UPilgrimSustainTrackItemMgr::ActiveItemsMap");

// /Script/PilgrimCoreRuntime.PilgrimTogglePlasticInstrumentAbility
// Kind: Class; super: FortGameplayAbility
class UPilgrimTogglePlasticInstrumentAbility
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

static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ActivationType) == 936, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ActivationType");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, EffectContainers) == 944, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::EffectContainers");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, GameplayEffectContainers) == 1864, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::GameplayEffectContainers");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, DynamicGameplayEffectContainers) == 1880, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::DynamicGameplayEffectContainers");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, OwnerPreviewImageOverrideTags) == 1896, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::OwnerPreviewImageOverrideTags");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ProjectileClass) == 1928, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ProjectileClass");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bAllowBlueprintReplicatedVariables) == 1936, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bAllowBlueprintReplicatedVariables");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, DamageStatHandle) == 1944, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::DamageStatHandle");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, AbilityCosts) == 1960, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::AbilityCosts");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, Costs) == 1976, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::Costs");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bApplyingCostsEnabled) == 1992, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bApplyingCostsEnabled");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MovementCancellationLeashLength) == 2000, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MovementCancellationLeashLength");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ExplicitCooldownDuration) == 2040, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ExplicitCooldownDuration");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ExplicitCooldownTags) == 2080, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ExplicitCooldownTags");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ExplicitCooldownAssetTags) == 2112, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ExplicitCooldownAssetTags");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, CustomFiringSequenceLength) == 2144, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::CustomFiringSequenceLength");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bDisableMoveCombining) == 2148, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bDisableMoveCombining");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bForceNormalAILOD) == 2149, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bForceNormalAILOD");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MinimumRequiredAILODLevel) == 2152, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MinimumRequiredAILODLevel");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests) == 2156, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bUseAIFireLocationAndRotation) == 2157, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bUseAIFireLocationAndRotation");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, AIWeaponUsage) == 2160, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::AIWeaponUsage");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, WeaponTestApplicationTag) == 2164, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::WeaponTestApplicationTag");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling) == 2168, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, FireOffset) == 2176, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::FireOffset");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ActivationNoiseRange) == 2200, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ActivationNoiseRange");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ImpactNoiseRange) == 2204, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ImpactNoiseRange");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ActivationNoiseLoudness) == 2208, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ActivationNoiseLoudness");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ImpactNoiseLoudness) == 2212, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ImpactNoiseLoudness");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ProhibitedTargetTags) == 2216, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ProhibitedTargetTags");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bLeadPawnTargets) == 2249, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bLeadPawnTargets");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, DesiredThrowAngle) == 2252, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::DesiredThrowAngle");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MaxYawAngleToFire) == 2256, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MaxYawAngleToFire");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bClampMaxYawAngleToFire) == 2260, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bClampMaxYawAngleToFire");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bUseTargetActorLocation) == 2261, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bUseTargetActorLocation");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, InitialAccuracyMax) == 2264, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::InitialAccuracyMax");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, InitialAccuracyMin) == 2268, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::InitialAccuracyMin");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, TargetAccuracyMax) == 2272, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::TargetAccuracyMax");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, TargetAccuracyMin) == 2276, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::TargetAccuracyMin");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MinAccuracyDistance) == 2280, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MinAccuracyDistance");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MaxAccuracyDistance) == 2284, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MaxAccuracyDistance");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, AccuracyDistanceMultiplier) == 2288, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::AccuracyDistanceMultiplier");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, NumUsesToReachTargetAccuracy) == 2292, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::NumUsesToReachTargetAccuracy");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, UseCount) == 2296, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::UseCount");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bIsMobileToggle) == 2300, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bIsMobileToggle");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, bActivateIfTagsAlreadyPresent) == 2301, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::bActivateIfTagsAlreadyPresent");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, GameplayAbilityBehaviorDistanceData) == 2312, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, MontageInfo) == 2424, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::MontageInfo");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, PreviousMontageInfo) == 2512, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::PreviousMontageInfo");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ModList) == 2600, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ModList");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, AbilityWeapon) == 2616, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::AbilityWeapon");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, DisplayName) == 2624, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::DisplayName");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, Description) == 2640, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::Description");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, SmallPreviewImageOverride) == 2664, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::SmallPreviewImageOverride");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ChargeStartTime) == 2688, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ChargeStartTime");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ChargeState) == 2696, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ChargeState");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ToolTip) == 2736, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ToolTip");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, StatList) == 2744, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::StatList");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, ActorTrackingSettings) == 2760, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::ActorTrackingSettings");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, AnalyticsTags) == 2800, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::AnalyticsTags");
static_assert(offsetof(UPilgrimTogglePlasticInstrumentAbility, TagChangedActions) == 2832, "Offset mismatch for UPilgrimTogglePlasticInstrumentAbility::TagChangedActions");

// /Script/PilgrimCoreRuntime.PilgrimTouchButtonBase
// Kind: Class; super: CommonUserWidget
class UPilgrimTouchButtonBase
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* PressAction; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* SwipeAction; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WidgetTransitionType; // 0x0348 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DeactivateInputActionIfDragOutsideHitbox; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivateInputActionIfCollapsed; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x034B
    std::uint8_t PressedColor[0x10]; // 0x034C (Size: 0x10, Type: StructProperty)
    std::uint8_t ReleasedColor[0x14]; // 0x035C (Size: 0x14, Type: StructProperty)
    void* Image_Icon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    float SwipeDistance; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x037C
    TArray<void*> ScreenSpaceButtonBoundaries; // 0x0380 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnPilgrimButtonTouchStart; // 0x0390 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPilgrimButtonTouch; // 0x03A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPilgrimButtonTouchEnd; // 0x03B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimTouchButtonBase, PressAction) == 824, "Offset mismatch for UPilgrimTouchButtonBase::PressAction");
static_assert(offsetof(UPilgrimTouchButtonBase, SwipeAction) == 832, "Offset mismatch for UPilgrimTouchButtonBase::SwipeAction");
static_assert(offsetof(UPilgrimTouchButtonBase, WidgetTransitionType) == 840, "Offset mismatch for UPilgrimTouchButtonBase::WidgetTransitionType");
static_assert(offsetof(UPilgrimTouchButtonBase, DeactivateInputActionIfDragOutsideHitbox) == 841, "Offset mismatch for UPilgrimTouchButtonBase::DeactivateInputActionIfDragOutsideHitbox");
static_assert(offsetof(UPilgrimTouchButtonBase, DeactivateInputActionIfCollapsed) == 842, "Offset mismatch for UPilgrimTouchButtonBase::DeactivateInputActionIfCollapsed");
static_assert(offsetof(UPilgrimTouchButtonBase, PressedColor) == 844, "Offset mismatch for UPilgrimTouchButtonBase::PressedColor");
static_assert(offsetof(UPilgrimTouchButtonBase, ReleasedColor) == 860, "Offset mismatch for UPilgrimTouchButtonBase::ReleasedColor");
static_assert(offsetof(UPilgrimTouchButtonBase, Image_Icon) == 880, "Offset mismatch for UPilgrimTouchButtonBase::Image_Icon");
static_assert(offsetof(UPilgrimTouchButtonBase, SwipeDistance) == 888, "Offset mismatch for UPilgrimTouchButtonBase::SwipeDistance");
static_assert(offsetof(UPilgrimTouchButtonBase, ScreenSpaceButtonBoundaries) == 896, "Offset mismatch for UPilgrimTouchButtonBase::ScreenSpaceButtonBoundaries");
static_assert(offsetof(UPilgrimTouchButtonBase, OnPilgrimButtonTouchStart) == 912, "Offset mismatch for UPilgrimTouchButtonBase::OnPilgrimButtonTouchStart");
static_assert(offsetof(UPilgrimTouchButtonBase, OnPilgrimButtonTouch) == 928, "Offset mismatch for UPilgrimTouchButtonBase::OnPilgrimButtonTouch");
static_assert(offsetof(UPilgrimTouchButtonBase, OnPilgrimButtonTouchEnd) == 944, "Offset mismatch for UPilgrimTouchButtonBase::OnPilgrimButtonTouchEnd");

// /Script/PilgrimCoreRuntime.PilgrimTrack
// Kind: Class; super: Actor
class UPilgrimTrack
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* TopOfTrack; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGemClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    void* BeatMarkerClass; // 0x0288 (Size: 0x8, Type: ClassProperty)
    void* SustainClass; // 0x0290 (Size: 0x8, Type: ClassProperty)
    void* TrackMeshComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* NowBarChildActor; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimTrackMaterialParameterCollection; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimTrackMaterialParameterCollectionInstance; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* TrackCaptureComponent; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* PilgrimGame; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* BeatMarkerSpline; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* TrackAndGameManagerComponent; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedNowBar; // 0x02D8 (Size: 0x8, Type: WeakObjectProperty)
    void* GemMgr; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* SustainMgr; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    void* BeatMarkerMgr; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayer; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> SmasherMap; // 0x0300 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimTrack, TopOfTrack) == 632, "Offset mismatch for UPilgrimTrack::TopOfTrack");
static_assert(offsetof(UPilgrimTrack, PilgrimGemClass) == 640, "Offset mismatch for UPilgrimTrack::PilgrimGemClass");
static_assert(offsetof(UPilgrimTrack, BeatMarkerClass) == 648, "Offset mismatch for UPilgrimTrack::BeatMarkerClass");
static_assert(offsetof(UPilgrimTrack, SustainClass) == 656, "Offset mismatch for UPilgrimTrack::SustainClass");
static_assert(offsetof(UPilgrimTrack, TrackMeshComponent) == 664, "Offset mismatch for UPilgrimTrack::TrackMeshComponent");
static_assert(offsetof(UPilgrimTrack, NowBarChildActor) == 672, "Offset mismatch for UPilgrimTrack::NowBarChildActor");
static_assert(offsetof(UPilgrimTrack, PilgrimTrackMaterialParameterCollection) == 680, "Offset mismatch for UPilgrimTrack::PilgrimTrackMaterialParameterCollection");
static_assert(offsetof(UPilgrimTrack, PilgrimTrackMaterialParameterCollectionInstance) == 688, "Offset mismatch for UPilgrimTrack::PilgrimTrackMaterialParameterCollectionInstance");
static_assert(offsetof(UPilgrimTrack, TrackCaptureComponent) == 696, "Offset mismatch for UPilgrimTrack::TrackCaptureComponent");
static_assert(offsetof(UPilgrimTrack, PilgrimGame) == 704, "Offset mismatch for UPilgrimTrack::PilgrimGame");
static_assert(offsetof(UPilgrimTrack, BeatMarkerSpline) == 712, "Offset mismatch for UPilgrimTrack::BeatMarkerSpline");
static_assert(offsetof(UPilgrimTrack, TrackAndGameManagerComponent) == 720, "Offset mismatch for UPilgrimTrack::TrackAndGameManagerComponent");
static_assert(offsetof(UPilgrimTrack, CachedNowBar) == 728, "Offset mismatch for UPilgrimTrack::CachedNowBar");
static_assert(offsetof(UPilgrimTrack, GemMgr) == 736, "Offset mismatch for UPilgrimTrack::GemMgr");
static_assert(offsetof(UPilgrimTrack, SustainMgr) == 744, "Offset mismatch for UPilgrimTrack::SustainMgr");
static_assert(offsetof(UPilgrimTrack, BeatMarkerMgr) == 752, "Offset mismatch for UPilgrimTrack::BeatMarkerMgr");
static_assert(offsetof(UPilgrimTrack, OwningPlayer) == 760, "Offset mismatch for UPilgrimTrack::OwningPlayer");
static_assert(offsetof(UPilgrimTrack, SmasherMap) == 768, "Offset mismatch for UPilgrimTrack::SmasherMap");

// /Script/PilgrimCoreRuntime.PilgrimTrackAndGameManagerComponent
// Kind: Class; super: ActorComponent
class UPilgrimTrackAndGameManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnRenderTargetSetup; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TrackClassToSpawn; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TrackSceneStartingPos[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TrackScale[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::int32_t NumPooledGemsPerTrack; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPooledSustainsPerTrack; // 0x010C (Size: 0x4, Type: IntProperty)
    std::int32_t NumPooledBeatMarkersPerTrack; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t MinimumTrackCountForItemPools; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::uint8_t bFillTrackItemPoolsOnBeginPlay; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestroyItemPoolsOnEndPlay; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShrinkTrackItemPoolsAutomatically; // 0x011A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x011B
    void* TrackMaterialParameterCollection; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TrackSecondaryElementPhaseParameterName[0x4]; // 0x0128 (Size: 0x4, Type: NameProperty)
    std::uint8_t TrackScaleXParameterName[0x4]; // 0x012C (Size: 0x4, Type: NameProperty)
    std::uint8_t TrackScaleYParameterName[0x4]; // 0x0130 (Size: 0x4, Type: NameProperty)
    std::uint8_t TrackScaleZParameterName[0x4]; // 0x0134 (Size: 0x4, Type: NameProperty)
    void* CaptureComp; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Tracks; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PilgrimGames; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    void* TrackItemPoolComponent; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    void* GemActorPool; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* SustainActorPool; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* BeatMarkerActorPool; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InternalTrackAndGameData; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, OnRenderTargetSetup) == 192, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::OnRenderTargetSetup");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackClassToSpawn) == 208, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackClassToSpawn");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackSceneStartingPos) == 216, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackSceneStartingPos");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackScale) == 240, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackScale");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, NumPooledGemsPerTrack) == 264, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::NumPooledGemsPerTrack");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, NumPooledSustainsPerTrack) == 268, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::NumPooledSustainsPerTrack");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, NumPooledBeatMarkersPerTrack) == 272, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::NumPooledBeatMarkersPerTrack");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, MinimumTrackCountForItemPools) == 276, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::MinimumTrackCountForItemPools");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, bFillTrackItemPoolsOnBeginPlay) == 280, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::bFillTrackItemPoolsOnBeginPlay");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, bDestroyItemPoolsOnEndPlay) == 281, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::bDestroyItemPoolsOnEndPlay");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, bShrinkTrackItemPoolsAutomatically) == 282, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::bShrinkTrackItemPoolsAutomatically");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackMaterialParameterCollection) == 288, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackMaterialParameterCollection");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackSecondaryElementPhaseParameterName) == 296, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackSecondaryElementPhaseParameterName");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackScaleXParameterName) == 300, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackScaleXParameterName");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackScaleYParameterName) == 304, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackScaleYParameterName");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackScaleZParameterName) == 308, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackScaleZParameterName");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, CaptureComp) == 312, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::CaptureComp");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, Tracks) == 320, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::Tracks");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, PilgrimGames) == 336, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::PilgrimGames");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, TrackItemPoolComponent) == 352, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::TrackItemPoolComponent");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, GemActorPool) == 360, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::GemActorPool");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, SustainActorPool) == 368, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::SustainActorPool");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, BeatMarkerActorPool) == 376, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::BeatMarkerActorPool");
static_assert(offsetof(UPilgrimTrackAndGameManagerComponent, InternalTrackAndGameData) == 384, "Offset mismatch for UPilgrimTrackAndGameManagerComponent::InternalTrackAndGameData");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent
// Kind: Class; super: SceneCaptureComponent2D
class UPilgrimTrackCaptureComponent
{
public:
    std::uint8_t Pad_0000[0xC30]; // 0x0000
    void* LayoutDefinitions; // 0x0C30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ViewportOrigin[0x1]; // 0x0C38 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimTrackCaptureComponent, LayoutDefinitions) == 3120, "Offset mismatch for UPilgrimTrackCaptureComponent::LayoutDefinitions");
static_assert(offsetof(UPilgrimTrackCaptureComponent, ViewportOrigin) == 3128, "Offset mismatch for UPilgrimTrackCaptureComponent::ViewportOrigin");

// /Script/PilgrimCoreRuntime.PilgrimTrackCaptureLayoutDefinitions
// Kind: Class; super: DataAsset
class UPilgrimTrackCaptureLayoutDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUseCropAspectRatio; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> Definitions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimTrackCaptureLayoutDefinitions, bUseCropAspectRatio) == 40, "Offset mismatch for UPilgrimTrackCaptureLayoutDefinitions::bUseCropAspectRatio");
static_assert(offsetof(UPilgrimTrackCaptureLayoutDefinitions, Definitions) == 48, "Offset mismatch for UPilgrimTrackCaptureLayoutDefinitions::Definitions");

// /Script/PilgrimCoreRuntime.PilgrimTrackItem
// Kind: Class; super: Actor
class UPilgrimTrackItem
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ItemInfo[0x50]; // 0x0270 (Size: 0x50, Type: StructProperty)
    void* ParentTrack; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* ParentGame; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* SplinePath; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasPassedNowBar; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02D9
    float DistanceFromNowBar; // 0x02DC (Size: 0x4, Type: FloatProperty)
    float LastFrameDistanceFromNowBar; // 0x02E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimTrackItem, ItemInfo) == 624, "Offset mismatch for UPilgrimTrackItem::ItemInfo");
static_assert(offsetof(UPilgrimTrackItem, ParentTrack) == 704, "Offset mismatch for UPilgrimTrackItem::ParentTrack");
static_assert(offsetof(UPilgrimTrackItem, ParentGame) == 712, "Offset mismatch for UPilgrimTrackItem::ParentGame");
static_assert(offsetof(UPilgrimTrackItem, SplinePath) == 720, "Offset mismatch for UPilgrimTrackItem::SplinePath");
static_assert(offsetof(UPilgrimTrackItem, bHasPassedNowBar) == 728, "Offset mismatch for UPilgrimTrackItem::bHasPassedNowBar");
static_assert(offsetof(UPilgrimTrackItem, DistanceFromNowBar) == 732, "Offset mismatch for UPilgrimTrackItem::DistanceFromNowBar");
static_assert(offsetof(UPilgrimTrackItem, LastFrameDistanceFromNowBar) == 736, "Offset mismatch for UPilgrimTrackItem::LastFrameDistanceFromNowBar");

// /Script/PilgrimCoreRuntime.PilgrimTrackItemMgr
// Kind: Class; super: ActorComponent
class UPilgrimTrackItemMgr
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CheckedItemBaseClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Track; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* ItemPool; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PilgrimGame; // 0x00D8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ActiveItems; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ActiveItemsMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPilgrimTrackItemMgr, CheckedItemBaseClass) == 192, "Offset mismatch for UPilgrimTrackItemMgr::CheckedItemBaseClass");
static_assert(offsetof(UPilgrimTrackItemMgr, Track) == 200, "Offset mismatch for UPilgrimTrackItemMgr::Track");
static_assert(offsetof(UPilgrimTrackItemMgr, ItemPool) == 208, "Offset mismatch for UPilgrimTrackItemMgr::ItemPool");
static_assert(offsetof(UPilgrimTrackItemMgr, PilgrimGame) == 216, "Offset mismatch for UPilgrimTrackItemMgr::PilgrimGame");
static_assert(offsetof(UPilgrimTrackItemMgr, ActiveItems) == 224, "Offset mismatch for UPilgrimTrackItemMgr::ActiveItems");
static_assert(offsetof(UPilgrimTrackItemMgr, ActiveItemsMap) == 240, "Offset mismatch for UPilgrimTrackItemMgr::ActiveItemsMap");

// /Script/PilgrimCoreRuntime.PilgrimTrackSelectionComponent
// Kind: Class; super: PlayerStateComponent
class UPilgrimTrackSelectionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SelectedTrack; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimTrackSelectionComponent, SelectedTrack) == 192, "Offset mismatch for UPilgrimTrackSelectionComponent::SelectedTrack");

// /Script/PilgrimCoreRuntime.PilgrimTrackSustain
// Kind: Class; super: PilgrimTrackItem
class UPilgrimTrackSustain
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    float InputKeyStartOfSustain; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float InputKeyEndOfSustain; // 0x02EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsCurrentlyPressed; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02F1
    void* ParentSmasher; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CreatedSplineMeshes; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    void* StartCapSplineMesh; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* EndCapSplineMesh; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumTrackSegments; // 0x0320 (Size: 0x4, Type: IntProperty)
    float SplineIndexStart; // 0x0324 (Size: 0x4, Type: FloatProperty)
    float SplineIndexEnd; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float SustainUVStart; // 0x032C (Size: 0x4, Type: FloatProperty)
    float SustainUVEnd; // 0x0330 (Size: 0x4, Type: FloatProperty)
    float SustainWidthScale; // 0x0334 (Size: 0x4, Type: FloatProperty)
    float SustainBodyStartPosPaddingMs; // 0x0338 (Size: 0x4, Type: FloatProperty)
    float SustainBodyEndPosPaddingMs; // 0x033C (Size: 0x4, Type: FloatProperty)
    float SustainCapDurationMs; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCollapseAtNowBarEnabled; // 0x0344 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0345
    float FullSustainUnclampedLength; // 0x0348 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimTrackSustain, InputKeyStartOfSustain) == 744, "Offset mismatch for UPilgrimTrackSustain::InputKeyStartOfSustain");
static_assert(offsetof(UPilgrimTrackSustain, InputKeyEndOfSustain) == 748, "Offset mismatch for UPilgrimTrackSustain::InputKeyEndOfSustain");
static_assert(offsetof(UPilgrimTrackSustain, bIsCurrentlyPressed) == 752, "Offset mismatch for UPilgrimTrackSustain::bIsCurrentlyPressed");
static_assert(offsetof(UPilgrimTrackSustain, ParentSmasher) == 760, "Offset mismatch for UPilgrimTrackSustain::ParentSmasher");
static_assert(offsetof(UPilgrimTrackSustain, CreatedSplineMeshes) == 768, "Offset mismatch for UPilgrimTrackSustain::CreatedSplineMeshes");
static_assert(offsetof(UPilgrimTrackSustain, StartCapSplineMesh) == 784, "Offset mismatch for UPilgrimTrackSustain::StartCapSplineMesh");
static_assert(offsetof(UPilgrimTrackSustain, EndCapSplineMesh) == 792, "Offset mismatch for UPilgrimTrackSustain::EndCapSplineMesh");
static_assert(offsetof(UPilgrimTrackSustain, NumTrackSegments) == 800, "Offset mismatch for UPilgrimTrackSustain::NumTrackSegments");
static_assert(offsetof(UPilgrimTrackSustain, SplineIndexStart) == 804, "Offset mismatch for UPilgrimTrackSustain::SplineIndexStart");
static_assert(offsetof(UPilgrimTrackSustain, SplineIndexEnd) == 808, "Offset mismatch for UPilgrimTrackSustain::SplineIndexEnd");
static_assert(offsetof(UPilgrimTrackSustain, SustainUVStart) == 812, "Offset mismatch for UPilgrimTrackSustain::SustainUVStart");
static_assert(offsetof(UPilgrimTrackSustain, SustainUVEnd) == 816, "Offset mismatch for UPilgrimTrackSustain::SustainUVEnd");
static_assert(offsetof(UPilgrimTrackSustain, SustainWidthScale) == 820, "Offset mismatch for UPilgrimTrackSustain::SustainWidthScale");
static_assert(offsetof(UPilgrimTrackSustain, SustainBodyStartPosPaddingMs) == 824, "Offset mismatch for UPilgrimTrackSustain::SustainBodyStartPosPaddingMs");
static_assert(offsetof(UPilgrimTrackSustain, SustainBodyEndPosPaddingMs) == 828, "Offset mismatch for UPilgrimTrackSustain::SustainBodyEndPosPaddingMs");
static_assert(offsetof(UPilgrimTrackSustain, SustainCapDurationMs) == 832, "Offset mismatch for UPilgrimTrackSustain::SustainCapDurationMs");
static_assert(offsetof(UPilgrimTrackSustain, bCollapseAtNowBarEnabled) == 836, "Offset mismatch for UPilgrimTrackSustain::bCollapseAtNowBarEnabled");
static_assert(offsetof(UPilgrimTrackSustain, FullSustainUnclampedLength) == 840, "Offset mismatch for UPilgrimTrackSustain::FullSustainUnclampedLength");

// /Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction
// Kind: Class; super: BlueprintAsyncActionBase
class UPilgrimWaitForEventRouterAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnEventRouterAvailable; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPilgrimWaitForEventRouterAction, OnEventRouterAvailable) == 48, "Offset mismatch for UPilgrimWaitForEventRouterAction::OnEventRouterAvailable");

// /Script/PilgrimCoreRuntime.ServerPilgrimGame
// Kind: Class; super: Object
class UServerPilgrimGame
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameEvaluator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* ScoringModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SongData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SongBeingPlayed; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> OwningPlayerState; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    void* PilgrimGameConfig; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UServerPilgrimGame, GameEvaluator) == 40, "Offset mismatch for UServerPilgrimGame::GameEvaluator");
static_assert(offsetof(UServerPilgrimGame, ScoringModel) == 48, "Offset mismatch for UServerPilgrimGame::ScoringModel");
static_assert(offsetof(UServerPilgrimGame, SongData) == 56, "Offset mismatch for UServerPilgrimGame::SongData");
static_assert(offsetof(UServerPilgrimGame, SongBeingPlayed) == 64, "Offset mismatch for UServerPilgrimGame::SongBeingPlayed");
static_assert(offsetof(UServerPilgrimGame, OwningPlayerState) == 72, "Offset mismatch for UServerPilgrimGame::OwningPlayerState");
static_assert(offsetof(UServerPilgrimGame, PilgrimGameConfig) == 80, "Offset mismatch for UServerPilgrimGame::PilgrimGameConfig");
