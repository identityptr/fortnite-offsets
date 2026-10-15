/**
 * decamp dumper generated SDK
 * Package: /Script/AudioWidgets
 */
#pragma once
#include "Basic.h"

// /Script/AudioWidgets.AudioMaterialButtonStyle
// Kind: ScriptStruct; super: AudioMaterialWidgetStyle
struct FAudioMaterialButtonStyle
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t ButtonMainColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonMainColorTint[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonMainColorTint_2[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonAccentColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonShadowColor[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonUnpressedOutlineColor[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonPressedOutlineColor[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialButtonStyle, ButtonMainColor) == 24, "Offset mismatch for FAudioMaterialButtonStyle::ButtonMainColor");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonMainColorTint) == 40, "Offset mismatch for FAudioMaterialButtonStyle::ButtonMainColorTint");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonMainColorTint_2) == 56, "Offset mismatch for FAudioMaterialButtonStyle::ButtonMainColorTint_2");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonAccentColor) == 72, "Offset mismatch for FAudioMaterialButtonStyle::ButtonAccentColor");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonShadowColor) == 88, "Offset mismatch for FAudioMaterialButtonStyle::ButtonShadowColor");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonUnpressedOutlineColor) == 104, "Offset mismatch for FAudioMaterialButtonStyle::ButtonUnpressedOutlineColor");
static_assert(offsetof(FAudioMaterialButtonStyle, ButtonPressedOutlineColor) == 120, "Offset mismatch for FAudioMaterialButtonStyle::ButtonPressedOutlineColor");

// /Script/AudioWidgets.AudioMaterialEnvelopeSettings
// Kind: ScriptStruct; super: none
struct FAudioMaterialEnvelopeSettings
{
public:
    std::uint8_t EnvelopeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AttackCurve; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AttackValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AttackTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DecayCurve; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SustainValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ReleaseCurve; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioMaterialEnvelopeSettings, EnvelopeType) == 0, "Offset mismatch for FAudioMaterialEnvelopeSettings::EnvelopeType");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, AttackCurve) == 4, "Offset mismatch for FAudioMaterialEnvelopeSettings::AttackCurve");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, AttackValue) == 8, "Offset mismatch for FAudioMaterialEnvelopeSettings::AttackValue");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, AttackTime) == 12, "Offset mismatch for FAudioMaterialEnvelopeSettings::AttackTime");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, DecayCurve) == 16, "Offset mismatch for FAudioMaterialEnvelopeSettings::DecayCurve");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, DecayTime) == 20, "Offset mismatch for FAudioMaterialEnvelopeSettings::DecayTime");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, SustainValue) == 24, "Offset mismatch for FAudioMaterialEnvelopeSettings::SustainValue");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, ReleaseCurve) == 28, "Offset mismatch for FAudioMaterialEnvelopeSettings::ReleaseCurve");
static_assert(offsetof(FAudioMaterialEnvelopeSettings, ReleaseTime) == 32, "Offset mismatch for FAudioMaterialEnvelopeSettings::ReleaseTime");

// /Script/AudioWidgets.AudioMaterialEnvelopeStyle
// Kind: ScriptStruct; super: AudioMaterialWidgetStyle
struct FAudioMaterialEnvelopeStyle
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t CurveColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutlineColor[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialEnvelopeStyle, CurveColor) == 24, "Offset mismatch for FAudioMaterialEnvelopeStyle::CurveColor");
static_assert(offsetof(FAudioMaterialEnvelopeStyle, BackgroundColor) == 40, "Offset mismatch for FAudioMaterialEnvelopeStyle::BackgroundColor");
static_assert(offsetof(FAudioMaterialEnvelopeStyle, OutlineColor) == 56, "Offset mismatch for FAudioMaterialEnvelopeStyle::OutlineColor");

// /Script/AudioWidgets.AudioMaterialKnobStyle
// Kind: ScriptStruct; super: AudioMaterialWidgetStyle
struct FAudioMaterialKnobStyle
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t KnobMainColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobAccentColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobShadowColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobSmoothBevelColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobIndicatorDotColor[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobEdgeFillColor[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarColor[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarShadowColor[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarFillMinColor[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarFillMidColor[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarFillMaxColor[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t KnobBarFillTintColor[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TextBoxStyle[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialKnobStyle, KnobMainColor) == 24, "Offset mismatch for FAudioMaterialKnobStyle::KnobMainColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobAccentColor) == 40, "Offset mismatch for FAudioMaterialKnobStyle::KnobAccentColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobShadowColor) == 56, "Offset mismatch for FAudioMaterialKnobStyle::KnobShadowColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobSmoothBevelColor) == 72, "Offset mismatch for FAudioMaterialKnobStyle::KnobSmoothBevelColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobIndicatorDotColor) == 88, "Offset mismatch for FAudioMaterialKnobStyle::KnobIndicatorDotColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobEdgeFillColor) == 104, "Offset mismatch for FAudioMaterialKnobStyle::KnobEdgeFillColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarColor) == 120, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarShadowColor) == 136, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarShadowColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarFillMinColor) == 152, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarFillMinColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarFillMidColor) == 168, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarFillMidColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarFillMaxColor) == 184, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarFillMaxColor");
static_assert(offsetof(FAudioMaterialKnobStyle, KnobBarFillTintColor) == 200, "Offset mismatch for FAudioMaterialKnobStyle::KnobBarFillTintColor");
static_assert(offsetof(FAudioMaterialKnobStyle, TextBoxStyle) == 224, "Offset mismatch for FAudioMaterialKnobStyle::TextBoxStyle");

// /Script/AudioWidgets.AudioMaterialMeterStyle
// Kind: ScriptStruct; super: AudioMaterialWidgetStyle
struct FAudioMaterialMeterStyle
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t MeterFillMinColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterFillMidColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterFillMaxColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterFillBackgroundColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterPadding[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t ValueRangeDb[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowScale; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleSide; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007A
    float ScaleHashOffset; // 0x007C (Size: 0x4, Type: FloatProperty)
    float ScaleHashWidth; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float ScaleHashHeight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t DecibelsPerHash; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x008C
    std::uint8_t Font[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialMeterStyle, MeterFillMinColor) == 24, "Offset mismatch for FAudioMaterialMeterStyle::MeterFillMinColor");
static_assert(offsetof(FAudioMaterialMeterStyle, MeterFillMidColor) == 40, "Offset mismatch for FAudioMaterialMeterStyle::MeterFillMidColor");
static_assert(offsetof(FAudioMaterialMeterStyle, MeterFillMaxColor) == 56, "Offset mismatch for FAudioMaterialMeterStyle::MeterFillMaxColor");
static_assert(offsetof(FAudioMaterialMeterStyle, MeterFillBackgroundColor) == 72, "Offset mismatch for FAudioMaterialMeterStyle::MeterFillBackgroundColor");
static_assert(offsetof(FAudioMaterialMeterStyle, MeterPadding) == 88, "Offset mismatch for FAudioMaterialMeterStyle::MeterPadding");
static_assert(offsetof(FAudioMaterialMeterStyle, ValueRangeDb) == 104, "Offset mismatch for FAudioMaterialMeterStyle::ValueRangeDb");
static_assert(offsetof(FAudioMaterialMeterStyle, bShowScale) == 120, "Offset mismatch for FAudioMaterialMeterStyle::bShowScale");
static_assert(offsetof(FAudioMaterialMeterStyle, bScaleSide) == 121, "Offset mismatch for FAudioMaterialMeterStyle::bScaleSide");
static_assert(offsetof(FAudioMaterialMeterStyle, ScaleHashOffset) == 124, "Offset mismatch for FAudioMaterialMeterStyle::ScaleHashOffset");
static_assert(offsetof(FAudioMaterialMeterStyle, ScaleHashWidth) == 128, "Offset mismatch for FAudioMaterialMeterStyle::ScaleHashWidth");
static_assert(offsetof(FAudioMaterialMeterStyle, ScaleHashHeight) == 132, "Offset mismatch for FAudioMaterialMeterStyle::ScaleHashHeight");
static_assert(offsetof(FAudioMaterialMeterStyle, DecibelsPerHash) == 136, "Offset mismatch for FAudioMaterialMeterStyle::DecibelsPerHash");
static_assert(offsetof(FAudioMaterialMeterStyle, Font) == 144, "Offset mismatch for FAudioMaterialMeterStyle::Font");

// /Script/AudioWidgets.AudioMaterialSliderStyle
// Kind: ScriptStruct; super: AudioMaterialWidgetStyle
struct FAudioMaterialSliderStyle
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t SliderBackgroundColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBackgroundAccentColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderValueMainColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderHandleMainColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderHandleOutlineColor[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t TextBoxStyle[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialSliderStyle, SliderBackgroundColor) == 24, "Offset mismatch for FAudioMaterialSliderStyle::SliderBackgroundColor");
static_assert(offsetof(FAudioMaterialSliderStyle, SliderBackgroundAccentColor) == 40, "Offset mismatch for FAudioMaterialSliderStyle::SliderBackgroundAccentColor");
static_assert(offsetof(FAudioMaterialSliderStyle, SliderValueMainColor) == 56, "Offset mismatch for FAudioMaterialSliderStyle::SliderValueMainColor");
static_assert(offsetof(FAudioMaterialSliderStyle, SliderHandleMainColor) == 72, "Offset mismatch for FAudioMaterialSliderStyle::SliderHandleMainColor");
static_assert(offsetof(FAudioMaterialSliderStyle, SliderHandleOutlineColor) == 88, "Offset mismatch for FAudioMaterialSliderStyle::SliderHandleOutlineColor");
static_assert(offsetof(FAudioMaterialSliderStyle, TextBoxStyle) == 112, "Offset mismatch for FAudioMaterialSliderStyle::TextBoxStyle");

// /Script/AudioWidgets.AudioMaterialWidgetStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioMaterialWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DesiredSize[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioMaterialWidgetStyle, Material) == 8, "Offset mismatch for FAudioMaterialWidgetStyle::Material");
static_assert(offsetof(FAudioMaterialWidgetStyle, DesiredSize) == 16, "Offset mismatch for FAudioMaterialWidgetStyle::DesiredSize");

// /Script/AudioWidgets.AudioMeterDefaultColorStyle
// Kind: ScriptStruct; super: AudioMeterDefaultColorWidgetStyle
struct FAudioMeterDefaultColorStyle
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

static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterBackgroundColor) == 8, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterBackgroundColor");
static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterValueColor) == 24, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterValueColor");
static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterPeakColor) == 40, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterPeakColor");
static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterClippingColor) == 56, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterClippingColor");
static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterScaleColor) == 72, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterScaleColor");
static_assert(offsetof(FAudioMeterDefaultColorStyle, MeterScaleLabelColor) == 88, "Offset mismatch for FAudioMeterDefaultColorStyle::MeterScaleLabelColor");

