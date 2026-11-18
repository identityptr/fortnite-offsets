#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GLTFExporter
{
    struct GLTFAnimSequenceExporter
    {
        static constexpr std::string_view Name = "GLTFAnimSequenceExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFExportOptions
    {
        static constexpr std::string_view Name = "GLTFExportOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExportUniformScale = 0x28;
            static constexpr std::uintptr_t bExportPreviewMesh = 0x2C;
            static constexpr std::uintptr_t bSkipNearDefaultValues = 0x2D;
            static constexpr std::uintptr_t bIncludeCopyrightNotice = 0x2E;
            static constexpr std::uintptr_t bExportProxyMaterials = 0x2F;
            static constexpr std::uintptr_t bUseImporterMaterialMapping = 0x30;
            static constexpr std::uintptr_t bExportUnlitMaterials = 0x31;
            static constexpr std::uintptr_t bExportClearCoatMaterials = 0x32;
            static constexpr std::uintptr_t bExportClothMaterials = 0x33;
            static constexpr std::uintptr_t bExportThinTranslucentMaterials = 0x34;
            static constexpr std::uintptr_t bExportSpecularGlossinessMaterials = 0x35;
            static constexpr std::uintptr_t bExportEmissiveStrength = 0x36;
            static constexpr std::uintptr_t BakeMaterialInputs = 0x37;
            static constexpr std::uintptr_t DefaultMaterialBakeSize = 0x38;
            static constexpr std::uintptr_t DefaultMaterialBakeFilter = 0x44;
            static constexpr std::uintptr_t DefaultMaterialBakeTiling = 0x45;
            static constexpr std::uintptr_t DefaultInputBakeSettings = 0x48;
            static constexpr std::uintptr_t DefaultLevelOfDetail = 0x58;
            static constexpr std::uintptr_t bExportSourceModel = 0x5C;
            static constexpr std::uintptr_t bExportVertexColors = 0x5D;
            static constexpr std::uintptr_t bExportVertexSkinWeights = 0x5E;
            static constexpr std::uintptr_t bMakeSkinnedMeshesRoot = 0x5F;
            static constexpr std::uintptr_t bUseMeshQuantization = 0x60;
            static constexpr std::uintptr_t bExportMorphTargets = 0x61;
            static constexpr std::uintptr_t bExportLevelSequences = 0x62;
            static constexpr std::uintptr_t bExportAnimationSequences = 0x63;
            static constexpr std::uintptr_t TextureImageFormat = 0x64;
            static constexpr std::uintptr_t TextureImageQuality = 0x68;
            static constexpr std::uintptr_t bExportTextureTransforms = 0x6C;
            static constexpr std::uintptr_t bExportLightmaps = 0x6D;
            static constexpr std::uintptr_t bAdjustNormalmaps = 0x6E;
            static constexpr std::uintptr_t bExportHiddenInGame = 0x6F;
            static constexpr std::uintptr_t bExportLights = 0x70;
            static constexpr std::uintptr_t bExportCameras = 0x71;
            static constexpr std::uintptr_t ExportMaterialVariants = 0x72;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"ExportUniformScale", 0x28, "FloatProperty"},
            {"bExportPreviewMesh", 0x2C, "BoolProperty"},
            {"bSkipNearDefaultValues", 0x2D, "BoolProperty"},
            {"bIncludeCopyrightNotice", 0x2E, "BoolProperty"},
            {"bExportProxyMaterials", 0x2F, "BoolProperty"},
            {"bUseImporterMaterialMapping", 0x30, "BoolProperty"},
            {"bExportUnlitMaterials", 0x31, "BoolProperty"},
            {"bExportClearCoatMaterials", 0x32, "BoolProperty"},
            {"bExportClothMaterials", 0x33, "BoolProperty"},
            {"bExportThinTranslucentMaterials", 0x34, "BoolProperty"},
            {"bExportSpecularGlossinessMaterials", 0x35, "BoolProperty"},
            {"bExportEmissiveStrength", 0x36, "BoolProperty"},
            {"BakeMaterialInputs", 0x37, "EnumProperty"},
            {"DefaultMaterialBakeSize", 0x38, "StructProperty"},
            {"DefaultMaterialBakeFilter", 0x44, "ByteProperty"},
            {"DefaultMaterialBakeTiling", 0x45, "ByteProperty"},
            {"DefaultInputBakeSettings", 0x48, "MapProperty"},
            {"DefaultLevelOfDetail", 0x58, "IntProperty"},
            {"bExportSourceModel", 0x5C, "BoolProperty"},
            {"bExportVertexColors", 0x5D, "BoolProperty"},
            {"bExportVertexSkinWeights", 0x5E, "BoolProperty"},
            {"bMakeSkinnedMeshesRoot", 0x5F, "BoolProperty"},
            {"bUseMeshQuantization", 0x60, "BoolProperty"},
            {"bExportMorphTargets", 0x61, "BoolProperty"},
            {"bExportLevelSequences", 0x62, "BoolProperty"},
            {"bExportAnimationSequences", 0x63, "BoolProperty"},
            {"TextureImageFormat", 0x64, "EnumProperty"},
            {"TextureImageQuality", 0x68, "IntProperty"},
            {"bExportTextureTransforms", 0x6C, "BoolProperty"},
            {"bExportLightmaps", 0x6D, "BoolProperty"},
            {"bAdjustNormalmaps", 0x6E, "BoolProperty"},
            {"bExportHiddenInGame", 0x6F, "BoolProperty"},
            {"bExportLights", 0x70, "BoolProperty"},
            {"bExportCameras", 0x71, "BoolProperty"},
            {"ExportMaterialVariants", 0x72, "EnumProperty"},
        }};
    };

    struct GLTFExporter
    {
        static constexpr std::string_view Name = "GLTFExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Exporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFLevelExporter
    {
        static constexpr std::string_view Name = "GLTFLevelExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFLevelSequenceExporter
    {
        static constexpr std::string_view Name = "GLTFLevelSequenceExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFLevelVariantSetsExporter
    {
        static constexpr std::string_view Name = "GLTFLevelVariantSetsExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFMaterialExportOptions
    {
        static constexpr std::string_view Name = "GLTFMaterialExportOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t Proxy = 0x28;
            static constexpr std::uintptr_t Default = 0x30;
            static constexpr std::uintptr_t Inputs = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Proxy", 0x28, "ObjectProperty"},
            {"Default", 0x30, "StructProperty"},
            {"Inputs", 0x48, "MapProperty"},
        }};
    };

    struct GLTFMaterialExporter
    {
        static constexpr std::string_view Name = "GLTFMaterialExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFProxyOptions
    {
        static constexpr std::string_view Name = "GLTFProxyOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bBakeMaterialInputs = 0x28;
            static constexpr std::uintptr_t bUseThinTranslucentShadingModel = 0x29;
            static constexpr std::uintptr_t DefaultMaterialBakeSize = 0x2C;
            static constexpr std::uintptr_t DefaultMaterialBakeFilter = 0x38;
            static constexpr std::uintptr_t DefaultMaterialBakeTiling = 0x39;
            static constexpr std::uintptr_t DefaultInputBakeSettings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bBakeMaterialInputs", 0x28, "BoolProperty"},
            {"bUseThinTranslucentShadingModel", 0x29, "BoolProperty"},
            {"DefaultMaterialBakeSize", 0x2C, "StructProperty"},
            {"DefaultMaterialBakeFilter", 0x38, "ByteProperty"},
            {"DefaultMaterialBakeTiling", 0x39, "ByteProperty"},
            {"DefaultInputBakeSettings", 0x40, "MapProperty"},
        }};
    };

    struct GLTFSkeletalMeshExporter
    {
        static constexpr std::string_view Name = "GLTFSkeletalMeshExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

    struct GLTFStaticMeshExporter
    {
        static constexpr std::string_view Name = "GLTFStaticMeshExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GLTFExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedClass = 0x28;
            static constexpr std::uintptr_t ExportRootScope = 0x30;
            static constexpr std::uintptr_t FormatExtension = 0x38;
            static constexpr std::uintptr_t FormatDescription = 0x48;
            static constexpr std::uintptr_t PreferredFormatIndex = 0x58;
            static constexpr std::uintptr_t TextIndent = 0x5C;
            static constexpr std::uintptr_t bForceFileOperations = 0x60;
            static constexpr std::uintptr_t bSelectedOnly = 0x60;
            static constexpr std::uintptr_t bText = 0x60;
            static constexpr std::uintptr_t ExportTask = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SupportedClass", 0x28, "ClassProperty"},
            {"ExportRootScope", 0x30, "ObjectProperty"},
            {"FormatExtension", 0x38, "ArrayProperty"},
            {"FormatDescription", 0x48, "ArrayProperty"},
            {"PreferredFormatIndex", 0x58, "IntProperty"},
            {"TextIndent", 0x5C, "IntProperty"},
            {"bForceFileOperations", 0x60, "BoolProperty"},
            {"bSelectedOnly", 0x60, "BoolProperty"},
            {"bText", 0x60, "BoolProperty"},
            {"ExportTask", 0x68, "ObjectProperty"},
        }};
    };

}
