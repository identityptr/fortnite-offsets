#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PCG
{
    struct DeterminismTestResult
    {
        static constexpr std::string_view Name = "DeterminismTestResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t TestResultTitle = 0x8;
            static constexpr std::uintptr_t TestResultName = 0x10;
            static constexpr std::uintptr_t Seed = 0x20;
            static constexpr std::uintptr_t DataTypesTested = 0x28;
            static constexpr std::uintptr_t TestResults = 0x40;
            static constexpr std::uintptr_t AdditionalDetails = 0x50;
            static constexpr std::uintptr_t bFlagRaised = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Index", 0x0, "Int64Property"},
            {"TestResultTitle", 0x8, "NameProperty"},
            {"TestResultName", 0x10, "StrProperty"},
            {"Seed", 0x20, "IntProperty"},
            {"DataTypesTested", 0x28, "StructProperty"},
            {"TestResults", 0x40, "MapProperty"},
            {"AdditionalDetails", 0x50, "ArrayProperty"},
            {"bFlagRaised", 0x60, "BoolProperty"},
        }};
    };

    struct EnumSelector
    {
        static constexpr std::string_view Name = "EnumSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Class", 0x0, "ObjectProperty"},
            {"Value", 0x8, "Int64Property"},
        }};
    };

    struct PCGActorHelpers
    {
        static constexpr std::string_view Name = "PCGActorHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGActorPropertyOverride
    {
        static constexpr std::string_view Name = "PCGActorPropertyOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x0;
            static constexpr std::uintptr_t PropertyTarget = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputSource", 0x0, "StructProperty"},
            {"PropertyTarget", 0x30, "StrProperty"},
        }};
    };

    struct PCGActorSelectorSettings
    {
        static constexpr std::string_view Name = "PCGActorSelectorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorFilter = 0x0;
            static constexpr std::uintptr_t bMustOverlapSelf = 0x1;
            static constexpr std::uintptr_t bIncludeChildren = 0x2;
            static constexpr std::uintptr_t IncludeIsolatedActors = 0x3;
            static constexpr std::uintptr_t bDisableFilter = 0x4;
            static constexpr std::uintptr_t ActorSelection = 0x5;
            static constexpr std::uintptr_t ActorSelectionTag = 0x8;
            static constexpr std::uintptr_t ActorSelectionClass = 0x10;
            static constexpr std::uintptr_t ActorReferenceSelector = 0x18;
            static constexpr std::uintptr_t bSelectMultiple = 0x48;
            static constexpr std::uintptr_t bIgnoreSelfAndChildren = 0x49;
            static constexpr std::uintptr_t bShowActorFilter = 0x4A;
            static constexpr std::uintptr_t bShowIncludeChildren = 0x4B;
            static constexpr std::uintptr_t bShowActorSelection = 0x4C;
            static constexpr std::uintptr_t bShowActorSelectionClass = 0x4D;
            static constexpr std::uintptr_t bShowSelectMultiple = 0x4E;
            static constexpr std::uintptr_t bShowIgnoreSelfAndChildren = 0x4F;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ActorFilter", 0x0, "EnumProperty"},
            {"bMustOverlapSelf", 0x1, "BoolProperty"},
            {"bIncludeChildren", 0x2, "BoolProperty"},
            {"IncludeIsolatedActors", 0x3, "EnumProperty"},
            {"bDisableFilter", 0x4, "BoolProperty"},
            {"ActorSelection", 0x5, "EnumProperty"},
            {"ActorSelectionTag", 0x8, "NameProperty"},
            {"ActorSelectionClass", 0x10, "ClassProperty"},
            {"ActorReferenceSelector", 0x18, "StructProperty"},
            {"bSelectMultiple", 0x48, "BoolProperty"},
            {"bIgnoreSelfAndChildren", 0x49, "BoolProperty"},
            {"bShowActorFilter", 0x4A, "BoolProperty"},
            {"bShowIncludeChildren", 0x4B, "BoolProperty"},
            {"bShowActorSelection", 0x4C, "BoolProperty"},
            {"bShowActorSelectionClass", 0x4D, "BoolProperty"},
            {"bShowSelectMultiple", 0x4E, "BoolProperty"},
            {"bShowIgnoreSelfAndChildren", 0x4F, "BoolProperty"},
        }};
    };

    struct PCGAddAttributeSettings
    {
        static constexpr std::string_view Name = "PCGAddAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputTarget = 0xD8;
            static constexpr std::uintptr_t AttributeTypes = 0x110;
            static constexpr std::uintptr_t bCopyAllAttributes = 0x270;
            static constexpr std::uintptr_t bCopyAllDomains = 0x271;
            static constexpr std::uintptr_t MetadataDomainsMapping = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputTarget", 0xD8, "StructProperty"},
            {"AttributeTypes", 0x110, "StructProperty"},
            {"bCopyAllAttributes", 0x270, "BoolProperty"},
            {"bCopyAllDomains", 0x271, "BoolProperty"},
            {"MetadataDomainsMapping", 0x278, "MapProperty"},
        }};
    };

    struct PCGAddComplexConstantSettings
    {
        static constexpr std::string_view Name = "PCGAddComplexConstantSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCreateComplexConstantSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0xA8;
            static constexpr std::uintptr_t TargetMetadataDomain = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Properties", 0xA8, "StructProperty"},
            {"TargetMetadataDomain", 0xB8, "NameProperty"},
        }};
    };

    struct PCGAddComponentSettings
    {
        static constexpr std::string_view Name = "PCGAddComponentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseClassAttribute = 0xA8;
            static constexpr std::uintptr_t ClassAttribute = 0xB0;
            static constexpr std::uintptr_t TemplateComponentClass = 0xE0;
            static constexpr std::uintptr_t bAllowTemplateComponentEditing = 0xE8;
            static constexpr std::uintptr_t TemplateComponent = 0xF0;
            static constexpr std::uintptr_t ActorReferenceAttribute = 0xF8;
            static constexpr std::uintptr_t ComponentReferenceAttribute = 0x128;
            static constexpr std::uintptr_t PropertyOverrideDescriptions = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bUseClassAttribute", 0xA8, "BoolProperty"},
            {"ClassAttribute", 0xB0, "StructProperty"},
            {"TemplateComponentClass", 0xE0, "ClassProperty"},
            {"bAllowTemplateComponentEditing", 0xE8, "BoolProperty"},
            {"TemplateComponent", 0xF0, "ObjectProperty"},
            {"ActorReferenceAttribute", 0xF8, "StructProperty"},
            {"ComponentReferenceAttribute", 0x128, "StructProperty"},
            {"PropertyOverrideDescriptions", 0x158, "ArrayProperty"},
        }};
    };

    struct PCGAddTagSettings
    {
        static constexpr std::string_view Name = "PCGAddTagSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsToAdd = 0xA8;
            static constexpr std::uintptr_t Prefix = 0xB8;
            static constexpr std::uintptr_t Suffix = 0xC8;
            static constexpr std::uintptr_t bIgnoreTagValueParsing = 0xD8;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TagsToAdd", 0xA8, "StrProperty"},
            {"Prefix", 0xB8, "StrProperty"},
            {"Suffix", 0xC8, "StrProperty"},
            {"bIgnoreTagValueParsing", 0xD8, "BoolProperty"},
            {"bTokenizeOnWhiteSpace", 0xD9, "BoolProperty"},
        }};
    };

    struct PCGAlignPointsAxisSettings
    {
        static constexpr std::string_view Name = "PCGAlignPointsAxisSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyToAxis = 0x0;
            static constexpr std::uintptr_t SourceReferential = 0x1;
            static constexpr std::uintptr_t TargetReferential = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bApplyToAxis", 0x0, "BoolProperty"},
            {"SourceReferential", 0x1, "EnumProperty"},
            {"TargetReferential", 0x2, "EnumProperty"},
        }};
    };

    struct PCGAlignPointsSettings
    {
        static constexpr std::string_view Name = "PCGAlignPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SpatialReferential = 0xA8;
            static constexpr std::uintptr_t XAxis = 0xA9;
            static constexpr std::uintptr_t YAxis = 0xAC;
            static constexpr std::uintptr_t ZAxis = 0xAF;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SpatialReferential", 0xA8, "EnumProperty"},
            {"XAxis", 0xA9, "StructProperty"},
            {"YAxis", 0xAC, "StructProperty"},
            {"ZAxis", 0xAF, "StructProperty"},
        }};
    };

    struct PCGAnimBankDataRow
    {
        static constexpr std::string_view Name = "PCGAnimBankDataRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x8;
            static constexpr std::uintptr_t Bank = 0x10;
            static constexpr std::uintptr_t SequenceIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mesh", 0x8, "ObjectProperty"},
            {"Bank", 0x10, "ObjectProperty"},
            {"SequenceIndex", 0x18, "UInt32Property"},
        }};
    };

    struct PCGApplyHierarchySettings
    {
        static constexpr std::string_view Name = "PCGApplyHierarchySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PointKeyAttributes = 0xA8;
            static constexpr std::uintptr_t ParentKeyAttributes = 0xB8;
            static constexpr std::uintptr_t HierarchyDepthAttribute = 0xC8;
            static constexpr std::uintptr_t RelativeTransformAttribute = 0xF8;
            static constexpr std::uintptr_t ApplyParentRotation = 0x128;
            static constexpr std::uintptr_t ApplyParentRotationAttribute = 0x130;
            static constexpr std::uintptr_t ApplyParentScale = 0x160;
            static constexpr std::uintptr_t ApplyParentScaleAttribute = 0x168;
            static constexpr std::uintptr_t ApplyHierarchy = 0x198;
            static constexpr std::uintptr_t ApplyHierarchyAttribute = 0x1A0;
            static constexpr std::uintptr_t bWarnOnPointsWithInvalidParent = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PointKeyAttributes", 0xA8, "ArrayProperty"},
            {"ParentKeyAttributes", 0xB8, "ArrayProperty"},
            {"HierarchyDepthAttribute", 0xC8, "StructProperty"},
            {"RelativeTransformAttribute", 0xF8, "StructProperty"},
            {"ApplyParentRotation", 0x128, "EnumProperty"},
            {"ApplyParentRotationAttribute", 0x130, "StructProperty"},
            {"ApplyParentScale", 0x160, "EnumProperty"},
            {"ApplyParentScaleAttribute", 0x168, "StructProperty"},
            {"ApplyHierarchy", 0x198, "EnumProperty"},
            {"ApplyHierarchyAttribute", 0x1A0, "StructProperty"},
            {"bWarnOnPointsWithInvalidParent", 0x1D0, "BoolProperty"},
        }};
    };

    struct PCGApplyOnActorSettings
    {
        static constexpr std::string_view Name = "PCGApplyOnActorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t TagsToAddOnActors = 0xD8;
            static constexpr std::uintptr_t PropertyOverrideDescriptions = 0xE8;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0xF8;
            static constexpr std::uintptr_t bUseOneOverrideDataPerElement = 0x108;
            static constexpr std::uintptr_t bSilenceErrorOnEmptyObjectPath = 0x109;
            static constexpr std::uintptr_t bSynchronousLoad = 0x10A;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ObjectReferenceAttribute", 0xA8, "StructProperty"},
            {"TagsToAddOnActors", 0xD8, "ArrayProperty"},
            {"PropertyOverrideDescriptions", 0xE8, "ArrayProperty"},
            {"PostProcessFunctionNames", 0xF8, "ArrayProperty"},
            {"bUseOneOverrideDataPerElement", 0x108, "BoolProperty"},
            {"bSilenceErrorOnEmptyObjectPath", 0x109, "BoolProperty"},
            {"bSynchronousLoad", 0x10A, "BoolProperty"},
        }};
    };

    struct PCGApplyScaleToBoundsSettings
    {
        static constexpr std::string_view Name = "PCGApplyScaleToBoundsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGApplySplineToComponentSettings
    {
        static constexpr std::string_view Name = "PCGApplySplineToComponentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t bSilenceWarningOnUnresolvedPath = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentReferenceAttribute", 0xA8, "StructProperty"},
            {"bSilenceWarningOnUnresolvedPath", 0xD8, "BoolProperty"},
        }};
    };

    struct PCGAssetCachedPins
    {
        static constexpr std::string_view Name = "PCGAssetCachedPins";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPins = 0x0;
            static constexpr std::uintptr_t OutputPins = 0x10;
            static constexpr std::uintptr_t bHasCachedPins = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputPins", 0x0, "ArrayProperty"},
            {"OutputPins", 0x10, "ArrayProperty"},
            {"bHasCachedPins", 0x20, "BoolProperty"},
        }};
    };

    struct PCGAssetExporter
    {
        static constexpr std::string_view Name = "PCGAssetExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_ExportToAsset",
            "BP_GetAssetType",
        }};
    };

    struct PCGAssetExporterParameters
    {
        static constexpr std::string_view Name = "PCGAssetExporterParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOpenSaveDialog = 0x0;
            static constexpr std::uintptr_t AssetName = 0x8;
            static constexpr std::uintptr_t AssetPath = 0x18;
            static constexpr std::uintptr_t bSaveOnExportEnded = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOpenSaveDialog", 0x0, "BoolProperty"},
            {"AssetName", 0x8, "StrProperty"},
            {"AssetPath", 0x18, "StrProperty"},
            {"bSaveOnExportEnded", 0x28, "BoolProperty"},
        }};
    };

    struct PCGAssetExporterUtils
    {
        static constexpr std::string_view Name = "PCGAssetExporterUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateAsset",
            "UpdateAssets",
        }};
    };

    struct PCGAttractSettings
    {
        static constexpr std::string_view Name = "PCGAttractSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t AttractorIndexAttribute = 0xB0;
            static constexpr std::uintptr_t Distance = 0xE0;
            static constexpr std::uintptr_t bRemoveUnattractedPoints = 0xE8;
            static constexpr std::uintptr_t TargetAttribute = 0xF0;
            static constexpr std::uintptr_t bUseSourceWeight = 0x120;
            static constexpr std::uintptr_t SourceWeightAttribute = 0x128;
            static constexpr std::uintptr_t bUseTargetWeight = 0x158;
            static constexpr std::uintptr_t TargetWeightAttribute = 0x160;
            static constexpr std::uintptr_t Weight = 0x190;
            static constexpr std::uintptr_t SourceAndTargetAttributeMapping = 0x198;
            static constexpr std::uintptr_t bCopyAllAttributesFromTarget = 0x1A8;
            static constexpr std::uintptr_t bOutputAttractIndex = 0x1A9;
            static constexpr std::uintptr_t OutputAttractIndexAttribute = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"AttractorIndexAttribute", 0xB0, "StructProperty"},
            {"Distance", 0xE0, "DoubleProperty"},
            {"bRemoveUnattractedPoints", 0xE8, "BoolProperty"},
            {"TargetAttribute", 0xF0, "StructProperty"},
            {"bUseSourceWeight", 0x120, "BoolProperty"},
            {"SourceWeightAttribute", 0x128, "StructProperty"},
            {"bUseTargetWeight", 0x158, "BoolProperty"},
            {"TargetWeightAttribute", 0x160, "StructProperty"},
            {"Weight", 0x190, "DoubleProperty"},
            {"SourceAndTargetAttributeMapping", 0x198, "MapProperty"},
            {"bCopyAllAttributesFromTarget", 0x1A8, "BoolProperty"},
            {"bOutputAttractIndex", 0x1A9, "BoolProperty"},
            {"OutputAttractIndexAttribute", 0x1B0, "StructProperty"},
        }};
    };

    struct PCGAttributeAnalysisKernelBase
    {
        static constexpr std::string_view Name = "PCGAttributeAnalysisKernelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0xB8;
            static constexpr std::uintptr_t MaxIntValue = 0xBC;
            static constexpr std::uintptr_t bEmitPerDataCounts = 0xC0;
            static constexpr std::uintptr_t bOutputRawBuffer = 0xC1;
            static constexpr std::uintptr_t MaxNumUniqueValuesSource = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttributeName", 0xB8, "NameProperty"},
            {"MaxIntValue", 0xBC, "IntProperty"},
            {"bEmitPerDataCounts", 0xC0, "BoolProperty"},
            {"bOutputRawBuffer", 0xC1, "BoolProperty"},
            {"MaxNumUniqueValuesSource", 0xC2, "EnumProperty"},
        }};
    };

    struct PCGAttributeCastSettings
    {
        static constexpr std::string_view Name = "PCGAttributeCastSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputType = 0xD8;
            static constexpr std::uintptr_t OutputTarget = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputType", 0xD8, "EnumProperty"},
            {"OutputTarget", 0xE0, "StructProperty"},
        }};
    };

    struct PCGAttributeExtractorTestObject
    {
        static constexpr std::string_view Name = "PCGAttributeExtractorTestObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleValue", 0x28, "DoubleProperty"},
        }};
    };

    struct PCGAttributeExtractorTestStruct
    {
        static constexpr std::string_view Name = "PCGAttributeExtractorTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DepthStruct = 0x0;
            static constexpr std::uintptr_t Object = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DepthStruct", 0x0, "StructProperty"},
            {"Object", 0x8, "ObjectProperty"},
        }};
    };

    struct PCGAttributeExtractorTestStructDepth1
    {
        static constexpr std::string_view Name = "PCGAttributeExtractorTestStructDepth1";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Depth2Struct = 0x0;
            static constexpr std::uintptr_t FloatValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Depth2Struct", 0x0, "StructProperty"},
            {"FloatValue", 0x4, "FloatProperty"},
        }};
    };

    struct PCGAttributeExtractorTestStructDepth2
    {
        static constexpr std::string_view Name = "PCGAttributeExtractorTestStructDepth2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IntValue = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntValue", 0x0, "IntProperty"},
        }};
    };

    struct PCGAttributeFilterThresholdSettings
    {
        static constexpr std::string_view Name = "PCGAttributeFilterThresholdSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bInclusive = 0x0;
            static constexpr std::uintptr_t bUseConstantThreshold = 0x1;
            static constexpr std::uintptr_t ThresholdAttribute = 0x8;
            static constexpr std::uintptr_t bUseSpatialQuery = 0x38;
            static constexpr std::uintptr_t bFilterEachInputWithEachFilterDataRespectively = 0x39;
            static constexpr std::uintptr_t AttributeTypes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bInclusive", 0x0, "BoolProperty"},
            {"bUseConstantThreshold", 0x1, "BoolProperty"},
            {"ThresholdAttribute", 0x8, "StructProperty"},
            {"bUseSpatialQuery", 0x38, "BoolProperty"},
            {"bFilterEachInputWithEachFilterDataRespectively", 0x39, "BoolProperty"},
            {"AttributeTypes", 0x40, "StructProperty"},
        }};
    };

    struct PCGAttributeFilteringRangeSettings
    {
        static constexpr std::string_view Name = "PCGAttributeFilteringRangeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetAttribute = 0xA8;
            static constexpr std::uintptr_t MinThreshold = 0xE0;
            static constexpr std::uintptr_t MaxThreshold = 0x280;
            static constexpr std::uintptr_t bWarnOnDataMissingAttribute = 0x420;
            static constexpr std::uintptr_t bGenerateOutputDataEvenIfEmpty = 0x421;
            static constexpr std::uintptr_t bHasSpatialToPointDeprecation = 0x422;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetAttribute", 0xA8, "StructProperty"},
            {"MinThreshold", 0xE0, "StructProperty"},
            {"MaxThreshold", 0x280, "StructProperty"},
            {"bWarnOnDataMissingAttribute", 0x420, "BoolProperty"},
            {"bGenerateOutputDataEvenIfEmpty", 0x421, "BoolProperty"},
            {"bHasSpatialToPointDeprecation", 0x422, "BoolProperty"},
        }};
    };

    struct PCGAttributeFilteringSettings
    {
        static constexpr std::string_view Name = "PCGAttributeFilteringSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0xA8;
            static constexpr std::uintptr_t TargetAttribute = 0xB0;
            static constexpr std::uintptr_t bUseConstantThreshold = 0xE0;
            static constexpr std::uintptr_t ThresholdAttribute = 0xE8;
            static constexpr std::uintptr_t bUseSpatialQuery = 0x118;
            static constexpr std::uintptr_t bFilterEachInputWithEachFilterDataRespectively = 0x119;
            static constexpr std::uintptr_t AttributeTypes = 0x120;
            static constexpr std::uintptr_t bWarnOnDataMissingAttribute = 0x280;
            static constexpr std::uintptr_t bGenerateOutputDataEvenIfEmpty = 0x281;
            static constexpr std::uintptr_t bHasSpatialToPointDeprecation = 0x282;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Operator", 0xA8, "EnumProperty"},
            {"TargetAttribute", 0xB0, "StructProperty"},
            {"bUseConstantThreshold", 0xE0, "BoolProperty"},
            {"ThresholdAttribute", 0xE8, "StructProperty"},
            {"bUseSpatialQuery", 0x118, "BoolProperty"},
            {"bFilterEachInputWithEachFilterDataRespectively", 0x119, "BoolProperty"},
            {"AttributeTypes", 0x120, "StructProperty"},
            {"bWarnOnDataMissingAttribute", 0x280, "BoolProperty"},
            {"bGenerateOutputDataEvenIfEmpty", 0x281, "BoolProperty"},
            {"bHasSpatialToPointDeprecation", 0x282, "BoolProperty"},
        }};
    };

    struct PCGAttributeGetFromIndexSettings
    {
        static constexpr std::string_view Name = "PCGAttributeGetFromIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0xA8, "IntProperty"},
        }};
    };

    struct PCGAttributeGetFromPointIndexSettings
    {
        static constexpr std::string_view Name = "PCGAttributeGetFromPointIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t Index = 0xD8;
            static constexpr std::uintptr_t OutputAttributeName = 0xE0;
            static constexpr std::uintptr_t bForceOutputAttributeToBeInElementsDomain = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"Index", 0xD8, "IntProperty"},
            {"OutputAttributeName", 0xE0, "StructProperty"},
            {"bForceOutputAttributeToBeInElementsDomain", 0x110, "BoolProperty"},
        }};
    };

    struct PCGAttributeIdentifier
    {
        static constexpr std::string_view Name = "PCGAttributeIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t MetadataDomain = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"MetadataDomain", 0x4, "StructProperty"},
        }};
    };

    struct PCGAttributeNoiseSettings
    {
        static constexpr std::string_view Name = "PCGAttributeNoiseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputTarget = 0xD8;
            static constexpr std::uintptr_t Mode = 0x108;
            static constexpr std::uintptr_t NoiseMin = 0x10C;
            static constexpr std::uintptr_t NoiseMax = 0x110;
            static constexpr std::uintptr_t bInvertSource = 0x114;
            static constexpr std::uintptr_t bClampResult = 0x115;
            static constexpr std::uintptr_t bHasCustomSeedSource = 0x116;
            static constexpr std::uintptr_t CustomSeedSource = 0x118;
            static constexpr std::uintptr_t bHasSpatialToPointDeprecation = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputTarget", 0xD8, "StructProperty"},
            {"Mode", 0x108, "EnumProperty"},
            {"NoiseMin", 0x10C, "FloatProperty"},
            {"NoiseMax", 0x110, "FloatProperty"},
            {"bInvertSource", 0x114, "BoolProperty"},
            {"bClampResult", 0x115, "BoolProperty"},
            {"bHasCustomSeedSource", 0x116, "BoolProperty"},
            {"CustomSeedSource", 0x118, "StructProperty"},
            {"bHasSpatialToPointDeprecation", 0x148, "BoolProperty"},
        }};
    };

    struct PCGAttributePropertyInputSelector
    {
        static constexpr std::string_view Name = "PCGAttributePropertyInputSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGAttributePropertySelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Selection = 0x8;
            static constexpr std::uintptr_t DomainName = 0xC;
            static constexpr std::uintptr_t AttributeName = 0x10;
            static constexpr std::uintptr_t PropertyName = 0x14;
            static constexpr std::uintptr_t ExtraNames = 0x18;
            static constexpr std::uintptr_t ExtraProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Selection", 0x8, "EnumProperty"},
            {"DomainName", 0xC, "NameProperty"},
            {"AttributeName", 0x10, "NameProperty"},
            {"PropertyName", 0x14, "NameProperty"},
            {"ExtraNames", 0x18, "ArrayProperty"},
            {"ExtraProperty", 0x28, "EnumProperty"},
        }};
    };

    struct PCGAttributePropertyOutputNoSourceSelector
    {
        static constexpr std::string_view Name = "PCGAttributePropertyOutputNoSourceSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGAttributePropertySelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Selection = 0x8;
            static constexpr std::uintptr_t DomainName = 0xC;
            static constexpr std::uintptr_t AttributeName = 0x10;
            static constexpr std::uintptr_t PropertyName = 0x14;
            static constexpr std::uintptr_t ExtraNames = 0x18;
            static constexpr std::uintptr_t ExtraProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Selection", 0x8, "EnumProperty"},
            {"DomainName", 0xC, "NameProperty"},
            {"AttributeName", 0x10, "NameProperty"},
            {"PropertyName", 0x14, "NameProperty"},
            {"ExtraNames", 0x18, "ArrayProperty"},
            {"ExtraProperty", 0x28, "EnumProperty"},
        }};
    };

    struct PCGAttributePropertyOutputSelector
    {
        static constexpr std::string_view Name = "PCGAttributePropertyOutputSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGAttributePropertyOutputNoSourceSelector";
        struct Offsets
        {
            static constexpr std::uintptr_t Selection = 0x8;
            static constexpr std::uintptr_t DomainName = 0xC;
            static constexpr std::uintptr_t AttributeName = 0x10;
            static constexpr std::uintptr_t PropertyName = 0x14;
            static constexpr std::uintptr_t ExtraNames = 0x18;
            static constexpr std::uintptr_t ExtraProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Selection", 0x8, "EnumProperty"},
            {"DomainName", 0xC, "NameProperty"},
            {"AttributeName", 0x10, "NameProperty"},
            {"PropertyName", 0x14, "NameProperty"},
            {"ExtraNames", 0x18, "ArrayProperty"},
            {"ExtraProperty", 0x28, "EnumProperty"},
        }};
    };

    struct PCGAttributePropertySelector
    {
        static constexpr std::string_view Name = "PCGAttributePropertySelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Selection = 0x8;
            static constexpr std::uintptr_t DomainName = 0xC;
            static constexpr std::uintptr_t AttributeName = 0x10;
            static constexpr std::uintptr_t PropertyName = 0x14;
            static constexpr std::uintptr_t ExtraNames = 0x18;
            static constexpr std::uintptr_t ExtraProperty = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Selection", 0x8, "EnumProperty"},
            {"DomainName", 0xC, "NameProperty"},
            {"AttributeName", 0x10, "NameProperty"},
            {"PropertyName", 0x14, "NameProperty"},
            {"ExtraNames", 0x18, "ArrayProperty"},
            {"ExtraProperty", 0x28, "EnumProperty"},
        }};
    };

    struct PCGAttributePropertySelectorBlueprintHelpers
    {
        static constexpr std::string_view Name = "PCGAttributePropertySelectorBlueprintHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "CopyAndFixLast",
            "CopyAndFixSource",
            "GetAttributeName",
            "GetDomainName",
            "GetExtraNames",
            "GetExtraProperty",
            "GetName",
            "GetPointProperty",
            "GetPropertyName",
            "GetSelection",
            "SetAttributeName",
            "SetDomainName",
            "SetExtraProperty",
            "SetPointProperty",
            "SetPropertyName",
        }};
    };

    struct PCGAttributeReduceSettings
    {
        static constexpr std::string_view Name = "PCGAttributeReduceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t bWriteToDataDomain = 0xD8;
            static constexpr std::uintptr_t OutputAttributeName = 0xDC;
            static constexpr std::uintptr_t Operation = 0xE0;
            static constexpr std::uintptr_t JoinDelimiter = 0xE8;
            static constexpr std::uintptr_t bMergeOutputAttributes = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"bWriteToDataDomain", 0xD8, "BoolProperty"},
            {"OutputAttributeName", 0xDC, "NameProperty"},
            {"Operation", 0xE0, "EnumProperty"},
            {"JoinDelimiter", 0xE8, "StrProperty"},
            {"bMergeOutputAttributes", 0xF8, "BoolProperty"},
        }};
    };

    struct PCGAttributeRemapSettings
    {
        static constexpr std::string_view Name = "PCGAttributeRemapSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x108;
            static constexpr std::uintptr_t InputSource = 0x110;
            static constexpr std::uintptr_t InRangeMin = 0x140;
            static constexpr std::uintptr_t InRangeMax = 0x148;
            static constexpr std::uintptr_t OutRangeMin = 0x150;
            static constexpr std::uintptr_t OutRangeMax = 0x158;
            static constexpr std::uintptr_t bClampToUnitRange = 0x160;
            static constexpr std::uintptr_t bIgnoreValuesOutsideInputRange = 0x161;
            static constexpr std::uintptr_t bAllowInverseRange = 0x162;
            static constexpr std::uintptr_t Curve = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Mode", 0x108, "EnumProperty"},
            {"InputSource", 0x110, "StructProperty"},
            {"InRangeMin", 0x140, "DoubleProperty"},
            {"InRangeMax", 0x148, "DoubleProperty"},
            {"OutRangeMin", 0x150, "DoubleProperty"},
            {"OutRangeMax", 0x158, "DoubleProperty"},
            {"bClampToUnitRange", 0x160, "BoolProperty"},
            {"bIgnoreValuesOutsideInputRange", 0x161, "BoolProperty"},
            {"bAllowInverseRange", 0x162, "BoolProperty"},
            {"Curve", 0x168, "StructProperty"},
        }};
    };

    struct PCGAttributeRemoveDuplicatesSettings
    {
        static constexpr std::string_view Name = "PCGAttributeRemoveDuplicatesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeSelectors = 0xA8;
            static constexpr std::uintptr_t AttributeNamesToRemoveDuplicates = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeSelectors", 0xA8, "ArrayProperty"},
            {"AttributeNamesToRemoveDuplicates", 0xB8, "StrProperty"},
        }};
    };

    struct PCGAttributeSelectSettings
    {
        static constexpr std::string_view Name = "PCGAttributeSelectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputAttributeName = 0xD8;
            static constexpr std::uintptr_t Operation = 0xDC;
            static constexpr std::uintptr_t Axis = 0xE0;
            static constexpr std::uintptr_t CustomAxis = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputAttributeName", 0xD8, "NameProperty"},
            {"Operation", 0xDC, "EnumProperty"},
            {"Axis", 0xE0, "EnumProperty"},
            {"CustomAxis", 0xF0, "StructProperty"},
        }};
    };

    struct PCGAttributeTransferSettings
    {
        static constexpr std::string_view Name = "PCGAttributeTransferSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCopyAttributesSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t bCopyAllAttributes = 0xAC;
            static constexpr std::uintptr_t bCopyAllDomains = 0xAD;
            static constexpr std::uintptr_t MetadataDomainsMapping = 0xB0;
            static constexpr std::uintptr_t InputSource = 0xC0;
            static constexpr std::uintptr_t OutputTarget = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"bCopyAllAttributes", 0xAC, "BoolProperty"},
            {"bCopyAllDomains", 0xAD, "BoolProperty"},
            {"MetadataDomainsMapping", 0xB0, "MapProperty"},
            {"InputSource", 0xC0, "StructProperty"},
            {"OutputTarget", 0xF0, "StructProperty"},
        }};
    };

    struct PCGBadOutputsNodeSettings
    {
        static constexpr std::string_view Name = "PCGBadOutputsNodeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGBakeMeshAttributesParams
    {
        static constexpr std::string_view Name = "PCGBakeMeshAttributesParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Resolution = 0x0;
            static constexpr std::uintptr_t Format = 0x8;
            static constexpr std::uintptr_t Attribute = 0x9;
            static constexpr std::uintptr_t Padding = 0xC;
            static constexpr std::uintptr_t UVChannelIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Resolution", 0x0, "StructProperty"},
            {"Format", 0x8, "ByteProperty"},
            {"Attribute", 0x9, "EnumProperty"},
            {"Padding", 0xC, "IntProperty"},
            {"UVChannelIndex", 0x10, "IntProperty"},
        }};
    };

    struct PCGBakeStaticMeshAttributesSettings
    {
        static constexpr std::string_view Name = "PCGBakeStaticMeshAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMesh = 0xA8;
            static constexpr std::uintptr_t BakeParams = 0xC8;
            static constexpr std::uintptr_t bSynchronousLoad = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StaticMesh", 0xA8, "SoftObjectProperty"},
            {"BakeParams", 0xC8, "StructProperty"},
            {"bSynchronousLoad", 0xDC, "BoolProperty"},
        }};
    };

    struct PCGBasePointData
    {
        static constexpr std::string_view Name = "PCGBasePointData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialData";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x48;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0x50;
            static constexpr std::uintptr_t bHasCachedLastSelector = 0x51;
            static constexpr std::uintptr_t CachedLastSelector = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetActor", 0x48, "WeakObjectProperty"},
            {"bKeepZeroDensityPoints", 0x50, "BoolProperty"},
            {"bHasCachedLastSelector", 0x51, "BoolProperty"},
            {"CachedLastSelector", 0x58, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 49> FunctionNames{{
            "BP_AllocateProperties",
            "BP_SetPointsFrom",
            "GetBoundsMax",
            "GetBoundsMaxValuesFromRange",
            "GetBoundsMin",
            "GetBoundsMinValuesFromRange",
            "GetColor",
            "GetColorValuesFromRange",
            "GetDensity",
            "GetDensityBounds",
            "GetDensityValuesFromRange",
            "GetExtents",
            "GetLocalBounds",
            "GetLocalCenter",
            "GetLocalDensityBounds",
            "GetLocalSize",
            "GetMetadataEntry",
            "GetMetadataEntryValuesFromRange",
            "GetNumPoints",
            "GetPointFromRange",
            "GetScaledExtents",
            "GetScaledLocalSize",
            "GetSeed",
            "GetSeedValuesFromRange",
            "GetSteepness",
            "GetSteepnessValuesFromRange",
            "GetTransform",
            "GetTransformValuesFromRange",
            "IsEmpty",
            "SetBoundsMax",
            "SetBoundsMaxValuesOnRange",
            "SetBoundsMin",
            "SetBoundsMinValuesOnRange",
            "SetColor",
            "SetColorValuesOnRange",
            "SetDensity",
            "SetDensityValuesOnRange",
            "SetExtents",
            "SetLocalCenter",
            "SetMetadataEntry",
            "SetMetadataEntryValuesOnRange",
            "SetNumPoints",
            "SetPointOnRange",
            "SetSeed",
            "SetSeedValuesOnRange",
            "SetSteepness",
            "SetSteepnessValuesOnRange",
            "SetTransform",
            "SetTransformValuesOnRange",
        }};
    };

    struct PCGBaseSubgraphNode
    {
        static constexpr std::string_view Name = "PCGBaseSubgraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTitle = 0x28;
            static constexpr std::uintptr_t SettingsInterface = 0x30;
            static constexpr std::uintptr_t OutboundNodes = 0x38;
            static constexpr std::uintptr_t InboundEdges = 0x48;
            static constexpr std::uintptr_t OutboundEdges = 0x58;
            static constexpr std::uintptr_t InputPins = 0x68;
            static constexpr std::uintptr_t OutputPins = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NodeTitle", 0x28, "NameProperty"},
            {"SettingsInterface", 0x30, "ObjectProperty"},
            {"OutboundNodes", 0x38, "ArrayProperty"},
            {"InboundEdges", 0x48, "ArrayProperty"},
            {"OutboundEdges", 0x58, "ArrayProperty"},
            {"InputPins", 0x68, "ArrayProperty"},
            {"OutputPins", 0x78, "ArrayProperty"},
        }};
    };

    struct PCGBaseSubgraphSettings
    {
        static constexpr std::string_view Name = "PCGBaseSubgraphSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSubgraph",
        }};
    };

    struct PCGBaseSubsystem
    {
        static constexpr std::string_view Name = "PCGBaseSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGBaseTextureData
    {
        static constexpr std::string_view Name = "PCGBaseTextureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTexture2DBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x180;
            static constexpr std::uintptr_t NumMips = 0x181;
            static constexpr std::uintptr_t Filter = 0x182;
            static constexpr std::uintptr_t Bounds = 0x190;
            static constexpr std::uintptr_t ColorData = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Format", 0x180, "ByteProperty"},
            {"NumMips", 0x181, "ByteProperty"},
            {"Filter", 0x182, "EnumProperty"},
            {"Bounds", 0x190, "StructProperty"},
            {"ColorData", 0x1C8, "ArrayProperty"},
        }};
    };

    struct PCGBlueprintBaseElement
    {
        static constexpr std::string_view Name = "PCGBlueprintBaseElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCacheable = 0x28;
            static constexpr std::uintptr_t bComputeFullDataCrc = 0x29;
            static constexpr std::uintptr_t bRequiresGameThread = 0x2A;
            static constexpr std::uintptr_t CustomInputPins = 0x30;
            static constexpr std::uintptr_t CustomOutputPins = 0x40;
            static constexpr std::uintptr_t bHasDefaultInPin = 0x50;
            static constexpr std::uintptr_t bHasDefaultOutPin = 0x51;
            static constexpr std::uintptr_t bHasDynamicPins = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsCacheable", 0x28, "BoolProperty"},
            {"bComputeFullDataCrc", 0x29, "BoolProperty"},
            {"bRequiresGameThread", 0x2A, "BoolProperty"},
            {"CustomInputPins", 0x30, "ArrayProperty"},
            {"CustomOutputPins", 0x40, "ArrayProperty"},
            {"bHasDefaultInPin", 0x50, "BoolProperty"},
            {"bHasDefaultOutPin", 0x51, "BoolProperty"},
            {"bHasDynamicPins", 0x52, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "ApplyPreconfiguredSettings",
            "CustomInputLabels",
            "CustomOutputLabels",
            "DynamicPinTypesOverride",
            "Execute",
            "GetContextHandle",
            "GetInputPinByLabel",
            "GetInputPins",
            "GetOutputPinByLabel",
            "GetOutputPins",
            "GetRandomStreamWithContext",
            "GetSeedWithContext",
            "IsCacheableOverride",
            "NodeColorOverride",
            "NodeTitleOverride",
            "NodeTypeOverride",
        }};
    };

    struct PCGBlueprintContextHandle
    {
        static constexpr std::string_view Name = "PCGBlueprintContextHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGBlueprintElement
    {
        static constexpr std::string_view Name = "PCGBlueprintElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBlueprintBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCacheable = 0x28;
            static constexpr std::uintptr_t bComputeFullDataCrc = 0x29;
            static constexpr std::uintptr_t bRequiresGameThread = 0x2A;
            static constexpr std::uintptr_t CustomInputPins = 0x30;
            static constexpr std::uintptr_t CustomOutputPins = 0x40;
            static constexpr std::uintptr_t bHasDefaultInPin = 0x50;
            static constexpr std::uintptr_t bHasDefaultOutPin = 0x51;
            static constexpr std::uintptr_t bHasDynamicPins = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsCacheable", 0x28, "BoolProperty"},
            {"bComputeFullDataCrc", 0x29, "BoolProperty"},
            {"bRequiresGameThread", 0x2A, "BoolProperty"},
            {"CustomInputPins", 0x30, "ArrayProperty"},
            {"CustomOutputPins", 0x40, "ArrayProperty"},
            {"bHasDefaultInPin", 0x50, "BoolProperty"},
            {"bHasDefaultOutPin", 0x51, "BoolProperty"},
            {"bHasDynamicPins", 0x52, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "ExecuteWithContext",
            "GetContext",
            "GetRandomStream",
            "GetSeed",
            "IterationLoop",
            "IterationLoopBody",
            "NestedLoop",
            "NestedLoopBody",
            "PointLoop",
            "PointLoopBody",
            "VariableLoop",
            "VariableLoopBody",
        }};
    };

    struct PCGBlueprintHelpers
    {
        static constexpr std::string_view Name = "PCGBlueprintHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 34> FunctionNames{{
            "ComputeSeedFromPosition",
            "CreatePCGDataFromActor",
            "DuplicateData",
            "DuplicateDataWithContext",
            "ExtractStructureAsAttributeSet",
            "FlushPCGCache",
            "GetActorBoundsPCG",
            "GetActorData",
            "GetActorDataWithContext",
            "GetActorLocalBoundsPCG",
            "GetComponent",
            "GetComponentBaseWithContext",
            "GetComponentWithContext",
            "GetExtents",
            "GetInputData",
            "GetInputDataWithContext",
            "GetInterpolatedPCGLandscapeLayerWeights",
            "GetLocalCenter",
            "GetOriginalComponent",
            "GetOriginalComponentBaseWithContext",
            "GetOriginalComponentWithContext",
            "GetRandomStreamFromPoint",
            "GetRandomStreamFromTwoPoints",
            "GetSettings",
            "GetSettingsWithContext",
            "GetTargetActor",
            "GetTargetActorWithContext",
            "GetTaskId",
            "GetTaskIdWithContext",
            "GetTransformedBounds",
            "RefreshPCGRuntimeComponent",
            "SetExtents",
            "SetLocalCenter",
            "SetSeedFromPosition",
        }};
    };

    struct PCGBlueprintPinHelpers
    {
        static constexpr std::string_view Name = "PCGBlueprintPinHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "BreakPinProperty",
            "GetCorrespondingDataType",
            "IsExactlySameType",
            "IsOfType",
            "MakePinProperty",
        }};
    };

    struct PCGBlueprintPointProcessorElement
    {
        static constexpr std::string_view Name = "PCGBlueprintPointProcessorElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBlueprintBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsCacheable = 0x28;
            static constexpr std::uintptr_t bComputeFullDataCrc = 0x29;
            static constexpr std::uintptr_t bRequiresGameThread = 0x2A;
            static constexpr std::uintptr_t CustomInputPins = 0x30;
            static constexpr std::uintptr_t CustomOutputPins = 0x40;
            static constexpr std::uintptr_t bHasDefaultInPin = 0x50;
            static constexpr std::uintptr_t bHasDefaultOutPin = 0x51;
            static constexpr std::uintptr_t bHasDynamicPins = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsCacheable", 0x28, "BoolProperty"},
            {"bComputeFullDataCrc", 0x29, "BoolProperty"},
            {"bRequiresGameThread", 0x2A, "BoolProperty"},
            {"CustomInputPins", 0x30, "ArrayProperty"},
            {"CustomOutputPins", 0x40, "ArrayProperty"},
            {"bHasDefaultInPin", 0x50, "BoolProperty"},
            {"bHasDefaultOutPin", 0x51, "BoolProperty"},
            {"bHasDynamicPins", 0x52, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "IterationLoop",
            "IterationLoopBody",
            "IterationLoopInitialize",
            "PointLoop",
            "PointLoopBody",
            "PointLoopInitialize",
        }};
    };

    struct PCGBlueprintPointProcessorSimpleElement
    {
        static constexpr std::string_view Name = "PCGBlueprintPointProcessorSimpleElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBlueprintBaseElement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInheritMetadata = 0x68;
            static constexpr std::uintptr_t bInheritSpatialData = 0x69;
            static constexpr std::uintptr_t PropertiesToAllocate = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bInheritMetadata", 0x68, "BoolProperty"},
            {"bInheritSpatialData", 0x69, "BoolProperty"},
            {"PropertiesToAllocate", 0x6C, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Initialize",
            "PointLoopBody",
            "RangePointLoopBody",
        }};
    };

    struct PCGBlueprintSettings
    {
        static constexpr std::string_view Name = "PCGBlueprintSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t BlueprintElementType = 0xA8;
            static constexpr std::uintptr_t BlueprintElementInstance = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlueprintElementType", 0xA8, "ClassProperty"},
            {"BlueprintElementInstance", 0xB0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetElementType",
            "SetBlueprintElementType",
            "SetElementType",
        }};
    };

    struct PCGBlurSettings
    {
        static constexpr std::string_view Name = "PCGBlurSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputTarget = 0xD8;
            static constexpr std::uintptr_t NumIterations = 0x108;
            static constexpr std::uintptr_t SearchDistance = 0x110;
            static constexpr std::uintptr_t BlurMode = 0x118;
            static constexpr std::uintptr_t bUseCustomStandardDeviation = 0x11C;
            static constexpr std::uintptr_t CustomStandardDeviation = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputTarget", 0xD8, "StructProperty"},
            {"NumIterations", 0x108, "IntProperty"},
            {"SearchDistance", 0x110, "DoubleProperty"},
            {"BlurMode", 0x118, "EnumProperty"},
            {"bUseCustomStandardDeviation", 0x11C, "BoolProperty"},
            {"CustomStandardDeviation", 0x120, "DoubleProperty"},
        }};
    };

    struct PCGBooleanSelectSettings
    {
        static constexpr std::string_view Name = "PCGBooleanSelectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInputB = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseInputB", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGBoundsFromMeshSettings
    {
        static constexpr std::string_view Name = "PCGBoundsFromMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshAttribute = 0xA8;
            static constexpr std::uintptr_t bSilenceAttributeNotFoundErrors = 0xD8;
            static constexpr std::uintptr_t bSynchronousLoad = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshAttribute", 0xA8, "StructProperty"},
            {"bSilenceAttributeNotFoundErrors", 0xD8, "BoolProperty"},
            {"bSynchronousLoad", 0xD9, "BoolProperty"},
        }};
    };

    struct PCGBoundsModifierSettings
    {
        static constexpr std::string_view Name = "PCGBoundsModifierSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t BoundsMin = 0xB0;
            static constexpr std::uintptr_t BoundsMax = 0xC8;
            static constexpr std::uintptr_t bAffectSteepness = 0xE0;
            static constexpr std::uintptr_t Steepness = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"BoundsMin", 0xB0, "StructProperty"},
            {"BoundsMax", 0xC8, "StructProperty"},
            {"bAffectSteepness", 0xE0, "BoolProperty"},
            {"Steepness", 0xE4, "FloatProperty"},
        }};
    };

    struct PCGBranchSettings
    {
        static constexpr std::string_view Name = "PCGBranchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOutputToB = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bOutputToB", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGBuilderVolume
    {
        static constexpr std::string_view Name = "PCGBuilderVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushType = 0x278;
            static constexpr std::uintptr_t BrushColor = 0x27C;
            static constexpr std::uintptr_t PolyFlags = 0x280;
            static constexpr std::uintptr_t bColored = 0x284;
            static constexpr std::uintptr_t bNotForClientOrServer = 0x284;
            static constexpr std::uintptr_t bPlaceableFromClassBrowser = 0x284;
            static constexpr std::uintptr_t bSolidWhenSelected = 0x284;
            static constexpr std::uintptr_t Brush = 0x288;
            static constexpr std::uintptr_t BrushComponent = 0x290;
            static constexpr std::uintptr_t bInManipulation = 0x298;
            static constexpr std::uintptr_t SavedSelections = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BrushType", 0x278, "ByteProperty"},
            {"BrushColor", 0x27C, "StructProperty"},
            {"PolyFlags", 0x280, "IntProperty"},
            {"bColored", 0x284, "BoolProperty"},
            {"bNotForClientOrServer", 0x284, "BoolProperty"},
            {"bPlaceableFromClassBrowser", 0x284, "BoolProperty"},
            {"bSolidWhenSelected", 0x284, "BoolProperty"},
            {"Brush", 0x288, "ObjectProperty"},
            {"BrushComponent", 0x290, "ObjectProperty"},
            {"bInManipulation", 0x298, "BoolProperty"},
            {"SavedSelections", 0x2A0, "ArrayProperty"},
        }};
    };

    struct PCGCleanSplineSettings
    {
        static constexpr std::string_view Name = "PCGCleanSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bFuseColocatedControlPoints = 0xA8;
            static constexpr std::uintptr_t ColocationDistanceThreshold = 0xB0;
            static constexpr std::uintptr_t bUseSplineLocalSpace = 0xB8;
            static constexpr std::uintptr_t FuseMode = 0xBC;
            static constexpr std::uintptr_t bRemoveCollinearControlPoints = 0xC0;
            static constexpr std::uintptr_t CollinearAngleThreshold = 0xC8;
            static constexpr std::uintptr_t bUseRadians = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bFuseColocatedControlPoints", 0xA8, "BoolProperty"},
            {"ColocationDistanceThreshold", 0xB0, "DoubleProperty"},
            {"bUseSplineLocalSpace", 0xB8, "BoolProperty"},
            {"FuseMode", 0xBC, "EnumProperty"},
            {"bRemoveCollinearControlPoints", 0xC0, "BoolProperty"},
            {"CollinearAngleThreshold", 0xC8, "DoubleProperty"},
            {"bUseRadians", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGClipPathsSettings
    {
        static constexpr std::string_view Name = "PCGClipPathsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t SplineMaxDiscretizationError = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"SplineMaxDiscretizationError", 0xB0, "DoubleProperty"},
        }};
    };

    struct PCGClusterSettings
    {
        static constexpr std::string_view Name = "PCGClusterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Algorithm = 0xA8;
            static constexpr std::uintptr_t NumClusters = 0xAC;
            static constexpr std::uintptr_t ClusterAttribute = 0xB0;
            static constexpr std::uintptr_t MaxIterations = 0xE0;
            static constexpr std::uintptr_t Tolerance = 0xE8;
            static constexpr std::uintptr_t bOutputFinalCentroids = 0xF0;
            static constexpr std::uintptr_t bOutputFinalCentroidElementCount = 0xF1;
            static constexpr std::uintptr_t FinalCentroidElementCountAttribute = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Algorithm", 0xA8, "EnumProperty"},
            {"NumClusters", 0xAC, "IntProperty"},
            {"ClusterAttribute", 0xB0, "StructProperty"},
            {"MaxIterations", 0xE0, "IntProperty"},
            {"Tolerance", 0xE8, "DoubleProperty"},
            {"bOutputFinalCentroids", 0xF0, "BoolProperty"},
            {"bOutputFinalCentroidElementCount", 0xF1, "BoolProperty"},
            {"FinalCentroidElementCountAttribute", 0xF8, "StructProperty"},
        }};
    };

    struct PCGCodeEditorTextProvider
    {
        static constexpr std::string_view Name = "PCGCodeEditorTextProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGCollapsePointsSettings
    {
        static constexpr std::string_view Name = "PCGCollapsePointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceThreshold = 0xA8;
            static constexpr std::uintptr_t Mode = 0xB0;
            static constexpr std::uintptr_t ComparisonMode = 0xB1;
            static constexpr std::uintptr_t VisitOrder = 0xB2;
            static constexpr std::uintptr_t VisitOrderAttribute = 0xB8;
            static constexpr std::uintptr_t bUseMergeWeightAttribute = 0xE8;
            static constexpr std::uintptr_t MergeWeightAttribute = 0xF0;
            static constexpr std::uintptr_t AttributesToMerge = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DistanceThreshold", 0xA8, "DoubleProperty"},
            {"Mode", 0xB0, "EnumProperty"},
            {"ComparisonMode", 0xB1, "EnumProperty"},
            {"VisitOrder", 0xB2, "EnumProperty"},
            {"VisitOrderAttribute", 0xB8, "StructProperty"},
            {"bUseMergeWeightAttribute", 0xE8, "BoolProperty"},
            {"MergeWeightAttribute", 0xF0, "StructProperty"},
            {"AttributesToMerge", 0x120, "ArrayProperty"},
        }};
    };

    struct PCGCollapseSettings
    {
        static constexpr std::string_view Name = "PCGCollapseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bPassThroughEmptyAttributeSets = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPassThroughEmptyAttributeSets", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGCollisionShape
    {
        static constexpr std::string_view Name = "PCGCollisionShape";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeType = 0x0;
            static constexpr std::uintptr_t BoxHalfExtent = 0x8;
            static constexpr std::uintptr_t SphereRadius = 0x20;
            static constexpr std::uintptr_t CapsuleRadius = 0x24;
            static constexpr std::uintptr_t CapsuleHalfHeight = 0x28;
            static constexpr std::uintptr_t ShapeRotation = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ShapeType", 0x0, "EnumProperty"},
            {"BoxHalfExtent", 0x8, "StructProperty"},
            {"SphereRadius", 0x20, "FloatProperty"},
            {"CapsuleRadius", 0x24, "FloatProperty"},
            {"CapsuleHalfHeight", 0x28, "FloatProperty"},
            {"ShapeRotation", 0x30, "StructProperty"},
        }};
    };

    struct PCGCollisionShapeData
    {
        static constexpr std::string_view Name = "PCGCollisionShapeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0xE0;
            static constexpr std::uintptr_t CachedBounds = 0x158;
            static constexpr std::uintptr_t CachedStrictBounds = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Transform", 0xE0, "StructProperty"},
            {"CachedBounds", 0x158, "StructProperty"},
            {"CachedStrictBounds", 0x190, "StructProperty"},
        }};
    };

    struct PCGCollisionWrapperData
    {
        static constexpr std::string_view Name = "PCGCollisionWrapperData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialData";
        struct Offsets
        {
            static constexpr std::uintptr_t PointData = 0x88;
            static constexpr std::uintptr_t CollisionSelector = 0x90;
            static constexpr std::uintptr_t CollisionQueryFlag = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointData", 0x88, "ObjectProperty"},
            {"CollisionSelector", 0x90, "StructProperty"},
            {"CollisionQueryFlag", 0xC0, "EnumProperty"},
        }};
    };

    struct PCGCombinePointsSettings
    {
        static constexpr std::string_view Name = "PCGCombinePointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bCenterPivot = 0xA8;
            static constexpr std::uintptr_t bUseFirstPointTransform = 0xA9;
            static constexpr std::uintptr_t PointTransform = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCenterPivot", 0xA8, "BoolProperty"},
            {"bUseFirstPointTransform", 0xA9, "BoolProperty"},
            {"PointTransform", 0xB0, "StructProperty"},
        }};
    };

    struct PCGComponent
    {
        static constexpr std::string_view Name = "PCGComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivated = 0x1D0;
            static constexpr std::uintptr_t bIsComponentPartitioned = 0x1D1;
            static constexpr std::uintptr_t GenerationTrigger = 0x1D2;
            static constexpr std::uintptr_t bGenerateOnDropWhenTriggerOnDemand = 0x1D3;
            static constexpr std::uintptr_t bOverrideGenerationRadii = 0x1D4;
            static constexpr std::uintptr_t GenerationRadii = 0x1D8;
            static constexpr std::uintptr_t SchedulingPolicyClass = 0x420;
            static constexpr std::uintptr_t SchedulingPolicy = 0x428;
            static constexpr std::uintptr_t ToolDataContainer = 0x430;
            static constexpr std::uintptr_t OnPCGGraphStartGeneratingExternal = 0x4A8;
            static constexpr std::uintptr_t OnPCGGraphCancelledExternal = 0x4B8;
            static constexpr std::uintptr_t OnPCGGraphGeneratedExternal = 0x4C8;
            static constexpr std::uintptr_t OnPCGGraphCleanedExternal = 0x4D8;
            static constexpr std::uintptr_t OnPCGLinkClearedExternal = 0x4E8;
            static constexpr std::uintptr_t bRuntimeGenerated = 0x4F8;
            static constexpr std::uintptr_t PostGenerateFunctionNames = 0x500;
            static constexpr std::uintptr_t InputType = 0x511;
            static constexpr std::uintptr_t bParseActorComponents = 0x512;
            static constexpr std::uintptr_t RuntimeGridDescriptorHash = 0x514;
            static constexpr std::uintptr_t CachedPCGData = 0x518;
            static constexpr std::uintptr_t CachedInputData = 0x520;
            static constexpr std::uintptr_t CachedActorData = 0x528;
            static constexpr std::uintptr_t CachedLandscapeData = 0x530;
            static constexpr std::uintptr_t CachedLandscapeHeightData = 0x538;
            static constexpr std::uintptr_t GeneratedResources = 0x540;
            static constexpr std::uintptr_t bOverrideUseActorComponentlessGeneration = 0x550;
            static constexpr std::uintptr_t bUseActorComponentlessGeneration = 0x551;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bActivated", 0x1D0, "BoolProperty"},
            {"bIsComponentPartitioned", 0x1D1, "BoolProperty"},
            {"GenerationTrigger", 0x1D2, "EnumProperty"},
            {"bGenerateOnDropWhenTriggerOnDemand", 0x1D3, "BoolProperty"},
            {"bOverrideGenerationRadii", 0x1D4, "BoolProperty"},
            {"GenerationRadii", 0x1D8, "StructProperty"},
            {"SchedulingPolicyClass", 0x420, "ClassProperty"},
            {"SchedulingPolicy", 0x428, "ObjectProperty"},
            {"ToolDataContainer", 0x430, "StructProperty"},
            {"OnPCGGraphStartGeneratingExternal", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCancelledExternal", 0x4B8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphGeneratedExternal", 0x4C8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCleanedExternal", 0x4D8, "MulticastInlineDelegateProperty"},
            {"OnPCGLinkClearedExternal", 0x4E8, "MulticastInlineDelegateProperty"},
            {"bRuntimeGenerated", 0x4F8, "BoolProperty"},
            {"PostGenerateFunctionNames", 0x500, "ArrayProperty"},
            {"InputType", 0x511, "EnumProperty"},
            {"bParseActorComponents", 0x512, "BoolProperty"},
            {"RuntimeGridDescriptorHash", 0x514, "UInt32Property"},
            {"CachedPCGData", 0x518, "ObjectProperty"},
            {"CachedInputData", 0x520, "ObjectProperty"},
            {"CachedActorData", 0x528, "ObjectProperty"},
            {"CachedLandscapeData", 0x530, "ObjectProperty"},
            {"CachedLandscapeHeightData", 0x538, "ObjectProperty"},
            {"GeneratedResources", 0x540, "ArrayProperty"},
            {"bOverrideUseActorComponentlessGeneration", 0x550, "BoolProperty"},
            {"bUseActorComponentlessGeneration", 0x551, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "AddActorsToManagedResources",
            "AddComponentsToManagedResources",
            "AddToManagedResources",
            "Cleanup",
            "CleanupLocal",
            "ClearPCGLink",
            "Generate",
            "GenerateLocal",
            "GetEditingMode",
            "GetGeneratedGraphOutput",
            "GetGraph",
            "GetSerializedEditingMode",
            "NotifyPropertiesChangedFromBlueprint",
            "SetEditingMode",
            "SetGraph",
        }};
    };

    struct PCGComponentBase
    {
        static constexpr std::string_view Name = "PCGComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0xC8;
            static constexpr std::uintptr_t bGenerated = 0xCC;
            static constexpr std::uintptr_t GraphInstance = 0xD0;
            static constexpr std::uintptr_t ManagedResourceContainer = 0xD8;
            static constexpr std::uintptr_t LastGeneratedBounds = 0x118;
            static constexpr std::uintptr_t GeneratedGraphOutput = 0x150;
            static constexpr std::uintptr_t SourceDataContainer = 0x180;
            static constexpr std::uintptr_t CurrentEditingMode = 0x198;
            static constexpr std::uintptr_t SerializedEditingMode = 0x199;
            static constexpr std::uintptr_t GenerationGridSize = 0x19C;
            static constexpr std::uintptr_t bProceduralInstancesInUse = 0x1B1;
            static constexpr std::uintptr_t bIsComponentLocal = 0x1B2;
            static constexpr std::uintptr_t PerPinGeneratedOutput = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Seed", 0xC8, "IntProperty"},
            {"bGenerated", 0xCC, "BoolProperty"},
            {"GraphInstance", 0xD0, "ObjectProperty"},
            {"ManagedResourceContainer", 0xD8, "StructProperty"},
            {"LastGeneratedBounds", 0x118, "StructProperty"},
            {"GeneratedGraphOutput", 0x150, "StructProperty"},
            {"SourceDataContainer", 0x180, "StructProperty"},
            {"CurrentEditingMode", 0x198, "EnumProperty"},
            {"SerializedEditingMode", 0x199, "EnumProperty"},
            {"GenerationGridSize", 0x19C, "UInt32Property"},
            {"bProceduralInstancesInUse", 0x1B1, "BoolProperty"},
            {"bIsComponentLocal", 0x1B2, "BoolProperty"},
            {"PerPinGeneratedOutput", 0x1B8, "MapProperty"},
        }};
    };

    struct PCGComponentBaseInstanceData
    {
        static constexpr std::string_view Name = "PCGComponentBaseInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ActorComponentInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SourceComponent", 0x68, "ObjectProperty"},
        }};
    };

    struct PCGComponentBaseTestLeaf
    {
        static constexpr std::string_view Name = "PCGComponentBaseTestLeaf";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionSubsystem = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutionSubsystem", 0x210, "ObjectProperty"},
        }};
    };

    struct PCGComponentBaseTestSubsystem
    {
        static constexpr std::string_view Name = "PCGComponentBaseTestSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGComponentBaseTestTrackingSettings
    {
        static constexpr std::string_view Name = "PCGComponentBaseTestTrackingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTrivialSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGComponentInstanceData
    {
        static constexpr std::string_view Name = "PCGComponentInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGComponentBaseInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SourceComponent", 0x68, "ObjectProperty"},
        }};
    };

    struct PCGComponentLite
    {
        static constexpr std::string_view Name = "PCGComponentLite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0xC8;
            static constexpr std::uintptr_t bGenerated = 0xCC;
            static constexpr std::uintptr_t GraphInstance = 0xD0;
            static constexpr std::uintptr_t ManagedResourceContainer = 0xD8;
            static constexpr std::uintptr_t LastGeneratedBounds = 0x118;
            static constexpr std::uintptr_t GeneratedGraphOutput = 0x150;
            static constexpr std::uintptr_t SourceDataContainer = 0x180;
            static constexpr std::uintptr_t CurrentEditingMode = 0x198;
            static constexpr std::uintptr_t SerializedEditingMode = 0x199;
            static constexpr std::uintptr_t GenerationGridSize = 0x19C;
            static constexpr std::uintptr_t bProceduralInstancesInUse = 0x1B1;
            static constexpr std::uintptr_t bIsComponentLocal = 0x1B2;
            static constexpr std::uintptr_t PerPinGeneratedOutput = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Seed", 0xC8, "IntProperty"},
            {"bGenerated", 0xCC, "BoolProperty"},
            {"GraphInstance", 0xD0, "ObjectProperty"},
            {"ManagedResourceContainer", 0xD8, "StructProperty"},
            {"LastGeneratedBounds", 0x118, "StructProperty"},
            {"GeneratedGraphOutput", 0x150, "StructProperty"},
            {"SourceDataContainer", 0x180, "StructProperty"},
            {"CurrentEditingMode", 0x198, "EnumProperty"},
            {"SerializedEditingMode", 0x199, "EnumProperty"},
            {"GenerationGridSize", 0x19C, "UInt32Property"},
            {"bProceduralInstancesInUse", 0x1B1, "BoolProperty"},
            {"bIsComponentLocal", 0x1B2, "BoolProperty"},
            {"PerPinGeneratedOutput", 0x1B8, "MapProperty"},
        }};
    };

    struct PCGComponentSelectorSettings
    {
        static constexpr std::string_view Name = "PCGComponentSelectorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentSelection = 0x0;
            static constexpr std::uintptr_t ComponentSelectionTag = 0x4;
            static constexpr std::uintptr_t ComponentSelectionClass = 0x8;
            static constexpr std::uintptr_t bShowComponentSelection = 0x10;
            static constexpr std::uintptr_t bShowComponentSelectionClass = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ComponentSelection", 0x0, "EnumProperty"},
            {"ComponentSelectionTag", 0x4, "NameProperty"},
            {"ComponentSelectionClass", 0x8, "ClassProperty"},
            {"bShowComponentSelection", 0x10, "BoolProperty"},
            {"bShowComponentSelectionClass", 0x11, "BoolProperty"},
        }};
    };

    struct PCGComputeDataInterface
    {
        static constexpr std::string_view Name = "PCGComputeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGComputeDataProvider
    {
        static constexpr std::string_view Name = "PCGComputeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGComputeGraph
    {
        static constexpr std::string_view Name = "PCGComputeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelToNode = 0xD0;
            static constexpr std::uintptr_t MeshSpawners = 0xE0;
            static constexpr std::uintptr_t bLogDataDescriptions = 0xF0;
            static constexpr std::uintptr_t KernelBindingToPinLabel = 0xF8;
            static constexpr std::uintptr_t DownstreamToUpstreamBinding = 0x108;
            static constexpr std::uintptr_t StaticAttributeTable = 0x118;
            static constexpr std::uintptr_t StaticDataLabelsTable = 0x128;
            static constexpr std::uintptr_t StringTable = 0x138;
            static constexpr std::uintptr_t KernelPinToFirstBinding = 0x148;
            static constexpr std::uintptr_t CPUDataBindingToVirtualPinLabel = 0x158;
            static constexpr std::uintptr_t KernelPinToVirtualPinLabel = 0x168;
            static constexpr std::uintptr_t VirtualInputPinToType = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"KernelToNode", 0xD0, "ArrayProperty"},
            {"MeshSpawners", 0xE0, "ArrayProperty"},
            {"bLogDataDescriptions", 0xF0, "BoolProperty"},
            {"KernelBindingToPinLabel", 0xF8, "MapProperty"},
            {"DownstreamToUpstreamBinding", 0x108, "MapProperty"},
            {"StaticAttributeTable", 0x118, "StructProperty"},
            {"StaticDataLabelsTable", 0x128, "MapProperty"},
            {"StringTable", 0x138, "ArrayProperty"},
            {"KernelPinToFirstBinding", 0x148, "MapProperty"},
            {"CPUDataBindingToVirtualPinLabel", 0x158, "MapProperty"},
            {"KernelPinToVirtualPinLabel", 0x168, "MapProperty"},
            {"VirtualInputPinToType", 0x178, "MapProperty"},
        }};
    };

    struct PCGComputeGraphSettings
    {
        static constexpr std::string_view Name = "PCGComputeGraphSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ComputeGraphIndex = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComputeGraphIndex", 0xA8, "IntProperty"},
        }};
    };

    struct PCGComputeGraphs
    {
        static constexpr std::string_view Name = "PCGComputeGraphs";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComputeGraphs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComputeGraphs", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGComputeKernel
    {
        static constexpr std::string_view Name = "PCGComputeKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGComputeKernelSource
    {
        static constexpr std::string_view Name = "PCGComputeKernelSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeKernelSource";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryPoint = 0x28;
            static constexpr std::uintptr_t GroupSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntryPoint", 0x28, "StrProperty"},
            {"GroupSize", 0x38, "StructProperty"},
        }};
    };

    struct PCGComputeSource
    {
        static constexpr std::string_view Name = "PCGComputeSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalSources = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalSources", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGConcaveHullSettings
    {
        static constexpr std::string_view Name = "PCGConcaveHullSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Fitness = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fitness", 0xA8, "DoubleProperty"},
        }};
    };

    struct PCGContext
    {
        static constexpr std::string_view Name = "PCGContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGControlFlowSettings
    {
        static constexpr std::string_view Name = "PCGControlFlowSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGConvertToAttributeSetSettings
    {
        static constexpr std::string_view Name = "PCGConvertToAttributeSetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertiesToConvert = 0xA8;
            static constexpr std::uintptr_t bOverrideExistingAttributes = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropertiesToConvert", 0xA8, "MapProperty"},
            {"bOverrideExistingAttributes", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGConvertToDataViewSettings
    {
        static constexpr std::string_view Name = "PCGConvertToDataViewSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bSelectionAsInput = 0xA8;
            static constexpr std::uintptr_t SelectionSources = 0xB0;
            static constexpr std::uintptr_t Selection = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSelectionAsInput", 0xA8, "BoolProperty"},
            {"SelectionSources", 0xB0, "StrProperty"},
            {"Selection", 0xC0, "StructProperty"},
        }};
    };

    struct PCGConvertToPointDataSettings
    {
        static constexpr std::string_view Name = "PCGConvertToPointDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCollapseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bMatchAttributeNamesWithPropertyNames = 0xB0;
            static constexpr std::uintptr_t AttributeToConvert = 0xB8;
            static constexpr std::uintptr_t bDeleteOriginalRemappedAttribute = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bMatchAttributeNamesWithPropertyNames", 0xB0, "BoolProperty"},
            {"AttributeToConvert", 0xB8, "MapProperty"},
            {"bDeleteOriginalRemappedAttribute", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGConvexHull2DSettings
    {
        static constexpr std::string_view Name = "PCGConvexHull2DSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGCopyAttributesSettings
    {
        static constexpr std::string_view Name = "PCGCopyAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t bCopyAllAttributes = 0xAC;
            static constexpr std::uintptr_t bCopyAllDomains = 0xAD;
            static constexpr std::uintptr_t MetadataDomainsMapping = 0xB0;
            static constexpr std::uintptr_t InputSource = 0xC0;
            static constexpr std::uintptr_t OutputTarget = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"bCopyAllAttributes", 0xAC, "BoolProperty"},
            {"bCopyAllDomains", 0xAD, "BoolProperty"},
            {"MetadataDomainsMapping", 0xB0, "MapProperty"},
            {"InputSource", 0xC0, "StructProperty"},
            {"OutputTarget", 0xF0, "StructProperty"},
        }};
    };

    struct PCGCopyPointsAnalysisDataInterface
    {
        static constexpr std::string_view Name = "PCGCopyPointsAnalysisDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGCopyPointsAnalysisDataProvider
    {
        static constexpr std::string_view Name = "PCGCopyPointsAnalysisDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGCopyPointsAnalysisKernel
    {
        static constexpr std::string_view Name = "PCGCopyPointsAnalysisKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGCopyPointsDataInterface
    {
        static constexpr std::string_view Name = "PCGCopyPointsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGCopyPointsDataProvider
    {
        static constexpr std::string_view Name = "PCGCopyPointsDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGCopyPointsKernel
    {
        static constexpr std::string_view Name = "PCGCopyPointsKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t bMatchBasedOnAttribute = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bMatchBasedOnAttribute", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGCopyPointsSettings
    {
        static constexpr std::string_view Name = "PCGCopyPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationInheritance = 0xA8;
            static constexpr std::uintptr_t bApplyTargetRotationToPositions = 0xA9;
            static constexpr std::uintptr_t ScaleInheritance = 0xAA;
            static constexpr std::uintptr_t bApplyTargetScaleToPositions = 0xAB;
            static constexpr std::uintptr_t ColorInheritance = 0xAC;
            static constexpr std::uintptr_t SeedInheritance = 0xAD;
            static constexpr std::uintptr_t AttributeInheritance = 0xAE;
            static constexpr std::uintptr_t TagInheritance = 0xAF;
            static constexpr std::uintptr_t bCopyEachSourceOnEveryTarget = 0xB0;
            static constexpr std::uintptr_t bMatchBasedOnAttribute = 0xB1;
            static constexpr std::uintptr_t MatchAttribute = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"RotationInheritance", 0xA8, "EnumProperty"},
            {"bApplyTargetRotationToPositions", 0xA9, "BoolProperty"},
            {"ScaleInheritance", 0xAA, "EnumProperty"},
            {"bApplyTargetScaleToPositions", 0xAB, "BoolProperty"},
            {"ColorInheritance", 0xAC, "EnumProperty"},
            {"SeedInheritance", 0xAD, "EnumProperty"},
            {"AttributeInheritance", 0xAE, "EnumProperty"},
            {"TagInheritance", 0xAF, "EnumProperty"},
            {"bCopyEachSourceOnEveryTarget", 0xB0, "BoolProperty"},
            {"bMatchBasedOnAttribute", 0xB1, "BoolProperty"},
            {"MatchAttribute", 0xB4, "NameProperty"},
        }};
    };

    struct PCGCopyToRenderTargetSettings
    {
        static constexpr std::string_view Name = "PCGCopyToRenderTargetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideFromInput = 0xA8;
            static constexpr std::uintptr_t RenderTargets = 0xB0;
            static constexpr std::uintptr_t RenderTargetAttribute = 0xC0;
            static constexpr std::uintptr_t bSynchronousLoad = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideFromInput", 0xA8, "BoolProperty"},
            {"RenderTargets", 0xB0, "ArrayProperty"},
            {"RenderTargetAttribute", 0xC0, "StructProperty"},
            {"bSynchronousLoad", 0xF0, "BoolProperty"},
        }};
    };

    struct PCGCountUniqueAttributeValuesDataInterface
    {
        static constexpr std::string_view Name = "PCGCountUniqueAttributeValuesDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeToCountName = 0x80;
            static constexpr std::uintptr_t bEmitPerDataCounts = 0x84;
            static constexpr std::uintptr_t bOutputRawBuffer = 0x85;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttributeToCountName", 0x80, "NameProperty"},
            {"bEmitPerDataCounts", 0x84, "BoolProperty"},
            {"bOutputRawBuffer", 0x85, "BoolProperty"},
        }};
    };

    struct PCGCountUniqueAttributeValuesDataProvider
    {
        static constexpr std::string_view Name = "PCGCountUniqueAttributeValuesDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGCountUniqueAttributeValuesKernel
    {
        static constexpr std::string_view Name = "PCGCountUniqueAttributeValuesKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGAttributeAnalysisKernelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0xB8;
            static constexpr std::uintptr_t MaxIntValue = 0xBC;
            static constexpr std::uintptr_t bEmitPerDataCounts = 0xC0;
            static constexpr std::uintptr_t bOutputRawBuffer = 0xC1;
            static constexpr std::uintptr_t MaxNumUniqueValuesSource = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttributeName", 0xB8, "NameProperty"},
            {"MaxIntValue", 0xBC, "IntProperty"},
            {"bEmitPerDataCounts", 0xC0, "BoolProperty"},
            {"bOutputRawBuffer", 0xC1, "BoolProperty"},
            {"MaxNumUniqueValuesSource", 0xC2, "EnumProperty"},
        }};
    };

    struct PCGCrc
    {
        static constexpr std::string_view Name = "PCGCrc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t bValid = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "UInt32Property"},
            {"bValid", 0x4, "BoolProperty"},
        }};
    };

    struct PCGCreateAttributeSetSettings
    {
        static constexpr std::string_view Name = "PCGCreateAttributeSetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeTypes = 0xB0;
            static constexpr std::uintptr_t OutputTarget = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeTypes", 0xB0, "StructProperty"},
            {"OutputTarget", 0x210, "StructProperty"},
        }};
    };

    struct PCGCreateCollisionDataSettings
    {
        static constexpr std::string_view Name = "PCGCreateCollisionDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionAttribute = 0xA8;
            static constexpr std::uintptr_t CollisionQueryFlag = 0xD8;
            static constexpr std::uintptr_t bWarnIfAttributeCouldNotBeUsed = 0xD9;
            static constexpr std::uintptr_t bSynchronousLoad = 0xDA;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CollisionAttribute", 0xA8, "StructProperty"},
            {"CollisionQueryFlag", 0xD8, "EnumProperty"},
            {"bWarnIfAttributeCouldNotBeUsed", 0xD9, "BoolProperty"},
            {"bSynchronousLoad", 0xDA, "BoolProperty"},
        }};
    };

    struct PCGCreateComplexConstantSettings
    {
        static constexpr std::string_view Name = "PCGCreateComplexConstantSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Properties = 0xA8;
            static constexpr std::uintptr_t TargetMetadataDomain = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Properties", 0xA8, "StructProperty"},
            {"TargetMetadataDomain", 0xB8, "NameProperty"},
        }};
    };

    struct PCGCreatePointsGridSettings
    {
        static constexpr std::string_view Name = "PCGCreatePointsGridSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GridExtents = 0xA8;
            static constexpr std::uintptr_t CellSize = 0xC0;
            static constexpr std::uintptr_t PointSteepness = 0xD8;
            static constexpr std::uintptr_t CoordinateSpace = 0xDC;
            static constexpr std::uintptr_t bSetPointsBounds = 0xDD;
            static constexpr std::uintptr_t bCullPointsOutsideVolume = 0xDE;
            static constexpr std::uintptr_t PointPosition = 0xDF;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GridExtents", 0xA8, "StructProperty"},
            {"CellSize", 0xC0, "StructProperty"},
            {"PointSteepness", 0xD8, "FloatProperty"},
            {"CoordinateSpace", 0xDC, "EnumProperty"},
            {"bSetPointsBounds", 0xDD, "BoolProperty"},
            {"bCullPointsOutsideVolume", 0xDE, "BoolProperty"},
            {"PointPosition", 0xDF, "EnumProperty"},
        }};
    };

    struct PCGCreatePointsSettings
    {
        static constexpr std::string_view Name = "PCGCreatePointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PointsToCreate = 0xA8;
            static constexpr std::uintptr_t CoordinateSpace = 0xB8;
            static constexpr std::uintptr_t bCullPointsOutsideVolume = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointsToCreate", 0xA8, "ArrayProperty"},
            {"CoordinateSpace", 0xB8, "EnumProperty"},
            {"bCullPointsOutsideVolume", 0xB9, "BoolProperty"},
        }};
    };

    struct PCGCreatePointsSphereSettings
    {
        static constexpr std::string_view Name = "PCGCreatePointsSphereSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SphereGeneration = 0xA8;
            static constexpr std::uintptr_t CoordinateSpace = 0xA9;
            static constexpr std::uintptr_t PointOrientation = 0xAA;
            static constexpr std::uintptr_t origin = 0xB0;
            static constexpr std::uintptr_t Radius = 0xC8;
            static constexpr std::uintptr_t GeodesicSubdivisions = 0xD0;
            static constexpr std::uintptr_t Theta = 0xD8;
            static constexpr std::uintptr_t Phi = 0xE0;
            static constexpr std::uintptr_t LatitudinalSegments = 0xE8;
            static constexpr std::uintptr_t LongitudinalSegments = 0xEC;
            static constexpr std::uintptr_t SampleCount = 0xF0;
            static constexpr std::uintptr_t PoissonDistance = 0xF8;
            static constexpr std::uintptr_t PoissonMaxAttempts = 0x100;
            static constexpr std::uintptr_t LatitudinalStartAngle = 0x108;
            static constexpr std::uintptr_t LatitudinalEndAngle = 0x110;
            static constexpr std::uintptr_t LongitudinalStartAngle = 0x118;
            static constexpr std::uintptr_t LongitudinalEndAngle = 0x120;
            static constexpr std::uintptr_t jitter = 0x128;
            static constexpr std::uintptr_t PointSteepness = 0x130;
            static constexpr std::uintptr_t bCullPointsOutsideVolume = 0x134;
            static constexpr std::uintptr_t PointLimit = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"SphereGeneration", 0xA8, "EnumProperty"},
            {"CoordinateSpace", 0xA9, "EnumProperty"},
            {"PointOrientation", 0xAA, "EnumProperty"},
            {"origin", 0xB0, "StructProperty"},
            {"Radius", 0xC8, "DoubleProperty"},
            {"GeodesicSubdivisions", 0xD0, "IntProperty"},
            {"Theta", 0xD8, "DoubleProperty"},
            {"Phi", 0xE0, "DoubleProperty"},
            {"LatitudinalSegments", 0xE8, "IntProperty"},
            {"LongitudinalSegments", 0xEC, "IntProperty"},
            {"SampleCount", 0xF0, "IntProperty"},
            {"PoissonDistance", 0xF8, "DoubleProperty"},
            {"PoissonMaxAttempts", 0x100, "IntProperty"},
            {"LatitudinalStartAngle", 0x108, "DoubleProperty"},
            {"LatitudinalEndAngle", 0x110, "DoubleProperty"},
            {"LongitudinalStartAngle", 0x118, "DoubleProperty"},
            {"LongitudinalEndAngle", 0x120, "DoubleProperty"},
            {"jitter", 0x128, "DoubleProperty"},
            {"PointSteepness", 0x130, "FloatProperty"},
            {"bCullPointsOutsideVolume", 0x134, "BoolProperty"},
            {"PointLimit", 0x138, "IntProperty"},
        }};
    };

    struct PCGCreatePolygon2DSettings
    {
        static constexpr std::string_view Name = "PCGCreatePolygon2DSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputType = 0xA8;
            static constexpr std::uintptr_t bUseHoleAttribute = 0xA9;
            static constexpr std::uintptr_t HoleIndexAttribute = 0xB0;
            static constexpr std::uintptr_t bUsePolygonWidthAttribute = 0xE0;
            static constexpr std::uintptr_t PolygonWidthAttribute = 0xE8;
            static constexpr std::uintptr_t OpenPolygonWidth = 0x118;
            static constexpr std::uintptr_t SplineMaxDiscretizationError = 0x120;
            static constexpr std::uintptr_t DefaultPolygonNormal = 0x128;
            static constexpr std::uintptr_t DefaultPolygonNormalBehavior = 0x140;
            static constexpr std::uintptr_t JoinType = 0x141;
            static constexpr std::uintptr_t EndType = 0x142;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"InputType", 0xA8, "EnumProperty"},
            {"bUseHoleAttribute", 0xA9, "BoolProperty"},
            {"HoleIndexAttribute", 0xB0, "StructProperty"},
            {"bUsePolygonWidthAttribute", 0xE0, "BoolProperty"},
            {"PolygonWidthAttribute", 0xE8, "StructProperty"},
            {"OpenPolygonWidth", 0x118, "DoubleProperty"},
            {"SplineMaxDiscretizationError", 0x120, "DoubleProperty"},
            {"DefaultPolygonNormal", 0x128, "StructProperty"},
            {"DefaultPolygonNormalBehavior", 0x140, "EnumProperty"},
            {"JoinType", 0x141, "EnumProperty"},
            {"EndType", 0x142, "EnumProperty"},
        }};
    };

    struct PCGCreateSplineSettings
    {
        static constexpr std::string_view Name = "PCGCreateSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t bClosedLoop = 0xA9;
            static constexpr std::uintptr_t bLinear = 0xAA;
            static constexpr std::uintptr_t bApplyCustomTangents = 0xAB;
            static constexpr std::uintptr_t ArriveTangentAttribute = 0xAC;
            static constexpr std::uintptr_t LeaveTangentAttribute = 0xB0;
            static constexpr std::uintptr_t bUseInterpTypeAttribute = 0xB4;
            static constexpr std::uintptr_t InterpTypeAttribute = 0xB8;
            static constexpr std::uintptr_t TagsToAddOnComponents = 0xC0;
            static constexpr std::uintptr_t TargetActor = 0xD0;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"bClosedLoop", 0xA9, "BoolProperty"},
            {"bLinear", 0xAA, "BoolProperty"},
            {"bApplyCustomTangents", 0xAB, "BoolProperty"},
            {"ArriveTangentAttribute", 0xAC, "NameProperty"},
            {"LeaveTangentAttribute", 0xB0, "NameProperty"},
            {"bUseInterpTypeAttribute", 0xB4, "BoolProperty"},
            {"InterpTypeAttribute", 0xB8, "NameProperty"},
            {"TagsToAddOnComponents", 0xC0, "ArrayProperty"},
            {"TargetActor", 0xD0, "SoftObjectProperty"},
            {"PostProcessFunctionNames", 0xF0, "ArrayProperty"},
        }};
    };

    struct PCGCreateSurfaceFromPolygon2DSettings
    {
        static constexpr std::string_view Name = "PCGCreateSurfaceFromPolygon2DSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGCreateSurfaceFromSplineSettings
    {
        static constexpr std::string_view Name = "PCGCreateSurfaceFromSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGCreateTargetActor
    {
        static constexpr std::string_view Name = "PCGCreateTargetActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateActor = 0xA8;
            static constexpr std::uintptr_t AttachOptions = 0xB0;
            static constexpr std::uintptr_t RootActor = 0xB8;
            static constexpr std::uintptr_t ActorLabel = 0xD8;
            static constexpr std::uintptr_t ActorPivot = 0xF0;
            static constexpr std::uintptr_t CommaSeparatedActorTags = 0x150;
            static constexpr std::uintptr_t TagsToAddOnActor = 0x160;
            static constexpr std::uintptr_t PropertyOverrideDescriptions = 0x170;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0x180;
            static constexpr std::uintptr_t DataLayerSettings = 0x190;
            static constexpr std::uintptr_t HLODSettings = 0x2A0;
            static constexpr std::uintptr_t bDeleteActorsBeforeGeneration = 0x2B0;
            static constexpr std::uintptr_t OverrideTemplateActorClass = 0x2B8;
            static constexpr std::uintptr_t TemplateActorClass = 0x2C0;
            static constexpr std::uintptr_t bAllowTemplateActorEditing = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"TemplateActor", 0xA8, "ObjectProperty"},
            {"AttachOptions", 0xB0, "EnumProperty"},
            {"RootActor", 0xB8, "SoftObjectProperty"},
            {"ActorLabel", 0xD8, "StrProperty"},
            {"ActorPivot", 0xF0, "StructProperty"},
            {"CommaSeparatedActorTags", 0x150, "StrProperty"},
            {"TagsToAddOnActor", 0x160, "ArrayProperty"},
            {"PropertyOverrideDescriptions", 0x170, "ArrayProperty"},
            {"PostProcessFunctionNames", 0x180, "ArrayProperty"},
            {"DataLayerSettings", 0x190, "StructProperty"},
            {"HLODSettings", 0x2A0, "StructProperty"},
            {"bDeleteActorsBeforeGeneration", 0x2B0, "BoolProperty"},
            {"OverrideTemplateActorClass", 0x2B8, "ClassProperty"},
            {"TemplateActorClass", 0x2C0, "ClassProperty"},
            {"bAllowTemplateActorEditing", 0x2C8, "BoolProperty"},
        }};
    };

    struct PCGCullPointsOutsideActorBoundsDataInterface
    {
        static constexpr std::string_view Name = "PCGCullPointsOutsideActorBoundsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGCullPointsOutsideActorBoundsDataProvider
    {
        static constexpr std::string_view Name = "PCGCullPointsOutsideActorBoundsDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGCullPointsOutsideActorBoundsKernel
    {
        static constexpr std::string_view Name = "PCGCullPointsOutsideActorBoundsKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGCullPointsOutsideActorBoundsSettings
    {
        static constexpr std::string_view Name = "PCGCullPointsOutsideActorBoundsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundsExpansion = 0xA8;
            static constexpr std::uintptr_t Mode = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoundsExpansion", 0xA8, "FloatProperty"},
            {"Mode", 0xAC, "EnumProperty"},
        }};
    };

    struct PCGCustomComputeKernelDataProvider
    {
        static constexpr std::string_view Name = "PCGCustomComputeKernelDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Kernel = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Kernel", 0x68, "ObjectProperty"},
        }};
    };

    struct PCGCustomHLSLDataInterface
    {
        static constexpr std::string_view Name = "PCGCustomHLSLDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGCustomHLSLDataProvider
    {
        static constexpr std::string_view Name = "PCGCustomHLSLDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGKernelParamsDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGCustomHLSLKernel
    {
        static constexpr std::string_view Name = "PCGCustomHLSLKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t ParsedSources = 0xB8;
            static constexpr std::uintptr_t KernelAttributeKeys = 0xC8;
            static constexpr std::uintptr_t PinDataLabels = 0xD8;
            static constexpr std::uintptr_t PinCreatedAttributeKeys = 0xE8;
            static constexpr std::uintptr_t PinToPropertiesWithSetters = 0xF8;
            static constexpr std::uintptr_t PinToPropertiesWithSingleConstantSetters = 0x108;
            static constexpr std::uintptr_t PinWrittenTransformSetters = 0x118;
            static constexpr std::uintptr_t PinsRequiringZeroInitialization = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ParsedSources", 0xB8, "ArrayProperty"},
            {"KernelAttributeKeys", 0xC8, "ArrayProperty"},
            {"PinDataLabels", 0xD8, "StructProperty"},
            {"PinCreatedAttributeKeys", 0xE8, "MapProperty"},
            {"PinToPropertiesWithSetters", 0xF8, "MapProperty"},
            {"PinToPropertiesWithSingleConstantSetters", 0x108, "MapProperty"},
            {"PinWrittenTransformSetters", 0x118, "MapProperty"},
            {"PinsRequiringZeroInitialization", 0x128, "ArrayProperty"},
        }};
    };

    struct PCGCustomHLSLParsedSource
    {
        static constexpr std::string_view Name = "PCGCustomHLSLParsedSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeFunctions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeFunctions", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGCustomHLSLSettings
    {
        static constexpr std::string_view Name = "PCGCustomHLSLSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelType = 0xB0;
            static constexpr std::uintptr_t NumElements = 0xB4;
            static constexpr std::uintptr_t NumElementsX = 0xB8;
            static constexpr std::uintptr_t NumElementsY = 0xBC;
            static constexpr std::uintptr_t NumElementsZ = 0xC0;
            static constexpr std::uintptr_t TextureFormat = 0xC4;
            static constexpr std::uintptr_t TextureFilter = 0xC5;
            static constexpr std::uintptr_t bOverrideTextureTransform = 0xC6;
            static constexpr std::uintptr_t TextureTransform = 0xD0;
            static constexpr std::uintptr_t DispatchThreadCount = 0x130;
            static constexpr std::uintptr_t ThreadCountMultiplier = 0x134;
            static constexpr std::uintptr_t FixedThreadCount = 0x138;
            static constexpr std::uintptr_t ThreadCountInputPinLabels = 0x140;
            static constexpr std::uintptr_t InputPins = 0x150;
            static constexpr std::uintptr_t OutputPins = 0x160;
            static constexpr std::uintptr_t bMuteUnwrittenPinDataErrors = 0x170;
            static constexpr std::uintptr_t bPerPinAttributeCreationSettings = 0x171;
            static constexpr std::uintptr_t bUseLegacyDataCollectionAPI = 0x172;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"KernelType", 0xB0, "EnumProperty"},
            {"NumElements", 0xB4, "IntProperty"},
            {"NumElementsX", 0xB8, "IntProperty"},
            {"NumElementsY", 0xBC, "IntProperty"},
            {"NumElementsZ", 0xC0, "IntProperty"},
            {"TextureFormat", 0xC4, "EnumProperty"},
            {"TextureFilter", 0xC5, "EnumProperty"},
            {"bOverrideTextureTransform", 0xC6, "BoolProperty"},
            {"TextureTransform", 0xD0, "StructProperty"},
            {"DispatchThreadCount", 0x130, "EnumProperty"},
            {"ThreadCountMultiplier", 0x134, "IntProperty"},
            {"FixedThreadCount", 0x138, "IntProperty"},
            {"ThreadCountInputPinLabels", 0x140, "ArrayProperty"},
            {"InputPins", 0x150, "ArrayProperty"},
            {"OutputPins", 0x160, "ArrayProperty"},
            {"bMuteUnwrittenPinDataErrors", 0x170, "BoolProperty"},
            {"bPerPinAttributeCreationSettings", 0x171, "BoolProperty"},
            {"bUseLegacyDataCollectionAPI", 0x172, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "DisplayNumElements1D",
            "DisplayNumElements2D",
            "DisplayNumElements3D",
        }};
    };

    struct PCGCustomKernelDataInterface
    {
        static constexpr std::string_view Name = "PCGCustomKernelDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Kernel = 0x80;
            static constexpr std::uintptr_t Settings = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Kernel", 0x80, "ObjectProperty"},
            {"Settings", 0x88, "SoftObjectProperty"},
        }};
    };

    struct PCGCustomSelectionKey
    {
        static constexpr std::string_view Name = "PCGCustomSelectionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGData
    {
        static constexpr std::string_view Name = "PCGData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UID = 0x28;
            static constexpr std::uintptr_t MetaData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UID", 0x28, "UInt64Property"},
            {"MetaData", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ConstMetadata",
            "MutableMetadata",
        }};
    };

    struct PCGDataAsset
    {
        static constexpr std::string_view Name = "PCGDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x28;
            static constexpr std::uintptr_t Name = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0x28, "StructProperty"},
            {"Name", 0x58, "StrProperty"},
        }};
    };

    struct PCGDataAssetCachedPins
    {
        static constexpr std::string_view Name = "PCGDataAssetCachedPins";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPins = 0x0;
            static constexpr std::uintptr_t bHasCachedPins = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPins", 0x0, "ArrayProperty"},
            {"bHasCachedPins", 0x10, "BoolProperty"},
        }};
    };

    struct PCGDataAttributesAndTagsSettingsBase
    {
        static constexpr std::string_view Name = "PCGDataAttributesAndTagsSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesTagsMapping = 0xA8;
            static constexpr std::uintptr_t bDeleteInputsAfterOperation = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributesTagsMapping", 0xA8, "MapProperty"},
            {"bDeleteInputsAfterOperation", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGDataAttributesToTagsSettings
    {
        static constexpr std::string_view Name = "PCGDataAttributesToTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataAttributesAndTagsSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDiscardNonParseableAttributeTypes = 0xC0;
            static constexpr std::uintptr_t bDiscardAttributeValue = 0xC1;
            static constexpr std::uintptr_t bTreatStringAttributesAsTags = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDiscardNonParseableAttributeTypes", 0xC0, "BoolProperty"},
            {"bDiscardAttributeValue", 0xC1, "BoolProperty"},
            {"bTreatStringAttributesAsTags", 0xC2, "BoolProperty"},
        }};
    };

    struct PCGDataBinding
    {
        static constexpr std::string_view Name = "PCGDataBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Graph = 0x28;
            static constexpr std::uintptr_t InputDataCollection = 0x30;
            static constexpr std::uintptr_t OutputDataCollection = 0x60;
            static constexpr std::uintptr_t MeshSpawnersToPrimitives = 0x90;
            static constexpr std::uintptr_t CompletedMeshSpawners = 0xA0;
            static constexpr std::uintptr_t DataToDebug = 0xB0;
            static constexpr std::uintptr_t DataToInspect = 0xC0;
            static constexpr std::uintptr_t DataToLog = 0xD0;
            static constexpr std::uintptr_t AttributeTable = 0xF0;
            static constexpr std::uintptr_t StringTable = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Graph", 0x28, "ObjectProperty"},
            {"InputDataCollection", 0x30, "StructProperty"},
            {"OutputDataCollection", 0x60, "StructProperty"},
            {"MeshSpawnersToPrimitives", 0x90, "MapProperty"},
            {"CompletedMeshSpawners", 0xA0, "ArrayProperty"},
            {"DataToDebug", 0xB0, "ArrayProperty"},
            {"DataToInspect", 0xC0, "ArrayProperty"},
            {"DataToLog", 0xD0, "ArrayProperty"},
            {"AttributeTable", 0xF0, "StructProperty"},
            {"StringTable", 0x100, "ArrayProperty"},
        }};
    };

    struct PCGDataCollection
    {
        static constexpr std::string_view Name = "PCGDataCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedData = 0x0;
            static constexpr std::uintptr_t bCancelExecutionOnEmpty = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TaggedData", 0x0, "ArrayProperty"},
            {"bCancelExecutionOnEmpty", 0x10, "BoolProperty"},
        }};
    };

    struct PCGDataCollectionDataInterface
    {
        static constexpr std::string_view Name = "PCGDataCollectionDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresZeroInitialization = 0x88;
            static constexpr std::uintptr_t ElementCountMultiplier = 0x8C;
            static constexpr std::uintptr_t bLegacyAllowSettersOnInputs = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bRequiresZeroInitialization", 0x88, "BoolProperty"},
            {"ElementCountMultiplier", 0x8C, "UInt32Property"},
            {"bLegacyAllowSettersOnInputs", 0x90, "BoolProperty"},
        }};
    };

    struct PCGDataCollectionDataProvider
    {
        static constexpr std::string_view Name = "PCGDataCollectionDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGDataCollectionExporter
    {
        static constexpr std::string_view Name = "PCGDataCollectionExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGAssetExporter";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x28, "StructProperty"},
        }};
    };

    struct PCGDataFromActorSettings
    {
        static constexpr std::string_view Name = "PCGDataFromActorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGDataFromTool
    {
        static constexpr std::string_view Name = "PCGDataFromTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ToolTag = 0xA8;
            static constexpr std::uintptr_t DataInstance = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ToolTag", 0xA8, "NameProperty"},
            {"DataInstance", 0xAC, "NameProperty"},
        }};
    };

    struct PCGDataFunctionLibrary
    {
        static constexpr std::string_view Name = "PCGDataFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "AddToCollection",
            "BreakTaggedData",
            "GetAllSettings",
            "GetInputs",
            "GetInputsByPinLabel",
            "GetInputsByTag",
            "GetParams",
            "GetParamsByPinLabel",
            "GetParamsByTag",
            "GetTypedInputs",
            "GetTypedInputsByPin",
            "GetTypedInputsByPinLabel",
            "GetTypedInputsByTag",
            "MakeTaggedData",
        }};
    };

    struct PCGDataLabelResolverDataInterface
    {
        static constexpr std::string_view Name = "PCGDataLabelResolverDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t PinLabel = 0x80;
            static constexpr std::uintptr_t bIsInput = 0x84;
            static constexpr std::uintptr_t Kernel = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PinLabel", 0x80, "NameProperty"},
            {"bIsInput", 0x84, "BoolProperty"},
            {"Kernel", 0x88, "ObjectProperty"},
        }};
    };

    struct PCGDataLabelResolverDataProvider
    {
        static constexpr std::string_view Name = "PCGDataLabelResolverDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Kernel = 0x68;
            static constexpr std::uintptr_t PinLabel = 0x70;
            static constexpr std::uintptr_t bIsInput = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Kernel", 0x68, "ObjectProperty"},
            {"PinLabel", 0x70, "NameProperty"},
            {"bIsInput", 0x74, "BoolProperty"},
        }};
    };

    struct PCGDataLabels
    {
        static constexpr std::string_view Name = "PCGDataLabels";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Labels = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Labels", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGDataLayerReferenceSelector
    {
        static constexpr std::string_view Name = "PCGDataLayerReferenceSelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAsInput = 0x0;
            static constexpr std::uintptr_t Attribute = 0x8;
            static constexpr std::uintptr_t DataLayers = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAsInput", 0x0, "BoolProperty"},
            {"Attribute", 0x8, "StructProperty"},
            {"DataLayers", 0x38, "ArrayProperty"},
        }};
    };

    struct PCGDataLayerSettings
    {
        static constexpr std::string_view Name = "PCGDataLayerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataLayerSourceType = 0x0;
            static constexpr std::uintptr_t DataLayerReferenceAttribute = 0x8;
            static constexpr std::uintptr_t IncludedDataLayers = 0x38;
            static constexpr std::uintptr_t ExcludedDataLayers = 0x80;
            static constexpr std::uintptr_t AddDataLayers = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataLayerSourceType", 0x0, "EnumProperty"},
            {"DataLayerReferenceAttribute", 0x8, "StructProperty"},
            {"IncludedDataLayers", 0x38, "StructProperty"},
            {"ExcludedDataLayers", 0x80, "StructProperty"},
            {"AddDataLayers", 0xC8, "StructProperty"},
        }};
    };

    struct PCGDataNumDataInterface
    {
        static constexpr std::string_view Name = "PCGDataNumDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGDataNumDataProvider
    {
        static constexpr std::string_view Name = "PCGDataNumDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGDataNumKernel
    {
        static constexpr std::string_view Name = "PCGDataNumKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t OutCountAttributeKey = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutCountAttributeKey", 0xB8, "StructProperty"},
        }};
    };

    struct PCGDataNumSettings
    {
        static constexpr std::string_view Name = "PCGDataNumSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputAttributeName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputAttributeName", 0xA8, "NameProperty"},
        }};
    };

    struct PCGDataPtrWrapper
    {
        static constexpr std::string_view Name = "PCGDataPtrWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x0, "ObjectProperty"},
        }};
    };

    struct PCGDataTableRowToParamDataSettings
    {
        static constexpr std::string_view Name = "PCGDataTableRowToParamDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RowName = 0xA8;
            static constexpr std::uintptr_t DataTable = 0xB0;
            static constexpr std::uintptr_t bSynchronousLoad = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RowName", 0xA8, "NameProperty"},
            {"DataTable", 0xB0, "SoftObjectProperty"},
            {"bSynchronousLoad", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGDataTableRowToParamDataTestStruct
    {
        static constexpr std::string_view Name = "PCGDataTableRowToParamDataTestStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t String = 0x8;
            static constexpr std::uintptr_t i32 = 0x18;
            static constexpr std::uintptr_t i64 = 0x20;
            static constexpr std::uintptr_t f32 = 0x28;
            static constexpr std::uintptr_t f64 = 0x30;
            static constexpr std::uintptr_t V2 = 0x38;
            static constexpr std::uintptr_t V3 = 0x48;
            static constexpr std::uintptr_t V4 = 0x60;
            static constexpr std::uintptr_t SoftPath = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"String", 0x8, "StrProperty"},
            {"i32", 0x18, "IntProperty"},
            {"i64", 0x20, "Int64Property"},
            {"f32", 0x28, "FloatProperty"},
            {"f64", 0x30, "DoubleProperty"},
            {"V2", 0x38, "StructProperty"},
            {"V3", 0x48, "StructProperty"},
            {"V4", 0x60, "StructProperty"},
            {"SoftPath", 0x80, "StructProperty"},
        }};
    };

    struct PCGDataToDebug
    {
        static constexpr std::string_view Name = "PCGDataToDebug";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t DataPendingInit = 0x8;
            static constexpr std::uintptr_t ProducerSettings = 0x10;
            static constexpr std::uintptr_t PinLabel = 0x18;
            static constexpr std::uintptr_t PinLabelAlias = 0x1C;
            static constexpr std::uintptr_t Tags = 0x20;
            static constexpr std::uintptr_t AdditionalTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Data", 0x0, "ObjectProperty"},
            {"DataPendingInit", 0x8, "ObjectProperty"},
            {"ProducerSettings", 0x10, "WeakObjectProperty"},
            {"PinLabel", 0x18, "NameProperty"},
            {"PinLabelAlias", 0x1C, "NameProperty"},
            {"Tags", 0x20, "SetProperty"},
            {"AdditionalTags", 0x30, "SetProperty"},
        }};
    };

    struct PCGDataTypeBaseId
    {
        static constexpr std::string_view Name = "PCGDataTypeBaseId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Struct", 0x0, "ObjectProperty"},
        }};
    };

    struct PCGDataTypeIdentifier
    {
        static constexpr std::string_view Name = "PCGDataTypeIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IDs = 0x0;
            static constexpr std::uintptr_t CustomSubtype = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IDs", 0x0, "ArrayProperty"},
            {"CustomSubtype", 0x10, "IntProperty"},
        }};
    };

    struct PCGDataTypeIdentifierHelpers
    {
        static constexpr std::string_view Name = "PCGDataTypeIdentifierHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetIdentifierFromClass",
            "GetIdentifierFromLegacyType",
            "IsComposition",
            "IsIdentical",
            "IsSameType",
            "IsValid",
        }};
    };

    struct PCGDataTypeInfo
    {
        static constexpr std::string_view Name = "PCGDataTypeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoComposite
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoComposite";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoSpatial";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoConcrete
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoConcrete";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoSpatial";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoDataView
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoDataView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoDynamicMesh
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoDynamicMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoLandscape
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoLandscape";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoSurface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoLandscapeSpline
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoLandscapeSpline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoPolyline";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoOther
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoOther";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoParam
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoPoint
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoPolygon2D
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoPolygon2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoPolyline";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoPolyline
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoPolyline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoPrimitive
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoPrimitive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoProxyForGPU
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoProxyForGPU";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoRawBuffer
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoRawBuffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoRenderTarget2D
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoRenderTarget2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoTexture2DSingleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoResource
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoSettings
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoSpatial
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoSpatial";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfo";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoSpline
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoSpline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoPolyline";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoStaticMeshResource
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoStaticMeshResource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoResource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoSurface
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoSurface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoTexture2D
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoTexture2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoTexture2DSingleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoTexture2DArray
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoTexture2DArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoTexture2DBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoTexture2DBase
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoTexture2DBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoSurface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoTexture2DSingleBase
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoTexture2DSingleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoTexture2DBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoVirtualTexture
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoVirtualTexture";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoSurface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataTypeInfoVolume
    {
        static constexpr std::string_view Name = "PCGDataTypeInfoVolume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDataTypeInfoConcrete";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataView
    {
        static constexpr std::string_view Name = "PCGDataView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewedData = 0x8;
            static constexpr std::uintptr_t Selection = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ViewedData", 0x8, "ObjectProperty"},
            {"Selection", 0x10, "StructProperty"},
        }};
    };

    struct PCGDataViewCSVConverter
    {
        static constexpr std::string_view Name = "PCGDataViewCSVConverter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataViewConverterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataViewCSVOutput
    {
        static constexpr std::string_view Name = "PCGDataViewCSVOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataViewCSVParameters
    {
        static constexpr std::string_view Name = "PCGDataViewCSVParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Output = 0x0;
            static constexpr std::uintptr_t NameValueSeparator = 0x8;
            static constexpr std::uintptr_t ValueDelimiter = 0x18;
            static constexpr std::uintptr_t AttributeDelimiter = 0x28;
            static constexpr std::uintptr_t bOmitDomain = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Output", 0x0, "EnumProperty"},
            {"NameValueSeparator", 0x8, "StrProperty"},
            {"ValueDelimiter", 0x18, "StrProperty"},
            {"AttributeDelimiter", 0x28, "StrProperty"},
            {"bOmitDomain", 0x38, "BoolProperty"},
        }};
    };

    struct PCGDataViewConverterBase
    {
        static constexpr std::string_view Name = "PCGDataViewConverterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataViewData
    {
        static constexpr std::string_view Name = "PCGDataViewData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t DataView = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataView", 0x48, "StructProperty"},
        }};
    };

    struct PCGDataViewJsonConverter
    {
        static constexpr std::string_view Name = "PCGDataViewJsonConverter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataViewConverterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataViewJsonOutput
    {
        static constexpr std::string_view Name = "PCGDataViewJsonOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDataViewJsonParameters
    {
        static constexpr std::string_view Name = "PCGDataViewJsonParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeLayout = 0x0;
            static constexpr std::uintptr_t bPrettyJson = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeLayout", 0x0, "EnumProperty"},
            {"bPrettyJson", 0x1, "BoolProperty"},
        }};
    };

    struct PCGDataViewSelection
    {
        static constexpr std::string_view Name = "PCGDataViewSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllAttributes = 0x0;
            static constexpr std::uintptr_t bLimitByDomain = 0x1;
            static constexpr std::uintptr_t bIgnoreProperties = 0x2;
            static constexpr std::uintptr_t Attributes = 0x8;
            static constexpr std::uintptr_t Domain = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bAllAttributes", 0x0, "BoolProperty"},
            {"bLimitByDomain", 0x1, "BoolProperty"},
            {"bIgnoreProperties", 0x2, "BoolProperty"},
            {"Attributes", 0x8, "ArrayProperty"},
            {"Domain", 0x18, "NameProperty"},
        }};
    };

    struct PCGDataViewToStringSettings
    {
        static constexpr std::string_view Name = "PCGDataViewToStringSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ConverterClass = 0xA8;
            static constexpr std::uintptr_t ConverterParameters = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConverterClass", 0xA8, "ClassProperty"},
            {"ConverterParameters", 0xB0, "StructProperty"},
        }};
    };

    struct PCGDebugDataInterface
    {
        static constexpr std::string_view Name = "PCGDebugDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugBufferSizeFloats = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugBufferSizeFloats", 0x80, "UInt32Property"},
        }};
    };

    struct PCGDebugDataProvider
    {
        static constexpr std::string_view Name = "PCGDebugDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGDebugDrawComponent
    {
        static constexpr std::string_view Name = "PCGDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct PCGDebugSettings
    {
        static constexpr std::string_view Name = "PCGDebugSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetActor", 0xA8, "SoftObjectProperty"},
        }};
    };

    struct PCGDebugVisualizationSettings
    {
        static constexpr std::string_view Name = "PCGDebugVisualizationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PointScale = 0x0;
            static constexpr std::uintptr_t ScaleMethod = 0x4;
            static constexpr std::uintptr_t PointMesh = 0x8;
            static constexpr std::uintptr_t MaterialOverride = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PointScale", 0x0, "FloatProperty"},
            {"ScaleMethod", 0x4, "EnumProperty"},
            {"PointMesh", 0x8, "SoftObjectProperty"},
            {"MaterialOverride", 0x28, "SoftObjectProperty"},
        }};
    };

    struct PCGDefaultActorExecutionSource
    {
        static constexpr std::string_view Name = "PCGDefaultActorExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDefaultWorldObjectExecutionSource";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagedResourceContainer = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ManagedResourceContainer", 0x58, "StructProperty"},
        }};
    };

    struct PCGDefaultExecutionSource
    {
        static constexpr std::string_view Name = "PCGDefaultExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphInterface = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GraphInterface", 0x38, "ObjectProperty"},
        }};
    };

    struct PCGDefaultValueContainer
    {
        static constexpr std::string_view Name = "PCGDefaultValueContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivatedProperties = 0x0;
            static constexpr std::uintptr_t PropertyBag = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActivatedProperties", 0x0, "SetProperty"},
            {"PropertyBag", 0x10, "StructProperty"},
        }};
    };

    struct PCGDefaultWorldObjectExecutionSource
    {
        static constexpr std::string_view Name = "PCGDefaultWorldObjectExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDefaultExecutionSource";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagedResourceContainer = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ManagedResourceContainer", 0x58, "StructProperty"},
        }};
    };

    struct PCGDeleteAttributesSettings
    {
        static constexpr std::string_view Name = "PCGDeleteAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t Operator = 0xAC;
            static constexpr std::uintptr_t SelectedAttributes = 0xB0;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xC0;
            static constexpr std::uintptr_t MetadataDomain = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"Operator", 0xAC, "EnumProperty"},
            {"SelectedAttributes", 0xB0, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xC0, "BoolProperty"},
            {"MetadataDomain", 0xC4, "NameProperty"},
        }};
    };

    struct PCGDeleteTagsSettings
    {
        static constexpr std::string_view Name = "PCGDeleteTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t Operator = 0xAC;
            static constexpr std::uintptr_t SelectedTags = 0xB0;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"Operator", 0xAC, "EnumProperty"},
            {"SelectedTags", 0xB0, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xC0, "BoolProperty"},
        }};
    };

    struct PCGDeltaBase
    {
        static constexpr std::string_view Name = "PCGDeltaBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGDeltaCollection
    {
        static constexpr std::string_view Name = "PCGDeltaCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x0;
            static constexpr std::uintptr_t Deltas = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Settings", 0x0, "StructProperty"},
            {"Deltas", 0x18, "MapProperty"},
        }};
    };

    struct PCGDeltaKey
    {
        static constexpr std::string_view Name = "PCGDeltaKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hash = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Hash", 0x0, "UInt64Property"},
        }};
    };

    struct PCGDeltaSettings
    {
        static constexpr std::string_view Name = "PCGDeltaSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyPolicy = 0x0;
            static constexpr std::uintptr_t AttributeName = 0x4;
            static constexpr std::uintptr_t PinLabel = 0x8;
            static constexpr std::uintptr_t KeyTarget = 0xC;
            static constexpr std::uintptr_t SpatialTolerance = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"KeyPolicy", 0x0, "EnumProperty"},
            {"AttributeName", 0x4, "NameProperty"},
            {"PinLabel", 0x8, "NameProperty"},
            {"KeyTarget", 0xC, "EnumProperty"},
            {"SpatialTolerance", 0x10, "DoubleProperty"},
        }};
    };

    struct PCGDensityFilterSettings
    {
        static constexpr std::string_view Name = "PCGDensityFilterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerBound = 0xA8;
            static constexpr std::uintptr_t UpperBound = 0xAC;
            static constexpr std::uintptr_t bInvertFilter = 0xB0;
            static constexpr std::uintptr_t bNormalizeOutputDensity = 0xB1;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LowerBound", 0xA8, "FloatProperty"},
            {"UpperBound", 0xAC, "FloatProperty"},
            {"bInvertFilter", 0xB0, "BoolProperty"},
            {"bNormalizeOutputDensity", 0xB1, "BoolProperty"},
        }};
    };

    struct PCGDensityRemapSettings
    {
        static constexpr std::string_view Name = "PCGDensityRemapSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InRangeMin = 0xA8;
            static constexpr std::uintptr_t InRangeMax = 0xAC;
            static constexpr std::uintptr_t OutRangeMin = 0xB0;
            static constexpr std::uintptr_t OutRangeMax = 0xB4;
            static constexpr std::uintptr_t bExcludeValuesOutsideInputRange = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InRangeMin", 0xA8, "FloatProperty"},
            {"InRangeMax", 0xAC, "FloatProperty"},
            {"OutRangeMin", 0xB0, "FloatProperty"},
            {"OutRangeMax", 0xB4, "FloatProperty"},
            {"bExcludeValuesOutsideInputRange", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGDeterminismSettings
    {
        static constexpr std::string_view Name = "PCGDeterminismSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bNativeTests = 0x0;
            static constexpr std::uintptr_t bUseBlueprintDeterminismTest = 0x1;
            static constexpr std::uintptr_t DeterminismTestBlueprint = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bNativeTests", 0x0, "BoolProperty"},
            {"bUseBlueprintDeterminismTest", 0x1, "BoolProperty"},
            {"DeterminismTestBlueprint", 0x8, "ClassProperty"},
        }};
    };

    struct PCGDeterminismTestBlueprintBase
    {
        static constexpr std::string_view Name = "PCGDeterminismTestBlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ExecuteTest",
        }};
    };

    struct PCGDifferenceData
    {
        static constexpr std::string_view Name = "PCGDifferenceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t bDiffMetadata = 0xE0;
            static constexpr std::uintptr_t Source = 0xE8;
            static constexpr std::uintptr_t Difference = 0xF0;
            static constexpr std::uintptr_t DifferencesUnion = 0xF8;
            static constexpr std::uintptr_t DensityFunction = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bDiffMetadata", 0xE0, "BoolProperty"},
            {"Source", 0xE8, "ObjectProperty"},
            {"Difference", 0xF0, "ObjectProperty"},
            {"DifferencesUnion", 0xF8, "ObjectProperty"},
            {"DensityFunction", 0x100, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Initialize",
            "K2_AddDifference",
            "SetDensityFunction",
        }};
    };

    struct PCGDifferenceSettings
    {
        static constexpr std::string_view Name = "PCGDifferenceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DensityFunction = 0xA8;
            static constexpr std::uintptr_t Mode = 0xA9;
            static constexpr std::uintptr_t bDiffMetadata = 0xAA;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0xAB;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DensityFunction", 0xA8, "EnumProperty"},
            {"Mode", 0xA9, "EnumProperty"},
            {"bDiffMetadata", 0xAA, "BoolProperty"},
            {"bKeepZeroDensityPoints", 0xAB, "BoolProperty"},
        }};
    };

    struct PCGDistanceSettings
    {
        static constexpr std::string_view Name = "PCGDistanceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOutputToAttribute = 0xA8;
            static constexpr std::uintptr_t OutputAttribute = 0xB0;
            static constexpr std::uintptr_t bOutputDistanceVector = 0xE0;
            static constexpr std::uintptr_t bSetDensity = 0xE1;
            static constexpr std::uintptr_t MaximumDistance = 0xE8;
            static constexpr std::uintptr_t SourceShape = 0xF0;
            static constexpr std::uintptr_t TargetShape = 0xF4;
            static constexpr std::uintptr_t bCheckSourceAgainstRespectiveTarget = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bOutputToAttribute", 0xA8, "BoolProperty"},
            {"OutputAttribute", 0xB0, "StructProperty"},
            {"bOutputDistanceVector", 0xE0, "BoolProperty"},
            {"bSetDensity", 0xE1, "BoolProperty"},
            {"MaximumDistance", 0xE8, "DoubleProperty"},
            {"SourceShape", 0xF0, "EnumProperty"},
            {"TargetShape", 0xF4, "EnumProperty"},
            {"bCheckSourceAgainstRespectiveTarget", 0xF8, "BoolProperty"},
        }};
    };

    struct PCGDownloadFromGPUSettings
    {
        static constexpr std::string_view Name = "PCGDownloadFromGPUSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGDownsampleTextureSettings
    {
        static constexpr std::string_view Name = "PCGDownsampleTextureSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t bPadResolutionToSquare = 0xA9;
            static constexpr std::uintptr_t bPadResolutionToNextPowerOfTwo = 0xAA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"bPadResolutionToSquare", 0xA9, "BoolProperty"},
            {"bPadResolutionToNextPowerOfTwo", 0xAA, "BoolProperty"},
        }};
    };

    struct PCGDummyGetPropertyLevel2Struct
    {
        static constexpr std::string_view Name = "PCGDummyGetPropertyLevel2Struct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleArrayProperty = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoubleArrayProperty", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGDummyGetPropertyStruct
    {
        static constexpr std::string_view Name = "PCGDummyGetPropertyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IntArrayProperty = 0x0;
            static constexpr std::uintptr_t FloatProperty = 0x10;
            static constexpr std::uintptr_t Level2Struct = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IntArrayProperty", 0x0, "ArrayProperty"},
            {"FloatProperty", 0x10, "FloatProperty"},
            {"Level2Struct", 0x18, "StructProperty"},
        }};
    };

    struct PCGDummyGetPropertyTest
    {
        static constexpr std::string_view Name = "PCGDummyGetPropertyTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Int64Property = 0x28;
            static constexpr std::uintptr_t DoubleProperty = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Int64Property", 0x28, "Int64Property"},
            {"DoubleProperty", 0x30, "DoubleProperty"},
        }};
    };

    struct PCGDuplicateCrossSectionsSettings
    {
        static constexpr std::string_view Name = "PCGDuplicateCrossSectionsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSubdivisionBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bExtrudeVectorAsAttribute = 0x178;
            static constexpr std::uintptr_t ExtrudeVector = 0x180;
            static constexpr std::uintptr_t ExtrudeVectorAttribute = 0x198;
            static constexpr std::uintptr_t bExtraOutputAttributesOnDataDomain = 0x1C8;
            static constexpr std::uintptr_t bOutputSplineIndexAttribute = 0x1C9;
            static constexpr std::uintptr_t SplineIndexAttributeName = 0x1CC;
            static constexpr std::uintptr_t bSilenceGrammarDoesNotFitErrors = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bExtrudeVectorAsAttribute", 0x178, "BoolProperty"},
            {"ExtrudeVector", 0x180, "StructProperty"},
            {"ExtrudeVectorAttribute", 0x198, "StructProperty"},
            {"bExtraOutputAttributesOnDataDomain", 0x1C8, "BoolProperty"},
            {"bOutputSplineIndexAttribute", 0x1C9, "BoolProperty"},
            {"SplineIndexAttributeName", 0x1CC, "NameProperty"},
            {"bSilenceGrammarDoesNotFitErrors", 0x1D0, "BoolProperty"},
        }};
    };

    struct PCGDuplicatePointSettings
    {
        static constexpr std::string_view Name = "PCGDuplicatePointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Iterations = 0xA8;
            static constexpr std::uintptr_t Direction = 0xB0;
            static constexpr std::uintptr_t bDirectionAppliedInRelativeSpace = 0xC8;
            static constexpr std::uintptr_t bOutputSourcePoint = 0xC9;
            static constexpr std::uintptr_t PointTransform = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Iterations", 0xA8, "IntProperty"},
            {"Direction", 0xB0, "StructProperty"},
            {"bDirectionAppliedInRelativeSpace", 0xC8, "BoolProperty"},
            {"bOutputSourcePoint", 0xC9, "BoolProperty"},
            {"PointTransform", 0xD0, "StructProperty"},
        }};
    };

    struct PCGDynamicMeshData
    {
        static constexpr std::string_view Name = "PCGDynamicMeshData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialData";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicMesh = 0x88;
            static constexpr std::uintptr_t Materials = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicMesh", 0x88, "ObjectProperty"},
            {"Materials", 0x90, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "K2_Initialize",
            "SetMaterials",
        }};
    };

    struct PCGDynamicPinContainer
    {
        static constexpr std::string_view Name = "PCGDynamicPinContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PinProperties = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PinProperties", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGDynamicPinsProvider
    {
        static constexpr std::string_view Name = "PCGDynamicPinsProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGEdge
    {
        static constexpr std::string_view Name = "PCGEdge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InboundLabel = 0x28;
            static constexpr std::uintptr_t InboundNode = 0x30;
            static constexpr std::uintptr_t OutboundLabel = 0x38;
            static constexpr std::uintptr_t OutboundNode = 0x40;
            static constexpr std::uintptr_t InputPin = 0x48;
            static constexpr std::uintptr_t OutputPin = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InboundLabel", 0x28, "NameProperty"},
            {"InboundNode", 0x30, "ObjectProperty"},
            {"OutboundLabel", 0x38, "NameProperty"},
            {"OutboundNode", 0x40, "ObjectProperty"},
            {"InputPin", 0x48, "ObjectProperty"},
            {"OutputPin", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetInputNode",
            "GetInputPinLabel",
            "GetOutputNode",
            "GetOutputPinLabel",
        }};
    };

    struct PCGEditPointsSettings
    {
        static constexpr std::string_view Name = "PCGEditPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGElevationIsolinesSettings
    {
        static constexpr std::string_view Name = "PCGElevationIsolinesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ElevationStart = 0xA8;
            static constexpr std::uintptr_t ElevationEnd = 0xB0;
            static constexpr std::uintptr_t ElevationIncrement = 0xB8;
            static constexpr std::uintptr_t Resolution = 0xC0;
            static constexpr std::uintptr_t bAddTagOnOutputForSameElevation = 0xC8;
            static constexpr std::uintptr_t bProjectSurfaceNormal = 0xC9;
            static constexpr std::uintptr_t bOutputAsSpline = 0xCA;
            static constexpr std::uintptr_t bLinearSpline = 0xCB;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ElevationStart", 0xA8, "DoubleProperty"},
            {"ElevationEnd", 0xB0, "DoubleProperty"},
            {"ElevationIncrement", 0xB8, "DoubleProperty"},
            {"Resolution", 0xC0, "DoubleProperty"},
            {"bAddTagOnOutputForSameElevation", 0xC8, "BoolProperty"},
            {"bProjectSurfaceNormal", 0xC9, "BoolProperty"},
            {"bOutputAsSpline", 0xCA, "BoolProperty"},
            {"bLinearSpline", 0xCB, "BoolProperty"},
        }};
    };

    struct PCGEngineSettings
    {
        static constexpr std::string_view Name = "PCGEngineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettingsBackedByCVars";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeScale = 0x30;
            static constexpr std::uintptr_t bGenerateOnDrop = 0x48;
            static constexpr std::uintptr_t bDisplayCullingStateWhenDebugging = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VolumeScale", 0x30, "StructProperty"},
            {"bGenerateOnDrop", 0x48, "BoolProperty"},
            {"bDisplayCullingStateWhenDebugging", 0x49, "BoolProperty"},
        }};
    };

    struct PCGEngineSubsystem
    {
        static constexpr std::string_view Name = "PCGEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGExportSelectedAttributesSettings
    {
        static constexpr std::string_view Name = "PCGExportSelectedAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0xA8;
            static constexpr std::uintptr_t Layout = 0xA9;
            static constexpr std::uintptr_t Path = 0xB0;
            static constexpr std::uintptr_t Filename = 0xC0;
            static constexpr std::uintptr_t bExportAllAttributes = 0xD0;
            static constexpr std::uintptr_t AttributeSelectors = 0xD8;
            static constexpr std::uintptr_t bAddCustomDataVersion = 0xE8;
            static constexpr std::uintptr_t CustomVersion = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Format", 0xA8, "EnumProperty"},
            {"Layout", 0xA9, "EnumProperty"},
            {"Path", 0xB0, "StructProperty"},
            {"Filename", 0xC0, "StrProperty"},
            {"bExportAllAttributes", 0xD0, "BoolProperty"},
            {"AttributeSelectors", 0xD8, "ArrayProperty"},
            {"bAddCustomDataVersion", 0xE8, "BoolProperty"},
            {"CustomVersion", 0xEC, "IntProperty"},
        }};
    };

    struct PCGExportToRayTracingDataInterface
    {
        static constexpr std::string_view Name = "PCGExportToRayTracingDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGRawBufferDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPointsPinLabel = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputPointsPinLabel", 0x90, "NameProperty"},
        }};
    };

    struct PCGExportToRayTracingDataProvider
    {
        static constexpr std::string_view Name = "PCGExportToRayTracingDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGRawBufferDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t DataToUpload = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataToUpload", 0xA8, "ObjectProperty"},
        }};
    };

    struct PCGExportableDataInterface
    {
        static constexpr std::string_view Name = "PCGExportableDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresExport = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresExport", 0x80, "BoolProperty"},
        }};
    };

    struct PCGExportableDataProvider
    {
        static constexpr std::string_view Name = "PCGExportableDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGExternalDataSettings
    {
        static constexpr std::string_view Name = "PCGExternalDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeMapping = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeMapping", 0xA8, "MapProperty"},
        }};
    };

    struct PCGExtractAttributeSettings
    {
        static constexpr std::string_view Name = "PCGExtractAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t Index = 0xD8;
            static constexpr std::uintptr_t OutputAttributeName = 0xE0;
            static constexpr std::uintptr_t bForceOutputAttributeToBeInElementsDomain = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"Index", 0xD8, "IntProperty"},
            {"OutputAttributeName", 0xE0, "StructProperty"},
            {"bForceOutputAttributeToBeInElementsDomain", 0x110, "BoolProperty"},
        }};
    };

    struct PCGExtractMemberFromStructSettings
    {
        static constexpr std::string_view Name = "PCGExtractMemberFromStructSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t bExtractAll = 0xD8;
            static constexpr std::uintptr_t OutputAttributeName = 0xE0;
            static constexpr std::uintptr_t bDeleteSourceAttribute = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"bExtractAll", 0xD8, "BoolProperty"},
            {"OutputAttributeName", 0xE0, "StructProperty"},
            {"bDeleteSourceAttribute", 0x110, "BoolProperty"},
        }};
    };

    struct PCGFilterByAttributeSettings
    {
        static constexpr std::string_view Name = "PCGFilterByAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGFilterDataBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterMode = 0xB0;
            static constexpr std::uintptr_t Attribute = 0xB4;
            static constexpr std::uintptr_t MetadataDomain = 0xB8;
            static constexpr std::uintptr_t Operator = 0xBC;
            static constexpr std::uintptr_t bIgnoreProperties = 0xBD;
            static constexpr std::uintptr_t FilterByValueMode = 0xC0;
            static constexpr std::uintptr_t TargetAttribute = 0xC8;
            static constexpr std::uintptr_t FilterOperator = 0xF8;
            static constexpr std::uintptr_t Threshold = 0x100;
            static constexpr std::uintptr_t MinThreshold = 0x2A0;
            static constexpr std::uintptr_t MaxThreshold = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FilterMode", 0xB0, "EnumProperty"},
            {"Attribute", 0xB4, "NameProperty"},
            {"MetadataDomain", 0xB8, "NameProperty"},
            {"Operator", 0xBC, "EnumProperty"},
            {"bIgnoreProperties", 0xBD, "BoolProperty"},
            {"FilterByValueMode", 0xC0, "EnumProperty"},
            {"TargetAttribute", 0xC8, "StructProperty"},
            {"FilterOperator", 0xF8, "EnumProperty"},
            {"Threshold", 0x100, "StructProperty"},
            {"MinThreshold", 0x2A0, "StructProperty"},
            {"MaxThreshold", 0x450, "StructProperty"},
        }};
    };

    struct PCGFilterByAttributeThresholdSettings
    {
        static constexpr std::string_view Name = "PCGFilterByAttributeThresholdSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseConstantThreshold = 0x0;
            static constexpr std::uintptr_t ThresholdAttribute = 0x8;
            static constexpr std::uintptr_t AttributeTypes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseConstantThreshold", 0x0, "BoolProperty"},
            {"ThresholdAttribute", 0x8, "StructProperty"},
            {"AttributeTypes", 0x40, "StructProperty"},
        }};
    };

    struct PCGFilterByAttributeThresholdSettingsRange
    {
        static constexpr std::string_view Name = "PCGFilterByAttributeThresholdSettingsRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGFilterByAttributeThresholdSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bInclusive = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInclusive", 0x1A0, "BoolProperty"},
        }};
    };

    struct PCGFilterByIndexSettings
    {
        static constexpr std::string_view Name = "PCGFilterByIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGFilterDataBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bInvertFilter = 0xB0;
            static constexpr std::uintptr_t SelectedIndices = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInvertFilter", 0xB0, "BoolProperty"},
            {"SelectedIndices", 0xB8, "StrProperty"},
        }};
    };

    struct PCGFilterByTagSettings
    {
        static constexpr std::string_view Name = "PCGFilterByTagSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGFilterDataBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xB0;
            static constexpr std::uintptr_t Operator = 0xB4;
            static constexpr std::uintptr_t SelectedTags = 0xB8;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0xB0, "EnumProperty"},
            {"Operator", 0xB4, "EnumProperty"},
            {"SelectedTags", 0xB8, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGFilterByTypeSettings
    {
        static constexpr std::string_view Name = "PCGFilterByTypeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGFilterDataBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetType = 0xB0;
            static constexpr std::uintptr_t bShowOutsideFilter = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetType", 0xB0, "StructProperty"},
            {"bShowOutsideFilter", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGFilterDataBaseSettings
    {
        static constexpr std::string_view Name = "PCGFilterDataBaseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableEmptyOutputs = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDisableEmptyOutputs", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGFilterElementsByIndexSettings
    {
        static constexpr std::string_view Name = "PCGFilterElementsByIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bSelectIndicesByInput = 0xA8;
            static constexpr std::uintptr_t IndexSelectionAttribute = 0xB0;
            static constexpr std::uintptr_t SelectedIndices = 0xE0;
            static constexpr std::uintptr_t bOutputDiscardedElements = 0xF0;
            static constexpr std::uintptr_t bInvertFilter = 0xF1;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bSelectIndicesByInput", 0xA8, "BoolProperty"},
            {"IndexSelectionAttribute", 0xB0, "StructProperty"},
            {"SelectedIndices", 0xE0, "StrProperty"},
            {"bOutputDiscardedElements", 0xF0, "BoolProperty"},
            {"bInvertFilter", 0xF1, "BoolProperty"},
        }};
    };

    struct PCGFindClosestPointOnSplineSettings
    {
        static constexpr std::string_view Name = "PCGFindClosestPointOnSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputKeyAttributeName = 0xA8;
            static constexpr std::uintptr_t AlphaAttributeName = 0xAC;
            static constexpr std::uintptr_t LocationAttributeName = 0xB0;
            static constexpr std::uintptr_t bCopyAttributesFromSpline = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputKeyAttributeName", 0xA8, "NameProperty"},
            {"AlphaAttributeName", 0xAC, "NameProperty"},
            {"LocationAttributeName", 0xB0, "NameProperty"},
            {"bCopyAttributesFromSpline", 0xB4, "BoolProperty"},
        }};
    };

    struct PCGFunctionPrototypes
    {
        static constexpr std::string_view Name = "PCGFunctionPrototypes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "PrototypeWithNoParams",
            "PrototypeWithPointAndMetadata",
        }};
    };

    struct PCGGatherSettings
    {
        static constexpr std::string_view Name = "PCGGatherSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsWithDynamicInputs";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicInputPinProperties = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicInputPinProperties", 0xA8, "ArrayProperty"},
        }};
    };

    struct PCGGenSourceBase
    {
        static constexpr std::string_view Name = "PCGGenSourceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGenSourceComponent
    {
        static constexpr std::string_view Name = "PCGGenSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PCGGenSourceEditorCamera
    {
        static constexpr std::string_view Name = "PCGGenSourceEditorCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGenSourcePlayer
    {
        static constexpr std::string_view Name = "PCGGenSourcePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGenSourceWPStreamingSource
    {
        static constexpr std::string_view Name = "PCGGenSourceWPStreamingSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGenerateGraphAsync
    {
        static constexpr std::string_view Name = "PCGGenerateGraphAsync";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t Graph = 0x40;
            static constexpr std::uintptr_t Seed = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"Graph", 0x40, "ObjectProperty"},
            {"Seed", 0x48, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GenerateGraphAsync",
        }};
    };

    struct PCGGenerateGrassMapsSettings
    {
        static constexpr std::string_view Name = "PCGGenerateGrassMapsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGGenerateLandscapeTexturesSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedGrassTypes = 0xA8;
            static constexpr std::uintptr_t bOverrideFromInput = 0xB8;
            static constexpr std::uintptr_t GrassTypesAttribute = 0xC0;
            static constexpr std::uintptr_t bExcludeSelectedGrassTypes = 0xF0;
            static constexpr std::uintptr_t bOutputDataForEachSelectedGrassType = 0xF1;
            static constexpr std::uintptr_t bGenerateHeightMap = 0xF2;
            static constexpr std::uintptr_t bOutputTextureArray = 0xF3;
            static constexpr std::uintptr_t NumLandscapeComponentsGeneratedPerFrame = 0xF4;
            static constexpr std::uintptr_t bTagDataWithLandscapeGrassTypeAssetNames = 0xF8;
            static constexpr std::uintptr_t bSkipReadbackToCPU = 0xF9;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SelectedGrassTypes", 0xA8, "ArrayProperty"},
            {"bOverrideFromInput", 0xB8, "BoolProperty"},
            {"GrassTypesAttribute", 0xC0, "StructProperty"},
            {"bExcludeSelectedGrassTypes", 0xF0, "BoolProperty"},
            {"bOutputDataForEachSelectedGrassType", 0xF1, "BoolProperty"},
            {"bGenerateHeightMap", 0xF2, "BoolProperty"},
            {"bOutputTextureArray", 0xF3, "BoolProperty"},
            {"NumLandscapeComponentsGeneratedPerFrame", 0xF4, "IntProperty"},
            {"bTagDataWithLandscapeGrassTypeAssetNames", 0xF8, "BoolProperty"},
            {"bSkipReadbackToCPU", 0xF9, "BoolProperty"},
        }};
    };

    struct PCGGenerateLandscapeTexturesSettings
    {
        static constexpr std::string_view Name = "PCGGenerateLandscapeTexturesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedGrassTypes = 0xA8;
            static constexpr std::uintptr_t bOverrideFromInput = 0xB8;
            static constexpr std::uintptr_t GrassTypesAttribute = 0xC0;
            static constexpr std::uintptr_t bExcludeSelectedGrassTypes = 0xF0;
            static constexpr std::uintptr_t bOutputDataForEachSelectedGrassType = 0xF1;
            static constexpr std::uintptr_t bGenerateHeightMap = 0xF2;
            static constexpr std::uintptr_t bOutputTextureArray = 0xF3;
            static constexpr std::uintptr_t NumLandscapeComponentsGeneratedPerFrame = 0xF4;
            static constexpr std::uintptr_t bTagDataWithLandscapeGrassTypeAssetNames = 0xF8;
            static constexpr std::uintptr_t bSkipReadbackToCPU = 0xF9;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SelectedGrassTypes", 0xA8, "ArrayProperty"},
            {"bOverrideFromInput", 0xB8, "BoolProperty"},
            {"GrassTypesAttribute", 0xC0, "StructProperty"},
            {"bExcludeSelectedGrassTypes", 0xF0, "BoolProperty"},
            {"bOutputDataForEachSelectedGrassType", 0xF1, "BoolProperty"},
            {"bGenerateHeightMap", 0xF2, "BoolProperty"},
            {"bOutputTextureArray", 0xF3, "BoolProperty"},
            {"NumLandscapeComponentsGeneratedPerFrame", 0xF4, "IntProperty"},
            {"bTagDataWithLandscapeGrassTypeAssetNames", 0xF8, "BoolProperty"},
            {"bSkipReadbackToCPU", 0xF9, "BoolProperty"},
        }};
    };

    struct PCGGenerateSeedSettings
    {
        static constexpr std::string_view Name = "PCGGenerateSeedSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerationSource = 0xA8;
            static constexpr std::uintptr_t SourceString = 0xB0;
            static constexpr std::uintptr_t SeedSource = 0xC0;
            static constexpr std::uintptr_t bResetSeedPerInput = 0xF0;
            static constexpr std::uintptr_t OutputTarget = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GenerationSource", 0xA8, "EnumProperty"},
            {"SourceString", 0xB0, "StrProperty"},
            {"SeedSource", 0xC0, "StructProperty"},
            {"bResetSeedPerInput", 0xF0, "BoolProperty"},
            {"OutputTarget", 0xF8, "StructProperty"},
        }};
    };

    struct PCGGenericUserParameterGetSettings
    {
        static constexpr std::string_view Name = "PCGGenericUserParameterGetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyPath = 0xA8;
            static constexpr std::uintptr_t bSanitizeOutputAttributeName = 0xB8;
            static constexpr std::uintptr_t OutputAttributeName = 0xBC;
            static constexpr std::uintptr_t Source = 0xC0;
            static constexpr std::uintptr_t bQuiet = 0xC1;
            static constexpr std::uintptr_t StructExtractorBehavior = 0xC4;
            static constexpr std::uintptr_t ObjectExtractorBehavior = 0xC8;
            static constexpr std::uintptr_t ContainerExtractorBehavior = 0xCC;
            static constexpr std::uintptr_t bForceObjectAndStructExtraction = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PropertyPath", 0xA8, "StrProperty"},
            {"bSanitizeOutputAttributeName", 0xB8, "BoolProperty"},
            {"OutputAttributeName", 0xBC, "NameProperty"},
            {"Source", 0xC0, "EnumProperty"},
            {"bQuiet", 0xC1, "BoolProperty"},
            {"StructExtractorBehavior", 0xC4, "EnumProperty"},
            {"ObjectExtractorBehavior", 0xC8, "EnumProperty"},
            {"ContainerExtractorBehavior", 0xCC, "EnumProperty"},
            {"bForceObjectAndStructExtraction", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGGetActorDataLayersSettings
    {
        static constexpr std::string_view Name = "PCGGetActorDataLayersSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t DataLayerReferenceAttribute = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorReferenceAttribute", 0xA8, "StructProperty"},
            {"DataLayerReferenceAttribute", 0xD8, "StructProperty"},
        }};
    };

    struct PCGGetActorPropertySettings
    {
        static constexpr std::string_view Name = "PCGGetActorPropertySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t bSelectComponent = 0x110;
            static constexpr std::uintptr_t ComponentClass = 0x118;
            static constexpr std::uintptr_t bProcessAllComponents = 0x120;
            static constexpr std::uintptr_t bOutputComponentReference = 0x121;
            static constexpr std::uintptr_t PropertyName = 0x124;
            static constexpr std::uintptr_t OutputAttributeName = 0x128;
            static constexpr std::uintptr_t bSanitizeOutputAttributeName = 0x158;
            static constexpr std::uintptr_t bOutputActorReference = 0x159;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x15A;
            static constexpr std::uintptr_t StructExtractorBehavior = 0x15C;
            static constexpr std::uintptr_t ObjectExtractorBehavior = 0x160;
            static constexpr std::uintptr_t ContainerExtractorBehavior = 0x164;
            static constexpr std::uintptr_t bForceObjectAndStructExtraction = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"bSelectComponent", 0x110, "BoolProperty"},
            {"ComponentClass", 0x118, "ClassProperty"},
            {"bProcessAllComponents", 0x120, "BoolProperty"},
            {"bOutputComponentReference", 0x121, "BoolProperty"},
            {"PropertyName", 0x124, "NameProperty"},
            {"OutputAttributeName", 0x128, "StructProperty"},
            {"bSanitizeOutputAttributeName", 0x158, "BoolProperty"},
            {"bOutputActorReference", 0x159, "BoolProperty"},
            {"bAlwaysRequeryActors", 0x15A, "BoolProperty"},
            {"StructExtractorBehavior", 0x15C, "EnumProperty"},
            {"ObjectExtractorBehavior", 0x160, "EnumProperty"},
            {"ContainerExtractorBehavior", 0x164, "EnumProperty"},
            {"bForceObjectAndStructExtraction", 0x168, "BoolProperty"},
        }};
    };

    struct PCGGetAssetListSettings
    {
        static constexpr std::string_view Name = "PCGGetAssetListSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetListSource = 0xA8;
            static constexpr std::uintptr_t Directory = 0xB0;
            static constexpr std::uintptr_t Collection = 0xC0;
            static constexpr std::uintptr_t bGetClassPath = 0xC4;
            static constexpr std::uintptr_t bQuiet = 0xC5;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AssetListSource", 0xA8, "EnumProperty"},
            {"Directory", 0xB0, "StructProperty"},
            {"Collection", 0xC0, "NameProperty"},
            {"bGetClassPath", 0xC4, "BoolProperty"},
            {"bQuiet", 0xC5, "BoolProperty"},
        }};
    };

    struct PCGGetAttributesSettings
    {
        static constexpr std::string_view Name = "PCGGetAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bGetType = 0xA8;
            static constexpr std::uintptr_t bGetDefaultValue = 0xA9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bGetType", 0xA8, "BoolProperty"},
            {"bGetDefaultValue", 0xA9, "BoolProperty"},
        }};
    };

    struct PCGGetBoundsSettings
    {
        static constexpr std::string_view Name = "PCGGetBoundsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGGetClassFromAttributeSettings
    {
        static constexpr std::string_view Name = "PCGGetClassFromAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0xA8;
            static constexpr std::uintptr_t OutputTarget = 0xD8;
            static constexpr std::uintptr_t bAlsoOutputClassPath = 0x108;
            static constexpr std::uintptr_t ClassPathOutputTarget = 0x110;
            static constexpr std::uintptr_t bSilenceClassNotFoundWarnings = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InputSource", 0xA8, "StructProperty"},
            {"OutputTarget", 0xD8, "StructProperty"},
            {"bAlsoOutputClassPath", 0x108, "BoolProperty"},
            {"ClassPathOutputTarget", 0x110, "StructProperty"},
            {"bSilenceClassNotFoundWarnings", 0x140, "BoolProperty"},
        }};
    };

    struct PCGGetConsoleVariableSettings
    {
        static constexpr std::string_view Name = "PCGGetConsoleVariableSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsoleVariableName = 0xA8;
            static constexpr std::uintptr_t OutputAttributeName = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConsoleVariableName", 0xA8, "NameProperty"},
            {"OutputAttributeName", 0xAC, "NameProperty"},
        }};
    };

    struct PCGGetEditorCamerasSettings
    {
        static constexpr std::string_view Name = "PCGGetEditorCamerasSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGGetEditorSelectionSettings
    {
        static constexpr std::string_view Name = "PCGGetEditorSelectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSilenceSanitizedAttributeNameWarnings", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGGetExecutionContextSettings
    {
        static constexpr std::string_view Name = "PCGGetExecutionContextSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
        }};
    };

    struct PCGGetLandscapeGrassTypesSettings
    {
        static constexpr std::string_view Name = "PCGGetLandscapeGrassTypesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassNameAttributeName = 0xA8;
            static constexpr std::uintptr_t GrassTypeAttributeName = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GrassNameAttributeName", 0xA8, "NameProperty"},
            {"GrassTypeAttributeName", 0xAC, "NameProperty"},
        }};
    };

    struct PCGGetLandscapeSettings
    {
        static constexpr std::string_view Name = "PCGGetLandscapeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SamplingProperties = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SamplingProperties", 0x178, "StructProperty"},
        }};
    };

    struct PCGGetLoopIndexSettings
    {
        static constexpr std::string_view Name = "PCGGetLoopIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bWarnIfCalledOutsideOfLoop = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWarnIfCalledOutsideOfLoop", 0xA8, "BoolProperty"},
        }};
    };

    struct PCGGetPCGComponentSettings
    {
        static constexpr std::string_view Name = "PCGGetPCGComponentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGGetPrimitiveSettings
    {
        static constexpr std::string_view Name = "PCGGetPrimitiveSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGGetPropertyFromObjectPathSettings
    {
        static constexpr std::string_view Name = "PCGGetPropertyFromObjectPathSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectPathsToExtract = 0xA8;
            static constexpr std::uintptr_t InputSource = 0xB8;
            static constexpr std::uintptr_t PropertyName = 0xE8;
            static constexpr std::uintptr_t OutputAttributeName = 0xF0;
            static constexpr std::uintptr_t bSanitizeOutputAttributeName = 0x120;
            static constexpr std::uintptr_t bSynchronousLoad = 0x121;
            static constexpr std::uintptr_t bPersistAllData = 0x122;
            static constexpr std::uintptr_t bSilenceErrorOnEmptyObjectPath = 0x123;
            static constexpr std::uintptr_t StructExtractorBehavior = 0x124;
            static constexpr std::uintptr_t ObjectExtractorBehavior = 0x128;
            static constexpr std::uintptr_t ContainerExtractorBehavior = 0x12C;
            static constexpr std::uintptr_t bForceObjectAndStructExtraction = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ObjectPathsToExtract", 0xA8, "ArrayProperty"},
            {"InputSource", 0xB8, "StructProperty"},
            {"PropertyName", 0xE8, "NameProperty"},
            {"OutputAttributeName", 0xF0, "StructProperty"},
            {"bSanitizeOutputAttributeName", 0x120, "BoolProperty"},
            {"bSynchronousLoad", 0x121, "BoolProperty"},
            {"bPersistAllData", 0x122, "BoolProperty"},
            {"bSilenceErrorOnEmptyObjectPath", 0x123, "BoolProperty"},
            {"StructExtractorBehavior", 0x124, "EnumProperty"},
            {"ObjectExtractorBehavior", 0x128, "EnumProperty"},
            {"ContainerExtractorBehavior", 0x12C, "EnumProperty"},
            {"bForceObjectAndStructExtraction", 0x130, "BoolProperty"},
        }};
    };

    struct PCGGetResourcePath
    {
        static constexpr std::string_view Name = "PCGGetResourcePath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGGetSegmentSettings
    {
        static constexpr std::string_view Name = "PCGGetSegmentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInputSegmentData = 0xA8;
            static constexpr std::uintptr_t bUseInputHoleData = 0xA9;
            static constexpr std::uintptr_t bOutputSplineData = 0xAA;
            static constexpr std::uintptr_t SegmentIndexAttribute = 0xB0;
            static constexpr std::uintptr_t SegmentIndex = 0xE0;
            static constexpr std::uintptr_t HoleIndexAttribute = 0xE8;
            static constexpr std::uintptr_t HoleIndex = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bUseInputSegmentData", 0xA8, "BoolProperty"},
            {"bUseInputHoleData", 0xA9, "BoolProperty"},
            {"bOutputSplineData", 0xAA, "BoolProperty"},
            {"SegmentIndexAttribute", 0xB0, "StructProperty"},
            {"SegmentIndex", 0xE0, "IntProperty"},
            {"HoleIndexAttribute", 0xE8, "StructProperty"},
            {"HoleIndex", 0x118, "IntProperty"},
        }};
    };

    struct PCGGetSplineControlPointsSettings
    {
        static constexpr std::string_view Name = "PCGGetSplineControlPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ArriveTangentAttributeName = 0xA8;
            static constexpr std::uintptr_t LeaveTangentAttributeName = 0xAC;
            static constexpr std::uintptr_t InterpTypeAttributeName = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArriveTangentAttributeName", 0xA8, "NameProperty"},
            {"LeaveTangentAttributeName", 0xAC, "NameProperty"},
            {"InterpTypeAttributeName", 0xB0, "NameProperty"},
        }};
    };

    struct PCGGetSplineSettings
    {
        static constexpr std::string_view Name = "PCGGetSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGGetStaticMeshResourceDataSettings
    {
        static constexpr std::string_view Name = "PCGGetStaticMeshResourceDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshes = 0xA8;
            static constexpr std::uintptr_t bOverrideFromInput = 0xB8;
            static constexpr std::uintptr_t MeshAttribute = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StaticMeshes", 0xA8, "ArrayProperty"},
            {"bOverrideFromInput", 0xB8, "BoolProperty"},
            {"MeshAttribute", 0xC0, "StructProperty"},
        }};
    };

    struct PCGGetSubgraphDepthSettings
    {
        static constexpr std::string_view Name = "PCGGetSubgraphDepthSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t DistanceRelativeToUpstreamGraph = 0xAC;
            static constexpr std::uintptr_t bQuietInvalidDepthQueries = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"DistanceRelativeToUpstreamGraph", 0xAC, "IntProperty"},
            {"bQuietInvalidDepthQueries", 0xB0, "BoolProperty"},
        }};
    };

    struct PCGGetTagsSettings
    {
        static constexpr std::string_view Name = "PCGGetTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bExtractTagValues = 0xA8;
            static constexpr std::uintptr_t bExtractFullTagStrings = 0xA9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bExtractTagValues", 0xA8, "BoolProperty"},
            {"bExtractFullTagStrings", 0xA9, "BoolProperty"},
        }};
    };

    struct PCGGetTexture2DArrayDataSettings
    {
        static constexpr std::string_view Name = "PCGGetTexture2DArrayDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0xA8;
            static constexpr std::uintptr_t Filter = 0xC8;
            static constexpr std::uintptr_t bSynchronousLoad = 0xC9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Texture", 0xA8, "SoftObjectProperty"},
            {"Filter", 0xC8, "EnumProperty"},
            {"bSynchronousLoad", 0xC9, "BoolProperty"},
        }};
    };

    struct PCGGetTextureInfoSettings
    {
        static constexpr std::string_view Name = "PCGGetTextureInfoSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOutputWidth = 0xA8;
            static constexpr std::uintptr_t WidthAttributeName = 0xAC;
            static constexpr std::uintptr_t bOutputHeight = 0xB0;
            static constexpr std::uintptr_t HeightAttributeName = 0xB4;
            static constexpr std::uintptr_t bOutputNumMips = 0xB8;
            static constexpr std::uintptr_t NumMipsAttributeName = 0xBC;
            static constexpr std::uintptr_t bOutputArraySize = 0xC0;
            static constexpr std::uintptr_t ArraySizeAttributeName = 0xC4;
            static constexpr std::uintptr_t bOutputFormat = 0xC8;
            static constexpr std::uintptr_t FormatAttributeName = 0xCC;
            static constexpr std::uintptr_t bOutputFormatIndex = 0xD0;
            static constexpr std::uintptr_t FormatIndexAttributeName = 0xD4;
            static constexpr std::uintptr_t bOutputComputeFormat = 0xD8;
            static constexpr std::uintptr_t ComputeFormatAttributeName = 0xDC;
            static constexpr std::uintptr_t bOutputComputeFormatIndex = 0xE0;
            static constexpr std::uintptr_t ComputeFormatIndexAttributeName = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bOutputWidth", 0xA8, "BoolProperty"},
            {"WidthAttributeName", 0xAC, "NameProperty"},
            {"bOutputHeight", 0xB0, "BoolProperty"},
            {"HeightAttributeName", 0xB4, "NameProperty"},
            {"bOutputNumMips", 0xB8, "BoolProperty"},
            {"NumMipsAttributeName", 0xBC, "NameProperty"},
            {"bOutputArraySize", 0xC0, "BoolProperty"},
            {"ArraySizeAttributeName", 0xC4, "NameProperty"},
            {"bOutputFormat", 0xC8, "BoolProperty"},
            {"FormatAttributeName", 0xCC, "NameProperty"},
            {"bOutputFormatIndex", 0xD0, "BoolProperty"},
            {"FormatIndexAttributeName", 0xD4, "NameProperty"},
            {"bOutputComputeFormat", 0xD8, "BoolProperty"},
            {"ComputeFormatAttributeName", 0xDC, "NameProperty"},
            {"bOutputComputeFormatIndex", 0xE0, "BoolProperty"},
            {"ComputeFormatIndexAttributeName", 0xE4, "NameProperty"},
        }};
    };

    struct PCGGetVirtualTextureSettings
    {
        static constexpr std::string_view Name = "PCGGetVirtualTextureSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGGetVolumeSettings
    {
        static constexpr std::string_view Name = "PCGGetVolumeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataFromActorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorSelector = 0xA8;
            static constexpr std::uintptr_t ComponentSelector = 0x110;
            static constexpr std::uintptr_t Mode = 0x150;
            static constexpr std::uintptr_t bIgnorePCGGeneratedComponents = 0x151;
            static constexpr std::uintptr_t bAlsoOutputSinglePointData = 0x152;
            static constexpr std::uintptr_t bComponentsMustOverlapSelf = 0x153;
            static constexpr std::uintptr_t bGetDataOnAllGrids = 0x154;
            static constexpr std::uintptr_t AllowedGrids = 0x158;
            static constexpr std::uintptr_t bMergeSinglePointData = 0x15C;
            static constexpr std::uintptr_t ExpectedPins = 0x160;
            static constexpr std::uintptr_t PropertyName = 0x170;
            static constexpr std::uintptr_t bAlwaysRequeryActors = 0x174;
            static constexpr std::uintptr_t bSilenceSanitizedAttributeNameWarnings = 0x175;
            static constexpr std::uintptr_t bSilenceReservedAttributeNameWarnings = 0x176;
            static constexpr std::uintptr_t bDisplayModeSettings = 0x177;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ActorSelector", 0xA8, "StructProperty"},
            {"ComponentSelector", 0x110, "StructProperty"},
            {"Mode", 0x150, "EnumProperty"},
            {"bIgnorePCGGeneratedComponents", 0x151, "BoolProperty"},
            {"bAlsoOutputSinglePointData", 0x152, "BoolProperty"},
            {"bComponentsMustOverlapSelf", 0x153, "BoolProperty"},
            {"bGetDataOnAllGrids", 0x154, "BoolProperty"},
            {"AllowedGrids", 0x158, "IntProperty"},
            {"bMergeSinglePointData", 0x15C, "BoolProperty"},
            {"ExpectedPins", 0x160, "ArrayProperty"},
            {"PropertyName", 0x170, "NameProperty"},
            {"bAlwaysRequeryActors", 0x174, "BoolProperty"},
            {"bSilenceSanitizedAttributeNameWarnings", 0x175, "BoolProperty"},
            {"bSilenceReservedAttributeNameWarnings", 0x176, "BoolProperty"},
            {"bDisplayModeSettings", 0x177, "BoolProperty"},
        }};
    };

    struct PCGGrammarSelection
    {
        static constexpr std::string_view Name = "PCGGrammarSelection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bGrammarAsAttribute = 0x0;
            static constexpr std::uintptr_t GrammarString = 0x8;
            static constexpr std::uintptr_t GrammarAttribute = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bGrammarAsAttribute", 0x0, "BoolProperty"},
            {"GrammarString", 0x8, "StrProperty"},
            {"GrammarAttribute", 0x18, "StructProperty"},
        }};
    };

    struct PCGGraph
    {
        static constexpr std::string_view Name = "PCGGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGGraphInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bLandscapeUsesMetadata = 0x28;
            static constexpr std::uintptr_t Nodes = 0x30;
            static constexpr std::uintptr_t InputNode = 0x40;
            static constexpr std::uintptr_t OutputNode = 0x48;
            static constexpr std::uintptr_t UserParameters = 0x50;
            static constexpr std::uintptr_t EmbeddedSubgraphs = 0x60;
            static constexpr std::uintptr_t bUseHierarchicalGeneration = 0x70;
            static constexpr std::uintptr_t HiGenGridSize = 0x74;
            static constexpr std::uintptr_t HiGenGridSizeMultiplier = 0x78;
            static constexpr std::uintptr_t bUse2DGrid = 0x80;
            static constexpr std::uintptr_t bHasDefaultConstructedInputs = 0x81;
            static constexpr std::uintptr_t ShouldCook = 0x120;
            static constexpr std::uintptr_t CookedCompilationData = 0x138;
            static constexpr std::uintptr_t GenerationRadii = 0x140;
            static constexpr std::uintptr_t bUseActorComponentlessGeneration = 0x388;
            static constexpr std::uintptr_t ConsoleVariablesTriggeringRefresh = 0x390;
            static constexpr std::uintptr_t bAutoRefreshOnRenderStateRefresh = 0x3A0;
            static constexpr std::uintptr_t bAutoRefreshOnQualitySettingsChanged = 0x3A1;
            static constexpr std::uintptr_t bIsEditorOnly = 0x3C8;
            static constexpr std::uintptr_t HiGenExponential = 0x3CC;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"bLandscapeUsesMetadata", 0x28, "BoolProperty"},
            {"Nodes", 0x30, "ArrayProperty"},
            {"InputNode", 0x40, "ObjectProperty"},
            {"OutputNode", 0x48, "ObjectProperty"},
            {"UserParameters", 0x50, "StructProperty"},
            {"EmbeddedSubgraphs", 0x60, "ArrayProperty"},
            {"bUseHierarchicalGeneration", 0x70, "BoolProperty"},
            {"HiGenGridSize", 0x74, "EnumProperty"},
            {"HiGenGridSizeMultiplier", 0x78, "DoubleProperty"},
            {"bUse2DGrid", 0x80, "BoolProperty"},
            {"bHasDefaultConstructedInputs", 0x81, "BoolProperty"},
            {"ShouldCook", 0x120, "StructProperty"},
            {"CookedCompilationData", 0x138, "ObjectProperty"},
            {"GenerationRadii", 0x140, "StructProperty"},
            {"bUseActorComponentlessGeneration", 0x388, "BoolProperty"},
            {"ConsoleVariablesTriggeringRefresh", 0x390, "ArrayProperty"},
            {"bAutoRefreshOnRenderStateRefresh", 0x3A0, "BoolProperty"},
            {"bAutoRefreshOnQualitySettingsChanged", 0x3A1, "BoolProperty"},
            {"bIsEditorOnly", 0x3C8, "BoolProperty"},
            {"HiGenExponential", 0x3CC, "UInt32Property"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "AddEdge",
            "AddNodeCopy",
            "AddNodeInstance",
            "AddNodeOfType",
            "GetAllEdges",
            "GetInputNode",
            "GetOutputNode",
            "IsEmbeddedSubgraph",
            "RemoveEdge",
            "RemoveNode",
            "RemoveNodes",
        }};
    };

    struct PCGGraphAuthoringTestHelperSettings
    {
        static constexpr std::string_view Name = "PCGGraphAuthoringTestHelperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGGraphCommentNodeData
    {
        static constexpr std::string_view Name = "PCGGraphCommentNodeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGraphCompilationData
    {
        static constexpr std::string_view Name = "PCGGraphCompilationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tasks = 0x28;
            static constexpr std::uintptr_t StackContexts = 0x38;
            static constexpr std::uintptr_t ComputeGraphs = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tasks", 0x28, "MapProperty"},
            {"StackContexts", 0x38, "MapProperty"},
            {"ComputeGraphs", 0x48, "MapProperty"},
        }};
    };

    struct PCGGraphDocumentInfo
    {
        static constexpr std::string_view Name = "PCGGraphDocumentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EditedObjectPath = 0x0;
            static constexpr std::uintptr_t SavedViewOffset = 0x18;
            static constexpr std::uintptr_t SavedZoomAmount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EditedObjectPath", 0x0, "StructProperty"},
            {"SavedViewOffset", 0x18, "StructProperty"},
            {"SavedZoomAmount", 0x20, "FloatProperty"},
        }};
    };

    struct PCGGraphEditorCustomization
    {
        static constexpr std::string_view Name = "PCGGraphEditorCustomization";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bFilterNodesByCategory = 0x0;
            static constexpr std::uintptr_t NodeFilterType = 0x4;
            static constexpr std::uintptr_t FilteredCategories = 0x8;
            static constexpr std::uintptr_t bFilterSubgraphs = 0x18;
            static constexpr std::uintptr_t SubgraphFilterType = 0x1C;
            static constexpr std::uintptr_t FilteredSubgraphTypes = 0x20;
            static constexpr std::uintptr_t bFilterSettings = 0x30;
            static constexpr std::uintptr_t SettingsFilterType = 0x34;
            static constexpr std::uintptr_t FilteredSettingsTypes = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bFilterNodesByCategory", 0x0, "BoolProperty"},
            {"NodeFilterType", 0x4, "EnumProperty"},
            {"FilteredCategories", 0x8, "SetProperty"},
            {"bFilterSubgraphs", 0x18, "BoolProperty"},
            {"SubgraphFilterType", 0x1C, "EnumProperty"},
            {"FilteredSubgraphTypes", 0x20, "SetProperty"},
            {"bFilterSettings", 0x30, "BoolProperty"},
            {"SettingsFilterType", 0x34, "EnumProperty"},
            {"FilteredSettingsTypes", 0x38, "ArrayProperty"},
        }};
    };

    struct PCGGraphExecutionSource
    {
        static constexpr std::string_view Name = "PCGGraphExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGGraphInputOutputSettings
    {
        static constexpr std::string_view Name = "PCGGraphInputOutputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Pins = 0xA8;
            static constexpr std::uintptr_t PinLabels = 0xB8;
            static constexpr std::uintptr_t CustomPins = 0xC8;
            static constexpr std::uintptr_t bHasAddedDefaultPin = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Pins", 0xA8, "ArrayProperty"},
            {"PinLabels", 0xB8, "SetProperty"},
            {"CustomPins", 0xC8, "ArrayProperty"},
            {"bHasAddedDefaultPin", 0xD8, "BoolProperty"},
        }};
    };

    struct PCGGraphInstance
    {
        static constexpr std::string_view Name = "PCGGraphInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGGraphInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Graph = 0x28;
            static constexpr std::uintptr_t ParametersOverrides = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Graph", 0x28, "ObjectProperty"},
            {"ParametersOverrides", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GraphAssetFilter",
        }};
    };

    struct PCGGraphInstanceToolDataOverrides
    {
        static constexpr std::string_view Name = "PCGGraphInstanceToolDataOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t ToolTip = 0x10;
            static constexpr std::uintptr_t bIsPreset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"ToolTip", 0x10, "TextProperty"},
            {"bIsPreset", 0x20, "BoolProperty"},
        }};
    };

    struct PCGGraphInterface
    {
        static constexpr std::string_view Name = "PCGGraphInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetConstPCGGraph",
            "GetMutablePCGGraph",
        }};
    };

    struct PCGGraphParametersHelpers
    {
        static constexpr std::string_view Name = "PCGGraphParametersHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 41> FunctionNames{{
            "GetBoolParameter",
            "GetByteParameter",
            "GetClassParameter",
            "GetDoubleParameter",
            "GetEnumParameter",
            "GetFloatParameter",
            "GetInt32Parameter",
            "GetInt64Parameter",
            "GetNameParameter",
            "GetObjectParameter",
            "GetQuaternionParameter",
            "GetRotatorParameter",
            "GetSoftClassParameter",
            "GetSoftObjectParameter",
            "GetSoftObjectPathParameter",
            "GetStringParameter",
            "GetTransformParameter",
            "GetVector2DParameter",
            "GetVector4Parameter",
            "GetVectorParameter",
            "IsOverridden",
            "SetBoolParameter",
            "SetByteParameter",
            "SetClassParameter",
            "SetDoubleParameter",
            "SetEnumParameter",
            "SetFloatParameter",
            "SetInt32Parameter",
            "SetInt64Parameter",
            "SetNameParameter",
            "SetObjectParameter",
            "SetQuaternionParameter",
            "SetRotatorParameter",
            "SetSoftClassParameter",
            "SetSoftObjectParameter",
            "SetSoftObjectPathParameter",
            "SetStringParameter",
            "SetTransformParameter",
            "SetVector2DParameter",
            "SetVector4Parameter",
            "SetVectorParameter",
        }};
    };

    struct PCGGraphTask
    {
        static constexpr std::string_view Name = "PCGGraphTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Inputs = 0x0;
            static constexpr std::uintptr_t ElementSource = 0x10;
            static constexpr std::uintptr_t NodePtr = 0x18;
            static constexpr std::uintptr_t CookedSettings = 0x38;
            static constexpr std::uintptr_t NodeId = 0x40;
            static constexpr std::uintptr_t CompiledTaskId = 0x48;
            static constexpr std::uintptr_t ParentId = 0x50;
            static constexpr std::uintptr_t PinDependency = 0x58;
            static constexpr std::uintptr_t StackIndex = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Inputs", 0x0, "ArrayProperty"},
            {"ElementSource", 0x10, "EnumProperty"},
            {"NodePtr", 0x18, "SoftObjectProperty"},
            {"CookedSettings", 0x38, "ObjectProperty"},
            {"NodeId", 0x40, "UInt64Property"},
            {"CompiledTaskId", 0x48, "UInt64Property"},
            {"ParentId", 0x50, "UInt64Property"},
            {"PinDependency", 0x58, "StructProperty"},
            {"StackIndex", 0x68, "IntProperty"},
        }};
    };

    struct PCGGraphTaskInput
    {
        static constexpr std::string_view Name = "PCGGraphTaskInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TaskID = 0x0;
            static constexpr std::uintptr_t UpstreamPin = 0x8;
            static constexpr std::uintptr_t DownstreamPin = 0x38;
            static constexpr std::uintptr_t bProvideData = 0x68;
            static constexpr std::uintptr_t bIsUsedMultipleTimes = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TaskID", 0x0, "UInt64Property"},
            {"UpstreamPin", 0x8, "OptionalProperty"},
            {"DownstreamPin", 0x38, "OptionalProperty"},
            {"bProvideData", 0x68, "BoolProperty"},
            {"bIsUsedMultipleTimes", 0x69, "BoolProperty"},
        }};
    };

    struct PCGGraphTasks
    {
        static constexpr std::string_view Name = "PCGGraphTasks";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphTasks = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GraphTasks", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGGraphToolData
    {
        static constexpr std::string_view Name = "PCGGraphToolData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t ToolTip = 0x18;
            static constexpr std::uintptr_t CompatibleToolTags = 0x28;
            static constexpr std::uintptr_t InitialActorClassToSpawn = 0x38;
            static constexpr std::uintptr_t NewActorLabel = 0x40;
            static constexpr std::uintptr_t bIsPreset = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayName", 0x8, "TextProperty"},
            {"ToolTip", 0x18, "TextProperty"},
            {"CompatibleToolTags", 0x28, "ArrayProperty"},
            {"InitialActorClassToSpawn", 0x38, "ClassProperty"},
            {"NewActorLabel", 0x40, "NameProperty"},
            {"bIsPreset", 0x44, "BoolProperty"},
        }};
    };

    struct PCGGridCellDescriptor
    {
        static constexpr std::string_view Name = "PCGGridCellDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x0;
            static constexpr std::uintptr_t GridCoords = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Descriptor", 0x0, "StructProperty"},
            {"GridCoords", 0x14, "StructProperty"},
        }};
    };

    struct PCGGridDescriptor
    {
        static constexpr std::string_view Name = "PCGGridDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x0;
            static constexpr std::uintptr_t bIs2DGrid = 0x4;
            static constexpr std::uintptr_t bIsRuntime = 0x5;
            static constexpr std::uintptr_t RuntimeHash = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GridSize", 0x0, "UInt32Property"},
            {"bIs2DGrid", 0x4, "BoolProperty"},
            {"bIsRuntime", 0x5, "BoolProperty"},
            {"RuntimeHash", 0x8, "UInt32Property"},
        }};
    };

    struct PCGGridLinkageSettings
    {
        static constexpr std::string_view Name = "PCGGridLinkageSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t FromGrid = 0xA8;
            static constexpr std::uintptr_t ToGrid = 0xAC;
            static constexpr std::uintptr_t GenerationGrid = 0xB0;
            static constexpr std::uintptr_t ResourceKey = 0xB8;
            static constexpr std::uintptr_t UpstreamPin = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FromGrid", 0xA8, "UInt32Property"},
            {"ToGrid", 0xAC, "UInt32Property"},
            {"GenerationGrid", 0xB0, "UInt32Property"},
            {"ResourceKey", 0xB8, "StrProperty"},
            {"UpstreamPin", 0xC8, "SoftObjectProperty"},
        }};
    };

    struct PCGHLODSettings
    {
        static constexpr std::string_view Name = "PCGHLODSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HLODSourceType = 0x0;
            static constexpr std::uintptr_t HLODLayer = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HLODSourceType", 0x0, "EnumProperty"},
            {"HLODLayer", 0x8, "ObjectProperty"},
        }};
    };

    struct PCGHashAttributeSettings
    {
        static constexpr std::string_view Name = "PCGHashAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource1 = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputSource1", 0x108, "StructProperty"},
        }};
    };

    struct PCGHashTableDataInterface
    {
        static constexpr std::string_view Name = "PCGHashTableDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGRawBufferDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresZeroInitialization = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresZeroInitialization", 0x88, "BoolProperty"},
        }};
    };

    struct PCGHiGenGridSizeSettings
    {
        static constexpr std::string_view Name = "PCGHiGenGridSizeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t HiGenGridSize = 0xA8;
            static constexpr std::uintptr_t bShowInputPin = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HiGenGridSize", 0xA8, "EnumProperty"},
            {"bShowInputPin", 0xAC, "BoolProperty"},
        }};
    };

    struct PCGIndirectionSettings
    {
        static constexpr std::string_view Name = "PCGIndirectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyInterfaceMode = 0xA8;
            static constexpr std::uintptr_t SettingsClass = 0xB0;
            static constexpr std::uintptr_t BlueprintElementClass = 0xB8;
            static constexpr std::uintptr_t Settings = 0xC0;
            static constexpr std::uintptr_t bTagOutputsBasedOnOutputPins = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProxyInterfaceMode", 0xA8, "EnumProperty"},
            {"SettingsClass", 0xB0, "ClassProperty"},
            {"BlueprintElementClass", 0xB8, "ClassProperty"},
            {"Settings", 0xC0, "ObjectProperty"},
            {"bTagOutputsBasedOnOutputPins", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGInitializeFromDataParams
    {
        static constexpr std::string_view Name = "PCGInitializeFromDataParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t SourceOverride = 0x8;
            static constexpr std::uintptr_t bInheritMetadata = 0x10;
            static constexpr std::uintptr_t bInheritAttributes = 0x11;
            static constexpr std::uintptr_t bInheritSpatialData = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Source", 0x0, "ObjectProperty"},
            {"SourceOverride", 0x8, "ObjectProperty"},
            {"bInheritMetadata", 0x10, "BoolProperty"},
            {"bInheritAttributes", 0x11, "BoolProperty"},
            {"bInheritSpatialData", 0x12, "BoolProperty"},
        }};
    };

    struct PCGInlineConstantState
    {
        static constexpr std::string_view Name = "PCGInlineConstantState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValueMap = 0x0;
            static constexpr std::uintptr_t DefaultValues = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValueMap", 0x0, "MapProperty"},
            {"DefaultValues", 0x10, "StructProperty"},
        }};
    };

    struct PCGInnerIntersectionSettings
    {
        static constexpr std::string_view Name = "PCGInnerIntersectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DensityFunction = 0xA8;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0xA9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DensityFunction", 0xA8, "EnumProperty"},
            {"bKeepZeroDensityPoints", 0xA9, "BoolProperty"},
        }};
    };

    struct PCGInstanceDataInterface
    {
        static constexpr std::string_view Name = "PCGInstanceDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t InputPinProvidingData = 0x80;
            static constexpr std::uintptr_t CullingCellExtent = 0x84;
            static constexpr std::uintptr_t bWritesSkinningData = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputPinProvidingData", 0x80, "NameProperty"},
            {"CullingCellExtent", 0x84, "IntProperty"},
            {"bWritesSkinningData", 0x88, "BoolProperty"},
        }};
    };

    struct PCGInstanceDataPackerBase
    {
        static constexpr std::string_view Name = "PCGInstanceDataPackerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddTypeToPacking",
            "PackCustomDataFromAttributes",
            "PackInstances",
        }};
    };

    struct PCGInstanceDataPackerByAttribute
    {
        static constexpr std::string_view Name = "PCGInstanceDataPackerByAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGInstanceDataPackerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeSelectors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeSelectors", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGInstanceDataPackerByRegex
    {
        static constexpr std::string_view Name = "PCGInstanceDataPackerByRegex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGInstanceDataPackerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RegexPatterns = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegexPatterns", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGInstanceDataProvider
    {
        static constexpr std::string_view Name = "PCGInstanceDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGInteractiveToolDataContainer
    {
        static constexpr std::string_view Name = "PCGInteractiveToolDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ToolData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ToolData", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingBaseData
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingBaseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorkingDataIdentifier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorkingDataIdentifier", 0x8, "NameProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingData
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorkingDataIdentifier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorkingDataIdentifier", 0x8, "NameProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingDataContext
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingDataContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGInteractiveToolWorkingDataGeneratedResources
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingDataGeneratedResources";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGInteractiveToolWorkingData_Actors
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData_Actors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingData";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedActorsData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectedActorsData", 0x10, "ObjectProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingData_PointArrayData
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData_PointArrayData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingData";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedPointData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedPointData", 0x10, "ObjectProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingData_Spline
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData_Spline";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingData";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplineComponent", 0x10, "SoftObjectProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingData_SplineSurface
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData_SplineSurface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingData_Spline";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplineComponent", 0x10, "SoftObjectProperty"},
        }};
    };

    struct PCGInteractiveToolWorkingData_Volume
    {
        static constexpr std::string_view Name = "PCGInteractiveToolWorkingData_Volume";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGInteractiveToolWorkingData";
        struct Offsets
        {
            static constexpr std::uintptr_t Volume = 0x10;
            static constexpr std::uintptr_t BrushComponent = 0x18;
            static constexpr std::uintptr_t BoxComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Volume", 0x10, "ObjectProperty"},
            {"BrushComponent", 0x18, "SoftObjectProperty"},
            {"BoxComponent", 0x38, "SoftObjectProperty"},
        }};
    };

    struct PCGIntersectionData
    {
        static constexpr std::string_view Name = "PCGIntersectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t DensityFunction = 0xE0;
            static constexpr std::uintptr_t A = 0xE8;
            static constexpr std::uintptr_t B = 0xF0;
            static constexpr std::uintptr_t CachedBounds = 0xF8;
            static constexpr std::uintptr_t CachedStrictBounds = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DensityFunction", 0xE0, "EnumProperty"},
            {"A", 0xE8, "ObjectProperty"},
            {"B", 0xF0, "ObjectProperty"},
            {"CachedBounds", 0xF8, "StructProperty"},
            {"CachedStrictBounds", 0x130, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Initialize",
        }};
    };

    struct PCGIsolatedActor
    {
        static constexpr std::string_view Name = "PCGIsolatedActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x278;
            static constexpr std::uintptr_t origin = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0x278, "StructProperty"},
            {"origin", 0x2A8, "SoftObjectProperty"},
        }};
    };

    struct PCGKernelAttributeKey
    {
        static constexpr std::string_view Name = "PCGKernelAttributeKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x0;
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t Name = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Identifier", 0x0, "StructProperty"},
            {"Type", 0x10, "EnumProperty"},
            {"Name", 0x18, "StructProperty"},
        }};
    };

    struct PCGKernelAttributeKeyList
    {
        static constexpr std::string_view Name = "PCGKernelAttributeKeyList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Keys = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Keys", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGKernelAttributeTable
    {
        static constexpr std::string_view Name = "PCGKernelAttributeTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeTable = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeTable", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGKernelLogEntry
    {
        static constexpr std::string_view Name = "PCGKernelLogEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Message = 0x0;
            static constexpr std::uintptr_t Verbosity = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Message", 0x0, "TextProperty"},
            {"Verbosity", 0x10, "EnumProperty"},
        }};
    };

    struct PCGKernelOverridableParam
    {
        static constexpr std::string_view Name = "PCGKernelOverridableParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t PropertiesNames = 0x8;
            static constexpr std::uintptr_t bRequiresGPUReadback = 0x18;
            static constexpr std::uintptr_t bIsPropertyOverriddenByPin = 0x19;
            static constexpr std::uintptr_t UnderlyingType = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Label", 0x0, "NameProperty"},
            {"PropertiesNames", 0x8, "ArrayProperty"},
            {"bRequiresGPUReadback", 0x18, "BoolProperty"},
            {"bIsPropertyOverriddenByPin", 0x19, "BoolProperty"},
            {"UnderlyingType", 0x1A, "EnumProperty"},
        }};
    };

    struct PCGKernelParamsDataInterface
    {
        static constexpr std::string_view Name = "PCGKernelParamsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGKernelParamsDataProvider
    {
        static constexpr std::string_view Name = "PCGKernelParamsDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGKernelPin
    {
        static constexpr std::string_view Name = "PCGKernelPin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelIndex = 0x0;
            static constexpr std::uintptr_t PinLabel = 0x4;
            static constexpr std::uintptr_t bIsInput = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KernelIndex", 0x0, "IntProperty"},
            {"PinLabel", 0x4, "NameProperty"},
            {"bIsInput", 0x8, "BoolProperty"},
        }};
    };

    struct PCGLandscapeCache
    {
        static constexpr std::string_view Name = "PCGLandscapeCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SerializationMode = 0x28;
            static constexpr std::uintptr_t CookedSerializedContents = 0x29;
            static constexpr std::uintptr_t CachedLayerNames = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SerializationMode", 0x28, "EnumProperty"},
            {"CookedSerializedContents", 0x29, "EnumProperty"},
            {"CachedLayerNames", 0x40, "SetProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ClearCache",
            "PrimeCache",
        }};
    };

    struct PCGLandscapeData
    {
        static constexpr std::string_view Name = "PCGLandscapeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t Landscapes = 0x180;
            static constexpr std::uintptr_t Bounds = 0x190;
            static constexpr std::uintptr_t DataProps = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Landscapes", 0x180, "ArrayProperty"},
            {"Bounds", 0x190, "StructProperty"},
            {"DataProps", 0x1C8, "StructProperty"},
        }};
    };

    struct PCGLandscapeDataInterface
    {
        static constexpr std::string_view Name = "PCGLandscapeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGLandscapeDataProps
    {
        static constexpr std::string_view Name = "PCGLandscapeDataProps";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bGetHeightOnly = 0x0;
            static constexpr std::uintptr_t bGetLayerWeights = 0x1;
            static constexpr std::uintptr_t bGetActorReference = 0x2;
            static constexpr std::uintptr_t bGetPhysicalMaterial = 0x3;
            static constexpr std::uintptr_t bGetComponentCoordinates = 0x4;
            static constexpr std::uintptr_t bSampleVirtualTextures = 0x5;
            static constexpr std::uintptr_t bSampleVirtualTextureNormals = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bGetHeightOnly", 0x0, "BoolProperty"},
            {"bGetLayerWeights", 0x1, "BoolProperty"},
            {"bGetActorReference", 0x2, "BoolProperty"},
            {"bGetPhysicalMaterial", 0x3, "BoolProperty"},
            {"bGetComponentCoordinates", 0x4, "BoolProperty"},
            {"bSampleVirtualTextures", 0x5, "BoolProperty"},
            {"bSampleVirtualTextureNormals", 0x6, "BoolProperty"},
        }};
    };

    struct PCGLandscapeDataProvider
    {
        static constexpr std::string_view Name = "PCGLandscapeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseColorVirtualTexture = 0x68;
            static constexpr std::uintptr_t HeightVirtualTexture = 0x70;
            static constexpr std::uintptr_t NormalVirtualTexture = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BaseColorVirtualTexture", 0x68, "ObjectProperty"},
            {"HeightVirtualTexture", 0x70, "ObjectProperty"},
            {"NormalVirtualTexture", 0x78, "ObjectProperty"},
        }};
    };

    struct PCGLandscapeLayerWeight
    {
        static constexpr std::string_view Name = "PCGLandscapeLayerWeight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Weight = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Weight", 0x4, "FloatProperty"},
        }};
    };

    struct PCGLandscapeSplineData
    {
        static constexpr std::string_view Name = "PCGLandscapeSplineData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGPolyLineData";
        struct Offsets
        {
            static constexpr std::uintptr_t Spline = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Spline", 0xE0, "WeakObjectProperty"},
        }};
    };

    struct PCGLoadDataAssetSettings
    {
        static constexpr std::string_view Name = "PCGLoadDataAssetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0xA8;
            static constexpr std::uintptr_t Pins = 0xC8;
            static constexpr std::uintptr_t AssetName = 0xD8;
            static constexpr std::uintptr_t bLoadFromInput = 0xE8;
            static constexpr std::uintptr_t AssetReferenceSelector = 0xF0;
            static constexpr std::uintptr_t InputIndexTag = 0x120;
            static constexpr std::uintptr_t DataIndexTag = 0x124;
            static constexpr std::uintptr_t bSetDefaultAttributeOverridesFromInput = 0x128;
            static constexpr std::uintptr_t DefaultAttributeOverrides = 0x130;
            static constexpr std::uintptr_t CommaSeparatedDefaultAttributeOverrides = 0x140;
            static constexpr std::uintptr_t bWarnIfNoAsset = 0x150;
            static constexpr std::uintptr_t bTagOutputsBasedOnOutputPins = 0x151;
            static constexpr std::uintptr_t bSynchronousLoad = 0x152;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Asset", 0xA8, "SoftObjectProperty"},
            {"Pins", 0xC8, "ArrayProperty"},
            {"AssetName", 0xD8, "StrProperty"},
            {"bLoadFromInput", 0xE8, "BoolProperty"},
            {"AssetReferenceSelector", 0xF0, "StructProperty"},
            {"InputIndexTag", 0x120, "NameProperty"},
            {"DataIndexTag", 0x124, "NameProperty"},
            {"bSetDefaultAttributeOverridesFromInput", 0x128, "BoolProperty"},
            {"DefaultAttributeOverrides", 0x130, "ArrayProperty"},
            {"CommaSeparatedDefaultAttributeOverrides", 0x140, "StrProperty"},
            {"bWarnIfNoAsset", 0x150, "BoolProperty"},
            {"bTagOutputsBasedOnOutputPins", 0x151, "BoolProperty"},
            {"bSynchronousLoad", 0x152, "BoolProperty"},
        }};
    };

    struct PCGLoadDataTableSettings
    {
        static constexpr std::string_view Name = "PCGLoadDataTableSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExternalDataSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DataTable = 0xB8;
            static constexpr std::uintptr_t OutputType = 0xD8;
            static constexpr std::uintptr_t bSynchronousLoad = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataTable", 0xB8, "SoftObjectProperty"},
            {"OutputType", 0xD8, "EnumProperty"},
            {"bSynchronousLoad", 0xD9, "BoolProperty"},
        }};
    };

    struct PCGLoopSettings
    {
        static constexpr std::string_view Name = "PCGLoopSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSubgraphSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseGraphDefaultPinUsage = 0xB8;
            static constexpr std::uintptr_t LoopPins = 0xC0;
            static constexpr std::uintptr_t FeedbackPins = 0xD0;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseGraphDefaultPinUsage", 0xB8, "BoolProperty"},
            {"LoopPins", 0xC0, "StrProperty"},
            {"FeedbackPins", 0xD0, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xE0, "BoolProperty"},
        }};
    };

    struct PCGMakeConcreteSettings
    {
        static constexpr std::string_view Name = "PCGMakeConcreteSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGManagedActors
    {
        static constexpr std::string_view Name = "PCGManagedActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedResource";
        struct Offsets
        {
            static constexpr std::uintptr_t bSupportsReset = 0x38;
            static constexpr std::uintptr_t GeneratedActors = 0x40;
            static constexpr std::uintptr_t GeneratedActorsArray = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSupportsReset", 0x38, "BoolProperty"},
            {"GeneratedActors", 0x40, "SetProperty"},
            {"GeneratedActorsArray", 0x50, "ArrayProperty"},
        }};
    };

    struct PCGManagedComponent
    {
        static constexpr std::string_view Name = "PCGManagedComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedComponent", 0x38, "SoftObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetGeneratedComponentFromBP",
        }};
    };

    struct PCGManagedComponentBase
    {
        static constexpr std::string_view Name = "PCGManagedComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedResource";
        struct Offsets
        {
            static constexpr std::uintptr_t Crc = 0x28;
            static constexpr std::uintptr_t bIsMarkedUnused = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Crc", 0x28, "StructProperty"},
            {"bIsMarkedUnused", 0x30, "BoolProperty"},
        }};
    };

    struct PCGManagedComponentDefaultList
    {
        static constexpr std::string_view Name = "PCGManagedComponentDefaultList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponentList";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedComponents = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedComponents", 0x38, "ArrayProperty"},
        }};
    };

    struct PCGManagedComponentList
    {
        static constexpr std::string_view Name = "PCGManagedComponentList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedComponents = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedComponents", 0x38, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetGeneratedComponentsFromBP",
        }};
    };

    struct PCGManagedDebugDrawComponent
    {
        static constexpr std::string_view Name = "PCGManagedDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedComponent", 0x38, "SoftObjectProperty"},
        }};
    };

    struct PCGManagedDebugStringMessageKey
    {
        static constexpr std::string_view Name = "PCGManagedDebugStringMessageKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedResource";
        struct Offsets
        {
            static constexpr std::uintptr_t HashKey = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HashKey", 0x38, "UInt64Property"},
        }};
    };

    struct PCGManagedISKMComponent
    {
        static constexpr std::string_view Name = "PCGManagedISKMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedInstancedMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasDescriptor = 0x70;
            static constexpr std::uintptr_t Descriptor = 0x78;
            static constexpr std::uintptr_t bHasRootLocation = 0x2C8;
            static constexpr std::uintptr_t RootLocation = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bHasDescriptor", 0x70, "BoolProperty"},
            {"Descriptor", 0x78, "StructProperty"},
            {"bHasRootLocation", 0x2C8, "BoolProperty"},
            {"RootLocation", 0x2D0, "StructProperty"},
        }};
    };

    struct PCGManagedISMComponent
    {
        static constexpr std::string_view Name = "PCGManagedISMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedInstancedMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasDescriptor = 0x70;
            static constexpr std::uintptr_t Descriptor = 0x80;
            static constexpr std::uintptr_t bHasRootLocation = 0x330;
            static constexpr std::uintptr_t RootLocation = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bHasDescriptor", 0x70, "BoolProperty"},
            {"Descriptor", 0x80, "StructProperty"},
            {"bHasRootLocation", 0x330, "BoolProperty"},
            {"RootLocation", 0x338, "StructProperty"},
        }};
    };

    struct PCGManagedInstancedMeshComponent
    {
        static constexpr std::string_view Name = "PCGManagedInstancedMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsCrc = 0x58;
            static constexpr std::uintptr_t DataCrc = 0x60;
            static constexpr std::uintptr_t CrcReuseCount = 0x68;
            static constexpr std::uintptr_t DataCrcReuseCount = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SettingsCrc", 0x58, "StructProperty"},
            {"DataCrc", 0x60, "StructProperty"},
            {"CrcReuseCount", 0x68, "IntProperty"},
            {"DataCrcReuseCount", 0x6C, "IntProperty"},
        }};
    };

    struct PCGManagedProceduralISKMComponent
    {
        static constexpr std::string_view Name = "PCGManagedProceduralISKMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x58;
            static constexpr std::uintptr_t bHasRootLocation = 0x2F8;
            static constexpr std::uintptr_t RootLocation = 0x300;
            static constexpr std::uintptr_t SettingsUID = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Descriptor", 0x58, "StructProperty"},
            {"bHasRootLocation", 0x2F8, "BoolProperty"},
            {"RootLocation", 0x300, "StructProperty"},
            {"SettingsUID", 0x318, "UInt64Property"},
        }};
    };

    struct PCGManagedProceduralISMComponent
    {
        static constexpr std::string_view Name = "PCGManagedProceduralISMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x58;
            static constexpr std::uintptr_t bHasRootLocation = 0x138;
            static constexpr std::uintptr_t RootLocation = 0x140;
            static constexpr std::uintptr_t SettingsUID = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Descriptor", 0x58, "StructProperty"},
            {"bHasRootLocation", 0x138, "BoolProperty"},
            {"RootLocation", 0x140, "StructProperty"},
            {"SettingsUID", 0x158, "UInt64Property"},
        }};
    };

    struct PCGManagedResource
    {
        static constexpr std::string_view Name = "PCGManagedResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Crc = 0x28;
            static constexpr std::uintptr_t bIsMarkedUnused = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Crc", 0x28, "StructProperty"},
            {"bIsMarkedUnused", 0x30, "BoolProperty"},
        }};
    };

    struct PCGManagedResourceContainer
    {
        static constexpr std::string_view Name = "PCGManagedResourceContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedResources = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedResources", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGManagedSplineMeshComponent
    {
        static constexpr std::string_view Name = "PCGManagedSplineMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x58;
            static constexpr std::uintptr_t SplineMeshParams = 0x288;
            static constexpr std::uintptr_t SettingsCrc = 0x370;
            static constexpr std::uintptr_t CachedGeneratedComponent = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Descriptor", 0x58, "StructProperty"},
            {"SplineMeshParams", 0x288, "StructProperty"},
            {"SettingsCrc", 0x370, "StructProperty"},
            {"CachedGeneratedComponent", 0x378, "WeakObjectProperty"},
        }};
    };

    struct PCGMatchAndSetAttributesSettings
    {
        static constexpr std::string_view Name = "PCGMatchAndSetAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bMatchAttributes = 0xA8;
            static constexpr std::uintptr_t InputAttribute = 0xB0;
            static constexpr std::uintptr_t MatchAttribute = 0xE0;
            static constexpr std::uintptr_t bKeepUnmatched = 0x110;
            static constexpr std::uintptr_t bFindNearest = 0x111;
            static constexpr std::uintptr_t MaxDistanceMode = 0x114;
            static constexpr std::uintptr_t MaxDistanceForNearestMatch = 0x120;
            static constexpr std::uintptr_t MaxDistanceInputAttribute = 0x280;
            static constexpr std::uintptr_t bUseInputWeightAttribute = 0x2B0;
            static constexpr std::uintptr_t InputWeightAttribute = 0x2B8;
            static constexpr std::uintptr_t bUseWeightAttribute = 0x2E8;
            static constexpr std::uintptr_t WeightAttribute = 0x2F0;
            static constexpr std::uintptr_t bWarnIfNoMatchData = 0x320;
            static constexpr std::uintptr_t bWarnOnAttributeCast = 0x321;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bMatchAttributes", 0xA8, "BoolProperty"},
            {"InputAttribute", 0xB0, "StructProperty"},
            {"MatchAttribute", 0xE0, "StructProperty"},
            {"bKeepUnmatched", 0x110, "BoolProperty"},
            {"bFindNearest", 0x111, "BoolProperty"},
            {"MaxDistanceMode", 0x114, "EnumProperty"},
            {"MaxDistanceForNearestMatch", 0x120, "StructProperty"},
            {"MaxDistanceInputAttribute", 0x280, "StructProperty"},
            {"bUseInputWeightAttribute", 0x2B0, "BoolProperty"},
            {"InputWeightAttribute", 0x2B8, "StructProperty"},
            {"bUseWeightAttribute", 0x2E8, "BoolProperty"},
            {"WeightAttribute", 0x2F0, "StructProperty"},
            {"bWarnIfNoMatchData", 0x320, "BoolProperty"},
            {"bWarnOnAttributeCast", 0x321, "BoolProperty"},
        }};
    };

    struct PCGMatchAndSetBase
    {
        static constexpr std::string_view Name = "PCGMatchAndSetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x28;
            static constexpr std::uintptr_t StringMode = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x28, "EnumProperty"},
            {"StringMode", 0x2C, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "MatchAndSet",
            "ValidatePreconditions",
        }};
    };

    struct PCGMatchAndSetByAttribute
    {
        static constexpr std::string_view Name = "PCGMatchAndSetByAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMatchAndSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchSourceAttribute = 0x30;
            static constexpr std::uintptr_t MatchSourceType = 0x34;
            static constexpr std::uintptr_t MatchSourceStringMode = 0x38;
            static constexpr std::uintptr_t Entries = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MatchSourceAttribute", 0x30, "NameProperty"},
            {"MatchSourceType", 0x34, "EnumProperty"},
            {"MatchSourceStringMode", 0x38, "EnumProperty"},
            {"Entries", 0x40, "ArrayProperty"},
        }};
    };

    struct PCGMatchAndSetByAttributeEntry
    {
        static constexpr std::string_view Name = "PCGMatchAndSetByAttributeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueToMatch = 0x0;
            static constexpr std::uintptr_t Value = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ValueToMatch", 0x0, "StructProperty"},
            {"Value", 0x160, "StructProperty"},
        }};
    };

    struct PCGMatchAndSetWeighted
    {
        static constexpr std::string_view Name = "PCGMatchAndSetWeighted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMatchAndSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x30;
            static constexpr std::uintptr_t bShouldMutateSeed = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x30, "ArrayProperty"},
            {"bShouldMutateSeed", 0x40, "BoolProperty"},
        }};
    };

    struct PCGMatchAndSetWeightedByCategory
    {
        static constexpr std::string_view Name = "PCGMatchAndSetWeightedByCategory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMatchAndSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryAttribute = 0x30;
            static constexpr std::uintptr_t CategoryType = 0x34;
            static constexpr std::uintptr_t CategoryStringMode = 0x38;
            static constexpr std::uintptr_t Categories = 0x40;
            static constexpr std::uintptr_t bShouldMutateSeed = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CategoryAttribute", 0x30, "NameProperty"},
            {"CategoryType", 0x34, "EnumProperty"},
            {"CategoryStringMode", 0x38, "EnumProperty"},
            {"Categories", 0x40, "ArrayProperty"},
            {"bShouldMutateSeed", 0x50, "BoolProperty"},
        }};
    };

    struct PCGMatchAndSetWeightedByCategoryEntryList
    {
        static constexpr std::string_view Name = "PCGMatchAndSetWeightedByCategoryEntryList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryValue = 0x0;
            static constexpr std::uintptr_t bIsDefault = 0x160;
            static constexpr std::uintptr_t WeightedEntries = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CategoryValue", 0x0, "StructProperty"},
            {"bIsDefault", 0x160, "BoolProperty"},
            {"WeightedEntries", 0x168, "ArrayProperty"},
        }};
    };

    struct PCGMatchAndSetWeightedEntry
    {
        static constexpr std::string_view Name = "PCGMatchAndSetWeightedEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Weight = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"Weight", 0x160, "IntProperty"},
        }};
    };

    struct PCGMergeAttributesSettings
    {
        static constexpr std::string_view Name = "PCGMergeAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsWithDynamicInputs";
        struct Offsets
        {
            static constexpr std::uintptr_t MergeTagsMode = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MergeTagsMode", 0xB8, "EnumProperty"},
        }};
    };

    struct PCGMergeSettings
    {
        static constexpr std::string_view Name = "PCGMergeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsWithDynamicInputs";
        struct Offsets
        {
            static constexpr std::uintptr_t bMergeMetadata = 0xB8;
            static constexpr std::uintptr_t MergeTagsMode = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bMergeMetadata", 0xB8, "BoolProperty"},
            {"MergeTagsMode", 0xB9, "EnumProperty"},
        }};
    };

    struct PCGMeshDescriptorWrapperBase
    {
        static constexpr std::string_view Name = "PCGMeshDescriptorWrapperBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMeshInstanceList
    {
        static constexpr std::string_view Name = "PCGMeshInstanceList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DescriptorWrapper = 0x0;
            static constexpr std::uintptr_t Instances = 0x10;
            static constexpr std::uintptr_t PointData = 0x28;
            static constexpr std::uintptr_t InstancesIndices = 0x30;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x40;
            static constexpr std::uintptr_t AnimationIndices = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DescriptorWrapper", 0x0, "StructProperty"},
            {"Instances", 0x10, "ArrayProperty"},
            {"PointData", 0x28, "WeakObjectProperty"},
            {"InstancesIndices", 0x30, "ArrayProperty"},
            {"CustomPrimitiveData", 0x40, "ArrayProperty"},
            {"AnimationIndices", 0x50, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorBase
    {
        static constexpr std::string_view Name = "PCGMeshSelectorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMeshSelectorByAttribute
    {
        static constexpr std::string_view Name = "PCGMeshSelectorByAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSelectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0x28;
            static constexpr std::uintptr_t TemplateDescriptor = 0x30;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x2C0;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttributeName", 0x28, "NameProperty"},
            {"TemplateDescriptor", 0x30, "StructProperty"},
            {"bUseAttributeMaterialOverrides", 0x2C0, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x2C8, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorByAttributeStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorByAttributeStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshAttribute = 0x8;
            static constexpr std::uintptr_t TemplateDescriptor = 0x38;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x48;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshAttribute", 0x8, "StructProperty"},
            {"TemplateDescriptor", 0x38, "StructProperty"},
            {"bUseAttributeMaterialOverrides", 0x48, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x50, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorLegacyObjectStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorLegacyObjectStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMeshSelectorPrimitiveData
    {
        static constexpr std::string_view Name = "PCGMeshSelectorPrimitiveData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSelectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateDescriptor = 0x28;
            static constexpr std::uintptr_t PrimitiveIndexAttribute = 0x2B8;
            static constexpr std::uintptr_t MeshAttribute = 0x2BC;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x2C0;
            static constexpr std::uintptr_t PrimitiveOverrideAttributes = 0x2D0;
            static constexpr std::uintptr_t CustomPrimitiveDataAttributes = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TemplateDescriptor", 0x28, "StructProperty"},
            {"PrimitiveIndexAttribute", 0x2B8, "NameProperty"},
            {"MeshAttribute", 0x2BC, "NameProperty"},
            {"MaterialOverrideAttributes", 0x2C0, "ArrayProperty"},
            {"PrimitiveOverrideAttributes", 0x2D0, "ArrayProperty"},
            {"CustomPrimitiveDataAttributes", 0x2E0, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorPrimitiveDataStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorPrimitiveDataStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateDescriptor = 0x8;
            static constexpr std::uintptr_t PrimitiveIndexAttribute = 0x18;
            static constexpr std::uintptr_t MeshAttribute = 0x1C;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x20;
            static constexpr std::uintptr_t PrimitiveOverrideAttributes = 0x30;
            static constexpr std::uintptr_t CustomPrimitiveDataAttributes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TemplateDescriptor", 0x8, "StructProperty"},
            {"PrimitiveIndexAttribute", 0x18, "NameProperty"},
            {"MeshAttribute", 0x1C, "NameProperty"},
            {"MaterialOverrideAttributes", 0x20, "ArrayProperty"},
            {"PrimitiveOverrideAttributes", 0x30, "ArrayProperty"},
            {"CustomPrimitiveDataAttributes", 0x40, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorSimpleStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorSimpleStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Meshes = 0x8;
            static constexpr std::uintptr_t TemplateDescriptor = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Meshes", 0x8, "ArrayProperty"},
            {"TemplateDescriptor", 0x18, "StructProperty"},
        }};
    };

    struct PCGMeshSelectorStructBase
    {
        static constexpr std::string_view Name = "PCGMeshSelectorStructBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMeshSelectorWeighted
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeighted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSelectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshEntries = 0x28;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x38;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshEntries", 0x28, "ArrayProperty"},
            {"bUseAttributeMaterialOverrides", 0x38, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x40, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorWeightedByCategory
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeightedByCategory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSelectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryAttribute = 0x28;
            static constexpr std::uintptr_t Entries = 0x30;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x40;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CategoryAttribute", 0x28, "NameProperty"},
            {"Entries", 0x30, "ArrayProperty"},
            {"bUseAttributeMaterialOverrides", 0x40, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x48, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorWeightedByCategoryStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeightedByCategoryStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryAttribute = 0x8;
            static constexpr std::uintptr_t Entries = 0x10;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x20;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CategoryAttribute", 0x8, "NameProperty"},
            {"Entries", 0x10, "ArrayProperty"},
            {"bUseAttributeMaterialOverrides", 0x20, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorWeightedEntry
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeightedEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x0;
            static constexpr std::uintptr_t Weight = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Descriptor", 0x0, "StructProperty"},
            {"Weight", 0x290, "IntProperty"},
        }};
    };

    struct PCGMeshSelectorWeightedStruct
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeightedStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshSelectorStructBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshEntries = 0x8;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x18;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MeshEntries", 0x8, "ArrayProperty"},
            {"bUseAttributeMaterialOverrides", 0x18, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x20, "ArrayProperty"},
        }};
    };

    struct PCGMeshSelectorWeightedStructEntry
    {
        static constexpr std::string_view Name = "PCGMeshSelectorWeightedStructEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x0;
            static constexpr std::uintptr_t Weight = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Descriptor", 0x0, "StructProperty"},
            {"Weight", 0x10, "IntProperty"},
        }};
    };

    struct PCGMeshSpawnerAnalysisDataInterface
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerAnalysisDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCountUniqueAttributeValuesDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t BucketingCellExtent = 0x88;
            static constexpr std::uintptr_t MeshAttributeName = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BucketingCellExtent", 0x88, "IntProperty"},
            {"MeshAttributeName", 0x8C, "NameProperty"},
        }};
    };

    struct PCGMeshSpawnerAnalysisDataProvider
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerAnalysisDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCountUniqueAttributeValuesDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGMeshSpawnerAnalysisKernel
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerAnalysisKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGAttributeAnalysisKernelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshAttributeName = 0xC8;
            static constexpr std::uintptr_t CullingCellExtent = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshAttributeName", 0xC8, "NameProperty"},
            {"CullingCellExtent", 0xCC, "IntProperty"},
        }};
    };

    struct PCGMeshSpawnerContextBase
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerContextBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMeshSpawnerDataInterface
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSpawnerDataInterfaceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGMeshSpawnerDataInterfaceBase
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerDataInterfaceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGMeshSpawnerDataProvider
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSpawnerDataProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGMeshSpawnerDataProviderBase
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerDataProviderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGMeshSpawnerKernel
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseRawInstanceCountsBuffer = 0xB8;
            static constexpr std::uintptr_t bProduceOutputPoints = 0xB9;
            static constexpr std::uintptr_t TargetCullingGridSize = 0xBC;
            static constexpr std::uintptr_t bHasCellHashTable = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseRawInstanceCountsBuffer", 0xB8, "BoolProperty"},
            {"bProduceOutputPoints", 0xB9, "BoolProperty"},
            {"TargetCullingGridSize", 0xBC, "IntProperty"},
            {"bHasCellHashTable", 0xC0, "BoolProperty"},
        }};
    };

    struct PCGMeshSpawnerSettingsBase
    {
        static constexpr std::string_view Name = "PCGMeshSpawnerSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshSelector = 0xA8;
            static constexpr std::uintptr_t SequenceIndexAttribute = 0xB8;
            static constexpr std::uintptr_t InstancePackerType = 0xE8;
            static constexpr std::uintptr_t InstancePackerParameters = 0xF0;
            static constexpr std::uintptr_t ComponentPropertyOverrides = 0xF8;
            static constexpr std::uintptr_t OutAttributeName = 0x108;
            static constexpr std::uintptr_t bApplyMeshBoundsToPoints = 0x10C;
            static constexpr std::uintptr_t TargetActor = 0x110;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0x130;
            static constexpr std::uintptr_t bSynchronousLoad = 0x140;
            static constexpr std::uintptr_t bSilenceOverrideAttributeNotFoundErrors = 0x141;
            static constexpr std::uintptr_t bAllowMergeDifferentDataInSameInstancedComponents = 0x142;
            static constexpr std::uintptr_t bWarnOnIdenticalSpawn = 0x143;
            static constexpr std::uintptr_t bSetupCullingCells = 0x144;
            static constexpr std::uintptr_t CullingCellSize = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MeshSelector", 0xA8, "StructProperty"},
            {"SequenceIndexAttribute", 0xB8, "StructProperty"},
            {"InstancePackerType", 0xE8, "ClassProperty"},
            {"InstancePackerParameters", 0xF0, "ObjectProperty"},
            {"ComponentPropertyOverrides", 0xF8, "ArrayProperty"},
            {"OutAttributeName", 0x108, "NameProperty"},
            {"bApplyMeshBoundsToPoints", 0x10C, "BoolProperty"},
            {"TargetActor", 0x110, "SoftObjectProperty"},
            {"PostProcessFunctionNames", 0x130, "ArrayProperty"},
            {"bSynchronousLoad", 0x140, "BoolProperty"},
            {"bSilenceOverrideAttributeNotFoundErrors", 0x141, "BoolProperty"},
            {"bAllowMergeDifferentDataInSameInstancedComponents", 0x142, "BoolProperty"},
            {"bWarnOnIdenticalSpawn", 0x143, "BoolProperty"},
            {"bSetupCullingCells", 0x144, "BoolProperty"},
            {"CullingCellSize", 0x148, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetInstancePackerType",
        }};
    };

    struct PCGMetaDataPartitionDataProvider
    {
        static constexpr std::string_view Name = "PCGMetaDataPartitionDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGMetadata
    {
        static constexpr std::string_view Name = "PCGMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parent", 0x28, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 45> FunctionNames{{
            "AccumulatePointWeightedAttributes",
            "AccumulateWeightedAttributesByKey",
            "AddAttributes",
            "AddAttributesFiltered",
            "AddEntry",
            "BP_AddAttribute",
            "BP_ClearAttribute",
            "BP_CopyAttribute",
            "BP_CopyExistingAttribute",
            "BP_DeleteAttribute",
            "BP_GetConstMetadataDomain",
            "BP_GetMetadataDomain",
            "BP_HasAttribute",
            "BP_RenameAttribute",
            "CopyAttributes",
            "CreateBoolAttribute",
            "CreateDoubleAttribute",
            "CreateFloatAttribute",
            "CreateInteger32Attribute",
            "CreateInteger64Attribute",
            "CreateNameAttribute",
            "CreateQuatAttribute",
            "CreateRotatorAttribute",
            "CreateSoftClassPathAttribute",
            "CreateSoftObjectPathAttribute",
            "CreateStringAttribute",
            "CreateTransformAttribute",
            "CreateVector2Attribute",
            "CreateVector4Attribute",
            "CreateVectorAttribute",
            "Flatten",
            "GetAttributeCount",
            "GetAttributes",
            "GetItemCountForChild",
            "HasCommonAttributes",
            "Initialize",
            "InitializeWithAttributeFilter",
            "K2_InitializeAsCopy",
            "K2_InitializeAsCopyWithAttributeFilter",
            "MergeAttributesByKey",
            "MergePointAttributes",
            "ResetPointWeightedAttributes",
            "ResetWeightedAttributesByKey",
            "SetAttributesByKey",
            "SetPointAttributes",
        }};
    };

    struct PCGMetadataAccessorHelpers
    {
        static constexpr std::string_view Name = "PCGMetadataAccessorHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 72> FunctionNames{{
            "CopyPoint",
            "GetAttributeValue",
            "GetAttributeValueByMetadataKey",
            "GetAttributeValueByMetadataKeyOnDomain",
            "GetBoolAttribute",
            "GetBoolAttributeByMetadataKey",
            "GetDataDomainID",
            "GetDefaultDomainID",
            "GetDoubleAttribute",
            "GetDoubleAttributeByMetadataKey",
            "GetElementsDomainID",
            "GetFloatAttribute",
            "GetFloatAttributeByMetadataKey",
            "GetInteger32Attribute",
            "GetInteger32AttributeByMetadataKey",
            "GetInteger64Attribute",
            "GetInteger64AttributeByMetadataKey",
            "GetNameAttribute",
            "GetQuatAttribute",
            "GetQuatAttributeByMetadataKey",
            "GetRotatorAttribute",
            "GetRotatorAttributeByMetadataKey",
            "GetSoftClassPathAttribute",
            "GetSoftClassPathAttributeByMetadataKey",
            "GetSoftObjectPathAttribute",
            "GetSoftObjectPathAttributeByMetadataKey",
            "GetStringAttribute",
            "GetStringAttributeByMetadataKey",
            "GetTransformAttribute",
            "GetTransformAttributeByMetadataKey",
            "GetVector2Attribute",
            "GetVector2AttributeByMetadataKey",
            "GetVector4Attribute",
            "GetVector4AttributeByMetadataKey",
            "GetVectorAttribute",
            "GetVectorAttributeByMetadataKey",
            "HasAttributeSet",
            "HasAttributeSetByMetadataKey",
            "InitializeMetadata",
            "SetAttributeFromPropertyByMetadataKey",
            "SetAttributeValue",
            "SetAttributeValueByMetadataKey",
            "SetAttributeValueByMetadataKeyOnDomain",
            "SetBoolAttribute",
            "SetBoolAttributeByMetadataKey",
            "SetDoubleAttribute",
            "SetDoubleAttributeByMetadataKey",
            "SetFloatAttribute",
            "SetFloatAttributeByMetadataKey",
            "SetInteger32Attribute",
            "SetInteger32AttributeByMetadataKey",
            "SetInteger64Attribute",
            "SetInteger64AttributeByMetadataKey",
            "SetNameAttribute",
            "SetQuatAttribute",
            "SetQuatAttributeByMetadataKey",
            "SetRotatorAttribute",
            "SetRotatorAttributeByMetadataKey",
            "SetSoftClassPathAttribute",
            "SetSoftClassPathAttributeByMetadataKey",
            "SetSoftObjectPathAttribute",
            "SetSoftObjectPathAttributeByMetadataKey",
            "SetStringAttribute",
            "SetStringAttributeByMetadataKey",
            "SetTransformAttribute",
            "SetTransformAttributeByMetadataKey",
            "SetVector2Attribute",
            "SetVector2AttributeByMetadataKey",
            "SetVector4Attribute",
            "SetVector4AttributeByMetadataKey",
            "SetVectorAttribute",
            "SetVectorAttributeByMetadataKey",
        }};
    };

    struct PCGMetadataArrayOperationSettings
    {
        static constexpr std::string_view Name = "PCGMetadataArrayOperationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xB0;
            static constexpr std::uintptr_t InputSource1 = 0xB8;
            static constexpr std::uintptr_t InputSource2 = 0xE8;
            static constexpr std::uintptr_t InputSource3 = 0x118;
            static constexpr std::uintptr_t OutputTarget = 0x148;
            static constexpr std::uintptr_t DefaultValues = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0xB0, "EnumProperty"},
            {"InputSource1", 0xB8, "StructProperty"},
            {"InputSource2", 0xE8, "StructProperty"},
            {"InputSource3", 0x118, "StructProperty"},
            {"OutputTarget", 0x148, "StructProperty"},
            {"DefaultValues", 0x178, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetNumOperands",
        }};
    };

    struct PCGMetadataAttributeDesc
    {
        static constexpr std::string_view Name = "PCGMetadataAttributeDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ValueType = 0x4;
            static constexpr std::uintptr_t ContainerTypes = 0x8;
            static constexpr std::uintptr_t ValueTypeObject = 0x18;
            static constexpr std::uintptr_t KeyType = 0x20;
            static constexpr std::uintptr_t KeyTypeObject = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ValueType", 0x4, "EnumProperty"},
            {"ContainerTypes", 0x8, "ArrayProperty"},
            {"ValueTypeObject", 0x18, "ObjectProperty"},
            {"KeyType", 0x20, "EnumProperty"},
            {"KeyTypeObject", 0x28, "ObjectProperty"},
        }};
    };

    struct PCGMetadataBitwiseSettings
    {
        static constexpr std::string_view Name = "PCGMetadataBitwiseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
        }};
    };

    struct PCGMetadataBooleanSettings
    {
        static constexpr std::string_view Name = "PCGMetadataBooleanSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
        }};
    };

    struct PCGMetadataBreakTransformSettings
    {
        static constexpr std::string_view Name = "PCGMetadataBreakTransformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputSource", 0x108, "StructProperty"},
        }};
    };

    struct PCGMetadataBreakVectorSettings
    {
        static constexpr std::string_view Name = "PCGMetadataBreakVectorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputSource", 0x108, "StructProperty"},
        }};
    };

    struct PCGMetadataCompareSettings
    {
        static constexpr std::string_view Name = "PCGMetadataCompareSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t Tolerance = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"Tolerance", 0x170, "DoubleProperty"},
        }};
    };

    struct PCGMetadataDomainHandle
    {
        static constexpr std::string_view Name = "PCGMetadataDomainHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGMetadataDomainID
    {
        static constexpr std::string_view Name = "PCGMetadataDomainID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Flag = 0x0;
            static constexpr std::uintptr_t CustomFlag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Flag", 0x0, "EnumProperty"},
            {"CustomFlag", 0x4, "IntProperty"},
        }};
    };

    struct PCGMetadataDomainLibrary
    {
        static constexpr std::string_view Name = "PCGMetadataDomainLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateAttributeFromValue",
        }};
    };

    struct PCGMetadataMakeRotatorSettings
    {
        static constexpr std::string_view Name = "PCGMetadataMakeRotatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource1 = 0x108;
            static constexpr std::uintptr_t InputSource2 = 0x138;
            static constexpr std::uintptr_t InputSource3 = 0x168;
            static constexpr std::uintptr_t Operation = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputSource1", 0x108, "StructProperty"},
            {"InputSource2", 0x138, "StructProperty"},
            {"InputSource3", 0x168, "StructProperty"},
            {"Operation", 0x198, "EnumProperty"},
        }};
    };

    struct PCGMetadataMakeTransformSettings
    {
        static constexpr std::string_view Name = "PCGMetadataMakeTransformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource1 = 0x108;
            static constexpr std::uintptr_t InputSource2 = 0x138;
            static constexpr std::uintptr_t InputSource3 = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputSource1", 0x108, "StructProperty"},
            {"InputSource2", 0x138, "StructProperty"},
            {"InputSource3", 0x168, "StructProperty"},
        }};
    };

    struct PCGMetadataMakeVectorSettings
    {
        static constexpr std::string_view Name = "PCGMetadataMakeVectorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource1 = 0x108;
            static constexpr std::uintptr_t InputSource2 = 0x138;
            static constexpr std::uintptr_t InputSource3 = 0x168;
            static constexpr std::uintptr_t InputSource4 = 0x198;
            static constexpr std::uintptr_t OutputType = 0x1C8;
            static constexpr std::uintptr_t MakeVector3Op = 0x1C9;
            static constexpr std::uintptr_t MakeVector4Op = 0x1CA;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputSource1", 0x108, "StructProperty"},
            {"InputSource2", 0x138, "StructProperty"},
            {"InputSource3", 0x168, "StructProperty"},
            {"InputSource4", 0x198, "StructProperty"},
            {"OutputType", 0x1C8, "EnumProperty"},
            {"MakeVector3Op", 0x1C9, "EnumProperty"},
            {"MakeVector4Op", 0x1CA, "EnumProperty"},
        }};
    };

    struct PCGMetadataMathsSettings
    {
        static constexpr std::string_view Name = "PCGMetadataMathsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t bForceRoundingOpToInt = 0x10A;
            static constexpr std::uintptr_t bForceOpToDouble = 0x10B;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t InputSource3 = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"bForceRoundingOpToInt", 0x10A, "BoolProperty"},
            {"bForceOpToDouble", 0x10B, "BoolProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"InputSource3", 0x170, "StructProperty"},
        }};
    };

    struct PCGMetadataOperationSettings
    {
        static constexpr std::string_view Name = "PCGMetadataOperationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGCopyAttributesSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t bCopyAllAttributes = 0xAC;
            static constexpr std::uintptr_t bCopyAllDomains = 0xAD;
            static constexpr std::uintptr_t MetadataDomainsMapping = 0xB0;
            static constexpr std::uintptr_t InputSource = 0xC0;
            static constexpr std::uintptr_t OutputTarget = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"bCopyAllAttributes", 0xAC, "BoolProperty"},
            {"bCopyAllDomains", 0xAD, "BoolProperty"},
            {"MetadataDomainsMapping", 0xB0, "MapProperty"},
            {"InputSource", 0xC0, "StructProperty"},
            {"OutputTarget", 0xF0, "StructProperty"},
        }};
    };

    struct PCGMetadataPartitionDataInterface
    {
        static constexpr std::string_view Name = "PCGMetadataPartitionDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGMetadataPartitionKernel
    {
        static constexpr std::string_view Name = "PCGMetadataPartitionKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGMetadataPartitionSettings
    {
        static constexpr std::string_view Name = "PCGMetadataPartitionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PartitionAttributeSelectors = 0xA8;
            static constexpr std::uintptr_t PartitionAttributeNames = 0xB8;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xC8;
            static constexpr std::uintptr_t bAssignIndexPartition = 0xC9;
            static constexpr std::uintptr_t bDoNotPartition = 0xCA;
            static constexpr std::uintptr_t PartitionIndexAttributeName = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PartitionAttributeSelectors", 0xA8, "ArrayProperty"},
            {"PartitionAttributeNames", 0xB8, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xC8, "BoolProperty"},
            {"bAssignIndexPartition", 0xC9, "BoolProperty"},
            {"bDoNotPartition", 0xCA, "BoolProperty"},
            {"PartitionIndexAttributeName", 0xCC, "NameProperty"},
        }};
    };

    struct PCGMetadataRenameSettings
    {
        static constexpr std::string_view Name = "PCGMetadataRenameSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeToRename = 0xA8;
            static constexpr std::uintptr_t NewAttributeName = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeToRename", 0xA8, "StructProperty"},
            {"NewAttributeName", 0xD8, "NameProperty"},
        }};
    };

    struct PCGMetadataRotatorSettings
    {
        static constexpr std::string_view Name = "PCGMetadataRotatorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t InputSource3 = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"InputSource3", 0x170, "StructProperty"},
        }};
    };

    struct PCGMetadataSettingsBase
    {
        static constexpr std::string_view Name = "PCGMetadataSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputTarget = 0xB0;
            static constexpr std::uintptr_t OutputDataFromPin = 0xE0;
            static constexpr std::uintptr_t DefaultValues = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OutputTarget", 0xB0, "StructProperty"},
            {"OutputDataFromPin", 0xE0, "NameProperty"},
            {"DefaultValues", 0xE8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetOutputDataFromPinOptions",
        }};
    };

    struct PCGMetadataStringOpSettings
    {
        static constexpr std::string_view Name = "PCGMetadataStringOpSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t SearchCase = 0x10A;
            static constexpr std::uintptr_t DelimiterMode = 0x10B;
            static constexpr std::uintptr_t bTrimWhitespace = 0x10C;
            static constexpr std::uintptr_t bCullEmpty = 0x10D;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t InputSource3 = 0x170;
            static constexpr std::uintptr_t OutputTypeAsString = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"SearchCase", 0x10A, "ByteProperty"},
            {"DelimiterMode", 0x10B, "EnumProperty"},
            {"bTrimWhitespace", 0x10C, "BoolProperty"},
            {"bCullEmpty", 0x10D, "BoolProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"InputSource3", 0x170, "StructProperty"},
            {"OutputTypeAsString", 0x1A0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "HasThreeOperands",
            "HasTwoOperands",
            "OutputsBool",
        }};
    };

    struct PCGMetadataTransformSettings
    {
        static constexpr std::string_view Name = "PCGMetadataTransformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t TransformLerpMode = 0x10A;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t InputSource3 = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"TransformLerpMode", 0x10A, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"InputSource3", 0x170, "StructProperty"},
        }};
    };

    struct PCGMetadataTrigSettings
    {
        static constexpr std::string_view Name = "PCGMetadataTrigSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
        }};
    };

    struct PCGMetadataTypesConstantStruct
    {
        static constexpr std::string_view Name = "PCGMetadataTypesConstantStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t StringMode = 0x4;
            static constexpr std::uintptr_t FloatValue = 0x8;
            static constexpr std::uintptr_t Int32Value = 0xC;
            static constexpr std::uintptr_t DoubleValue = 0x10;
            static constexpr std::uintptr_t IntValue = 0x18;
            static constexpr std::uintptr_t Vector2Value = 0x20;
            static constexpr std::uintptr_t VectorValue = 0x30;
            static constexpr std::uintptr_t Vector4Value = 0x50;
            static constexpr std::uintptr_t QuatValue = 0x70;
            static constexpr std::uintptr_t TransformValue = 0x90;
            static constexpr std::uintptr_t StringValue = 0xF0;
            static constexpr std::uintptr_t BoolValue = 0x100;
            static constexpr std::uintptr_t RotatorValue = 0x108;
            static constexpr std::uintptr_t NameValue = 0x120;
            static constexpr std::uintptr_t SoftClassPathValue = 0x128;
            static constexpr std::uintptr_t SoftObjectPathValue = 0x140;
            static constexpr std::uintptr_t bAllowsTypeChange = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"StringMode", 0x4, "EnumProperty"},
            {"FloatValue", 0x8, "FloatProperty"},
            {"Int32Value", 0xC, "IntProperty"},
            {"DoubleValue", 0x10, "DoubleProperty"},
            {"IntValue", 0x18, "Int64Property"},
            {"Vector2Value", 0x20, "StructProperty"},
            {"VectorValue", 0x30, "StructProperty"},
            {"Vector4Value", 0x50, "StructProperty"},
            {"QuatValue", 0x70, "StructProperty"},
            {"TransformValue", 0x90, "StructProperty"},
            {"StringValue", 0xF0, "StrProperty"},
            {"BoolValue", 0x100, "BoolProperty"},
            {"RotatorValue", 0x108, "StructProperty"},
            {"NameValue", 0x120, "NameProperty"},
            {"SoftClassPathValue", 0x128, "StructProperty"},
            {"SoftObjectPathValue", 0x140, "StructProperty"},
            {"bAllowsTypeChange", 0x158, "BoolProperty"},
        }};
    };

    struct PCGMetadataVectorSettings
    {
        static constexpr std::string_view Name = "PCGMetadataVectorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x108;
            static constexpr std::uintptr_t InputSource1 = 0x110;
            static constexpr std::uintptr_t InputSource2 = 0x140;
            static constexpr std::uintptr_t InputSource3 = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0x108, "EnumProperty"},
            {"InputSource1", 0x110, "StructProperty"},
            {"InputSource2", 0x140, "StructProperty"},
            {"InputSource3", 0x170, "StructProperty"},
        }};
    };

    struct PCGMultiSelectSettings
    {
        static constexpr std::string_view Name = "PCGMultiSelectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionMode = 0xA8;
            static constexpr std::uintptr_t IntegerSelection = 0xAC;
            static constexpr std::uintptr_t IntOptions = 0xB0;
            static constexpr std::uintptr_t StringSelection = 0xC0;
            static constexpr std::uintptr_t StringOptions = 0xD0;
            static constexpr std::uintptr_t EnumSelection = 0xE0;
            static constexpr std::uintptr_t EnumValueToPinLabelMapping = 0xF0;
            static constexpr std::uintptr_t CachedPinLabels = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SelectionMode", 0xA8, "EnumProperty"},
            {"IntegerSelection", 0xAC, "IntProperty"},
            {"IntOptions", 0xB0, "ArrayProperty"},
            {"StringSelection", 0xC0, "StrProperty"},
            {"StringOptions", 0xD0, "ArrayProperty"},
            {"EnumSelection", 0xE0, "StructProperty"},
            {"EnumValueToPinLabelMapping", 0xF0, "MapProperty"},
            {"CachedPinLabels", 0x100, "ArrayProperty"},
        }};
    };

    struct PCGMutateSeedSettings
    {
        static constexpr std::string_view Name = "PCGMutateSeedSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGNamedRerouteBaseSettings
    {
        static constexpr std::string_view Name = "PCGNamedRerouteBaseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGRerouteSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGNamedRerouteDeclarationSettings
    {
        static constexpr std::string_view Name = "PCGNamedRerouteDeclarationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGNamedRerouteBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGNamedRerouteUsageSettings
    {
        static constexpr std::string_view Name = "PCGNamedRerouteUsageSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGNamedRerouteBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Declaration = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Declaration", 0xA8, "ObjectProperty"},
        }};
    };

    struct PCGNode
    {
        static constexpr std::string_view Name = "PCGNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTitle = 0x28;
            static constexpr std::uintptr_t SettingsInterface = 0x30;
            static constexpr std::uintptr_t OutboundNodes = 0x38;
            static constexpr std::uintptr_t InboundEdges = 0x48;
            static constexpr std::uintptr_t OutboundEdges = 0x58;
            static constexpr std::uintptr_t InputPins = 0x68;
            static constexpr std::uintptr_t OutputPins = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NodeTitle", 0x28, "NameProperty"},
            {"SettingsInterface", 0x30, "ObjectProperty"},
            {"OutboundNodes", 0x38, "ArrayProperty"},
            {"InboundEdges", 0x48, "ArrayProperty"},
            {"OutboundEdges", 0x58, "ArrayProperty"},
            {"InputPins", 0x68, "ArrayProperty"},
            {"OutputPins", 0x78, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddEdgeTo",
            "GetGraph",
            "GetSettings",
            "RemoveEdgeTo",
        }};
    };

    struct PCGNormalToDensityDataInterface
    {
        static constexpr std::string_view Name = "PCGNormalToDensityDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGNormalToDensityKernel
    {
        static constexpr std::string_view Name = "PCGNormalToDensityKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGNormalToDensityProvider
    {
        static constexpr std::string_view Name = "PCGNormalToDensityProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGNormalToDensitySettings
    {
        static constexpr std::string_view Name = "PCGNormalToDensitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Normal = 0xA8;
            static constexpr std::uintptr_t Offset = 0xC0;
            static constexpr std::uintptr_t Strength = 0xC8;
            static constexpr std::uintptr_t DensityMode = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Normal", 0xA8, "StructProperty"},
            {"Offset", 0xC0, "DoubleProperty"},
            {"Strength", 0xC8, "DoubleProperty"},
            {"DensityMode", 0xD0, "EnumProperty"},
        }};
    };

    struct PCGNumberOfElementsSettings
    {
        static constexpr std::string_view Name = "PCGNumberOfElementsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputAttributeName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputAttributeName", 0xA8, "NameProperty"},
        }};
    };

    struct PCGObjectPropertyOverrideDescription
    {
        static constexpr std::string_view Name = "PCGObjectPropertyOverrideDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x0;
            static constexpr std::uintptr_t PropertyTarget = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputSource", 0x0, "StructProperty"},
            {"PropertyTarget", 0x30, "StrProperty"},
        }};
    };

    struct PCGOctreeQueries
    {
        static constexpr std::string_view Name = "PCGOctreeQueries";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetClosestPoint",
            "GetClosestPointFromOtherPoint",
            "GetFarthestPoint",
            "GetFarthestPointFromOtherPoint",
            "GetPointsInsideBounds",
            "GetPointsInsideSphere",
        }};
    };

    struct PCGOffsetPolygon2DSettings
    {
        static constexpr std::string_view Name = "PCGOffsetPolygon2DSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t bInheritMetadata = 0xAC;
            static constexpr std::uintptr_t bUseOffsetFromInput = 0xAD;
            static constexpr std::uintptr_t OffsetAttribute = 0xB0;
            static constexpr std::uintptr_t Offset = 0xE0;
            static constexpr std::uintptr_t JoinType = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"bInheritMetadata", 0xAC, "BoolProperty"},
            {"bUseOffsetFromInput", 0xAD, "BoolProperty"},
            {"OffsetAttribute", 0xB0, "StructProperty"},
            {"Offset", 0xE0, "DoubleProperty"},
            {"JoinType", 0xE8, "EnumProperty"},
        }};
    };

    struct PCGOffsetSplineSettings
    {
        static constexpr std::string_view Name = "PCGOffsetSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionAttribute = 0xA8;
            static constexpr std::uintptr_t MagnitudeAttribute = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DirectionAttribute", 0xA8, "StructProperty"},
            {"MagnitudeAttribute", 0xD8, "StructProperty"},
        }};
    };

    struct PCGOuterIntersectionSettings
    {
        static constexpr std::string_view Name = "PCGOuterIntersectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsWithDynamicInputs";
        struct Offsets
        {
            static constexpr std::uintptr_t DensityFunction = 0xB8;
            static constexpr std::uintptr_t bIgnorePinsWithNoInput = 0xB9;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0xBA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DensityFunction", 0xB8, "EnumProperty"},
            {"bIgnorePinsWithNoInput", 0xB9, "BoolProperty"},
            {"bKeepZeroDensityPoints", 0xBA, "BoolProperty"},
        }};
    };

    struct PCGOverrideInstancedPropertyBag
    {
        static constexpr std::string_view Name = "PCGOverrideInstancedPropertyBag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x0;
            static constexpr std::uintptr_t PropertiesIDsOverridden = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Parameters", 0x0, "StructProperty"},
            {"PropertiesIDsOverridden", 0x10, "SetProperty"},
        }};
    };

    struct PCGPackedCustomData
    {
        static constexpr std::string_view Name = "PCGPackedCustomData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumCustomDataFloats = 0x0;
            static constexpr std::uintptr_t CustomData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumCustomDataFloats", 0x0, "IntProperty"},
            {"CustomData", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGParamData
    {
        static constexpr std::string_view Name = "PCGParamData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t NameMap = 0x48;
            static constexpr std::uintptr_t bHasCachedLastSelector = 0x58;
            static constexpr std::uintptr_t CachedLastSelector = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NameMap", 0x48, "MapProperty"},
            {"bHasCachedLastSelector", 0x58, "BoolProperty"},
            {"CachedLastSelector", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "FindMetadataKey",
            "FindOrAddMetadataKey",
            "K2_FilterParamsByKey",
            "K2_FilterParamsByName",
        }};
    };

    struct PCGParseStringSettings
    {
        static constexpr std::string_view Name = "PCGParseStringSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMetadataSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x108;
            static constexpr std::uintptr_t TargetType = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputSource", 0x108, "StructProperty"},
            {"TargetType", 0x138, "EnumProperty"},
        }};
    };

    struct PCGParsedAttributeFunction
    {
        static constexpr std::string_view Name = "PCGParsedAttributeFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PinLabel = 0x0;
            static constexpr std::uintptr_t FunctionName = 0x10;
            static constexpr std::uintptr_t AttributeType = 0x20;
            static constexpr std::uintptr_t AttributeName = 0x28;
            static constexpr std::uintptr_t MatchBeginning = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PinLabel", 0x0, "StrProperty"},
            {"FunctionName", 0x10, "StrProperty"},
            {"AttributeType", 0x20, "Int64Property"},
            {"AttributeName", 0x28, "StrProperty"},
            {"MatchBeginning", 0x38, "IntProperty"},
        }};
    };

    struct PCGParsedCopyElementFunction
    {
        static constexpr std::string_view Name = "PCGParsedCopyElementFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcePin = 0x0;
            static constexpr std::uintptr_t TargetPin = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourcePin", 0x0, "StrProperty"},
            {"TargetPin", 0x10, "StrProperty"},
        }};
    };

    struct PCGPartitionActor
    {
        static constexpr std::string_view Name = "PCGPartitionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGGuid = 0x278;
            static constexpr std::uintptr_t LocalToOriginalBase = 0x298;
            static constexpr std::uintptr_t LoadedPreviewComponents = 0x2A8;
            static constexpr std::uintptr_t PCGGridSize = 0x2B8;
            static constexpr std::uintptr_t bUse2DGrid = 0x2BC;
            static constexpr std::uintptr_t RuntimeGridDescriptorHash = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PCGGuid", 0x278, "StructProperty"},
            {"LocalToOriginalBase", 0x298, "MapProperty"},
            {"LoadedPreviewComponents", 0x2A8, "MapProperty"},
            {"PCGGridSize", 0x2B8, "UInt32Property"},
            {"bUse2DGrid", 0x2BC, "BoolProperty"},
            {"RuntimeGridDescriptorHash", 0x2C0, "UInt32Property"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "BP_GetPCGGridSize",
            "GetLocalComponent",
            "GetLocalComponentBase",
            "GetOriginalComponent",
            "GetOriginalComponentBase",
        }};
    };

    struct PCGPartitionActorRecord
    {
        static constexpr std::string_view Name = "PCGPartitionActorRecord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GridGuid = 0x0;
            static constexpr std::uintptr_t GridSize = 0x10;
            static constexpr std::uintptr_t GridCoords = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GridGuid", 0x0, "StructProperty"},
            {"GridSize", 0x10, "UInt32Property"},
            {"GridCoords", 0x14, "StructProperty"},
        }};
    };

    struct PCGPartitionByActorDataLayersSettings
    {
        static constexpr std::string_view Name = "PCGPartitionByActorDataLayersSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t DataLayerReferenceAttribute = 0xD8;
            static constexpr std::uintptr_t IncludedDataLayers = 0x108;
            static constexpr std::uintptr_t ExcludedDataLayers = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActorReferenceAttribute", 0xA8, "StructProperty"},
            {"DataLayerReferenceAttribute", 0xD8, "StructProperty"},
            {"IncludedDataLayers", 0x108, "StructProperty"},
            {"ExcludedDataLayers", 0x150, "StructProperty"},
        }};
    };

    struct PCGPartitionedComponentLiteTestProbe
    {
        static constexpr std::string_view Name = "PCGPartitionedComponentLiteTestProbe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponentLite";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0xC8;
            static constexpr std::uintptr_t bGenerated = 0xCC;
            static constexpr std::uintptr_t GraphInstance = 0xD0;
            static constexpr std::uintptr_t ManagedResourceContainer = 0xD8;
            static constexpr std::uintptr_t LastGeneratedBounds = 0x118;
            static constexpr std::uintptr_t GeneratedGraphOutput = 0x150;
            static constexpr std::uintptr_t SourceDataContainer = 0x180;
            static constexpr std::uintptr_t CurrentEditingMode = 0x198;
            static constexpr std::uintptr_t SerializedEditingMode = 0x199;
            static constexpr std::uintptr_t GenerationGridSize = 0x19C;
            static constexpr std::uintptr_t bProceduralInstancesInUse = 0x1B1;
            static constexpr std::uintptr_t bIsComponentLocal = 0x1B2;
            static constexpr std::uintptr_t PerPinGeneratedOutput = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Seed", 0xC8, "IntProperty"},
            {"bGenerated", 0xCC, "BoolProperty"},
            {"GraphInstance", 0xD0, "ObjectProperty"},
            {"ManagedResourceContainer", 0xD8, "StructProperty"},
            {"LastGeneratedBounds", 0x118, "StructProperty"},
            {"GeneratedGraphOutput", 0x150, "StructProperty"},
            {"SourceDataContainer", 0x180, "StructProperty"},
            {"CurrentEditingMode", 0x198, "EnumProperty"},
            {"SerializedEditingMode", 0x199, "EnumProperty"},
            {"GenerationGridSize", 0x19C, "UInt32Property"},
            {"bProceduralInstancesInUse", 0x1B1, "BoolProperty"},
            {"bIsComponentLocal", 0x1B2, "BoolProperty"},
            {"PerPinGeneratedOutput", 0x1B8, "MapProperty"},
        }};
    };

    struct PCGPartitionedComponentOrderTestProbe
    {
        static constexpr std::string_view Name = "PCGPartitionedComponentOrderTestProbe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivated = 0x1D0;
            static constexpr std::uintptr_t bIsComponentPartitioned = 0x1D1;
            static constexpr std::uintptr_t GenerationTrigger = 0x1D2;
            static constexpr std::uintptr_t bGenerateOnDropWhenTriggerOnDemand = 0x1D3;
            static constexpr std::uintptr_t bOverrideGenerationRadii = 0x1D4;
            static constexpr std::uintptr_t GenerationRadii = 0x1D8;
            static constexpr std::uintptr_t SchedulingPolicyClass = 0x420;
            static constexpr std::uintptr_t SchedulingPolicy = 0x428;
            static constexpr std::uintptr_t ToolDataContainer = 0x430;
            static constexpr std::uintptr_t OnPCGGraphStartGeneratingExternal = 0x4A8;
            static constexpr std::uintptr_t OnPCGGraphCancelledExternal = 0x4B8;
            static constexpr std::uintptr_t OnPCGGraphGeneratedExternal = 0x4C8;
            static constexpr std::uintptr_t OnPCGGraphCleanedExternal = 0x4D8;
            static constexpr std::uintptr_t OnPCGLinkClearedExternal = 0x4E8;
            static constexpr std::uintptr_t bRuntimeGenerated = 0x4F8;
            static constexpr std::uintptr_t PostGenerateFunctionNames = 0x500;
            static constexpr std::uintptr_t InputType = 0x511;
            static constexpr std::uintptr_t bParseActorComponents = 0x512;
            static constexpr std::uintptr_t RuntimeGridDescriptorHash = 0x514;
            static constexpr std::uintptr_t CachedPCGData = 0x518;
            static constexpr std::uintptr_t CachedInputData = 0x520;
            static constexpr std::uintptr_t CachedActorData = 0x528;
            static constexpr std::uintptr_t CachedLandscapeData = 0x530;
            static constexpr std::uintptr_t CachedLandscapeHeightData = 0x538;
            static constexpr std::uintptr_t GeneratedResources = 0x540;
            static constexpr std::uintptr_t bOverrideUseActorComponentlessGeneration = 0x550;
            static constexpr std::uintptr_t bUseActorComponentlessGeneration = 0x551;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bActivated", 0x1D0, "BoolProperty"},
            {"bIsComponentPartitioned", 0x1D1, "BoolProperty"},
            {"GenerationTrigger", 0x1D2, "EnumProperty"},
            {"bGenerateOnDropWhenTriggerOnDemand", 0x1D3, "BoolProperty"},
            {"bOverrideGenerationRadii", 0x1D4, "BoolProperty"},
            {"GenerationRadii", 0x1D8, "StructProperty"},
            {"SchedulingPolicyClass", 0x420, "ClassProperty"},
            {"SchedulingPolicy", 0x428, "ObjectProperty"},
            {"ToolDataContainer", 0x430, "StructProperty"},
            {"OnPCGGraphStartGeneratingExternal", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCancelledExternal", 0x4B8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphGeneratedExternal", 0x4C8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCleanedExternal", 0x4D8, "MulticastInlineDelegateProperty"},
            {"OnPCGLinkClearedExternal", 0x4E8, "MulticastInlineDelegateProperty"},
            {"bRuntimeGenerated", 0x4F8, "BoolProperty"},
            {"PostGenerateFunctionNames", 0x500, "ArrayProperty"},
            {"InputType", 0x511, "EnumProperty"},
            {"bParseActorComponents", 0x512, "BoolProperty"},
            {"RuntimeGridDescriptorHash", 0x514, "UInt32Property"},
            {"CachedPCGData", 0x518, "ObjectProperty"},
            {"CachedInputData", 0x520, "ObjectProperty"},
            {"CachedActorData", 0x528, "ObjectProperty"},
            {"CachedLandscapeData", 0x530, "ObjectProperty"},
            {"CachedLandscapeHeightData", 0x538, "ObjectProperty"},
            {"GeneratedResources", 0x540, "ArrayProperty"},
            {"bOverrideUseActorComponentlessGeneration", 0x550, "BoolProperty"},
            {"bUseActorComponentlessGeneration", 0x551, "BoolProperty"},
        }};
    };

    struct PCGPartitionedComponentTestDerivedLegacy
    {
        static constexpr std::string_view Name = "PCGPartitionedComponentTestDerivedLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivated = 0x1D0;
            static constexpr std::uintptr_t bIsComponentPartitioned = 0x1D1;
            static constexpr std::uintptr_t GenerationTrigger = 0x1D2;
            static constexpr std::uintptr_t bGenerateOnDropWhenTriggerOnDemand = 0x1D3;
            static constexpr std::uintptr_t bOverrideGenerationRadii = 0x1D4;
            static constexpr std::uintptr_t GenerationRadii = 0x1D8;
            static constexpr std::uintptr_t SchedulingPolicyClass = 0x420;
            static constexpr std::uintptr_t SchedulingPolicy = 0x428;
            static constexpr std::uintptr_t ToolDataContainer = 0x430;
            static constexpr std::uintptr_t OnPCGGraphStartGeneratingExternal = 0x4A8;
            static constexpr std::uintptr_t OnPCGGraphCancelledExternal = 0x4B8;
            static constexpr std::uintptr_t OnPCGGraphGeneratedExternal = 0x4C8;
            static constexpr std::uintptr_t OnPCGGraphCleanedExternal = 0x4D8;
            static constexpr std::uintptr_t OnPCGLinkClearedExternal = 0x4E8;
            static constexpr std::uintptr_t bRuntimeGenerated = 0x4F8;
            static constexpr std::uintptr_t PostGenerateFunctionNames = 0x500;
            static constexpr std::uintptr_t InputType = 0x511;
            static constexpr std::uintptr_t bParseActorComponents = 0x512;
            static constexpr std::uintptr_t RuntimeGridDescriptorHash = 0x514;
            static constexpr std::uintptr_t CachedPCGData = 0x518;
            static constexpr std::uintptr_t CachedInputData = 0x520;
            static constexpr std::uintptr_t CachedActorData = 0x528;
            static constexpr std::uintptr_t CachedLandscapeData = 0x530;
            static constexpr std::uintptr_t CachedLandscapeHeightData = 0x538;
            static constexpr std::uintptr_t GeneratedResources = 0x540;
            static constexpr std::uintptr_t bOverrideUseActorComponentlessGeneration = 0x550;
            static constexpr std::uintptr_t bUseActorComponentlessGeneration = 0x551;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bActivated", 0x1D0, "BoolProperty"},
            {"bIsComponentPartitioned", 0x1D1, "BoolProperty"},
            {"GenerationTrigger", 0x1D2, "EnumProperty"},
            {"bGenerateOnDropWhenTriggerOnDemand", 0x1D3, "BoolProperty"},
            {"bOverrideGenerationRadii", 0x1D4, "BoolProperty"},
            {"GenerationRadii", 0x1D8, "StructProperty"},
            {"SchedulingPolicyClass", 0x420, "ClassProperty"},
            {"SchedulingPolicy", 0x428, "ObjectProperty"},
            {"ToolDataContainer", 0x430, "StructProperty"},
            {"OnPCGGraphStartGeneratingExternal", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCancelledExternal", 0x4B8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphGeneratedExternal", 0x4C8, "MulticastInlineDelegateProperty"},
            {"OnPCGGraphCleanedExternal", 0x4D8, "MulticastInlineDelegateProperty"},
            {"OnPCGLinkClearedExternal", 0x4E8, "MulticastInlineDelegateProperty"},
            {"bRuntimeGenerated", 0x4F8, "BoolProperty"},
            {"PostGenerateFunctionNames", 0x500, "ArrayProperty"},
            {"InputType", 0x511, "EnumProperty"},
            {"bParseActorComponents", 0x512, "BoolProperty"},
            {"RuntimeGridDescriptorHash", 0x514, "UInt32Property"},
            {"CachedPCGData", 0x518, "ObjectProperty"},
            {"CachedInputData", 0x520, "ObjectProperty"},
            {"CachedActorData", 0x528, "ObjectProperty"},
            {"CachedLandscapeData", 0x530, "ObjectProperty"},
            {"CachedLandscapeHeightData", 0x538, "ObjectProperty"},
            {"GeneratedResources", 0x540, "ArrayProperty"},
            {"bOverrideUseActorComponentlessGeneration", 0x550, "BoolProperty"},
            {"bUseActorComponentlessGeneration", 0x551, "BoolProperty"},
        }};
    };

    struct PCGPathfindingSettings
    {
        static constexpr std::string_view Name = "PCGPathfindingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchDistance = 0xA8;
            static constexpr std::uintptr_t bStartLocationsAsInput = 0xB0;
            static constexpr std::uintptr_t StartLocationAttribute = 0xB8;
            static constexpr std::uintptr_t Start = 0xE8;
            static constexpr std::uintptr_t bGoalLocationsAsInput = 0x100;
            static constexpr std::uintptr_t GoalLocationAttribute = 0x108;
            static constexpr std::uintptr_t Goal = 0x138;
            static constexpr std::uintptr_t GoalMappingMode = 0x150;
            static constexpr std::uintptr_t HeuristicWeight = 0x158;
            static constexpr std::uintptr_t CostFunctionMode = 0x160;
            static constexpr std::uintptr_t CostAttribute = 0x168;
            static constexpr std::uintptr_t MaximumFitnessPenaltyFactor = 0x198;
            static constexpr std::uintptr_t bUsePathTraces = 0x1A0;
            static constexpr std::uintptr_t PathTraceParams = 0x1A8;
            static constexpr std::uintptr_t bAcceptPartialPath = 0x230;
            static constexpr std::uintptr_t bOutputAsSpline = 0x231;
            static constexpr std::uintptr_t SplineMode = 0x232;
            static constexpr std::uintptr_t bCopyOriginatingPoints = 0x233;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"SearchDistance", 0xA8, "DoubleProperty"},
            {"bStartLocationsAsInput", 0xB0, "BoolProperty"},
            {"StartLocationAttribute", 0xB8, "StructProperty"},
            {"Start", 0xE8, "StructProperty"},
            {"bGoalLocationsAsInput", 0x100, "BoolProperty"},
            {"GoalLocationAttribute", 0x108, "StructProperty"},
            {"Goal", 0x138, "StructProperty"},
            {"GoalMappingMode", 0x150, "EnumProperty"},
            {"HeuristicWeight", 0x158, "DoubleProperty"},
            {"CostFunctionMode", 0x160, "EnumProperty"},
            {"CostAttribute", 0x168, "StructProperty"},
            {"MaximumFitnessPenaltyFactor", 0x198, "DoubleProperty"},
            {"bUsePathTraces", 0x1A0, "BoolProperty"},
            {"PathTraceParams", 0x1A8, "StructProperty"},
            {"bAcceptPartialPath", 0x230, "BoolProperty"},
            {"bOutputAsSpline", 0x231, "BoolProperty"},
            {"SplineMode", 0x232, "EnumProperty"},
            {"bCopyOriginatingPoints", 0x233, "BoolProperty"},
        }};
    };

    struct PCGPerExecutionCacheBounds
    {
        static constexpr std::string_view Name = "PCGPerExecutionCacheBounds";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPerExecutionCacheData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGPerExecutionCacheData
    {
        static constexpr std::string_view Name = "PCGPerExecutionCacheData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGPerExecutionCachePCGData
    {
        static constexpr std::string_view Name = "PCGPerExecutionCachePCGData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPerExecutionCacheData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGPin
    {
        static constexpr std::string_view Name = "PCGPin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Node = 0x28;
            static constexpr std::uintptr_t Label = 0x30;
            static constexpr std::uintptr_t Edges = 0x38;
            static constexpr std::uintptr_t Properties = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Node", 0x28, "ObjectProperty"},
            {"Label", 0x30, "NameProperty"},
            {"Edges", 0x38, "ArrayProperty"},
            {"Properties", 0x48, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetTooltip",
            "IsConnected",
            "IsOutputPin",
            "SetToolTip",
        }};
    };

    struct PCGPinDataLabels
    {
        static constexpr std::string_view Name = "PCGPinDataLabels";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PinToDataLabels = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PinToDataLabels", 0x0, "MapProperty"},
        }};
    };

    struct PCGPinDefaultValueInfo
    {
        static constexpr std::string_view Name = "PCGPinDefaultValueInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentType = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentType", 0x0, "EnumProperty"},
        }};
    };

    struct PCGPinDependencyExpression
    {
        static constexpr std::string_view Name = "PCGPinDependencyExpression";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Expression = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Expression", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGPinProperties
    {
        static constexpr std::string_view Name = "PCGPinProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t Usage = 0x4;
            static constexpr std::uintptr_t AllowedTypes = 0x8;
            static constexpr std::uintptr_t bAllowMultipleData = 0x20;
            static constexpr std::uintptr_t PinStatus = 0x21;
            static constexpr std::uintptr_t bInvisiblePin = 0x22;
            static constexpr std::uintptr_t bAllowMultipleConnections = 0x23;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Label", 0x0, "NameProperty"},
            {"Usage", 0x4, "EnumProperty"},
            {"AllowedTypes", 0x8, "StructProperty"},
            {"bAllowMultipleData", 0x20, "BoolProperty"},
            {"PinStatus", 0x21, "EnumProperty"},
            {"bInvisiblePin", 0x22, "BoolProperty"},
            {"bAllowMultipleConnections", 0x23, "BoolProperty"},
        }};
    };

    struct PCGPinPropertiesBlueprintHelpers
    {
        static constexpr std::string_view Name = "PCGPinPropertiesBlueprintHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AllowsMultipleConnections",
            "IsAdvancedPin",
            "IsNormalPin",
            "IsRequiredPin",
            "SetAdvancedPin",
            "SetAllowMultipleConnections",
            "SetNormalPin",
            "SetRequiredPin",
        }};
    };

    struct PCGPinPropertiesGPU
    {
        static constexpr std::string_view Name = "PCGPinPropertiesGPU";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPinProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertiesGPU = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertiesGPU", 0x30, "StructProperty"},
        }};
    };

    struct PCGPinPropertiesGPUStruct
    {
        static constexpr std::string_view Name = "PCGPinPropertiesGPUStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InitializationMode = 0x0;
            static constexpr std::uintptr_t PinsToInititalizeFrom = 0x8;
            static constexpr std::uintptr_t DataCountMode = 0x18;
            static constexpr std::uintptr_t DataMultiplicity = 0x19;
            static constexpr std::uintptr_t DataCount = 0x1C;
            static constexpr std::uintptr_t ElementCountMode = 0x20;
            static constexpr std::uintptr_t ElementMultiplicity = 0x21;
            static constexpr std::uintptr_t ElementCount = 0x24;
            static constexpr std::uintptr_t NumElements2D = 0x28;
            static constexpr std::uintptr_t TextureFormatInheritanceMode = 0x30;
            static constexpr std::uintptr_t TextureFormat = 0x31;
            static constexpr std::uintptr_t bInitializeTextureTransformFromGenerationVolume = 0x32;
            static constexpr std::uintptr_t TextureTransformInheritanceMode = 0x33;
            static constexpr std::uintptr_t TextureTransform = 0x40;
            static constexpr std::uintptr_t TextureFilterInheritanceMode = 0xA0;
            static constexpr std::uintptr_t TextureFilter = 0xA1;
            static constexpr std::uintptr_t TextureArraySizeInheritanceMode = 0xA2;
            static constexpr std::uintptr_t TextureArraySize = 0xA4;
            static constexpr std::uintptr_t ElementCountMultiplier = 0xA8;
            static constexpr std::uintptr_t bInitializeToZero = 0xAC;
            static constexpr std::uintptr_t bAutoInitializeOutput = 0xAD;
            static constexpr std::uintptr_t AttributeInheritanceMode = 0xAE;
            static constexpr std::uintptr_t CreatedKernelAttributeKeys = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"InitializationMode", 0x0, "EnumProperty"},
            {"PinsToInititalizeFrom", 0x8, "ArrayProperty"},
            {"DataCountMode", 0x18, "EnumProperty"},
            {"DataMultiplicity", 0x19, "EnumProperty"},
            {"DataCount", 0x1C, "IntProperty"},
            {"ElementCountMode", 0x20, "EnumProperty"},
            {"ElementMultiplicity", 0x21, "EnumProperty"},
            {"ElementCount", 0x24, "IntProperty"},
            {"NumElements2D", 0x28, "StructProperty"},
            {"TextureFormatInheritanceMode", 0x30, "EnumProperty"},
            {"TextureFormat", 0x31, "EnumProperty"},
            {"bInitializeTextureTransformFromGenerationVolume", 0x32, "BoolProperty"},
            {"TextureTransformInheritanceMode", 0x33, "EnumProperty"},
            {"TextureTransform", 0x40, "StructProperty"},
            {"TextureFilterInheritanceMode", 0xA0, "EnumProperty"},
            {"TextureFilter", 0xA1, "EnumProperty"},
            {"TextureArraySizeInheritanceMode", 0xA2, "EnumProperty"},
            {"TextureArraySize", 0xA4, "IntProperty"},
            {"ElementCountMultiplier", 0xA8, "IntProperty"},
            {"bInitializeToZero", 0xAC, "BoolProperty"},
            {"bAutoInitializeOutput", 0xAD, "BoolProperty"},
            {"AttributeInheritanceMode", 0xAE, "EnumProperty"},
            {"CreatedKernelAttributeKeys", 0xB0, "ArrayProperty"},
        }};
    };

    struct PCGPlatformSwitchSettings
    {
        static constexpr std::string_view Name = "PCGPlatformSwitchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGPlatformSwitchSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformOutputs = 0xA8;
            static constexpr std::uintptr_t CookedPlatform = 0xB8;
            static constexpr std::uintptr_t CookedPlatformGroup = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlatformOutputs", 0xA8, "ArrayProperty"},
            {"CookedPlatform", 0xB8, "NameProperty"},
            {"CookedPlatformGroup", 0xBC, "NameProperty"},
        }};
    };

    struct PCGPlatformSwitchSettingsBase
    {
        static constexpr std::string_view Name = "PCGPlatformSwitchSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGPoint
    {
        static constexpr std::string_view Name = "PCGPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t Density = 0x60;
            static constexpr std::uintptr_t BoundsMin = 0x68;
            static constexpr std::uintptr_t BoundsMax = 0x80;
            static constexpr std::uintptr_t Color = 0xA0;
            static constexpr std::uintptr_t Steepness = 0xC0;
            static constexpr std::uintptr_t Seed = 0xC4;
            static constexpr std::uintptr_t MetadataEntry = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"Density", 0x60, "FloatProperty"},
            {"BoundsMin", 0x68, "StructProperty"},
            {"BoundsMax", 0x80, "StructProperty"},
            {"Color", 0xA0, "StructProperty"},
            {"Steepness", 0xC0, "FloatProperty"},
            {"Seed", 0xC4, "IntProperty"},
            {"MetadataEntry", 0xC8, "Int64Property"},
        }};
    };

    struct PCGPointArray
    {
        static constexpr std::string_view Name = "PCGPointArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGPointArrayData
    {
        static constexpr std::string_view Name = "PCGPointArrayData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBasePointData";
        struct Offsets
        {
            static constexpr std::uintptr_t PointArray = 0xE0;
            static constexpr std::uintptr_t ParentData = 0x280;
            static constexpr std::uintptr_t InheritedProperties = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointArray", 0xE0, "StructProperty"},
            {"ParentData", 0x280, "ObjectProperty"},
            {"InheritedProperties", 0x288, "UInt32Property"},
        }};
    };

    struct PCGPointData
    {
        static constexpr std::string_view Name = "PCGPointData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBasePointData";
        struct Offsets
        {
            static constexpr std::uintptr_t Points = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Points", 0xD8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetPoint",
            "GetPoints",
            "GetPointsCopy",
            "SetPoints",
        }};
    };

    struct PCGPointDataCache
    {
        static constexpr std::string_view Name = "PCGPointDataCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPointData = 0x0;
            static constexpr std::uintptr_t CachedBoundedPointDataBoxes = 0x8;
            static constexpr std::uintptr_t CachedBoundedPointData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedPointData", 0x0, "ObjectProperty"},
            {"CachedBoundedPointDataBoxes", 0x8, "ArrayProperty"},
            {"CachedBoundedPointData", 0x18, "ArrayProperty"},
        }};
    };

    struct PCGPointDeletionDelta
    {
        static constexpr std::string_view Name = "PCGPointDeletionDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPointDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginalTransform = 0x10;
            static constexpr std::uintptr_t Bounds = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OriginalTransform", 0x10, "StructProperty"},
            {"Bounds", 0x70, "StructProperty"},
        }};
    };

    struct PCGPointDeltaBase
    {
        static constexpr std::string_view Name = "PCGPointDeltaBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginalTransform = 0x10;
            static constexpr std::uintptr_t Bounds = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OriginalTransform", 0x10, "StructProperty"},
            {"Bounds", 0x70, "StructProperty"},
        }};
    };

    struct PCGPointExtentsModifierSettings
    {
        static constexpr std::string_view Name = "PCGPointExtentsModifierSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Extents = 0xA8;
            static constexpr std::uintptr_t Mode = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Extents", 0xA8, "StructProperty"},
            {"Mode", 0xC0, "EnumProperty"},
        }};
    };

    struct PCGPointFromMeshSettings
    {
        static constexpr std::string_view Name = "PCGPointFromMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0xA8;
            static constexpr std::uintptr_t MeshPathAttributeName = 0xC8;
            static constexpr std::uintptr_t bSynchronousLoad = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mesh", 0xA8, "SoftObjectProperty"},
            {"MeshPathAttributeName", 0xC8, "NameProperty"},
            {"bSynchronousLoad", 0xCC, "BoolProperty"},
        }};
    };

    struct PCGPointInputRange
    {
        static constexpr std::string_view Name = "PCGPointInputRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PointData = 0x0;
            static constexpr std::uintptr_t RangeStartIndex = 0x8;
            static constexpr std::uintptr_t RangeSize = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointData", 0x0, "ObjectProperty"},
            {"RangeStartIndex", 0x8, "IntProperty"},
            {"RangeSize", 0xC, "IntProperty"},
        }};
    };

    struct PCGPointInsertionDelta
    {
        static constexpr std::string_view Name = "PCGPointInsertionDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InsertedPoints = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InsertedPoints", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGPointMatchAndSetSettings
    {
        static constexpr std::string_view Name = "PCGPointMatchAndSetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchAndSetType = 0xA8;
            static constexpr std::uintptr_t MatchAndSetInstance = 0xB0;
            static constexpr std::uintptr_t SetTarget = 0xB8;
            static constexpr std::uintptr_t SetTargetType = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MatchAndSetType", 0xA8, "ClassProperty"},
            {"MatchAndSetInstance", 0xB0, "ObjectProperty"},
            {"SetTarget", 0xB8, "StructProperty"},
            {"SetTargetType", 0xE8, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMatchAndSetType",
        }};
    };

    struct PCGPointNeighborhoodSettings
    {
        static constexpr std::string_view Name = "PCGPointNeighborhoodSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchDistance = 0xA8;
            static constexpr std::uintptr_t bSetDistanceToAttribute = 0xB0;
            static constexpr std::uintptr_t DistanceAttribute = 0xB4;
            static constexpr std::uintptr_t bSetAveragePositionToAttribute = 0xB8;
            static constexpr std::uintptr_t AveragePositionAttribute = 0xBC;
            static constexpr std::uintptr_t SetDensity = 0xC0;
            static constexpr std::uintptr_t bSetAveragePosition = 0xC4;
            static constexpr std::uintptr_t bSetAverageColor = 0xC5;
            static constexpr std::uintptr_t bWeightedAverage = 0xC6;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SearchDistance", 0xA8, "DoubleProperty"},
            {"bSetDistanceToAttribute", 0xB0, "BoolProperty"},
            {"DistanceAttribute", 0xB4, "NameProperty"},
            {"bSetAveragePositionToAttribute", 0xB8, "BoolProperty"},
            {"AveragePositionAttribute", 0xBC, "NameProperty"},
            {"SetDensity", 0xC0, "EnumProperty"},
            {"bSetAveragePosition", 0xC4, "BoolProperty"},
            {"bSetAverageColor", 0xC5, "BoolProperty"},
            {"bWeightedAverage", 0xC6, "BoolProperty"},
        }};
    };

    struct PCGPointOutputRange
    {
        static constexpr std::string_view Name = "PCGPointOutputRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PointData = 0x0;
            static constexpr std::uintptr_t RangeStartIndex = 0x8;
            static constexpr std::uintptr_t RangeSize = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PointData", 0x0, "ObjectProperty"},
            {"RangeStartIndex", 0x8, "IntProperty"},
            {"RangeSize", 0xC, "IntProperty"},
        }};
    };

    struct PCGPointTransformDelta
    {
        static constexpr std::string_view Name = "PCGPointTransformDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPointDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformOverride = 0xB0;
            static constexpr std::uintptr_t bOverridePosition = 0x110;
            static constexpr std::uintptr_t bOverrideRotation = 0x111;
            static constexpr std::uintptr_t bOverrideScale = 0x112;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TransformOverride", 0xB0, "StructProperty"},
            {"bOverridePosition", 0x110, "BoolProperty"},
            {"bOverrideRotation", 0x111, "BoolProperty"},
            {"bOverrideScale", 0x112, "BoolProperty"},
        }};
    };

    struct PCGPointTransformOffsetDelta
    {
        static constexpr std::string_view Name = "PCGPointTransformOffsetDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPointDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformOffset = 0xB0;
            static constexpr std::uintptr_t bOffsetPosition = 0x110;
            static constexpr std::uintptr_t bOffsetRotation = 0x111;
            static constexpr std::uintptr_t bOffsetScale = 0x112;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TransformOffset", 0xB0, "StructProperty"},
            {"bOffsetPosition", 0x110, "BoolProperty"},
            {"bOffsetRotation", 0x111, "BoolProperty"},
            {"bOffsetScale", 0x112, "BoolProperty"},
        }};
    };

    struct PCGPolyLineData
    {
        static constexpr std::string_view Name = "PCGPolyLineData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t PointDataCache = 0x88;
            static constexpr std::uintptr_t PointArrayDataCache = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PointDataCache", 0x88, "StructProperty"},
            {"PointArrayDataCache", 0xB0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "GetAlphaAtDistance",
            "GetCurvatureAtDistance",
            "GetDistanceAtSegmentStart",
            "GetInputKeyAtAlpha",
            "GetInputKeyAtDistance",
            "GetLength",
            "GetLocationAtAlpha",
            "GetLocationAtDistance",
            "GetNumSegments",
            "GetNumVertices",
            "GetSegmentLength",
            "GetTangentsAtSegmentStart",
            "GetTransform",
            "GetTransformAtAlpha",
            "K2_GetTransformAtDistance",
            "WriteMetadataToPoint",
            "isClosed",
        }};
    };

    struct PCGPolygon2DData
    {
        static constexpr std::string_view Name = "PCGPolygon2DData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGPolyLineData";
        struct Offsets
        {
            static constexpr std::uintptr_t VertexEntryKeys = 0x108;
            static constexpr std::uintptr_t Transform = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VertexEntryKeys", 0x108, "ArrayProperty"},
            {"Transform", 0x120, "StructProperty"},
        }};
    };

    struct PCGPolygon2DDataDelta
    {
        static constexpr std::string_view Name = "PCGPolygon2DDataDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginalStartTransform = 0x10;
            static constexpr std::uintptr_t PolygonOverride = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OriginalStartTransform", 0x10, "StructProperty"},
            {"PolygonOverride", 0x70, "ObjectProperty"},
        }};
    };

    struct PCGPolygon2DInteriorSurfaceData
    {
        static constexpr std::string_view Name = "PCGPolygon2DInteriorSurfaceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t Polygon = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Polygon", 0x180, "ObjectProperty"},
        }};
    };

    struct PCGPolygon2DOperationSettings
    {
        static constexpr std::string_view Name = "PCGPolygon2DOperationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t MetadataMode = 0xA9;
            static constexpr std::uintptr_t SplineMaxDiscretizationError = 0xB0;
            static constexpr std::uintptr_t bQuiet = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"MetadataMode", 0xA9, "EnumProperty"},
            {"SplineMaxDiscretizationError", 0xB0, "DoubleProperty"},
            {"bQuiet", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGPostRayTraceDataInterface
    {
        static constexpr std::string_view Name = "PCGPostRayTraceDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGPostRayTraceDataProvider
    {
        static constexpr std::string_view Name = "PCGPostRayTraceDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGPostRayTraceKernel
    {
        static constexpr std::string_view Name = "PCGPostRayTraceKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGPreConfiguredSettingsInfo
    {
        static constexpr std::string_view Name = "PCGPreConfiguredSettingsInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGPreconfiguredInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t PreconfiguredIndex = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreconfiguredIndex", 0x0, "IntProperty"},
            {"Label", 0x8, "TextProperty"},
        }};
    };

    struct PCGPreRayTraceKernel
    {
        static constexpr std::string_view Name = "PCGPreRayTraceKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGPreconfiguredInfo
    {
        static constexpr std::string_view Name = "PCGPreconfiguredInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreconfiguredIndex = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreconfiguredIndex", 0x0, "IntProperty"},
            {"Label", 0x8, "TextProperty"},
        }};
    };

    struct PCGPrimitiveData
    {
        static constexpr std::string_view Name = "PCGPrimitiveData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t VoxelSize = 0xE0;
            static constexpr std::uintptr_t Primitive = 0xF8;
            static constexpr std::uintptr_t CachedBounds = 0x100;
            static constexpr std::uintptr_t CachedStrictBounds = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VoxelSize", 0xE0, "StructProperty"},
            {"Primitive", 0xF8, "WeakObjectProperty"},
            {"CachedBounds", 0x100, "StructProperty"},
            {"CachedStrictBounds", 0x138, "StructProperty"},
        }};
    };

    struct PCGPrintElementSettings
    {
        static constexpr std::string_view Name = "PCGPrintElementSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PrintString = 0xA8;
            static constexpr std::uintptr_t Verbosity = 0xB8;
            static constexpr std::uintptr_t CustomPrefix = 0xC0;
            static constexpr std::uintptr_t bDisplayOnNode = 0xD0;
            static constexpr std::uintptr_t bPrintPerComponent = 0xD1;
            static constexpr std::uintptr_t bPrefixWithOwner = 0xD2;
            static constexpr std::uintptr_t bPrefixWithComponent = 0xD3;
            static constexpr std::uintptr_t bPrefixWithGraph = 0xD4;
            static constexpr std::uintptr_t bPrefixWithNode = 0xD5;
            static constexpr std::uintptr_t bEnablePrint = 0xD6;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PrintString", 0xA8, "StrProperty"},
            {"Verbosity", 0xB8, "EnumProperty"},
            {"CustomPrefix", 0xC0, "StrProperty"},
            {"bDisplayOnNode", 0xD0, "BoolProperty"},
            {"bPrintPerComponent", 0xD1, "BoolProperty"},
            {"bPrefixWithOwner", 0xD2, "BoolProperty"},
            {"bPrefixWithComponent", 0xD3, "BoolProperty"},
            {"bPrefixWithGraph", 0xD4, "BoolProperty"},
            {"bPrefixWithNode", 0xD5, "BoolProperty"},
            {"bEnablePrint", 0xD6, "BoolProperty"},
        }};
    };

    struct PCGPrintGrammarSettings
    {
        static constexpr std::string_view Name = "PCGPrintGrammarSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Grammar = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Grammar", 0xA8, "StrProperty"},
        }};
    };

    struct PCGProceduralISKMComponent
    {
        static constexpr std::string_view Name = "PCGProceduralISKMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkinnedMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInstances = 0x900;
            static constexpr std::uintptr_t NumCustomDataFloats = 0x904;
            static constexpr std::uintptr_t WorldBounds = 0x908;
            static constexpr std::uintptr_t TransformProvider = 0x940;
            static constexpr std::uintptr_t InstanceMinDrawDistance = 0x948;
            static constexpr std::uintptr_t InstanceStartCullDistance = 0x94C;
            static constexpr std::uintptr_t InstanceEndCullDistance = 0x950;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NumInstances", 0x900, "IntProperty"},
            {"NumCustomDataFloats", 0x904, "IntProperty"},
            {"WorldBounds", 0x908, "StructProperty"},
            {"TransformProvider", 0x940, "ObjectProperty"},
            {"InstanceMinDrawDistance", 0x948, "IntProperty"},
            {"InstanceStartCullDistance", 0x94C, "IntProperty"},
            {"InstanceEndCullDistance", 0x950, "IntProperty"},
        }};
    };

    struct PCGProceduralISMComponent
    {
        static constexpr std::string_view Name = "PCGProceduralISMComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInstances = 0x6A0;
            static constexpr std::uintptr_t NumCustomDataFloats = 0x6A4;
            static constexpr std::uintptr_t WorldBounds = 0x6A8;
            static constexpr std::uintptr_t InstanceMinDrawDistance = 0x6E0;
            static constexpr std::uintptr_t InstanceStartCullDistance = 0x6E4;
            static constexpr std::uintptr_t InstanceEndCullDistance = 0x6E8;
            static constexpr std::uintptr_t LocalBounds = 0x6F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NumInstances", 0x6A0, "IntProperty"},
            {"NumCustomDataFloats", 0x6A4, "IntProperty"},
            {"WorldBounds", 0x6A8, "StructProperty"},
            {"InstanceMinDrawDistance", 0x6E0, "IntProperty"},
            {"InstanceStartCullDistance", 0x6E4, "IntProperty"},
            {"InstanceEndCullDistance", 0x6E8, "IntProperty"},
            {"LocalBounds", 0x6F0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "ClearInstances",
            "GetBounds",
            "GetCullDistances",
            "GetMinDrawDistance",
            "GetNumCustomDataFloats",
            "GetNumInstances",
            "SetBounds",
            "SetCullDistances",
            "SetLocalBounds",
            "SetMinDrawDistance",
            "SetNumCustomDataFloats",
            "SetNumInstances",
        }};
    };

    struct PCGProceduralISMComponentDescriptor
    {
        static constexpr std::string_view Name = "PCGProceduralISMComponentDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ProceduralISMComponentDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentTags = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentTags", 0xD0, "ArrayProperty"},
        }};
    };

    struct PCGProjectionData
    {
        static constexpr std::string_view Name = "PCGProjectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0xE0;
            static constexpr std::uintptr_t Target = 0xE8;
            static constexpr std::uintptr_t CachedBounds = 0xF0;
            static constexpr std::uintptr_t CachedStrictBounds = 0x128;
            static constexpr std::uintptr_t ProjectionParams = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Source", 0xE0, "ObjectProperty"},
            {"Target", 0xE8, "ObjectProperty"},
            {"CachedBounds", 0xF0, "StructProperty"},
            {"CachedStrictBounds", 0x128, "StructProperty"},
            {"ProjectionParams", 0x160, "StructProperty"},
        }};
    };

    struct PCGProjectionParams
    {
        static constexpr std::string_view Name = "PCGProjectionParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bProjectPositions = 0x0;
            static constexpr std::uintptr_t bProjectRotations = 0x1;
            static constexpr std::uintptr_t bProjectScales = 0x2;
            static constexpr std::uintptr_t ColorBlendMode = 0x3;
            static constexpr std::uintptr_t AttributeList = 0x8;
            static constexpr std::uintptr_t AttributeMode = 0x18;
            static constexpr std::uintptr_t AttributeMergeOperation = 0x19;
            static constexpr std::uintptr_t TagMergeOperation = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bProjectPositions", 0x0, "BoolProperty"},
            {"bProjectRotations", 0x1, "BoolProperty"},
            {"bProjectScales", 0x2, "BoolProperty"},
            {"ColorBlendMode", 0x3, "EnumProperty"},
            {"AttributeList", 0x8, "StrProperty"},
            {"AttributeMode", 0x18, "EnumProperty"},
            {"AttributeMergeOperation", 0x19, "EnumProperty"},
            {"TagMergeOperation", 0x1A, "EnumProperty"},
        }};
    };

    struct PCGProjectionSettings
    {
        static constexpr std::string_view Name = "PCGProjectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionParams = 0xA8;
            static constexpr std::uintptr_t bForceCollapseToPoint = 0xC8;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0xC9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProjectionParams", 0xA8, "StructProperty"},
            {"bForceCollapseToPoint", 0xC8, "BoolProperty"},
            {"bKeepZeroDensityPoints", 0xC9, "BoolProperty"},
        }};
    };

    struct PCGPropertyAliases
    {
        static constexpr std::string_view Name = "PCGPropertyAliases";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Aliases = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Aliases", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGProxyForGPUData
    {
        static constexpr std::string_view Name = "PCGProxyForGPUData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t DataIndexInCollection = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataIndexInCollection", 0x48, "IntProperty"},
        }};
    };

    struct PCGQualityBranchSettings
    {
        static constexpr std::string_view Name = "PCGQualityBranchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseLowPin = 0xA8;
            static constexpr std::uintptr_t bUseMediumPin = 0xA9;
            static constexpr std::uintptr_t bUseHighPin = 0xAA;
            static constexpr std::uintptr_t bUseEpicPin = 0xAB;
            static constexpr std::uintptr_t bUseCinematicPin = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseLowPin", 0xA8, "BoolProperty"},
            {"bUseMediumPin", 0xA9, "BoolProperty"},
            {"bUseHighPin", 0xAA, "BoolProperty"},
            {"bUseEpicPin", 0xAB, "BoolProperty"},
            {"bUseCinematicPin", 0xAC, "BoolProperty"},
        }};
    };

    struct PCGQualitySelectSettings
    {
        static constexpr std::string_view Name = "PCGQualitySelectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseLowPin = 0xA8;
            static constexpr std::uintptr_t bUseMediumPin = 0xA9;
            static constexpr std::uintptr_t bUseHighPin = 0xAA;
            static constexpr std::uintptr_t bUseEpicPin = 0xAB;
            static constexpr std::uintptr_t bUseCinematicPin = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseLowPin", 0xA8, "BoolProperty"},
            {"bUseMediumPin", 0xA9, "BoolProperty"},
            {"bUseHighPin", 0xAA, "BoolProperty"},
            {"bUseEpicPin", 0xAB, "BoolProperty"},
            {"bUseCinematicPin", 0xAC, "BoolProperty"},
        }};
    };

    struct PCGRandomChoiceSettings
    {
        static constexpr std::string_view Name = "PCGRandomChoiceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bFixedMode = 0xA8;
            static constexpr std::uintptr_t FixedNumber = 0xAC;
            static constexpr std::uintptr_t Ratio = 0xB0;
            static constexpr std::uintptr_t bOutputDiscardedEntries = 0xB4;
            static constexpr std::uintptr_t bHasCustomSeedSource = 0xB5;
            static constexpr std::uintptr_t CustomSeedSource = 0xB8;
            static constexpr std::uintptr_t bUseFirstAttributeOnly = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bFixedMode", 0xA8, "BoolProperty"},
            {"FixedNumber", 0xAC, "IntProperty"},
            {"Ratio", 0xB0, "FloatProperty"},
            {"bOutputDiscardedEntries", 0xB4, "BoolProperty"},
            {"bHasCustomSeedSource", 0xB5, "BoolProperty"},
            {"CustomSeedSource", 0xB8, "StructProperty"},
            {"bUseFirstAttributeOnly", 0xE8, "BoolProperty"},
        }};
    };

    struct PCGRawBufferData
    {
        static constexpr std::string_view Name = "PCGRawBufferData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x48, "ArrayProperty"},
        }};
    };

    struct PCGRawBufferDataInterface
    {
        static constexpr std::string_view Name = "PCGRawBufferDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresZeroInitialization = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresZeroInitialization", 0x88, "BoolProperty"},
        }};
    };

    struct PCGRawBufferDataProvider
    {
        static constexpr std::string_view Name = "PCGRawBufferDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t DataToUpload = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataToUpload", 0xA8, "ObjectProperty"},
        }};
    };

    struct PCGRemoveActorsFromWorldSettings
    {
        static constexpr std::string_view Name = "PCGRemoveActorsFromWorldSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t bSilenceActorNotFoundWarnings = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorReferenceAttribute", 0xA8, "StructProperty"},
            {"bSilenceActorNotFoundWarnings", 0xD8, "BoolProperty"},
        }};
    };

    struct PCGRemoveEmptyDataSettings
    {
        static constexpr std::string_view Name = "PCGRemoveEmptyDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGRenderTargetData
    {
        static constexpr std::string_view Name = "PCGRenderTargetData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTexture2DSingleBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderTarget = 0x250;
            static constexpr std::uintptr_t TextureIndex = 0x258;
            static constexpr std::uintptr_t bOwnsRenderTarget = 0x25C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RenderTarget", 0x250, "ObjectProperty"},
            {"TextureIndex", 0x258, "IntProperty"},
            {"bOwnsRenderTarget", 0x25C, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Initialize",
            "K2_Initialize",
            "K2_InitializeWithIndex",
        }};
    };

    struct PCGReplaceDataByTagSettings
    {
        static constexpr std::string_view Name = "PCGReplaceDataByTagSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0xA8, "ArrayProperty"},
        }};
    };

    struct PCGReplaceTagsSettings
    {
        static constexpr std::string_view Name = "PCGReplaceTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedTags = 0xA8;
            static constexpr std::uintptr_t ReplacedTags = 0xB8;
            static constexpr std::uintptr_t bTokenizeOnWhiteSpace = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectedTags", 0xA8, "StrProperty"},
            {"ReplacedTags", 0xB8, "StrProperty"},
            {"bTokenizeOnWhiteSpace", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGRerouteSettings
    {
        static constexpr std::string_view Name = "PCGRerouteSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGResetPointCenterSettings
    {
        static constexpr std::string_view Name = "PCGResetPointCenterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PointCenterLocation = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PointCenterLocation", 0xA8, "StructProperty"},
        }};
    };

    struct PCGResourceData
    {
        static constexpr std::string_view Name = "PCGResourceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t UID = 0x28;
            static constexpr std::uintptr_t MetaData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UID", 0x28, "UInt64Property"},
            {"MetaData", 0x38, "ObjectProperty"},
        }};
    };

    struct PCGReverseSplineSettings
    {
        static constexpr std::string_view Name = "PCGReverseSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0xA8;
            static constexpr std::uintptr_t bFlipClockwiseComputationResult = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operation", 0xA8, "EnumProperty"},
            {"bFlipClockwiseComputationResult", 0xAC, "BoolProperty"},
        }};
    };

    struct PCGRuntimeGenExecutionSource
    {
        static constexpr std::string_view Name = "PCGRuntimeGenExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalSources = 0x60;
            static constexpr std::uintptr_t PerPinGeneratedOutput = 0x80;
            static constexpr std::uintptr_t ManagedResourceContainer = 0x98;
            static constexpr std::uintptr_t SelfData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocalSources", 0x60, "SetProperty"},
            {"PerPinGeneratedOutput", 0x80, "MapProperty"},
            {"ManagedResourceContainer", 0x98, "StructProperty"},
            {"SelfData", 0xD8, "ObjectProperty"},
        }};
    };

    struct PCGRuntimeGenerationRadii
    {
        static constexpr std::string_view Name = "PCGRuntimeGenerationRadii";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RadiusUnbounded = 0x0;
            static constexpr std::uintptr_t Radius400 = 0x28;
            static constexpr std::uintptr_t Radius800 = 0x50;
            static constexpr std::uintptr_t Radius1600 = 0x78;
            static constexpr std::uintptr_t Radius3200 = 0xA0;
            static constexpr std::uintptr_t Radius6400 = 0xC8;
            static constexpr std::uintptr_t Radius12800 = 0xF0;
            static constexpr std::uintptr_t Radius25600 = 0x118;
            static constexpr std::uintptr_t Radius51200 = 0x140;
            static constexpr std::uintptr_t Radius102400 = 0x168;
            static constexpr std::uintptr_t Radius204800 = 0x190;
            static constexpr std::uintptr_t CleanupRadiusScalar = 0x1B8;
            static constexpr std::uintptr_t GenerationRadius = 0x1E8;
            static constexpr std::uintptr_t GenerationRadius400 = 0x1F0;
            static constexpr std::uintptr_t GenerationRadius800 = 0x1F8;
            static constexpr std::uintptr_t GenerationRadius1600 = 0x200;
            static constexpr std::uintptr_t GenerationRadius3200 = 0x208;
            static constexpr std::uintptr_t GenerationRadius6400 = 0x210;
            static constexpr std::uintptr_t GenerationRadius12800 = 0x218;
            static constexpr std::uintptr_t GenerationRadius25600 = 0x220;
            static constexpr std::uintptr_t GenerationRadius51200 = 0x228;
            static constexpr std::uintptr_t GenerationRadius102400 = 0x230;
            static constexpr std::uintptr_t GenerationRadius204800 = 0x238;
            static constexpr std::uintptr_t CleanupRadiusMultiplier = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"RadiusUnbounded", 0x0, "StructProperty"},
            {"Radius400", 0x28, "StructProperty"},
            {"Radius800", 0x50, "StructProperty"},
            {"Radius1600", 0x78, "StructProperty"},
            {"Radius3200", 0xA0, "StructProperty"},
            {"Radius6400", 0xC8, "StructProperty"},
            {"Radius12800", 0xF0, "StructProperty"},
            {"Radius25600", 0x118, "StructProperty"},
            {"Radius51200", 0x140, "StructProperty"},
            {"Radius102400", 0x168, "StructProperty"},
            {"Radius204800", 0x190, "StructProperty"},
            {"CleanupRadiusScalar", 0x1B8, "StructProperty"},
            {"GenerationRadius", 0x1E8, "DoubleProperty"},
            {"GenerationRadius400", 0x1F0, "DoubleProperty"},
            {"GenerationRadius800", 0x1F8, "DoubleProperty"},
            {"GenerationRadius1600", 0x200, "DoubleProperty"},
            {"GenerationRadius3200", 0x208, "DoubleProperty"},
            {"GenerationRadius6400", 0x210, "DoubleProperty"},
            {"GenerationRadius12800", 0x218, "DoubleProperty"},
            {"GenerationRadius25600", 0x220, "DoubleProperty"},
            {"GenerationRadius51200", 0x228, "DoubleProperty"},
            {"GenerationRadius102400", 0x230, "DoubleProperty"},
            {"GenerationRadius204800", 0x238, "DoubleProperty"},
            {"CleanupRadiusMultiplier", 0x240, "DoubleProperty"},
        }};
    };

    struct PCGSampleTextureSettings
    {
        static constexpr std::string_view Name = "PCGSampleTextureSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureMappingMethod = 0xA8;
            static constexpr std::uintptr_t UVCoordinatesAttribute = 0xB0;
            static constexpr std::uintptr_t TilingMode = 0xE0;
            static constexpr std::uintptr_t DensityMergeFunction = 0xE1;
            static constexpr std::uintptr_t bClampOutputDensity = 0xE2;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TextureMappingMethod", 0xA8, "EnumProperty"},
            {"UVCoordinatesAttribute", 0xB0, "StructProperty"},
            {"TilingMode", 0xE0, "EnumProperty"},
            {"DensityMergeFunction", 0xE1, "EnumProperty"},
            {"bClampOutputDensity", 0xE2, "BoolProperty"},
        }};
    };

    struct PCGSanityCheckPointDataSettings
    {
        static constexpr std::string_view Name = "PCGSanityCheckPointDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPointCount = 0xA8;
            static constexpr std::uintptr_t MaxPointCount = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinPointCount", 0xA8, "IntProperty"},
            {"MaxPointCount", 0xAC, "IntProperty"},
        }};
    };

    struct PCGSaveDataAssetSettings
    {
        static constexpr std::string_view Name = "PCGSaveDataAssetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Pins = 0xA8;
            static constexpr std::uintptr_t CustomDataCollectionExporterClass = 0xB8;
            static constexpr std::uintptr_t Params = 0xC0;
            static constexpr std::uintptr_t AssetDescription = 0xF0;
            static constexpr std::uintptr_t AssetColor = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Pins", 0xA8, "ArrayProperty"},
            {"CustomDataCollectionExporterClass", 0xB8, "ClassProperty"},
            {"Params", 0xC0, "StructProperty"},
            {"AssetDescription", 0xF0, "StrProperty"},
            {"AssetColor", 0x100, "StructProperty"},
        }};
    };

    struct PCGSaveDataViewSettings
    {
        static constexpr std::string_view Name = "PCGSaveDataViewSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ConverterClass = 0xA8;
            static constexpr std::uintptr_t ConverterParameters = 0xB0;
            static constexpr std::uintptr_t FilePath = 0xC0;
            static constexpr std::uintptr_t bOverwriteExistingFile = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConverterClass", 0xA8, "ClassProperty"},
            {"ConverterParameters", 0xB0, "StructProperty"},
            {"FilePath", 0xC0, "StructProperty"},
            {"bOverwriteExistingFile", 0xD0, "BoolProperty"},
        }};
    };

    struct PCGSaveTextureToAssetSettings
    {
        static constexpr std::string_view Name = "PCGSaveTextureToAssetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ExporterParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExporterParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGSceneCaptureSettings
    {
        static constexpr std::string_view Name = "PCGSceneCaptureSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PixelFormat = 0xA8;
            static constexpr std::uintptr_t CaptureSource = 0xA9;
            static constexpr std::uintptr_t bOnlyCaptureContentMatchingIncludedTags = 0xAA;
            static constexpr std::uintptr_t IncludedTags = 0xB0;
            static constexpr std::uintptr_t ExcludedTags = 0xC0;
            static constexpr std::uintptr_t bExcludePCGContent = 0xD0;
            static constexpr std::uintptr_t OrientationMode = 0xD1;
            static constexpr std::uintptr_t CaptureLocation = 0xD8;
            static constexpr std::uintptr_t CaptureRotation = 0xF0;
            static constexpr std::uintptr_t CaptureHalfExtents = 0x110;
            static constexpr std::uintptr_t bCaptureFromTopOfExtents = 0x128;
            static constexpr std::uintptr_t TexelSize = 0x12C;
            static constexpr std::uintptr_t Filter = 0x130;
            static constexpr std::uintptr_t bSkipReadbackToCPU = 0x131;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PixelFormat", 0xA8, "ByteProperty"},
            {"CaptureSource", 0xA9, "ByteProperty"},
            {"bOnlyCaptureContentMatchingIncludedTags", 0xAA, "BoolProperty"},
            {"IncludedTags", 0xB0, "ArrayProperty"},
            {"ExcludedTags", 0xC0, "ArrayProperty"},
            {"bExcludePCGContent", 0xD0, "BoolProperty"},
            {"OrientationMode", 0xD1, "EnumProperty"},
            {"CaptureLocation", 0xD8, "StructProperty"},
            {"CaptureRotation", 0xF0, "StructProperty"},
            {"CaptureHalfExtents", 0x110, "StructProperty"},
            {"bCaptureFromTopOfExtents", 0x128, "BoolProperty"},
            {"TexelSize", 0x12C, "FloatProperty"},
            {"Filter", 0x130, "EnumProperty"},
            {"bSkipReadbackToCPU", 0x131, "BoolProperty"},
        }};
    };

    struct PCGSchedulingPolicyBase
    {
        static constexpr std::string_view Name = "PCGSchedulingPolicyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GridStreamingDependencyMode = 0x28;
            static constexpr std::uintptr_t GridsDependentOnWorldStreaming = 0x30;
            static constexpr std::uintptr_t WorldPartitionTargetGrids = 0x40;
            static constexpr std::uintptr_t WorldPartitionTargetDataLayers = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GridStreamingDependencyMode", 0x28, "EnumProperty"},
            {"GridsDependentOnWorldStreaming", 0x30, "ArrayProperty"},
            {"WorldPartitionTargetGrids", 0x40, "SetProperty"},
            {"WorldPartitionTargetDataLayers", 0x50, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetWorldPartitionTargetDataLayers",
        }};
    };

    struct PCGSchedulingPolicyDistanceAndDirection
    {
        static constexpr std::string_view Name = "PCGSchedulingPolicyDistanceAndDirection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSchedulingPolicyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDistance = 0x70;
            static constexpr std::uintptr_t bUseDirection = 0x71;
            static constexpr std::uintptr_t DirectionWeight = 0x74;
            static constexpr std::uintptr_t bUseFrustumCulling = 0x78;
            static constexpr std::uintptr_t GenerateBoundsModifier = 0x7C;
            static constexpr std::uintptr_t CleanupBoundsModifier = 0x80;
            static constexpr std::uintptr_t NetworkMode = 0x84;
            static constexpr std::uintptr_t DistanceWeight = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bUseDistance", 0x70, "BoolProperty"},
            {"bUseDirection", 0x71, "BoolProperty"},
            {"DirectionWeight", 0x74, "FloatProperty"},
            {"bUseFrustumCulling", 0x78, "BoolProperty"},
            {"GenerateBoundsModifier", 0x7C, "FloatProperty"},
            {"CleanupBoundsModifier", 0x80, "FloatProperty"},
            {"NetworkMode", 0x84, "EnumProperty"},
            {"DistanceWeight", 0x88, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDistanceWeight_DEPRECATED",
            "SetDistanceWeight_DEPRECATED",
        }};
    };

    struct PCGSelectGrammarCriteriaAttributeNames
    {
        static constexpr std::string_view Name = "PCGSelectGrammarCriteriaAttributeNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyAttributeName = 0x0;
            static constexpr std::uintptr_t ComparatorAttributeName = 0x4;
            static constexpr std::uintptr_t FirstValueAttributeName = 0x8;
            static constexpr std::uintptr_t SecondValueAttributeName = 0xC;
            static constexpr std::uintptr_t GrammarAttributeName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"KeyAttributeName", 0x0, "NameProperty"},
            {"ComparatorAttributeName", 0x4, "NameProperty"},
            {"FirstValueAttributeName", 0x8, "NameProperty"},
            {"SecondValueAttributeName", 0xC, "NameProperty"},
            {"GrammarAttributeName", 0x10, "NameProperty"},
        }};
    };

    struct PCGSelectGrammarCriterion
    {
        static constexpr std::string_view Name = "PCGSelectGrammarCriterion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Comparator = 0x4;
            static constexpr std::uintptr_t FirstValue = 0x8;
            static constexpr std::uintptr_t SecondValue = 0x10;
            static constexpr std::uintptr_t Grammar = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x0, "NameProperty"},
            {"Comparator", 0x4, "EnumProperty"},
            {"FirstValue", 0x8, "DoubleProperty"},
            {"SecondValue", 0x10, "DoubleProperty"},
            {"Grammar", 0x18, "StrProperty"},
        }};
    };

    struct PCGSelectGrammarSettings
    {
        static constexpr std::string_view Name = "PCGSelectGrammarSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bKeyAsAttribute = 0xA8;
            static constexpr std::uintptr_t Key = 0xAC;
            static constexpr std::uintptr_t KeyAttribute = 0xB0;
            static constexpr std::uintptr_t ComparedValueAttribute = 0xE0;
            static constexpr std::uintptr_t bCriteriaAsInput = 0x110;
            static constexpr std::uintptr_t Criteria = 0x118;
            static constexpr std::uintptr_t bCopyKeyForUnselectedGrammar = 0x128;
            static constexpr std::uintptr_t bRemapCriteriaAttributeNames = 0x129;
            static constexpr std::uintptr_t CriteriaAttributeNames = 0x12C;
            static constexpr std::uintptr_t OutputGrammarAttribute = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bKeyAsAttribute", 0xA8, "BoolProperty"},
            {"Key", 0xAC, "NameProperty"},
            {"KeyAttribute", 0xB0, "StructProperty"},
            {"ComparedValueAttribute", 0xE0, "StructProperty"},
            {"bCriteriaAsInput", 0x110, "BoolProperty"},
            {"Criteria", 0x118, "ArrayProperty"},
            {"bCopyKeyForUnselectedGrammar", 0x128, "BoolProperty"},
            {"bRemapCriteriaAttributeNames", 0x129, "BoolProperty"},
            {"CriteriaAttributeNames", 0x12C, "StructProperty"},
            {"OutputGrammarAttribute", 0x140, "StructProperty"},
        }};
    };

    struct PCGSelectPointsSettings
    {
        static constexpr std::string_view Name = "PCGSelectPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Ratio = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Ratio", 0xA8, "FloatProperty"},
        }};
    };

    struct PCGSelectionKey
    {
        static constexpr std::string_view Name = "PCGSelectionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorFilter = 0x0;
            static constexpr std::uintptr_t Selection = 0x1;
            static constexpr std::uintptr_t Tag = 0x4;
            static constexpr std::uintptr_t SelectionClass = 0x8;
            static constexpr std::uintptr_t ObjectPath = 0x10;
            static constexpr std::uintptr_t OptionalExtraDependency = 0x28;
            static constexpr std::uintptr_t CustomKey = 0x30;
            static constexpr std::uintptr_t OptionalBounds = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ActorFilter", 0x0, "EnumProperty"},
            {"Selection", 0x1, "EnumProperty"},
            {"Tag", 0x4, "NameProperty"},
            {"SelectionClass", 0x8, "ClassProperty"},
            {"ObjectPath", 0x10, "StructProperty"},
            {"OptionalExtraDependency", 0x28, "ClassProperty"},
            {"CustomKey", 0x30, "StructProperty"},
            {"OptionalBounds", 0x40, "ArrayProperty"},
        }};
    };

    struct PCGSelfPruningParameters
    {
        static constexpr std::string_view Name = "PCGSelfPruningParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PruningType = 0x0;
            static constexpr std::uintptr_t ComparisonSource = 0x8;
            static constexpr std::uintptr_t RadiusSimilarityFactor = 0x38;
            static constexpr std::uintptr_t bRandomizedPruning = 0x3C;
            static constexpr std::uintptr_t bUseCollisionAttribute = 0x3D;
            static constexpr std::uintptr_t CollisionAttribute = 0x40;
            static constexpr std::uintptr_t CollisionQueryFlag = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PruningType", 0x0, "EnumProperty"},
            {"ComparisonSource", 0x8, "StructProperty"},
            {"RadiusSimilarityFactor", 0x38, "FloatProperty"},
            {"bRandomizedPruning", 0x3C, "BoolProperty"},
            {"bUseCollisionAttribute", 0x3D, "BoolProperty"},
            {"CollisionAttribute", 0x40, "StructProperty"},
            {"CollisionQueryFlag", 0x70, "EnumProperty"},
        }};
    };

    struct PCGSelfPruningSettings
    {
        static constexpr std::string_view Name = "PCGSelfPruningSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0xA8, "StructProperty"},
        }};
    };

    struct PCGSettings
    {
        static constexpr std::string_view Name = "PCGSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_GetTypeUnionOfIncidentEdges",
            "GetTypeUnionIDOfIncidentEdges",
            "UseSeed",
        }};
    };

    struct PCGSettingsDefaultValueProvider
    {
        static constexpr std::string_view Name = "PCGSettingsDefaultValueProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGSettingsHelpers
    {
        static constexpr std::string_view Name = "PCGSettingsHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetCommonlyUsedProperties",
        }};
    };

    struct PCGSettingsInlineConstant
    {
        static constexpr std::string_view Name = "PCGSettingsInlineConstant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsDefaultValueProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGSettingsInstance
    {
        static constexpr std::string_view Name = "PCGSettingsInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x50, "ObjectProperty"},
        }};
    };

    struct PCGSettingsInterface
    {
        static constexpr std::string_view Name = "PCGSettingsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x48;
            static constexpr std::uintptr_t bDebug = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnabled", 0x48, "BoolProperty"},
            {"bDebug", 0x49, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CanBeDisabled",
        }};
    };

    struct PCGSettingsOverridableParam
    {
        static constexpr std::string_view Name = "PCGSettingsOverridableParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t PropertiesNames = 0x8;
            static constexpr std::uintptr_t PropertyClass = 0x18;
            static constexpr std::uintptr_t MapOfAliases = 0x20;
            static constexpr std::uintptr_t bHasNameClash = 0x30;
            static constexpr std::uintptr_t bSupportsGPU = 0x31;
            static constexpr std::uintptr_t bRequiresGPUReadback = 0x32;
            static constexpr std::uintptr_t NumContainers = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Label", 0x0, "NameProperty"},
            {"PropertiesNames", 0x8, "ArrayProperty"},
            {"PropertyClass", 0x18, "ObjectProperty"},
            {"MapOfAliases", 0x20, "MapProperty"},
            {"bHasNameClash", 0x30, "BoolProperty"},
            {"bSupportsGPU", 0x31, "BoolProperty"},
            {"bRequiresGPUReadback", 0x32, "BoolProperty"},
            {"NumContainers", 0x34, "IntProperty"},
        }};
    };

    struct PCGSettingsPropertyDefinition
    {
        static constexpr std::string_view Name = "PCGSettingsPropertyDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t FullName = 0x10;
            static constexpr std::uintptr_t ToolTip = 0x20;
            static constexpr std::uintptr_t CPPType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"FullName", 0x10, "StrProperty"},
            {"ToolTip", 0x20, "StrProperty"},
            {"CPPType", 0x30, "StrProperty"},
        }};
    };

    struct PCGSettingsWithDynamicInputs
    {
        static constexpr std::string_view Name = "PCGSettingsWithDynamicInputs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicInputPinProperties = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicInputPinProperties", 0xA8, "ArrayProperty"},
        }};
    };

    struct PCGShaderFeatureLevelSwitchSettings
    {
        static constexpr std::string_view Name = "PCGShaderFeatureLevelSwitchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGPlatformSwitchSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RHIFeatureLevelOutputs = 0xA8;
            static constexpr std::uintptr_t CookedFeatureLevel = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RHIFeatureLevelOutputs", 0xA8, "ArrayProperty"},
            {"CookedFeatureLevel", 0xB8, "IntProperty"},
        }};
    };

    struct PCGShaderFileComputeSource
    {
        static constexpr std::string_view Name = "PCGShaderFileComputeSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalSources = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalSources", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshDescriptorWrapper
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshDescriptorWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshDescriptorWrapperBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptor", 0x8, "StructProperty"},
        }};
    };

    struct PCGSkinnedMeshInstance
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGSkinnedMeshInstanceDataPackerBase
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshInstanceDataPackerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddTypeToPacking",
            "PackCustomDataFromAttributes",
            "PackInstances",
        }};
    };

    struct PCGSkinnedMeshInstanceDataPackerByAttribute
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshInstanceDataPackerByAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSkinnedMeshInstanceDataPackerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeSelectors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeSelectors", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshInstanceDataPackerByRegex
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshInstanceDataPackerByRegex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSkinnedMeshInstanceDataPackerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RegexPatterns = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegexPatterns", 0x28, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshInstanceList
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshInstanceList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x0;
            static constexpr std::uintptr_t Instances = 0x2A0;
            static constexpr std::uintptr_t PointData = 0x2B8;
            static constexpr std::uintptr_t InstancePointIndices = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Descriptor", 0x0, "StructProperty"},
            {"Instances", 0x2A0, "ArrayProperty"},
            {"PointData", 0x2B8, "WeakObjectProperty"},
            {"InstancePointIndices", 0x2C0, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshPackedCustomData
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshPackedCustomData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceIndex = 0x0;
            static constexpr std::uintptr_t NumCustomDataFloats = 0x4;
            static constexpr std::uintptr_t CustomData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SequenceIndex", 0x0, "IntProperty"},
            {"NumCustomDataFloats", 0x4, "IntProperty"},
            {"CustomData", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshSelector
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshAttribute = 0x28;
            static constexpr std::uintptr_t TemplateDescriptor = 0x58;
            static constexpr std::uintptr_t bUseAttributeMaterialOverrides = 0x2F8;
            static constexpr std::uintptr_t MaterialOverrideAttributes = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshAttribute", 0x28, "StructProperty"},
            {"TemplateDescriptor", 0x58, "StructProperty"},
            {"bUseAttributeMaterialOverrides", 0x2F8, "BoolProperty"},
            {"MaterialOverrideAttributes", 0x300, "ArrayProperty"},
        }};
    };

    struct PCGSkinnedMeshSpawnerSettings
    {
        static constexpr std::string_view Name = "PCGSkinnedMeshSpawnerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSpawnerSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshSelectorParameters = 0x150;
            static constexpr std::uintptr_t SkinnedMeshComponentPropertyOverrides = 0x158;
            static constexpr std::uintptr_t InstanceDataPackerType = 0x168;
            static constexpr std::uintptr_t InstanceDataPackerParameters = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshSelectorParameters", 0x150, "ObjectProperty"},
            {"SkinnedMeshComponentPropertyOverrides", 0x158, "ArrayProperty"},
            {"InstanceDataPackerType", 0x168, "ClassProperty"},
            {"InstanceDataPackerParameters", 0x170, "ObjectProperty"},
        }};
    };

    struct PCGSoftGraphExecutionSource
    {
        static constexpr std::string_view Name = "PCGSoftGraphExecutionSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftObjectPtr = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftObjectPtr", 0x0, "SoftObjectProperty"},
        }};
    };

    struct PCGSoftISMComponentDescriptor
    {
        static constexpr std::string_view Name = "PCGSoftISMComponentDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoftISMComponentDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentTags = 0x270;
            static constexpr std::uintptr_t AdditionalCommaSeparatedTags = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentTags", 0x270, "ArrayProperty"},
            {"AdditionalCommaSeparatedTags", 0x280, "StrProperty"},
        }};
    };

    struct PCGSoftSkinnedMeshComponentDescriptor
    {
        static constexpr std::string_view Name = "PCGSoftSkinnedMeshComponentDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoftSkinnedMeshComponentDescriptor";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentTags = 0x280;
            static constexpr std::uintptr_t AdditionalCommaSeparatedTags = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentTags", 0x280, "ArrayProperty"},
            {"AdditionalCommaSeparatedTags", 0x290, "StrProperty"},
        }};
    };

    struct PCGSortAttributeEntry
    {
        static constexpr std::string_view Name = "PCGSortAttributeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSource = 0x0;
            static constexpr std::uintptr_t SortMethod = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputSource", 0x0, "StructProperty"},
            {"SortMethod", 0x30, "EnumProperty"},
        }};
    };

    struct PCGSortAttributesSettings
    {
        static constexpr std::string_view Name = "PCGSortAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SortAttributes = 0xA8;
            static constexpr std::uintptr_t bUseStableSort = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SortAttributes", 0xA8, "ArrayProperty"},
            {"bUseStableSort", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGSortTagsSettings
    {
        static constexpr std::string_view Name = "PCGSortTagsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0xA8;
            static constexpr std::uintptr_t SortMethod = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tag", 0xA8, "NameProperty"},
            {"SortMethod", 0xAC, "EnumProperty"},
        }};
    };

    struct PCGSourceDataContainer
    {
        static constexpr std::string_view Name = "PCGSourceDataContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataStorage = 0x0;
            static constexpr std::uintptr_t DirtyGeneration = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataStorage", 0x0, "MapProperty"},
            {"DirtyGeneration", 0x14, "UInt32Property"},
        }};
    };

    struct PCGSourceDataStorageKey
    {
        static constexpr std::string_view Name = "PCGSourceDataStorageKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
            static constexpr std::uintptr_t Hash = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Label", 0x0, "NameProperty"},
            {"Hash", 0x8, "UInt64Property"},
        }};
    };

    struct PCGSourceDataStorageValue
    {
        static constexpr std::string_view Name = "PCGSourceDataStorageValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0x0, "StructProperty"},
        }};
    };

    struct PCGSpatialData
    {
        static constexpr std::string_view Name = "PCGSpatialData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x48;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0x50;
            static constexpr std::uintptr_t bHasCachedLastSelector = 0x51;
            static constexpr std::uintptr_t CachedLastSelector = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetActor", 0x48, "WeakObjectProperty"},
            {"bKeepZeroDensityPoints", 0x50, "BoolProperty"},
            {"bHasCachedLastSelector", 0x51, "BoolProperty"},
            {"CachedLastSelector", 0x58, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "CreateEmptyMetadata",
            "GetBounds",
            "GetDensityAtPosition",
            "GetDimension",
            "GetNormal",
            "GetStrictBounds",
            "HasNonTrivialTransform",
            "InitializeFromData",
            "InitializeFromDataWithParams",
            "K2_IntersectWith",
            "K2_ProjectOn",
            "K2_ProjectPoint",
            "K2_SamplePoint",
            "K2_Subtract",
            "K2_UnionWith",
            "ToBasePointDataWithContext",
            "ToPointData",
            "ToPointDataWithContext",
        }};
    };

    struct PCGSpatialDataWithPointCache
    {
        static constexpr std::string_view Name = "PCGSpatialDataWithPointCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialData";
        struct Offsets
        {
            static constexpr std::uintptr_t PointDataCache = 0x88;
            static constexpr std::uintptr_t PointArrayDataCache = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PointDataCache", 0x88, "StructProperty"},
            {"PointArrayDataCache", 0xB0, "StructProperty"},
        }};
    };

    struct PCGSpatialNoiseSettings
    {
        static constexpr std::string_view Name = "PCGSpatialNoiseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t EdgeMask2DMode = 0xAC;
            static constexpr std::uintptr_t Iterations = 0xB0;
            static constexpr std::uintptr_t bTiling = 0xB4;
            static constexpr std::uintptr_t Brightness = 0xB8;
            static constexpr std::uintptr_t Contrast = 0xBC;
            static constexpr std::uintptr_t ValueTarget = 0xC0;
            static constexpr std::uintptr_t RandomOffset = 0xF0;
            static constexpr std::uintptr_t Transform = 0x110;
            static constexpr std::uintptr_t VoronoiCellRandomness = 0x170;
            static constexpr std::uintptr_t VoronoiCellIDTarget = 0x178;
            static constexpr std::uintptr_t bVoronoiOrientSamplesToCellEdge = 0x1A8;
            static constexpr std::uintptr_t TiledVoronoiResolution = 0x1AC;
            static constexpr std::uintptr_t TiledVoronoiEdgeBlendCellCount = 0x1B0;
            static constexpr std::uintptr_t EdgeBlendDistance = 0x1B4;
            static constexpr std::uintptr_t EdgeBlendCurveOffset = 0x1B8;
            static constexpr std::uintptr_t EdgeBlendCurveIntensity = 0x1BC;
            static constexpr std::uintptr_t bForceNoUseSeed = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"EdgeMask2DMode", 0xAC, "EnumProperty"},
            {"Iterations", 0xB0, "IntProperty"},
            {"bTiling", 0xB4, "BoolProperty"},
            {"Brightness", 0xB8, "FloatProperty"},
            {"Contrast", 0xBC, "FloatProperty"},
            {"ValueTarget", 0xC0, "StructProperty"},
            {"RandomOffset", 0xF0, "StructProperty"},
            {"Transform", 0x110, "StructProperty"},
            {"VoronoiCellRandomness", 0x170, "DoubleProperty"},
            {"VoronoiCellIDTarget", 0x178, "StructProperty"},
            {"bVoronoiOrientSamplesToCellEdge", 0x1A8, "BoolProperty"},
            {"TiledVoronoiResolution", 0x1AC, "IntProperty"},
            {"TiledVoronoiEdgeBlendCellCount", 0x1B0, "IntProperty"},
            {"EdgeBlendDistance", 0x1B4, "FloatProperty"},
            {"EdgeBlendCurveOffset", 0x1B8, "FloatProperty"},
            {"EdgeBlendCurveIntensity", 0x1BC, "FloatProperty"},
            {"bForceNoUseSeed", 0x1C0, "BoolProperty"},
        }};
    };

    struct PCGSpawnActorNode
    {
        static constexpr std::string_view Name = "PCGSpawnActorNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBaseSubgraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTitle = 0x28;
            static constexpr std::uintptr_t SettingsInterface = 0x30;
            static constexpr std::uintptr_t OutboundNodes = 0x38;
            static constexpr std::uintptr_t InboundEdges = 0x48;
            static constexpr std::uintptr_t OutboundEdges = 0x58;
            static constexpr std::uintptr_t InputPins = 0x68;
            static constexpr std::uintptr_t OutputPins = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NodeTitle", 0x28, "NameProperty"},
            {"SettingsInterface", 0x30, "ObjectProperty"},
            {"OutboundNodes", 0x38, "ArrayProperty"},
            {"InboundEdges", 0x48, "ArrayProperty"},
            {"OutboundEdges", 0x58, "ArrayProperty"},
            {"InputPins", 0x68, "ArrayProperty"},
            {"OutputPins", 0x78, "ArrayProperty"},
        }};
    };

    struct PCGSpawnActorSettings
    {
        static constexpr std::string_view Name = "PCGSpawnActorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBaseSubgraphSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PostSpawnFunctionNames = 0xA8;
            static constexpr std::uintptr_t Option = 0xB8;
            static constexpr std::uintptr_t bForceDisableActorParsing = 0xB9;
            static constexpr std::uintptr_t GenerationTrigger = 0xBA;
            static constexpr std::uintptr_t bInheritActorTags = 0xBB;
            static constexpr std::uintptr_t TagsToAddOnActors = 0xC0;
            static constexpr std::uintptr_t ActorLabel = 0xD0;
            static constexpr std::uintptr_t TemplateActor = 0xE0;
            static constexpr std::uintptr_t SpawnedActorPropertyOverrideDescriptions = 0xE8;
            static constexpr std::uintptr_t RootActor = 0xF8;
            static constexpr std::uintptr_t AttachOptions = 0x118;
            static constexpr std::uintptr_t bSpawnByAttribute = 0x11C;
            static constexpr std::uintptr_t SpawnAttribute = 0x120;
            static constexpr std::uintptr_t bWarnOnIdenticalSpawn = 0x124;
            static constexpr std::uintptr_t bDeleteActorsBeforeGeneration = 0x125;
            static constexpr std::uintptr_t DataLayerSettings = 0x128;
            static constexpr std::uintptr_t HLODSettings = 0x238;
            static constexpr std::uintptr_t TemplateActorClass = 0x248;
            static constexpr std::uintptr_t bAllowTemplateActorEditing = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"PostSpawnFunctionNames", 0xA8, "ArrayProperty"},
            {"Option", 0xB8, "EnumProperty"},
            {"bForceDisableActorParsing", 0xB9, "BoolProperty"},
            {"GenerationTrigger", 0xBA, "EnumProperty"},
            {"bInheritActorTags", 0xBB, "BoolProperty"},
            {"TagsToAddOnActors", 0xC0, "ArrayProperty"},
            {"ActorLabel", 0xD0, "StrProperty"},
            {"TemplateActor", 0xE0, "ObjectProperty"},
            {"SpawnedActorPropertyOverrideDescriptions", 0xE8, "ArrayProperty"},
            {"RootActor", 0xF8, "SoftObjectProperty"},
            {"AttachOptions", 0x118, "EnumProperty"},
            {"bSpawnByAttribute", 0x11C, "BoolProperty"},
            {"SpawnAttribute", 0x120, "NameProperty"},
            {"bWarnOnIdenticalSpawn", 0x124, "BoolProperty"},
            {"bDeleteActorsBeforeGeneration", 0x125, "BoolProperty"},
            {"DataLayerSettings", 0x128, "StructProperty"},
            {"HLODSettings", 0x238, "StructProperty"},
            {"TemplateActorClass", 0x248, "ClassProperty"},
            {"bAllowTemplateActorEditing", 0x250, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetAllowTemplateActorEditing",
        }};
    };

    struct PCGSpawnActorTestActorWithLegacyComponent
    {
        static constexpr std::string_view Name = "PCGSpawnActorTestActorWithLegacyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x278;
            static constexpr std::uintptr_t PCGComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bounds", 0x278, "ObjectProperty"},
            {"PCGComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct PCGSpawnActorTestActorWithLiteComponent
    {
        static constexpr std::string_view Name = "PCGSpawnActorTestActorWithLiteComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x278;
            static constexpr std::uintptr_t PCGComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bounds", 0x278, "ObjectProperty"},
            {"PCGComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct PCGSpawnSplineMeshSettings
    {
        static constexpr std::string_view Name = "PCGSpawnSplineMeshSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMeshDescriptor = 0xA8;
            static constexpr std::uintptr_t SplineMeshParams = 0x308;
            static constexpr std::uintptr_t TargetActor = 0x3F0;
            static constexpr std::uintptr_t TagsToAddOnComponents = 0x410;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0x420;
            static constexpr std::uintptr_t bSynchronousLoad = 0x430;
            static constexpr std::uintptr_t SplineMeshOverrideDescriptions = 0x438;
            static constexpr std::uintptr_t SplineMeshParamsOverride = 0x448;
            static constexpr std::uintptr_t SplineMeshComponentOverride = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SplineMeshDescriptor", 0xA8, "StructProperty"},
            {"SplineMeshParams", 0x308, "StructProperty"},
            {"TargetActor", 0x3F0, "SoftObjectProperty"},
            {"TagsToAddOnComponents", 0x410, "ArrayProperty"},
            {"PostProcessFunctionNames", 0x420, "ArrayProperty"},
            {"bSynchronousLoad", 0x430, "BoolProperty"},
            {"SplineMeshOverrideDescriptions", 0x438, "ArrayProperty"},
            {"SplineMeshParamsOverride", 0x448, "ArrayProperty"},
            {"SplineMeshComponentOverride", 0x458, "ArrayProperty"},
        }};
    };

    struct PCGSpawnSplineSettings
    {
        static constexpr std::string_view Name = "PCGSpawnSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0xA8;
            static constexpr std::uintptr_t bSpawnComponentFromAttribute = 0xB0;
            static constexpr std::uintptr_t SpawnComponentFromAttributeName = 0xB8;
            static constexpr std::uintptr_t TargetActor = 0xE8;
            static constexpr std::uintptr_t TagsToAddOnComponents = 0x108;
            static constexpr std::uintptr_t PostProcessFunctionNames = 0x118;
            static constexpr std::uintptr_t PropertyOverrideDescriptions = 0x128;
            static constexpr std::uintptr_t bOutputSplineComponentReference = 0x138;
            static constexpr std::uintptr_t ComponentReferenceAttributeName = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SplineComponent", 0xA8, "ClassProperty"},
            {"bSpawnComponentFromAttribute", 0xB0, "BoolProperty"},
            {"SpawnComponentFromAttributeName", 0xB8, "StructProperty"},
            {"TargetActor", 0xE8, "SoftObjectProperty"},
            {"TagsToAddOnComponents", 0x108, "ArrayProperty"},
            {"PostProcessFunctionNames", 0x118, "ArrayProperty"},
            {"PropertyOverrideDescriptions", 0x128, "ArrayProperty"},
            {"bOutputSplineComponentReference", 0x138, "BoolProperty"},
            {"ComponentReferenceAttributeName", 0x13C, "NameProperty"},
        }};
    };

    struct PCGSpawnerPrimitives
    {
        static constexpr std::string_view Name = "PCGSpawnerPrimitives";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGSplineData
    {
        static constexpr std::string_view Name = "PCGSplineData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGPolyLineData";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineStruct = 0xE0;
            static constexpr std::uintptr_t CachedBounds = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SplineStruct", 0xE0, "StructProperty"},
            {"CachedBounds", 0x280, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetMetadataEntryKeysForSplinePoints",
            "GetSplinePoints",
            "Initialize",
            "K2_Initialize",
        }};
    };

    struct PCGSplineDataDelta
    {
        static constexpr std::string_view Name = "PCGSplineDataDelta";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGDeltaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginalStartTransform = 0x10;
            static constexpr std::uintptr_t SplineOverride = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OriginalStartTransform", 0x10, "StructProperty"},
            {"SplineOverride", 0x70, "ObjectProperty"},
        }};
    };

    struct PCGSplineInteriorSurfaceData
    {
        static constexpr std::string_view Name = "PCGSplineInteriorSurfaceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineStruct = 0x180;
            static constexpr std::uintptr_t CachedBounds = 0x320;
            static constexpr std::uintptr_t CachedSplinePoints = 0x358;
            static constexpr std::uintptr_t CachedSplinePoints2D = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SplineStruct", 0x180, "StructProperty"},
            {"CachedBounds", 0x320, "StructProperty"},
            {"CachedSplinePoints", 0x358, "ArrayProperty"},
            {"CachedSplinePoints2D", 0x368, "ArrayProperty"},
        }};
    };

    struct PCGSplineIntersectionSettings
    {
        static constexpr std::string_view Name = "PCGSplineIntersectionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0xA8;
            static constexpr std::uintptr_t Output = 0xA9;
            static constexpr std::uintptr_t bOutputSplineIndices = 0xAA;
            static constexpr std::uintptr_t OriginatingSplineIndexAttribute = 0xB0;
            static constexpr std::uintptr_t IntersectingSplineIndexAttribute = 0xE0;
            static constexpr std::uintptr_t bOutputComplexIntersections = 0x110;
            static constexpr std::uintptr_t bOutputIntersectionType = 0x111;
            static constexpr std::uintptr_t IntersectionTypeAttribute = 0x118;
            static constexpr std::uintptr_t DistanceThreshold = 0x148;
            static constexpr std::uintptr_t bUseBestFitBox = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Type", 0xA8, "EnumProperty"},
            {"Output", 0xA9, "EnumProperty"},
            {"bOutputSplineIndices", 0xAA, "BoolProperty"},
            {"OriginatingSplineIndexAttribute", 0xB0, "StructProperty"},
            {"IntersectingSplineIndexAttribute", 0xE0, "StructProperty"},
            {"bOutputComplexIntersections", 0x110, "BoolProperty"},
            {"bOutputIntersectionType", 0x111, "BoolProperty"},
            {"IntersectionTypeAttribute", 0x118, "StructProperty"},
            {"DistanceThreshold", 0x148, "DoubleProperty"},
            {"bUseBestFitBox", 0x150, "BoolProperty"},
        }};
    };

    struct PCGSplineMeshParams
    {
        static constexpr std::string_view Name = "PCGSplineMeshParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardAxis = 0x0;
            static constexpr std::uintptr_t bScaleMeshToBounds = 0x4;
            static constexpr std::uintptr_t bScaleMeshToLandscapeSplineFullWidth = 0x5;
            static constexpr std::uintptr_t SplineUpDir = 0x8;
            static constexpr std::uintptr_t NaniteClusterBoundsScale = 0x20;
            static constexpr std::uintptr_t SplineBoundaryMin = 0x24;
            static constexpr std::uintptr_t SplineBoundaryMax = 0x28;
            static constexpr std::uintptr_t bSmoothInterpRollScale = 0x2C;
            static constexpr std::uintptr_t StartOffset = 0x30;
            static constexpr std::uintptr_t EndOffset = 0x40;
            static constexpr std::uintptr_t StartPosition = 0x50;
            static constexpr std::uintptr_t StartTangent = 0x68;
            static constexpr std::uintptr_t StartRollDegrees = 0x80;
            static constexpr std::uintptr_t StartScale = 0x88;
            static constexpr std::uintptr_t EndPosition = 0x98;
            static constexpr std::uintptr_t EndTangent = 0xB0;
            static constexpr std::uintptr_t EndRollDegrees = 0xC8;
            static constexpr std::uintptr_t EndScale = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ForwardAxis", 0x0, "EnumProperty"},
            {"bScaleMeshToBounds", 0x4, "BoolProperty"},
            {"bScaleMeshToLandscapeSplineFullWidth", 0x5, "BoolProperty"},
            {"SplineUpDir", 0x8, "StructProperty"},
            {"NaniteClusterBoundsScale", 0x20, "FloatProperty"},
            {"SplineBoundaryMin", 0x24, "FloatProperty"},
            {"SplineBoundaryMax", 0x28, "FloatProperty"},
            {"bSmoothInterpRollScale", 0x2C, "BoolProperty"},
            {"StartOffset", 0x30, "StructProperty"},
            {"EndOffset", 0x40, "StructProperty"},
            {"StartPosition", 0x50, "StructProperty"},
            {"StartTangent", 0x68, "StructProperty"},
            {"StartRollDegrees", 0x80, "FloatProperty"},
            {"StartScale", 0x88, "StructProperty"},
            {"EndPosition", 0x98, "StructProperty"},
            {"EndTangent", 0xB0, "StructProperty"},
            {"EndRollDegrees", 0xC8, "FloatProperty"},
            {"EndScale", 0xD0, "StructProperty"},
        }};
    };

    struct PCGSplineProjectionData
    {
        static constexpr std::string_view Name = "PCGSplineProjectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGProjectionData";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectedPosition = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProjectedPosition", 0x180, "StructProperty"},
        }};
    };

    struct PCGSplineSamplerParams
    {
        static constexpr std::string_view Name = "PCGSplineSamplerParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Dimension = 0x0;
            static constexpr std::uintptr_t Mode = 0x1;
            static constexpr std::uintptr_t Fill = 0x2;
            static constexpr std::uintptr_t SubdivisionsPerSegment = 0x4;
            static constexpr std::uintptr_t DistanceIncrement = 0x8;
            static constexpr std::uintptr_t NumSamples = 0xC;
            static constexpr std::uintptr_t NumPlanarSubdivisions = 0x10;
            static constexpr std::uintptr_t NumHeightSubdivisions = 0x14;
            static constexpr std::uintptr_t StartOffset = 0x18;
            static constexpr std::uintptr_t EndOffset = 0x1C;
            static constexpr std::uintptr_t MaxRandomOffsetNormalized = 0x20;
            static constexpr std::uintptr_t bFitToCurve = 0x24;
            static constexpr std::uintptr_t InteriorSampleSpacing = 0x28;
            static constexpr std::uintptr_t InteriorBorderSampleSpacing = 0x2C;
            static constexpr std::uintptr_t bTreatSplineAsPolyline = 0x30;
            static constexpr std::uintptr_t InteriorOrientation = 0x31;
            static constexpr std::uintptr_t bProjectOntoSurface = 0x32;
            static constexpr std::uintptr_t InteriorDensityFalloffCurve = 0x38;
            static constexpr std::uintptr_t bComputeDirectionDelta = 0x80;
            static constexpr std::uintptr_t NextDirectionDeltaAttribute = 0x84;
            static constexpr std::uintptr_t bComputeCurvature = 0x88;
            static constexpr std::uintptr_t CurvatureAttribute = 0x8C;
            static constexpr std::uintptr_t bComputeSegmentIndex = 0x90;
            static constexpr std::uintptr_t SegmentIndexAttribute = 0x94;
            static constexpr std::uintptr_t bComputeSubsegmentIndex = 0x98;
            static constexpr std::uintptr_t SubsegmentIndexAttribute = 0x9C;
            static constexpr std::uintptr_t bComputeTangents = 0xA0;
            static constexpr std::uintptr_t ArriveTangentAttribute = 0xA4;
            static constexpr std::uintptr_t LeaveTangentAttribute = 0xA8;
            static constexpr std::uintptr_t bComputeAlpha = 0xAC;
            static constexpr std::uintptr_t AlphaAttribute = 0xB0;
            static constexpr std::uintptr_t bComputeDistance = 0xB4;
            static constexpr std::uintptr_t DistanceAttribute = 0xB8;
            static constexpr std::uintptr_t bComputeInputKey = 0xBC;
            static constexpr std::uintptr_t InputKeyAttribute = 0xC0;
            static constexpr std::uintptr_t bUnbounded = 0xC4;
            static constexpr std::uintptr_t PointSteepness = 0xC8;
            static constexpr std::uintptr_t SeedingMode = 0xCC;
            static constexpr std::uintptr_t bSeedFromLocalPosition = 0xCD;
            static constexpr std::uintptr_t bSeedFrom2DPosition = 0xCE;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"Dimension", 0x0, "EnumProperty"},
            {"Mode", 0x1, "EnumProperty"},
            {"Fill", 0x2, "EnumProperty"},
            {"SubdivisionsPerSegment", 0x4, "IntProperty"},
            {"DistanceIncrement", 0x8, "FloatProperty"},
            {"NumSamples", 0xC, "IntProperty"},
            {"NumPlanarSubdivisions", 0x10, "IntProperty"},
            {"NumHeightSubdivisions", 0x14, "IntProperty"},
            {"StartOffset", 0x18, "FloatProperty"},
            {"EndOffset", 0x1C, "FloatProperty"},
            {"MaxRandomOffsetNormalized", 0x20, "FloatProperty"},
            {"bFitToCurve", 0x24, "BoolProperty"},
            {"InteriorSampleSpacing", 0x28, "FloatProperty"},
            {"InteriorBorderSampleSpacing", 0x2C, "FloatProperty"},
            {"bTreatSplineAsPolyline", 0x30, "BoolProperty"},
            {"InteriorOrientation", 0x31, "EnumProperty"},
            {"bProjectOntoSurface", 0x32, "BoolProperty"},
            {"InteriorDensityFalloffCurve", 0x38, "StructProperty"},
            {"bComputeDirectionDelta", 0x80, "BoolProperty"},
            {"NextDirectionDeltaAttribute", 0x84, "NameProperty"},
            {"bComputeCurvature", 0x88, "BoolProperty"},
            {"CurvatureAttribute", 0x8C, "NameProperty"},
            {"bComputeSegmentIndex", 0x90, "BoolProperty"},
            {"SegmentIndexAttribute", 0x94, "NameProperty"},
            {"bComputeSubsegmentIndex", 0x98, "BoolProperty"},
            {"SubsegmentIndexAttribute", 0x9C, "NameProperty"},
            {"bComputeTangents", 0xA0, "BoolProperty"},
            {"ArriveTangentAttribute", 0xA4, "NameProperty"},
            {"LeaveTangentAttribute", 0xA8, "NameProperty"},
            {"bComputeAlpha", 0xAC, "BoolProperty"},
            {"AlphaAttribute", 0xB0, "NameProperty"},
            {"bComputeDistance", 0xB4, "BoolProperty"},
            {"DistanceAttribute", 0xB8, "NameProperty"},
            {"bComputeInputKey", 0xBC, "BoolProperty"},
            {"InputKeyAttribute", 0xC0, "NameProperty"},
            {"bUnbounded", 0xC4, "BoolProperty"},
            {"PointSteepness", 0xC8, "FloatProperty"},
            {"SeedingMode", 0xCC, "EnumProperty"},
            {"bSeedFromLocalPosition", 0xCD, "BoolProperty"},
            {"bSeedFrom2DPosition", 0xCE, "BoolProperty"},
        }};
    };

    struct PCGSplineSamplerSettings
    {
        static constexpr std::string_view Name = "PCGSplineSamplerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SamplerParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SamplerParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGSplineStruct
    {
        static constexpr std::string_view Name = "PCGSplineStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t DefaultUpVector = 0x60;
            static constexpr std::uintptr_t ReparamStepsPerSegment = 0x78;
            static constexpr std::uintptr_t bClosedLoop = 0x7C;
            static constexpr std::uintptr_t LocalBounds = 0x80;
            static constexpr std::uintptr_t Bounds = 0xB8;
            static constexpr std::uintptr_t SplineCurves = 0xF0;
            static constexpr std::uintptr_t ControlPointsEntryKeys = 0x158;
            static constexpr std::uintptr_t Spline = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"DefaultUpVector", 0x60, "StructProperty"},
            {"ReparamStepsPerSegment", 0x78, "IntProperty"},
            {"bClosedLoop", 0x7C, "BoolProperty"},
            {"LocalBounds", 0x80, "StructProperty"},
            {"Bounds", 0xB8, "StructProperty"},
            {"SplineCurves", 0xF0, "StructProperty"},
            {"ControlPointsEntryKeys", 0x158, "ArrayProperty"},
            {"Spline", 0x168, "StructProperty"},
        }};
    };

    struct PCGSplineToSegmentSettings
    {
        static constexpr std::string_view Name = "PCGSplineToSegmentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bExtractTangents = 0xA8;
            static constexpr std::uintptr_t bExtractAngles = 0xA9;
            static constexpr std::uintptr_t bExtractConnectivityInfo = 0xAA;
            static constexpr std::uintptr_t bExtractClockwiseInfo = 0xAB;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bExtractTangents", 0xA8, "BoolProperty"},
            {"bExtractAngles", 0xA9, "BoolProperty"},
            {"bExtractConnectivityInfo", 0xAA, "BoolProperty"},
            {"bExtractClockwiseInfo", 0xAB, "BoolProperty"},
        }};
    };

    struct PCGSplitPointsSettings
    {
        static constexpr std::string_view Name = "PCGSplitPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SplitPosition = 0xA8;
            static constexpr std::uintptr_t SplitAxis = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SplitPosition", 0xA8, "FloatProperty"},
            {"SplitAxis", 0xAC, "EnumProperty"},
        }};
    };

    struct PCGSplitSplinesSettings
    {
        static constexpr std::string_view Name = "PCGSplitSplinesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
            static constexpr std::uintptr_t CutDataBehavior = 0xAC;
            static constexpr std::uintptr_t bUseConstant = 0xB0;
            static constexpr std::uintptr_t Constant = 0xB8;
            static constexpr std::uintptr_t Attribute = 0xC0;
            static constexpr std::uintptr_t bShouldOutputOriginatingSplineIndex = 0xF0;
            static constexpr std::uintptr_t OutputOriginatingSplineIndex = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
            {"CutDataBehavior", 0xAC, "EnumProperty"},
            {"bUseConstant", 0xB0, "BoolProperty"},
            {"Constant", 0xB8, "DoubleProperty"},
            {"Attribute", 0xC0, "StructProperty"},
            {"bShouldOutputOriginatingSplineIndex", 0xF0, "BoolProperty"},
            {"OutputOriginatingSplineIndex", 0xF8, "StructProperty"},
        }};
    };

    struct PCGStack
    {
        static constexpr std::string_view Name = "PCGStack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StackFrames = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StackFrames", 0x8, "ArrayProperty"},
        }};
    };

    struct PCGStackContext
    {
        static constexpr std::string_view Name = "PCGStackContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Stacks = 0x8;
            static constexpr std::uintptr_t CurrentStackIndex = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Stacks", 0x8, "ArrayProperty"},
            {"CurrentStackIndex", 0x18, "IntProperty"},
        }};
    };

    struct PCGStackFrame
    {
        static constexpr std::string_view Name = "PCGStackFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t LoopIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Object", 0x0, "SoftObjectProperty"},
            {"LoopIndex", 0x20, "IntProperty"},
        }};
    };

    struct PCGStaticMeshDataInterface
    {
        static constexpr std::string_view Name = "PCGStaticMeshDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGStaticMeshDataProvider
    {
        static constexpr std::string_view Name = "PCGStaticMeshDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedStaticMesh = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoadedStaticMesh", 0x68, "ObjectProperty"},
        }};
    };

    struct PCGStaticMeshDescriptorWrapper
    {
        static constexpr std::string_view Name = "PCGStaticMeshDescriptorWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGMeshDescriptorWrapperBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Descriptor", 0x8, "StructProperty"},
        }};
    };

    struct PCGStaticMeshResourceData
    {
        static constexpr std::string_view Name = "PCGStaticMeshResourceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGResourceData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMesh = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMesh", 0x48, "SoftObjectProperty"},
        }};
    };

    struct PCGStaticMeshSpawnerSettings
    {
        static constexpr std::string_view Name = "PCGStaticMeshSpawnerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGMeshSpawnerSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowDescriptorChanges = 0x150;
            static constexpr std::uintptr_t MeshSelectorType = 0x158;
            static constexpr std::uintptr_t MeshSelectorParameters = 0x160;
            static constexpr std::uintptr_t StaticMeshComponentPropertyOverrides = 0x168;
            static constexpr std::uintptr_t InstanceDataPackerType = 0x178;
            static constexpr std::uintptr_t InstanceDataPackerParameters = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bAllowDescriptorChanges", 0x150, "BoolProperty"},
            {"MeshSelectorType", 0x158, "ClassProperty"},
            {"MeshSelectorParameters", 0x160, "ObjectProperty"},
            {"StaticMeshComponentPropertyOverrides", 0x168, "ArrayProperty"},
            {"InstanceDataPackerType", 0x178, "ClassProperty"},
            {"InstanceDataPackerParameters", 0x180, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMeshSelectorType",
        }};
    };

    struct PCGSubdivideSegmentSettings
    {
        static constexpr std::string_view Name = "PCGSubdivideSegmentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSubdivisionBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SubdivisionAxis = 0x178;
            static constexpr std::uintptr_t bFlipAxisAsAttribute = 0x17C;
            static constexpr std::uintptr_t bShouldFlipAxis = 0x17D;
            static constexpr std::uintptr_t FlipAxisAttribute = 0x180;
            static constexpr std::uintptr_t bAcceptIncompleteSubdivision = 0x1B0;
            static constexpr std::uintptr_t bOutputModuleIndexAttribute = 0x1B1;
            static constexpr std::uintptr_t ModuleIndexAttributeName = 0x1B4;
            static constexpr std::uintptr_t bOutputExtremityAttributes = 0x1B8;
            static constexpr std::uintptr_t IsFirstAttributeName = 0x1BC;
            static constexpr std::uintptr_t IsFinalAttributeName = 0x1C0;
            static constexpr std::uintptr_t bOutputExtremityNeighborIndexAttribute = 0x1C4;
            static constexpr std::uintptr_t ExtremityNeighborIndexAttributeName = 0x1C8;
            static constexpr std::uintptr_t bSilenceGrammarDoesNotFitErrors = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SubdivisionAxis", 0x178, "EnumProperty"},
            {"bFlipAxisAsAttribute", 0x17C, "BoolProperty"},
            {"bShouldFlipAxis", 0x17D, "BoolProperty"},
            {"FlipAxisAttribute", 0x180, "StructProperty"},
            {"bAcceptIncompleteSubdivision", 0x1B0, "BoolProperty"},
            {"bOutputModuleIndexAttribute", 0x1B1, "BoolProperty"},
            {"ModuleIndexAttributeName", 0x1B4, "NameProperty"},
            {"bOutputExtremityAttributes", 0x1B8, "BoolProperty"},
            {"IsFirstAttributeName", 0x1BC, "NameProperty"},
            {"IsFinalAttributeName", 0x1C0, "NameProperty"},
            {"bOutputExtremityNeighborIndexAttribute", 0x1C4, "BoolProperty"},
            {"ExtremityNeighborIndexAttributeName", 0x1C8, "NameProperty"},
            {"bSilenceGrammarDoesNotFitErrors", 0x1CC, "BoolProperty"},
        }};
    };

    struct PCGSubdivideSplineSettings
    {
        static constexpr std::string_view Name = "PCGSubdivideSplineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSubdivisionBaseSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bAcceptIncompleteSubdivision = 0x178;
            static constexpr std::uintptr_t bModuleHeightAsAttribute = 0x179;
            static constexpr std::uintptr_t ModuleHeight = 0x180;
            static constexpr std::uintptr_t ModuleHeightAttribute = 0x188;
            static constexpr std::uintptr_t bOutputModuleIndexAttribute = 0x1B8;
            static constexpr std::uintptr_t ModuleIndexAttributeName = 0x1BC;
            static constexpr std::uintptr_t bOutputExtremityAttributes = 0x1C0;
            static constexpr std::uintptr_t IsFirstAttributeName = 0x1C4;
            static constexpr std::uintptr_t IsFinalAttributeName = 0x1C8;
            static constexpr std::uintptr_t bSilenceGrammarDoesNotFitErrors = 0x1CC;
            static constexpr std::uintptr_t bCenterBounds = 0x1CD;
            static constexpr std::uintptr_t ModulePlacementTolerance = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bAcceptIncompleteSubdivision", 0x178, "BoolProperty"},
            {"bModuleHeightAsAttribute", 0x179, "BoolProperty"},
            {"ModuleHeight", 0x180, "DoubleProperty"},
            {"ModuleHeightAttribute", 0x188, "StructProperty"},
            {"bOutputModuleIndexAttribute", 0x1B8, "BoolProperty"},
            {"ModuleIndexAttributeName", 0x1BC, "NameProperty"},
            {"bOutputExtremityAttributes", 0x1C0, "BoolProperty"},
            {"IsFirstAttributeName", 0x1C4, "NameProperty"},
            {"IsFinalAttributeName", 0x1C8, "NameProperty"},
            {"bSilenceGrammarDoesNotFitErrors", 0x1CC, "BoolProperty"},
            {"bCenterBounds", 0x1CD, "BoolProperty"},
            {"ModulePlacementTolerance", 0x1D0, "DoubleProperty"},
        }};
    };

    struct PCGSubdivisionBaseSettings
    {
        static constexpr std::string_view Name = "PCGSubdivisionBaseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bModuleInfoAsInput = 0xA8;
            static constexpr std::uintptr_t ModulesInfo = 0xB0;
            static constexpr std::uintptr_t ModulesInfoAttributeNames = 0xC0;
            static constexpr std::uintptr_t GrammarSelection = 0xD8;
            static constexpr std::uintptr_t bUseSeedAttribute = 0x120;
            static constexpr std::uintptr_t SeedAttribute = 0x128;
            static constexpr std::uintptr_t bForwardAttributesFromModulesInfo = 0x158;
            static constexpr std::uintptr_t SymbolAttributeName = 0x15C;
            static constexpr std::uintptr_t bOutputSizeAttribute = 0x160;
            static constexpr std::uintptr_t SizeAttributeName = 0x164;
            static constexpr std::uintptr_t bOutputScalableAttribute = 0x168;
            static constexpr std::uintptr_t ScalableAttributeName = 0x16C;
            static constexpr std::uintptr_t bOutputDebugColorAttribute = 0x170;
            static constexpr std::uintptr_t DebugColorAttributeName = 0x174;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bModuleInfoAsInput", 0xA8, "BoolProperty"},
            {"ModulesInfo", 0xB0, "ArrayProperty"},
            {"ModulesInfoAttributeNames", 0xC0, "StructProperty"},
            {"GrammarSelection", 0xD8, "StructProperty"},
            {"bUseSeedAttribute", 0x120, "BoolProperty"},
            {"SeedAttribute", 0x128, "StructProperty"},
            {"bForwardAttributesFromModulesInfo", 0x158, "BoolProperty"},
            {"SymbolAttributeName", 0x15C, "NameProperty"},
            {"bOutputSizeAttribute", 0x160, "BoolProperty"},
            {"SizeAttributeName", 0x164, "NameProperty"},
            {"bOutputScalableAttribute", 0x168, "BoolProperty"},
            {"ScalableAttributeName", 0x16C, "NameProperty"},
            {"bOutputDebugColorAttribute", 0x170, "BoolProperty"},
            {"DebugColorAttributeName", 0x174, "NameProperty"},
        }};
    };

    struct PCGSubdivisionModuleAttributeNames
    {
        static constexpr std::string_view Name = "PCGSubdivisionModuleAttributeNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SymbolAttributeName = 0x0;
            static constexpr std::uintptr_t SizeAttributeName = 0x4;
            static constexpr std::uintptr_t bProvideScalable = 0x8;
            static constexpr std::uintptr_t ScalableAttributeName = 0xC;
            static constexpr std::uintptr_t bProvideDebugColor = 0x10;
            static constexpr std::uintptr_t DebugColorAttributeName = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SymbolAttributeName", 0x0, "NameProperty"},
            {"SizeAttributeName", 0x4, "NameProperty"},
            {"bProvideScalable", 0x8, "BoolProperty"},
            {"ScalableAttributeName", 0xC, "NameProperty"},
            {"bProvideDebugColor", 0x10, "BoolProperty"},
            {"DebugColorAttributeName", 0x14, "NameProperty"},
        }};
    };

    struct PCGSubdivisionSubmodule
    {
        static constexpr std::string_view Name = "PCGSubdivisionSubmodule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Symbol = 0x0;
            static constexpr std::uintptr_t Size = 0x8;
            static constexpr std::uintptr_t bScalable = 0x10;
            static constexpr std::uintptr_t DebugColor = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Symbol", 0x0, "NameProperty"},
            {"Size", 0x8, "DoubleProperty"},
            {"bScalable", 0x10, "BoolProperty"},
            {"DebugColor", 0x20, "StructProperty"},
        }};
    };

    struct PCGSubgraphNode
    {
        static constexpr std::string_view Name = "PCGSubgraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBaseSubgraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTitle = 0x28;
            static constexpr std::uintptr_t SettingsInterface = 0x30;
            static constexpr std::uintptr_t OutboundNodes = 0x38;
            static constexpr std::uintptr_t InboundEdges = 0x48;
            static constexpr std::uintptr_t OutboundEdges = 0x58;
            static constexpr std::uintptr_t InputPins = 0x68;
            static constexpr std::uintptr_t OutputPins = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NodeTitle", 0x28, "NameProperty"},
            {"SettingsInterface", 0x30, "ObjectProperty"},
            {"OutboundNodes", 0x38, "ArrayProperty"},
            {"InboundEdges", 0x48, "ArrayProperty"},
            {"OutboundEdges", 0x58, "ArrayProperty"},
            {"InputPins", 0x68, "ArrayProperty"},
            {"OutputPins", 0x78, "ArrayProperty"},
        }};
    };

    struct PCGSubgraphSettings
    {
        static constexpr std::string_view Name = "PCGSubgraphSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGBaseSubgraphSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SubgraphInstance = 0xA8;
            static constexpr std::uintptr_t SubgraphOverride = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubgraphInstance", 0xA8, "ObjectProperty"},
            {"SubgraphOverride", 0xB0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SubgraphAssetFilter",
        }};
    };

    struct PCGSubsystem
    {
        static constexpr std::string_view Name = "PCGSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGSurfaceData
    {
        static constexpr std::string_view Name = "PCGSurfaceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0xE0;
            static constexpr std::uintptr_t LocalBounds = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Transform", 0xE0, "StructProperty"},
            {"LocalBounds", 0x140, "StructProperty"},
        }};
    };

    struct PCGSurfaceSamplerDataInterface
    {
        static constexpr std::string_view Name = "PCGSurfaceSamplerDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGSurfaceSamplerDataProvider
    {
        static constexpr std::string_view Name = "PCGSurfaceSamplerDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGSurfaceSamplerKernel
    {
        static constexpr std::string_view Name = "PCGSurfaceSamplerKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGSurfaceSamplerSettings
    {
        static constexpr std::string_view Name = "PCGSurfaceSamplerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PointsPerSquaredMeter = 0xA8;
            static constexpr std::uintptr_t PointExtents = 0xB0;
            static constexpr std::uintptr_t Looseness = 0xC8;
            static constexpr std::uintptr_t bUnbounded = 0xCC;
            static constexpr std::uintptr_t bApplyDensityToPoints = 0xCD;
            static constexpr std::uintptr_t PointSteepness = 0xD0;
            static constexpr std::uintptr_t bUseLegacyGridCreationMethod = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PointsPerSquaredMeter", 0xA8, "FloatProperty"},
            {"PointExtents", 0xB0, "StructProperty"},
            {"Looseness", 0xC8, "FloatProperty"},
            {"bUnbounded", 0xCC, "BoolProperty"},
            {"bApplyDensityToPoints", 0xCD, "BoolProperty"},
            {"PointSteepness", 0xD0, "FloatProperty"},
            {"bUseLegacyGridCreationMethod", 0xD4, "BoolProperty"},
        }};
    };

    struct PCGSwitchSettings
    {
        static constexpr std::string_view Name = "PCGSwitchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGControlFlowSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionMode = 0xA8;
            static constexpr std::uintptr_t IntegerSelection = 0xAC;
            static constexpr std::uintptr_t IntOptions = 0xB0;
            static constexpr std::uintptr_t StringSelection = 0xC0;
            static constexpr std::uintptr_t StringOptions = 0xD0;
            static constexpr std::uintptr_t EnumSelection = 0xE0;
            static constexpr std::uintptr_t EnumValueToPinLabelMapping = 0xF0;
            static constexpr std::uintptr_t CachedPinLabels = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SelectionMode", 0xA8, "EnumProperty"},
            {"IntegerSelection", 0xAC, "IntProperty"},
            {"IntOptions", 0xB0, "ArrayProperty"},
            {"StringSelection", 0xC0, "StrProperty"},
            {"StringOptions", 0xD0, "ArrayProperty"},
            {"EnumSelection", 0xE0, "StructProperty"},
            {"EnumValueToPinLabelMapping", 0xF0, "MapProperty"},
            {"CachedPinLabels", 0x100, "ArrayProperty"},
        }};
    };

    struct PCGTagAttributesParser
    {
        static constexpr std::string_view Name = "PCGTagAttributesParser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGTagAttributesParserLibrary
    {
        static constexpr std::string_view Name = "PCGTagAttributesParserLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "CreateAndSetAttributesFromActorTags",
            "CreateAndSetAttributesFromActorTagsOnDomain",
            "CreateAndSetAttributesFromStrings",
            "CreateAndSetAttributesFromStringsOnDomain",
            "MakeTagAttributesParser",
            "MakeTagAttributesParserOnDomain",
        }};
    };

    struct PCGTaggedData
    {
        static constexpr std::string_view Name = "PCGTaggedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t Tags = 0x10;
            static constexpr std::uintptr_t Pin = 0x20;
            static constexpr std::uintptr_t bPinlessData = 0x24;
            static constexpr std::uintptr_t bIsUsedMultipleTimes = 0x25;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Data", 0x0, "StructProperty"},
            {"Tags", 0x10, "SetProperty"},
            {"Pin", 0x20, "NameProperty"},
            {"bPinlessData", 0x24, "BoolProperty"},
            {"bIsUsedMultipleTimes", 0x25, "BoolProperty"},
        }};
    };

    struct PCGTagsToAttributeSetSettings
    {
        static constexpr std::string_view Name = "PCGTagsToAttributeSetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGTagsToDataAttributesSettings
    {
        static constexpr std::string_view Name = "PCGTagsToDataAttributesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGDataAttributesAndTagsSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributesTagsMapping = 0xA8;
            static constexpr std::uintptr_t bDeleteInputsAfterOperation = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributesTagsMapping", 0xA8, "MapProperty"},
            {"bDeleteInputsAfterOperation", 0xB8, "BoolProperty"},
        }};
    };

    struct PCGTeleportSettings
    {
        static constexpr std::string_view Name = "PCGTeleportSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectReferenceAttribute = 0xA8;
            static constexpr std::uintptr_t TransformAttribute = 0xD8;
            static constexpr std::uintptr_t bSilenceWarningOnUnresolvedPath = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObjectReferenceAttribute", 0xA8, "StructProperty"},
            {"TransformAttribute", 0xD8, "StructProperty"},
            {"bSilenceWarningOnUnresolvedPath", 0x108, "BoolProperty"},
        }};
    };

    struct PCGTestMyColorStruct
    {
        static constexpr std::string_view Name = "PCGTestMyColorStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t B = 0x0;
            static constexpr std::uintptr_t G = 0x8;
            static constexpr std::uintptr_t R = 0x10;
            static constexpr std::uintptr_t A = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"B", 0x0, "DoubleProperty"},
            {"G", 0x8, "DoubleProperty"},
            {"R", 0x10, "DoubleProperty"},
            {"A", 0x18, "DoubleProperty"},
        }};
    };

    struct PCGTexture2DArrayData
    {
        static constexpr std::string_view Name = "PCGTexture2DArrayData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTexture2DBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x1E0;
            static constexpr std::uintptr_t ResourceType = 0x1E8;
            static constexpr std::uintptr_t Resolution = 0x1EC;
            static constexpr std::uintptr_t ArraySize = 0x1F4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Texture", 0x1E0, "WeakObjectProperty"},
            {"ResourceType", 0x1E8, "EnumProperty"},
            {"Resolution", 0x1EC, "StructProperty"},
            {"ArraySize", 0x1F4, "UInt16Property"},
        }};
    };

    struct PCGTexture2DArrayDataInterface
    {
        static constexpr std::string_view Name = "PCGTexture2DArrayDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bInitializeFromDataCollection = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInitializeFromDataCollection", 0x88, "BoolProperty"},
        }};
    };

    struct PCGTexture2DArrayDataProvider
    {
        static constexpr std::string_view Name = "PCGTexture2DArrayDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGTexture2DBaseData
    {
        static constexpr std::string_view Name = "PCGTexture2DBaseData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x180;
            static constexpr std::uintptr_t NumMips = 0x181;
            static constexpr std::uintptr_t Filter = 0x182;
            static constexpr std::uintptr_t Bounds = 0x190;
            static constexpr std::uintptr_t ColorData = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Format", 0x180, "ByteProperty"},
            {"NumMips", 0x181, "ByteProperty"},
            {"Filter", 0x182, "EnumProperty"},
            {"Bounds", 0x190, "StructProperty"},
            {"ColorData", 0x1C8, "ArrayProperty"},
        }};
    };

    struct PCGTexture2DSingleBaseData
    {
        static constexpr std::string_view Name = "PCGTexture2DSingleBaseData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTexture2DBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDensitySourceChannel = 0x1E0;
            static constexpr std::uintptr_t ColorChannel = 0x1E1;
            static constexpr std::uintptr_t TexelSize = 0x1E4;
            static constexpr std::uintptr_t bUseAdvancedTiling = 0x1E8;
            static constexpr std::uintptr_t Tiling = 0x1F0;
            static constexpr std::uintptr_t CenterOffset = 0x200;
            static constexpr std::uintptr_t Rotation = 0x210;
            static constexpr std::uintptr_t bUseTileBounds = 0x214;
            static constexpr std::uintptr_t TileBounds = 0x218;
            static constexpr std::uintptr_t Height = 0x240;
            static constexpr std::uintptr_t Width = 0x244;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bUseDensitySourceChannel", 0x1E0, "BoolProperty"},
            {"ColorChannel", 0x1E1, "EnumProperty"},
            {"TexelSize", 0x1E4, "FloatProperty"},
            {"bUseAdvancedTiling", 0x1E8, "BoolProperty"},
            {"Tiling", 0x1F0, "StructProperty"},
            {"CenterOffset", 0x200, "StructProperty"},
            {"Rotation", 0x210, "FloatProperty"},
            {"bUseTileBounds", 0x214, "BoolProperty"},
            {"TileBounds", 0x218, "StructProperty"},
            {"Height", 0x240, "IntProperty"},
            {"Width", 0x244, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDensityFunctionEquivalent",
            "SetDensityFunctionEquivalent",
        }};
    };

    struct PCGTextureData
    {
        static constexpr std::string_view Name = "PCGTextureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGTexture2DSingleBaseData";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x250;
            static constexpr std::uintptr_t TextureIndex = 0x258;
            static constexpr std::uintptr_t bSuccessfullyInitialized = 0x25C;
            static constexpr std::uintptr_t ResourceType = 0x25E;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Texture", 0x250, "WeakObjectProperty"},
            {"TextureIndex", 0x258, "IntProperty"},
            {"bSuccessfullyInitialized", 0x25C, "BoolProperty"},
            {"ResourceType", 0x25E, "EnumProperty"},
        }};
    };

    struct PCGTextureDataInterface
    {
        static constexpr std::string_view Name = "PCGTextureDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bInitializeFromDataCollection = 0x88;
            static constexpr std::uintptr_t bSingleData = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInitializeFromDataCollection", 0x88, "BoolProperty"},
            {"bSingleData", 0x89, "BoolProperty"},
        }};
    };

    struct PCGTextureDataProvider
    {
        static constexpr std::string_view Name = "PCGTextureDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGExportableDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGTextureSamplerSettings
    {
        static constexpr std::string_view Name = "PCGTextureSamplerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0xB0;
            static constexpr std::uintptr_t bUseAbsoluteTransform = 0x110;
            static constexpr std::uintptr_t TextureArrayIndex = 0x114;
            static constexpr std::uintptr_t bUseDensitySourceChannel = 0x118;
            static constexpr std::uintptr_t ColorChannel = 0x119;
            static constexpr std::uintptr_t Filter = 0x11A;
            static constexpr std::uintptr_t TexelSize = 0x11C;
            static constexpr std::uintptr_t bUseAdvancedTiling = 0x120;
            static constexpr std::uintptr_t Tiling = 0x128;
            static constexpr std::uintptr_t CenterOffset = 0x138;
            static constexpr std::uintptr_t Rotation = 0x148;
            static constexpr std::uintptr_t bUseTileBounds = 0x14C;
            static constexpr std::uintptr_t TileBoundsMin = 0x150;
            static constexpr std::uintptr_t TileBoundsMax = 0x160;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0x170;
            static constexpr std::uintptr_t bSynchronousLoad = 0x171;
            static constexpr std::uintptr_t Texture = 0x178;
            static constexpr std::uintptr_t bSkipReadbackToCPU = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Transform", 0xB0, "StructProperty"},
            {"bUseAbsoluteTransform", 0x110, "BoolProperty"},
            {"TextureArrayIndex", 0x114, "IntProperty"},
            {"bUseDensitySourceChannel", 0x118, "BoolProperty"},
            {"ColorChannel", 0x119, "EnumProperty"},
            {"Filter", 0x11A, "EnumProperty"},
            {"TexelSize", 0x11C, "FloatProperty"},
            {"bUseAdvancedTiling", 0x120, "BoolProperty"},
            {"Tiling", 0x128, "StructProperty"},
            {"CenterOffset", 0x138, "StructProperty"},
            {"Rotation", 0x148, "FloatProperty"},
            {"bUseTileBounds", 0x14C, "BoolProperty"},
            {"TileBoundsMin", 0x150, "StructProperty"},
            {"TileBoundsMax", 0x160, "StructProperty"},
            {"bKeepZeroDensityPoints", 0x170, "BoolProperty"},
            {"bSynchronousLoad", 0x171, "BoolProperty"},
            {"Texture", 0x178, "SoftObjectProperty"},
            {"bSkipReadbackToCPU", 0x198, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDensityFunctionEquivalent",
            "SetDensityFunctionEquivalent",
        }};
    };

    struct PCGTrackedKeyInstanceData
    {
        static constexpr std::string_view Name = "PCGTrackedKeyInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionKey = 0x0;
            static constexpr std::uintptr_t Settings = 0x70;
            static constexpr std::uintptr_t bValue = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectionKey", 0x0, "StructProperty"},
            {"Settings", 0x70, "SoftObjectProperty"},
            {"bValue", 0x90, "BoolProperty"},
        }};
    };

    struct PCGTransformPointsDataInterface
    {
        static constexpr std::string_view Name = "PCGTransformPointsDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGTransformPointsDataProvider
    {
        static constexpr std::string_view Name = "PCGTransformPointsDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeId = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeId", 0x68, "IntProperty"},
        }};
    };

    struct PCGTransformPointsKernel
    {
        static constexpr std::string_view Name = "PCGTransformPointsKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeKernel";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGKernelFlags = 0x38;
            static constexpr std::uintptr_t KernelIndex = 0x3C;
            static constexpr std::uintptr_t SettingsPath = 0x40;
            static constexpr std::uintptr_t NodePath = 0x60;
            static constexpr std::uintptr_t bInitialized = 0x80;
            static constexpr std::uintptr_t StaticLogEntries = 0x88;
            static constexpr std::uintptr_t CachedOverridableParams = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PCGKernelFlags", 0x38, "EnumProperty"},
            {"KernelIndex", 0x3C, "IntProperty"},
            {"SettingsPath", 0x40, "SoftObjectProperty"},
            {"NodePath", 0x60, "SoftObjectProperty"},
            {"bInitialized", 0x80, "BoolProperty"},
            {"StaticLogEntries", 0x88, "ArrayProperty"},
            {"CachedOverridableParams", 0x98, "ArrayProperty"},
        }};
    };

    struct PCGTransformPointsSettings
    {
        static constexpr std::string_view Name = "PCGTransformPointsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyToAttribute = 0xA8;
            static constexpr std::uintptr_t AttributeName = 0xAC;
            static constexpr std::uintptr_t OffsetMin = 0xB0;
            static constexpr std::uintptr_t OffsetMax = 0xC8;
            static constexpr std::uintptr_t bAbsoluteOffset = 0xE0;
            static constexpr std::uintptr_t RotationMin = 0xE8;
            static constexpr std::uintptr_t RotationMax = 0x100;
            static constexpr std::uintptr_t bAbsoluteRotation = 0x118;
            static constexpr std::uintptr_t ScaleMin = 0x120;
            static constexpr std::uintptr_t ScaleMax = 0x138;
            static constexpr std::uintptr_t bAbsoluteScale = 0x150;
            static constexpr std::uintptr_t bUniformScale = 0x151;
            static constexpr std::uintptr_t bRecomputeSeed = 0x152;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bApplyToAttribute", 0xA8, "BoolProperty"},
            {"AttributeName", 0xAC, "NameProperty"},
            {"OffsetMin", 0xB0, "StructProperty"},
            {"OffsetMax", 0xC8, "StructProperty"},
            {"bAbsoluteOffset", 0xE0, "BoolProperty"},
            {"RotationMin", 0xE8, "StructProperty"},
            {"RotationMax", 0x100, "StructProperty"},
            {"bAbsoluteRotation", 0x118, "BoolProperty"},
            {"ScaleMin", 0x120, "StructProperty"},
            {"ScaleMax", 0x138, "StructProperty"},
            {"bAbsoluteScale", 0x150, "BoolProperty"},
            {"bUniformScale", 0x151, "BoolProperty"},
            {"bRecomputeSeed", 0x152, "BoolProperty"},
        }};
    };

    struct PCGTrapezoidalDecompositionSettings
    {
        static constexpr std::string_view Name = "PCGTrapezoidalDecompositionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionAxis = 0xA8;
            static constexpr std::uintptr_t LocalOrientation = 0xA9;
            static constexpr std::uintptr_t SubdivisionsPerSegment = 0xAC;
            static constexpr std::uintptr_t ShapeTypeAttributeName = 0xB0;
            static constexpr std::uintptr_t UnitMeshSize = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProjectionAxis", 0xA8, "EnumProperty"},
            {"LocalOrientation", 0xA9, "EnumProperty"},
            {"SubdivisionsPerSegment", 0xAC, "IntProperty"},
            {"ShapeTypeAttributeName", 0xB0, "NameProperty"},
            {"UnitMeshSize", 0xB8, "DoubleProperty"},
        }};
    };

    struct PCGTrivialSettings
    {
        static constexpr std::string_view Name = "PCGTrivialSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGUnionData
    {
        static constexpr std::string_view Name = "PCGUnionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0xE0;
            static constexpr std::uintptr_t FirstNonTrivialTransformData = 0xF0;
            static constexpr std::uintptr_t UnionType = 0xF8;
            static constexpr std::uintptr_t DensityFunction = 0xF9;
            static constexpr std::uintptr_t CachedBounds = 0x100;
            static constexpr std::uintptr_t CachedStrictBounds = 0x138;
            static constexpr std::uintptr_t CachedDimension = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Data", 0xE0, "ArrayProperty"},
            {"FirstNonTrivialTransformData", 0xF0, "ObjectProperty"},
            {"UnionType", 0xF8, "EnumProperty"},
            {"DensityFunction", 0xF9, "EnumProperty"},
            {"CachedBounds", 0x100, "StructProperty"},
            {"CachedStrictBounds", 0x138, "StructProperty"},
            {"CachedDimension", 0x170, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddData",
            "Initialize",
        }};
    };

    struct PCGUnionSettings
    {
        static constexpr std::string_view Name = "PCGUnionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettingsWithDynamicInputs";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0xB8;
            static constexpr std::uintptr_t DensityFunction = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0xB8, "EnumProperty"},
            {"DensityFunction", 0xB9, "EnumProperty"},
        }};
    };

    struct PCGUnitTestDummyActor
    {
        static constexpr std::string_view Name = "PCGUnitTestDummyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t IntProperty = 0x278;
            static constexpr std::uintptr_t FloatProperty = 0x27C;
            static constexpr std::uintptr_t Int64Property = 0x280;
            static constexpr std::uintptr_t DoubleProperty = 0x288;
            static constexpr std::uintptr_t BoolProperty = 0x290;
            static constexpr std::uintptr_t NameProperty = 0x294;
            static constexpr std::uintptr_t StringProperty = 0x298;
            static constexpr std::uintptr_t EnumProperty = 0x2A8;
            static constexpr std::uintptr_t VectorProperty = 0x2B0;
            static constexpr std::uintptr_t Vector4Property = 0x2D0;
            static constexpr std::uintptr_t TransformProperty = 0x2F0;
            static constexpr std::uintptr_t RotatorProperty = 0x350;
            static constexpr std::uintptr_t QuatProperty = 0x370;
            static constexpr std::uintptr_t SoftObjectPathProperty = 0x390;
            static constexpr std::uintptr_t SoftClassPathProperty = 0x3A8;
            static constexpr std::uintptr_t ClassProperty = 0x3C0;
            static constexpr std::uintptr_t ObjectProperty = 0x3C8;
            static constexpr std::uintptr_t Vector2Property = 0x3D0;
            static constexpr std::uintptr_t ColorProperty = 0x3E0;
            static constexpr std::uintptr_t LinearColorProperty = 0x3E4;
            static constexpr std::uintptr_t PCGColorProperty = 0x3F8;
            static constexpr std::uintptr_t ArrayOfIntsProperty = 0x418;
            static constexpr std::uintptr_t ArrayOfVectorsProperty = 0x428;
            static constexpr std::uintptr_t ArrayOfStructsProperty = 0x438;
            static constexpr std::uintptr_t ArrayOfObjectsProperty = 0x448;
            static constexpr std::uintptr_t DummyStruct = 0x458;
            static constexpr std::uintptr_t SetOfIntsProperty = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"IntProperty", 0x278, "IntProperty"},
            {"FloatProperty", 0x27C, "FloatProperty"},
            {"Int64Property", 0x280, "Int64Property"},
            {"DoubleProperty", 0x288, "DoubleProperty"},
            {"BoolProperty", 0x290, "BoolProperty"},
            {"NameProperty", 0x294, "NameProperty"},
            {"StringProperty", 0x298, "StrProperty"},
            {"EnumProperty", 0x2A8, "EnumProperty"},
            {"VectorProperty", 0x2B0, "StructProperty"},
            {"Vector4Property", 0x2D0, "StructProperty"},
            {"TransformProperty", 0x2F0, "StructProperty"},
            {"RotatorProperty", 0x350, "StructProperty"},
            {"QuatProperty", 0x370, "StructProperty"},
            {"SoftObjectPathProperty", 0x390, "StructProperty"},
            {"SoftClassPathProperty", 0x3A8, "StructProperty"},
            {"ClassProperty", 0x3C0, "ClassProperty"},
            {"ObjectProperty", 0x3C8, "ObjectProperty"},
            {"Vector2Property", 0x3D0, "StructProperty"},
            {"ColorProperty", 0x3E0, "StructProperty"},
            {"LinearColorProperty", 0x3E4, "StructProperty"},
            {"PCGColorProperty", 0x3F8, "StructProperty"},
            {"ArrayOfIntsProperty", 0x418, "ArrayProperty"},
            {"ArrayOfVectorsProperty", 0x428, "ArrayProperty"},
            {"ArrayOfStructsProperty", 0x438, "ArrayProperty"},
            {"ArrayOfObjectsProperty", 0x448, "ArrayProperty"},
            {"DummyStruct", 0x458, "StructProperty"},
            {"SetOfIntsProperty", 0x480, "ArrayProperty"},
        }};
    };

    struct PCGUnitTestDummyComponent
    {
        static constexpr std::string_view Name = "PCGUnitTestDummyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IntProperty = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntProperty", 0xC0, "IntProperty"},
        }};
    };

    struct PCGUserParameterGetSettings
    {
        static constexpr std::string_view Name = "PCGUserParameterGetSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyGuid = 0xA8;
            static constexpr std::uintptr_t PropertyName = 0xB8;
            static constexpr std::uintptr_t bSanitizeOutputAttributeName = 0xBC;
            static constexpr std::uintptr_t StructExtractorBehavior = 0xC0;
            static constexpr std::uintptr_t ObjectExtractorBehavior = 0xC4;
            static constexpr std::uintptr_t ContainerExtractorBehavior = 0xC8;
            static constexpr std::uintptr_t bForceObjectAndStructExtraction = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PropertyGuid", 0xA8, "StructProperty"},
            {"PropertyName", 0xB8, "NameProperty"},
            {"bSanitizeOutputAttributeName", 0xBC, "BoolProperty"},
            {"StructExtractorBehavior", 0xC0, "EnumProperty"},
            {"ObjectExtractorBehavior", 0xC4, "EnumProperty"},
            {"ContainerExtractorBehavior", 0xC8, "EnumProperty"},
            {"bForceObjectAndStructExtraction", 0xCC, "BoolProperty"},
        }};
    };

    struct PCGUserParametersData
    {
        static constexpr std::string_view Name = "PCGUserParametersData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t UserParameters = 0x48;
            static constexpr std::uintptr_t UpstreamData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserParameters", 0x48, "StructProperty"},
            {"UpstreamData", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGVirtualTextureData
    {
        static constexpr std::string_view Name = "PCGVirtualTextureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimeVirtualTexture = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RuntimeVirtualTexture", 0x180, "ObjectProperty"},
        }};
    };

    struct PCGVirtualTextureDataInterface
    {
        static constexpr std::string_view Name = "PCGVirtualTextureDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGVirtualTextureDataProvider
    {
        static constexpr std::string_view Name = "PCGVirtualTextureDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t VirtualTextures = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VirtualTextures", 0x68, "ArrayProperty"},
        }};
    };

    struct PCGVirtualTexturePrimingInfo
    {
        static constexpr std::string_view Name = "PCGVirtualTexturePrimingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VirtualTexture = 0x0;
            static constexpr std::uintptr_t Grid = 0x20;
            static constexpr std::uintptr_t WorldTexelSize = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VirtualTexture", 0x0, "SoftObjectProperty"},
            {"Grid", 0x20, "EnumProperty"},
            {"WorldTexelSize", 0x24, "FloatProperty"},
        }};
    };

    struct PCGVisualizeAttributeSettings
    {
        static constexpr std::string_view Name = "PCGVisualizeAttributeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeSource = 0xA8;
            static constexpr std::uintptr_t CustomPrefixString = 0xD8;
            static constexpr std::uintptr_t bPrefixWithIndex = 0xE8;
            static constexpr std::uintptr_t bPrefixWithAttributeName = 0xE9;
            static constexpr std::uintptr_t LocalOffset = 0xF0;
            static constexpr std::uintptr_t Color = 0x108;
            static constexpr std::uintptr_t duration = 0x110;
            static constexpr std::uintptr_t PointLimit = 0x118;
            static constexpr std::uintptr_t bVisualizeEnabled = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AttributeSource", 0xA8, "StructProperty"},
            {"CustomPrefixString", 0xD8, "StrProperty"},
            {"bPrefixWithIndex", 0xE8, "BoolProperty"},
            {"bPrefixWithAttributeName", 0xE9, "BoolProperty"},
            {"LocalOffset", 0xF0, "StructProperty"},
            {"Color", 0x108, "StructProperty"},
            {"duration", 0x110, "DoubleProperty"},
            {"PointLimit", 0x118, "IntProperty"},
            {"bVisualizeEnabled", 0x11C, "BoolProperty"},
        }};
    };

    struct PCGVolume
    {
        static constexpr std::string_view Name = "PCGVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGComponent = 0x2B0;
            static constexpr std::uintptr_t PCGComponentBase = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PCGComponent", 0x2B0, "ObjectProperty"},
            {"PCGComponentBase", 0x2B8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetPCGComponentBase",
        }};
    };

    struct PCGVolumeData
    {
        static constexpr std::string_view Name = "PCGVolumeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialDataWithPointCache";
        struct Offsets
        {
            static constexpr std::uintptr_t VoxelSize = 0xE0;
            static constexpr std::uintptr_t Volume = 0xF8;
            static constexpr std::uintptr_t Bounds = 0x100;
            static constexpr std::uintptr_t StrictBounds = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VoxelSize", 0xE0, "StructProperty"},
            {"Volume", 0xF8, "WeakObjectProperty"},
            {"Bounds", 0x100, "StructProperty"},
            {"StrictBounds", 0x138, "StructProperty"},
        }};
    };

    struct PCGVolumeLite
    {
        static constexpr std::string_view Name = "PCGVolumeLite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t PCGComponent = 0x2B0;
            static constexpr std::uintptr_t PCGComponentBase = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PCGComponent", 0x2B0, "ObjectProperty"},
            {"PCGComponentBase", 0x2B8, "ObjectProperty"},
        }};
    };

    struct PCGVolumeSamplerSettings
    {
        static constexpr std::string_view Name = "PCGVolumeSamplerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t VoxelSize = 0xA8;
            static constexpr std::uintptr_t bUnbounded = 0xC0;
            static constexpr std::uintptr_t PointSteepness = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VoxelSize", 0xA8, "StructProperty"},
            {"bUnbounded", 0xC0, "BoolProperty"},
            {"PointSteepness", 0xC4, "FloatProperty"},
        }};
    };

    struct PCGWaitLandscapeReadySettings
    {
        static constexpr std::string_view Name = "PCGWaitLandscapeReadySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGWaitSettings
    {
        static constexpr std::string_view Name = "PCGWaitSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitTimeInSeconds = 0xA8;
            static constexpr std::uintptr_t WaitTimeInEngineFrames = 0xB0;
            static constexpr std::uintptr_t WaitTimeInRenderFrames = 0xB8;
            static constexpr std::uintptr_t bEndWaitWhenAllConditionsAreMet = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WaitTimeInSeconds", 0xA8, "DoubleProperty"},
            {"WaitTimeInEngineFrames", 0xB0, "Int64Property"},
            {"WaitTimeInRenderFrames", 0xB8, "Int64Property"},
            {"bEndWaitWhenAllConditionsAreMet", 0xC0, "BoolProperty"},
        }};
    };

    struct PCGWeightedByCategoryEntryList
    {
        static constexpr std::string_view Name = "PCGWeightedByCategoryEntryList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryEntry = 0x0;
            static constexpr std::uintptr_t IsDefault = 0x10;
            static constexpr std::uintptr_t WeightedMeshEntries = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CategoryEntry", 0x0, "StrProperty"},
            {"IsDefault", 0x10, "BoolProperty"},
            {"WeightedMeshEntries", 0x18, "ArrayProperty"},
        }};
    };

    struct PCGWeightedByCategoryStructEntryList
    {
        static constexpr std::string_view Name = "PCGWeightedByCategoryStructEntryList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryEntry = 0x0;
            static constexpr std::uintptr_t IsDefault = 0x10;
            static constexpr std::uintptr_t WeightedMeshEntries = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CategoryEntry", 0x0, "StrProperty"},
            {"IsDefault", 0x10, "BoolProperty"},
            {"WeightedMeshEntries", 0x18, "ArrayProperty"},
        }};
    };

    struct PCGWorldActor
    {
        static constexpr std::string_view Name = "PCGWorldActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PartitionGridSize = 0x278;
            static constexpr std::uintptr_t LandscapeCacheObject = 0x280;
            static constexpr std::uintptr_t bTreatPlayerControllersAsGenerationSources = 0x288;
            static constexpr std::uintptr_t bEnableWorldPartitionGenerationSources = 0x289;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PartitionGridSize", 0x278, "UInt32Property"},
            {"LandscapeCacheObject", 0x280, "ObjectProperty"},
            {"bTreatPlayerControllersAsGenerationSources", 0x288, "BoolProperty"},
            {"bEnableWorldPartitionGenerationSources", 0x289, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetPCGGridSize",
        }};
    };

    struct PCGWorldCommonQueryParams
    {
        static constexpr std::string_view Name = "PCGWorldCommonQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnorePCGHits = 0x0;
            static constexpr std::uintptr_t bIgnoreSelfHits = 0x1;
            static constexpr std::uintptr_t CollisionChannel = 0x2;
            static constexpr std::uintptr_t bTraceComplex = 0x3;
            static constexpr std::uintptr_t ActorTagFilter = 0x4;
            static constexpr std::uintptr_t ActorTagsList = 0x8;
            static constexpr std::uintptr_t ActorClassFilter = 0x18;
            static constexpr std::uintptr_t ActorClass = 0x20;
            static constexpr std::uintptr_t ActorFilterFromInput = 0x28;
            static constexpr std::uintptr_t ActorFilterInputSource = 0x30;
            static constexpr std::uintptr_t SelectLandscapeHits = 0x60;
            static constexpr std::uintptr_t bGetReferenceToActorHit = 0x61;
            static constexpr std::uintptr_t bGetReferenceToPhysicalMaterial = 0x62;
            static constexpr std::uintptr_t ParsedActorTagsList = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bIgnorePCGHits", 0x0, "BoolProperty"},
            {"bIgnoreSelfHits", 0x1, "BoolProperty"},
            {"CollisionChannel", 0x2, "ByteProperty"},
            {"bTraceComplex", 0x3, "BoolProperty"},
            {"ActorTagFilter", 0x4, "EnumProperty"},
            {"ActorTagsList", 0x8, "StrProperty"},
            {"ActorClassFilter", 0x18, "EnumProperty"},
            {"ActorClass", 0x20, "ClassProperty"},
            {"ActorFilterFromInput", 0x28, "EnumProperty"},
            {"ActorFilterInputSource", 0x30, "StructProperty"},
            {"SelectLandscapeHits", 0x60, "EnumProperty"},
            {"bGetReferenceToActorHit", 0x61, "BoolProperty"},
            {"bGetReferenceToPhysicalMaterial", 0x62, "BoolProperty"},
            {"ParsedActorTagsList", 0x68, "SetProperty"},
        }};
    };

    struct PCGWorldQueryActorFilterCache
    {
        static constexpr std::string_view Name = "PCGWorldQueryActorFilterCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterActors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterActors", 0x0, "ArrayProperty"},
        }};
    };

    struct PCGWorldQuerySettings
    {
        static constexpr std::string_view Name = "PCGWorldQuerySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryParams = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueryParams", 0xA8, "StructProperty"},
        }};
    };

    struct PCGWorldRayHitData
    {
        static constexpr std::string_view Name = "PCGWorldRayHitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSurfaceData";
        struct Offsets
        {
            static constexpr std::uintptr_t Bounds = 0x180;
            static constexpr std::uintptr_t CollisionShape = 0x1B8;
            static constexpr std::uintptr_t QueryParams = 0x200;
            static constexpr std::uintptr_t CachedLandscapeLayerNames = 0x2C8;
            static constexpr std::uintptr_t OriginatingObject = 0x2D8;
            static constexpr std::uintptr_t FilteredObjects = 0x2F0;
            static constexpr std::uintptr_t World = 0x318;
            static constexpr std::uintptr_t OriginatingComponent = 0x320;
            static constexpr std::uintptr_t ActorFilter = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Bounds", 0x180, "StructProperty"},
            {"CollisionShape", 0x1B8, "StructProperty"},
            {"QueryParams", 0x200, "StructProperty"},
            {"CachedLandscapeLayerNames", 0x2C8, "SetProperty"},
            {"OriginatingObject", 0x2D8, "StructProperty"},
            {"FilteredObjects", 0x2F0, "ArrayProperty"},
            {"World", 0x318, "WeakObjectProperty"},
            {"OriginatingComponent", 0x320, "WeakObjectProperty"},
            {"ActorFilter", 0x328, "StructProperty"},
        }};
    };

    struct PCGWorldRayHitQueryParams
    {
        static constexpr std::string_view Name = "PCGWorldRayHitQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGWorldRaycastQueryParams";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideDefaultParams = 0x88;
            static constexpr std::uintptr_t RayOrigin = 0x90;
            static constexpr std::uintptr_t RayDirection = 0xA8;
            static constexpr std::uintptr_t RayLength = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideDefaultParams", 0x88, "BoolProperty"},
            {"RayOrigin", 0x90, "StructProperty"},
            {"RayDirection", 0xA8, "StructProperty"},
            {"RayLength", 0xC0, "DoubleProperty"},
        }};
    };

    struct PCGWorldRayHitSettings
    {
        static constexpr std::string_view Name = "PCGWorldRayHitSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionShape = 0xA8;
            static constexpr std::uintptr_t QueryParams = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionShape", 0xA8, "StructProperty"},
            {"QueryParams", 0xF0, "StructProperty"},
        }};
    };

    struct PCGWorldRaycastDataInterface
    {
        static constexpr std::string_view Name = "PCGWorldRaycastDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphBindingIndex = 0x28;
            static constexpr std::uintptr_t OutputPinLabel = 0x2C;
            static constexpr std::uintptr_t OutputPinLabelAlias = 0x30;
            static constexpr std::uintptr_t DownstreamInputPinLabelAliases = 0x38;
            static constexpr std::uintptr_t bProducedByCPU = 0x48;
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GraphBindingIndex", 0x28, "IntProperty"},
            {"OutputPinLabel", 0x2C, "NameProperty"},
            {"OutputPinLabelAlias", 0x30, "NameProperty"},
            {"DownstreamInputPinLabelAliases", 0x38, "ArrayProperty"},
            {"bProducedByCPU", 0x48, "BoolProperty"},
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "SoftObjectProperty"},
        }};
    };

    struct PCGWorldRaycastDataProvider
    {
        static constexpr std::string_view Name = "PCGWorldRaycastDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGComputeDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ProducerKernel = 0x50;
            static constexpr std::uintptr_t ProducerSettings = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProducerKernel", 0x50, "ObjectProperty"},
            {"ProducerSettings", 0x58, "ObjectProperty"},
        }};
    };

    struct PCGWorldRaycastElementSettings
    {
        static constexpr std::string_view Name = "PCGWorldRaycastElementSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionShape = 0xA8;
            static constexpr std::uintptr_t RaycastMode = 0xF0;
            static constexpr std::uintptr_t OriginInputAttribute = 0xF8;
            static constexpr std::uintptr_t bOverrideRayDirections = 0x128;
            static constexpr std::uintptr_t RayDirection = 0x130;
            static constexpr std::uintptr_t RayDirectionAttribute = 0x148;
            static constexpr std::uintptr_t EndPointAttribute = 0x178;
            static constexpr std::uintptr_t bOverrideRayLengths = 0x1A8;
            static constexpr std::uintptr_t RayLength = 0x1B0;
            static constexpr std::uintptr_t RayLengthAttribute = 0x1B8;
            static constexpr std::uintptr_t WorldQueryParams = 0x1E8;
            static constexpr std::uintptr_t bKeepOriginalPointOnMiss = 0x270;
            static constexpr std::uintptr_t bUnbounded = 0x271;
            static constexpr std::uintptr_t bGetTextureCoordinates = 0x272;
            static constexpr std::uintptr_t TextureCoordinatesChannelIndex = 0x274;
            static constexpr std::uintptr_t bGetNormals = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"CollisionShape", 0xA8, "StructProperty"},
            {"RaycastMode", 0xF0, "EnumProperty"},
            {"OriginInputAttribute", 0xF8, "StructProperty"},
            {"bOverrideRayDirections", 0x128, "BoolProperty"},
            {"RayDirection", 0x130, "StructProperty"},
            {"RayDirectionAttribute", 0x148, "StructProperty"},
            {"EndPointAttribute", 0x178, "StructProperty"},
            {"bOverrideRayLengths", 0x1A8, "BoolProperty"},
            {"RayLength", 0x1B0, "DoubleProperty"},
            {"RayLengthAttribute", 0x1B8, "StructProperty"},
            {"WorldQueryParams", 0x1E8, "StructProperty"},
            {"bKeepOriginalPointOnMiss", 0x270, "BoolProperty"},
            {"bUnbounded", 0x271, "BoolProperty"},
            {"bGetTextureCoordinates", 0x272, "BoolProperty"},
            {"TextureCoordinatesChannelIndex", 0x274, "IntProperty"},
            {"bGetNormals", 0x278, "BoolProperty"},
        }};
    };

    struct PCGWorldRaycastQueryParams
    {
        static constexpr std::string_view Name = "PCGWorldRaycastQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGWorldCommonQueryParams";
        struct Offsets
        {
            static constexpr std::uintptr_t bGetDistance = 0x78;
            static constexpr std::uintptr_t bGetImpact = 0x78;
            static constexpr std::uintptr_t bGetImpactNormal = 0x78;
            static constexpr std::uintptr_t bGetImpactPoint = 0x78;
            static constexpr std::uintptr_t bGetLocalImpactPoint = 0x78;
            static constexpr std::uintptr_t bGetReferenceToRenderMaterial = 0x78;
            static constexpr std::uintptr_t bGetReflection = 0x78;
            static constexpr std::uintptr_t bIgnoreBackfaceHits = 0x78;
            static constexpr std::uintptr_t bApplyMetadataFromLandscape = 0x79;
            static constexpr std::uintptr_t bGetElementIndex = 0x79;
            static constexpr std::uintptr_t bGetFaceIndex = 0x79;
            static constexpr std::uintptr_t bGetReferenceToStaticMesh = 0x79;
            static constexpr std::uintptr_t bGetSectionIndex = 0x79;
            static constexpr std::uintptr_t bGetUVCoords = 0x79;
            static constexpr std::uintptr_t bUseRenderMaterialIndex = 0x79;
            static constexpr std::uintptr_t RenderMaterialIndex = 0x7C;
            static constexpr std::uintptr_t bGetRenderMaterialIndex = 0x80;
            static constexpr std::uintptr_t UVChannel = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bGetDistance", 0x78, "BoolProperty"},
            {"bGetImpact", 0x78, "BoolProperty"},
            {"bGetImpactNormal", 0x78, "BoolProperty"},
            {"bGetImpactPoint", 0x78, "BoolProperty"},
            {"bGetLocalImpactPoint", 0x78, "BoolProperty"},
            {"bGetReferenceToRenderMaterial", 0x78, "BoolProperty"},
            {"bGetReflection", 0x78, "BoolProperty"},
            {"bIgnoreBackfaceHits", 0x78, "BoolProperty"},
            {"bApplyMetadataFromLandscape", 0x79, "BoolProperty"},
            {"bGetElementIndex", 0x79, "BoolProperty"},
            {"bGetFaceIndex", 0x79, "BoolProperty"},
            {"bGetReferenceToStaticMesh", 0x79, "BoolProperty"},
            {"bGetSectionIndex", 0x79, "BoolProperty"},
            {"bGetUVCoords", 0x79, "BoolProperty"},
            {"bUseRenderMaterialIndex", 0x79, "BoolProperty"},
            {"RenderMaterialIndex", 0x7C, "IntProperty"},
            {"bGetRenderMaterialIndex", 0x80, "BoolProperty"},
            {"UVChannel", 0x84, "IntProperty"},
        }};
    };

    struct PCGWorldVolumetricData
    {
        static constexpr std::string_view Name = "PCGWorldVolumetricData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGVolumeData";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryParams = 0x178;
            static constexpr std::uintptr_t OriginatingObject = 0x1F8;
            static constexpr std::uintptr_t FilteredObjects = 0x210;
            static constexpr std::uintptr_t World = 0x238;
            static constexpr std::uintptr_t OriginatingComponent = 0x240;
            static constexpr std::uintptr_t ActorFilter = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"QueryParams", 0x178, "StructProperty"},
            {"OriginatingObject", 0x1F8, "StructProperty"},
            {"FilteredObjects", 0x210, "ArrayProperty"},
            {"World", 0x238, "WeakObjectProperty"},
            {"OriginatingComponent", 0x240, "WeakObjectProperty"},
            {"ActorFilter", 0x248, "StructProperty"},
        }};
    };

    struct PCGWorldVolumetricQueryParams
    {
        static constexpr std::string_view Name = "PCGWorldVolumetricQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PCGWorldCommonQueryParams";
        struct Offsets
        {
            static constexpr std::uintptr_t bSearchForOverlap = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSearchForOverlap", 0x78, "BoolProperty"},
        }};
    };

    struct PCGWriteDataIndexSettings
    {
        static constexpr std::string_view Name = "PCGWriteDataIndexSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bAddTag = 0xA8;
            static constexpr std::uintptr_t IndexTag = 0xB0;
            static constexpr std::uintptr_t bAddAttribute = 0xC0;
            static constexpr std::uintptr_t IndexAttribute = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAddTag", 0xA8, "BoolProperty"},
            {"IndexTag", 0xB0, "StrProperty"},
            {"bAddAttribute", 0xC0, "BoolProperty"},
            {"IndexAttribute", 0xC8, "StructProperty"},
        }};
    };

}
