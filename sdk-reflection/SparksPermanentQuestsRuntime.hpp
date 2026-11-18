#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksPermanentQuestsRuntime
{
    struct BattleStageObjectiveProcessor_BreakStreak
    {
        static constexpr std::string_view Name = "BattleStageObjectiveProcessor_BreakStreak";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BattleStageObjectiveProcessor_RoundComplete
    {
        static constexpr std::string_view Name = "BattleStageObjectiveProcessor_RoundComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BattleStageObjectiveProcessor_RoundStart
    {
        static constexpr std::string_view Name = "BattleStageObjectiveProcessor_RoundStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BattleStageObjectiveProcessor_SurviveRound
    {
        static constexpr std::string_view Name = "BattleStageObjectiveProcessor_SurviveRound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JamVerbProcessor_Jam
    {
        static constexpr std::string_view Name = "JamVerbProcessor_Jam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessorBase
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_AccumulateStars
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_AccumulateStars";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_Note
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_Note";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_OverdriveComplete
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_OverdriveComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_ProVocalPhrase
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_ProVocalPhrase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_ScoreEvent
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_ScoreEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_SetlistComplete
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_SetlistComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_SongCompleted
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_SongCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimObjectiveProcessor_SongStarted
    {
        static constexpr std::string_view Name = "PilgrimObjectiveProcessor_SongStarted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimVerbProcessor_DeployOverdrive
    {
        static constexpr std::string_view Name = "PilgrimVerbProcessor_DeployOverdrive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimObjectiveProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct SparksVerbProcessor_DanceSpotlight
    {
        static constexpr std::string_view Name = "SparksVerbProcessor_DanceSpotlight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

}
