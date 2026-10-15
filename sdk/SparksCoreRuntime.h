/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksCoreRuntime.CuratedSetlistListenerDelegate
// Kind: ScriptStruct; super: none
struct FCuratedSetlistListenerDelegate
{
public:
    std::int32_t UpdateRetryCounter; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCuratedSetlistListenerDelegate, UpdateRetryCounter) == 0, "Offset mismatch for FCuratedSetlistListenerDelegate::UpdateRetryCounter");

// /Script/SparksCoreRuntime.CuratedSetlistListenerEventHandleList
// Kind: ScriptStruct; super: none
struct FCuratedSetlistListenerEventHandleList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.KismetDelegateHandle
// Kind: ScriptStruct; super: none
struct FKismetDelegateHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.MusicBattleSinglePlayerOptions
// Kind: ScriptStruct; super: none
struct FMusicBattleSinglePlayerOptions
{
public:
    std::uint8_t bOpponentFiresBack; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float OpponentGemSuccessRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicBattleSinglePlayerOptions, bOpponentFiresBack) == 0, "Offset mismatch for FMusicBattleSinglePlayerOptions::bOpponentFiresBack");
static_assert(offsetof(FMusicBattleSinglePlayerOptions, OpponentGemSuccessRate) == 4, "Offset mismatch for FMusicBattleSinglePlayerOptions::OpponentGemSuccessRate");

// /Script/SparksCoreRuntime.PilgrimBandState
// Kind: ScriptStruct; super: none
struct FPilgrimBandState
{
public:
    float BandHealth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float BandScore; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BandModifierBonus; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CurrentScoreFromOverdrive; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TotalScoreFromOverdrive; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t BandStar; // 0x0014 (Size: 0x4, Type: IntProperty)
    float NextBandStarProgress; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float BandVarietyBonus; // 0x001C (Size: 0x4, Type: FloatProperty)
    float BaseBandScore; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t BandMultiplier; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllPlayersHaveMaxStreak; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllPlayersHaveOverdriveReady; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllPlayersHaveOverdriveActive; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyPlayersHaveOverdriveActive; // 0x002B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimBandState, BandHealth) == 0, "Offset mismatch for FPilgrimBandState::BandHealth");
static_assert(offsetof(FPilgrimBandState, BandScore) == 4, "Offset mismatch for FPilgrimBandState::BandScore");
static_assert(offsetof(FPilgrimBandState, BandModifierBonus) == 8, "Offset mismatch for FPilgrimBandState::BandModifierBonus");
static_assert(offsetof(FPilgrimBandState, CurrentScoreFromOverdrive) == 12, "Offset mismatch for FPilgrimBandState::CurrentScoreFromOverdrive");
static_assert(offsetof(FPilgrimBandState, TotalScoreFromOverdrive) == 16, "Offset mismatch for FPilgrimBandState::TotalScoreFromOverdrive");
static_assert(offsetof(FPilgrimBandState, BandStar) == 20, "Offset mismatch for FPilgrimBandState::BandStar");
static_assert(offsetof(FPilgrimBandState, NextBandStarProgress) == 24, "Offset mismatch for FPilgrimBandState::NextBandStarProgress");
static_assert(offsetof(FPilgrimBandState, BandVarietyBonus) == 28, "Offset mismatch for FPilgrimBandState::BandVarietyBonus");
static_assert(offsetof(FPilgrimBandState, BaseBandScore) == 32, "Offset mismatch for FPilgrimBandState::BaseBandScore");
static_assert(offsetof(FPilgrimBandState, BandMultiplier) == 36, "Offset mismatch for FPilgrimBandState::BandMultiplier");
static_assert(offsetof(FPilgrimBandState, bAllPlayersHaveMaxStreak) == 40, "Offset mismatch for FPilgrimBandState::bAllPlayersHaveMaxStreak");
static_assert(offsetof(FPilgrimBandState, bAllPlayersHaveOverdriveReady) == 41, "Offset mismatch for FPilgrimBandState::bAllPlayersHaveOverdriveReady");
static_assert(offsetof(FPilgrimBandState, bAllPlayersHaveOverdriveActive) == 42, "Offset mismatch for FPilgrimBandState::bAllPlayersHaveOverdriveActive");
static_assert(offsetof(FPilgrimBandState, bAnyPlayersHaveOverdriveActive) == 43, "Offset mismatch for FPilgrimBandState::bAnyPlayersHaveOverdriveActive");

// /Script/SparksCoreRuntime.PilgrimGameBandProgressDelta
// Kind: ScriptStruct; super: none
struct FPilgrimGameBandProgressDelta
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.PilgrimGameInProgressOverdrive
// Kind: ScriptStruct; super: none
struct FPilgrimGameInProgressOverdrive
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.PilgrimGameInProgressSustain
// Kind: ScriptStruct; super: none
struct FPilgrimGameInProgressSustain
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.PilgrimGamePlayerProgressDelta
// Kind: ScriptStruct; super: none
struct FPilgrimGamePlayerProgressDelta
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.PilgrimGameProgress
// Kind: ScriptStruct; super: none
struct FPilgrimGameProgress
{
public:
    std::int32_t NumHits; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumMisses; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumStreakBreakingMisses; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPasses; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasFullCombo; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPerfectCombo; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    std::int32_t CurrentTick; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t NoteStreak; // 0x0018 (Size: 0x4, Type: IntProperty)
    float CurrentScore; // 0x001C (Size: 0x4, Type: FloatProperty)
    float RawCurrentScore; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float CurrentModifierBonus; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentStar; // 0x0028 (Size: 0x4, Type: IntProperty)
    float NextStarProgress; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t StreakScoreMultiplier; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t NotesPastLastMultiplier; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t NotesToNextMultiplier; // 0x0038 (Size: 0x4, Type: IntProperty)
    float CurrentHealth; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsOverdriveActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float CurrentOverdrive; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentOverdriveSectionNum; // 0x0048 (Size: 0x4, Type: IntProperty)
    float CurrentModulation; // 0x004C (Size: 0x4, Type: FloatProperty)
    float BandScoreContribution; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float BandModifierBonusContribution; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OverdriveScoringState; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0059
    float MaxScore; // 0x005C (Size: 0x4, Type: FloatProperty)
    float RawMaxScore; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxStreakLength; // 0x0064 (Size: 0x4, Type: IntProperty)
    float AverageStreakMultiplierPerHitOrPass; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAtMaxStreak; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    float CurrentSustainScore; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float CurrentChordScore; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float OverdriveTime; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPerfects; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0080
    float CurrentSectionCompletionPercentage; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float CurrentSectionValue; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x008C
    TArray<void*> SectionsCompletedByTier; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimGameProgress, NumHits) == 0, "Offset mismatch for FPilgrimGameProgress::NumHits");
