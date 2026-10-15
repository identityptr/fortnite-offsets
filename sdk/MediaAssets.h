/**
 * decamp dumper generated SDK
 * Package: /Script/MediaAssets
 */
#pragma once
#include "Basic.h"

// /Script/MediaAssets.MediaCaptureDevice
// Kind: ScriptStruct; super: none
struct FMediaCaptureDevice
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString Url; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMediaCaptureDevice, DisplayName) == 0, "Offset mismatch for FMediaCaptureDevice::DisplayName");
static_assert(offsetof(FMediaCaptureDevice, Url) == 16, "Offset mismatch for FMediaCaptureDevice::Url");

// /Script/MediaAssets.MediaMetadataItemBPT
// Kind: ScriptStruct; super: none
struct FMediaMetadataItemBPT
{
public:
    FString LanguageCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString mimetype; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString StringData; // 0x0020 (Size: 0x10, Type: StrProperty)
    TArray<void*> BinaryData; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMediaMetadataItemBPT, LanguageCode) == 0, "Offset mismatch for FMediaMetadataItemBPT::LanguageCode");
static_assert(offsetof(FMediaMetadataItemBPT, mimetype) == 16, "Offset mismatch for FMediaMetadataItemBPT::mimetype");
static_assert(offsetof(FMediaMetadataItemBPT, StringData) == 32, "Offset mismatch for FMediaMetadataItemBPT::StringData");
static_assert(offsetof(FMediaMetadataItemBPT, BinaryData) == 48, "Offset mismatch for FMediaMetadataItemBPT::BinaryData");

// /Script/MediaAssets.MediaMetadataItemsBPT
// Kind: ScriptStruct; super: none
struct FMediaMetadataItemsBPT
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMediaMetadataItemsBPT, Items) == 0, "Offset mismatch for FMediaMetadataItemsBPT::Items");

// /Script/MediaAssets.MediaSoundComponentSpectralData
// Kind: ScriptStruct; super: none
struct FMediaSoundComponentSpectralData
{
public:
    float FrequencyHz; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Magnitude; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMediaSoundComponentSpectralData, FrequencyHz) == 0, "Offset mismatch for FMediaSoundComponentSpectralData::FrequencyHz");
static_assert(offsetof(FMediaSoundComponentSpectralData, Magnitude) == 4, "Offset mismatch for FMediaSoundComponentSpectralData::Magnitude");

// /Script/MediaAssets.MediaSourceCacheSettings
// Kind: ScriptStruct; super: none
struct FMediaSourceCacheSettings
{
public:
    std::uint8_t bOverride; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float TimeToLookAhead; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMediaSourceCacheSettings, bOverride) == 0, "Offset mismatch for FMediaSourceCacheSettings::bOverride");
static_assert(offsetof(FMediaSourceCacheSettings, TimeToLookAhead) == 4, "Offset mismatch for FMediaSourceCacheSettings::TimeToLookAhead");

