/**
 * decamp dumper generated SDK
 * Package: /Script/LandscapePatch
 */
#pragma once
#include "Basic.h"

// /Script/LandscapePatch.LandscapeHeightPatchConvertToNativeParams
// Kind: ScriptStruct; super: none
struct FLandscapeHeightPatchConvertToNativeParams
{
public:
    float ZeroInEncoding; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float HeightScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float HeightOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, ZeroInEncoding) == 0, "Offset mismatch for FLandscapeHeightPatchConvertToNativeParams::ZeroInEncoding");
static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, HeightScale) == 4, "Offset mismatch for FLandscapeHeightPatchConvertToNativeParams::HeightScale");
static_assert(offsetof(FLandscapeHeightPatchConvertToNativeParams, HeightOffset) == 8, "Offset mismatch for FLandscapeHeightPatchConvertToNativeParams::HeightOffset");

// /Script/LandscapePatch.LandscapePatchComponentInstanceData
// Kind: ScriptStruct; super: SceneComponentInstanceData
struct FLandscapePatchComponentInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> AttachedInstanceComponents; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FLandscapePatchComponentInstanceData, AttachedInstanceComponents) == 104, "Offset mismatch for FLandscapePatchComponentInstanceData::AttachedInstanceComponents");

// /Script/LandscapePatch.LandscapeTexturePatchAlphaSettings
// Kind: ScriptStruct; super: none
struct FLandscapeTexturePatchAlphaSettings
{
public:
    std::uint8_t DetailPanelAlphaSourceMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* AlphaTextureAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AlphaTextureChannel; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    void* InternalAlphaData; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AlphaTextureUVTransform[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    std::uint8_t AlphaSourceMode; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, DetailPanelAlphaSourceMode) == 0, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::DetailPanelAlphaSourceMode");
static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, AlphaTextureAsset) == 8, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::AlphaTextureAsset");
static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, AlphaTextureChannel) == 16, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::AlphaTextureChannel");
static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, InternalAlphaData) == 24, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::InternalAlphaData");
static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, AlphaTextureUVTransform) == 32, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::AlphaTextureUVTransform");
static_assert(offsetof(FLandscapeTexturePatchAlphaSettings, AlphaSourceMode) == 80, "Offset mismatch for FLandscapeTexturePatchAlphaSettings::AlphaSourceMode");

// /Script/LandscapePatch.LandscapeTexturePatchEncodingSettings
// Kind: ScriptStruct; super: none
struct FLandscapeTexturePatchEncodingSettings
{
public:
    double ZeroInEncoding; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double WorldSpaceEncodingScale; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLandscapeTexturePatchEncodingSettings, ZeroInEncoding) == 0, "Offset mismatch for FLandscapeTexturePatchEncodingSettings::ZeroInEncoding");
static_assert(offsetof(FLandscapeTexturePatchEncodingSettings, WorldSpaceEncodingScale) == 8, "Offset mismatch for FLandscapeTexturePatchEncodingSettings::WorldSpaceEncodingScale");

