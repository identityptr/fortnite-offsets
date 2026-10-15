/**
 * decamp dumper generated SDK
 * Package: /Script/CRDPlayerTrackerUI
 */
#pragma once
#include "Basic.h"

// /Script/CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent
// Kind: Class; super: ActorComponent
class UCRDPlayerTrackerUIComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* SpawnedWidget; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCRDPlayerTrackerUIComponent, SpawnedWidget) == 192, "Offset mismatch for UCRDPlayerTrackerUIComponent::SpawnedWidget");

// /Script/CRDPlayerTrackerUI.CRDPlayerTrackerWidget
// Kind: Class; super: FortHUDElementWidget
class UCRDPlayerTrackerWidget
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

static_assert(offsetof(UCRDPlayerTrackerWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UCRDPlayerTrackerWidget::HLTDependentWidgetTag");
static_assert(offsetof(UCRDPlayerTrackerWidget, ElementTag) == 828, "Offset mismatch for UCRDPlayerTrackerWidget::ElementTag");
static_assert(offsetof(UCRDPlayerTrackerWidget, HUDElementTag) == 832, "Offset mismatch for UCRDPlayerTrackerWidget::HUDElementTag");
static_assert(offsetof(UCRDPlayerTrackerWidget, HiddenVisibility) == 864, "Offset mismatch for UCRDPlayerTrackerWidget::HiddenVisibility");
static_assert(offsetof(UCRDPlayerTrackerWidget, TutorialHighlight) == 872, "Offset mismatch for UCRDPlayerTrackerWidget::TutorialHighlight");