static_assert(offsetof(FPilgrimGameProgress, NumMisses) == 4, "Offset mismatch for FPilgrimGameProgress::NumMisses");
static_assert(offsetof(FPilgrimGameProgress, NumStreakBreakingMisses) == 8, "Offset mismatch for FPilgrimGameProgress::NumStreakBreakingMisses");
static_assert(offsetof(FPilgrimGameProgress, NumPasses) == 12, "Offset mismatch for FPilgrimGameProgress::NumPasses");
static_assert(offsetof(FPilgrimGameProgress, bHasFullCombo) == 16, "Offset mismatch for FPilgrimGameProgress::bHasFullCombo");
static_assert(offsetof(FPilgrimGameProgress, bHasPerfectCombo) == 17, "Offset mismatch for FPilgrimGameProgress::bHasPerfectCombo");
static_assert(offsetof(FPilgrimGameProgress, CurrentTick) == 20, "Offset mismatch for FPilgrimGameProgress::CurrentTick");
static_assert(offsetof(FPilgrimGameProgress, NoteStreak) == 24, "Offset mismatch for FPilgrimGameProgress::NoteStreak");
static_assert(offsetof(FPilgrimGameProgress, CurrentScore) == 28, "Offset mismatch for FPilgrimGameProgress::CurrentScore");
static_assert(offsetof(FPilgrimGameProgress, RawCurrentScore) == 32, "Offset mismatch for FPilgrimGameProgress::RawCurrentScore");
static_assert(offsetof(FPilgrimGameProgress, CurrentModifierBonus) == 36, "Offset mismatch for FPilgrimGameProgress::CurrentModifierBonus");
static_assert(offsetof(FPilgrimGameProgress, CurrentStar) == 40, "Offset mismatch for FPilgrimGameProgress::CurrentStar");
static_assert(offsetof(FPilgrimGameProgress, NextStarProgress) == 44, "Offset mismatch for FPilgrimGameProgress::NextStarProgress");
static_assert(offsetof(FPilgrimGameProgress, StreakScoreMultiplier) == 48, "Offset mismatch for FPilgrimGameProgress::StreakScoreMultiplier");
static_assert(offsetof(FPilgrimGameProgress, NotesPastLastMultiplier) == 52, "Offset mismatch for FPilgrimGameProgress::NotesPastLastMultiplier");
static_assert(offsetof(FPilgrimGameProgress, NotesToNextMultiplier) == 56, "Offset mismatch for FPilgrimGameProgress::NotesToNextMultiplier");
static_assert(offsetof(FPilgrimGameProgress, CurrentHealth) == 60, "Offset mismatch for FPilgrimGameProgress::CurrentHealth");
static_assert(offsetof(FPilgrimGameProgress, IsOverdriveActive) == 64, "Offset mismatch for FPilgrimGameProgress::IsOverdriveActive");
static_assert(offsetof(FPilgrimGameProgress, CurrentOverdrive) == 68, "Offset mismatch for FPilgrimGameProgress::CurrentOverdrive");
static_assert(offsetof(FPilgrimGameProgress, CurrentOverdriveSectionNum) == 72, "Offset mismatch for FPilgrimGameProgress::CurrentOverdriveSectionNum");
static_assert(offsetof(FPilgrimGameProgress, CurrentModulation) == 76, "Offset mismatch for FPilgrimGameProgress::CurrentModulation");
static_assert(offsetof(FPilgrimGameProgress, BandScoreContribution) == 80, "Offset mismatch for FPilgrimGameProgress::BandScoreContribution");
static_assert(offsetof(FPilgrimGameProgress, BandModifierBonusContribution) == 84, "Offset mismatch for FPilgrimGameProgress::BandModifierBonusContribution");
static_assert(offsetof(FPilgrimGameProgress, OverdriveScoringState) == 88, "Offset mismatch for FPilgrimGameProgress::OverdriveScoringState");
static_assert(offsetof(FPilgrimGameProgress, MaxScore) == 92, "Offset mismatch for FPilgrimGameProgress::MaxScore");
static_assert(offsetof(FPilgrimGameProgress, RawMaxScore) == 96, "Offset mismatch for FPilgrimGameProgress::RawMaxScore");
static_assert(offsetof(FPilgrimGameProgress, MaxStreakLength) == 100, "Offset mismatch for FPilgrimGameProgress::MaxStreakLength");
static_assert(offsetof(FPilgrimGameProgress, AverageStreakMultiplierPerHitOrPass) == 104, "Offset mismatch for FPilgrimGameProgress::AverageStreakMultiplierPerHitOrPass");
static_assert(offsetof(FPilgrimGameProgress, bIsAtMaxStreak) == 108, "Offset mismatch for FPilgrimGameProgress::bIsAtMaxStreak");
static_assert(offsetof(FPilgrimGameProgress, CurrentSustainScore) == 112, "Offset mismatch for FPilgrimGameProgress::CurrentSustainScore");
static_assert(offsetof(FPilgrimGameProgress, CurrentChordScore) == 116, "Offset mismatch for FPilgrimGameProgress::CurrentChordScore");
static_assert(offsetof(FPilgrimGameProgress, OverdriveTime) == 120, "Offset mismatch for FPilgrimGameProgress::OverdriveTime");
static_assert(offsetof(FPilgrimGameProgress, NumPerfects) == 124, "Offset mismatch for FPilgrimGameProgress::NumPerfects");
static_assert(offsetof(FPilgrimGameProgress, CurrentSectionCompletionPercentage) == 132, "Offset mismatch for FPilgrimGameProgress::CurrentSectionCompletionPercentage");
static_assert(offsetof(FPilgrimGameProgress, CurrentSectionValue) == 136, "Offset mismatch for FPilgrimGameProgress::CurrentSectionValue");
static_assert(offsetof(FPilgrimGameProgress, SectionsCompletedByTier) == 144, "Offset mismatch for FPilgrimGameProgress::SectionsCompletedByTier");

