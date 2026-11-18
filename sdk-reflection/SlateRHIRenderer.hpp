#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlateRHIRenderer
{
    struct SlateFXSubsystem
    {
        static constexpr std::string_view Name = "SlateFXSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateFXBaseSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SlatePostBufferProcessors = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlatePostBufferProcessors", 0x30, "MapProperty"},
        }};
    };

    struct SlateFontBlueprintLibrary
    {
        static constexpr std::string_view Name = "SlateFontBlueprintLibrary";
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

    struct SlatePostSettings
    {
        static constexpr std::string_view Name = "SlatePostSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Resolution = 0x1;
            static constexpr std::uintptr_t PostProcessorClass = 0x8;
            static constexpr std::uintptr_t PathToSlatePostRT = 0x10;
            static constexpr std::uintptr_t CachedSlatePostRT = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Resolution", 0x1, "EnumProperty"},
            {"PostProcessorClass", 0x8, "ClassProperty"},
            {"PathToSlatePostRT", 0x10, "StrProperty"},
            {"CachedSlatePostRT", 0x20, "ObjectProperty"},
        }};
    };

    struct SlateRHIRendererSettings
    {
        static constexpr std::string_view Name = "SlateRHIRendererSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SlatePostSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlatePostSettings", 0x30, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetMutableSlatePostSetting",
            "GetSlatePostSetting",
        }};
    };

}
