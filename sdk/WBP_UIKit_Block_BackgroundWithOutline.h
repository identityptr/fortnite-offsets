/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_UIKit_Block_BackgroundWithOutline_C
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* FocusOutline; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Backing; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OutlineHover; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OutlineUnhover; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Sheen; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Hover_Transition; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Pressed_Transition; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Disabled_Transition; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RadiusInPixels; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x03B9
    double TopLeftCornerRadius; // 0x03C0 (Size: 0x8, Type: DoubleProperty)
    double TopRightCornerRadius; // 0x03C8 (Size: 0x8, Type: DoubleProperty)
    double BottomRightCornerRadius; // 0x03D0 (Size: 0x8, Type: DoubleProperty)
    double BottomLeftCornerRadius; // 0x03D8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, UberGraphFrame) == 880, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, FocusOutline) == 888, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::FocusOutline");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Backing) == 896, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Backing");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_OutlineHover) == 904, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_OutlineHover");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_OutlineUnhover) == 912, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_OutlineUnhover");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_Sheen) == 920, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_Sheen");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_Hover_Transition) == 928, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_Hover_Transition");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_Pressed_Transition) == 936, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_Pressed_Transition");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, Anim_Disabled_Transition) == 944, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::Anim_Disabled_Transition");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, RadiusInPixels) == 952, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::RadiusInPixels");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, TopLeftCornerRadius) == 960, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::TopLeftCornerRadius");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, TopRightCornerRadius) == 968, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::TopRightCornerRadius");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, BottomRightCornerRadius) == 976, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::BottomRightCornerRadius");
static_assert(offsetof(UWBP_UIKit_Block_BackgroundWithOutline_C, BottomLeftCornerRadius) == 984, "Offset mismatch for UWBP_UIKit_Block_BackgroundWithOutline_C::BottomLeftCornerRadius");