// /Script/SparksCoreRuntime.PilgrimMusicBattleData
// Kind: ScriptStruct; super: none
struct FPilgrimMusicBattleData
{
public:
    TArray<void*> MusicBattleStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LastPlayableIndexProcessed; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t LastPlayableIndexReceived; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t BandState[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimMusicBattleData, MusicBattleStates) == 0, "Offset mismatch for FPilgrimMusicBattleData::MusicBattleStates");
static_assert(offsetof(FPilgrimMusicBattleData, LastPlayableIndexProcessed) == 16, "Offset mismatch for FPilgrimMusicBattleData::LastPlayableIndexProcessed");
static_assert(offsetof(FPilgrimMusicBattleData, LastPlayableIndexReceived) == 20, "Offset mismatch for FPilgrimMusicBattleData::LastPlayableIndexReceived");
static_assert(offsetof(FPilgrimMusicBattleData, BandState) == 24, "Offset mismatch for FPilgrimMusicBattleData::BandState");

// /Script/SparksCoreRuntime.PilgrimMusicBattlePlayerState
// Kind: ScriptStruct; super: none
struct FPilgrimMusicBattlePlayerState
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Team; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TrackType; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t InstrumentTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> ScoreUpdateHistory; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LastPlayableIndexProcessed; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t LastPlayableIndexReceived; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t PilgrimGameProgress[0xA0]; // 0x0048 (Size: 0xA0, Type: StructProperty)
    std::uint8_t ServerScoringChanges[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimMusicBattlePlayerState, PlayerState) == 0, "Offset mismatch for FPilgrimMusicBattlePlayerState::PlayerState");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, Team) == 8, "Offset mismatch for FPilgrimMusicBattlePlayerState::Team");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, TrackType) == 9, "Offset mismatch for FPilgrimMusicBattlePlayerState::TrackType");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, InstrumentTags) == 16, "Offset mismatch for FPilgrimMusicBattlePlayerState::InstrumentTags");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, ScoreUpdateHistory) == 48, "Offset mismatch for FPilgrimMusicBattlePlayerState::ScoreUpdateHistory");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, LastPlayableIndexProcessed) == 64, "Offset mismatch for FPilgrimMusicBattlePlayerState::LastPlayableIndexProcessed");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, LastPlayableIndexReceived) == 68, "Offset mismatch for FPilgrimMusicBattlePlayerState::LastPlayableIndexReceived");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, PilgrimGameProgress) == 72, "Offset mismatch for FPilgrimMusicBattlePlayerState::PilgrimGameProgress");
