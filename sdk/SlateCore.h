/**
 * decamp dumper generated SDK
 * Package: /Script/SlateCore
 */
#pragma once
#include "Basic.h"

// /Script/SlateCore.AnalogInputEvent
// Kind: ScriptStruct; super: KeyEvent
struct FAnalogInputEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.ButtonStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FButtonStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Normal[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Hovered[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Pressed[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Disabled[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalForeground[0x14]; // 0x02D0 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoveredForeground[0x14]; // 0x02E4 (Size: 0x14, Type: StructProperty)
    std::uint8_t PressedForeground[0x14]; // 0x02F8 (Size: 0x14, Type: StructProperty)
    std::uint8_t DisabledForeground[0x14]; // 0x030C (Size: 0x14, Type: StructProperty)
    std::uint8_t NormalPadding[0x10]; // 0x0320 (Size: 0x10, Type: StructProperty)
    std::uint8_t PressedPadding[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    std::uint8_t PressedSlateSound[0x18]; // 0x0340 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSound[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSound[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FButtonStyle, Normal) == 16, "Offset mismatch for FButtonStyle::Normal");
static_assert(offsetof(FButtonStyle, Hovered) == 192, "Offset mismatch for FButtonStyle::Hovered");
static_assert(offsetof(FButtonStyle, Pressed) == 368, "Offset mismatch for FButtonStyle::Pressed");
static_assert(offsetof(FButtonStyle, Disabled) == 544, "Offset mismatch for FButtonStyle::Disabled");
static_assert(offsetof(FButtonStyle, NormalForeground) == 720, "Offset mismatch for FButtonStyle::NormalForeground");
static_assert(offsetof(FButtonStyle, HoveredForeground) == 740, "Offset mismatch for FButtonStyle::HoveredForeground");
static_assert(offsetof(FButtonStyle, PressedForeground) == 760, "Offset mismatch for FButtonStyle::PressedForeground");
static_assert(offsetof(FButtonStyle, DisabledForeground) == 780, "Offset mismatch for FButtonStyle::DisabledForeground");
static_assert(offsetof(FButtonStyle, NormalPadding) == 800, "Offset mismatch for FButtonStyle::NormalPadding");
static_assert(offsetof(FButtonStyle, PressedPadding) == 816, "Offset mismatch for FButtonStyle::PressedPadding");
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 832, "Offset mismatch for FButtonStyle::PressedSlateSound");
static_assert(offsetof(FButtonStyle, ClickedSlateSound) == 856, "Offset mismatch for FButtonStyle::ClickedSlateSound");
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 880, "Offset mismatch for FButtonStyle::HoveredSlateSound");

// /Script/SlateCore.CaptureLostEvent
// Kind: ScriptStruct; super: none
struct FCaptureLostEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.CharacterEvent
// Kind: ScriptStruct; super: InputEvent
struct FCharacterEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.CheckBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FCheckBoxStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CheckBoxType; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t UncheckedImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UncheckedHoveredImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UncheckedPressedImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CheckedImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CheckedHoveredImage[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CheckedPressedImage[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UndeterminedImage[0xB0]; // 0x0430 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UndeterminedHoveredImage[0xB0]; // 0x04E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UndeterminedPressedImage[0xB0]; // 0x0590 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Padding[0x10]; // 0x0640 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundImage[0xB0]; // 0x0650 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundHoveredImage[0xB0]; // 0x0700 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundPressedImage[0xB0]; // 0x07B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x0860 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoveredForeground[0x14]; // 0x0874 (Size: 0x14, Type: StructProperty)
    std::uint8_t PressedForeground[0x14]; // 0x0888 (Size: 0x14, Type: StructProperty)
    std::uint8_t CheckedForeground[0x14]; // 0x089C (Size: 0x14, Type: StructProperty)
    std::uint8_t CheckedHoveredForeground[0x14]; // 0x08B0 (Size: 0x14, Type: StructProperty)
    std::uint8_t CheckedPressedForeground[0x14]; // 0x08C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t UndeterminedForeground[0x14]; // 0x08D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t BorderBackgroundColor[0x14]; // 0x08EC (Size: 0x14, Type: StructProperty)
    std::uint8_t CheckedSlateSound[0x18]; // 0x0900 (Size: 0x18, Type: StructProperty)
    std::uint8_t UncheckedSlateSound[0x18]; // 0x0918 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSound[0x1]; // 0x0930 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCheckBoxStyle, CheckBoxType) == 8, "Offset mismatch for FCheckBoxStyle::CheckBoxType");
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 16, "Offset mismatch for FCheckBoxStyle::UncheckedImage");
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 192, "Offset mismatch for FCheckBoxStyle::UncheckedHoveredImage");
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 368, "Offset mismatch for FCheckBoxStyle::UncheckedPressedImage");
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 544, "Offset mismatch for FCheckBoxStyle::CheckedImage");
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 720, "Offset mismatch for FCheckBoxStyle::CheckedHoveredImage");
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 896, "Offset mismatch for FCheckBoxStyle::CheckedPressedImage");
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 1072, "Offset mismatch for FCheckBoxStyle::UndeterminedImage");
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 1248, "Offset mismatch for FCheckBoxStyle::UndeterminedHoveredImage");
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 1424, "Offset mismatch for FCheckBoxStyle::UndeterminedPressedImage");
static_assert(offsetof(FCheckBoxStyle, Padding) == 1600, "Offset mismatch for FCheckBoxStyle::Padding");
static_assert(offsetof(FCheckBoxStyle, BackgroundImage) == 1616, "Offset mismatch for FCheckBoxStyle::BackgroundImage");
static_assert(offsetof(FCheckBoxStyle, BackgroundHoveredImage) == 1792, "Offset mismatch for FCheckBoxStyle::BackgroundHoveredImage");
static_assert(offsetof(FCheckBoxStyle, BackgroundPressedImage) == 1968, "Offset mismatch for FCheckBoxStyle::BackgroundPressedImage");
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 2144, "Offset mismatch for FCheckBoxStyle::ForegroundColor");
static_assert(offsetof(FCheckBoxStyle, HoveredForeground) == 2164, "Offset mismatch for FCheckBoxStyle::HoveredForeground");
static_assert(offsetof(FCheckBoxStyle, PressedForeground) == 2184, "Offset mismatch for FCheckBoxStyle::PressedForeground");
static_assert(offsetof(FCheckBoxStyle, CheckedForeground) == 2204, "Offset mismatch for FCheckBoxStyle::CheckedForeground");
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredForeground) == 2224, "Offset mismatch for FCheckBoxStyle::CheckedHoveredForeground");
static_assert(offsetof(FCheckBoxStyle, CheckedPressedForeground) == 2244, "Offset mismatch for FCheckBoxStyle::CheckedPressedForeground");
static_assert(offsetof(FCheckBoxStyle, UndeterminedForeground) == 2264, "Offset mismatch for FCheckBoxStyle::UndeterminedForeground");
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 2284, "Offset mismatch for FCheckBoxStyle::BorderBackgroundColor");
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 2304, "Offset mismatch for FCheckBoxStyle::CheckedSlateSound");
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 2328, "Offset mismatch for FCheckBoxStyle::UncheckedSlateSound");
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 2352, "Offset mismatch for FCheckBoxStyle::HoveredSlateSound");

// /Script/SlateCore.ComboBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FComboBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ComboButtonStyle[0x560]; // 0x0010 (Size: 0x560, Type: StructProperty)
    std::uint8_t PressedSlateSound[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectionChangeSlateSound[0x18]; // 0x0588 (Size: 0x18, Type: StructProperty)
    std::uint8_t ContentPadding[0x10]; // 0x05A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MenuRowPadding[0x1]; // 0x05B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 16, "Offset mismatch for FComboBoxStyle::ComboButtonStyle");
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 1392, "Offset mismatch for FComboBoxStyle::PressedSlateSound");
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 1416, "Offset mismatch for FComboBoxStyle::SelectionChangeSlateSound");
static_assert(offsetof(FComboBoxStyle, ContentPadding) == 1440, "Offset mismatch for FComboBoxStyle::ContentPadding");
static_assert(offsetof(FComboBoxStyle, MenuRowPadding) == 1456, "Offset mismatch for FComboBoxStyle::MenuRowPadding");

