#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusicalMode
{
    struct MovieSceneMusicTimeTransform
    {
        static constexpr std::string_view Name = "MovieSceneMusicTimeTransform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTimeWarpGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t OuterClock = 0x70;
            static constexpr std::uintptr_t InnerClock = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OuterClock", 0x70, "WeakObjectProperty"},
            {"InnerClock", 0x78, "WeakObjectProperty"},
        }};
    };

    struct MovieSceneMusicalClock
    {
        static constexpr std::string_view Name = "MovieSceneMusicalClock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneClock";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicMap = 0x58;
            static constexpr std::uintptr_t MusicalAsset = 0x60;
            static constexpr std::uintptr_t ClockLocator = 0x70;
            static constexpr std::uintptr_t ClockTag = 0x80;
            static constexpr std::uintptr_t ClockTagExactMatch = 0x84;
            static constexpr std::uintptr_t RegisterAsGlobalAuthoritativeClock = 0x85;
            static constexpr std::uintptr_t SoundSettings = 0x88;
            static constexpr std::uintptr_t bDisplayFramesAsBarsBeats = 0x90;
            static constexpr std::uintptr_t ClockSourceType = 0x91;
            static constexpr std::uintptr_t MusicMapMode = 0x92;
            static constexpr std::uintptr_t ConductorPriority = 0x93;
            static constexpr std::uintptr_t AuditionTempo = 0x94;
            static constexpr std::uintptr_t bShouldMuteMetronome = 0x98;
            static constexpr std::uintptr_t MetronomeVolumeSetting = 0x9C;
            static constexpr std::uintptr_t CaptureMode = 0xA0;
            static constexpr std::uintptr_t MappingQuantizationUnit = 0xA4;
            static constexpr std::uintptr_t TimeSignatureRemapping = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"MusicMap", 0x58, "ObjectProperty"},
            {"MusicalAsset", 0x60, "InterfaceProperty"},
            {"ClockLocator", 0x70, "StructProperty"},
            {"ClockTag", 0x80, "StructProperty"},
            {"ClockTagExactMatch", 0x84, "BoolProperty"},
            {"RegisterAsGlobalAuthoritativeClock", 0x85, "BoolProperty"},
            {"SoundSettings", 0x88, "ObjectProperty"},
            {"bDisplayFramesAsBarsBeats", 0x90, "BoolProperty"},
            {"ClockSourceType", 0x91, "EnumProperty"},
            {"MusicMapMode", 0x92, "EnumProperty"},
            {"ConductorPriority", 0x93, "EnumProperty"},
            {"AuditionTempo", 0x94, "FloatProperty"},
            {"bShouldMuteMetronome", 0x98, "BoolProperty"},
            {"MetronomeVolumeSetting", 0x9C, "FloatProperty"},
            {"CaptureMode", 0xA0, "EnumProperty"},
            {"MappingQuantizationUnit", 0xA4, "IntProperty"},
            {"TimeSignatureRemapping", 0xA8, "EnumProperty"},
        }};
    };

    struct MusicSection
    {
        static constexpr std::string_view Name = "MusicSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x148;
            static constexpr std::uintptr_t StartFrameOffset = 0x150;
            static constexpr std::uintptr_t bLooping = 0x154;
            static constexpr std::uintptr_t MusicMap = 0x158;
            static constexpr std::uintptr_t SoundVolume = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Sound", 0x148, "ObjectProperty"},
            {"StartFrameOffset", 0x150, "StructProperty"},
            {"bLooping", 0x154, "BoolProperty"},
            {"MusicMap", 0x158, "ObjectProperty"},
            {"SoundVolume", 0x160, "StructProperty"},
        }};
    };

    struct MusicTrack
    {
        static constexpr std::string_view Name = "MusicTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MusicTrackInstance
    {
        static constexpr std::string_view Name = "MusicTrackInstance";
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

}
