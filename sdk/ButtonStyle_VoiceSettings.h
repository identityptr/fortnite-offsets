/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/UI/SocialPanel/Art/ButtonStyle_VoiceSettings
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/UI/SocialPanel/Art/ButtonStyle_VoiceSettings.ButtonStyle_VoiceSettings_C
// Kind: BlueprintGeneratedClass; super: CommonButtonStyle
class UButtonStyle_VoiceSettings_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleMaterial; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t SingleMaterialBrush[0xB0]; // 0x0030 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalBase[0xB0]; // 0x00E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalHovered[0xB0]; // 0x0190 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalPressed[0xB0]; // 0x0240 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedBase[0xB0]; // 0x02F0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedHovered[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedPressed[0xB0]; // 0x0450 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Disabled[0xB0]; // 0x0500 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ButtonPadding[0x10]; // 0x05B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPadding[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    std::int32_t MinWidth; // 0x05D0 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x05D4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x05DC (Size: 0x4, Type: IntProperty)
    void* NormalTextStyle; // 0x05E0 (Size: 0x8, Type: ClassProperty)
    void* NormalHoveredTextStyle; // 0x05E8 (Size: 0x8, Type: ClassProperty)
    void* SelectedTextStyle; // 0x05F0 (Size: 0x8, Type: ClassProperty)
    void* SelectedHoveredTextStyle; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    void* DisabledTextStyle; // 0x0600 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PressedSlateSound[0x18]; // 0x0608 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSound[0x18]; // 0x0620 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSound[0x20]; // 0x0638 (Size: 0x20, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSound[0x20]; // 0x0658 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedPressedSlateSound[0x20]; // 0x0678 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedClickedSlateSound[0x20]; // 0x0698 (Size: 0x20, Type: StructProperty)
    std::uint8_t HoveredSlateSound[0x18]; // 0x06B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSound[0x20]; // 0x06D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSound[0x1]; // 0x06F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UButtonStyle_VoiceSettings_C, bSingleMaterial) == 40, "Offset mismatch for UButtonStyle_VoiceSettings_C::bSingleMaterial");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SingleMaterialBrush) == 48, "Offset mismatch for UButtonStyle_VoiceSettings_C::SingleMaterialBrush");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, NormalBase) == 224, "Offset mismatch for UButtonStyle_VoiceSettings_C::NormalBase");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, NormalHovered) == 400, "Offset mismatch for UButtonStyle_VoiceSettings_C::NormalHovered");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, NormalPressed) == 576, "Offset mismatch for UButtonStyle_VoiceSettings_C::NormalPressed");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedBase) == 752, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedBase");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedHovered) == 928, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedHovered");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedPressed) == 1104, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedPressed");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, Disabled) == 1280, "Offset mismatch for UButtonStyle_VoiceSettings_C::Disabled");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, ButtonPadding) == 1456, "Offset mismatch for UButtonStyle_VoiceSettings_C::ButtonPadding");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, CustomPadding) == 1472, "Offset mismatch for UButtonStyle_VoiceSettings_C::CustomPadding");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, MinWidth) == 1488, "Offset mismatch for UButtonStyle_VoiceSettings_C::MinWidth");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, MinHeight) == 1492, "Offset mismatch for UButtonStyle_VoiceSettings_C::MinHeight");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, MaxWidth) == 1496, "Offset mismatch for UButtonStyle_VoiceSettings_C::MaxWidth");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, MaxHeight) == 1500, "Offset mismatch for UButtonStyle_VoiceSettings_C::MaxHeight");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, NormalTextStyle) == 1504, "Offset mismatch for UButtonStyle_VoiceSettings_C::NormalTextStyle");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, NormalHoveredTextStyle) == 1512, "Offset mismatch for UButtonStyle_VoiceSettings_C::NormalHoveredTextStyle");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedTextStyle) == 1520, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedTextStyle");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedHoveredTextStyle) == 1528, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedHoveredTextStyle");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, DisabledTextStyle) == 1536, "Offset mismatch for UButtonStyle_VoiceSettings_C::DisabledTextStyle");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, PressedSlateSound) == 1544, "Offset mismatch for UButtonStyle_VoiceSettings_C::PressedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, ClickedSlateSound) == 1568, "Offset mismatch for UButtonStyle_VoiceSettings_C::ClickedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedPressedSlateSound) == 1592, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedPressedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedClickedSlateSound) == 1624, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedClickedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, LockedPressedSlateSound) == 1656, "Offset mismatch for UButtonStyle_VoiceSettings_C::LockedPressedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, LockedClickedSlateSound) == 1688, "Offset mismatch for UButtonStyle_VoiceSettings_C::LockedClickedSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, HoveredSlateSound) == 1720, "Offset mismatch for UButtonStyle_VoiceSettings_C::HoveredSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, SelectedHoveredSlateSound) == 1744, "Offset mismatch for UButtonStyle_VoiceSettings_C::SelectedHoveredSlateSound");
static_assert(offsetof(UButtonStyle_VoiceSettings_C, LockedHoveredSlateSound) == 1776, "Offset mismatch for UButtonStyle_VoiceSettings_C::LockedHoveredSlateSound");
