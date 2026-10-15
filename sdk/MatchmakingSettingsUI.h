/**
 * decamp dumper generated SDK
 * Package: /Script/MatchmakingSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/MatchmakingSettingsUI.GameFeatureAction_CreateMatchmakingSettingsVM
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_CreateMatchmakingSettingsVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MatchmakingSettingsUI.MatchmakingSettingsUI
// Kind: Class; super: MatchmakingSettingsOverrideUI
class UMatchmakingSettingsUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MatchmakingSettingsModal[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> MatchFoundWidgetsForProductTagEntries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TSoftClassPtr<void> DefaultMatchFoundWidget; // 0x0058 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UMatchmakingSettingsUI, MatchmakingSettingsModal) == 40, "Offset mismatch for UMatchmakingSettingsUI::MatchmakingSettingsModal");
static_assert(offsetof(UMatchmakingSettingsUI, MatchFoundWidgetsForProductTagEntries) == 72, "Offset mismatch for UMatchmakingSettingsUI::MatchFoundWidgetsForProductTagEntries");
static_assert(offsetof(UMatchmakingSettingsUI, DefaultMatchFoundWidget) == 88, "Offset mismatch for UMatchmakingSettingsUI::DefaultMatchFoundWidget");

// /Script/MatchmakingSettingsUI.MatchmakingSettingsVM
// Kind: Class; super: MVVMViewModelBase
class UMatchmakingSettingsVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> SettingsVMs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SettingsVMsByKey; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t BackgroundImageSize; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LogoImageSize; // 0x0089 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMatchmakingSettingsVM, SettingsVMs) == 104, "Offset mismatch for UMatchmakingSettingsVM::SettingsVMs");
static_assert(offsetof(UMatchmakingSettingsVM, SettingsVMsByKey) == 120, "Offset mismatch for UMatchmakingSettingsVM::SettingsVMsByKey");
static_assert(offsetof(UMatchmakingSettingsVM, BackgroundImageSize) == 136, "Offset mismatch for UMatchmakingSettingsVM::BackgroundImageSize");
static_assert(offsetof(UMatchmakingSettingsVM, LogoImageSize) == 137, "Offset mismatch for UMatchmakingSettingsVM::LogoImageSize");

// /Script/MatchmakingSettingsUI.MatchmakingSettingsWidget
// Kind: Class; super: CommonActivatableWidget
class UMatchmakingSettingsWidget
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

static_assert(offsetof(UMatchmakingSettingsWidget, bIsBackHandler) == 816, "Offset mismatch for UMatchmakingSettingsWidget::bIsBackHandler");
static_assert(offsetof(UMatchmakingSettingsWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UMatchmakingSettingsWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UMatchmakingSettingsWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UMatchmakingSettingsWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UMatchmakingSettingsWidget, bAutoActivate) == 840, "Offset mismatch for UMatchmakingSettingsWidget::bAutoActivate");
static_assert(offsetof(UMatchmakingSettingsWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UMatchmakingSettingsWidget::bSupportsActivationFocus");
static_assert(offsetof(UMatchmakingSettingsWidget, bIsModal) == 842, "Offset mismatch for UMatchmakingSettingsWidget::bIsModal");
static_assert(offsetof(UMatchmakingSettingsWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UMatchmakingSettingsWidget::bAutoRestoreFocus");
static_assert(offsetof(UMatchmakingSettingsWidget, bOverrideActionDomain) == 844, "Offset mismatch for UMatchmakingSettingsWidget::bOverrideActionDomain");
static_assert(offsetof(UMatchmakingSettingsWidget, InputMapping) == 848, "Offset mismatch for UMatchmakingSettingsWidget::InputMapping");
static_assert(offsetof(UMatchmakingSettingsWidget, InputMappingPriority) == 856, "Offset mismatch for UMatchmakingSettingsWidget::InputMappingPriority");
static_assert(offsetof(UMatchmakingSettingsWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UMatchmakingSettingsWidget::InputModeTagsToAdd");
static_assert(offsetof(UMatchmakingSettingsWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UMatchmakingSettingsWidget::InputModeTagsToRemove");
static_assert(offsetof(UMatchmakingSettingsWidget, ActionDomainOverride) == 928, "Offset mismatch for UMatchmakingSettingsWidget::ActionDomainOverride");
static_assert(offsetof(UMatchmakingSettingsWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UMatchmakingSettingsWidget::BP_OnWidgetActivated");
static_assert(offsetof(UMatchmakingSettingsWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UMatchmakingSettingsWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UMatchmakingSettingsWidget, bIsActive) == 992, "Offset mismatch for UMatchmakingSettingsWidget::bIsActive");
static_assert(offsetof(UMatchmakingSettingsWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UMatchmakingSettingsWidget::VisibilityBoundWidgets");
static_assert(offsetof(UMatchmakingSettingsWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UMatchmakingSettingsWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UMatchmakingSettingsWidget, ActivatedVisibility) == 1177, "Offset mismatch for UMatchmakingSettingsWidget::ActivatedVisibility");
static_assert(offsetof(UMatchmakingSettingsWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UMatchmakingSettingsWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UMatchmakingSettingsWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UMatchmakingSettingsWidget::DeactivatedVisibility");
