/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimQuickplayUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimQuickplayUI.FestivalPassTrackingWidget
// Kind: Class; super: CommonUserWidget
class UFestivalPassTrackingWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::int32_t CurrentProgress; // 0x0330 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0334
    TSoftObjectPtr<void> TrackedItem; // 0x0338 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFestivalPassTrackingWidget, CurrentProgress) == 816, "Offset mismatch for UFestivalPassTrackingWidget::CurrentProgress");
static_assert(offsetof(UFestivalPassTrackingWidget, TrackedItem) == 824, "Offset mismatch for UFestivalPassTrackingWidget::TrackedItem");

// /Script/PilgrimQuickplayUI.PilgrimAudioInputDeviceInfoVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimAudioInputDeviceInfoVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsAvailable; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasMicrophonePermission; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0092
    std::uint8_t DisplayName[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t DeviceID[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    float InputVolume; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x14]; // 0x00BC
    void* CachedAudioCaptureComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, bIsAvailable) == 144, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::bIsAvailable");
static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, bHasMicrophonePermission) == 145, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::bHasMicrophonePermission");
static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, DisplayName) == 152, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::DisplayName");
static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, DeviceID) == 168, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::DeviceID");
static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, InputVolume) == 184, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::InputVolume");
static_assert(offsetof(UPilgrimAudioInputDeviceInfoVM, CachedAudioCaptureComponent) == 208, "Offset mismatch for UPilgrimAudioInputDeviceInfoVM::CachedAudioCaptureComponent");

// /Script/PilgrimQuickplayUI.PilgrimCommonActivatableWidget
// Kind: Class; super: CommonActivatableWidget
class UPilgrimCommonActivatableWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t bIgnoreInputRegistration; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSidebarOpensOnlyWithGamepad; // 0x04A1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimCommonActivatableWidget, bIgnoreInputRegistration) == 1184, "Offset mismatch for UPilgrimCommonActivatableWidget::bIgnoreInputRegistration");
static_assert(offsetof(UPilgrimCommonActivatableWidget, bSidebarOpensOnlyWithGamepad) == 1185, "Offset mismatch for UPilgrimCommonActivatableWidget::bSidebarOpensOnlyWithGamepad");

// /Script/PilgrimQuickplayUI.PilgrimCuratedSetlistVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimCuratedSetlistVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsCuratedSetlist; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t CuratedSetlistName[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    void* SetlistComp; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimCuratedSetlistVM, bIsCuratedSetlist) == 144, "Offset mismatch for UPilgrimCuratedSetlistVM::bIsCuratedSetlist");
static_assert(offsetof(UPilgrimCuratedSetlistVM, CuratedSetlistName) == 152, "Offset mismatch for UPilgrimCuratedSetlistVM::CuratedSetlistName");
static_assert(offsetof(UPilgrimCuratedSetlistVM, SetlistComp) == 168, "Offset mismatch for UPilgrimCuratedSetlistVM::SetlistComp");

// /Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector
// Kind: Class; super: SparksDynamicUIDirector
class UPilgrimDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimDynamicUIDirector, DefaultScenes) == 624, "Offset mismatch for UPilgrimDynamicUIDirector::DefaultScenes");
static_assert(offsetof(UPilgrimDynamicUIDirector, OwningLocalPlayer) == 640, "Offset mismatch for UPilgrimDynamicUIDirector::OwningLocalPlayer");
static_assert(offsetof(UPilgrimDynamicUIDirector, bEnabledDuringReplay) == 648, "Offset mismatch for UPilgrimDynamicUIDirector::bEnabledDuringReplay");
static_assert(offsetof(UPilgrimDynamicUIDirector, ScenesManuallyAdded) == 656, "Offset mismatch for UPilgrimDynamicUIDirector::ScenesManuallyAdded");

// /Script/PilgrimQuickplayUI.PilgrimFastStartPlayerControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimFastStartPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimFastStartPlayerControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimFastStartPlayerControllerComponent::OnComponentDeactivated");

