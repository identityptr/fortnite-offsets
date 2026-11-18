#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InputPromptManagerRuntime
{
    struct AbstractableInputAction
    {
        static constexpr std::string_view Name = "AbstractableInputAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputAction";
        struct Offsets
        {
            static constexpr std::uintptr_t InputArchetype = 0x70;
            static constexpr std::uintptr_t UISortOrder = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputArchetype", 0x70, "SoftObjectProperty"},
            {"UISortOrder", 0x90, "IntProperty"},
        }};
    };

    struct ControllerComponent_InputPromptManager
    {
        static constexpr std::string_view Name = "ControllerComponent_InputPromptManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputComponent = 0xC0;
            static constexpr std::uintptr_t ActiveList = 0xF0;
            static constexpr std::uintptr_t KnownList = 0x100;
            static constexpr std::uintptr_t EnhancedInputActionToAliasMapping = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputComponent", 0xC0, "ObjectProperty"},
            {"ActiveList", 0xF0, "ArrayProperty"},
            {"KnownList", 0x100, "ArrayProperty"},
            {"EnhancedInputActionToAliasMapping", 0x110, "MapProperty"},
        }};
    };

    struct ImGuiDebugMenu_InputPromptManager
    {
        static constexpr std::string_view Name = "ImGuiDebugMenu_InputPromptManager";
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

    struct InputAlias
    {
        static constexpr std::string_view Name = "InputAlias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t LegacyBindingData = 0x28;
            static constexpr std::uintptr_t ContextObject = 0x50;
            static constexpr std::uintptr_t Inhibitors = 0x68;
            static constexpr std::uintptr_t EnhancedInputAction = 0x78;
            static constexpr std::uintptr_t InputArchetype = 0x80;
            static constexpr std::uintptr_t InputModeQuery = 0xA0;
            static constexpr std::uintptr_t Priority = 0xE8;
            static constexpr std::uintptr_t UISortOrder = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LegacyBindingData", 0x28, "OptionalProperty"},
            {"ContextObject", 0x50, "ObjectProperty"},
            {"Inhibitors", 0x68, "ArrayProperty"},
            {"EnhancedInputAction", 0x78, "ObjectProperty"},
            {"InputArchetype", 0x80, "SoftObjectProperty"},
            {"InputModeQuery", 0xA0, "StructProperty"},
            {"Priority", 0xE8, "IntProperty"},
            {"UISortOrder", 0xEC, "IntProperty"},
        }};
    };

    struct InputArchetype
    {
        static constexpr std::string_view Name = "InputArchetype";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputPromptManagerCheats
    {
        static constexpr std::string_view Name = "InputPromptManagerCheats";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
