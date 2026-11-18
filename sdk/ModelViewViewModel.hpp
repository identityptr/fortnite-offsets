#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ModelViewViewModel
{
    struct MVVMAvailableBinding
    {
        static constexpr std::string_view Name = "MVVMAvailableBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingName = 0x0;
            static constexpr std::uintptr_t bIsReadable = 0x4;
            static constexpr std::uintptr_t bIsWritable = 0x5;
            static constexpr std::uintptr_t bHasNotify = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BindingName", 0x0, "StructProperty"},
            {"bIsReadable", 0x4, "BoolProperty"},
            {"bIsWritable", 0x5, "BoolProperty"},
            {"bHasNotify", 0x6, "BoolProperty"},
        }};
    };

    struct MVVMBindingName
    {
        static constexpr std::string_view Name = "MVVMBindingName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BindingName", 0x0, "NameProperty"},
        }};
    };

    struct MVVMBindingSubsystem
    {
        static constexpr std::string_view Name = "MVVMBindingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MVVMBlueprintLibrary
    {
        static constexpr std::string_view Name = "MVVMBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetViewModelByClass",
        }};
    };

    struct MVVMCompiledBindingLibrary
    {
        static constexpr std::string_view Name = "MVVMCompiledBindingLibrary";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldPaths = 0x20;
            static constexpr std::uintptr_t CompiledFields = 0x30;
            static constexpr std::uintptr_t CompiledFieldNames = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FieldPaths", 0x20, "ArrayProperty"},
            {"CompiledFields", 0x30, "ArrayProperty"},
            {"CompiledFieldNames", 0x40, "ArrayProperty"},
        }};
    };

    struct MVVMCompiledLoadedPropertyOrFunctionIndex
    {
        static constexpr std::string_view Name = "MVVMCompiledLoadedPropertyOrFunctionIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t bIsObjectProperty = 0x2;
            static constexpr std::uintptr_t bIsProperty = 0x2;
            static constexpr std::uintptr_t bIsScriptStructProperty = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Index", 0x0, "Int16Property"},
            {"bIsObjectProperty", 0x2, "BoolProperty"},
            {"bIsProperty", 0x2, "BoolProperty"},
            {"bIsScriptStructProperty", 0x2, "BoolProperty"},
        }};
    };

    struct MVVMConversionLibrary
    {
        static constexpr std::string_view Name = "MVVMConversionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Conv_BoolToSlateVisibility",
        }};
    };

    struct MVVMEventField
    {
        static constexpr std::string_view Name = "MVVMEventField";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MVVMFontConversionLibrary
    {
        static constexpr std::string_view Name = "MVVMFontConversionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "Conv_SetScalarParameter",
            "Conv_SetScalarParameterMID",
            "Conv_SetTextureParameter",
            "Conv_SetTextureParameterMID",
            "Conv_SetVectorParameter",
            "Conv_SetVectorParameterMID",
            "Conv_SetVectorParameterMID_FColor",
            "Conv_SetVectorParameter_FColor",
        }};
    };

    struct MVVMGameSubsystem
    {
        static constexpr std::string_view Name = "MVVMGameSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelCollection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewModelCollection", 0x30, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetViewModelCollection",
        }};
    };

    struct MVVMInstancedViewModelGeneratedClass
    {
        static constexpr std::string_view Name = "MVVMInstancedViewModelGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRepFunctionToLink = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnRepFunctionToLink", 0x278, "ArrayProperty"},
        }};
    };

    struct MVVMPanelWidgetViewExtension
    {
        static constexpr std::string_view Name = "MVVMPanelWidgetViewExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemsChanged = 0x28;
            static constexpr std::uintptr_t PanelWidget = 0x38;
            static constexpr std::uintptr_t ClassExtension = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnItemsChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"PanelWidget", 0x38, "ObjectProperty"},
            {"ClassExtension", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_SetItems",
        }};
    };

    struct MVVMSlateBrushConversionLibrary
    {
        static constexpr std::string_view Name = "MVVMSlateBrushConversionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "Conv_SetScalarParameter",
            "Conv_SetScalarParameterMID",
            "Conv_SetTextureParameter",
            "Conv_SetTextureParameterMID",
            "Conv_SetVectorParameter",
            "Conv_SetVectorParameterMID",
            "Conv_SetVectorParameterMID_FColor",
            "Conv_SetVectorParameter_FColor",
        }};
    };

    struct MVVMSubsystem
    {
        static constexpr std::string_view Name = "MVVMSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "DoesWidgetTreeContainedWidget",
            "GetGlobalViewModelCollection",
            "K2_CompareFloatValues",
            "K2_GetAvailableBinding",
            "K2_GetAvailableBindings",
            "K2_GetViewForClass",
            "K2_GetViewFromUserWidget",
            "SetViewModelByNameOnAllViews",
        }};
    };

    struct MVVMVCompiledBinding
    {
        static constexpr std::string_view Name = "MVVMVCompiledBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceFieldPath = 0x0;
            static constexpr std::uintptr_t DestinationFieldPath = 0x4;
            static constexpr std::uintptr_t ConversionFunctionFieldPath = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceFieldPath", 0x0, "StructProperty"},
            {"DestinationFieldPath", 0x4, "StructProperty"},
            {"ConversionFunctionFieldPath", 0x8, "StructProperty"},
            {"Type", 0xC, "ByteProperty"},
        }};
    };

    struct MVVMVCompiledFieldId
    {
        static constexpr std::string_view Name = "MVVMVCompiledFieldId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldIdIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldIdIndex", 0x0, "Int16Property"},
        }};
    };

    struct MVVMVCompiledFieldPath
    {
        static constexpr std::string_view Name = "MVVMVCompiledFieldPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartIndex = 0x0;
            static constexpr std::uintptr_t Num = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartIndex", 0x0, "Int16Property"},
            {"Num", 0x2, "Int16Property"},
        }};
    };

    struct MVVMVCompiledFields
    {
        static constexpr std::string_view Name = "MVVMVCompiledFields";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassOrScriptStruct = 0x0;
            static constexpr std::uintptr_t LibraryStartIndex = 0x8;
            static constexpr std::uintptr_t NumberOfProperties = 0xA;
            static constexpr std::uintptr_t NumberOfFunctions = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ClassOrScriptStruct", 0x0, "ObjectProperty"},
            {"LibraryStartIndex", 0x8, "Int16Property"},
            {"NumberOfProperties", 0xA, "Int16Property"},
            {"NumberOfFunctions", 0xC, "Int16Property"},
        }};
    };

    struct MVVMView
    {
        static constexpr std::string_view Name = "MVVMView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedViewClass = 0x28;
            static constexpr std::uintptr_t Sources = 0x30;
            static constexpr std::uintptr_t Extensions = 0x60;
            static constexpr std::uintptr_t ValidSources = 0x70;
            static constexpr std::uintptr_t NumberOfSourceWithTickBinding = 0x78;
            static constexpr std::uintptr_t bLogBinding = 0x79;
            static constexpr std::uintptr_t bConstructed = 0x7A;
            static constexpr std::uintptr_t bSourcesInitialized = 0x7B;
            static constexpr std::uintptr_t bBindingsInitialized = 0x7C;
            static constexpr std::uintptr_t bEventsInitialized = 0x7D;
            static constexpr std::uintptr_t bHasDefaultTickBinding = 0x7E;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"GeneratedViewClass", 0x28, "ObjectProperty"},
            {"Sources", 0x30, "ArrayProperty"},
            {"Extensions", 0x60, "ArrayProperty"},
            {"ValidSources", 0x70, "UInt64Property"},
            {"NumberOfSourceWithTickBinding", 0x78, "ByteProperty"},
            {"bLogBinding", 0x79, "BoolProperty"},
            {"bConstructed", 0x7A, "BoolProperty"},
            {"bSourcesInitialized", 0x7B, "BoolProperty"},
            {"bBindingsInitialized", 0x7C, "BoolProperty"},
            {"bEventsInitialized", 0x7D, "BoolProperty"},
            {"bHasDefaultTickBinding", 0x7E, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "AreBindingsInitialized",
            "AreEventsInitialized",
            "AreSourcesInitialized",
            "AreSourcesValidForBinding",
            "AreSourcesValidForEvent",
            "ExecuteViewModelBindings",
            "GetViewModel",
            "InitializeBindings",
            "InitializeEvents",
            "InitializeSources",
            "SetViewModel",
            "SetViewModelByClass",
            "UninitializeBindings",
            "UninitializeEvents",
            "UninitializeSources",
        }};
    };

    struct MVVMViewClass
    {
        static constexpr std::string_view Name = "MVVMViewClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBlueprintGeneratedClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t Sources = 0x28;
            static constexpr std::uintptr_t Bindings = 0x38;
            static constexpr std::uintptr_t EvaluateSources = 0x48;
            static constexpr std::uintptr_t Events = 0x58;
            static constexpr std::uintptr_t Conditions = 0x68;
            static constexpr std::uintptr_t ViewClassExtensions = 0x78;
            static constexpr std::uintptr_t BindingLibrary = 0x88;
            static constexpr std::uintptr_t OptionalSources = 0xD8;
            static constexpr std::uintptr_t bInitializeSourcesOnConstruct = 0xE4;
            static constexpr std::uintptr_t bInitializeBindingsOnConstruct = 0xE5;
            static constexpr std::uintptr_t bInitializeEventsOnConstruct = 0xE6;
            static constexpr std::uintptr_t bListenToViewModelCollectionChanged = 0xE7;
            static constexpr std::uintptr_t bCreateViewWithoutBindings = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Sources", 0x28, "ArrayProperty"},
            {"Bindings", 0x38, "ArrayProperty"},
            {"EvaluateSources", 0x48, "ArrayProperty"},
            {"Events", 0x58, "ArrayProperty"},
            {"Conditions", 0x68, "ArrayProperty"},
            {"ViewClassExtensions", 0x78, "ArrayProperty"},
            {"BindingLibrary", 0x88, "StructProperty"},
            {"OptionalSources", 0xD8, "UInt64Property"},
            {"bInitializeSourcesOnConstruct", 0xE4, "BoolProperty"},
            {"bInitializeBindingsOnConstruct", 0xE5, "BoolProperty"},
            {"bInitializeEventsOnConstruct", 0xE6, "BoolProperty"},
            {"bListenToViewModelCollectionChanged", 0xE7, "BoolProperty"},
            {"bCreateViewWithoutBindings", 0xE8, "BoolProperty"},
        }};
    };

    struct MVVMViewClassExtension
    {
        static constexpr std::string_view Name = "MVVMViewClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MVVMViewClass_Binding
    {
        static constexpr std::string_view Name = "MVVMViewClass_Binding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
            static constexpr std::uintptr_t Flags = 0xE;
            static constexpr std::uintptr_t ExecutionMode = 0xF;
            static constexpr std::uintptr_t SourceBitField = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Binding", 0x0, "StructProperty"},
            {"Flags", 0xE, "ByteProperty"},
            {"ExecutionMode", 0xF, "EnumProperty"},
            {"SourceBitField", 0x10, "UInt64Property"},
        }};
    };

    struct MVVMViewClass_BindingKey
    {
        static constexpr std::string_view Name = "MVVMViewClass_BindingKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct MVVMViewClass_CompiledBinding
    {
        static constexpr std::string_view Name = "MVVMViewClass_CompiledBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldId = 0x0;
            static constexpr std::uintptr_t SourcePropertyName = 0x4;
            static constexpr std::uintptr_t Binding = 0x8;
            static constexpr std::uintptr_t ExecutionMode = 0x16;
            static constexpr std::uintptr_t EvaluateSourceCreatorIndex = 0x17;
            static constexpr std::uintptr_t Flags = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FieldId", 0x0, "StructProperty"},
            {"SourcePropertyName", 0x4, "NameProperty"},
            {"Binding", 0x8, "StructProperty"},
            {"ExecutionMode", 0x16, "EnumProperty"},
            {"EvaluateSourceCreatorIndex", 0x17, "Int8Property"},
            {"Flags", 0x18, "ByteProperty"},
        }};
    };

    struct MVVMViewClass_CompiledEvent
    {
        static constexpr std::string_view Name = "MVVMViewClass_CompiledEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldPath = 0x0;
            static constexpr std::uintptr_t FunctionName = 0x4;
            static constexpr std::uintptr_t SourceName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FieldPath", 0x0, "StructProperty"},
            {"FunctionName", 0x4, "NameProperty"},
            {"SourceName", 0x8, "NameProperty"},
        }};
    };

    struct MVVMViewClass_Condition
    {
        static constexpr std::string_view Name = "MVVMViewClass_Condition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserWidgetFunctionName = 0x0;
            static constexpr std::uintptr_t SourceToReevaluate = 0x4;
            static constexpr std::uintptr_t SourceBitField = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UserWidgetFunctionName", 0x0, "NameProperty"},
            {"SourceToReevaluate", 0x4, "StructProperty"},
            {"SourceBitField", 0x8, "UInt64Property"},
        }};
    };

    struct MVVMViewClass_ConditionKey
    {
        static constexpr std::string_view Name = "MVVMViewClass_ConditionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct MVVMViewClass_EvaluateBindingKey
    {
        static constexpr std::string_view Name = "MVVMViewClass_EvaluateBindingKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct MVVMViewClass_EvaluateSource
    {
        static constexpr std::string_view Name = "MVVMViewClass_EvaluateSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentFieldId = 0x0;
            static constexpr std::uintptr_t ParentSource = 0x4;
            static constexpr std::uintptr_t ToEvaluate = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParentFieldId", 0x0, "StructProperty"},
            {"ParentSource", 0x4, "StructProperty"},
            {"ToEvaluate", 0x8, "StructProperty"},
        }};
    };

    struct MVVMViewClass_Event
    {
        static constexpr std::string_view Name = "MVVMViewClass_Event";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldPath = 0x0;
            static constexpr std::uintptr_t UserWidgetFunctionName = 0x4;
            static constexpr std::uintptr_t SourceToReevaluate = 0x8;
            static constexpr std::uintptr_t SourceBitField = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FieldPath", 0x0, "StructProperty"},
            {"UserWidgetFunctionName", 0x4, "NameProperty"},
            {"SourceToReevaluate", 0x8, "StructProperty"},
            {"SourceBitField", 0x10, "UInt64Property"},
        }};
    };

    struct MVVMViewClass_EventKey
    {
        static constexpr std::string_view Name = "MVVMViewClass_EventKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct MVVMViewClass_FieldId
    {
        static constexpr std::string_view Name = "MVVMViewClass_FieldId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldName", 0x0, "NameProperty"},
        }};
    };

    struct MVVMViewClass_Source
    {
        static constexpr std::string_view Name = "MVVMViewClass_Source";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExpectedSourceType = 0x0;
            static constexpr std::uintptr_t Resolver = 0x8;
            static constexpr std::uintptr_t GlobalViewModelInstance = 0x10;
            static constexpr std::uintptr_t FieldPath = 0x20;
            static constexpr std::uintptr_t PropertyName = 0x24;
            static constexpr std::uintptr_t FieldToRegisterTo = 0x28;
            static constexpr std::uintptr_t Bindings = 0x38;
            static constexpr std::uintptr_t Conditions = 0x48;
            static constexpr std::uintptr_t Flags = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ExpectedSourceType", 0x0, "ClassProperty"},
            {"Resolver", 0x8, "ObjectProperty"},
            {"GlobalViewModelInstance", 0x10, "StructProperty"},
            {"FieldPath", 0x20, "StructProperty"},
            {"PropertyName", 0x24, "NameProperty"},
            {"FieldToRegisterTo", 0x28, "ArrayProperty"},
            {"Bindings", 0x38, "ArrayProperty"},
            {"Conditions", 0x48, "ArrayProperty"},
            {"Flags", 0x58, "UInt16Property"},
        }};
    };

    struct MVVMViewClass_SourceBinding
    {
        static constexpr std::string_view Name = "MVVMViewClass_SourceBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldId = 0x0;
            static constexpr std::uintptr_t BindingKey = 0x4;
            static constexpr std::uintptr_t Flags = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FieldId", 0x0, "StructProperty"},
            {"BindingKey", 0x4, "StructProperty"},
            {"Flags", 0x8, "ByteProperty"},
        }};
    };

    struct MVVMViewClass_SourceCondition
    {
        static constexpr std::string_view Name = "MVVMViewClass_SourceCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldId = 0x0;
            static constexpr std::uintptr_t ConditionKey = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FieldId", 0x0, "StructProperty"},
            {"ConditionKey", 0x4, "StructProperty"},
        }};
    };

    struct MVVMViewClass_SourceCreator
    {
        static constexpr std::string_view Name = "MVVMViewClass_SourceCreator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExpectedSourceType = 0x0;
            static constexpr std::uintptr_t Resolver = 0x8;
            static constexpr std::uintptr_t GlobalViewModelInstance = 0x10;
            static constexpr std::uintptr_t FieldPath = 0x20;
            static constexpr std::uintptr_t PropertyName = 0x24;
            static constexpr std::uintptr_t ParentSourceName = 0x28;
            static constexpr std::uintptr_t Flags = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ExpectedSourceType", 0x0, "ClassProperty"},
            {"Resolver", 0x8, "ObjectProperty"},
            {"GlobalViewModelInstance", 0x10, "StructProperty"},
            {"FieldPath", 0x20, "StructProperty"},
            {"PropertyName", 0x24, "NameProperty"},
            {"ParentSourceName", 0x28, "NameProperty"},
            {"Flags", 0x2C, "ByteProperty"},
        }};
    };

    struct MVVMViewClass_SourceKey
    {
        static constexpr std::string_view Name = "MVVMViewClass_SourceKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct MVVMViewExtension
    {
        static constexpr std::string_view Name = "MVVMViewExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MVVMViewListViewBaseClassExtension
    {
        static constexpr std::string_view Name = "MVVMViewListViewBaseClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x28;
            static constexpr std::uintptr_t EntryViewModelName = 0x2C;
            static constexpr std::uintptr_t WidgetPath = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WidgetName", 0x28, "NameProperty"},
            {"EntryViewModelName", 0x2C, "NameProperty"},
            {"WidgetPath", 0x30, "StructProperty"},
        }};
    };

    struct MVVMViewModelBase
    {
        static constexpr std::string_view Name = "MVVMViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "K2_AddFieldValueChangedDelegate",
            "K2_BroadcastFieldValueChanged",
            "K2_RemoveFieldValueChangedDelegate",
            "K2_SetPropertyValue",
        }};
    };

    struct MVVMViewModelBlueprintGeneratedClass
    {
        static constexpr std::string_view Name = "MVVMViewModelBlueprintGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t NumReplicatedProperties = 0x1A0;
            static constexpr std::uintptr_t bHasCookedComponentInstancingData = 0x1A4;
            static constexpr std::uintptr_t bIsNativePropertyInitFastPathDisabled = 0x1A4;
            static constexpr std::uintptr_t bSupportsDynamicInstancedReference = 0x1A4;
            static constexpr std::uintptr_t DynamicBindingObjects = 0x1A8;
            static constexpr std::uintptr_t ComponentTemplates = 0x1B8;
            static constexpr std::uintptr_t Timelines = 0x1C8;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x1D8;
            static constexpr std::uintptr_t FieldNotifies = 0x1E8;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x200;
            static constexpr std::uintptr_t InheritableComponentHandler = 0x208;
            static constexpr std::uintptr_t UberGraphFunction = 0x218;
            static constexpr std::uintptr_t CookedPropertyGuids = 0x220;
            static constexpr std::uintptr_t CookedComponentInstancingData = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"NumReplicatedProperties", 0x1A0, "IntProperty"},
            {"bHasCookedComponentInstancingData", 0x1A4, "BoolProperty"},
            {"bIsNativePropertyInitFastPathDisabled", 0x1A4, "BoolProperty"},
            {"bSupportsDynamicInstancedReference", 0x1A4, "BoolProperty"},
            {"DynamicBindingObjects", 0x1A8, "ArrayProperty"},
            {"ComponentTemplates", 0x1B8, "ArrayProperty"},
            {"Timelines", 0x1C8, "ArrayProperty"},
            {"ComponentClassOverrides", 0x1D8, "ArrayProperty"},
            {"FieldNotifies", 0x1E8, "ArrayProperty"},
            {"SimpleConstructionScript", 0x200, "ObjectProperty"},
            {"InheritableComponentHandler", 0x208, "ObjectProperty"},
            {"UberGraphFunction", 0x218, "ObjectProperty"},
            {"CookedPropertyGuids", 0x220, "MapProperty"},
            {"CookedComponentInstancingData", 0x230, "MapProperty"},
        }};
    };

    struct MVVMViewModelCollection
    {
        static constexpr std::string_view Name = "MVVMViewModelCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelInstances = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewModelInstances", 0x0, "ArrayProperty"},
        }};
    };

    struct MVVMViewModelCollectionObject
    {
        static constexpr std::string_view Name = "MVVMViewModelCollectionObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelCollection = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ViewModelCollection", 0x28, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddViewModelInstance",
            "FindFirstViewModelInstanceOfType",
            "FindViewModelInstance",
            "RemoveAllViewModelInstance",
            "RemoveViewModel",
        }};
    };

    struct MVVMViewModelContext
    {
        static constexpr std::string_view Name = "MVVMViewModelContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextClass = 0x0;
            static constexpr std::uintptr_t ContextName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextClass", 0x0, "ClassProperty"},
            {"ContextName", 0x8, "NameProperty"},
        }};
    };

    struct MVVMViewModelContextInstance
    {
        static constexpr std::string_view Name = "MVVMViewModelContextInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x0;
            static constexpr std::uintptr_t Instance = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x0, "StructProperty"},
            {"Instance", 0x10, "ObjectProperty"},
        }};
    };

    struct MVVMViewModelContextResolver
    {
        static constexpr std::string_view Name = "MVVMViewModelContextResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "K2_CreateInstance",
            "K2_DestroyInstance",
        }};
    };

    struct MVVMViewPanelWidgetClassExtension
    {
        static constexpr std::string_view Name = "MVVMViewPanelWidgetClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x28;
            static constexpr std::uintptr_t EntryViewModelName = 0x2C;
            static constexpr std::uintptr_t EntryWidgetClass = 0x30;
            static constexpr std::uintptr_t SlotTemplate = 0x38;
            static constexpr std::uintptr_t PanelPropertyName = 0x40;
            static constexpr std::uintptr_t EntryViewModelClass = 0x48;
            static constexpr std::uintptr_t WidgetPath = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WidgetName", 0x28, "NameProperty"},
            {"EntryViewModelName", 0x2C, "NameProperty"},
            {"EntryWidgetClass", 0x30, "ClassProperty"},
            {"SlotTemplate", 0x38, "ObjectProperty"},
            {"PanelPropertyName", 0x40, "NameProperty"},
            {"EntryViewModelClass", 0x48, "ClassProperty"},
            {"WidgetPath", 0x50, "StructProperty"},
        }};
    };

    struct MVVMViewSource
    {
        static constexpr std::string_view Name = "MVVMViewSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t SourceName = 0x8;
            static constexpr std::uintptr_t RegisteredCount = 0xC;
            static constexpr std::uintptr_t bCreatedSource = 0x10;
            static constexpr std::uintptr_t bBindingsInitialized = 0x11;
            static constexpr std::uintptr_t bSetManually = 0x12;
            static constexpr std::uintptr_t bAssignedToUserWidgetProperty = 0x13;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Source", 0x0, "ObjectProperty"},
            {"SourceName", 0x8, "NameProperty"},
            {"RegisteredCount", 0xC, "IntProperty"},
            {"bCreatedSource", 0x10, "BoolProperty"},
            {"bBindingsInitialized", 0x11, "BoolProperty"},
            {"bSetManually", 0x12, "BoolProperty"},
            {"bAssignedToUserWidgetProperty", 0x13, "BoolProperty"},
        }};
    };

    struct MVVMView_Source
    {
        static constexpr std::string_view Name = "MVVMView_Source";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t ClassKey = 0x8;
            static constexpr std::uintptr_t RegisteredCount = 0xC;
            static constexpr std::uintptr_t bSourceInitialized = 0x10;
            static constexpr std::uintptr_t bBindingsInitialized = 0x11;
            static constexpr std::uintptr_t bSetManually = 0x12;
            static constexpr std::uintptr_t bAssignedToUserWidgetProperty = 0x13;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Source", 0x0, "ObjectProperty"},
            {"ClassKey", 0x8, "StructProperty"},
            {"RegisteredCount", 0xC, "IntProperty"},
            {"bSourceInitialized", 0x10, "BoolProperty"},
            {"bBindingsInitialized", 0x11, "BoolProperty"},
            {"bSetManually", 0x12, "BoolProperty"},
            {"bAssignedToUserWidgetProperty", 0x13, "BoolProperty"},
        }};
    };

    struct MVVMView_SourceKey
    {
        static constexpr std::string_view Name = "MVVMView_SourceKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

}
