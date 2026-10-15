/**
 * decamp dumper generated SDK
 * Package: /Script/MediaMovieStreamer
 */
#pragma once
#include "Basic.h"

// /Script/MediaMovieStreamer.MediaMovieAssets
// Kind: Class; super: Object
class UMediaMovieAssets
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MediaPlayer; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* MediaSoundComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* MediaSource; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MediaTexture; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaMovieAssets, MediaPlayer) == 40, "Offset mismatch for UMediaMovieAssets::MediaPlayer");
static_assert(offsetof(UMediaMovieAssets, MediaSoundComponent) == 48, "Offset mismatch for UMediaMovieAssets::MediaSoundComponent");
static_assert(offsetof(UMediaMovieAssets, MediaSource) == 56, "Offset mismatch for UMediaMovieAssets::MediaSource");
static_assert(offsetof(UMediaMovieAssets, MediaTexture) == 64, "Offset mismatch for UMediaMovieAssets::MediaTexture");