static_assert(offsetof(FPilgrimMusicBattlePlayerState, ServerScoringChanges) == 232, "Offset mismatch for FPilgrimMusicBattlePlayerState::ServerScoringChanges");

// /Script/SparksCoreRuntime.PilgrimRewindDetails
// Kind: ScriptStruct; super: none
struct FPilgrimRewindDetails
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.PilgrimServerMultiplierEffect
// Kind: ScriptStruct; super: none
struct FPilgrimServerMultiplierEffect
{
public:
    TWeakObjectPtr<void> SourceActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float ScoreMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimServerMultiplierEffect, SourceActor) == 0, "Offset mismatch for FPilgrimServerMultiplierEffect::SourceActor");
static_assert(offsetof(FPilgrimServerMultiplierEffect, ScoreMultiplier) == 8, "Offset mismatch for FPilgrimServerMultiplierEffect::ScoreMultiplier");

// /Script/SparksCoreRuntime.PilgrimServerScoringChangeRecord
// Kind: ScriptStruct; super: none
struct FPilgrimServerScoringChangeRecord
{
public:
    TWeakObjectPtr<void> SourceActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float ScoreAdjustment; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float OverdriveAdjustment; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimServerScoringChangeRecord, SourceActor) == 0, "Offset mismatch for FPilgrimServerScoringChangeRecord::SourceActor");
static_assert(offsetof(FPilgrimServerScoringChangeRecord, ScoreAdjustment) == 8, "Offset mismatch for FPilgrimServerScoringChangeRecord::ScoreAdjustment");
static_assert(offsetof(FPilgrimServerScoringChangeRecord, OverdriveAdjustment) == 12, "Offset mismatch for FPilgrimServerScoringChangeRecord::OverdriveAdjustment");

// /Script/SparksCoreRuntime.PilgrimServerScoringChanges
// Kind: ScriptStruct; super: none
struct FPilgrimServerScoringChanges
{
public:
    float ServerAdjustedScore; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ServerAdjustedOverdrive; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CurrentMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    TArray<void*> ScoreChangeRecords; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Multipliers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPilgrimServerScoringChanges, ServerAdjustedScore) == 0, "Offset mismatch for FPilgrimServerScoringChanges::ServerAdjustedScore");
static_assert(offsetof(FPilgrimServerScoringChanges, ServerAdjustedOverdrive) == 4, "Offset mismatch for FPilgrimServerScoringChanges::ServerAdjustedOverdrive");
static_assert(offsetof(FPilgrimServerScoringChanges, CurrentMultiplier) == 8, "Offset mismatch for FPilgrimServerScoringChanges::CurrentMultiplier");
static_assert(offsetof(FPilgrimServerScoringChanges, ScoreChangeRecords) == 16, "Offset mismatch for FPilgrimServerScoringChanges::ScoreChangeRecords");
static_assert(offsetof(FPilgrimServerScoringChanges, Multipliers) == 32, "Offset mismatch for FPilgrimServerScoringChanges::Multipliers");

