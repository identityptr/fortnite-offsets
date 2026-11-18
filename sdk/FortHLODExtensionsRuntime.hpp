#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortHLODExtensionsRuntime
{
    struct FortHLODHiddenSurfaceRevealComponent
    {
        static constexpr std::string_view Name = "FortHLODHiddenSurfaceRevealComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

}
