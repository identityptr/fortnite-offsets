#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ResonanceAudio
{
    struct ResonanceAudioBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "ResonanceAudioBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ResonanceAudioDirectivityVisualizer
    {
        static constexpr std::string_view Name = "ResonanceAudioDirectivityVisualizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x2E8;
            static constexpr std::uintptr_t Settings = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Material", 0x2E8, "ObjectProperty"},
            {"Settings", 0x2F0, "ObjectProperty"},
        }};
    };

    struct ResonanceAudioReverbPluginPreset
    {
        static constexpr std::string_view Name = "ResonanceAudioReverbPluginPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x100, "StructProperty"},
        }};
    };

    struct ResonanceAudioSettings
    {
        static constexpr std::string_view Name = "ResonanceAudioSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputSubmix = 0x28;
            static constexpr std::uintptr_t QualityMode = 0x40;
            static constexpr std::uintptr_t GlobalReverbPreset = 0x48;
            static constexpr std::uintptr_t GlobalSourcePreset = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OutputSubmix", 0x28, "StructProperty"},
            {"QualityMode", 0x40, "EnumProperty"},
            {"GlobalReverbPreset", 0x48, "StructProperty"},
            {"GlobalSourcePreset", 0x60, "StructProperty"},
        }};
    };

    struct ResonanceAudioSoundfieldSettings
    {
        static constexpr std::string_view Name = "ResonanceAudioSoundfieldSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundfieldEncodingSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderMode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderMode", 0x28, "EnumProperty"},
        }};
    };

    struct ResonanceAudioSpatializationSourceSettings
    {
        static constexpr std::string_view Name = "ResonanceAudioSpatializationSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatializationPluginSourceSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpatializationMethod = 0x28;
            static constexpr std::uintptr_t Pattern = 0x2C;
            static constexpr std::uintptr_t Sharpness = 0x30;
            static constexpr std::uintptr_t bToggleVisualization = 0x34;
            static constexpr std::uintptr_t Scale = 0x38;
            static constexpr std::uintptr_t Spread = 0x3C;
            static constexpr std::uintptr_t Rolloff = 0x40;
            static constexpr std::uintptr_t MinDistance = 0x44;
            static constexpr std::uintptr_t MaxDistance = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SpatializationMethod", 0x28, "EnumProperty"},
            {"Pattern", 0x2C, "FloatProperty"},
            {"Sharpness", 0x30, "FloatProperty"},
            {"bToggleVisualization", 0x34, "BoolProperty"},
            {"Scale", 0x38, "FloatProperty"},
            {"Spread", 0x3C, "FloatProperty"},
            {"Rolloff", 0x40, "EnumProperty"},
            {"MinDistance", 0x44, "FloatProperty"},
            {"MaxDistance", 0x48, "FloatProperty"},
        }};
    };

}
