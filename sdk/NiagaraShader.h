/**
 * decamp dumper generated SDK
 * Package: /Script/NiagaraShader
 */
#pragma once
#include "Basic.h"

// /Script/NiagaraShader.NiagaraCompileEvent
// Kind: ScriptStruct; super: none
struct FNiagaraCompileEvent
{
public:
    std::uint8_t Severity; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Message; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString ShortDescription; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t NodeGUID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t PinGuid[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TArray<void*> StackGuids; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Source; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0, "Offset mismatch for FNiagaraCompileEvent::Severity");
static_assert(offsetof(FNiagaraCompileEvent, Message) == 8, "Offset mismatch for FNiagaraCompileEvent::Message");
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 24, "Offset mismatch for FNiagaraCompileEvent::ShortDescription");
static_assert(offsetof(FNiagaraCompileEvent, NodeGUID) == 40, "Offset mismatch for FNiagaraCompileEvent::NodeGUID");
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 56, "Offset mismatch for FNiagaraCompileEvent::PinGuid");
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 72, "Offset mismatch for FNiagaraCompileEvent::StackGuids");
static_assert(offsetof(FNiagaraCompileEvent, Source) == 88, "Offset mismatch for FNiagaraCompileEvent::Source");

// /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Kind: ScriptStruct; super: none
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
    FString DataInterfaceHLSLSymbol; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DIClassName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint32_t ShaderParametersOffset; // 0x0020 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> GeneratedFunctions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0, "Offset mismatch for FNiagaraDataInterfaceGPUParamInfo::DataInterfaceHLSLSymbol");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 16, "Offset mismatch for FNiagaraDataInterfaceGPUParamInfo::DIClassName");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset) == 32, "Offset mismatch for FNiagaraDataInterfaceGPUParamInfo::ShaderParametersOffset");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 40, "Offset mismatch for FNiagaraDataInterfaceGPUParamInfo::GeneratedFunctions");

// /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Kind: ScriptStruct; super: none
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> VariadicInputs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariadicOutputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs) == 48, "Offset mismatch for FNiagaraDataInterfaceGeneratedFunction::VariadicInputs");
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs) == 64, "Offset mismatch for FNiagaraDataInterfaceGeneratedFunction::VariadicOutputs");

// /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
// Kind: ScriptStruct; super: none
struct FNiagaraShaderScriptExternalConstant
{
public:
    FName Type; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Type) == 0, "Offset mismatch for FNiagaraShaderScriptExternalConstant::Type");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Name) == 8, "Offset mismatch for FNiagaraShaderScriptExternalConstant::Name");

// /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
// Kind: ScriptStruct; super: none
struct FNiagaraShaderScriptParametersMetadata
{
public:
    TArray<void*> DataInterfaceParamInfo; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LooseMetadataNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo) == 0, "Offset mismatch for FNiagaraShaderScriptParametersMetadata::DataInterfaceParamInfo");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames) == 16, "Offset mismatch for FNiagaraShaderScriptParametersMetadata::LooseMetadataNames");

// /Script/NiagaraShader.SimulationStageMetaData
// Kind: ScriptStruct; super: none
struct FSimulationStageMetaData
{
public:
    std::uint8_t SimulationStageName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnabledBinding[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementCount[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t ElementCountXBinding[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementCountYBinding[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementCountZBinding[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t IterationSourceType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::uint8_t IterationDataInterface[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t IterationDirectBinding[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecuteBehavior; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t bGpuIndirectDispatch; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bPartialParticleUpdate (shared storage)
    // 0x0030 BoolProperty bParticleIterationStateEnabled (shared storage)
    // 0x0030 BoolProperty bWritesParticles (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    FName ParticleIterationStateBinding; // 0x0034 (Size: 0x8, Type: NameProperty)
    std::uint8_t ParticleIterationStateRange[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    TArray<void*> OutputDestinations; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputDataInterfaces; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumIterations; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t NumIterationsBinding[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::uint8_t GpuDispatchType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GpuDirectDispatchElementType; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0072
    std::uint8_t GpuDispatchNumThreads[0x1]; // 0x0074 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0, "Offset mismatch for FSimulationStageMetaData::SimulationStageName");
static_assert(offsetof(FSimulationStageMetaData, EnabledBinding) == 4, "Offset mismatch for FSimulationStageMetaData::EnabledBinding");
static_assert(offsetof(FSimulationStageMetaData, ElementCount) == 8, "Offset mismatch for FSimulationStageMetaData::ElementCount");
static_assert(offsetof(FSimulationStageMetaData, ElementCountXBinding) == 20, "Offset mismatch for FSimulationStageMetaData::ElementCountXBinding");
static_assert(offsetof(FSimulationStageMetaData, ElementCountYBinding) == 24, "Offset mismatch for FSimulationStageMetaData::ElementCountYBinding");
static_assert(offsetof(FSimulationStageMetaData, ElementCountZBinding) == 28, "Offset mismatch for FSimulationStageMetaData::ElementCountZBinding");
static_assert(offsetof(FSimulationStageMetaData, IterationSourceType) == 32, "Offset mismatch for FSimulationStageMetaData::IterationSourceType");
static_assert(offsetof(FSimulationStageMetaData, IterationDataInterface) == 36, "Offset mismatch for FSimulationStageMetaData::IterationDataInterface");
static_assert(offsetof(FSimulationStageMetaData, IterationDirectBinding) == 40, "Offset mismatch for FSimulationStageMetaData::IterationDirectBinding");
static_assert(offsetof(FSimulationStageMetaData, ExecuteBehavior) == 44, "Offset mismatch for FSimulationStageMetaData::ExecuteBehavior");
static_assert(offsetof(FSimulationStageMetaData, bGpuIndirectDispatch) == 48, "Offset mismatch for FSimulationStageMetaData::bGpuIndirectDispatch");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateBinding) == 52, "Offset mismatch for FSimulationStageMetaData::ParticleIterationStateBinding");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateRange) == 60, "Offset mismatch for FSimulationStageMetaData::ParticleIterationStateRange");
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 72, "Offset mismatch for FSimulationStageMetaData::OutputDestinations");
static_assert(offsetof(FSimulationStageMetaData, InputDataInterfaces) == 88, "Offset mismatch for FSimulationStageMetaData::InputDataInterfaces");
static_assert(offsetof(FSimulationStageMetaData, NumIterations) == 104, "Offset mismatch for FSimulationStageMetaData::NumIterations");
static_assert(offsetof(FSimulationStageMetaData, NumIterationsBinding) == 108, "Offset mismatch for FSimulationStageMetaData::NumIterationsBinding");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchType) == 112, "Offset mismatch for FSimulationStageMetaData::GpuDispatchType");
static_assert(offsetof(FSimulationStageMetaData, GpuDirectDispatchElementType) == 113, "Offset mismatch for FSimulationStageMetaData::GpuDirectDispatchElementType");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchNumThreads) == 116, "Offset mismatch for FSimulationStageMetaData::GpuDispatchNumThreads");

// /Script/NiagaraShader.NiagaraScriptBase
// Kind: Class; super: Object
class UNiagaraScriptBase
{
public:
    std::uint8_t Opaque[1];
};
