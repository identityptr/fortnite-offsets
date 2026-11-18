#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Landmass
{
    struct BrushEffectBlurring
    {
        static constexpr std::string_view Name = "BrushEffectBlurring";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlurShape = 0x0;
            static constexpr std::uintptr_t Radius = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBlurShape", 0x0, "BoolProperty"},
            {"Radius", 0x4, "IntProperty"},
        }};
    };

    struct BrushEffectCurlNoise
    {
        static constexpr std::string_view Name = "BrushEffectCurlNoise";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curl1Amount = 0x0;
            static constexpr std::uintptr_t Curl2Amount = 0x4;
            static constexpr std::uintptr_t Curl1Tiling = 0x8;
            static constexpr std::uintptr_t Curl2Tiling = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Curl1Amount", 0x0, "FloatProperty"},
            {"Curl2Amount", 0x4, "FloatProperty"},
            {"Curl1Tiling", 0x8, "FloatProperty"},
            {"Curl2Tiling", 0xC, "FloatProperty"},
        }};
    };

    struct BrushEffectCurves
    {
        static constexpr std::string_view Name = "BrushEffectCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCurveChannel = 0x0;
            static constexpr std::uintptr_t ElevationCurveAsset = 0x8;
            static constexpr std::uintptr_t ChannelEdgeOffset = 0x10;
            static constexpr std::uintptr_t ChannelDepth = 0x14;
            static constexpr std::uintptr_t CurveRampWidth = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseCurveChannel", 0x0, "BoolProperty"},
            {"ElevationCurveAsset", 0x8, "ObjectProperty"},
            {"ChannelEdgeOffset", 0x10, "FloatProperty"},
            {"ChannelDepth", 0x14, "FloatProperty"},
            {"CurveRampWidth", 0x18, "FloatProperty"},
        }};
    };

    struct BrushEffectDisplacement
    {
        static constexpr std::string_view Name = "BrushEffectDisplacement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplacementHeight = 0x0;
            static constexpr std::uintptr_t DisplacementTiling = 0x4;
            static constexpr std::uintptr_t Texture = 0x8;
            static constexpr std::uintptr_t Midpoint = 0x10;
            static constexpr std::uintptr_t Channel = 0x14;
            static constexpr std::uintptr_t WeightmapInfluence = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplacementHeight", 0x0, "FloatProperty"},
            {"DisplacementTiling", 0x4, "FloatProperty"},
            {"Texture", 0x8, "ObjectProperty"},
            {"Midpoint", 0x10, "FloatProperty"},
            {"Channel", 0x14, "StructProperty"},
            {"WeightmapInfluence", 0x24, "FloatProperty"},
        }};
    };

    struct BrushEffectSmoothBlending
    {
        static constexpr std::string_view Name = "BrushEffectSmoothBlending";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerSmoothDistance = 0x0;
            static constexpr std::uintptr_t OuterSmoothDistance = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InnerSmoothDistance", 0x0, "FloatProperty"},
            {"OuterSmoothDistance", 0x4, "FloatProperty"},
        }};
    };

    struct BrushEffectTerracing
    {
        static constexpr std::string_view Name = "BrushEffectTerracing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TerraceAlpha = 0x0;
            static constexpr std::uintptr_t TerraceSpacing = 0x4;
            static constexpr std::uintptr_t TerraceSmoothness = 0x8;
            static constexpr std::uintptr_t MaskLength = 0xC;
            static constexpr std::uintptr_t MaskStartOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TerraceAlpha", 0x0, "FloatProperty"},
            {"TerraceSpacing", 0x4, "FloatProperty"},
            {"TerraceSmoothness", 0x8, "FloatProperty"},
            {"MaskLength", 0xC, "FloatProperty"},
            {"MaskStartOffset", 0x10, "FloatProperty"},
        }};
    };

    struct LandmassBrushEffectsList
    {
        static constexpr std::string_view Name = "LandmassBrushEffectsList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Blurring = 0x0;
            static constexpr std::uintptr_t CurlNoise = 0x8;
            static constexpr std::uintptr_t Displacement = 0x18;
            static constexpr std::uintptr_t SmoothBlending = 0x40;
            static constexpr std::uintptr_t Terracing = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Blurring", 0x0, "StructProperty"},
            {"CurlNoise", 0x8, "StructProperty"},
            {"Displacement", 0x18, "StructProperty"},
            {"SmoothBlending", 0x40, "StructProperty"},
            {"Terracing", 0x48, "StructProperty"},
        }};
    };

    struct LandmassFalloffSettings
    {
        static constexpr std::string_view Name = "LandmassFalloffSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FalloffMode = 0x0;
            static constexpr std::uintptr_t FalloffAngle = 0x4;
            static constexpr std::uintptr_t FalloffWidth = 0x8;
            static constexpr std::uintptr_t EdgeOffset = 0xC;
            static constexpr std::uintptr_t ZOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FalloffMode", 0x0, "EnumProperty"},
            {"FalloffAngle", 0x4, "FloatProperty"},
            {"FalloffWidth", 0x8, "FloatProperty"},
            {"EdgeOffset", 0xC, "FloatProperty"},
            {"ZOffset", 0x10, "FloatProperty"},
        }};
    };

    struct LandmassTerrainCarvingSettings
    {
        static constexpr std::string_view Name = "LandmassTerrainCarvingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendMode = 0x0;
            static constexpr std::uintptr_t bInvertShape = 0x1;
            static constexpr std::uintptr_t FalloffSettings = 0x4;
            static constexpr std::uintptr_t Effects = 0x18;
            static constexpr std::uintptr_t Priority = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BlendMode", 0x0, "EnumProperty"},
            {"bInvertShape", 0x1, "BoolProperty"},
            {"FalloffSettings", 0x4, "StructProperty"},
            {"Effects", 0x18, "StructProperty"},
            {"Priority", 0x78, "IntProperty"},
        }};
    };

}