// /Script/AudioWidgets.AudioMeterStyle
// Kind: ScriptStruct; super: AudioMeterWidgetStyle
struct FAudioMeterStyle
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

static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 16, "Offset mismatch for FAudioMeterStyle::MeterValueImage");
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 192, "Offset mismatch for FAudioMeterStyle::BackgroundImage");
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 368, "Offset mismatch for FAudioMeterStyle::MeterBackgroundImage");
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 544, "Offset mismatch for FAudioMeterStyle::MeterValueBackgroundImage");
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 720, "Offset mismatch for FAudioMeterStyle::MeterPeakImage");
static_assert(offsetof(FAudioMeterStyle, MeterClippingImage) == 896, "Offset mismatch for FAudioMeterStyle::MeterClippingImage");
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 1072, "Offset mismatch for FAudioMeterStyle::MeterSize");
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 1088, "Offset mismatch for FAudioMeterStyle::MeterPadding");
static_assert(offsetof(FAudioMeterStyle, MeterValuePadding) == 1104, "Offset mismatch for FAudioMeterStyle::MeterValuePadding");
static_assert(offsetof(FAudioMeterStyle, PeakValueWidth) == 1108, "Offset mismatch for FAudioMeterStyle::PeakValueWidth");
static_assert(offsetof(FAudioMeterStyle, ClippingValueWidth) == 1112, "Offset mismatch for FAudioMeterStyle::ClippingValueWidth");
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 1120, "Offset mismatch for FAudioMeterStyle::ValueRangeDb");
static_assert(offsetof(FAudioMeterStyle, bShowScale) == 1136, "Offset mismatch for FAudioMeterStyle::bShowScale");
static_assert(offsetof(FAudioMeterStyle, bScaleSide) == 1137, "Offset mismatch for FAudioMeterStyle::bScaleSide");
static_assert(offsetof(FAudioMeterStyle, ScaleHashOffset) == 1140, "Offset mismatch for FAudioMeterStyle::ScaleHashOffset");
static_assert(offsetof(FAudioMeterStyle, ScaleHashWidth) == 1144, "Offset mismatch for FAudioMeterStyle::ScaleHashWidth");
static_assert(offsetof(FAudioMeterStyle, ScaleHashHeight) == 1148, "Offset mismatch for FAudioMeterStyle::ScaleHashHeight");
static_assert(offsetof(FAudioMeterStyle, DecibelsPerHash) == 1152, "Offset mismatch for FAudioMeterStyle::DecibelsPerHash");
static_assert(offsetof(FAudioMeterStyle, Font) == 1160, "Offset mismatch for FAudioMeterStyle::Font");

// /Script/AudioWidgets.AudioOscilloscopePanelStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioOscilloscopePanelStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TimeRulerStyle[0x230]; // 0x0010 (Size: 0x230, Type: StructProperty)
    std::uint8_t ValueGridStyle[0xA0]; // 0x0240 (Size: 0xA0, Type: StructProperty)
    std::uint8_t WaveViewerStyle[0x140]; // 0x02E0 (Size: 0x140, Type: StructProperty)
    std::uint8_t TriggerThresholdLineStyle[0x1]; // 0x0420 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioOscilloscopePanelStyle, TimeRulerStyle) == 16, "Offset mismatch for FAudioOscilloscopePanelStyle::TimeRulerStyle");
static_assert(offsetof(FAudioOscilloscopePanelStyle, ValueGridStyle) == 576, "Offset mismatch for FAudioOscilloscopePanelStyle::ValueGridStyle");
static_assert(offsetof(FAudioOscilloscopePanelStyle, WaveViewerStyle) == 736, "Offset mismatch for FAudioOscilloscopePanelStyle::WaveViewerStyle");
static_assert(offsetof(FAudioOscilloscopePanelStyle, TriggerThresholdLineStyle) == 1056, "Offset mismatch for FAudioOscilloscopePanelStyle::TriggerThresholdLineStyle");

// /Script/AudioWidgets.AudioRadialSliderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioRadialSliderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TextBoxStyle[0xE0]; // 0x0010 (Size: 0xE0, Type: StructProperty)
    std::uint8_t CenterBackgroundColor[0x14]; // 0x00F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t SliderBarColor[0x14]; // 0x0104 (Size: 0x14, Type: StructProperty)
    std::uint8_t SliderProgressColor[0x14]; // 0x0118 (Size: 0x14, Type: StructProperty)
    float LabelPadding; // 0x012C (Size: 0x4, Type: FloatProperty)
    float DefaultSliderRadius; // 0x0130 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 16, "Offset mismatch for FAudioRadialSliderStyle::TextBoxStyle");
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 240, "Offset mismatch for FAudioRadialSliderStyle::CenterBackgroundColor");
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 260, "Offset mismatch for FAudioRadialSliderStyle::SliderBarColor");
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 280, "Offset mismatch for FAudioRadialSliderStyle::SliderProgressColor");
static_assert(offsetof(FAudioRadialSliderStyle, LabelPadding) == 300, "Offset mismatch for FAudioRadialSliderStyle::LabelPadding");
static_assert(offsetof(FAudioRadialSliderStyle, DefaultSliderRadius) == 304, "Offset mismatch for FAudioRadialSliderStyle::DefaultSliderRadius");

// /Script/AudioWidgets.AudioSliderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioSliderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SliderStyle[0x440]; // 0x0010 (Size: 0x440, Type: StructProperty)
    std::uint8_t TextBoxStyle[0xE0]; // 0x0450 (Size: 0xE0, Type: StructProperty)
    std::uint8_t WidgetBackgroundImage[0xB0]; // 0x0530 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SliderBackgroundColor[0x18]; // 0x05E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SliderBackgroundSize[0x10]; // 0x05F8 (Size: 0x10, Type: StructProperty)
    float LabelPadding; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SliderBarColor[0x14]; // 0x060C (Size: 0x14, Type: StructProperty)
    std::uint8_t SliderThumbColor[0x14]; // 0x0620 (Size: 0x14, Type: StructProperty)
    std::uint8_t WidgetBackgroundColor[0x1]; // 0x0634 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 16, "Offset mismatch for FAudioSliderStyle::SliderStyle");
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 1104, "Offset mismatch for FAudioSliderStyle::TextBoxStyle");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 1328, "Offset mismatch for FAudioSliderStyle::WidgetBackgroundImage");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 1504, "Offset mismatch for FAudioSliderStyle::SliderBackgroundColor");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 1528, "Offset mismatch for FAudioSliderStyle::SliderBackgroundSize");
static_assert(offsetof(FAudioSliderStyle, LabelPadding) == 1544, "Offset mismatch for FAudioSliderStyle::LabelPadding");
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 1548, "Offset mismatch for FAudioSliderStyle::SliderBarColor");
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 1568, "Offset mismatch for FAudioSliderStyle::SliderThumbColor");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 1588, "Offset mismatch for FAudioSliderStyle::WidgetBackgroundColor");

