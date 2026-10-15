/**
 * decamp dumper generated SDK
 * Package: /Script/SparksPermanentQuestsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveFilter_BreakStreak
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FBattleStageObjectiveFilter_BreakStreak
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredVictimPreBreakMultiplier[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBattleStageObjectiveFilter_BreakStreak, RequiredVictimPreBreakMultiplier) == 448, "Offset mismatch for FBattleStageObjectiveFilter_BreakStreak::RequiredVictimPreBreakMultiplier");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveFilter_RoundComplete
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FBattleStageObjectiveFilter_RoundComplete
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredRoundNum[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredPlayerPosition[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBattleStageObjectiveFilter_RoundComplete, RequiredRoundNum) == 448, "Offset mismatch for FBattleStageObjectiveFilter_RoundComplete::RequiredRoundNum");
static_assert(offsetof(FBattleStageObjectiveFilter_RoundComplete, RequiredPlayerPosition) == 464, "Offset mismatch for FBattleStageObjectiveFilter_RoundComplete::RequiredPlayerPosition");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveFilter_RoundStart
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FBattleStageObjectiveFilter_RoundStart
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredRoundNum[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBattleStageObjectiveFilter_RoundStart, RequiredRoundNum) == 448, "Offset mismatch for FBattleStageObjectiveFilter_RoundStart::RequiredRoundNum");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveFilter_SurviveRound
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FBattleStageObjectiveFilter_SurviveRound
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredRoundNumSurvived[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBattleStageObjectiveFilter_SurviveRound, RequiredRoundNumSurvived) == 448, "Offset mismatch for FBattleStageObjectiveFilter_SurviveRound::RequiredRoundNumSurvived");

// /Script/SparksPermanentQuestsRuntime.BattleStageVerbMessage_BreakStreak
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FBattleStageVerbMessage_BreakStreak
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::int32_t VictimPreBreakMultiplier; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t VictimWasAtMaxMultiplier; // 0x0134 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBattleStageVerbMessage_BreakStreak, VictimPreBreakMultiplier) == 304, "Offset mismatch for FBattleStageVerbMessage_BreakStreak::VictimPreBreakMultiplier");
static_assert(offsetof(FBattleStageVerbMessage_BreakStreak, VictimWasAtMaxMultiplier) == 308, "Offset mismatch for FBattleStageVerbMessage_BreakStreak::VictimWasAtMaxMultiplier");

// /Script/SparksPermanentQuestsRuntime.BattleStageVerbMessage_RoundComplete
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FBattleStageVerbMessage_RoundComplete
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::int32_t RoundNum; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerPosition; // 0x0134 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBattleStageVerbMessage_RoundComplete, RoundNum) == 304, "Offset mismatch for FBattleStageVerbMessage_RoundComplete::RoundNum");
static_assert(offsetof(FBattleStageVerbMessage_RoundComplete, PlayerPosition) == 308, "Offset mismatch for FBattleStageVerbMessage_RoundComplete::PlayerPosition");

// /Script/SparksPermanentQuestsRuntime.BattleStageVerbMessage_RoundStart
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FBattleStageVerbMessage_RoundStart
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::int32_t RoundNum; // 0x0130 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBattleStageVerbMessage_RoundStart, RoundNum) == 304, "Offset mismatch for FBattleStageVerbMessage_RoundStart::RoundNum");

// /Script/SparksPermanentQuestsRuntime.BattleStageVerbMessage_SurviveRound
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FBattleStageVerbMessage_SurviveRound
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::int32_t SurvivedRoundNum; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPrivateMatch; // 0x0134 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBattleStageVerbMessage_SurviveRound, SurvivedRoundNum) == 304, "Offset mismatch for FBattleStageVerbMessage_SurviveRound::SurvivedRoundNum");
static_assert(offsetof(FBattleStageVerbMessage_SurviveRound, bIsPrivateMatch) == 308, "Offset mismatch for FBattleStageVerbMessage_SurviveRound::bIsPrivateMatch");

// /Script/SparksPermanentQuestsRuntime.JamVerbFilter_Jam
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJamVerbFilter_Jam
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t bRequireFullBand; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    // 0x00A0 BoolProperty bUseLoopCount (shared storage)
    // 0x00A0 BoolProperty bUsePlayerCount (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x00A1
    std::uint8_t LoopCount[0x10]; // 0x00A4 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerCount[0x10]; // 0x00B4 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseLoopType; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoopType; // 0x00C5 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamVerbFilter_Jam, bRequireFullBand) == 160, "Offset mismatch for FJamVerbFilter_Jam::bRequireFullBand");
static_assert(offsetof(FJamVerbFilter_Jam, LoopCount) == 164, "Offset mismatch for FJamVerbFilter_Jam::LoopCount");
static_assert(offsetof(FJamVerbFilter_Jam, PlayerCount) == 180, "Offset mismatch for FJamVerbFilter_Jam::PlayerCount");
static_assert(offsetof(FJamVerbFilter_Jam, bUseLoopType) == 196, "Offset mismatch for FJamVerbFilter_Jam::bUseLoopType");
static_assert(offsetof(FJamVerbFilter_Jam, LoopType) == 197, "Offset mismatch for FJamVerbFilter_Jam::LoopType");

// /Script/SparksPermanentQuestsRuntime.JamVerbMessage_Jam
// Kind: ScriptStruct; super: VerbMessage
struct FJamVerbMessage_Jam
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsFullBand; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t LoopCount; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t PlayerCount; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t LoopType; // 0x0084 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamVerbMessage_Jam, bIsFullBand) == 120, "Offset mismatch for FJamVerbMessage_Jam::bIsFullBand");
static_assert(offsetof(FJamVerbMessage_Jam, LoopCount) == 124, "Offset mismatch for FJamVerbMessage_Jam::LoopCount");
static_assert(offsetof(FJamVerbMessage_Jam, PlayerCount) == 128, "Offset mismatch for FJamVerbMessage_Jam::PlayerCount");
static_assert(offsetof(FJamVerbMessage_Jam, LoopType) == 132, "Offset mismatch for FJamVerbMessage_Jam::LoopType");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilterBase
// Kind: ScriptStruct; super: ObjectiveFilter
struct FPilgrimObjectiveFilterBase
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SongId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t InstrumentId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortName[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t SongSIDMatcher[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequiredBandMembers[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDifficulty; // 0x01B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilterBase, SongId) == 160, "Offset mismatch for FPilgrimObjectiveFilterBase::SongId");
static_assert(offsetof(FPilgrimObjectiveFilterBase, InstrumentId) == 232, "Offset mismatch for FPilgrimObjectiveFilterBase::InstrumentId");
static_assert(offsetof(FPilgrimObjectiveFilterBase, BandInstrumentIds) == 304, "Offset mismatch for FPilgrimObjectiveFilterBase::BandInstrumentIds");
static_assert(offsetof(FPilgrimObjectiveFilterBase, SongShortName) == 376, "Offset mismatch for FPilgrimObjectiveFilterBase::SongShortName");
static_assert(offsetof(FPilgrimObjectiveFilterBase, SongSIDMatcher) == 400, "Offset mismatch for FPilgrimObjectiveFilterBase::SongSIDMatcher");
static_assert(offsetof(FPilgrimObjectiveFilterBase, RequiredBandMembers) == 424, "Offset mismatch for FPilgrimObjectiveFilterBase::RequiredBandMembers");
static_assert(offsetof(FPilgrimObjectiveFilterBase, RequiredDifficulty) == 440, "Offset mismatch for FPilgrimObjectiveFilterBase::RequiredDifficulty");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_AccumulateStars
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_AccumulateStars
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t VerbType; // 0x01C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StarType; // 0x01C1 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_AccumulateStars, VerbType) == 448, "Offset mismatch for FPilgrimObjectiveFilter_AccumulateStars::VerbType");
static_assert(offsetof(FPilgrimObjectiveFilter_AccumulateStars, StarType) == 449, "Offset mismatch for FPilgrimObjectiveFilter_AccumulateStars::StarType");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_Note
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_Note
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t DidHit; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidPass; // 0x01C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidMiss; // 0x01C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsChord; // 0x01C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPerfect; // 0x01C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01C5
    std::uint8_t RequiredStreak[0x10]; // 0x01C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredMultiplier[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t IncrementType; // 0x01E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01E9
    std::int32_t IncrementValue; // 0x01EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_Note, DidHit) == 448, "Offset mismatch for FPilgrimObjectiveFilter_Note::DidHit");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, DidPass) == 449, "Offset mismatch for FPilgrimObjectiveFilter_Note::DidPass");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, DidMiss) == 450, "Offset mismatch for FPilgrimObjectiveFilter_Note::DidMiss");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, IsChord) == 451, "Offset mismatch for FPilgrimObjectiveFilter_Note::IsChord");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, IsPerfect) == 452, "Offset mismatch for FPilgrimObjectiveFilter_Note::IsPerfect");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, RequiredStreak) == 456, "Offset mismatch for FPilgrimObjectiveFilter_Note::RequiredStreak");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, RequiredMultiplier) == 472, "Offset mismatch for FPilgrimObjectiveFilter_Note::RequiredMultiplier");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, IncrementType) == 488, "Offset mismatch for FPilgrimObjectiveFilter_Note::IncrementType");
static_assert(offsetof(FPilgrimObjectiveFilter_Note, IncrementValue) == 492, "Offset mismatch for FPilgrimObjectiveFilter_Note::IncrementValue");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_OverdriveComplete
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_OverdriveComplete
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SongId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t InstrumentId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortName[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t SongSIDMatcher[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequiredBandMembers[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDifficulty; // 0x01B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, SongId) == 160, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::SongId");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, InstrumentId) == 232, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::InstrumentId");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, BandInstrumentIds) == 304, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::BandInstrumentIds");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, SongShortName) == 376, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::SongShortName");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, SongSIDMatcher) == 400, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::SongSIDMatcher");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, RequiredBandMembers) == 424, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::RequiredBandMembers");
static_assert(offsetof(FPilgrimObjectiveFilter_OverdriveComplete, RequiredDifficulty) == 440, "Offset mismatch for FPilgrimObjectiveFilter_OverdriveComplete::RequiredDifficulty");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_ProVocalPhrase
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_ProVocalPhrase
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t DidHit; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidMiss; // 0x01C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01C2
    std::uint8_t RequiredStreak[0x10]; // 0x01C4 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredMultiplier[0x10]; // 0x01D4 (Size: 0x10, Type: StructProperty)
    std::uint8_t IncrementType; // 0x01E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01E5
    std::int32_t IncrementValue; // 0x01E8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, DidHit) == 448, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::DidHit");
static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, DidMiss) == 449, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::DidMiss");
static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, RequiredStreak) == 452, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::RequiredStreak");
static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, RequiredMultiplier) == 468, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::RequiredMultiplier");
static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, IncrementType) == 484, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::IncrementType");
static_assert(offsetof(FPilgrimObjectiveFilter_ProVocalPhrase, IncrementValue) == 488, "Offset mismatch for FPilgrimObjectiveFilter_ProVocalPhrase::IncrementValue");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_ScoreEvent
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_ScoreEvent
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredScore[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredStars[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredCurrentScore[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredCurrentStars[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredCurrentSustainScore[0x10]; // 0x0200 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDeltaSustainScore[0x10]; // 0x0210 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredCurrentChordScore[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDeltaChordScore[0x10]; // 0x0230 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequireSustain; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequireChord; // 0x0241 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequireOverdrive; // 0x0242 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScoreType; // 0x0243 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IncrementType; // 0x0244 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0245
    std::int32_t IncrementValue; // 0x0248 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredScore) == 448, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredStars) == 464, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredStars");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredCurrentScore) == 480, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredCurrentScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredCurrentStars) == 496, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredCurrentStars");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredCurrentSustainScore) == 512, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredCurrentSustainScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredDeltaSustainScore) == 528, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredDeltaSustainScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredCurrentChordScore) == 544, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredCurrentChordScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequiredDeltaChordScore) == 560, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequiredDeltaChordScore");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequireSustain) == 576, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequireSustain");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequireChord) == 577, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequireChord");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, RequireOverdrive) == 578, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::RequireOverdrive");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, ScoreType) == 579, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::ScoreType");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, IncrementType) == 580, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::IncrementType");
static_assert(offsetof(FPilgrimObjectiveFilter_ScoreEvent, IncrementValue) == 584, "Offset mismatch for FPilgrimObjectiveFilter_ScoreEvent::IncrementValue");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_SetlistComplete
// Kind: ScriptStruct; super: ObjectiveFilter
struct FPilgrimObjectiveFilter_SetlistComplete
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RequiredSoloScore[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredSoloStars[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredBandScore[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredBandStars[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredNumSongs[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredBandMembers[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredGameMode; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseRequiredGameMode; // 0x0101 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredSoloScore) == 160, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredSoloScore");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredSoloStars) == 176, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredSoloStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredBandScore) == 192, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredBandScore");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredBandStars) == 208, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredBandStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredNumSongs) == 224, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredNumSongs");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredBandMembers) == 240, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredBandMembers");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, RequiredGameMode) == 256, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::RequiredGameMode");
static_assert(offsetof(FPilgrimObjectiveFilter_SetlistComplete, bUseRequiredGameMode) == 257, "Offset mismatch for FPilgrimObjectiveFilter_SetlistComplete::bUseRequiredGameMode");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_SongCompleted
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_SongCompleted
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t RequiredSoloScore[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredSoloStars[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRequiredGoldSoloStars; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01E1
    std::uint8_t RequiredBandScore[0x10]; // 0x01E4 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredBandStars[0x10]; // 0x01F4 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRequiredGoldBandStars; // 0x0204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0205
    std::uint8_t RequiredNoteAccuracy[0x10]; // 0x0208 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredComboType; // 0x0218 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseRequiredComboType; // 0x0219 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequiredGameMode; // 0x021A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseRequiredGameMode; // 0x021B (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequiredOverdriveTime[0x10]; // 0x021C (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredPercentPerfect[0x1]; // 0x022C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredSoloScore) == 448, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredSoloScore");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredSoloStars) == 464, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredSoloStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, bRequiredGoldSoloStars) == 480, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::bRequiredGoldSoloStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredBandScore) == 484, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredBandScore");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredBandStars) == 500, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredBandStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, bRequiredGoldBandStars) == 516, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::bRequiredGoldBandStars");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredNoteAccuracy) == 520, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredNoteAccuracy");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredComboType) == 536, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredComboType");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, bUseRequiredComboType) == 537, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::bUseRequiredComboType");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredGameMode) == 538, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredGameMode");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, bUseRequiredGameMode) == 539, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::bUseRequiredGameMode");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredOverdriveTime) == 540, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredOverdriveTime");
static_assert(offsetof(FPilgrimObjectiveFilter_SongCompleted, RequiredPercentPerfect) == 556, "Offset mismatch for FPilgrimObjectiveFilter_SongCompleted::RequiredPercentPerfect");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveFilter_SongStarted
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimObjectiveFilter_SongStarted
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SongId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t InstrumentId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortName[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t SongSIDMatcher[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequiredBandMembers[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDifficulty; // 0x01B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, SongId) == 160, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::SongId");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, InstrumentId) == 232, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::InstrumentId");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, BandInstrumentIds) == 304, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::BandInstrumentIds");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, SongShortName) == 376, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::SongShortName");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, SongSIDMatcher) == 400, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::SongSIDMatcher");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, RequiredBandMembers) == 424, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::RequiredBandMembers");
static_assert(offsetof(FPilgrimObjectiveFilter_SongStarted, RequiredDifficulty) == 440, "Offset mismatch for FPilgrimObjectiveFilter_SongStarted::RequiredDifficulty");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbFilter_DeployOverdrive
// Kind: ScriptStruct; super: PilgrimObjectiveFilterBase
struct FPilgrimVerbFilter_DeployOverdrive
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SongId[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t InstrumentId[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x48]; // 0x0130 (Size: 0x48, Type: StructProperty)
    std::uint8_t SongShortName[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t SongSIDMatcher[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequiredBandMembers[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequiredDifficulty; // 0x01B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, SongId) == 160, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::SongId");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, InstrumentId) == 232, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::InstrumentId");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, BandInstrumentIds) == 304, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::BandInstrumentIds");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, SongShortName) == 376, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::SongShortName");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, SongSIDMatcher) == 400, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::SongSIDMatcher");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, RequiredBandMembers) == 424, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::RequiredBandMembers");
static_assert(offsetof(FPilgrimVerbFilter_DeployOverdrive, RequiredDifficulty) == 440, "Offset mismatch for FPilgrimVerbFilter_DeployOverdrive::RequiredDifficulty");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessageBase
// Kind: ScriptStruct; super: VerbMessage
struct FPilgrimVerbMessageBase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FName SongShortName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t SongId[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t InstrumentId[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumBandMembers; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Difficulty; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x012A
    FName SongItemDefPrimaryAssetName; // 0x012C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimVerbMessageBase, SongShortName) == 120, "Offset mismatch for FPilgrimVerbMessageBase::SongShortName");
static_assert(offsetof(FPilgrimVerbMessageBase, SongId) == 128, "Offset mismatch for FPilgrimVerbMessageBase::SongId");
static_assert(offsetof(FPilgrimVerbMessageBase, InstrumentId) == 184, "Offset mismatch for FPilgrimVerbMessageBase::InstrumentId");
static_assert(offsetof(FPilgrimVerbMessageBase, BandInstrumentIds) == 240, "Offset mismatch for FPilgrimVerbMessageBase::BandInstrumentIds");
static_assert(offsetof(FPilgrimVerbMessageBase, NumBandMembers) == 296, "Offset mismatch for FPilgrimVerbMessageBase::NumBandMembers");
static_assert(offsetof(FPilgrimVerbMessageBase, Difficulty) == 297, "Offset mismatch for FPilgrimVerbMessageBase::Difficulty");
static_assert(offsetof(FPilgrimVerbMessageBase, SongItemDefPrimaryAssetName) == 300, "Offset mismatch for FPilgrimVerbMessageBase::SongItemDefPrimaryAssetName");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_AccumulateStars
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_AccumulateStars
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t TotalStars; // 0x0130 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DeltaStars; // 0x0131 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsBandStar; // 0x0132 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_AccumulateStars, TotalStars) == 304, "Offset mismatch for FPilgrimVerbMessage_AccumulateStars::TotalStars");
static_assert(offsetof(FPilgrimVerbMessage_AccumulateStars, DeltaStars) == 305, "Offset mismatch for FPilgrimVerbMessage_AccumulateStars::DeltaStars");
static_assert(offsetof(FPilgrimVerbMessage_AccumulateStars, bIsBandStar) == 306, "Offset mismatch for FPilgrimVerbMessage_AccumulateStars::bIsBandStar");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_DeployOverdrive
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_DeployOverdrive
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FName SongShortName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t SongId[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t InstrumentId[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumBandMembers; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Difficulty; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x012A
    FName SongItemDefPrimaryAssetName; // 0x012C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, SongShortName) == 120, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::SongShortName");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, SongId) == 128, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::SongId");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, InstrumentId) == 184, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::InstrumentId");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, BandInstrumentIds) == 240, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::BandInstrumentIds");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, NumBandMembers) == 296, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::NumBandMembers");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, Difficulty) == 297, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::Difficulty");
static_assert(offsetof(FPilgrimVerbMessage_DeployOverdrive, SongItemDefPrimaryAssetName) == 300, "Offset mismatch for FPilgrimVerbMessage_DeployOverdrive::SongItemDefPrimaryAssetName");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_Note
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_Note
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t DidHit; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidPass; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidMiss; // 0x0132 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsChord; // 0x0133 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPerfect; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    std::int32_t NoteStreak; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t Multiplier; // 0x013C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_Note, DidHit) == 304, "Offset mismatch for FPilgrimVerbMessage_Note::DidHit");
static_assert(offsetof(FPilgrimVerbMessage_Note, DidPass) == 305, "Offset mismatch for FPilgrimVerbMessage_Note::DidPass");
static_assert(offsetof(FPilgrimVerbMessage_Note, DidMiss) == 306, "Offset mismatch for FPilgrimVerbMessage_Note::DidMiss");
static_assert(offsetof(FPilgrimVerbMessage_Note, IsChord) == 307, "Offset mismatch for FPilgrimVerbMessage_Note::IsChord");
static_assert(offsetof(FPilgrimVerbMessage_Note, IsPerfect) == 308, "Offset mismatch for FPilgrimVerbMessage_Note::IsPerfect");
static_assert(offsetof(FPilgrimVerbMessage_Note, NoteStreak) == 312, "Offset mismatch for FPilgrimVerbMessage_Note::NoteStreak");
static_assert(offsetof(FPilgrimVerbMessage_Note, Multiplier) == 316, "Offset mismatch for FPilgrimVerbMessage_Note::Multiplier");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_OverdriveComplete
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_OverdriveComplete
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FName SongShortName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t SongId[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t InstrumentId[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumBandMembers; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Difficulty; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x012A
    FName SongItemDefPrimaryAssetName; // 0x012C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, SongShortName) == 120, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::SongShortName");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, SongId) == 128, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::SongId");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, InstrumentId) == 184, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::InstrumentId");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, BandInstrumentIds) == 240, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::BandInstrumentIds");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, NumBandMembers) == 296, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::NumBandMembers");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, Difficulty) == 297, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::Difficulty");
static_assert(offsetof(FPilgrimVerbMessage_OverdriveComplete, SongItemDefPrimaryAssetName) == 300, "Offset mismatch for FPilgrimVerbMessage_OverdriveComplete::SongItemDefPrimaryAssetName");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_ProVocalPhrase
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_ProVocalPhrase
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t DidHit; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DidMiss; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0132
    std::int32_t PhraseStreak; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t Multiplier; // 0x0138 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_ProVocalPhrase, DidHit) == 304, "Offset mismatch for FPilgrimVerbMessage_ProVocalPhrase::DidHit");
static_assert(offsetof(FPilgrimVerbMessage_ProVocalPhrase, DidMiss) == 305, "Offset mismatch for FPilgrimVerbMessage_ProVocalPhrase::DidMiss");
static_assert(offsetof(FPilgrimVerbMessage_ProVocalPhrase, PhraseStreak) == 308, "Offset mismatch for FPilgrimVerbMessage_ProVocalPhrase::PhraseStreak");
static_assert(offsetof(FPilgrimVerbMessage_ProVocalPhrase, Multiplier) == 312, "Offset mismatch for FPilgrimVerbMessage_ProVocalPhrase::Multiplier");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_ScoreEvent
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_ScoreEvent
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::int32_t CurrentScore; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::int32_t DeltaScore; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentStars; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t DeltaStars; // 0x013C (Size: 0x4, Type: IntProperty)
    float CurrentChordScore; // 0x0140 (Size: 0x4, Type: FloatProperty)
    float DeltaChordScore; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float CurrentSustainScore; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float DeltaSustainScore; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInOverdrive; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBandScore; // 0x0151 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, CurrentScore) == 304, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::CurrentScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, DeltaScore) == 308, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::DeltaScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, CurrentStars) == 312, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::CurrentStars");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, DeltaStars) == 316, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::DeltaStars");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, CurrentChordScore) == 320, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::CurrentChordScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, DeltaChordScore) == 324, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::DeltaChordScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, CurrentSustainScore) == 328, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::CurrentSustainScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, DeltaSustainScore) == 332, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::DeltaSustainScore");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, bIsInOverdrive) == 336, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::bIsInOverdrive");
static_assert(offsetof(FPilgrimVerbMessage_ScoreEvent, bIsBandScore) == 337, "Offset mismatch for FPilgrimVerbMessage_ScoreEvent::bIsBandScore");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_SetlistComplete
// Kind: ScriptStruct; super: VerbMessage
struct FPilgrimVerbMessage_SetlistComplete
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float SoloScore; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float BandScore; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t SoloStars; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t BandStars; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t NumSongs; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t NumBandMembers; // 0x008C (Size: 0x1, Type: ByteProperty)
    std::uint8_t GameMode; // 0x008D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, SoloScore) == 120, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::SoloScore");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, BandScore) == 124, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::BandScore");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, SoloStars) == 128, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::SoloStars");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, BandStars) == 132, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::BandStars");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, NumSongs) == 136, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::NumSongs");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, NumBandMembers) == 140, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::NumBandMembers");
static_assert(offsetof(FPilgrimVerbMessage_SetlistComplete, GameMode) == 141, "Offset mismatch for FPilgrimVerbMessage_SetlistComplete::GameMode");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_SongCompleted
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_SongCompleted
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    float SoloScore; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float BandScore; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::int32_t SoloStars; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t BandStars; // 0x013C (Size: 0x4, Type: IntProperty)
    std::int32_t NumPlayers; // 0x0140 (Size: 0x4, Type: IntProperty)
    float NoteAccuracy; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float OverdriveTime; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComboType; // 0x014C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x014D
    float PercentPerfect; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPerfect; // 0x0154 (Size: 0x4, Type: IntProperty)
    std::int32_t NumHits; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPasses; // 0x015C (Size: 0x4, Type: IntProperty)
    std::uint8_t GameMode; // 0x0160 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, SoloScore) == 304, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::SoloScore");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, BandScore) == 308, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::BandScore");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, SoloStars) == 312, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::SoloStars");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, BandStars) == 316, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::BandStars");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, NumPlayers) == 320, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::NumPlayers");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, NoteAccuracy) == 324, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::NoteAccuracy");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, OverdriveTime) == 328, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::OverdriveTime");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, ComboType) == 332, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::ComboType");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, PercentPerfect) == 336, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::PercentPerfect");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, NumPerfect) == 340, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::NumPerfect");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, NumHits) == 344, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::NumHits");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, NumPasses) == 348, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::NumPasses");
static_assert(offsetof(FPilgrimVerbMessage_SongCompleted, GameMode) == 352, "Offset mismatch for FPilgrimVerbMessage_SongCompleted::GameMode");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbMessage_SongStarted
// Kind: ScriptStruct; super: PilgrimVerbMessageBase
struct FPilgrimVerbMessage_SongStarted
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FName SongShortName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t SongId[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t InstrumentId[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BandInstrumentIds[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumBandMembers; // 0x0128 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Difficulty; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x012A
    FName SongItemDefPrimaryAssetName; // 0x012C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPilgrimVerbMessage_SongStarted, SongShortName) == 120, "Offset mismatch for FPilgrimVerbMessage_SongStarted::SongShortName");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, SongId) == 128, "Offset mismatch for FPilgrimVerbMessage_SongStarted::SongId");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, InstrumentId) == 184, "Offset mismatch for FPilgrimVerbMessage_SongStarted::InstrumentId");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, BandInstrumentIds) == 240, "Offset mismatch for FPilgrimVerbMessage_SongStarted::BandInstrumentIds");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, NumBandMembers) == 296, "Offset mismatch for FPilgrimVerbMessage_SongStarted::NumBandMembers");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, Difficulty) == 297, "Offset mismatch for FPilgrimVerbMessage_SongStarted::Difficulty");
static_assert(offsetof(FPilgrimVerbMessage_SongStarted, SongItemDefPrimaryAssetName) == 300, "Offset mismatch for FPilgrimVerbMessage_SongStarted::SongItemDefPrimaryAssetName");

// /Script/SparksPermanentQuestsRuntime.SparksVerbFilter_DanceSpotlight
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSparksVerbFilter_DanceSpotlight
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Author[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t Context[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksVerbFilter_DanceSpotlight, Author) == 8, "Offset mismatch for FSparksVerbFilter_DanceSpotlight::Author");
static_assert(offsetof(FSparksVerbFilter_DanceSpotlight, Context) == 88, "Offset mismatch for FSparksVerbFilter_DanceSpotlight::Context");

// /Script/SparksPermanentQuestsRuntime.SparksVerbMessage_DanceSpotlight
// Kind: ScriptStruct; super: VerbMessage
struct FSparksVerbMessage_DanceSpotlight
{
public:
    std::uint8_t ContextTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Author[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksVerbMessage_DanceSpotlight, ContextTags) == 0, "Offset mismatch for FSparksVerbMessage_DanceSpotlight::ContextTags");
static_assert(offsetof(FSparksVerbMessage_DanceSpotlight, Author) == 32, "Offset mismatch for FSparksVerbMessage_DanceSpotlight::Author");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveProcessor_BreakStreak
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UBattleStageObjectiveProcessor_BreakStreak
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBattleStageObjectiveProcessor_BreakStreak, OwningProcessorSubsystem) == 56, "Offset mismatch for UBattleStageObjectiveProcessor_BreakStreak::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveProcessor_RoundComplete
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UBattleStageObjectiveProcessor_RoundComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBattleStageObjectiveProcessor_RoundComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UBattleStageObjectiveProcessor_RoundComplete::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveProcessor_RoundStart
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UBattleStageObjectiveProcessor_RoundStart
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBattleStageObjectiveProcessor_RoundStart, OwningProcessorSubsystem) == 56, "Offset mismatch for UBattleStageObjectiveProcessor_RoundStart::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.BattleStageObjectiveProcessor_SurviveRound
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UBattleStageObjectiveProcessor_SurviveRound
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBattleStageObjectiveProcessor_SurviveRound, OwningProcessorSubsystem) == 56, "Offset mismatch for UBattleStageObjectiveProcessor_SurviveRound::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.JamVerbProcessor_Jam
// Kind: Class; super: ObjectiveProcessor
class UJamVerbProcessor_Jam
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamVerbProcessor_Jam, OwningProcessorSubsystem) == 56, "Offset mismatch for UJamVerbProcessor_Jam::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessorBase
// Kind: Class; super: FortObjectiveProcessor
class UPilgrimObjectiveProcessorBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessorBase, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessorBase::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_AccumulateStars
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_AccumulateStars
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_AccumulateStars, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_AccumulateStars::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_Note
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_Note
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_Note, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_Note::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_OverdriveComplete
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_OverdriveComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_OverdriveComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_OverdriveComplete::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_ProVocalPhrase
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_ProVocalPhrase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_ProVocalPhrase, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_ProVocalPhrase::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_ScoreEvent
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_ScoreEvent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_ScoreEvent, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_ScoreEvent::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_SetlistComplete
// Kind: Class; super: FortObjectiveProcessor
class UPilgrimObjectiveProcessor_SetlistComplete
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_SetlistComplete, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_SetlistComplete::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_SongCompleted
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_SongCompleted
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_SongCompleted, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_SongCompleted::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimObjectiveProcessor_SongStarted
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimObjectiveProcessor_SongStarted
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimObjectiveProcessor_SongStarted, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimObjectiveProcessor_SongStarted::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.PilgrimVerbProcessor_DeployOverdrive
// Kind: Class; super: PilgrimObjectiveProcessorBase
class UPilgrimVerbProcessor_DeployOverdrive
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimVerbProcessor_DeployOverdrive, OwningProcessorSubsystem) == 56, "Offset mismatch for UPilgrimVerbProcessor_DeployOverdrive::OwningProcessorSubsystem");

// /Script/SparksPermanentQuestsRuntime.SparksVerbProcessor_DanceSpotlight
// Kind: Class; super: ObjectiveProcessor
class USparksVerbProcessor_DanceSpotlight
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksVerbProcessor_DanceSpotlight, OwningProcessorSubsystem) == 56, "Offset mismatch for USparksVerbProcessor_DanceSpotlight::OwningProcessorSubsystem");
