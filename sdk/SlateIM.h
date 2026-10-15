/**
 * decamp dumper generated SDK
 * Package: /Script/SlateIM
 */
#pragma once
#include "Basic.h"

// /Script/SlateIM.SlateIMBorderParams
// Kind: ScriptStruct; super: none
struct FSlateIMBorderParams
{
public:
    std::uint8_t orientation; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAbsorbMouse; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t ContentPadding[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMBorderParams, orientation) == 0, "Offset mismatch for FSlateIMBorderParams::orientation");
static_assert(offsetof(FSlateIMBorderParams, bAbsorbMouse) == 1, "Offset mismatch for FSlateIMBorderParams::bAbsorbMouse");
static_assert(offsetof(FSlateIMBorderParams, ContentPadding) == 4, "Offset mismatch for FSlateIMBorderParams::ContentPadding");

// /Script/SlateIM.SlateIMButtonParams
// Kind: ScriptStruct; super: none
struct FSlateIMButtonParams
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateIMButtonParams, bEnabled) == 0, "Offset mismatch for FSlateIMButtonParams::bEnabled");

// /Script/SlateIM.SlateIMCheckBoxParams
// Kind: ScriptStruct; super: none
struct FSlateIMCheckBoxParams
{
public:
    FString Label; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSlateIMCheckBoxParams, Label) == 0, "Offset mismatch for FSlateIMCheckBoxParams::Label");

// /Script/SlateIM.SlateIMComboBoxParams
// Kind: ScriptStruct; super: none
struct FSlateIMComboBoxParams
{
public:
    std::uint8_t bForceRefresh; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSearchable; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateIMComboBoxParams, bForceRefresh) == 0, "Offset mismatch for FSlateIMComboBoxParams::bForceRefresh");
static_assert(offsetof(FSlateIMComboBoxParams, bSearchable) == 1, "Offset mismatch for FSlateIMComboBoxParams::bSearchable");

// /Script/SlateIM.SlateIMEditableTextParams
// Kind: ScriptStruct; super: none
struct FSlateIMEditableTextParams
{
public:
    FString HintText; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSlateIMEditableTextParams, HintText) == 0, "Offset mismatch for FSlateIMEditableTextParams::HintText");

// /Script/SlateIM.SlateIMGraphLinePointsParams
// Kind: ScriptStruct; super: none
struct FSlateIMGraphLinePointsParams
{
public:
    std::uint8_t XViewRange[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t YViewRange[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t LineColor[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    float LineThickness; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlateIMGraphLinePointsParams, XViewRange) == 0, "Offset mismatch for FSlateIMGraphLinePointsParams::XViewRange");
static_assert(offsetof(FSlateIMGraphLinePointsParams, YViewRange) == 32, "Offset mismatch for FSlateIMGraphLinePointsParams::YViewRange");
static_assert(offsetof(FSlateIMGraphLinePointsParams, LineColor) == 64, "Offset mismatch for FSlateIMGraphLinePointsParams::LineColor");
static_assert(offsetof(FSlateIMGraphLinePointsParams, LineThickness) == 80, "Offset mismatch for FSlateIMGraphLinePointsParams::LineThickness");

// /Script/SlateIM.SlateIMGraphLineValuesParams
// Kind: ScriptStruct; super: none
struct FSlateIMGraphLineValuesParams
{
public:
    std::uint8_t ViewRange[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t LineColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    float LineThickness; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlateIMGraphLineValuesParams, ViewRange) == 0, "Offset mismatch for FSlateIMGraphLineValuesParams::ViewRange");
static_assert(offsetof(FSlateIMGraphLineValuesParams, LineColor) == 32, "Offset mismatch for FSlateIMGraphLineValuesParams::LineColor");
static_assert(offsetof(FSlateIMGraphLineValuesParams, LineThickness) == 48, "Offset mismatch for FSlateIMGraphLineValuesParams::LineThickness");

// /Script/SlateIM.SlateIMIcon
// Kind: ScriptStruct; super: none
struct FSlateIMIcon
{
public:
    std::uint8_t StyleSetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t StyleName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmallStyleName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    FName StatusOverlayStyleName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSlateIMIcon, StyleSetName) == 0, "Offset mismatch for FSlateIMIcon::StyleSetName");
static_assert(offsetof(FSlateIMIcon, StyleName) == 4, "Offset mismatch for FSlateIMIcon::StyleName");
static_assert(offsetof(FSlateIMIcon, SmallStyleName) == 8, "Offset mismatch for FSlateIMIcon::SmallStyleName");
static_assert(offsetof(FSlateIMIcon, StatusOverlayStyleName) == 12, "Offset mismatch for FSlateIMIcon::StatusOverlayStyleName");

// /Script/SlateIM.SlateIMImageParams
// Kind: ScriptStruct; super: none
struct FSlateIMImageParams
{
public:
    std::uint8_t ColorAndOpacity[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t DesiredSize[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMImageParams, ColorAndOpacity) == 0, "Offset mismatch for FSlateIMImageParams::ColorAndOpacity");
static_assert(offsetof(FSlateIMImageParams, DesiredSize) == 24, "Offset mismatch for FSlateIMImageParams::DesiredSize");

// /Script/SlateIM.SlateIMMenuButtonParams
// Kind: ScriptStruct; super: none
struct FSlateIMMenuButtonParams
{
public:
    FString ToolTipText; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSlateIMMenuButtonParams, ToolTipText) == 0, "Offset mismatch for FSlateIMMenuButtonParams::ToolTipText");

// /Script/SlateIM.SlateIMModalDialogParams
// Kind: ScriptStruct; super: none
struct FSlateIMModalDialogParams
{
public:
    std::uint8_t Category; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Title; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSlateIMModalDialogParams, Category) == 0, "Offset mismatch for FSlateIMModalDialogParams::Category");
