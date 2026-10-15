/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/UIKit/InfoBox/WBP_UIKit_InfoBox.WBP_UIKit_InfoBox_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UIKit_InfoBox_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* WBP_UIKit_StatusIndicator; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* WBP_UIKit_Backplate; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Text; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0338
    std::uint8_t IconSize[0x18]; // 0x0340 (Size: 0x18, Type: StructProperty)
    FText PreviewText; // 0x0358 (Size: 0x18, Type: TextProperty)
    void* IconMaterial; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowStatusIndicator; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutoWrapText; // 0x0379 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextJustification; // 0x037A (Size: 0x1, Type: ByteProperty)
    std::uint8_t IconTopAlignment; // 0x037B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_UIKit_InfoBox_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UIKit_InfoBox_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, WBP_UIKit_StatusIndicator) == 784, "Offset mismatch for UWBP_UIKit_InfoBox_C::WBP_UIKit_StatusIndicator");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, WBP_UIKit_Backplate) == 792, "Offset mismatch for UWBP_UIKit_InfoBox_C::WBP_UIKit_Backplate");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, Text) == 800, "Offset mismatch for UWBP_UIKit_InfoBox_C::Text");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, Icon) == 808, "Offset mismatch for UWBP_UIKit_InfoBox_C::Icon");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, HorizontalBox) == 816, "Offset mismatch for UWBP_UIKit_InfoBox_C::HorizontalBox");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, IconSize) == 832, "Offset mismatch for UWBP_UIKit_InfoBox_C::IconSize");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, PreviewText) == 856, "Offset mismatch for UWBP_UIKit_InfoBox_C::PreviewText");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, IconMaterial) == 880, "Offset mismatch for UWBP_UIKit_InfoBox_C::IconMaterial");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, ShowStatusIndicator) == 888, "Offset mismatch for UWBP_UIKit_InfoBox_C::ShowStatusIndicator");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, AutoWrapText) == 889, "Offset mismatch for UWBP_UIKit_InfoBox_C::AutoWrapText");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, TextJustification) == 890, "Offset mismatch for UWBP_UIKit_InfoBox_C::TextJustification");
static_assert(offsetof(UWBP_UIKit_InfoBox_C, IconTopAlignment) == 891, "Offset mismatch for UWBP_UIKit_InfoBox_C::IconTopAlignment");