// /Script/AudioWidgets.AudioSpectrumPlotStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioSpectrumPlotStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BackgroundColor[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    std::uint8_t GridColor[0x14]; // 0x001C (Size: 0x14, Type: StructProperty)
    std::uint8_t AxisLabelColor[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisLabelFont[0x58]; // 0x0048 (Size: 0x58, Type: StructProperty)
    std::uint8_t SpectrumColor[0x14]; // 0x00A0 (Size: 0x14, Type: StructProperty)
    std::uint8_t CrosshairColor[0x14]; // 0x00B4 (Size: 0x14, Type: StructProperty)
    std::uint8_t CrosshairLabelFont[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioSpectrumPlotStyle, BackgroundColor) == 8, "Offset mismatch for FAudioSpectrumPlotStyle::BackgroundColor");
static_assert(offsetof(FAudioSpectrumPlotStyle, GridColor) == 28, "Offset mismatch for FAudioSpectrumPlotStyle::GridColor");
static_assert(offsetof(FAudioSpectrumPlotStyle, AxisLabelColor) == 48, "Offset mismatch for FAudioSpectrumPlotStyle::AxisLabelColor");
static_assert(offsetof(FAudioSpectrumPlotStyle, AxisLabelFont) == 72, "Offset mismatch for FAudioSpectrumPlotStyle::AxisLabelFont");
static_assert(offsetof(FAudioSpectrumPlotStyle, SpectrumColor) == 160, "Offset mismatch for FAudioSpectrumPlotStyle::SpectrumColor");
static_assert(offsetof(FAudioSpectrumPlotStyle, CrosshairColor) == 180, "Offset mismatch for FAudioSpectrumPlotStyle::CrosshairColor");
static_assert(offsetof(FAudioSpectrumPlotStyle, CrosshairLabelFont) == 200, "Offset mismatch for FAudioSpectrumPlotStyle::CrosshairLabelFont");

// /Script/AudioWidgets.AudioTextBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioTextBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundColor[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 16, "Offset mismatch for FAudioTextBoxStyle::BackgroundImage");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 192, "Offset mismatch for FAudioTextBoxStyle::BackgroundColor");

// /Script/AudioWidgets.AudioVectorscopePanelStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FAudioVectorscopePanelStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ValueGridStyle[0x98]; // 0x0008 (Size: 0x98, Type: StructProperty)
    std::uint8_t VectorViewerStyle[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAudioVectorscopePanelStyle, ValueGridStyle) == 8, "Offset mismatch for FAudioVectorscopePanelStyle::ValueGridStyle");
static_assert(offsetof(FAudioVectorscopePanelStyle, VectorViewerStyle) == 160, "Offset mismatch for FAudioVectorscopePanelStyle::VectorViewerStyle");

// /Script/AudioWidgets.FixedSampleSequenceRulerStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FFixedSampleSequenceRulerStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float HandleWidth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HandleColor[0x14]; // 0x000C (Size: 0x14, Type: StructProperty)
    std::uint8_t HandleBrush[0xB0]; // 0x0020 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TicksColor[0x14]; // 0x00D0 (Size: 0x14, Type: StructProperty)
    std::uint8_t TicksTextColor[0x14]; // 0x00E4 (Size: 0x14, Type: StructProperty)
    std::uint8_t TicksTextFont[0x58]; // 0x00F8 (Size: 0x58, Type: StructProperty)
    float TicksTextOffset; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BackgroundColor[0x1C]; // 0x0154 (Size: 0x1C, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    float DesiredWidth; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float DesiredHeight; // 0x0224 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleWidth) == 8, "Offset mismatch for FFixedSampleSequenceRulerStyle::HandleWidth");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleColor) == 12, "Offset mismatch for FFixedSampleSequenceRulerStyle::HandleColor");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleBrush) == 32, "Offset mismatch for FFixedSampleSequenceRulerStyle::HandleBrush");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksColor) == 208, "Offset mismatch for FFixedSampleSequenceRulerStyle::TicksColor");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextColor) == 228, "Offset mismatch for FFixedSampleSequenceRulerStyle::TicksTextColor");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextFont) == 248, "Offset mismatch for FFixedSampleSequenceRulerStyle::TicksTextFont");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextOffset) == 336, "Offset mismatch for FFixedSampleSequenceRulerStyle::TicksTextOffset");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundColor) == 340, "Offset mismatch for FFixedSampleSequenceRulerStyle::BackgroundColor");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundBrush) == 368, "Offset mismatch for FFixedSampleSequenceRulerStyle::BackgroundBrush");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, DesiredWidth) == 544, "Offset mismatch for FFixedSampleSequenceRulerStyle::DesiredWidth");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, DesiredHeight) == 548, "Offset mismatch for FFixedSampleSequenceRulerStyle::DesiredHeight");

// /Script/AudioWidgets.LoudnessMeterRackUnitSettings
// Kind: ScriptStruct; super: LoudnessMeterSettings
struct FLoudnessMeterRackUnitSettings
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

static_assert(offsetof(FLoudnessMeterRackUnitSettings, ConfigVersion) == 0, "Offset mismatch for FLoudnessMeterRackUnitSettings::ConfigVersion");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, LoudnessScaleRange) == 4, "Offset mismatch for FLoudnessMeterRackUnitSettings::LoudnessScaleRange");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, LoudnessScaleOffset) == 8, "Offset mismatch for FLoudnessMeterRackUnitSettings::LoudnessScaleOffset");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, LoudnessScaleTarget) == 12, "Offset mismatch for FLoudnessMeterRackUnitSettings::LoudnessScaleTarget");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, TruePeakLimit) == 16, "Offset mismatch for FLoudnessMeterRackUnitSettings::TruePeakLimit");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, TargetColor) == 20, "Offset mismatch for FLoudnessMeterRackUnitSettings::TargetColor");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, bUseRelativeLoudnessScale) == 36, "Offset mismatch for FLoudnessMeterRackUnitSettings::bUseRelativeLoudnessScale");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, bDisplayAnalysisTimer) == 37, "Offset mismatch for FLoudnessMeterRackUnitSettings::bDisplayAnalysisTimer");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, LongTermLoudness) == 40, "Offset mismatch for FLoudnessMeterRackUnitSettings::LongTermLoudness");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, ShortTermLoudness) == 60, "Offset mismatch for FLoudnessMeterRackUnitSettings::ShortTermLoudness");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, MomentaryLoudness) == 80, "Offset mismatch for FLoudnessMeterRackUnitSettings::MomentaryLoudness");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, LoudnessRange) == 100, "Offset mismatch for FLoudnessMeterRackUnitSettings::LoudnessRange");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, TruePeak) == 120, "Offset mismatch for FLoudnessMeterRackUnitSettings::TruePeak");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, ValuesOrderingPermutation) == 144, "Offset mismatch for FLoudnessMeterRackUnitSettings::ValuesOrderingPermutation");
static_assert(offsetof(FLoudnessMeterRackUnitSettings, MetersOrderingPermutation) == 152, "Offset mismatch for FLoudnessMeterRackUnitSettings::MetersOrderingPermutation");

// /Script/AudioWidgets.LoudnessMetricDisplayOptions
// Kind: ScriptStruct; super: LoudnessMeterDisplayOptions
struct FLoudnessMetricDisplayOptions
{
public:
    std::uint8_t bShowValue; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowMeter; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldMaxForValue; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldMaxForMeter; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Color[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLoudnessMetricDisplayOptions, bShowValue) == 0, "Offset mismatch for FLoudnessMetricDisplayOptions::bShowValue");
