/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/UIKit/StatusIndicator/WBP_UIKit_StatusIndicator.WBP_UIKit_StatusIndicator_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_UIKit_StatusIndicator_C
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0348 (Size: 0x8, Type: StructProperty)
    void* Root; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Image_BackgroundWithOutline; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Intro; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x0368 (Size: 0x4, Type: IntProperty)
    std::uint8_t Configuration; // 0x036C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Type; // 0x036D (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverrideStatusIndicatorVisibility; // 0x036E (Size: 0x1, Type: BoolProperty)
    std::uint8_t IconSize; // 0x036F (Size: 0x1, Type: ByteProperty)
    void* Icon; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverrideStatusIndicatorState; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0379
    void* Indicator_Text; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Indicator_Icon; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* BackgroundDynamicMaterial; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* BackgroundMaterial; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Font[0x58]; // 0x03A0 (Size: 0x58, Type: StructProperty)
    float SizeDot; // 0x03F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03FC
    double SizeNumber; // 0x0400 (Size: 0x8, Type: DoubleProperty)
    double SizeIconCompact; // 0x0408 (Size: 0x8, Type: DoubleProperty)
    double SizeIconDefault; // 0x0410 (Size: 0x8, Type: DoubleProperty)
    double MobileIconSizeMultiplierCompact; // 0x0418 (Size: 0x8, Type: DoubleProperty)
    double MobileIconSizeMultipierDefault; // 0x0420 (Size: 0x8, Type: DoubleProperty)
    double MobileIconSizeMultiplierDot; // 0x0428 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0430
    std::int32_t CountCeiling; // 0x0434 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, UberGraphFrame) == 840, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Root) == 848, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Root");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Image_BackgroundWithOutline) == 856, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Image_BackgroundWithOutline");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Anim_Intro) == 864, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Anim_Intro");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Count) == 872, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Count");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Configuration) == 876, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Configuration");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Type) == 877, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Type");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, OverrideStatusIndicatorVisibility) == 878, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::OverrideStatusIndicatorVisibility");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, IconSize) == 879, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::IconSize");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Icon) == 880, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Icon");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, OverrideStatusIndicatorState) == 888, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::OverrideStatusIndicatorState");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Indicator_Text) == 896, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Indicator_Text");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Indicator_Icon) == 904, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Indicator_Icon");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, BackgroundDynamicMaterial) == 912, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::BackgroundDynamicMaterial");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, BackgroundMaterial) == 920, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::BackgroundMaterial");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, Font) == 928, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::Font");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, SizeDot) == 1016, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::SizeDot");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, SizeNumber) == 1024, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::SizeNumber");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, SizeIconCompact) == 1032, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::SizeIconCompact");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, SizeIconDefault) == 1040, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::SizeIconDefault");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, MobileIconSizeMultiplierCompact) == 1048, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::MobileIconSizeMultiplierCompact");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, MobileIconSizeMultipierDefault) == 1056, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::MobileIconSizeMultipierDefault");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, MobileIconSizeMultiplierDot) == 1064, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::MobileIconSizeMultiplierDot");
static_assert(offsetof(UWBP_UIKit_StatusIndicator_C, CountCeiling) == 1076, "Offset mismatch for UWBP_UIKit_StatusIndicator_C::CountCeiling");