// /Script/PilgrimQuickplayUI.PilgrimHUDBase
// Kind: Class; super: FortNullHUD
class UPilgrimHUDBase
{
public:
    std::uint8_t Pad_0000[0x548]; // 0x0000
    std::uint8_t PreventOrientationChangeTag[0x8]; // 0x0548 (Size: 0x8, Type: StructProperty)
    std::uint8_t SideBarObjectInputAction[0x1]; // 0x0550 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimHUDBase, PreventOrientationChangeTag) == 1352, "Offset mismatch for UPilgrimHUDBase::PreventOrientationChangeTag");
static_assert(offsetof(UPilgrimHUDBase, SideBarObjectInputAction) == 1360, "Offset mismatch for UPilgrimHUDBase::SideBarObjectInputAction");

// /Script/PilgrimQuickplayUI.PilgrimMicrophoneIssuesVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimMicrophoneIssuesVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t MicrophoneIssueType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowIssueNotification; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasMicrophonePermission; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PlayerStateSelectedInstrument; // 0x0093 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimMicrophoneIssuesVM, MicrophoneIssueType) == 144, "Offset mismatch for UPilgrimMicrophoneIssuesVM::MicrophoneIssueType");
static_assert(offsetof(UPilgrimMicrophoneIssuesVM, bShowIssueNotification) == 145, "Offset mismatch for UPilgrimMicrophoneIssuesVM::bShowIssueNotification");
static_assert(offsetof(UPilgrimMicrophoneIssuesVM, bHasMicrophonePermission) == 146, "Offset mismatch for UPilgrimMicrophoneIssuesVM::bHasMicrophonePermission");
static_assert(offsetof(UPilgrimMicrophoneIssuesVM, PlayerStateSelectedInstrument) == 147, "Offset mismatch for UPilgrimMicrophoneIssuesVM::PlayerStateSelectedInstrument");

// /Script/PilgrimQuickplayUI.PilgrimNextUpSongVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimNextUpSongVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* NextUpSongItemVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* NextUpSongItemDetailsVM; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimNextUpSongVM, NextUpSongItemVM) == 120, "Offset mismatch for UPilgrimNextUpSongVM::NextUpSongItemVM");
static_assert(offsetof(UPilgrimNextUpSongVM, NextUpSongItemDetailsVM) == 128, "Offset mismatch for UPilgrimNextUpSongVM::NextUpSongItemDetailsVM");

// /Script/PilgrimQuickplayUI.PilgrimPartPickerBaseWidget
// Kind: Class; super: CommonActivatableWidget
class UPilgrimPartPickerBaseWidget
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

static_assert(offsetof(UPilgrimPartPickerBaseWidget, bIsBackHandler) == 816, "Offset mismatch for UPilgrimPartPickerBaseWidget::bIsBackHandler");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UPilgrimPartPickerBaseWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UPilgrimPartPickerBaseWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bAutoActivate) == 840, "Offset mismatch for UPilgrimPartPickerBaseWidget::bAutoActivate");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UPilgrimPartPickerBaseWidget::bSupportsActivationFocus");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bIsModal) == 842, "Offset mismatch for UPilgrimPartPickerBaseWidget::bIsModal");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UPilgrimPartPickerBaseWidget::bAutoRestoreFocus");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bOverrideActionDomain) == 844, "Offset mismatch for UPilgrimPartPickerBaseWidget::bOverrideActionDomain");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, InputMapping) == 848, "Offset mismatch for UPilgrimPartPickerBaseWidget::InputMapping");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, InputMappingPriority) == 856, "Offset mismatch for UPilgrimPartPickerBaseWidget::InputMappingPriority");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UPilgrimPartPickerBaseWidget::InputModeTagsToAdd");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UPilgrimPartPickerBaseWidget::InputModeTagsToRemove");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, ActionDomainOverride) == 928, "Offset mismatch for UPilgrimPartPickerBaseWidget::ActionDomainOverride");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UPilgrimPartPickerBaseWidget::BP_OnWidgetActivated");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UPilgrimPartPickerBaseWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bIsActive) == 992, "Offset mismatch for UPilgrimPartPickerBaseWidget::bIsActive");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UPilgrimPartPickerBaseWidget::VisibilityBoundWidgets");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UPilgrimPartPickerBaseWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, ActivatedVisibility) == 1177, "Offset mismatch for UPilgrimPartPickerBaseWidget::ActivatedVisibility");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UPilgrimPartPickerBaseWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UPilgrimPartPickerBaseWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UPilgrimPartPickerBaseWidget::DeactivatedVisibility");