// /Script/SlateCore.ComboButtonStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FComboButtonStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ButtonStyle[0x390]; // 0x0010 (Size: 0x390, Type: StructProperty)
    std::uint8_t DownArrowImage[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ShadowOffset[0x8]; // 0x0450 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShadowColorAndOpacity[0x18]; // 0x0458 (Size: 0x18, Type: StructProperty)
    std::uint8_t MenuBorderBrush[0xB0]; // 0x0470 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MenuBorderPadding[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t ContentPadding[0x10]; // 0x0530 (Size: 0x10, Type: StructProperty)
    std::uint8_t DownArrowPadding[0x10]; // 0x0540 (Size: 0x10, Type: StructProperty)
    std::uint8_t DownArrowAlign; // 0x0550 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 16, "Offset mismatch for FComboButtonStyle::ButtonStyle");
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 928, "Offset mismatch for FComboButtonStyle::DownArrowImage");
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 1104, "Offset mismatch for FComboButtonStyle::ShadowOffset");
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 1112, "Offset mismatch for FComboButtonStyle::ShadowColorAndOpacity");
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 1136, "Offset mismatch for FComboButtonStyle::MenuBorderBrush");
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 1312, "Offset mismatch for FComboButtonStyle::MenuBorderPadding");
static_assert(offsetof(FComboButtonStyle, ContentPadding) == 1328, "Offset mismatch for FComboButtonStyle::ContentPadding");
static_assert(offsetof(FComboButtonStyle, DownArrowPadding) == 1344, "Offset mismatch for FComboButtonStyle::DownArrowPadding");
static_assert(offsetof(FComboButtonStyle, DownArrowAlign) == 1360, "Offset mismatch for FComboButtonStyle::DownArrowAlign");

// /Script/SlateCore.CompositeFallbackFont
// Kind: ScriptStruct; super: none
struct FCompositeFallbackFont
{
public:
    std::uint8_t Typeface[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float ScalingFactor; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0, "Offset mismatch for FCompositeFallbackFont::Typeface");
static_assert(offsetof(FCompositeFallbackFont, ScalingFactor) == 16, "Offset mismatch for FCompositeFallbackFont::ScalingFactor");

// /Script/SlateCore.CompositeFont
// Kind: ScriptStruct; super: none
struct FCompositeFont
{
public:
    std::uint8_t DefaultTypeface[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t FallbackTypeface[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> SubTypefaces; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableAscentDescentOverride; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0, "Offset mismatch for FCompositeFont::DefaultTypeface");
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 16, "Offset mismatch for FCompositeFont::FallbackTypeface");
static_assert(offsetof(FCompositeFont, SubTypefaces) == 40, "Offset mismatch for FCompositeFont::SubTypefaces");
static_assert(offsetof(FCompositeFont, bEnableAscentDescentOverride) == 56, "Offset mismatch for FCompositeFont::bEnableAscentDescentOverride");

// /Script/SlateCore.CompositeSubFont
// Kind: ScriptStruct; super: CompositeFallbackFont
struct FCompositeSubFont
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> CharacterRanges; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FString Cultures; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 24, "Offset mismatch for FCompositeSubFont::CharacterRanges");
static_assert(offsetof(FCompositeSubFont, Cultures) == 40, "Offset mismatch for FCompositeSubFont::Cultures");

// /Script/SlateCore.DeprecateSlateVector2D
// Kind: ScriptStruct; super: Vector2f
struct FDeprecateSlateVector2D
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDeprecateSlateVector2D, X) == 0, "Offset mismatch for FDeprecateSlateVector2D::X");
static_assert(offsetof(FDeprecateSlateVector2D, Y) == 4, "Offset mismatch for FDeprecateSlateVector2D::Y");

// /Script/SlateCore.DockTabStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FDockTabStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CloseButtonStyle[0x390]; // 0x0010 (Size: 0x390, Type: StructProperty)
    std::uint8_t NormalBrush[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ColorOverlayTabBrush[0xB0]; // 0x0450 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ColorOverlayIconBrush[0xB0]; // 0x0500 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ForegroundBrush[0xB0]; // 0x05B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredBrush[0xB0]; // 0x0660 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ContentAreaBrush[0xB0]; // 0x0710 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TabWellBrush[0xB0]; // 0x07C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TabTextStyle[0x2E0]; // 0x0870 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t TabPadding[0x10]; // 0x0B50 (Size: 0x10, Type: StructProperty)
    std::uint8_t IconSize[0x8]; // 0x0B60 (Size: 0x8, Type: StructProperty)
    float OverlapWidth; // 0x0B68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FlashColor[0x14]; // 0x0B6C (Size: 0x14, Type: StructProperty)
    std::uint8_t NormalForegroundColor[0x14]; // 0x0B80 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoveredForegroundColor[0x14]; // 0x0B94 (Size: 0x14, Type: StructProperty)
    std::uint8_t ActiveForegroundColor[0x14]; // 0x0BA8 (Size: 0x14, Type: StructProperty)
    std::uint8_t ForegroundForegroundColor[0x14]; // 0x0BBC (Size: 0x14, Type: StructProperty)
    float IconBorderPadding; // 0x0BD0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 16, "Offset mismatch for FDockTabStyle::CloseButtonStyle");
static_assert(offsetof(FDockTabStyle, NormalBrush) == 928, "Offset mismatch for FDockTabStyle::NormalBrush");
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 1104, "Offset mismatch for FDockTabStyle::ColorOverlayTabBrush");
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 1280, "Offset mismatch for FDockTabStyle::ColorOverlayIconBrush");
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 1456, "Offset mismatch for FDockTabStyle::ForegroundBrush");
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 1632, "Offset mismatch for FDockTabStyle::HoveredBrush");
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 1808, "Offset mismatch for FDockTabStyle::ContentAreaBrush");
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 1984, "Offset mismatch for FDockTabStyle::TabWellBrush");
static_assert(offsetof(FDockTabStyle, TabTextStyle) == 2160, "Offset mismatch for FDockTabStyle::TabTextStyle");
static_assert(offsetof(FDockTabStyle, TabPadding) == 2896, "Offset mismatch for FDockTabStyle::TabPadding");
static_assert(offsetof(FDockTabStyle, IconSize) == 2912, "Offset mismatch for FDockTabStyle::IconSize");
static_assert(offsetof(FDockTabStyle, OverlapWidth) == 2920, "Offset mismatch for FDockTabStyle::OverlapWidth");
static_assert(offsetof(FDockTabStyle, FlashColor) == 2924, "Offset mismatch for FDockTabStyle::FlashColor");
static_assert(offsetof(FDockTabStyle, NormalForegroundColor) == 2944, "Offset mismatch for FDockTabStyle::NormalForegroundColor");
static_assert(offsetof(FDockTabStyle, HoveredForegroundColor) == 2964, "Offset mismatch for FDockTabStyle::HoveredForegroundColor");
static_assert(offsetof(FDockTabStyle, ActiveForegroundColor) == 2984, "Offset mismatch for FDockTabStyle::ActiveForegroundColor");
static_assert(offsetof(FDockTabStyle, ForegroundForegroundColor) == 3004, "Offset mismatch for FDockTabStyle::ForegroundForegroundColor");
static_assert(offsetof(FDockTabStyle, IconBorderPadding) == 3024, "Offset mismatch for FDockTabStyle::IconBorderPadding");

// /Script/SlateCore.EditableTextBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FEditableTextBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundImageNormal[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundImageHovered[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundImageFocused[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundImageReadOnly[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Padding[0x10]; // 0x02D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextStyle[0x2E0]; // 0x02E0 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x05C0 (Size: 0x14, Type: StructProperty)
    std::uint8_t BackgroundColor[0x14]; // 0x05D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t ReadOnlyForegroundColor[0x14]; // 0x05E8 (Size: 0x14, Type: StructProperty)
    std::uint8_t FocusedForegroundColor[0x14]; // 0x05FC (Size: 0x14, Type: StructProperty)
    std::uint8_t HScrollBarPadding[0x10]; // 0x0610 (Size: 0x10, Type: StructProperty)
    std::uint8_t VScrollBarPadding[0x10]; // 0x0620 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x1]; // 0x0630 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 16, "Offset mismatch for FEditableTextBoxStyle::BackgroundImageNormal");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 192, "Offset mismatch for FEditableTextBoxStyle::BackgroundImageHovered");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 368, "Offset mismatch for FEditableTextBoxStyle::BackgroundImageFocused");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 544, "Offset mismatch for FEditableTextBoxStyle::BackgroundImageReadOnly");
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 720, "Offset mismatch for FEditableTextBoxStyle::Padding");
static_assert(offsetof(FEditableTextBoxStyle, TextStyle) == 736, "Offset mismatch for FEditableTextBoxStyle::TextStyle");
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 1472, "Offset mismatch for FEditableTextBoxStyle::ForegroundColor");
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 1492, "Offset mismatch for FEditableTextBoxStyle::BackgroundColor");
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 1512, "Offset mismatch for FEditableTextBoxStyle::ReadOnlyForegroundColor");
static_assert(offsetof(FEditableTextBoxStyle, FocusedForegroundColor) == 1532, "Offset mismatch for FEditableTextBoxStyle::FocusedForegroundColor");
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 1552, "Offset mismatch for FEditableTextBoxStyle::HScrollBarPadding");
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 1568, "Offset mismatch for FEditableTextBoxStyle::VScrollBarPadding");
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 1584, "Offset mismatch for FEditableTextBoxStyle::ScrollBarStyle");

