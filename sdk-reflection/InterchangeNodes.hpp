#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeNodes
{
    struct InterchangeAnimationTrackBaseNode
    {
        static constexpr std::string_view Name = "InterchangeAnimationTrackBaseNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAnimationTrackNode
    {
        static constexpr std::string_view Name = "InterchangeAnimationTrackNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAnimationTrackBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAnimationTrackSetInstanceNode
    {
        static constexpr std::string_view Name = "InterchangeAnimationTrackSetInstanceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAnimationTrackBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAnimationTrackSetNode
    {
        static constexpr std::string_view Name = "InterchangeAnimationTrackSetNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAudioSoundWaveNode
    {
        static constexpr std::string_view Name = "InterchangeAudioSoundWaveNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeBaseCameraNode
    {
        static constexpr std::string_view Name = "InterchangeBaseCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeBaseLightNode
    {
        static constexpr std::string_view Name = "InterchangeBaseLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeBoneNode
    {
        static constexpr std::string_view Name = "InterchangeBoneNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTransformNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeDecalMaterialNode
    {
        static constexpr std::string_view Name = "InterchangeDecalMaterialNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeShaderNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeDecalNode
    {
        static constexpr std::string_view Name = "InterchangeDecalNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeDirectionalLightNode
    {
        static constexpr std::string_view Name = "InterchangeDirectionalLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeFunctionCallShaderNode
    {
        static constexpr std::string_view Name = "InterchangeFunctionCallShaderNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeShaderNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGeometryCacheNode
    {
        static constexpr std::string_view Name = "InterchangeGeometryCacheNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGroomBindingNode
    {
        static constexpr std::string_view Name = "InterchangeGroomBindingNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGroomComponentNode
    {
        static constexpr std::string_view Name = "InterchangeGroomComponentNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeSceneComponentNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGroomNode
    {
        static constexpr std::string_view Name = "InterchangeGroomNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeInstancedStaticMeshComponentNode
    {
        static constexpr std::string_view Name = "InterchangeInstancedStaticMeshComponentNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeSceneComponentNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeJointNode
    {
        static constexpr std::string_view Name = "InterchangeJointNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeSceneNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeLightNode
    {
        static constexpr std::string_view Name = "InterchangeLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMaterialInstanceNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialInstanceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMaterialReferenceNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialReferenceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMeshBaseNode
    {
        static constexpr std::string_view Name = "InterchangeMeshBaseNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMeshBundleNode
    {
        static constexpr std::string_view Name = "InterchangeMeshBundleNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshLODContainerNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMeshLODContainerNode
    {
        static constexpr std::string_view Name = "InterchangeMeshLODContainerNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeMeshNode
    {
        static constexpr std::string_view Name = "InterchangeMeshNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangePhysicalCameraNode
    {
        static constexpr std::string_view Name = "InterchangePhysicalCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseCameraNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangePointLightNode
    {
        static constexpr std::string_view Name = "InterchangePointLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeRectLightNode
    {
        static constexpr std::string_view Name = "InterchangeRectLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSceneComponentNode
    {
        static constexpr std::string_view Name = "InterchangeSceneComponentNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSceneNode
    {
        static constexpr std::string_view Name = "InterchangeSceneNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTransformNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSceneVariantSetsNode
    {
        static constexpr std::string_view Name = "InterchangeSceneVariantSetsNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeShaderGraphNode
    {
        static constexpr std::string_view Name = "InterchangeShaderGraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeShaderNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeShaderNode
    {
        static constexpr std::string_view Name = "InterchangeShaderNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeShaderPortsAPI
    {
        static constexpr std::string_view Name = "InterchangeShaderPortsAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSkeletalAnimationTrackNode
    {
        static constexpr std::string_view Name = "InterchangeSkeletalAnimationTrackNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAnimationTrackBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSkyLightNode
    {
        static constexpr std::string_view Name = "InterchangeSkyLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSpecularProfileNode
    {
        static constexpr std::string_view Name = "InterchangeSpecularProfileNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSpotLightNode
    {
        static constexpr std::string_view Name = "InterchangeSpotLightNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePointLightNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeStandardCameraNode
    {
        static constexpr std::string_view Name = "InterchangeStandardCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseCameraNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTexture2DArrayNode
    {
        static constexpr std::string_view Name = "InterchangeTexture2DArrayNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTexture2DNode
    {
        static constexpr std::string_view Name = "InterchangeTexture2DNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTextureBlurNode
    {
        static constexpr std::string_view Name = "InterchangeTextureBlurNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTexture2DNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTextureCubeArrayNode
    {
        static constexpr std::string_view Name = "InterchangeTextureCubeArrayNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTextureCubeNode
    {
        static constexpr std::string_view Name = "InterchangeTextureCubeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTextureLightProfileNode
    {
        static constexpr std::string_view Name = "InterchangeTextureLightProfileNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTextureNode
    {
        static constexpr std::string_view Name = "InterchangeTextureNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTransformAnimationTrackNode
    {
        static constexpr std::string_view Name = "InterchangeTransformAnimationTrackNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAnimationTrackNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTransformNode
    {
        static constexpr std::string_view Name = "InterchangeTransformNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVariantSetNode
    {
        static constexpr std::string_view Name = "InterchangeVariantSetNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVolumeGridNode
    {
        static constexpr std::string_view Name = "InterchangeVolumeGridNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVolumeNode
    {
        static constexpr std::string_view Name = "InterchangeVolumeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVolumeTextureNode
    {
        static constexpr std::string_view Name = "InterchangeVolumeTextureNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureNode";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
