/**
 * decamp dumper generated SDK
 * Package: /Script/FabricTooltipUI
 */
#pragma once
#include "Basic.h"

// /Script/FabricTooltipUI.FabricTooltipViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricTooltipViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Name[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0078 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFabricTooltipViewModel, Name) == 104, "Offset mismatch for UFabricTooltipViewModel::Name");
static_assert(offsetof(UFabricTooltipViewModel, Description) == 120, "Offset mismatch for UFabricTooltipViewModel::Description");

// /Script/FabricTooltipUI.FabricTooltipWidget
// Kind: Class; super: FortActorIndicatorWidget
class UFabricTooltipWidget
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    std::uint8_t bUseShortDescription; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseShortDescriptionWithTouch; // 0x0431 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0432
    float ShortDescriptionHeight; // 0x0434 (Size: 0x4, Type: FloatProperty)
    float ShowMoreThreshold; // 0x0438 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x043C
    std::uint8_t ShowMoreText[0x10]; // 0x0440 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShowLessText[0x10]; // 0x0450 (Size: 0x10, Type: TextProperty)
    void* MarkerPointer; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* Text_Description; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Description; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    void* Panel_ShowMorePrompt; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    void* Text_ShowMorePrompt; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowingFullDescription; // 0x0488 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricTooltipWidget, bUseShortDescription) == 1072, "Offset mismatch for UFabricTooltipWidget::bUseShortDescription");
static_assert(offsetof(UFabricTooltipWidget, bUseShortDescriptionWithTouch) == 1073, "Offset mismatch for UFabricTooltipWidget::bUseShortDescriptionWithTouch");
static_assert(offsetof(UFabricTooltipWidget, ShortDescriptionHeight) == 1076, "Offset mismatch for UFabricTooltipWidget::ShortDescriptionHeight");
static_assert(offsetof(UFabricTooltipWidget, ShowMoreThreshold) == 1080, "Offset mismatch for UFabricTooltipWidget::ShowMoreThreshold");
static_assert(offsetof(UFabricTooltipWidget, ShowMoreText) == 1088, "Offset mismatch for UFabricTooltipWidget::ShowMoreText");
static_assert(offsetof(UFabricTooltipWidget, ShowLessText) == 1104, "Offset mismatch for UFabricTooltipWidget::ShowLessText");
static_assert(offsetof(UFabricTooltipWidget, MarkerPointer) == 1120, "Offset mismatch for UFabricTooltipWidget::MarkerPointer");
static_assert(offsetof(UFabricTooltipWidget, Text_Description) == 1128, "Offset mismatch for UFabricTooltipWidget::Text_Description");
static_assert(offsetof(UFabricTooltipWidget, SizeBox_Description) == 1136, "Offset mismatch for UFabricTooltipWidget::SizeBox_Description");
static_assert(offsetof(UFabricTooltipWidget, Panel_ShowMorePrompt) == 1144, "Offset mismatch for UFabricTooltipWidget::Panel_ShowMorePrompt");
static_assert(offsetof(UFabricTooltipWidget, Text_ShowMorePrompt) == 1152, "Offset mismatch for UFabricTooltipWidget::Text_ShowMorePrompt");
static_assert(offsetof(UFabricTooltipWidget, bShowingFullDescription) == 1160, "Offset mismatch for UFabricTooltipWidget::bShowingFullDescription");
