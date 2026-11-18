#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomKeyMatchCommandsRuntime
{
    struct CustomKeyMatchCommand_Base
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
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

    struct CustomKeyMatchCommand_PlayerGodMode
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_PlayerGodMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t bGodMode = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bGodMode", 0xE0, "BoolProperty"},
        }};
    };

    struct CustomKeyMatchCommand_PlayerKick
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_PlayerKick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
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

    struct CustomKeyMatchCommand_PlayerSetShield
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_PlayerSetShield";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Shield = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Shield", 0xE0, "IntProperty"},
        }};
    };

    struct CustomKeyMatchCommand_SetHealth
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_SetHealth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Health = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Health", 0xE0, "IntProperty"},
        }};
    };

    struct CustomKeyMatchCommand_StormPause
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_StormPause";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t bPaused = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPaused", 0xE0, "BoolProperty"},
        }};
    };

    struct CustomKeyMatchCommand_StormRadius
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_StormRadius";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t StormRadiusInMeters = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StormRadiusInMeters", 0xE0, "IntProperty"},
        }};
    };

    struct CustomKeyMatchCommand_StormSpeed
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_StormSpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t StormSpeed = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StormSpeed", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomKeyMatchCommand_StormWaitTime
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_StormWaitTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t StormWaitTime = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StormWaitTime", 0xE0, "IntProperty"},
        }};
    };

    struct CustomKeyMatchCommand_TimeOfDay
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_TimeOfDay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeOfDay = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeOfDay", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomKeyMatchCommand_TimeOfDaySpeed
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommand_TimeOfDaySpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomKeyMatchCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeOfDaySpeed = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeOfDaySpeed", 0xE0, "FloatProperty"},
        }};
    };

    struct FortComponent_CustomKeyMatch
    {
        static constexpr std::string_view Name = "FortComponent_CustomKeyMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

}
