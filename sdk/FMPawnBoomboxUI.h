/**
 * decamp dumper generated SDK
 * Package: /Script/FMPawnBoomboxUI
 */
#pragma once
#include "Basic.h"

// /Script/FMPawnBoomboxUI.BoomboxEmoteWheelOverlay
// Kind: Class; super: CommonActivatableWidget
class UBoomboxEmoteWheelOverlay
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

static_assert(offsetof(UBoomboxEmoteWheelOverlay, bIsBackHandler) == 816, "Offset mismatch for UBoomboxEmoteWheelOverlay::bIsBackHandler");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UBoomboxEmoteWheelOverlay::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, OverrideBackActionDisplayName) == 824, "Offset mismatch for UBoomboxEmoteWheelOverlay::OverrideBackActionDisplayName");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bAutoActivate) == 840, "Offset mismatch for UBoomboxEmoteWheelOverlay::bAutoActivate");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bSupportsActivationFocus) == 841, "Offset mismatch for UBoomboxEmoteWheelOverlay::bSupportsActivationFocus");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bIsModal) == 842, "Offset mismatch for UBoomboxEmoteWheelOverlay::bIsModal");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bAutoRestoreFocus) == 843, "Offset mismatch for UBoomboxEmoteWheelOverlay::bAutoRestoreFocus");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bOverrideActionDomain) == 844, "Offset mismatch for UBoomboxEmoteWheelOverlay::bOverrideActionDomain");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, InputMapping) == 848, "Offset mismatch for UBoomboxEmoteWheelOverlay::InputMapping");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, InputMappingPriority) == 856, "Offset mismatch for UBoomboxEmoteWheelOverlay::InputMappingPriority");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, InputModeTagsToAdd) == 864, "Offset mismatch for UBoomboxEmoteWheelOverlay::InputModeTagsToAdd");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, InputModeTagsToRemove) == 896, "Offset mismatch for UBoomboxEmoteWheelOverlay::InputModeTagsToRemove");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, ActionDomainOverride) == 928, "Offset mismatch for UBoomboxEmoteWheelOverlay::ActionDomainOverride");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, BP_OnWidgetActivated) == 960, "Offset mismatch for UBoomboxEmoteWheelOverlay::BP_OnWidgetActivated");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UBoomboxEmoteWheelOverlay::BP_OnWidgetDeactivated");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bIsActive) == 992, "Offset mismatch for UBoomboxEmoteWheelOverlay::bIsActive");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, VisibilityBoundWidgets) == 1000, "Offset mismatch for UBoomboxEmoteWheelOverlay::VisibilityBoundWidgets");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UBoomboxEmoteWheelOverlay::bSetVisibilityOnActivated");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, ActivatedVisibility) == 1177, "Offset mismatch for UBoomboxEmoteWheelOverlay::ActivatedVisibility");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UBoomboxEmoteWheelOverlay::bSetVisibilityOnDeactivated");
static_assert(offsetof(UBoomboxEmoteWheelOverlay, DeactivatedVisibility) == 1179, "Offset mismatch for UBoomboxEmoteWheelOverlay::DeactivatedVisibility");

// /Script/FMPawnBoomboxUI.PawnBoomboxUIManager
// Kind: Class; super: ControllerComponent
class UPawnBoomboxUIManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* SceneToAdd; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C8
    std::uint8_t BoomboxPlayingTag[0x1]; // 0x00CC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPawnBoomboxUIManager, SceneToAdd) == 192, "Offset mismatch for UPawnBoomboxUIManager::SceneToAdd");
static_assert(offsetof(UPawnBoomboxUIManager, BoomboxPlayingTag) == 204, "Offset mismatch for UPawnBoomboxUIManager::BoomboxPlayingTag");

// /Script/FMPawnBoomboxUI.PawnBoomboxVM
// Kind: Class; super: FortPerUserViewModel
class UPawnBoomboxVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsPlaying; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayerBoomboxPlaying; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoesBoomboxUserHaveActiveSong; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x007B
    std::uint8_t SongArtist[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SongTitle[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t bOwnerHasBoomboxPlayingTag; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPawnBoomboxVM, bIsPlaying) == 120, "Offset mismatch for UPawnBoomboxVM::bIsPlaying");
static_assert(offsetof(UPawnBoomboxVM, bIsLocalPlayerBoomboxPlaying) == 121, "Offset mismatch for UPawnBoomboxVM::bIsLocalPlayerBoomboxPlaying");
static_assert(offsetof(UPawnBoomboxVM, bDoesBoomboxUserHaveActiveSong) == 122, "Offset mismatch for UPawnBoomboxVM::bDoesBoomboxUserHaveActiveSong");
static_assert(offsetof(UPawnBoomboxVM, SongArtist) == 128, "Offset mismatch for UPawnBoomboxVM::SongArtist");
static_assert(offsetof(UPawnBoomboxVM, SongTitle) == 144, "Offset mismatch for UPawnBoomboxVM::SongTitle");
static_assert(offsetof(UPawnBoomboxVM, bOwnerHasBoomboxPlayingTag) == 160, "Offset mismatch for UPawnBoomboxVM::bOwnerHasBoomboxPlayingTag");