// /Script/MediaAssets.MediaSourceColorSettings
// Kind: ScriptStruct; super: none
struct FMediaSourceColorSettings
{
public:
    std::uint8_t EncodingOverride; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ColorSpaceOverride; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t RedChromaticityCoordinate[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t GreenChromaticityCoordinate[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlueChromaticityCoordinate[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t WhiteChromaticityCoordinate[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChromaticAdaptationMethod; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ReferenceWhiteOverride; // 0x0049 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMediaSourceColorSettings, EncodingOverride) == 0, "Offset mismatch for FMediaSourceColorSettings::EncodingOverride");
static_assert(offsetof(FMediaSourceColorSettings, ColorSpaceOverride) == 1, "Offset mismatch for FMediaSourceColorSettings::ColorSpaceOverride");
static_assert(offsetof(FMediaSourceColorSettings, RedChromaticityCoordinate) == 8, "Offset mismatch for FMediaSourceColorSettings::RedChromaticityCoordinate");
static_assert(offsetof(FMediaSourceColorSettings, GreenChromaticityCoordinate) == 24, "Offset mismatch for FMediaSourceColorSettings::GreenChromaticityCoordinate");
static_assert(offsetof(FMediaSourceColorSettings, BlueChromaticityCoordinate) == 40, "Offset mismatch for FMediaSourceColorSettings::BlueChromaticityCoordinate");
static_assert(offsetof(FMediaSourceColorSettings, WhiteChromaticityCoordinate) == 56, "Offset mismatch for FMediaSourceColorSettings::WhiteChromaticityCoordinate");
static_assert(offsetof(FMediaSourceColorSettings, ChromaticAdaptationMethod) == 72, "Offset mismatch for FMediaSourceColorSettings::ChromaticAdaptationMethod");
static_assert(offsetof(FMediaSourceColorSettings, ReferenceWhiteOverride) == 73, "Offset mismatch for FMediaSourceColorSettings::ReferenceWhiteOverride");

// /Script/MediaAssets.BaseMediaSource
// Kind: Class; super: MediaSource
class UBaseMediaSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FName PlayerName; // 0x0040 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBaseMediaSource, PlayerName) == 64, "Offset mismatch for UBaseMediaSource::PlayerName");

// /Script/MediaAssets.FileMediaSource
// Kind: Class; super: BaseMediaSource
class UFileMediaSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FString FilePath; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t PrecacheFile; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFileMediaSource, FilePath) == 72, "Offset mismatch for UFileMediaSource::FilePath");
static_assert(offsetof(UFileMediaSource, PrecacheFile) == 88, "Offset mismatch for UFileMediaSource::PrecacheFile");

// /Script/MediaAssets.MediaBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMediaBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaAssets.MediaComponent
// Kind: Class; super: ActorComponent
class UMediaComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* MediaTexture; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* MediaPlayer; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaComponent, MediaTexture) == 192, "Offset mismatch for UMediaComponent::MediaTexture");
static_assert(offsetof(UMediaComponent, MediaPlayer) == 200, "Offset mismatch for UMediaComponent::MediaPlayer");

// /Script/MediaAssets.MediaPlayer
// Kind: Class; super: Object
class UMediaPlayer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnEndReached; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMediaClosed; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMediaOpened; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMediaOpenFailed; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlaybackResumed; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlaybackSuspended; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSeekCompleted; // 0x0090 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTracksChanged; // 0x00A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetadataChanged; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBufferingStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBufferingCompleted; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CacheAhead[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t CacheBehind[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t CacheBehindGame[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t NativeAudioOut; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PlayOnOpen; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00FA
    std::uint8_t Loop; // 0x00FC (Size: 0x1, Type: BoolProperty)
    // 0x00FC BoolProperty Shuffle (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x00FD
    void* Playlist; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PlaylistIndex; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x010C
    std::uint8_t TimeDelay[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    float HorizontalFieldOfView; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float VerticalFieldOfView; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ViewRotation[0x40]; // 0x0120 (Size: 0x40, Type: StructProperty)
    std::uint8_t PlayerGuid[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMediaPlayer, OnEndReached) == 48, "Offset mismatch for UMediaPlayer::OnEndReached");
static_assert(offsetof(UMediaPlayer, OnMediaClosed) == 64, "Offset mismatch for UMediaPlayer::OnMediaClosed");
static_assert(offsetof(UMediaPlayer, OnMediaOpened) == 80, "Offset mismatch for UMediaPlayer::OnMediaOpened");
static_assert(offsetof(UMediaPlayer, OnMediaOpenFailed) == 96, "Offset mismatch for UMediaPlayer::OnMediaOpenFailed");
static_assert(offsetof(UMediaPlayer, OnPlaybackResumed) == 112, "Offset mismatch for UMediaPlayer::OnPlaybackResumed");
static_assert(offsetof(UMediaPlayer, OnPlaybackSuspended) == 128, "Offset mismatch for UMediaPlayer::OnPlaybackSuspended");
static_assert(offsetof(UMediaPlayer, OnSeekCompleted) == 144, "Offset mismatch for UMediaPlayer::OnSeekCompleted");
static_assert(offsetof(UMediaPlayer, OnTracksChanged) == 160, "Offset mismatch for UMediaPlayer::OnTracksChanged");
static_assert(offsetof(UMediaPlayer, OnMetadataChanged) == 176, "Offset mismatch for UMediaPlayer::OnMetadataChanged");
static_assert(offsetof(UMediaPlayer, OnBufferingStart) == 192, "Offset mismatch for UMediaPlayer::OnBufferingStart");
static_assert(offsetof(UMediaPlayer, OnBufferingCompleted) == 208, "Offset mismatch for UMediaPlayer::OnBufferingCompleted");
static_assert(offsetof(UMediaPlayer, CacheAhead) == 224, "Offset mismatch for UMediaPlayer::CacheAhead");
static_assert(offsetof(UMediaPlayer, CacheBehind) == 232, "Offset mismatch for UMediaPlayer::CacheBehind");
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 240, "Offset mismatch for UMediaPlayer::CacheBehindGame");
static_assert(offsetof(UMediaPlayer, NativeAudioOut) == 248, "Offset mismatch for UMediaPlayer::NativeAudioOut");
static_assert(offsetof(UMediaPlayer, PlayOnOpen) == 249, "Offset mismatch for UMediaPlayer::PlayOnOpen");
static_assert(offsetof(UMediaPlayer, Loop) == 252, "Offset mismatch for UMediaPlayer::Loop");
static_assert(offsetof(UMediaPlayer, Playlist) == 256, "Offset mismatch for UMediaPlayer::Playlist");
static_assert(offsetof(UMediaPlayer, PlaylistIndex) == 264, "Offset mismatch for UMediaPlayer::PlaylistIndex");
static_assert(offsetof(UMediaPlayer, TimeDelay) == 272, "Offset mismatch for UMediaPlayer::TimeDelay");
static_assert(offsetof(UMediaPlayer, HorizontalFieldOfView) == 280, "Offset mismatch for UMediaPlayer::HorizontalFieldOfView");
static_assert(offsetof(UMediaPlayer, VerticalFieldOfView) == 284, "Offset mismatch for UMediaPlayer::VerticalFieldOfView");
static_assert(offsetof(UMediaPlayer, ViewRotation) == 288, "Offset mismatch for UMediaPlayer::ViewRotation");
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 352, "Offset mismatch for UMediaPlayer::PlayerGuid");

