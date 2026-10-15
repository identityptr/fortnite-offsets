/**
 * decamp dumper generated SDK
 * Package: /Script/SrirachaRanchUI
 */
#pragma once
#include "Basic.h"

// /Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// Kind: Class; super: FortMobileActionButtonBehavior
class UFortMobileActionButtonBehavior_ToggleRadio
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    void* ToggleRadioOffSprite; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMobileActionButtonBehavior_ToggleRadio, ToggleRadioOffSprite) == 664, "Offset mismatch for UFortMobileActionButtonBehavior_ToggleRadio::ToggleRadioOffSprite");

// /Script/SrirachaRanchUI.RadioMenuPicker
// Kind: Class; super: CommonActivatableWidget
class URadioMenuPicker
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* PickerOverlay_RadioMenu; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    float DelayedSelectionTime; // 0x04B0 (Size: 0x4, Type: FloatProperty)
    std::int32_t DelayedSelectionRetryMax; // 0x04B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowBackgroundBlur; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBackgroundGlow; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInputHintsBottomBar; // 0x04BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRadioStationDetailsPanel; // 0x04BB (Size: 0x1, Type: BoolProperty)
    std::int32_t MaxNumberOfRadioStationsSupported; // 0x04BC (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryContentSetup[0x8]; // 0x04C0 (Size: 0x8, Type: StructProperty)
    void* Text_RadioStationName; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* Text_RadioStationCurrentSong; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Text_RadioStationCurrentArtist; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuickAccess_0; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuickAccess_Slash; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Text_QuickAccess_Q_Y; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_Confirm; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Cancel; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RadioStations; // 0x0508 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuickSelectBindings; // 0x0518 (Size: 0x10, Type: ArrayProperty)
    void* CachedRadioPlayerComponent; // 0x0528 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URadioMenuPicker, PickerOverlay_RadioMenu) == 1192, "Offset mismatch for URadioMenuPicker::PickerOverlay_RadioMenu");
static_assert(offsetof(URadioMenuPicker, DelayedSelectionTime) == 1200, "Offset mismatch for URadioMenuPicker::DelayedSelectionTime");
static_assert(offsetof(URadioMenuPicker, DelayedSelectionRetryMax) == 1204, "Offset mismatch for URadioMenuPicker::DelayedSelectionRetryMax");
static_assert(offsetof(URadioMenuPicker, bShowBackgroundBlur) == 1208, "Offset mismatch for URadioMenuPicker::bShowBackgroundBlur");
static_assert(offsetof(URadioMenuPicker, bShowBackgroundGlow) == 1209, "Offset mismatch for URadioMenuPicker::bShowBackgroundGlow");
static_assert(offsetof(URadioMenuPicker, bShowInputHintsBottomBar) == 1210, "Offset mismatch for URadioMenuPicker::bShowInputHintsBottomBar");
static_assert(offsetof(URadioMenuPicker, bShowRadioStationDetailsPanel) == 1211, "Offset mismatch for URadioMenuPicker::bShowRadioStationDetailsPanel");
static_assert(offsetof(URadioMenuPicker, MaxNumberOfRadioStationsSupported) == 1212, "Offset mismatch for URadioMenuPicker::MaxNumberOfRadioStationsSupported");
static_assert(offsetof(URadioMenuPicker, PrimaryContentSetup) == 1216, "Offset mismatch for URadioMenuPicker::PrimaryContentSetup");
static_assert(offsetof(URadioMenuPicker, Text_RadioStationName) == 1224, "Offset mismatch for URadioMenuPicker::Text_RadioStationName");
static_assert(offsetof(URadioMenuPicker, Text_RadioStationCurrentSong) == 1232, "Offset mismatch for URadioMenuPicker::Text_RadioStationCurrentSong");
static_assert(offsetof(URadioMenuPicker, Text_RadioStationCurrentArtist) == 1240, "Offset mismatch for URadioMenuPicker::Text_RadioStationCurrentArtist");
static_assert(offsetof(URadioMenuPicker, Text_QuickAccess_0) == 1248, "Offset mismatch for URadioMenuPicker::Text_QuickAccess_0");
static_assert(offsetof(URadioMenuPicker, Text_QuickAccess_Slash) == 1256, "Offset mismatch for URadioMenuPicker::Text_QuickAccess_Slash");
static_assert(offsetof(URadioMenuPicker, Text_QuickAccess_Q_Y) == 1264, "Offset mismatch for URadioMenuPicker::Text_QuickAccess_Q_Y");
static_assert(offsetof(URadioMenuPicker, Keybind_Confirm) == 1272, "Offset mismatch for URadioMenuPicker::Keybind_Confirm");
static_assert(offsetof(URadioMenuPicker, Button_Cancel) == 1280, "Offset mismatch for URadioMenuPicker::Button_Cancel");
static_assert(offsetof(URadioMenuPicker, RadioStations) == 1288, "Offset mismatch for URadioMenuPicker::RadioStations");
static_assert(offsetof(URadioMenuPicker, QuickSelectBindings) == 1304, "Offset mismatch for URadioMenuPicker::QuickSelectBindings");
static_assert(offsetof(URadioMenuPicker, CachedRadioPlayerComponent) == 1320, "Offset mismatch for URadioMenuPicker::CachedRadioPlayerComponent");

