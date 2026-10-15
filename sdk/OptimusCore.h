/**
 * decamp dumper generated SDK
 * Package: /Script/OptimusCore
 */
#pragma once
#include "Basic.h"

// /Script/OptimusCore.OptimusAction
// Kind: ScriptStruct; super: none
struct FOptimusAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusAnimAttributeArray
// Kind: ScriptStruct; super: none
struct FOptimusAnimAttributeArray
{
public:
    TArray<void*> InnerArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusAnimAttributeArray, InnerArray) == 0, "Offset mismatch for FOptimusAnimAttributeArray::InnerArray");

// /Script/OptimusCore.OptimusAnimAttributeBufferArray
// Kind: ScriptStruct; super: none
struct FOptimusAnimAttributeBufferArray
{
public:
    TArray<void*> InnerArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusAnimAttributeBufferArray, InnerArray) == 0, "Offset mismatch for FOptimusAnimAttributeBufferArray::InnerArray");

// /Script/OptimusCore.OptimusAnimAttributeBufferDescription
// Kind: ScriptStruct; super: none
struct FOptimusAnimAttributeBufferDescription
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DataType[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultValueStruct[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    FString HlslId; // 0x0048 (Size: 0x10, Type: StrProperty)
    FName PinName; // 0x0058 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusAnimAttributeBufferDescription, Name) == 0, "Offset mismatch for FOptimusAnimAttributeBufferDescription::Name");
static_assert(offsetof(FOptimusAnimAttributeBufferDescription, DataType) == 16, "Offset mismatch for FOptimusAnimAttributeBufferDescription::DataType");
static_assert(offsetof(FOptimusAnimAttributeBufferDescription, DefaultValueStruct) == 56, "Offset mismatch for FOptimusAnimAttributeBufferDescription::DefaultValueStruct");
static_assert(offsetof(FOptimusAnimAttributeBufferDescription, HlslId) == 72, "Offset mismatch for FOptimusAnimAttributeBufferDescription::HlslId");
static_assert(offsetof(FOptimusAnimAttributeBufferDescription, PinName) == 88, "Offset mismatch for FOptimusAnimAttributeBufferDescription::PinName");

// /Script/OptimusCore.OptimusAnimAttributeDescription
// Kind: ScriptStruct; super: none
struct FOptimusAnimAttributeDescription
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName BoneName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultValueStruct[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    FString HlslId; // 0x0050 (Size: 0x10, Type: StrProperty)
    FName PinName; // 0x0060 (Size: 0x8, Type: NameProperty)
    void* DefaultValue; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOptimusAnimAttributeDescription, Name) == 0, "Offset mismatch for FOptimusAnimAttributeDescription::Name");
static_assert(offsetof(FOptimusAnimAttributeDescription, BoneName) == 16, "Offset mismatch for FOptimusAnimAttributeDescription::BoneName");
static_assert(offsetof(FOptimusAnimAttributeDescription, DataType) == 24, "Offset mismatch for FOptimusAnimAttributeDescription::DataType");
static_assert(offsetof(FOptimusAnimAttributeDescription, DefaultValueStruct) == 64, "Offset mismatch for FOptimusAnimAttributeDescription::DefaultValueStruct");
static_assert(offsetof(FOptimusAnimAttributeDescription, HlslId) == 80, "Offset mismatch for FOptimusAnimAttributeDescription::HlslId");
static_assert(offsetof(FOptimusAnimAttributeDescription, PinName) == 96, "Offset mismatch for FOptimusAnimAttributeDescription::PinName");
static_assert(offsetof(FOptimusAnimAttributeDescription, DefaultValue) == 104, "Offset mismatch for FOptimusAnimAttributeDescription::DefaultValue");

// /Script/OptimusCore.OptimusCommentNodeAction_ResizeNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusCommentNodeAction_ResizeNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingAction_AddBinding
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusComponentBindingAction_AddBinding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingAction_RemoveBinding
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusComponentBindingAction_RemoveBinding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingAction_RenameBinding
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusComponentBindingAction_RenameBinding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingAction_SetComponentSource
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusComponentBindingAction_SetComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusCompoundAction
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusCompoundAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComputeGraphInfo
// Kind: ScriptStruct; super: none
struct FOptimusComputeGraphInfo
{
public:
    std::uint8_t GraphType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t GraphName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* ComputeGraph; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FOptimusComputeGraphInfo, GraphType) == 0, "Offset mismatch for FOptimusComputeGraphInfo::GraphType");
static_assert(offsetof(FOptimusComputeGraphInfo, GraphName) == 4, "Offset mismatch for FOptimusComputeGraphInfo::GraphName");
static_assert(offsetof(FOptimusComputeGraphInfo, ComputeGraph) == 8, "Offset mismatch for FOptimusComputeGraphInfo::ComputeGraph");

// /Script/OptimusCore.OptimusConstant
// Kind: ScriptStruct; super: none
struct FOptimusConstant
{
public:
    std::uint8_t Identifier[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Definition[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::int32_t ComponentBindingIndex; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOptimusConstant, Identifier) == 0, "Offset mismatch for FOptimusConstant::Identifier");
static_assert(offsetof(FOptimusConstant, Definition) == 16, "Offset mismatch for FOptimusConstant::Definition");
static_assert(offsetof(FOptimusConstant, ComponentBindingIndex) == 48, "Offset mismatch for FOptimusConstant::ComponentBindingIndex");
static_assert(offsetof(FOptimusConstant, Type) == 52, "Offset mismatch for FOptimusConstant::Type");

// /Script/OptimusCore.OptimusConstantContainer
// Kind: ScriptStruct; super: none
struct FOptimusConstantContainer
{
public:
    TArray<void*> KernelContainers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusConstantContainer, KernelContainers) == 0, "Offset mismatch for FOptimusConstantContainer::KernelContainers");

// /Script/OptimusCore.OptimusConstantDefinition
// Kind: ScriptStruct; super: none
struct FOptimusConstantDefinition
{
public:
    std::uint8_t ReferencedConstant[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString Expression; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOptimusConstantDefinition, ReferencedConstant) == 0, "Offset mismatch for FOptimusConstantDefinition::ReferencedConstant");
static_assert(offsetof(FOptimusConstantDefinition, Expression) == 16, "Offset mismatch for FOptimusConstantDefinition::Expression");

// /Script/OptimusCore.OptimusConstantIdentifier
// Kind: ScriptStruct; super: none
struct FOptimusConstantIdentifier
{
public:
    std::uint8_t NodePath[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName ConstantName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusConstantIdentifier, NodePath) == 0, "Offset mismatch for FOptimusConstantIdentifier::NodePath");
static_assert(offsetof(FOptimusConstantIdentifier, GroupName) == 4, "Offset mismatch for FOptimusConstantIdentifier::GroupName");
static_assert(offsetof(FOptimusConstantIdentifier, ConstantName) == 8, "Offset mismatch for FOptimusConstantIdentifier::ConstantName");

// /Script/OptimusCore.OptimusConstantIndex
// Kind: ScriptStruct; super: none
struct FOptimusConstantIndex
{
public:
    std::int32_t KernelIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t ConstantIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FOptimusConstantIndex, KernelIndex) == 0, "Offset mismatch for FOptimusConstantIndex::KernelIndex");
static_assert(offsetof(FOptimusConstantIndex, Type) == 4, "Offset mismatch for FOptimusConstantIndex::Type");
static_assert(offsetof(FOptimusConstantIndex, ConstantIndex) == 8, "Offset mismatch for FOptimusConstantIndex::ConstantIndex");

// /Script/OptimusCore.OptimusDataDomain
// Kind: ScriptStruct; super: none
struct FOptimusDataDomain
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> DimensionNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Multiplier; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    FString Expression; // 0x0020 (Size: 0x10, Type: StrProperty)
    TArray<void*> LevelNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusDataDomain, Type) == 0, "Offset mismatch for FOptimusDataDomain::Type");
static_assert(offsetof(FOptimusDataDomain, DimensionNames) == 8, "Offset mismatch for FOptimusDataDomain::DimensionNames");
static_assert(offsetof(FOptimusDataDomain, Multiplier) == 24, "Offset mismatch for FOptimusDataDomain::Multiplier");
static_assert(offsetof(FOptimusDataDomain, Expression) == 32, "Offset mismatch for FOptimusDataDomain::Expression");
static_assert(offsetof(FOptimusDataDomain, LevelNames) == 48, "Offset mismatch for FOptimusDataDomain::LevelNames");

// /Script/OptimusCore.OptimusDataInterfacePropertyOverrideInfo
// Kind: ScriptStruct; super: none
struct FOptimusDataInterfacePropertyOverrideInfo
{
public:
    TMap<void*, void*> PinNameToValueIdMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FOptimusDataInterfacePropertyOverrideInfo, PinNameToValueIdMap) == 0, "Offset mismatch for FOptimusDataInterfacePropertyOverrideInfo::PinNameToValueIdMap");

