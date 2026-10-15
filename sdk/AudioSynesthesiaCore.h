/**
 * decamp dumper generated SDK
 * Package: /Script/AudioSynesthesiaCore
 */
#pragma once
#include "Basic.h"

// /Script/AudioSynesthesiaCore.LKFSNRTAggregateStats
// Kind: ScriptStruct; super: none
struct FLKFSNRTAggregateStats
{
public:
    float IntegratedLoudness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GatedLoudness; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLKFSNRTAggregateStats, IntegratedLoudness) == 0, "Offset mismatch for FLKFSNRTAggregateStats::IntegratedLoudness");
static_assert(offsetof(FLKFSNRTAggregateStats, GatedLoudness) == 4, "Offset mismatch for FLKFSNRTAggregateStats::GatedLoudness");

// /Script/AudioSynesthesiaCore.LKFSNRTChannelData
// Kind: ScriptStruct; super: none
struct FLKFSNRTChannelData
{
public:
    std::uint8_t AggregateStats[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> LoudnessArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LoudnessInterval[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLKFSNRTChannelData, AggregateStats) == 0, "Offset mismatch for FLKFSNRTChannelData::AggregateStats");
static_assert(offsetof(FLKFSNRTChannelData, LoudnessArray) == 8, "Offset mismatch for FLKFSNRTChannelData::LoudnessArray");
static_assert(offsetof(FLKFSNRTChannelData, LoudnessInterval) == 24, "Offset mismatch for FLKFSNRTChannelData::LoudnessInterval");

// /Script/AudioSynesthesiaCore.LKFSNRTResults
// Kind: ScriptStruct; super: none
struct FLKFSNRTResults
{
public:
    std::int32_t Channel; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Timestamp; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Energy; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Loudness; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ShortTermLoudness; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLKFSNRTResults, Channel) == 0, "Offset mismatch for FLKFSNRTResults::Channel");
static_assert(offsetof(FLKFSNRTResults, Timestamp) == 4, "Offset mismatch for FLKFSNRTResults::Timestamp");
static_assert(offsetof(FLKFSNRTResults, Energy) == 8, "Offset mismatch for FLKFSNRTResults::Energy");
static_assert(offsetof(FLKFSNRTResults, Loudness) == 12, "Offset mismatch for FLKFSNRTResults::Loudness");
static_assert(offsetof(FLKFSNRTResults, ShortTermLoudness) == 16, "Offset mismatch for FLKFSNRTResults::ShortTermLoudness");

// /Script/AudioSynesthesiaCore.LKFSNRTWaveData
// Kind: ScriptStruct; super: none
struct FLKFSNRTWaveData
{
public:
    std::uint8_t bIsSortedChronologically; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DurationInSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> ChannelData; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLKFSNRTWaveData, bIsSortedChronologically) == 0, "Offset mismatch for FLKFSNRTWaveData::bIsSortedChronologically");
static_assert(offsetof(FLKFSNRTWaveData, DurationInSeconds) == 4, "Offset mismatch for FLKFSNRTWaveData::DurationInSeconds");
static_assert(offsetof(FLKFSNRTWaveData, ChannelData) == 8, "Offset mismatch for FLKFSNRTWaveData::ChannelData");

// /Script/AudioSynesthesiaCore.LKFSResults
// Kind: ScriptStruct; super: none
struct FLKFSResults
{
public:
    std::int32_t Channel; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Timestamp; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Energy; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Loudness; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ShortTermLoudness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float IntegratedLoudness; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float GatedLoudness; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LoudnessRange[0x1]; // 0x001C (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FLKFSResults, Channel) == 0, "Offset mismatch for FLKFSResults::Channel");
static_assert(offsetof(FLKFSResults, Timestamp) == 4, "Offset mismatch for FLKFSResults::Timestamp");
static_assert(offsetof(FLKFSResults, Energy) == 8, "Offset mismatch for FLKFSResults::Energy");
static_assert(offsetof(FLKFSResults, Loudness) == 12, "Offset mismatch for FLKFSResults::Loudness");
static_assert(offsetof(FLKFSResults, ShortTermLoudness) == 16, "Offset mismatch for FLKFSResults::ShortTermLoudness");
static_assert(offsetof(FLKFSResults, IntegratedLoudness) == 20, "Offset mismatch for FLKFSResults::IntegratedLoudness");
static_assert(offsetof(FLKFSResults, GatedLoudness) == 24, "Offset mismatch for FLKFSResults::GatedLoudness");
static_assert(offsetof(FLKFSResults, LoudnessRange) == 28, "Offset mismatch for FLKFSResults::LoudnessRange");