// /Script/SlateCore.EditableTextStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FEditableTextStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Font[0x58]; // 0x0008 (Size: 0x58, Type: StructProperty)
    std::uint8_t ColorAndOpacity[0x14]; // 0x0060 (Size: 0x14, Type: StructProperty)
    std::uint8_t HintColorAndOpacity[0x1C]; // 0x0074 (Size: 0x1C, Type: StructProperty)
    std::uint8_t BackgroundImageSelected[0xB0]; // 0x0090 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedBackgroundColor[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t BackgroundImageComposing[0xB0]; // 0x0160 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CaretImage[0x1]; // 0x0210 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEditableTextStyle, Font) == 8, "Offset mismatch for FEditableTextStyle::Font");
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 96, "Offset mismatch for FEditableTextStyle::ColorAndOpacity");
static_assert(offsetof(FEditableTextStyle, HintColorAndOpacity) == 116, "Offset mismatch for FEditableTextStyle::HintColorAndOpacity");
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 144, "Offset mismatch for FEditableTextStyle::BackgroundImageSelected");
static_assert(offsetof(FEditableTextStyle, SelectedBackgroundColor) == 320, "Offset mismatch for FEditableTextStyle::SelectedBackgroundColor");
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 352, "Offset mismatch for FEditableTextStyle::BackgroundImageComposing");
static_assert(offsetof(FEditableTextStyle, CaretImage) == 528, "Offset mismatch for FEditableTextStyle::CaretImage");

// /Script/SlateCore.ExpandableAreaStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FExpandableAreaStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CollapsedImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ExpandedImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    float RolloutAnimationSeconds; // 0x0170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 16, "Offset mismatch for FExpandableAreaStyle::CollapsedImage");
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 192, "Offset mismatch for FExpandableAreaStyle::ExpandedImage");
static_assert(offsetof(FExpandableAreaStyle, RolloutAnimationSeconds) == 368, "Offset mismatch for FExpandableAreaStyle::RolloutAnimationSeconds");

// /Script/SlateCore.FocusEvent
// Kind: ScriptStruct; super: none
struct FFocusEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.FontData
// Kind: ScriptStruct; super: none
struct FFontData
{
public:
    FString FontFilename; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0010
    std::uint8_t Hinting; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LoadingPolicy; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::int32_t SubFaceIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    void* FontFaceAsset; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFontData, FontFilename) == 0, "Offset mismatch for FFontData::FontFilename");
static_assert(offsetof(FFontData, Hinting) == 20, "Offset mismatch for FFontData::Hinting");
static_assert(offsetof(FFontData, LoadingPolicy) == 21, "Offset mismatch for FFontData::LoadingPolicy");
static_assert(offsetof(FFontData, SubFaceIndex) == 24, "Offset mismatch for FFontData::SubFaceIndex");
static_assert(offsetof(FFontData, FontFaceAsset) == 32, "Offset mismatch for FFontData::FontFaceAsset");

// /Script/SlateCore.FontOutlineSettings
// Kind: ScriptStruct; super: none
struct FFontOutlineSettings
{
public:
    std::int32_t OutlineSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMiteredCorners; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSeparateFillAlpha; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyOutlineToDropShadows; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    void* OutlineMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutlineColor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFontOutlineSettings, OutlineSize) == 0, "Offset mismatch for FFontOutlineSettings::OutlineSize");
static_assert(offsetof(FFontOutlineSettings, bMiteredCorners) == 4, "Offset mismatch for FFontOutlineSettings::bMiteredCorners");
static_assert(offsetof(FFontOutlineSettings, bSeparateFillAlpha) == 5, "Offset mismatch for FFontOutlineSettings::bSeparateFillAlpha");
static_assert(offsetof(FFontOutlineSettings, bApplyOutlineToDropShadows) == 6, "Offset mismatch for FFontOutlineSettings::bApplyOutlineToDropShadows");
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 8, "Offset mismatch for FFontOutlineSettings::OutlineMaterial");
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 16, "Offset mismatch for FFontOutlineSettings::OutlineColor");

// /Script/SlateCore.FontSdfSettings
// Kind: ScriptStruct; super: none
struct FFontSdfSettings
{
public:
    std::int32_t BasePpem; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFontSdfSettings, BasePpem) == 0, "Offset mismatch for FFontSdfSettings::BasePpem");

// /Script/SlateCore.Geometry
// Kind: ScriptStruct; super: none
struct FGeometry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.HeaderRowStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FHeaderRowStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ColumnStyle[0x640]; // 0x0010 (Size: 0x640, Type: StructProperty)
    std::uint8_t LastColumnStyle[0x640]; // 0x0650 (Size: 0x640, Type: StructProperty)
    std::uint8_t ColumnSplitterStyle[0x170]; // 0x0C90 (Size: 0x170, Type: StructProperty)
    float SplitterHandleSize; // 0x0E00 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0E04
    std::uint8_t BackgroundBrush[0xB0]; // 0x0E10 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ForegroundColor[0x20]; // 0x0EC0 (Size: 0x20, Type: StructProperty)
    std::uint8_t HorizontalSeparatorBrush[0xB0]; // 0x0EE0 (Size: 0xB0, Type: StructProperty)
    float HorizontalSeparatorThickness; // 0x0F90 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 16, "Offset mismatch for FHeaderRowStyle::ColumnStyle");
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 1616, "Offset mismatch for FHeaderRowStyle::LastColumnStyle");
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 3216, "Offset mismatch for FHeaderRowStyle::ColumnSplitterStyle");
static_assert(offsetof(FHeaderRowStyle, SplitterHandleSize) == 3584, "Offset mismatch for FHeaderRowStyle::SplitterHandleSize");
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 3600, "Offset mismatch for FHeaderRowStyle::BackgroundBrush");
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 3776, "Offset mismatch for FHeaderRowStyle::ForegroundColor");
static_assert(offsetof(FHeaderRowStyle, HorizontalSeparatorBrush) == 3808, "Offset mismatch for FHeaderRowStyle::HorizontalSeparatorBrush");
static_assert(offsetof(FHeaderRowStyle, HorizontalSeparatorThickness) == 3984, "Offset mismatch for FHeaderRowStyle::HorizontalSeparatorThickness");

// /Script/SlateCore.HyperlinkStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FHyperlinkStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t UnderlineStyle[0x390]; // 0x0010 (Size: 0x390, Type: StructProperty)
    std::uint8_t TextStyle[0x2E0]; // 0x03A0 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t Padding[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 16, "Offset mismatch for FHyperlinkStyle::UnderlineStyle");
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 928, "Offset mismatch for FHyperlinkStyle::TextStyle");
static_assert(offsetof(FHyperlinkStyle, Padding) == 1664, "Offset mismatch for FHyperlinkStyle::Padding");

// /Script/SlateCore.InlineEditableTextBlockStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FInlineEditableTextBlockStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t EditableTextBoxStyle[0xC80]; // 0x0010 (Size: 0xC80, Type: StructProperty)
    std::uint8_t TextStyle[0x1]; // 0x0C90 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 16, "Offset mismatch for FInlineEditableTextBlockStyle::EditableTextBoxStyle");
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 3216, "Offset mismatch for FInlineEditableTextBlockStyle::TextStyle");

// /Script/SlateCore.InlineTextImageStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FInlineTextImageStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Image[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::int16_t Baseline; // 0x00C0 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FInlineTextImageStyle, Image) == 16, "Offset mismatch for FInlineTextImageStyle::Image");
static_assert(offsetof(FInlineTextImageStyle, Baseline) == 192, "Offset mismatch for FInlineTextImageStyle::Baseline");

// /Script/SlateCore.InputEvent
// Kind: ScriptStruct; super: none
struct FInputEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.KeyEvent
// Kind: ScriptStruct; super: InputEvent
struct FKeyEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.Margin
// Kind: ScriptStruct; super: none
struct FMargin
{
public:
    float Left; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Top; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Right; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Bottom; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMargin, Left) == 0, "Offset mismatch for FMargin::Left");
static_assert(offsetof(FMargin, Top) == 4, "Offset mismatch for FMargin::Top");
static_assert(offsetof(FMargin, Right) == 8, "Offset mismatch for FMargin::Right");
static_assert(offsetof(FMargin, Bottom) == 12, "Offset mismatch for FMargin::Bottom");

