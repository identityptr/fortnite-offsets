/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaBasePlayer
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaBasePlayer.EpicMediaPriorityInfo
// Kind: ScriptStruct; super: none
struct FEpicMediaPriorityInfo
{
public:
    std::uint8_t bCanBeInterrupted; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanInterruptOtherAndHold; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Type; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEpicMediaPriorityInfo, bCanBeInterrupted) == 0, "Offset mismatch for FEpicMediaPriorityInfo::bCanBeInterrupted");
static_assert(offsetof(FEpicMediaPriorityInfo, bCanInterruptOtherAndHold) == 1, "Offset mismatch for FEpicMediaPriorityInfo::bCanInterruptOtherAndHold");
static_assert(offsetof(FEpicMediaPriorityInfo, Type) == 2, "Offset mismatch for FEpicMediaPriorityInfo::Type");

// /Script/EpicMediaBasePlayer.EpicMediaPriorityPendingInfo
// Kind: ScriptStruct; super: none
struct FEpicMediaPriorityPendingInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* MediaTexture; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0018
    std::uint8_t MediaOptions[0x88]; // 0x0028 (Size: 0x88, Type: StructProperty)
    std::uint8_t PriorityInfo[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEpicMediaPriorityPendingInfo, MediaTexture) == 16, "Offset mismatch for FEpicMediaPriorityPendingInfo::MediaTexture");
static_assert(offsetof(FEpicMediaPriorityPendingInfo, MediaOptions) == 40, "Offset mismatch for FEpicMediaPriorityPendingInfo::MediaOptions");
static_assert(offsetof(FEpicMediaPriorityPendingInfo, PriorityInfo) == 176, "Offset mismatch for FEpicMediaPriorityPendingInfo::PriorityInfo");

// /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
// Kind: Class; super: Object
class UEpicBaseStreamingVideo
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate VideoOnTerminalError; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnSuccess; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnClosed; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnEndReached; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnOpened; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnOpenTimeout; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoOnResumed; // 0x0090 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MediaSource; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* MediaPlayer; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VideoSize[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PriorityInfo[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    void* ShareBlockedMediaSource; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSubmix; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSubmix; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MediaSoundComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x68]; // 0x00F0
    void* PendingMediaTexture; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAwaitingRetry; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0161
    float RetryDelayElapsed; // 0x0164 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnTerminalError) == 48, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnTerminalError");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnSuccess) == 64, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnSuccess");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnClosed) == 80, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnClosed");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnEndReached) == 96, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnEndReached");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnOpened) == 112, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnOpened");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnOpenTimeout) == 128, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnOpenTimeout");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnResumed) == 144, "Offset mismatch for UEpicBaseStreamingVideo::VideoOnResumed");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaSource) == 160, "Offset mismatch for UEpicBaseStreamingVideo::MediaSource");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaPlayer) == 168, "Offset mismatch for UEpicBaseStreamingVideo::MediaPlayer");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoSize) == 176, "Offset mismatch for UEpicBaseStreamingVideo::VideoSize");
static_assert(offsetof(UEpicBaseStreamingVideo, PriorityInfo) == 184, "Offset mismatch for UEpicBaseStreamingVideo::PriorityInfo");
static_assert(offsetof(UEpicBaseStreamingVideo, ShareBlockedMediaSource) == 208, "Offset mismatch for UEpicBaseStreamingVideo::ShareBlockedMediaSource");
static_assert(offsetof(UEpicBaseStreamingVideo, DefaultSubmix) == 216, "Offset mismatch for UEpicBaseStreamingVideo::DefaultSubmix");
static_assert(offsetof(UEpicBaseStreamingVideo, LicensedSubmix) == 224, "Offset mismatch for UEpicBaseStreamingVideo::LicensedSubmix");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaSoundComponent) == 232, "Offset mismatch for UEpicBaseStreamingVideo::MediaSoundComponent");
static_assert(offsetof(UEpicBaseStreamingVideo, PendingMediaTexture) == 344, "Offset mismatch for UEpicBaseStreamingVideo::PendingMediaTexture");
static_assert(offsetof(UEpicBaseStreamingVideo, bAwaitingRetry) == 352, "Offset mismatch for UEpicBaseStreamingVideo::bAwaitingRetry");
static_assert(offsetof(UEpicBaseStreamingVideo, RetryDelayElapsed) == 356, "Offset mismatch for UEpicBaseStreamingVideo::RetryDelayElapsed");

// /Script/EpicMediaBasePlayer.EpicMediaPrioritySystem
// Kind: Class; super: EngineSubsystem
class UEpicMediaPrioritySystem
{
public:
    std::uint8_t Opaque[1];
};
