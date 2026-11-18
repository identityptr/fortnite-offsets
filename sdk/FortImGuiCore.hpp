#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortImGuiCore
{
    struct DebuggableObject
    {
        static constexpr std::string_view Name = "DebuggableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortImGuiCoreCheatManager
    {
        static constexpr std::string_view Name = "FortImGuiCoreCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "EnableImGuiMenuBar",
            "EnableImGuiMenuClass",
            "ToggleImGuiMenu",
            "ToggleImGuiMenuBar",
        }};
    };

    struct FortImGuiCoreCheatSubsystem
    {
        static constexpr std::string_view Name = "FortImGuiCoreCheatSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortImGuiCoreMenuBar
    {
        static constexpr std::string_view Name = "FortImGuiCoreMenuBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivateLocalPlayerController = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrivateLocalPlayerController", 0x298, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ServerClose",
            "ServerEnableDebugMenu",
        }};
    };

    struct FortImguiCoreCheatInputBindingSet
    {
        static constexpr std::string_view Name = "FortImguiCoreCheatInputBindingSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredInputs = 0x0;
            static constexpr std::uintptr_t SpecificImguiMenu = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequiredInputs", 0x0, "ArrayProperty"},
            {"SpecificImguiMenu", 0x10, "StrProperty"},
        }};
    };

    struct ImGuiDebugMenuBase
    {
        static constexpr std::string_view Name = "ImGuiDebugMenuBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivateLocalPlayerController = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrivateLocalPlayerController", 0x298, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ToggleInputLock",
        }};
    };

    struct ImGuiReplicatedDebugMenuBase
    {
        static constexpr std::string_view Name = "ImGuiReplicatedDebugMenuBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivateLocalPlayerController = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrivateLocalPlayerController", 0x298, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ServerClose",
        }};
    };

    struct ObjectDebuggerCheatManagerExtension
    {
        static constexpr std::string_view Name = "ObjectDebuggerCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ObjectDebugger",
        }};
    };

    struct ObjectDebuggerMenu
    {
        static constexpr std::string_view Name = "ObjectDebuggerMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrivateLocalPlayerController = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrivateLocalPlayerController", 0x298, "ObjectProperty"},
        }};
    };

}
