#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LandscapePatch
{
    struct LandscapeCircleHeightPatch
    {
        static constexpr std::string_view Name = "LandscapeCircleHeightPatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapePatchComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x2A0;
            static constexpr std::uintptr_t Falloff = 0x2A4;
            static constexpr std::uintptr_t bEditVisibility = 0x2A8;
            static constexpr std::uintptr_t bExclusiveRadius = 0x2A9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x2A0, "FloatProperty"},
            {"Falloff", 0x2A4, "FloatProperty"},
            {"bEditVisibility", 0x2A8, "BoolProperty"},
            {"bExclusiveRadius", 0x2A9, "BoolProperty"},
        }};
    };

    struct LandscapeHeightTextureBackedRenderTarget
    {
        static constexpr std::string_view Name = "LandscapeHeightTextureBackedRenderTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeTextureBackedRenderTargetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversionParams = 0x48;
            static constexpr std::uintptr_t RenderTargetFormat = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConversionParams", 0x48, "StructProperty"},
            {"RenderTargetFormat", 0x54, "ByteProperty"},
        }};
    };

    struct LandscapePatchComponent
    {
        static constexpr std::string_view Name = "LandscapePatchComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EditLayerGuid = 0x248;
            static constexpr std::uintptr_t PriorityInitialization = 0x258;
            static constexpr std::uintptr_t Priority = 0x260;
            static constexpr std::uintptr_t Landscape = 0x268;
            static constexpr std::uintptr_t AdditionalRenderDependencies = 0x288;
            static constexpr std::uintptr_t bIsEnabled = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EditLayerGuid", 0x248, "StructProperty"},
            {"PriorityInitialization", 0x258, "EnumProperty"},
            {"Priority", 0x260, "DoubleProperty"},
            {"Landscape", 0x268, "SoftObjectProperty"},
            {"AdditionalRenderDependencies", 0x288, "SetProperty"},
            {"bIsEnabled", 0x298, "BoolProperty"},
        }};
    };

    struct LandscapePatchEditLayer
    {
        static constexpr std::string_view Name = "LandscapePatchEditLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeEditLayerProcedural";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandscapePatchManager
    {
        static constexpr std::string_view Name = "LandscapePatchManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeBlueprintBrushBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PatchComponents = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PatchComponents", 0x298, "ArrayProperty"},
        }};
    };

    struct LandscapePatchSettings
    {
        static constexpr std::string_view Name = "LandscapePatchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableLandscapePatchDebounce = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableLandscapePatchDebounce", 0x30, "BoolProperty"},
        }};
    };

    struct LandscapeTextureBackedRenderTargetBase
    {
        static constexpr std::string_view Name = "LandscapeTextureBackedRenderTargetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalTexture = 0x28;
            static constexpr std::uintptr_t RenderTarget = 0x30;
            static constexpr std::uintptr_t SizeX = 0x38;
            static constexpr std::uintptr_t SizeY = 0x3C;
            static constexpr std::uintptr_t bUseInternalTextureOnly = 0x40;
            static constexpr std::uintptr_t bIsTemporarilyNonTransactional = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InternalTexture", 0x28, "ObjectProperty"},
            {"RenderTarget", 0x30, "ObjectProperty"},
            {"SizeX", 0x38, "IntProperty"},
            {"SizeY", 0x3C, "IntProperty"},
            {"bUseInternalTextureOnly", 0x40, "BoolProperty"},
            {"bIsTemporarilyNonTransactional", 0x41, "BoolProperty"},
        }};
    };

    struct LandscapeTexturePatch
    {
        static constexpr std::string_view Name = "LandscapeTexturePatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapePatchComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ResolutionX = 0x2A0;
            static constexpr std::uintptr_t ResolutionY = 0x2A4;
            static constexpr std::uintptr_t UnscaledPatchCoverage = 0x2A8;
            static constexpr std::uintptr_t BlendMode = 0x2B8;
            static constexpr std::uintptr_t FalloffMode = 0x2B9;
            static constexpr std::uintptr_t Falloff = 0x2BC;
            static constexpr std::uintptr_t HeightSourceMode = 0x2C0;
            static constexpr std::uintptr_t DetailPanelHeightSourceMode = 0x2C1;
            static constexpr std::uintptr_t HeightTextureChannel = 0x2C2;
            static constexpr std::uintptr_t HeightInternalData = 0x2C8;
            static constexpr std::uintptr_t HeightTextureAsset = 0x2D0;
            static constexpr std::uintptr_t HeightTextureUVTransform = 0x2D8;
            static constexpr std::uintptr_t bUseTextureAlphaForHeight = 0x308;
            static constexpr std::uintptr_t HeightAlphaSettings = 0x310;
            static constexpr std::uintptr_t HeightEncoding = 0x368;
            static constexpr std::uintptr_t HeightEncodingSettings = 0x370;
            static constexpr std::uintptr_t ZeroHeightMeaning = 0x380;
            static constexpr std::uintptr_t bApplyComponentZScale = 0x381;
            static constexpr std::uintptr_t WeightPatches = 0x388;
            static constexpr std::uintptr_t WeightPatchesAlphaSettings = 0x398;
            static constexpr std::uintptr_t WeightPatchesBlendMode = 0x3F0;
            static constexpr std::uintptr_t bBaseResolutionOffLandscape = 0x3F2;
            static constexpr std::uintptr_t ResolutionMultiplier = 0x3F4;
            static constexpr std::uintptr_t InitTextureSizeX = 0x3F8;
            static constexpr std::uintptr_t InitTextureSizeY = 0x3FC;
            static constexpr std::uintptr_t HeightRenderTargetFormat = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"ResolutionX", 0x2A0, "IntProperty"},
            {"ResolutionY", 0x2A4, "IntProperty"},
            {"UnscaledPatchCoverage", 0x2A8, "StructProperty"},
            {"BlendMode", 0x2B8, "EnumProperty"},
            {"FalloffMode", 0x2B9, "EnumProperty"},
            {"Falloff", 0x2BC, "FloatProperty"},
            {"HeightSourceMode", 0x2C0, "EnumProperty"},
            {"DetailPanelHeightSourceMode", 0x2C1, "EnumProperty"},
            {"HeightTextureChannel", 0x2C2, "EnumProperty"},
            {"HeightInternalData", 0x2C8, "ObjectProperty"},
            {"HeightTextureAsset", 0x2D0, "ObjectProperty"},
            {"HeightTextureUVTransform", 0x2D8, "StructProperty"},
            {"bUseTextureAlphaForHeight", 0x308, "BoolProperty"},
            {"HeightAlphaSettings", 0x310, "StructProperty"},
            {"HeightEncoding", 0x368, "EnumProperty"},
            {"HeightEncodingSettings", 0x370, "StructProperty"},
            {"ZeroHeightMeaning", 0x380, "EnumProperty"},
            {"bApplyComponentZScale", 0x381, "BoolProperty"},
            {"WeightPatches", 0x388, "ArrayProperty"},
            {"WeightPatchesAlphaSettings", 0x398, "StructProperty"},
            {"WeightPatchesBlendMode", 0x3F0, "EnumProperty"},
            {"bBaseResolutionOffLandscape", 0x3F2, "BoolProperty"},
            {"ResolutionMultiplier", 0x3F4, "FloatProperty"},
            {"InitTextureSizeX", 0x3F8, "IntProperty"},
            {"InitTextureSizeY", 0x3FC, "IntProperty"},
            {"HeightRenderTargetFormat", 0x400, "ByteProperty"},
        }};
    };

    struct LandscapeWeightPatchTextureInfo
    {
        static constexpr std::string_view Name = "LandscapeWeightPatchTextureInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeightmapLayerName = 0x28;
            static constexpr std::uintptr_t bEditVisibilityLayer = 0x2C;
            static constexpr std::uintptr_t SourceMode = 0x2D;
            static constexpr std::uintptr_t DetailPanelSourceMode = 0x2E;
            static constexpr std::uintptr_t TextureAsset = 0x30;
            static constexpr std::uintptr_t WeightTextureUVTransform = 0x38;
            static constexpr std::uintptr_t WeightPatchTextureChannel = 0x68;
            static constexpr std::uintptr_t InternalData = 0x70;
            static constexpr std::uintptr_t bUseAlphaChannel = 0x78;
            static constexpr std::uintptr_t bOverrideWeightAlphaSettings = 0x79;
            static constexpr std::uintptr_t WeightPatchAlphaSettings = 0x80;
            static constexpr std::uintptr_t bOverrideBlendMode = 0xD8;
            static constexpr std::uintptr_t OverrideBlendMode = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"WeightmapLayerName", 0x28, "NameProperty"},
            {"bEditVisibilityLayer", 0x2C, "BoolProperty"},
            {"SourceMode", 0x2D, "EnumProperty"},
            {"DetailPanelSourceMode", 0x2E, "EnumProperty"},
            {"TextureAsset", 0x30, "ObjectProperty"},
            {"WeightTextureUVTransform", 0x38, "StructProperty"},
            {"WeightPatchTextureChannel", 0x68, "EnumProperty"},
            {"InternalData", 0x70, "ObjectProperty"},
            {"bUseAlphaChannel", 0x78, "BoolProperty"},
            {"bOverrideWeightAlphaSettings", 0x79, "BoolProperty"},
            {"WeightPatchAlphaSettings", 0x80, "StructProperty"},
            {"bOverrideBlendMode", 0xD8, "BoolProperty"},
            {"OverrideBlendMode", 0xD9, "EnumProperty"},
        }};
    };

    struct LandscapeWeightTextureBackedRenderTarget
    {
        static constexpr std::string_view Name = "LandscapeWeightTextureBackedRenderTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandscapeTextureBackedRenderTargetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseAlphaChannel = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseAlphaChannel", 0x48, "BoolProperty"},
        }};
    };

}
