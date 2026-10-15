/**
 * decamp dumper generated SDK
 * Package: /Script/EpicStreamMediaSource
 */
#pragma once
#include "Basic.h"

// /Script/EpicStreamMediaSource.RetryRequestResponse
// Kind: ScriptStruct; super: none
struct FRetryRequestResponse
{
public:
    float RetryDelay; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t ErrorCode; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t RetryAttempt; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ShouldRetry; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SwitchCDN; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRetryRequestResponse, RetryDelay) == 0, "Offset mismatch for FRetryRequestResponse::RetryDelay");
static_assert(offsetof(FRetryRequestResponse, ErrorCode) == 4, "Offset mismatch for FRetryRequestResponse::ErrorCode");
static_assert(offsetof(FRetryRequestResponse, RetryAttempt) == 8, "Offset mismatch for FRetryRequestResponse::RetryAttempt");
static_assert(offsetof(FRetryRequestResponse, ShouldRetry) == 12, "Offset mismatch for FRetryRequestResponse::ShouldRetry");
static_assert(offsetof(FRetryRequestResponse, SwitchCDN) == 13, "Offset mismatch for FRetryRequestResponse::SwitchCDN");

// /Script/EpicStreamMediaSource.EpicStreamMediaSource
// Kind: Class; super: StreamMediaSource
class UEpicStreamMediaSource
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    FString VideoStreamSource; // 0x0058 (Size: 0x10, Type: StrProperty)
    float VideoStreamSourceAB; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    TMap<void*, void*> VideoID; // 0x0070 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsLive; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlurlLive; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0082
    std::int32_t MaxResolution; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxBandwidth; // 0x0088 (Size: 0x4, Type: IntProperty)
    float AspectRatio; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShareLock; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAudioOnly; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPartySync; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0093
    float MediaDuration; // 0x0094 (Size: 0x4, Type: FloatProperty)
    FString mimetype; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString StreamDenyHTTPCode; // 0x00A8 (Size: 0x10, Type: StrProperty)
    void* CDNHostNames; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableCDNFailureRetries; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBLURLRetries; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x00C2
    std::int32_t MaxBLURLRetryAttempts; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableScrubOptimization; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00C9
    std::int32_t SeekBitrate; // 0x00CC (Size: 0x4, Type: IntProperty)
    std::int32_t CacheSizeKiB; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t TimeToCacheMilliseconds; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x318]; // 0x00D8
    FMulticastInlineDelegate OnVideoUrlSuccess; // 0x03F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVideoUrlFailed; // 0x0400 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaDataFailure; // 0x0410 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMediaLicensedAudioTreatmentChanged; // 0x0420 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0430
    void* EpicMediaDownloadLocalizedOverlays; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    FString ProtectUserFromAVSettings; // 0x0448 (Size: 0x10, Type: StrProperty)
    std::uint8_t OutputProtectionTypeVideo; // 0x0458 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OutputProtectionTypeAudio; // 0x0459 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x6]; // 0x045A
    FString StreamID; // 0x0460 (Size: 0x10, Type: StrProperty)
    FString StreamID_Development; // 0x0470 (Size: 0x10, Type: StrProperty)
    FString StreamLabel; // 0x0480 (Size: 0x10, Type: StrProperty)
    void* LocalFilePlaybackAsset; // 0x0490 (Size: 0x8, Type: ObjectProperty)
    double HighestFramerate; // 0x0498 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0009[0x18]; // 0x04A0
    TMap<void*, void*> RetryAttempts; // 0x04B8 (Size: 0x10, Type: MapProperty)
    TArray<void*> RetryErrorCodes; // 0x04C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SwitchCDNErrorCodes; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RetryDelayMS; // 0x04E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000A[0x18]; // 0x04F8
    void* MetadataResolver; // 0x0510 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEpicStreamMediaSource, VideoStreamSource) == 88, "Offset mismatch for UEpicStreamMediaSource::VideoStreamSource");
