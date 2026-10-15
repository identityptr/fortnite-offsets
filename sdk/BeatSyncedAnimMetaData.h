/**
 * decamp dumper generated SDK
 * Package: /Script/BeatSyncedAnimMetaData
 */
#pragma once
#include "Basic.h"

// /Script/BeatSyncedAnimMetaData.BeatSyncedAnimMusicClockSettings
// Kind: ScriptStruct; super: MusicClockSettingsBase
struct FBeatSyncedAnimMusicClockSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TWeakObjectPtr<void> AnimInstance; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AnimMontage; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FBeatSyncedAnimMusicClockSettings, AnimInstance) == 24, "Offset mismatch for FBeatSyncedAnimMusicClockSettings::AnimInstance");
static_assert(offsetof(FBeatSyncedAnimMusicClockSettings, AnimMontage) == 32, "Offset mismatch for FBeatSyncedAnimMusicClockSettings::AnimMontage");

// /Script/BeatSyncedAnimMetaData.BeatSyncedAnimMusicSourceSettings
// Kind: ScriptStruct; super: MusicSourceSettings
struct FBeatSyncedAnimMusicSourceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AnimInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* AnimMontage; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TimeSigNumerator; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TimeSigDenominator; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBeatSyncedAnimMusicSourceSettings, AnimInstance) == 8, "Offset mismatch for FBeatSyncedAnimMusicSourceSettings::AnimInstance");
static_assert(offsetof(FBeatSyncedAnimMusicSourceSettings, AnimMontage) == 16, "Offset mismatch for FBeatSyncedAnimMusicSourceSettings::AnimMontage");
static_assert(offsetof(FBeatSyncedAnimMusicSourceSettings, TimeSigNumerator) == 24, "Offset mismatch for FBeatSyncedAnimMusicSourceSettings::TimeSigNumerator");
static_assert(offsetof(FBeatSyncedAnimMusicSourceSettings, TimeSigDenominator) == 28, "Offset mismatch for FBeatSyncedAnimMusicSourceSettings::TimeSigDenominator");

// /Script/BeatSyncedAnimMetaData.BeatTrackEntry
// Kind: ScriptStruct; super: none
struct FBeatTrackEntry
{
public:
    float Seconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Beat; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBeatTrackEntry, Seconds) == 0, "Offset mismatch for FBeatTrackEntry::Seconds");
static_assert(offsetof(FBeatTrackEntry, Beat) == 4, "Offset mismatch for FBeatTrackEntry::Beat");

// /Script/BeatSyncedAnimMetaData.BeatSyncedAnimMetaData
// Kind: Class; super: AnimMetaData
class UBeatSyncedAnimMetaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BeatAlignment; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float BeatB; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Bpm; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FirstBeatAtFrame; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotBeat; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float TransitionBias; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDoublingHalving; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoopFromPivot; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0042
    TArray<void*> TempoVariants; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BeatTrack; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBeatSyncedAnimMetaData, BeatAlignment) == 40, "Offset mismatch for UBeatSyncedAnimMetaData::BeatAlignment");
static_assert(offsetof(UBeatSyncedAnimMetaData, BeatB) == 44, "Offset mismatch for UBeatSyncedAnimMetaData::BeatB");
static_assert(offsetof(UBeatSyncedAnimMetaData, Bpm) == 48, "Offset mismatch for UBeatSyncedAnimMetaData::Bpm");
static_assert(offsetof(UBeatSyncedAnimMetaData, FirstBeatAtFrame) == 52, "Offset mismatch for UBeatSyncedAnimMetaData::FirstBeatAtFrame");
static_assert(offsetof(UBeatSyncedAnimMetaData, PivotBeat) == 56, "Offset mismatch for UBeatSyncedAnimMetaData::PivotBeat");
static_assert(offsetof(UBeatSyncedAnimMetaData, TransitionBias) == 60, "Offset mismatch for UBeatSyncedAnimMetaData::TransitionBias");
static_assert(offsetof(UBeatSyncedAnimMetaData, bAllowDoublingHalving) == 64, "Offset mismatch for UBeatSyncedAnimMetaData::bAllowDoublingHalving");
static_assert(offsetof(UBeatSyncedAnimMetaData, bLoopFromPivot) == 65, "Offset mismatch for UBeatSyncedAnimMetaData::bLoopFromPivot");
static_assert(offsetof(UBeatSyncedAnimMetaData, TempoVariants) == 72, "Offset mismatch for UBeatSyncedAnimMetaData::TempoVariants");
static_assert(offsetof(UBeatSyncedAnimMetaData, BeatTrack) == 88, "Offset mismatch for UBeatSyncedAnimMetaData::BeatTrack");

// /Script/BeatSyncedAnimMetaData.BeatSyncedEmoteMetaData
// Kind: Class; super: BeatSyncedAnimMetaData
class UBeatSyncedEmoteMetaData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bOverrideGroupEmoteBeatsyncingBehavior; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowGroupEmoteLeaderToBeatSync; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowGroupEmoteFollowerToBeatSync; // 0x006A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBeatSyncedEmoteMetaData, bOverrideGroupEmoteBeatsyncingBehavior) == 104, "Offset mismatch for UBeatSyncedEmoteMetaData::bOverrideGroupEmoteBeatsyncingBehavior");
static_assert(offsetof(UBeatSyncedEmoteMetaData, bAllowGroupEmoteLeaderToBeatSync) == 105, "Offset mismatch for UBeatSyncedEmoteMetaData::bAllowGroupEmoteLeaderToBeatSync");
static_assert(offsetof(UBeatSyncedEmoteMetaData, bAllowGroupEmoteFollowerToBeatSync) == 106, "Offset mismatch for UBeatSyncedEmoteMetaData::bAllowGroupEmoteFollowerToBeatSync");

// /Script/BeatSyncedAnimMetaData.TimeScaledAnimMetaData
// Kind: Class; super: AnimMetaData
class UTimeScaledAnimMetaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float PlaybackScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTimeScaledAnimMetaData, PlaybackScale) == 40, "Offset mismatch for UTimeScaledAnimMetaData::PlaybackScale");
