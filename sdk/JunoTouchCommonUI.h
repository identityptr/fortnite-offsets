/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTouchCommonUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoTouchCommonUI.JunoInteractionTouchButtonsWidget
// Kind: Class; super: FortMobileHUDElement
class UJunoInteractionTouchButtonsWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t SizePropertyTag[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    void* Image_Background; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUsesConfigBackgroundTheme; // 0x0398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0399
    void* ButtonBehavior; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* DebugButtonBehavior; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ForcedZOrder; // 0x03B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldFillParent; // 0x03B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x03B5
    std::uint8_t ContextSensitiveTagContainer[0x20]; // 0x03B8 (Size: 0x20, Type: StructProperty)
    void* ScaleBox_HUDWidgetScale; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionTouchButtonsWidget, SizePropertyTag) == 888, "Offset mismatch for UJunoInteractionTouchButtonsWidget::SizePropertyTag");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, Image_Background) == 912, "Offset mismatch for UJunoInteractionTouchButtonsWidget::Image_Background");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, bUsesConfigBackgroundTheme) == 920, "Offset mismatch for UJunoInteractionTouchButtonsWidget::bUsesConfigBackgroundTheme");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, ButtonBehavior) == 928, "Offset mismatch for UJunoInteractionTouchButtonsWidget::ButtonBehavior");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, DebugButtonBehavior) == 936, "Offset mismatch for UJunoInteractionTouchButtonsWidget::DebugButtonBehavior");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, ForcedZOrder) == 944, "Offset mismatch for UJunoInteractionTouchButtonsWidget::ForcedZOrder");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, bShouldFillParent) == 948, "Offset mismatch for UJunoInteractionTouchButtonsWidget::bShouldFillParent");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, ContextSensitiveTagContainer) == 952, "Offset mismatch for UJunoInteractionTouchButtonsWidget::ContextSensitiveTagContainer");
static_assert(offsetof(UJunoInteractionTouchButtonsWidget, ScaleBox_HUDWidgetScale) == 984, "Offset mismatch for UJunoInteractionTouchButtonsWidget::ScaleBox_HUDWidgetScale");

// /Script/JunoTouchCommonUI.JunoTouchCommonUIDirector
// Kind: Class; super: DynamicBacchusHUDDirector
class UJunoTouchCommonUIDirector
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    void* JunoDynamicUIDirector; // 0x0430 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTouchCommonUIDirector, JunoDynamicUIDirector) == 1072, "Offset mismatch for UJunoTouchCommonUIDirector::JunoDynamicUIDirector");

// /Script/JunoTouchCommonUI.JunoTouchDynamicUIDirectorComponent
// Kind: Class; super: JunoDynamicUIDirectorComponent
class UJunoTouchDynamicUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TMap<void*, void*> HUDContextVisibilityTagToScene; // 0x0120 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoTouchDynamicUIDirectorComponent, HUDContextVisibilityTagToScene) == 288, "Offset mismatch for UJunoTouchDynamicUIDirectorComponent::HUDContextVisibilityTagToScene");