// /Script/MediaAssets.MediaPlayerProxyInterface
// Kind: Class; super: Interface
class UMediaPlayerProxyInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaAssets.MediaPlaylist
// Kind: Class; super: Object
class UMediaPlaylist
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMediaPlaylist, Items) == 40, "Offset mismatch for UMediaPlaylist::Items");

// /Script/MediaAssets.MediaSoundComponent
// Kind: Class; super: SynthComponent
class UMediaSoundComponent
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    std::uint8_t Channels; // 0x0620 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0621
    std::uint8_t DynamicRateAdjustment; // 0x0624 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0625
    float RateAdjustmentFactor; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RateAdjustmentRange[0x14]; // 0x062C (Size: 0x14, Type: StructProperty)
    void* MediaPlayer; // 0x0640 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaSoundComponent, Channels) == 1568, "Offset mismatch for UMediaSoundComponent::Channels");
static_assert(offsetof(UMediaSoundComponent, DynamicRateAdjustment) == 1572, "Offset mismatch for UMediaSoundComponent::DynamicRateAdjustment");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentFactor) == 1576, "Offset mismatch for UMediaSoundComponent::RateAdjustmentFactor");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentRange) == 1580, "Offset mismatch for UMediaSoundComponent::RateAdjustmentRange");
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 1600, "Offset mismatch for UMediaSoundComponent::MediaPlayer");