static_assert(offsetof(UEpicStreamMediaSource, VideoStreamSourceAB) == 104, "Offset mismatch for UEpicStreamMediaSource::VideoStreamSourceAB");
static_assert(offsetof(UEpicStreamMediaSource, VideoID) == 112, "Offset mismatch for UEpicStreamMediaSource::VideoID");
static_assert(offsetof(UEpicStreamMediaSource, bIsLive) == 128, "Offset mismatch for UEpicStreamMediaSource::bIsLive");
static_assert(offsetof(UEpicStreamMediaSource, bBlurlLive) == 129, "Offset mismatch for UEpicStreamMediaSource::bBlurlLive");
static_assert(offsetof(UEpicStreamMediaSource, MaxResolution) == 132, "Offset mismatch for UEpicStreamMediaSource::MaxResolution");
static_assert(offsetof(UEpicStreamMediaSource, MaxBandwidth) == 136, "Offset mismatch for UEpicStreamMediaSource::MaxBandwidth");
static_assert(offsetof(UEpicStreamMediaSource, AspectRatio) == 140, "Offset mismatch for UEpicStreamMediaSource::AspectRatio");
static_assert(offsetof(UEpicStreamMediaSource, bShareLock) == 144, "Offset mismatch for UEpicStreamMediaSource::bShareLock");
static_assert(offsetof(UEpicStreamMediaSource, bAudioOnly) == 145, "Offset mismatch for UEpicStreamMediaSource::bAudioOnly");
static_assert(offsetof(UEpicStreamMediaSource, bPartySync) == 146, "Offset mismatch for UEpicStreamMediaSource::bPartySync");
static_assert(offsetof(UEpicStreamMediaSource, MediaDuration) == 148, "Offset mismatch for UEpicStreamMediaSource::MediaDuration");
static_assert(offsetof(UEpicStreamMediaSource, mimetype) == 152, "Offset mismatch for UEpicStreamMediaSource::mimetype");
static_assert(offsetof(UEpicStreamMediaSource, StreamDenyHTTPCode) == 168, "Offset mismatch for UEpicStreamMediaSource::StreamDenyHTTPCode");
static_assert(offsetof(UEpicStreamMediaSource, CDNHostNames) == 184, "Offset mismatch for UEpicStreamMediaSource::CDNHostNames");
static_assert(offsetof(UEpicStreamMediaSource, bEnableCDNFailureRetries) == 192, "Offset mismatch for UEpicStreamMediaSource::bEnableCDNFailureRetries");
static_assert(offsetof(UEpicStreamMediaSource, bEnableBLURLRetries) == 193, "Offset mismatch for UEpicStreamMediaSource::bEnableBLURLRetries");
static_assert(offsetof(UEpicStreamMediaSource, MaxBLURLRetryAttempts) == 196, "Offset mismatch for UEpicStreamMediaSource::MaxBLURLRetryAttempts");
static_assert(offsetof(UEpicStreamMediaSource, bEnableScrubOptimization) == 200, "Offset mismatch for UEpicStreamMediaSource::bEnableScrubOptimization");
static_assert(offsetof(UEpicStreamMediaSource, SeekBitrate) == 204, "Offset mismatch for UEpicStreamMediaSource::SeekBitrate");
static_assert(offsetof(UEpicStreamMediaSource, CacheSizeKiB) == 208, "Offset mismatch for UEpicStreamMediaSource::CacheSizeKiB");
static_assert(offsetof(UEpicStreamMediaSource, TimeToCacheMilliseconds) == 212, "Offset mismatch for UEpicStreamMediaSource::TimeToCacheMilliseconds");
static_assert(offsetof(UEpicStreamMediaSource, OnVideoUrlSuccess) == 1008, "Offset mismatch for UEpicStreamMediaSource::OnVideoUrlSuccess");
static_assert(offsetof(UEpicStreamMediaSource, OnVideoUrlFailed) == 1024, "Offset mismatch for UEpicStreamMediaSource::OnVideoUrlFailed");
static_assert(offsetof(UEpicStreamMediaSource, OnMetaDataFailure) == 1040, "Offset mismatch for UEpicStreamMediaSource::OnMetaDataFailure");
static_assert(offsetof(UEpicStreamMediaSource, OnMediaLicensedAudioTreatmentChanged) == 1056, "Offset mismatch for UEpicStreamMediaSource::OnMediaLicensedAudioTreatmentChanged");
static_assert(offsetof(UEpicStreamMediaSource, EpicMediaDownloadLocalizedOverlays) == 1088, "Offset mismatch for UEpicStreamMediaSource::EpicMediaDownloadLocalizedOverlays");
static_assert(offsetof(UEpicStreamMediaSource, ProtectUserFromAVSettings) == 1096, "Offset mismatch for UEpicStreamMediaSource::ProtectUserFromAVSettings");
static_assert(offsetof(UEpicStreamMediaSource, OutputProtectionTypeVideo) == 1112, "Offset mismatch for UEpicStreamMediaSource::OutputProtectionTypeVideo");
static_assert(offsetof(UEpicStreamMediaSource, OutputProtectionTypeAudio) == 1113, "Offset mismatch for UEpicStreamMediaSource::OutputProtectionTypeAudio");
static_assert(offsetof(UEpicStreamMediaSource, StreamID) == 1120, "Offset mismatch for UEpicStreamMediaSource::StreamID");
static_assert(offsetof(UEpicStreamMediaSource, StreamID_Development) == 1136, "Offset mismatch for UEpicStreamMediaSource::StreamID_Development");
static_assert(offsetof(UEpicStreamMediaSource, StreamLabel) == 1152, "Offset mismatch for UEpicStreamMediaSource::StreamLabel");
static_assert(offsetof(UEpicStreamMediaSource, LocalFilePlaybackAsset) == 1168, "Offset mismatch for UEpicStreamMediaSource::LocalFilePlaybackAsset");
static_assert(offsetof(UEpicStreamMediaSource, HighestFramerate) == 1176, "Offset mismatch for UEpicStreamMediaSource::HighestFramerate");
static_assert(offsetof(UEpicStreamMediaSource, RetryAttempts) == 1208, "Offset mismatch for UEpicStreamMediaSource::RetryAttempts");
static_assert(offsetof(UEpicStreamMediaSource, RetryErrorCodes) == 1224, "Offset mismatch for UEpicStreamMediaSource::RetryErrorCodes");
static_assert(offsetof(UEpicStreamMediaSource, SwitchCDNErrorCodes) == 1240, "Offset mismatch for UEpicStreamMediaSource::SwitchCDNErrorCodes");
static_assert(offsetof(UEpicStreamMediaSource, RetryDelayMS) == 1256, "Offset mismatch for UEpicStreamMediaSource::RetryDelayMS");
static_assert(offsetof(UEpicStreamMediaSource, MetadataResolver) == 1296, "Offset mismatch for UEpicStreamMediaSource::MetadataResolver");
