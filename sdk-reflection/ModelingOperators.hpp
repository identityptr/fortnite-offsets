#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ModelingOperators
{
    struct GenerateCrossSectionOpFactory
    {
        static constexpr std::string_view Name = "GenerateCrossSectionOpFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RecomputeUVsOpFactory
    {
        static constexpr std::string_view Name = "RecomputeUVsOpFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "ObjectProperty"},
        }};
    };

    struct RecomputeUVsToolProperties
    {
        static constexpr std::string_view Name = "RecomputeUVsToolProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnablePolygroupSupport = 0x68;
            static constexpr std::uintptr_t IslandGeneration = 0x6C;
            static constexpr std::uintptr_t UnwrapType = 0x70;
            static constexpr std::uintptr_t AutoRotation = 0x74;
            static constexpr std::uintptr_t bPreserveIrregularity = 0x78;
            static constexpr std::uintptr_t SmoothingSteps = 0x7C;
            static constexpr std::uintptr_t SmoothingAlpha = 0x80;
            static constexpr std::uintptr_t MergingDistortionThreshold = 0x84;
            static constexpr std::uintptr_t MergingAngleThreshold = 0x88;
            static constexpr std::uintptr_t LayoutType = 0x8C;
            static constexpr std::uintptr_t TextureResolution = 0x90;
            static constexpr std::uintptr_t NormalizeScale = 0x94;
            static constexpr std::uintptr_t bEnableUDIMLayout = 0x98;
            static constexpr std::uintptr_t bUDIMCVAREnabled = 0x99;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bEnablePolygroupSupport", 0x68, "BoolProperty"},
            {"IslandGeneration", 0x6C, "EnumProperty"},
            {"UnwrapType", 0x70, "EnumProperty"},
            {"AutoRotation", 0x74, "EnumProperty"},
            {"bPreserveIrregularity", 0x78, "BoolProperty"},
            {"SmoothingSteps", 0x7C, "IntProperty"},
            {"SmoothingAlpha", 0x80, "FloatProperty"},
            {"MergingDistortionThreshold", 0x84, "FloatProperty"},
            {"MergingAngleThreshold", 0x88, "FloatProperty"},
            {"LayoutType", 0x8C, "EnumProperty"},
            {"TextureResolution", 0x90, "IntProperty"},
            {"NormalizeScale", 0x94, "FloatProperty"},
            {"bEnableUDIMLayout", 0x98, "BoolProperty"},
            {"bUDIMCVAREnabled", 0x99, "BoolProperty"},
        }};
    };

    struct UVEditorTexelDensitySettings
    {
        static constexpr std::string_view Name = "UVEditorTexelDensitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t TexelDensityMode = 0x68;
            static constexpr std::uintptr_t TargetWorldUnits = 0x6C;
            static constexpr std::uintptr_t TargetPixelCount = 0x70;
            static constexpr std::uintptr_t TextureResolution = 0x74;
            static constexpr std::uintptr_t bEnableUDIMLayout = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TexelDensityMode", 0x68, "EnumProperty"},
            {"TargetWorldUnits", 0x6C, "FloatProperty"},
            {"TargetPixelCount", 0x70, "FloatProperty"},
            {"TextureResolution", 0x74, "FloatProperty"},
            {"bEnableUDIMLayout", 0x78, "BoolProperty"},
        }};
    };

    struct UVLayoutOperatorFactory
    {
        static constexpr std::string_view Name = "UVLayoutOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "ObjectProperty"},
        }};
    };

    struct UVLayoutProperties
    {
        static constexpr std::string_view Name = "UVLayoutProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutType = 0x68;
            static constexpr std::uintptr_t TextureResolution = 0x6C;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t Translation = 0x78;
            static constexpr std::uintptr_t bPreserveScale = 0x88;
            static constexpr std::uintptr_t bPreserveRotation = 0x89;
            static constexpr std::uintptr_t bAllowFlips = 0x8A;
            static constexpr std::uintptr_t bEnableUDIMLayout = 0x8B;
            static constexpr std::uintptr_t bUDIMCVAREnabled = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LayoutType", 0x68, "EnumProperty"},
            {"TextureResolution", 0x6C, "IntProperty"},
            {"Scale", 0x70, "FloatProperty"},
            {"Translation", 0x78, "StructProperty"},
            {"bPreserveScale", 0x88, "BoolProperty"},
            {"bPreserveRotation", 0x89, "BoolProperty"},
            {"bAllowFlips", 0x8A, "BoolProperty"},
            {"bEnableUDIMLayout", 0x8B, "BoolProperty"},
            {"bUDIMCVAREnabled", 0x8C, "BoolProperty"},
        }};
    };

    struct UVTexelDensityOperatorFactory
    {
        static constexpr std::string_view Name = "UVTexelDensityOperatorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "ObjectProperty"},
        }};
    };

}