static_assert(offsetof(FLoudnessMetricDisplayOptions, bShowMeter) == 1, "Offset mismatch for FLoudnessMetricDisplayOptions::bShowMeter");
static_assert(offsetof(FLoudnessMetricDisplayOptions, bHoldMaxForValue) == 2, "Offset mismatch for FLoudnessMetricDisplayOptions::bHoldMaxForValue");
static_assert(offsetof(FLoudnessMetricDisplayOptions, bHoldMaxForMeter) == 3, "Offset mismatch for FLoudnessMetricDisplayOptions::bHoldMaxForMeter");
static_assert(offsetof(FLoudnessMetricDisplayOptions, Color) == 4, "Offset mismatch for FLoudnessMetricDisplayOptions::Color");

// /Script/AudioWidgets.MeterChannelInfo
// Kind: ScriptStruct; super: AudioMeterChannelInfo
struct FMeterChannelInfo
{
public:
    float MeterValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PeakValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ClippingValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MeterValueBarStart[0x1]; // 0x000C (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FMeterChannelInfo, MeterValue) == 0, "Offset mismatch for FMeterChannelInfo::MeterValue");
static_assert(offsetof(FMeterChannelInfo, PeakValue) == 4, "Offset mismatch for FMeterChannelInfo::PeakValue");
static_assert(offsetof(FMeterChannelInfo, ClippingValue) == 8, "Offset mismatch for FMeterChannelInfo::ClippingValue");
static_assert(offsetof(FMeterChannelInfo, MeterValueBarStart) == 12, "Offset mismatch for FMeterChannelInfo::MeterValueBarStart");

// /Script/AudioWidgets.PlayheadOverlayStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FPlayheadOverlayStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PlayheadColor[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    float PlayheadWidth; // 0x001C (Size: 0x4, Type: FloatProperty)
    float DesiredWidth; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DesiredHeight; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlayheadOverlayStyle, PlayheadColor) == 8, "Offset mismatch for FPlayheadOverlayStyle::PlayheadColor");
static_assert(offsetof(FPlayheadOverlayStyle, PlayheadWidth) == 28, "Offset mismatch for FPlayheadOverlayStyle::PlayheadWidth");
static_assert(offsetof(FPlayheadOverlayStyle, DesiredWidth) == 32, "Offset mismatch for FPlayheadOverlayStyle::DesiredWidth");
static_assert(offsetof(FPlayheadOverlayStyle, DesiredHeight) == 36, "Offset mismatch for FPlayheadOverlayStyle::DesiredHeight");

// /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSampledSequenceValueGridOverlayStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GridColor[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    float GridThickness; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LabelTextColor[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t LabelTextFont[0x58]; // 0x0038 (Size: 0x58, Type: StructProperty)
    float DesiredWidth; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float DesiredHeight; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, GridColor) == 8, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::GridColor");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, GridThickness) == 28, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::GridThickness");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextColor) == 32, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::LabelTextColor");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextFont) == 56, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::LabelTextFont");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, DesiredWidth) == 144, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::DesiredWidth");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, DesiredHeight) == 148, "Offset mismatch for FSampledSequenceValueGridOverlayStyle::DesiredHeight");

// /Script/AudioWidgets.SampledSequenceVectorViewerStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSampledSequenceVectorViewerStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BackgroundColor[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x0020 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LineColor[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    float LineThickness; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSampledSequenceVectorViewerStyle, BackgroundColor) == 8, "Offset mismatch for FSampledSequenceVectorViewerStyle::BackgroundColor");
static_assert(offsetof(FSampledSequenceVectorViewerStyle, BackgroundBrush) == 32, "Offset mismatch for FSampledSequenceVectorViewerStyle::BackgroundBrush");
static_assert(offsetof(FSampledSequenceVectorViewerStyle, LineColor) == 208, "Offset mismatch for FSampledSequenceVectorViewerStyle::LineColor");
static_assert(offsetof(FSampledSequenceVectorViewerStyle, LineThickness) == 224, "Offset mismatch for FSampledSequenceVectorViewerStyle::LineThickness");

// /Script/AudioWidgets.SampledSequenceViewerStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSampledSequenceViewerStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SequenceColor[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    float SequenceLineThickness; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MajorGridLineColor[0x14]; // 0x0020 (Size: 0x14, Type: StructProperty)
    std::uint8_t MinorGridLineColor[0x14]; // 0x0034 (Size: 0x14, Type: StructProperty)
    std::uint8_t ZeroCrossingLineColor[0x14]; // 0x0048 (Size: 0x14, Type: StructProperty)
    float ZeroCrossingLineThickness; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SampleMarkersSize; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SequenceBackgroundColor[0x1C]; // 0x0064 (Size: 0x1C, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x0080 (Size: 0xB0, Type: StructProperty)
    float DesiredWidth; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float DesiredHeight; // 0x0134 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSampledSequenceViewerStyle, SequenceColor) == 8, "Offset mismatch for FSampledSequenceViewerStyle::SequenceColor");
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceLineThickness) == 28, "Offset mismatch for FSampledSequenceViewerStyle::SequenceLineThickness");
static_assert(offsetof(FSampledSequenceViewerStyle, MajorGridLineColor) == 32, "Offset mismatch for FSampledSequenceViewerStyle::MajorGridLineColor");
static_assert(offsetof(FSampledSequenceViewerStyle, MinorGridLineColor) == 52, "Offset mismatch for FSampledSequenceViewerStyle::MinorGridLineColor");
static_assert(offsetof(FSampledSequenceViewerStyle, ZeroCrossingLineColor) == 72, "Offset mismatch for FSampledSequenceViewerStyle::ZeroCrossingLineColor");
static_assert(offsetof(FSampledSequenceViewerStyle, ZeroCrossingLineThickness) == 92, "Offset mismatch for FSampledSequenceViewerStyle::ZeroCrossingLineThickness");
static_assert(offsetof(FSampledSequenceViewerStyle, SampleMarkersSize) == 96, "Offset mismatch for FSampledSequenceViewerStyle::SampleMarkersSize");
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceBackgroundColor) == 100, "Offset mismatch for FSampledSequenceViewerStyle::SequenceBackgroundColor");
static_assert(offsetof(FSampledSequenceViewerStyle, BackgroundBrush) == 128, "Offset mismatch for FSampledSequenceViewerStyle::BackgroundBrush");
static_assert(offsetof(FSampledSequenceViewerStyle, DesiredWidth) == 304, "Offset mismatch for FSampledSequenceViewerStyle::DesiredWidth");
static_assert(offsetof(FSampledSequenceViewerStyle, DesiredHeight) == 308, "Offset mismatch for FSampledSequenceViewerStyle::DesiredHeight");

// /Script/AudioWidgets.SpectrogramRackUnitSettings
// Kind: ScriptStruct; super: none
struct FSpectrogramRackUnitSettings
{
public:
    std::uint8_t AnalyzerType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FFTAnalyzerFFTSize; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CQTAnalyzerFFTSize; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PixelPlotMode; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FrequencyScale; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ColorMap; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t orientation; // 0x0006 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSpectrogramRackUnitSettings, AnalyzerType) == 0, "Offset mismatch for FSpectrogramRackUnitSettings::AnalyzerType");
static_assert(offsetof(FSpectrogramRackUnitSettings, FFTAnalyzerFFTSize) == 1, "Offset mismatch for FSpectrogramRackUnitSettings::FFTAnalyzerFFTSize");
static_assert(offsetof(FSpectrogramRackUnitSettings, CQTAnalyzerFFTSize) == 2, "Offset mismatch for FSpectrogramRackUnitSettings::CQTAnalyzerFFTSize");
static_assert(offsetof(FSpectrogramRackUnitSettings, PixelPlotMode) == 3, "Offset mismatch for FSpectrogramRackUnitSettings::PixelPlotMode");
static_assert(offsetof(FSpectrogramRackUnitSettings, FrequencyScale) == 4, "Offset mismatch for FSpectrogramRackUnitSettings::FrequencyScale");
static_assert(offsetof(FSpectrogramRackUnitSettings, ColorMap) == 5, "Offset mismatch for FSpectrogramRackUnitSettings::ColorMap");
static_assert(offsetof(FSpectrogramRackUnitSettings, orientation) == 6, "Offset mismatch for FSpectrogramRackUnitSettings::orientation");

// /Script/AudioWidgets.SpectrumAnalyzerRackUnitSettings
// Kind: ScriptStruct; super: none
struct FSpectrumAnalyzerRackUnitSettings
{
public:
    std::uint8_t Ballistics; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnalyzerType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FFTAnalyzerFFTSize; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CQTAnalyzerFFTSize; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TiltSpectrum; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PixelPlotMode; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FrequencyScale; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDisplayFrequencyAxisLabels; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplaySoundLevelAxisLabels; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, Ballistics) == 0, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::Ballistics");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, AnalyzerType) == 1, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::AnalyzerType");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, FFTAnalyzerFFTSize) == 2, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::FFTAnalyzerFFTSize");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, CQTAnalyzerFFTSize) == 3, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::CQTAnalyzerFFTSize");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, TiltSpectrum) == 4, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::TiltSpectrum");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, PixelPlotMode) == 5, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::PixelPlotMode");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, FrequencyScale) == 6, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::FrequencyScale");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, bDisplayFrequencyAxisLabels) == 7, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::bDisplayFrequencyAxisLabels");
