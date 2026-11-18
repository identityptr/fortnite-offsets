#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSongPlayerRuntime
{
    struct SparksMediaStreamer
    {
        static constexpr std::string_view Name = "SparksMediaStreamer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamingStatus = 0x70;
            static constexpr std::uintptr_t LastStreamError = 0x71;
            static constexpr std::uintptr_t Song = 0x78;
            static constexpr std::uintptr_t PlayParams = 0x80;
            static constexpr std::uintptr_t FortBaseStreaming = 0x110;
            static constexpr std::uintptr_t StemmedMediaStreamAsset = 0x118;
            static constexpr std::uintptr_t InstancedBusStemConfig = 0x120;
            static constexpr std::uintptr_t MidiFile = 0x128;
            static constexpr std::uintptr_t ParsedMidiEventData = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StreamingStatus", 0x70, "EnumProperty"},
            {"LastStreamError", 0x71, "StructProperty"},
            {"Song", 0x78, "ObjectProperty"},
            {"PlayParams", 0x80, "StructProperty"},
            {"FortBaseStreaming", 0x110, "ObjectProperty"},
            {"StemmedMediaStreamAsset", 0x118, "ObjectProperty"},
            {"InstancedBusStemConfig", 0x120, "ObjectProperty"},
            {"MidiFile", 0x128, "ObjectProperty"},
            {"ParsedMidiEventData", 0x130, "ObjectProperty"},
        }};
    };

    struct SparksMusicClockSyncComponent
    {
        static constexpr std::string_view Name = "SparksMusicClockSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedMusicClockComponent = 0xC0;
            static constexpr std::uintptr_t CurrentSongServerTimestamp = 0xC8;
            static constexpr std::uintptr_t ServerTimestampRecordingTimerHandle = 0x118;
            static constexpr std::uintptr_t ServerTimestampRecordingFrequency = 0x128;
            static constexpr std::uintptr_t MinDeltaForSeek = 0x150;
            static constexpr std::uintptr_t EndCorrectionDelta = 0x178;
            static constexpr std::uintptr_t SpeedAdjustmentFactor = 0x1A0;
            static constexpr std::uintptr_t CurrentSpeed = 0x1C8;
            static constexpr std::uintptr_t ClientOffsetMs = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OwnedMusicClockComponent", 0xC0, "WeakObjectProperty"},
            {"CurrentSongServerTimestamp", 0xC8, "StructProperty"},
            {"ServerTimestampRecordingTimerHandle", 0x118, "StructProperty"},
            {"ServerTimestampRecordingFrequency", 0x128, "StructProperty"},
            {"MinDeltaForSeek", 0x150, "StructProperty"},
            {"EndCorrectionDelta", 0x178, "StructProperty"},
            {"SpeedAdjustmentFactor", 0x1A0, "StructProperty"},
            {"CurrentSpeed", 0x1C8, "FloatProperty"},
            {"ClientOffsetMs", 0x1CC, "FloatProperty"},
        }};
    };

    struct SparksSongPlayer
    {
        static constexpr std::string_view Name = "SparksSongPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SongPlayerDataCached = 0x80;
            static constexpr std::uintptr_t CurrentSong = 0x88;
            static constexpr std::uintptr_t PendingSong = 0xA0;
            static constexpr std::uintptr_t MediaStreamer = 0xB8;
            static constexpr std::uintptr_t AudioComponent = 0xC0;
            static constexpr std::uintptr_t PendingSongDebounceTimer = 0xD0;
            static constexpr std::uintptr_t DelayedStopSongTimer = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SongPlayerDataCached", 0x80, "ObjectProperty"},
            {"CurrentSong", 0x88, "ObjectProperty"},
            {"PendingSong", 0xA0, "ObjectProperty"},
            {"MediaStreamer", 0xB8, "ObjectProperty"},
            {"AudioComponent", 0xC0, "ObjectProperty"},
            {"PendingSongDebounceTimer", 0xD0, "StructProperty"},
            {"DelayedStopSongTimer", 0xE0, "StructProperty"},
        }};
    };

    struct SparksSongPlayerData
    {
        static constexpr std::string_view Name = "SparksSongPlayerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BusStemConfiguration = 0x28;
            static constexpr std::uintptr_t StereoMetaSound = 0x30;
            static constexpr std::uintptr_t StemMixerMetaSound = 0x38;
            static constexpr std::uintptr_t PreviewMetaSound = 0x40;
            static constexpr std::uintptr_t LicensedAudioControlBus = 0x48;
            static constexpr std::uintptr_t StereoStemAssetTemplate = 0x50;
            static constexpr std::uintptr_t DefaultFadeInDuration = 0x68;
            static constexpr std::uintptr_t DebounceDuration = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"BusStemConfiguration", 0x28, "ObjectProperty"},
            {"StereoMetaSound", 0x30, "ObjectProperty"},
            {"StemMixerMetaSound", 0x38, "ObjectProperty"},
            {"PreviewMetaSound", 0x40, "ObjectProperty"},
            {"LicensedAudioControlBus", 0x48, "ObjectProperty"},
            {"StereoStemAssetTemplate", 0x50, "StructProperty"},
            {"DefaultFadeInDuration", 0x68, "FloatProperty"},
            {"DebounceDuration", 0x6C, "FloatProperty"},
        }};
    };

    struct SparksSongPlayerPlayCoordinator
    {
        static constexpr std::string_view Name = "SparksSongPlayerPlayCoordinator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStartSongSyncCountdown = 0x108;
            static constexpr std::uintptr_t TimeToStartSyncedClock = 0x118;
            static constexpr std::uintptr_t ClientLatencyCatchupTimerHandle = 0x148;
            static constexpr std::uintptr_t ServerStartTime = 0x158;
            static constexpr std::uintptr_t bServerHasReceivedPlaySongRequest = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStartSongSyncCountdown", 0x108, "MulticastInlineDelegateProperty"},
            {"TimeToStartSyncedClock", 0x118, "StructProperty"},
            {"ClientLatencyCatchupTimerHandle", 0x148, "StructProperty"},
            {"ServerStartTime", 0x158, "FloatProperty"},
            {"bServerHasReceivedPlaySongRequest", 0x15C, "BoolProperty"},
        }};
    };

    struct SparksSongPlayerPreloadControllerComponent
    {
        static constexpr std::string_view Name = "SparksSongPlayerPreloadControllerComponent";
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

    struct SparksSongPlayerSubsystem
    {
        static constexpr std::string_view Name = "SparksSongPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksSongPreviewerComponent
    {
        static constexpr std::string_view Name = "SparksSongPreviewerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicEventTag = 0xC0;
            static constexpr std::uintptr_t MusicEventGroup = 0xC4;
            static constexpr std::uintptr_t MusicEventBehaviorTags = 0xC8;
            static constexpr std::uintptr_t CurrentPreviewedSong = 0xE8;
            static constexpr std::uintptr_t FadeOutTime = 0x100;
            static constexpr std::uintptr_t bStopPreviewOnEndPlay = 0x104;
            static constexpr std::uintptr_t bPlayFullTrackForOwnedSongs = 0x105;
            static constexpr std::uintptr_t bShouldInterruptOtherPlayback = 0x106;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MusicEventTag", 0xC0, "StructProperty"},
            {"MusicEventGroup", 0xC4, "NameProperty"},
            {"MusicEventBehaviorTags", 0xC8, "StructProperty"},
            {"CurrentPreviewedSong", 0xE8, "ObjectProperty"},
            {"FadeOutTime", 0x100, "FloatProperty"},
            {"bStopPreviewOnEndPlay", 0x104, "BoolProperty"},
            {"bPlayFullTrackForOwnedSongs", 0x105, "BoolProperty"},
            {"bShouldInterruptOtherPlayback", 0x106, "BoolProperty"},
        }};
    };

}
