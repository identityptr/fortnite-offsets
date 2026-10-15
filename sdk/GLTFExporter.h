/**
 * decamp dumper generated SDK
 * Package: /Script/GLTFExporter
 */
#pragma once
#include "Basic.h"

// /Script/GLTFExporter.GLTFExportMessages
// Kind: ScriptStruct; super: none
struct FGLTFExportMessages
{
public:
    TArray<void*> Suggestions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Warnings; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Errors; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGLTFExportMessages, Suggestions) == 0, "Offset mismatch for FGLTFExportMessages::Suggestions");
static_assert(offsetof(FGLTFExportMessages, Warnings) == 16, "Offset mismatch for FGLTFExportMessages::Warnings");
static_assert(offsetof(FGLTFExportMessages, Errors) == 32, "Offset mismatch for FGLTFExportMessages::Errors");

// /Script/GLTFExporter.GLTFMaterialBakeSize
// Kind: ScriptStruct; super: none
struct FGLTFMaterialBakeSize
{
public:
    std::int32_t X; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoDetect; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGLTFMaterialBakeSize, X) == 0, "Offset mismatch for FGLTFMaterialBakeSize::X");
static_assert(offsetof(FGLTFMaterialBakeSize, Y) == 4, "Offset mismatch for FGLTFMaterialBakeSize::Y");
static_assert(offsetof(FGLTFMaterialBakeSize, bAutoDetect) == 8, "Offset mismatch for FGLTFMaterialBakeSize::bAutoDetect");