// /Script/OptimusCore.OptimusDataType
// Kind: ScriptStruct; super: none
struct FOptimusDataType
{
public:
    FName TypeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShaderValueType[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::int32_t ShaderValueSize; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t TypeCategory[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> TypeObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bHasCustomPinColor; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    std::uint8_t CustomPinColor[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t UsageFlags; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TypeFlags; // 0x0045 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOptimusDataType, TypeName) == 0, "Offset mismatch for FOptimusDataType::TypeName");
static_assert(offsetof(FOptimusDataType, DisplayName) == 8, "Offset mismatch for FOptimusDataType::DisplayName");
static_assert(offsetof(FOptimusDataType, ShaderValueType) == 24, "Offset mismatch for FOptimusDataType::ShaderValueType");
static_assert(offsetof(FOptimusDataType, ShaderValueSize) == 32, "Offset mismatch for FOptimusDataType::ShaderValueSize");
static_assert(offsetof(FOptimusDataType, TypeCategory) == 36, "Offset mismatch for FOptimusDataType::TypeCategory");
static_assert(offsetof(FOptimusDataType, TypeObject) == 40, "Offset mismatch for FOptimusDataType::TypeObject");
static_assert(offsetof(FOptimusDataType, bHasCustomPinColor) == 48, "Offset mismatch for FOptimusDataType::bHasCustomPinColor");
static_assert(offsetof(FOptimusDataType, CustomPinColor) == 52, "Offset mismatch for FOptimusDataType::CustomPinColor");
static_assert(offsetof(FOptimusDataType, UsageFlags) == 68, "Offset mismatch for FOptimusDataType::UsageFlags");
static_assert(offsetof(FOptimusDataType, TypeFlags) == 69, "Offset mismatch for FOptimusDataType::TypeFlags");

// /Script/OptimusCore.OptimusDataTypeRef
// Kind: ScriptStruct; super: none
struct FOptimusDataTypeRef
{
public:
    FName TypeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> TypeObject; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FOptimusDataTypeRef, TypeName) == 0, "Offset mismatch for FOptimusDataTypeRef::TypeName");
static_assert(offsetof(FOptimusDataTypeRef, TypeObject) == 8, "Offset mismatch for FOptimusDataTypeRef::TypeObject");

// /Script/OptimusCore.OptimusDebugDrawParameters
// Kind: ScriptStruct; super: none
struct FOptimusDebugDrawParameters
{
public:
    std::uint8_t bForceEnable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t MaxLineCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTriangleCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxCharacterCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t FontSize; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FOptimusDebugDrawParameters, bForceEnable) == 0, "Offset mismatch for FOptimusDebugDrawParameters::bForceEnable");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxLineCount) == 4, "Offset mismatch for FOptimusDebugDrawParameters::MaxLineCount");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxTriangleCount) == 8, "Offset mismatch for FOptimusDebugDrawParameters::MaxTriangleCount");
static_assert(offsetof(FOptimusDebugDrawParameters, MaxCharacterCount) == 12, "Offset mismatch for FOptimusDebugDrawParameters::MaxCharacterCount");
static_assert(offsetof(FOptimusDebugDrawParameters, FontSize) == 16, "Offset mismatch for FOptimusDebugDrawParameters::FontSize");

// /Script/OptimusCore.OptimusDeformerInstanceComponentBinding
// Kind: ScriptStruct; super: none
struct FOptimusDeformerInstanceComponentBinding
{
public:
    std::uint8_t ProviderName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName ComponentName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ProviderName) == 0, "Offset mismatch for FOptimusDeformerInstanceComponentBinding::ProviderName");
static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ComponentName) == 4, "Offset mismatch for FOptimusDeformerInstanceComponentBinding::ComponentName");

// /Script/OptimusCore.OptimusDeformerInstanceExecInfo
// Kind: ScriptStruct; super: none
struct FOptimusDeformerInstanceExecInfo
{
public:
    std::uint8_t GraphName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t GraphType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* ComputeGraph; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ComputeGraphInstance[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphName) == 0, "Offset mismatch for FOptimusDeformerInstanceExecInfo::GraphName");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphType) == 4, "Offset mismatch for FOptimusDeformerInstanceExecInfo::GraphType");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraph) == 8, "Offset mismatch for FOptimusDeformerInstanceExecInfo::ComputeGraph");
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraphInstance) == 16, "Offset mismatch for FOptimusDeformerInstanceExecInfo::ComputeGraphInstance");

// /Script/OptimusCore.OptimusExecutionDomain
// Kind: ScriptStruct; super: none
struct FOptimusExecutionDomain
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FString Expression; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOptimusExecutionDomain, Type) == 0, "Offset mismatch for FOptimusExecutionDomain::Type");
static_assert(offsetof(FOptimusExecutionDomain, Name) == 4, "Offset mismatch for FOptimusExecutionDomain::Name");
static_assert(offsetof(FOptimusExecutionDomain, Expression) == 8, "Offset mismatch for FOptimusExecutionDomain::Expression");

// /Script/OptimusCore.OptimusFunctionGraphIdentifier
// Kind: ScriptStruct; super: none
struct FOptimusFunctionGraphIdentifier
{
public:
    void* Asset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Guid[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusFunctionGraphIdentifier, Asset) == 0, "Offset mismatch for FOptimusFunctionGraphIdentifier::Asset");
static_assert(offsetof(FOptimusFunctionGraphIdentifier, Guid) == 8, "Offset mismatch for FOptimusFunctionGraphIdentifier::Guid");

// /Script/OptimusCore.OptimusFunctionNodeGraphHeader
// Kind: ScriptStruct; super: none
struct FOptimusFunctionNodeGraphHeader
{
public:
    std::uint8_t GraphPath[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FunctionName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    FName Category; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusFunctionNodeGraphHeader, GraphPath) == 0, "Offset mismatch for FOptimusFunctionNodeGraphHeader::GraphPath");
static_assert(offsetof(FOptimusFunctionNodeGraphHeader, FunctionName) == 32, "Offset mismatch for FOptimusFunctionNodeGraphHeader::FunctionName");
static_assert(offsetof(FOptimusFunctionNodeGraphHeader, Category) == 36, "Offset mismatch for FOptimusFunctionNodeGraphHeader::Category");

// /Script/OptimusCore.OptimusFunctionNodeGraphHeaderArray
// Kind: ScriptStruct; super: none
struct FOptimusFunctionNodeGraphHeaderArray
{
public:
    TArray<void*> Headers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusFunctionNodeGraphHeaderArray, Headers) == 0, "Offset mismatch for FOptimusFunctionNodeGraphHeaderArray::Headers");

// /Script/OptimusCore.OptimusFunctionNodeGraphHeaderWithGuid
// Kind: ScriptStruct; super: none
struct FOptimusFunctionNodeGraphHeaderWithGuid
{
public:
    std::uint8_t FunctionGraphGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t FunctionName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    FName Category; // 0x0014 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusFunctionNodeGraphHeaderWithGuid, FunctionGraphGuid) == 0, "Offset mismatch for FOptimusFunctionNodeGraphHeaderWithGuid::FunctionGraphGuid");
static_assert(offsetof(FOptimusFunctionNodeGraphHeaderWithGuid, FunctionName) == 16, "Offset mismatch for FOptimusFunctionNodeGraphHeaderWithGuid::FunctionName");
static_assert(offsetof(FOptimusFunctionNodeGraphHeaderWithGuid, Category) == 20, "Offset mismatch for FOptimusFunctionNodeGraphHeaderWithGuid::Category");

// /Script/OptimusCore.OptimusFunctionNodeGraphHeaderWithGuidArray
// Kind: ScriptStruct; super: none
struct FOptimusFunctionNodeGraphHeaderWithGuidArray
{
public:
    TArray<void*> Headers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusFunctionNodeGraphHeaderWithGuidArray, Headers) == 0, "Offset mismatch for FOptimusFunctionNodeGraphHeaderWithGuidArray::Headers");

// /Script/OptimusCore.OptimusFunctionReferenceData
// Kind: ScriptStruct; super: none
struct FOptimusFunctionReferenceData
{
public:
    TMap<void*, void*> FunctionReferences; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FOptimusFunctionReferenceData, FunctionReferences) == 0, "Offset mismatch for FOptimusFunctionReferenceData::FunctionReferences");

// /Script/OptimusCore.OptimusFunctionReferenceNodeSet
// Kind: ScriptStruct; super: none
struct FOptimusFunctionReferenceNodeSet
{
public:
    TSet<void*> Nodes; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FOptimusFunctionReferenceNodeSet, Nodes) == 0, "Offset mismatch for FOptimusFunctionReferenceNodeSet::Nodes");

// /Script/OptimusCore.OptimusGraphVariableDescription
// Kind: ScriptStruct; super: none
struct FOptimusGraphVariableDescription
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ValueType[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ValueId[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::int32_t Offset; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> Value; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShaderValue[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    TSoftObjectPtr<void> SourceObject; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FOptimusGraphVariableDescription, Name) == 0, "Offset mismatch for FOptimusGraphVariableDescription::Name");
static_assert(offsetof(FOptimusGraphVariableDescription, ValueType) == 16, "Offset mismatch for FOptimusGraphVariableDescription::ValueType");
static_assert(offsetof(FOptimusGraphVariableDescription, ValueId) == 24, "Offset mismatch for FOptimusGraphVariableDescription::ValueId");
static_assert(offsetof(FOptimusGraphVariableDescription, Offset) == 32, "Offset mismatch for FOptimusGraphVariableDescription::Offset");
static_assert(offsetof(FOptimusGraphVariableDescription, Value) == 40, "Offset mismatch for FOptimusGraphVariableDescription::Value");
static_assert(offsetof(FOptimusGraphVariableDescription, ShaderValue) == 56, "Offset mismatch for FOptimusGraphVariableDescription::ShaderValue");
static_assert(offsetof(FOptimusGraphVariableDescription, SourceObject) == 88, "Offset mismatch for FOptimusGraphVariableDescription::SourceObject");

// /Script/OptimusCore.OptimusKernelConstantContainer
// Kind: ScriptStruct; super: none
struct FOptimusKernelConstantContainer
{
public:
    TArray<void*> InputConstants; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputConstants; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GroupNameToBindingIndex; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FOptimusKernelConstantContainer, InputConstants) == 0, "Offset mismatch for FOptimusKernelConstantContainer::InputConstants");
