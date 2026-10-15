/**
 * decamp dumper generated SDK
 * Package: /Script/RubberBandPitchShifter
 */
#pragma once
#include "Basic.h"

// /Script/RubberBandPitchShifter.PlatformStretcherCounts
// Kind: ScriptStruct; super: none
struct FPlatformStretcherCounts
{
public:
    std::uint32_t NumProStretchers; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumEffStretchers; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumEffWithSpectralStretchers; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumMobileStretchers; // 0x000C (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumMobileWithSpectralStretchers; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bForceMonoProcessing; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPoolGrowth; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlatformStretcherCounts, NumProStretchers) == 0, "Offset mismatch for FPlatformStretcherCounts::NumProStretchers");
static_assert(offsetof(FPlatformStretcherCounts, NumEffStretchers) == 4, "Offset mismatch for FPlatformStretcherCounts::NumEffStretchers");
static_assert(offsetof(FPlatformStretcherCounts, NumEffWithSpectralStretchers) == 8, "Offset mismatch for FPlatformStretcherCounts::NumEffWithSpectralStretchers");
static_assert(offsetof(FPlatformStretcherCounts, NumMobileStretchers) == 12, "Offset mismatch for FPlatformStretcherCounts::NumMobileStretchers");
static_assert(offsetof(FPlatformStretcherCounts, NumMobileWithSpectralStretchers) == 16, "Offset mismatch for FPlatformStretcherCounts::NumMobileWithSpectralStretchers");
static_assert(offsetof(FPlatformStretcherCounts, bForceMonoProcessing) == 20, "Offset mismatch for FPlatformStretcherCounts::bForceMonoProcessing");
static_assert(offsetof(FPlatformStretcherCounts, bAllowPoolGrowth) == 21, "Offset mismatch for FPlatformStretcherCounts::bAllowPoolGrowth");

// /Script/RubberBandPitchShifter.RubberBandPitchShifterConfig
// Kind: Class; super: StretcherAndPitchShifterConfig
class URubberBandPitchShifterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAllowPoolGrowthInEditor; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t DefaultStretcherCounts[0x18]; // 0x002C (Size: 0x18, Type: StructProperty)
    std::uint8_t SwitchStretcherCounts[0x18]; // 0x0044 (Size: 0x18, Type: StructProperty)
    std::uint8_t PS4StretcherCounts[0x18]; // 0x005C (Size: 0x18, Type: StructProperty)
    std::uint8_t PS5StretcherCounts[0x18]; // 0x0074 (Size: 0x18, Type: StructProperty)
    std::uint8_t XboxOneStretcherCounts[0x18]; // 0x008C (Size: 0x18, Type: StructProperty)
    std::uint8_t XSXStretcherCounts[0x18]; // 0x00A4 (Size: 0x18, Type: StructProperty)
    std::uint8_t AndroidStretcherCounts[0x18]; // 0x00BC (Size: 0x18, Type: StructProperty)
    std::uint8_t IOSStretcherCounts[0x1]; // 0x00D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URubberBandPitchShifterConfig, bAllowPoolGrowthInEditor) == 40, "Offset mismatch for URubberBandPitchShifterConfig::bAllowPoolGrowthInEditor");
static_assert(offsetof(URubberBandPitchShifterConfig, DefaultStretcherCounts) == 44, "Offset mismatch for URubberBandPitchShifterConfig::DefaultStretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, SwitchStretcherCounts) == 68, "Offset mismatch for URubberBandPitchShifterConfig::SwitchStretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, PS4StretcherCounts) == 92, "Offset mismatch for URubberBandPitchShifterConfig::PS4StretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, PS5StretcherCounts) == 116, "Offset mismatch for URubberBandPitchShifterConfig::PS5StretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, XboxOneStretcherCounts) == 140, "Offset mismatch for URubberBandPitchShifterConfig::XboxOneStretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, XSXStretcherCounts) == 164, "Offset mismatch for URubberBandPitchShifterConfig::XSXStretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, AndroidStretcherCounts) == 188, "Offset mismatch for URubberBandPitchShifterConfig::AndroidStretcherCounts");
static_assert(offsetof(URubberBandPitchShifterConfig, IOSStretcherCounts) == 212, "Offset mismatch for URubberBandPitchShifterConfig::IOSStretcherCounts");