// /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
// Kind: ScriptStruct; super: none
struct FGLTFOverrideMaterialBakeSettings
{
public:
    std::uint8_t bOverrideSize; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Size[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t bOverrideFilter; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideTiling; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Tiling; // 0x0013 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideSize) == 0, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::bOverrideSize");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Size) == 4, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::Size");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideFilter) == 16, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::bOverrideFilter");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Filter) == 17, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::Filter");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, bOverrideTiling) == 18, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::bOverrideTiling");
static_assert(offsetof(FGLTFOverrideMaterialBakeSettings, Tiling) == 19, "Offset mismatch for FGLTFOverrideMaterialBakeSettings::Tiling");

// /Script/GLTFExporter.GLTFAnimSequenceExporter
// Kind: Class; super: GLTFExporter
class UGLTFAnimSequenceExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFAnimSequenceExporter, SupportedClass) == 40, "Offset mismatch for UGLTFAnimSequenceExporter::SupportedClass");
static_assert(offsetof(UGLTFAnimSequenceExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFAnimSequenceExporter::ExportRootScope");
static_assert(offsetof(UGLTFAnimSequenceExporter, FormatExtension) == 56, "Offset mismatch for UGLTFAnimSequenceExporter::FormatExtension");
static_assert(offsetof(UGLTFAnimSequenceExporter, FormatDescription) == 72, "Offset mismatch for UGLTFAnimSequenceExporter::FormatDescription");
static_assert(offsetof(UGLTFAnimSequenceExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFAnimSequenceExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFAnimSequenceExporter, TextIndent) == 92, "Offset mismatch for UGLTFAnimSequenceExporter::TextIndent");
static_assert(offsetof(UGLTFAnimSequenceExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFAnimSequenceExporter::bForceFileOperations");
static_assert(offsetof(UGLTFAnimSequenceExporter, ExportTask) == 104, "Offset mismatch for UGLTFAnimSequenceExporter::ExportTask");

// /Script/GLTFExporter.GLTFExportOptions
// Kind: Class; super: Object
class UGLTFExportOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ExportUniformScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExportPreviewMesh; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipNearDefaultValues; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeCopyrightNotice; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportProxyMaterials; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseImporterMaterialMapping; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportUnlitMaterials; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportClearCoatMaterials; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportClothMaterials; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportThinTranslucentMaterials; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportSpecularGlossinessMaterials; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportEmissiveStrength; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BakeMaterialInputs; // 0x0037 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultMaterialBakeSize[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t DefaultMaterialBakeFilter; // 0x0044 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultMaterialBakeTiling; // 0x0045 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0046
    TMap<void*, void*> DefaultInputBakeSettings; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::int32_t DefaultLevelOfDetail; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExportSourceModel; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportVertexColors; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportVertexSkinWeights; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMakeSkinnedMeshesRoot; // 0x005F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMeshQuantization; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportMorphTargets; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportLevelSequences; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportAnimationSequences; // 0x0063 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextureImageFormat; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    std::int32_t TextureImageQuality; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExportTextureTransforms; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportLightmaps; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdjustNormalmaps; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportHiddenInGame; // 0x006F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportLights; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportCameras; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExportMaterialVariants; // 0x0072 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UGLTFExportOptions, ExportUniformScale) == 40, "Offset mismatch for UGLTFExportOptions::ExportUniformScale");
static_assert(offsetof(UGLTFExportOptions, bExportPreviewMesh) == 44, "Offset mismatch for UGLTFExportOptions::bExportPreviewMesh");
static_assert(offsetof(UGLTFExportOptions, bSkipNearDefaultValues) == 45, "Offset mismatch for UGLTFExportOptions::bSkipNearDefaultValues");
static_assert(offsetof(UGLTFExportOptions, bIncludeCopyrightNotice) == 46, "Offset mismatch for UGLTFExportOptions::bIncludeCopyrightNotice");
static_assert(offsetof(UGLTFExportOptions, bExportProxyMaterials) == 47, "Offset mismatch for UGLTFExportOptions::bExportProxyMaterials");
static_assert(offsetof(UGLTFExportOptions, bUseImporterMaterialMapping) == 48, "Offset mismatch for UGLTFExportOptions::bUseImporterMaterialMapping");
static_assert(offsetof(UGLTFExportOptions, bExportUnlitMaterials) == 49, "Offset mismatch for UGLTFExportOptions::bExportUnlitMaterials");
static_assert(offsetof(UGLTFExportOptions, bExportClearCoatMaterials) == 50, "Offset mismatch for UGLTFExportOptions::bExportClearCoatMaterials");
static_assert(offsetof(UGLTFExportOptions, bExportClothMaterials) == 51, "Offset mismatch for UGLTFExportOptions::bExportClothMaterials");
static_assert(offsetof(UGLTFExportOptions, bExportThinTranslucentMaterials) == 52, "Offset mismatch for UGLTFExportOptions::bExportThinTranslucentMaterials");
static_assert(offsetof(UGLTFExportOptions, bExportSpecularGlossinessMaterials) == 53, "Offset mismatch for UGLTFExportOptions::bExportSpecularGlossinessMaterials");
static_assert(offsetof(UGLTFExportOptions, bExportEmissiveStrength) == 54, "Offset mismatch for UGLTFExportOptions::bExportEmissiveStrength");
static_assert(offsetof(UGLTFExportOptions, BakeMaterialInputs) == 55, "Offset mismatch for UGLTFExportOptions::BakeMaterialInputs");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeSize) == 56, "Offset mismatch for UGLTFExportOptions::DefaultMaterialBakeSize");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeFilter) == 68, "Offset mismatch for UGLTFExportOptions::DefaultMaterialBakeFilter");
static_assert(offsetof(UGLTFExportOptions, DefaultMaterialBakeTiling) == 69, "Offset mismatch for UGLTFExportOptions::DefaultMaterialBakeTiling");
static_assert(offsetof(UGLTFExportOptions, DefaultInputBakeSettings) == 72, "Offset mismatch for UGLTFExportOptions::DefaultInputBakeSettings");
static_assert(offsetof(UGLTFExportOptions, DefaultLevelOfDetail) == 88, "Offset mismatch for UGLTFExportOptions::DefaultLevelOfDetail");
static_assert(offsetof(UGLTFExportOptions, bExportSourceModel) == 92, "Offset mismatch for UGLTFExportOptions::bExportSourceModel");
static_assert(offsetof(UGLTFExportOptions, bExportVertexColors) == 93, "Offset mismatch for UGLTFExportOptions::bExportVertexColors");
static_assert(offsetof(UGLTFExportOptions, bExportVertexSkinWeights) == 94, "Offset mismatch for UGLTFExportOptions::bExportVertexSkinWeights");
static_assert(offsetof(UGLTFExportOptions, bMakeSkinnedMeshesRoot) == 95, "Offset mismatch for UGLTFExportOptions::bMakeSkinnedMeshesRoot");
static_assert(offsetof(UGLTFExportOptions, bUseMeshQuantization) == 96, "Offset mismatch for UGLTFExportOptions::bUseMeshQuantization");
static_assert(offsetof(UGLTFExportOptions, bExportMorphTargets) == 97, "Offset mismatch for UGLTFExportOptions::bExportMorphTargets");
static_assert(offsetof(UGLTFExportOptions, bExportLevelSequences) == 98, "Offset mismatch for UGLTFExportOptions::bExportLevelSequences");
static_assert(offsetof(UGLTFExportOptions, bExportAnimationSequences) == 99, "Offset mismatch for UGLTFExportOptions::bExportAnimationSequences");
static_assert(offsetof(UGLTFExportOptions, TextureImageFormat) == 100, "Offset mismatch for UGLTFExportOptions::TextureImageFormat");
static_assert(offsetof(UGLTFExportOptions, TextureImageQuality) == 104, "Offset mismatch for UGLTFExportOptions::TextureImageQuality");
static_assert(offsetof(UGLTFExportOptions, bExportTextureTransforms) == 108, "Offset mismatch for UGLTFExportOptions::bExportTextureTransforms");
static_assert(offsetof(UGLTFExportOptions, bExportLightmaps) == 109, "Offset mismatch for UGLTFExportOptions::bExportLightmaps");
static_assert(offsetof(UGLTFExportOptions, bAdjustNormalmaps) == 110, "Offset mismatch for UGLTFExportOptions::bAdjustNormalmaps");
static_assert(offsetof(UGLTFExportOptions, bExportHiddenInGame) == 111, "Offset mismatch for UGLTFExportOptions::bExportHiddenInGame");
static_assert(offsetof(UGLTFExportOptions, bExportLights) == 112, "Offset mismatch for UGLTFExportOptions::bExportLights");
static_assert(offsetof(UGLTFExportOptions, bExportCameras) == 113, "Offset mismatch for UGLTFExportOptions::bExportCameras");
static_assert(offsetof(UGLTFExportOptions, ExportMaterialVariants) == 114, "Offset mismatch for UGLTFExportOptions::ExportMaterialVariants");

