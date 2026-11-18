#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotoSynth
{
    struct MotoSynthPreset
    {
        static constexpr std::string_view Name = "MotoSynthPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

    struct MotoSynthSource
    {
        static constexpr std::string_view Name = "MotoSynthSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bConvertTo8Bit = 0x28;
            static constexpr std::uintptr_t DownSampleFactor = 0x2C;
            static constexpr std::uintptr_t RpmCurve = 0x30;
            static constexpr std::uintptr_t SourceData = 0x78;
            static constexpr std::uintptr_t SourceDataPCM = 0x88;
            static constexpr std::uintptr_t SourceSampleRate = 0x98;
            static constexpr std::uintptr_t GrainTable = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bConvertTo8Bit", 0x28, "BoolProperty"},
            {"DownSampleFactor", 0x2C, "FloatProperty"},
            {"RpmCurve", 0x30, "StructProperty"},
            {"SourceData", 0x78, "ArrayProperty"},
            {"SourceDataPCM", 0x88, "ArrayProperty"},
            {"SourceSampleRate", 0x98, "IntProperty"},
            {"GrainTable", 0xA0, "ArrayProperty"},
        }};
    };

    struct SynthComponentMoto
    {
        static constexpr std::string_view Name = "SynthComponentMoto";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MotoSynthPreset = 0x620;
            static constexpr std::uintptr_t RPM = 0x628;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MotoSynthPreset", 0x620, "ObjectProperty"},
            {"RPM", 0x628, "FloatProperty"},
        }};
    };

}
