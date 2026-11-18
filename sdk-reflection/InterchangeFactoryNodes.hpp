#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeFactoryNodes
{
    struct InterchangeActorFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeActorFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeAnimSequenceFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeAnimSequenceFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeAudioSoundWaveFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeAudioSoundWaveFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeBaseCameraFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeBaseCameraFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeBaseLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeBaseLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeBaseMaterialFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeBaseMaterialFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeCommonPipelineDataFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeCommonPipelineDataFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeDecalActorFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeDecalActorFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeDecalMaterialFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeDecalMaterialFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseMaterialFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeDirectionalLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeDirectionalLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeGeometryCacheFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeGeometryCacheFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeGroomBindingFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeGroomBindingFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeGroomCacheFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeGroomCacheFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeGroomComponentFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeGroomComponentFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeSceneComponentFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeGroomFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeGroomFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeHeterogeneousVolumeActorFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeHeterogeneousVolumeActorFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeInstancedStaticMeshComponentFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeInstancedStaticMeshComponentFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeSceneComponentFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeLevelFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeLevelFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeLevelInstanceActorFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeLevelInstanceActorFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeLevelSequenceFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeLevelSequenceFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialExpressionFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialExpressionFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseMaterialFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialFunctionCallExpressionFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialFunctionCallExpressionFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMaterialExpressionFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialFunctionFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialFunctionFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseMaterialFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialInstanceFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialInstanceFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseMaterialFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMaterialReferenceFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMaterialReferenceFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseMaterialFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMeshActorFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMeshActorFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeMeshFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeMeshFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangePhysicalCameraFactoryNode
    {
        static constexpr std::string_view Name = "InterchangePhysicalCameraFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseCameraFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangePhysicsAssetFactoryNode
    {
        static constexpr std::string_view Name = "InterchangePhysicsAssetFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangePointLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangePointLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeRectLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeRectLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSceneComponentFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSceneComponentFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSceneImportAssetFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSceneImportAssetFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSceneVariantSetsFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSceneVariantSetsFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSkeletalMeshFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSkeletalMeshFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSkeletalMeshLodDataNode
    {
        static constexpr std::string_view Name = "InterchangeSkeletalMeshLodDataNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSkeletonFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSkeletonFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSkyLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSkyLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSparseVolumeTextureFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSparseVolumeTextureFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSpecularProfileFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSpecularProfileFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeSpotLightFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeSpotLightFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePointLightFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeStandardCameraFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeStandardCameraFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeBaseCameraFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeStaticMeshFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeStaticMeshFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeMeshFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeStaticMeshLodDataNode
    {
        static constexpr std::string_view Name = "InterchangeStaticMeshLodDataNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTexture2DArrayFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTexture2DArrayFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTexture2DFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTexture2DFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTextureCubeArrayFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTextureCubeArrayFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTextureCubeFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTextureCubeFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTextureFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTextureFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBaseNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeTextureLightProfileFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeTextureLightProfileFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTexture2DFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

    struct InterchangeVolumeTextureFactoryNode
    {
        static constexpr std::string_view Name = "InterchangeVolumeTextureFactoryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTextureFactoryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesAppliedThroughDelegatesKeySet = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributesAppliedThroughDelegatesKeySet", 0xE8, "SetProperty"},
        }};
    };

}