// /Script/GLTFExporter.GLTFExporter
// Kind: Class; super: Exporter
class UGLTFExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFExporter, SupportedClass) == 40, "Offset mismatch for UGLTFExporter::SupportedClass");
static_assert(offsetof(UGLTFExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFExporter::ExportRootScope");
static_assert(offsetof(UGLTFExporter, FormatExtension) == 56, "Offset mismatch for UGLTFExporter::FormatExtension");
static_assert(offsetof(UGLTFExporter, FormatDescription) == 72, "Offset mismatch for UGLTFExporter::FormatDescription");
static_assert(offsetof(UGLTFExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFExporter, TextIndent) == 92, "Offset mismatch for UGLTFExporter::TextIndent");
static_assert(offsetof(UGLTFExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFExporter::bForceFileOperations");
static_assert(offsetof(UGLTFExporter, ExportTask) == 104, "Offset mismatch for UGLTFExporter::ExportTask");

// /Script/GLTFExporter.GLTFLevelExporter
// Kind: Class; super: GLTFExporter
class UGLTFLevelExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFLevelExporter, SupportedClass) == 40, "Offset mismatch for UGLTFLevelExporter::SupportedClass");
static_assert(offsetof(UGLTFLevelExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFLevelExporter::ExportRootScope");
static_assert(offsetof(UGLTFLevelExporter, FormatExtension) == 56, "Offset mismatch for UGLTFLevelExporter::FormatExtension");
static_assert(offsetof(UGLTFLevelExporter, FormatDescription) == 72, "Offset mismatch for UGLTFLevelExporter::FormatDescription");
static_assert(offsetof(UGLTFLevelExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFLevelExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFLevelExporter, TextIndent) == 92, "Offset mismatch for UGLTFLevelExporter::TextIndent");
static_assert(offsetof(UGLTFLevelExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFLevelExporter::bForceFileOperations");
static_assert(offsetof(UGLTFLevelExporter, ExportTask) == 104, "Offset mismatch for UGLTFLevelExporter::ExportTask");

// /Script/GLTFExporter.GLTFLevelSequenceExporter
// Kind: Class; super: GLTFExporter
class UGLTFLevelSequenceExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFLevelSequenceExporter, SupportedClass) == 40, "Offset mismatch for UGLTFLevelSequenceExporter::SupportedClass");
static_assert(offsetof(UGLTFLevelSequenceExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFLevelSequenceExporter::ExportRootScope");
static_assert(offsetof(UGLTFLevelSequenceExporter, FormatExtension) == 56, "Offset mismatch for UGLTFLevelSequenceExporter::FormatExtension");
static_assert(offsetof(UGLTFLevelSequenceExporter, FormatDescription) == 72, "Offset mismatch for UGLTFLevelSequenceExporter::FormatDescription");
static_assert(offsetof(UGLTFLevelSequenceExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFLevelSequenceExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFLevelSequenceExporter, TextIndent) == 92, "Offset mismatch for UGLTFLevelSequenceExporter::TextIndent");
static_assert(offsetof(UGLTFLevelSequenceExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFLevelSequenceExporter::bForceFileOperations");
static_assert(offsetof(UGLTFLevelSequenceExporter, ExportTask) == 104, "Offset mismatch for UGLTFLevelSequenceExporter::ExportTask");

// /Script/GLTFExporter.GLTFLevelVariantSetsExporter
// Kind: Class; super: GLTFExporter
class UGLTFLevelVariantSetsExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFLevelVariantSetsExporter, SupportedClass) == 40, "Offset mismatch for UGLTFLevelVariantSetsExporter::SupportedClass");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFLevelVariantSetsExporter::ExportRootScope");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, FormatExtension) == 56, "Offset mismatch for UGLTFLevelVariantSetsExporter::FormatExtension");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, FormatDescription) == 72, "Offset mismatch for UGLTFLevelVariantSetsExporter::FormatDescription");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFLevelVariantSetsExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, TextIndent) == 92, "Offset mismatch for UGLTFLevelVariantSetsExporter::TextIndent");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFLevelVariantSetsExporter::bForceFileOperations");
static_assert(offsetof(UGLTFLevelVariantSetsExporter, ExportTask) == 104, "Offset mismatch for UGLTFLevelVariantSetsExporter::ExportTask");

// /Script/GLTFExporter.GLTFMaterialExportOptions
// Kind: Class; super: AssetUserData
class UGLTFMaterialExportOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Proxy; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Default[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> Inputs; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGLTFMaterialExportOptions, Proxy) == 40, "Offset mismatch for UGLTFMaterialExportOptions::Proxy");
static_assert(offsetof(UGLTFMaterialExportOptions, Default) == 48, "Offset mismatch for UGLTFMaterialExportOptions::Default");
static_assert(offsetof(UGLTFMaterialExportOptions, Inputs) == 72, "Offset mismatch for UGLTFMaterialExportOptions::Inputs");

// /Script/GLTFExporter.GLTFMaterialExporter
// Kind: Class; super: GLTFExporter
class UGLTFMaterialExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFMaterialExporter, SupportedClass) == 40, "Offset mismatch for UGLTFMaterialExporter::SupportedClass");
static_assert(offsetof(UGLTFMaterialExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFMaterialExporter::ExportRootScope");
static_assert(offsetof(UGLTFMaterialExporter, FormatExtension) == 56, "Offset mismatch for UGLTFMaterialExporter::FormatExtension");
static_assert(offsetof(UGLTFMaterialExporter, FormatDescription) == 72, "Offset mismatch for UGLTFMaterialExporter::FormatDescription");
static_assert(offsetof(UGLTFMaterialExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFMaterialExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFMaterialExporter, TextIndent) == 92, "Offset mismatch for UGLTFMaterialExporter::TextIndent");
static_assert(offsetof(UGLTFMaterialExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFMaterialExporter::bForceFileOperations");
static_assert(offsetof(UGLTFMaterialExporter, ExportTask) == 104, "Offset mismatch for UGLTFMaterialExporter::ExportTask");

// /Script/GLTFExporter.GLTFProxyOptions
// Kind: Class; super: Object
class UGLTFProxyOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bBakeMaterialInputs; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseThinTranslucentShadingModel; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t DefaultMaterialBakeSize[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    std::uint8_t DefaultMaterialBakeFilter; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultMaterialBakeTiling; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x6]; // 0x003A
    TMap<void*, void*> DefaultInputBakeSettings; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGLTFProxyOptions, bBakeMaterialInputs) == 40, "Offset mismatch for UGLTFProxyOptions::bBakeMaterialInputs");
static_assert(offsetof(UGLTFProxyOptions, bUseThinTranslucentShadingModel) == 41, "Offset mismatch for UGLTFProxyOptions::bUseThinTranslucentShadingModel");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeSize) == 44, "Offset mismatch for UGLTFProxyOptions::DefaultMaterialBakeSize");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeFilter) == 56, "Offset mismatch for UGLTFProxyOptions::DefaultMaterialBakeFilter");
static_assert(offsetof(UGLTFProxyOptions, DefaultMaterialBakeTiling) == 57, "Offset mismatch for UGLTFProxyOptions::DefaultMaterialBakeTiling");
static_assert(offsetof(UGLTFProxyOptions, DefaultInputBakeSettings) == 64, "Offset mismatch for UGLTFProxyOptions::DefaultInputBakeSettings");

