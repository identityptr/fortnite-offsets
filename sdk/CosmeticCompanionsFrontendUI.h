/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticCompanionsFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticCompanionsFrontendUI.CompanionsRenamingNavigationWidget
// Kind: Class; super: FortNavigationWidgetBase
class UCompanionsRenamingNavigationWidget
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

static_assert(offsetof(UCompanionsRenamingNavigationWidget, bIsBackHandler) == 816, "Offset mismatch for UCompanionsRenamingNavigationWidget::bIsBackHandler");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UCompanionsRenamingNavigationWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UCompanionsRenamingNavigationWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bAutoActivate) == 840, "Offset mismatch for UCompanionsRenamingNavigationWidget::bAutoActivate");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UCompanionsRenamingNavigationWidget::bSupportsActivationFocus");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bIsModal) == 842, "Offset mismatch for UCompanionsRenamingNavigationWidget::bIsModal");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UCompanionsRenamingNavigationWidget::bAutoRestoreFocus");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bOverrideActionDomain) == 844, "Offset mismatch for UCompanionsRenamingNavigationWidget::bOverrideActionDomain");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, InputMapping) == 848, "Offset mismatch for UCompanionsRenamingNavigationWidget::InputMapping");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, InputMappingPriority) == 856, "Offset mismatch for UCompanionsRenamingNavigationWidget::InputMappingPriority");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UCompanionsRenamingNavigationWidget::InputModeTagsToAdd");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UCompanionsRenamingNavigationWidget::InputModeTagsToRemove");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, ActionDomainOverride) == 928, "Offset mismatch for UCompanionsRenamingNavigationWidget::ActionDomainOverride");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UCompanionsRenamingNavigationWidget::BP_OnWidgetActivated");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UCompanionsRenamingNavigationWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bIsActive) == 992, "Offset mismatch for UCompanionsRenamingNavigationWidget::bIsActive");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UCompanionsRenamingNavigationWidget::VisibilityBoundWidgets");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UCompanionsRenamingNavigationWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, ActivatedVisibility) == 1177, "Offset mismatch for UCompanionsRenamingNavigationWidget::ActivatedVisibility");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UCompanionsRenamingNavigationWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UCompanionsRenamingNavigationWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UCompanionsRenamingNavigationWidget::DeactivatedVisibility");

// /Script/CosmeticCompanionsFrontendUI.FortPlayerCompanionPedestalNameplateExtensionComponent
// Kind: Class; super: FortPedestalNameplateExtensionComponent
class UFortPlayerCompanionPedestalNameplateExtensionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CompanionInteractActionDisplayName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    FText CompanionEmoteActionDisplayName; // 0x00D0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortPlayerCompanionPedestalNameplateExtensionComponent, CompanionInteractActionDisplayName) == 192, "Offset mismatch for UFortPlayerCompanionPedestalNameplateExtensionComponent::CompanionInteractActionDisplayName");
static_assert(offsetof(UFortPlayerCompanionPedestalNameplateExtensionComponent, CompanionEmoteActionDisplayName) == 208, "Offset mismatch for UFortPlayerCompanionPedestalNameplateExtensionComponent::CompanionEmoteActionDisplayName");