// /Script/SlateCore.MotionEvent
// Kind: ScriptStruct; super: InputEvent
struct FMotionEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.NavigationEvent
// Kind: ScriptStruct; super: InputEvent
struct FNavigationEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.NavigationMethod
// Kind: ScriptStruct; super: none
struct FNavigationMethod
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.NavigationMethodOrthogonal
// Kind: ScriptStruct; super: NavigationMethod
struct FNavigationMethodOrthogonal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.NavigationMethodProximity
// Kind: ScriptStruct; super: NavigationMethod
struct FNavigationMethodProximity
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AlignmentFactor; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SearchAngleDegrees; // 0x002C (Size: 0x4, Type: FloatProperty)
    float OverlapThreshold; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNavigationMethodProximity, AlignmentFactor) == 40, "Offset mismatch for FNavigationMethodProximity::AlignmentFactor");
static_assert(offsetof(FNavigationMethodProximity, SearchAngleDegrees) == 44, "Offset mismatch for FNavigationMethodProximity::SearchAngleDegrees");
static_assert(offsetof(FNavigationMethodProximity, OverlapThreshold) == 48, "Offset mismatch for FNavigationMethodProximity::OverlapThreshold");

// /Script/SlateCore.PointerEvent
// Kind: ScriptStruct; super: InputEvent
struct FPointerEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.ProgressBarStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FProgressBarStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FillImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarqueeImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t EnableFillAnimation; // 0x0220 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 16, "Offset mismatch for FProgressBarStyle::BackgroundImage");
static_assert(offsetof(FProgressBarStyle, FillImage) == 192, "Offset mismatch for FProgressBarStyle::FillImage");
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 368, "Offset mismatch for FProgressBarStyle::MarqueeImage");
static_assert(offsetof(FProgressBarStyle, EnableFillAnimation) == 544, "Offset mismatch for FProgressBarStyle::EnableFillAnimation");

// /Script/SlateCore.ScrollBarStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FScrollBarStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t HorizontalBackgroundImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t VerticalBackgroundImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t VerticalTopSlotImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HorizontalTopSlotImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t VerticalBottomSlotImage[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HorizontalBottomSlotImage[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalThumbImage[0xB0]; // 0x0430 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredThumbImage[0xB0]; // 0x04E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DraggedThumbImage[0xB0]; // 0x0590 (Size: 0xB0, Type: StructProperty)
    float Thickness; // 0x0640 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 16, "Offset mismatch for FScrollBarStyle::HorizontalBackgroundImage");
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 192, "Offset mismatch for FScrollBarStyle::VerticalBackgroundImage");
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 368, "Offset mismatch for FScrollBarStyle::VerticalTopSlotImage");
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 544, "Offset mismatch for FScrollBarStyle::HorizontalTopSlotImage");
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 720, "Offset mismatch for FScrollBarStyle::VerticalBottomSlotImage");
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 896, "Offset mismatch for FScrollBarStyle::HorizontalBottomSlotImage");
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 1072, "Offset mismatch for FScrollBarStyle::NormalThumbImage");
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 1248, "Offset mismatch for FScrollBarStyle::HoveredThumbImage");
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 1424, "Offset mismatch for FScrollBarStyle::DraggedThumbImage");
static_assert(offsetof(FScrollBarStyle, Thickness) == 1600, "Offset mismatch for FScrollBarStyle::Thickness");

// /Script/SlateCore.ScrollBorderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FScrollBorderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TopShadowBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BottomShadowBrush[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 16, "Offset mismatch for FScrollBorderStyle::TopShadowBrush");
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 192, "Offset mismatch for FScrollBorderStyle::BottomShadowBrush");

// /Script/SlateCore.ScrollBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FScrollBoxStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float BarThickness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t TopShadowBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BottomShadowBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LeftShadowBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t RightShadowBrush[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HorizontalScrolledContentPadding[0x10]; // 0x02D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t VerticalScrolledContentPadding[0x1]; // 0x02E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScrollBoxStyle, BarThickness) == 8, "Offset mismatch for FScrollBoxStyle::BarThickness");
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 16, "Offset mismatch for FScrollBoxStyle::TopShadowBrush");
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 192, "Offset mismatch for FScrollBoxStyle::BottomShadowBrush");
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 368, "Offset mismatch for FScrollBoxStyle::LeftShadowBrush");
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 544, "Offset mismatch for FScrollBoxStyle::RightShadowBrush");
static_assert(offsetof(FScrollBoxStyle, HorizontalScrolledContentPadding) == 720, "Offset mismatch for FScrollBoxStyle::HorizontalScrolledContentPadding");
static_assert(offsetof(FScrollBoxStyle, VerticalScrolledContentPadding) == 736, "Offset mismatch for FScrollBoxStyle::VerticalScrolledContentPadding");

// /Script/SlateCore.SearchBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSearchBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TextBoxStyle[0xC80]; // 0x0010 (Size: 0xC80, Type: StructProperty)
    std::uint8_t ActiveFontInfo[0x60]; // 0x0C90 (Size: 0x60, Type: StructProperty)
    std::uint8_t UpArrowImage[0xB0]; // 0x0CF0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DownArrowImage[0xB0]; // 0x0DA0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t GlassImage[0xB0]; // 0x0E50 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ClearImage[0xB0]; // 0x0F00 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ImagePadding[0x10]; // 0x0FB0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ImageSizeOverride[0x18]; // 0x0FC0 (Size: 0x18, Type: OptionalProperty)
    std::uint8_t bLeftAlignButtons; // 0x0FD8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLeftAlignSearchResultButtons; // 0x0FD9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLeftAlignGlassImageAndClearButton; // 0x0FDA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 16, "Offset mismatch for FSearchBoxStyle::TextBoxStyle");
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 3216, "Offset mismatch for FSearchBoxStyle::ActiveFontInfo");
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 3312, "Offset mismatch for FSearchBoxStyle::UpArrowImage");
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 3488, "Offset mismatch for FSearchBoxStyle::DownArrowImage");
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 3664, "Offset mismatch for FSearchBoxStyle::GlassImage");
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 3840, "Offset mismatch for FSearchBoxStyle::ClearImage");
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 4016, "Offset mismatch for FSearchBoxStyle::ImagePadding");
static_assert(offsetof(FSearchBoxStyle, ImageSizeOverride) == 4032, "Offset mismatch for FSearchBoxStyle::ImageSizeOverride");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignButtons) == 4056, "Offset mismatch for FSearchBoxStyle::bLeftAlignButtons");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignSearchResultButtons) == 4057, "Offset mismatch for FSearchBoxStyle::bLeftAlignSearchResultButtons");
static_assert(offsetof(FSearchBoxStyle, bLeftAlignGlassImageAndClearButton) == 4058, "Offset mismatch for FSearchBoxStyle::bLeftAlignGlassImageAndClearButton");

// /Script/SlateCore.SegmentedControlStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSegmentedControlStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ControlStyle[0x950]; // 0x0010 (Size: 0x950, Type: StructProperty)
    std::uint8_t FirstControlStyle[0x950]; // 0x0960 (Size: 0x950, Type: StructProperty)
    std::uint8_t LastControlStyle[0x950]; // 0x12B0 (Size: 0x950, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x1C00 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UniformPadding[0x1]; // 0x1CB0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSegmentedControlStyle, ControlStyle) == 16, "Offset mismatch for FSegmentedControlStyle::ControlStyle");
static_assert(offsetof(FSegmentedControlStyle, FirstControlStyle) == 2400, "Offset mismatch for FSegmentedControlStyle::FirstControlStyle");
static_assert(offsetof(FSegmentedControlStyle, LastControlStyle) == 4784, "Offset mismatch for FSegmentedControlStyle::LastControlStyle");
static_assert(offsetof(FSegmentedControlStyle, BackgroundBrush) == 7168, "Offset mismatch for FSegmentedControlStyle::BackgroundBrush");
static_assert(offsetof(FSegmentedControlStyle, UniformPadding) == 7344, "Offset mismatch for FSegmentedControlStyle::UniformPadding");