// /Script/PilgrimQuickplayUI.PilgrimPartPickerNavOverride
// Kind: Class; super: FortNavigationWidgetBase
class UPilgrimPartPickerNavOverride
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

static_assert(offsetof(UPilgrimPartPickerNavOverride, bIsBackHandler) == 816, "Offset mismatch for UPilgrimPartPickerNavOverride::bIsBackHandler");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UPilgrimPartPickerNavOverride::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UPilgrimPartPickerNavOverride, OverrideBackActionDisplayName) == 824, "Offset mismatch for UPilgrimPartPickerNavOverride::OverrideBackActionDisplayName");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bAutoActivate) == 840, "Offset mismatch for UPilgrimPartPickerNavOverride::bAutoActivate");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bSupportsActivationFocus) == 841, "Offset mismatch for UPilgrimPartPickerNavOverride::bSupportsActivationFocus");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bIsModal) == 842, "Offset mismatch for UPilgrimPartPickerNavOverride::bIsModal");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bAutoRestoreFocus) == 843, "Offset mismatch for UPilgrimPartPickerNavOverride::bAutoRestoreFocus");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bOverrideActionDomain) == 844, "Offset mismatch for UPilgrimPartPickerNavOverride::bOverrideActionDomain");
static_assert(offsetof(UPilgrimPartPickerNavOverride, InputMapping) == 848, "Offset mismatch for UPilgrimPartPickerNavOverride::InputMapping");
static_assert(offsetof(UPilgrimPartPickerNavOverride, InputMappingPriority) == 856, "Offset mismatch for UPilgrimPartPickerNavOverride::InputMappingPriority");
static_assert(offsetof(UPilgrimPartPickerNavOverride, InputModeTagsToAdd) == 864, "Offset mismatch for UPilgrimPartPickerNavOverride::InputModeTagsToAdd");
static_assert(offsetof(UPilgrimPartPickerNavOverride, InputModeTagsToRemove) == 896, "Offset mismatch for UPilgrimPartPickerNavOverride::InputModeTagsToRemove");
static_assert(offsetof(UPilgrimPartPickerNavOverride, ActionDomainOverride) == 928, "Offset mismatch for UPilgrimPartPickerNavOverride::ActionDomainOverride");
static_assert(offsetof(UPilgrimPartPickerNavOverride, BP_OnWidgetActivated) == 960, "Offset mismatch for UPilgrimPartPickerNavOverride::BP_OnWidgetActivated");
static_assert(offsetof(UPilgrimPartPickerNavOverride, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UPilgrimPartPickerNavOverride::BP_OnWidgetDeactivated");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bIsActive) == 992, "Offset mismatch for UPilgrimPartPickerNavOverride::bIsActive");
static_assert(offsetof(UPilgrimPartPickerNavOverride, VisibilityBoundWidgets) == 1000, "Offset mismatch for UPilgrimPartPickerNavOverride::VisibilityBoundWidgets");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UPilgrimPartPickerNavOverride::bSetVisibilityOnActivated");
static_assert(offsetof(UPilgrimPartPickerNavOverride, ActivatedVisibility) == 1177, "Offset mismatch for UPilgrimPartPickerNavOverride::ActivatedVisibility");
static_assert(offsetof(UPilgrimPartPickerNavOverride, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UPilgrimPartPickerNavOverride::bSetVisibilityOnDeactivated");
static_assert(offsetof(UPilgrimPartPickerNavOverride, DeactivatedVisibility) == 1179, "Offset mismatch for UPilgrimPartPickerNavOverride::DeactivatedVisibility");

// /Script/PilgrimQuickplayUI.PilgrimPostGameQuestList
// Kind: Class; super: CommonUserWidget
class UPilgrimPostGameQuestList
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_Quests; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> QuestWidgetMap; // 0x0338 (Size: 0x10, Type: MapProperty)
    std::uint8_t bShowCompletedQuests; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUpdatedQuests; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUnchangedQuests; // 0x034A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimPostGameQuestList, EntryBox_Quests) == 816, "Offset mismatch for UPilgrimPostGameQuestList::EntryBox_Quests");
static_assert(offsetof(UPilgrimPostGameQuestList, QuestWidgetMap) == 824, "Offset mismatch for UPilgrimPostGameQuestList::QuestWidgetMap");
static_assert(offsetof(UPilgrimPostGameQuestList, bShowCompletedQuests) == 840, "Offset mismatch for UPilgrimPostGameQuestList::bShowCompletedQuests");
static_assert(offsetof(UPilgrimPostGameQuestList, bShowUpdatedQuests) == 841, "Offset mismatch for UPilgrimPostGameQuestList::bShowUpdatedQuests");
static_assert(offsetof(UPilgrimPostGameQuestList, bShowUnchangedQuests) == 842, "Offset mismatch for UPilgrimPostGameQuestList::bShowUnchangedQuests");

// /Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry
// Kind: Class; super: CommonUserWidget
class UPilgrimQuestNotificationEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Text_Description; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RichText_CategoryDisplay; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_FlavorText; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* RichText_ObjectivesCompleted; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Image_Completion; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* UserWidget_Rewards; // 0x0358 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuestNotificationEntry, Text_Description) == 816, "Offset mismatch for UPilgrimQuestNotificationEntry::Text_Description");
static_assert(offsetof(UPilgrimQuestNotificationEntry, RichText_CategoryDisplay) == 824, "Offset mismatch for UPilgrimQuestNotificationEntry::RichText_CategoryDisplay");
static_assert(offsetof(UPilgrimQuestNotificationEntry, Text_FlavorText) == 832, "Offset mismatch for UPilgrimQuestNotificationEntry::Text_FlavorText");
static_assert(offsetof(UPilgrimQuestNotificationEntry, RichText_ObjectivesCompleted) == 840, "Offset mismatch for UPilgrimQuestNotificationEntry::RichText_ObjectivesCompleted");
static_assert(offsetof(UPilgrimQuestNotificationEntry, Image_Completion) == 848, "Offset mismatch for UPilgrimQuestNotificationEntry::Image_Completion");
static_assert(offsetof(UPilgrimQuestNotificationEntry, UserWidget_Rewards) == 856, "Offset mismatch for UPilgrimQuestNotificationEntry::UserWidget_Rewards");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayCVarsVM
// Kind: Class; super: FortPerUserViewModel
class UPilgrimQuickplayCVarsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t BackstagePlayerMovementDisabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplayCVarsVM, BackstagePlayerMovementDisabled) == 120, "Offset mismatch for UPilgrimQuickplayCVarsVM::BackstagePlayerMovementDisabled");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayCustomSetlistVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimQuickplayCustomSetlistVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> SetlistItems; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSongsForPlayer; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t AvailableSongsForPlayer; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultSetlistLength; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    void* CustomSetlist; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* CachedLockerCategory; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, SetlistItems) == 144, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::SetlistItems");
static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, MaxSongsForPlayer) == 160, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::MaxSongsForPlayer");
static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, AvailableSongsForPlayer) == 164, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::AvailableSongsForPlayer");
static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, DefaultSetlistLength) == 168, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::DefaultSetlistLength");
static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, CustomSetlist) == 176, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::CustomSetlist");
static_assert(offsetof(UPilgrimQuickplayCustomSetlistVM, CachedLockerCategory) == 184, "Offset mismatch for UPilgrimQuickplayCustomSetlistVM::CachedLockerCategory");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal
// Kind: Class; super: CommonActivatableWidget
class UPilgrimQuickplayInfoModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Vbox_Panels; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close_Alt; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Panels; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayInfoModal, Vbox_Panels) == 1184, "Offset mismatch for UPilgrimQuickplayInfoModal::Vbox_Panels");
static_assert(offsetof(UPilgrimQuickplayInfoModal, Button_Close) == 1192, "Offset mismatch for UPilgrimQuickplayInfoModal::Button_Close");
static_assert(offsetof(UPilgrimQuickplayInfoModal, Button_Close_Alt) == 1200, "Offset mismatch for UPilgrimQuickplayInfoModal::Button_Close_Alt");
static_assert(offsetof(UPilgrimQuickplayInfoModal, Button_CloseTouch) == 1208, "Offset mismatch for UPilgrimQuickplayInfoModal::Button_CloseTouch");
static_assert(offsetof(UPilgrimQuickplayInfoModal, ScrollBox_Panels) == 1216, "Offset mismatch for UPilgrimQuickplayInfoModal::ScrollBox_Panels");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayLeaderboardItemVM
// Kind: Class; super: MVVMViewModelBase
class UPilgrimQuickplayLeaderboardItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t Rank; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t FriendOrPlayerRank; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t Score; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t SeasonNumber; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t StarsEarned; // 0x0078 (Size: 0x4, Type: IntProperty)
    float Accuracy; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFullCombo; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Difficulty; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsLocalPlayer; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0083
    TArray<void*> PlayerDisplayNames; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsSoloEntry; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, Rank) == 104, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::Rank");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, FriendOrPlayerRank) == 108, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::FriendOrPlayerRank");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, Score) == 112, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::Score");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, SeasonNumber) == 116, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::SeasonNumber");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, StarsEarned) == 120, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::StarsEarned");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, Accuracy) == 124, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::Accuracy");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, bFullCombo) == 128, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::bFullCombo");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, Difficulty) == 129, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::Difficulty");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, bIsLocalPlayer) == 130, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::bIsLocalPlayer");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, PlayerDisplayNames) == 136, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::PlayerDisplayNames");
