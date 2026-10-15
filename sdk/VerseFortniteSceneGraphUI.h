/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortniteSceneGraphUI
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortniteSceneGraphUI.VerseFortniteUIViewportWidgetRootData
// Kind: ScriptStruct; super: none
struct FVerseFortniteUIViewportWidgetRootData
{
public:
    void* ActivatableWidgetEntityContainer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DynamicUIScene; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseFortniteUIViewportWidgetRootData, ActivatableWidgetEntityContainer) == 0, "Offset mismatch for FVerseFortniteUIViewportWidgetRootData::ActivatableWidgetEntityContainer");
static_assert(offsetof(FVerseFortniteUIViewportWidgetRootData, DynamicUIScene) == 8, "Offset mismatch for FVerseFortniteUIViewportWidgetRootData::DynamicUIScene");

// /Script/VerseFortniteSceneGraphUI.VerseFortniteSceneGraphUIPlayerComponent
// Kind: Class; super: VerseUISceneGraphPlayerComponent
class UVerseFortniteSceneGraphUIPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t FortViewportRoot[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t FortPlatformViewportRoot[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseFortniteSceneGraphUIPlayerComponent, FortViewportRoot) == 240, "Offset mismatch for UVerseFortniteSceneGraphUIPlayerComponent::FortViewportRoot");
static_assert(offsetof(UVerseFortniteSceneGraphUIPlayerComponent, FortPlatformViewportRoot) == 256, "Offset mismatch for UVerseFortniteSceneGraphUIPlayerComponent::FortPlatformViewportRoot");

// /Script/VerseFortniteSceneGraphUI.VerseFortniteWidgetEntityActivatableContainer
// Kind: Class; super: CommonActivatableWidget
class UVerseFortniteWidgetEntityActivatableContainer
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

static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bIsBackHandler) == 816, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bIsBackHandler");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, OverrideBackActionDisplayName) == 824, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::OverrideBackActionDisplayName");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bAutoActivate) == 840, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bAutoActivate");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bSupportsActivationFocus) == 841, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bSupportsActivationFocus");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bIsModal) == 842, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bIsModal");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bAutoRestoreFocus) == 843, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bAutoRestoreFocus");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bOverrideActionDomain) == 844, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bOverrideActionDomain");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, InputMapping) == 848, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::InputMapping");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, InputMappingPriority) == 856, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::InputMappingPriority");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, InputModeTagsToAdd) == 864, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::InputModeTagsToAdd");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, InputModeTagsToRemove) == 896, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::InputModeTagsToRemove");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, ActionDomainOverride) == 928, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::ActionDomainOverride");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, BP_OnWidgetActivated) == 960, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::BP_OnWidgetActivated");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::BP_OnWidgetDeactivated");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bIsActive) == 992, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bIsActive");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, VisibilityBoundWidgets) == 1000, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::VisibilityBoundWidgets");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bSetVisibilityOnActivated");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, ActivatedVisibility) == 1177, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::ActivatedVisibility");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::bSetVisibilityOnDeactivated");
static_assert(offsetof(UVerseFortniteWidgetEntityActivatableContainer, DeactivatedVisibility) == 1179, "Offset mismatch for UVerseFortniteWidgetEntityActivatableContainer::DeactivatedVisibility");