static_assert(offsetof(FSpectrumAnalyzerRackUnitSettings, bDisplaySoundLevelAxisLabels) == 8, "Offset mismatch for FSpectrumAnalyzerRackUnitSettings::bDisplaySoundLevelAxisLabels");

// /Script/AudioWidgets.TriggerThresholdLineStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FTriggerThresholdLineStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LineColor[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTriggerThresholdLineStyle, LineColor) == 8, "Offset mismatch for FTriggerThresholdLineStyle::LineColor");

// /Script/AudioWidgets.AudioFrequencyRadialSlider
// Kind: Class; super: AudioRadialSlider
class UAudioFrequencyRadialSlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x016C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t WidgetLayout; // 0x0178 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0179
    std::uint8_t CenterBackgroundColor[0x10]; // 0x017C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderProgressColor[0x10]; // 0x018C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBarColor[0x14]; // 0x019C (Size: 0x14, Type: StructProperty)
    std::uint8_t HandStartEndRatio[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnitsText[0x10]; // 0x01C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextLabelBackgroundColor[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShowLabelOnlyOnHover; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowUnitsText; // 0x01E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsUnitsTextReadOnly; // 0x01E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsValueTextReadOnly; // 0x01E3 (Size: 0x1, Type: BoolProperty)
    float SliderThickness; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OutputRange[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x01F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0208 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioFrequencyRadialSlider, Value) == 360, "Offset mismatch for UAudioFrequencyRadialSlider::Value");
static_assert(offsetof(UAudioFrequencyRadialSlider, ValueDelegate) == 364, "Offset mismatch for UAudioFrequencyRadialSlider::ValueDelegate");
static_assert(offsetof(UAudioFrequencyRadialSlider, WidgetLayout) == 376, "Offset mismatch for UAudioFrequencyRadialSlider::WidgetLayout");
static_assert(offsetof(UAudioFrequencyRadialSlider, CenterBackgroundColor) == 380, "Offset mismatch for UAudioFrequencyRadialSlider::CenterBackgroundColor");
static_assert(offsetof(UAudioFrequencyRadialSlider, SliderProgressColor) == 396, "Offset mismatch for UAudioFrequencyRadialSlider::SliderProgressColor");
static_assert(offsetof(UAudioFrequencyRadialSlider, SliderBarColor) == 412, "Offset mismatch for UAudioFrequencyRadialSlider::SliderBarColor");
static_assert(offsetof(UAudioFrequencyRadialSlider, HandStartEndRatio) == 432, "Offset mismatch for UAudioFrequencyRadialSlider::HandStartEndRatio");
static_assert(offsetof(UAudioFrequencyRadialSlider, UnitsText) == 448, "Offset mismatch for UAudioFrequencyRadialSlider::UnitsText");
static_assert(offsetof(UAudioFrequencyRadialSlider, TextLabelBackgroundColor) == 464, "Offset mismatch for UAudioFrequencyRadialSlider::TextLabelBackgroundColor");
static_assert(offsetof(UAudioFrequencyRadialSlider, ShowLabelOnlyOnHover) == 480, "Offset mismatch for UAudioFrequencyRadialSlider::ShowLabelOnlyOnHover");
static_assert(offsetof(UAudioFrequencyRadialSlider, ShowUnitsText) == 481, "Offset mismatch for UAudioFrequencyRadialSlider::ShowUnitsText");
static_assert(offsetof(UAudioFrequencyRadialSlider, IsUnitsTextReadOnly) == 482, "Offset mismatch for UAudioFrequencyRadialSlider::IsUnitsTextReadOnly");
static_assert(offsetof(UAudioFrequencyRadialSlider, IsValueTextReadOnly) == 483, "Offset mismatch for UAudioFrequencyRadialSlider::IsValueTextReadOnly");
static_assert(offsetof(UAudioFrequencyRadialSlider, SliderThickness) == 484, "Offset mismatch for UAudioFrequencyRadialSlider::SliderThickness");
static_assert(offsetof(UAudioFrequencyRadialSlider, OutputRange) == 488, "Offset mismatch for UAudioFrequencyRadialSlider::OutputRange");
static_assert(offsetof(UAudioFrequencyRadialSlider, OnValueChanged) == 504, "Offset mismatch for UAudioFrequencyRadialSlider::OnValueChanged");
static_assert(offsetof(UAudioFrequencyRadialSlider, OnMouseCaptureBegin) == 520, "Offset mismatch for UAudioFrequencyRadialSlider::OnMouseCaptureBegin");
static_assert(offsetof(UAudioFrequencyRadialSlider, OnMouseCaptureEnd) == 536, "Offset mismatch for UAudioFrequencyRadialSlider::OnMouseCaptureEnd");

// /Script/AudioWidgets.AudioFrequencySlider
// Kind: Class; super: AudioSliderBase
class UAudioFrequencySlider
{
public:
    std::uint8_t Pad_0000[0x8B0]; // 0x0000
    std::uint8_t OutputRange[0x1]; // 0x08B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioFrequencySlider, OutputRange) == 2224, "Offset mismatch for UAudioFrequencySlider::OutputRange");

// /Script/AudioWidgets.AudioMaterialButton
// Kind: Class; super: Widget
class UAudioMaterialButton
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t WidgetStyle[0x88]; // 0x0168 (Size: 0x88, Type: StructProperty)
    FMulticastInlineDelegate OnButtonPressedChangedEvent; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsPressed; // 0x0220 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAudioMaterialButton, WidgetStyle) == 360, "Offset mismatch for UAudioMaterialButton::WidgetStyle");
static_assert(offsetof(UAudioMaterialButton, OnButtonPressedChangedEvent) == 496, "Offset mismatch for UAudioMaterialButton::OnButtonPressedChangedEvent");
static_assert(offsetof(UAudioMaterialButton, OnMouseCaptureBegin) == 512, "Offset mismatch for UAudioMaterialButton::OnMouseCaptureBegin");
static_assert(offsetof(UAudioMaterialButton, OnMouseCaptureEnd) == 528, "Offset mismatch for UAudioMaterialButton::OnMouseCaptureEnd");
static_assert(offsetof(UAudioMaterialButton, bIsPressed) == 544, "Offset mismatch for UAudioMaterialButton::bIsPressed");

// /Script/AudioWidgets.AudioMaterialButtonWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UAudioMaterialButtonWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ButtonStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMaterialButtonWidgetStyle, ButtonStyle) == 48, "Offset mismatch for UAudioMaterialButtonWidgetStyle::ButtonStyle");

// /Script/AudioWidgets.AudioMaterialEnvelope
// Kind: Class; super: Widget
class UAudioMaterialEnvelope
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t WidgetStyle[0x48]; // 0x0168 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnvelopeSettings[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMaterialEnvelope, WidgetStyle) == 360, "Offset mismatch for UAudioMaterialEnvelope::WidgetStyle");
static_assert(offsetof(UAudioMaterialEnvelope, EnvelopeSettings) == 432, "Offset mismatch for UAudioMaterialEnvelope::EnvelopeSettings");

// /Script/AudioWidgets.AudioMaterialKnob
// Kind: Class; super: Widget
class UAudioMaterialKnob
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t WidgetStyle[0x1C0]; // 0x0170 (Size: 0x1C0, Type: StructProperty)
    FMulticastInlineDelegate OnKnobValueChanged; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float Value; // 0x0360 (Size: 0x4, Type: FloatProperty)
    float TuneSpeed; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float FineTuneSpeed; // 0x0368 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLocked; // 0x036C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMouseUsesStep; // 0x036D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x036E
    float StepSize; // 0x0370 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioMaterialKnob, WidgetStyle) == 368, "Offset mismatch for UAudioMaterialKnob::WidgetStyle");
static_assert(offsetof(UAudioMaterialKnob, OnKnobValueChanged) == 816, "Offset mismatch for UAudioMaterialKnob::OnKnobValueChanged");
static_assert(offsetof(UAudioMaterialKnob, OnMouseCaptureBegin) == 832, "Offset mismatch for UAudioMaterialKnob::OnMouseCaptureBegin");
static_assert(offsetof(UAudioMaterialKnob, OnMouseCaptureEnd) == 848, "Offset mismatch for UAudioMaterialKnob::OnMouseCaptureEnd");
static_assert(offsetof(UAudioMaterialKnob, Value) == 864, "Offset mismatch for UAudioMaterialKnob::Value");
static_assert(offsetof(UAudioMaterialKnob, TuneSpeed) == 868, "Offset mismatch for UAudioMaterialKnob::TuneSpeed");
static_assert(offsetof(UAudioMaterialKnob, FineTuneSpeed) == 872, "Offset mismatch for UAudioMaterialKnob::FineTuneSpeed");
static_assert(offsetof(UAudioMaterialKnob, bLocked) == 876, "Offset mismatch for UAudioMaterialKnob::bLocked");
static_assert(offsetof(UAudioMaterialKnob, bMouseUsesStep) == 877, "Offset mismatch for UAudioMaterialKnob::bMouseUsesStep");
static_assert(offsetof(UAudioMaterialKnob, StepSize) == 880, "Offset mismatch for UAudioMaterialKnob::StepSize");

// /Script/AudioWidgets.AudioMaterialKnobWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UAudioMaterialKnobWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t KnobStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMaterialKnobWidgetStyle, KnobStyle) == 48, "Offset mismatch for UAudioMaterialKnobWidgetStyle::KnobStyle");

// /Script/AudioWidgets.AudioMaterialMeter
// Kind: Class; super: Widget
class UAudioMaterialMeter
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t WidgetStyle[0xE8]; // 0x0168 (Size: 0xE8, Type: StructProperty)
    std::uint8_t orientation; // 0x0250 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0251
    FScriptDelegate MeterChannelInfoDelegate; // 0x0254 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0264
    TArray<void*> MeterChannelInfo; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioMaterialMeter, WidgetStyle) == 360, "Offset mismatch for UAudioMaterialMeter::WidgetStyle");
