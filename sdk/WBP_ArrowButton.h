/**
 * decamp dumper generated SDK
 * Package: /Motd/Widgets/WBP_ArrowButton
 */
#pragma once
#include "Basic.h"

// /Motd/Widgets/WBP_ArrowButton.WBP_ArrowButton_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_UIKit_Button_Generic_C
class UWBP_ArrowButton_C
{
public:
    std::uint8_t Pad_0000[0x19A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x19A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t InverseArrow; // 0x19A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_ArrowButton_C, UberGraphFrame) == 6560, "Offset mismatch for UWBP_ArrowButton_C::UberGraphFrame");
static_assert(offsetof(UWBP_ArrowButton_C, InverseArrow) == 6568, "Offset mismatch for UWBP_ArrowButton_C::InverseArrow");
