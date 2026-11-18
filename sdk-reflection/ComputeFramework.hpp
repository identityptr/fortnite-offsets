#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ComputeFramework
{
    struct ArrayShaderValue
    {
        static constexpr std::string_view Name = "ArrayShaderValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrayOfValues = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ArrayOfValues", 0x0, "ArrayProperty"},
        }};
    };

    struct ComputeDataInterface
    {
        static constexpr std::string_view Name = "ComputeDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ComputeDataProvider
    {
        static constexpr std::string_view Name = "ComputeDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ComputeGraph
    {
        static constexpr std::string_view Name = "ComputeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelInvocations = 0x28;
            static constexpr std::uintptr_t DataInterfaces = 0x38;
            static constexpr std::uintptr_t GraphEdges = 0x48;
            static constexpr std::uintptr_t Bindings = 0x58;
            static constexpr std::uintptr_t DataInterfaceToBinding = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"KernelInvocations", 0x28, "ArrayProperty"},
            {"DataInterfaces", 0x38, "ArrayProperty"},
            {"GraphEdges", 0x48, "ArrayProperty"},
            {"Bindings", 0x58, "ArrayProperty"},
            {"DataInterfaceToBinding", 0x68, "ArrayProperty"},
        }};
    };

    struct ComputeGraphComponent
    {
        static constexpr std::string_view Name = "ComputeGraphComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComputeGraph = 0xC0;
            static constexpr std::uintptr_t DataProviderTemplates = 0xC8;
            static constexpr std::uintptr_t ComputeGraphInstance = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComputeGraph", 0xC0, "ObjectProperty"},
            {"DataProviderTemplates", 0xC8, "ArrayProperty"},
            {"ComputeGraphInstance", 0xD8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetBindingObject",
            "InitializeProvider",
            "QueueExecute",
        }};
    };

    struct ComputeGraphEdge
    {
        static constexpr std::string_view Name = "ComputeGraphEdge";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelIndex = 0x0;
            static constexpr std::uintptr_t KernelBindingIndex = 0x4;
            static constexpr std::uintptr_t DataInterfaceIndex = 0x8;
            static constexpr std::uintptr_t DataInterfaceBindingIndex = 0xC;
            static constexpr std::uintptr_t bKernelInput = 0x10;
            static constexpr std::uintptr_t BindingFunctionNameOverride = 0x18;
            static constexpr std::uintptr_t BindingFunctionNamespace = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"KernelIndex", 0x0, "IntProperty"},
            {"KernelBindingIndex", 0x4, "IntProperty"},
            {"DataInterfaceIndex", 0x8, "IntProperty"},
            {"DataInterfaceBindingIndex", 0xC, "IntProperty"},
            {"bKernelInput", 0x10, "BoolProperty"},
            {"BindingFunctionNameOverride", 0x18, "StrProperty"},
            {"BindingFunctionNamespace", 0x28, "StrProperty"},
        }};
    };

    struct ComputeGraphInstance
    {
        static constexpr std::string_view Name = "ComputeGraphInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataProviders = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataProviders", 0x0, "ArrayProperty"},
        }};
    };

    struct ComputeKernel
    {
        static constexpr std::string_view Name = "ComputeKernel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelSource = 0x28;
            static constexpr std::uintptr_t KernelFlags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"KernelSource", 0x28, "ObjectProperty"},
            {"KernelFlags", 0x30, "IntProperty"},
        }};
    };

    struct ComputeKernelDefinition
    {
        static constexpr std::string_view Name = "ComputeKernelDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Symbol = 0x0;
            static constexpr std::uintptr_t Define = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Symbol", 0x0, "StrProperty"},
            {"Define", 0x10, "StrProperty"},
        }};
    };

    struct ComputeKernelDefinitionSet
    {
        static constexpr std::string_view Name = "ComputeKernelDefinitionSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Defines = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Defines", 0x0, "ArrayProperty"},
        }};
    };

    struct ComputeKernelPermutationBool
    {
        static constexpr std::string_view Name = "ComputeKernelPermutationBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"Value", 0x10, "BoolProperty"},
        }};
    };

    struct ComputeKernelPermutationSet
    {
        static constexpr std::string_view Name = "ComputeKernelPermutationSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BooleanOptions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BooleanOptions", 0x0, "ArrayProperty"},
        }};
    };

    struct ComputeKernelPermutationVector
    {
        static constexpr std::string_view Name = "ComputeKernelPermutationVector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Permutations = 0x0;
            static constexpr std::uintptr_t BitCount = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Permutations", 0x0, "MapProperty"},
            {"BitCount", 0x10, "UInt32Property"},
        }};
    };

    struct ComputeKernelSource
    {
        static constexpr std::string_view Name = "ComputeKernelSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

    struct ComputeKernelSourceWithText
    {
        static constexpr std::string_view Name = "ComputeKernelSourceWithText";
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

    struct ComputeSource
    {
        static constexpr std::string_view Name = "ComputeSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalSources = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalSources", 0x28, "ArrayProperty"},
        }};
    };

    struct ShaderFunctionDefinition
    {
        static constexpr std::string_view Name = "ShaderFunctionDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ParamTypes = 0x10;
            static constexpr std::uintptr_t bHasReturnType = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"ParamTypes", 0x10, "ArrayProperty"},
            {"bHasReturnType", 0x20, "BoolProperty"},
        }};
    };

    struct ShaderParamTypeDefinition
    {
        static constexpr std::string_view Name = "ShaderParamTypeDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeDeclaration = 0x0;
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t ValueType = 0x20;
            static constexpr std::uintptr_t ArrayElementCount = 0x28;
            static constexpr std::uintptr_t BindingType = 0x2A;
            static constexpr std::uintptr_t ResourceType = 0x2B;
            static constexpr std::uintptr_t modifier = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TypeDeclaration", 0x0, "StrProperty"},
            {"Name", 0x10, "StrProperty"},
            {"ValueType", 0x20, "StructProperty"},
            {"ArrayElementCount", 0x28, "UInt16Property"},
            {"BindingType", 0x2A, "EnumProperty"},
            {"ResourceType", 0x2B, "EnumProperty"},
            {"modifier", 0x2C, "EnumProperty"},
        }};
    };

    struct ShaderValueContainer
    {
        static constexpr std::string_view Name = "ShaderValueContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShaderValue = 0x0;
            static constexpr std::uintptr_t ArrayList = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShaderValue", 0x0, "ArrayProperty"},
            {"ArrayList", 0x10, "ArrayProperty"},
        }};
    };

    struct ShaderValueType
    {
        static constexpr std::string_view Name = "ShaderValueType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t DimensionType = 0x1;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t bIsDynamicArray = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"DimensionType", 0x1, "EnumProperty"},
            {"Name", 0x4, "NameProperty"},
            {"bIsDynamicArray", 0x8, "BoolProperty"},
        }};
    };

    struct ShaderValueTypeHandle
    {
        static constexpr std::string_view Name = "ShaderValueTypeHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
