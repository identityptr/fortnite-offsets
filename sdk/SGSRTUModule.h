/**
 * decamp dumper generated SDK
 * Package: /Script/SGSRTUModule
 */
#pragma once
#include "Basic.h"

// /Script/SGSRTUModule.SGSRSettings
// Kind: Class; super: DeveloperSettings
class USGSRSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t UpscalingMethod; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    std::uint8_t Halfprecision; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0039
    std::uint8_t SUTarget; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x003D
    std::uint8_t AutoExposure; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0041
    std::uint8_t QualityMode; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0045
    std::uint8_t HistoryFormat; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0049
    std::uint8_t AdjustMipBias; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ForceVertexDeformationOutputsVelocity; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t PixelLock; // 0x004E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USGSRSettings, bEnabled) == 48, "Offset mismatch for USGSRSettings::bEnabled");
static_assert(offsetof(USGSRSettings, UpscalingMethod) == 52, "Offset mismatch for USGSRSettings::UpscalingMethod");
static_assert(offsetof(USGSRSettings, Halfprecision) == 56, "Offset mismatch for USGSRSettings::Halfprecision");
static_assert(offsetof(USGSRSettings, SUTarget) == 60, "Offset mismatch for USGSRSettings::SUTarget");
static_assert(offsetof(USGSRSettings, AutoExposure) == 64, "Offset mismatch for USGSRSettings::AutoExposure");
static_assert(offsetof(USGSRSettings, QualityMode) == 68, "Offset mismatch for USGSRSettings::QualityMode");
static_assert(offsetof(USGSRSettings, HistoryFormat) == 72, "Offset mismatch for USGSRSettings::HistoryFormat");
static_assert(offsetof(USGSRSettings, AdjustMipBias) == 76, "Offset mismatch for USGSRSettings::AdjustMipBias");
static_assert(offsetof(USGSRSettings, ForceVertexDeformationOutputsVelocity) == 77, "Offset mismatch for USGSRSettings::ForceVertexDeformationOutputsVelocity");
static_assert(offsetof(USGSRSettings, PixelLock) == 78, "Offset mismatch for USGSRSettings::PixelLock");
