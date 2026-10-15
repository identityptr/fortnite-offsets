/**
 * decamp dumper generated SDK
 * Package: /Script/JunoReadyUpErrorsUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoReadyUpErrorsUI.JunoNewPlayerErrorUI
// Kind: Class; super: ReadyUpErrorUI
class UJunoNewPlayerErrorUI
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t NewPlayerWarningPopupWidgetClass[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    void* PopupWidget; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoNewPlayerErrorUI, NewPlayerWarningPopupWidgetClass) == 232, "Offset mismatch for UJunoNewPlayerErrorUI::NewPlayerWarningPopupWidgetClass");
static_assert(offsetof(UJunoNewPlayerErrorUI, PopupWidget) == 264, "Offset mismatch for UJunoNewPlayerErrorUI::PopupWidget");

// /Script/JunoReadyUpErrorsUI.JunoQueryWorldsErrorUI
// Kind: Class; super: ReadyUpErrorUI
class UJunoQueryWorldsErrorUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ErrorMessage[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    void* Icon; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayButtonTextOverride[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t PlayButtonSubtitle[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryButtonTextOverride[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t bImpliesReadyUp; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoQueryWorldsErrorUI, ErrorMessage) == 40, "Offset mismatch for UJunoQueryWorldsErrorUI::ErrorMessage");
static_assert(offsetof(UJunoQueryWorldsErrorUI, Icon) == 64, "Offset mismatch for UJunoQueryWorldsErrorUI::Icon");
static_assert(offsetof(UJunoQueryWorldsErrorUI, PlayButtonTextOverride) == 72, "Offset mismatch for UJunoQueryWorldsErrorUI::PlayButtonTextOverride");
static_assert(offsetof(UJunoQueryWorldsErrorUI, PlayButtonSubtitle) == 88, "Offset mismatch for UJunoQueryWorldsErrorUI::PlayButtonSubtitle");
static_assert(offsetof(UJunoQueryWorldsErrorUI, SecondaryButtonTextOverride) == 104, "Offset mismatch for UJunoQueryWorldsErrorUI::SecondaryButtonTextOverride");
static_assert(offsetof(UJunoQueryWorldsErrorUI, bImpliesReadyUp) == 120, "Offset mismatch for UJunoQueryWorldsErrorUI::bImpliesReadyUp");

// /Script/JunoReadyUpErrorsUI.Juno_NewPlayerWarningPopupWidget
// Kind: Class; super: CommonActivatableWidget
class UJuno_NewPlayerWarningPopupWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bIsBackHandler) == 816, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bIsBackHandler");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bAutoActivate) == 840, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bAutoActivate");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bSupportsActivationFocus");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bIsModal) == 842, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bIsModal");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bAutoRestoreFocus");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bOverrideActionDomain) == 844, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bOverrideActionDomain");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, InputMapping) == 848, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::InputMapping");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, InputMappingPriority) == 856, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::InputMappingPriority");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::InputModeTagsToAdd");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::InputModeTagsToRemove");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, ActionDomainOverride) == 928, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::ActionDomainOverride");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::BP_OnWidgetActivated");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bIsActive) == 992, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bIsActive");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::VisibilityBoundWidgets");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, ActivatedVisibility) == 1177, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::ActivatedVisibility");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJuno_NewPlayerWarningPopupWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UJuno_NewPlayerWarningPopupWidget::DeactivatedVisibility");