static_assert(offsetof(UAudioMaterialMeter, orientation) == 592, "Offset mismatch for UAudioMaterialMeter::orientation");
static_assert(offsetof(UAudioMaterialMeter, MeterChannelInfoDelegate) == 596, "Offset mismatch for UAudioMaterialMeter::MeterChannelInfoDelegate");
static_assert(offsetof(UAudioMaterialMeter, MeterChannelInfo) == 624, "Offset mismatch for UAudioMaterialMeter::MeterChannelInfo");

// /Script/AudioWidgets.AudioMaterialMeterWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UAudioMaterialMeterWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MeterStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMaterialMeterWidgetStyle, MeterStyle) == 48, "Offset mismatch for UAudioMaterialMeterWidgetStyle::MeterStyle");

// /Script/AudioWidgets.AudioMaterialSlider
// Kind: Class; super: Widget
class UAudioMaterialSlider
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t WidgetStyle[0x150]; // 0x0170 (Size: 0x150, Type: StructProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x02D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float Value; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t orientation; // 0x02F4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02F5
    float TuneSpeed; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float FineTuneSpeed; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLocked; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMouseUsesStep; // 0x0301 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0302
    float StepSize; // 0x0304 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAudioMaterialSlider, WidgetStyle) == 368, "Offset mismatch for UAudioMaterialSlider::WidgetStyle");
static_assert(offsetof(UAudioMaterialSlider, OnValueChanged) == 704, "Offset mismatch for UAudioMaterialSlider::OnValueChanged");
static_assert(offsetof(UAudioMaterialSlider, OnMouseCaptureBegin) == 720, "Offset mismatch for UAudioMaterialSlider::OnMouseCaptureBegin");
static_assert(offsetof(UAudioMaterialSlider, OnMouseCaptureEnd) == 736, "Offset mismatch for UAudioMaterialSlider::OnMouseCaptureEnd");
static_assert(offsetof(UAudioMaterialSlider, Value) == 752, "Offset mismatch for UAudioMaterialSlider::Value");
static_assert(offsetof(UAudioMaterialSlider, orientation) == 756, "Offset mismatch for UAudioMaterialSlider::orientation");
static_assert(offsetof(UAudioMaterialSlider, TuneSpeed) == 760, "Offset mismatch for UAudioMaterialSlider::TuneSpeed");
static_assert(offsetof(UAudioMaterialSlider, FineTuneSpeed) == 764, "Offset mismatch for UAudioMaterialSlider::FineTuneSpeed");
static_assert(offsetof(UAudioMaterialSlider, bLocked) == 768, "Offset mismatch for UAudioMaterialSlider::bLocked");
static_assert(offsetof(UAudioMaterialSlider, bMouseUsesStep) == 769, "Offset mismatch for UAudioMaterialSlider::bMouseUsesStep");
static_assert(offsetof(UAudioMaterialSlider, StepSize) == 772, "Offset mismatch for UAudioMaterialSlider::StepSize");

// /Script/AudioWidgets.AudioMaterialSliderWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UAudioMaterialSliderWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SliderStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMaterialSliderWidgetStyle, SliderStyle) == 48, "Offset mismatch for UAudioMaterialSliderWidgetStyle::SliderStyle");

// /Script/AudioWidgets.AudioMeter
// Kind: Class; super: Widget
class UAudioMeter
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> MeterChannelInfo; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    FScriptDelegate MeterChannelInfoDelegate; // 0x0178 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0188
    std::uint8_t WidgetStyle[0x4E0]; // 0x0190 (Size: 0x4E0, Type: StructProperty)
    std::uint8_t orientation; // 0x0670 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0671
    std::uint8_t BackgroundColor[0x10]; // 0x0674 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterBackgroundColor[0x10]; // 0x0684 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterValueColor[0x10]; // 0x0694 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterPeakColor[0x10]; // 0x06A4 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterClippingColor[0x10]; // 0x06B4 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterScaleColor[0x10]; // 0x06C4 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeterScaleLabelColor[0x1]; // 0x06D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioMeter, MeterChannelInfo) == 360, "Offset mismatch for UAudioMeter::MeterChannelInfo");
static_assert(offsetof(UAudioMeter, MeterChannelInfoDelegate) == 376, "Offset mismatch for UAudioMeter::MeterChannelInfoDelegate");
static_assert(offsetof(UAudioMeter, WidgetStyle) == 400, "Offset mismatch for UAudioMeter::WidgetStyle");
static_assert(offsetof(UAudioMeter, orientation) == 1648, "Offset mismatch for UAudioMeter::orientation");
static_assert(offsetof(UAudioMeter, BackgroundColor) == 1652, "Offset mismatch for UAudioMeter::BackgroundColor");
static_assert(offsetof(UAudioMeter, MeterBackgroundColor) == 1668, "Offset mismatch for UAudioMeter::MeterBackgroundColor");
static_assert(offsetof(UAudioMeter, MeterValueColor) == 1684, "Offset mismatch for UAudioMeter::MeterValueColor");
static_assert(offsetof(UAudioMeter, MeterPeakColor) == 1700, "Offset mismatch for UAudioMeter::MeterPeakColor");
static_assert(offsetof(UAudioMeter, MeterClippingColor) == 1716, "Offset mismatch for UAudioMeter::MeterClippingColor");
static_assert(offsetof(UAudioMeter, MeterScaleColor) == 1732, "Offset mismatch for UAudioMeter::MeterScaleColor");
static_assert(offsetof(UAudioMeter, MeterScaleLabelColor) == 1748, "Offset mismatch for UAudioMeter::MeterScaleLabelColor");

// /Script/AudioWidgets.AudioOscilloscope
// Kind: Class; super: Widget
class UAudioOscilloscope
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t OscilloscopeStyle[0x440]; // 0x0170 (Size: 0x440, Type: StructProperty)
    void* AudioBus; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    float MaxTimeWindowMs; // 0x05B8 (Size: 0x4, Type: FloatProperty)
    float TimeWindowMs; // 0x05BC (Size: 0x4, Type: FloatProperty)
    float AnalysisPeriodMs; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowTimeGrid; // 0x05C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TimeGridLabelsUnit; // 0x05C5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowAmplitudeGrid; // 0x05C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAmplitudeLabels; // 0x05C7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AmplitudeGridLabelsUnit; // 0x05C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TriggerMode; // 0x05C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x05CA
    float TriggerThreshold; // 0x05CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PanelLayoutType; // 0x05D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05D1
    std::int32_t ChannelToAnalyze; // 0x05D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAudioOscilloscope, OscilloscopeStyle) == 368, "Offset mismatch for UAudioOscilloscope::OscilloscopeStyle");
