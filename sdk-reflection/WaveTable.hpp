#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WaveTable
{
    struct WaveTableBank
    {
        static constexpr std::string_view Name = "WaveTableBank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleMode = 0x30;
            static constexpr std::uintptr_t Resolution = 0x31;
            static constexpr std::uintptr_t SampleRate = 0x34;
            static constexpr std::uintptr_t bBipolar = 0x38;
            static constexpr std::uintptr_t Entries = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SampleMode", 0x30, "EnumProperty"},
            {"Resolution", 0x31, "EnumProperty"},
            {"SampleRate", 0x34, "IntProperty"},
            {"bBipolar", 0x38, "BoolProperty"},
            {"Entries", 0x40, "ArrayProperty"},
        }};
    };

    struct WaveTableBankEntry
    {
        static constexpr std::string_view Name = "WaveTableBankEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x0, "StructProperty"},
        }};
    };

    struct WaveTableData
    {
        static constexpr std::string_view Name = "WaveTableData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BitDepth = 0x0;
            static constexpr std::uintptr_t Data = 0x8;
            static constexpr std::uintptr_t FinalValue = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BitDepth", 0x0, "EnumProperty"},
            {"Data", 0x8, "ArrayProperty"},
            {"FinalValue", 0x18, "FloatProperty"},
        }};
    };

    struct WaveTableSettings
    {
        static constexpr std::string_view Name = "WaveTableSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x0;
            static constexpr std::uintptr_t ChannelIndex = 0x10;
            static constexpr std::uintptr_t SourceData = 0x18;
            static constexpr std::uintptr_t SourceSampleRate = 0x38;
            static constexpr std::uintptr_t Phase = 0x3C;
            static constexpr std::uintptr_t Top = 0x40;
            static constexpr std::uintptr_t Tail = 0x44;
            static constexpr std::uintptr_t FadeIn = 0x48;
            static constexpr std::uintptr_t FadeOut = 0x4C;
            static constexpr std::uintptr_t bNormalize = 0x50;
            static constexpr std::uintptr_t bRemoveOffset = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FilePath", 0x0, "StructProperty"},
            {"ChannelIndex", 0x10, "IntProperty"},
            {"SourceData", 0x18, "StructProperty"},
            {"SourceSampleRate", 0x38, "IntProperty"},
            {"Phase", 0x3C, "FloatProperty"},
            {"Top", 0x40, "FloatProperty"},
            {"Tail", 0x44, "FloatProperty"},
            {"FadeIn", 0x48, "FloatProperty"},
            {"FadeOut", 0x4C, "FloatProperty"},
            {"bNormalize", 0x50, "BoolProperty"},
            {"bRemoveOffset", 0x51, "BoolProperty"},
        }};
    };

    struct WaveTableTransform
    {
        static constexpr std::string_view Name = "WaveTableTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x8;
            static constexpr std::uintptr_t Scalar = 0xC;
            static constexpr std::uintptr_t CurveCustom = 0x10;
            static constexpr std::uintptr_t CurveShared = 0x50;
            static constexpr std::uintptr_t TableData = 0x58;
            static constexpr std::uintptr_t duration = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Curve", 0x8, "EnumProperty"},
            {"Scalar", 0xC, "FloatProperty"},
            {"CurveCustom", 0x10, "StructProperty"},
            {"CurveShared", 0x50, "ObjectProperty"},
            {"TableData", 0x58, "StructProperty"},
            {"duration", 0x78, "FloatProperty"},
        }};
    };

}