// /Script/SparksCoreRuntime.PilgrimSinglePlayerBattleHealth
// Kind: ScriptStruct; super: none
struct FPilgrimSinglePlayerBattleHealth
{
public:
    float MaxHp; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentHp; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimSinglePlayerBattleHealth, MaxHp) == 0, "Offset mismatch for FPilgrimSinglePlayerBattleHealth::MaxHp");
static_assert(offsetof(FPilgrimSinglePlayerBattleHealth, CurrentHp) == 4, "Offset mismatch for FPilgrimSinglePlayerBattleHealth::CurrentHp");

// /Script/SparksCoreRuntime.SongShortNameMatcher
// Kind: ScriptStruct; super: none
struct FSongShortNameMatcher
{
public:
    TArray<void*> SongShortNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MatchType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSongShortNameMatcher, SongShortNames) == 0, "Offset mismatch for FSongShortNameMatcher::SongShortNames");
static_assert(offsetof(FSongShortNameMatcher, MatchType) == 16, "Offset mismatch for FSongShortNameMatcher::MatchType");

// /Script/SparksCoreRuntime.SparksCoreAudioEvent_KeyChanged
// Kind: ScriptStruct; super: none
struct FSparksCoreAudioEvent_KeyChanged
{
public:
    std::uint8_t Key; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSparksCoreAudioEvent_KeyChanged, Key) == 0, "Offset mismatch for FSparksCoreAudioEvent_KeyChanged::Key");

// /Script/SparksCoreRuntime.SparksCoreAudioEvent_KeyModeChanged
// Kind: ScriptStruct; super: none
struct FSparksCoreAudioEvent_KeyModeChanged
{
public:
    std::uint8_t KeyMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSparksCoreAudioEvent_KeyModeChanged, KeyMode) == 0, "Offset mismatch for FSparksCoreAudioEvent_KeyModeChanged::KeyMode");

// /Script/SparksCoreRuntime.SparksCoreAudioEvent_OnBeat
// Kind: ScriptStruct; super: none
struct FSparksCoreAudioEvent_OnBeat
{
public:
    std::int32_t BeatNumber; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t BeatInBar; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksCoreAudioEvent_OnBeat, BeatNumber) == 0, "Offset mismatch for FSparksCoreAudioEvent_OnBeat::BeatNumber");
static_assert(offsetof(FSparksCoreAudioEvent_OnBeat, BeatInBar) == 4, "Offset mismatch for FSparksCoreAudioEvent_OnBeat::BeatInBar");

// /Script/SparksCoreRuntime.SparksCoreAudioEvent_OnMeasure
// Kind: ScriptStruct; super: none
struct FSparksCoreAudioEvent_OnMeasure
{
public:
    std::int32_t MeasureNumber; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksCoreAudioEvent_OnMeasure, MeasureNumber) == 0, "Offset mismatch for FSparksCoreAudioEvent_OnMeasure::MeasureNumber");

// /Script/SparksCoreRuntime.SparksCoreAudioEvent_TempoChanged
// Kind: ScriptStruct; super: none
struct FSparksCoreAudioEvent_TempoChanged
{
public:
    std::int32_t Tempo; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksCoreAudioEvent_TempoChanged, Tempo) == 0, "Offset mismatch for FSparksCoreAudioEvent_TempoChanged::Tempo");