// /Script/LandscapePatch.LandscapeTexturePatchTextureTransform
// Kind: ScriptStruct; super: none
struct FLandscapeTexturePatchTextureTransform
{
public:
    std::uint8_t bUseWorldSpaceScale; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseWorldPositionSampling; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t Scale[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    float Rotation; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Offset[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLandscapeTexturePatchTextureTransform, bUseWorldSpaceScale) == 0, "Offset mismatch for FLandscapeTexturePatchTextureTransform::bUseWorldSpaceScale");
static_assert(offsetof(FLandscapeTexturePatchTextureTransform, bUseWorldPositionSampling) == 1, "Offset mismatch for FLandscapeTexturePatchTextureTransform::bUseWorldPositionSampling");
static_assert(offsetof(FLandscapeTexturePatchTextureTransform, Scale) == 8, "Offset mismatch for FLandscapeTexturePatchTextureTransform::Scale");
static_assert(offsetof(FLandscapeTexturePatchTextureTransform, Rotation) == 24, "Offset mismatch for FLandscapeTexturePatchTextureTransform::Rotation");
static_assert(offsetof(FLandscapeTexturePatchTextureTransform, Offset) == 32, "Offset mismatch for FLandscapeTexturePatchTextureTransform::Offset");

// /Script/LandscapePatch.LandscapeCircleHeightPatch
// Kind: Class; super: LandscapePatchComponent
class ULandscapeCircleHeightPatch
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    float Radius; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEditVisibility; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExclusiveRadius; // 0x02A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeCircleHeightPatch, Radius) == 672, "Offset mismatch for ULandscapeCircleHeightPatch::Radius");
static_assert(offsetof(ULandscapeCircleHeightPatch, Falloff) == 676, "Offset mismatch for ULandscapeCircleHeightPatch::Falloff");
static_assert(offsetof(ULandscapeCircleHeightPatch, bEditVisibility) == 680, "Offset mismatch for ULandscapeCircleHeightPatch::bEditVisibility");
static_assert(offsetof(ULandscapeCircleHeightPatch, bExclusiveRadius) == 681, "Offset mismatch for ULandscapeCircleHeightPatch::bExclusiveRadius");

// /Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget
// Kind: Class; super: LandscapeTextureBackedRenderTargetBase
class ULandscapeHeightTextureBackedRenderTarget
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t ConversionParams[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t RenderTargetFormat; // 0x0054 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULandscapeHeightTextureBackedRenderTarget, ConversionParams) == 72, "Offset mismatch for ULandscapeHeightTextureBackedRenderTarget::ConversionParams");
static_assert(offsetof(ULandscapeHeightTextureBackedRenderTarget, RenderTargetFormat) == 84, "Offset mismatch for ULandscapeHeightTextureBackedRenderTarget::RenderTargetFormat");

// /Script/LandscapePatch.LandscapePatchComponent
// Kind: Class; super: SceneComponent
class ULandscapePatchComponent
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    std::uint8_t EditLayerGuid[0x10]; // 0x0248 (Size: 0x10, Type: StructProperty)
    std::uint8_t PriorityInitialization; // 0x0258 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0259
    double Priority; // 0x0260 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Landscape[0x20]; // 0x0268 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AdditionalRenderDependencies[0x10]; // 0x0288 (Size: 0x10, Type: SetProperty)
    std::uint8_t bIsEnabled; // 0x0298 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapePatchComponent, EditLayerGuid) == 584, "Offset mismatch for ULandscapePatchComponent::EditLayerGuid");
static_assert(offsetof(ULandscapePatchComponent, PriorityInitialization) == 600, "Offset mismatch for ULandscapePatchComponent::PriorityInitialization");
static_assert(offsetof(ULandscapePatchComponent, Priority) == 608, "Offset mismatch for ULandscapePatchComponent::Priority");
static_assert(offsetof(ULandscapePatchComponent, Landscape) == 616, "Offset mismatch for ULandscapePatchComponent::Landscape");
static_assert(offsetof(ULandscapePatchComponent, AdditionalRenderDependencies) == 648, "Offset mismatch for ULandscapePatchComponent::AdditionalRenderDependencies");
static_assert(offsetof(ULandscapePatchComponent, bIsEnabled) == 664, "Offset mismatch for ULandscapePatchComponent::bIsEnabled");

// /Script/LandscapePatch.LandscapePatchEditLayer
// Kind: Class; super: LandscapeEditLayerProcedural
class ULandscapePatchEditLayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LandscapePatch.LandscapePatchManager
// Kind: Class; super: LandscapeBlueprintBrushBase
class ULandscapePatchManager
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    TArray<void*> PatchComponents; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULandscapePatchManager, PatchComponents) == 656, "Offset mismatch for ULandscapePatchManager::PatchComponents");

// /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
// Kind: Class; super: Object
class ULandscapeTextureBackedRenderTargetBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InternalTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RenderTarget; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SizeX; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t SizeY; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseInternalTextureOnly; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTemporarilyNonTransactional; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, InternalTexture) == 40, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::InternalTexture");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, RenderTarget) == 48, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::RenderTarget");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, SizeX) == 56, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::SizeX");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, SizeY) == 60, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::SizeY");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, bUseInternalTextureOnly) == 64, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::bUseInternalTextureOnly");
static_assert(offsetof(ULandscapeTextureBackedRenderTargetBase, bIsTemporarilyNonTransactional) == 65, "Offset mismatch for ULandscapeTextureBackedRenderTargetBase::bIsTemporarilyNonTransactional");

