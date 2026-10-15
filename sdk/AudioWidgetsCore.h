/**
 * decamp dumper generated SDK
 * Package: /Script/AudioWidgetsCore
 */
#pragma once
#include "Basic.h"

// /Script/AudioWidgetsCore.AudioMeterChannelInfo
// Kind: ScriptStruct; super: none
struct FAudioMeterChannelInfo
{
public:
    float MeterValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PeakValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ClippingValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MeterValueBarStart[0x1]; // 0x000C (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FAudioMeterChannelInfo, MeterValue) == 0, "Offset mismatch for FAudioMeterChannelInfo::MeterValue");
static_assert(offsetof(FAudioMeterChannelInfo, PeakValue) == 4, "Offset mismatch for FAudioMeterChannelInfo::PeakValue");
static_assert(offsetof(FAudioMeterChannelInfo, ClippingValue) == 8, "Offset mismatch for FAudioMeterChannelInfo::ClippingValue");
static_assert(offsetof(FAudioMeterChannelInfo, MeterValueBarStart) == 12, "Offset mismatch for FAudioMeterChannelInfo::MeterValueBarStart");

// /Script/AudioWidgetsCore.AudioMeterDefaultColorWidgetStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioMeterDefaultColorWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MeterBackgroundColor[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterValueColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterPeakColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterClippingColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterScaleColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterScaleLabelColor[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterBackgroundColor) == 8, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterBackgroundColor");
static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterValueColor) == 24, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterValueColor");
static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterPeakColor) == 40, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterPeakColor");
static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterClippingColor) == 56, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterClippingColor");
static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterScaleColor) == 72, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterScaleColor");
static_assert(offsetof(FAudioMeterDefaultColorWidgetStyle, MeterScaleLabelColor) == 88, "Offset mismatch for FAudioMeterDefaultColorWidgetStyle::MeterScaleLabelColor");

// /Script/AudioWidgetsCore.AudioMeterWidgetStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioMeterWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MeterValueImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MeterBackgroundImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MeterValueBackgroundImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MeterPeakImage[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MeterClippingImage[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MeterSize[0x10]; // 0x0430 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterPadding[0x10]; // 0x0440 (Size: 0x10, Type: StructProperty)
    float MeterValuePadding; // 0x0450 (Size: 0x4, Type: FloatProperty)
    float PeakValueWidth; // 0x0454 (Size: 0x4, Type: FloatProperty)
    float ClippingValueWidth; // 0x0458 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x045C
    std::uint8_t ValueRangeDb[0x10]; // 0x0460 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowScale; // 0x0470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleSide; // 0x0471 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0472
    float ScaleHashOffset; // 0x0474 (Size: 0x4, Type: FloatProperty)
    float ScaleHashWidth; // 0x0478 (Size: 0x4, Type: FloatProperty)
    float ScaleHashHeight; // 0x047C (Size: 0x4, Type: FloatProperty)
    std::int32_t DecibelsPerHash; // 0x0480 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0484
    std::uint8_t Font[0x1]; // 0x0488 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMeterWidgetStyle, MeterValueImage) == 16, "Offset mismatch for FAudioMeterWidgetStyle::MeterValueImage");
static_assert(offsetof(FAudioMeterWidgetStyle, BackgroundImage) == 192, "Offset mismatch for FAudioMeterWidgetStyle::BackgroundImage");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterBackgroundImage) == 368, "Offset mismatch for FAudioMeterWidgetStyle::MeterBackgroundImage");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterValueBackgroundImage) == 544, "Offset mismatch for FAudioMeterWidgetStyle::MeterValueBackgroundImage");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterPeakImage) == 720, "Offset mismatch for FAudioMeterWidgetStyle::MeterPeakImage");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterClippingImage) == 896, "Offset mismatch for FAudioMeterWidgetStyle::MeterClippingImage");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterSize) == 1072, "Offset mismatch for FAudioMeterWidgetStyle::MeterSize");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterPadding) == 1088, "Offset mismatch for FAudioMeterWidgetStyle::MeterPadding");
static_assert(offsetof(FAudioMeterWidgetStyle, MeterValuePadding) == 1104, "Offset mismatch for FAudioMeterWidgetStyle::MeterValuePadding");
static_assert(offsetof(FAudioMeterWidgetStyle, PeakValueWidth) == 1108, "Offset mismatch for FAudioMeterWidgetStyle::PeakValueWidth");
static_assert(offsetof(FAudioMeterWidgetStyle, ClippingValueWidth) == 1112, "Offset mismatch for FAudioMeterWidgetStyle::ClippingValueWidth");
static_assert(offsetof(FAudioMeterWidgetStyle, ValueRangeDb) == 1120, "Offset mismatch for FAudioMeterWidgetStyle::ValueRangeDb");
static_assert(offsetof(FAudioMeterWidgetStyle, bShowScale) == 1136, "Offset mismatch for FAudioMeterWidgetStyle::bShowScale");
static_assert(offsetof(FAudioMeterWidgetStyle, bScaleSide) == 1137, "Offset mismatch for FAudioMeterWidgetStyle::bScaleSide");
static_assert(offsetof(FAudioMeterWidgetStyle, ScaleHashOffset) == 1140, "Offset mismatch for FAudioMeterWidgetStyle::ScaleHashOffset");
static_assert(offsetof(FAudioMeterWidgetStyle, ScaleHashWidth) == 1144, "Offset mismatch for FAudioMeterWidgetStyle::ScaleHashWidth");
static_assert(offsetof(FAudioMeterWidgetStyle, ScaleHashHeight) == 1148, "Offset mismatch for FAudioMeterWidgetStyle::ScaleHashHeight");
static_assert(offsetof(FAudioMeterWidgetStyle, DecibelsPerHash) == 1152, "Offset mismatch for FAudioMeterWidgetStyle::DecibelsPerHash");
static_assert(offsetof(FAudioMeterWidgetStyle, Font) == 1160, "Offset mismatch for FAudioMeterWidgetStyle::Font");

