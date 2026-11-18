#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeatSyncedAnimMetaData
{
    struct BeatSyncedAnimMetaData
    {
        static constexpr std::string_view Name = "BeatSyncedAnimMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t BeatAlignment = 0x28;
            static constexpr std::uintptr_t BeatB = 0x2C;
            static constexpr std::uintptr_t Bpm = 0x30;
            static constexpr std::uintptr_t FirstBeatAtFrame = 0x34;
            static constexpr std::uintptr_t PivotBeat = 0x38;
            static constexpr std::uintptr_t TransitionBias = 0x3C;
            static constexpr std::uintptr_t bAllowDoublingHalving = 0x40;
            static constexpr std::uintptr_t bLoopFromPivot = 0x41;
            static constexpr std::uintptr_t TempoVariants = 0x48;
            static constexpr std::uintptr_t BeatTrack = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BeatAlignment", 0x28, "EnumProperty"},
            {"BeatB", 0x2C, "FloatProperty"},
            {"Bpm", 0x30, "FloatProperty"},
            {"FirstBeatAtFrame", 0x34, "FloatProperty"},
            {"PivotBeat", 0x38, "EnumProperty"},
            {"TransitionBias", 0x3C, "FloatProperty"},
            {"bAllowDoublingHalving", 0x40, "BoolProperty"},
            {"bLoopFromPivot", 0x41, "BoolProperty"},
            {"TempoVariants", 0x48, "ArrayProperty"},
            {"BeatTrack", 0x58, "ArrayProperty"},
        }};
    };

    struct BeatSyncedAnimMusicClockSettings
    {
        static constexpr std::string_view Name = "BeatSyncedAnimMusicClockSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicClockSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimInstance = 0x18;
            static constexpr std::uintptr_t AnimMontage = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimInstance", 0x18, "WeakObjectProperty"},
            {"AnimMontage", 0x20, "WeakObjectProperty"},
        }};
    };

    struct BeatSyncedAnimMusicSourceSettings
    {
        static constexpr std::string_view Name = "BeatSyncedAnimMusicSourceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimInstance = 0x8;
            static constexpr std::uintptr_t AnimMontage = 0x10;
            static constexpr std::uintptr_t TimeSigNumerator = 0x18;
            static constexpr std::uintptr_t TimeSigDenominator = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimInstance", 0x8, "ObjectProperty"},
            {"AnimMontage", 0x10, "ObjectProperty"},
            {"TimeSigNumerator", 0x18, "IntProperty"},
            {"TimeSigDenominator", 0x1C, "IntProperty"},
        }};
    };

    struct BeatSyncedEmoteMetaData
    {
        static constexpr std::string_view Name = "BeatSyncedEmoteMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeatSyncedAnimMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideGroupEmoteBeatsyncingBehavior = 0x68;
            static constexpr std::uintptr_t bAllowGroupEmoteLeaderToBeatSync = 0x69;
            static constexpr std::uintptr_t bAllowGroupEmoteFollowerToBeatSync = 0x6A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bOverrideGroupEmoteBeatsyncingBehavior", 0x68, "BoolProperty"},
            {"bAllowGroupEmoteLeaderToBeatSync", 0x69, "BoolProperty"},
            {"bAllowGroupEmoteFollowerToBeatSync", 0x6A, "BoolProperty"},
        }};
    };

    struct BeatTrackEntry
    {
        static constexpr std::string_view Name = "BeatTrackEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Seconds = 0x0;
            static constexpr std::uintptr_t Beat = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Seconds", 0x0, "FloatProperty"},
            {"Beat", 0x4, "FloatProperty"},
        }};
    };

    struct TimeScaledAnimMetaData
    {
        static constexpr std::string_view Name = "TimeScaledAnimMetaData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackScale = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlaybackScale", 0x28, "FloatProperty"},
        }};
    };

}
