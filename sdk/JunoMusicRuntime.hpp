#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoMusicRuntime
{
    struct GameFeatureAction_RegisterJunoMusicDataAggregatorSettings
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterJunoMusicDataAggregatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoMusicDataAggregatorSettings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoMusicDataAggregatorSettings", 0x28, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_RegisterJunoMusicElementTable
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterJunoMusicElementTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoMusicElementDataTables = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoMusicElementDataTables", 0x28, "MapProperty"},
        }};
    };

    struct GameFeatureAction_RegisterJunoMusicPlayspaceProbes
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterJunoMusicPlayspaceProbes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoMusicProbesDataAssets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoMusicProbesDataAssets", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoActiveMusicCue
    {
        static constexpr std::string_view Name = "JunoActiveMusicCue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x58;
            static constexpr std::uintptr_t LoadedMusic = 0x60;
            static constexpr std::uintptr_t MetasoundGeneratorHandle = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AudioComponent", 0x58, "ObjectProperty"},
            {"LoadedMusic", 0x60, "ObjectProperty"},
            {"MetasoundGeneratorHandle", 0x78, "ObjectProperty"},
        }};
    };

    struct JunoClientCustomMusicPlayerSubsystem
    {
        static constexpr std::string_view Name = "JunoClientCustomMusicPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCustomMusicPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveCustomMusicPlayer = 0x48;
            static constexpr std::uintptr_t CustomMusicPlayers = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveCustomMusicPlayer", 0x48, "ObjectProperty"},
            {"CustomMusicPlayers", 0x50, "MapProperty"},
        }};
    };

    struct JunoCustomMusicPlayerComponent
    {
        static constexpr std::string_view Name = "JunoCustomMusicPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlaybackStartedEvent = 0x248;
            static constexpr std::uintptr_t OnPlaybackStoppedEvent = 0x258;
            static constexpr std::uintptr_t AttenuationSettings = 0x268;
            static constexpr std::uintptr_t MusicEventTag = 0x270;
            static constexpr std::uintptr_t MusicEventBehaviorTags = 0x278;
            static constexpr std::uintptr_t bLoopSetlist = 0x298;
            static constexpr std::uintptr_t RepData = 0x2A0;
            static constexpr std::uintptr_t AudioComponent = 0x2E8;
            static constexpr std::uintptr_t Setlist = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPlaybackStartedEvent", 0x248, "MulticastInlineDelegateProperty"},
            {"OnPlaybackStoppedEvent", 0x258, "MulticastInlineDelegateProperty"},
            {"AttenuationSettings", 0x268, "ObjectProperty"},
            {"MusicEventTag", 0x270, "StructProperty"},
            {"MusicEventBehaviorTags", 0x278, "StructProperty"},
            {"bLoopSetlist", 0x298, "BoolProperty"},
            {"RepData", 0x2A0, "StructProperty"},
            {"AudioComponent", 0x2E8, "ObjectProperty"},
            {"Setlist", 0x2F0, "ArrayProperty"},
        }};
    };

    struct JunoCustomMusicPlayerSubsystem
    {
        static constexpr std::string_view Name = "JunoCustomMusicPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMusicControllerSubsystem
    {
        static constexpr std::string_view Name = "JunoMusicControllerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicCueController = 0x60;
            static constexpr std::uintptr_t JunoMusicDataAggregator = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MusicCueController", 0x60, "ObjectProperty"},
            {"JunoMusicDataAggregator", 0x68, "ObjectProperty"},
        }};
    };

    struct JunoMusicDataAggregator
    {
        static constexpr std::string_view Name = "JunoMusicDataAggregator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DataCollectors = 0x48;
            static constexpr std::uintptr_t AggregatedData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataCollectors", 0x48, "ArrayProperty"},
            {"AggregatedData", 0x58, "ObjectProperty"},
        }};
    };

    struct JunoMusicDataAggregatorConfig
    {
        static constexpr std::string_view Name = "JunoMusicDataAggregatorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DataAggregatorSettings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataAggregatorSettings", 0x28, "StructProperty"},
        }};
    };

    struct JunoMusicDataCollector
    {
        static constexpr std::string_view Name = "JunoMusicDataCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMusicDataCollector_Combat
    {
        static constexpr std::string_view Name = "JunoMusicDataCollector_Combat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMusicDataCollector";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredDataTrackerComponents = 0x28;
            static constexpr std::uintptr_t NumAggressiveCreaturesTag = 0x38;
            static constexpr std::uintptr_t NumAggressiveMinifigsTag = 0x3C;
            static constexpr std::uintptr_t NumAggressiveStormSickMinifigsTag = 0x40;
            static constexpr std::uintptr_t NumAggressiveStormSickCreaturesTag = 0x44;
            static constexpr std::uintptr_t IsInCombatParameterName = 0x48;
            static constexpr std::uintptr_t CombatThreatLevelParameterName = 0x4C;
            static constexpr std::uintptr_t MinifigWeightParameterName = 0x50;
            static constexpr std::uintptr_t CreatureWeightParameterName = 0x54;
            static constexpr std::uintptr_t StormSickWeightParameterName = 0x58;
            static constexpr std::uintptr_t bDebug = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"RegisteredDataTrackerComponents", 0x28, "ArrayProperty"},
            {"NumAggressiveCreaturesTag", 0x38, "StructProperty"},
            {"NumAggressiveMinifigsTag", 0x3C, "StructProperty"},
            {"NumAggressiveStormSickMinifigsTag", 0x40, "StructProperty"},
            {"NumAggressiveStormSickCreaturesTag", 0x44, "StructProperty"},
            {"IsInCombatParameterName", 0x48, "NameProperty"},
            {"CombatThreatLevelParameterName", 0x4C, "NameProperty"},
            {"MinifigWeightParameterName", 0x50, "NameProperty"},
            {"CreatureWeightParameterName", 0x54, "NameProperty"},
            {"StormSickWeightParameterName", 0x58, "NameProperty"},
            {"bDebug", 0x60, "BoolProperty"},
        }};
    };

    struct JunoMusicElementController
    {
        static constexpr std::string_view Name = "JunoMusicElementController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementTables = 0x38;
            static constexpr std::uintptr_t ActiveMusicElements = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ElementTables", 0x38, "MapProperty"},
            {"ActiveMusicElements", 0x48, "ArrayProperty"},
        }};
    };

    struct JunoMusicGameStateComponent
    {
        static constexpr std::string_view Name = "JunoMusicGameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicStates = 0xC0;
            static constexpr std::uintptr_t ClientMusicStates = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MusicStates", 0xC0, "ArrayProperty"},
            {"ClientMusicStates", 0xD0, "ArrayProperty"},
        }};
    };

    struct JunoMusicPlayspaceProbe
    {
        static constexpr std::string_view Name = "JunoMusicPlayspaceProbe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMusicPlayspaceProbeDataAsset
    {
        static constexpr std::string_view Name = "JunoMusicPlayspaceProbeDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoMusicProbes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoMusicProbes", 0x28, "StructProperty"},
        }};
    };

    struct JunoMusicPlayspaceProbeSubsystem
    {
        static constexpr std::string_view Name = "JunoMusicPlayspaceProbeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DataProbes = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataProbes", 0x60, "ArrayProperty"},
        }};
    };

    struct JunoMusicPlayspaceProbe_Combat
    {
        static constexpr std::string_view Name = "JunoMusicPlayspaceProbe_Combat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMusicPlayspaceProbe";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredDataTrackerComponents = 0x28;
            static constexpr std::uintptr_t MusicCombatStateMappings = 0x38;
            static constexpr std::uintptr_t ConflictingStateResolution = 0x48;
            static constexpr std::uintptr_t CachedMusicController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RegisteredDataTrackerComponents", 0x28, "ArrayProperty"},
            {"MusicCombatStateMappings", 0x38, "ArrayProperty"},
            {"ConflictingStateResolution", 0x48, "EnumProperty"},
            {"CachedMusicController", 0x60, "WeakObjectProperty"},
        }};
    };

    struct JunoMusicPlayspaceProbe_Environment
    {
        static constexpr std::string_view Name = "JunoMusicPlayspaceProbe_Environment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMusicPlayspaceProbe";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoServerCustomMusicPlayerSubsystem
    {
        static constexpr std::string_view Name = "JunoServerCustomMusicPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCustomMusicPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomMusicPlayers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomMusicPlayers", 0x48, "MapProperty"},
        }};
    };

}