// /Script/AudioWidgetsCore.LoudnessMeterDisplayOptions
// Kind: ScriptStruct; super: none
struct FLoudnessMeterDisplayOptions
{
public:
    std::uint8_t bShowValue; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMeter; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldMaxForValue; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldMaxForMeter; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Color[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLoudnessMeterDisplayOptions, bShowValue) == 0, "Offset mismatch for FLoudnessMeterDisplayOptions::bShowValue");
static_assert(offsetof(FLoudnessMeterDisplayOptions, bShowMeter) == 1, "Offset mismatch for FLoudnessMeterDisplayOptions::bShowMeter");
static_assert(offsetof(FLoudnessMeterDisplayOptions, bHoldMaxForValue) == 2, "Offset mismatch for FLoudnessMeterDisplayOptions::bHoldMaxForValue");
static_assert(offsetof(FLoudnessMeterDisplayOptions, bHoldMaxForMeter) == 3, "Offset mismatch for FLoudnessMeterDisplayOptions::bHoldMaxForMeter");
static_assert(offsetof(FLoudnessMeterDisplayOptions, Color) == 4, "Offset mismatch for FLoudnessMeterDisplayOptions::Color");

// /Script/AudioWidgetsCore.LoudnessMeterSettings
// Kind: ScriptStruct; super: none
struct FLoudnessMeterSettings
{
public:
    std::int32_t ConfigVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t LoudnessScaleRange; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t LoudnessScaleOffset; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LoudnessScaleTarget; // 0x000C (Size: 0x4, Type: IntProperty)
    float TruePeakLimit; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetColor[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseRelativeLoudnessScale; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAnalysisTimer; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0026
    std::uint8_t LongTermLoudness[0x14]; // 0x0028 (Size: 0x14, Type: StructProperty)
    std::uint8_t ShortTermLoudness[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    std::uint8_t MomentaryLoudness[0x14]; // 0x0050 (Size: 0x14, Type: StructProperty)
    std::uint8_t LoudnessRange[0x14]; // 0x0064 (Size: 0x14, Type: StructProperty)
    std::uint8_t TruePeak[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint64_t ValuesOrderingPermutation; // 0x0090 (Size: 0x8, Type: UInt64Property)
    std::uint64_t MetersOrderingPermutation; // 0x0098 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FLoudnessMeterSettings, ConfigVersion) == 0, "Offset mismatch for FLoudnessMeterSettings::ConfigVersion");
static_assert(offsetof(FLoudnessMeterSettings, LoudnessScaleRange) == 4, "Offset mismatch for FLoudnessMeterSettings::LoudnessScaleRange");
static_assert(offsetof(FLoudnessMeterSettings, LoudnessScaleOffset) == 8, "Offset mismatch for FLoudnessMeterSettings::LoudnessScaleOffset");
static_assert(offsetof(FLoudnessMeterSettings, LoudnessScaleTarget) == 12, "Offset mismatch for FLoudnessMeterSettings::LoudnessScaleTarget");
static_assert(offsetof(FLoudnessMeterSettings, TruePeakLimit) == 16, "Offset mismatch for FLoudnessMeterSettings::TruePeakLimit");
static_assert(offsetof(FLoudnessMeterSettings, TargetColor) == 20, "Offset mismatch for FLoudnessMeterSettings::TargetColor");
static_assert(offsetof(FLoudnessMeterSettings, bUseRelativeLoudnessScale) == 36, "Offset mismatch for FLoudnessMeterSettings::bUseRelativeLoudnessScale");
static_assert(offsetof(FLoudnessMeterSettings, bDisplayAnalysisTimer) == 37, "Offset mismatch for FLoudnessMeterSettings::bDisplayAnalysisTimer");
static_assert(offsetof(FLoudnessMeterSettings, LongTermLoudness) == 40, "Offset mismatch for FLoudnessMeterSettings::LongTermLoudness");
static_assert(offsetof(FLoudnessMeterSettings, ShortTermLoudness) == 60, "Offset mismatch for FLoudnessMeterSettings::ShortTermLoudness");
static_assert(offsetof(FLoudnessMeterSettings, MomentaryLoudness) == 80, "Offset mismatch for FLoudnessMeterSettings::MomentaryLoudness");
static_assert(offsetof(FLoudnessMeterSettings, LoudnessRange) == 100, "Offset mismatch for FLoudnessMeterSettings::LoudnessRange");
static_assert(offsetof(FLoudnessMeterSettings, TruePeak) == 120, "Offset mismatch for FLoudnessMeterSettings::TruePeak");
static_assert(offsetof(FLoudnessMeterSettings, ValuesOrderingPermutation) == 144, "Offset mismatch for FLoudnessMeterSettings::ValuesOrderingPermutation");
static_assert(offsetof(FLoudnessMeterSettings, MetersOrderingPermutation) == 152, "Offset mismatch for FLoudnessMeterSettings::MetersOrderingPermutation");