// /Script/MediaAssets.MediaSource
// Kind: Class; super: Object
class UMediaSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaAssets.MediaSourceRendererInterface
// Kind: Class; super: Interface
class UMediaSourceRendererInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaAssets.MediaTexture
// Kind: Class; super: Texture
class UMediaTexture
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t AddressX; // 0x0120 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AddressY; // 0x0121 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AutoClear; // 0x0122 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0123
    std::uint8_t ClearColor[0x10]; // 0x0124 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnableGenMips; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NewStyleOutput; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0136
    float CurrentAspectRatio; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurrentOrientation; // 0x013C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x013D
    void* MediaPlayer; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaTexture, AddressX) == 288, "Offset mismatch for UMediaTexture::AddressX");
static_assert(offsetof(UMediaTexture, AddressY) == 289, "Offset mismatch for UMediaTexture::AddressY");
static_assert(offsetof(UMediaTexture, AutoClear) == 290, "Offset mismatch for UMediaTexture::AutoClear");
static_assert(offsetof(UMediaTexture, ClearColor) == 292, "Offset mismatch for UMediaTexture::ClearColor");
static_assert(offsetof(UMediaTexture, EnableGenMips) == 308, "Offset mismatch for UMediaTexture::EnableGenMips");
static_assert(offsetof(UMediaTexture, NewStyleOutput) == 309, "Offset mismatch for UMediaTexture::NewStyleOutput");
static_assert(offsetof(UMediaTexture, CurrentAspectRatio) == 312, "Offset mismatch for UMediaTexture::CurrentAspectRatio");
static_assert(offsetof(UMediaTexture, CurrentOrientation) == 316, "Offset mismatch for UMediaTexture::CurrentOrientation");
static_assert(offsetof(UMediaTexture, MediaPlayer) == 320, "Offset mismatch for UMediaTexture::MediaPlayer");

// /Script/MediaAssets.MediaTimeStampInfo
// Kind: Class; super: Object
class UMediaTimeStampInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t time[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::int64_t SequenceIndex; // 0x0030 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UMediaTimeStampInfo, time) == 40, "Offset mismatch for UMediaTimeStampInfo::time");
static_assert(offsetof(UMediaTimeStampInfo, SequenceIndex) == 48, "Offset mismatch for UMediaTimeStampInfo::SequenceIndex");

// /Script/MediaAssets.PlatformMediaSource
// Kind: Class; super: MediaSource
class UPlatformMediaSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* MediaSource; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlatformMediaSource, MediaSource) == 64, "Offset mismatch for UPlatformMediaSource::MediaSource");

// /Script/MediaAssets.StreamMediaSource
// Kind: Class; super: BaseMediaSource
class UStreamMediaSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FString StreamUrl; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UStreamMediaSource, StreamUrl) == 72, "Offset mismatch for UStreamMediaSource::StreamUrl");

// /Script/MediaAssets.TimeSynchronizableMediaSource
// Kind: Class; super: BaseMediaSource
class UTimeSynchronizableMediaSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bUseTimeSynchronization; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::int32_t FrameDelay; // 0x004C (Size: 0x4, Type: IntProperty)
    double TimeDelay; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAutoDetectInput; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTimeSynchronizableMediaSource, bUseTimeSynchronization) == 72, "Offset mismatch for UTimeSynchronizableMediaSource::bUseTimeSynchronization");
static_assert(offsetof(UTimeSynchronizableMediaSource, FrameDelay) == 76, "Offset mismatch for UTimeSynchronizableMediaSource::FrameDelay");
static_assert(offsetof(UTimeSynchronizableMediaSource, TimeDelay) == 80, "Offset mismatch for UTimeSynchronizableMediaSource::TimeDelay");
static_assert(offsetof(UTimeSynchronizableMediaSource, bAutoDetectInput) == 88, "Offset mismatch for UTimeSynchronizableMediaSource::bAutoDetectInput");
