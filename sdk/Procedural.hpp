#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Procedural
{
    struct HISMBuilderSettings
    {
        static constexpr std::string_view Name = "HISMBuilderSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Mobility = 0x28;
            static constexpr std::uintptr_t CullDistance = 0x2C;
            static constexpr std::uintptr_t LODDistanceScale = 0x34;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x38;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x38;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x38;
            static constexpr std::uintptr_t bCastShadow = 0x38;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x38;
            static constexpr std::uintptr_t bCastStaticShadow = 0x38;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x38;
            static constexpr std::uintptr_t bReceivesDecals = 0x38;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x3C;
            static constexpr std::uintptr_t LightmapType = 0x40;
            static constexpr std::uintptr_t bUseAsOccluder = 0x44;
            static constexpr std::uintptr_t BodyInstance = 0x48;
            static constexpr std::uintptr_t CustomNavigableGeometry = 0x1F0;
            static constexpr std::uintptr_t LightingChannels = 0x1F1;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x1F4;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x1F8;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x1FC;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x200;
            static constexpr std::uintptr_t bEnableDensityScaling = 0x204;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x208;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x218;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x21C;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"Mobility", 0x28, "ByteProperty"},
            {"CullDistance", 0x2C, "StructProperty"},
            {"LODDistanceScale", 0x34, "FloatProperty"},
            {"bAffectDistanceFieldLighting", 0x38, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x38, "BoolProperty"},
            {"bCastDynamicShadow", 0x38, "BoolProperty"},
            {"bCastShadow", 0x38, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x38, "BoolProperty"},
            {"bCastStaticShadow", 0x38, "BoolProperty"},
            {"bOverrideLightMapRes", 0x38, "BoolProperty"},
            {"bReceivesDecals", 0x38, "BoolProperty"},
            {"OverriddenLightMapRes", 0x3C, "IntProperty"},
            {"LightmapType", 0x40, "EnumProperty"},
            {"bUseAsOccluder", 0x44, "BoolProperty"},
            {"BodyInstance", 0x48, "StructProperty"},
            {"CustomNavigableGeometry", 0x1F0, "ByteProperty"},
            {"LightingChannels", 0x1F1, "StructProperty"},
            {"bRenderCustomDepth", 0x1F4, "BoolProperty"},
            {"CustomDepthStencilWriteMask", 0x1F8, "EnumProperty"},
            {"CustomDepthStencilValue", 0x1FC, "IntProperty"},
            {"TranslucencySortPriority", 0x200, "IntProperty"},
            {"bEnableDensityScaling", 0x204, "BoolProperty"},
            {"RuntimeVirtualTextures", 0x208, "ArrayProperty"},
            {"VirtualTextureCullMips", 0x218, "IntProperty"},
            {"VirtualTextureRenderPassType", 0x21C, "EnumProperty"},
        }};
    };

    struct ProceduralContentVariationsWeightsMapModifier
    {
        static constexpr std::string_view Name = "ProceduralContentVariationsWeightsMapModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralContentVariationsWeightsModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t VariationsMaps = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariationsMaps", 0x38, "ArrayProperty"},
        }};
    };

    struct ProceduralContentVariationsWeightsModifier
    {
        static constexpr std::string_view Name = "ProceduralContentVariationsWeightsModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralParameterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Contribution = 0x2C;
            static constexpr std::uintptr_t BlendMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"Contribution", 0x2C, "FloatProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
        }};
    };

    struct ProceduralCustomGenerator
    {
        static constexpr std::string_view Name = "ProceduralCustomGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratorContextClass = 0x38;
            static constexpr std::uintptr_t GeneratorContext = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GeneratorContextClass", 0x38, "ClassProperty"},
            {"GeneratorContext", 0x40, "ObjectProperty"},
        }};
    };

    struct ProceduralDataMap
    {
        static constexpr std::string_view Name = "ProceduralDataMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseRemapCurve = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseRemapCurve", 0x28, "BoolProperty"},
        }};
    };

    struct ProceduralDensityMapModifier
    {
        static constexpr std::string_view Name = "ProceduralDensityMapModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralDensityModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Map = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Map", 0x38, "ObjectProperty"},
        }};
    };

    struct ProceduralDensityModifier
    {
        static constexpr std::string_view Name = "ProceduralDensityModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralParameterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Contribution = 0x2C;
            static constexpr std::uintptr_t BlendMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"Contribution", 0x2C, "FloatProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
        }};
    };

    struct ProceduralFloatDataMap
    {
        static constexpr std::string_view Name = "ProceduralFloatDataMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t RemapCurve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RemapCurve", 0x30, "StructProperty"},
        }};
    };

    struct ProceduralGenerationBlockingVolume
    {
        static constexpr std::string_view Name = "ProceduralGenerationBlockingVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockedVolumes = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlockedVolumes", 0x2B0, "ArrayProperty"},
        }};
    };

    struct ProceduralGenerationComponent
    {
        static constexpr std::string_view Name = "ProceduralGenerationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0xC0;
            static constexpr std::uintptr_t bShowDebugVisualization = 0xC8;
            static constexpr std::uintptr_t ProceduralGenerationGuid = 0xCC;
            static constexpr std::uintptr_t GenerationVolume = 0xE0;
            static constexpr std::uintptr_t GenerationContext = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Generator", 0xC0, "ObjectProperty"},
            {"bShowDebugVisualization", 0xC8, "BoolProperty"},
            {"ProceduralGenerationGuid", 0xCC, "StructProperty"},
            {"GenerationVolume", 0xE0, "ObjectProperty"},
            {"GenerationContext", 0xE8, "ObjectProperty"},
        }};
    };

    struct ProceduralGenerationContext
    {
        static constexpr std::string_view Name = "ProceduralGenerationContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratorContext = 0x28;
            static constexpr std::uintptr_t GeneratedContexts = 0x30;
            static constexpr std::uintptr_t RegisteredContexts = 0x40;
            static constexpr std::uintptr_t GeneratorContexts = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GeneratorContext", 0x28, "ObjectProperty"},
            {"GeneratedContexts", 0x30, "ArrayProperty"},
            {"RegisteredContexts", 0x40, "ArrayProperty"},
            {"GeneratorContexts", 0x50, "MapProperty"},
        }};
    };

    struct ProceduralGenerationVolume
    {
        static constexpr std::string_view Name = "ProceduralGenerationVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralComponent = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProceduralComponent", 0x2B0, "ObjectProperty"},
        }};
    };

    struct ProceduralGenerator
    {
        static constexpr std::string_view Name = "ProceduralGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugSettings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugSettings", 0x28, "StructProperty"},
        }};
    };

    struct ProceduralGeneratorContext
    {
        static constexpr std::string_view Name = "ProceduralGeneratorContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x28;
            static constexpr std::uintptr_t GenerationContext = 0x30;
            static constexpr std::uintptr_t OwnerContext = 0x38;
            static constexpr std::uintptr_t GeneratedObjects = 0x40;
            static constexpr std::uintptr_t ExportedPointCloud = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Generator", 0x28, "ObjectProperty"},
            {"GenerationContext", 0x30, "ObjectProperty"},
            {"OwnerContext", 0x38, "ObjectProperty"},
            {"GeneratedObjects", 0x40, "ArrayProperty"},
            {"ExportedPointCloud", 0x50, "ObjectProperty"},
        }};
    };

    struct ProceduralGeneratorStack
    {
        static constexpr std::string_view Name = "ProceduralGeneratorStack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Generators = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Generators", 0x38, "ArrayProperty"},
        }};
    };

    struct ProceduralGeneratorStackContext
    {
        static constexpr std::string_view Name = "ProceduralGeneratorStackContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralGeneratorContext";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x28;
            static constexpr std::uintptr_t GenerationContext = 0x30;
            static constexpr std::uintptr_t OwnerContext = 0x38;
            static constexpr std::uintptr_t GeneratedObjects = 0x40;
            static constexpr std::uintptr_t ExportedPointCloud = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Generator", 0x28, "ObjectProperty"},
            {"GenerationContext", 0x30, "ObjectProperty"},
            {"OwnerContext", 0x38, "ObjectProperty"},
            {"GeneratedObjects", 0x40, "ArrayProperty"},
            {"ExportedPointCloud", 0x50, "ObjectProperty"},
        }};
    };

    struct ProceduralLandscapeLayerMap
    {
        static constexpr std::string_view Name = "ProceduralLandscapeLayerMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralFloatDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeLayerName = 0x78;
            static constexpr std::uintptr_t LandscapeEditLayerName = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LandscapeLayerName", 0x78, "NameProperty"},
            {"LandscapeEditLayerName", 0x7C, "NameProperty"},
        }};
    };

    struct ProceduralParameterModifier
    {
        static constexpr std::string_view Name = "ProceduralParameterModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Contribution = 0x2C;
            static constexpr std::uintptr_t BlendMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"Contribution", 0x2C, "FloatProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
        }};
    };

    struct ProceduralPointCloud
    {
        static constexpr std::string_view Name = "ProceduralPointCloud";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Points", 0x28, "ArrayProperty"},
        }};
    };

    struct ProceduralRotationMapModifier
    {
        static constexpr std::string_view Name = "ProceduralRotationMapModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralRotationModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Map = 0x38;
            static constexpr std::uintptr_t RotationFormat = 0x40;
            static constexpr std::uintptr_t Roll = 0x44;
            static constexpr std::uintptr_t Pitch = 0x4C;
            static constexpr std::uintptr_t Yaw = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Map", 0x38, "ObjectProperty"},
            {"RotationFormat", 0x40, "EnumProperty"},
            {"Roll", 0x44, "StructProperty"},
            {"Pitch", 0x4C, "StructProperty"},
            {"Yaw", 0x54, "StructProperty"},
        }};
    };

    struct ProceduralRotationModifier
    {
        static constexpr std::string_view Name = "ProceduralRotationModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralParameterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Contribution = 0x2C;
            static constexpr std::uintptr_t BlendMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"Contribution", 0x2C, "FloatProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
        }};
    };

    struct ProceduralRotationNoiseModifier
    {
        static constexpr std::string_view Name = "ProceduralRotationNoiseModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralRotationModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bRandomRoll = 0x38;
            static constexpr std::uintptr_t RandomRoll = 0x3C;
            static constexpr std::uintptr_t bRandomPitch = 0x44;
            static constexpr std::uintptr_t RandomPitch = 0x48;
            static constexpr std::uintptr_t bRandomYaw = 0x50;
            static constexpr std::uintptr_t RandomYaw = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bRandomRoll", 0x38, "BoolProperty"},
            {"RandomRoll", 0x3C, "StructProperty"},
            {"bRandomPitch", 0x44, "BoolProperty"},
            {"RandomPitch", 0x48, "StructProperty"},
            {"bRandomYaw", 0x50, "BoolProperty"},
            {"RandomYaw", 0x54, "StructProperty"},
        }};
    };

    struct ProceduralScaleMapModifier
    {
        static constexpr std::string_view Name = "ProceduralScaleMapModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScaleModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bRemapScale = 0x38;
            static constexpr std::uintptr_t RemapScale = 0x3C;
            static constexpr std::uintptr_t Map = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bRemapScale", 0x38, "BoolProperty"},
            {"RemapScale", 0x3C, "StructProperty"},
            {"Map", 0x48, "ObjectProperty"},
        }};
    };

    struct ProceduralScaleModifier
    {
        static constexpr std::string_view Name = "ProceduralScaleModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralParameterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t Contribution = 0x2C;
            static constexpr std::uintptr_t BlendMode = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"Contribution", 0x2C, "FloatProperty"},
            {"BlendMode", 0x30, "EnumProperty"},
        }};
    };

    struct ProceduralScaleNoiseModifier
    {
        static constexpr std::string_view Name = "ProceduralScaleNoiseModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScaleModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scale", 0x38, "StructProperty"},
        }};
    };

    struct ProceduralScatterActorContentSettings
    {
        static constexpr std::string_view Name = "ProceduralScatterActorContentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScatterContentSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bHideFromWorldOutliner = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHideFromWorldOutliner", 0x68, "BoolProperty"},
        }};
    };

    struct ProceduralScatterActorContentVariation
    {
        static constexpr std::string_view Name = "ProceduralScatterActorContentVariation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScatterContentVariation";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorClass", 0xE8, "ClassProperty"},
        }};
    };

    struct ProceduralScatterContentSettings
    {
        static constexpr std::string_view Name = "ProceduralScatterContentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SetActorTags = 0x28;
            static constexpr std::uintptr_t Variations = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SetActorTags", 0x28, "ArrayProperty"},
            {"Variations", 0x38, "ArrayProperty"},
        }};
    };

    struct ProceduralScatterContentVariation
    {
        static constexpr std::string_view Name = "ProceduralScatterContentVariation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x28;
            static constexpr std::uintptr_t PivotMode = 0x2C;
            static constexpr std::uintptr_t AdditionalPivotOffset = 0x30;
            static constexpr std::uintptr_t FootprintBoundingBoxRatio = 0x48;
            static constexpr std::uintptr_t SetActorTags = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Weight", 0x28, "FloatProperty"},
            {"PivotMode", 0x2C, "EnumProperty"},
            {"AdditionalPivotOffset", 0x30, "StructProperty"},
            {"FootprintBoundingBoxRatio", 0x48, "FloatProperty"},
            {"SetActorTags", 0x50, "ArrayProperty"},
        }};
    };

    struct ProceduralScatterGenerator
    {
        static constexpr std::string_view Name = "ProceduralScatterGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t ScatterMethod = 0x38;
            static constexpr std::uintptr_t TileSettings = 0x3C;
            static constexpr std::uintptr_t RandomSeed = 0x50;
            static constexpr std::uintptr_t NumUniqueSourcePointPatterns = 0x54;
            static constexpr std::uintptr_t GridSize = 0x58;
            static constexpr std::uintptr_t GridJitter = 0x68;
            static constexpr std::uintptr_t GridRotation = 0x78;
            static constexpr std::uintptr_t GridOffset = 0x80;
            static constexpr std::uintptr_t ScatterSettingsElements = 0x90;
            static constexpr std::uintptr_t BlockingActorTags = 0xA0;
            static constexpr std::uintptr_t bAllScatterPointsBlocking = 0xB0;
            static constexpr std::uintptr_t bLocalDistribution = 0xB1;
            static constexpr std::uintptr_t BlockingScatterPointTags = 0xB8;
            static constexpr std::uintptr_t ScatterDebugSettings = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ScatterMethod", 0x38, "EnumProperty"},
            {"TileSettings", 0x3C, "StructProperty"},
            {"RandomSeed", 0x50, "IntProperty"},
            {"NumUniqueSourcePointPatterns", 0x54, "IntProperty"},
            {"GridSize", 0x58, "StructProperty"},
            {"GridJitter", 0x68, "StructProperty"},
            {"GridRotation", 0x78, "FloatProperty"},
            {"GridOffset", 0x80, "StructProperty"},
            {"ScatterSettingsElements", 0x90, "ArrayProperty"},
            {"BlockingActorTags", 0xA0, "ArrayProperty"},
            {"bAllScatterPointsBlocking", 0xB0, "BoolProperty"},
            {"bLocalDistribution", 0xB1, "BoolProperty"},
            {"BlockingScatterPointTags", 0xB8, "ArrayProperty"},
            {"ScatterDebugSettings", 0xC8, "StructProperty"},
        }};
    };

    struct ProceduralScatterGeneratorContext
    {
        static constexpr std::string_view Name = "ProceduralScatterGeneratorContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralGeneratorContext";
        struct Offsets
        {
            static constexpr std::uintptr_t ScatteredPointCloud = 0x58;
            static constexpr std::uintptr_t UniqueTiles = 0x68;
            static constexpr std::uintptr_t SourcePointGenerators = 0x78;
            static constexpr std::uintptr_t ProjectionPointCloud = 0x88;
            static constexpr std::uintptr_t SourcePointCloud = 0x98;
            static constexpr std::uintptr_t BlockerPointCloud = 0xA0;
            static constexpr std::uintptr_t ProjectionVectorMaterial = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ScatteredPointCloud", 0x58, "StructProperty"},
            {"UniqueTiles", 0x68, "ArrayProperty"},
            {"SourcePointGenerators", 0x78, "ArrayProperty"},
            {"ProjectionPointCloud", 0x88, "ArrayProperty"},
            {"SourcePointCloud", 0x98, "ObjectProperty"},
            {"BlockerPointCloud", 0xA0, "ObjectProperty"},
            {"ProjectionVectorMaterial", 0xA8, "ObjectProperty"},
        }};
    };

    struct ProceduralScatterGeneratorTile
    {
        static constexpr std::string_view Name = "ProceduralScatterGeneratorTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x28;
            static constexpr std::uintptr_t GeneratedPoints = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Generator", 0x28, "ObjectProperty"},
            {"GeneratedPoints", 0x30, "ArrayProperty"},
        }};
    };

    struct ProceduralScatterSettings
    {
        static constexpr std::string_view Name = "ProceduralScatterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Content = 0x28;
            static constexpr std::uintptr_t bContentVariationsModifiersEnabled = 0x30;
            static constexpr std::uintptr_t ContentVariationsModifiers = 0x38;
            static constexpr std::uintptr_t SetPointTags = 0x48;
            static constexpr std::uintptr_t CollisionRadius = 0x58;
            static constexpr std::uintptr_t bAutomaticCollisionRadius = 0x5C;
            static constexpr std::uintptr_t bUseSphericalBoundsForAutomaticCollisionRadius = 0x5C;
            static constexpr std::uintptr_t AutomaticCollisionRadiusScaleFactor = 0x60;
            static constexpr std::uintptr_t DistributionSeed = 0x64;
            static constexpr std::uintptr_t bDensityModifiersEnabled = 0x68;
            static constexpr std::uintptr_t DensityModifiers = 0x70;
            static constexpr std::uintptr_t Density = 0x80;
            static constexpr std::uintptr_t SourcePointTagIncludes = 0x88;
            static constexpr std::uintptr_t SourcePointTagExcludes = 0x98;
            static constexpr std::uintptr_t SourceActorTagIncludes = 0xA8;
            static constexpr std::uintptr_t SourceActorTagExcludes = 0xB8;
            static constexpr std::uintptr_t SourceComponentTagIncludes = 0xC8;
            static constexpr std::uintptr_t SourceComponentTagExcludes = 0xD8;
            static constexpr std::uintptr_t SourcePointDistance = 0xE8;
            static constexpr std::uintptr_t bUseSourcePointExactNumber = 0xF0;
            static constexpr std::uintptr_t SourcePointExactNumber = 0xF4;
            static constexpr std::uintptr_t bScaleModifiersEnabled = 0xF8;
            static constexpr std::uintptr_t ScaleModifiers = 0x100;
            static constexpr std::uintptr_t bRotationModifiersEnabled = 0x120;
            static constexpr std::uintptr_t RotationModifiers = 0x128;
            static constexpr std::uintptr_t bAlignToNormal = 0x138;
            static constexpr std::uintptr_t AlignMaxAngle = 0x13C;
            static constexpr std::uintptr_t TargetSurface = 0x140;
            static constexpr std::uintptr_t bDetectOverhangingLedge = 0x188;
            static constexpr std::uintptr_t OverhangingLedgeDetectionRayCount = 0x18C;
            static constexpr std::uintptr_t OverhangingLedgeDetectionLength = 0x190;
            static constexpr std::uintptr_t OverhangingLedgeDetectionVerticalThreshold = 0x194;
            static constexpr std::uintptr_t OverhangingLedgeDetectionRadiusScale = 0x198;
            static constexpr std::uintptr_t FilterMinimumScale = 0x19C;
            static constexpr std::uintptr_t OverlapPriority = 0x1A0;
            static constexpr std::uintptr_t bCollisionWithWorld = 0x1A4;
            static constexpr std::uintptr_t CollisionScale = 0x1A8;
            static constexpr std::uintptr_t DebugColor = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"Content", 0x28, "ObjectProperty"},
            {"bContentVariationsModifiersEnabled", 0x30, "BoolProperty"},
            {"ContentVariationsModifiers", 0x38, "StructProperty"},
            {"SetPointTags", 0x48, "ArrayProperty"},
            {"CollisionRadius", 0x58, "FloatProperty"},
            {"bAutomaticCollisionRadius", 0x5C, "BoolProperty"},
            {"bUseSphericalBoundsForAutomaticCollisionRadius", 0x5C, "BoolProperty"},
            {"AutomaticCollisionRadiusScaleFactor", 0x60, "FloatProperty"},
            {"DistributionSeed", 0x64, "IntProperty"},
            {"bDensityModifiersEnabled", 0x68, "BoolProperty"},
            {"DensityModifiers", 0x70, "StructProperty"},
            {"Density", 0x80, "FloatProperty"},
            {"SourcePointTagIncludes", 0x88, "ArrayProperty"},
            {"SourcePointTagExcludes", 0x98, "ArrayProperty"},
            {"SourceActorTagIncludes", 0xA8, "ArrayProperty"},
            {"SourceActorTagExcludes", 0xB8, "ArrayProperty"},
            {"SourceComponentTagIncludes", 0xC8, "ArrayProperty"},
            {"SourceComponentTagExcludes", 0xD8, "ArrayProperty"},
            {"SourcePointDistance", 0xE8, "StructProperty"},
            {"bUseSourcePointExactNumber", 0xF0, "BoolProperty"},
            {"SourcePointExactNumber", 0xF4, "IntProperty"},
            {"bScaleModifiersEnabled", 0xF8, "BoolProperty"},
            {"ScaleModifiers", 0x100, "StructProperty"},
            {"bRotationModifiersEnabled", 0x120, "BoolProperty"},
            {"RotationModifiers", 0x128, "StructProperty"},
            {"bAlignToNormal", 0x138, "BoolProperty"},
            {"AlignMaxAngle", 0x13C, "FloatProperty"},
            {"TargetSurface", 0x140, "StructProperty"},
            {"bDetectOverhangingLedge", 0x188, "BoolProperty"},
            {"OverhangingLedgeDetectionRayCount", 0x18C, "IntProperty"},
            {"OverhangingLedgeDetectionLength", 0x190, "FloatProperty"},
            {"OverhangingLedgeDetectionVerticalThreshold", 0x194, "FloatProperty"},
            {"OverhangingLedgeDetectionRadiusScale", 0x198, "FloatProperty"},
            {"FilterMinimumScale", 0x19C, "FloatProperty"},
            {"OverlapPriority", 0x1A0, "FloatProperty"},
            {"bCollisionWithWorld", 0x1A4, "BoolProperty"},
            {"CollisionScale", 0x1A8, "StructProperty"},
            {"DebugColor", 0x1C0, "StructProperty"},
        }};
    };

    struct ProceduralScatterStaticMeshContentSettings
    {
        static constexpr std::string_view Name = "ProceduralScatterStaticMeshContentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScatterContentSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0x68;
            static constexpr std::uintptr_t ComponentTag = 0x70;
            static constexpr std::uintptr_t VariationsInstancingSettings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentClass", 0x68, "ClassProperty"},
            {"ComponentTag", 0x70, "NameProperty"},
            {"VariationsInstancingSettings", 0x78, "ObjectProperty"},
        }};
    };

    struct ProceduralScatterStaticMeshContentVariation
    {
        static constexpr std::string_view Name = "ProceduralScatterStaticMeshContentVariation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralScatterContentVariation";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshMode = 0xE8;
            static constexpr std::uintptr_t Mesh = 0xF0;
            static constexpr std::uintptr_t ActorClass = 0xF8;
            static constexpr std::uintptr_t OverrideMaterials = 0x100;
            static constexpr std::uintptr_t OverrideInstancingSettings = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StaticMeshMode", 0xE8, "EnumProperty"},
            {"Mesh", 0xF0, "ObjectProperty"},
            {"ActorClass", 0xF8, "ClassProperty"},
            {"OverrideMaterials", 0x100, "ArrayProperty"},
            {"OverrideInstancingSettings", 0x110, "ObjectProperty"},
        }};
    };

    struct ProceduralSurfaceHeightMap
    {
        static constexpr std::string_view Name = "ProceduralSurfaceHeightMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralFloatDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t bNormalizedHeight = 0x78;
            static constexpr std::uintptr_t HeightRange = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bNormalizedHeight", 0x78, "BoolProperty"},
            {"HeightRange", 0x7C, "StructProperty"},
        }};
    };

    struct ProceduralSurfaceSlopeAngleMap
    {
        static constexpr std::string_view Name = "ProceduralSurfaceSlopeAngleMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralFloatDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t bNormalizedSlopeAngle = 0x78;
            static constexpr std::uintptr_t SlopeAngleRange = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bNormalizedSlopeAngle", 0x78, "BoolProperty"},
            {"SlopeAngleRange", 0x7C, "StructProperty"},
        }};
    };

    struct ProceduralTextureFloatMap
    {
        static constexpr std::string_view Name = "ProceduralTextureFloatMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralFloatDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x78;
            static constexpr std::uintptr_t Source = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Channel", 0x78, "EnumProperty"},
            {"Source", 0x80, "StructProperty"},
        }};
    };

    struct ProceduralTextureVectorMap
    {
        static constexpr std::string_view Name = "ProceduralTextureVectorMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralVectorDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x138, "StructProperty"},
        }};
    };

    struct ProceduralVectorDataMap
    {
        static constexpr std::string_view Name = "ProceduralVectorDataMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t RemapCurve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RemapCurve", 0x30, "StructProperty"},
        }};
    };

    struct ProceduralVertexColorMap
    {
        static constexpr std::string_view Name = "ProceduralVertexColorMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralFloatDataMap";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Channel", 0x78, "EnumProperty"},
        }};
    };

}