// /Script/LandscapePatch.LandscapeTexturePatch
// Kind: Class; super: LandscapePatchComponent
class ULandscapeTexturePatch
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::int32_t ResolutionX; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t ResolutionY; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t UnscaledPatchCoverage[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMode; // 0x02B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FalloffMode; // 0x02B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x02BA
    float Falloff; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t HeightSourceMode; // 0x02C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetailPanelHeightSourceMode; // 0x02C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HeightTextureChannel; // 0x02C2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x02C3
    void* HeightInternalData; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* HeightTextureAsset; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HeightTextureUVTransform[0x30]; // 0x02D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTextureAlphaForHeight; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0309
    std::uint8_t HeightAlphaSettings[0x58]; // 0x0310 (Size: 0x58, Type: StructProperty)
    std::uint8_t HeightEncoding; // 0x0368 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0369
    std::uint8_t HeightEncodingSettings[0x10]; // 0x0370 (Size: 0x10, Type: StructProperty)
    std::uint8_t ZeroHeightMeaning; // 0x0380 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyComponentZScale; // 0x0381 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x0382
    TArray<void*> WeightPatches; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WeightPatchesAlphaSettings[0x58]; // 0x0398 (Size: 0x58, Type: StructProperty)
    std::uint8_t WeightPatchesBlendMode; // 0x03F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x1]; // 0x03F1
    std::uint8_t bBaseResolutionOffLandscape; // 0x03F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x03F3
    float ResolutionMultiplier; // 0x03F4 (Size: 0x4, Type: FloatProperty)
    std::int32_t InitTextureSizeX; // 0x03F8 (Size: 0x4, Type: IntProperty)
    std::int32_t InitTextureSizeY; // 0x03FC (Size: 0x4, Type: IntProperty)
    std::uint8_t HeightRenderTargetFormat; // 0x0400 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULandscapeTexturePatch, ResolutionX) == 672, "Offset mismatch for ULandscapeTexturePatch::ResolutionX");
static_assert(offsetof(ULandscapeTexturePatch, ResolutionY) == 676, "Offset mismatch for ULandscapeTexturePatch::ResolutionY");
static_assert(offsetof(ULandscapeTexturePatch, UnscaledPatchCoverage) == 680, "Offset mismatch for ULandscapeTexturePatch::UnscaledPatchCoverage");
static_assert(offsetof(ULandscapeTexturePatch, BlendMode) == 696, "Offset mismatch for ULandscapeTexturePatch::BlendMode");
static_assert(offsetof(ULandscapeTexturePatch, FalloffMode) == 697, "Offset mismatch for ULandscapeTexturePatch::FalloffMode");
static_assert(offsetof(ULandscapeTexturePatch, Falloff) == 700, "Offset mismatch for ULandscapeTexturePatch::Falloff");
static_assert(offsetof(ULandscapeTexturePatch, HeightSourceMode) == 704, "Offset mismatch for ULandscapeTexturePatch::HeightSourceMode");
static_assert(offsetof(ULandscapeTexturePatch, DetailPanelHeightSourceMode) == 705, "Offset mismatch for ULandscapeTexturePatch::DetailPanelHeightSourceMode");
static_assert(offsetof(ULandscapeTexturePatch, HeightTextureChannel) == 706, "Offset mismatch for ULandscapeTexturePatch::HeightTextureChannel");
static_assert(offsetof(ULandscapeTexturePatch, HeightInternalData) == 712, "Offset mismatch for ULandscapeTexturePatch::HeightInternalData");
static_assert(offsetof(ULandscapeTexturePatch, HeightTextureAsset) == 720, "Offset mismatch for ULandscapeTexturePatch::HeightTextureAsset");
static_assert(offsetof(ULandscapeTexturePatch, HeightTextureUVTransform) == 728, "Offset mismatch for ULandscapeTexturePatch::HeightTextureUVTransform");
static_assert(offsetof(ULandscapeTexturePatch, bUseTextureAlphaForHeight) == 776, "Offset mismatch for ULandscapeTexturePatch::bUseTextureAlphaForHeight");
static_assert(offsetof(ULandscapeTexturePatch, HeightAlphaSettings) == 784, "Offset mismatch for ULandscapeTexturePatch::HeightAlphaSettings");
static_assert(offsetof(ULandscapeTexturePatch, HeightEncoding) == 872, "Offset mismatch for ULandscapeTexturePatch::HeightEncoding");
static_assert(offsetof(ULandscapeTexturePatch, HeightEncodingSettings) == 880, "Offset mismatch for ULandscapeTexturePatch::HeightEncodingSettings");
static_assert(offsetof(ULandscapeTexturePatch, ZeroHeightMeaning) == 896, "Offset mismatch for ULandscapeTexturePatch::ZeroHeightMeaning");
static_assert(offsetof(ULandscapeTexturePatch, bApplyComponentZScale) == 897, "Offset mismatch for ULandscapeTexturePatch::bApplyComponentZScale");
static_assert(offsetof(ULandscapeTexturePatch, WeightPatches) == 904, "Offset mismatch for ULandscapeTexturePatch::WeightPatches");
static_assert(offsetof(ULandscapeTexturePatch, WeightPatchesAlphaSettings) == 920, "Offset mismatch for ULandscapeTexturePatch::WeightPatchesAlphaSettings");
static_assert(offsetof(ULandscapeTexturePatch, WeightPatchesBlendMode) == 1008, "Offset mismatch for ULandscapeTexturePatch::WeightPatchesBlendMode");
static_assert(offsetof(ULandscapeTexturePatch, bBaseResolutionOffLandscape) == 1010, "Offset mismatch for ULandscapeTexturePatch::bBaseResolutionOffLandscape");
static_assert(offsetof(ULandscapeTexturePatch, ResolutionMultiplier) == 1012, "Offset mismatch for ULandscapeTexturePatch::ResolutionMultiplier");
static_assert(offsetof(ULandscapeTexturePatch, InitTextureSizeX) == 1016, "Offset mismatch for ULandscapeTexturePatch::InitTextureSizeX");
static_assert(offsetof(ULandscapeTexturePatch, InitTextureSizeY) == 1020, "Offset mismatch for ULandscapeTexturePatch::InitTextureSizeY");
static_assert(offsetof(ULandscapeTexturePatch, HeightRenderTargetFormat) == 1024, "Offset mismatch for ULandscapeTexturePatch::HeightRenderTargetFormat");

// /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
// Kind: Class; super: Object
class ULandscapeWeightPatchTextureInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WeightmapLayerName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEditVisibilityLayer; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SourceMode; // 0x002D (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetailPanelSourceMode; // 0x002E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002F
    void* TextureAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeightTextureUVTransform[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t WeightPatchTextureChannel; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0069
    void* InternalData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseAlphaChannel; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideWeightAlphaSettings; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x007A
    std::uint8_t WeightPatchAlphaSettings[0x58]; // 0x0080 (Size: 0x58, Type: StructProperty)
    std::uint8_t bOverrideBlendMode; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideBlendMode; // 0x00D9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(ULandscapeWeightPatchTextureInfo, WeightmapLayerName) == 40, "Offset mismatch for ULandscapeWeightPatchTextureInfo::WeightmapLayerName");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bEditVisibilityLayer) == 44, "Offset mismatch for ULandscapeWeightPatchTextureInfo::bEditVisibilityLayer");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, SourceMode) == 45, "Offset mismatch for ULandscapeWeightPatchTextureInfo::SourceMode");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, DetailPanelSourceMode) == 46, "Offset mismatch for ULandscapeWeightPatchTextureInfo::DetailPanelSourceMode");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, TextureAsset) == 48, "Offset mismatch for ULandscapeWeightPatchTextureInfo::TextureAsset");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, WeightTextureUVTransform) == 56, "Offset mismatch for ULandscapeWeightPatchTextureInfo::WeightTextureUVTransform");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, WeightPatchTextureChannel) == 104, "Offset mismatch for ULandscapeWeightPatchTextureInfo::WeightPatchTextureChannel");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, InternalData) == 112, "Offset mismatch for ULandscapeWeightPatchTextureInfo::InternalData");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bUseAlphaChannel) == 120, "Offset mismatch for ULandscapeWeightPatchTextureInfo::bUseAlphaChannel");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bOverrideWeightAlphaSettings) == 121, "Offset mismatch for ULandscapeWeightPatchTextureInfo::bOverrideWeightAlphaSettings");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, WeightPatchAlphaSettings) == 128, "Offset mismatch for ULandscapeWeightPatchTextureInfo::WeightPatchAlphaSettings");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, bOverrideBlendMode) == 216, "Offset mismatch for ULandscapeWeightPatchTextureInfo::bOverrideBlendMode");
static_assert(offsetof(ULandscapeWeightPatchTextureInfo, OverrideBlendMode) == 217, "Offset mismatch for ULandscapeWeightPatchTextureInfo::OverrideBlendMode");

// /Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget
// Kind: Class; super: LandscapeTextureBackedRenderTargetBase
class ULandscapeWeightTextureBackedRenderTarget
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bUseAlphaChannel; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULandscapeWeightTextureBackedRenderTarget, bUseAlphaChannel) == 72, "Offset mismatch for ULandscapeWeightTextureBackedRenderTarget::bUseAlphaChannel");