// /Script/SlateCore.SlateBrush
// Kind: ScriptStruct; super: none
struct FSlateBrush
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TintColor[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    std::uint8_t DrawAs; // 0x001C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Tiling; // 0x001D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Mirroring; // 0x001E (Size: 0x1, Type: ByteProperty)
    std::uint8_t ImageType; // 0x001F (Size: 0x1, Type: ByteProperty)
    std::uint8_t ImageSize[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t Margin[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* ResourceObject; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutlineSettings[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t UVRegion[0x14]; // 0x0080 (Size: 0x14, Type: StructProperty)
    std::uint8_t bHasUObject; // 0x0094 (Size: 0x1, Type: BoolProperty)
    // 0x0094 BoolProperty bIsDynamicallyLoaded (shared storage)
    std::uint8_t Pad_0001[0x13]; // 0x0095
    FName ResourceName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSlateBrush, TintColor) == 8, "Offset mismatch for FSlateBrush::TintColor");
static_assert(offsetof(FSlateBrush, DrawAs) == 28, "Offset mismatch for FSlateBrush::DrawAs");
static_assert(offsetof(FSlateBrush, Tiling) == 29, "Offset mismatch for FSlateBrush::Tiling");
static_assert(offsetof(FSlateBrush, Mirroring) == 30, "Offset mismatch for FSlateBrush::Mirroring");
static_assert(offsetof(FSlateBrush, ImageType) == 31, "Offset mismatch for FSlateBrush::ImageType");
static_assert(offsetof(FSlateBrush, ImageSize) == 32, "Offset mismatch for FSlateBrush::ImageSize");
static_assert(offsetof(FSlateBrush, Margin) == 40, "Offset mismatch for FSlateBrush::Margin");
static_assert(offsetof(FSlateBrush, ResourceObject) == 56, "Offset mismatch for FSlateBrush::ResourceObject");
static_assert(offsetof(FSlateBrush, OutlineSettings) == 64, "Offset mismatch for FSlateBrush::OutlineSettings");
static_assert(offsetof(FSlateBrush, UVRegion) == 128, "Offset mismatch for FSlateBrush::UVRegion");
static_assert(offsetof(FSlateBrush, bHasUObject) == 148, "Offset mismatch for FSlateBrush::bHasUObject");
static_assert(offsetof(FSlateBrush, ResourceName) == 168, "Offset mismatch for FSlateBrush::ResourceName");

// /Script/SlateCore.SlateBrushOutlineSettings
// Kind: ScriptStruct; super: none
struct FSlateBrushOutlineSettings
{
public:
    std::uint8_t CornerRadii[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Color[0x14]; // 0x0020 (Size: 0x14, Type: StructProperty)
    float Width; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RoundingType; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseBrushTransparency; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateBrushOutlineSettings, CornerRadii) == 0, "Offset mismatch for FSlateBrushOutlineSettings::CornerRadii");
static_assert(offsetof(FSlateBrushOutlineSettings, Color) == 32, "Offset mismatch for FSlateBrushOutlineSettings::Color");
static_assert(offsetof(FSlateBrushOutlineSettings, Width) == 52, "Offset mismatch for FSlateBrushOutlineSettings::Width");
static_assert(offsetof(FSlateBrushOutlineSettings, RoundingType) == 56, "Offset mismatch for FSlateBrushOutlineSettings::RoundingType");
static_assert(offsetof(FSlateBrushOutlineSettings, bUseBrushTransparency) == 57, "Offset mismatch for FSlateBrushOutlineSettings::bUseBrushTransparency");

// /Script/SlateCore.SlateColor
// Kind: ScriptStruct; super: none
struct FSlateColor
{
public:
    std::uint8_t SpecifiedColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorUseRule; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSlateColor, SpecifiedColor) == 0, "Offset mismatch for FSlateColor::SpecifiedColor");
static_assert(offsetof(FSlateColor, ColorUseRule) == 16, "Offset mismatch for FSlateColor::ColorUseRule");

// /Script/SlateCore.SlateFontInfo
// Kind: ScriptStruct; super: none
struct FSlateFontInfo
{
public:
    void* FontObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* FontMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutlineSettings[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t TypefaceFontName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    float Size; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::int32_t LetterSpacing; // 0x0048 (Size: 0x4, Type: IntProperty)
    float SkewAmount; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0050
    std::uint8_t bForceMonospaced; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMaterialIsStencil; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0053
    float MonospacedWidth; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlateFontInfo, FontObject) == 0, "Offset mismatch for FSlateFontInfo::FontObject");
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 8, "Offset mismatch for FSlateFontInfo::FontMaterial");
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 16, "Offset mismatch for FSlateFontInfo::OutlineSettings");
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 64, "Offset mismatch for FSlateFontInfo::TypefaceFontName");
static_assert(offsetof(FSlateFontInfo, Size) == 68, "Offset mismatch for FSlateFontInfo::Size");
static_assert(offsetof(FSlateFontInfo, LetterSpacing) == 72, "Offset mismatch for FSlateFontInfo::LetterSpacing");
static_assert(offsetof(FSlateFontInfo, SkewAmount) == 76, "Offset mismatch for FSlateFontInfo::SkewAmount");
static_assert(offsetof(FSlateFontInfo, bForceMonospaced) == 81, "Offset mismatch for FSlateFontInfo::bForceMonospaced");
static_assert(offsetof(FSlateFontInfo, bMaterialIsStencil) == 82, "Offset mismatch for FSlateFontInfo::bMaterialIsStencil");
static_assert(offsetof(FSlateFontInfo, MonospacedWidth) == 84, "Offset mismatch for FSlateFontInfo::MonospacedWidth");

// /Script/SlateCore.SlateSound
// Kind: ScriptStruct; super: none
struct FSlateSound
{
public:
    void* ResourceObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSlateSound, ResourceObject) == 0, "Offset mismatch for FSlateSound::ResourceObject");

// /Script/SlateCore.SlateWidgetStyle
// Kind: ScriptStruct; super: none
struct FSlateWidgetStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.SliderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSliderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t NormalBarImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredBarImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DisabledBarImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalThumbImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredThumbImage[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DisabledThumbImage[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    float BarThickness; // 0x0430 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSliderStyle, NormalBarImage) == 16, "Offset mismatch for FSliderStyle::NormalBarImage");
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 192, "Offset mismatch for FSliderStyle::HoveredBarImage");
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 368, "Offset mismatch for FSliderStyle::DisabledBarImage");
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 544, "Offset mismatch for FSliderStyle::NormalThumbImage");
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 720, "Offset mismatch for FSliderStyle::HoveredThumbImage");
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 896, "Offset mismatch for FSliderStyle::DisabledThumbImage");
static_assert(offsetof(FSliderStyle, BarThickness) == 1072, "Offset mismatch for FSliderStyle::BarThickness");

// /Script/SlateCore.SpinBoxStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSpinBoxStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveBackgroundBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredBackgroundBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveFillBrush[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredFillBrush[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InactiveFillBrush[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ArrowsImage[0xB0]; // 0x0430 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x04E0 (Size: 0x14, Type: StructProperty)
    std::uint8_t TextPadding[0x10]; // 0x04F4 (Size: 0x10, Type: StructProperty)
    std::uint8_t InsetPadding[0x1]; // 0x0504 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 16, "Offset mismatch for FSpinBoxStyle::BackgroundBrush");
static_assert(offsetof(FSpinBoxStyle, ActiveBackgroundBrush) == 192, "Offset mismatch for FSpinBoxStyle::ActiveBackgroundBrush");
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 368, "Offset mismatch for FSpinBoxStyle::HoveredBackgroundBrush");
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 544, "Offset mismatch for FSpinBoxStyle::ActiveFillBrush");
static_assert(offsetof(FSpinBoxStyle, HoveredFillBrush) == 720, "Offset mismatch for FSpinBoxStyle::HoveredFillBrush");
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 896, "Offset mismatch for FSpinBoxStyle::InactiveFillBrush");
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 1072, "Offset mismatch for FSpinBoxStyle::ArrowsImage");
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 1248, "Offset mismatch for FSpinBoxStyle::ForegroundColor");
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 1268, "Offset mismatch for FSpinBoxStyle::TextPadding");
static_assert(offsetof(FSpinBoxStyle, InsetPadding) == 1284, "Offset mismatch for FSpinBoxStyle::InsetPadding");

// /Script/SlateCore.SplitterStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FSplitterStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t HandleNormalBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HandleHighlightBrush[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 16, "Offset mismatch for FSplitterStyle::HandleNormalBrush");
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 192, "Offset mismatch for FSplitterStyle::HandleHighlightBrush");

// /Script/SlateCore.StyleColorList
// Kind: ScriptStruct; super: none
struct FStyleColorList
{
public:
    std::uint8_t StyleColors[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStyleColorList, StyleColors) == 0, "Offset mismatch for FStyleColorList::StyleColors");

