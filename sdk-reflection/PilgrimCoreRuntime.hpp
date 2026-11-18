#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimCoreRuntime
{
    struct ActiveMusicBattleInstanceComponent
    {
        static constexpr std::string_view Name = "ActiveMusicBattleInstanceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct FortAthenaMutator_Pilgrim
    {
        static constexpr std::string_view Name = "FortAthenaMutator_Pilgrim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerStateEventHandles = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerStateEventHandles", 0x2E8, "ArrayProperty"},
        }};
    };

    struct NetworkedMusicClockManager
    {
        static constexpr std::string_view Name = "NetworkedMusicClockManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongPlayerPlayCoordinator";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBeatEvent = 0x1A0;
            static constexpr std::uintptr_t OnBarEvent = 0x1B0;
            static constexpr std::uintptr_t PinnedMusicClockComponent = 0x1C0;
            static constexpr std::uintptr_t WeakMetasoundPlayer = 0x1C8;
            static constexpr std::uintptr_t CurrentSongServerTimestamp = 0x1D0;
            static constexpr std::uintptr_t ServerTimestampRecordingTimerHandle = 0x220;
            static constexpr std::uintptr_t ServerTimestampRecordingFrequency = 0x230;
            static constexpr std::uintptr_t MinDeltaForSeek = 0x258;
            static constexpr std::uintptr_t EndCorrectionDelta = 0x280;
            static constexpr std::uintptr_t SpeedAdjustmentFactor = 0x2A8;
            static constexpr std::uintptr_t CurrentSpeed = 0x2D0;
            static constexpr std::uintptr_t MetasoundSpeedParamName = 0x2D4;
            static constexpr std::uintptr_t MetasoundSeekParamName = 0x2D8;
            static constexpr std::uintptr_t MetasoundTriggerName = 0x2DC;
            static constexpr std::uintptr_t MetasoundOuputPinName = 0x2E0;
            static constexpr std::uintptr_t MetasoundPlayerGeneratorHandle = 0x2E8;
            static constexpr std::uintptr_t MetasoundPlayerSeekParamPack = 0x2F0;
            static constexpr std::uintptr_t PlayMethod = 0x2F8;
            static constexpr std::uintptr_t SongLoadedGameplayEventHandle = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"OnBeatEvent", 0x1A0, "MulticastInlineDelegateProperty"},
            {"OnBarEvent", 0x1B0, "MulticastInlineDelegateProperty"},
            {"PinnedMusicClockComponent", 0x1C0, "ObjectProperty"},
            {"WeakMetasoundPlayer", 0x1C8, "WeakObjectProperty"},
            {"CurrentSongServerTimestamp", 0x1D0, "StructProperty"},
            {"ServerTimestampRecordingTimerHandle", 0x220, "StructProperty"},
            {"ServerTimestampRecordingFrequency", 0x230, "StructProperty"},
            {"MinDeltaForSeek", 0x258, "StructProperty"},
            {"EndCorrectionDelta", 0x280, "StructProperty"},
            {"SpeedAdjustmentFactor", 0x2A8, "StructProperty"},
            {"CurrentSpeed", 0x2D0, "FloatProperty"},
            {"MetasoundSpeedParamName", 0x2D4, "NameProperty"},
            {"MetasoundSeekParamName", 0x2D8, "NameProperty"},
            {"MetasoundTriggerName", 0x2DC, "NameProperty"},
            {"MetasoundOuputPinName", 0x2E0, "NameProperty"},
            {"MetasoundPlayerGeneratorHandle", 0x2E8, "ObjectProperty"},
            {"MetasoundPlayerSeekParamPack", 0x2F0, "ObjectProperty"},
            {"PlayMethod", 0x2F8, "EnumProperty"},
            {"SongLoadedGameplayEventHandle", 0x2FC, "StructProperty"},
        }};
    };

    struct PawnComponent_PilgrimInstrumentAnim
    {
        static constexpr std::string_view Name = "PawnComponent_PilgrimInstrumentAnim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentAnimPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksPlayspace = 0x218;
            static constexpr std::uintptr_t SparksPlayspaceType = 0x220;
            static constexpr std::uintptr_t BP_OnEnteredSparksMusicPlayspace = 0x228;
            static constexpr std::uintptr_t BP_OnExitedSparksMusicPlayspace = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SparksPlayspace", 0x218, "ObjectProperty"},
            {"SparksPlayspaceType", 0x220, "ClassProperty"},
            {"BP_OnEnteredSparksMusicPlayspace", 0x228, "MulticastInlineDelegateProperty"},
            {"BP_OnExitedSparksMusicPlayspace", 0x250, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgramGuitarTiltOverdriveTrigger
    {
        static constexpr std::string_view Name = "PilgramGuitarTiltOverdriveTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t ActuationThreshold = 0x28;
            static constexpr std::uintptr_t bShouldAlwaysTick = 0x2C;
            static constexpr std::uintptr_t LastValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActuationThreshold", 0x28, "FloatProperty"},
            {"bShouldAlwaysTick", 0x2C, "BoolProperty"},
            {"LastValue", 0x30, "StructProperty"},
        }};
    };

    struct PilgrimAICosmeticLibraryData
    {
        static constexpr std::string_view Name = "PilgrimAICosmeticLibraryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ExcludedCosmeticsRegistryType = 0x28;
            static constexpr std::uintptr_t AurasDataTable = 0x30;
            static constexpr std::uintptr_t GuitarDataTable = 0x50;
            static constexpr std::uintptr_t BassDataTable = 0x70;
            static constexpr std::uintptr_t KeyboardDataTable = 0x90;
            static constexpr std::uintptr_t MicrophoneDataTable = 0xB0;
            static constexpr std::uintptr_t DrumsDataTable = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ExcludedCosmeticsRegistryType", 0x28, "StructProperty"},
            {"AurasDataTable", 0x30, "SoftObjectProperty"},
            {"GuitarDataTable", 0x50, "SoftObjectProperty"},
            {"BassDataTable", 0x70, "SoftObjectProperty"},
            {"KeyboardDataTable", 0x90, "SoftObjectProperty"},
            {"MicrophoneDataTable", 0xB0, "SoftObjectProperty"},
            {"DrumsDataTable", 0xD0, "SoftObjectProperty"},
        }};
    };

    struct PilgrimAIPerformanceTrackerComponent
    {
        static constexpr std::string_view Name = "PilgrimAIPerformanceTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameScoreTracker = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameScoreTracker", 0xC0, "ObjectProperty"},
        }};
    };

    struct PilgrimAIService
    {
        static constexpr std::string_view Name = "PilgrimAIService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t BotNameLibraryData = 0x98;
            static constexpr std::uintptr_t ProbabilityAnonymous = 0xB8;
            static constexpr std::uintptr_t AISpawnerData = 0xC0;
            static constexpr std::uintptr_t GreenRoomTags = 0xC8;
            static constexpr std::uintptr_t InstrumentToWeaponMap = 0xE8;
            static constexpr std::uintptr_t PilgrimCosmeticLibrary = 0xF8;
            static constexpr std::uintptr_t BotDataTable = 0x118;
            static constexpr std::uintptr_t PartLeadRowName = 0x120;
            static constexpr std::uintptr_t PartVocalsRowName = 0x124;
            static constexpr std::uintptr_t PartDrumsRowName = 0x128;
            static constexpr std::uintptr_t PartBassRowName = 0x12C;
            static constexpr std::uintptr_t DifficultyEasyRowName = 0x130;
            static constexpr std::uintptr_t DifficultyMediumRowName = 0x134;
            static constexpr std::uintptr_t DifficultyHardRowName = 0x138;
            static constexpr std::uintptr_t DifficultyExpertRowName = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"BotNameLibraryData", 0x98, "SoftObjectProperty"},
            {"ProbabilityAnonymous", 0xB8, "FloatProperty"},
            {"AISpawnerData", 0xC0, "ClassProperty"},
            {"GreenRoomTags", 0xC8, "StructProperty"},
            {"InstrumentToWeaponMap", 0xE8, "MapProperty"},
            {"PilgrimCosmeticLibrary", 0xF8, "SoftObjectProperty"},
            {"BotDataTable", 0x118, "ObjectProperty"},
            {"PartLeadRowName", 0x120, "NameProperty"},
            {"PartVocalsRowName", 0x124, "NameProperty"},
            {"PartDrumsRowName", 0x128, "NameProperty"},
            {"PartBassRowName", 0x12C, "NameProperty"},
            {"DifficultyEasyRowName", 0x130, "NameProperty"},
            {"DifficultyMediumRowName", 0x134, "NameProperty"},
            {"DifficultyHardRowName", 0x138, "NameProperty"},
            {"DifficultyExpertRowName", 0x13C, "NameProperty"},
        }};
    };

    struct PilgrimAbilityTask_WaitForBars
    {
        static constexpr std::string_view Name = "PilgrimAbilityTask_WaitForBars";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBarHit = 0x78;
            static constexpr std::uintptr_t BarCount = 0x88;
            static constexpr std::uintptr_t TargetBar = 0x8C;
            static constexpr std::uintptr_t EndAfterHits = 0x90;
            static constexpr std::uintptr_t CurrentIteration = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnBarHit", 0x78, "MulticastInlineDelegateProperty"},
            {"BarCount", 0x88, "IntProperty"},
            {"TargetBar", 0x8C, "IntProperty"},
            {"EndAfterHits", 0x90, "IntProperty"},
            {"CurrentIteration", 0x94, "IntProperty"},
        }};
    };

    struct PilgrimAbilityTask_WaitForBeats
    {
        static constexpr std::string_view Name = "PilgrimAbilityTask_WaitForBeats";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBeatHit = 0x78;
            static constexpr std::uintptr_t BeatCount = 0x88;
            static constexpr std::uintptr_t TargetBeat = 0x8C;
            static constexpr std::uintptr_t EndAfterHits = 0x90;
            static constexpr std::uintptr_t CurrentIteration = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnBeatHit", 0x78, "MulticastInlineDelegateProperty"},
            {"BeatCount", 0x88, "IntProperty"},
            {"TargetBeat", 0x8C, "IntProperty"},
            {"EndAfterHits", 0x90, "IntProperty"},
            {"CurrentIteration", 0x94, "IntProperty"},
        }};
    };

    struct PilgrimAbilityTask_WaitForSection
    {
        static constexpr std::string_view Name = "PilgrimAbilityTask_WaitForSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSectionStarted = 0x78;
            static constexpr std::uintptr_t TargetSectionName = 0x88;
            static constexpr std::uintptr_t bWaitForNextSection = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnSectionStarted", 0x78, "MulticastInlineDelegateProperty"},
            {"TargetSectionName", 0x88, "StrProperty"},
            {"bWaitForNextSection", 0x98, "BoolProperty"},
        }};
    };

    struct PilgrimActorPool
    {
        static constexpr std::string_view Name = "PilgrimActorPool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnActorSpawned = 0x28;
            static constexpr std::uintptr_t AvailableActors = 0xD8;
            static constexpr std::uintptr_t InUseActors = 0xE8;
            static constexpr std::uintptr_t OwnerPoolComponent = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BP_OnActorSpawned", 0x28, "MulticastInlineDelegateProperty"},
            {"AvailableActors", 0xD8, "SetProperty"},
            {"InUseActors", 0xE8, "SetProperty"},
            {"OwnerPoolComponent", 0xF8, "ObjectProperty"},
        }};
    };

    struct PilgrimActorPoolComponent
    {
        static constexpr std::string_view Name = "PilgrimActorPoolComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorPoolMap = 0xC0;
            static constexpr std::uintptr_t DeferredDestroyActors = 0xD0;
            static constexpr std::uintptr_t DeferredWorkPools = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorPoolMap", 0xC0, "MapProperty"},
            {"DeferredDestroyActors", 0xD0, "ArrayProperty"},
            {"DeferredWorkPools", 0xE0, "SetProperty"},
        }};
    };

    struct PilgrimAnalytics
    {
        static constexpr std::string_view Name = "PilgrimAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentCatchUpSession = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentCatchUpSession", 0xC0, "StructProperty"},
        }};
    };

    struct PilgrimAsyncAction_RequestLeaderboard
    {
        static constexpr std::string_view Name = "PilgrimAsyncAction_RequestLeaderboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimAsyncAction_RequestPersonalBest
    {
        static constexpr std::string_view Name = "PilgrimAsyncAction_RequestPersonalBest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimAsyncAction_RequestPlayerFeed
    {
        static constexpr std::string_view Name = "PilgrimAsyncAction_RequestPlayerFeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimAutoCalibrator
    {
        static constexpr std::string_view Name = "PilgrimAutoCalibrator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlayerState = 0x40;
            static constexpr std::uintptr_t CurrentSongData = 0x48;
            static constexpr std::uintptr_t AutocalibrationComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwningPlayerState", 0x40, "WeakObjectProperty"},
            {"CurrentSongData", 0x48, "ObjectProperty"},
            {"AutocalibrationComponent", 0x68, "ObjectProperty"},
        }};
    };

    struct PilgrimAutocalibrationComponent
    {
        static constexpr std::string_view Name = "PilgrimAutocalibrationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
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

    struct PilgrimBeatMarker
    {
        static constexpr std::string_view Name = "PilgrimBeatMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentNowBar = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParentNowBar", 0x2E8, "ObjectProperty"},
        }};
    };

    struct PilgrimBeatMarkerTrackItemMgr
    {
        static constexpr std::string_view Name = "PilgrimBeatMarkerTrackItemMgr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItemMgr";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckedItemBaseClass = 0xC0;
            static constexpr std::uintptr_t Track = 0xC8;
            static constexpr std::uintptr_t ItemPool = 0xD0;
            static constexpr std::uintptr_t PilgrimGame = 0xD8;
            static constexpr std::uintptr_t ActiveItems = 0xE0;
            static constexpr std::uintptr_t ActiveItemsMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CheckedItemBaseClass", 0xC0, "ClassProperty"},
            {"Track", 0xC8, "WeakObjectProperty"},
            {"ItemPool", 0xD0, "ObjectProperty"},
            {"PilgrimGame", 0xD8, "WeakObjectProperty"},
            {"ActiveItems", 0xE0, "ArrayProperty"},
            {"ActiveItemsMap", 0xF0, "MapProperty"},
        }};
    };

    struct PilgrimCheatManager
    {
        static constexpr std::string_view Name = "PilgrimCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAutoplayUpdated = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnAutoplayUpdated", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimControllerComponent_SongPreloader
    {
        static constexpr std::string_view Name = "PilgrimControllerComponent_SongPreloader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongPlayerPreloadControllerComponent";
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

    struct PilgrimCoreBandStateComponent
    {
        static constexpr std::string_view Name = "PilgrimCoreBandStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedSongs = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnedSongs", 0xC0, "ArrayProperty"},
        }};
    };

    struct PilgrimCorePlayerStateComponent
    {
        static constexpr std::string_view Name = "PilgrimCorePlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPeripheralInputModeChanged = 0xC8;
            static constexpr std::uintptr_t PartPickingState = 0xD8;
            static constexpr std::uintptr_t SongDifficulty = 0xD9;
            static constexpr std::uintptr_t bIsReady = 0xDA;
            static constexpr std::uintptr_t bPreReadyTimeoutReadiness = 0xDB;
            static constexpr std::uintptr_t bIsReadyToReturn = 0xDC;
            static constexpr std::uintptr_t bPregameChoicesLocked = 0xDD;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnPeripheralInputModeChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"PartPickingState", 0xD8, "EnumProperty"},
            {"SongDifficulty", 0xD9, "EnumProperty"},
            {"bIsReady", 0xDA, "BoolProperty"},
            {"bPreReadyTimeoutReadiness", 0xDB, "BoolProperty"},
            {"bIsReadyToReturn", 0xDC, "BoolProperty"},
            {"bPregameChoicesLocked", 0xDD, "BoolProperty"},
        }};
    };

    struct PilgrimCore_BPFL
    {
        static constexpr std::string_view Name = "PilgrimCore_BPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimCustomSetlist
    {
        static constexpr std::string_view Name = "PilgrimCustomSetlist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLockedStateChanged = 0xE0;
            static constexpr std::uintptr_t SetlistEntries = 0xF0;
            static constexpr std::uintptr_t MaxSongsPerPlayer = 0x100;
            static constexpr std::uintptr_t bIsSetlistLocked = 0x104;
            static constexpr std::uintptr_t SetlistId = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnLockedStateChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"SetlistEntries", 0xF0, "ArrayProperty"},
            {"MaxSongsPerPlayer", 0x100, "IntProperty"},
            {"bIsSetlistLocked", 0x104, "BoolProperty"},
            {"SetlistId", 0x108, "StructProperty"},
        }};
    };

    struct PilgrimDelayUntilTimeBeforeMidiTick
    {
        static constexpr std::string_view Name = "PilgrimDelayUntilTimeBeforeMidiTick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinished = 0x30;
            static constexpr std::uintptr_t PilgrimGame = 0x50;
            static constexpr std::uintptr_t Passthrough = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnFinished", 0x30, "MulticastInlineDelegateProperty"},
            {"PilgrimGame", 0x50, "ObjectProperty"},
            {"Passthrough", 0x58, "ObjectProperty"},
        }};
    };

    struct PilgrimDeviceMapperControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimDeviceMapperControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct PilgrimEditCustomSetlistComponent
    {
        static constexpr std::string_view Name = "PilgrimEditCustomSetlistComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMEditCustomSetlistComponent";
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

    struct PilgrimEventRouterLibrary
    {
        static constexpr std::string_view Name = "PilgrimEventRouterLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimForceFeedbackConfig
    {
        static constexpr std::string_view Name = "PilgrimForceFeedbackConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t OverdriveReadyToDeployForceFeedback = 0x28;
            static constexpr std::uintptr_t OverdriveDeployedForceFeedback = 0x30;
            static constexpr std::uintptr_t GemHitForceFeedback = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OverdriveReadyToDeployForceFeedback", 0x28, "ObjectProperty"},
            {"OverdriveDeployedForceFeedback", 0x30, "ObjectProperty"},
            {"GemHitForceFeedback", 0x38, "ObjectProperty"},
        }};
    };

    struct PilgrimGame
    {
        static constexpr std::string_view Name = "PilgrimGame";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGameScoreUpdated = 0xC8;
            static constexpr std::uintptr_t OnOverdriveActiveUpdated = 0xD8;
            static constexpr std::uintptr_t OnSongEnded = 0xE8;
            static constexpr std::uintptr_t OnDisableMissUpdated = 0x108;
            static constexpr std::uintptr_t OnTrackTransparencyUpdated = 0x118;
            static constexpr std::uintptr_t OnOverdriveHiddenChanged = 0x128;
            static constexpr std::uintptr_t OnGemSizeChanged = 0x138;
            static constexpr std::uintptr_t OnGhostNoteChanged = 0x148;
            static constexpr std::uintptr_t OnSmasherEffectsChanged = 0x158;
            static constexpr std::uintptr_t ScoringModel = 0x168;
            static constexpr std::uintptr_t PilgrimGameConfig = 0x170;
            static constexpr std::uintptr_t OwnerControllerComponent = 0x188;
            static constexpr std::uintptr_t SongPlayerComponent = 0x190;
            static constexpr std::uintptr_t MetasoundPlayer = 0x198;
            static constexpr std::uintptr_t MusicClock = 0x1A0;
            static constexpr std::uintptr_t MidiDeviceEventHandler = 0x1A8;
            static constexpr std::uintptr_t MainTrack = 0x1B0;
            static constexpr std::uintptr_t MissSound = 0x1B8;
            static constexpr std::uintptr_t PilgrimGameEvaluator = 0x1C0;
            static constexpr std::uintptr_t PilgrimAutoCalibrator = 0x1C8;
            static constexpr std::uintptr_t PilgrimLyricParsingManager = 0x1D0;
            static constexpr std::uintptr_t InProgressSustains = 0x1D8;
            static constexpr std::uintptr_t SongData = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OnGameScoreUpdated", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnOverdriveActiveUpdated", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnSongEnded", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnDisableMissUpdated", 0x108, "MulticastInlineDelegateProperty"},
            {"OnTrackTransparencyUpdated", 0x118, "MulticastInlineDelegateProperty"},
            {"OnOverdriveHiddenChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"OnGemSizeChanged", 0x138, "MulticastInlineDelegateProperty"},
            {"OnGhostNoteChanged", 0x148, "MulticastInlineDelegateProperty"},
            {"OnSmasherEffectsChanged", 0x158, "MulticastInlineDelegateProperty"},
            {"ScoringModel", 0x168, "ObjectProperty"},
            {"PilgrimGameConfig", 0x170, "ObjectProperty"},
            {"OwnerControllerComponent", 0x188, "ObjectProperty"},
            {"SongPlayerComponent", 0x190, "ObjectProperty"},
            {"MetasoundPlayer", 0x198, "ObjectProperty"},
            {"MusicClock", 0x1A0, "ObjectProperty"},
            {"MidiDeviceEventHandler", 0x1A8, "ObjectProperty"},
            {"MainTrack", 0x1B0, "ObjectProperty"},
            {"MissSound", 0x1B8, "ObjectProperty"},
            {"PilgrimGameEvaluator", 0x1C0, "ObjectProperty"},
            {"PilgrimAutoCalibrator", 0x1C8, "ObjectProperty"},
            {"PilgrimLyricParsingManager", 0x1D0, "ObjectProperty"},
            {"InProgressSustains", 0x1D8, "MapProperty"},
            {"SongData", 0x498, "ObjectProperty"},
        }};
    };

    struct PilgrimGameConfig
    {
        static constexpr std::string_view Name = "PilgrimGameConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SongSettings = 0x28;
            static constexpr std::uintptr_t ConfigSettings = 0x38;
            static constexpr std::uintptr_t MissSound = 0x288;
            static constexpr std::uintptr_t MaxHp = 0x290;
            static constexpr std::uintptr_t DamagePerHit = 0x294;
            static constexpr std::uintptr_t WeaponRarityToNoteDamage = 0x298;
            static constexpr std::uintptr_t StreakDefinitions = 0x2A8;
            static constexpr std::uintptr_t SideloadLipsyncAnim_BoneCompressionSettings = 0x2B8;
            static constexpr std::uintptr_t SideloadLipsyncAnim_CurveCompressionSettings = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SongSettings", 0x28, "StructProperty"},
            {"ConfigSettings", 0x38, "StructProperty"},
            {"MissSound", 0x288, "ObjectProperty"},
            {"MaxHp", 0x290, "FloatProperty"},
            {"DamagePerHit", 0x294, "FloatProperty"},
            {"WeaponRarityToNoteDamage", 0x298, "MapProperty"},
            {"StreakDefinitions", 0x2A8, "ArrayProperty"},
            {"SideloadLipsyncAnim_BoneCompressionSettings", 0x2B8, "ArrayProperty"},
            {"SideloadLipsyncAnim_CurveCompressionSettings", 0x2C8, "ArrayProperty"},
        }};
    };

    struct PilgrimGameDeveloperSettings
    {
        static constexpr std::string_view Name = "PilgrimGameDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SongOverrides = 0x30;
            static constexpr std::uintptr_t bEnforceSongEntitlements = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SongOverrides", 0x30, "StructProperty"},
            {"bEnforceSongEntitlements", 0x40, "BoolProperty"},
        }};
    };

    struct PilgrimGameEvaluator
    {
        static constexpr std::string_view Name = "PilgrimGameEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAutoplayPlayerControllerComponent = 0x28;
            static constexpr std::uintptr_t CurrentSongData = 0x50;
            static constexpr std::uintptr_t SongMetadata = 0x58;
            static constexpr std::uintptr_t DebugScoreListener = 0x60;
            static constexpr std::uintptr_t OwningPlayerState = 0x68;
            static constexpr std::uintptr_t PilgrimGameConfig = 0x70;
            static constexpr std::uintptr_t GameplayLog = 0x78;
            static constexpr std::uintptr_t ScoringModel = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CachedAutoplayPlayerControllerComponent", 0x28, "WeakObjectProperty"},
            {"CurrentSongData", 0x50, "ObjectProperty"},
            {"SongMetadata", 0x58, "ObjectProperty"},
            {"DebugScoreListener", 0x60, "ObjectProperty"},
            {"OwningPlayerState", 0x68, "WeakObjectProperty"},
            {"PilgrimGameConfig", 0x70, "ObjectProperty"},
            {"GameplayLog", 0x78, "ObjectProperty"},
            {"ScoringModel", 0x80, "ObjectProperty"},
        }};
    };

    struct PilgrimGameModeComponentBase
    {
        static constexpr std::string_view Name = "PilgrimGameModeComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentGameMode = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentGameMode", 0xC0, "EnumProperty"},
        }};
    };

    struct PilgrimGameScoreInterface
    {
        static constexpr std::string_view Name = "PilgrimGameScoreInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimGameScoreTracker
    {
        static constexpr std::string_view Name = "PilgrimGameScoreTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SongPerformanceData = 0x30;
            static constexpr std::uintptr_t PilgrimGame = 0x40;
            static constexpr std::uintptr_t OwningPlayerState = 0x48;
            static constexpr std::uintptr_t OverdriveActiveEventHandle = 0x50;
            static constexpr std::uintptr_t MaxStreak = 0x6C;
            static constexpr std::uintptr_t CurrentStreak = 0x70;
            static constexpr std::uintptr_t TimeInOverdriveMs = 0x74;
            static constexpr std::uintptr_t InOverdrive = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SongPerformanceData", 0x30, "MapProperty"},
            {"PilgrimGame", 0x40, "ObjectProperty"},
            {"OwningPlayerState", 0x48, "ObjectProperty"},
            {"OverdriveActiveEventHandle", 0x50, "StructProperty"},
            {"MaxStreak", 0x6C, "IntProperty"},
            {"CurrentStreak", 0x70, "IntProperty"},
            {"TimeInOverdriveMs", 0x74, "FloatProperty"},
            {"InOverdrive", 0x78, "BoolProperty"},
        }};
    };

    struct PilgrimGameUserSettings
    {
        static constexpr std::string_view Name = "PilgrimGameUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasSeenFTUEMainStage = 0x28;
            static constexpr std::uintptr_t bHasSeenFTUEBattleStage = 0x29;
            static constexpr std::uintptr_t bHasSeenFTUELocalMultiplayer = 0x2A;
            static constexpr std::uintptr_t PerLocalPlayerSettings = 0x30;
            static constexpr std::uintptr_t SongDifficulty = 0x40;
            static constexpr std::uintptr_t SelectedInstrument = 0x41;
            static constexpr std::uintptr_t HasSeenRoadieCoachMark = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bHasSeenFTUEMainStage", 0x28, "BoolProperty"},
            {"bHasSeenFTUEBattleStage", 0x29, "BoolProperty"},
            {"bHasSeenFTUELocalMultiplayer", 0x2A, "BoolProperty"},
            {"PerLocalPlayerSettings", 0x30, "ArrayProperty"},
            {"SongDifficulty", 0x40, "EnumProperty"},
            {"SelectedInstrument", 0x41, "EnumProperty"},
            {"HasSeenRoadieCoachMark", 0x42, "EnumProperty"},
        }};
    };

    struct PilgrimGameUserSettingsComponent
    {
        static constexpr std::string_view Name = "PilgrimGameUserSettingsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameUserSettings = 0xC0;
            static constexpr std::uintptr_t WaitForGlobalEventRouter = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameUserSettings", 0xC0, "ObjectProperty"},
            {"WaitForGlobalEventRouter", 0xC8, "ObjectProperty"},
        }};
    };

    struct PilgrimGameplayLog
    {
        static constexpr std::string_view Name = "PilgrimGameplayLog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlayerState = 0x48;
            static constexpr std::uintptr_t CurrentSongData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OwningPlayerState", 0x48, "WeakObjectProperty"},
            {"CurrentSongData", 0x50, "ObjectProperty"},
        }};
    };

    struct PilgrimGem
    {
        static constexpr std::string_view Name = "PilgrimGem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGemSmashFinished = 0x2E8;
            static constexpr std::uintptr_t OnGemEnteredSlopWindow = 0x2F8;
            static constexpr std::uintptr_t OnGemExitedSlopWindow = 0x308;
            static constexpr std::uintptr_t ParentSmasher = 0x318;
            static constexpr std::uintptr_t RelatedSustain = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnGemSmashFinished", 0x2E8, "MulticastInlineDelegateProperty"},
            {"OnGemEnteredSlopWindow", 0x2F8, "MulticastInlineDelegateProperty"},
            {"OnGemExitedSlopWindow", 0x308, "MulticastInlineDelegateProperty"},
            {"ParentSmasher", 0x318, "ObjectProperty"},
            {"RelatedSustain", 0x320, "ObjectProperty"},
        }};
    };

    struct PilgrimGemAnalyzer
    {
        static constexpr std::string_view Name = "PilgrimGemAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PilgrimGemBreakListener
    {
        static constexpr std::string_view Name = "PilgrimGemBreakListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerState = 0x38;
            static constexpr std::uintptr_t OwningPlayerController = 0x40;
            static constexpr std::uintptr_t Difficulty = 0x48;
            static constexpr std::uintptr_t TrackType = 0x49;
            static constexpr std::uintptr_t InBreak = 0x4C;
            static constexpr std::uintptr_t LastPendingGemBreak = 0x70;
            static constexpr std::uintptr_t LastProcessedSongMs = 0x94;
            static constexpr std::uintptr_t bInitialized = 0x98;
            static constexpr std::uintptr_t BarThresholdForEndPendingEvent = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlayerState", 0x38, "ObjectProperty"},
            {"OwningPlayerController", 0x40, "ObjectProperty"},
            {"Difficulty", 0x48, "EnumProperty"},
            {"TrackType", 0x49, "EnumProperty"},
            {"InBreak", 0x4C, "StructProperty"},
            {"LastPendingGemBreak", 0x70, "StructProperty"},
            {"LastProcessedSongMs", 0x94, "FloatProperty"},
            {"bInitialized", 0x98, "BoolProperty"},
            {"BarThresholdForEndPendingEvent", 0x9C, "FloatProperty"},
        }};
    };

    struct PilgrimGemSmasher
    {
        static constexpr std::string_view Name = "PilgrimGemSmasher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComp = 0x278;
            static constexpr std::uintptr_t GemSlot = 0x280;
            static constexpr std::uintptr_t TrackLane = 0x288;
            static constexpr std::uintptr_t PilgrimGame = 0x28C;
            static constexpr std::uintptr_t TrackIndex = 0x294;
            static constexpr std::uintptr_t PulseDuration = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SceneComp", 0x278, "ObjectProperty"},
            {"GemSlot", 0x280, "ObjectProperty"},
            {"TrackLane", 0x288, "EnumProperty"},
            {"PilgrimGame", 0x28C, "WeakObjectProperty"},
            {"TrackIndex", 0x294, "IntProperty"},
            {"PulseDuration", 0x298, "FloatProperty"},
        }};
    };

    struct PilgrimGemTrackItemMgr
    {
        static constexpr std::string_view Name = "PilgrimGemTrackItemMgr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItemMgr";
        struct Offsets
        {
            static constexpr std::uintptr_t GemsInSlopWindow = 0x128;
            static constexpr std::uintptr_t SustainTrackItemMgr = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GemsInSlopWindow", 0x128, "SetProperty"},
            {"SustainTrackItemMgr", 0x138, "ObjectProperty"},
        }};
    };

    struct PilgrimInputConfig
    {
        static constexpr std::string_view Name = "PilgrimInputConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionToPilgrimLanePress = 0x28;
            static constexpr std::uintptr_t InputActionToSpecialPilgrimLanePress = 0x38;
            static constexpr std::uintptr_t InputActionToPilgrimLaneRelease = 0x48;
            static constexpr std::uintptr_t OverdriveInputAction = 0x58;
            static constexpr std::uintptr_t Overdrive5LaneInputAction = 0x60;
            static constexpr std::uintptr_t GuitarStrumInputAction = 0x68;
            static constexpr std::uintptr_t Modulate = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputActionToPilgrimLanePress", 0x28, "MapProperty"},
            {"InputActionToSpecialPilgrimLanePress", 0x38, "MapProperty"},
            {"InputActionToPilgrimLaneRelease", 0x48, "MapProperty"},
            {"OverdriveInputAction", 0x58, "ObjectProperty"},
            {"Overdrive5LaneInputAction", 0x60, "ObjectProperty"},
            {"GuitarStrumInputAction", 0x68, "ObjectProperty"},
            {"Modulate", 0x70, "ObjectProperty"},
        }};
    };

    struct PilgrimInstrumentConfig
    {
        static constexpr std::string_view Name = "PilgrimInstrumentConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoreMultiplierDefinitions = 0x28;
            static constexpr std::uintptr_t SustainScorePerBeat = 0x38;
            static constexpr std::uintptr_t IndividualStarPercentageThresholds = 0x40;
            static constexpr std::uintptr_t BaseGemScoreValue = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ScoreMultiplierDefinitions", 0x28, "ArrayProperty"},
            {"SustainScorePerBeat", 0x38, "OptionalProperty"},
            {"IndividualStarPercentageThresholds", 0x40, "MapProperty"},
            {"BaseGemScoreValue", 0x50, "MapProperty"},
        }};
    };

    struct PilgrimLeaderboardLibrary
    {
        static constexpr std::string_view Name = "PilgrimLeaderboardLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimLeaderboardManager
    {
        static constexpr std::string_view Name = "PilgrimLeaderboardManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestCacheWrapperMap = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequestCacheWrapperMap", 0xE0, "MapProperty"},
        }};
    };

    struct PilgrimLeaderboardPlayerComponent
    {
        static constexpr std::string_view Name = "PilgrimLeaderboardPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFriendsSurpassed = 0xC0;
            static constexpr std::uintptr_t OnBandFriendLeaderboardOptionChanged = 0xD0;
            static constexpr std::uintptr_t bEnableBandFriendLeaderboardOption = 0xE0;
            static constexpr std::uintptr_t FriendPopupTimeSeconds = 0x150;
            static constexpr std::uintptr_t bClientSelectedAllTimeOption = 0x164;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnFriendsSurpassed", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnBandFriendLeaderboardOptionChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"bEnableBandFriendLeaderboardOption", 0xE0, "BoolProperty"},
            {"FriendPopupTimeSeconds", 0x150, "FloatProperty"},
            {"bClientSelectedAllTimeOption", 0x164, "BoolProperty"},
        }};
    };

    struct PilgrimLyricParsingManager
    {
        static constexpr std::string_view Name = "PilgrimLyricParsingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SongData = 0x38;
            static constexpr std::uintptr_t OwningPlayerState = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SongData", 0x38, "ObjectProperty"},
            {"OwningPlayerState", 0x40, "WeakObjectProperty"},
        }};
    };

    struct PilgrimMBIGameManagerInterface
    {
        static constexpr std::string_view Name = "PilgrimMBIGameManagerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimMusicBattleInstance
    {
        static constexpr std::string_view Name = "PilgrimMusicBattleInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMusicBattleFinished = 0x278;
            static constexpr std::uintptr_t OnSongScoringFinished = 0x288;
            static constexpr std::uintptr_t Team = 0x298;
            static constexpr std::uintptr_t UIStateConfig = 0x2A0;
            static constexpr std::uintptr_t MusicBattleData = 0x2A8;
            static constexpr std::uintptr_t SongToPlayShortName = 0x2F0;
            static constexpr std::uintptr_t SongToPlay = 0x2F8;
            static constexpr std::uintptr_t SongDifficultyToPlay = 0x300;
            static constexpr std::uintptr_t bClientHasReceivedSongToPlay = 0x301;
            static constexpr std::uintptr_t PrimaryLocalPlayerController = 0x308;
            static constexpr std::uintptr_t LocalPlayerControllers = 0x310;
            static constexpr std::uintptr_t MusicBattlePlayers = 0x328;
            static constexpr std::uintptr_t SinglePlayerBattleOptions = 0x338;
            static constexpr std::uintptr_t MusicBattleType = 0x340;
            static constexpr std::uintptr_t CurrentSetlistIndex = 0x344;
            static constexpr std::uintptr_t DisableScoreCeilingForSongs = 0x348;
            static constexpr std::uintptr_t ClientPilgrimGames = 0x358;
            static constexpr std::uintptr_t SrvFIThrMs = 0x368;
            static constexpr std::uintptr_t FFTAnalyzerResultsProvider = 0x410;
            static constexpr std::uintptr_t SongPlayerComponent = 0x418;
            static constexpr std::uintptr_t CurrentPlayerToIndexMap = 0x420;
            static constexpr std::uintptr_t SongData = 0x430;
            static constexpr std::uintptr_t ServerPilgrimGameMap = 0x450;
            static constexpr std::uintptr_t GemBreakListeners = 0x4C8;
            static constexpr std::uintptr_t PlayersWhoOwnCurrentSong = 0x510;
            static constexpr std::uintptr_t bServerWaitForAllMbisAndPlayersToBeReady = 0x521;
            static constexpr std::uintptr_t ServerWaitForAllPlayersTimerHandle = 0x528;
            static constexpr std::uintptr_t bAllowServerToApplyMultipliers = 0x548;
            static constexpr std::uintptr_t bAllowReturnToBackStageForSinglePlayerInstances = 0x549;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"OnMusicBattleFinished", 0x278, "MulticastInlineDelegateProperty"},
            {"OnSongScoringFinished", 0x288, "MulticastInlineDelegateProperty"},
            {"Team", 0x298, "ByteProperty"},
            {"UIStateConfig", 0x2A0, "ObjectProperty"},
            {"MusicBattleData", 0x2A8, "StructProperty"},
            {"SongToPlayShortName", 0x2F0, "NameProperty"},
            {"SongToPlay", 0x2F8, "ObjectProperty"},
            {"SongDifficultyToPlay", 0x300, "EnumProperty"},
            {"bClientHasReceivedSongToPlay", 0x301, "BoolProperty"},
            {"PrimaryLocalPlayerController", 0x308, "ObjectProperty"},
            {"LocalPlayerControllers", 0x310, "ArrayProperty"},
            {"MusicBattlePlayers", 0x328, "ArrayProperty"},
            {"SinglePlayerBattleOptions", 0x338, "StructProperty"},
            {"MusicBattleType", 0x340, "EnumProperty"},
            {"CurrentSetlistIndex", 0x344, "IntProperty"},
            {"DisableScoreCeilingForSongs", 0x348, "ArrayProperty"},
            {"ClientPilgrimGames", 0x358, "ArrayProperty"},
            {"SrvFIThrMs", 0x368, "IntProperty"},
            {"FFTAnalyzerResultsProvider", 0x410, "ObjectProperty"},
            {"SongPlayerComponent", 0x418, "ObjectProperty"},
            {"CurrentPlayerToIndexMap", 0x420, "MapProperty"},
            {"SongData", 0x430, "ObjectProperty"},
            {"ServerPilgrimGameMap", 0x450, "MapProperty"},
            {"GemBreakListeners", 0x4C8, "ArrayProperty"},
            {"PlayersWhoOwnCurrentSong", 0x510, "SetProperty"},
            {"bServerWaitForAllMbisAndPlayersToBeReady", 0x521, "BoolProperty"},
            {"ServerWaitForAllPlayersTimerHandle", 0x528, "StructProperty"},
            {"bAllowServerToApplyMultipliers", 0x548, "BoolProperty"},
            {"bAllowReturnToBackStageForSinglePlayerInstances", 0x549, "BoolProperty"},
        }};
    };

    struct PilgrimMusicBattleInstanceGameplayOverridesConfig
    {
        static constexpr std::string_view Name = "PilgrimMusicBattleInstanceGameplayOverridesConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackClassToSpawnOverride = 0x28;
            static constexpr std::uintptr_t FourLaneCaptureConfigOverride = 0x30;
            static constexpr std::uintptr_t FiveLaneCaptureConfigOverride = 0xA0;
            static constexpr std::uintptr_t LateTrackSpeedMultiplierOverride = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TrackClassToSpawnOverride", 0x28, "ClassProperty"},
            {"FourLaneCaptureConfigOverride", 0x30, "StructProperty"},
            {"FiveLaneCaptureConfigOverride", 0xA0, "StructProperty"},
            {"LateTrackSpeedMultiplierOverride", 0x110, "FloatProperty"},
        }};
    };

    struct PilgrimMusicBattleInstanceUIStateConfig
    {
        static constexpr std::string_view Name = "PilgrimMusicBattleInstanceUIStateConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TouchUIScene = 0x28;
            static constexpr std::uintptr_t GreenRoomScene = 0x30;
            static constexpr std::uintptr_t TouchGreenRoomScene = 0x38;
            static constexpr std::uintptr_t SongResultsScene = 0x40;
            static constexpr std::uintptr_t LocalMultiplayerUIScene = 0x48;
            static constexpr std::uintptr_t LocalSingleplayerUIScene = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TouchUIScene", 0x28, "ObjectProperty"},
            {"GreenRoomScene", 0x30, "ObjectProperty"},
            {"TouchGreenRoomScene", 0x38, "ObjectProperty"},
            {"SongResultsScene", 0x40, "ObjectProperty"},
            {"LocalMultiplayerUIScene", 0x48, "ObjectProperty"},
            {"LocalSingleplayerUIScene", 0x50, "ObjectProperty"},
        }};
    };

    struct PilgrimNowBar
    {
        static constexpr std::string_view Name = "PilgrimNowBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComp = 0x278;
            static constexpr std::uintptr_t BeatMarkerSlot = 0x280;
            static constexpr std::uintptr_t LaneToSmasherMap = 0x288;
            static constexpr std::uintptr_t TrackIndex = 0x298;
            static constexpr std::uintptr_t PilgrimGame = 0x29C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SceneComp", 0x278, "ObjectProperty"},
            {"BeatMarkerSlot", 0x280, "ObjectProperty"},
            {"LaneToSmasherMap", 0x288, "MapProperty"},
            {"TrackIndex", 0x298, "IntProperty"},
            {"PilgrimGame", 0x29C, "WeakObjectProperty"},
        }};
    };

    struct PilgrimPerformanceTrackerComponent
    {
        static constexpr std::string_view Name = "PilgrimPerformanceTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameScoreTracker = 0xC0;
            static constexpr std::uintptr_t PilgrimGame = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameScoreTracker", 0xC0, "ObjectProperty"},
            {"PilgrimGame", 0xC8, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayerControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnServerTimedInputReceived = 0xE0;
            static constexpr std::uintptr_t OnServerSettingUpdatedReceived = 0xF0;
            static constexpr std::uintptr_t OnServerSyncHeartbeatMessageReceived = 0x100;
            static constexpr std::uintptr_t PilgrimForceFeedbackConfig = 0x110;
            static constexpr std::uintptr_t bUseMobileHapticFeedback = 0x118;
            static constexpr std::uintptr_t HapticFeedbackType_GemHit = 0x119;
            static constexpr std::uintptr_t HapticFeedbackType_OverdriveReady = 0x11A;
            static constexpr std::uintptr_t HapticFeedbackType_OverdriveDeployed = 0x11B;
            static constexpr std::uintptr_t OnActivateInputPreset = 0x120;
            static constexpr std::uintptr_t OnDesiredInputPresetChanged = 0x130;
            static constexpr std::uintptr_t OnInputSettingsChanged = 0x140;
            static constexpr std::uintptr_t OnMusicBattleClientUpdateReceived = 0x150;
            static constexpr std::uintptr_t OnStateMachineMessageReceived = 0x160;
            static constexpr std::uintptr_t bUseAutoplay = 0x170;
            static constexpr std::uintptr_t PlayerStateEventHandles = 0x190;
            static constexpr std::uintptr_t ScoringEventHandles = 0x1A0;
            static constexpr std::uintptr_t InstrumentCollection = 0x1B0;
            static constexpr std::uintptr_t DefaultUnbindsDataTable = 0x1D0;
            static constexpr std::uintptr_t CycleInputsInputAction = 0x1D8;
            static constexpr std::uintptr_t CycleLanesInputAction = 0x1E8;
            static constexpr std::uintptr_t EmotePickerInputAction = 0x1F8;
            static constexpr std::uintptr_t FallbackKeyboardLaneInputMappingConfigs = 0x200;
            static constexpr std::uintptr_t FallbackControllerLaneInputMappingConfigs = 0x210;
            static constexpr std::uintptr_t PeripheralIMCMap = 0x220;
            static constexpr std::uintptr_t PSPeripheralGuitarGreenRoomIMC = 0x230;
            static constexpr std::uintptr_t SwitchPeripheralGuitarBeatmatchIMC = 0x238;
            static constexpr std::uintptr_t SwitchPeripheralGuitarBeatmatchIMC_NonPro4Lanes = 0x240;
            static constexpr std::uintptr_t LaneInputMappingConfigs = 0x248;
            static constexpr std::uintptr_t TouchBrushesConfig = 0x258;
            static constexpr std::uintptr_t SelectedNumInputLanes = 0x268;
            static constexpr std::uintptr_t SelectedPCBeatmatchIMC = 0x270;
            static constexpr std::uintptr_t SelectedConsoleBeatmatchIMC = 0x280;
            static constexpr std::uintptr_t PilgrimPresetConfiguration = 0x2B0;
            static constexpr std::uintptr_t ClientPilgrimGame = 0x2C8;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x2D8;
            static constexpr std::uintptr_t PlayerEnhancedInputSubsystem = 0x2E0;
            static constexpr std::uintptr_t CurrentlyAddedPlayerIMCs = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"OnServerTimedInputReceived", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnServerSettingUpdatedReceived", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnServerSyncHeartbeatMessageReceived", 0x100, "MulticastInlineDelegateProperty"},
            {"PilgrimForceFeedbackConfig", 0x110, "ObjectProperty"},
            {"bUseMobileHapticFeedback", 0x118, "BoolProperty"},
            {"HapticFeedbackType_GemHit", 0x119, "EnumProperty"},
            {"HapticFeedbackType_OverdriveReady", 0x11A, "EnumProperty"},
            {"HapticFeedbackType_OverdriveDeployed", 0x11B, "EnumProperty"},
            {"OnActivateInputPreset", 0x120, "MulticastInlineDelegateProperty"},
            {"OnDesiredInputPresetChanged", 0x130, "MulticastInlineDelegateProperty"},
            {"OnInputSettingsChanged", 0x140, "MulticastInlineDelegateProperty"},
            {"OnMusicBattleClientUpdateReceived", 0x150, "MulticastInlineDelegateProperty"},
            {"OnStateMachineMessageReceived", 0x160, "MulticastInlineDelegateProperty"},
            {"bUseAutoplay", 0x170, "BoolProperty"},
            {"PlayerStateEventHandles", 0x190, "ArrayProperty"},
            {"ScoringEventHandles", 0x1A0, "ArrayProperty"},
            {"InstrumentCollection", 0x1B0, "StructProperty"},
            {"DefaultUnbindsDataTable", 0x1D0, "ObjectProperty"},
            {"CycleInputsInputAction", 0x1D8, "ObjectProperty"},
            {"CycleLanesInputAction", 0x1E8, "ObjectProperty"},
            {"EmotePickerInputAction", 0x1F8, "ObjectProperty"},
            {"FallbackKeyboardLaneInputMappingConfigs", 0x200, "MapProperty"},
            {"FallbackControllerLaneInputMappingConfigs", 0x210, "MapProperty"},
            {"PeripheralIMCMap", 0x220, "MapProperty"},
            {"PSPeripheralGuitarGreenRoomIMC", 0x230, "ObjectProperty"},
            {"SwitchPeripheralGuitarBeatmatchIMC", 0x238, "ObjectProperty"},
            {"SwitchPeripheralGuitarBeatmatchIMC_NonPro4Lanes", 0x240, "ObjectProperty"},
            {"LaneInputMappingConfigs", 0x248, "MapProperty"},
            {"TouchBrushesConfig", 0x258, "StructProperty"},
            {"SelectedNumInputLanes", 0x268, "ByteProperty"},
            {"SelectedPCBeatmatchIMC", 0x270, "ObjectProperty"},
            {"SelectedConsoleBeatmatchIMC", 0x280, "ObjectProperty"},
            {"PilgrimPresetConfiguration", 0x2B0, "WeakObjectProperty"},
            {"ClientPilgrimGame", 0x2C8, "WeakObjectProperty"},
            {"WaitForEventRouterAction", 0x2D8, "ObjectProperty"},
            {"PlayerEnhancedInputSubsystem", 0x2E0, "ObjectProperty"},
            {"CurrentlyAddedPlayerIMCs", 0x2E8, "ArrayProperty"},
        }};
    };

    struct PilgrimPlayerManager
    {
        static constexpr std::string_view Name = "PilgrimPlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bReadyTimerHasEverExpiredThisMatch = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReadyTimerHasEverExpiredThisMatch", 0x118, "BoolProperty"},
        }};
    };

    struct PilgrimPlayerTravelControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimPlayerTravelControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct PilgrimPlayspace
    {
        static constexpr std::string_view Name = "PilgrimPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksMusicPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioReactivityComponent = 0x6D8;
            static constexpr std::uintptr_t ActorPoolComponent = 0x6E0;
            static constexpr std::uintptr_t PilgrimMusicBattleInstances = 0x6E8;
            static constexpr std::uintptr_t MusicClockManager = 0x6F8;
            static constexpr std::uintptr_t MusicTempometer = 0x700;
            static constexpr std::uintptr_t SongPreloader = 0x708;
            static constexpr std::uintptr_t GemAnalyzer = 0x710;
            static constexpr std::uintptr_t PilgrimGameConfig = 0x718;
            static constexpr std::uintptr_t PilgrimSupportedGameplayConfig = 0x720;
            static constexpr std::uintptr_t GameplayOverridesConfig = 0x728;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AudioReactivityComponent", 0x6D8, "ObjectProperty"},
            {"ActorPoolComponent", 0x6E0, "ObjectProperty"},
            {"PilgrimMusicBattleInstances", 0x6E8, "ArrayProperty"},
            {"MusicClockManager", 0x6F8, "ObjectProperty"},
            {"MusicTempometer", 0x700, "ObjectProperty"},
            {"SongPreloader", 0x708, "ObjectProperty"},
            {"GemAnalyzer", 0x710, "ObjectProperty"},
            {"PilgrimGameConfig", 0x718, "ObjectProperty"},
            {"PilgrimSupportedGameplayConfig", 0x720, "ObjectProperty"},
            {"GameplayOverridesConfig", 0x728, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_AudioReactivity
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_AudioReactivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HarmonixPeakTamerSettings = 0xC0;
            static constexpr std::uintptr_t MPCSparksAudioParameters = 0xD8;
            static constexpr std::uintptr_t MPCSparksAudioParametersInstance = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HarmonixPeakTamerSettings", 0xC0, "StructProperty"},
            {"MPCSparksAudioParameters", 0xD8, "ObjectProperty"},
            {"MPCSparksAudioParametersInstance", 0x100, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_LipSyncAssetManager
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_LipSyncAssetManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_LipSyncAssetManager";
        struct Offsets
        {
            static constexpr std::uintptr_t LipSyncSkeleton = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LipSyncSkeleton", 0x100, "ObjectProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_MidiEventDataManager
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_MidiEventDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_MidiEventDataManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiEventDriverChanged = 0xC0;
            static constexpr std::uintptr_t OnMidiEventDataParsed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiEventDriverChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMidiEventDataParsed", 0xE8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimPlayspaceComponent_SongPreloader
    {
        static constexpr std::string_view Name = "PilgrimPlayspaceComponent_SongPreloader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SongToLoad = 0xD8;
            static constexpr std::uintptr_t SongMetadata = 0xE0;
            static constexpr std::uintptr_t PlayersFinishedLoading = 0xE8;
            static constexpr std::uintptr_t bServerFinishedLoading = 0xF8;
            static constexpr std::uintptr_t bBroadcastedLoadingFinished = 0xF9;
            static constexpr std::uintptr_t LoadTimeoutTimerHandle = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SongToLoad", 0xD8, "NameProperty"},
            {"SongMetadata", 0xE0, "ObjectProperty"},
            {"PlayersFinishedLoading", 0xE8, "MapProperty"},
            {"bServerFinishedLoading", 0xF8, "BoolProperty"},
            {"bBroadcastedLoadingFinished", 0xF9, "BoolProperty"},
            {"LoadTimeoutTimerHandle", 0x110, "StructProperty"},
        }};
    };

    struct PilgrimPremadeSetlist
    {
        static constexpr std::string_view Name = "PilgrimPremadeSetlist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SetlistTitle = 0x30;
            static constexpr std::uintptr_t Description = 0x40;
            static constexpr std::uintptr_t SongShortNameList = 0x50;
            static constexpr std::uintptr_t SetlistTag = 0x60;
            static constexpr std::uintptr_t AdditionalTags = 0x68;
            static constexpr std::uintptr_t SetlistArt = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SetlistTitle", 0x30, "TextProperty"},
            {"Description", 0x40, "TextProperty"},
            {"SongShortNameList", 0x50, "ArrayProperty"},
            {"SetlistTag", 0x60, "StructProperty"},
            {"AdditionalTags", 0x68, "StructProperty"},
            {"SetlistArt", 0x88, "SoftObjectProperty"},
        }};
    };

    struct PilgrimQuestDefinitionComponent_TextFormat
    {
        static constexpr std::string_view Name = "PilgrimQuestDefinitionComponent_TextFormat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent_TextFormat";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct PilgrimQuestLibrary
    {
        static constexpr std::string_view Name = "PilgrimQuestLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimRandomSetlist
    {
        static constexpr std::string_view Name = "PilgrimRandomSetlist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumSongsToPopulate = 0xC8;
            static constexpr std::uintptr_t SongFilterQuery = 0xD0;
            static constexpr std::uintptr_t SongList = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumSongsToPopulate", 0xC8, "IntProperty"},
            {"SongFilterQuery", 0xD0, "StructProperty"},
            {"SongList", 0x118, "ArrayProperty"},
        }};
    };

    struct PilgrimRequestFriendScoreWrapper
    {
        static constexpr std::string_view Name = "PilgrimRequestFriendScoreWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimScoreDebugPrinter
    {
        static constexpr std::string_view Name = "PilgrimScoreDebugPrinter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimScoringModel
    {
        static constexpr std::string_view Name = "PilgrimScoringModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameProgress = 0x30;
            static constexpr std::uintptr_t GameConfigSettings = 0xF0;
            static constexpr std::uintptr_t GameConfig = 0x340;
            static constexpr std::uintptr_t OnGemActionResult = 0x348;
            static constexpr std::uintptr_t OwningPlayerState = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GameProgress", 0x30, "StructProperty"},
            {"GameConfigSettings", 0xF0, "StructProperty"},
            {"GameConfig", 0x340, "ObjectProperty"},
            {"OnGemActionResult", 0x348, "MulticastInlineDelegateProperty"},
            {"OwningPlayerState", 0x380, "WeakObjectProperty"},
        }};
    };

    struct PilgrimScoringModifier
    {
        static constexpr std::string_view Name = "PilgrimScoringModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSetlistInterface
    {
        static constexpr std::string_view Name = "PilgrimSetlistInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimSongCatalog
    {
        static constexpr std::string_view Name = "PilgrimSongCatalog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SongsByShortName = 0xC0;
            static constexpr std::uintptr_t SongsByShortMcpTemplateId = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SongsByShortName", 0xC0, "MapProperty"},
            {"SongsByShortMcpTemplateId", 0xD0, "MapProperty"},
        }};
    };

    struct PilgrimSongChallenge
    {
        static constexpr std::string_view Name = "PilgrimSongChallenge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSongChallengeLookupStateChanged = 0x28;
            static constexpr std::uintptr_t OnSongChallengeProgressionStateChanged = 0x38;
            static constexpr std::uintptr_t OnSongQuestChallengeProgressionChanged = 0x48;
            static constexpr std::uintptr_t OwningComponent = 0x68;
            static constexpr std::uintptr_t LookupResult = 0x70;
            static constexpr std::uintptr_t PendingRequest = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnSongChallengeLookupStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"OnSongChallengeProgressionStateChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"OnSongQuestChallengeProgressionChanged", 0x48, "MulticastInlineDelegateProperty"},
            {"OwningComponent", 0x68, "ObjectProperty"},
            {"LookupResult", 0x70, "StructProperty"},
            {"PendingRequest", 0xC8, "ObjectProperty"},
        }};
    };

    struct PilgrimSongChallengesComponent
    {
        static constexpr std::string_view Name = "PilgrimSongChallengesComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSongChallengeLookupStateChanged = 0xC0;
            static constexpr std::uintptr_t OnSongChallengeProgressionStateChanged = 0xD0;
            static constexpr std::uintptr_t OnActiveSongChallengeChanged = 0xE0;
            static constexpr std::uintptr_t Challenges = 0x108;
            static constexpr std::uintptr_t ActiveChallenge = 0x118;
            static constexpr std::uintptr_t PossibleSongQuestChallenges = 0x120;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnSongChallengeLookupStateChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnSongChallengeProgressionStateChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnActiveSongChallengeChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"Challenges", 0x108, "MapProperty"},
            {"ActiveChallenge", 0x118, "ObjectProperty"},
            {"PossibleSongQuestChallenges", 0x120, "ArrayProperty"},
            {"WaitForEventRouterAction", 0x138, "ObjectProperty"},
        }};
    };

    struct PilgrimSongController
    {
        static constexpr std::string_view Name = "PilgrimSongController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MetasoundMixer = 0xC0;
            static constexpr std::uintptr_t PilgrimGameConfig = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MetasoundMixer", 0xC0, "ObjectProperty"},
            {"PilgrimGameConfig", 0xF0, "ObjectProperty"},
        }};
    };

    struct PilgrimSongData
    {
        static constexpr std::string_view Name = "PilgrimSongData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParsedMidiEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t TracksPerDifficulty = 0x60;
            static constexpr std::uintptr_t BeatMarkers = 0xC8;
            static constexpr std::uintptr_t BreakMap = 0x100;
            static constexpr std::uintptr_t SongSectionGemDensityDataMap = 0x110;
            static constexpr std::uintptr_t GameplaySectionGemDensityDataMap = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TracksPerDifficulty", 0x60, "MapProperty"},
            {"BeatMarkers", 0xC8, "ArrayProperty"},
            {"BreakMap", 0x100, "MapProperty"},
            {"SongSectionGemDensityDataMap", 0x110, "MapProperty"},
            {"GameplaySectionGemDensityDataMap", 0x120, "MapProperty"},
        }};
    };

    struct PilgrimSongMetadata
    {
        static constexpr std::string_view Name = "PilgrimSongMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongData";
        struct Offsets
        {
            static constexpr std::uintptr_t StageMoodTag = 0xD8;
            static constexpr std::uintptr_t Genre = 0xE0;
            static constexpr std::uintptr_t Year = 0xF0;
            static constexpr std::uintptr_t StreamingVUID = 0xF8;
            static constexpr std::uintptr_t PreviewVUID = 0x108;
            static constexpr std::uintptr_t duration = 0x118;
            static constexpr std::uintptr_t DrumStartingIntrument = 0x120;
            static constexpr std::uintptr_t BassStartingIntrument = 0x121;
            static constexpr std::uintptr_t GuitarStartingIntrument = 0x122;
            static constexpr std::uintptr_t VocalsStartingIntrument = 0x123;
            static constexpr std::uintptr_t StemmedMusicAsset = 0x128;
            static constexpr std::uintptr_t StemmedMusicAssetRuntime = 0x148;
            static constexpr std::uintptr_t SanitizedSearchString = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"StageMoodTag", 0xD8, "StructProperty"},
            {"Genre", 0xE0, "ArrayProperty"},
            {"Year", 0xF0, "IntProperty"},
            {"StreamingVUID", 0xF8, "StrProperty"},
            {"PreviewVUID", 0x108, "StrProperty"},
            {"duration", 0x118, "StructProperty"},
            {"DrumStartingIntrument", 0x120, "EnumProperty"},
            {"BassStartingIntrument", 0x121, "EnumProperty"},
            {"GuitarStartingIntrument", 0x122, "EnumProperty"},
            {"VocalsStartingIntrument", 0x123, "EnumProperty"},
            {"StemmedMusicAsset", 0x128, "SoftObjectProperty"},
            {"StemmedMusicAssetRuntime", 0x148, "SoftObjectProperty"},
            {"SanitizedSearchString", 0x168, "StrProperty"},
        }};
    };

    struct PilgrimSongPlayerComponent
    {
        static constexpr std::string_view Name = "PilgrimSongPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayingSongParams = 0xE0;
            static constexpr std::uintptr_t PlayingSongData = 0x108;
            static constexpr std::uintptr_t PlayingMusicAsset = 0x110;
            static constexpr std::uintptr_t MediaStreamer = 0x118;
            static constexpr std::uintptr_t MetasoundPlayerGeneratorHandle = 0x120;
            static constexpr std::uintptr_t MetasoundPlayerSeekParamPack = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayingSongParams", 0xE0, "StructProperty"},
            {"PlayingSongData", 0x108, "ObjectProperty"},
            {"PlayingMusicAsset", 0x110, "ObjectProperty"},
            {"MediaStreamer", 0x118, "ObjectProperty"},
            {"MetasoundPlayerGeneratorHandle", 0x120, "ObjectProperty"},
            {"MetasoundPlayerSeekParamPack", 0x128, "ObjectProperty"},
        }};
    };

    struct PilgrimSongVotingComponent
    {
        static constexpr std::string_view Name = "PilgrimSongVotingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PilgrimSongVotingControllerComponent
    {
        static constexpr std::string_view Name = "PilgrimSongVotingControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct PilgrimStandinDirector
    {
        static constexpr std::string_view Name = "PilgrimStandinDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedStandinPawns = 0x118;
            static constexpr std::uintptr_t SpawnedStandinStates = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnedStandinPawns", 0x118, "ArrayProperty"},
            {"SpawnedStandinStates", 0x128, "ArrayProperty"},
        }};
    };

    struct PilgrimSupportedGameplayConfig
    {
        static constexpr std::string_view Name = "PilgrimSupportedGameplayConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedDifficulties = 0x28;
            static constexpr std::uintptr_t SupportedTrackTypes = 0x38;
            static constexpr std::uintptr_t TouchInputSupportedTrackTypes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SupportedDifficulties", 0x28, "ArrayProperty"},
            {"SupportedTrackTypes", 0x38, "ArrayProperty"},
            {"TouchInputSupportedTrackTypes", 0x48, "ArrayProperty"},
        }};
    };

    struct PilgrimSustainTrackItemMgr
    {
        static constexpr std::string_view Name = "PilgrimSustainTrackItemMgr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItemMgr";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckedItemBaseClass = 0xC0;
            static constexpr std::uintptr_t Track = 0xC8;
            static constexpr std::uintptr_t ItemPool = 0xD0;
            static constexpr std::uintptr_t PilgrimGame = 0xD8;
            static constexpr std::uintptr_t ActiveItems = 0xE0;
            static constexpr std::uintptr_t ActiveItemsMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CheckedItemBaseClass", 0xC0, "ClassProperty"},
            {"Track", 0xC8, "WeakObjectProperty"},
            {"ItemPool", 0xD0, "ObjectProperty"},
            {"PilgrimGame", 0xD8, "WeakObjectProperty"},
            {"ActiveItems", 0xE0, "ArrayProperty"},
            {"ActiveItemsMap", 0xF0, "MapProperty"},
        }};
    };

    struct PilgrimTogglePlasticInstrumentAbility
    {
        static constexpr std::string_view Name = "PilgrimTogglePlasticInstrumentAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct PilgrimTouchButtonBase
    {
        static constexpr std::string_view Name = "PilgrimTouchButtonBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PressAction = 0x338;
            static constexpr std::uintptr_t SwipeAction = 0x340;
            static constexpr std::uintptr_t WidgetTransitionType = 0x348;
            static constexpr std::uintptr_t DeactivateInputActionIfDragOutsideHitbox = 0x349;
            static constexpr std::uintptr_t DeactivateInputActionIfCollapsed = 0x34A;
            static constexpr std::uintptr_t PressedColor = 0x34C;
            static constexpr std::uintptr_t ReleasedColor = 0x35C;
            static constexpr std::uintptr_t Image_Icon = 0x370;
            static constexpr std::uintptr_t SwipeDistance = 0x378;
            static constexpr std::uintptr_t ScreenSpaceButtonBoundaries = 0x380;
            static constexpr std::uintptr_t OnPilgrimButtonTouchStart = 0x390;
            static constexpr std::uintptr_t OnPilgrimButtonTouch = 0x3A0;
            static constexpr std::uintptr_t OnPilgrimButtonTouchEnd = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PressAction", 0x338, "ObjectProperty"},
            {"SwipeAction", 0x340, "ObjectProperty"},
            {"WidgetTransitionType", 0x348, "EnumProperty"},
            {"DeactivateInputActionIfDragOutsideHitbox", 0x349, "BoolProperty"},
            {"DeactivateInputActionIfCollapsed", 0x34A, "BoolProperty"},
            {"PressedColor", 0x34C, "StructProperty"},
            {"ReleasedColor", 0x35C, "StructProperty"},
            {"Image_Icon", 0x370, "ObjectProperty"},
            {"SwipeDistance", 0x378, "FloatProperty"},
            {"ScreenSpaceButtonBoundaries", 0x380, "ArrayProperty"},
            {"OnPilgrimButtonTouchStart", 0x390, "MulticastInlineDelegateProperty"},
            {"OnPilgrimButtonTouch", 0x3A0, "MulticastInlineDelegateProperty"},
            {"OnPilgrimButtonTouchEnd", 0x3B0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimTouchInputLibrary
    {
        static constexpr std::string_view Name = "PilgrimTouchInputLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimTrack
    {
        static constexpr std::string_view Name = "PilgrimTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TopOfTrack = 0x280;
            static constexpr std::uintptr_t PilgrimGemClass = 0x288;
            static constexpr std::uintptr_t BeatMarkerClass = 0x290;
            static constexpr std::uintptr_t SustainClass = 0x298;
            static constexpr std::uintptr_t TrackMeshComponent = 0x2A0;
            static constexpr std::uintptr_t NowBarChildActor = 0x2A8;
            static constexpr std::uintptr_t PilgrimTrackMaterialParameterCollection = 0x2B0;
            static constexpr std::uintptr_t PilgrimTrackMaterialParameterCollectionInstance = 0x2B8;
            static constexpr std::uintptr_t TrackCaptureComponent = 0x2C0;
            static constexpr std::uintptr_t PilgrimGame = 0x2C8;
            static constexpr std::uintptr_t TrackAndGameManagerComponent = 0x2D0;
            static constexpr std::uintptr_t CachedNowBar = 0x2D8;
            static constexpr std::uintptr_t GemMgr = 0x2E0;
            static constexpr std::uintptr_t SustainMgr = 0x2E8;
            static constexpr std::uintptr_t BeatMarkerMgr = 0x2F0;
            static constexpr std::uintptr_t OwningPlayer = 0x2F8;
            static constexpr std::uintptr_t SmasherMap = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"TopOfTrack", 0x280, "ObjectProperty"},
            {"PilgrimGemClass", 0x288, "ClassProperty"},
            {"BeatMarkerClass", 0x290, "ClassProperty"},
            {"SustainClass", 0x298, "ClassProperty"},
            {"TrackMeshComponent", 0x2A0, "ObjectProperty"},
            {"NowBarChildActor", 0x2A8, "ObjectProperty"},
            {"PilgrimTrackMaterialParameterCollection", 0x2B0, "ObjectProperty"},
            {"PilgrimTrackMaterialParameterCollectionInstance", 0x2B8, "ObjectProperty"},
            {"TrackCaptureComponent", 0x2C0, "ObjectProperty"},
            {"PilgrimGame", 0x2C8, "ObjectProperty"},
            {"TrackAndGameManagerComponent", 0x2D0, "ObjectProperty"},
            {"CachedNowBar", 0x2D8, "WeakObjectProperty"},
            {"GemMgr", 0x2E0, "ObjectProperty"},
            {"SustainMgr", 0x2E8, "ObjectProperty"},
            {"BeatMarkerMgr", 0x2F0, "ObjectProperty"},
            {"OwningPlayer", 0x2F8, "ObjectProperty"},
            {"SmasherMap", 0x300, "MapProperty"},
        }};
    };

    struct PilgrimTrackAndGameManagerComponent
    {
        static constexpr std::string_view Name = "PilgrimTrackAndGameManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRenderTargetSetup = 0xC0;
            static constexpr std::uintptr_t TrackClassToSpawn = 0xD0;
            static constexpr std::uintptr_t TrackSceneStartingPos = 0xD8;
            static constexpr std::uintptr_t TrackScale = 0xF0;
            static constexpr std::uintptr_t NumPooledGemsPerTrack = 0x108;
            static constexpr std::uintptr_t NumPooledSustainsPerTrack = 0x10C;
            static constexpr std::uintptr_t NumPooledBeatMarkersPerTrack = 0x110;
            static constexpr std::uintptr_t MinimumTrackCountForItemPools = 0x114;
            static constexpr std::uintptr_t bFillTrackItemPoolsOnBeginPlay = 0x118;
            static constexpr std::uintptr_t bDestroyItemPoolsOnEndPlay = 0x119;
            static constexpr std::uintptr_t bShrinkTrackItemPoolsAutomatically = 0x11A;
            static constexpr std::uintptr_t TrackMaterialParameterCollection = 0x120;
            static constexpr std::uintptr_t TrackSecondaryElementPhaseParameterName = 0x128;
            static constexpr std::uintptr_t TrackScaleXParameterName = 0x12C;
            static constexpr std::uintptr_t TrackScaleYParameterName = 0x130;
            static constexpr std::uintptr_t TrackScaleZParameterName = 0x134;
            static constexpr std::uintptr_t CaptureComp = 0x138;
            static constexpr std::uintptr_t Tracks = 0x140;
            static constexpr std::uintptr_t PilgrimGames = 0x150;
            static constexpr std::uintptr_t TrackItemPoolComponent = 0x160;
            static constexpr std::uintptr_t GemActorPool = 0x168;
            static constexpr std::uintptr_t SustainActorPool = 0x170;
            static constexpr std::uintptr_t BeatMarkerActorPool = 0x178;
            static constexpr std::uintptr_t InternalTrackAndGameData = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"OnRenderTargetSetup", 0xC0, "MulticastInlineDelegateProperty"},
            {"TrackClassToSpawn", 0xD0, "ClassProperty"},
            {"TrackSceneStartingPos", 0xD8, "StructProperty"},
            {"TrackScale", 0xF0, "StructProperty"},
            {"NumPooledGemsPerTrack", 0x108, "IntProperty"},
            {"NumPooledSustainsPerTrack", 0x10C, "IntProperty"},
            {"NumPooledBeatMarkersPerTrack", 0x110, "IntProperty"},
            {"MinimumTrackCountForItemPools", 0x114, "IntProperty"},
            {"bFillTrackItemPoolsOnBeginPlay", 0x118, "BoolProperty"},
            {"bDestroyItemPoolsOnEndPlay", 0x119, "BoolProperty"},
            {"bShrinkTrackItemPoolsAutomatically", 0x11A, "BoolProperty"},
            {"TrackMaterialParameterCollection", 0x120, "ObjectProperty"},
            {"TrackSecondaryElementPhaseParameterName", 0x128, "NameProperty"},
            {"TrackScaleXParameterName", 0x12C, "NameProperty"},
            {"TrackScaleYParameterName", 0x130, "NameProperty"},
            {"TrackScaleZParameterName", 0x134, "NameProperty"},
            {"CaptureComp", 0x138, "ObjectProperty"},
            {"Tracks", 0x140, "ArrayProperty"},
            {"PilgrimGames", 0x150, "ArrayProperty"},
            {"TrackItemPoolComponent", 0x160, "ObjectProperty"},
            {"GemActorPool", 0x168, "ObjectProperty"},
            {"SustainActorPool", 0x170, "ObjectProperty"},
            {"BeatMarkerActorPool", 0x178, "ObjectProperty"},
            {"InternalTrackAndGameData", 0x180, "ArrayProperty"},
        }};
    };

    struct PilgrimTrackCaptureComponent
    {
        static constexpr std::string_view Name = "PilgrimTrackCaptureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneCaptureComponent2D";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutDefinitions = 0xC40;
            static constexpr std::uintptr_t ViewportOrigin = 0xC48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LayoutDefinitions", 0xC40, "ObjectProperty"},
            {"ViewportOrigin", 0xC48, "StructProperty"},
        }};
    };

    struct PilgrimTrackCaptureLayoutDefinitions
    {
        static constexpr std::string_view Name = "PilgrimTrackCaptureLayoutDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCropAspectRatio = 0x28;
            static constexpr std::uintptr_t Definitions = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseCropAspectRatio", 0x28, "BoolProperty"},
            {"Definitions", 0x30, "ArrayProperty"},
        }};
    };

    struct PilgrimTrackItem
    {
        static constexpr std::string_view Name = "PilgrimTrackItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemInfo = 0x278;
            static constexpr std::uintptr_t ParentTrack = 0x2C8;
            static constexpr std::uintptr_t ParentGame = 0x2D0;
            static constexpr std::uintptr_t bHasPassedNowBar = 0x2D8;
            static constexpr std::uintptr_t DistanceFromNowBar = 0x2DC;
            static constexpr std::uintptr_t LastFrameDistanceFromNowBar = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemInfo", 0x278, "StructProperty"},
            {"ParentTrack", 0x2C8, "ObjectProperty"},
            {"ParentGame", 0x2D0, "ObjectProperty"},
            {"bHasPassedNowBar", 0x2D8, "BoolProperty"},
            {"DistanceFromNowBar", 0x2DC, "FloatProperty"},
            {"LastFrameDistanceFromNowBar", 0x2E0, "FloatProperty"},
        }};
    };

    struct PilgrimTrackItemMgr
    {
        static constexpr std::string_view Name = "PilgrimTrackItemMgr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckedItemBaseClass = 0xC0;
            static constexpr std::uintptr_t Track = 0xC8;
            static constexpr std::uintptr_t ItemPool = 0xD0;
            static constexpr std::uintptr_t PilgrimGame = 0xD8;
            static constexpr std::uintptr_t ActiveItems = 0xE0;
            static constexpr std::uintptr_t ActiveItemsMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CheckedItemBaseClass", 0xC0, "ClassProperty"},
            {"Track", 0xC8, "WeakObjectProperty"},
            {"ItemPool", 0xD0, "ObjectProperty"},
            {"PilgrimGame", 0xD8, "WeakObjectProperty"},
            {"ActiveItems", 0xE0, "ArrayProperty"},
            {"ActiveItemsMap", 0xF0, "MapProperty"},
        }};
    };

    struct PilgrimTrackSelectionComponent
    {
        static constexpr std::string_view Name = "PilgrimTrackSelectionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedTrack = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectedTrack", 0xC0, "EnumProperty"},
        }};
    };

    struct PilgrimTrackSustain
    {
        static constexpr std::string_view Name = "PilgrimTrackSustain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimTrackItem";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackUnitDistanceStart = 0x2E8;
            static constexpr std::uintptr_t TrackUnitDistanceEnd = 0x2EC;
            static constexpr std::uintptr_t bIsCurrentlyPressed = 0x2F0;
            static constexpr std::uintptr_t ParentSmasher = 0x2F8;
            static constexpr std::uintptr_t CreatedSplineMeshes = 0x300;
            static constexpr std::uintptr_t StartCapSplineMesh = 0x310;
            static constexpr std::uintptr_t EndCapSplineMesh = 0x318;
            static constexpr std::uintptr_t NumTrackSegments = 0x320;
            static constexpr std::uintptr_t SustainUVStart = 0x324;
            static constexpr std::uintptr_t SustainUVEnd = 0x328;
            static constexpr std::uintptr_t SustainWidthScale = 0x32C;
            static constexpr std::uintptr_t SustainBodyStartPosPaddingMs = 0x330;
            static constexpr std::uintptr_t SustainBodyEndPosPaddingMs = 0x334;
            static constexpr std::uintptr_t SustainCapDurationMs = 0x338;
            static constexpr std::uintptr_t bCollapseAtNowBarEnabled = 0x33C;
            static constexpr std::uintptr_t FullSustainUnclampedLength = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"TrackUnitDistanceStart", 0x2E8, "FloatProperty"},
            {"TrackUnitDistanceEnd", 0x2EC, "FloatProperty"},
            {"bIsCurrentlyPressed", 0x2F0, "BoolProperty"},
            {"ParentSmasher", 0x2F8, "ObjectProperty"},
            {"CreatedSplineMeshes", 0x300, "ArrayProperty"},
            {"StartCapSplineMesh", 0x310, "ObjectProperty"},
            {"EndCapSplineMesh", 0x318, "ObjectProperty"},
            {"NumTrackSegments", 0x320, "IntProperty"},
            {"SustainUVStart", 0x324, "FloatProperty"},
            {"SustainUVEnd", 0x328, "FloatProperty"},
            {"SustainWidthScale", 0x32C, "FloatProperty"},
            {"SustainBodyStartPosPaddingMs", 0x330, "FloatProperty"},
            {"SustainBodyEndPosPaddingMs", 0x334, "FloatProperty"},
            {"SustainCapDurationMs", 0x338, "FloatProperty"},
            {"bCollapseAtNowBarEnabled", 0x33C, "BoolProperty"},
            {"FullSustainUnclampedLength", 0x340, "FloatProperty"},
        }};
    };

    struct PilgrimWaitForEventRouterAction
    {
        static constexpr std::string_view Name = "PilgrimWaitForEventRouterAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventRouterAvailable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnEventRouterAvailable", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ServerPilgrimGame
    {
        static constexpr std::string_view Name = "ServerPilgrimGame";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameEvaluator = 0x28;
            static constexpr std::uintptr_t ScoringModel = 0x30;
            static constexpr std::uintptr_t SongData = 0x38;
            static constexpr std::uintptr_t SongBeingPlayed = 0x40;
            static constexpr std::uintptr_t OwningPlayerState = 0x48;
            static constexpr std::uintptr_t PilgrimGameConfig = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GameEvaluator", 0x28, "ObjectProperty"},
            {"ScoringModel", 0x30, "ObjectProperty"},
            {"SongData", 0x38, "ObjectProperty"},
            {"SongBeingPlayed", 0x40, "ObjectProperty"},
            {"OwningPlayerState", 0x48, "WeakObjectProperty"},
            {"PilgrimGameConfig", 0x50, "ObjectProperty"},
        }};
    };

}
