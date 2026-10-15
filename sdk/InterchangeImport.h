/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeImport
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeImport.InterchangeActorFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeActorFactory, Results) == 40, "Offset mismatch for UInterchangeActorFactory::Results");

// /Script/InterchangeImport.InterchangeAnimSequenceFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeAnimSequenceFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAnimSequenceFactory, Results) == 40, "Offset mismatch for UInterchangeAnimSequenceFactory::Results");

// /Script/InterchangeImport.InterchangeAnimationPayloadInterface
// Kind: Class; super: Interface
class UInterchangeAnimationPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeAssetUserData
// Kind: Class; super: AssetUserData
class UInterchangeAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MetaData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInterchangeAssetUserData, MetaData) == 40, "Offset mismatch for UInterchangeAssetUserData::MetaData");

// /Script/InterchangeImport.InterchangeAudioPayloadInterface
// Kind: Class; super: Interface
class UInterchangeAudioPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeAudioSoundWaveFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeAudioSoundWaveFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ComponentsToRestart; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeAudioSoundWaveFactory, ComponentsToRestart) == 48, "Offset mismatch for UInterchangeAudioSoundWaveFactory::ComponentsToRestart");

// /Script/InterchangeImport.InterchangeAudioTranslatorBase
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeAudioTranslatorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslatorBase, Results) == 40, "Offset mismatch for UInterchangeAudioTranslatorBase::Results");
static_assert(offsetof(UInterchangeAudioTranslatorBase, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslatorBase::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_AIF
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_AIF
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_AIF, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_AIF::Results");
static_assert(offsetof(UInterchangeAudioTranslator_AIF, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_AIF::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_AIFF
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_AIFF
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_AIFF, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_AIFF::Results");
static_assert(offsetof(UInterchangeAudioTranslator_AIFF, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_AIFF::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_FLAC
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_FLAC
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_FLAC, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_FLAC::Results");
static_assert(offsetof(UInterchangeAudioTranslator_FLAC, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_FLAC::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_MP3
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_MP3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_MP3, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_MP3::Results");
static_assert(offsetof(UInterchangeAudioTranslator_MP3, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_MP3::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_OGG
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_OGG
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_OGG, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_OGG::Results");
static_assert(offsetof(UInterchangeAudioTranslator_OGG, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_OGG::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_OPUS
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_OPUS
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_OPUS, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_OPUS::Results");
static_assert(offsetof(UInterchangeAudioTranslator_OPUS, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_OPUS::SourceData");

// /Script/InterchangeImport.InterchangeAudioTranslator_WAV
// Kind: Class; super: InterchangeAudioTranslatorBase
class UInterchangeAudioTranslator_WAV
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeAudioTranslator_WAV, Results) == 40, "Offset mismatch for UInterchangeAudioTranslator_WAV::Results");
static_assert(offsetof(UInterchangeAudioTranslator_WAV, SourceData) == 48, "Offset mismatch for UInterchangeAudioTranslator_WAV::SourceData");

// /Script/InterchangeImport.InterchangeBlockedTexturePayloadInterface
// Kind: Class; super: Interface
class UInterchangeBlockedTexturePayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeCameraActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeCameraActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeCameraActorFactory, Results) == 40, "Offset mismatch for UInterchangeCameraActorFactory::Results");

// /Script/InterchangeImport.InterchangeCineCameraActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeCineCameraActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeCineCameraActorFactory, Results) == 40, "Offset mismatch for UInterchangeCineCameraActorFactory::Results");

// /Script/InterchangeImport.InterchangeDDSTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeDDSTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeDDSTranslator, Results) == 40, "Offset mismatch for UInterchangeDDSTranslator::Results");
static_assert(offsetof(UInterchangeDDSTranslator, SourceData) == 48, "Offset mismatch for UInterchangeDDSTranslator::SourceData");

// /Script/InterchangeImport.InterchangeDecalActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeDecalActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeDecalActorFactory, Results) == 40, "Offset mismatch for UInterchangeDecalActorFactory::Results");

// /Script/InterchangeImport.InterchangeFbxTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeFbxTranslator
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* CacheFbxTranslatorSettings; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeFbxTranslator, CacheFbxTranslatorSettings) == 96, "Offset mismatch for UInterchangeFbxTranslator::CacheFbxTranslatorSettings");

// /Script/InterchangeImport.InterchangeFbxTranslatorSettings
// Kind: Class; super: InterchangeTranslatorSettings
class UInterchangeFbxTranslatorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CoordinateSystemPolicy; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bConvertScene; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceFrontXAxis; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConvertSceneUnit; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepFbxNamespace; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsiderClusterBeforePoseForMeshBindPose; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUfbxParser; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsingLUFCoordinateSystem; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayUfbxParser; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInterchangeFbxTranslatorSettings, CoordinateSystemPolicy) == 40, "Offset mismatch for UInterchangeFbxTranslatorSettings::CoordinateSystemPolicy");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bConvertScene) == 41, "Offset mismatch for UInterchangeFbxTranslatorSettings::bConvertScene");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bForceFrontXAxis) == 42, "Offset mismatch for UInterchangeFbxTranslatorSettings::bForceFrontXAxis");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bConvertSceneUnit) == 43, "Offset mismatch for UInterchangeFbxTranslatorSettings::bConvertSceneUnit");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bKeepFbxNamespace) == 44, "Offset mismatch for UInterchangeFbxTranslatorSettings::bKeepFbxNamespace");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bConsiderClusterBeforePoseForMeshBindPose) == 45, "Offset mismatch for UInterchangeFbxTranslatorSettings::bConsiderClusterBeforePoseForMeshBindPose");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bUseUfbxParser) == 46, "Offset mismatch for UInterchangeFbxTranslatorSettings::bUseUfbxParser");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bUsingLUFCoordinateSystem) == 47, "Offset mismatch for UInterchangeFbxTranslatorSettings::bUsingLUFCoordinateSystem");
static_assert(offsetof(UInterchangeFbxTranslatorSettings, bDisplayUfbxParser) == 48, "Offset mismatch for UInterchangeFbxTranslatorSettings::bDisplayUfbxParser");