static_assert(offsetof(UAudioOscilloscope, AudioBus) == 1456, "Offset mismatch for UAudioOscilloscope::AudioBus");
static_assert(offsetof(UAudioOscilloscope, MaxTimeWindowMs) == 1464, "Offset mismatch for UAudioOscilloscope::MaxTimeWindowMs");
static_assert(offsetof(UAudioOscilloscope, TimeWindowMs) == 1468, "Offset mismatch for UAudioOscilloscope::TimeWindowMs");
static_assert(offsetof(UAudioOscilloscope, AnalysisPeriodMs) == 1472, "Offset mismatch for UAudioOscilloscope::AnalysisPeriodMs");
static_assert(offsetof(UAudioOscilloscope, bShowTimeGrid) == 1476, "Offset mismatch for UAudioOscilloscope::bShowTimeGrid");
static_assert(offsetof(UAudioOscilloscope, TimeGridLabelsUnit) == 1477, "Offset mismatch for UAudioOscilloscope::TimeGridLabelsUnit");
static_assert(offsetof(UAudioOscilloscope, bShowAmplitudeGrid) == 1478, "Offset mismatch for UAudioOscilloscope::bShowAmplitudeGrid");
static_assert(offsetof(UAudioOscilloscope, bShowAmplitudeLabels) == 1479, "Offset mismatch for UAudioOscilloscope::bShowAmplitudeLabels");
static_assert(offsetof(UAudioOscilloscope, AmplitudeGridLabelsUnit) == 1480, "Offset mismatch for UAudioOscilloscope::AmplitudeGridLabelsUnit");
static_assert(offsetof(UAudioOscilloscope, TriggerMode) == 1481, "Offset mismatch for UAudioOscilloscope::TriggerMode");
static_assert(offsetof(UAudioOscilloscope, TriggerThreshold) == 1484, "Offset mismatch for UAudioOscilloscope::TriggerThreshold");
static_assert(offsetof(UAudioOscilloscope, PanelLayoutType) == 1488, "Offset mismatch for UAudioOscilloscope::PanelLayoutType");
static_assert(offsetof(UAudioOscilloscope, ChannelToAnalyze) == 1492, "Offset mismatch for UAudioOscilloscope::ChannelToAnalyze");

// /Script/AudioWidgets.AudioRadialSlider
// Kind: Class; super: Widget
class UAudioRadialSlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x016C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t WidgetLayout; // 0x0178 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0179
    std::uint8_t CenterBackgroundColor[0x10]; // 0x017C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderProgressColor[0x10]; // 0x018C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBarColor[0x14]; // 0x019C (Size: 0x14, Type: StructProperty)
    std::uint8_t HandStartEndRatio[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnitsText[0x10]; // 0x01C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextLabelBackgroundColor[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShowLabelOnlyOnHover; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowUnitsText; // 0x01E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsUnitsTextReadOnly; // 0x01E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsValueTextReadOnly; // 0x01E3 (Size: 0x1, Type: BoolProperty)
    float SliderThickness; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OutputRange[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x01F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0208 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioRadialSlider, Value) == 360, "Offset mismatch for UAudioRadialSlider::Value");
static_assert(offsetof(UAudioRadialSlider, ValueDelegate) == 364, "Offset mismatch for UAudioRadialSlider::ValueDelegate");
static_assert(offsetof(UAudioRadialSlider, WidgetLayout) == 376, "Offset mismatch for UAudioRadialSlider::WidgetLayout");
static_assert(offsetof(UAudioRadialSlider, CenterBackgroundColor) == 380, "Offset mismatch for UAudioRadialSlider::CenterBackgroundColor");
static_assert(offsetof(UAudioRadialSlider, SliderProgressColor) == 396, "Offset mismatch for UAudioRadialSlider::SliderProgressColor");
static_assert(offsetof(UAudioRadialSlider, SliderBarColor) == 412, "Offset mismatch for UAudioRadialSlider::SliderBarColor");
static_assert(offsetof(UAudioRadialSlider, HandStartEndRatio) == 432, "Offset mismatch for UAudioRadialSlider::HandStartEndRatio");
static_assert(offsetof(UAudioRadialSlider, UnitsText) == 448, "Offset mismatch for UAudioRadialSlider::UnitsText");
static_assert(offsetof(UAudioRadialSlider, TextLabelBackgroundColor) == 464, "Offset mismatch for UAudioRadialSlider::TextLabelBackgroundColor");
static_assert(offsetof(UAudioRadialSlider, ShowLabelOnlyOnHover) == 480, "Offset mismatch for UAudioRadialSlider::ShowLabelOnlyOnHover");
static_assert(offsetof(UAudioRadialSlider, ShowUnitsText) == 481, "Offset mismatch for UAudioRadialSlider::ShowUnitsText");
static_assert(offsetof(UAudioRadialSlider, IsUnitsTextReadOnly) == 482, "Offset mismatch for UAudioRadialSlider::IsUnitsTextReadOnly");
static_assert(offsetof(UAudioRadialSlider, IsValueTextReadOnly) == 483, "Offset mismatch for UAudioRadialSlider::IsValueTextReadOnly");
static_assert(offsetof(UAudioRadialSlider, SliderThickness) == 484, "Offset mismatch for UAudioRadialSlider::SliderThickness");
static_assert(offsetof(UAudioRadialSlider, OutputRange) == 488, "Offset mismatch for UAudioRadialSlider::OutputRange");
static_assert(offsetof(UAudioRadialSlider, OnValueChanged) == 504, "Offset mismatch for UAudioRadialSlider::OnValueChanged");
static_assert(offsetof(UAudioRadialSlider, OnMouseCaptureBegin) == 520, "Offset mismatch for UAudioRadialSlider::OnMouseCaptureBegin");
static_assert(offsetof(UAudioRadialSlider, OnMouseCaptureEnd) == 536, "Offset mismatch for UAudioRadialSlider::OnMouseCaptureEnd");

// /Script/AudioWidgets.AudioSlider
// Kind: Class; super: AudioSliderBase
class UAudioSlider
{
public:
    std::uint8_t Pad_0000[0x8B0]; // 0x0000
    TWeakObjectPtr<void> LinToOutputCurve; // 0x08B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OutputToLinCurve; // 0x08B8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAudioSlider, LinToOutputCurve) == 2224, "Offset mismatch for UAudioSlider::LinToOutputCurve");
static_assert(offsetof(UAudioSlider, OutputToLinCurve) == 2232, "Offset mismatch for UAudioSlider::OutputToLinCurve");

// /Script/AudioWidgets.AudioSliderBase
// Kind: Class; super: Widget
class UAudioSliderBase
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x016C
    std::uint8_t UnitsText[0x10]; // 0x0170 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextLabelBackgroundColor[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextLabelBackgroundColorDelegate[0xC]; // 0x0190 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ShowLabelOnlyOnHover; // 0x019C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowUnitsText; // 0x019D (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsUnitsTextReadOnly; // 0x019E (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsValueTextReadOnly; // 0x019F (Size: 0x1, Type: BoolProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x01A0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t SliderBackgroundColor[0x10]; // 0x01AC (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBackgroundColorDelegate[0xC]; // 0x01BC (Size: 0xC, Type: DelegateProperty)
    std::uint8_t SliderBarColor[0x10]; // 0x01C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBarColorDelegate[0xC]; // 0x01D8 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t SliderThumbColor[0x10]; // 0x01E4 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderThumbColorDelegate[0xC]; // 0x01F4 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t WidgetBackgroundColor[0x10]; // 0x0200 (Size: 0x10, Type: StructProperty)
    std::uint8_t WidgetBackgroundColorDelegate[0xC]; // 0x0210 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t orientation; // 0x021C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x021D
    FMulticastInlineDelegate OnValueChanged; // 0x0220 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0230 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioSliderBase, Value) == 360, "Offset mismatch for UAudioSliderBase::Value");
static_assert(offsetof(UAudioSliderBase, UnitsText) == 368, "Offset mismatch for UAudioSliderBase::UnitsText");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColor) == 384, "Offset mismatch for UAudioSliderBase::TextLabelBackgroundColor");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColorDelegate) == 400, "Offset mismatch for UAudioSliderBase::TextLabelBackgroundColorDelegate");
static_assert(offsetof(UAudioSliderBase, ShowLabelOnlyOnHover) == 412, "Offset mismatch for UAudioSliderBase::ShowLabelOnlyOnHover");
static_assert(offsetof(UAudioSliderBase, ShowUnitsText) == 413, "Offset mismatch for UAudioSliderBase::ShowUnitsText");
static_assert(offsetof(UAudioSliderBase, IsUnitsTextReadOnly) == 414, "Offset mismatch for UAudioSliderBase::IsUnitsTextReadOnly");
static_assert(offsetof(UAudioSliderBase, IsValueTextReadOnly) == 415, "Offset mismatch for UAudioSliderBase::IsValueTextReadOnly");
static_assert(offsetof(UAudioSliderBase, ValueDelegate) == 416, "Offset mismatch for UAudioSliderBase::ValueDelegate");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColor) == 428, "Offset mismatch for UAudioSliderBase::SliderBackgroundColor");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColorDelegate) == 444, "Offset mismatch for UAudioSliderBase::SliderBackgroundColorDelegate");
static_assert(offsetof(UAudioSliderBase, SliderBarColor) == 456, "Offset mismatch for UAudioSliderBase::SliderBarColor");
static_assert(offsetof(UAudioSliderBase, SliderBarColorDelegate) == 472, "Offset mismatch for UAudioSliderBase::SliderBarColorDelegate");
static_assert(offsetof(UAudioSliderBase, SliderThumbColor) == 484, "Offset mismatch for UAudioSliderBase::SliderThumbColor");
static_assert(offsetof(UAudioSliderBase, SliderThumbColorDelegate) == 500, "Offset mismatch for UAudioSliderBase::SliderThumbColorDelegate");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColor) == 512, "Offset mismatch for UAudioSliderBase::WidgetBackgroundColor");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColorDelegate) == 528, "Offset mismatch for UAudioSliderBase::WidgetBackgroundColorDelegate");
static_assert(offsetof(UAudioSliderBase, orientation) == 540, "Offset mismatch for UAudioSliderBase::orientation");
static_assert(offsetof(UAudioSliderBase, OnValueChanged) == 544, "Offset mismatch for UAudioSliderBase::OnValueChanged");
static_assert(offsetof(UAudioSliderBase, OnMouseCaptureBegin) == 560, "Offset mismatch for UAudioSliderBase::OnMouseCaptureBegin");
static_assert(offsetof(UAudioSliderBase, OnMouseCaptureEnd) == 576, "Offset mismatch for UAudioSliderBase::OnMouseCaptureEnd");

