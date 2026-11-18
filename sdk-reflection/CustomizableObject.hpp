#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomizableObject
{
    struct BakedResourceData
    {
        static constexpr std::string_view Name = "BakedResourceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveType = 0x0;
            static constexpr std::uintptr_t AssetPath = 0x8;
            static constexpr std::uintptr_t Prefix = 0x18;
            static constexpr std::uintptr_t UserGivenName = 0x28;
            static constexpr std::uintptr_t ComponentName = 0x38;
            static constexpr std::uintptr_t ResourceName = 0x48;
            static constexpr std::uintptr_t UniqueAssetNameSuffix = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SaveType", 0x0, "EnumProperty"},
            {"AssetPath", 0x8, "StrProperty"},
            {"Prefix", 0x18, "StrProperty"},
            {"UserGivenName", 0x28, "StrProperty"},
            {"ComponentName", 0x38, "StrProperty"},
            {"ResourceName", 0x48, "StrProperty"},
            {"UniqueAssetNameSuffix", 0x58, "StrProperty"},
        }};
    };

    struct BakingConfiguration
    {
        static constexpr std::string_view Name = "BakingConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputPath = 0x0;
            static constexpr std::uintptr_t OutputFilesBaseName = 0x10;
            static constexpr std::uintptr_t bExportAllResourcesOnBake = 0x20;
            static constexpr std::uintptr_t bGenerateConstantMaterialInstancesOnBake = 0x21;
            static constexpr std::uintptr_t bReplaceRestrictedCharacters = 0x22;
            static constexpr std::uintptr_t SkeletalMeshAssetPrefix = 0x28;
            static constexpr std::uintptr_t SkeletonAssetPrefix = 0x38;
            static constexpr std::uintptr_t PhysicsAssetPrefix = 0x48;
            static constexpr std::uintptr_t TextureAssetPrefix = 0x58;
            static constexpr std::uintptr_t MaterialAssetPrefix = 0x68;
            static constexpr std::uintptr_t MaterialInstanceAssetPrefix = 0x78;
            static constexpr std::uintptr_t MaterialDynamicInstanceAssetPrefix = 0x88;
            static constexpr std::uintptr_t MaterialConstantInstanceAssetPrefix = 0x98;
            static constexpr std::uintptr_t OnBakeOperationCompletedCallback = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OutputPath", 0x0, "StrProperty"},
            {"OutputFilesBaseName", 0x10, "StrProperty"},
            {"bExportAllResourcesOnBake", 0x20, "BoolProperty"},
            {"bGenerateConstantMaterialInstancesOnBake", 0x21, "BoolProperty"},
            {"bReplaceRestrictedCharacters", 0x22, "BoolProperty"},
            {"SkeletalMeshAssetPrefix", 0x28, "StrProperty"},
            {"SkeletonAssetPrefix", 0x38, "StrProperty"},
            {"PhysicsAssetPrefix", 0x48, "StrProperty"},
            {"TextureAssetPrefix", 0x58, "StrProperty"},
            {"MaterialAssetPrefix", 0x68, "StrProperty"},
            {"MaterialInstanceAssetPrefix", 0x78, "StrProperty"},
            {"MaterialDynamicInstanceAssetPrefix", 0x88, "StrProperty"},
            {"MaterialConstantInstanceAssetPrefix", 0x98, "StrProperty"},
            {"OnBakeOperationCompletedCallback", 0xA8, "DelegateProperty"},
        }};
    };

    struct CompilationOptions_DEPRECATED
    {
        static constexpr std::string_view Name = "CompilationOptions_DEPRECATED";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureCompression = 0x0;
            static constexpr std::uintptr_t OptimizationLevel = 0x4;
            static constexpr std::uintptr_t EmbeddedDataBytesLimit = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TextureCompression", 0x0, "EnumProperty"},
            {"OptimizationLevel", 0x4, "IntProperty"},
            {"EmbeddedDataBytesLimit", 0x8, "UInt64Property"},
        }};
    };

    struct CompileCallbackParams
    {
        static constexpr std::string_view Name = "CompileCallbackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequestFailed = 0x0;
            static constexpr std::uintptr_t bWarnings = 0x1;
            static constexpr std::uintptr_t bErrors = 0x2;
            static constexpr std::uintptr_t bSkipped = 0x3;
            static constexpr std::uintptr_t bCompiled = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bRequestFailed", 0x0, "BoolProperty"},
            {"bWarnings", 0x1, "BoolProperty"},
            {"bErrors", 0x2, "BoolProperty"},
            {"bSkipped", 0x3, "BoolProperty"},
            {"bCompiled", 0x4, "BoolProperty"},
        }};
    };

    struct CompileParams
    {
        static constexpr std::string_view Name = "CompileParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bSkipIfCompiled = 0x0;
            static constexpr std::uintptr_t bSkipIfNotOutOfDate = 0x1;
            static constexpr std::uintptr_t bGatherReferences = 0x2;
            static constexpr std::uintptr_t bAsync = 0x3;
            static constexpr std::uintptr_t CompileOnlySelectedInstance = 0x8;
            static constexpr std::uintptr_t OptimizationLevel = 0x10;
            static constexpr std::uintptr_t TextureCompression = 0x11;
            static constexpr std::uintptr_t Callback = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bSkipIfCompiled", 0x0, "BoolProperty"},
            {"bSkipIfNotOutOfDate", 0x1, "BoolProperty"},
            {"bGatherReferences", 0x2, "BoolProperty"},
            {"bAsync", 0x3, "BoolProperty"},
            {"CompileOnlySelectedInstance", 0x8, "ObjectProperty"},
            {"OptimizationLevel", 0x10, "EnumProperty"},
            {"TextureCompression", 0x11, "EnumProperty"},
            {"Callback", 0x14, "DelegateProperty"},
        }};
    };

    struct CustomizableInstanceComponentData
    {
        static constexpr std::string_view Name = "CustomizableInstanceComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideMaterials = 0x30;
            static constexpr std::uintptr_t OverlayMaterial = 0x40;
            static constexpr std::uintptr_t OverlayMaterials = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OverrideMaterials", 0x30, "ArrayProperty"},
            {"OverlayMaterial", 0x40, "ObjectProperty"},
            {"OverlayMaterials", 0x48, "ArrayProperty"},
        }};
    };

    struct CustomizableInstancePrivate
    {
        static constexpr std::string_view Name = "CustomizableInstancePrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshes = 0x28;
            static constexpr std::uintptr_t Materials = 0x38;
            static constexpr std::uintptr_t Textures = 0x48;
            static constexpr std::uintptr_t ExtensionData = 0x58;
            static constexpr std::uintptr_t UserDataAssets = 0x68;
            static constexpr std::uintptr_t bKeepOwnershipOfGeneratedResources = 0x78;
            static constexpr std::uintptr_t ComponentsData = 0xA0;
            static constexpr std::uintptr_t CommittedDescriptor = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SkeletalMeshes", 0x28, "MapProperty"},
            {"Materials", 0x38, "ArrayProperty"},
            {"Textures", 0x48, "ArrayProperty"},
            {"ExtensionData", 0x58, "ArrayProperty"},
            {"UserDataAssets", 0x68, "ArrayProperty"},
            {"bKeepOwnershipOfGeneratedResources", 0x78, "BoolProperty"},
            {"ComponentsData", 0xA0, "ArrayProperty"},
            {"CommittedDescriptor", 0xB8, "StructProperty"},
        }};
    };

    struct CustomizableObject
    {
        static constexpr std::string_view Name = "CustomizableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LODSettings = 0x28;
            static constexpr std::uintptr_t bEnableUseRefSkeletalMeshAsPlaceholder = 0x68;
            static constexpr std::uintptr_t bEnableMeshCache = 0x69;
            static constexpr std::uintptr_t CustomizableObjectClassTags = 0x70;
            static constexpr std::uintptr_t PopulationClassTags = 0x80;
            static constexpr std::uintptr_t CustomizableObjectParametersTags = 0x90;
            static constexpr std::uintptr_t Private = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LODSettings", 0x28, "StructProperty"},
            {"bEnableUseRefSkeletalMeshAsPlaceholder", 0x68, "BoolProperty"},
            {"bEnableMeshCache", 0x69, "BoolProperty"},
            {"CustomizableObjectClassTags", 0x70, "ArrayProperty"},
            {"PopulationClassTags", 0x80, "ArrayProperty"},
            {"CustomizableObjectParametersTags", 0x90, "MapProperty"},
            {"Private", 0xA0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 35> FunctionNames{{
            "Compile",
            "ContainsEnumParameterValue",
            "ContainsParameter",
            "CreateInstance",
            "GetAnimClassParameterDefaultValue",
            "GetBoolParameterDefaultValue",
            "GetColorParameterDefaultValue",
            "GetComponentCount",
            "GetComponentMeshReferenceSkeletalMesh",
            "GetComponentName",
            "GetEnumParameterDefaultValue",
            "GetEnumParameterGroupType",
            "GetEnumParameterNumValues",
            "GetEnumParameterValue",
            "GetEnumParameterValueUIMetadata",
            "GetFloatParameterDefaultValue",
            "GetMaterialParameterDefaultValue",
            "GetParameterCount",
            "GetParameterName",
            "GetParameterTypeByName",
            "GetParameterUIMetadata",
            "GetProjectorParameterDefaultValue",
            "GetSkeletalMeshComponentReferenceSkeletalMesh",
            "GetSkeletalMeshParameterDefaultValue",
            "GetStateCount",
            "GetStateName",
            "GetStateParameterCount",
            "GetStateParameterName",
            "GetStateUIMetadata",
            "GetTextureParameterDefaultValue",
            "GetTransformParameterDefaultValue",
            "GetVectorParameterDefaultValue",
            "IsCompiled",
            "IsLoading",
            "IsParameterMultidimensional",
        }};
    };

    struct CustomizableObjectAnimClassParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectAnimClassParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x18;
            static constexpr std::uintptr_t ParameterRangeValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "ClassProperty"},
            {"ID", 0x18, "StructProperty"},
            {"ParameterRangeValues", 0x28, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectAnimationSlot
    {
        static constexpr std::string_view Name = "CustomizableObjectAnimationSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t AnimInstance = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"AnimInstance", 0x8, "SoftClassProperty"},
        }};
    };

    struct CustomizableObjectBoolParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectBoolParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "BoolProperty"},
            {"ID", 0x14, "StructProperty"},
        }};
    };

    struct CustomizableObjectBox
    {
        static constexpr std::string_view Name = "CustomizableObjectBox";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CustomizableObjectPrimitive";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Rotation = 0xC;
            static constexpr std::uintptr_t Radius = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Rotation", 0xC, "StructProperty"},
            {"Radius", 0x18, "StructProperty"},
        }};
    };

    struct CustomizableObjectCapsule
    {
        static constexpr std::string_view Name = "CustomizableObjectCapsule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CustomizableObjectPrimitive";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Rotation = 0xC;
            static constexpr std::uintptr_t Radius = 0x18;
            static constexpr std::uintptr_t HalfHeight = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Rotation", 0xC, "StructProperty"},
            {"Radius", 0x18, "FloatProperty"},
            {"HalfHeight", 0x1C, "FloatProperty"},
        }};
    };

    struct CustomizableObjectEmptyPrimitive
    {
        static constexpr std::string_view Name = "CustomizableObjectEmptyPrimitive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CustomizableObjectPrimitive";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectExtension
    {
        static constexpr std::string_view Name = "CustomizableObjectExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectExternalAssetCollector
    {
        static constexpr std::string_view Name = "CustomizableObjectExternalAssetCollector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectExternalTypeParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectExternalTypeParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x20;
            static constexpr std::uintptr_t ParameterRangeValues = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "StructProperty"},
            {"ID", 0x20, "StructProperty"},
            {"ParameterRangeValues", 0x30, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectFloatParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectFloatParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x14;
            static constexpr std::uintptr_t ParameterRangeValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "FloatProperty"},
            {"ID", 0x14, "StructProperty"},
            {"ParameterRangeValues", 0x28, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectIdPair
    {
        static constexpr std::string_view Name = "CustomizableObjectIdPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableObjectGroupName = 0x0;
            static constexpr std::uintptr_t CustomizableObjectName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CustomizableObjectGroupName", 0x0, "StrProperty"},
            {"CustomizableObjectName", 0x10, "StrProperty"},
        }};
    };

    struct CustomizableObjectInstance
    {
        static constexpr std::string_view Name = "CustomizableObjectInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdatedDelegate = 0x28;
            static constexpr std::uintptr_t Descriptor = 0x78;
            static constexpr std::uintptr_t PrivateData = 0x148;
            static constexpr std::uintptr_t CustomizableObject = 0x150;
            static constexpr std::uintptr_t BoolParameters = 0x158;
            static constexpr std::uintptr_t IntParameters = 0x168;
            static constexpr std::uintptr_t FloatParameters = 0x178;
            static constexpr std::uintptr_t TextureParameters = 0x188;
            static constexpr std::uintptr_t VectorParameters = 0x198;
            static constexpr std::uintptr_t ProjectorParameters = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"UpdatedDelegate", 0x28, "MulticastInlineDelegateProperty"},
            {"Descriptor", 0x78, "StructProperty"},
            {"PrivateData", 0x148, "ObjectProperty"},
            {"CustomizableObject", 0x150, "ObjectProperty"},
            {"BoolParameters", 0x158, "ArrayProperty"},
            {"IntParameters", 0x168, "ArrayProperty"},
            {"FloatParameters", 0x178, "ArrayProperty"},
            {"TextureParameters", 0x188, "ArrayProperty"},
            {"VectorParameters", 0x198, "ArrayProperty"},
            {"ProjectorParameters", 0x1A8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 99> FunctionNames{{
            "AddValueToFloatRange",
            "AddValueToIntRange",
            "AddValueToProjectorRange",
            "Clone",
            "CloneStatic",
            "ContainsAnimClassParameter",
            "ContainsBoolParameter",
            "ContainsColorParameter",
            "ContainsEnumParameter",
            "ContainsExternalTypeParameter",
            "ContainsFloatParameter",
            "ContainsIntParameter",
            "ContainsMaterialParameter",
            "ContainsPrimitiveParameter",
            "ContainsProjectorParameter",
            "ContainsSkeletalMeshParameter",
            "ContainsTextureParameter",
            "ContainsTransformParameter",
            "ContainsVectorParameter",
            "CopyParametersFromInstance",
            "ForEachComponentAnimInstance",
            "GetAnimBP",
            "GetAnimClassParameterSelectedOption",
            "GetAnimationGameplayTags",
            "GetBoolParameterSelectedOption",
            "GetBuildParameterRelevancy",
            "GetColorParameterSelectedOption",
            "GetComponentMeshSkeletalMesh",
            "GetComponentNames",
            "GetCurrentState",
            "GetCustomizableObject",
            "GetEnumParameterSelectedOption",
            "GetExternalTypeParameterSelectedOption",
            "GetFloatParameterSelectedOption",
            "GetFloatValueRange",
            "GetIntParameterSelectedOption",
            "GetIntValueRange",
            "GetMaterialParameterSelectedOption",
            "GetMergedAssetUserData",
            "GetPrimitiveParameterSelectedOption",
            "GetProjectorAngle",
            "GetProjectorDirection",
            "GetProjectorParameterSelectedOption",
            "GetProjectorParameterType",
            "GetProjectorPosition",
            "GetProjectorScale",
            "GetProjectorUp",
            "GetProjectorValue",
            "GetProjectorValueRange",
            "GetSkeletalMeshComponentOverrideMaterials",
            "GetSkeletalMeshComponentSkeletalMesh",
            "GetSkeletalMeshParameterSelectedOption",
            "GetTextureParameterSelectedOption",
            "GetTextureValueRange",
            "GetTransformParameterSelectedOption",
            "GetVectorParameterSelectedOption",
            "HasAnyParameters",
            "HasAnySkeletalMesh",
            "IsParameterDirty",
            "IsParameterRelevant",
            "MultilayerProjectorCreateLayer",
            "MultilayerProjectorGetLayer",
            "MultilayerProjectorNumLayers",
            "MultilayerProjectorRemoveLayerAt",
            "MultilayerProjectorUpdateLayer",
            "RemoveValueFromFloatRange",
            "RemoveValueFromIntRange",
            "RemoveValueFromProjectorRange",
            "SetAnimClassParameterSelectedOption",
            "SetBoolParameterSelectedOption",
            "SetBuildParameterRelevancy",
            "SetColorParameterSelectedOption",
            "SetCurrentState",
            "SetDefaultValue",
            "SetDefaultValues",
            "SetEnumParameterSelectedOption",
            "SetExternalTypeParameterSelectedOption",
            "SetFloatParameterSelectedOption",
            "SetIntParameterSelectedOption",
            "SetKeepOwnershipOfGeneratedResources",
            "SetMaterialParameterSelectedOption",
            "SetObject",
            "SetPrimitiveParameterSelectedOption",
            "SetProjectorAngle",
            "SetProjectorDirection",
            "SetProjectorParameterSelectedOption",
            "SetProjectorPosition",
            "SetProjectorScale",
            "SetProjectorUp",
            "SetProjectorValue",
            "SetRandomValues",
            "SetRandomValuesFromStream",
            "SetReplacePhysicsAssets",
            "SetSkeletalMeshParameterSelectedOption",
            "SetTextureParameterSelectedOption",
            "SetTransformParameterSelectedOption",
            "SetVectorParameterSelectedOption",
            "UpdateSkeletalMeshAsync",
            "UpdateSkeletalMeshAsyncResult",
        }};
    };

    struct CustomizableObjectInstanceBakeOutput
    {
        static constexpr std::string_view Name = "CustomizableObjectInstanceBakeOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bWasBakeSuccessful = 0x0;
            static constexpr std::uintptr_t SavedPackages = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bWasBakeSuccessful", 0x0, "BoolProperty"},
            {"SavedPackages", 0x8, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectInstanceDescriptor
    {
        static constexpr std::string_view Name = "CustomizableObjectInstanceDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableObject = 0x0;
            static constexpr std::uintptr_t BoolParameters = 0x8;
            static constexpr std::uintptr_t IntParameters = 0x18;
            static constexpr std::uintptr_t FloatParameters = 0x28;
            static constexpr std::uintptr_t TextureParameters = 0x38;
            static constexpr std::uintptr_t SkeletalMeshParameters = 0x48;
            static constexpr std::uintptr_t AnimClassParameters = 0x58;
            static constexpr std::uintptr_t MaterialParameters = 0x68;
            static constexpr std::uintptr_t VectorParameters = 0x78;
            static constexpr std::uintptr_t ProjectorParameters = 0x88;
            static constexpr std::uintptr_t TransformParameters = 0x98;
            static constexpr std::uintptr_t PrimitiveParameters = 0xA8;
            static constexpr std::uintptr_t ExternalTypeParameters = 0xB8;
            static constexpr std::uintptr_t State = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CustomizableObject", 0x0, "ObjectProperty"},
            {"BoolParameters", 0x8, "ArrayProperty"},
            {"IntParameters", 0x18, "ArrayProperty"},
            {"FloatParameters", 0x28, "ArrayProperty"},
            {"TextureParameters", 0x38, "ArrayProperty"},
            {"SkeletalMeshParameters", 0x48, "ArrayProperty"},
            {"AnimClassParameters", 0x58, "ArrayProperty"},
            {"MaterialParameters", 0x68, "ArrayProperty"},
            {"VectorParameters", 0x78, "ArrayProperty"},
            {"ProjectorParameters", 0x88, "ArrayProperty"},
            {"TransformParameters", 0x98, "ArrayProperty"},
            {"PrimitiveParameters", 0xA8, "ArrayProperty"},
            {"ExternalTypeParameters", 0xB8, "ArrayProperty"},
            {"State", 0xC8, "IntProperty"},
        }};
    };

    struct CustomizableObjectInstanceUsage
    {
        static constexpr std::string_view Name = "CustomizableObjectInstanceUsage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UsedSkeletalMeshComponent = 0x38;
            static constexpr std::uintptr_t UsedCustomizableObjectInstance = 0x40;
            static constexpr std::uintptr_t UsedComponentName = 0x48;
            static constexpr std::uintptr_t bUsedSkipSetReferenceSkeletalMesh = 0x4C;
            static constexpr std::uintptr_t bUsedSkipSetSkeletalMeshOnAttach = 0x4D;
            static constexpr std::uintptr_t Private = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UsedSkeletalMeshComponent", 0x38, "WeakObjectProperty"},
            {"UsedCustomizableObjectInstance", 0x40, "ObjectProperty"},
            {"UsedComponentName", 0x48, "NameProperty"},
            {"bUsedSkipSetReferenceSkeletalMesh", 0x4C, "BoolProperty"},
            {"bUsedSkipSetSkeletalMeshOnAttach", 0x4D, "BoolProperty"},
            {"Private", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "AttachTo",
            "GetAttachParent",
            "GetComponentName",
            "GetCustomizableObjectInstance",
            "GetSkipSetReferenceSkeletalMesh",
            "SetComponentName",
            "SetCustomizableObjectInstance",
            "SetSkipSetReferenceSkeletalMesh",
            "SetSkipSetSkeletalMeshOnAttach",
            "UpdateSkeletalMeshAsync",
            "UpdateSkeletalMeshAsyncResult",
        }};
    };

    struct CustomizableObjectInstanceUsagePrivate
    {
        static constexpr std::string_view Name = "CustomizableObjectInstanceUsagePrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectInstanceUserData
    {
        static constexpr std::string_view Name = "CustomizableObjectInstanceUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationGameplayTag = 0x30;
            static constexpr std::uintptr_t AnimationSlots = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimationGameplayTag", 0x30, "StructProperty"},
            {"AnimationSlots", 0x50, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAnimationGameplayTags",
            "SetAnimationGameplayTags",
        }};
    };

    struct CustomizableObjectIntParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectIntParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValueName = 0x10;
            static constexpr std::uintptr_t ID = 0x20;
            static constexpr std::uintptr_t ParameterRangeValueNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValueName", 0x10, "StrProperty"},
            {"ID", 0x20, "StructProperty"},
            {"ParameterRangeValueNames", 0x30, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectMaterialParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectMaterialParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x18;
            static constexpr std::uintptr_t ParameterRangeValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "ObjectProperty"},
            {"ID", 0x18, "StructProperty"},
            {"ParameterRangeValues", 0x28, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectPlane
    {
        static constexpr std::string_view Name = "CustomizableObjectPlane";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CustomizableObjectPrimitive";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Normal = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Normal", 0xC, "StructProperty"},
        }};
    };

    struct CustomizableObjectPrimitive
    {
        static constexpr std::string_view Name = "CustomizableObjectPrimitive";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectPrimitiveParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectPrimitiveParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x20;
            static constexpr std::uintptr_t ParameterRangeValues = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "StructProperty"},
            {"ID", 0x20, "StructProperty"},
            {"ParameterRangeValues", 0x30, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectPrivate
    {
        static constexpr std::string_view Name = "CustomizableObjectPrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ModelStreamableData = 0x38;
            static constexpr std::uintptr_t ModelResources = 0x40;
            static constexpr std::uintptr_t ParameterProperties = 0xE0;
            static constexpr std::uintptr_t ReferencedObjects = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModelStreamableData", 0x38, "ObjectProperty"},
            {"ModelResources", 0x40, "ObjectProperty"},
            {"ParameterProperties", 0xE0, "ArrayProperty"},
            {"ReferencedObjects", 0xF0, "ObjectProperty"},
        }};
    };

    struct CustomizableObjectProjector
    {
        static constexpr std::string_view Name = "CustomizableObjectProjector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Direction = 0xC;
            static constexpr std::uintptr_t Up = 0x18;
            static constexpr std::uintptr_t Scale = 0x24;
            static constexpr std::uintptr_t ProjectionType = 0x30;
            static constexpr std::uintptr_t Angle = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Direction", 0xC, "StructProperty"},
            {"Up", 0x18, "StructProperty"},
            {"Scale", 0x24, "StructProperty"},
            {"ProjectionType", 0x30, "EnumProperty"},
            {"Angle", 0x34, "FloatProperty"},
        }};
    };

    struct CustomizableObjectProjectorParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectProjectorParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
            static constexpr std::uintptr_t ID = 0x48;
            static constexpr std::uintptr_t RangeValues = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"Value", 0x10, "StructProperty"},
            {"ID", 0x48, "StructProperty"},
            {"RangeValues", 0x58, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectSkeletalMesh
    {
        static constexpr std::string_view Name = "CustomizableObjectSkeletalMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceModels = 0xB8;
            static constexpr std::uintptr_t skeleton = 0xD0;
            static constexpr std::uintptr_t ImportedBounds = 0xD8;
            static constexpr std::uintptr_t ExtendedBounds = 0x110;
            static constexpr std::uintptr_t PositiveBoundsExtension = 0x148;
            static constexpr std::uintptr_t NegativeBoundsExtension = 0x160;
            static constexpr std::uintptr_t Materials = 0x178;
            static constexpr std::uintptr_t MinQualityLevelLOD = 0x1D0;
            static constexpr std::uintptr_t MinLOD = 0x1F8;
            static constexpr std::uintptr_t DisableBelowMinLodStripping = 0x210;
            static constexpr std::uintptr_t bAlwaysAnimateHiddenBones = 0x228;
            static constexpr std::uintptr_t bEnablePerPolyCollision = 0x228;
            static constexpr std::uintptr_t bHasVertexColors = 0x228;
            static constexpr std::uintptr_t bUseFullPrecisionUVs = 0x228;
            static constexpr std::uintptr_t bUseHighPrecisionTangentBasis = 0x228;
            static constexpr std::uintptr_t BodySetup = 0x230;
            static constexpr std::uintptr_t PhysicsAsset = 0x238;
            static constexpr std::uintptr_t ShadowPhysicsAsset = 0x240;
            static constexpr std::uintptr_t NodeMappingData = 0x248;
            static constexpr std::uintptr_t bSupportRayTracing = 0x258;
            static constexpr std::uintptr_t RayTracingMinLOD = 0x25C;
            static constexpr std::uintptr_t ClothLODBiasMode = 0x260;
            static constexpr std::uintptr_t MorphTargets = 0x268;
            static constexpr std::uintptr_t PostProcessAnimBlueprint = 0x338;
            static constexpr std::uintptr_t PostProcessAnimBPLODThreshold = 0x340;
            static constexpr std::uintptr_t MeshClothingAssets = 0x348;
            static constexpr std::uintptr_t SamplingInfo = 0x358;
            static constexpr std::uintptr_t AssetUserData = 0x388;
            static constexpr std::uintptr_t Sockets = 0x398;
            static constexpr std::uintptr_t SkinWeightProfiles = 0x3B8;
            static constexpr std::uintptr_t DefaultMeshDeformer = 0x3C8;
            static constexpr std::uintptr_t TargetMeshDeformers = 0x3D0;
            static constexpr std::uintptr_t OverlayMaterial = 0x3D8;
            static constexpr std::uintptr_t OverlayMaterialMaxDrawDistance = 0x3E0;
            static constexpr std::uintptr_t ForwardAxis = 0x3E4;
            static constexpr std::uintptr_t LODInfo = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"SourceModels", 0xB8, "ArrayProperty"},
            {"skeleton", 0xD0, "ObjectProperty"},
            {"ImportedBounds", 0xD8, "StructProperty"},
            {"ExtendedBounds", 0x110, "StructProperty"},
            {"PositiveBoundsExtension", 0x148, "StructProperty"},
            {"NegativeBoundsExtension", 0x160, "StructProperty"},
            {"Materials", 0x178, "ArrayProperty"},
            {"MinQualityLevelLOD", 0x1D0, "StructProperty"},
            {"MinLOD", 0x1F8, "StructProperty"},
            {"DisableBelowMinLodStripping", 0x210, "StructProperty"},
            {"bAlwaysAnimateHiddenBones", 0x228, "BoolProperty"},
            {"bEnablePerPolyCollision", 0x228, "BoolProperty"},
            {"bHasVertexColors", 0x228, "BoolProperty"},
            {"bUseFullPrecisionUVs", 0x228, "BoolProperty"},
            {"bUseHighPrecisionTangentBasis", 0x228, "BoolProperty"},
            {"BodySetup", 0x230, "ObjectProperty"},
            {"PhysicsAsset", 0x238, "ObjectProperty"},
            {"ShadowPhysicsAsset", 0x240, "ObjectProperty"},
            {"NodeMappingData", 0x248, "ArrayProperty"},
            {"bSupportRayTracing", 0x258, "BoolProperty"},
            {"RayTracingMinLOD", 0x25C, "IntProperty"},
            {"ClothLODBiasMode", 0x260, "EnumProperty"},
            {"MorphTargets", 0x268, "ArrayProperty"},
            {"PostProcessAnimBlueprint", 0x338, "ClassProperty"},
            {"PostProcessAnimBPLODThreshold", 0x340, "IntProperty"},
            {"MeshClothingAssets", 0x348, "ArrayProperty"},
            {"SamplingInfo", 0x358, "StructProperty"},
            {"AssetUserData", 0x388, "ArrayProperty"},
            {"Sockets", 0x398, "ArrayProperty"},
            {"SkinWeightProfiles", 0x3B8, "ArrayProperty"},
            {"DefaultMeshDeformer", 0x3C8, "ObjectProperty"},
            {"TargetMeshDeformers", 0x3D0, "ObjectProperty"},
            {"OverlayMaterial", 0x3D8, "ObjectProperty"},
            {"OverlayMaterialMaxDrawDistance", 0x3E0, "FloatProperty"},
            {"ForwardAxis", 0x3E4, "ByteProperty"},
            {"LODInfo", 0x3E8, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectSkeletalMeshParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectSkeletalMeshParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x18;
            static constexpr std::uintptr_t ParameterRangeValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "ObjectProperty"},
            {"ID", 0x18, "StructProperty"},
            {"ParameterRangeValues", 0x28, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectSphere
    {
        static constexpr std::string_view Name = "CustomizableObjectSphere";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CustomizableObjectPrimitive";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Radius = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Radius", 0xC, "FloatProperty"},
        }};
    };

    struct CustomizableObjectSystem
    {
        static constexpr std::string_view Name = "CustomizableObjectSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Private = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Private", 0x28, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "AddViewCenter",
            "ClearViewCenters",
            "GetAverageBuildTime",
            "GetInstance",
            "GetInstanceChecked",
            "GetNumInstances",
            "GetNumPendingInstances",
            "GetPluginVersion",
            "GetTextureMemoryUsed",
            "GetTotalInstances",
            "GetWorkingMemory",
            "IsUpdateResultValid",
            "IsUpdating",
            "RemoveViewCenter",
            "SetGenerateInstancesWithinRange",
            "SetInstanceGenerationRange",
            "SetWorkingMemory",
        }};
    };

    struct CustomizableObjectSystemPrivate
    {
        static constexpr std::string_view Name = "CustomizableObjectSystemPrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectTextureParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectTextureParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x18;
            static constexpr std::uintptr_t ParameterRangeValues = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "ObjectProperty"},
            {"ID", 0x18, "StructProperty"},
            {"ParameterRangeValues", 0x28, "ArrayProperty"},
        }};
    };

    struct CustomizableObjectTransformParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectTransformParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "StructProperty"},
            {"ID", 0x70, "StructProperty"},
        }};
    };

    struct CustomizableObjectUserDataAssetCollector
    {
        static constexpr std::string_view Name = "CustomizableObjectUserDataAssetCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomizableObjectVectorParameterValue
    {
        static constexpr std::string_view Name = "CustomizableObjectVectorParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterValue = 0x10;
            static constexpr std::uintptr_t ID = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterValue", 0x10, "StructProperty"},
            {"ID", 0x20, "StructProperty"},
        }};
    };

    struct CustomizableSkeletalComponent
    {
        static constexpr std::string_view Name = "CustomizableSkeletalComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentIndex = 0x240;
            static constexpr std::uintptr_t CustomizableObjectInstance = 0x248;
            static constexpr std::uintptr_t ComponentName = 0x250;
            static constexpr std::uintptr_t bSkipSetReferenceSkeletalMesh = 0x254;
            static constexpr std::uintptr_t bSkipSetSkeletalMeshOnAttach = 0x255;
            static constexpr std::uintptr_t Private = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ComponentIndex", 0x240, "IntProperty"},
            {"CustomizableObjectInstance", 0x248, "ObjectProperty"},
            {"ComponentName", 0x250, "NameProperty"},
            {"bSkipSetReferenceSkeletalMesh", 0x254, "BoolProperty"},
            {"bSkipSetSkeletalMeshOnAttach", 0x255, "BoolProperty"},
            {"Private", 0x258, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GetComponentName",
            "GetCustomizableObjectInstance",
            "GetInstanceUsage",
            "SetComponentName",
            "SetCustomizableObjectInstance",
            "SetSkipSetReferenceSkeletalMesh",
            "SetSkipSetSkeletalMeshOnAttach",
            "UpdateSkeletalMeshAsync",
            "UpdateSkeletalMeshAsyncResult",
        }};
    };

    struct CustomizableSkeletalComponentPrivate
    {
        static constexpr std::string_view Name = "CustomizableSkeletalComponentPrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceUsage = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceUsage", 0x28, "ObjectProperty"},
        }};
    };

    struct CustomizableSkeletalMeshActor
    {
        static constexpr std::string_view Name = "CustomizableSkeletalMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableSkeletalComponents = 0x2B8;
            static constexpr std::uintptr_t SkeletalMeshComponents = 0x2C8;
            static constexpr std::uintptr_t DebugMaterial = 0x2D8;
            static constexpr std::uintptr_t Private = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CustomizableSkeletalComponents", 0x2B8, "ArrayProperty"},
            {"SkeletalMeshComponents", 0x2C8, "ArrayProperty"},
            {"DebugMaterial", 0x2D8, "ObjectProperty"},
            {"Private", 0x2E8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "EnableDebugMaterial",
            "GetCustomizableObjectInstance",
            "GetSkeletalMeshComponent",
            "SetDebugMaterial",
            "SwitchComponentsMaterials",
        }};
    };

    struct CustomizableSkeletalMeshActorPrivate
    {
        static constexpr std::string_view Name = "CustomizableSkeletalMeshActorPrivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DGGUI
    {
        static constexpr std::string_view Name = "DGGUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCustomizableObjectInstanceUsage",
            "SetCustomizableObjectInstanceUsage",
        }};
    };

    struct FParameterOptionsTags
    {
        static constexpr std::string_view Name = "FParameterOptionsTags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x0, "ArrayProperty"},
        }};
    };

    struct IntegerParameterOptionDataTable
    {
        static constexpr std::string_view Name = "IntegerParameterOptionDataTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataTables = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataTables", 0x0, "SetProperty"},
        }};
    };

    struct IntegerParameterOptionKey
    {
        static constexpr std::string_view Name = "IntegerParameterOptionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterOption = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterName", 0x0, "StrProperty"},
            {"ParameterOption", 0x10, "StrProperty"},
        }};
    };

    struct IntegerParameterUIData
    {
        static constexpr std::string_view Name = "IntegerParameterUIData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamUIMetadata = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParamUIMetadata", 0x0, "StructProperty"},
        }};
    };

    struct ModelResources
    {
        static constexpr std::string_view Name = "ModelResources";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReferenceSkeletalMeshes = 0x28;
            static constexpr std::uintptr_t PassthroughObjects = 0x38;
            static constexpr std::uintptr_t AnimBPs = 0x48;
            static constexpr std::uintptr_t ImageProperties = 0x58;
            static constexpr std::uintptr_t ParameterUIDataMap = 0x68;
            static constexpr std::uintptr_t StateUIDataMap = 0x78;
            static constexpr std::uintptr_t bAllowClothingPhysicsEditsPropagation = 0x88;
            static constexpr std::uintptr_t ExternalOperations = 0x90;
            static constexpr std::uintptr_t ExternalOperationVersions = 0xA0;
            static constexpr std::uintptr_t ComponentNamesPerObjectComponent = 0xB0;
            static constexpr std::uintptr_t TextureParameterDefaultValues = 0xC0;
            static constexpr std::uintptr_t SkeletalMeshParameterDefaultValues = 0xD0;
            static constexpr std::uintptr_t AnimClassParameterDefaultValues = 0xE0;
            static constexpr std::uintptr_t MaterialParameterDefaultValues = 0xF0;
            static constexpr std::uintptr_t ExternalTypeParameterDefaultValues = 0x100;
            static constexpr std::uintptr_t PrimitiveParameterDefaultValues = 0x110;
            static constexpr std::uintptr_t ExternalTypeParameterTypes = 0x120;
            static constexpr std::uintptr_t ReleaseVersion = 0x130;
            static constexpr std::uintptr_t CodeVersion = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"ReferenceSkeletalMeshes", 0x28, "MapProperty"},
            {"PassthroughObjects", 0x38, "MapProperty"},
            {"AnimBPs", 0x48, "ArrayProperty"},
            {"ImageProperties", 0x58, "ArrayProperty"},
            {"ParameterUIDataMap", 0x68, "MapProperty"},
            {"StateUIDataMap", 0x78, "MapProperty"},
            {"bAllowClothingPhysicsEditsPropagation", 0x88, "BoolProperty"},
            {"ExternalOperations", 0x90, "MapProperty"},
            {"ExternalOperationVersions", 0xA0, "MapProperty"},
            {"ComponentNamesPerObjectComponent", 0xB0, "ArrayProperty"},
            {"TextureParameterDefaultValues", 0xC0, "MapProperty"},
            {"SkeletalMeshParameterDefaultValues", 0xD0, "MapProperty"},
            {"AnimClassParameterDefaultValues", 0xE0, "MapProperty"},
            {"MaterialParameterDefaultValues", 0xF0, "MapProperty"},
            {"ExternalTypeParameterDefaultValues", 0x100, "MapProperty"},
            {"PrimitiveParameterDefaultValues", 0x110, "MapProperty"},
            {"ExternalTypeParameterTypes", 0x120, "MapProperty"},
            {"ReleaseVersion", 0x130, "StrProperty"},
            {"CodeVersion", 0x140, "IntProperty"},
        }};
    };

    struct ModelStreamableData
    {
        static constexpr std::string_view Name = "ModelStreamableData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultilayerProjectorLayer
    {
        static constexpr std::string_view Name = "MultilayerProjectorLayer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MutableLODSettings
    {
        static constexpr std::string_view Name = "MutableLODSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinLOD = 0x0;
            static constexpr std::uintptr_t MinQualityLevelLOD = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinLOD", 0x0, "StructProperty"},
            {"MinQualityLevelLOD", 0x18, "StructProperty"},
        }};
    };

    struct MutableMeshComponentData
    {
        static constexpr std::string_view Name = "MutableMeshComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ReferenceSkeletalMesh = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ReferenceSkeletalMesh", 0x8, "ObjectProperty"},
        }};
    };

    struct MutableModelImageProperties
    {
        static constexpr std::string_view Name = "MutableModelImageProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureParameterName = 0x0;
            static constexpr std::uintptr_t Filter = 0x10;
            static constexpr std::uintptr_t FlipGreenChannel = 0x14;
            static constexpr std::uintptr_t IsPassThrough = 0x14;
            static constexpr std::uintptr_t SRGB = 0x14;
            static constexpr std::uintptr_t LODBias = 0x18;
            static constexpr std::uintptr_t MipGenSettings = 0x1C;
            static constexpr std::uintptr_t LodGroup = 0x1D;
            static constexpr std::uintptr_t AddressX = 0x1E;
            static constexpr std::uintptr_t AddressY = 0x1F;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TextureParameterName", 0x0, "StrProperty"},
            {"Filter", 0x10, "ByteProperty"},
            {"FlipGreenChannel", 0x14, "BoolProperty"},
            {"IsPassThrough", 0x14, "BoolProperty"},
            {"SRGB", 0x14, "BoolProperty"},
            {"LODBias", 0x18, "IntProperty"},
            {"MipGenSettings", 0x1C, "ByteProperty"},
            {"LodGroup", 0x1D, "ByteProperty"},
            {"AddressX", 0x1E, "ByteProperty"},
            {"AddressY", 0x1F, "ByteProperty"},
        }};
    };

    struct MutableModelParameterProperties
    {
        static constexpr std::string_view Name = "MutableModelParameterProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t PossibleValues = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x10, "EnumProperty"},
            {"PossibleValues", 0x18, "ArrayProperty"},
        }};
    };

    struct MutableModelParameterValue
    {
        static constexpr std::string_view Name = "MutableModelParameterValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Value", 0x10, "IntProperty"},
        }};
    };

    struct MutableParamNameSet
    {
        static constexpr std::string_view Name = "MutableParamNameSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MutableParamUIMetadata
    {
        static constexpr std::string_view Name = "MutableParamUIMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MutableUIMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumValue = 0x68;
            static constexpr std::uintptr_t MaximumValue = 0x6C;
            static constexpr std::uintptr_t GameplayTags = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinimumValue", 0x68, "FloatProperty"},
            {"MaximumValue", 0x6C, "FloatProperty"},
            {"GameplayTags", 0x70, "StructProperty"},
        }};
    };

    struct MutableParameterData
    {
        static constexpr std::string_view Name = "MutableParameterData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamUIMetadata = 0x0;
            static constexpr std::uintptr_t Type = 0x90;
            static constexpr std::uintptr_t ArrayIntegerParameterOption = 0x98;
            static constexpr std::uintptr_t IntegerParameterGroupType = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParamUIMetadata", 0x0, "StructProperty"},
            {"Type", 0x90, "EnumProperty"},
            {"ArrayIntegerParameterOption", 0x98, "MapProperty"},
            {"IntegerParameterGroupType", 0xA8, "EnumProperty"},
        }};
    };

    struct MutableRemappedBone
    {
        static constexpr std::string_view Name = "MutableRemappedBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Hash = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Hash", 0x4, "UInt32Property"},
        }};
    };

    struct MutableStateData
    {
        static constexpr std::string_view Name = "MutableStateData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StateUIMetadata = 0x0;
            static constexpr std::uintptr_t bLiveUpdateMode = 0x68;
            static constexpr std::uintptr_t bDisableMeshStreaming = 0x69;
            static constexpr std::uintptr_t bDisableTextureStreaming = 0x6A;
            static constexpr std::uintptr_t ForcedParameterValues = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StateUIMetadata", 0x0, "StructProperty"},
            {"bLiveUpdateMode", 0x68, "BoolProperty"},
            {"bDisableMeshStreaming", 0x69, "BoolProperty"},
            {"bDisableTextureStreaming", 0x6A, "BoolProperty"},
            {"ForcedParameterValues", 0x70, "MapProperty"},
        }};
    };

    struct MutableStateUIMetadata
    {
        static constexpr std::string_view Name = "MutableStateUIMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MutableUIMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectFriendlyName = 0x0;
            static constexpr std::uintptr_t UISectionName = 0x10;
            static constexpr std::uintptr_t UIOrder = 0x20;
            static constexpr std::uintptr_t UIThumbnail = 0x28;
            static constexpr std::uintptr_t ExtraInformation = 0x48;
            static constexpr std::uintptr_t ExtraAssets = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ObjectFriendlyName", 0x0, "StrProperty"},
            {"UISectionName", 0x10, "StrProperty"},
            {"UIOrder", 0x20, "IntProperty"},
            {"UIThumbnail", 0x28, "SoftObjectProperty"},
            {"ExtraInformation", 0x48, "MapProperty"},
            {"ExtraAssets", 0x58, "MapProperty"},
        }};
    };

    struct MutableStreamableBlock
    {
        static constexpr std::string_view Name = "MutableStreamableBlock";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FileId = 0x0;
            static constexpr std::uintptr_t Flags = 0x4;
            static constexpr std::uintptr_t Offset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FileId", 0x0, "UInt32Property"},
            {"Flags", 0x4, "UInt16Property"},
            {"Offset", 0x8, "UInt64Property"},
        }};
    };

    struct MutableTextureMipDataProviderFactory
    {
        static constexpr std::string_view Name = "MutableTextureMipDataProviderFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextureMipDataProviderFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizableObjectInstance = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomizableObjectInstance", 0x28, "ObjectProperty"},
        }};
    };

    struct MutableUIMetadata
    {
        static constexpr std::string_view Name = "MutableUIMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectFriendlyName = 0x0;
            static constexpr std::uintptr_t UISectionName = 0x10;
            static constexpr std::uintptr_t UIOrder = 0x20;
            static constexpr std::uintptr_t UIThumbnail = 0x28;
            static constexpr std::uintptr_t ExtraInformation = 0x48;
            static constexpr std::uintptr_t ExtraAssets = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ObjectFriendlyName", 0x0, "StrProperty"},
            {"UISectionName", 0x10, "StrProperty"},
            {"UIOrder", 0x20, "IntProperty"},
            {"UIThumbnail", 0x28, "SoftObjectProperty"},
            {"ExtraInformation", 0x48, "MapProperty"},
            {"ExtraAssets", 0x58, "MapProperty"},
        }};
    };

    struct ParameterTags
    {
        static constexpr std::string_view Name = "ParameterTags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
            static constexpr std::uintptr_t ParameterOptions = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tags", 0x0, "ArrayProperty"},
            {"ParameterOptions", 0x10, "MapProperty"},
        }};
    };

    struct PendingReleaseMaterialsInfo
    {
        static constexpr std::string_view Name = "PendingReleaseMaterialsInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0x0;
            static constexpr std::uintptr_t TicksUntilRelease = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Materials", 0x0, "ArrayProperty"},
            {"TicksUntilRelease", 0x10, "IntProperty"},
        }};
    };

    struct PreSetSkeletalMeshParams
    {
        static constexpr std::string_view Name = "PreSetSkeletalMeshParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instance = 0x0;
            static constexpr std::uintptr_t SkeletalMesh = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Instance", 0x0, "ObjectProperty"},
            {"SkeletalMesh", 0x8, "ObjectProperty"},
        }};
    };

    struct UpdateContext
    {
        static constexpr std::string_view Name = "UpdateContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateResult = 0x0;
            static constexpr std::uintptr_t Instance = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpdateResult", 0x0, "EnumProperty"},
            {"Instance", 0x8, "ObjectProperty"},
        }};
    };

}