static_assert(offsetof(FOptimusKernelConstantContainer, OutputConstants) == 16, "Offset mismatch for FOptimusKernelConstantContainer::OutputConstants");
static_assert(offsetof(FOptimusKernelConstantContainer, GroupNameToBindingIndex) == 32, "Offset mismatch for FOptimusKernelConstantContainer::GroupNameToBindingIndex");

// /Script/OptimusCore.OptimusLoopTerminalInfo
// Kind: ScriptStruct; super: none
struct FOptimusLoopTerminalInfo
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Bindings[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusLoopTerminalInfo, Count) == 0, "Offset mismatch for FOptimusLoopTerminalInfo::Count");
static_assert(offsetof(FOptimusLoopTerminalInfo, Bindings) == 8, "Offset mismatch for FOptimusLoopTerminalInfo::Bindings");

// /Script/OptimusCore.OptimusNodeAction_AddGroupingPin
// Kind: ScriptStruct; super: OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_AddGroupingPin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_AddPin
// Kind: ScriptStruct; super: OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_AddPin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_AddRemovePin
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_AddRemovePin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_MoveNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_MoveNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_MovePin
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_MovePin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_RemovePin
// Kind: ScriptStruct; super: OptimusNodeAction_AddRemovePin
struct FOptimusNodeAction_RemovePin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_RenameNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_RenameNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_SetPinDataDomain
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_SetPinDataDomain
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_SetPinName
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_SetPinName
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_SetPinType
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_SetPinType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeAction_SetPinValue
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeAction_SetPinValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddGraph
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_AddGraph
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddLink
// Kind: ScriptStruct; super: OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_AddLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_AddNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddNodePair
// Kind: ScriptStruct; super: OptimusNodeGraphAction_AddRemoveNodePair
struct FOptimusNodeGraphAction_AddNodePair
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveLink
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_AddRemoveLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveNodePair
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_AddRemoveNodePair
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_ConnectAdderPin
// Kind: ScriptStruct; super: OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_ConnectAdderPin
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_DuplicateNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_DuplicateNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_PackageKernelFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_RemoveGraph
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_RemoveGraph
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_RemoveLink
// Kind: ScriptStruct; super: OptimusNodeGraphAction_AddRemoveLink
struct FOptimusNodeGraphAction_RemoveLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_RemoveNode
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_RemoveNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_RemoveNodePair
// Kind: ScriptStruct; super: OptimusNodeGraphAction_AddRemoveNodePair
struct FOptimusNodeGraphAction_RemoveNodePair
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_RenameGraph
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_RenameGraph
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusNodeGraphAction_UnpackageKernelFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNode_ComponentSource_DuplicationInfo
// Kind: ScriptStruct; super: none
struct FOptimusNode_ComponentSource_DuplicationInfo
{
public:
    FName BindingName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* ComponentType; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FOptimusNode_ComponentSource_DuplicationInfo, BindingName) == 0, "Offset mismatch for FOptimusNode_ComponentSource_DuplicationInfo::BindingName");
static_assert(offsetof(FOptimusNode_ComponentSource_DuplicationInfo, ComponentType) == 8, "Offset mismatch for FOptimusNode_ComponentSource_DuplicationInfo::ComponentType");

// /Script/OptimusCore.OptimusNode_GetVariable_DuplicationInfo
// Kind: ScriptStruct; super: none
struct FOptimusNode_GetVariable_DuplicationInfo
{
public:
    FName VariableName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    FString DefaultValue; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, VariableName) == 0, "Offset mismatch for FOptimusNode_GetVariable_DuplicationInfo::VariableName");
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DataType) == 8, "Offset mismatch for FOptimusNode_GetVariable_DuplicationInfo::DataType");
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DefaultValue) == 48, "Offset mismatch for FOptimusNode_GetVariable_DuplicationInfo::DefaultValue");

// /Script/OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
// Kind: ScriptStruct; super: none
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{
public:
    FName ResourceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DataDomain[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, ResourceName) == 0, "Offset mismatch for FOptimusNode_ResourceAccessorBase_DuplicationInfo::ResourceName");
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataType) == 8, "Offset mismatch for FOptimusNode_ResourceAccessorBase_DuplicationInfo::DataType");
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataDomain) == 48, "Offset mismatch for FOptimusNode_ResourceAccessorBase_DuplicationInfo::DataDomain");

// /Script/OptimusCore.OptimusParameterBinding
// Kind: ScriptStruct; super: none
struct FOptimusParameterBinding
{
public:
    std::uint8_t Name[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t DataType[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DataDomain[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t bSupportAtomicIfCompatibleDataType; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportRead; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FOptimusParameterBinding, Name) == 0, "Offset mismatch for FOptimusParameterBinding::Name");
static_assert(offsetof(FOptimusParameterBinding, DataType) == 8, "Offset mismatch for FOptimusParameterBinding::DataType");
static_assert(offsetof(FOptimusParameterBinding, DataDomain) == 48, "Offset mismatch for FOptimusParameterBinding::DataDomain");
static_assert(offsetof(FOptimusParameterBinding, bSupportAtomicIfCompatibleDataType) == 112, "Offset mismatch for FOptimusParameterBinding::bSupportAtomicIfCompatibleDataType");
static_assert(offsetof(FOptimusParameterBinding, bSupportRead) == 113, "Offset mismatch for FOptimusParameterBinding::bSupportRead");

// /Script/OptimusCore.OptimusParameterBindingArray
// Kind: ScriptStruct; super: none
struct FOptimusParameterBindingArray
{
public:
    TArray<void*> InnerArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusParameterBindingArray, InnerArray) == 0, "Offset mismatch for FOptimusParameterBindingArray::InnerArray");

// /Script/OptimusCore.OptimusPinPairInfo
// Kind: ScriptStruct; super: none
struct FOptimusPinPairInfo
{
public:
    TArray<void*> InputPinPath; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputPinPath; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOptimusPinPairInfo, InputPinPath) == 0, "Offset mismatch for FOptimusPinPairInfo::InputPinPath");
static_assert(offsetof(FOptimusPinPairInfo, OutputPinPath) == 16, "Offset mismatch for FOptimusPinPairInfo::OutputPinPath");

// /Script/OptimusCore.OptimusResourceAction_AddResource
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusResourceAction_AddResource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusResourceAction_RemoveResource
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusResourceAction_RemoveResource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusResourceAction_RenameResource
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusResourceAction_RenameResource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusResourceAction_SetDataDomain
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusResourceAction_SetDataDomain
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusResourceAction_SetDataType
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusResourceAction_SetDataType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSecondaryInputBindingsGroup
// Kind: ScriptStruct; super: none
struct FOptimusSecondaryInputBindingsGroup
{
public:
    std::uint8_t GroupName[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t BindingArray[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, GroupName) == 0, "Offset mismatch for FOptimusSecondaryInputBindingsGroup::GroupName");
static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, BindingArray) == 8, "Offset mismatch for FOptimusSecondaryInputBindingsGroup::BindingArray");

// /Script/OptimusCore.OptimusShaderText
// Kind: ScriptStruct; super: none
struct FOptimusShaderText
{
public:
    FString Declarations; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ShaderText; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOptimusShaderText, Declarations) == 0, "Offset mismatch for FOptimusShaderText::Declarations");
static_assert(offsetof(FOptimusShaderText, ShaderText) == 16, "Offset mismatch for FOptimusShaderText::ShaderText");

// /Script/OptimusCore.OptimusValidatedName
// Kind: ScriptStruct; super: none
struct FOptimusValidatedName
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusValidatedName, Name) == 0, "Offset mismatch for FOptimusValidatedName::Name");

// /Script/OptimusCore.OptimusValueContainerStruct
// Kind: ScriptStruct; super: none
struct FOptimusValueContainerStruct
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusValueContainerStruct, Value) == 0, "Offset mismatch for FOptimusValueContainerStruct::Value");

// /Script/OptimusCore.OptimusValueDescription
// Kind: ScriptStruct; super: none
struct FOptimusValueDescription
{
public:
    std::uint8_t DataType[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ValueUsage; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    std::uint8_t Value[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShaderValue[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimusValueDescription, DataType) == 0, "Offset mismatch for FOptimusValueDescription::DataType");
static_assert(offsetof(FOptimusValueDescription, ValueUsage) == 40, "Offset mismatch for FOptimusValueDescription::ValueUsage");
static_assert(offsetof(FOptimusValueDescription, Value) == 48, "Offset mismatch for FOptimusValueDescription::Value");
static_assert(offsetof(FOptimusValueDescription, ShaderValue) == 64, "Offset mismatch for FOptimusValueDescription::ShaderValue");

// /Script/OptimusCore.OptimusValueIdentifier
// Kind: ScriptStruct; super: none
struct FOptimusValueIdentifier
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName Name; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FOptimusValueIdentifier, Type) == 0, "Offset mismatch for FOptimusValueIdentifier::Type");
static_assert(offsetof(FOptimusValueIdentifier, Name) == 4, "Offset mismatch for FOptimusValueIdentifier::Name");

// /Script/OptimusCore.OptimusVariableAction_AddVariable
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusVariableAction_AddVariable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusVariableAction_RemoveVariable
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusVariableAction_RemoveVariable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusVariableAction_RenameVariable
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusVariableAction_RenameVariable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusVariableAction_SetDataType
// Kind: ScriptStruct; super: OptimusAction
struct FOptimusVariableAction_SetDataType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusVariableMetaDataEntry
// Kind: ScriptStruct; super: none
struct FOptimusVariableMetaDataEntry
{
public:
    FName Key; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOptimusVariableMetaDataEntry, Key) == 0, "Offset mismatch for FOptimusVariableMetaDataEntry::Key");
static_assert(offsetof(FOptimusVariableMetaDataEntry, Value) == 8, "Offset mismatch for FOptimusVariableMetaDataEntry::Value");

