/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSongsEmoteWheelUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksSongsEmoteWheelUI.SparksControllerComponent_MultiEmoteIndexOverrider
// Kind: Class; super: ControllerComponent
class USparksControllerComponent_MultiEmoteIndexOverrider
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    void* CachedSelectionVM; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksControllerComponent_MultiEmoteIndexOverrider, CachedSelectionVM) == 232, "Offset mismatch for USparksControllerComponent_MultiEmoteIndexOverrider::CachedSelectionVM");

// /Script/SparksSongsEmoteWheelUI.SparksSongsEmoteWheelOverlay
// Kind: Class; super: CommonActivatableWidget
class USparksSongsEmoteWheelOverlay
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

static_assert(offsetof(USparksSongsEmoteWheelOverlay, bIsBackHandler) == 816, "Offset mismatch for USparksSongsEmoteWheelOverlay::bIsBackHandler");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for USparksSongsEmoteWheelOverlay::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, OverrideBackActionDisplayName) == 824, "Offset mismatch for USparksSongsEmoteWheelOverlay::OverrideBackActionDisplayName");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bAutoActivate) == 840, "Offset mismatch for USparksSongsEmoteWheelOverlay::bAutoActivate");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bSupportsActivationFocus) == 841, "Offset mismatch for USparksSongsEmoteWheelOverlay::bSupportsActivationFocus");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bIsModal) == 842, "Offset mismatch for USparksSongsEmoteWheelOverlay::bIsModal");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bAutoRestoreFocus) == 843, "Offset mismatch for USparksSongsEmoteWheelOverlay::bAutoRestoreFocus");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bOverrideActionDomain) == 844, "Offset mismatch for USparksSongsEmoteWheelOverlay::bOverrideActionDomain");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, InputMapping) == 848, "Offset mismatch for USparksSongsEmoteWheelOverlay::InputMapping");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, InputMappingPriority) == 856, "Offset mismatch for USparksSongsEmoteWheelOverlay::InputMappingPriority");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, InputModeTagsToAdd) == 864, "Offset mismatch for USparksSongsEmoteWheelOverlay::InputModeTagsToAdd");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, InputModeTagsToRemove) == 896, "Offset mismatch for USparksSongsEmoteWheelOverlay::InputModeTagsToRemove");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, ActionDomainOverride) == 928, "Offset mismatch for USparksSongsEmoteWheelOverlay::ActionDomainOverride");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, BP_OnWidgetActivated) == 960, "Offset mismatch for USparksSongsEmoteWheelOverlay::BP_OnWidgetActivated");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, BP_OnWidgetDeactivated) == 976, "Offset mismatch for USparksSongsEmoteWheelOverlay::BP_OnWidgetDeactivated");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bIsActive) == 992, "Offset mismatch for USparksSongsEmoteWheelOverlay::bIsActive");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, VisibilityBoundWidgets) == 1000, "Offset mismatch for USparksSongsEmoteWheelOverlay::VisibilityBoundWidgets");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bSetVisibilityOnActivated) == 1176, "Offset mismatch for USparksSongsEmoteWheelOverlay::bSetVisibilityOnActivated");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, ActivatedVisibility) == 1177, "Offset mismatch for USparksSongsEmoteWheelOverlay::ActivatedVisibility");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for USparksSongsEmoteWheelOverlay::bSetVisibilityOnDeactivated");
static_assert(offsetof(USparksSongsEmoteWheelOverlay, DeactivatedVisibility) == 1179, "Offset mismatch for USparksSongsEmoteWheelOverlay::DeactivatedVisibility");

// /Script/SparksSongsEmoteWheelUI.SparksSongsEmoteWheelUILibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USparksSongsEmoteWheelUILibrary
{
public:
    std::uint8_t Opaque[1];
};