// /Script/SparksCoreRuntime.SparksCuratedSetlistData
// Kind: ScriptStruct; super: none
struct FSparksCuratedSetlistData
{
public:
    std::uint8_t SetlistTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString SetlistKey; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t SetlistNameLocalized[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t SetlistDescLocalized[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    TArray<void*> PrefixStrings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Setlist; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StartTime[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndTime[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> SetlistImage; // 0x0068 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSparksCuratedSetlistData, SetlistTag) == 0, "Offset mismatch for FSparksCuratedSetlistData::SetlistTag");
static_assert(offsetof(FSparksCuratedSetlistData, SetlistKey) == 8, "Offset mismatch for FSparksCuratedSetlistData::SetlistKey");
static_assert(offsetof(FSparksCuratedSetlistData, SetlistNameLocalized) == 24, "Offset mismatch for FSparksCuratedSetlistData::SetlistNameLocalized");
static_assert(offsetof(FSparksCuratedSetlistData, SetlistDescLocalized) == 40, "Offset mismatch for FSparksCuratedSetlistData::SetlistDescLocalized");
static_assert(offsetof(FSparksCuratedSetlistData, PrefixStrings) == 56, "Offset mismatch for FSparksCuratedSetlistData::PrefixStrings");
static_assert(offsetof(FSparksCuratedSetlistData, Setlist) == 72, "Offset mismatch for FSparksCuratedSetlistData::Setlist");
static_assert(offsetof(FSparksCuratedSetlistData, StartTime) == 88, "Offset mismatch for FSparksCuratedSetlistData::StartTime");
static_assert(offsetof(FSparksCuratedSetlistData, EndTime) == 96, "Offset mismatch for FSparksCuratedSetlistData::EndTime");
static_assert(offsetof(FSparksCuratedSetlistData, SetlistImage) == 104, "Offset mismatch for FSparksCuratedSetlistData::SetlistImage");

// /Script/SparksCoreRuntime.SparksCuratedSetlistInfo
// Kind: ScriptStruct; super: none
struct FSparksCuratedSetlistInfo
{
public:
    FString SetlistKey; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SetlistName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t SetlistDescription[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    FString ProductMode; // 0x0030 (Size: 0x10, Type: StrProperty)
    TSoftObjectPtr<void> SetlistImage; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSparksCuratedSetlistInfo, SetlistKey) == 0, "Offset mismatch for FSparksCuratedSetlistInfo::SetlistKey");
static_assert(offsetof(FSparksCuratedSetlistInfo, SetlistName) == 16, "Offset mismatch for FSparksCuratedSetlistInfo::SetlistName");
static_assert(offsetof(FSparksCuratedSetlistInfo, SetlistDescription) == 32, "Offset mismatch for FSparksCuratedSetlistInfo::SetlistDescription");
static_assert(offsetof(FSparksCuratedSetlistInfo, ProductMode) == 48, "Offset mismatch for FSparksCuratedSetlistInfo::ProductMode");
static_assert(offsetof(FSparksCuratedSetlistInfo, SetlistImage) == 64, "Offset mismatch for FSparksCuratedSetlistInfo::SetlistImage");

// /Script/SparksCoreRuntime.SparksGameplayEventAsyncActionHelper
// Kind: ScriptStruct; super: none
struct FSparksGameplayEventAsyncActionHelper
{
public:
    TArray<void*> CancellableHandles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksGameplayEventAsyncActionHelper, CancellableHandles) == 0, "Offset mismatch for FSparksGameplayEventAsyncActionHelper::CancellableHandles");

// /Script/SparksCoreRuntime.SparksGameplayEventListenerHelper
// Kind: ScriptStruct; super: none
struct FSparksGameplayEventListenerHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.SparksWaitForGlobalEventRouter
// Kind: ScriptStruct; super: none
struct FSparksWaitForGlobalEventRouter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.TrackItemInfo
// Kind: ScriptStruct; super: none
struct FTrackItemInfo
{
public:
    std::int32_t StartTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndTick; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumScorables; // 0x0008 (Size: 0x4, Type: IntProperty)
    float Ms; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LiftNoteSustainMs; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t DurationMs; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t LiftNoteSustainDurationMs; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t DurationTicks; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t Track; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Lane; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BeatType; // 0x0022 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GemType; // 0x0023 (Size: 0x1, Type: EnumProperty)
    std::int32_t TrackItemIndex; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsOverdriveGem; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDoubleKickGem; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x002A
    std::int32_t OverdriveSectionNum; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t IsEndOfOverdriveSection; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowHitOnPress; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowHitOnRelease; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSustain; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SustainTrailType; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowRollsAndSwellsForgiveness; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0036
    std::int32_t RollsAndSwellsSectionIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSwellSection; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowGemClearIfOverdriveAvailable; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDiscoFlipSection; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAutoHopo; // 0x003F (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0040
    std::int32_t LinkedGemIndex; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTrackItemInfo, StartTick) == 0, "Offset mismatch for FTrackItemInfo::StartTick");
static_assert(offsetof(FTrackItemInfo, EndTick) == 4, "Offset mismatch for FTrackItemInfo::EndTick");
static_assert(offsetof(FTrackItemInfo, NumScorables) == 8, "Offset mismatch for FTrackItemInfo::NumScorables");
static_assert(offsetof(FTrackItemInfo, Ms) == 12, "Offset mismatch for FTrackItemInfo::Ms");
static_assert(offsetof(FTrackItemInfo, LiftNoteSustainMs) == 16, "Offset mismatch for FTrackItemInfo::LiftNoteSustainMs");
static_assert(offsetof(FTrackItemInfo, DurationMs) == 20, "Offset mismatch for FTrackItemInfo::DurationMs");
static_assert(offsetof(FTrackItemInfo, LiftNoteSustainDurationMs) == 24, "Offset mismatch for FTrackItemInfo::LiftNoteSustainDurationMs");
static_assert(offsetof(FTrackItemInfo, DurationTicks) == 28, "Offset mismatch for FTrackItemInfo::DurationTicks");
static_assert(offsetof(FTrackItemInfo, Track) == 32, "Offset mismatch for FTrackItemInfo::Track");
static_assert(offsetof(FTrackItemInfo, Lane) == 33, "Offset mismatch for FTrackItemInfo::Lane");
static_assert(offsetof(FTrackItemInfo, BeatType) == 34, "Offset mismatch for FTrackItemInfo::BeatType");
static_assert(offsetof(FTrackItemInfo, GemType) == 35, "Offset mismatch for FTrackItemInfo::GemType");
static_assert(offsetof(FTrackItemInfo, TrackItemIndex) == 36, "Offset mismatch for FTrackItemInfo::TrackItemIndex");
static_assert(offsetof(FTrackItemInfo, IsOverdriveGem) == 40, "Offset mismatch for FTrackItemInfo::IsOverdriveGem");
static_assert(offsetof(FTrackItemInfo, bIsDoubleKickGem) == 41, "Offset mismatch for FTrackItemInfo::bIsDoubleKickGem");
static_assert(offsetof(FTrackItemInfo, OverdriveSectionNum) == 44, "Offset mismatch for FTrackItemInfo::OverdriveSectionNum");
static_assert(offsetof(FTrackItemInfo, IsEndOfOverdriveSection) == 48, "Offset mismatch for FTrackItemInfo::IsEndOfOverdriveSection");
static_assert(offsetof(FTrackItemInfo, bAllowHitOnPress) == 49, "Offset mismatch for FTrackItemInfo::bAllowHitOnPress");
static_assert(offsetof(FTrackItemInfo, bAllowHitOnRelease) == 50, "Offset mismatch for FTrackItemInfo::bAllowHitOnRelease");
static_assert(offsetof(FTrackItemInfo, bIsSustain) == 51, "Offset mismatch for FTrackItemInfo::bIsSustain");
static_assert(offsetof(FTrackItemInfo, SustainTrailType) == 52, "Offset mismatch for FTrackItemInfo::SustainTrailType");
static_assert(offsetof(FTrackItemInfo, bAllowRollsAndSwellsForgiveness) == 53, "Offset mismatch for FTrackItemInfo::bAllowRollsAndSwellsForgiveness");
static_assert(offsetof(FTrackItemInfo, RollsAndSwellsSectionIndex) == 56, "Offset mismatch for FTrackItemInfo::RollsAndSwellsSectionIndex");
static_assert(offsetof(FTrackItemInfo, bIsSwellSection) == 60, "Offset mismatch for FTrackItemInfo::bIsSwellSection");
static_assert(offsetof(FTrackItemInfo, bAllowGemClearIfOverdriveAvailable) == 61, "Offset mismatch for FTrackItemInfo::bAllowGemClearIfOverdriveAvailable");
static_assert(offsetof(FTrackItemInfo, bIsDiscoFlipSection) == 62, "Offset mismatch for FTrackItemInfo::bIsDiscoFlipSection");
static_assert(offsetof(FTrackItemInfo, bIsAutoHopo) == 63, "Offset mismatch for FTrackItemInfo::bIsAutoHopo");
static_assert(offsetof(FTrackItemInfo, LinkedGemIndex) == 68, "Offset mismatch for FTrackItemInfo::LinkedGemIndex");

// /Script/SparksCoreRuntime.TrackSpawnParams
// Kind: ScriptStruct; super: none
struct FTrackSpawnParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.ActorComponent_LipSyncAssetManager
// Kind: Class; super: ActorComponent
class UActorComponent_LipSyncAssetManager
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

static_assert(offsetof(UActorComponent_LipSyncAssetManager, PrimaryComponentTick) == 56, "Offset mismatch for UActorComponent_LipSyncAssetManager::PrimaryComponentTick");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, ComponentTags) == 104, "Offset mismatch for UActorComponent_LipSyncAssetManager::ComponentTags");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, AssetUserData) == 120, "Offset mismatch for UActorComponent_LipSyncAssetManager::AssetUserData");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, UCSSerializationIndex) == 144, "Offset mismatch for UActorComponent_LipSyncAssetManager::UCSSerializationIndex");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, bNetAddressable) == 152, "Offset mismatch for UActorComponent_LipSyncAssetManager::bNetAddressable");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, bAutoActivate) == 154, "Offset mismatch for UActorComponent_LipSyncAssetManager::bAutoActivate");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, bIsEditorOnly) == 155, "Offset mismatch for UActorComponent_LipSyncAssetManager::bIsEditorOnly");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, CreationMethod) == 185, "Offset mismatch for UActorComponent_LipSyncAssetManager::CreationMethod");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, OnComponentActivated) == 186, "Offset mismatch for UActorComponent_LipSyncAssetManager::OnComponentActivated");
static_assert(offsetof(UActorComponent_LipSyncAssetManager, OnComponentDeactivated) == 187, "Offset mismatch for UActorComponent_LipSyncAssetManager::OnComponentDeactivated");

