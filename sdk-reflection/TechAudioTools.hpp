#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TechAudioTools
{
    struct AudioComponentViewModel
    {
        static constexpr std::string_view Name = "AudioComponentViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayState = 0x68;
            static constexpr std::uintptr_t bIsPlaying = 0x69;
            static constexpr std::uintptr_t bIsStopped = 0x6A;
            static constexpr std::uintptr_t bIsFadingIn = 0x6B;
            static constexpr std::uintptr_t bIsFadingOut = 0x6C;
            static constexpr std::uintptr_t bIsVirtualized = 0x6D;
            static constexpr std::uintptr_t AudioComponent = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PlayState", 0x68, "EnumProperty"},
            {"bIsPlaying", 0x69, "BoolProperty"},
            {"bIsStopped", 0x6A, "BoolProperty"},
            {"bIsFadingIn", 0x6B, "BoolProperty"},
            {"bIsFadingOut", 0x6C, "BoolProperty"},
            {"bIsVirtualized", 0x6D, "BoolProperty"},
            {"AudioComponent", 0x70, "WeakObjectProperty"},
        }};
    };

    struct TechAudioToolsConversionFunctions
    {
        static constexpr std::string_view Name = "TechAudioToolsConversionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TechAudioToolsFloatMapping
    {
        static constexpr std::string_view Name = "TechAudioToolsFloatMapping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MappingType = 0x28;
            static constexpr std::uintptr_t Range = 0x2C;
            static constexpr std::uintptr_t SourceRange = 0x34;
            static constexpr std::uintptr_t DisplayRange = 0x3C;
            static constexpr std::uintptr_t DisplayUnits = 0x44;
            static constexpr std::uintptr_t SourceVolumeUnits = 0x45;
            static constexpr std::uintptr_t DisplayVolumeUnits = 0x46;
            static constexpr std::uintptr_t DisplayRange_Decibels = 0x48;
            static constexpr std::uintptr_t DisplayRange_LinearGain = 0x50;
            static constexpr std::uintptr_t SourcePitchUnits = 0x58;
            static constexpr std::uintptr_t DisplayPitchUnits = 0x59;
            static constexpr std::uintptr_t DisplayRange_Semitones = 0x5C;
            static constexpr std::uintptr_t DisplayRange_FrequencyMultiplier = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MappingType", 0x28, "EnumProperty"},
            {"Range", 0x2C, "StructProperty"},
            {"SourceRange", 0x34, "StructProperty"},
            {"DisplayRange", 0x3C, "StructProperty"},
            {"DisplayUnits", 0x44, "EnumProperty"},
            {"SourceVolumeUnits", 0x45, "EnumProperty"},
            {"DisplayVolumeUnits", 0x46, "EnumProperty"},
            {"DisplayRange_Decibels", 0x48, "StructProperty"},
            {"DisplayRange_LinearGain", 0x50, "StructProperty"},
            {"SourcePitchUnits", 0x58, "EnumProperty"},
            {"DisplayPitchUnits", 0x59, "EnumProperty"},
            {"DisplayRange_Semitones", 0x5C, "StructProperty"},
            {"DisplayRange_FrequencyMultiplier", 0x64, "StructProperty"},
        }};
    };

}