static_assert(offsetof(UPilgrimQuickplayLeaderboardItemVM, bIsSoloEntry) == 152, "Offset mismatch for UPilgrimQuickplayLeaderboardItemVM::bIsSoloEntry");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayLeaderboardPreviewVM
// Kind: Class; super: PilgrimQuickplayLeaderboardVMBase
class UPilgrimQuickplayLeaderboardPreviewVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Items; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* LocalPlayerItem; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongShortName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsFriendsLeaderboard; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllTimeLeaderboard; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLoading; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasError; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasItems; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSongHasSelectedPart; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00B3
    void* ActiveRequest; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, Items) == 144, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::Items");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, LocalPlayerItem) == 160, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::LocalPlayerItem");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, SongShortName) == 168, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::SongShortName");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, LeaderboardType) == 172, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::LeaderboardType");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bIsFriendsLeaderboard) == 173, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bIsFriendsLeaderboard");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bIsAllTimeLeaderboard) == 174, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bIsAllTimeLeaderboard");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bIsLoading) == 175, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bIsLoading");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bHasError) == 176, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bHasError");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bHasItems) == 177, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bHasItems");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, bSongHasSelectedPart) == 178, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::bSongHasSelectedPart");
static_assert(offsetof(UPilgrimQuickplayLeaderboardPreviewVM, ActiveRequest) == 184, "Offset mismatch for UPilgrimQuickplayLeaderboardPreviewVM::ActiveRequest");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayLeaderboardVM
// Kind: Class; super: PilgrimQuickplayLeaderboardVMBase
class UPilgrimQuickplayLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::int32_t Page; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPages; // 0x00CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimQuickplayLeaderboardVM, Page) == 200, "Offset mismatch for UPilgrimQuickplayLeaderboardVM::Page");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVM, TotalPages) == 204, "Offset mismatch for UPilgrimQuickplayLeaderboardVM::TotalPages");

