#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricEngineSequencer
{
    struct FabricAudioSyncSection
    {
        static constexpr std::string_view Name = "FabricAudioSyncSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneAudioSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncSoundVolume = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SyncSoundVolume", 0x480, "StructProperty"},
        }};
    };

    struct FabricAudioSyncTrack
    {
        static constexpr std::string_view Name = "FabricAudioSyncTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneAudioTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct FabricAudioSyncTrackInstance
    {
        static constexpr std::string_view Name = "FabricAudioSyncTrackInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakAnimatedObject = 0x28;
            static constexpr std::uintptr_t bIsRootTrackInstance = 0x30;
            static constexpr std::uintptr_t PrivateLinker = 0x38;
            static constexpr std::uintptr_t Inputs = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WeakAnimatedObject", 0x28, "WeakObjectProperty"},
            {"bIsRootTrackInstance", 0x30, "BoolProperty"},
            {"PrivateLinker", 0x38, "ObjectProperty"},
            {"Inputs", 0x40, "ArrayProperty"},
        }};
    };

    struct MusicClockMovieSceneClockSource
    {
        static constexpr std::string_view Name = "MusicClockMovieSceneClockSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