// /Script/OptimusCore.Optimus_ShaderBinding
// Kind: ScriptStruct; super: none
struct FOptimus_ShaderBinding
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOptimus_ShaderBinding, Name) == 0, "Offset mismatch for FOptimus_ShaderBinding::Name");
static_assert(offsetof(FOptimus_ShaderBinding, DataType) == 8, "Offset mismatch for FOptimus_ShaderBinding::DataType");

// /Script/OptimusCore.RigUnit_AddOptimusDeformer
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_AddOptimusDeformer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DeformerInstanceGuid[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddOptimusDeformer, DeformerInstanceGuid) == 16, "Offset mismatch for FRigUnit_AddOptimusDeformer::DeformerInstanceGuid");

// /Script/OptimusCore.RigVMTrait_OptimusDeformer
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_OptimusDeformer
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TSoftObjectPtr<void> DeformerGraph; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FRigVMTrait_OptimusDeformer, DeformerGraph) == 24, "Offset mismatch for FRigVMTrait_OptimusDeformer::DeformerGraph");

// /Script/OptimusCore.RigVMTrait_OptimusDeformerSettings
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_OptimusDeformerSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t ExecutionPhase; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::int32_t ExecutionGroup; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t DeformChildComponents; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    FName ExcludeChildComponentsWithTag; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigVMTrait_OptimusDeformerSettings, ExecutionPhase) == 24, "Offset mismatch for FRigVMTrait_OptimusDeformerSettings::ExecutionPhase");
static_assert(offsetof(FRigVMTrait_OptimusDeformerSettings, ExecutionGroup) == 28, "Offset mismatch for FRigVMTrait_OptimusDeformerSettings::ExecutionGroup");
static_assert(offsetof(FRigVMTrait_OptimusDeformerSettings, DeformChildComponents) == 32, "Offset mismatch for FRigVMTrait_OptimusDeformerSettings::DeformChildComponents");
static_assert(offsetof(FRigVMTrait_OptimusDeformerSettings, ExcludeChildComponentsWithTag) == 36, "Offset mismatch for FRigVMTrait_OptimusDeformerSettings::ExcludeChildComponentsWithTag");

// /Script/OptimusCore.RigVMTrait_OptimusVariableBase
// Kind: ScriptStruct; super: RigVMTrait
struct FRigVMTrait_OptimusVariableBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigVMTrait_OptimusVariableBase, Name) == 8, "Offset mismatch for FRigVMTrait_OptimusVariableBase::Name");

// /Script/OptimusCore.RigVMTrait_SetDeformerBoolArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerBoolArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerBoolArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerBoolArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerBoolVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerBoolVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerBoolVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerBoolVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerFloatArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerFloatArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerFloatArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerFloatArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerFloatVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerFloatVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    double Value; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerFloatVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerFloatVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt2ArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt2ArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt2ArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt2ArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt2Variable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt2Variable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt2Variable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt2Variable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt3ArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt3ArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt3ArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt3ArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt3Variable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt3Variable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt3Variable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt3Variable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt4ArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt4ArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt4ArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt4ArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerInt4Variable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerInt4Variable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerInt4Variable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerInt4Variable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerIntArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerIntArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerIntArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerIntArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerIntVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerIntVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t Value; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerIntVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerIntVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerLinearColorArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerLinearColorArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerLinearColorArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerLinearColorArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerLinearColorVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerLinearColorVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerLinearColorVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerLinearColorVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerNameArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerNameArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerNameArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerNameArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerNameVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerNameVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName Value; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerNameVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerNameVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerQuatArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerQuatArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerQuatArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerQuatArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerQuatVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerQuatVariable
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerQuatVariable, Value) == 32, "Offset mismatch for FRigVMTrait_SetDeformerQuatVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerRotatorArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerRotatorArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerRotatorArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerRotatorArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerRotatorVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerRotatorVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerRotatorVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerRotatorVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerTransformArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerTransformArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerTransformArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerTransformArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerTransformVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerTransformVariable
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerTransformVariable, Value) == 32, "Offset mismatch for FRigVMTrait_SetDeformerTransformVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVector2ArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVector2ArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVector2ArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerVector2ArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVector2Variable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVector2Variable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVector2Variable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerVector2Variable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVector4ArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVector4ArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVector4ArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerVector4ArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVector4Variable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVector4Variable
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVector4Variable, Value) == 32, "Offset mismatch for FRigVMTrait_SetDeformerVector4Variable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVectorArrayVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVectorArrayVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVectorArrayVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerVectorArrayVariable::Value");

// /Script/OptimusCore.RigVMTrait_SetDeformerVectorVariable
// Kind: ScriptStruct; super: RigVMTrait_OptimusVariableBase
struct FRigVMTrait_SetDeformerVectorVariable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVMTrait_SetDeformerVectorVariable, Value) == 24, "Offset mismatch for FRigVMTrait_SetDeformerVectorVariable::Value");

// /Script/OptimusCore.OptimusActionStack
// Kind: Class; super: Object
class UOptimusActionStack
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t TransactedActionIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UOptimusActionStack, TransactedActionIndex) == 40, "Offset mismatch for UOptimusActionStack::TransactedActionIndex");

// /Script/OptimusCore.OptimusAdvancedSkeletonDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusAdvancedSkeletonDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SkinWeightProfile[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableLayeredSkinning; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t AttributeBufferArray[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusAdvancedSkeletonDataInterface, SkinWeightProfile) == 40, "Offset mismatch for UOptimusAdvancedSkeletonDataInterface::SkinWeightProfile");
static_assert(offsetof(UOptimusAdvancedSkeletonDataInterface, bEnableLayeredSkinning) == 44, "Offset mismatch for UOptimusAdvancedSkeletonDataInterface::bEnableLayeredSkinning");
static_assert(offsetof(UOptimusAdvancedSkeletonDataInterface, AttributeBufferArray) == 48, "Offset mismatch for UOptimusAdvancedSkeletonDataInterface::AttributeBufferArray");

// /Script/OptimusCore.OptimusAdvancedSkeletonDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusAdvancedSkeletonDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusAlternativeSelectedObjectProvider
// Kind: Class; super: Interface
class UOptimusAlternativeSelectedObjectProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusAnimAttributeDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusAnimAttributeDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AttributeArray[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusAnimAttributeDataInterface, AttributeArray) == 40, "Offset mismatch for UOptimusAnimAttributeDataInterface::AttributeArray");

// /Script/OptimusCore.OptimusAnimAttributeDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusAnimAttributeDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusClothDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusClothDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusClothDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusClothDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingProvider
// Kind: Class; super: Interface
class UOptimusComponentBindingProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentBindingReceiver
// Kind: Class; super: Interface
class UOptimusComponentBindingReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentSource
// Kind: Class; super: Object
class UOptimusComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComponentSourceBinding
// Kind: Class; super: Object
class UOptimusComponentSourceBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName BindingName; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* ComponentType; // 0x0030 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ComponentTags; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsPrimaryBinding; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOptimusComponentSourceBinding, BindingName) == 40, "Offset mismatch for UOptimusComponentSourceBinding::BindingName");
static_assert(offsetof(UOptimusComponentSourceBinding, ComponentType) == 48, "Offset mismatch for UOptimusComponentSourceBinding::ComponentType");
static_assert(offsetof(UOptimusComponentSourceBinding, ComponentTags) == 56, "Offset mismatch for UOptimusComponentSourceBinding::ComponentTags");
static_assert(offsetof(UOptimusComponentSourceBinding, bIsPrimaryBinding) == 72, "Offset mismatch for UOptimusComponentSourceBinding::bIsPrimaryBinding");

// /Script/OptimusCore.OptimusComponentSourceBindingContainer
// Kind: Class; super: Object
class UOptimusComponentSourceBindingContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Bindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusComponentSourceBindingContainer, Bindings) == 40, "Offset mismatch for UOptimusComponentSourceBindingContainer::Bindings");

// /Script/OptimusCore.OptimusComputeDataInterface
// Kind: Class; super: ComputeDataInterface
class UOptimusComputeDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComputeGraph
// Kind: Class; super: ComputeGraph
class UOptimusComputeGraph
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> KernelToNode; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusComputeGraph, KernelToNode) == 192, "Offset mismatch for UOptimusComputeGraph::KernelToNode");

// /Script/OptimusCore.OptimusComputeKernelDataInterface
// Kind: Class; super: Interface
class UOptimusComputeKernelDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusComputeKernelProvider
// Kind: Class; super: Interface
class UOptimusComputeKernelProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusConnectivityDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusConnectivityDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusConnectivityDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusConnectivityDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusCopyKernelDataInterface
// Kind: Class; super: ComputeDataInterface
class UOptimusCopyKernelDataInterface
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ComponentSourceBinding; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    FString NumThreadsExpression; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOptimusCopyKernelDataInterface, ComponentSourceBinding) == 48, "Offset mismatch for UOptimusCopyKernelDataInterface::ComponentSourceBinding");
static_assert(offsetof(UOptimusCopyKernelDataInterface, NumThreadsExpression) == 56, "Offset mismatch for UOptimusCopyKernelDataInterface::NumThreadsExpression");