// /Script/PilgrimQuickplayUI.PilgrimQuickplayLeaderboardVMBase
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimQuickplayLeaderboardVMBase
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Items; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* LocalPlayerItem; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SongShortName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeaderboardType; // 0x00AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsFriendsLeaderboard; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAllTimeLeaderboard; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLoading; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasError; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasItems; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSongHasSelectedPart; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x00B3
    void* ActiveRequest; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, Items) == 144, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::Items");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, LocalPlayerItem) == 160, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::LocalPlayerItem");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, SongShortName) == 168, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::SongShortName");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, LeaderboardType) == 172, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::LeaderboardType");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bIsFriendsLeaderboard) == 173, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bIsFriendsLeaderboard");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bIsAllTimeLeaderboard) == 174, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bIsAllTimeLeaderboard");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bIsLoading) == 175, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bIsLoading");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bHasError) == 176, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bHasError");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bHasItems) == 177, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bHasItems");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, bSongHasSelectedPart) == 178, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::bSongHasSelectedPart");
static_assert(offsetof(UPilgrimQuickplayLeaderboardVMBase, ActiveRequest) == 184, "Offset mismatch for UPilgrimQuickplayLeaderboardVMBase::ActiveRequest");

// /Script/PilgrimQuickplayUI.PilgrimQuickplaySongResultsVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimQuickplaySongResultsVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsSoloResults; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::int32_t BandScore; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t BandStars; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowGoldBandStars; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWholeBandPlayedNoParts; // 0x009D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x009E
    std::int32_t LocalPlayerStars; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPilgrimQuickplaySongResultsVM, bIsSoloResults) == 144, "Offset mismatch for UPilgrimQuickplaySongResultsVM::bIsSoloResults");
