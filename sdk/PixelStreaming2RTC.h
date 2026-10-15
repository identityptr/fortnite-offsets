/**
 * decamp dumper generated SDK
 * Package: /Script/PixelStreaming2RTC
 */
#pragma once
#include "Basic.h"

// /Script/PixelStreaming2RTC.PixelStreaming2AudioTrackObserver
// Kind: Class; super: Interface
class UPixelStreaming2AudioTrackObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2RTC.PixelStreaming2DataTrackObserver
// Kind: Class; super: Interface
class UPixelStreaming2DataTrackObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2RTC.PixelStreaming2Peer
// Kind: Class; super: SynthComponent
class UPixelStreaming2Peer
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    std::uint8_t OnStreamerList[0x8]; // 0x0658 (Size: 0x8, Type: MulticastSparseDelegateProperty)
    void* VideoConsumer; // 0x0660 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2Peer, OnStreamerList) == 1624, "Offset mismatch for UPixelStreaming2Peer::OnStreamerList");
static_assert(offsetof(UPixelStreaming2Peer, VideoConsumer) == 1632, "Offset mismatch for UPixelStreaming2Peer::VideoConsumer");

// /Script/PixelStreaming2RTC.PixelStreaming2RoomObserver
// Kind: Class; super: Interface
class UPixelStreaming2RoomObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2RTC.PixelStreaming2SessionObserver
// Kind: Class; super: Interface
class UPixelStreaming2SessionObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2RTC.PixelStreaming2VideoTrackObserver
// Kind: Class; super: Interface
class UPixelStreaming2VideoTrackObserver
{
public:
    std::uint8_t Opaque[1];
};
