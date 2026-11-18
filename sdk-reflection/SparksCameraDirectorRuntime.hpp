#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCameraDirectorRuntime
{
    struct SparksCameraDebugWidget
    {
        static constexpr std::string_view Name = "SparksCameraDebugWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct SparksCameraDirectorComponent
    {
        static constexpr std::string_view Name = "SparksCameraDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MainConfig = 0xC0;
            static constexpr std::uintptr_t QAConfig = 0xC8;
            static constexpr std::uintptr_t PerfConfig = 0xD0;
            static constexpr std::uintptr_t CustomConfig = 0xD8;
            static constexpr std::uintptr_t MinShotTimeSeconds = 0xE8;
            static constexpr std::uintptr_t Sequences = 0xF0;
            static constexpr std::uintptr_t Config = 0x118;
            static constexpr std::uintptr_t PerformanceMap = 0x128;
            static constexpr std::uintptr_t DebugWidget = 0x130;
            static constexpr std::uintptr_t IntermissionTags = 0x138;
            static constexpr std::uintptr_t SequenceActor = 0x158;
            static constexpr std::uintptr_t SequencePlayer = 0x160;
            static constexpr std::uintptr_t bCamerasAreActive = 0x168;
            static constexpr std::uintptr_t bCamerasAreLocked = 0x169;
            static constexpr std::uintptr_t DataProvider = 0x16C;
            static constexpr std::uintptr_t DebugTargetIndex = 0x174;
            static constexpr std::uintptr_t CurrentSequenceIndex = 0x178;
            static constexpr std::uintptr_t CurrentSequenceEntryIndex = 0x17C;
            static constexpr std::uintptr_t bHasActiveDynamicEvent = 0x180;
            static constexpr std::uintptr_t DynamicEvent = 0x188;
            static constexpr std::uintptr_t CurrentPlayingEntry = 0x200;
            static constexpr std::uintptr_t CurrentlyPlaying = 0x2A8;
            static constexpr std::uintptr_t IntermissionSequence = 0x2B0;
            static constexpr std::uintptr_t CurrentIntermissionSequenceEntryIndex = 0x2D8;
            static constexpr std::uintptr_t LastKnownIntermissionTags = 0x2E0;
            static constexpr std::uintptr_t bForceCameraViewTargetEnabled = 0x300;
            static constexpr std::uintptr_t EvalStartIndex = 0x304;
            static constexpr std::uintptr_t EvalEndIndex = 0x308;
            static constexpr std::uintptr_t IntermissionRetryMaxAttempts = 0x30C;
            static constexpr std::uintptr_t IntermissionRetryWaitTime = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"MainConfig", 0xC0, "ObjectProperty"},
            {"QAConfig", 0xC8, "ObjectProperty"},
            {"PerfConfig", 0xD0, "ObjectProperty"},
            {"CustomConfig", 0xD8, "ArrayProperty"},
            {"MinShotTimeSeconds", 0xE8, "FloatProperty"},
            {"Sequences", 0xF0, "ArrayProperty"},
            {"Config", 0x118, "ObjectProperty"},
            {"PerformanceMap", 0x128, "ObjectProperty"},
            {"DebugWidget", 0x130, "ObjectProperty"},
            {"IntermissionTags", 0x138, "StructProperty"},
            {"SequenceActor", 0x158, "ObjectProperty"},
            {"SequencePlayer", 0x160, "ObjectProperty"},
            {"bCamerasAreActive", 0x168, "BoolProperty"},
            {"bCamerasAreLocked", 0x169, "BoolProperty"},
            {"DataProvider", 0x16C, "WeakObjectProperty"},
            {"DebugTargetIndex", 0x174, "IntProperty"},
            {"CurrentSequenceIndex", 0x178, "IntProperty"},
            {"CurrentSequenceEntryIndex", 0x17C, "IntProperty"},
            {"bHasActiveDynamicEvent", 0x180, "BoolProperty"},
            {"DynamicEvent", 0x188, "StructProperty"},
            {"CurrentPlayingEntry", 0x200, "StructProperty"},
            {"CurrentlyPlaying", 0x2A8, "BoolProperty"},
            {"IntermissionSequence", 0x2B0, "StructProperty"},
            {"CurrentIntermissionSequenceEntryIndex", 0x2D8, "IntProperty"},
            {"LastKnownIntermissionTags", 0x2E0, "StructProperty"},
            {"bForceCameraViewTargetEnabled", 0x300, "BoolProperty"},
            {"EvalStartIndex", 0x304, "IntProperty"},
            {"EvalEndIndex", 0x308, "IntProperty"},
            {"IntermissionRetryMaxAttempts", 0x30C, "IntProperty"},
            {"IntermissionRetryWaitTime", 0x310, "FloatProperty"},
        }};
    };

    struct SparksCameraDirectorConfig
    {
        static constexpr std::string_view Name = "SparksCameraDirectorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxIntermissionShotTimeSeconds = 0x28;
            static constexpr std::uintptr_t MaxGeneratedShotTimeSeconds = 0x2C;
            static constexpr std::uintptr_t MinTimeBetweenSameShotSeconds = 0x30;
            static constexpr std::uintptr_t MaxRetriesToFindShot = 0x34;
            static constexpr std::uintptr_t DefaultSequenceGenerator = 0x38;
            static constexpr std::uintptr_t RuntimeDefaultSequenceGenerator = 0xE0;
            static constexpr std::uintptr_t SequenceGenerators = 0xE8;
            static constexpr std::uintptr_t RuntimeSequenceGenerators = 0xF8;
            static constexpr std::uintptr_t DataProvider = 0x108;
            static constexpr std::uintptr_t DebugWidgetClass = 0x110;
            static constexpr std::uintptr_t ShotsAttemptedThisPass = 0x118;
            static constexpr std::uintptr_t ShotPassCounter = 0x128;
            static constexpr std::uintptr_t ShotTimestamps = 0x130;
            static constexpr std::uintptr_t bInitialized = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"MaxIntermissionShotTimeSeconds", 0x28, "FloatProperty"},
            {"MaxGeneratedShotTimeSeconds", 0x2C, "FloatProperty"},
            {"MinTimeBetweenSameShotSeconds", 0x30, "FloatProperty"},
            {"MaxRetriesToFindShot", 0x34, "FloatProperty"},
            {"DefaultSequenceGenerator", 0x38, "StructProperty"},
            {"RuntimeDefaultSequenceGenerator", 0xE0, "ObjectProperty"},
            {"SequenceGenerators", 0xE8, "ArrayProperty"},
            {"RuntimeSequenceGenerators", 0xF8, "ArrayProperty"},
            {"DataProvider", 0x108, "WeakObjectProperty"},
            {"DebugWidgetClass", 0x110, "ClassProperty"},
            {"ShotsAttemptedThisPass", 0x118, "SetProperty"},
            {"ShotPassCounter", 0x128, "IntProperty"},
            {"ShotTimestamps", 0x130, "MapProperty"},
            {"bInitialized", 0x140, "BoolProperty"},
        }};
    };

    struct SparksCameraDirectorSequenceGenerator
    {
        static constexpr std::string_view Name = "SparksCameraDirectorSequenceGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t SectionData = 0x30;
            static constexpr std::uintptr_t SelectionRule = 0xD8;
            static constexpr std::uintptr_t CameraConfig = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"SectionData", 0x30, "StructProperty"},
            {"SelectionRule", 0xD8, "ObjectProperty"},
            {"CameraConfig", 0xE0, "ObjectProperty"},
        }};
    };

    struct SparksCameraPluginDataProvider
    {
        static constexpr std::string_view Name = "SparksCameraPluginDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StageMarks = 0xC0;
            static constexpr std::uintptr_t PlayerAirtime = 0xD0;
            static constexpr std::uintptr_t StaticShots = 0xE0;
            static constexpr std::uintptr_t bAutomaticallyRegisterStageMarks = 0xF0;
            static constexpr std::uintptr_t RuntimeFilter = 0xF8;
            static constexpr std::uintptr_t bLMPIsActive = 0x158;
            static constexpr std::uintptr_t bUseRuntimeFilter = 0x159;
            static constexpr std::uintptr_t RuntimeLMPFilter = 0x160;
            static constexpr std::uintptr_t RuntimeNoLMPFilter = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StageMarks", 0xC0, "ArrayProperty"},
            {"PlayerAirtime", 0xD0, "MapProperty"},
            {"StaticShots", 0xE0, "ArrayProperty"},
            {"bAutomaticallyRegisterStageMarks", 0xF0, "BoolProperty"},
            {"RuntimeFilter", 0xF8, "StructProperty"},
            {"bLMPIsActive", 0x158, "BoolProperty"},
            {"bUseRuntimeFilter", 0x159, "BoolProperty"},
            {"RuntimeLMPFilter", 0x160, "StructProperty"},
            {"RuntimeNoLMPFilter", 0x1C0, "StructProperty"},
        }};
    };

    struct SparksCameraPoolSelectRuleBase
    {
        static constexpr std::string_view Name = "SparksCameraPoolSelectRuleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Wrapper = 0x30;
            static constexpr std::uintptr_t PoolIndexes = 0xD8;
            static constexpr std::uintptr_t PoolRules = 0xE8;
            static constexpr std::uintptr_t IntroPoolRule = 0xF8;
            static constexpr std::uintptr_t ExitPoolRule = 0x100;
            static constexpr std::uintptr_t Index = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Wrapper", 0x30, "StructProperty"},
            {"PoolIndexes", 0xD8, "ArrayProperty"},
            {"PoolRules", 0xE8, "ArrayProperty"},
            {"IntroPoolRule", 0xF8, "ObjectProperty"},
            {"ExitPoolRule", 0x100, "ObjectProperty"},
            {"Index", 0x108, "IntProperty"},
        }};
    };

    struct SparksCameraShotPool
    {
        static constexpr std::string_view Name = "SparksCameraShotPool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Shots = 0x28;
            static constexpr std::uintptr_t bIgnoreShotTags = 0x38;
            static constexpr std::uintptr_t PoolTags = 0x40;
            static constexpr std::uintptr_t PoolFilter = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Shots", 0x28, "ArrayProperty"},
            {"bIgnoreShotTags", 0x38, "BoolProperty"},
            {"PoolTags", 0x40, "StructProperty"},
            {"PoolFilter", 0x60, "StructProperty"},
        }};
    };

    struct SparksCameraShotSelectRuleBase
    {
        static constexpr std::string_view Name = "SparksCameraShotSelectRuleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Pool = 0x30;
            static constexpr std::uintptr_t ShotIndexes = 0x38;
            static constexpr std::uintptr_t Index = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Pool", 0x30, "ObjectProperty"},
            {"ShotIndexes", 0x38, "ArrayProperty"},
            {"Index", 0x48, "IntProperty"},
        }};
    };

    struct SparksCameraStageMark
    {
        static constexpr std::string_view Name = "SparksCameraStageMark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraTags = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraTags", 0x278, "StructProperty"},
        }};
    };

    struct SparksCamera_BPFL
    {
        static constexpr std::string_view Name = "SparksCamera_BPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksCinematicCamera
    {
        static constexpr std::string_view Name = "SparksCinematicCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCinematicCamera";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectatorPC = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpectatorPC", 0x80, "ObjectProperty"},
        }};
    };

    struct SparksDefaultLevelSequenceInstanceData
    {
        static constexpr std::string_view Name = "SparksDefaultLevelSequenceInstanceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DefaultLevelSequenceInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshToAttachTo = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshToAttachTo", 0xA0, "ObjectProperty"},
        }};
    };

    struct SparksLevelSequenceActor
    {
        static constexpr std::string_view Name = "SparksLevelSequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSequenceActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x290;
            static constexpr std::uintptr_t SequencePlayer = 0x2B8;
            static constexpr std::uintptr_t LevelSequenceAsset = 0x2C0;
            static constexpr std::uintptr_t CameraSettings = 0x2C8;
            static constexpr std::uintptr_t BurnInOptions = 0x2D0;
            static constexpr std::uintptr_t BindingOverrides = 0x2D8;
            static constexpr std::uintptr_t bAutoPlay = 0x2E0;
            static constexpr std::uintptr_t bOverrideInstanceData = 0x2E0;
            static constexpr std::uintptr_t bReplicatePlayback = 0x2E0;
            static constexpr std::uintptr_t DefaultInstanceData = 0x2E8;
            static constexpr std::uintptr_t BurnInInstance = 0x2F0;
            static constexpr std::uintptr_t bShowBurnin = 0x2F8;
            static constexpr std::uintptr_t WorldPartitionResolveData = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PlaybackSettings", 0x290, "StructProperty"},
            {"SequencePlayer", 0x2B8, "ObjectProperty"},
            {"LevelSequenceAsset", 0x2C0, "ObjectProperty"},
            {"CameraSettings", 0x2C8, "StructProperty"},
            {"BurnInOptions", 0x2D0, "ObjectProperty"},
            {"BindingOverrides", 0x2D8, "ObjectProperty"},
            {"bAutoPlay", 0x2E0, "BoolProperty"},
            {"bOverrideInstanceData", 0x2E0, "BoolProperty"},
            {"bReplicatePlayback", 0x2E0, "BoolProperty"},
            {"DefaultInstanceData", 0x2E8, "ObjectProperty"},
            {"BurnInInstance", 0x2F0, "ObjectProperty"},
            {"bShowBurnin", 0x2F8, "BoolProperty"},
            {"WorldPartitionResolveData", 0x2FC, "StructProperty"},
        }};
    };

    struct SparksLevelSequencePlayer
    {
        static constexpr std::string_view Name = "SparksLevelSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSequencePlayer";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedCamera = 0x460;
            static constexpr std::uintptr_t TargetMesh = 0x468;
            static constexpr std::uintptr_t SpawnedLookAtTarget = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpawnedCamera", 0x460, "ObjectProperty"},
            {"TargetMesh", 0x468, "ObjectProperty"},
            {"SpawnedLookAtTarget", 0x470, "ObjectProperty"},
        }};
    };

    struct SparksPerformanceMap
    {
        static constexpr std::string_view Name = "SparksPerformanceMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Timeline = 0x28;
            static constexpr std::uintptr_t PerformanceLength = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Timeline", 0x28, "ArrayProperty"},
            {"PerformanceLength", 0x38, "FloatProperty"},
        }};
    };

    struct SparksPoolSelectRuleRandomized
    {
        static constexpr std::string_view Name = "SparksPoolSelectRuleRandomized";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraPoolSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Wrapper = 0x30;
            static constexpr std::uintptr_t PoolIndexes = 0xD8;
            static constexpr std::uintptr_t PoolRules = 0xE8;
            static constexpr std::uintptr_t IntroPoolRule = 0xF8;
            static constexpr std::uintptr_t ExitPoolRule = 0x100;
            static constexpr std::uintptr_t Index = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Wrapper", 0x30, "StructProperty"},
            {"PoolIndexes", 0xD8, "ArrayProperty"},
            {"PoolRules", 0xE8, "ArrayProperty"},
            {"IntroPoolRule", 0xF8, "ObjectProperty"},
            {"ExitPoolRule", 0x100, "ObjectProperty"},
            {"Index", 0x108, "IntProperty"},
        }};
    };

    struct SparksPoolSelectRuleScored
    {
        static constexpr std::string_view Name = "SparksPoolSelectRuleScored";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraPoolSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Wrapper = 0x30;
            static constexpr std::uintptr_t PoolIndexes = 0xD8;
            static constexpr std::uintptr_t PoolRules = 0xE8;
            static constexpr std::uintptr_t IntroPoolRule = 0xF8;
            static constexpr std::uintptr_t ExitPoolRule = 0x100;
            static constexpr std::uintptr_t Index = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Wrapper", 0x30, "StructProperty"},
            {"PoolIndexes", 0xD8, "ArrayProperty"},
            {"PoolRules", 0xE8, "ArrayProperty"},
            {"IntroPoolRule", 0xF8, "ObjectProperty"},
            {"ExitPoolRule", 0x100, "ObjectProperty"},
            {"Index", 0x108, "IntProperty"},
        }};
    };

    struct SparksPoolSelectRuleSequential
    {
        static constexpr std::string_view Name = "SparksPoolSelectRuleSequential";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraPoolSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Wrapper = 0x30;
            static constexpr std::uintptr_t PoolIndexes = 0xD8;
            static constexpr std::uintptr_t PoolRules = 0xE8;
            static constexpr std::uintptr_t IntroPoolRule = 0xF8;
            static constexpr std::uintptr_t ExitPoolRule = 0x100;
            static constexpr std::uintptr_t Index = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Wrapper", 0x30, "StructProperty"},
            {"PoolIndexes", 0xD8, "ArrayProperty"},
            {"PoolRules", 0xE8, "ArrayProperty"},
            {"IntroPoolRule", 0xF8, "ObjectProperty"},
            {"ExitPoolRule", 0x100, "ObjectProperty"},
            {"Index", 0x108, "IntProperty"},
        }};
    };

    struct SparksShotSelectRuleRandomized
    {
        static constexpr std::string_view Name = "SparksShotSelectRuleRandomized";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraShotSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Pool = 0x30;
            static constexpr std::uintptr_t ShotIndexes = 0x38;
            static constexpr std::uintptr_t Index = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Pool", 0x30, "ObjectProperty"},
            {"ShotIndexes", 0x38, "ArrayProperty"},
            {"Index", 0x48, "IntProperty"},
        }};
    };

    struct SparksShotSelectRuleScored
    {
        static constexpr std::string_view Name = "SparksShotSelectRuleScored";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraShotSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Pool = 0x30;
            static constexpr std::uintptr_t ShotIndexes = 0x38;
            static constexpr std::uintptr_t Index = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Pool", 0x30, "ObjectProperty"},
            {"ShotIndexes", 0x38, "ArrayProperty"},
            {"Index", 0x48, "IntProperty"},
        }};
    };

    struct SparksShotSelectRuleSequential
    {
        static constexpr std::string_view Name = "SparksShotSelectRuleSequential";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksCameraShotSelectRuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0x28;
            static constexpr std::uintptr_t Pool = 0x30;
            static constexpr std::uintptr_t ShotIndexes = 0x38;
            static constexpr std::uintptr_t Index = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsInitialized", 0x28, "BoolProperty"},
            {"Pool", 0x30, "ObjectProperty"},
            {"ShotIndexes", 0x38, "ArrayProperty"},
            {"Index", 0x48, "IntProperty"},
        }};
    };

}