// /Script/OptimusCore.OptimusCopyKernelDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusCopyKernelDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusCustomComputeKernelDataInterface
// Kind: Class; super: ComputeDataInterface
class UOptimusCustomComputeKernelDataInterface
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ComponentSourceBinding; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    FString NumThreadsExpression; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExecutionDomainConstantIdentifier[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusCustomComputeKernelDataInterface, ComponentSourceBinding) == 48, "Offset mismatch for UOptimusCustomComputeKernelDataInterface::ComponentSourceBinding");
static_assert(offsetof(UOptimusCustomComputeKernelDataInterface, NumThreadsExpression) == 56, "Offset mismatch for UOptimusCustomComputeKernelDataInterface::NumThreadsExpression");
static_assert(offsetof(UOptimusCustomComputeKernelDataInterface, ExecutionDomainConstantIdentifier) == 72, "Offset mismatch for UOptimusCustomComputeKernelDataInterface::ExecutionDomainConstantIdentifier");

// /Script/OptimusCore.OptimusCustomComputeKernelDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusCustomComputeKernelDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDataInterfaceProvider
// Kind: Class; super: Interface
class UOptimusDataInterfaceProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDebugDrawDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusDebugDrawDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsSupported; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t DebugDrawParameters[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusDebugDrawDataInterface, bIsSupported) == 40, "Offset mismatch for UOptimusDebugDrawDataInterface::bIsSupported");
static_assert(offsetof(UOptimusDebugDrawDataInterface, DebugDrawParameters) == 44, "Offset mismatch for UOptimusDebugDrawDataInterface::DebugDrawParameters");

// /Script/OptimusCore.OptimusDebugDrawDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusDebugDrawDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDeformer
// Kind: Class; super: MeshDeformer
class UOptimusDeformer
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Mesh; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComputeGraphs; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DataInterfacePropertyOverrideMap; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ValueMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    void* ActionStack; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Status; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    TArray<void*> Graphs; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    void* Bindings; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* Variables; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* Resources; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusDeformer, Mesh) == 80, "Offset mismatch for UOptimusDeformer::Mesh");
static_assert(offsetof(UOptimusDeformer, ComputeGraphs) == 88, "Offset mismatch for UOptimusDeformer::ComputeGraphs");
static_assert(offsetof(UOptimusDeformer, DataInterfacePropertyOverrideMap) == 104, "Offset mismatch for UOptimusDeformer::DataInterfacePropertyOverrideMap");
static_assert(offsetof(UOptimusDeformer, ValueMap) == 120, "Offset mismatch for UOptimusDeformer::ValueMap");
static_assert(offsetof(UOptimusDeformer, ActionStack) == 136, "Offset mismatch for UOptimusDeformer::ActionStack");
static_assert(offsetof(UOptimusDeformer, Status) == 144, "Offset mismatch for UOptimusDeformer::Status");
static_assert(offsetof(UOptimusDeformer, Graphs) == 152, "Offset mismatch for UOptimusDeformer::Graphs");
static_assert(offsetof(UOptimusDeformer, Bindings) == 168, "Offset mismatch for UOptimusDeformer::Bindings");
static_assert(offsetof(UOptimusDeformer, Variables) == 176, "Offset mismatch for UOptimusDeformer::Variables");
static_assert(offsetof(UOptimusDeformer, Resources) == 184, "Offset mismatch for UOptimusDeformer::Resources");

// /Script/OptimusCore.OptimusDeformerAssetPathAccessor
// Kind: Class; super: Interface
class UOptimusDeformerAssetPathAccessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDeformerDynamicInstanceManager
// Kind: Class; super: MeshDeformerInstance
class UOptimusDeformerDynamicInstanceManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DefaultInstance; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> GuidToRigDeformerInstanceMap; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GuidToInstanceMap; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UOptimusDeformerDynamicInstanceManager, DefaultInstance) == 40, "Offset mismatch for UOptimusDeformerDynamicInstanceManager::DefaultInstance");
static_assert(offsetof(UOptimusDeformerDynamicInstanceManager, GuidToRigDeformerInstanceMap) == 48, "Offset mismatch for UOptimusDeformerDynamicInstanceManager::GuidToRigDeformerInstanceMap");
static_assert(offsetof(UOptimusDeformerDynamicInstanceManager, GuidToInstanceMap) == 64, "Offset mismatch for UOptimusDeformerDynamicInstanceManager::GuidToInstanceMap");

// /Script/OptimusCore.OptimusDeformerGeometryReadbackProvider
// Kind: Class; super: Interface
class UOptimusDeformerGeometryReadbackProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDeformerInstance
// Kind: Class; super: MeshDeformerInstance
class UOptimusDeformerInstance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> MeshComponent; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstanceSettings; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ComputeGraphExecInfos; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusDeformerInstance, MeshComponent) == 48, "Offset mismatch for UOptimusDeformerInstance::MeshComponent");
static_assert(offsetof(UOptimusDeformerInstance, InstanceSettings) == 56, "Offset mismatch for UOptimusDeformerInstance::InstanceSettings");
static_assert(offsetof(UOptimusDeformerInstance, ComputeGraphExecInfos) == 64, "Offset mismatch for UOptimusDeformerInstance::ComputeGraphExecInfos");

// /Script/OptimusCore.OptimusDeformerInstanceAccessor
// Kind: Class; super: Interface
class UOptimusDeformerInstanceAccessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDeformerInstanceSettings
// Kind: Class; super: MeshDeformerInstanceSettings
class UOptimusDeformerInstanceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Deformer; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Bindings; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusDeformerInstanceSettings, Deformer) == 40, "Offset mismatch for UOptimusDeformerInstanceSettings::Deformer");
static_assert(offsetof(UOptimusDeformerInstanceSettings, Bindings) == 48, "Offset mismatch for UOptimusDeformerInstanceSettings::Bindings");

// /Script/OptimusCore.OptimusDeprecatedExecutionDataInterface
// Kind: Class; super: Interface
class UOptimusDeprecatedExecutionDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDuplicateVerticesDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusDuplicateVerticesDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusDuplicateVerticesDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusDuplicateVerticesDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusExecutionDomainProvider
// Kind: Class; super: Interface
class UOptimusExecutionDomainProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusFunctionNodeGraph
// Kind: Class; super: OptimusNodeSubGraph
class UOptimusFunctionNodeGraph
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Category[0x4]; // 0x0148 (Size: 0x4, Type: NameProperty)
    std::uint8_t AccessSpecifier[0x4]; // 0x014C (Size: 0x4, Type: NameProperty)
    std::uint8_t Guid[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusFunctionNodeGraph, Category) == 328, "Offset mismatch for UOptimusFunctionNodeGraph::Category");
static_assert(offsetof(UOptimusFunctionNodeGraph, AccessSpecifier) == 332, "Offset mismatch for UOptimusFunctionNodeGraph::AccessSpecifier");
static_assert(offsetof(UOptimusFunctionNodeGraph, Guid) == 336, "Offset mismatch for UOptimusFunctionNodeGraph::Guid");

// /Script/OptimusCore.OptimusGeneratedClassDefiner
// Kind: Class; super: Interface
class UOptimusGeneratedClassDefiner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusGraphDataInterface
// Kind: Class; super: ComputeDataInterface
class UOptimusGraphDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Variables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ParameterBufferSize; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UOptimusGraphDataInterface, Variables) == 40, "Offset mismatch for UOptimusGraphDataInterface::Variables");
static_assert(offsetof(UOptimusGraphDataInterface, ParameterBufferSize) == 56, "Offset mismatch for UOptimusGraphDataInterface::ParameterBufferSize");

// /Script/OptimusCore.OptimusGraphDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusGraphDataProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Variables; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusGraphDataProvider, Variables) == 48, "Offset mismatch for UOptimusGraphDataProvider::Variables");

// /Script/OptimusCore.OptimusHalfEdgeDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusHalfEdgeDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusHalfEdgeDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusHalfEdgeDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusImplicitPersistentBufferDataInterface
// Kind: Class; super: OptimusRawBufferDataInterface
class UOptimusImplicitPersistentBufferDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bZeroInitForAtomicWrites; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOptimusImplicitPersistentBufferDataInterface, bZeroInitForAtomicWrites) == 136, "Offset mismatch for UOptimusImplicitPersistentBufferDataInterface::bZeroInitForAtomicWrites");

// /Script/OptimusCore.OptimusImplicitPersistentBufferDataProvider
// Kind: Class; super: OptimusRawBufferDataProvider
class UOptimusImplicitPersistentBufferDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusKernelSource
// Kind: Class; super: ComputeKernelSource
class UOptimusKernelSource
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString EntryPoint; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t GroupSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusKernelSource, EntryPoint) == 40, "Offset mismatch for UOptimusKernelSource::EntryPoint");
static_assert(offsetof(UOptimusKernelSource, GroupSize) == 56, "Offset mismatch for UOptimusKernelSource::GroupSize");

// /Script/OptimusCore.OptimusLoopTerminalDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusLoopTerminalDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t Index; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Count; // 0x002C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UOptimusLoopTerminalDataInterface, Index) == 40, "Offset mismatch for UOptimusLoopTerminalDataInterface::Index");
static_assert(offsetof(UOptimusLoopTerminalDataInterface, Count) == 44, "Offset mismatch for UOptimusLoopTerminalDataInterface::Count");

// /Script/OptimusCore.OptimusLoopTerminalDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusLoopTerminalDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusMorphTargetDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusMorphTargetDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusMorphTargetDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusMorphTargetDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNode
// Kind: Class; super: Object
class UOptimusNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GraphPosition[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> Pins; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExpandedPins[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t DiagnosticLevel; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusNode, DisplayName) == 48, "Offset mismatch for UOptimusNode::DisplayName");
static_assert(offsetof(UOptimusNode, GraphPosition) == 64, "Offset mismatch for UOptimusNode::GraphPosition");
static_assert(offsetof(UOptimusNode, Pins) == 80, "Offset mismatch for UOptimusNode::Pins");
static_assert(offsetof(UOptimusNode, ExpandedPins) == 96, "Offset mismatch for UOptimusNode::ExpandedPins");
static_assert(offsetof(UOptimusNode, DiagnosticLevel) == 112, "Offset mismatch for UOptimusNode::DiagnosticLevel");

