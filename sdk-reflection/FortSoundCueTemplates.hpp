#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortSoundCueTemplates
{
    struct EmoteBase
    {
        static constexpr std::string_view Name = "EmoteBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct EmoteFoley
    {
        static constexpr std::string_view Name = "EmoteFoley";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteBase";
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

    struct EmoteMusic
    {
        static constexpr std::string_view Name = "EmoteMusic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteBase";
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

    struct EmoteMusic3P
    {
        static constexpr std::string_view Name = "EmoteMusic3P";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteBase";
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

    struct FootstepFoley
    {
        static constexpr std::string_view Name = "FootstepFoley";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerFoley";
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

    struct FortSoundCueTemplateBase
    {
        static constexpr std::string_view Name = "FortSoundCueTemplateBase";
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

    struct FortSoundCueTemplateDefaultSettings
    {
        static constexpr std::string_view Name = "FortSoundCueTemplateDefaultSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateDefaults = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TemplateDefaults", 0x28, "MapProperty"},
        }};
    };

    struct FortSoundCueTemplateDefaults
    {
        static constexpr std::string_view Name = "FortSoundCueTemplateDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundClass = 0x28;
            static constexpr std::uintptr_t Attenuation = 0x30;
            static constexpr std::uintptr_t Concurrency = 0x38;
            static constexpr std::uintptr_t VolumeMultiplier = 0x40;
            static constexpr std::uintptr_t PitchMultiplier = 0x44;
            static constexpr std::uintptr_t SubmixSends = 0x48;
            static constexpr std::uintptr_t PreEffectBusSends = 0x58;
            static constexpr std::uintptr_t PostEffectBusSends = 0x68;
            static constexpr std::uintptr_t LicensedTrackAlternative = 0x78;
            static constexpr std::uintptr_t LicensedSubmix = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SoundClass", 0x28, "ObjectProperty"},
            {"Attenuation", 0x30, "ObjectProperty"},
            {"Concurrency", 0x38, "ObjectProperty"},
            {"VolumeMultiplier", 0x40, "FloatProperty"},
            {"PitchMultiplier", 0x44, "FloatProperty"},
            {"SubmixSends", 0x48, "ArrayProperty"},
            {"PreEffectBusSends", 0x58, "ArrayProperty"},
            {"PostEffectBusSends", 0x68, "ArrayProperty"},
            {"LicensedTrackAlternative", 0x78, "ObjectProperty"},
            {"LicensedSubmix", 0x80, "ObjectProperty"},
        }};
    };

    struct FortSoundCueTemplateSettings
    {
        static constexpr std::string_view Name = "FortSoundCueTemplateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTemplateSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultTemplateSettings", 0x30, "SoftObjectProperty"},
        }};
    };

    struct FortSoundCueTemplateSimple
    {
        static constexpr std::string_view Name = "FortSoundCueTemplateSimple";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct GliderClose
    {
        static constexpr std::string_view Name = "GliderClose";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct GliderOpen
    {
        static constexpr std::string_view Name = "GliderOpen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct GliderThrustLoop
    {
        static constexpr std::string_view Name = "GliderThrustLoop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct GliderThrustSCTDefaults
    {
        static constexpr std::string_view Name = "GliderThrustSCTDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateDefaults";
        struct Offsets
        {
            static constexpr std::uintptr_t Forward = 0x88;
            static constexpr std::uintptr_t Sideways = 0xE0;
            static constexpr std::uintptr_t Backwards = 0x138;
            static constexpr std::uintptr_t AnyDirection = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Forward", 0x88, "StructProperty"},
            {"Sideways", 0xE0, "StructProperty"},
            {"Backwards", 0x138, "StructProperty"},
            {"AnyDirection", 0x190, "StructProperty"},
        }};
    };

    struct GliderThrustStart
    {
        static constexpr std::string_view Name = "GliderThrustStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct MusicPack
    {
        static constexpr std::string_view Name = "MusicPack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct PhysicsImpact
    {
        static constexpr std::string_view Name = "PhysicsImpact";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct PhysicsImpactSCTDefaults
    {
        static constexpr std::string_view Name = "PhysicsImpactSCTDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateDefaults";
        struct Offsets
        {
            static constexpr std::uintptr_t ImpactTypeParameterName = 0x88;
            static constexpr std::uintptr_t StrengthParameterName = 0x8C;
            static constexpr std::uintptr_t Light = 0x90;
            static constexpr std::uintptr_t Medium = 0xE8;
            static constexpr std::uintptr_t Heavy = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ImpactTypeParameterName", 0x88, "NameProperty"},
            {"StrengthParameterName", 0x8C, "NameProperty"},
            {"Light", 0x90, "StructProperty"},
            {"Medium", 0xE8, "StructProperty"},
            {"Heavy", 0x140, "StructProperty"},
        }};
    };

    struct PhysicsStateLoop
    {
        static constexpr std::string_view Name = "PhysicsStateLoop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct PhysicsStateSCTDefaults
    {
        static constexpr std::string_view Name = "PhysicsStateSCTDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateDefaults";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedParameterName = 0x88;
            static constexpr std::uintptr_t Rolling = 0x90;
            static constexpr std::uintptr_t Sliding = 0x120;
            static constexpr std::uintptr_t Flying = 0x1B0;
            static constexpr std::uintptr_t Floating = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SpeedParameterName", 0x88, "NameProperty"},
            {"Rolling", 0x90, "StructProperty"},
            {"Sliding", 0x120, "StructProperty"},
            {"Flying", 0x1B0, "StructProperty"},
            {"Floating", 0x240, "StructProperty"},
        }};
    };

    struct PickaxeBase
    {
        static constexpr std::string_view Name = "PickaxeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct PickaxeImpactEnemy
    {
        static constexpr std::string_view Name = "PickaxeImpactEnemy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct PickaxeReady
    {
        static constexpr std::string_view Name = "PickaxeReady";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PickaxeBase";
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

    struct PickaxeSCTDefaults
    {
        static constexpr std::string_view Name = "PickaxeSCTDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateDefaults";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseAttenuation = 0x88;
            static constexpr std::uintptr_t DistantAttenuation = 0x90;
            static constexpr std::uintptr_t DistantVariations = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CloseAttenuation", 0x88, "ObjectProperty"},
            {"DistantAttenuation", 0x90, "ObjectProperty"},
            {"DistantVariations", 0x98, "ArrayProperty"},
        }};
    };

    struct PickaxeSwing
    {
        static constexpr std::string_view Name = "PickaxeSwing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PickaxeBase";
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

    struct PlayerFoley
    {
        static constexpr std::string_view Name = "PlayerFoley";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerFoleyBase";
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

    struct PlayerFoleyBase
    {
        static constexpr std::string_view Name = "PlayerFoleyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateBase";
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

    struct PlayerFoleyDefaults
    {
        static constexpr std::string_view Name = "PlayerFoleyDefaults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateDefaults";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerSoundClass = 0x88;
            static constexpr std::uintptr_t TeammateSoundClass = 0x90;
            static constexpr std::uintptr_t HostileSoundClass = 0x98;
            static constexpr std::uintptr_t LocalPlayerAttenuation = 0xA0;
            static constexpr std::uintptr_t AboveAttenuation = 0xA8;
            static constexpr std::uintptr_t BelowAttenuation = 0xB0;
            static constexpr std::uintptr_t ParallelAttenuation = 0xB8;
            static constexpr std::uintptr_t ElevationCrossfadeDistances = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LocalPlayerSoundClass", 0x88, "ObjectProperty"},
            {"TeammateSoundClass", 0x90, "ObjectProperty"},
            {"HostileSoundClass", 0x98, "ObjectProperty"},
            {"LocalPlayerAttenuation", 0xA0, "ObjectProperty"},
            {"AboveAttenuation", 0xA8, "ObjectProperty"},
            {"BelowAttenuation", 0xB0, "ObjectProperty"},
            {"ParallelAttenuation", 0xB8, "ObjectProperty"},
            {"ElevationCrossfadeDistances", 0xC0, "ArrayProperty"},
        }};
    };

    struct WeaponLowAmmo
    {
        static constexpr std::string_view Name = "WeaponLowAmmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponOutOfAmmo
    {
        static constexpr std::string_view Name = "WeaponOutOfAmmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponReloadEnd
    {
        static constexpr std::string_view Name = "WeaponReloadEnd";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponReloadInsert
    {
        static constexpr std::string_view Name = "WeaponReloadInsert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponReloadStart
    {
        static constexpr std::string_view Name = "WeaponReloadStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponTargetingEnd
    {
        static constexpr std::string_view Name = "WeaponTargetingEnd";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

    struct WeaponTargetingStart
    {
        static constexpr std::string_view Name = "WeaponTargetingStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundCueTemplateSimple";
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

}
