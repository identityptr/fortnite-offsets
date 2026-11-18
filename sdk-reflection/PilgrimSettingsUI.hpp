#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimSettingsUI
{
    struct DynamicUIExcludePilgrimSetting
    {
        static constexpr std::string_view Name = "DynamicUIExcludePilgrimSetting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIExcludeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingGetterName = 0x28;
            static constexpr std::uintptr_t ExclusionValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SettingGetterName", 0x28, "NameProperty"},
            {"ExclusionValue", 0x30, "StrProperty"},
        }};
    };

    struct FortSettingEditCondition_PilgrimCalibrationAvailable
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_PilgrimCalibrationAvailable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSettingRegistryExtension_Pilgrim
    {
        static constexpr std::string_view Name = "FortSettingRegistryExtension_Pilgrim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimPresetSelectorInstance = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PilgrimPresetSelectorInstance", 0x40, "ObjectProperty"},
        }};
    };

    struct PilgrimInputSettingPreviewBehavior
    {
        static constexpr std::string_view Name = "PilgrimInputSettingPreviewBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputSettingPreviewBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetDifficulty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PresetDifficulty", 0x28, "EnumProperty"},
        }};
    };

    struct PilgrimKeybindWidget
    {
        static constexpr std::string_view Name = "PilgrimKeybindWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortKeyBindWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MappableKeySlot = 0xBF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MappableKeySlot", 0xBF0, "EnumProperty"},
        }};
    };

    struct PilgrimPresetPreviewer
    {
        static constexpr std::string_view Name = "PilgrimPresetPreviewer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimPresetSelectorInstance = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PilgrimPresetSelectorInstance", 0x4A0, "ObjectProperty"},
        }};
    };

    struct PilgrimPresetSelector
    {
        static constexpr std::string_view Name = "PilgrimPresetSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimPresetSelectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PilgrimPresetConfiguration = 0x28;
            static constexpr std::uintptr_t OwningPlayer = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PilgrimPresetConfiguration", 0x28, "WeakObjectProperty"},
            {"OwningPlayer", 0x30, "WeakObjectProperty"},
        }};
    };

    struct PilgrimPresetSwitcher
    {
        static constexpr std::string_view Name = "PilgrimPresetSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NumLanes = 0x330;
            static constexpr std::uintptr_t Rotator_Preset = 0x338;
            static constexpr std::uintptr_t Button_Decrease_Preset = 0x340;
            static constexpr std::uintptr_t Button_Increase_Preset = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NumLanes", 0x330, "IntProperty"},
            {"Rotator_Preset", 0x338, "ObjectProperty"},
            {"Button_Decrease_Preset", 0x340, "ObjectProperty"},
            {"Button_Increase_Preset", 0x348, "ObjectProperty"},
        }};
    };

    struct PilgrimSettingsUIGlobals
    {
        static constexpr std::string_view Name = "PilgrimSettingsUIGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
