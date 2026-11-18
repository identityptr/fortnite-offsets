#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeEngine
{
    struct InterchangeAnalyticsHandlerBase
    {
        static constexpr std::string_view Name = "InterchangeAnalyticsHandlerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeAssetImportData
    {
        static constexpr std::string_view Name = "InterchangeAssetImportData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetImportData";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneImportAsset = 0x28;
            static constexpr std::uintptr_t NodeUniqueID = 0x40;
            static constexpr std::uintptr_t NodeContainer = 0x50;
            static constexpr std::uintptr_t Pipelines = 0x58;
            static constexpr std::uintptr_t TransientNodeContainer = 0x68;
            static constexpr std::uintptr_t TransientPipelines = 0x70;
            static constexpr std::uintptr_t TransientTranslatorSettings = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SceneImportAsset", 0x28, "StructProperty"},
            {"NodeUniqueID", 0x40, "StrProperty"},
            {"NodeContainer", 0x50, "ObjectProperty"},
            {"Pipelines", 0x58, "ArrayProperty"},
            {"TransientNodeContainer", 0x68, "ObjectProperty"},
            {"TransientPipelines", 0x70, "ArrayProperty"},
            {"TransientTranslatorSettings", 0x80, "ObjectProperty"},
        }};
    };

    struct InterchangeAssetImportDataConverterBase
    {
        static constexpr std::string_view Name = "InterchangeAssetImportDataConverterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeBlueprintPipelineBase
    {
        static constexpr std::string_view Name = "InterchangeBlueprintPipelineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Blueprint";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentClass = 0x58;
            static constexpr std::uintptr_t BlueprintType = 0x60;
            static constexpr std::uintptr_t bHasBeenRegenerated = 0x61;
            static constexpr std::uintptr_t bIsRegeneratingOnLoad = 0x61;
            static constexpr std::uintptr_t bRecompileOnLoad = 0x61;
            static constexpr std::uintptr_t BlueprintSystemVersion = 0x64;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x68;
            static constexpr std::uintptr_t ComponentTemplates = 0x70;
            static constexpr std::uintptr_t Timelines = 0x80;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x90;
            static constexpr std::uintptr_t InheritableComponentHandler = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ParentClass", 0x58, "ClassProperty"},
            {"BlueprintType", 0x60, "ByteProperty"},
            {"bHasBeenRegenerated", 0x61, "BoolProperty"},
            {"bIsRegeneratingOnLoad", 0x61, "BoolProperty"},
            {"bRecompileOnLoad", 0x61, "BoolProperty"},
            {"BlueprintSystemVersion", 0x64, "IntProperty"},
            {"SimpleConstructionScript", 0x68, "ObjectProperty"},
            {"ComponentTemplates", 0x70, "ArrayProperty"},
            {"Timelines", 0x80, "ArrayProperty"},
            {"ComponentClassOverrides", 0x90, "ArrayProperty"},
            {"InheritableComponentHandler", 0xA0, "ObjectProperty"},
        }};
    };

    struct InterchangeEditorSettings
    {
        static constexpr std::string_view Name = "InterchangeEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowImportDialogAtReimport = 0x30;
            static constexpr std::uintptr_t UsedGroupName = 0x34;
            static constexpr std::uintptr_t UsedPresetGroupName = 0x38;
            static constexpr std::uintptr_t UsedGroupUID = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShowImportDialogAtReimport", 0x30, "BoolProperty"},
            {"UsedGroupName", 0x34, "NameProperty"},
            {"UsedPresetGroupName", 0x38, "NameProperty"},
            {"UsedGroupUID", 0x3C, "StructProperty"},
        }};
    };

    struct InterchangeEditorUtilitiesBase
    {
        static constexpr std::string_view Name = "InterchangeEditorUtilitiesBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeFilePickerBase
    {
        static constexpr std::string_view Name = "InterchangeFilePickerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangeImportPresetAsset
    {
        static constexpr std::string_view Name = "InterchangeImportPresetAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t ImportType = 0x2C;
            static constexpr std::uintptr_t TranslatorAssetType = 0x2D;
            static constexpr std::uintptr_t TranslatorClassPath = 0x30;
            static constexpr std::uintptr_t TranslatorSettingsClassPath = 0x48;
            static constexpr std::uintptr_t ImportPipelineClassPaths = 0x60;
            static constexpr std::uintptr_t TranslatorClass = 0x70;
            static constexpr std::uintptr_t TranslatorSettings = 0x78;
            static constexpr std::uintptr_t ImportPipelines = 0x80;
            static constexpr std::uintptr_t BuildSettings = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DisplayName", 0x28, "NameProperty"},
            {"ImportType", 0x2C, "EnumProperty"},
            {"TranslatorAssetType", 0x2D, "EnumProperty"},
            {"TranslatorClassPath", 0x30, "StructProperty"},
            {"TranslatorSettingsClassPath", 0x48, "StructProperty"},
            {"ImportPipelineClassPaths", 0x60, "ArrayProperty"},
            {"TranslatorClass", 0x70, "ClassProperty"},
            {"TranslatorSettings", 0x78, "ObjectProperty"},
            {"ImportPipelines", 0x80, "ArrayProperty"},
            {"BuildSettings", 0x90, "MapProperty"},
        }};
    };

    struct InterchangeManager
    {
        static constexpr std::string_view Name = "InterchangeManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredTranslatorsClass = 0x1E8;
            static constexpr std::uintptr_t RegisteredFactoryClasses = 0x1F8;
            static constexpr std::uintptr_t RegisteredWriters = 0x208;
            static constexpr std::uintptr_t RegisteredConverters = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RegisteredTranslatorsClass", 0x1E8, "SetProperty"},
            {"RegisteredFactoryClasses", 0x1F8, "MapProperty"},
            {"RegisteredWriters", 0x208, "MapProperty"},
            {"RegisteredConverters", 0x218, "MapProperty"},
        }};
    };

    struct InterchangeMeshUtilities
    {
        static constexpr std::string_view Name = "InterchangeMeshUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangePipelineConfigurationBase
    {
        static constexpr std::string_view Name = "InterchangePipelineConfigurationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangePipelineStackOverride
    {
        static constexpr std::string_view Name = "InterchangePipelineStackOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePipelines = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverridePipelines", 0x28, "ArrayProperty"},
        }};
    };

    struct InterchangePresetProjectSettings
    {
        static constexpr std::string_view Name = "InterchangePresetProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetImportDialogClass = 0x30;
            static constexpr std::uintptr_t SceneImportDialogClass = 0x50;
            static constexpr std::uintptr_t FilePickerClass = 0x70;
            static constexpr std::uintptr_t GenericPipelineClass = 0x90;
            static constexpr std::uintptr_t ConverterDefaultPipeline = 0xB0;
            static constexpr std::uintptr_t DefaultProfile = 0xC8;
            static constexpr std::uintptr_t Profiles = 0xE8;
            static constexpr std::uintptr_t ActiveProfileIndex = 0xF8;
            static constexpr std::uintptr_t bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AssetImportDialogClass", 0x30, "SoftClassProperty"},
            {"SceneImportDialogClass", 0x50, "SoftClassProperty"},
            {"FilePickerClass", 0x70, "SoftClassProperty"},
            {"GenericPipelineClass", 0x90, "SoftClassProperty"},
            {"ConverterDefaultPipeline", 0xB0, "StructProperty"},
            {"DefaultProfile", 0xC8, "StructProperty"},
            {"Profiles", 0xE8, "ArrayProperty"},
            {"ActiveProfileIndex", 0xF8, "IntProperty"},
            {"bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing", 0xFC, "BoolProperty"},
        }};
    };

    struct InterchangePresetProjectSettingsExtension
    {
        static constexpr std::string_view Name = "InterchangePresetProjectSettingsExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PresetAssets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PresetAssets", 0x30, "ArrayProperty"},
        }};
    };

    struct InterchangeProjectSettings
    {
        static constexpr std::string_view Name = "InterchangeProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentImportSettings = 0x30;
            static constexpr std::uintptr_t SceneImportSettings = 0x90;
            static constexpr std::uintptr_t FilePickerClass = 0xE0;
            static constexpr std::uintptr_t bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = 0x100;
            static constexpr std::uintptr_t GenericPipelineClass = 0x108;
            static constexpr std::uintptr_t ConverterDefaultPipeline = 0x128;
            static constexpr std::uintptr_t InterchangeGroups = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ContentImportSettings", 0x30, "StructProperty"},
            {"SceneImportSettings", 0x90, "StructProperty"},
            {"FilePickerClass", 0xE0, "SoftClassProperty"},
            {"bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing", 0x100, "BoolProperty"},
            {"GenericPipelineClass", 0x108, "SoftClassProperty"},
            {"ConverterDefaultPipeline", 0x128, "StructProperty"},
            {"InterchangeGroups", 0x140, "ArrayProperty"},
        }};
    };

    struct InterchangeProjectSettingsScript
    {
        static constexpr std::string_view Name = "InterchangeProjectSettingsScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InterchangePythonPipelineAsset
    {
        static constexpr std::string_view Name = "InterchangePythonPipelineAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PythonClass = 0x28;
            static constexpr std::uintptr_t GeneratedPipeline = 0x48;
            static constexpr std::uintptr_t JsonDefaultProperties = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PythonClass", 0x28, "SoftClassProperty"},
            {"GeneratedPipeline", 0x48, "ObjectProperty"},
            {"JsonDefaultProperties", 0x50, "StrProperty"},
        }};
    };

    struct InterchangePythonPipelineBase
    {
        static constexpr std::string_view Name = "InterchangePythonPipelineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangePipelineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DestinationName = 0x28;
            static constexpr std::uintptr_t ContentImportPath = 0x38;
            static constexpr std::uintptr_t bAllowPropertyStatesEdition = 0x48;
            static constexpr std::uintptr_t bIsReimportContext = 0x49;
            static constexpr std::uintptr_t bIsShowEssentials = 0x4A;
            static constexpr std::uintptr_t bFromReimportOrOverride = 0x4B;
            static constexpr std::uintptr_t Results = 0x50;
            static constexpr std::uintptr_t PropertiesStates = 0x58;
            static constexpr std::uintptr_t CachePropertiesStates = 0x68;
            static constexpr std::uintptr_t CacheContextParam = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DestinationName", 0x28, "StrProperty"},
            {"ContentImportPath", 0x38, "StrProperty"},
            {"bAllowPropertyStatesEdition", 0x48, "BoolProperty"},
            {"bIsReimportContext", 0x49, "BoolProperty"},
            {"bIsShowEssentials", 0x4A, "BoolProperty"},
            {"bFromReimportOrOverride", 0x4B, "BoolProperty"},
            {"Results", 0x50, "ObjectProperty"},
            {"PropertiesStates", 0x58, "MapProperty"},
            {"CachePropertiesStates", 0x68, "MapProperty"},
            {"CacheContextParam", 0x78, "StructProperty"},
        }};
    };

    struct InterchangeSceneImportAsset
    {
        static constexpr std::string_view Name = "InterchangeSceneImportAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
