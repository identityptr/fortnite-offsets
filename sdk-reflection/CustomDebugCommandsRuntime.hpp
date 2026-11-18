#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomDebugCommandsRuntime
{
    struct CustomDebugCommandGameUserSettings
    {
        static constexpr std::string_view Name = "CustomDebugCommandGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDebugInputActive = 0x58;
            static constexpr std::uintptr_t PersistedValues = 0x60;
            static constexpr std::uintptr_t DebugCommandKeyMapping = 0x70;
            static constexpr std::uintptr_t DebugCommandGamepadKeyMapping = 0x80;
            static constexpr std::uintptr_t FavoritedDebugCommands = 0x90;
            static constexpr std::uintptr_t RecentlyUsedCommands = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsDebugInputActive", 0x58, "BoolProperty"},
            {"PersistedValues", 0x60, "MapProperty"},
            {"DebugCommandKeyMapping", 0x70, "MapProperty"},
            {"DebugCommandGamepadKeyMapping", 0x80, "MapProperty"},
            {"FavoritedDebugCommands", 0x90, "ArrayProperty"},
            {"RecentlyUsedCommands", 0xA0, "ArrayProperty"},
        }};
    };

    struct CustomDebugCommand_Base
    {
        static constexpr std::string_view Name = "CustomDebugCommand_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CommandName = 0x28;
            static constexpr std::uintptr_t CommandDisplayName = 0x38;
            static constexpr std::uintptr_t bIsInternalOnly = 0x48;
            static constexpr std::uintptr_t bRequiresActiveMinigame = 0x49;
            static constexpr std::uintptr_t UserInterface = 0x50;
            static constexpr std::uintptr_t WeakPlayerController = 0x68;
            static constexpr std::uintptr_t TargetPlayerId = 0x70;
            static constexpr std::uintptr_t CommandState = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CommandName", 0x28, "StrProperty"},
            {"CommandDisplayName", 0x38, "TextProperty"},
            {"bIsInternalOnly", 0x48, "BoolProperty"},
            {"bRequiresActiveMinigame", 0x49, "BoolProperty"},
            {"UserInterface", 0x50, "StructProperty"},
            {"WeakPlayerController", 0x68, "WeakObjectProperty"},
            {"TargetPlayerId", 0x70, "StrProperty"},
            {"CommandState", 0x90, "EnumProperty"},
        }};
    };

    struct DebugCommandRegistrySubsystem
    {
        static constexpr std::string_view Name = "DebugCommandRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredDebugCommandClasses = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredDebugCommandClasses", 0x78, "MapProperty"},
        }};
    };

    struct FortControllerComponent_CustomDebugCommands
    {
        static constexpr std::string_view Name = "FortControllerComponent_CustomDebugCommands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCustomDebugCommandResultDelegate = 0xC0;
            static constexpr std::uintptr_t InstancedCommandMap = 0x1E8;
            static constexpr std::uintptr_t DebugCommandActionMapping = 0x1F8;
            static constexpr std::uintptr_t bIsUsingGamepad = 0x208;
            static constexpr std::uintptr_t IMC_DebugCommandInput = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnCustomDebugCommandResultDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"InstancedCommandMap", 0x1E8, "MapProperty"},
            {"DebugCommandActionMapping", 0x1F8, "MapProperty"},
            {"bIsUsingGamepad", 0x208, "BoolProperty"},
            {"IMC_DebugCommandInput", 0x210, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_AddDebugCommands
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddDebugCommands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugCommands = 0x28;
            static constexpr std::uintptr_t CachedDebugCommandRegistry = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DebugCommands", 0x28, "ArrayProperty"},
            {"CachedDebugCommandRegistry", 0x38, "WeakObjectProperty"},
        }};
    };

}