// /Script/InterchangeImport.InterchangeGLTFTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeGLTFTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGLTFTranslator, Results) == 40, "Offset mismatch for UInterchangeGLTFTranslator::Results");
static_assert(offsetof(UInterchangeGLTFTranslator, SourceData) == 48, "Offset mismatch for UInterchangeGLTFTranslator::SourceData");

// /Script/InterchangeImport.InterchangeGenericPayloadData
// Kind: Class; super: Object
class UInterchangeGenericPayloadData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeGenericPayloadInterface
// Kind: Class; super: Interface
class UInterchangeGenericPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeGeometryCacheActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeGeometryCacheActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGeometryCacheActorFactory, Results) == 40, "Offset mismatch for UInterchangeGeometryCacheActorFactory::Results");

// /Script/InterchangeImport.InterchangeGeometryCacheFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeGeometryCacheFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGeometryCacheFactory, Results) == 40, "Offset mismatch for UInterchangeGeometryCacheFactory::Results");

// /Script/InterchangeImport.InterchangeGroomBindingFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeGroomBindingFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGroomBindingFactory, Results) == 40, "Offset mismatch for UInterchangeGroomBindingFactory::Results");

// /Script/InterchangeImport.InterchangeGroomCacheFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeGroomCacheFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGroomCacheFactory, Results) == 40, "Offset mismatch for UInterchangeGroomCacheFactory::Results");

// /Script/InterchangeImport.InterchangeGroomFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeGroomFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeGroomFactory, Results) == 40, "Offset mismatch for UInterchangeGroomFactory::Results");

// /Script/InterchangeImport.InterchangeGroomPayloadInterface
// Kind: Class; super: Interface
class UInterchangeGroomPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeHeterogeneousVolumeActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeHeterogeneousVolumeActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeHeterogeneousVolumeActorFactory, Results) == 40, "Offset mismatch for UInterchangeHeterogeneousVolumeActorFactory::Results");

// /Script/InterchangeImport.InterchangeIESTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeIESTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeIESTranslator, Results) == 40, "Offset mismatch for UInterchangeIESTranslator::Results");
static_assert(offsetof(UInterchangeIESTranslator, SourceData) == 48, "Offset mismatch for UInterchangeIESTranslator::SourceData");

// /Script/InterchangeImport.InterchangeImageWrapperTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeImageWrapperTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeImageWrapperTranslator, Results) == 40, "Offset mismatch for UInterchangeImageWrapperTranslator::Results");
static_assert(offsetof(UInterchangeImageWrapperTranslator, SourceData) == 48, "Offset mismatch for UInterchangeImageWrapperTranslator::SourceData");

