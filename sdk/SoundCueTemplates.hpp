#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SoundCueTemplates
{
    struct SoundCueContainer
    {
        static constexpr std::string_view Name = "SoundCueContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundCueTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstNode = 0x128;
            static constexpr std::uintptr_t VolumeMultiplier = 0x130;
            static constexpr std::uintptr_t PitchMultiplier = 0x134;
            static constexpr std::uintptr_t AttenuationOverrides = 0x138;
            static constexpr std::uintptr_t SubtitlePriority = 0x3C8;
            static constexpr std::uintptr_t bExcludeFromRandomNodeBranchCulling = 0x3D0;
            static constexpr std::uintptr_t bHasPlayWhenSilent = 0x3D0;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x3D0;
            static constexpr std::uintptr_t bPrimeOnLoad = 0x3D0;
            static constexpr std::uintptr_t CookedQualityIndex = 0x3D4;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FirstNode", 0x128, "ObjectProperty"},
            {"VolumeMultiplier", 0x130, "FloatProperty"},
            {"PitchMultiplier", 0x134, "FloatProperty"},
            {"AttenuationOverrides", 0x138, "StructProperty"},
            {"SubtitlePriority", 0x3C8, "FloatProperty"},
            {"bExcludeFromRandomNodeBranchCulling", 0x3D0, "BoolProperty"},
            {"bHasPlayWhenSilent", 0x3D0, "BoolProperty"},
            {"bOverrideAttenuation", 0x3D0, "BoolProperty"},
            {"bPrimeOnLoad", 0x3D0, "BoolProperty"},
            {"CookedQualityIndex", 0x3D4, "IntProperty"},
        }};
    };

    struct SoundCueDistanceCrossfade
    {
        static constexpr std::string_view Name = "SoundCueDistanceCrossfade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundCueTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstNode = 0x128;
            static constexpr std::uintptr_t VolumeMultiplier = 0x130;
            static constexpr std::uintptr_t PitchMultiplier = 0x134;
            static constexpr std::uintptr_t AttenuationOverrides = 0x138;
            static constexpr std::uintptr_t SubtitlePriority = 0x3C8;
            static constexpr std::uintptr_t bExcludeFromRandomNodeBranchCulling = 0x3D0;
            static constexpr std::uintptr_t bHasPlayWhenSilent = 0x3D0;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x3D0;
            static constexpr std::uintptr_t bPrimeOnLoad = 0x3D0;
            static constexpr std::uintptr_t CookedQualityIndex = 0x3D4;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FirstNode", 0x128, "ObjectProperty"},
            {"VolumeMultiplier", 0x130, "FloatProperty"},
            {"PitchMultiplier", 0x134, "FloatProperty"},
            {"AttenuationOverrides", 0x138, "StructProperty"},
            {"SubtitlePriority", 0x3C8, "FloatProperty"},
            {"bExcludeFromRandomNodeBranchCulling", 0x3D0, "BoolProperty"},
            {"bHasPlayWhenSilent", 0x3D0, "BoolProperty"},
            {"bOverrideAttenuation", 0x3D0, "BoolProperty"},
            {"bPrimeOnLoad", 0x3D0, "BoolProperty"},
            {"CookedQualityIndex", 0x3D4, "IntProperty"},
        }};
    };

    struct SoundCueTemplate
    {
        static constexpr std::string_view Name = "SoundCueTemplate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundCue";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstNode = 0x128;
            static constexpr std::uintptr_t VolumeMultiplier = 0x130;
            static constexpr std::uintptr_t PitchMultiplier = 0x134;
            static constexpr std::uintptr_t AttenuationOverrides = 0x138;
            static constexpr std::uintptr_t SubtitlePriority = 0x3C8;
            static constexpr std::uintptr_t bExcludeFromRandomNodeBranchCulling = 0x3D0;
            static constexpr std::uintptr_t bHasPlayWhenSilent = 0x3D0;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x3D0;
            static constexpr std::uintptr_t bPrimeOnLoad = 0x3D0;
            static constexpr std::uintptr_t CookedQualityIndex = 0x3D4;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FirstNode", 0x128, "ObjectProperty"},
            {"VolumeMultiplier", 0x130, "FloatProperty"},
            {"PitchMultiplier", 0x134, "FloatProperty"},
            {"AttenuationOverrides", 0x138, "StructProperty"},
            {"SubtitlePriority", 0x3C8, "FloatProperty"},
            {"bExcludeFromRandomNodeBranchCulling", 0x3D0, "BoolProperty"},
            {"bHasPlayWhenSilent", 0x3D0, "BoolProperty"},
            {"bOverrideAttenuation", 0x3D0, "BoolProperty"},
            {"bPrimeOnLoad", 0x3D0, "BoolProperty"},
            {"CookedQualityIndex", 0x3D4, "IntProperty"},
        }};
    };

    struct SoundCueTemplateSettings
    {
        static constexpr std::string_view Name = "SoundCueTemplateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
