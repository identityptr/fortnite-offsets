#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarAudio
{
    struct FortDelMarAudioAudioCookSettings
    {
        static constexpr std::string_view Name = "FortDelMarAudioAudioCookSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWaveChannelThreshold = 0x28;
            static constexpr std::uintptr_t PathsToScan = 0x30;
            static constexpr std::uintptr_t PlatformQualitySettingsToExclude = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SoundWaveChannelThreshold", 0x28, "IntProperty"},
            {"PathsToScan", 0x30, "ArrayProperty"},
            {"PlatformQualitySettingsToExclude", 0x40, "ArrayProperty"},
        }};
    };

    struct FortDelMarAudioPassbyComponent
    {
        static constexpr std::string_view Name = "FortDelMarAudioPassbyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarAudioProximityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PassbySound = 0x118;
            static constexpr std::uintptr_t PassbyComponent = 0x120;
            static constexpr std::uintptr_t OnPassbyStart = 0x128;
            static constexpr std::uintptr_t OnPassbyStop = 0x138;
            static constexpr std::uintptr_t MinRelativeSpeed = 0x148;
            static constexpr std::uintptr_t MinSpeedStopThresholdOffset = 0x14C;
            static constexpr std::uintptr_t PassbyStartRadiusMax = 0x150;
            static constexpr std::uintptr_t PassbyStartRadiusMin = 0x154;
            static constexpr std::uintptr_t MinRelativeDirection = 0x158;
            static constexpr std::uintptr_t PassbyCooldown = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PassbySound", 0x118, "ObjectProperty"},
            {"PassbyComponent", 0x120, "ObjectProperty"},
            {"OnPassbyStart", 0x128, "MulticastInlineDelegateProperty"},
            {"OnPassbyStop", 0x138, "MulticastInlineDelegateProperty"},
            {"MinRelativeSpeed", 0x148, "FloatProperty"},
            {"MinSpeedStopThresholdOffset", 0x14C, "FloatProperty"},
            {"PassbyStartRadiusMax", 0x150, "FloatProperty"},
            {"PassbyStartRadiusMin", 0x154, "FloatProperty"},
            {"MinRelativeDirection", 0x158, "FloatProperty"},
            {"PassbyCooldown", 0x15C, "FloatProperty"},
        }};
    };

    struct FortDelMarAudioProximityComponent
    {
        static constexpr std::string_view Name = "FortDelMarAudioProximityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDelMarAudioProximityComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProximitySound = 0xF8;
            static constexpr std::uintptr_t ProximityComponent = 0x100;
            static constexpr std::uintptr_t ObjectScaleAttenuationModifier = 0x108;
            static constexpr std::uintptr_t FadeOutDuration = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProximitySound", 0xF8, "ObjectProperty"},
            {"ProximityComponent", 0x100, "ObjectProperty"},
            {"ObjectScaleAttenuationModifier", 0x108, "FloatProperty"},
            {"FadeOutDuration", 0x10C, "FloatProperty"},
        }};
    };

    struct FortDelMarAudioProximityComponentBase
    {
        static constexpr std::string_view Name = "FortDelMarAudioProximityComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProximityStart = 0xC0;
            static constexpr std::uintptr_t OnProximityStop = 0xD0;
            static constexpr std::uintptr_t bProximityActive = 0xE0;
            static constexpr std::uintptr_t Subsystem = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnProximityStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnProximityStop", 0xD0, "MulticastInlineDelegateProperty"},
            {"bProximityActive", 0xE0, "BoolProperty"},
            {"Subsystem", 0xF0, "ObjectProperty"},
        }};
    };

    struct FortDelMarAudioProximitySubsystem
    {
        static constexpr std::string_view Name = "FortDelMarAudioProximitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
