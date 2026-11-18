#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricLevelSequencer
{
    struct FabricSongSyncComponent
    {
        static constexpr std::string_view Name = "FabricSongSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinAllowedTempo = 0xC8;
            static constexpr std::uintptr_t MaxAllowedTempo = 0xCC;
            static constexpr std::uintptr_t AllowedTimeSignatureNumerators = 0xD0;
            static constexpr std::uintptr_t AllowedTimeSignatureDenominators = 0xE0;
            static constexpr std::uintptr_t MidiFilePropertyName = 0xF0;
            static constexpr std::uintptr_t OffsetBarsProperty = 0xF4;
            static constexpr std::uintptr_t OffsetBeatsProperty = 0xF8;
            static constexpr std::uintptr_t IgnoreSeeksProperty = 0xFC;
            static constexpr std::uintptr_t MidiFileClockProviderPatchClass = 0x100;
            static constexpr std::uintptr_t AudioComponentName = 0x108;
            static constexpr std::uintptr_t bAllowSpeedAdjustSyncChanges = 0x10C;
            static constexpr std::uintptr_t OnSongSyncPlayInitiated = 0x110;
            static constexpr std::uintptr_t OnSongSyncStarted = 0x120;
            static constexpr std::uintptr_t OnSongSyncStopped = 0x130;
            static constexpr std::uintptr_t ServerPlaybackRequest = 0x140;
            static constexpr std::uintptr_t PlaybackStartTimestamp = 0x15C;
            static constexpr std::uintptr_t RelativeOffsetTimestampMidi = 0x164;
            static constexpr std::uintptr_t RelativeOffsetTimestampLinked = 0x16C;
            static constexpr std::uintptr_t bWaitForClockRestart = 0x174;
            static constexpr std::uintptr_t CachedTimeStampPreRestart = 0x178;
            static constexpr std::uintptr_t MidiSource = 0x1D8;
            static constexpr std::uintptr_t CurrentFabricMidiProvider = 0x1F0;
            static constexpr std::uintptr_t MidiSourceLatestMidi = 0x200;
            static constexpr std::uintptr_t ServerLevelSequenceActor = 0x208;
            static constexpr std::uintptr_t AuthoritySongSync = 0x224;
            static constexpr std::uintptr_t LinkedSongSyncs = 0x230;
            static constexpr std::uintptr_t CustomClockSource = 0x240;
            static constexpr std::uintptr_t FabricTimelineSyncComponent = 0x248;
            static constexpr std::uintptr_t FollowComponent = 0x250;
            static constexpr std::uintptr_t MusicClock = 0x258;
            static constexpr std::uintptr_t FabricMetaSoundManager = 0x260;
            static constexpr std::uintptr_t MidiFileClockProviderPatchInstance = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"MinAllowedTempo", 0xC8, "FloatProperty"},
            {"MaxAllowedTempo", 0xCC, "FloatProperty"},
            {"AllowedTimeSignatureNumerators", 0xD0, "ArrayProperty"},
            {"AllowedTimeSignatureDenominators", 0xE0, "ArrayProperty"},
            {"MidiFilePropertyName", 0xF0, "NameProperty"},
            {"OffsetBarsProperty", 0xF4, "NameProperty"},
            {"OffsetBeatsProperty", 0xF8, "NameProperty"},
            {"IgnoreSeeksProperty", 0xFC, "NameProperty"},
            {"MidiFileClockProviderPatchClass", 0x100, "ClassProperty"},
            {"AudioComponentName", 0x108, "NameProperty"},
            {"bAllowSpeedAdjustSyncChanges", 0x10C, "BoolProperty"},
            {"OnSongSyncPlayInitiated", 0x110, "MulticastInlineDelegateProperty"},
            {"OnSongSyncStarted", 0x120, "MulticastInlineDelegateProperty"},
            {"OnSongSyncStopped", 0x130, "MulticastInlineDelegateProperty"},
            {"ServerPlaybackRequest", 0x140, "StructProperty"},
            {"PlaybackStartTimestamp", 0x15C, "StructProperty"},
            {"RelativeOffsetTimestampMidi", 0x164, "StructProperty"},
            {"RelativeOffsetTimestampLinked", 0x16C, "StructProperty"},
            {"bWaitForClockRestart", 0x174, "BoolProperty"},
            {"CachedTimeStampPreRestart", 0x178, "StructProperty"},
            {"MidiSource", 0x1D8, "StructProperty"},
            {"CurrentFabricMidiProvider", 0x1F0, "InterfaceProperty"},
            {"MidiSourceLatestMidi", 0x200, "ObjectProperty"},
            {"ServerLevelSequenceActor", 0x208, "StructProperty"},
            {"AuthoritySongSync", 0x224, "WeakObjectProperty"},
            {"LinkedSongSyncs", 0x230, "ArrayProperty"},
            {"CustomClockSource", 0x240, "ObjectProperty"},
            {"FabricTimelineSyncComponent", 0x248, "WeakObjectProperty"},
            {"FollowComponent", 0x250, "WeakObjectProperty"},
            {"MusicClock", 0x258, "WeakObjectProperty"},
            {"FabricMetaSoundManager", 0x260, "WeakObjectProperty"},
            {"MidiFileClockProviderPatchInstance", 0x268, "ObjectProperty"},
        }};
    };

    struct FabricSongSyncUtilityProviderPatchWrapper
    {
        static constexpr std::string_view Name = "FabricSongSyncUtilityProviderPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundUtilityProviderPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t ClockProviderMidiFileInName = 0x1A0;
            static constexpr std::uintptr_t DefaultMidiFile = 0x1A8;
            static constexpr std::uintptr_t TempoMapMidiFile = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClockProviderMidiFileInName", 0x1A0, "NameProperty"},
            {"DefaultMidiFile", 0x1A8, "ObjectProperty"},
            {"TempoMapMidiFile", 0x1B0, "WeakObjectProperty"},
        }};
    };

    struct PlaylistUserOptionLinkedSequence
    {
        static constexpr std::string_view Name = "PlaylistUserOptionLinkedSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

    struct PlaylistUserOptionLinkedSongSyncList
    {
        static constexpr std::string_view Name = "PlaylistUserOptionLinkedSongSyncList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

    struct PlaylistUserOptionMidiSource
    {
        static constexpr std::string_view Name = "PlaylistUserOptionMidiSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlaylistUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x1B0, "StructProperty"},
        }};
    };

}