// /Script/SparksCoreRuntime.FMEditCustomSetlistComponent
// Kind: Class; super: ControllerComponent
class UFMEditCustomSetlistComponent
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

static_assert(offsetof(UFMEditCustomSetlistComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFMEditCustomSetlistComponent::PrimaryComponentTick");
static_assert(offsetof(UFMEditCustomSetlistComponent, ComponentTags) == 104, "Offset mismatch for UFMEditCustomSetlistComponent::ComponentTags");
static_assert(offsetof(UFMEditCustomSetlistComponent, AssetUserData) == 120, "Offset mismatch for UFMEditCustomSetlistComponent::AssetUserData");
static_assert(offsetof(UFMEditCustomSetlistComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFMEditCustomSetlistComponent::UCSSerializationIndex");
static_assert(offsetof(UFMEditCustomSetlistComponent, bNetAddressable) == 152, "Offset mismatch for UFMEditCustomSetlistComponent::bNetAddressable");
static_assert(offsetof(UFMEditCustomSetlistComponent, bAutoActivate) == 154, "Offset mismatch for UFMEditCustomSetlistComponent::bAutoActivate");
static_assert(offsetof(UFMEditCustomSetlistComponent, bIsEditorOnly) == 155, "Offset mismatch for UFMEditCustomSetlistComponent::bIsEditorOnly");
static_assert(offsetof(UFMEditCustomSetlistComponent, CreationMethod) == 185, "Offset mismatch for UFMEditCustomSetlistComponent::CreationMethod");
static_assert(offsetof(UFMEditCustomSetlistComponent, OnComponentActivated) == 186, "Offset mismatch for UFMEditCustomSetlistComponent::OnComponentActivated");
static_assert(offsetof(UFMEditCustomSetlistComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFMEditCustomSetlistComponent::OnComponentDeactivated");

// /Script/SparksCoreRuntime.PilgrimTrackTypeUtils
// Kind: Class; super: Object
class UPilgrimTrackTypeUtils
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.SparksCalendarEventUtils
// Kind: Class; super: GameInstanceSubsystem
class USparksCalendarEventUtils
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bCacheRemoves; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    TMap<void*, void*> SetlistListeners; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SetlistListenersToRemove; // 0x0078 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksCalendarEventUtils, bCacheRemoves) == 96, "Offset mismatch for USparksCalendarEventUtils::bCacheRemoves");
static_assert(offsetof(USparksCalendarEventUtils, SetlistListeners) == 104, "Offset mismatch for USparksCalendarEventUtils::SetlistListeners");
static_assert(offsetof(USparksCalendarEventUtils, SetlistListenersToRemove) == 120, "Offset mismatch for USparksCalendarEventUtils::SetlistListenersToRemove");

// /Script/SparksCoreRuntime.SparksCore_BPFL
// Kind: Class; super: BlueprintFunctionLibrary
class USparksCore_BPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.SparksCuratedSetlistCollection
// Kind: Class; super: FortGameFeatureActionMultipleAsset
class USparksCuratedSetlistCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommonPrefix; // 0x0028 (Size: 0x10, Type: StrProperty)
    void* StringTable; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Setlists; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksCuratedSetlistCollection, CommonPrefix) == 40, "Offset mismatch for USparksCuratedSetlistCollection::CommonPrefix");
static_assert(offsetof(USparksCuratedSetlistCollection, StringTable) == 56, "Offset mismatch for USparksCuratedSetlistCollection::StringTable");
static_assert(offsetof(USparksCuratedSetlistCollection, Setlists) == 64, "Offset mismatch for USparksCuratedSetlistCollection::Setlists");

// /Script/SparksCoreRuntime.SparksDrumEventsInterface
// Kind: Class; super: Interface
class USparksDrumEventsInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.SparksGameUserSettings
// Kind: Class; super: Object
class USparksGameUserSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreRuntime.SparksGameplayEventAsyncActionBlueprintHelper
// Kind: Class; super: Object
class USparksGameplayEventAsyncActionBlueprintHelper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ListenerHelper[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksGameplayEventAsyncActionBlueprintHelper, ListenerHelper) == 40, "Offset mismatch for USparksGameplayEventAsyncActionBlueprintHelper::ListenerHelper");
