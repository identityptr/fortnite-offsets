/**
 * decamp dumper generated SDK
 * Package: /Script/Slate
 */
#pragma once
#include "Basic.h"

// /Script/Slate.Anchors
// Kind: ScriptStruct; super: none
struct FAnchors
{
public:
    std::uint8_t Minimum[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Maximum[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnchors, Minimum) == 0, "Offset mismatch for FAnchors::Minimum");
static_assert(offsetof(FAnchors, Maximum) == 16, "Offset mismatch for FAnchors::Maximum");

// /Script/Slate.CharRange
// Kind: ScriptStruct; super: none
struct FCharRange
{
public:
    std::uint16_t First; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Last; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FCharRange, First) == 0, "Offset mismatch for FCharRange::First");
static_assert(offsetof(FCharRange, Last) == 2, "Offset mismatch for FCharRange::Last");

// /Script/Slate.CharRangeList
// Kind: ScriptStruct; super: none
struct FCharRangeList
{
public:
    TArray<void*> Ranges; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCharRangeList, Ranges) == 0, "Offset mismatch for FCharRangeList::Ranges");

// /Script/Slate.CustomizedToolMenu
// Kind: ScriptStruct; super: ToolMenuProfile
struct FCustomizedToolMenu
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TMap<void*, void*> EntryOrder; // 0x0098 (Size: 0x10, Type: MapProperty)
    TArray<void*> SectionOrder; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 152, "Offset mismatch for FCustomizedToolMenu::EntryOrder");
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 168, "Offset mismatch for FCustomizedToolMenu::SectionOrder");

// /Script/Slate.CustomizedToolMenuEntry
// Kind: ScriptStruct; super: none
struct FCustomizedToolMenuEntry
{
public:
    std::uint8_t Visibility; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCustomizedToolMenuEntry, Visibility) == 0, "Offset mismatch for FCustomizedToolMenuEntry::Visibility");

// /Script/Slate.CustomizedToolMenuNameArray
// Kind: ScriptStruct; super: none
struct FCustomizedToolMenuNameArray
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0, "Offset mismatch for FCustomizedToolMenuNameArray::Names");

// /Script/Slate.CustomizedToolMenuSection
// Kind: ScriptStruct; super: none
struct FCustomizedToolMenuSection
{
public:
    std::uint8_t Visibility; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCustomizedToolMenuSection, Visibility) == 0, "Offset mismatch for FCustomizedToolMenuSection::Visibility");

// /Script/Slate.InputChord
// Kind: ScriptStruct; super: none
struct FInputChord
{
public:
    std::uint8_t Key[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAlt; // 0x0018 (Size: 0x1, Type: BoolProperty)
    // 0x0018 BoolProperty bCmd (shared storage)
    // 0x0018 BoolProperty bCtrl (shared storage)
    // 0x0018 BoolProperty bShift (shared storage)
};

static_assert(offsetof(FInputChord, Key) == 0, "Offset mismatch for FInputChord::Key");
static_assert(offsetof(FInputChord, bAlt) == 24, "Offset mismatch for FInputChord::bAlt");

// /Script/Slate.InputPreprocessorRegistrationKey
// Kind: ScriptStruct; super: none
struct FInputPreprocessorRegistrationKey
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Priority; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInputPreprocessorRegistrationKey, Type) == 0, "Offset mismatch for FInputPreprocessorRegistrationKey::Type");
static_assert(offsetof(FInputPreprocessorRegistrationKey, Priority) == 4, "Offset mismatch for FInputPreprocessorRegistrationKey::Priority");

// /Script/Slate.ToolMenuProfile
// Kind: ScriptStruct; super: none
struct FToolMenuProfile
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> Entries; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Sections; // 0x0018 (Size: 0x10, Type: MapProperty)
    TArray<void*> SuppressExtenders; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FToolMenuProfile, Name) == 0, "Offset mismatch for FToolMenuProfile::Name");
static_assert(offsetof(FToolMenuProfile, Entries) == 8, "Offset mismatch for FToolMenuProfile::Entries");
static_assert(offsetof(FToolMenuProfile, Sections) == 24, "Offset mismatch for FToolMenuProfile::Sections");
static_assert(offsetof(FToolMenuProfile, SuppressExtenders) == 40, "Offset mismatch for FToolMenuProfile::SuppressExtenders");

// /Script/Slate.VirtualKeyboardOptions
// Kind: ScriptStruct; super: none
struct FVirtualKeyboardOptions
{
public:
    std::uint8_t bEnableAutocorrect; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVirtualKeyboardOptions, bEnableAutocorrect) == 0, "Offset mismatch for FVirtualKeyboardOptions::bEnableAutocorrect");

// /Script/Slate.ButtonWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UButtonWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ButtonStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 48, "Offset mismatch for UButtonWidgetStyle::ButtonStyle");

// /Script/Slate.CheckBoxWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UCheckBoxWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CheckBoxStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 48, "Offset mismatch for UCheckBoxWidgetStyle::CheckBoxStyle");

// /Script/Slate.ComboBoxWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UComboBoxWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ComboBoxStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 48, "Offset mismatch for UComboBoxWidgetStyle::ComboBoxStyle");

// /Script/Slate.ComboButtonWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UComboButtonWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ComboButtonStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 48, "Offset mismatch for UComboButtonWidgetStyle::ComboButtonStyle");

// /Script/Slate.EditableTextBoxWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UEditableTextBoxWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EditableTextBoxStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 48, "Offset mismatch for UEditableTextBoxWidgetStyle::EditableTextBoxStyle");

// /Script/Slate.EditableTextWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UEditableTextWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EditableTextStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 48, "Offset mismatch for UEditableTextWidgetStyle::EditableTextStyle");

// /Script/Slate.ProgressWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UProgressWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ProgressBarStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 48, "Offset mismatch for UProgressWidgetStyle::ProgressBarStyle");

// /Script/Slate.ScrollBarWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UScrollBarWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScrollBarStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 48, "Offset mismatch for UScrollBarWidgetStyle::ScrollBarStyle");

// /Script/Slate.ScrollBoxWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UScrollBoxWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScrollBoxStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 48, "Offset mismatch for UScrollBoxWidgetStyle::ScrollBoxStyle");

// /Script/Slate.SlateSettings
// Kind: Class; super: Object
class USlateSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bExplicitCanvasChildZOrder; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USlateSettings, bExplicitCanvasChildZOrder) == 40, "Offset mismatch for USlateSettings::bExplicitCanvasChildZOrder");

// /Script/Slate.SpinBoxWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class USpinBoxWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SpinBoxStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 48, "Offset mismatch for USpinBoxWidgetStyle::SpinBoxStyle");

// /Script/Slate.TextBlockWidgetStyle
// Kind: Class; super: SlateWidgetStyleContainerBase
class UTextBlockWidgetStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TextBlockStyle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 48, "Offset mismatch for UTextBlockWidgetStyle::TextBlockStyle");

// /Script/Slate.ToolMenuBase
// Kind: Class; super: Object
class UToolMenuBase
{
public:
    std::uint8_t Opaque[1];
};
