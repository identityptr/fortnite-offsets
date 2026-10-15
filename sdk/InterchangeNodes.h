/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeNodes
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeNodes.InterchangeAnimationPayLoadKey
// Kind: ScriptStruct; super: none
struct FInterchangeAnimationPayLoadKey
{
public:
    FString UniqueID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FInterchangeAnimationPayLoadKey, UniqueID) == 0, "Offset mismatch for FInterchangeAnimationPayLoadKey::UniqueID");
static_assert(offsetof(FInterchangeAnimationPayLoadKey, Type) == 16, "Offset mismatch for FInterchangeAnimationPayLoadKey::Type");

// /Script/InterchangeNodes.InterchangeGroomPayloadKey
// Kind: ScriptStruct; super: none
struct FInterchangeGroomPayloadKey
{
public:
    FString UniqueID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t FrameNumber; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInterchangeGroomPayloadKey, UniqueID) == 0, "Offset mismatch for FInterchangeGroomPayloadKey::UniqueID");
static_assert(offsetof(FInterchangeGroomPayloadKey, Type) == 16, "Offset mismatch for FInterchangeGroomPayloadKey::Type");
static_assert(offsetof(FInterchangeGroomPayloadKey, FrameNumber) == 20, "Offset mismatch for FInterchangeGroomPayloadKey::FrameNumber");

// /Script/InterchangeNodes.InterchangeMeshPayLoadKey
// Kind: ScriptStruct; super: none
struct FInterchangeMeshPayLoadKey
{
public:
    FString UniqueID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t FrameNumber; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInterchangeMeshPayLoadKey, UniqueID) == 0, "Offset mismatch for FInterchangeMeshPayLoadKey::UniqueID");
static_assert(offsetof(FInterchangeMeshPayLoadKey, Type) == 16, "Offset mismatch for FInterchangeMeshPayLoadKey::Type");
static_assert(offsetof(FInterchangeMeshPayLoadKey, FrameNumber) == 20, "Offset mismatch for FInterchangeMeshPayLoadKey::FrameNumber");

// /Script/InterchangeNodes.InterchangeAnimationTrackBaseNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeAnimationTrackBaseNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeAnimationTrackNode
// Kind: Class; super: InterchangeAnimationTrackBaseNode
class UInterchangeAnimationTrackNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
// Kind: Class; super: InterchangeAnimationTrackBaseNode
class UInterchangeAnimationTrackSetInstanceNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeAnimationTrackSetNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeAnimationTrackSetNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeAudioSoundWaveNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeAudioSoundWaveNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeBaseCameraNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeBaseCameraNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeBaseLightNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeBaseLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeBoneNode
// Kind: Class; super: InterchangeTransformNode
class UInterchangeBoneNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeDecalMaterialNode
// Kind: Class; super: InterchangeShaderNode
class UInterchangeDecalMaterialNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeDecalNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeDecalNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeDirectionalLightNode
// Kind: Class; super: InterchangeBaseLightNode
class UInterchangeDirectionalLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeFunctionCallShaderNode
// Kind: Class; super: InterchangeShaderNode
class UInterchangeFunctionCallShaderNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeGeometryCacheNode
// Kind: Class; super: InterchangeMeshNode
class UInterchangeGeometryCacheNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeGroomBindingNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeGroomBindingNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeGroomComponentNode
// Kind: Class; super: InterchangeSceneComponentNode
class UInterchangeGroomComponentNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeGroomNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeGroomNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeInstancedStaticMeshComponentNode
// Kind: Class; super: InterchangeSceneComponentNode
class UInterchangeInstancedStaticMeshComponentNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeJointNode
// Kind: Class; super: InterchangeSceneNode
class UInterchangeJointNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeLightNode
// Kind: Class; super: InterchangeBaseLightNode
class UInterchangeLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMaterialInstanceNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeMaterialInstanceNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMaterialReferenceNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeMaterialReferenceNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMeshBaseNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeMeshBaseNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMeshBundleNode
// Kind: Class; super: InterchangeMeshLODContainerNode
class UInterchangeMeshBundleNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMeshLODContainerNode
// Kind: Class; super: InterchangeMeshBaseNode
class UInterchangeMeshLODContainerNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeMeshNode
// Kind: Class; super: InterchangeMeshBaseNode
class UInterchangeMeshNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangePhysicalCameraNode
// Kind: Class; super: InterchangeBaseCameraNode
class UInterchangePhysicalCameraNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangePointLightNode
// Kind: Class; super: InterchangeLightNode
class UInterchangePointLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeRectLightNode
// Kind: Class; super: InterchangeLightNode
class UInterchangeRectLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSceneComponentNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeSceneComponentNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSceneNode
// Kind: Class; super: InterchangeTransformNode
class UInterchangeSceneNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSceneVariantSetsNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeSceneVariantSetsNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeShaderGraphNode
// Kind: Class; super: InterchangeShaderNode
class UInterchangeShaderGraphNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeShaderNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeShaderNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeShaderPortsAPI
// Kind: Class; super: Object
class UInterchangeShaderPortsAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSkeletalAnimationTrackNode
// Kind: Class; super: InterchangeAnimationTrackBaseNode
class UInterchangeSkeletalAnimationTrackNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSkyLightNode
// Kind: Class; super: InterchangeBaseLightNode
class UInterchangeSkyLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSpecularProfileNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeSpecularProfileNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeSpotLightNode
// Kind: Class; super: InterchangePointLightNode
class UInterchangeSpotLightNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeStandardCameraNode
// Kind: Class; super: InterchangeBaseCameraNode
class UInterchangeStandardCameraNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTexture2DArrayNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeTexture2DArrayNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTexture2DNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeTexture2DNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTextureBlurNode
// Kind: Class; super: InterchangeTexture2DNode
class UInterchangeTextureBlurNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTextureCubeArrayNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeTextureCubeArrayNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTextureCubeNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeTextureCubeNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTextureLightProfileNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeTextureLightProfileNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTextureNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeTextureNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTransformAnimationTrackNode
// Kind: Class; super: InterchangeAnimationTrackNode
class UInterchangeTransformAnimationTrackNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeTransformNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeTransformNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeVariantSetNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeVariantSetNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeVolumeGridNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeVolumeGridNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeVolumeNode
// Kind: Class; super: InterchangeBaseNode
class UInterchangeVolumeNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InterchangeNodes.InterchangeVolumeTextureNode
// Kind: Class; super: InterchangeTextureNode
class UInterchangeVolumeTextureNode
{
public:
    std::uint8_t Opaque[1];
};
