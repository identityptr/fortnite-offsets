/**
 * decamp dumper generated SDK
 * Package: /SeasonPassHub/Widgets/Reboot/WBP_SeasonPassPageNav
 */
#pragma once
#include "Basic.h"

// /SeasonPassHub/Widgets/Reboot/WBP_SeasonPassPageNav.WBP_SeasonPassPageNav_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonActivatableWidget
class UWBP_SeasonPassPageNav_C
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    void* Nav_Button_Hitbox; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Label; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Description; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Chevron_Icon_Top; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* Chevron_Icon_Right; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* Chevron_Icon_Left; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Chevron_Icon_Bottom; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* OnHover; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* HoveredSound; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* UnhoveredSound; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* PressedSound; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate Navigate; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_SeasonPassPageNav_C, UberGraphFrame) == 1184, "Offset mismatch for UWBP_SeasonPassPageNav_C::UberGraphFrame");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Nav_Button_Hitbox) == 1192, "Offset mismatch for UWBP_SeasonPassPageNav_C::Nav_Button_Hitbox");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Label) == 1200, "Offset mismatch for UWBP_SeasonPassPageNav_C::Label");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Description) == 1208, "Offset mismatch for UWBP_SeasonPassPageNav_C::Description");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Chevron_Icon_Top) == 1216, "Offset mismatch for UWBP_SeasonPassPageNav_C::Chevron_Icon_Top");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Chevron_Icon_Right) == 1224, "Offset mismatch for UWBP_SeasonPassPageNav_C::Chevron_Icon_Right");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Chevron_Icon_Left) == 1232, "Offset mismatch for UWBP_SeasonPassPageNav_C::Chevron_Icon_Left");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Chevron_Icon_Bottom) == 1240, "Offset mismatch for UWBP_SeasonPassPageNav_C::Chevron_Icon_Bottom");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, OnHover) == 1248, "Offset mismatch for UWBP_SeasonPassPageNav_C::OnHover");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, HoveredSound) == 1256, "Offset mismatch for UWBP_SeasonPassPageNav_C::HoveredSound");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, UnhoveredSound) == 1264, "Offset mismatch for UWBP_SeasonPassPageNav_C::UnhoveredSound");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, PressedSound) == 1272, "Offset mismatch for UWBP_SeasonPassPageNav_C::PressedSound");
static_assert(offsetof(UWBP_SeasonPassPageNav_C, Navigate) == 1280, "Offset mismatch for UWBP_SeasonPassPageNav_C::Navigate");