static_assert(offsetof(FSlateIMModalDialogParams, Title) == 8, "Offset mismatch for FSlateIMModalDialogParams::Title");

// /Script/SlateIM.SlateIMPopUpParams
// Kind: ScriptStruct; super: none
struct FSlateIMPopUpParams
{
public:
    std::uint8_t orientation; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAbsorbMouse; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t ContentPadding[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMPopUpParams, orientation) == 0, "Offset mismatch for FSlateIMPopUpParams::orientation");
static_assert(offsetof(FSlateIMPopUpParams, bAbsorbMouse) == 1, "Offset mismatch for FSlateIMPopUpParams::bAbsorbMouse");
static_assert(offsetof(FSlateIMPopUpParams, ContentPadding) == 4, "Offset mismatch for FSlateIMPopUpParams::ContentPadding");

// /Script/SlateIM.SlateIMProgressBarParams
// Kind: ScriptStruct; super: none
struct FSlateIMProgressBarParams
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SlateIM.SlateIMScrollBoxParams
// Kind: ScriptStruct; super: none
struct FSlateIMScrollBoxParams
{
public:
    std::uint8_t orientation; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSlateIMScrollBoxParams, orientation) == 0, "Offset mismatch for FSlateIMScrollBoxParams::orientation");

// /Script/SlateIM.SlateIMSelectionListParams
// Kind: ScriptStruct; super: none
struct FSlateIMSelectionListParams
{
public:
    std::uint8_t bForceRefresh; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateIMSelectionListParams, bForceRefresh) == 0, "Offset mismatch for FSlateIMSelectionListParams::bForceRefresh");

// /Script/SlateIM.SlateIMSliderParams
// Kind: ScriptStruct; super: none
struct FSlateIMSliderParams
{
public:
    float min; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Step; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlateIMSliderParams, min) == 0, "Offset mismatch for FSlateIMSliderParams::min");
static_assert(offsetof(FSlateIMSliderParams, max) == 4, "Offset mismatch for FSlateIMSliderParams::max");
static_assert(offsetof(FSlateIMSliderParams, Step) == 8, "Offset mismatch for FSlateIMSliderParams::Step");

// /Script/SlateIM.SlateIMSpinBoxDoubleParams
// Kind: ScriptStruct; super: none
struct FSlateIMSpinBoxDoubleParams
{
public:
    std::uint8_t min[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t max[0x1]; // 0x0010 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FSlateIMSpinBoxDoubleParams, min) == 0, "Offset mismatch for FSlateIMSpinBoxDoubleParams::min");
static_assert(offsetof(FSlateIMSpinBoxDoubleParams, max) == 16, "Offset mismatch for FSlateIMSpinBoxDoubleParams::max");

// /Script/SlateIM.SlateIMSpinBoxFloatParams
// Kind: ScriptStruct; super: none
struct FSlateIMSpinBoxFloatParams
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FSlateIMSpinBoxFloatParams, min) == 0, "Offset mismatch for FSlateIMSpinBoxFloatParams::min");
static_assert(offsetof(FSlateIMSpinBoxFloatParams, max) == 8, "Offset mismatch for FSlateIMSpinBoxFloatParams::max");

