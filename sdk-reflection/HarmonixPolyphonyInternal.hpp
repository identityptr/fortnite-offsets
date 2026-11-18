#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixPolyphonyInternal
{
    struct HarmonixMusicSequenceAsset
    {
        static constexpr std::string_view Name = "HarmonixMusicSequenceAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixMusicAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicSequence = 0x38;
            static constexpr std::uintptr_t OutputFormat = 0x40;
            static constexpr std::uintptr_t MaxVoices = 0x44;
            static constexpr std::uintptr_t SoundSettings = 0x48;
            static constexpr std::uintptr_t CachedMetasound = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MusicSequence", 0x38, "ObjectProperty"},
            {"OutputFormat", 0x40, "EnumProperty"},
            {"MaxVoices", 0x44, "IntProperty"},
            {"SoundSettings", 0x48, "ObjectProperty"},
            {"CachedMetasound", 0x50, "ObjectProperty"},
        }};
    };

    struct MusicSequence
    {
        static constexpr std::string_view Name = "MusicSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tracks", 0x30, "ArrayProperty"},
        }};
    };

    struct MusicSequenceSoundSettings
    {
        static constexpr std::string_view Name = "MusicSequenceSoundSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundClassObject = 0x38;
            static constexpr std::uintptr_t bBypassVolumeScaleForPriority = 0x40;
            static constexpr std::uintptr_t bDebug = 0x40;
            static constexpr std::uintptr_t bEnableBaseSubmix = 0x40;
            static constexpr std::uintptr_t bEnableBusSends = 0x40;
            static constexpr std::uintptr_t bEnableSubmixSends = 0x40;
            static constexpr std::uintptr_t bHasConcatenatorNode = 0x40;
            static constexpr std::uintptr_t bHasDelayNode = 0x40;
            static constexpr std::uintptr_t bOverrideConcurrency = 0x40;
            static constexpr std::uintptr_t VirtualizationMode = 0x41;
            static constexpr std::uintptr_t ConcurrencySet = 0x58;
            static constexpr std::uintptr_t ConcurrencyOverrides = 0x68;
            static constexpr std::uintptr_t duration = 0xA8;
            static constexpr std::uintptr_t MaxDistance = 0xAC;
            static constexpr std::uintptr_t TotalSamples = 0xB0;
            static constexpr std::uintptr_t Priority = 0xB4;
            static constexpr std::uintptr_t AttenuationSettings = 0xB8;
            static constexpr std::uintptr_t SoundSubmixObject = 0xC0;
            static constexpr std::uintptr_t SoundSubmixSends = 0xC8;
            static constexpr std::uintptr_t SourceEffectChain = 0xD8;
            static constexpr std::uintptr_t BusSends = 0xE0;
            static constexpr std::uintptr_t PreEffectBusSends = 0xF0;
            static constexpr std::uintptr_t PostAttenuationBusSends = 0x100;
            static constexpr std::uintptr_t AssetUserData = 0x110;
            static constexpr std::uintptr_t TimeCodeOffset = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"SoundClassObject", 0x38, "ObjectProperty"},
            {"bBypassVolumeScaleForPriority", 0x40, "BoolProperty"},
            {"bDebug", 0x40, "BoolProperty"},
            {"bEnableBaseSubmix", 0x40, "BoolProperty"},
            {"bEnableBusSends", 0x40, "BoolProperty"},
            {"bEnableSubmixSends", 0x40, "BoolProperty"},
            {"bHasConcatenatorNode", 0x40, "BoolProperty"},
            {"bHasDelayNode", 0x40, "BoolProperty"},
            {"bOverrideConcurrency", 0x40, "BoolProperty"},
            {"VirtualizationMode", 0x41, "EnumProperty"},
            {"ConcurrencySet", 0x58, "SetProperty"},
            {"ConcurrencyOverrides", 0x68, "StructProperty"},
            {"duration", 0xA8, "FloatProperty"},
            {"MaxDistance", 0xAC, "FloatProperty"},
            {"TotalSamples", 0xB0, "FloatProperty"},
            {"Priority", 0xB4, "FloatProperty"},
            {"AttenuationSettings", 0xB8, "ObjectProperty"},
            {"SoundSubmixObject", 0xC0, "ObjectProperty"},
            {"SoundSubmixSends", 0xC8, "ArrayProperty"},
            {"SourceEffectChain", 0xD8, "ObjectProperty"},
            {"BusSends", 0xE0, "ArrayProperty"},
            {"PreEffectBusSends", 0xF0, "ArrayProperty"},
            {"PostAttenuationBusSends", 0x100, "ArrayProperty"},
            {"AssetUserData", 0x110, "ArrayProperty"},
            {"TimeCodeOffset", 0x120, "StructProperty"},
        }};
    };

}