// /Script/InterchangeImport.InterchangeJPGTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeJPGTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeJPGTranslator, Results) == 40, "Offset mismatch for UInterchangeJPGTranslator::Results");
static_assert(offsetof(UInterchangeJPGTranslator, SourceData) == 48, "Offset mismatch for UInterchangeJPGTranslator::SourceData");

// /Script/InterchangeImport.InterchangeLevelAssetUserData
// Kind: Class; super: AssetUserData
class UInterchangeLevelAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SceneImportPaths; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInterchangeLevelAssetUserData, SceneImportPaths) == 40, "Offset mismatch for UInterchangeLevelAssetUserData::SceneImportPaths");

// /Script/InterchangeImport.InterchangeLevelFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeLevelFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeLevelFactory, Results) == 40, "Offset mismatch for UInterchangeLevelFactory::Results");

// /Script/InterchangeImport.InterchangeLevelInstanceActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeLevelInstanceActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeLevelInstanceActorFactory, Results) == 40, "Offset mismatch for UInterchangeLevelInstanceActorFactory::Results");

// /Script/InterchangeImport.InterchangeLevelSequenceFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeLevelSequenceFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeLevelSequenceFactory, Results) == 40, "Offset mismatch for UInterchangeLevelSequenceFactory::Results");

// /Script/InterchangeImport.InterchangeLightActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeLightActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeLightActorFactory, Results) == 40, "Offset mismatch for UInterchangeLightActorFactory::Results");

// /Script/InterchangeImport.InterchangeMaterialFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeMaterialFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeMaterialFactory, Results) == 40, "Offset mismatch for UInterchangeMaterialFactory::Results");

// /Script/InterchangeImport.InterchangeMaterialFunctionFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeMaterialFunctionFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeMaterialFunctionFactory, Results) == 40, "Offset mismatch for UInterchangeMaterialFunctionFactory::Results");

// /Script/InterchangeImport.InterchangeMaterialXTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeMaterialXTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeMaterialXTranslator, Results) == 40, "Offset mismatch for UInterchangeMaterialXTranslator::Results");
static_assert(offsetof(UInterchangeMaterialXTranslator, SourceData) == 48, "Offset mismatch for UInterchangeMaterialXTranslator::SourceData");

// /Script/InterchangeImport.InterchangeMeshPayloadInterface
// Kind: Class; super: Interface
class UInterchangeMeshPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeOBJTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeOBJTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeOBJTranslator, Results) == 40, "Offset mismatch for UInterchangeOBJTranslator::Results");
static_assert(offsetof(UInterchangeOBJTranslator, SourceData) == 48, "Offset mismatch for UInterchangeOBJTranslator::SourceData");

// /Script/InterchangeImport.InterchangePSDTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangePSDTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangePSDTranslator, Results) == 40, "Offset mismatch for UInterchangePSDTranslator::Results");
static_assert(offsetof(UInterchangePSDTranslator, SourceData) == 48, "Offset mismatch for UInterchangePSDTranslator::SourceData");

// /Script/InterchangeImport.InterchangePhysicsAssetFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangePhysicsAssetFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangePhysicsAssetFactory, Results) == 40, "Offset mismatch for UInterchangePhysicsAssetFactory::Results");

// /Script/InterchangeImport.InterchangeSceneImportAssetFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSceneImportAssetFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSceneImportAssetFactory, Results) == 40, "Offset mismatch for UInterchangeSceneImportAssetFactory::Results");

// /Script/InterchangeImport.InterchangeSceneVariantSetsFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSceneVariantSetsFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSceneVariantSetsFactory, Results) == 40, "Offset mismatch for UInterchangeSceneVariantSetsFactory::Results");

// /Script/InterchangeImport.InterchangeSkeletalMeshActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeSkeletalMeshActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSkeletalMeshActorFactory, Results) == 40, "Offset mismatch for UInterchangeSkeletalMeshActorFactory::Results");

// /Script/InterchangeImport.InterchangeSkeletalMeshFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSkeletalMeshFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSkeletalMeshFactory, Results) == 40, "Offset mismatch for UInterchangeSkeletalMeshFactory::Results");

