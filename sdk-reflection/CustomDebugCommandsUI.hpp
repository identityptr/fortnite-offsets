#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomDebugCommandsUI
{
    struct CustomDebugCommandFavoriteWidget
    {
        static constexpr std::string_view Name = "CustomDebugCommandFavoriteWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x368;
            static constexpr std::uintptr_t Button_Favorite = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CommandName", 0x368, "StrProperty"},
            {"Button_Favorite", 0x378, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommandKeybindListEntry
    {
        static constexpr std::string_view Name = "CustomDebugCommandKeybindListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyBindWidget = 0x338;
            static constexpr std::uintptr_t Text_CommandName = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"KeyBindWidget", 0x338, "ObjectProperty"},
            {"Text_CommandName", 0x340, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommandKeybindListItem
    {
        static constexpr std::string_view Name = "CustomDebugCommandKeybindListItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
        }};
    };

    struct CustomDebugCommandKeybindWidget
    {
        static constexpr std::string_view Name = "CustomDebugCommandKeybindWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PressAnyKeyPanelClass = 0x360;
            static constexpr std::uintptr_t CommandName = 0x378;
            static constexpr std::uintptr_t KeyPreviewScale = 0x388;
            static constexpr std::uintptr_t Button_BindKey = 0x398;
            static constexpr std::uintptr_t Image_KeyPreview = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PressAnyKeyPanelClass", 0x360, "ClassProperty"},
            {"CommandName", 0x378, "StrProperty"},
            {"KeyPreviewScale", 0x388, "StructProperty"},
            {"Button_BindKey", 0x398, "ObjectProperty"},
            {"Image_KeyPreview", 0x3A0, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommandsControlsWidget
    {
        static constexpr std::string_view Name = "CustomDebugCommandsControlsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlsList = 0x3B8;
            static constexpr std::uintptr_t CachedDebugCommandComponent = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControlsList", 0x3B8, "ObjectProperty"},
            {"CachedDebugCommandComponent", 0x3C0, "WeakObjectProperty"},
        }};
    };

    struct CustomDebugCommandsPanel
    {
        static constexpr std::string_view Name = "CustomDebugCommandsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsPanel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTextFilterCleared = 0x6B8;
            static constexpr std::uintptr_t ResetInputActionRow = 0x6C8;
            static constexpr std::uintptr_t RunCommandInputActionRow = 0x6D8;
            static constexpr std::uintptr_t ClearKeybindsInputActionRow = 0x6E8;
            static constexpr std::uintptr_t EnableDebugInputActionRow = 0x6F8;
            static constexpr std::uintptr_t DisableDebugInputActionRow = 0x708;
            static constexpr std::uintptr_t CmdPromptWidget = 0x898;
            static constexpr std::uintptr_t OpenPanelKeybindWidget = 0x8A0;
            static constexpr std::uintptr_t Overlay_Details = 0x8A8;
            static constexpr std::uintptr_t Overlay_EmptyList = 0x8B0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnTextFilterCleared", 0x6B8, "MulticastInlineDelegateProperty"},
            {"ResetInputActionRow", 0x6C8, "StructProperty"},
            {"RunCommandInputActionRow", 0x6D8, "StructProperty"},
            {"ClearKeybindsInputActionRow", 0x6E8, "StructProperty"},
            {"EnableDebugInputActionRow", 0x6F8, "StructProperty"},
            {"DisableDebugInputActionRow", 0x708, "StructProperty"},
            {"CmdPromptWidget", 0x898, "ObjectProperty"},
            {"OpenPanelKeybindWidget", 0x8A0, "ObjectProperty"},
            {"Overlay_Details", 0x8A8, "ObjectProperty"},
            {"Overlay_EmptyList", 0x8B0, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommandsPromptWidget
    {
        static constexpr std::string_view Name = "CustomDebugCommandsPromptWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTextChanged = 0x4A0;
            static constexpr std::uintptr_t OnKeyboardFocusLost = 0x4B0;
            static constexpr std::uintptr_t FocusSearchInputActionRow = 0x4C0;
            static constexpr std::uintptr_t ClearSearchInputActionRow = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnTextChanged", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnKeyboardFocusLost", 0x4B0, "MulticastInlineDelegateProperty"},
            {"FocusSearchInputActionRow", 0x4C0, "StructProperty"},
            {"ClearSearchInputActionRow", 0x4D0, "StructProperty"},
        }};
    };

    struct CustomDebugCommandsRegistry
    {
        static constexpr std::string_view Name = "CustomDebugCommandsRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingRegistry";
        struct Offsets
        {
            static constexpr std::uintptr_t RootSettings = 0xA0;
            static constexpr std::uintptr_t RegisteredSettings = 0xB0;
            static constexpr std::uintptr_t OwningLocalPlayer = 0xC0;
            static constexpr std::uintptr_t EditConditionCache = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootSettings", 0xA0, "ArrayProperty"},
            {"RegisteredSettings", 0xB0, "MapProperty"},
            {"OwningLocalPlayer", 0xC0, "WeakObjectProperty"},
            {"EditConditionCache", 0xC8, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommandsScreen
    {
        static constexpr std::string_view Name = "CustomDebugCommandsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SettingsScreen";
        struct Offsets
        {
            static constexpr std::uintptr_t HudHidingTags = 0x5B8;
            static constexpr std::uintptr_t CachedRootSettings = 0x5D8;
            static constexpr std::uintptr_t Button_CloseTouch = 0x5E8;
            static constexpr std::uintptr_t BackActionRowHandle = 0x5F0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HudHidingTags", 0x5B8, "StructProperty"},
            {"CachedRootSettings", 0x5D8, "ArrayProperty"},
            {"Button_CloseTouch", 0x5E8, "ObjectProperty"},
            {"BackActionRowHandle", 0x5F0, "StructProperty"},
        }};
    };

    struct CustomDebugCommandsUIDirector
    {
        static constexpr std::string_view Name = "CustomDebugCommandsUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugCommandsRegistryName = 0x2F0;
            static constexpr std::uintptr_t CustomDebugCommandControlsScene = 0x300;
            static constexpr std::uintptr_t DebugCommandUIScenes = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DebugCommandsRegistryName", 0x2F0, "StrProperty"},
            {"CustomDebugCommandControlsScene", 0x300, "ObjectProperty"},
            {"DebugCommandUIScenes", 0x308, "MapProperty"},
        }};
    };

    struct FortDebugCommandSettingsListEntrySetting_Action
    {
        static constexpr std::string_view Name = "FortDebugCommandSettingsListEntrySetting_Action";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsListEntrySetting_Action";
        struct Offsets
        {
            static constexpr std::uintptr_t bFocusHighlightActive = 0x38C;
            static constexpr std::uintptr_t CommandBindingWidget = 0x390;
            static constexpr std::uintptr_t FavoriteCommandWidget = 0x398;
            static constexpr std::uintptr_t RunCommandInputHandle = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bFocusHighlightActive", 0x38C, "BoolProperty"},
            {"CommandBindingWidget", 0x390, "ObjectProperty"},
            {"FavoriteCommandWidget", 0x398, "ObjectProperty"},
            {"RunCommandInputHandle", 0x3A0, "StructProperty"},
        }};
    };

    struct FortDebugCommandSettingsListEntrySetting_Discrete
    {
        static constexpr std::string_view Name = "FortDebugCommandSettingsListEntrySetting_Discrete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsListEntrySetting_Discrete";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_EditEntry = 0x3A8;
            static constexpr std::uintptr_t Button_Commit = 0x3B0;
            static constexpr std::uintptr_t CommandBindingWidget = 0x3B8;
            static constexpr std::uintptr_t FavoriteCommandWidget = 0x3C0;
            static constexpr std::uintptr_t bIsInEditMode = 0x3C8;
            static constexpr std::uintptr_t bFocusHighlightActive = 0x3CD;
            static constexpr std::uintptr_t ModifyInputHandle = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Button_EditEntry", 0x3A8, "ObjectProperty"},
            {"Button_Commit", 0x3B0, "ObjectProperty"},
            {"CommandBindingWidget", 0x3B8, "ObjectProperty"},
            {"FavoriteCommandWidget", 0x3C0, "ObjectProperty"},
            {"bIsInEditMode", 0x3C8, "BoolProperty"},
            {"bFocusHighlightActive", 0x3CD, "BoolProperty"},
            {"ModifyInputHandle", 0x3D0, "StructProperty"},
        }};
    };

    struct FortDebugCommandSettingsListEntrySetting_Scalar
    {
        static constexpr std::string_view Name = "FortDebugCommandSettingsListEntrySetting_Scalar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsListEntrySetting_Scalar";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_EditEntry = 0x388;
            static constexpr std::uintptr_t CommandBindingWidget = 0x390;
            static constexpr std::uintptr_t FavoriteCommandWidget = 0x398;
            static constexpr std::uintptr_t Text_NumericInput = 0x3A0;
            static constexpr std::uintptr_t bIsInEditMode = 0x3A8;
            static constexpr std::uintptr_t ModifyInputHandle = 0x3B0;
            static constexpr std::uintptr_t bFocusHighlightActive = 0x3C6;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Button_EditEntry", 0x388, "ObjectProperty"},
            {"CommandBindingWidget", 0x390, "ObjectProperty"},
            {"FavoriteCommandWidget", 0x398, "ObjectProperty"},
            {"Text_NumericInput", 0x3A0, "ObjectProperty"},
            {"bIsInEditMode", 0x3A8, "BoolProperty"},
            {"ModifyInputHandle", 0x3B0, "StructProperty"},
            {"bFocusHighlightActive", 0x3C6, "BoolProperty"},
        }};
    };

    struct FortSettingDataSourceModel_CustomDebugCommand
    {
        static constexpr std::string_view Name = "FortSettingDataSourceModel_CustomDebugCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingDataSourceModel";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugCommandName = 0x28;
            static constexpr std::uintptr_t DebugCommandFunctionName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DebugCommandName", 0x28, "StrProperty"},
            {"DebugCommandFunctionName", 0x38, "StrProperty"},
        }};
    };

    struct FortSettingDataSourceModel_DebugCommand
    {
        static constexpr std::string_view Name = "FortSettingDataSourceModel_DebugCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingDataSourceModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleCommandName = 0x28;
            static constexpr std::uintptr_t bIsServerConsoleCommand = 0x38;
            static constexpr std::uintptr_t CommandArgs = 0x40;
            static constexpr std::uintptr_t bInjectVariableParameter = 0x50;
            static constexpr std::uintptr_t VariableParameterArgumentPosition = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ConsoleCommandName", 0x28, "StrProperty"},
            {"bIsServerConsoleCommand", 0x38, "BoolProperty"},
            {"CommandArgs", 0x40, "ArrayProperty"},
            {"bInjectVariableParameter", 0x50, "BoolProperty"},
            {"VariableParameterArgumentPosition", 0x54, "IntProperty"},
        }};
    };

    struct FortSettingEditCondition_DebugCommandPermissions
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_DebugCommandPermissions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SettingAnalyticsAggregator_CustomDebugCommands
    {
        static constexpr std::string_view Name = "SettingAnalyticsAggregator_CustomDebugCommands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SettingAnalyticsAggregatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningOrchestrator = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningOrchestrator", 0x58, "WeakObjectProperty"},
        }};
    };

    struct SettingRegistryPermissionRequirement_DebugCommands
    {
        static constexpr std::string_view Name = "SettingRegistryPermissionRequirement_DebugCommands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SettingRegistryPermissionRequirement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
