/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Generic.WBP_UIKit_Button_Generic_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_UIKit_ButtonGeneric_Base_C
class UWBP_UIKit_Button_Generic_C
{
public:
    std::uint8_t Pad_0000[0x1978]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1978 (Size: 0x8, Type: StructProperty)
    void* Anim_Bounce; // 0x1980 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Pressed; // 0x1988 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnPressed; // 0x1990 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_UIKit_Button_Generic_C, UberGraphFrame) == 6520, "Offset mismatch for UWBP_UIKit_Button_Generic_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Button_Generic_C, Anim_Bounce) == 6528, "Offset mismatch for UWBP_UIKit_Button_Generic_C::Anim_Bounce");
static_assert(offsetof(UWBP_UIKit_Button_Generic_C, Anim_Pressed) == 6536, "Offset mismatch for UWBP_UIKit_Button_Generic_C::Anim_Pressed");
static_assert(offsetof(UWBP_UIKit_Button_Generic_C, OnPressed) == 6544, "Offset mismatch for UWBP_UIKit_Button_Generic_C::OnPressed");
