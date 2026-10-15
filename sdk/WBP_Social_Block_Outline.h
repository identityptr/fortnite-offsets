/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/Social/Buttons/Blocks/WBP_Social_Block_Outline
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/Social/Buttons/Blocks/WBP_Social_Block_Outline.WBP_Social_Block_Outline_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_Social_Block_Outline_C
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0348 (Size: 0x8, Type: StructProperty)
    void* FocusOutline; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Hover; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Unhover; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Sheen; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RadiusInPixels; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0371
    double TopLeftCornerRadius; // 0x0378 (Size: 0x8, Type: DoubleProperty)
    double TopRightCornerRadius; // 0x0380 (Size: 0x8, Type: DoubleProperty)
    double BottomRightCornerRadius; // 0x0388 (Size: 0x8, Type: DoubleProperty)
    double BottomLeftCornerRadius; // 0x0390 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0398
    void* BlockOutlineHoverSound; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Anim_Hover_Energy[0x4]; // 0x03A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t Anim_Hover_Outline[0x4]; // 0x03AC (Size: 0x4, Type: NameProperty)
    std::uint8_t Anim_Hover_Fill[0x4]; // 0x03B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t Anim_OutlineThickness[0x4]; // 0x03B4 (Size: 0x4, Type: NameProperty)
    FName Anim_Highlight; // 0x03B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UWBP_Social_Block_Outline_C, UberGraphFrame) == 840, "Offset mismatch for UWBP_Social_Block_Outline_C::UberGraphFrame");
static_assert(offsetof(UWBP_Social_Block_Outline_C, FocusOutline) == 848, "Offset mismatch for UWBP_Social_Block_Outline_C::FocusOutline");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Hover) == 856, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Hover");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Unhover) == 864, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Unhover");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Sheen) == 872, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Sheen");
static_assert(offsetof(UWBP_Social_Block_Outline_C, RadiusInPixels) == 880, "Offset mismatch for UWBP_Social_Block_Outline_C::RadiusInPixels");
static_assert(offsetof(UWBP_Social_Block_Outline_C, TopLeftCornerRadius) == 888, "Offset mismatch for UWBP_Social_Block_Outline_C::TopLeftCornerRadius");
static_assert(offsetof(UWBP_Social_Block_Outline_C, TopRightCornerRadius) == 896, "Offset mismatch for UWBP_Social_Block_Outline_C::TopRightCornerRadius");
static_assert(offsetof(UWBP_Social_Block_Outline_C, BottomRightCornerRadius) == 904, "Offset mismatch for UWBP_Social_Block_Outline_C::BottomRightCornerRadius");
static_assert(offsetof(UWBP_Social_Block_Outline_C, BottomLeftCornerRadius) == 912, "Offset mismatch for UWBP_Social_Block_Outline_C::BottomLeftCornerRadius");
static_assert(offsetof(UWBP_Social_Block_Outline_C, BlockOutlineHoverSound) == 928, "Offset mismatch for UWBP_Social_Block_Outline_C::BlockOutlineHoverSound");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Hover_Energy) == 936, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Hover_Energy");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Hover_Outline) == 940, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Hover_Outline");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Hover_Fill) == 944, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Hover_Fill");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_OutlineThickness) == 948, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_OutlineThickness");
static_assert(offsetof(UWBP_Social_Block_Outline_C, Anim_Highlight) == 952, "Offset mismatch for UWBP_Social_Block_Outline_C::Anim_Highlight");
