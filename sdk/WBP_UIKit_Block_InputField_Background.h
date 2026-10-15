/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/InputField/Blocks/WBP_UIKit_Block_InputField_Background.WBP_UIKit_Block_InputField_Background_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_UIKit_Block_InputField_Background_C
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* Backing; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Focused_Transition; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Pressed_Transition; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Disabled_Transition; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectionIsAvailable; // 0x0398 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, UberGraphFrame) == 880, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, Backing) == 888, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::Backing");
static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, Anim_Focused_Transition) == 896, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::Anim_Focused_Transition");
static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, Anim_Pressed_Transition) == 904, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::Anim_Pressed_Transition");
static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, Anim_Disabled_Transition) == 912, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::Anim_Disabled_Transition");
static_assert(offsetof(UWBP_UIKit_Block_InputField_Background_C, SelectionIsAvailable) == 920, "Offset mismatch for UWBP_UIKit_Block_InputField_Background_C::SelectionIsAvailable");
