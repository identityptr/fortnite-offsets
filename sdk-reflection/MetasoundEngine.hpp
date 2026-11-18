#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MetasoundEngine
{
    struct DefaultMetaSoundAssetAutoUpdateSettings
    {
        static constexpr std::string_view Name = "DefaultMetaSoundAssetAutoUpdateSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Metasound = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Metasound", 0x0, "StructProperty"},
        }};
    };

    struct MetaSoundAssetDirectory
    {
        static constexpr std::string_view Name = "MetaSoundAssetDirectory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Directory = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Directory", 0x0, "StructProperty"},
        }};
    };

    struct MetaSoundAssetSubsystem
    {
        static constexpr std::string_view Name = "MetaSoundAssetSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "RegisterAssetClassesInDirectories",
            "UnregisterAssetClassesInDirectories",
        }};
    };

    struct MetaSoundAsyncAssetDependencies
    {
        static constexpr std::string_view Name = "MetaSoundAsyncAssetDependencies";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetaSoundBuilderBase
    {
        static constexpr std::string_view Name = "MetaSoundBuilderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Builder = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Builder", 0x28, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 81> FunctionNames{{
            "AddGraphInputNode",
            "AddGraphOutputNode",
            "AddGraphVariable",
            "AddGraphVariableGetDelayedNode",
            "AddGraphVariableGetNode",
            "AddGraphVariableSetNode",
            "AddInterface",
            "AddNode",
            "AddNodeByClassName",
            "Build",
            "BuildAndOverwriteMetaSound",
            "BuildNewMetaSound",
            "ConnectNamedNodeOutputToGraphOutput",
            "ConnectNamedNodeOutputToNamedGraphOutput",
            "ConnectNodeInputToGraphInput",
            "ConnectNodeInputsToMatchingGraphInterfaceInputs",
            "ConnectNodeOutputToGraphOutput",
            "ConnectNodeOutputsToMatchingGraphInterfaceOutputs",
            "ConnectNodes",
            "ConnectNodesByInterfaceBindings",
            "ContainsNode",
            "ContainsNodeInput",
            "ContainsNodeOutput",
            "ConvertFromPreset",
            "ConvertToPreset",
            "DisconnectNodeInput",
            "DisconnectNodeOutput",
            "DisconnectNodes",
            "DisconnectNodesByInterfaceBindings",
            "FindGraphInputNode",
            "FindGraphOutputNode",
            "FindInterfaceInputNodes",
            "FindInterfaceOutputNodes",
            "FindNodeClassVersion",
            "FindNodeInputByName",
            "FindNodeInputParent",
            "FindNodeInputs",
            "FindNodeInputsByDataType",
            "FindNodeOutputByName",
            "FindNodeOutputParent",
            "FindNodeOutputs",
            "FindNodeOutputsByDataType",
            "GetConfiguration",
            "GetDocumentTemplate",
            "GetGraphInputDefault",
            "GetGraphInputNames",
            "GetGraphOutputNames",
            "GetGraphVariableDefault",
            "GetMetaSound",
            "GetNodeInputClassDefault",
            "GetNodeInputData",
            "GetNodeInputDefault",
            "GetNodeInputIsConstructorPin",
            "GetNodeOutputData",
            "GetNodeOutputIsConstructorPin",
            "GetReferencedPresetAsset",
            "GetRootGraphClassName",
            "InterfaceIsDeclared",
            "IsPreset",
            "NodeInputIsConnected",
            "NodeOutputIsConnected",
            "NodesAreConnected",
            "RemoveGraphInput",
            "RemoveGraphInputDefault",
            "RemoveGraphOutput",
            "RemoveGraphVariable",
            "RemoveInterface",
            "RemoveNode",
            "RemoveNodeInputDefault",
            "RemoveUnusedDependencies",
            "ResetGraphInputDefaults",
            "SetConfiguration",
            "SetGraphInputAccessType",
            "SetGraphInputDataType",
            "SetGraphInputDefault",
            "SetGraphInputName",
            "SetGraphOutputAccessType",
            "SetGraphOutputDataType",
            "SetGraphOutputName",
            "SetNodeInputDefault",
            "SetTemplate",
        }};
    };

    struct MetaSoundBuilderNodeInputHandle
    {
        static constexpr std::string_view Name = "MetaSoundBuilderNodeInputHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendVertexHandle";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
            static constexpr std::uintptr_t VertexID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x0, "StructProperty"},
            {"VertexID", 0x10, "StructProperty"},
        }};
    };

    struct MetaSoundBuilderNodeOutputHandle
    {
        static constexpr std::string_view Name = "MetaSoundBuilderNodeOutputHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetasoundFrontendVertexHandle";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
            static constexpr std::uintptr_t VertexID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeId", 0x0, "StructProperty"},
            {"VertexID", 0x10, "StructProperty"},
        }};
    };

    struct MetaSoundBuilderOptions
    {
        static constexpr std::string_view Name = "MetaSoundBuilderOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t bForceUniqueClassName = 0x4;
            static constexpr std::uintptr_t bAddToRegistry = 0x5;
            static constexpr std::uintptr_t ExistingMetaSound = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"bForceUniqueClassName", 0x4, "BoolProperty"},
            {"bAddToRegistry", 0x5, "BoolProperty"},
            {"ExistingMetaSound", 0x8, "InterfaceProperty"},
        }};
    };

    struct MetaSoundBuilderSubsystem
    {
        static constexpr std::string_view Name = "MetaSoundBuilderSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedBuilders = 0x30;
            static constexpr std::uintptr_t ParameterOverrides = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NamedBuilders", 0x30, "MapProperty"},
            {"ParameterOverrides", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 28> FunctionNames{{
            "CreateBoolArrayMetaSoundLiteral",
            "CreateBoolMetaSoundLiteral",
            "CreateFloatArrayMetaSoundLiteral",
            "CreateFloatMetaSoundLiteral",
            "CreateIntArrayMetaSoundLiteral",
            "CreateIntMetaSoundLiteral",
            "CreateMetaSoundLiteralFromParam",
            "CreateObjectArrayMetaSoundLiteral",
            "CreateObjectMetaSoundLiteral",
            "CreatePatchBuilder",
            "CreatePatchPresetBuilder",
            "CreateSourceBuilder",
            "CreateSourcePresetBuilder",
            "CreateStringArrayMetaSoundLiteral",
            "CreateStringMetaSoundLiteral",
            "FindBuilder",
            "FindBuilderOfDocument",
            "FindParentBuilderOfPreset",
            "FindPatchBuilder",
            "FindSourceBuilder",
            "IsInterfaceRegistered",
            "RegisterBuilder",
            "RegisterPatchBuilder",
            "RegisterSourceBuilder",
            "SetTargetPage",
            "UnregisterBuilder",
            "UnregisterPatchBuilder",
            "UnregisterSourceBuilder",
        }};
    };

    struct MetaSoundCacheSubsystem
    {
        static constexpr std::string_view Name = "MetaSoundCacheSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMixerEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "PrecacheMetaSound",
            "RemoveCachedOperatorsForMetaSound",
            "TouchOrPrecacheMetaSound",
        }};
    };

    struct MetaSoundNodeHandle
    {
        static constexpr std::string_view Name = "MetaSoundNodeHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NodeId", 0x0, "StructProperty"},
        }};
    };

    struct MetaSoundOutput
    {
        static constexpr std::string_view Name = "MetaSoundOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SoundGeneratorOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct MetaSoundOutputSubsystem
    {
        static constexpr std::string_view Name = "MetaSoundOutputSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "UnwatchOutput",
            "WatchOutput",
        }};
    };

    struct MetaSoundPageSettings
    {
        static constexpr std::string_view Name = "MetaSoundPageSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UniqueID", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
        }};
    };

    struct MetaSoundParameterOverride
    {
        static constexpr std::string_view Name = "MetaSoundParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x0;
            static constexpr std::uintptr_t Input = 0x10;
            static constexpr std::uintptr_t Value = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Asset", 0x0, "StrProperty"},
            {"Input", 0x10, "NameProperty"},
            {"Value", 0x18, "StrProperty"},
        }};
    };

    struct MetaSoundParameterOverrides
    {
        static constexpr std::string_view Name = "MetaSoundParameterOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x28, "ArrayProperty"},
        }};
    };

    struct MetaSoundPatch
    {
        static constexpr std::string_view Name = "MetaSoundPatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RootMetaSoundDocument = 0x70;
            static constexpr std::uintptr_t ReferencedAssetClassKeys = 0x168;
            static constexpr std::uintptr_t ReferencedAssetClassObjects = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RootMetaSoundDocument", 0x70, "StructProperty"},
            {"ReferencedAssetClassKeys", 0x168, "SetProperty"},
            {"ReferencedAssetClassObjects", 0x178, "SetProperty"},
        }};
    };

    struct MetaSoundPatchBuilder
    {
        static constexpr std::string_view Name = "MetaSoundPatchBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaSoundBuilderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Builder = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Builder", 0x28, "StructProperty"},
        }};
    };

    struct MetaSoundQualityHelper
    {
        static constexpr std::string_view Name = "MetaSoundQualityHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetQualityNames",
        }};
    };

    struct MetaSoundQualitySettings
    {
        static constexpr std::string_view Name = "MetaSoundQualitySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t SampleRate = 0x18;
            static constexpr std::uintptr_t BlockRate = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"UniqueID", 0x0, "StructProperty"},
            {"Name", 0x10, "NameProperty"},
            {"SampleRate", 0x18, "StructProperty"},
            {"BlockRate", 0x30, "StructProperty"},
        }};
    };

    struct MetaSoundRandomizerTemplate
    {
        static constexpr std::string_view Name = "MetaSoundRandomizerTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendDocumentTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOneShot = 0x8;
            static constexpr std::uintptr_t Sounds = 0x10;
            static constexpr std::uintptr_t Pitch = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsOneShot", 0x8, "BoolProperty"},
            {"Sounds", 0x10, "ArrayProperty"},
            {"Pitch", 0x20, "StructProperty"},
        }};
    };

    struct MetaSoundSettings
    {
        static constexpr std::string_view Name = "MetaSoundSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoUpdateLogWarningOnDroppedConnection = 0x30;
            static constexpr std::uintptr_t DirectoriesToRegister = 0x38;
            static constexpr std::uintptr_t TargetPageName = 0x48;
            static constexpr std::uintptr_t DefaultPageSettings = 0x4C;
            static constexpr std::uintptr_t PageSettings = 0x60;
            static constexpr std::uintptr_t QualitySettings = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bAutoUpdateLogWarningOnDroppedConnection", 0x30, "BoolProperty"},
            {"DirectoriesToRegister", 0x38, "ArrayProperty"},
            {"TargetPageName", 0x48, "NameProperty"},
            {"DefaultPageSettings", 0x4C, "StructProperty"},
            {"PageSettings", 0x60, "ArrayProperty"},
            {"QualitySettings", 0x70, "ArrayProperty"},
        }};
    };

    struct MetaSoundSource
    {
        static constexpr std::string_view Name = "MetaSoundSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundWaveProcedural";
        struct Offsets
        {
            static constexpr std::uintptr_t RootMetaSoundDocument = 0x338;
            static constexpr std::uintptr_t ReferencedAssetClassKeys = 0x430;
            static constexpr std::uintptr_t ReferencedAssetClassObjects = 0x440;
            static constexpr std::uintptr_t OutputFormat = 0x450;
            static constexpr std::uintptr_t ChannelAgnosticFormatChooser = 0x451;
            static constexpr std::uintptr_t ChannelAgnosticCustomFormat = 0x454;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootMetaSoundDocument", 0x338, "StructProperty"},
            {"ReferencedAssetClassKeys", 0x430, "SetProperty"},
            {"ReferencedAssetClassObjects", 0x440, "SetProperty"},
            {"OutputFormat", 0x450, "EnumProperty"},
            {"ChannelAgnosticFormatChooser", 0x451, "EnumProperty"},
            {"ChannelAgnosticCustomFormat", 0x454, "NameProperty"},
        }};
    };

    struct MetaSoundSourceBuilder
    {
        static constexpr std::string_view Name = "MetaSoundSourceBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MetaSoundBuilderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Builder = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Builder", 0x28, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "Audition",
            "GetLiveUpdatesEnabled",
            "SetBlockRateOverride",
            "SetFormat",
            "SetQuality",
            "SetSampleRateOverride",
        }};
    };

    struct MetasoundEditorGraphBase
    {
        static constexpr std::string_view Name = "MetasoundEditorGraphBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EdGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t Schema = 0x28;
            static constexpr std::uintptr_t Nodes = 0x30;
            static constexpr std::uintptr_t bAllowDeletion = 0x40;
            static constexpr std::uintptr_t bAllowRenaming = 0x40;
            static constexpr std::uintptr_t bEditable = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Schema", 0x28, "ClassProperty"},
            {"Nodes", 0x30, "ArrayProperty"},
            {"bAllowDeletion", 0x40, "BoolProperty"},
            {"bAllowRenaming", 0x40, "BoolProperty"},
            {"bEditable", 0x40, "BoolProperty"},
        }};
    };

    struct MetasoundFrontendLiteralBlueprintAccess
    {
        static constexpr std::string_view Name = "MetasoundFrontendLiteralBlueprintAccess";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 45> FunctionNames{{
            "Conv_MetaSoundLiteralToString",
            "CreateBoolArrayMetaSoundLiteral",
            "CreateBoolMetaSoundLiteral",
            "CreateFloatArrayMetaSoundLiteral",
            "CreateFloatMetaSoundLiteral",
            "CreateIntArrayMetaSoundLiteral",
            "CreateIntMetaSoundLiteral",
            "CreateMetaSoundLiteralFromAudioParameter",
            "CreateMetaSoundLiteralFromBoolean",
            "CreateMetaSoundLiteralFromBooleanArray",
            "CreateMetaSoundLiteralFromFloat",
            "CreateMetaSoundLiteralFromFloatArray",
            "CreateMetaSoundLiteralFromInteger",
            "CreateMetaSoundLiteralFromIntegerArray",
            "CreateMetaSoundLiteralFromObject",
            "CreateMetaSoundLiteralFromObjectArray",
            "CreateMetaSoundLiteralFromParam",
            "CreateMetaSoundLiteralFromString",
            "CreateMetaSoundLiteralFromStringArray",
            "CreateObjectArrayMetaSoundLiteral",
            "CreateObjectMetaSoundLiteral",
            "CreateStringArrayMetaSoundLiteral",
            "CreateStringMetaSoundLiteral",
            "EqualEqual_MetaSoundLiteral",
            "GetBoolArrayValueFromLiteral",
            "GetBoolValueFromLiteral",
            "GetFloatArrayValueFromLiteral",
            "GetFloatValueFromLiteral",
            "GetIntArrayValueFromLiteral",
            "GetIntValueFromLiteral",
            "GetMetaSoundLiteralAsBool",
            "GetMetaSoundLiteralAsBoolArray",
            "GetMetaSoundLiteralAsFloat",
            "GetMetaSoundLiteralAsFloatArray",
            "GetMetaSoundLiteralAsInteger",
            "GetMetaSoundLiteralAsIntegerArray",
            "GetMetaSoundLiteralAsObject",
            "GetMetaSoundLiteralAsObjectArray",
            "GetMetaSoundLiteralAsString",
            "GetMetaSoundLiteralAsStringArray",
            "GetObjectArrayValueFromLiteral",
            "GetObjectValueFromLiteral",
            "GetStringArrayValueFromLiteral",
            "GetStringValueFromLiteral",
            "GetType",
        }};
    };

    struct MetasoundGeneratorHandle
    {
        static constexpr std::string_view Name = "MetasoundGeneratorHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ApplyParameterPack",
            "CreateMetaSoundGeneratorHandle",
            "EnableRuntimeRenderTiming",
            "GetCPUCoreUtilization",
            "UpdateWatchers",
            "WatchOutput",
        }};
    };

    struct MetasoundOutputBlueprintAccess
    {
        static constexpr std::string_view Name = "MetasoundOutputBlueprintAccess";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetBool",
            "GetFloat",
            "GetInt32",
            "GetString",
            "GetTimeSeconds",
            "IsBool",
            "IsFloat",
            "IsInt32",
            "IsString",
            "IsTime",
        }};
    };

}
