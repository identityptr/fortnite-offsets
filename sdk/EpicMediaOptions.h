/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaOptions
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaOptions.EpicMediaOptions
// Kind: ScriptStruct; super: none
struct FEpicMediaOptions
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::int32_t FrameRate; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxResolutionForMediaStreaming; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxElectraVerticalResolutionOf60fpsVideos; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxElectraVerticalResolutionOfWindowsSWD; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bElectraLiveUseConservativePresentationOffset; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bElectraUseDedicatedMediaSegmentDownloadThreads; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    double ElectraLivePresentationOffset; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double ElectraLiveAudioPresentationOffset; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bDisableBlastURLStreamSource; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCN; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x002A
    TArray<void*> VideoEVMap; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CDNDistribution; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VODHostNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VODHostNamesCN; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LiveHostNames; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LiveHostNamesCN; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VODHostNamesDev; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LiveHostNamesDev; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VODHostNamesHF; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LiveHostNamesHF; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VODHostNamesCNHF; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LiveHostNamesCNHF; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseQuicksilverEntryPoint; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x17]; // 0x00F1
    std::uint8_t bUseSegmentCaching; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceSegmentCaching; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x010A
    float MetadataRequestTimeout; // 0x010C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEpicMediaOptions, FrameRate) == 4, "Offset mismatch for FEpicMediaOptions::FrameRate");
static_assert(offsetof(FEpicMediaOptions, MaxResolutionForMediaStreaming) == 8, "Offset mismatch for FEpicMediaOptions::MaxResolutionForMediaStreaming");
static_assert(offsetof(FEpicMediaOptions, MaxElectraVerticalResolutionOf60fpsVideos) == 12, "Offset mismatch for FEpicMediaOptions::MaxElectraVerticalResolutionOf60fpsVideos");
static_assert(offsetof(FEpicMediaOptions, MaxElectraVerticalResolutionOfWindowsSWD) == 16, "Offset mismatch for FEpicMediaOptions::MaxElectraVerticalResolutionOfWindowsSWD");
static_assert(offsetof(FEpicMediaOptions, bElectraLiveUseConservativePresentationOffset) == 20, "Offset mismatch for FEpicMediaOptions::bElectraLiveUseConservativePresentationOffset");
static_assert(offsetof(FEpicMediaOptions, bElectraUseDedicatedMediaSegmentDownloadThreads) == 21, "Offset mismatch for FEpicMediaOptions::bElectraUseDedicatedMediaSegmentDownloadThreads");
static_assert(offsetof(FEpicMediaOptions, ElectraLivePresentationOffset) == 24, "Offset mismatch for FEpicMediaOptions::ElectraLivePresentationOffset");
static_assert(offsetof(FEpicMediaOptions, ElectraLiveAudioPresentationOffset) == 32, "Offset mismatch for FEpicMediaOptions::ElectraLiveAudioPresentationOffset");
static_assert(offsetof(FEpicMediaOptions, bDisableBlastURLStreamSource) == 40, "Offset mismatch for FEpicMediaOptions::bDisableBlastURLStreamSource");
static_assert(offsetof(FEpicMediaOptions, bIsCN) == 41, "Offset mismatch for FEpicMediaOptions::bIsCN");
static_assert(offsetof(FEpicMediaOptions, VideoEVMap) == 48, "Offset mismatch for FEpicMediaOptions::VideoEVMap");
static_assert(offsetof(FEpicMediaOptions, CDNDistribution) == 64, "Offset mismatch for FEpicMediaOptions::CDNDistribution");
static_assert(offsetof(FEpicMediaOptions, VODHostNames) == 80, "Offset mismatch for FEpicMediaOptions::VODHostNames");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesCN) == 96, "Offset mismatch for FEpicMediaOptions::VODHostNamesCN");
static_assert(offsetof(FEpicMediaOptions, LiveHostNames) == 112, "Offset mismatch for FEpicMediaOptions::LiveHostNames");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesCN) == 128, "Offset mismatch for FEpicMediaOptions::LiveHostNamesCN");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesDev) == 144, "Offset mismatch for FEpicMediaOptions::VODHostNamesDev");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesDev) == 160, "Offset mismatch for FEpicMediaOptions::LiveHostNamesDev");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesHF) == 176, "Offset mismatch for FEpicMediaOptions::VODHostNamesHF");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesHF) == 192, "Offset mismatch for FEpicMediaOptions::LiveHostNamesHF");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesCNHF) == 208, "Offset mismatch for FEpicMediaOptions::VODHostNamesCNHF");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesCNHF) == 224, "Offset mismatch for FEpicMediaOptions::LiveHostNamesCNHF");
static_assert(offsetof(FEpicMediaOptions, bUseQuicksilverEntryPoint) == 240, "Offset mismatch for FEpicMediaOptions::bUseQuicksilverEntryPoint");
static_assert(offsetof(FEpicMediaOptions, bUseSegmentCaching) == 264, "Offset mismatch for FEpicMediaOptions::bUseSegmentCaching");
static_assert(offsetof(FEpicMediaOptions, bForceSegmentCaching) == 265, "Offset mismatch for FEpicMediaOptions::bForceSegmentCaching");
static_assert(offsetof(FEpicMediaOptions, MetadataRequestTimeout) == 268, "Offset mismatch for FEpicMediaOptions::MetadataRequestTimeout");

// /Script/EpicMediaOptions.EpicGlobalMediaOptions
// Kind: Class; super: Object
class UEpicGlobalMediaOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> VUIDListToAttemptRedirectToQuicksilverEntryPoint; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float RolloutPercentageToRedirectToQuicksilverEntryPoint; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEpicGlobalMediaOptions, VUIDListToAttemptRedirectToQuicksilverEntryPoint) == 40, "Offset mismatch for UEpicGlobalMediaOptions::VUIDListToAttemptRedirectToQuicksilverEntryPoint");
static_assert(offsetof(UEpicGlobalMediaOptions, RolloutPercentageToRedirectToQuicksilverEntryPoint) == 56, "Offset mismatch for UEpicGlobalMediaOptions::RolloutPercentageToRedirectToQuicksilverEntryPoint");
