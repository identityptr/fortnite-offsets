/**
 * decamp dumper generated SDK
 * Package: /Script/EditableComputeGraph
 */
#pragma once
#include "Basic.h"

// /Script/EditableComputeGraph.ComputeGraphDataBindingObjectDesc
// Kind: ScriptStruct; super: none
struct FComputeGraphDataBindingObjectDesc
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Type; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FComputeGraphDataBindingObjectDesc, Name) == 0, "Offset mismatch for FComputeGraphDataBindingObjectDesc::Name");
static_assert(offsetof(FComputeGraphDataBindingObjectDesc, Type) == 8, "Offset mismatch for FComputeGraphDataBindingObjectDesc::Type");

// /Script/EditableComputeGraph.ComputeGraphDataInterfaceDesc
// Kind: ScriptStruct; super: none
struct FComputeGraphDataInterfaceDesc
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingObjectName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* Type; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* Settings; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FComputeGraphDataInterfaceDesc, Name) == 0, "Offset mismatch for FComputeGraphDataInterfaceDesc::Name");
static_assert(offsetof(FComputeGraphDataInterfaceDesc, BindingObjectName) == 4, "Offset mismatch for FComputeGraphDataInterfaceDesc::BindingObjectName");
static_assert(offsetof(FComputeGraphDataInterfaceDesc, Type) == 8, "Offset mismatch for FComputeGraphDataInterfaceDesc::Type");
static_assert(offsetof(FComputeGraphDataInterfaceDesc, Settings) == 16, "Offset mismatch for FComputeGraphDataInterfaceDesc::Settings");

// /Script/EditableComputeGraph.ComputeGraphDesc
// Kind: ScriptStruct; super: none
struct FComputeGraphDesc
{
public:
    TArray<void*> Kernels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BindingObjects; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaces; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FComputeGraphDesc, Kernels) == 0, "Offset mismatch for FComputeGraphDesc::Kernels");
static_assert(offsetof(FComputeGraphDesc, BindingObjects) == 16, "Offset mismatch for FComputeGraphDesc::BindingObjects");
static_assert(offsetof(FComputeGraphDesc, DataInterfaces) == 32, "Offset mismatch for FComputeGraphDesc::DataInterfaces");

// /Script/EditableComputeGraph.ComputeGraphKernelDesc
// Kind: ScriptStruct; super: none
struct FComputeGraphKernelDesc
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString SourceText; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString EntryPoint; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t GroupSize[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    TArray<void*> Inputs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FComputeGraphKernelDesc, Name) == 0, "Offset mismatch for FComputeGraphKernelDesc::Name");
static_assert(offsetof(FComputeGraphKernelDesc, SourceText) == 8, "Offset mismatch for FComputeGraphKernelDesc::SourceText");
static_assert(offsetof(FComputeGraphKernelDesc, EntryPoint) == 24, "Offset mismatch for FComputeGraphKernelDesc::EntryPoint");
static_assert(offsetof(FComputeGraphKernelDesc, GroupSize) == 40, "Offset mismatch for FComputeGraphKernelDesc::GroupSize");
static_assert(offsetof(FComputeGraphKernelDesc, Inputs) == 56, "Offset mismatch for FComputeGraphKernelDesc::Inputs");
static_assert(offsetof(FComputeGraphKernelDesc, Outputs) == 72, "Offset mismatch for FComputeGraphKernelDesc::Outputs");

// /Script/EditableComputeGraph.KernelPin
// Kind: ScriptStruct; super: none
struct FKernelPin
{
public:
    FString KernelFunctionName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName DataInterfaceName; // 0x0010 (Size: 0x8, Type: NameProperty)
    FString DataInterfaceFunctionName; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOrphaned; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FKernelPin, KernelFunctionName) == 0, "Offset mismatch for FKernelPin::KernelFunctionName");
static_assert(offsetof(FKernelPin, DataInterfaceName) == 16, "Offset mismatch for FKernelPin::DataInterfaceName");
static_assert(offsetof(FKernelPin, DataInterfaceFunctionName) == 24, "Offset mismatch for FKernelPin::DataInterfaceFunctionName");
static_assert(offsetof(FKernelPin, bOrphaned) == 40, "Offset mismatch for FKernelPin::bOrphaned");

// /Script/EditableComputeGraph.EditableComputeGraph
// Kind: Class; super: ComputeGraph
class UEditableComputeGraph
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> KernelInvocations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaces; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GraphEdges; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bindings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaceToBinding; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEditableComputeGraph, KernelInvocations) == 40, "Offset mismatch for UEditableComputeGraph::KernelInvocations");
static_assert(offsetof(UEditableComputeGraph, DataInterfaces) == 56, "Offset mismatch for UEditableComputeGraph::DataInterfaces");
static_assert(offsetof(UEditableComputeGraph, GraphEdges) == 72, "Offset mismatch for UEditableComputeGraph::GraphEdges");
static_assert(offsetof(UEditableComputeGraph, Bindings) == 88, "Offset mismatch for UEditableComputeGraph::Bindings");
static_assert(offsetof(UEditableComputeGraph, DataInterfaceToBinding) == 104, "Offset mismatch for UEditableComputeGraph::DataInterfaceToBinding");
