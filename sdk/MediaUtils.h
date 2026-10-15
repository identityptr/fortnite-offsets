/**
 * decamp dumper generated SDK
 * Package: /Script/MediaUtils
 */
#pragma once
#include "Basic.h"

// /Script/MediaUtils.MediaPlayerInitialTrackLanguageSelection
// Kind: ScriptStruct; super: none
struct FMediaPlayerInitialTrackLanguageSelection
{
public:
    FString Video; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Audio; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Subtitle; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString Caption; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMediaPlayerInitialTrackLanguageSelection, Video) == 0, "Offset mismatch for FMediaPlayerInitialTrackLanguageSelection::Video");
static_assert(offsetof(FMediaPlayerInitialTrackLanguageSelection, Audio) == 16, "Offset mismatch for FMediaPlayerInitialTrackLanguageSelection::Audio");
static_assert(offsetof(FMediaPlayerInitialTrackLanguageSelection, Subtitle) == 32, "Offset mismatch for FMediaPlayerInitialTrackLanguageSelection::Subtitle");
static_assert(offsetof(FMediaPlayerInitialTrackLanguageSelection, Caption) == 48, "Offset mismatch for FMediaPlayerInitialTrackLanguageSelection::Caption");

// /Script/MediaUtils.MediaPlayerOptions
// Kind: ScriptStruct; super: none
struct FMediaPlayerOptions
{
public:
    std::uint8_t Tracks[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t TracksByLanguage[0x40]; // 0x0020 (Size: 0x40, Type: StructProperty)
    std::uint8_t TrackSelection; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0061
    std::uint8_t SeekTime[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t SeekTimeType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayOnOpen; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Loop; // 0x0072 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0, "Offset mismatch for FMediaPlayerOptions::Tracks");
static_assert(offsetof(FMediaPlayerOptions, TracksByLanguage) == 32, "Offset mismatch for FMediaPlayerOptions::TracksByLanguage");
static_assert(offsetof(FMediaPlayerOptions, TrackSelection) == 96, "Offset mismatch for FMediaPlayerOptions::TrackSelection");
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 104, "Offset mismatch for FMediaPlayerOptions::SeekTime");
static_assert(offsetof(FMediaPlayerOptions, SeekTimeType) == 112, "Offset mismatch for FMediaPlayerOptions::SeekTimeType");
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 113, "Offset mismatch for FMediaPlayerOptions::PlayOnOpen");
static_assert(offsetof(FMediaPlayerOptions, Loop) == 114, "Offset mismatch for FMediaPlayerOptions::Loop");

// /Script/MediaUtils.MediaPlayerTrackOptions
// Kind: ScriptStruct; super: none
struct FMediaPlayerTrackOptions
{
public:
    std::int32_t Audio; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Caption; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MetaData; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Script; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t Subtitle; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t Text; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t Video; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMediaPlayerTrackOptions, Audio) == 0, "Offset mismatch for FMediaPlayerTrackOptions::Audio");
static_assert(offsetof(FMediaPlayerTrackOptions, Caption) == 4, "Offset mismatch for FMediaPlayerTrackOptions::Caption");
static_assert(offsetof(FMediaPlayerTrackOptions, MetaData) == 8, "Offset mismatch for FMediaPlayerTrackOptions::MetaData");
static_assert(offsetof(FMediaPlayerTrackOptions, Script) == 12, "Offset mismatch for FMediaPlayerTrackOptions::Script");
static_assert(offsetof(FMediaPlayerTrackOptions, Subtitle) == 16, "Offset mismatch for FMediaPlayerTrackOptions::Subtitle");
static_assert(offsetof(FMediaPlayerTrackOptions, Text) == 20, "Offset mismatch for FMediaPlayerTrackOptions::Text");
static_assert(offsetof(FMediaPlayerTrackOptions, Video) == 24, "Offset mismatch for FMediaPlayerTrackOptions::Video");