// /Script/InterchangeImport.InterchangeSkeletonFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSkeletonFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSkeletonFactory, Results) == 40, "Offset mismatch for UInterchangeSkeletonFactory::Results");

// /Script/InterchangeImport.InterchangeSkyLightActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeSkyLightActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSkyLightActorFactory, Results) == 40, "Offset mismatch for UInterchangeSkyLightActorFactory::Results");

// /Script/InterchangeImport.InterchangeSlicedTexturePayloadInterface
// Kind: Class; super: Interface
class UInterchangeSlicedTexturePayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeSparseVolumeTextureFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSparseVolumeTextureFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSparseVolumeTextureFactory, Results) == 40, "Offset mismatch for UInterchangeSparseVolumeTextureFactory::Results");

// /Script/InterchangeImport.InterchangeSpecularProfileFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeSpecularProfileFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeSpecularProfileFactory, Results) == 40, "Offset mismatch for UInterchangeSpecularProfileFactory::Results");

// /Script/InterchangeImport.InterchangeStaticMeshActorFactory
// Kind: Class; super: InterchangeActorFactory
class UInterchangeStaticMeshActorFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeStaticMeshActorFactory, Results) == 40, "Offset mismatch for UInterchangeStaticMeshActorFactory::Results");

// /Script/InterchangeImport.InterchangeStaticMeshFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeStaticMeshFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeStaticMeshFactory, Results) == 40, "Offset mismatch for UInterchangeStaticMeshFactory::Results");

// /Script/InterchangeImport.InterchangeTextureFactory
// Kind: Class; super: InterchangeFactoryBase
class UInterchangeTextureFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeTextureFactory, Results) == 40, "Offset mismatch for UInterchangeTextureFactory::Results");

// /Script/InterchangeImport.InterchangeTextureLightProfilePayloadInterface
// Kind: Class; super: Interface
class UInterchangeTextureLightProfilePayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeTexturePayloadInterface
// Kind: Class; super: Interface
class UInterchangeTexturePayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeUEJPEGTranslator
// Kind: Class; super: InterchangeTranslatorBase
class UInterchangeUEJPEGTranslator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Results; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SourceData; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInterchangeUEJPEGTranslator, Results) == 40, "Offset mismatch for UInterchangeUEJPEGTranslator::Results");
static_assert(offsetof(UInterchangeUEJPEGTranslator, SourceData) == 48, "Offset mismatch for UInterchangeUEJPEGTranslator::SourceData");

// /Script/InterchangeImport.InterchangeVariantSetPayloadInterface
// Kind: Class; super: Interface
class UInterchangeVariantSetPayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeVolumePayloadInterface
// Kind: Class; super: Interface
class UInterchangeVolumePayloadInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeImport.InterchangeVolumeTranslatorSettings
// Kind: Class; super: InterchangeTranslatorSettings
class UInterchangeVolumeTranslatorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bTranslateAdjacentNumberedFiles; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    FString AnimationID; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeVolumeTranslatorSettings, bTranslateAdjacentNumberedFiles) == 40, "Offset mismatch for UInterchangeVolumeTranslatorSettings::bTranslateAdjacentNumberedFiles");
static_assert(offsetof(UInterchangeVolumeTranslatorSettings, AnimationID) == 48, "Offset mismatch for UInterchangeVolumeTranslatorSettings::AnimationID");