// /Script/SlateIM.SlateIMSpinBoxInt32Params
// Kind: ScriptStruct; super: none
struct FSlateIMSpinBoxInt32Params
{
public:
    std::uint8_t min[0x8]; // 0x0000 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t max[0x1]; // 0x0008 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FSlateIMSpinBoxInt32Params, min) == 0, "Offset mismatch for FSlateIMSpinBoxInt32Params::min");
static_assert(offsetof(FSlateIMSpinBoxInt32Params, max) == 8, "Offset mismatch for FSlateIMSpinBoxInt32Params::max");

// /Script/SlateIM.SlateIMTabParams
// Kind: ScriptStruct; super: none
struct FSlateIMTabParams
{
public:
    std::uint8_t TabIcon[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FText TabTitle; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSlateIMTabParams, TabIcon) == 0, "Offset mismatch for FSlateIMTabParams::TabIcon");
static_assert(offsetof(FSlateIMTabParams, TabTitle) == 16, "Offset mismatch for FSlateIMTabParams::TabTitle");

// /Script/SlateIM.SlateIMTableColumnParams
// Kind: ScriptStruct; super: none
struct FSlateIMTableColumnParams
{
public:
    FString Label; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSlateIMTableColumnParams, Label) == 0, "Offset mismatch for FSlateIMTableColumnParams::Label");

// /Script/SlateIM.SlateIMTableParams
// Kind: ScriptStruct; super: none
struct FSlateIMTableParams
{
public:
    std::uint8_t SelectionMode; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSlateIMTableParams, SelectionMode) == 0, "Offset mismatch for FSlateIMTableParams::SelectionMode");

// /Script/SlateIM.SlateIMTableRowChildrenParams
// Kind: ScriptStruct; super: none
struct FSlateIMTableRowChildrenParams
{
public:
    std::int32_t ParentRowId; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDefaultExpanded; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateIMTableRowChildrenParams, ParentRowId) == 0, "Offset mismatch for FSlateIMTableRowChildrenParams::ParentRowId");
static_assert(offsetof(FSlateIMTableRowChildrenParams, bDefaultExpanded) == 4, "Offset mismatch for FSlateIMTableRowChildrenParams::bDefaultExpanded");

// /Script/SlateIM.SlateIMTextParams
// Kind: ScriptStruct; super: none
struct FSlateIMTextParams
{
public:
    std::uint8_t Color[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMTextParams, Color) == 0, "Offset mismatch for FSlateIMTextParams::Color");

// /Script/SlateIM.SlateIMViewportParams
// Kind: ScriptStruct; super: none
struct FSlateIMViewportParams
{
public:
    std::uint8_t Layout[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMViewportParams, Layout) == 0, "Offset mismatch for FSlateIMViewportParams::Layout");

// /Script/SlateIM.SlateIMViewportRootLayout
// Kind: ScriptStruct; super: none
struct FSlateIMViewportRootLayout
{
public:
    std::uint8_t Anchors[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Offset[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t Alignment[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Size[0xC]; // 0x0030 (Size: 0xC, Type: OptionalProperty)
    std::int32_t ZOrder; // 0x003C (Size: 0x4, Type: IntProperty)
    float Scale; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSlateIMViewportRootLayout, Anchors) == 0, "Offset mismatch for FSlateIMViewportRootLayout::Anchors");
static_assert(offsetof(FSlateIMViewportRootLayout, Offset) == 32, "Offset mismatch for FSlateIMViewportRootLayout::Offset");
static_assert(offsetof(FSlateIMViewportRootLayout, Alignment) == 40, "Offset mismatch for FSlateIMViewportRootLayout::Alignment");
static_assert(offsetof(FSlateIMViewportRootLayout, Size) == 48, "Offset mismatch for FSlateIMViewportRootLayout::Size");
static_assert(offsetof(FSlateIMViewportRootLayout, ZOrder) == 60, "Offset mismatch for FSlateIMViewportRootLayout::ZOrder");
static_assert(offsetof(FSlateIMViewportRootLayout, Scale) == 64, "Offset mismatch for FSlateIMViewportRootLayout::Scale");

// /Script/SlateIM.SlateIMWindowParams
// Kind: ScriptStruct; super: none
struct FSlateIMWindowParams
{
public:
    FString WindowTitle; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t WindowSize[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bShouldReopen; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysOnTop; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlateIMWindowParams, WindowTitle) == 0, "Offset mismatch for FSlateIMWindowParams::WindowTitle");
static_assert(offsetof(FSlateIMWindowParams, WindowSize) == 16, "Offset mismatch for FSlateIMWindowParams::WindowSize");
static_assert(offsetof(FSlateIMWindowParams, bShouldReopen) == 24, "Offset mismatch for FSlateIMWindowParams::bShouldReopen");
static_assert(offsetof(FSlateIMWindowParams, bAlwaysOnTop) == 25, "Offset mismatch for FSlateIMWindowParams::bAlwaysOnTop");
