/**
 * decamp dumper generated SDK
 * Package: /Script/AdvancedWidgets
 */
#pragma once
#include "Basic.h"

// /Script/AdvancedWidgets.ColorGradingSpinBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FColorGradingSpinBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BorderBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveBorderBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredBorderBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectorBrush[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    float SelectorWidth; // 0x02D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FColorGradingSpinBoxStyle, BorderBrush) == 16, "Offset mismatch for FColorGradingSpinBoxStyle::BorderBrush");
static_assert(offsetof(FColorGradingSpinBoxStyle, ActiveBorderBrush) == 192, "Offset mismatch for FColorGradingSpinBoxStyle::ActiveBorderBrush");
static_assert(offsetof(FColorGradingSpinBoxStyle, HoveredBorderBrush) == 368, "Offset mismatch for FColorGradingSpinBoxStyle::HoveredBorderBrush");
static_assert(offsetof(FColorGradingSpinBoxStyle, SelectorBrush) == 544, "Offset mismatch for FColorGradingSpinBoxStyle::SelectorBrush");
static_assert(offsetof(FColorGradingSpinBoxStyle, SelectorWidth) == 720, "Offset mismatch for FColorGradingSpinBoxStyle::SelectorWidth");

// /Script/AdvancedWidgets.RadialSlider
// Kind: Class; super: Widget
class URadialSlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x016C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t bUseCustomDefaultValue; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0179
    float CustomDefaultValue; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SliderRange[0x48]; // 0x0180 (Size: 0x48, Type: StructProperty)
    TArray<void*> ValueTags; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    float SliderHandleStartAngle; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float SliderHandleEndAngle; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float AngularOffset; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01E4
    std::uint8_t HandStartEndRatio[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WidgetStyle[0x440]; // 0x0200 (Size: 0x440, Type: StructProperty)
    std::uint8_t SliderBarColor[0x10]; // 0x0640 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderProgressColor[0x10]; // 0x0650 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderHandleColor[0x10]; // 0x0660 (Size: 0x10, Type: StructProperty)
    std::uint8_t CenterBackgroundColor[0x10]; // 0x0670 (Size: 0x10, Type: StructProperty)
    std::uint8_t Locked; // 0x0680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MouseUsesStep; // 0x0681 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequiresControllerLock; // 0x0682 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0683
    float StepSize; // 0x0684 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsFocusable; // 0x0688 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseVerticalDrag; // 0x0689 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowSliderHandle; // 0x068A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowSliderHand; // 0x068B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x4]; // 0x068C
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x0690 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x06A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureBegin; // 0x06B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureEnd; // 0x06C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x06D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(URadialSlider, Value) == 360, "Offset mismatch for URadialSlider::Value");
static_assert(offsetof(URadialSlider, ValueDelegate) == 364, "Offset mismatch for URadialSlider::ValueDelegate");
static_assert(offsetof(URadialSlider, bUseCustomDefaultValue) == 376, "Offset mismatch for URadialSlider::bUseCustomDefaultValue");
static_assert(offsetof(URadialSlider, CustomDefaultValue) == 380, "Offset mismatch for URadialSlider::CustomDefaultValue");
static_assert(offsetof(URadialSlider, SliderRange) == 384, "Offset mismatch for URadialSlider::SliderRange");
static_assert(offsetof(URadialSlider, ValueTags) == 456, "Offset mismatch for URadialSlider::ValueTags");
static_assert(offsetof(URadialSlider, SliderHandleStartAngle) == 472, "Offset mismatch for URadialSlider::SliderHandleStartAngle");
static_assert(offsetof(URadialSlider, SliderHandleEndAngle) == 476, "Offset mismatch for URadialSlider::SliderHandleEndAngle");
static_assert(offsetof(URadialSlider, AngularOffset) == 480, "Offset mismatch for URadialSlider::AngularOffset");
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 488, "Offset mismatch for URadialSlider::HandStartEndRatio");
static_assert(offsetof(URadialSlider, WidgetStyle) == 512, "Offset mismatch for URadialSlider::WidgetStyle");
static_assert(offsetof(URadialSlider, SliderBarColor) == 1600, "Offset mismatch for URadialSlider::SliderBarColor");
static_assert(offsetof(URadialSlider, SliderProgressColor) == 1616, "Offset mismatch for URadialSlider::SliderProgressColor");
static_assert(offsetof(URadialSlider, SliderHandleColor) == 1632, "Offset mismatch for URadialSlider::SliderHandleColor");
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 1648, "Offset mismatch for URadialSlider::CenterBackgroundColor");
static_assert(offsetof(URadialSlider, Locked) == 1664, "Offset mismatch for URadialSlider::Locked");
static_assert(offsetof(URadialSlider, MouseUsesStep) == 1665, "Offset mismatch for URadialSlider::MouseUsesStep");
static_assert(offsetof(URadialSlider, RequiresControllerLock) == 1666, "Offset mismatch for URadialSlider::RequiresControllerLock");
static_assert(offsetof(URadialSlider, StepSize) == 1668, "Offset mismatch for URadialSlider::StepSize");
static_assert(offsetof(URadialSlider, IsFocusable) == 1672, "Offset mismatch for URadialSlider::IsFocusable");
static_assert(offsetof(URadialSlider, UseVerticalDrag) == 1673, "Offset mismatch for URadialSlider::UseVerticalDrag");
static_assert(offsetof(URadialSlider, ShowSliderHandle) == 1674, "Offset mismatch for URadialSlider::ShowSliderHandle");
static_assert(offsetof(URadialSlider, ShowSliderHand) == 1675, "Offset mismatch for URadialSlider::ShowSliderHand");
static_assert(offsetof(URadialSlider, OnMouseCaptureBegin) == 1680, "Offset mismatch for URadialSlider::OnMouseCaptureBegin");
static_assert(offsetof(URadialSlider, OnMouseCaptureEnd) == 1696, "Offset mismatch for URadialSlider::OnMouseCaptureEnd");
static_assert(offsetof(URadialSlider, OnControllerCaptureBegin) == 1712, "Offset mismatch for URadialSlider::OnControllerCaptureBegin");
static_assert(offsetof(URadialSlider, OnControllerCaptureEnd) == 1728, "Offset mismatch for URadialSlider::OnControllerCaptureEnd");
static_assert(offsetof(URadialSlider, OnValueChanged) == 1744, "Offset mismatch for URadialSlider::OnValueChanged");
