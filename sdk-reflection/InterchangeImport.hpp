#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeImport
{
    struct InterchangeActorFactory
    {
        static constexpr std::string_view Name = "InterchangeActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeAnimSequenceFactory
    {
        static constexpr std::string_view Name = "InterchangeAnimSequenceFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeAnimationPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeAnimationPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAssetUserData
    {
        static constexpr std::string_view Name = "InterchangeAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaData", 0x28, "MapProperty"},
        }};
    };

    struct InterchangeAudioPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeAudioPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAudioSoundWaveFactory
    {
        static constexpr std::string_view Name = "InterchangeAudioSoundWaveFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentsToRestart = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentsToRestart", 0x30, "ArrayProperty"},
        }};
    };

    struct InterchangeAudioTranslatorBase
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_AIF
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_AIF";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_AIFF
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_AIFF";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_FLAC
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_FLAC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_MP3
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_MP3";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_OGG
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_OGG";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_OPUS
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_OPUS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeAudioTranslator_WAV
    {
        static constexpr std::string_view Name = "InterchangeAudioTranslator_WAV";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAudioTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeBlockedTexturePayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeBlockedTexturePayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeCameraActorFactory
    {
        static constexpr std::string_view Name = "InterchangeCameraActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeCineCameraActorFactory
    {
        static constexpr std::string_view Name = "InterchangeCineCameraActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeDDSTranslator
    {
        static constexpr std::string_view Name = "InterchangeDDSTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeDecalActorFactory
    {
        static constexpr std::string_view Name = "InterchangeDecalActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeFbxTranslator
    {
        static constexpr std::string_view Name = "InterchangeFbxTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheFbxTranslatorSettings = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CacheFbxTranslatorSettings", 0x60, "ObjectProperty"},
        }};
    };

    struct InterchangeFbxTranslatorSettings
    {
        static constexpr std::string_view Name = "InterchangeFbxTranslatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CoordinateSystemPolicy = 0x28;
            static constexpr std::uintptr_t bConvertScene = 0x29;
            static constexpr std::uintptr_t bForceFrontXAxis = 0x2A;
            static constexpr std::uintptr_t bConvertSceneUnit = 0x2B;
            static constexpr std::uintptr_t bKeepFbxNamespace = 0x2C;
            static constexpr std::uintptr_t bConsiderClusterBeforePoseForMeshBindPose = 0x2D;
            static constexpr std::uintptr_t bUseUfbxParser = 0x2E;
            static constexpr std::uintptr_t bUsingLUFCoordinateSystem = 0x2F;
            static constexpr std::uintptr_t bDisplayUfbxParser = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CoordinateSystemPolicy", 0x28, "EnumProperty"},
            {"bConvertScene", 0x29, "BoolProperty"},
            {"bForceFrontXAxis", 0x2A, "BoolProperty"},
            {"bConvertSceneUnit", 0x2B, "BoolProperty"},
            {"bKeepFbxNamespace", 0x2C, "BoolProperty"},
            {"bConsiderClusterBeforePoseForMeshBindPose", 0x2D, "BoolProperty"},
            {"bUseUfbxParser", 0x2E, "BoolProperty"},
            {"bUsingLUFCoordinateSystem", 0x2F, "BoolProperty"},
            {"bDisplayUfbxParser", 0x30, "BoolProperty"},
        }};
    };

    struct InterchangeGLTFTranslator
    {
        static constexpr std::string_view Name = "InterchangeGLTFTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeGenericPayloadData
    {
        static constexpr std::string_view Name = "InterchangeGenericPayloadData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGenericPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeGenericPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeGeometryCacheActorFactory
    {
        static constexpr std::string_view Name = "InterchangeGeometryCacheActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeGeometryCacheFactory
    {
        static constexpr std::string_view Name = "InterchangeGeometryCacheFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeGroomBindingFactory
    {
        static constexpr std::string_view Name = "InterchangeGroomBindingFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeGroomCacheFactory
    {
        static constexpr std::string_view Name = "InterchangeGroomCacheFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeGroomFactory
    {
        static constexpr std::string_view Name = "InterchangeGroomFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeGroomPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeGroomPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeHeterogeneousVolumeActorFactory
    {
        static constexpr std::string_view Name = "InterchangeHeterogeneousVolumeActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeIESTranslator
    {
        static constexpr std::string_view Name = "InterchangeIESTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeImageWrapperTranslator
    {
        static constexpr std::string_view Name = "InterchangeImageWrapperTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeJPGTranslator
    {
        static constexpr std::string_view Name = "InterchangeJPGTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeLevelAssetUserData
    {
        static constexpr std::string_view Name = "InterchangeLevelAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneImportPaths = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SceneImportPaths", 0x28, "ArrayProperty"},
        }};
    };

    struct InterchangeLevelFactory
    {
        static constexpr std::string_view Name = "InterchangeLevelFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeLevelInstanceActorFactory
    {
        static constexpr std::string_view Name = "InterchangeLevelInstanceActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeLevelSequenceFactory
    {
        static constexpr std::string_view Name = "InterchangeLevelSequenceFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeLightActorFactory
    {
        static constexpr std::string_view Name = "InterchangeLightActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeMaterialFactory
    {
        static constexpr std::string_view Name = "InterchangeMaterialFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeMaterialFunctionFactory
    {
        static constexpr std::string_view Name = "InterchangeMaterialFunctionFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeMaterialXTranslator
    {
        static constexpr std::string_view Name = "InterchangeMaterialXTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeMeshPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeMeshPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeOBJTranslator
    {
        static constexpr std::string_view Name = "InterchangeOBJTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangePSDTranslator
    {
        static constexpr std::string_view Name = "InterchangePSDTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangePhysicsAssetFactory
    {
        static constexpr std::string_view Name = "InterchangePhysicsAssetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSceneImportAssetFactory
    {
        static constexpr std::string_view Name = "InterchangeSceneImportAssetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSceneVariantSetsFactory
    {
        static constexpr std::string_view Name = "InterchangeSceneVariantSetsFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSkeletalMeshActorFactory
    {
        static constexpr std::string_view Name = "InterchangeSkeletalMeshActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSkeletalMeshFactory
    {
        static constexpr std::string_view Name = "InterchangeSkeletalMeshFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSkeletonFactory
    {
        static constexpr std::string_view Name = "InterchangeSkeletonFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSkyLightActorFactory
    {
        static constexpr std::string_view Name = "InterchangeSkyLightActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSlicedTexturePayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeSlicedTexturePayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeSparseVolumeTextureFactory
    {
        static constexpr std::string_view Name = "InterchangeSparseVolumeTextureFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeSpecularProfileFactory
    {
        static constexpr std::string_view Name = "InterchangeSpecularProfileFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeStaticMeshActorFactory
    {
        static constexpr std::string_view Name = "InterchangeStaticMeshActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeActorFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeStaticMeshFactory
    {
        static constexpr std::string_view Name = "InterchangeStaticMeshFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeTextureFactory
    {
        static constexpr std::string_view Name = "InterchangeTextureFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeFactoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Results", 0x28, "ObjectProperty"},
        }};
    };

    struct InterchangeTextureLightProfilePayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeTextureLightProfilePayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeTexturePayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeTexturePayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeUEJPEGTranslator
    {
        static constexpr std::string_view Name = "InterchangeUEJPEGTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Results = 0x28;
            static constexpr std::uintptr_t SourceData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Results", 0x28, "ObjectProperty"},
            {"SourceData", 0x30, "ObjectProperty"},
        }};
    };

    struct InterchangeVariantSetPayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeVariantSetPayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVolumePayloadInterface
    {
        static constexpr std::string_view Name = "InterchangeVolumePayloadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeVolumeTranslatorSettings
    {
        static constexpr std::string_view Name = "InterchangeVolumeTranslatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeTranslatorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bTranslateAdjacentNumberedFiles = 0x28;
            static constexpr std::uintptr_t AnimationID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bTranslateAdjacentNumberedFiles", 0x28, "BoolProperty"},
            {"AnimationID", 0x30, "StrProperty"},
        }};
    };

    struct MaterialExpressionMaterialXAppend3Vector
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXAppend3Vector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t C = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"C", 0x100, "StructProperty"},
        }};
    };

    struct MaterialExpressionMaterialXAppend4Vector
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXAppend4Vector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t C = 0x100;
            static constexpr std::uintptr_t D = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"C", 0x100, "StructProperty"},
            {"D", 0x128, "StructProperty"},
        }};
    };

    struct MaterialExpressionMaterialXBurn
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXBurn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXContrast
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXContrast";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t Amount = 0xD8;
            static constexpr std::uintptr_t Pivot = 0x100;
            static constexpr std::uintptr_t ConstAmount = 0x128;
            static constexpr std::uintptr_t ConstPivot = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"Amount", 0xD8, "StructProperty"},
            {"Pivot", 0x100, "StructProperty"},
            {"ConstAmount", 0x128, "FloatProperty"},
            {"ConstPivot", 0x12C, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXDifference
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXDifference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXDisjointOver
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXDisjointOver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXDodge
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXDodge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXFractal
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXFractal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0xB0;
            static constexpr std::uintptr_t Amplitude = 0xD8;
            static constexpr std::uintptr_t ConstAmplitude = 0x100;
            static constexpr std::uintptr_t Octaves = 0x108;
            static constexpr std::uintptr_t ConstOctaves = 0x130;
            static constexpr std::uintptr_t Lacunarity = 0x138;
            static constexpr std::uintptr_t ConstLacunarity = 0x160;
            static constexpr std::uintptr_t Diminish = 0x168;
            static constexpr std::uintptr_t ConstDiminish = 0x190;
            static constexpr std::uintptr_t Scale = 0x194;
            static constexpr std::uintptr_t bTurbulence = 0x198;
            static constexpr std::uintptr_t Levels = 0x19C;
            static constexpr std::uintptr_t OutputMin = 0x1A0;
            static constexpr std::uintptr_t OutputMax = 0x1A4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Position", 0xB0, "StructProperty"},
            {"Amplitude", 0xD8, "StructProperty"},
            {"ConstAmplitude", 0x100, "FloatProperty"},
            {"Octaves", 0x108, "StructProperty"},
            {"ConstOctaves", 0x130, "IntProperty"},
            {"Lacunarity", 0x138, "StructProperty"},
            {"ConstLacunarity", 0x160, "FloatProperty"},
            {"Diminish", 0x168, "StructProperty"},
            {"ConstDiminish", 0x190, "FloatProperty"},
            {"Scale", 0x194, "FloatProperty"},
            {"bTurbulence", 0x198, "BoolProperty"},
            {"Levels", 0x19C, "IntProperty"},
            {"OutputMin", 0x1A0, "FloatProperty"},
            {"OutputMax", 0x1A4, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXIn
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXIn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXLuminance
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXLuminance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t LuminanceFactors = 0xD8;
            static constexpr std::uintptr_t LuminanceMode = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"LuminanceFactors", 0xD8, "StructProperty"},
            {"LuminanceMode", 0xE8, "EnumProperty"},
        }};
    };

    struct MaterialExpressionMaterialXMask
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXMatte
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXMatte";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXMinus
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXMinus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXMod
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXMod";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t ConstB = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"ConstB", 0x100, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXOut
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXOut";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXOver
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXOver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXOverlay
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXPlace2D
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXPlace2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t Pivot = 0xD8;
            static constexpr std::uintptr_t Scale = 0x100;
            static constexpr std::uintptr_t Offset = 0x128;
            static constexpr std::uintptr_t RotationAngle = 0x150;
            static constexpr std::uintptr_t ConstRotationAngle = 0x178;
            static constexpr std::uintptr_t ConstCoordinate = 0x17C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"Pivot", 0xD8, "StructProperty"},
            {"Scale", 0x100, "StructProperty"},
            {"Offset", 0x128, "StructProperty"},
            {"RotationAngle", 0x150, "StructProperty"},
            {"ConstRotationAngle", 0x178, "FloatProperty"},
            {"ConstCoordinate", 0x17C, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXPlus
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXPlus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXPremult
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXPremult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Input", 0xB0, "StructProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRamp4
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRamp4";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t A = 0xD8;
            static constexpr std::uintptr_t B = 0x100;
            static constexpr std::uintptr_t C = 0x128;
            static constexpr std::uintptr_t D = 0x150;
            static constexpr std::uintptr_t ConstCoordinate = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"A", 0xD8, "StructProperty"},
            {"B", 0x100, "StructProperty"},
            {"C", 0x128, "StructProperty"},
            {"D", 0x150, "StructProperty"},
            {"ConstCoordinate", 0x178, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRampLeftRight
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRampLeftRight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t A = 0xD8;
            static constexpr std::uintptr_t B = 0x100;
            static constexpr std::uintptr_t ConstCoordinate = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"A", 0xD8, "StructProperty"},
            {"B", 0x100, "StructProperty"},
            {"ConstCoordinate", 0x128, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRampTopBottom
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRampTopBottom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t A = 0xD8;
            static constexpr std::uintptr_t B = 0x100;
            static constexpr std::uintptr_t ConstCoordinate = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"A", 0xD8, "StructProperty"},
            {"B", 0x100, "StructProperty"},
            {"ConstCoordinate", 0x128, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRange
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t InputLow = 0xD8;
            static constexpr std::uintptr_t InputHigh = 0x100;
            static constexpr std::uintptr_t TargetLow = 0x128;
            static constexpr std::uintptr_t TargetHigh = 0x150;
            static constexpr std::uintptr_t Gamma = 0x178;
            static constexpr std::uintptr_t clamp = 0x1A0;
            static constexpr std::uintptr_t ConstInputLow = 0x1C8;
            static constexpr std::uintptr_t ConstInputHigh = 0x1CC;
            static constexpr std::uintptr_t ConstTargetLow = 0x1D0;
            static constexpr std::uintptr_t ConstTargetHigh = 0x1D4;
            static constexpr std::uintptr_t ConstGamma = 0x1D8;
            static constexpr std::uintptr_t bConstClamp = 0x1DC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"InputLow", 0xD8, "StructProperty"},
            {"InputHigh", 0x100, "StructProperty"},
            {"TargetLow", 0x128, "StructProperty"},
            {"TargetHigh", 0x150, "StructProperty"},
            {"Gamma", 0x178, "StructProperty"},
            {"clamp", 0x1A0, "StructProperty"},
            {"ConstInputLow", 0x1C8, "FloatProperty"},
            {"ConstInputHigh", 0x1CC, "FloatProperty"},
            {"ConstTargetLow", 0x1D0, "FloatProperty"},
            {"ConstTargetHigh", 0x1D4, "FloatProperty"},
            {"ConstGamma", 0x1D8, "FloatProperty"},
            {"bConstClamp", 0x1DC, "BoolProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRemap
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRemap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t InputLow = 0xD8;
            static constexpr std::uintptr_t InputHigh = 0x100;
            static constexpr std::uintptr_t TargetLow = 0x128;
            static constexpr std::uintptr_t TargetHigh = 0x150;
            static constexpr std::uintptr_t InputLowDefault = 0x178;
            static constexpr std::uintptr_t InputHighDefault = 0x17C;
            static constexpr std::uintptr_t TargetLowDefault = 0x180;
            static constexpr std::uintptr_t TargetHighDefault = 0x184;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"InputLow", 0xD8, "StructProperty"},
            {"InputHigh", 0x100, "StructProperty"},
            {"TargetLow", 0x128, "StructProperty"},
            {"TargetHigh", 0x150, "StructProperty"},
            {"InputLowDefault", 0x178, "FloatProperty"},
            {"InputHighDefault", 0x17C, "FloatProperty"},
            {"TargetLowDefault", 0x180, "FloatProperty"},
            {"TargetHighDefault", 0x184, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXRotate2D
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXRotate2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t RotationAngle = 0xD8;
            static constexpr std::uintptr_t ConstRotationAngle = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"RotationAngle", 0xD8, "StructProperty"},
            {"ConstRotationAngle", 0x100, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXScreen
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0xB0;
            static constexpr std::uintptr_t B = 0xD8;
            static constexpr std::uintptr_t Alpha = 0x100;
            static constexpr std::uintptr_t ConstAlpha = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0xB0, "StructProperty"},
            {"B", 0xD8, "StructProperty"},
            {"Alpha", 0x100, "StructProperty"},
            {"ConstAlpha", 0x128, "FloatProperty"},
        }};
    };

    struct MaterialExpressionMaterialXSplitLeftRight
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXSplitLeftRight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t A = 0xD8;
            static constexpr std::uintptr_t B = 0x100;
            static constexpr std::uintptr_t Center = 0x128;
            static constexpr std::uintptr_t ConstCenter = 0x150;
            static constexpr std::uintptr_t ConstCoordinate = 0x154;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"A", 0xD8, "StructProperty"},
            {"B", 0x100, "StructProperty"},
            {"Center", 0x128, "StructProperty"},
            {"ConstCenter", 0x150, "FloatProperty"},
            {"ConstCoordinate", 0x154, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXSplitTopBottom
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXSplitTopBottom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0xB0;
            static constexpr std::uintptr_t A = 0xD8;
            static constexpr std::uintptr_t B = 0x100;
            static constexpr std::uintptr_t Center = 0x128;
            static constexpr std::uintptr_t ConstCenter = 0x150;
            static constexpr std::uintptr_t ConstCoordinate = 0x154;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Coordinates", 0xB0, "StructProperty"},
            {"A", 0xD8, "StructProperty"},
            {"B", 0x100, "StructProperty"},
            {"Center", 0x128, "StructProperty"},
            {"ConstCenter", 0x150, "FloatProperty"},
            {"ConstCoordinate", 0x154, "ByteProperty"},
        }};
    };

    struct MaterialExpressionMaterialXSwizzle
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXSwizzle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
            static constexpr std::uintptr_t Channels = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Input", 0xB0, "StructProperty"},
            {"Channels", 0xD8, "StrProperty"},
        }};
    };

    struct MaterialExpressionMaterialXTextureSampleParameterBlur
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXTextureSampleParameterBlur";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionTextureSampleParameter2D";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelSize = 0x220;
            static constexpr std::uintptr_t FilterSize = 0x224;
            static constexpr std::uintptr_t FilterOffset = 0x228;
            static constexpr std::uintptr_t Filter = 0x22C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"KernelSize", 0x220, "EnumProperty"},
            {"FilterSize", 0x224, "FloatProperty"},
            {"FilterOffset", 0x228, "FloatProperty"},
            {"Filter", 0x22C, "EnumProperty"},
        }};
    };

    struct MaterialExpressionMaterialXUnpremult
    {
        static constexpr std::string_view Name = "MaterialExpressionMaterialXUnpremult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpression";
        struct Offsets
        {
            static constexpr std::uintptr_t Input = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Input", 0xB0, "StructProperty"},
        }};
    };

}
