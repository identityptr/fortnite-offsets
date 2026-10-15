/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Frontend/Lobby/Nameplates/WBP_EmptyButton_ContextMenu
 */
#pragma once
#include "Basic.h"

// /Game/UI/Frontend/Lobby/Nameplates/WBP_EmptyButton_ContextMenu.WBP_EmptyButton_ContextMenu_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_UIKit_Button_Generic_C
class UWBP_EmptyButton_ContextMenu_C
{
public:
    std::uint8_t Pad_0000[0x1978]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1978 (Size: 0x8, Type: StructProperty)
    void* Anim_Bounce; // 0x1980 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Pressed; // 0x1988 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnPressed; // 0x1990 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_EmptyButton_ContextMenu_C, UberGraphFrame) == 6520, "Offset mismatch for UWBP_EmptyButton_ContextMenu_C::UberGraphFrame");
static_assert(offsetof(UWBP_EmptyButton_ContextMenu_C, Anim_Bounce) == 6528, "Offset mismatch for UWBP_EmptyButton_ContextMenu_C::Anim_Bounce");
static_assert(offsetof(UWBP_EmptyButton_ContextMenu_C, Anim_Pressed) == 6536, "Offset mismatch for UWBP_EmptyButton_ContextMenu_C::Anim_Pressed");
static_assert(offsetof(UWBP_EmptyButton_ContextMenu_C, OnPressed) == 6544, "Offset mismatch for UWBP_EmptyButton_ContextMenu_C::OnPressed");
