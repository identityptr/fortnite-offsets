/**
 * decamp dumper generated SDK
 * Package: /Script/TacOvershieldUI
 */
#pragma once
#include "Basic.h"

// /Script/TacOvershieldUI.TacOvershieldPlayerInfoWidget
// Kind: Class; super: FortHUDElementWidget
class UTacOvershieldPlayerInfoWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTacOvershieldPlayerInfoWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UTacOvershieldPlayerInfoWidget::HLTDependentWidgetTag");
static_assert(offsetof(UTacOvershieldPlayerInfoWidget, ElementTag) == 828, "Offset mismatch for UTacOvershieldPlayerInfoWidget::ElementTag");
static_assert(offsetof(UTacOvershieldPlayerInfoWidget, HUDElementTag) == 832, "Offset mismatch for UTacOvershieldPlayerInfoWidget::HUDElementTag");
static_assert(offsetof(UTacOvershieldPlayerInfoWidget, HiddenVisibility) == 864, "Offset mismatch for UTacOvershieldPlayerInfoWidget::HiddenVisibility");
static_assert(offsetof(UTacOvershieldPlayerInfoWidget, TutorialHighlight) == 872, "Offset mismatch for UTacOvershieldPlayerInfoWidget::TutorialHighlight");
