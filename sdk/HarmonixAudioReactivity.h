/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixAudioReactivity
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResults
// Kind: ScriptStruct; super: none
struct FHarmonixAudioAnalyzerResults
{
public:
    std::uint8_t FFTResults[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> ArbitraryTextureData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHarmonixAudioAnalyzerResults, FFTResults) == 0, "Offset mismatch for FHarmonixAudioAnalyzerResults::FFTResults");
static_assert(offsetof(FHarmonixAudioAnalyzerResults, ArbitraryTextureData) == 16, "Offset mismatch for FHarmonixAudioAnalyzerResults::ArbitraryTextureData");

// /Script/HarmonixAudioReactivity.HarmonixAudioAnalysisTexture
// Kind: Class; super: HarmonixHysteresisTextureBase
class UHarmonixAudioAnalysisTexture
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    TWeakObjectPtr<void> MusicClock; // 0x0160 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Type; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0169
    std::uint8_t InstanceName[0x4]; // 0x016C (Size: 0x4, Type: NameProperty)
    std::uint8_t ResetMonoPeakOnUpdate; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WarnIfNotEnabled; // 0x0171 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHarmonixAudioAnalysisTexture, MusicClock) == 352, "Offset mismatch for UHarmonixAudioAnalysisTexture::MusicClock");
static_assert(offsetof(UHarmonixAudioAnalysisTexture, Type) == 360, "Offset mismatch for UHarmonixAudioAnalysisTexture::Type");
static_assert(offsetof(UHarmonixAudioAnalysisTexture, InstanceName) == 364, "Offset mismatch for UHarmonixAudioAnalysisTexture::InstanceName");
static_assert(offsetof(UHarmonixAudioAnalysisTexture, ResetMonoPeakOnUpdate) == 368, "Offset mismatch for UHarmonixAudioAnalysisTexture::ResetMonoPeakOnUpdate");
static_assert(offsetof(UHarmonixAudioAnalysisTexture, WarnIfNotEnabled) == 369, "Offset mismatch for UHarmonixAudioAnalysisTexture::WarnIfNotEnabled");

// /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher
// Kind: Class; super: EngineSubsystem
class UHarmonixAudioAnalyzerResultsDispatcher
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider
// Kind: Class; super: Object
class UHarmonixAudioAnalyzerResultsProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixAudioReactivity.HarmonixHysteresisTextureBase
// Kind: Class; super: HarmonixTextureBase
class UHarmonixHysteresisTextureBase
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    float TicksPerShift; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x013C
    std::int32_t NumHysteresisSamples; // 0x0140 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UHarmonixHysteresisTextureBase, TicksPerShift) == 312, "Offset mismatch for UHarmonixHysteresisTextureBase::TicksPerShift");
static_assert(offsetof(UHarmonixHysteresisTextureBase, NumHysteresisSamples) == 320, "Offset mismatch for UHarmonixHysteresisTextureBase::NumHysteresisSamples");

// /Script/HarmonixAudioReactivity.HarmonixTextureBase
// Kind: Class; super: Texture
class UHarmonixTextureBase
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::int32_t Width; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    std::uint8_t TextureFilterMode; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureTilingMode; // 0x0129 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UHarmonixTextureBase, Width) == 288, "Offset mismatch for UHarmonixTextureBase::Width");
static_assert(offsetof(UHarmonixTextureBase, TextureFilterMode) == 296, "Offset mismatch for UHarmonixTextureBase::TextureFilterMode");
static_assert(offsetof(UHarmonixTextureBase, TextureTilingMode) == 297, "Offset mismatch for UHarmonixTextureBase::TextureTilingMode");
