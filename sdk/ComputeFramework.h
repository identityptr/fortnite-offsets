/**
 * decamp dumper generated SDK
 * Package: /Script/ComputeFramework
 */
#pragma once
#include "Basic.h"

// /Script/ComputeFramework.ArrayShaderValue
// Kind: ScriptStruct; super: none
struct FArrayShaderValue
{
public:
    TArray<void*> ArrayOfValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FArrayShaderValue, ArrayOfValues) == 0, "Offset mismatch for FArrayShaderValue::ArrayOfValues");

// /Script/ComputeFramework.ComputeGraphEdge
// Kind: ScriptStruct; super: none
struct FComputeGraphEdge
{
public:
    std::int32_t KernelIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t KernelBindingIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t DataInterfaceIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t DataInterfaceBindingIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bKernelInput; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString BindingFunctionNameOverride; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString BindingFunctionNamespace; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FComputeGraphEdge, KernelIndex) == 0, "Offset mismatch for FComputeGraphEdge::KernelIndex");
static_assert(offsetof(FComputeGraphEdge, KernelBindingIndex) == 4, "Offset mismatch for FComputeGraphEdge::KernelBindingIndex");
static_assert(offsetof(FComputeGraphEdge, DataInterfaceIndex) == 8, "Offset mismatch for FComputeGraphEdge::DataInterfaceIndex");
static_assert(offsetof(FComputeGraphEdge, DataInterfaceBindingIndex) == 12, "Offset mismatch for FComputeGraphEdge::DataInterfaceBindingIndex");
static_assert(offsetof(FComputeGraphEdge, bKernelInput) == 16, "Offset mismatch for FComputeGraphEdge::bKernelInput");
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNameOverride) == 24, "Offset mismatch for FComputeGraphEdge::BindingFunctionNameOverride");
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNamespace) == 40, "Offset mismatch for FComputeGraphEdge::BindingFunctionNamespace");

// /Script/ComputeFramework.ComputeGraphInstance
// Kind: ScriptStruct; super: none
struct FComputeGraphInstance
{
public:
    TArray<void*> DataProviders; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FComputeGraphInstance, DataProviders) == 0, "Offset mismatch for FComputeGraphInstance::DataProviders");

// /Script/ComputeFramework.ComputeKernelDefinition
// Kind: ScriptStruct; super: none
struct FComputeKernelDefinition
{
public:
    FString Symbol; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Define; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FComputeKernelDefinition, Symbol) == 0, "Offset mismatch for FComputeKernelDefinition::Symbol");
static_assert(offsetof(FComputeKernelDefinition, Define) == 16, "Offset mismatch for FComputeKernelDefinition::Define");

// /Script/ComputeFramework.ComputeKernelDefinitionSet
// Kind: ScriptStruct; super: none
struct FComputeKernelDefinitionSet
{
public:
    TArray<void*> Defines; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FComputeKernelDefinitionSet, Defines) == 0, "Offset mismatch for FComputeKernelDefinitionSet::Defines");

// /Script/ComputeFramework.ComputeKernelPermutationBool
// Kind: ScriptStruct; super: none
struct FComputeKernelPermutationBool
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Value; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FComputeKernelPermutationBool, Name) == 0, "Offset mismatch for FComputeKernelPermutationBool::Name");
static_assert(offsetof(FComputeKernelPermutationBool, Value) == 16, "Offset mismatch for FComputeKernelPermutationBool::Value");

// /Script/ComputeFramework.ComputeKernelPermutationSet
// Kind: ScriptStruct; super: none
struct FComputeKernelPermutationSet
{
public:
    TArray<void*> BooleanOptions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FComputeKernelPermutationSet, BooleanOptions) == 0, "Offset mismatch for FComputeKernelPermutationSet::BooleanOptions");

// /Script/ComputeFramework.ComputeKernelPermutationVector
// Kind: ScriptStruct; super: none
struct FComputeKernelPermutationVector
{
public:
    TMap<void*, void*> Permutations; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint32_t BitCount; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FComputeKernelPermutationVector, Permutations) == 0, "Offset mismatch for FComputeKernelPermutationVector::Permutations");
static_assert(offsetof(FComputeKernelPermutationVector, BitCount) == 16, "Offset mismatch for FComputeKernelPermutationVector::BitCount");

// /Script/ComputeFramework.ShaderFunctionDefinition
// Kind: ScriptStruct; super: none
struct FShaderFunctionDefinition
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> ParamTypes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasReturnType; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FShaderFunctionDefinition, Name) == 0, "Offset mismatch for FShaderFunctionDefinition::Name");
static_assert(offsetof(FShaderFunctionDefinition, ParamTypes) == 16, "Offset mismatch for FShaderFunctionDefinition::ParamTypes");
static_assert(offsetof(FShaderFunctionDefinition, bHasReturnType) == 32, "Offset mismatch for FShaderFunctionDefinition::bHasReturnType");

// /Script/ComputeFramework.ShaderParamTypeDefinition
// Kind: ScriptStruct; super: none
struct FShaderParamTypeDefinition
{
public:
    FString TypeDeclaration; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Name; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ValueType[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint16_t ArrayElementCount; // 0x0028 (Size: 0x2, Type: UInt16Property)
    std::uint8_t BindingType; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t ResourceType; // 0x002B (Size: 0x1, Type: EnumProperty)
    std::uint8_t modifier; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FShaderParamTypeDefinition, TypeDeclaration) == 0, "Offset mismatch for FShaderParamTypeDefinition::TypeDeclaration");
