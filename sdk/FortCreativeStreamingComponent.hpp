#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortCreativeStreamingComponent
{
    struct FortCreativeStreamingComponent
    {
        static constexpr std::string_view Name = "FortCreativeStreamingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSubmix = 0xC0;
            static constexpr std::uintptr_t LicensedSubmix = 0xC8;
            static constexpr std::uintptr_t AudioAnalysisSubmix = 0xD0;
            static constexpr std::uintptr_t JukeboxMPC = 0xD8;
            static constexpr std::uintptr_t AudioAnalysisSettings = 0xE0;
            static constexpr std::uintptr_t SoundConcurrency = 0x120;
            static constexpr std::uintptr_t MirrorSoundConcurrency = 0x128;
            static constexpr std::uintptr_t AudioSoundClass = 0x130;
            static constexpr std::uintptr_t VideoMaterial = 0x138;
            static constexpr std::uintptr_t MaterialSlot = 0x140;
            static constexpr std::uintptr_t LocalizedOverlays = 0x148;
            static constexpr std::uintptr_t SubtitlesPlayer = 0x150;
            static constexpr std::uintptr_t OnPlayCompleted = 0x1B8;
            static constexpr std::uintptr_t CMSMetadataEvent = 0x1C8;
            static constexpr std::uintptr_t BaseStreamingVideoPlayer = 0x1E0;
            static constexpr std::uintptr_t DeviceComponents = 0x1E8;
            static constexpr std::uintptr_t CurrentlyPlayingData = 0x218;
            static constexpr std::uintptr_t MirroredDevice = 0x260;
            static constexpr std::uintptr_t MirrorAudioComponent = 0x280;
            static constexpr std::uintptr_t MirrorSoundAttenuation = 0x288;
            static constexpr std::uintptr_t StreamingMode = 0x291;
            static constexpr std::uintptr_t OnSubmixSpectralAnalysisDelegate = 0x2C0;
            static constexpr std::uintptr_t CMSEventData = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"DefaultSubmix", 0xC0, "ObjectProperty"},
            {"LicensedSubmix", 0xC8, "ObjectProperty"},
            {"AudioAnalysisSubmix", 0xD0, "ObjectProperty"},
            {"JukeboxMPC", 0xD8, "ObjectProperty"},
            {"AudioAnalysisSettings", 0xE0, "StructProperty"},
            {"SoundConcurrency", 0x120, "ObjectProperty"},
            {"MirrorSoundConcurrency", 0x128, "ObjectProperty"},
            {"AudioSoundClass", 0x130, "ObjectProperty"},
            {"VideoMaterial", 0x138, "ObjectProperty"},
            {"MaterialSlot", 0x140, "IntProperty"},
            {"LocalizedOverlays", 0x148, "ObjectProperty"},
            {"SubtitlesPlayer", 0x150, "ObjectProperty"},
            {"OnPlayCompleted", 0x1B8, "MulticastInlineDelegateProperty"},
            {"CMSMetadataEvent", 0x1C8, "MulticastInlineDelegateProperty"},
            {"BaseStreamingVideoPlayer", 0x1E0, "ObjectProperty"},
            {"DeviceComponents", 0x1E8, "StructProperty"},
            {"CurrentlyPlayingData", 0x218, "StructProperty"},
            {"MirroredDevice", 0x260, "SoftObjectProperty"},
            {"MirrorAudioComponent", 0x280, "ObjectProperty"},
            {"MirrorSoundAttenuation", 0x288, "ObjectProperty"},
            {"StreamingMode", 0x291, "EnumProperty"},
            {"OnSubmixSpectralAnalysisDelegate", 0x2C0, "DelegateProperty"},
            {"CMSEventData", 0x2E8, "StructProperty"},
        }};
    };

    struct FortCreativeStreamingMusicalReactivityComponent
    {
        static constexpr std::string_view Name = "FortCreativeStreamingMusicalReactivityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClockComponentRef = 0xC0;
            static constexpr std::uintptr_t VUIDToTempoMapMidiFile = 0xE8;
            static constexpr std::uintptr_t MusicEventSubsystemEventTag = 0xF8;
            static constexpr std::uintptr_t MusicEventSubsystemBehaviorTags = 0x100;
            static constexpr std::uintptr_t MediaSoundComponent = 0x120;
            static constexpr std::uintptr_t MusicClockComponent = 0x128;
            static constexpr std::uintptr_t StreamingComponent = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MusicClockComponentRef", 0xC0, "StructProperty"},
            {"VUIDToTempoMapMidiFile", 0xE8, "MapProperty"},
            {"MusicEventSubsystemEventTag", 0xF8, "StructProperty"},
            {"MusicEventSubsystemBehaviorTags", 0x100, "StructProperty"},
            {"MediaSoundComponent", 0x120, "WeakObjectProperty"},
            {"MusicClockComponent", 0x128, "WeakObjectProperty"},
            {"StreamingComponent", 0x130, "WeakObjectProperty"},
        }};
    };

}