// /Script/AudioWidgets.AudioVectorscope
// Kind: Class; super: Widget
class UAudioVectorscope
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t VectorscopeStyle[0x190]; // 0x0170 (Size: 0x190, Type: StructProperty)
    void* AudioBus; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowGrid; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0309
    std::int32_t GridDivisions; // 0x030C (Size: 0x4, Type: IntProperty)
    float MaxDisplayPersistenceMs; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float DisplayPersistenceMs; // 0x0314 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0318 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PanelLayoutType; // 0x031C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UAudioVectorscope, VectorscopeStyle) == 368, "Offset mismatch for UAudioVectorscope::VectorscopeStyle");
static_assert(offsetof(UAudioVectorscope, AudioBus) == 768, "Offset mismatch for UAudioVectorscope::AudioBus");
static_assert(offsetof(UAudioVectorscope, bShowGrid) == 776, "Offset mismatch for UAudioVectorscope::bShowGrid");
static_assert(offsetof(UAudioVectorscope, GridDivisions) == 780, "Offset mismatch for UAudioVectorscope::GridDivisions");
static_assert(offsetof(UAudioVectorscope, MaxDisplayPersistenceMs) == 784, "Offset mismatch for UAudioVectorscope::MaxDisplayPersistenceMs");
static_assert(offsetof(UAudioVectorscope, DisplayPersistenceMs) == 788, "Offset mismatch for UAudioVectorscope::DisplayPersistenceMs");
static_assert(offsetof(UAudioVectorscope, Scale) == 792, "Offset mismatch for UAudioVectorscope::Scale");
static_assert(offsetof(UAudioVectorscope, PanelLayoutType) == 796, "Offset mismatch for UAudioVectorscope::PanelLayoutType");

// /Script/AudioWidgets.AudioVolumeRadialSlider
// Kind: Class; super: AudioRadialSlider
class UAudioVolumeRadialSlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x016C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t WidgetLayout; // 0x0178 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0179
    std::uint8_t CenterBackgroundColor[0x10]; // 0x017C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderProgressColor[0x10]; // 0x018C (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderBarColor[0x14]; // 0x019C (Size: 0x14, Type: StructProperty)
    std::uint8_t HandStartEndRatio[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnitsText[0x10]; // 0x01C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextLabelBackgroundColor[0x10]; // 0x01D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShowLabelOnlyOnHover; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowUnitsText; // 0x01E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsUnitsTextReadOnly; // 0x01E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsValueTextReadOnly; // 0x01E3 (Size: 0x1, Type: BoolProperty)
    float SliderThickness; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t OutputRange[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x01F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0208 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioVolumeRadialSlider, Value) == 360, "Offset mismatch for UAudioVolumeRadialSlider::Value");
static_assert(offsetof(UAudioVolumeRadialSlider, ValueDelegate) == 364, "Offset mismatch for UAudioVolumeRadialSlider::ValueDelegate");
static_assert(offsetof(UAudioVolumeRadialSlider, WidgetLayout) == 376, "Offset mismatch for UAudioVolumeRadialSlider::WidgetLayout");
static_assert(offsetof(UAudioVolumeRadialSlider, CenterBackgroundColor) == 380, "Offset mismatch for UAudioVolumeRadialSlider::CenterBackgroundColor");
static_assert(offsetof(UAudioVolumeRadialSlider, SliderProgressColor) == 396, "Offset mismatch for UAudioVolumeRadialSlider::SliderProgressColor");
static_assert(offsetof(UAudioVolumeRadialSlider, SliderBarColor) == 412, "Offset mismatch for UAudioVolumeRadialSlider::SliderBarColor");
static_assert(offsetof(UAudioVolumeRadialSlider, HandStartEndRatio) == 432, "Offset mismatch for UAudioVolumeRadialSlider::HandStartEndRatio");
static_assert(offsetof(UAudioVolumeRadialSlider, UnitsText) == 448, "Offset mismatch for UAudioVolumeRadialSlider::UnitsText");
static_assert(offsetof(UAudioVolumeRadialSlider, TextLabelBackgroundColor) == 464, "Offset mismatch for UAudioVolumeRadialSlider::TextLabelBackgroundColor");
static_assert(offsetof(UAudioVolumeRadialSlider, ShowLabelOnlyOnHover) == 480, "Offset mismatch for UAudioVolumeRadialSlider::ShowLabelOnlyOnHover");
static_assert(offsetof(UAudioVolumeRadialSlider, ShowUnitsText) == 481, "Offset mismatch for UAudioVolumeRadialSlider::ShowUnitsText");
static_assert(offsetof(UAudioVolumeRadialSlider, IsUnitsTextReadOnly) == 482, "Offset mismatch for UAudioVolumeRadialSlider::IsUnitsTextReadOnly");
static_assert(offsetof(UAudioVolumeRadialSlider, IsValueTextReadOnly) == 483, "Offset mismatch for UAudioVolumeRadialSlider::IsValueTextReadOnly");
static_assert(offsetof(UAudioVolumeRadialSlider, SliderThickness) == 484, "Offset mismatch for UAudioVolumeRadialSlider::SliderThickness");
static_assert(offsetof(UAudioVolumeRadialSlider, OutputRange) == 488, "Offset mismatch for UAudioVolumeRadialSlider::OutputRange");
static_assert(offsetof(UAudioVolumeRadialSlider, OnValueChanged) == 504, "Offset mismatch for UAudioVolumeRadialSlider::OnValueChanged");
static_assert(offsetof(UAudioVolumeRadialSlider, OnMouseCaptureBegin) == 520, "Offset mismatch for UAudioVolumeRadialSlider::OnMouseCaptureBegin");
static_assert(offsetof(UAudioVolumeRadialSlider, OnMouseCaptureEnd) == 536, "Offset mismatch for UAudioVolumeRadialSlider::OnMouseCaptureEnd");

// /Script/AudioWidgets.AudioVolumeSlider
// Kind: Class; super: AudioSlider
class UAudioVolumeSlider
{
public:
    std::uint8_t Pad_0000[0x8B0]; // 0x0000
    TWeakObjectPtr<void> LinToOutputCurve; // 0x08B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OutputToLinCurve; // 0x08B8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAudioVolumeSlider, LinToOutputCurve) == 2224, "Offset mismatch for UAudioVolumeSlider::LinToOutputCurve");
static_assert(offsetof(UAudioVolumeSlider, OutputToLinCurve) == 2232, "Offset mismatch for UAudioVolumeSlider::OutputToLinCurve");