// /Script/SlateCore.StyleTheme
// Kind: ScriptStruct; super: none
struct FStyleTheme
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.TableColumnHeaderStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FTableColumnHeaderStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SortPrimaryAscendingImage[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SortPrimaryDescendingImage[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SortSecondaryAscendingImage[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SortSecondaryDescendingImage[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalBrush[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HoveredBrush[0xB0]; // 0x0380 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MenuDropdownImage[0xB0]; // 0x0430 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MenuDropdownNormalBorderBrush[0xB0]; // 0x04E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MenuDropdownHoveredBorderBrush[0x1]; // 0x0590 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 16, "Offset mismatch for FTableColumnHeaderStyle::SortPrimaryAscendingImage");
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 192, "Offset mismatch for FTableColumnHeaderStyle::SortPrimaryDescendingImage");
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 368, "Offset mismatch for FTableColumnHeaderStyle::SortSecondaryAscendingImage");
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 544, "Offset mismatch for FTableColumnHeaderStyle::SortSecondaryDescendingImage");
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 720, "Offset mismatch for FTableColumnHeaderStyle::NormalBrush");
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 896, "Offset mismatch for FTableColumnHeaderStyle::HoveredBrush");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 1072, "Offset mismatch for FTableColumnHeaderStyle::MenuDropdownImage");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 1248, "Offset mismatch for FTableColumnHeaderStyle::MenuDropdownNormalBorderBrush");
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 1424, "Offset mismatch for FTableColumnHeaderStyle::MenuDropdownHoveredBorderBrush");

// /Script/SlateCore.TableRowStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FTableRowStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SelectorFocusedBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveHoveredBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InactiveHoveredBrush[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InactiveBrush[0xB0]; // 0x02D0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bUseParentRowBrush; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0381
    std::uint8_t ParentRowBackgroundBrush[0xB0]; // 0x0390 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ParentRowBackgroundHoveredBrush[0xB0]; // 0x0440 (Size: 0xB0, Type: StructProperty)
    std::uint8_t EvenRowBackgroundHoveredBrush[0xB0]; // 0x04F0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t EvenRowBackgroundBrush[0xB0]; // 0x05A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OddRowBackgroundHoveredBrush[0xB0]; // 0x0650 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OddRowBackgroundBrush[0xB0]; // 0x0700 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TextColor[0x14]; // 0x07B0 (Size: 0x14, Type: StructProperty)
    std::uint8_t SelectedTextColor[0x1C]; // 0x07C4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t DropIndicator_Above[0xB0]; // 0x07E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DropIndicator_Onto[0xB0]; // 0x0890 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DropIndicator_Below[0xB0]; // 0x0940 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveHighlightedBrush[0xB0]; // 0x09F0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InactiveHighlightedBrush[0x1]; // 0x0AA0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 16, "Offset mismatch for FTableRowStyle::SelectorFocusedBrush");
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 192, "Offset mismatch for FTableRowStyle::ActiveHoveredBrush");
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 368, "Offset mismatch for FTableRowStyle::ActiveBrush");
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 544, "Offset mismatch for FTableRowStyle::InactiveHoveredBrush");
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 720, "Offset mismatch for FTableRowStyle::InactiveBrush");
static_assert(offsetof(FTableRowStyle, bUseParentRowBrush) == 896, "Offset mismatch for FTableRowStyle::bUseParentRowBrush");
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundBrush) == 912, "Offset mismatch for FTableRowStyle::ParentRowBackgroundBrush");
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundHoveredBrush) == 1088, "Offset mismatch for FTableRowStyle::ParentRowBackgroundHoveredBrush");
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 1264, "Offset mismatch for FTableRowStyle::EvenRowBackgroundHoveredBrush");
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 1440, "Offset mismatch for FTableRowStyle::EvenRowBackgroundBrush");
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 1616, "Offset mismatch for FTableRowStyle::OddRowBackgroundHoveredBrush");
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 1792, "Offset mismatch for FTableRowStyle::OddRowBackgroundBrush");
static_assert(offsetof(FTableRowStyle, TextColor) == 1968, "Offset mismatch for FTableRowStyle::TextColor");
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 1988, "Offset mismatch for FTableRowStyle::SelectedTextColor");
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 2016, "Offset mismatch for FTableRowStyle::DropIndicator_Above");
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 2192, "Offset mismatch for FTableRowStyle::DropIndicator_Onto");
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 2368, "Offset mismatch for FTableRowStyle::DropIndicator_Below");
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 2544, "Offset mismatch for FTableRowStyle::ActiveHighlightedBrush");
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 2720, "Offset mismatch for FTableRowStyle::InactiveHighlightedBrush");

// /Script/SlateCore.TableViewStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FTableViewStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundBrush[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTableViewStyle, BackgroundBrush) == 16, "Offset mismatch for FTableViewStyle::BackgroundBrush");

// /Script/SlateCore.TextBlockStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FTextBlockStyle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Font[0x58]; // 0x0008 (Size: 0x58, Type: StructProperty)
    std::uint8_t ColorAndOpacity[0x14]; // 0x0060 (Size: 0x14, Type: StructProperty)
    std::uint8_t ShadowOffset[0x8]; // 0x0074 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShadowColorAndOpacity[0x10]; // 0x007C (Size: 0x10, Type: StructProperty)
    std::uint8_t SelectedBackgroundColor[0x14]; // 0x008C (Size: 0x14, Type: StructProperty)
    std::uint8_t HighlightColor[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t HighlightShape[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t StrikeBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t UnderlineBrush[0xB0]; // 0x0220 (Size: 0xB0, Type: StructProperty)
    std::uint8_t TransformPolicy; // 0x02D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OverflowPolicy; // 0x02D1 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTextBlockStyle, Font) == 8, "Offset mismatch for FTextBlockStyle::Font");
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 96, "Offset mismatch for FTextBlockStyle::ColorAndOpacity");
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 116, "Offset mismatch for FTextBlockStyle::ShadowOffset");
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 124, "Offset mismatch for FTextBlockStyle::ShadowColorAndOpacity");
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 140, "Offset mismatch for FTextBlockStyle::SelectedBackgroundColor");
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 160, "Offset mismatch for FTextBlockStyle::HighlightColor");
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 192, "Offset mismatch for FTextBlockStyle::HighlightShape");
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 368, "Offset mismatch for FTextBlockStyle::StrikeBrush");
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 544, "Offset mismatch for FTextBlockStyle::UnderlineBrush");
static_assert(offsetof(FTextBlockStyle, TransformPolicy) == 720, "Offset mismatch for FTextBlockStyle::TransformPolicy");
static_assert(offsetof(FTextBlockStyle, OverflowPolicy) == 721, "Offset mismatch for FTextBlockStyle::OverflowPolicy");

// /Script/SlateCore.ToolBarStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FToolBarStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BackgroundBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ExpandBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SeparatorBrush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LabelStyle[0x2E0]; // 0x0220 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t EditableTextStyle[0xC80]; // 0x0500 (Size: 0xC80, Type: StructProperty)
    std::uint8_t ToggleButton[0x950]; // 0x1180 (Size: 0x950, Type: StructProperty)
    std::uint8_t ComboButtonStyle[0x560]; // 0x1AD0 (Size: 0x560, Type: StructProperty)
    std::uint8_t SettingsButtonStyle[0x390]; // 0x2030 (Size: 0x390, Type: StructProperty)
    std::uint8_t SettingsComboButton[0x560]; // 0x23C0 (Size: 0x560, Type: StructProperty)
    std::uint8_t SettingsToggleButton[0x950]; // 0x2920 (Size: 0x950, Type: StructProperty)
    std::uint8_t ButtonStyle[0x390]; // 0x3270 (Size: 0x390, Type: StructProperty)
    std::uint8_t LabelPadding[0x10]; // 0x3600 (Size: 0x10, Type: StructProperty)
    float UniformBlockWidth; // 0x3610 (Size: 0x4, Type: FloatProperty)
    float UniformBlockHeight; // 0x3614 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumColumns; // 0x3618 (Size: 0x4, Type: IntProperty)
    std::uint8_t IconPadding[0x10]; // 0x361C (Size: 0x10, Type: StructProperty)
    std::uint8_t SeparatorPadding[0x10]; // 0x362C (Size: 0x10, Type: StructProperty)
    float SeparatorThickness; // 0x363C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComboButtonPadding[0x10]; // 0x3640 (Size: 0x10, Type: StructProperty)
    std::uint8_t ButtonPadding[0x10]; // 0x3650 (Size: 0x10, Type: StructProperty)
    std::uint8_t CheckBoxPadding[0x10]; // 0x3660 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlockPadding[0x10]; // 0x3670 (Size: 0x10, Type: StructProperty)
    std::uint8_t IndentedBlockPadding[0x10]; // 0x3680 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlockHovered[0xB0]; // 0x3690 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundPadding[0x10]; // 0x3740 (Size: 0x10, Type: StructProperty)
    std::uint8_t WrapButtonStyle[0x740]; // 0x3750 (Size: 0x740, Type: StructProperty)
    std::uint8_t WrapButtonPadding[0x10]; // 0x3E90 (Size: 0x10, Type: StructProperty)
    std::int32_t WrapButtonIndex; // 0x3EA0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowWrapButton; // 0x3EA4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowWrappingDefault; // 0x3EA5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x3EA6
    std::uint8_t IconSize[0x8]; // 0x3EA8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bShowLabels; // 0x3EB0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x3EB1
    float ButtonContentMaxWidth; // 0x3EB4 (Size: 0x4, Type: FloatProperty)
    float ButtonTextMinWidth; // 0x3EB8 (Size: 0x4, Type: FloatProperty)
    float ButtonTextMaxWidth; // 0x3EBC (Size: 0x4, Type: FloatProperty)
    float ButtonContentFillWidth; // 0x3EC0 (Size: 0x4, Type: FloatProperty)
    float ComboContentMinWidth; // 0x3EC4 (Size: 0x4, Type: FloatProperty)
    float ComboContentMaxWidth; // 0x3EC8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComboContentHorizontalAlignment; // 0x3ECC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x3ECD
    std::uint8_t IconPaddingWithVisibleLabel[0x10]; // 0x3ED0 (Size: 0x10, Type: StructProperty)
    std::uint8_t IconPaddingWithCollapsedLabel[0x10]; // 0x3EE0 (Size: 0x10, Type: StructProperty)
    std::uint8_t VerticalAlignmentOverride[0x4]; // 0x3EF0 (Size: 0x4, Type: OptionalProperty)
    float RaisedChildrenRightPadding; // 0x3EF4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FToolBarStyle, BackgroundBrush) == 16, "Offset mismatch for FToolBarStyle::BackgroundBrush");