static_assert(offsetof(UPilgrimQuickplaySongResultsVM, BandScore) == 148, "Offset mismatch for UPilgrimQuickplaySongResultsVM::BandScore");
static_assert(offsetof(UPilgrimQuickplaySongResultsVM, BandStars) == 152, "Offset mismatch for UPilgrimQuickplaySongResultsVM::BandStars");
static_assert(offsetof(UPilgrimQuickplaySongResultsVM, bShowGoldBandStars) == 156, "Offset mismatch for UPilgrimQuickplaySongResultsVM::bShowGoldBandStars");
static_assert(offsetof(UPilgrimQuickplaySongResultsVM, bWholeBandPlayedNoParts) == 157, "Offset mismatch for UPilgrimQuickplaySongResultsVM::bWholeBandPlayedNoParts");
static_assert(offsetof(UPilgrimQuickplaySongResultsVM, LocalPlayerStars) == 160, "Offset mismatch for UPilgrimQuickplaySongResultsVM::LocalPlayerStars");

// /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry
// Kind: Class; super: CommonUserWidget
class UPilgrimQuickplaySpotlightEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bEmptySpotlight; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0331
    void* Image_SongArt; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Text_SongTitle; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Text_SongArtist; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Text_Constraints; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpotlightData[0x70]; // 0x0358 (Size: 0x70, Type: StructProperty)
    TArray<void*> SpotlightSongMetadatas; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, bEmptySpotlight) == 816, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::bEmptySpotlight");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, Image_SongArt) == 824, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::Image_SongArt");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, Text_SongTitle) == 832, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::Text_SongTitle");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, Text_SongArtist) == 840, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::Text_SongArtist");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, Text_Constraints) == 848, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::Text_Constraints");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, SpotlightData) == 856, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::SpotlightData");
static_assert(offsetof(UPilgrimQuickplaySpotlightEntry, SpotlightSongMetadatas) == 968, "Offset mismatch for UPilgrimQuickplaySpotlightEntry::SpotlightSongMetadatas");

// /Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList
// Kind: Class; super: CommonUserWidget
class UPilgrimQuickplaySpotlightList
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> SpotlightCompetitions; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSpotlights; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::int32_t SelectedIndex; // 0x0344 (Size: 0x4, Type: IntProperty)
    void* EntryBox_SpotlightCompetitions; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimQuickplaySpotlightList, SpotlightCompetitions) == 816, "Offset mismatch for UPilgrimQuickplaySpotlightList::SpotlightCompetitions");
static_assert(offsetof(UPilgrimQuickplaySpotlightList, MaxSpotlights) == 832, "Offset mismatch for UPilgrimQuickplaySpotlightList::MaxSpotlights");
static_assert(offsetof(UPilgrimQuickplaySpotlightList, SelectedIndex) == 836, "Offset mismatch for UPilgrimQuickplaySpotlightList::SelectedIndex");
static_assert(offsetof(UPilgrimQuickplaySpotlightList, EntryBox_SpotlightCompetitions) == 840, "Offset mismatch for UPilgrimQuickplaySpotlightList::EntryBox_SpotlightCompetitions");

// /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase
// Kind: Class; super: PilgrimCommonActivatableWidget
class UPilgrimQuickplay_UIResultBase
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    std::uint8_t ToggleQuestScreenAction[0x1]; // 0x04B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimQuickplay_UIResultBase, ToggleQuestScreenAction) == 1200, "Offset mismatch for UPilgrimQuickplay_UIResultBase::ToggleQuestScreenAction");