// /Script/InterchangeImport.MaterialExpressionMaterialXAppend3Vector
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXAppend3Vector
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t C[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXAppend3Vector::A");
static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXAppend3Vector::B");
static_assert(offsetof(UMaterialExpressionMaterialXAppend3Vector, C) == 256, "Offset mismatch for UMaterialExpressionMaterialXAppend3Vector::C");

// /Script/InterchangeImport.MaterialExpressionMaterialXAppend4Vector
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXAppend4Vector
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t C[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t D[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXAppend4Vector::A");
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXAppend4Vector::B");
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, C) == 256, "Offset mismatch for UMaterialExpressionMaterialXAppend4Vector::C");
static_assert(offsetof(UMaterialExpressionMaterialXAppend4Vector, D) == 296, "Offset mismatch for UMaterialExpressionMaterialXAppend4Vector::D");

// /Script/InterchangeImport.MaterialExpressionMaterialXBurn
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXBurn
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXBurn, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXBurn::A");
static_assert(offsetof(UMaterialExpressionMaterialXBurn, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXBurn::B");
static_assert(offsetof(UMaterialExpressionMaterialXBurn, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXBurn::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXBurn, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXBurn::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXContrast
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXContrast
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Amount[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Pivot[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAmount; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float ConstPivot; // 0x012C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXContrast, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXContrast::Input");
static_assert(offsetof(UMaterialExpressionMaterialXContrast, Amount) == 216, "Offset mismatch for UMaterialExpressionMaterialXContrast::Amount");
static_assert(offsetof(UMaterialExpressionMaterialXContrast, Pivot) == 256, "Offset mismatch for UMaterialExpressionMaterialXContrast::Pivot");
static_assert(offsetof(UMaterialExpressionMaterialXContrast, ConstAmount) == 296, "Offset mismatch for UMaterialExpressionMaterialXContrast::ConstAmount");
static_assert(offsetof(UMaterialExpressionMaterialXContrast, ConstPivot) == 300, "Offset mismatch for UMaterialExpressionMaterialXContrast::ConstPivot");

// /Script/InterchangeImport.MaterialExpressionMaterialXDifference
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXDifference
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXDifference, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXDifference::A");
static_assert(offsetof(UMaterialExpressionMaterialXDifference, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXDifference::B");
static_assert(offsetof(UMaterialExpressionMaterialXDifference, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXDifference::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXDifference, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXDifference::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXDisjointOver
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXDisjointOver
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXDisjointOver::A");
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXDisjointOver::B");
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXDisjointOver::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXDisjointOver, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXDisjointOver::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXDodge
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXDodge
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXDodge, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXDodge::A");
static_assert(offsetof(UMaterialExpressionMaterialXDodge, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXDodge::B");
static_assert(offsetof(UMaterialExpressionMaterialXDodge, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXDodge::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXDodge, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXDodge::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXFractal
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXFractal
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Position[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Amplitude[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    float ConstAmplitude; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0104
    std::uint8_t Octaves[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::int32_t ConstOctaves; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0134
    std::uint8_t Lacunarity[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    float ConstLacunarity; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0164
    std::uint8_t Diminish[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    float ConstDiminish; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0194 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTurbulence; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0199
    std::int32_t Levels; // 0x019C (Size: 0x4, Type: IntProperty)
    float OutputMin; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float OutputMax; // 0x01A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXFractal, Position) == 176, "Offset mismatch for UMaterialExpressionMaterialXFractal::Position");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Amplitude) == 216, "Offset mismatch for UMaterialExpressionMaterialXFractal::Amplitude");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, ConstAmplitude) == 256, "Offset mismatch for UMaterialExpressionMaterialXFractal::ConstAmplitude");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Octaves) == 264, "Offset mismatch for UMaterialExpressionMaterialXFractal::Octaves");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, ConstOctaves) == 304, "Offset mismatch for UMaterialExpressionMaterialXFractal::ConstOctaves");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Lacunarity) == 312, "Offset mismatch for UMaterialExpressionMaterialXFractal::Lacunarity");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, ConstLacunarity) == 352, "Offset mismatch for UMaterialExpressionMaterialXFractal::ConstLacunarity");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Diminish) == 360, "Offset mismatch for UMaterialExpressionMaterialXFractal::Diminish");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, ConstDiminish) == 400, "Offset mismatch for UMaterialExpressionMaterialXFractal::ConstDiminish");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Scale) == 404, "Offset mismatch for UMaterialExpressionMaterialXFractal::Scale");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, bTurbulence) == 408, "Offset mismatch for UMaterialExpressionMaterialXFractal::bTurbulence");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, Levels) == 412, "Offset mismatch for UMaterialExpressionMaterialXFractal::Levels");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, OutputMin) == 416, "Offset mismatch for UMaterialExpressionMaterialXFractal::OutputMin");
static_assert(offsetof(UMaterialExpressionMaterialXFractal, OutputMax) == 420, "Offset mismatch for UMaterialExpressionMaterialXFractal::OutputMax");

// /Script/InterchangeImport.MaterialExpressionMaterialXIn
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXIn
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXIn, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXIn::A");
static_assert(offsetof(UMaterialExpressionMaterialXIn, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXIn::B");
static_assert(offsetof(UMaterialExpressionMaterialXIn, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXIn::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXIn, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXIn::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXLuminance
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXLuminance
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LuminanceFactors[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t LuminanceMode; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXLuminance, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXLuminance::Input");
static_assert(offsetof(UMaterialExpressionMaterialXLuminance, LuminanceFactors) == 216, "Offset mismatch for UMaterialExpressionMaterialXLuminance::LuminanceFactors");
static_assert(offsetof(UMaterialExpressionMaterialXLuminance, LuminanceMode) == 232, "Offset mismatch for UMaterialExpressionMaterialXLuminance::LuminanceMode");

// /Script/InterchangeImport.MaterialExpressionMaterialXMask
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXMask
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXMask, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXMask::A");
static_assert(offsetof(UMaterialExpressionMaterialXMask, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXMask::B");
static_assert(offsetof(UMaterialExpressionMaterialXMask, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXMask::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXMask, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXMask::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXMatte
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXMatte
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXMatte, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXMatte::A");
static_assert(offsetof(UMaterialExpressionMaterialXMatte, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXMatte::B");
static_assert(offsetof(UMaterialExpressionMaterialXMatte, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXMatte::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXMatte, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXMatte::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXMinus
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXMinus
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXMinus, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXMinus::A");
static_assert(offsetof(UMaterialExpressionMaterialXMinus, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXMinus::B");
static_assert(offsetof(UMaterialExpressionMaterialXMinus, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXMinus::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXMinus, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXMinus::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXMod
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXMod
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    float ConstB; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXMod, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXMod::A");
static_assert(offsetof(UMaterialExpressionMaterialXMod, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXMod::B");
static_assert(offsetof(UMaterialExpressionMaterialXMod, ConstB) == 256, "Offset mismatch for UMaterialExpressionMaterialXMod::ConstB");

// /Script/InterchangeImport.MaterialExpressionMaterialXOut
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXOut
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXOut, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXOut::A");
static_assert(offsetof(UMaterialExpressionMaterialXOut, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXOut::B");
static_assert(offsetof(UMaterialExpressionMaterialXOut, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXOut::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXOut, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXOut::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXOver
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXOver
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXOver, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXOver::A");
static_assert(offsetof(UMaterialExpressionMaterialXOver, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXOver::B");
static_assert(offsetof(UMaterialExpressionMaterialXOver, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXOver::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXOver, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXOver::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXOverlay
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXOverlay
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXOverlay, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXOverlay::A");
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXOverlay::B");
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXOverlay::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXOverlay, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXOverlay::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXPlace2D
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXPlace2D
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Pivot[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Scale[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t Offset[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationAngle[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    float ConstRotationAngle; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConstCoordinate; // 0x017C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Pivot) == 216, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::Pivot");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Scale) == 256, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::Scale");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, Offset) == 296, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::Offset");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, RotationAngle) == 336, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::RotationAngle");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, ConstRotationAngle) == 376, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::ConstRotationAngle");
static_assert(offsetof(UMaterialExpressionMaterialXPlace2D, ConstCoordinate) == 380, "Offset mismatch for UMaterialExpressionMaterialXPlace2D::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXPlus
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXPlus
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXPlus, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXPlus::A");
static_assert(offsetof(UMaterialExpressionMaterialXPlus, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXPlus::B");
static_assert(offsetof(UMaterialExpressionMaterialXPlus, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXPlus::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXPlus, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXPlus::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXPremult
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXPremult
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXPremult, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXPremult::Input");

// /Script/InterchangeImport.MaterialExpressionMaterialXRamp4
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRamp4
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t A[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t C[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t D[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConstCoordinate; // 0x0178 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRamp4, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXRamp4::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, A) == 216, "Offset mismatch for UMaterialExpressionMaterialXRamp4::A");
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, B) == 256, "Offset mismatch for UMaterialExpressionMaterialXRamp4::B");
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, C) == 296, "Offset mismatch for UMaterialExpressionMaterialXRamp4::C");
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, D) == 336, "Offset mismatch for UMaterialExpressionMaterialXRamp4::D");
static_assert(offsetof(UMaterialExpressionMaterialXRamp4, ConstCoordinate) == 376, "Offset mismatch for UMaterialExpressionMaterialXRamp4::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXRampLeftRight
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRampLeftRight
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t A[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConstCoordinate; // 0x0128 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXRampLeftRight::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, A) == 216, "Offset mismatch for UMaterialExpressionMaterialXRampLeftRight::A");
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, B) == 256, "Offset mismatch for UMaterialExpressionMaterialXRampLeftRight::B");
static_assert(offsetof(UMaterialExpressionMaterialXRampLeftRight, ConstCoordinate) == 296, "Offset mismatch for UMaterialExpressionMaterialXRampLeftRight::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXRampTopBottom
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRampTopBottom
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t A[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConstCoordinate; // 0x0128 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXRampTopBottom::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, A) == 216, "Offset mismatch for UMaterialExpressionMaterialXRampTopBottom::A");
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, B) == 256, "Offset mismatch for UMaterialExpressionMaterialXRampTopBottom::B");
static_assert(offsetof(UMaterialExpressionMaterialXRampTopBottom, ConstCoordinate) == 296, "Offset mismatch for UMaterialExpressionMaterialXRampTopBottom::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXRange
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRange
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputLow[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputHigh[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetLow[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetHigh[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t Gamma[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t clamp[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    float ConstInputLow; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float ConstInputHigh; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float ConstTargetLow; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float ConstTargetHigh; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float ConstGamma; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bConstClamp; // 0x01DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRange, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXRange::Input");
static_assert(offsetof(UMaterialExpressionMaterialXRange, InputLow) == 216, "Offset mismatch for UMaterialExpressionMaterialXRange::InputLow");
static_assert(offsetof(UMaterialExpressionMaterialXRange, InputHigh) == 256, "Offset mismatch for UMaterialExpressionMaterialXRange::InputHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRange, TargetLow) == 296, "Offset mismatch for UMaterialExpressionMaterialXRange::TargetLow");
static_assert(offsetof(UMaterialExpressionMaterialXRange, TargetHigh) == 336, "Offset mismatch for UMaterialExpressionMaterialXRange::TargetHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRange, Gamma) == 376, "Offset mismatch for UMaterialExpressionMaterialXRange::Gamma");
static_assert(offsetof(UMaterialExpressionMaterialXRange, clamp) == 416, "Offset mismatch for UMaterialExpressionMaterialXRange::clamp");
static_assert(offsetof(UMaterialExpressionMaterialXRange, ConstInputLow) == 456, "Offset mismatch for UMaterialExpressionMaterialXRange::ConstInputLow");
static_assert(offsetof(UMaterialExpressionMaterialXRange, ConstInputHigh) == 460, "Offset mismatch for UMaterialExpressionMaterialXRange::ConstInputHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRange, ConstTargetLow) == 464, "Offset mismatch for UMaterialExpressionMaterialXRange::ConstTargetLow");
static_assert(offsetof(UMaterialExpressionMaterialXRange, ConstTargetHigh) == 468, "Offset mismatch for UMaterialExpressionMaterialXRange::ConstTargetHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRange, ConstGamma) == 472, "Offset mismatch for UMaterialExpressionMaterialXRange::ConstGamma");
static_assert(offsetof(UMaterialExpressionMaterialXRange, bConstClamp) == 476, "Offset mismatch for UMaterialExpressionMaterialXRange::bConstClamp");

// /Script/InterchangeImport.MaterialExpressionMaterialXRemap
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRemap
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputLow[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputHigh[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetLow[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetHigh[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    float InputLowDefault; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float InputHighDefault; // 0x017C (Size: 0x4, Type: FloatProperty)
    float TargetLowDefault; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float TargetHighDefault; // 0x0184 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRemap, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXRemap::Input");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputLow) == 216, "Offset mismatch for UMaterialExpressionMaterialXRemap::InputLow");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputHigh) == 256, "Offset mismatch for UMaterialExpressionMaterialXRemap::InputHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetLow) == 296, "Offset mismatch for UMaterialExpressionMaterialXRemap::TargetLow");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetHigh) == 336, "Offset mismatch for UMaterialExpressionMaterialXRemap::TargetHigh");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputLowDefault) == 376, "Offset mismatch for UMaterialExpressionMaterialXRemap::InputLowDefault");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, InputHighDefault) == 380, "Offset mismatch for UMaterialExpressionMaterialXRemap::InputHighDefault");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetLowDefault) == 384, "Offset mismatch for UMaterialExpressionMaterialXRemap::TargetLowDefault");
static_assert(offsetof(UMaterialExpressionMaterialXRemap, TargetHighDefault) == 388, "Offset mismatch for UMaterialExpressionMaterialXRemap::TargetHighDefault");

// /Script/InterchangeImport.MaterialExpressionMaterialXRotate2D
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXRotate2D
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationAngle[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    float ConstRotationAngle; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXRotate2D, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXRotate2D::Input");
static_assert(offsetof(UMaterialExpressionMaterialXRotate2D, RotationAngle) == 216, "Offset mismatch for UMaterialExpressionMaterialXRotate2D::RotationAngle");
static_assert(offsetof(UMaterialExpressionMaterialXRotate2D, ConstRotationAngle) == 256, "Offset mismatch for UMaterialExpressionMaterialXRotate2D::ConstRotationAngle");

// /Script/InterchangeImport.MaterialExpressionMaterialXScreen
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXScreen
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t A[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    float ConstAlpha; // 0x0128 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXScreen, A) == 176, "Offset mismatch for UMaterialExpressionMaterialXScreen::A");
static_assert(offsetof(UMaterialExpressionMaterialXScreen, B) == 216, "Offset mismatch for UMaterialExpressionMaterialXScreen::B");
static_assert(offsetof(UMaterialExpressionMaterialXScreen, Alpha) == 256, "Offset mismatch for UMaterialExpressionMaterialXScreen::Alpha");
static_assert(offsetof(UMaterialExpressionMaterialXScreen, ConstAlpha) == 296, "Offset mismatch for UMaterialExpressionMaterialXScreen::ConstAlpha");

// /Script/InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXSplitLeftRight
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t A[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t Center[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    float ConstCenter; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConstCoordinate; // 0x0154 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, A) == 216, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::A");
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, B) == 256, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::B");
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, Center) == 296, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::Center");
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, ConstCenter) == 336, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::ConstCenter");
static_assert(offsetof(UMaterialExpressionMaterialXSplitLeftRight, ConstCoordinate) == 340, "Offset mismatch for UMaterialExpressionMaterialXSplitLeftRight::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXSplitTopBottom
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Coordinates[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t A[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t B[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t Center[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    float ConstCenter; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConstCoordinate; // 0x0154 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, Coordinates) == 176, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::Coordinates");
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, A) == 216, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::A");
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, B) == 256, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::B");
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, Center) == 296, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::Center");
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, ConstCenter) == 336, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::ConstCenter");
static_assert(offsetof(UMaterialExpressionMaterialXSplitTopBottom, ConstCoordinate) == 340, "Offset mismatch for UMaterialExpressionMaterialXSplitTopBottom::ConstCoordinate");

// /Script/InterchangeImport.MaterialExpressionMaterialXSwizzle
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXSwizzle
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    FString Channels; // 0x00D8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXSwizzle, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXSwizzle::Input");
static_assert(offsetof(UMaterialExpressionMaterialXSwizzle, Channels) == 216, "Offset mismatch for UMaterialExpressionMaterialXSwizzle::Channels");

// /Script/InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
// Kind: Class; super: MaterialExpressionTextureSampleParameter2D
class UMaterialExpressionMaterialXTextureSampleParameterBlur
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::uint8_t KernelSize; // 0x0220 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0221
    float FilterSize; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float FilterOffset; // 0x0228 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Filter; // 0x022C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, KernelSize) == 544, "Offset mismatch for UMaterialExpressionMaterialXTextureSampleParameterBlur::KernelSize");
static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, FilterSize) == 548, "Offset mismatch for UMaterialExpressionMaterialXTextureSampleParameterBlur::FilterSize");
static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, FilterOffset) == 552, "Offset mismatch for UMaterialExpressionMaterialXTextureSampleParameterBlur::FilterOffset");
static_assert(offsetof(UMaterialExpressionMaterialXTextureSampleParameterBlur, Filter) == 556, "Offset mismatch for UMaterialExpressionMaterialXTextureSampleParameterBlur::Filter");

// /Script/InterchangeImport.MaterialExpressionMaterialXUnpremult
// Kind: Class; super: MaterialExpression
class UMaterialExpressionMaterialXUnpremult
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Input[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionMaterialXUnpremult, Input) == 176, "Offset mismatch for UMaterialExpressionMaterialXUnpremult::Input");