// /Script/OptimusCore.OptimusNodeAdderPinProvider
// Kind: Class; super: Interface
class UOptimusNodeAdderPinProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeFunctionLibraryOwner
// Kind: Class; super: Interface
class UOptimusNodeFunctionLibraryOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraph
// Kind: Class; super: Object
class UOptimusNodeGraph
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GraphType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> Nodes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Links; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NodePairs; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubGraphs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusNodeGraph, GraphType) == 48, "Offset mismatch for UOptimusNodeGraph::GraphType");
static_assert(offsetof(UOptimusNodeGraph, Nodes) == 56, "Offset mismatch for UOptimusNodeGraph::Nodes");
static_assert(offsetof(UOptimusNodeGraph, Links) == 72, "Offset mismatch for UOptimusNodeGraph::Links");
static_assert(offsetof(UOptimusNodeGraph, NodePairs) == 88, "Offset mismatch for UOptimusNodeGraph::NodePairs");
static_assert(offsetof(UOptimusNodeGraph, SubGraphs) == 104, "Offset mismatch for UOptimusNodeGraph::SubGraphs");

// /Script/OptimusCore.OptimusNodeGraphCollectionOwner
// Kind: Class; super: Interface
class UOptimusNodeGraphCollectionOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeGraphProvider
// Kind: Class; super: Interface
class UOptimusNodeGraphProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeLink
// Kind: Class; super: Object
class UOptimusNodeLink
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* NodeOutputPin; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* NodeInputPin; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusNodeLink, NodeOutputPin) == 40, "Offset mismatch for UOptimusNodeLink::NodeOutputPin");
static_assert(offsetof(UOptimusNodeLink, NodeInputPin) == 48, "Offset mismatch for UOptimusNodeLink::NodeInputPin");

// /Script/OptimusCore.OptimusNodePair
// Kind: Class; super: Object
class UOptimusNodePair
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* First; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Second; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusNodePair, First) == 40, "Offset mismatch for UOptimusNodePair::First");
static_assert(offsetof(UOptimusNodePair, Second) == 48, "Offset mismatch for UOptimusNodePair::Second");

// /Script/OptimusCore.OptimusNodePairProvider
// Kind: Class; super: Interface
class UOptimusNodePairProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodePin
// Kind: Class; super: Object
class UOptimusNodePin
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsGroupingPin; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Direction; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StorageType; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    std::uint8_t DataDomain[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t DataType[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    TArray<void*> SubPins; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusNodePin, bIsGroupingPin) == 40, "Offset mismatch for UOptimusNodePin::bIsGroupingPin");
static_assert(offsetof(UOptimusNodePin, Direction) == 41, "Offset mismatch for UOptimusNodePin::Direction");
static_assert(offsetof(UOptimusNodePin, StorageType) == 42, "Offset mismatch for UOptimusNodePin::StorageType");
static_assert(offsetof(UOptimusNodePin, DataDomain) == 48, "Offset mismatch for UOptimusNodePin::DataDomain");
static_assert(offsetof(UOptimusNodePin, DataType) == 112, "Offset mismatch for UOptimusNodePin::DataType");
static_assert(offsetof(UOptimusNodePin, SubPins) == 152, "Offset mismatch for UOptimusNodePin::SubPins");

// /Script/OptimusCore.OptimusNodePinRouter
// Kind: Class; super: Interface
class UOptimusNodePinRouter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNodeSubGraph
// Kind: Class; super: OptimusNodeGraph
class UOptimusNodeSubGraph
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t InputBindings[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputBindings[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNodeSubGraph, InputBindings) == 152, "Offset mismatch for UOptimusNodeSubGraph::InputBindings");
static_assert(offsetof(UOptimusNodeSubGraph, OutputBindings) == 168, "Offset mismatch for UOptimusNodeSubGraph::OutputBindings");

// /Script/OptimusCore.OptimusNodeSubGraphReferencer
// Kind: Class; super: Interface
class UOptimusNodeSubGraphReferencer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNode_AnimAttributeDataInterface
// Kind: Class; super: OptimusNode_DataInterface
class UOptimusNode_AnimAttributeDataInterface
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* DataInterfaceClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* DataInterfaceData; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusNode_AnimAttributeDataInterface, DataInterfaceClass) == 168, "Offset mismatch for UOptimusNode_AnimAttributeDataInterface::DataInterfaceClass");
static_assert(offsetof(UOptimusNode_AnimAttributeDataInterface, DataInterfaceData) == 176, "Offset mismatch for UOptimusNode_AnimAttributeDataInterface::DataInterfaceData");

// /Script/OptimusCore.OptimusNode_Comment
// Kind: Class; super: OptimusNode
class UOptimusNode_Comment
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t CommentColor[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::int32_t FontSize; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    FString Comment; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bBubbleVisible; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bColorBubble; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00B2
    std::uint8_t Size[0x1]; // 0x00B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_Comment, CommentColor) == 136, "Offset mismatch for UOptimusNode_Comment::CommentColor");
static_assert(offsetof(UOptimusNode_Comment, FontSize) == 152, "Offset mismatch for UOptimusNode_Comment::FontSize");
static_assert(offsetof(UOptimusNode_Comment, Comment) == 160, "Offset mismatch for UOptimusNode_Comment::Comment");
static_assert(offsetof(UOptimusNode_Comment, bBubbleVisible) == 176, "Offset mismatch for UOptimusNode_Comment::bBubbleVisible");
static_assert(offsetof(UOptimusNode_Comment, bColorBubble) == 177, "Offset mismatch for UOptimusNode_Comment::bColorBubble");
static_assert(offsetof(UOptimusNode_Comment, Size) == 180, "Offset mismatch for UOptimusNode_Comment::Size");

// /Script/OptimusCore.OptimusNode_ComponentSource
// Kind: Class; super: OptimusNode
class UOptimusNode_ComponentSource
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Binding; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DuplicationInfo[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_ComponentSource, Binding) == 152, "Offset mismatch for UOptimusNode_ComponentSource::Binding");
static_assert(offsetof(UOptimusNode_ComponentSource, DuplicationInfo) == 160, "Offset mismatch for UOptimusNode_ComponentSource::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_ComputeKernelBase
// Kind: Class; super: OptimusNode
class UOptimusNode_ComputeKernelBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GraphPosition[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> Pins; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExpandedPins[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t DiagnosticLevel; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusNode_ComputeKernelBase, DisplayName) == 48, "Offset mismatch for UOptimusNode_ComputeKernelBase::DisplayName");
static_assert(offsetof(UOptimusNode_ComputeKernelBase, GraphPosition) == 64, "Offset mismatch for UOptimusNode_ComputeKernelBase::GraphPosition");
static_assert(offsetof(UOptimusNode_ComputeKernelBase, Pins) == 80, "Offset mismatch for UOptimusNode_ComputeKernelBase::Pins");
static_assert(offsetof(UOptimusNode_ComputeKernelBase, ExpandedPins) == 96, "Offset mismatch for UOptimusNode_ComputeKernelBase::ExpandedPins");
static_assert(offsetof(UOptimusNode_ComputeKernelBase, DiagnosticLevel) == 112, "Offset mismatch for UOptimusNode_ComputeKernelBase::DiagnosticLevel");

// /Script/OptimusCore.OptimusNode_ComputeKernelFunction
// Kind: Class; super: OptimusNode_ComputeKernelBase
class UOptimusNode_ComputeKernelFunction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GraphPosition[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> Pins; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExpandedPins[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t DiagnosticLevel; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusNode_ComputeKernelFunction, DisplayName) == 48, "Offset mismatch for UOptimusNode_ComputeKernelFunction::DisplayName");
static_assert(offsetof(UOptimusNode_ComputeKernelFunction, GraphPosition) == 64, "Offset mismatch for UOptimusNode_ComputeKernelFunction::GraphPosition");
static_assert(offsetof(UOptimusNode_ComputeKernelFunction, Pins) == 80, "Offset mismatch for UOptimusNode_ComputeKernelFunction::Pins");
static_assert(offsetof(UOptimusNode_ComputeKernelFunction, ExpandedPins) == 96, "Offset mismatch for UOptimusNode_ComputeKernelFunction::ExpandedPins");
static_assert(offsetof(UOptimusNode_ComputeKernelFunction, DiagnosticLevel) == 112, "Offset mismatch for UOptimusNode_ComputeKernelFunction::DiagnosticLevel");

// /Script/OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
// Kind: Class; super: Class
class UOptimusNode_ComputeKernelFunctionGeneratorClass
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t Category[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t KernelName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionDomain[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroupSize[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    TArray<void*> InputBindings; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputBindings; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    FString ShaderSource; // 0x01F0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, Category) == 416, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::Category");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, KernelName) == 420, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::KernelName");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, ExecutionDomain) == 424, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::ExecutionDomain");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, GroupSize) == 448, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::GroupSize");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, InputBindings) == 464, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::InputBindings");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, OutputBindings) == 480, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::OutputBindings");
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, ShaderSource) == 496, "Offset mismatch for UOptimusNode_ComputeKernelFunctionGeneratorClass::ShaderSource");

// /Script/OptimusCore.OptimusNode_ConstantValue
// Kind: Class; super: OptimusNode
class UOptimusNode_ConstantValue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GraphPosition[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> Pins; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExpandedPins[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t DiagnosticLevel; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusNode_ConstantValue, DisplayName) == 48, "Offset mismatch for UOptimusNode_ConstantValue::DisplayName");
static_assert(offsetof(UOptimusNode_ConstantValue, GraphPosition) == 64, "Offset mismatch for UOptimusNode_ConstantValue::GraphPosition");
static_assert(offsetof(UOptimusNode_ConstantValue, Pins) == 80, "Offset mismatch for UOptimusNode_ConstantValue::Pins");
static_assert(offsetof(UOptimusNode_ConstantValue, ExpandedPins) == 96, "Offset mismatch for UOptimusNode_ConstantValue::ExpandedPins");
static_assert(offsetof(UOptimusNode_ConstantValue, DiagnosticLevel) == 112, "Offset mismatch for UOptimusNode_ConstantValue::DiagnosticLevel");

// /Script/OptimusCore.OptimusNode_ConstantValueGeneratorClass
// Kind: Class; super: Class
class UOptimusNode_ConstantValueGeneratorClass
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t DataType[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_ConstantValueGeneratorClass, DataType) == 416, "Offset mismatch for UOptimusNode_ConstantValueGeneratorClass::DataType");

// /Script/OptimusCore.OptimusNode_CustomComputeKernel
// Kind: Class; super: OptimusNode_ComputeKernelBase
class UOptimusNode_CustomComputeKernel
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Category[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t KernelName[0x4]; // 0x00B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExecutionDomain[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroupSize[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    TArray<void*> Parameters; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputBindings; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputBindings; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputBindingArray[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputBindingArray[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    TArray<void*> SecondaryInputBindingGroups; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalSources; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShaderSource[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_CustomComputeKernel, Category) == 176, "Offset mismatch for UOptimusNode_CustomComputeKernel::Category");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, KernelName) == 180, "Offset mismatch for UOptimusNode_CustomComputeKernel::KernelName");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, ExecutionDomain) == 184, "Offset mismatch for UOptimusNode_CustomComputeKernel::ExecutionDomain");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, GroupSize) == 208, "Offset mismatch for UOptimusNode_CustomComputeKernel::GroupSize");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, Parameters) == 224, "Offset mismatch for UOptimusNode_CustomComputeKernel::Parameters");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, InputBindings) == 240, "Offset mismatch for UOptimusNode_CustomComputeKernel::InputBindings");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, OutputBindings) == 256, "Offset mismatch for UOptimusNode_CustomComputeKernel::OutputBindings");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, InputBindingArray) == 272, "Offset mismatch for UOptimusNode_CustomComputeKernel::InputBindingArray");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, OutputBindingArray) == 288, "Offset mismatch for UOptimusNode_CustomComputeKernel::OutputBindingArray");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, SecondaryInputBindingGroups) == 304, "Offset mismatch for UOptimusNode_CustomComputeKernel::SecondaryInputBindingGroups");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, AdditionalSources) == 320, "Offset mismatch for UOptimusNode_CustomComputeKernel::AdditionalSources");
static_assert(offsetof(UOptimusNode_CustomComputeKernel, ShaderSource) == 336, "Offset mismatch for UOptimusNode_CustomComputeKernel::ShaderSource");

// /Script/OptimusCore.OptimusNode_DataInterface
// Kind: Class; super: OptimusNode
class UOptimusNode_DataInterface
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* DataInterfaceClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* DataInterfaceData; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusNode_DataInterface, DataInterfaceClass) == 168, "Offset mismatch for UOptimusNode_DataInterface::DataInterfaceClass");
static_assert(offsetof(UOptimusNode_DataInterface, DataInterfaceData) == 176, "Offset mismatch for UOptimusNode_DataInterface::DataInterfaceData");