// /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResults_EmoteButton
// Kind: Class; super: CommonActivatableWidget
class UPilgrimQuickplay_UIResults_EmoteButton
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Emote_Button; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnableLocalPlayersEmote; // 0x04A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplay_UIResults_EmoteButton, Emote_Button) == 1184, "Offset mismatch for UPilgrimQuickplay_UIResults_EmoteButton::Emote_Button");
static_assert(offsetof(UPilgrimQuickplay_UIResults_EmoteButton, EnableLocalPlayersEmote) == 1192, "Offset mismatch for UPilgrimQuickplay_UIResults_EmoteButton::EnableLocalPlayersEmote");

// /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResults_PartPicker
// Kind: Class; super: CommonActivatableWidget
class UPilgrimQuickplay_UIResults_PartPicker
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* SwapDifficultyActionWidget; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* SwapInstrumentRightActionWidget; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* SwapInstrumentLeftActionWidget; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SwapDifficultyAction[0x10]; // 0x04B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SwapInstrumentLeftAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SwapInstrumentRightAction[0x1]; // 0x04D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapDifficultyActionWidget) == 1184, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapDifficultyActionWidget");
static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapInstrumentRightActionWidget) == 1192, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapInstrumentRightActionWidget");
static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapInstrumentLeftActionWidget) == 1200, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapInstrumentLeftActionWidget");
static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapDifficultyAction) == 1208, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapDifficultyAction");
static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapInstrumentLeftAction) == 1224, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapInstrumentLeftAction");
static_assert(offsetof(UPilgrimQuickplay_UIResults_PartPicker, SwapInstrumentRightAction) == 1240, "Offset mismatch for UPilgrimQuickplay_UIResults_PartPicker::SwapInstrumentRightAction");

// /Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResults_UniversalPartPicker
// Kind: Class; super: CommonActivatableWidget
class UPilgrimQuickplay_UIResults_UniversalPartPicker
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* UniversalPartPickerWidget; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OpenMenuAction[0x1]; // 0x04A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimQuickplay_UIResults_UniversalPartPicker, UniversalPartPickerWidget) == 1184, "Offset mismatch for UPilgrimQuickplay_UIResults_UniversalPartPicker::UniversalPartPickerWidget");
static_assert(offsetof(UPilgrimQuickplay_UIResults_UniversalPartPicker, OpenMenuAction) == 1192, "Offset mismatch for UPilgrimQuickplay_UIResults_UniversalPartPicker::OpenMenuAction");

// /Script/PilgrimQuickplayUI.PilgrimQuickplay_UISpectatorBase
// Kind: Class; super: PilgrimCommonActivatableWidget
class UPilgrimQuickplay_UISpectatorBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t bIgnoreInputRegistration; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSidebarOpensOnlyWithGamepad; // 0x04A1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimQuickplay_UISpectatorBase, bIgnoreInputRegistration) == 1184, "Offset mismatch for UPilgrimQuickplay_UISpectatorBase::bIgnoreInputRegistration");
static_assert(offsetof(UPilgrimQuickplay_UISpectatorBase, bSidebarOpensOnlyWithGamepad) == 1185, "Offset mismatch for UPilgrimQuickplay_UISpectatorBase::bSidebarOpensOnlyWithGamepad");