static_assert(offsetof(FToolBarStyle, ExpandBrush) == 192, "Offset mismatch for FToolBarStyle::ExpandBrush");
static_assert(offsetof(FToolBarStyle, SeparatorBrush) == 368, "Offset mismatch for FToolBarStyle::SeparatorBrush");
static_assert(offsetof(FToolBarStyle, LabelStyle) == 544, "Offset mismatch for FToolBarStyle::LabelStyle");
static_assert(offsetof(FToolBarStyle, EditableTextStyle) == 1280, "Offset mismatch for FToolBarStyle::EditableTextStyle");
static_assert(offsetof(FToolBarStyle, ToggleButton) == 4480, "Offset mismatch for FToolBarStyle::ToggleButton");
static_assert(offsetof(FToolBarStyle, ComboButtonStyle) == 6864, "Offset mismatch for FToolBarStyle::ComboButtonStyle");
static_assert(offsetof(FToolBarStyle, SettingsButtonStyle) == 8240, "Offset mismatch for FToolBarStyle::SettingsButtonStyle");
static_assert(offsetof(FToolBarStyle, SettingsComboButton) == 9152, "Offset mismatch for FToolBarStyle::SettingsComboButton");
static_assert(offsetof(FToolBarStyle, SettingsToggleButton) == 10528, "Offset mismatch for FToolBarStyle::SettingsToggleButton");
static_assert(offsetof(FToolBarStyle, ButtonStyle) == 12912, "Offset mismatch for FToolBarStyle::ButtonStyle");
static_assert(offsetof(FToolBarStyle, LabelPadding) == 13824, "Offset mismatch for FToolBarStyle::LabelPadding");
static_assert(offsetof(FToolBarStyle, UniformBlockWidth) == 13840, "Offset mismatch for FToolBarStyle::UniformBlockWidth");
static_assert(offsetof(FToolBarStyle, UniformBlockHeight) == 13844, "Offset mismatch for FToolBarStyle::UniformBlockHeight");
static_assert(offsetof(FToolBarStyle, NumColumns) == 13848, "Offset mismatch for FToolBarStyle::NumColumns");
static_assert(offsetof(FToolBarStyle, IconPadding) == 13852, "Offset mismatch for FToolBarStyle::IconPadding");
static_assert(offsetof(FToolBarStyle, SeparatorPadding) == 13868, "Offset mismatch for FToolBarStyle::SeparatorPadding");
static_assert(offsetof(FToolBarStyle, SeparatorThickness) == 13884, "Offset mismatch for FToolBarStyle::SeparatorThickness");
static_assert(offsetof(FToolBarStyle, ComboButtonPadding) == 13888, "Offset mismatch for FToolBarStyle::ComboButtonPadding");
static_assert(offsetof(FToolBarStyle, ButtonPadding) == 13904, "Offset mismatch for FToolBarStyle::ButtonPadding");
static_assert(offsetof(FToolBarStyle, CheckBoxPadding) == 13920, "Offset mismatch for FToolBarStyle::CheckBoxPadding");
static_assert(offsetof(FToolBarStyle, BlockPadding) == 13936, "Offset mismatch for FToolBarStyle::BlockPadding");
static_assert(offsetof(FToolBarStyle, IndentedBlockPadding) == 13952, "Offset mismatch for FToolBarStyle::IndentedBlockPadding");
static_assert(offsetof(FToolBarStyle, BlockHovered) == 13968, "Offset mismatch for FToolBarStyle::BlockHovered");
static_assert(offsetof(FToolBarStyle, BackgroundPadding) == 14144, "Offset mismatch for FToolBarStyle::BackgroundPadding");
static_assert(offsetof(FToolBarStyle, WrapButtonStyle) == 14160, "Offset mismatch for FToolBarStyle::WrapButtonStyle");
static_assert(offsetof(FToolBarStyle, WrapButtonPadding) == 16016, "Offset mismatch for FToolBarStyle::WrapButtonPadding");
static_assert(offsetof(FToolBarStyle, WrapButtonIndex) == 16032, "Offset mismatch for FToolBarStyle::WrapButtonIndex");
static_assert(offsetof(FToolBarStyle, bAllowWrapButton) == 16036, "Offset mismatch for FToolBarStyle::bAllowWrapButton");
static_assert(offsetof(FToolBarStyle, bAllowWrappingDefault) == 16037, "Offset mismatch for FToolBarStyle::bAllowWrappingDefault");
static_assert(offsetof(FToolBarStyle, IconSize) == 16040, "Offset mismatch for FToolBarStyle::IconSize");
static_assert(offsetof(FToolBarStyle, bShowLabels) == 16048, "Offset mismatch for FToolBarStyle::bShowLabels");
static_assert(offsetof(FToolBarStyle, ButtonContentMaxWidth) == 16052, "Offset mismatch for FToolBarStyle::ButtonContentMaxWidth");
static_assert(offsetof(FToolBarStyle, ButtonTextMinWidth) == 16056, "Offset mismatch for FToolBarStyle::ButtonTextMinWidth");
static_assert(offsetof(FToolBarStyle, ButtonTextMaxWidth) == 16060, "Offset mismatch for FToolBarStyle::ButtonTextMaxWidth");
static_assert(offsetof(FToolBarStyle, ButtonContentFillWidth) == 16064, "Offset mismatch for FToolBarStyle::ButtonContentFillWidth");
static_assert(offsetof(FToolBarStyle, ComboContentMinWidth) == 16068, "Offset mismatch for FToolBarStyle::ComboContentMinWidth");
static_assert(offsetof(FToolBarStyle, ComboContentMaxWidth) == 16072, "Offset mismatch for FToolBarStyle::ComboContentMaxWidth");
static_assert(offsetof(FToolBarStyle, ComboContentHorizontalAlignment) == 16076, "Offset mismatch for FToolBarStyle::ComboContentHorizontalAlignment");
static_assert(offsetof(FToolBarStyle, IconPaddingWithVisibleLabel) == 16080, "Offset mismatch for FToolBarStyle::IconPaddingWithVisibleLabel");
static_assert(offsetof(FToolBarStyle, IconPaddingWithCollapsedLabel) == 16096, "Offset mismatch for FToolBarStyle::IconPaddingWithCollapsedLabel");
static_assert(offsetof(FToolBarStyle, VerticalAlignmentOverride) == 16112, "Offset mismatch for FToolBarStyle::VerticalAlignmentOverride");
static_assert(offsetof(FToolBarStyle, RaisedChildrenRightPadding) == 16116, "Offset mismatch for FToolBarStyle::RaisedChildrenRightPadding");

// /Script/SlateCore.Typeface
// Kind: ScriptStruct; super: none
struct FTypeface
{
public:
    TArray<void*> Fonts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTypeface, Fonts) == 0, "Offset mismatch for FTypeface::Fonts");