// /Script/OptimusCore.OptimusNode_FunctionReference
// Kind: Class; super: OptimusNode
class UOptimusNode_FunctionReference
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t FunctionGraphIdentifier[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> DefaultComponentPin; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ResolvedFunctionGraph; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TSoftObjectPtr<void> FunctionGraph; // 0x00C8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UOptimusNode_FunctionReference, FunctionGraphIdentifier) == 160, "Offset mismatch for UOptimusNode_FunctionReference::FunctionGraphIdentifier");
static_assert(offsetof(UOptimusNode_FunctionReference, DefaultComponentPin) == 184, "Offset mismatch for UOptimusNode_FunctionReference::DefaultComponentPin");
static_assert(offsetof(UOptimusNode_FunctionReference, ResolvedFunctionGraph) == 192, "Offset mismatch for UOptimusNode_FunctionReference::ResolvedFunctionGraph");
static_assert(offsetof(UOptimusNode_FunctionReference, FunctionGraph) == 200, "Offset mismatch for UOptimusNode_FunctionReference::FunctionGraph");

// /Script/OptimusCore.OptimusNode_GetResource
// Kind: Class; super: OptimusNode_ResourceAccessorBase
class UOptimusNode_GetResource
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> ResourceDesc; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WriteType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t DuplicationInfo[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_GetResource, ResourceDesc) == 168, "Offset mismatch for UOptimusNode_GetResource::ResourceDesc");
static_assert(offsetof(UOptimusNode_GetResource, WriteType) == 176, "Offset mismatch for UOptimusNode_GetResource::WriteType");
static_assert(offsetof(UOptimusNode_GetResource, DuplicationInfo) == 184, "Offset mismatch for UOptimusNode_GetResource::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_GetVariable
// Kind: Class; super: OptimusNode
class UOptimusNode_GetVariable
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TWeakObjectPtr<void> VariableDesc; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DuplicationInfo[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_GetVariable, VariableDesc) == 160, "Offset mismatch for UOptimusNode_GetVariable::VariableDesc");
static_assert(offsetof(UOptimusNode_GetVariable, DuplicationInfo) == 168, "Offset mismatch for UOptimusNode_GetVariable::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_GraphTerminal
// Kind: Class; super: OptimusNode
class UOptimusNode_GraphTerminal
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TerminalType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    TWeakObjectPtr<void> DefaultComponentPin; // 0x00AC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UOptimusNode_GraphTerminal, TerminalType) == 168, "Offset mismatch for UOptimusNode_GraphTerminal::TerminalType");
static_assert(offsetof(UOptimusNode_GraphTerminal, DefaultComponentPin) == 172, "Offset mismatch for UOptimusNode_GraphTerminal::DefaultComponentPin");

// /Script/OptimusCore.OptimusNode_LoopTerminal
// Kind: Class; super: OptimusNode
class UOptimusNode_LoopTerminal
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TerminalType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t LoopInfo[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    void* IndexPin; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* CountPin; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PinPairInfos; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusNode_LoopTerminal, TerminalType) == 176, "Offset mismatch for UOptimusNode_LoopTerminal::TerminalType");
static_assert(offsetof(UOptimusNode_LoopTerminal, LoopInfo) == 184, "Offset mismatch for UOptimusNode_LoopTerminal::LoopInfo");
static_assert(offsetof(UOptimusNode_LoopTerminal, IndexPin) == 208, "Offset mismatch for UOptimusNode_LoopTerminal::IndexPin");
static_assert(offsetof(UOptimusNode_LoopTerminal, CountPin) == 216, "Offset mismatch for UOptimusNode_LoopTerminal::CountPin");
static_assert(offsetof(UOptimusNode_LoopTerminal, PinPairInfos) == 224, "Offset mismatch for UOptimusNode_LoopTerminal::PinPairInfos");

// /Script/OptimusCore.OptimusNode_Resource
// Kind: Class; super: OptimusNode_ResourceAccessorBase
class UOptimusNode_Resource
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> ResourceDesc; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WriteType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t DuplicationInfo[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_Resource, ResourceDesc) == 168, "Offset mismatch for UOptimusNode_Resource::ResourceDesc");
static_assert(offsetof(UOptimusNode_Resource, WriteType) == 176, "Offset mismatch for UOptimusNode_Resource::WriteType");
static_assert(offsetof(UOptimusNode_Resource, DuplicationInfo) == 184, "Offset mismatch for UOptimusNode_Resource::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_ResourceAccessorBase
// Kind: Class; super: OptimusNode
class UOptimusNode_ResourceAccessorBase
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> ResourceDesc; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WriteType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t DuplicationInfo[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_ResourceAccessorBase, ResourceDesc) == 168, "Offset mismatch for UOptimusNode_ResourceAccessorBase::ResourceDesc");
static_assert(offsetof(UOptimusNode_ResourceAccessorBase, WriteType) == 176, "Offset mismatch for UOptimusNode_ResourceAccessorBase::WriteType");
static_assert(offsetof(UOptimusNode_ResourceAccessorBase, DuplicationInfo) == 184, "Offset mismatch for UOptimusNode_ResourceAccessorBase::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_SetResource
// Kind: Class; super: OptimusNode_ResourceAccessorBase
class UOptimusNode_SetResource
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> ResourceDesc; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t WriteType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t DuplicationInfo[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusNode_SetResource, ResourceDesc) == 168, "Offset mismatch for UOptimusNode_SetResource::ResourceDesc");
static_assert(offsetof(UOptimusNode_SetResource, WriteType) == 176, "Offset mismatch for UOptimusNode_SetResource::WriteType");
static_assert(offsetof(UOptimusNode_SetResource, DuplicationInfo) == 184, "Offset mismatch for UOptimusNode_SetResource::DuplicationInfo");

// /Script/OptimusCore.OptimusNode_SubGraphReference
// Kind: Class; super: OptimusNode
class UOptimusNode_SubGraphReference
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t SubGraphName[0x4]; // 0x00A0 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> DefaultComponentPin; // 0x00A4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UOptimusNode_SubGraphReference, SubGraphName) == 160, "Offset mismatch for UOptimusNode_SubGraphReference::SubGraphName");
static_assert(offsetof(UOptimusNode_SubGraphReference, DefaultComponentPin) == 164, "Offset mismatch for UOptimusNode_SubGraphReference::DefaultComponentPin");

