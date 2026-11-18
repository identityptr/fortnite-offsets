#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NiagaraShader
{
    struct NiagaraCompileEvent
    {
        static constexpr std::string_view Name = "NiagaraCompileEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Severity = 0x0;
            static constexpr std::uintptr_t Message = 0x8;
            static constexpr std::uintptr_t ShortDescription = 0x18;
            static constexpr std::uintptr_t NodeGUID = 0x28;
            static constexpr std::uintptr_t PinGuid = 0x38;
            static constexpr std::uintptr_t StackGuids = 0x48;
            static constexpr std::uintptr_t Source = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Severity", 0x0, "EnumProperty"},
            {"Message", 0x8, "StrProperty"},
            {"ShortDescription", 0x18, "StrProperty"},
            {"NodeGUID", 0x28, "StructProperty"},
            {"PinGuid", 0x38, "StructProperty"},
            {"StackGuids", 0x48, "ArrayProperty"},
            {"Source", 0x58, "EnumProperty"},
        }};
    };

    struct NiagaraDataInterfaceGPUParamInfo
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGPUParamInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataInterfaceHLSLSymbol = 0x0;
            static constexpr std::uintptr_t DIClassName = 0x10;
            static constexpr std::uintptr_t ShaderParametersOffset = 0x20;
            static constexpr std::uintptr_t GeneratedFunctions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DataInterfaceHLSLSymbol", 0x0, "StrProperty"},
            {"DIClassName", 0x10, "StrProperty"},
            {"ShaderParametersOffset", 0x20, "UInt32Property"},
            {"GeneratedFunctions", 0x28, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceGeneratedFunction
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGeneratedFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariadicInputs = 0x30;
            static constexpr std::uintptr_t VariadicOutputs = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariadicInputs", 0x30, "ArrayProperty"},
            {"VariadicOutputs", 0x40, "ArrayProperty"},
        }};
    };

    struct NiagaraScriptBase
    {
        static constexpr std::string_view Name = "NiagaraScriptBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraShaderScriptExternalConstant
    {
        static constexpr std::string_view Name = "NiagaraShaderScriptExternalConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "NameProperty"},
            {"Name", 0x8, "StrProperty"},
        }};
    };

    struct NiagaraShaderScriptParametersMetadata
    {
        static constexpr std::string_view Name = "NiagaraShaderScriptParametersMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataInterfaceParamInfo = 0x0;
            static constexpr std::uintptr_t LooseMetadataNames = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataInterfaceParamInfo", 0x0, "ArrayProperty"},
            {"LooseMetadataNames", 0x10, "ArrayProperty"},
        }};
    };

    struct SimulationStageMetaData
    {
        static constexpr std::string_view Name = "SimulationStageMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationStageName = 0x0;
            static constexpr std::uintptr_t EnabledBinding = 0x4;
            static constexpr std::uintptr_t ElementCount = 0x8;
            static constexpr std::uintptr_t ElementCountXBinding = 0x14;
            static constexpr std::uintptr_t ElementCountYBinding = 0x18;
            static constexpr std::uintptr_t ElementCountZBinding = 0x1C;
            static constexpr std::uintptr_t IterationSourceType = 0x20;
            static constexpr std::uintptr_t IterationDataInterface = 0x24;
            static constexpr std::uintptr_t IterationDirectBinding = 0x28;
            static constexpr std::uintptr_t ExecuteBehavior = 0x2C;
            static constexpr std::uintptr_t bGpuIndirectDispatch = 0x30;
            static constexpr std::uintptr_t bPartialParticleUpdate = 0x30;
            static constexpr std::uintptr_t bParticleIterationStateEnabled = 0x30;
            static constexpr std::uintptr_t bWritesParticles = 0x30;
            static constexpr std::uintptr_t ParticleIterationStateBinding = 0x34;
            static constexpr std::uintptr_t ParticleIterationStateRange = 0x3C;
            static constexpr std::uintptr_t OutputDestinations = 0x48;
            static constexpr std::uintptr_t InputDataInterfaces = 0x58;
            static constexpr std::uintptr_t NumIterations = 0x68;
            static constexpr std::uintptr_t NumIterationsBinding = 0x6C;
            static constexpr std::uintptr_t GpuDispatchType = 0x70;
            static constexpr std::uintptr_t GpuDirectDispatchElementType = 0x71;
            static constexpr std::uintptr_t GpuDispatchNumThreads = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"SimulationStageName", 0x0, "NameProperty"},
            {"EnabledBinding", 0x4, "NameProperty"},
            {"ElementCount", 0x8, "StructProperty"},
            {"ElementCountXBinding", 0x14, "NameProperty"},
            {"ElementCountYBinding", 0x18, "NameProperty"},
            {"ElementCountZBinding", 0x1C, "NameProperty"},
            {"IterationSourceType", 0x20, "EnumProperty"},
            {"IterationDataInterface", 0x24, "NameProperty"},
            {"IterationDirectBinding", 0x28, "NameProperty"},
            {"ExecuteBehavior", 0x2C, "EnumProperty"},
            {"bGpuIndirectDispatch", 0x30, "BoolProperty"},
            {"bPartialParticleUpdate", 0x30, "BoolProperty"},
            {"bParticleIterationStateEnabled", 0x30, "BoolProperty"},
            {"bWritesParticles", 0x30, "BoolProperty"},
            {"ParticleIterationStateBinding", 0x34, "NameProperty"},
            {"ParticleIterationStateRange", 0x3C, "StructProperty"},
            {"OutputDestinations", 0x48, "ArrayProperty"},
            {"InputDataInterfaces", 0x58, "ArrayProperty"},
            {"NumIterations", 0x68, "IntProperty"},
            {"NumIterationsBinding", 0x6C, "NameProperty"},
            {"GpuDispatchType", 0x70, "EnumProperty"},
            {"GpuDirectDispatchElementType", 0x71, "EnumProperty"},
            {"GpuDispatchNumThreads", 0x74, "StructProperty"},
        }};
    };

}
