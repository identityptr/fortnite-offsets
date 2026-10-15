/**
 * decamp dumper generated SDK
 * Package: /Script/StreamingRadio
 */
#pragma once
#include "Basic.h"

// /Script/StreamingRadio.StreamingRadioManagerNative
// Kind: Class; super: Actor
class UStreamingRadioManagerNative
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* StreamMediaSource; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* MediaPlayer; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStreamingRadioManagerNative, StreamMediaSource) == 624, "Offset mismatch for UStreamingRadioManagerNative::StreamMediaSource");
static_assert(offsetof(UStreamingRadioManagerNative, MediaPlayer) == 632, "Offset mismatch for UStreamingRadioManagerNative::MediaPlayer");