// /Script/GLTFExporter.GLTFSkeletalMeshExporter
// Kind: Class; super: GLTFExporter
class UGLTFSkeletalMeshExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFSkeletalMeshExporter, SupportedClass) == 40, "Offset mismatch for UGLTFSkeletalMeshExporter::SupportedClass");
static_assert(offsetof(UGLTFSkeletalMeshExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFSkeletalMeshExporter::ExportRootScope");
static_assert(offsetof(UGLTFSkeletalMeshExporter, FormatExtension) == 56, "Offset mismatch for UGLTFSkeletalMeshExporter::FormatExtension");
static_assert(offsetof(UGLTFSkeletalMeshExporter, FormatDescription) == 72, "Offset mismatch for UGLTFSkeletalMeshExporter::FormatDescription");
static_assert(offsetof(UGLTFSkeletalMeshExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFSkeletalMeshExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFSkeletalMeshExporter, TextIndent) == 92, "Offset mismatch for UGLTFSkeletalMeshExporter::TextIndent");
static_assert(offsetof(UGLTFSkeletalMeshExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFSkeletalMeshExporter::bForceFileOperations");
static_assert(offsetof(UGLTFSkeletalMeshExporter, ExportTask) == 104, "Offset mismatch for UGLTFSkeletalMeshExporter::ExportTask");

// /Script/GLTFExporter.GLTFStaticMeshExporter
// Kind: Class; super: GLTFExporter
class UGLTFStaticMeshExporter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SupportedClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ExportRootScope; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FormatExtension; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FormatDescription; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreferredFormatIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TextIndent; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceFileOperations; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bSelectedOnly (shared storage)
    // 0x0060 BoolProperty bText (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ExportTask; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGLTFStaticMeshExporter, SupportedClass) == 40, "Offset mismatch for UGLTFStaticMeshExporter::SupportedClass");
static_assert(offsetof(UGLTFStaticMeshExporter, ExportRootScope) == 48, "Offset mismatch for UGLTFStaticMeshExporter::ExportRootScope");
static_assert(offsetof(UGLTFStaticMeshExporter, FormatExtension) == 56, "Offset mismatch for UGLTFStaticMeshExporter::FormatExtension");
static_assert(offsetof(UGLTFStaticMeshExporter, FormatDescription) == 72, "Offset mismatch for UGLTFStaticMeshExporter::FormatDescription");
static_assert(offsetof(UGLTFStaticMeshExporter, PreferredFormatIndex) == 88, "Offset mismatch for UGLTFStaticMeshExporter::PreferredFormatIndex");
static_assert(offsetof(UGLTFStaticMeshExporter, TextIndent) == 92, "Offset mismatch for UGLTFStaticMeshExporter::TextIndent");
static_assert(offsetof(UGLTFStaticMeshExporter, bForceFileOperations) == 96, "Offset mismatch for UGLTFStaticMeshExporter::bForceFileOperations");
static_assert(offsetof(UGLTFStaticMeshExporter, ExportTask) == 104, "Offset mismatch for UGLTFStaticMeshExporter::ExportTask");