static_assert(offsetof(FShaderParamTypeDefinition, Name) == 16, "Offset mismatch for FShaderParamTypeDefinition::Name");
static_assert(offsetof(FShaderParamTypeDefinition, ValueType) == 32, "Offset mismatch for FShaderParamTypeDefinition::ValueType");
static_assert(offsetof(FShaderParamTypeDefinition, ArrayElementCount) == 40, "Offset mismatch for FShaderParamTypeDefinition::ArrayElementCount");
static_assert(offsetof(FShaderParamTypeDefinition, BindingType) == 42, "Offset mismatch for FShaderParamTypeDefinition::BindingType");
static_assert(offsetof(FShaderParamTypeDefinition, ResourceType) == 43, "Offset mismatch for FShaderParamTypeDefinition::ResourceType");
static_assert(offsetof(FShaderParamTypeDefinition, modifier) == 44, "Offset mismatch for FShaderParamTypeDefinition::modifier");

// /Script/ComputeFramework.ShaderValueContainer
// Kind: ScriptStruct; super: none
struct FShaderValueContainer
{
public:
    TArray<void*> ShaderValue; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ArrayList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FShaderValueContainer, ShaderValue) == 0, "Offset mismatch for FShaderValueContainer::ShaderValue");
static_assert(offsetof(FShaderValueContainer, ArrayList) == 16, "Offset mismatch for FShaderValueContainer::ArrayList");

// /Script/ComputeFramework.ShaderValueType
// Kind: ScriptStruct; super: none
struct FShaderValueType
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DimensionType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsDynamicArray; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FShaderValueType, Type) == 0, "Offset mismatch for FShaderValueType::Type");
static_assert(offsetof(FShaderValueType, DimensionType) == 1, "Offset mismatch for FShaderValueType::DimensionType");
static_assert(offsetof(FShaderValueType, Name) == 4, "Offset mismatch for FShaderValueType::Name");
static_assert(offsetof(FShaderValueType, bIsDynamicArray) == 8, "Offset mismatch for FShaderValueType::bIsDynamicArray");

// /Script/ComputeFramework.ShaderValueTypeHandle
// Kind: ScriptStruct; super: none
struct FShaderValueTypeHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ComputeFramework.ComputeDataInterface
// Kind: Class; super: Object
class UComputeDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ComputeFramework.ComputeDataProvider
// Kind: Class; super: Object
class UComputeDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ComputeFramework.ComputeGraph
// Kind: Class; super: Object
class UComputeGraph
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> KernelInvocations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaces; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GraphEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bindings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaceToBinding; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UComputeGraph, KernelInvocations) == 40, "Offset mismatch for UComputeGraph::KernelInvocations");
static_assert(offsetof(UComputeGraph, DataInterfaces) == 56, "Offset mismatch for UComputeGraph::DataInterfaces");
static_assert(offsetof(UComputeGraph, GraphEdges) == 72, "Offset mismatch for UComputeGraph::GraphEdges");
static_assert(offsetof(UComputeGraph, Bindings) == 88, "Offset mismatch for UComputeGraph::Bindings");
static_assert(offsetof(UComputeGraph, DataInterfaceToBinding) == 104, "Offset mismatch for UComputeGraph::DataInterfaceToBinding");

// /Script/ComputeFramework.ComputeGraphComponent
// Kind: Class; super: ActorComponent
class UComputeGraphComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ComputeGraph; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DataProviderTemplates; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ComputeGraphInstance[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComputeGraphComponent, ComputeGraph) == 192, "Offset mismatch for UComputeGraphComponent::ComputeGraph");
static_assert(offsetof(UComputeGraphComponent, DataProviderTemplates) == 200, "Offset mismatch for UComputeGraphComponent::DataProviderTemplates");
static_assert(offsetof(UComputeGraphComponent, ComputeGraphInstance) == 216, "Offset mismatch for UComputeGraphComponent::ComputeGraphInstance");

// /Script/ComputeFramework.ComputeKernel
// Kind: Class; super: Object
class UComputeKernel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* KernelSource; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::int32_t KernelFlags; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UComputeKernel, KernelSource) == 40, "Offset mismatch for UComputeKernel::KernelSource");
static_assert(offsetof(UComputeKernel, KernelFlags) == 48, "Offset mismatch for UComputeKernel::KernelFlags");

// /Script/ComputeFramework.ComputeKernelSource
// Kind: Class; super: Object
class UComputeKernelSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EntryPoint; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t GroupSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComputeKernelSource, EntryPoint) == 40, "Offset mismatch for UComputeKernelSource::EntryPoint");
static_assert(offsetof(UComputeKernelSource, GroupSize) == 56, "Offset mismatch for UComputeKernelSource::GroupSize");

// /Script/ComputeFramework.ComputeKernelSourceWithText
// Kind: Class; super: ComputeKernelSource
class UComputeKernelSourceWithText
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EntryPoint; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t GroupSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComputeKernelSourceWithText, EntryPoint) == 40, "Offset mismatch for UComputeKernelSourceWithText::EntryPoint");
static_assert(offsetof(UComputeKernelSourceWithText, GroupSize) == 56, "Offset mismatch for UComputeKernelSourceWithText::GroupSize");

// /Script/ComputeFramework.ComputeSource
// Kind: Class; super: Object
class UComputeSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AdditionalSources; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UComputeSource, AdditionalSources) == 40, "Offset mismatch for UComputeSource::AdditionalSources");