// /Script/SrirachaRanchUI.RadioPlayerWidgetBase
// Kind: Class; super: CommonActivatableWidget
class URadioPlayerWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4E0]; // 0x0000
    std::uint8_t PriorityData[0x8]; // 0x04E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PressedObjectInputAction[0x18]; // 0x04E8 (Size: 0x18, Type: StructProperty)
    void* RadioMenuPickerClass; // 0x0500 (Size: 0x8, Type: ClassProperty)
    void* RadioMenuPickerWidget; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Keybind; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* ToggleActionWidget; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* LastValidComp; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPickerOpen; // 0x0528 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URadioPlayerWidgetBase, PriorityData) == 1248, "Offset mismatch for URadioPlayerWidgetBase::PriorityData");
static_assert(offsetof(URadioPlayerWidgetBase, PressedObjectInputAction) == 1256, "Offset mismatch for URadioPlayerWidgetBase::PressedObjectInputAction");
static_assert(offsetof(URadioPlayerWidgetBase, RadioMenuPickerClass) == 1280, "Offset mismatch for URadioPlayerWidgetBase::RadioMenuPickerClass");
static_assert(offsetof(URadioPlayerWidgetBase, RadioMenuPickerWidget) == 1288, "Offset mismatch for URadioPlayerWidgetBase::RadioMenuPickerWidget");
static_assert(offsetof(URadioPlayerWidgetBase, Overlay_Keybind) == 1296, "Offset mismatch for URadioPlayerWidgetBase::Overlay_Keybind");
static_assert(offsetof(URadioPlayerWidgetBase, ToggleActionWidget) == 1304, "Offset mismatch for URadioPlayerWidgetBase::ToggleActionWidget");
static_assert(offsetof(URadioPlayerWidgetBase, LastValidComp) == 1312, "Offset mismatch for URadioPlayerWidgetBase::LastValidComp");
static_assert(offsetof(URadioPlayerWidgetBase, bPickerOpen) == 1320, "Offset mismatch for URadioPlayerWidgetBase::bPickerOpen");

// /Script/SrirachaRanchUI.RadioStation
// Kind: Class; super: Object
class URadioStation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStationImageIsLoaded; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* StationCMSImage; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URadioStation, OnStationImageIsLoaded) == 40, "Offset mismatch for URadioStation::OnStationImageIsLoaded");
static_assert(offsetof(URadioStation, StationCMSImage) == 56, "Offset mismatch for URadioStation::StationCMSImage");