// /Script/PilgrimQuickplayUI.PilgrimReplayHUDBase
// Kind: Class; super: PilgrimHUDBase
class UPilgrimReplayHUDBase
{
public:
    std::uint8_t Pad_0000[0x568]; // 0x0000
    TArray<void*> ReplayWidgetStateChanges; // 0x0568 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveWidgets; // 0x0578 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CheckReplayDataTimerHandle[0x1]; // 0x0588 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimReplayHUDBase, ReplayWidgetStateChanges) == 1384, "Offset mismatch for UPilgrimReplayHUDBase::ReplayWidgetStateChanges");
static_assert(offsetof(UPilgrimReplayHUDBase, ActiveWidgets) == 1400, "Offset mismatch for UPilgrimReplayHUDBase::ActiveWidgets");
static_assert(offsetof(UPilgrimReplayHUDBase, CheckReplayDataTimerHandle) == 1416, "Offset mismatch for UPilgrimReplayHUDBase::CheckReplayDataTimerHandle");

// /Script/PilgrimQuickplayUI.PilgrimSessionPlayerCountVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimSessionPlayerCountVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsSoloUserSession; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    TWeakObjectPtr<void> SessionPlayerCountComp; // 0x0094 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimSessionPlayerCountVM, bIsSoloUserSession) == 144, "Offset mismatch for UPilgrimSessionPlayerCountVM::bIsSoloUserSession");
static_assert(offsetof(UPilgrimSessionPlayerCountVM, SessionPlayerCountComp) == 148, "Offset mismatch for UPilgrimSessionPlayerCountVM::SessionPlayerCountComp");

// /Script/PilgrimQuickplayUI.PilgrimSetlistItemVM
// Kind: Class; super: PilgrimSongCatalogItemVM
class UPilgrimSetlistItemVM
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t AddedByPlayer[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ListNumber; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBlankItem; // 0x0124 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimSetlistItemVM, AddedByPlayer) == 256, "Offset mismatch for UPilgrimSetlistItemVM::AddedByPlayer");
static_assert(offsetof(UPilgrimSetlistItemVM, ListNumber) == 288, "Offset mismatch for UPilgrimSetlistItemVM::ListNumber");
static_assert(offsetof(UPilgrimSetlistItemVM, bIsBlankItem) == 292, "Offset mismatch for UPilgrimSetlistItemVM::bIsBlankItem");

// /Script/PilgrimQuickplayUI.PilgrimSplitscreenControllerComponent
// Kind: Class; super: ControllerComponent
class UPilgrimSplitscreenControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UPilgrimSplitscreenControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPilgrimSplitscreenControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, ComponentTags) == 104, "Offset mismatch for UPilgrimSplitscreenControllerComponent::ComponentTags");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, AssetUserData) == 120, "Offset mismatch for UPilgrimSplitscreenControllerComponent::AssetUserData");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPilgrimSplitscreenControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, bNetAddressable) == 152, "Offset mismatch for UPilgrimSplitscreenControllerComponent::bNetAddressable");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, bAutoActivate) == 154, "Offset mismatch for UPilgrimSplitscreenControllerComponent::bAutoActivate");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UPilgrimSplitscreenControllerComponent::bIsEditorOnly");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, CreationMethod) == 185, "Offset mismatch for UPilgrimSplitscreenControllerComponent::CreationMethod");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UPilgrimSplitscreenControllerComponent::OnComponentActivated");
static_assert(offsetof(UPilgrimSplitscreenControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPilgrimSplitscreenControllerComponent::OnComponentDeactivated");

// /Script/PilgrimQuickplayUI.PilgrimSplitscreenSettingScreen
// Kind: Class; super: CommonActivatableWidget
class UPilgrimSplitscreenSettingScreen
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

static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bIsBackHandler) == 816, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bIsBackHandler");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UPilgrimSplitscreenSettingScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bAutoActivate) == 840, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bAutoActivate");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bSupportsActivationFocus");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bIsModal) == 842, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bIsModal");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bAutoRestoreFocus");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bOverrideActionDomain) == 844, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bOverrideActionDomain");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, InputMapping) == 848, "Offset mismatch for UPilgrimSplitscreenSettingScreen::InputMapping");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, InputMappingPriority) == 856, "Offset mismatch for UPilgrimSplitscreenSettingScreen::InputMappingPriority");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UPilgrimSplitscreenSettingScreen::InputModeTagsToAdd");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UPilgrimSplitscreenSettingScreen::InputModeTagsToRemove");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, ActionDomainOverride) == 928, "Offset mismatch for UPilgrimSplitscreenSettingScreen::ActionDomainOverride");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UPilgrimSplitscreenSettingScreen::BP_OnWidgetActivated");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UPilgrimSplitscreenSettingScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bIsActive) == 992, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bIsActive");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UPilgrimSplitscreenSettingScreen::VisibilityBoundWidgets");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, ActivatedVisibility) == 1177, "Offset mismatch for UPilgrimSplitscreenSettingScreen::ActivatedVisibility");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UPilgrimSplitscreenSettingScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UPilgrimSplitscreenSettingScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UPilgrimSplitscreenSettingScreen::DeactivatedVisibility");

// /Script/PilgrimQuickplayUI.UniversalPartsInstrumentVM
// Kind: Class; super: SparksEventDrivenForBlueprintVM
class UUniversalPartsInstrumentVM
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t ListenerHelper[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUniversalPartsInstrumentVM, ListenerHelper) == 136, "Offset mismatch for UUniversalPartsInstrumentVM::ListenerHelper");
