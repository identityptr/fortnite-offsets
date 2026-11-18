#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlateIMEngine
{
    struct SlateIMEngineBorderRenderParams
    {
        static constexpr std::string_view Name = "SlateIMEngineBorderRenderParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UVPosition = 0x0;
            static constexpr std::uintptr_t UVSize = 0x10;
            static constexpr std::uintptr_t RenderColor = 0x20;
            static constexpr std::uintptr_t BlendMode = 0x30;
            static constexpr std::uintptr_t Rotation = 0x34;
            static constexpr std::uintptr_t PivotPoint = 0x38;
            static constexpr std::uintptr_t BorderScale = 0x48;
            static constexpr std::uintptr_t BackgroundScale = 0x58;
            static constexpr std::uintptr_t CornerSize = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UVPosition", 0x0, "StructProperty"},
            {"UVSize", 0x10, "StructProperty"},
            {"RenderColor", 0x20, "StructProperty"},
            {"BlendMode", 0x30, "ByteProperty"},
            {"Rotation", 0x34, "FloatProperty"},
            {"PivotPoint", 0x38, "StructProperty"},
            {"BorderScale", 0x48, "StructProperty"},
            {"BackgroundScale", 0x58, "StructProperty"},
            {"CornerSize", 0x68, "StructProperty"},
        }};
    };

    struct SlateIMEngineCanvasDrawCommandList
    {
        static constexpr std::string_view Name = "SlateIMEngineCanvasDrawCommandList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ProcessCommands",
        }};
    };

    struct SlateIMEngineCanvasParams
    {
        static constexpr std::string_view Name = "SlateIMEngineCanvasParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x0;
            static constexpr std::uintptr_t DesiredSize = 0x18;
            static constexpr std::uintptr_t WorldContext = 0x28;
            static constexpr std::uintptr_t UpdateType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ColorAndOpacity", 0x0, "StructProperty"},
            {"DesiredSize", 0x18, "StructProperty"},
            {"WorldContext", 0x28, "ObjectProperty"},
            {"UpdateType", 0x30, "EnumProperty"},
        }};
    };

    struct SlateIMEngineTextRenderParams
    {
        static constexpr std::string_view Name = "SlateIMEngineTextRenderParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x0;
            static constexpr std::uintptr_t RenderColor = 0x10;
            static constexpr std::uintptr_t Kerning = 0x20;
            static constexpr std::uintptr_t ShadowColor = 0x24;
            static constexpr std::uintptr_t ShadowOffset = 0x38;
            static constexpr std::uintptr_t bCentreX = 0x48;
            static constexpr std::uintptr_t bCentreY = 0x49;
            static constexpr std::uintptr_t bOutlined = 0x4A;
            static constexpr std::uintptr_t OutlineColor = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Scale", 0x0, "StructProperty"},
            {"RenderColor", 0x10, "StructProperty"},
            {"Kerning", 0x20, "FloatProperty"},
            {"ShadowColor", 0x24, "StructProperty"},
            {"ShadowOffset", 0x38, "StructProperty"},
            {"bCentreX", 0x48, "BoolProperty"},
            {"bCentreY", 0x49, "BoolProperty"},
            {"bOutlined", 0x4A, "BoolProperty"},
            {"OutlineColor", 0x4C, "StructProperty"},
        }};
    };

    struct SlateIMEngineTileRenderParams
    {
        static constexpr std::string_view Name = "SlateIMEngineTileRenderParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UVPosition = 0x0;
            static constexpr std::uintptr_t UVSize = 0x10;
            static constexpr std::uintptr_t RenderColor = 0x20;
            static constexpr std::uintptr_t BlendMode = 0x30;
            static constexpr std::uintptr_t Rotation = 0x34;
            static constexpr std::uintptr_t PivotPoint = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UVPosition", 0x0, "StructProperty"},
            {"UVSize", 0x10, "StructProperty"},
            {"RenderColor", 0x20, "StructProperty"},
            {"BlendMode", 0x30, "ByteProperty"},
            {"Rotation", 0x34, "FloatProperty"},
            {"PivotPoint", 0x38, "StructProperty"},
        }};
    };

}