// /Script/SlateCore.TypefaceEntry
// Kind: ScriptStruct; super: none
struct FTypefaceEntry
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Font[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTypefaceEntry, Name) == 0, "Offset mismatch for FTypefaceEntry::Name");
static_assert(offsetof(FTypefaceEntry, Font) == 8, "Offset mismatch for FTypefaceEntry::Font");

// /Script/SlateCore.VolumeControlStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FVolumeControlStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SliderStyle[0x440]; // 0x0010 (Size: 0x440, Type: StructProperty)
    std::uint8_t HighVolumeImage[0xB0]; // 0x0450 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MidVolumeImage[0xB0]; // 0x0500 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LowVolumeImage[0xB0]; // 0x05B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NoVolumeImage[0xB0]; // 0x0660 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MutedImage[0x1]; // 0x0710 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 16, "Offset mismatch for FVolumeControlStyle::SliderStyle");
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 1104, "Offset mismatch for FVolumeControlStyle::HighVolumeImage");
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 1280, "Offset mismatch for FVolumeControlStyle::MidVolumeImage");
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 1456, "Offset mismatch for FVolumeControlStyle::LowVolumeImage");
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 1632, "Offset mismatch for FVolumeControlStyle::NoVolumeImage");
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 1808, "Offset mismatch for FVolumeControlStyle::MutedImage");

// /Script/SlateCore.WindowStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FWindowStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MinimizeButtonStyle[0x390]; // 0x0010 (Size: 0x390, Type: StructProperty)
    std::uint8_t MaximizeButtonStyle[0x390]; // 0x03A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t RestoreButtonStyle[0x390]; // 0x0730 (Size: 0x390, Type: StructProperty)
    std::uint8_t EnterFullscreenButtonStyle[0x390]; // 0x0AC0 (Size: 0x390, Type: StructProperty)
    std::uint8_t ExitFullscreenButtonStyle[0x390]; // 0x0E50 (Size: 0x390, Type: StructProperty)
    std::uint8_t CloseButtonStyle[0x390]; // 0x11E0 (Size: 0x390, Type: StructProperty)
    std::uint8_t TitleTextStyle[0x2E0]; // 0x1570 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t ActiveTitleBrush[0xB0]; // 0x1850 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InactiveTitleBrush[0xB0]; // 0x1900 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FlashTitleBrush[0xB0]; // 0x19B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundColor[0x20]; // 0x1A60 (Size: 0x20, Type: StructProperty)
    std::uint8_t OutlineBrush[0xB0]; // 0x1A80 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OutlineColor[0x20]; // 0x1B30 (Size: 0x20, Type: StructProperty)
    std::uint8_t BorderBrush[0xB0]; // 0x1B50 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BorderColor[0x20]; // 0x1C00 (Size: 0x20, Type: StructProperty)
    std::uint8_t BackgroundBrush[0xB0]; // 0x1C20 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ChildBackgroundBrush[0xB0]; // 0x1CD0 (Size: 0xB0, Type: StructProperty)
    std::int32_t WindowCornerRadius; // 0x1D80 (Size: 0x4, Type: IntProperty)
    std::uint8_t BorderPadding[0x1]; // 0x1D84 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 16, "Offset mismatch for FWindowStyle::MinimizeButtonStyle");
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 928, "Offset mismatch for FWindowStyle::MaximizeButtonStyle");
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 1840, "Offset mismatch for FWindowStyle::RestoreButtonStyle");
static_assert(offsetof(FWindowStyle, EnterFullscreenButtonStyle) == 2752, "Offset mismatch for FWindowStyle::EnterFullscreenButtonStyle");
static_assert(offsetof(FWindowStyle, ExitFullscreenButtonStyle) == 3664, "Offset mismatch for FWindowStyle::ExitFullscreenButtonStyle");
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 4576, "Offset mismatch for FWindowStyle::CloseButtonStyle");
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 5488, "Offset mismatch for FWindowStyle::TitleTextStyle");
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 6224, "Offset mismatch for FWindowStyle::ActiveTitleBrush");
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 6400, "Offset mismatch for FWindowStyle::InactiveTitleBrush");
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 6576, "Offset mismatch for FWindowStyle::FlashTitleBrush");
static_assert(offsetof(FWindowStyle, BackgroundColor) == 6752, "Offset mismatch for FWindowStyle::BackgroundColor");
static_assert(offsetof(FWindowStyle, OutlineBrush) == 6784, "Offset mismatch for FWindowStyle::OutlineBrush");
static_assert(offsetof(FWindowStyle, OutlineColor) == 6960, "Offset mismatch for FWindowStyle::OutlineColor");
static_assert(offsetof(FWindowStyle, BorderBrush) == 6992, "Offset mismatch for FWindowStyle::BorderBrush");
static_assert(offsetof(FWindowStyle, BorderColor) == 7168, "Offset mismatch for FWindowStyle::BorderColor");
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 7200, "Offset mismatch for FWindowStyle::BackgroundBrush");
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 7376, "Offset mismatch for FWindowStyle::ChildBackgroundBrush");
static_assert(offsetof(FWindowStyle, WindowCornerRadius) == 7552, "Offset mismatch for FWindowStyle::WindowCornerRadius");
static_assert(offsetof(FWindowStyle, BorderPadding) == 7556, "Offset mismatch for FWindowStyle::BorderPadding");

// /Script/SlateCore.WrapButtonStyle
// Kind: ScriptStruct; super: none
struct FWrapButtonStyle
{
public:
    std::uint8_t Padding[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t WrapButtonIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0014
    std::uint8_t ExpandBrush[0xB0]; // 0x0020 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bHasDownArrow; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x00D1
    std::uint8_t ComboButtonStyle[0x570]; // 0x00E0 (Size: 0x570, Type: OptionalProperty)
    std::uint8_t bIncludeSeparator; // 0x0650 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xF]; // 0x0651
    std::uint8_t SeparatorBrush[0xC0]; // 0x0660 (Size: 0xC0, Type: OptionalProperty)
    std::uint8_t SeparatorThickness[0x8]; // 0x0720 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t SeparatorPadding[0x1]; // 0x0728 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FWrapButtonStyle, Padding) == 0, "Offset mismatch for FWrapButtonStyle::Padding");
static_assert(offsetof(FWrapButtonStyle, WrapButtonIndex) == 16, "Offset mismatch for FWrapButtonStyle::WrapButtonIndex");
static_assert(offsetof(FWrapButtonStyle, ExpandBrush) == 32, "Offset mismatch for FWrapButtonStyle::ExpandBrush");
static_assert(offsetof(FWrapButtonStyle, bHasDownArrow) == 208, "Offset mismatch for FWrapButtonStyle::bHasDownArrow");
static_assert(offsetof(FWrapButtonStyle, ComboButtonStyle) == 224, "Offset mismatch for FWrapButtonStyle::ComboButtonStyle");
static_assert(offsetof(FWrapButtonStyle, bIncludeSeparator) == 1616, "Offset mismatch for FWrapButtonStyle::bIncludeSeparator");
static_assert(offsetof(FWrapButtonStyle, SeparatorBrush) == 1632, "Offset mismatch for FWrapButtonStyle::SeparatorBrush");
static_assert(offsetof(FWrapButtonStyle, SeparatorThickness) == 1824, "Offset mismatch for FWrapButtonStyle::SeparatorThickness");
static_assert(offsetof(FWrapButtonStyle, SeparatorPadding) == 1832, "Offset mismatch for FWrapButtonStyle::SeparatorPadding");

// /Script/SlateCore.FontBulkData
// Kind: Class; super: Object
class UFontBulkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.FontFaceInterface
// Kind: Class; super: Interface
class UFontFaceInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.FontProviderInterface
// Kind: Class; super: Interface
class UFontProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.SlateThemeManager
// Kind: Class; super: Object
class USlateThemeManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CurrentThemeId[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActiveColors[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USlateThemeManager, CurrentThemeId) == 40, "Offset mismatch for USlateThemeManager::CurrentThemeId");
static_assert(offsetof(USlateThemeManager, ActiveColors) == 56, "Offset mismatch for USlateThemeManager::ActiveColors");

// /Script/SlateCore.SlateTypes
// Kind: Class; super: Object
class USlateTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.SlateWidgetStyleAsset
// Kind: Class; super: Object
class USlateWidgetStyleAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CustomStyle; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 40, "Offset mismatch for USlateWidgetStyleAsset::CustomStyle");

// /Script/SlateCore.SlateWidgetStyleContainerBase
// Kind: Class; super: Object
class USlateWidgetStyleContainerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateCore.SlateWidgetStyleContainerInterface
// Kind: Class; super: Interface
class USlateWidgetStyleContainerInterface
{
public:
    std::uint8_t Opaque[1];
};
