#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteCoreDebugCommands
{
    struct CustomDebugCommandNotifyExperienceSettingsOverride
    {
        static constexpr std::string_view Name = "CustomDebugCommandNotifyExperienceSettingsOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomDebugCommand_ActorSpawnerBase
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ActorSpawnerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugActorClass = 0xE0;
            static constexpr std::uintptr_t SpawnLocation = 0xE8;
            static constexpr std::uintptr_t DebugActorInstanceWeak = 0xEC;
            static constexpr std::uintptr_t TextDebugActorRemovedResult = 0xF8;
            static constexpr std::uintptr_t TextDebugActorSpawned = 0x108;
            static constexpr std::uintptr_t TextDebugActorFailedSpawn = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DebugActorClass", 0xE0, "ClassProperty"},
            {"SpawnLocation", 0xE8, "EnumProperty"},
            {"DebugActorInstanceWeak", 0xEC, "WeakObjectProperty"},
            {"TextDebugActorRemovedResult", 0xF8, "TextProperty"},
            {"TextDebugActorSpawned", 0x108, "TextProperty"},
            {"TextDebugActorFailedSpawn", 0x118, "TextProperty"},
        }};
    };

    struct CustomDebugCommand_AddPlayerScore
    {
        static constexpr std::string_view Name = "CustomDebugCommand_AddPlayerScore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoreAmount = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScoreAmount", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_ChangeClass
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ChangeClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassIndex = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassIndex", 0xE0, "ByteProperty"},
        }};
    };

    struct CustomDebugCommand_ChangeTeam
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ChangeTeam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamIndex = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TeamIndex", 0xE0, "ByteProperty"},
        }};
    };

    struct CustomDebugCommand_ChangeViewMode
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ChangeViewMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedMinigame = 0xE0;
            static constexpr std::uintptr_t ViewModeIndex = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedMinigame", 0xE0, "ObjectProperty"},
            {"ViewModeIndex", 0xE8, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_ChangeWorldSpeed
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ChangeWorldSpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeDilation = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeDilation", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_ClearPickups
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ClearPickups";
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

    struct CustomDebugCommand_DespawnTestPlayers
    {
        static constexpr std::string_view Name = "CustomDebugCommand_DespawnTestPlayers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTestPlayers = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumTestPlayers", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_EliminateAI
    {
        static constexpr std::string_view Name = "CustomDebugCommand_EliminateAI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t EliminationRange = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EliminationRange", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_EndGame
    {
        static constexpr std::string_view Name = "CustomDebugCommand_EndGame";
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

    struct CustomDebugCommand_EndRound
    {
        static constexpr std::string_view Name = "CustomDebugCommand_EndRound";
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

    struct CustomDebugCommand_ExperienceSettingOverride
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetScalableFloat = 0xE0;
            static constexpr std::uintptr_t CachedMinigame = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetScalableFloat", 0xE0, "StructProperty"},
            {"CachedMinigame", 0x110, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_Bool
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_Bool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t bScalableFloatOverrideValue = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bScalableFloatOverrideValue", 0x118, "BoolProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_DynamicBool
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_DynamicBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride_Bool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetClassFunctionName = 0x128;
            static constexpr std::uintptr_t ScalableFloatTargetClass = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetClassFunctionName", 0x128, "NameProperty"},
            {"ScalableFloatTargetClass", 0x130, "ClassProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_DynamicFloat
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_DynamicFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride_Float";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetClassFunctionName = 0x128;
            static constexpr std::uintptr_t ScalableFloatTargetClass = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetClassFunctionName", 0x128, "NameProperty"},
            {"ScalableFloatTargetClass", 0x130, "ClassProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_DynamicInt
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_DynamicInt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride_Int";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetClassFunctionName = 0x128;
            static constexpr std::uintptr_t ScalableFloatTargetClass = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetClassFunctionName", 0x128, "NameProperty"},
            {"ScalableFloatTargetClass", 0x130, "ClassProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_DynamicToggle
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_DynamicToggle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride_Toggle";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetClassFunctionName = 0x128;
            static constexpr std::uintptr_t ScalableFloatTargetClass = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetClassFunctionName", 0x128, "NameProperty"},
            {"ScalableFloatTargetClass", 0x130, "ClassProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_Float
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_Float";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalableFloatOverrideValue = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScalableFloatOverrideValue", 0x118, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_Int
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_Int";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalableFloatOverrideValue = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScalableFloatOverrideValue", 0x118, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_ExperienceSettingOverride_Toggle
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ExperienceSettingOverride_Toggle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_ExperienceSettingOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialCommandState = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitialCommandState", 0x118, "EnumProperty"},
        }};
    };

    struct CustomDebugCommand_Flight
    {
        static constexpr std::string_view Name = "CustomDebugCommand_Flight";
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

    struct CustomDebugCommand_FlightPhasing
    {
        static constexpr std::string_view Name = "CustomDebugCommand_FlightPhasing";
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

    struct CustomDebugCommand_FlightSpeed
    {
        static constexpr std::string_view Name = "CustomDebugCommand_FlightSpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t FlightSpeedIndex = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlightSpeedIndex", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_FreeCamera
    {
        static constexpr std::string_view Name = "CustomDebugCommand_FreeCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t FreeCameraPawnClass = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FreeCameraPawnClass", 0xE0, "ClassProperty"},
        }};
    };

    struct CustomDebugCommand_GiveGold
    {
        static constexpr std::string_view Name = "CustomDebugCommand_GiveGold";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t GoldAmount = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GoldAmount", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_PauseRound
    {
        static constexpr std::string_view Name = "CustomDebugCommand_PauseRound";
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

    struct CustomDebugCommand_SetHealth
    {
        static constexpr std::string_view Name = "CustomDebugCommand_SetHealth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthPercentage = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HealthPercentage", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_SetShield
    {
        static constexpr std::string_view Name = "CustomDebugCommand_SetShield";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ShieldPercentage = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShieldPercentage", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_SpawnTestPlayers
    {
        static constexpr std::string_view Name = "CustomDebugCommand_SpawnTestPlayers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTestPlayers = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumTestPlayers", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_SubtractPlayerScore
    {
        static constexpr std::string_view Name = "CustomDebugCommand_SubtractPlayerScore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoreAmount = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScoreAmount", 0xE0, "IntProperty"},
        }};
    };

    struct CustomDebugCommand_Teleport
    {
        static constexpr std::string_view Name = "CustomDebugCommand_Teleport";
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

    struct CustomDebugCommand_TimeOfDay
    {
        static constexpr std::string_view Name = "CustomDebugCommand_TimeOfDay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeOfDay = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeOfDay", 0xE0, "FloatProperty"},
        }};
    };

    struct CustomDebugCommand_ToggleFocusDebugger
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ToggleFocusDebugger";
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

    struct CustomDebugCommand_ToggleHUD
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ToggleHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomDebugCommand_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedMinigame = 0xE0;
            static constexpr std::uintptr_t CachedDebugCommandsControllerComponent = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedMinigame", 0xE0, "ObjectProperty"},
            {"CachedDebugCommandsControllerComponent", 0xE8, "ObjectProperty"},
        }};
    };

    struct CustomDebugCommand_ToggleInvulnerable
    {
        static constexpr std::string_view Name = "CustomDebugCommand_ToggleInvulnerable";
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

    struct FortProximityChatTestActor
    {
        static constexpr std::string_view Name = "FortProximityChatTestActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct FreeCameraPawn
    {
        static constexpr std::string_view Name = "FreeCameraPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpectatorPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraComponent = 0x320;
            static constexpr std::uintptr_t FreeCameraIMC = 0x328;
            static constexpr std::uintptr_t IA_MoveForward = 0x330;
            static constexpr std::uintptr_t IA_MoveRight = 0x338;
            static constexpr std::uintptr_t IA_MoveUp = 0x340;
            static constexpr std::uintptr_t IA_Look = 0x348;
            static constexpr std::uintptr_t IA_LookRate = 0x350;
            static constexpr std::uintptr_t MouseSensitivity = 0x358;
            static constexpr std::uintptr_t GamepadTurnRate = 0x35C;
            static constexpr std::uintptr_t GamepadLookRate = 0x360;
            static constexpr std::uintptr_t TouchSensitivity = 0x364;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CameraComponent", 0x320, "ObjectProperty"},
            {"FreeCameraIMC", 0x328, "ObjectProperty"},
            {"IA_MoveForward", 0x330, "ObjectProperty"},
            {"IA_MoveRight", 0x338, "ObjectProperty"},
            {"IA_MoveUp", 0x340, "ObjectProperty"},
            {"IA_Look", 0x348, "ObjectProperty"},
            {"IA_LookRate", 0x350, "ObjectProperty"},
            {"MouseSensitivity", 0x358, "FloatProperty"},
            {"GamepadTurnRate", 0x35C, "FloatProperty"},
            {"GamepadLookRate", 0x360, "FloatProperty"},
            {"TouchSensitivity", 0x364, "FloatProperty"},
        }};
    };

}
