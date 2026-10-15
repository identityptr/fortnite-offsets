/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimSettingsUI.DynamicUIExcludePilgrimSetting
// Kind: Class; super: DynamicUIExcludeBase
class UDynamicUIExcludePilgrimSetting
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName SettingGetterName; // 0x0028 (Size: 0x8, Type: NameProperty)
    FString ExclusionValue; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDynamicUIExcludePilgrimSetting, SettingGetterName) == 40, "Offset mismatch for UDynamicUIExcludePilgrimSetting::SettingGetterName");
static_assert(offsetof(UDynamicUIExcludePilgrimSetting, ExclusionValue) == 48, "Offset mismatch for UDynamicUIExcludePilgrimSetting::ExclusionValue");

// /Script/PilgrimSettingsUI.FortSettingEditCondition_PilgrimCalibrationAvailable
// Kind: Class; super: FortSettingEditCondition
class UFortSettingEditCondition_PilgrimCalibrationAvailable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PilgrimSettingsUI.FortSettingRegistryExtension_Pilgrim
// Kind: Class; super: FortGameSettingRegistryExtension
class UFortSettingRegistryExtension_Pilgrim
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* PilgrimPresetSelectorInstance; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSettingRegistryExtension_Pilgrim, PilgrimPresetSelectorInstance) == 64, "Offset mismatch for UFortSettingRegistryExtension_Pilgrim::PilgrimPresetSelectorInstance");

// /Script/PilgrimSettingsUI.PilgrimInputSettingPreviewBehavior
// Kind: Class; super: FortInputSettingPreviewBehavior
class UPilgrimInputSettingPreviewBehavior
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PresetDifficulty; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimInputSettingPreviewBehavior, PresetDifficulty) == 40, "Offset mismatch for UPilgrimInputSettingPreviewBehavior::PresetDifficulty");

// /Script/PilgrimSettingsUI.PilgrimKeybindWidget
// Kind: Class; super: FortKeyBindWidget
class UPilgrimKeybindWidget
{
public:
    std::uint8_t Pad_0000[0xBF0]; // 0x0000
    std::uint8_t MappableKeySlot; // 0x0BF0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimKeybindWidget, MappableKeySlot) == 3056, "Offset mismatch for UPilgrimKeybindWidget::MappableKeySlot");

// /Script/PilgrimSettingsUI.PilgrimPresetPreviewer
// Kind: Class; super: CommonActivatableWidget
class UPilgrimPresetPreviewer
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* PilgrimPresetSelectorInstance; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPresetPreviewer, PilgrimPresetSelectorInstance) == 1184, "Offset mismatch for UPilgrimPresetPreviewer::PilgrimPresetSelectorInstance");

// /Script/PilgrimSettingsUI.PilgrimPresetSelector
// Kind: Class; super: PilgrimPresetSelectorBase
class UPilgrimPresetSelector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> PilgrimPresetConfiguration; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwningPlayer; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPilgrimPresetSelector, PilgrimPresetConfiguration) == 40, "Offset mismatch for UPilgrimPresetSelector::PilgrimPresetConfiguration");
static_assert(offsetof(UPilgrimPresetSelector, OwningPlayer) == 48, "Offset mismatch for UPilgrimPresetSelector::OwningPlayer");

// /Script/PilgrimSettingsUI.PilgrimPresetSwitcher
// Kind: Class; super: CommonUserWidget
class UPilgrimPresetSwitcher
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::int32_t NumLanes; // 0x0330 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0334
    void* Rotator_Preset; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Button_Decrease_Preset; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Button_Increase_Preset; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimPresetSwitcher, NumLanes) == 816, "Offset mismatch for UPilgrimPresetSwitcher::NumLanes");
static_assert(offsetof(UPilgrimPresetSwitcher, Rotator_Preset) == 824, "Offset mismatch for UPilgrimPresetSwitcher::Rotator_Preset");
static_assert(offsetof(UPilgrimPresetSwitcher, Button_Decrease_Preset) == 832, "Offset mismatch for UPilgrimPresetSwitcher::Button_Decrease_Preset");
static_assert(offsetof(UPilgrimPresetSwitcher, Button_Increase_Preset) == 840, "Offset mismatch for UPilgrimPresetSwitcher::Button_Increase_Preset");

// /Script/PilgrimSettingsUI.PilgrimSettingsUIGlobals
// Kind: Class; super: Object
class UPilgrimSettingsUIGlobals
{
public:
    std::uint8_t Opaque[1];
};
