#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlateBaseRenderer
{
    struct SlateFXBaseSubsystem
    {
        static constexpr std::string_view Name = "SlateFXBaseSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SlatePostBufferProcessors = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlatePostBufferProcessors", 0x30, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSlatePostProcessor",
        }};
    };

    struct SlateFontInfoBlueprintLibrary
    {
        static constexpr std::string_view Name = "SlateFontInfoBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MakeSlateFontInfo",
        }};
    };

    struct SlatePostBufferBlur
    {
        static constexpr std::string_view Name = "SlatePostBufferBlur";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlatePostBufferProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t GaussianBlurStrength = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GaussianBlurStrength", 0x38, "FloatProperty"},
        }};
    };

    struct SlatePostBufferProcessor
    {
        static constexpr std::string_view Name = "SlatePostBufferProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlatePostBufferProcessorSet
    {
        static constexpr std::string_view Name = "SlatePostBufferProcessorSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Processors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Processors", 0x0, "MapProperty"},
        }};
    };

}