// /Script/OptimusCore.OptimusNonCollapsibleNode
// Kind: Class; super: Interface
class UOptimusNonCollapsibleNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusNonCopyableNode
// Kind: Class; super: Interface
class UOptimusNonCopyableNode
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusOutputBufferWriter
// Kind: Class; super: Interface
class UOptimusOutputBufferWriter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusParameterBindingProvider
// Kind: Class; super: Interface
class UOptimusParameterBindingProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusPathResolver
// Kind: Class; super: Interface
class UOptimusPathResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusPersistentBufferDataInterface
// Kind: Class; super: OptimusRawBufferDataInterface
class UOptimusPersistentBufferDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    FName ResourceName; // 0x0088 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UOptimusPersistentBufferDataInterface, ResourceName) == 136, "Offset mismatch for UOptimusPersistentBufferDataInterface::ResourceName");

// /Script/OptimusCore.OptimusPersistentBufferDataProvider
// Kind: Class; super: OptimusRawBufferDataProvider
class UOptimusPersistentBufferDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusPersistentBufferProvider
// Kind: Class; super: Interface
class UOptimusPersistentBufferProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusPinMutabilityDefiner
// Kind: Class; super: Interface
class UOptimusPinMutabilityDefiner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusPropertyPinProvider
// Kind: Class; super: Interface
class UOptimusPropertyPinProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusRawBufferDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusRawBufferDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValueType[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t DataDomain[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    TWeakObjectPtr<void> ComponentSourceBinding; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DomainConstantIdentifier[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusRawBufferDataInterface, ValueType) == 40, "Offset mismatch for UOptimusRawBufferDataInterface::ValueType");
static_assert(offsetof(UOptimusRawBufferDataInterface, DataDomain) == 48, "Offset mismatch for UOptimusRawBufferDataInterface::DataDomain");
static_assert(offsetof(UOptimusRawBufferDataInterface, ComponentSourceBinding) == 112, "Offset mismatch for UOptimusRawBufferDataInterface::ComponentSourceBinding");
static_assert(offsetof(UOptimusRawBufferDataInterface, DomainConstantIdentifier) == 120, "Offset mismatch for UOptimusRawBufferDataInterface::DomainConstantIdentifier");

// /Script/OptimusCore.OptimusRawBufferDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusRawBufferDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusResourceContainer
// Kind: Class; super: Object
class UOptimusResourceContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Descriptions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusResourceContainer, Descriptions) == 40, "Offset mismatch for UOptimusResourceContainer::Descriptions");

// /Script/OptimusCore.OptimusResourceDescription
// Kind: Class; super: Object
class UOptimusResourceDescription
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ResourceName; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> ComponentBinding; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DataDomain[0x40]; // 0x0060 (Size: 0x40, Type: StructProperty)
    void* DataInterface; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusResourceDescription, ResourceName) == 40, "Offset mismatch for UOptimusResourceDescription::ResourceName");
static_assert(offsetof(UOptimusResourceDescription, DataType) == 48, "Offset mismatch for UOptimusResourceDescription::DataType");
static_assert(offsetof(UOptimusResourceDescription, ComponentBinding) == 88, "Offset mismatch for UOptimusResourceDescription::ComponentBinding");
static_assert(offsetof(UOptimusResourceDescription, DataDomain) == 96, "Offset mismatch for UOptimusResourceDescription::DataDomain");
static_assert(offsetof(UOptimusResourceDescription, DataInterface) == 160, "Offset mismatch for UOptimusResourceDescription::DataInterface");

// /Script/OptimusCore.OptimusSceneComponentDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSceneComponentDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSceneComponentDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSceneComponentDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSceneComponentSource
// Kind: Class; super: OptimusComponentSource
class UOptimusSceneComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSceneDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSceneDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSceneDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSceneDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusShaderTextProvider
// Kind: Class; super: Interface
class UOptimusShaderTextProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkeletalMeshComponentSource
// Kind: Class; super: OptimusSkinnedMeshComponentSource
class UOptimusSkeletalMeshComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkeletonDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkeletonDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkeletonDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkeletonDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinWeightsAsVertexMaskDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinWeightsAsVertexMaskDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName SkinWeightProfile; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> BoneNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ExpandTowardsRoot; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t ExpandTowardsLeaf; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDebugDrawIncludedBones; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t DebugDrawColor[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, SkinWeightProfile) == 40, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::SkinWeightProfile");
static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, BoneNames) == 48, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::BoneNames");
static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, ExpandTowardsRoot) == 64, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::ExpandTowardsRoot");
static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, ExpandTowardsLeaf) == 68, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::ExpandTowardsLeaf");
static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, bDebugDrawIncludedBones) == 72, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::bDebugDrawIncludedBones");
static_assert(offsetof(UOptimusSkinWeightsAsVertexMaskDataInterface, DebugDrawColor) == 76, "Offset mismatch for UOptimusSkinWeightsAsVertexMaskDataInterface::DebugDrawColor");

// /Script/OptimusCore.OptimusSkinWeightsAsVertexMaskDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkinWeightsAsVertexMaskDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshComponentSource
// Kind: Class; super: OptimusComponentSource
class UOptimusSkinnedMeshComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinnedMeshDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkinnedMeshDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshExecDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinnedMeshExecDataInterface
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Domain; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOptimusSkinnedMeshExecDataInterface, Domain) == 48, "Offset mismatch for UOptimusSkinnedMeshExecDataInterface::Domain");

// /Script/OptimusCore.OptimusSkinnedMeshReadDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinnedMeshReadDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshReadDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkinnedMeshReadDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinnedMeshVertexAttributeDataInterface
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AttributeName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    float DefaultValue; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOptimusSkinnedMeshVertexAttributeDataInterface, AttributeName) == 40, "Offset mismatch for UOptimusSkinnedMeshVertexAttributeDataInterface::AttributeName");
static_assert(offsetof(UOptimusSkinnedMeshVertexAttributeDataInterface, DefaultValue) == 44, "Offset mismatch for UOptimusSkinnedMeshVertexAttributeDataInterface::DefaultValue");

// /Script/OptimusCore.OptimusSkinnedMeshVertexAttributeDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkinnedMeshVertexAttributeDataProvider
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AttributeName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    float DefaultValue; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOptimusSkinnedMeshVertexAttributeDataProvider, AttributeName) == 56, "Offset mismatch for UOptimusSkinnedMeshVertexAttributeDataProvider::AttributeName");
static_assert(offsetof(UOptimusSkinnedMeshVertexAttributeDataProvider, DefaultValue) == 60, "Offset mismatch for UOptimusSkinnedMeshVertexAttributeDataProvider::DefaultValue");

// /Script/OptimusCore.OptimusSkinnedMeshWriteDataInterface
// Kind: Class; super: OptimusComputeDataInterface
class UOptimusSkinnedMeshWriteDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSkinnedMeshWriteDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusSkinnedMeshWriteDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusSource
// Kind: Class; super: ComputeSource
class UOptimusSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FString SourceText; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOptimusSource, SourceText) == 64, "Offset mismatch for UOptimusSource::SourceText");

// /Script/OptimusCore.OptimusTransientBufferDataInterface
// Kind: Class; super: OptimusRawBufferDataInterface
class UOptimusTransientBufferDataInterface
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bZeroInitForAtomicWrites; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOptimusTransientBufferDataInterface, bZeroInitForAtomicWrites) == 136, "Offset mismatch for UOptimusTransientBufferDataInterface::bZeroInitForAtomicWrites");

// /Script/OptimusCore.OptimusTransientBufferDataProvider
// Kind: Class; super: OptimusRawBufferDataProvider
class UOptimusTransientBufferDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusUnnamedNodePinProvider
// Kind: Class; super: Interface
class UOptimusUnnamedNodePinProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusValueContainer
// Kind: Class; super: Object
class UOptimusValueContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusValueContainerGeneratorClass
// Kind: Class; super: Class
class UOptimusValueContainerGeneratorClass
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t DataType[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOptimusValueContainerGeneratorClass, DataType) == 416, "Offset mismatch for UOptimusValueContainerGeneratorClass::DataType");

// /Script/OptimusCore.OptimusValueProvider
// Kind: Class; super: Interface
class UOptimusValueProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OptimusCore.OptimusVariableContainer
// Kind: Class; super: Object
class UOptimusVariableContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Descriptions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOptimusVariableContainer, Descriptions) == 40, "Offset mismatch for UOptimusVariableContainer::Descriptions");

// /Script/OptimusCore.OptimusVariableDescription
// Kind: Class; super: Object
class UOptimusVariableDescription
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Guid[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    FName VariableName; // 0x0038 (Size: 0x8, Type: NameProperty)
    std::uint8_t DataType[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultValueStruct[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedShaderValue[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    TArray<void*> ValueData; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    void* DefaultValue; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusVariableDescription, Guid) == 40, "Offset mismatch for UOptimusVariableDescription::Guid");
static_assert(offsetof(UOptimusVariableDescription, VariableName) == 56, "Offset mismatch for UOptimusVariableDescription::VariableName");
static_assert(offsetof(UOptimusVariableDescription, DataType) == 64, "Offset mismatch for UOptimusVariableDescription::DataType");
static_assert(offsetof(UOptimusVariableDescription, DefaultValueStruct) == 104, "Offset mismatch for UOptimusVariableDescription::DefaultValueStruct");
static_assert(offsetof(UOptimusVariableDescription, CachedShaderValue) == 120, "Offset mismatch for UOptimusVariableDescription::CachedShaderValue");
static_assert(offsetof(UOptimusVariableDescription, ValueData) == 152, "Offset mismatch for UOptimusVariableDescription::ValueData");
static_assert(offsetof(UOptimusVariableDescription, DefaultValue) == 168, "Offset mismatch for UOptimusVariableDescription::DefaultValue");
