/**
 * decamp dumper generated SDK
 * Package: /Script/FabricRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FabricRuntime.FabricConnectedInputWrapperInfo
// Kind: ScriptStruct; super: none
struct FFabricConnectedInputWrapperInfo
{
public:
    std::uint8_t bDirectlyConnected; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Wrapper; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutputNode[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ConnectedNodeOutput[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputNode[0xB0]; // 0x00E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CombinerNodeInput[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricConnectedInputWrapperInfo, bDirectlyConnected) == 0, "Offset mismatch for FFabricConnectedInputWrapperInfo::bDirectlyConnected");
static_assert(offsetof(FFabricConnectedInputWrapperInfo, Wrapper) == 8, "Offset mismatch for FFabricConnectedInputWrapperInfo::Wrapper");
static_assert(offsetof(FFabricConnectedInputWrapperInfo, OutputNode) == 16, "Offset mismatch for FFabricConnectedInputWrapperInfo::OutputNode");
static_assert(offsetof(FFabricConnectedInputWrapperInfo, ConnectedNodeOutput) == 192, "Offset mismatch for FFabricConnectedInputWrapperInfo::ConnectedNodeOutput");
static_assert(offsetof(FFabricConnectedInputWrapperInfo, InputNode) == 224, "Offset mismatch for FFabricConnectedInputWrapperInfo::InputNode");
static_assert(offsetof(FFabricConnectedInputWrapperInfo, CombinerNodeInput) == 400, "Offset mismatch for FFabricConnectedInputWrapperInfo::CombinerNodeInput");

// /Script/FabricRuntime.FabricLFOGenerator
// Kind: ScriptStruct; super: none
struct FFabricLFOGenerator
{
public:
    std::uint8_t WaveShape; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Minimum; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Shape; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::int32_t InitialSeed; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricLFOGenerator, WaveShape) == 0, "Offset mismatch for FFabricLFOGenerator::WaveShape");
static_assert(offsetof(FFabricLFOGenerator, Minimum) == 4, "Offset mismatch for FFabricLFOGenerator::Minimum");
static_assert(offsetof(FFabricLFOGenerator, Maximum) == 8, "Offset mismatch for FFabricLFOGenerator::Maximum");
static_assert(offsetof(FFabricLFOGenerator, Shape) == 12, "Offset mismatch for FFabricLFOGenerator::Shape");
static_assert(offsetof(FFabricLFOGenerator, InitialSeed) == 16, "Offset mismatch for FFabricLFOGenerator::InitialSeed");

// /Script/FabricRuntime.FabricLoadedUtilityPatches
// Kind: ScriptStruct; super: none
struct FFabricLoadedUtilityPatches
{
public:
    void* CombinerNode; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SwitcherNode; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SelectNode; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* AnalyzerNode; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UtilityNodeParams[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricLoadedUtilityPatches, CombinerNode) == 0, "Offset mismatch for FFabricLoadedUtilityPatches::CombinerNode");
static_assert(offsetof(FFabricLoadedUtilityPatches, SwitcherNode) == 8, "Offset mismatch for FFabricLoadedUtilityPatches::SwitcherNode");
static_assert(offsetof(FFabricLoadedUtilityPatches, SelectNode) == 16, "Offset mismatch for FFabricLoadedUtilityPatches::SelectNode");
static_assert(offsetof(FFabricLoadedUtilityPatches, AnalyzerNode) == 24, "Offset mismatch for FFabricLoadedUtilityPatches::AnalyzerNode");
static_assert(offsetof(FFabricLoadedUtilityPatches, UtilityNodeParams) == 32, "Offset mismatch for FFabricLoadedUtilityPatches::UtilityNodeParams");

// /Script/FabricRuntime.FabricMeshInstanceReference
// Kind: ScriptStruct; super: none
struct FFabricMeshInstanceReference
{
public:
    std::uint8_t MeshReference[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TArray<void*> InstanceTransforms; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricMeshInstanceReference, MeshReference) == 0, "Offset mismatch for FFabricMeshInstanceReference::MeshReference");
static_assert(offsetof(FFabricMeshInstanceReference, InstanceTransforms) == 56, "Offset mismatch for FFabricMeshInstanceReference::InstanceTransforms");

// /Script/FabricRuntime.FabricMeshProviderMeshReference
// Kind: ScriptStruct; super: none
struct FFabricMeshProviderMeshReference
{
public:
    void* Mesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Params[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMeshProviderMeshReference, Mesh) == 0, "Offset mismatch for FFabricMeshProviderMeshReference::Mesh");
static_assert(offsetof(FFabricMeshProviderMeshReference, Texture) == 8, "Offset mismatch for FFabricMeshProviderMeshReference::Texture");
static_assert(offsetof(FFabricMeshProviderMeshReference, Params) == 16, "Offset mismatch for FFabricMeshProviderMeshReference::Params");

// /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
// Kind: ScriptStruct; super: none
struct FFabricMeshProviderMeshReferenceParamInfo
{
public:
    std::uint8_t MaterialParameterInfo[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMeshProviderMeshReferenceParamInfo, MaterialParameterInfo) == 0, "Offset mismatch for FFabricMeshProviderMeshReferenceParamInfo::MaterialParameterInfo");

// /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
// Kind: ScriptStruct; super: FabricMeshProviderMeshReferenceParamInfo
struct FFabricMeshProviderMeshReferenceParamInfo_Color
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t Color[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMeshProviderMeshReferenceParamInfo_Color, Color) == 12, "Offset mismatch for FFabricMeshProviderMeshReferenceParamInfo_Color::Color");

// /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
// Kind: ScriptStruct; super: FabricMeshProviderMeshReferenceParamInfo
struct FFabricMeshProviderMeshReferenceParamInfo_Scalar
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float Scalar; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFabricMeshProviderMeshReferenceParamInfo_Scalar, Scalar) == 12, "Offset mismatch for FFabricMeshProviderMeshReferenceParamInfo_Scalar::Scalar");

// /Script/FabricRuntime.FabricMeshProviderMeshReferenceParams
// Kind: ScriptStruct; super: none
struct FFabricMeshProviderMeshReferenceParams
{
public:
    double UniformScale; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> ScalarParams; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorParams; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricMeshProviderMeshReferenceParams, UniformScale) == 0, "Offset mismatch for FFabricMeshProviderMeshReferenceParams::UniformScale");
static_assert(offsetof(FFabricMeshProviderMeshReferenceParams, ScalarParams) == 8, "Offset mismatch for FFabricMeshProviderMeshReferenceParams::ScalarParams");
static_assert(offsetof(FFabricMeshProviderMeshReferenceParams, ColorParams) == 24, "Offset mismatch for FFabricMeshProviderMeshReferenceParams::ColorParams");

// /Script/FabricRuntime.FabricMetaSoundConnectionBuilder
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundConnectionBuilder
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> MergeList; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricMetaSoundConnectionBuilder, MergeList) == 176, "Offset mismatch for FFabricMetaSoundConnectionBuilder::MergeList");

// /Script/FabricRuntime.FabricMetaSoundDirectInputInfo
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundDirectInputInfo
{
public:
    std::uint8_t MetaSoundInputName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t InputType; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFabricMetaSoundDirectInputInfo, MetaSoundInputName) == 0, "Offset mismatch for FFabricMetaSoundDirectInputInfo::MetaSoundInputName");
static_assert(offsetof(FFabricMetaSoundDirectInputInfo, InputType) == 4, "Offset mismatch for FFabricMetaSoundDirectInputInfo::InputType");

// /Script/FabricRuntime.FabricMetaSoundMergeNode
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundMergeNode
{
public:
    std::uint8_t CombinerNode[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMetaSoundMergeNode, CombinerNode) == 0, "Offset mismatch for FFabricMetaSoundMergeNode::CombinerNode");

// /Script/FabricRuntime.FabricMetaSoundNodeInfo
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundNodeInfo
{
public:
    std::uint8_t NodeHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t OutputConnectionHandle[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t InputConnectionHandle[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0030 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> InputNodeNamesToHandles; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t AnalyzerHandle[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    void* AnalyzerParameterPack; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnalyzerName[0x4]; // 0x0060 (Size: 0x4, Type: NameProperty)
    std::uint8_t SwitcherHandle[0x10]; // 0x0064 (Size: 0x10, Type: StructProperty)
    std::uint8_t SelectHandle[0x10]; // 0x0074 (Size: 0x10, Type: StructProperty)
    std::uint8_t NodeEnabledInput[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    FName AnalyzerNodeVisibleInput; // 0x0088 (Size: 0x8, Type: NameProperty)
    TArray<void*> AnalyzerOutputNames; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* PatchSpawnedFrom; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* ParameterPack; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFabricMetaSoundNodeInfo, NodeHandle) == 0, "Offset mismatch for FFabricMetaSoundNodeInfo::NodeHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, OutputConnectionHandle) == 16, "Offset mismatch for FFabricMetaSoundNodeInfo::OutputConnectionHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, InputConnectionHandle) == 32, "Offset mismatch for FFabricMetaSoundNodeInfo::InputConnectionHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, Name) == 48, "Offset mismatch for FFabricMetaSoundNodeInfo::Name");
static_assert(offsetof(FFabricMetaSoundNodeInfo, InputNodeNamesToHandles) == 56, "Offset mismatch for FFabricMetaSoundNodeInfo::InputNodeNamesToHandles");
static_assert(offsetof(FFabricMetaSoundNodeInfo, AnalyzerHandle) == 72, "Offset mismatch for FFabricMetaSoundNodeInfo::AnalyzerHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, AnalyzerParameterPack) == 88, "Offset mismatch for FFabricMetaSoundNodeInfo::AnalyzerParameterPack");
static_assert(offsetof(FFabricMetaSoundNodeInfo, AnalyzerName) == 96, "Offset mismatch for FFabricMetaSoundNodeInfo::AnalyzerName");
static_assert(offsetof(FFabricMetaSoundNodeInfo, SwitcherHandle) == 100, "Offset mismatch for FFabricMetaSoundNodeInfo::SwitcherHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, SelectHandle) == 116, "Offset mismatch for FFabricMetaSoundNodeInfo::SelectHandle");
static_assert(offsetof(FFabricMetaSoundNodeInfo, NodeEnabledInput) == 132, "Offset mismatch for FFabricMetaSoundNodeInfo::NodeEnabledInput");
static_assert(offsetof(FFabricMetaSoundNodeInfo, AnalyzerNodeVisibleInput) == 136, "Offset mismatch for FFabricMetaSoundNodeInfo::AnalyzerNodeVisibleInput");
static_assert(offsetof(FFabricMetaSoundNodeInfo, AnalyzerOutputNames) == 144, "Offset mismatch for FFabricMetaSoundNodeInfo::AnalyzerOutputNames");
static_assert(offsetof(FFabricMetaSoundNodeInfo, PatchSpawnedFrom) == 160, "Offset mismatch for FFabricMetaSoundNodeInfo::PatchSpawnedFrom");
static_assert(offsetof(FFabricMetaSoundNodeInfo, ParameterPack) == 168, "Offset mismatch for FFabricMetaSoundNodeInfo::ParameterPack");

// /Script/FabricRuntime.FabricMetaSoundNodePool
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundNodePool
{
public:
    std::int32_t NumberAdded; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> FreeNodes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* PatchSpawnedFrom; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFabricMetaSoundNodePool, NumberAdded) == 0, "Offset mismatch for FFabricMetaSoundNodePool::NumberAdded");
static_assert(offsetof(FFabricMetaSoundNodePool, FreeNodes) == 8, "Offset mismatch for FFabricMetaSoundNodePool::FreeNodes");
static_assert(offsetof(FFabricMetaSoundNodePool, PatchSpawnedFrom) == 24, "Offset mismatch for FFabricMetaSoundNodePool::PatchSpawnedFrom");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapperBinding
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundPatchWrapperBinding
{
public:
    std::uint8_t FriendlyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAllowOnDedicatedServer; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t PeakTamer[0x24]; // 0x0008 (Size: 0x24, Type: StructProperty)
    std::uint8_t MetaSoundNodeName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    TArray<void*> Signals; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bBoundToWatchEvents; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, FriendlyName) == 0, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::FriendlyName");
static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, bAllowOnDedicatedServer) == 4, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::bAllowOnDedicatedServer");
static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, PeakTamer) == 8, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::PeakTamer");
static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, MetaSoundNodeName) == 44, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::MetaSoundNodeName");
static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, Signals) == 48, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::Signals");
static_assert(offsetof(FFabricMetaSoundPatchWrapperBinding, bBoundToWatchEvents) == 64, "Offset mismatch for FFabricMetaSoundPatchWrapperBinding::bBoundToWatchEvents");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundPatchWrapperPeakTamer
{
public:
    std::uint8_t bUseGameplaySmoothing; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSortSignals; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t MaxSignalsToTame; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapperPeakTamer, bUseGameplaySmoothing) == 0, "Offset mismatch for FFabricMetaSoundPatchWrapperPeakTamer::bUseGameplaySmoothing");
static_assert(offsetof(FFabricMetaSoundPatchWrapperPeakTamer, bSortSignals) == 1, "Offset mismatch for FFabricMetaSoundPatchWrapperPeakTamer::bSortSignals");
static_assert(offsetof(FFabricMetaSoundPatchWrapperPeakTamer, MaxSignalsToTame) == 4, "Offset mismatch for FFabricMetaSoundPatchWrapperPeakTamer::MaxSignalsToTame");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundPatchWrapperWetDryOutputBinding
{
public:
    std::uint8_t WetOutputSignalBinding[0x50]; // 0x0000 (Size: 0x50, Type: StructProperty)
    std::uint8_t DryOutputSignalBinding[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapperWetDryOutputBinding, WetOutputSignalBinding) == 0, "Offset mismatch for FFabricMetaSoundPatchWrapperWetDryOutputBinding::WetOutputSignalBinding");
static_assert(offsetof(FFabricMetaSoundPatchWrapperWetDryOutputBinding, DryOutputSignalBinding) == 80, "Offset mismatch for FFabricMetaSoundPatchWrapperWetDryOutputBinding::DryOutputSignalBinding");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
// Kind: ScriptStruct; super: FabricMetaSoundPatchWrapper_PerPlatformInputTuning
struct FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bDefaultValue; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TMap<void*, void*> PerPlatformTuning; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning, bDefaultValue) == 8, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning::bDefaultValue");
static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning, PerPlatformTuning) == 16, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformBoolInputTuning::PerPlatformTuning");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
// Kind: ScriptStruct; super: FabricMetaSoundPatchWrapper_PerPlatformInputTuning
struct FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float DefaultValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TMap<void*, void*> PerPlatformTuning; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning, DefaultValue) == 8, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning::DefaultValue");
static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning, PerPlatformTuning) == 16, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformFloatInputTuning::PerPlatformTuning");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformInputTuning
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundPatchWrapper_PerPlatformInputTuning
{
public:
    std::uint8_t NodeInputName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseDefaultValues; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformInputTuning, NodeInputName) == 0, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformInputTuning::NodeInputName");
static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformInputTuning, bUseDefaultValues) == 4, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformInputTuning::bUseDefaultValues");

// /Script/FabricRuntime.FabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
// Kind: ScriptStruct; super: FabricMetaSoundPatchWrapper_PerPlatformInputTuning
struct FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t DefaultValue; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TMap<void*, void*> PerPlatformTuning; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning, DefaultValue) == 8, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning::DefaultValue");
static_assert(offsetof(FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning, PerPlatformTuning) == 16, "Offset mismatch for FFabricMetaSoundPatchWrapper_PerPlatformIntInputTuning::PerPlatformTuning");

// /Script/FabricRuntime.FabricMetaSoundRuntimeInputInfo
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundRuntimeInputInfo
{
public:
    std::uint8_t InputInfo[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t InputType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FabricKnobType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    std::uint8_t DataType[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    FName MetaSoundInputNodeName; // 0x0020 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0028
    void* MetaSoundUserOption; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0048
    std::uint8_t UserOptionConverterNode[0xB0]; // 0x0050 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InputBuilder[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, InputInfo) == 0, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::InputInfo");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, InputType) == 24, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::InputType");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, FabricKnobType) == 25, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::FabricKnobType");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, DataType) == 28, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::DataType");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, MetaSoundInputNodeName) == 32, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::MetaSoundInputNodeName");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, MetaSoundUserOption) == 64, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::MetaSoundUserOption");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, UserOptionConverterNode) == 80, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::UserOptionConverterNode");
static_assert(offsetof(FFabricMetaSoundRuntimeInputInfo, InputBuilder) == 256, "Offset mismatch for FFabricMetaSoundRuntimeInputInfo::InputBuilder");

// /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
// Kind: ScriptStruct; super: FabricMetaSoundPatchWrapperBinding
struct FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t PrimitiveDataIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding, PrimitiveDataIndex) == 80, "Offset mismatch for FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding::PrimitiveDataIndex");

// /Script/FabricRuntime.FabricMetaSoundUserOptionInputInfo
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundUserOptionInputInfo
{
public:
    FString UserOption; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName MetaSoundInputName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFabricMetaSoundUserOptionInputInfo, UserOption) == 0, "Offset mismatch for FFabricMetaSoundUserOptionInputInfo::UserOption");
static_assert(offsetof(FFabricMetaSoundUserOptionInputInfo, MetaSoundInputName) == 16, "Offset mismatch for FFabricMetaSoundUserOptionInputInfo::MetaSoundInputName");

// /Script/FabricRuntime.FabricMetaSoundUtilityParams
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundUtilityParams
{
public:
    std::uint8_t SwitcherEnabledParam[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName SelectEnabledParam; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFabricMetaSoundUtilityParams, SwitcherEnabledParam) == 0, "Offset mismatch for FFabricMetaSoundUtilityParams::SwitcherEnabledParam");
static_assert(offsetof(FFabricMetaSoundUtilityParams, SelectEnabledParam) == 4, "Offset mismatch for FFabricMetaSoundUtilityParams::SelectEnabledParam");

// /Script/FabricRuntime.FabricMetaSoundUtilityPatches
// Kind: ScriptStruct; super: none
struct FFabricMetaSoundUtilityPatches
{
public:
    std::uint8_t CombinerNode[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SwitcherNode[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SelectNode[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnalyzerNode[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UtilityNodeParams[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricMetaSoundUtilityPatches, CombinerNode) == 0, "Offset mismatch for FFabricMetaSoundUtilityPatches::CombinerNode");
static_assert(offsetof(FFabricMetaSoundUtilityPatches, SwitcherNode) == 32, "Offset mismatch for FFabricMetaSoundUtilityPatches::SwitcherNode");
static_assert(offsetof(FFabricMetaSoundUtilityPatches, SelectNode) == 64, "Offset mismatch for FFabricMetaSoundUtilityPatches::SelectNode");
static_assert(offsetof(FFabricMetaSoundUtilityPatches, AnalyzerNode) == 96, "Offset mismatch for FFabricMetaSoundUtilityPatches::AnalyzerNode");
static_assert(offsetof(FFabricMetaSoundUtilityPatches, UtilityNodeParams) == 128, "Offset mismatch for FFabricMetaSoundUtilityPatches::UtilityNodeParams");

// /Script/FabricRuntime.FabricProgressionPreset
// Kind: ScriptStruct; super: TableRowBase
struct FFabricProgressionPreset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ProgressionName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Interval0; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Interval1; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Interval2; // 0x001A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Interval3; // 0x001B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFabricProgressionPreset, ProgressionName) == 8, "Offset mismatch for FFabricProgressionPreset::ProgressionName");
static_assert(offsetof(FFabricProgressionPreset, Interval0) == 24, "Offset mismatch for FFabricProgressionPreset::Interval0");
static_assert(offsetof(FFabricProgressionPreset, Interval1) == 25, "Offset mismatch for FFabricProgressionPreset::Interval1");
static_assert(offsetof(FFabricProgressionPreset, Interval2) == 26, "Offset mismatch for FFabricProgressionPreset::Interval2");
static_assert(offsetof(FFabricProgressionPreset, Interval3) == 27, "Offset mismatch for FFabricProgressionPreset::Interval3");

// /Script/FabricRuntime.FabricSequencerStepChangedInfo
// Kind: ScriptStruct; super: none
struct FFabricSequencerStepChangedInfo
{
public:
    std::int32_t Page; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Row; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Step; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Cell[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricSequencerStepChangedInfo, Page) == 0, "Offset mismatch for FFabricSequencerStepChangedInfo::Page");
static_assert(offsetof(FFabricSequencerStepChangedInfo, Row) == 4, "Offset mismatch for FFabricSequencerStepChangedInfo::Row");
static_assert(offsetof(FFabricSequencerStepChangedInfo, Step) == 8, "Offset mismatch for FFabricSequencerStepChangedInfo::Step");
static_assert(offsetof(FFabricSequencerStepChangedInfo, Cell) == 12, "Offset mismatch for FFabricSequencerStepChangedInfo::Cell");

// /Script/FabricRuntime.FabricSignificanceBasedUpdateBucket
// Kind: ScriptStruct; super: none
struct FFabricSignificanceBasedUpdateBucket
{
public:
    float MinDistanceFromPlayer; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceFromPlayer; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FramesPerUpdate; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxObjectsInBucket; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricSignificanceBasedUpdateBucket, MinDistanceFromPlayer) == 0, "Offset mismatch for FFabricSignificanceBasedUpdateBucket::MinDistanceFromPlayer");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucket, MaxDistanceFromPlayer) == 4, "Offset mismatch for FFabricSignificanceBasedUpdateBucket::MaxDistanceFromPlayer");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucket, FramesPerUpdate) == 8, "Offset mismatch for FFabricSignificanceBasedUpdateBucket::FramesPerUpdate");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucket, MaxObjectsInBucket) == 12, "Offset mismatch for FFabricSignificanceBasedUpdateBucket::MaxObjectsInBucket");

// /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
// Kind: ScriptStruct; super: none
struct FFabricSignificanceBasedUpdateBucketRuntime
{
public:
    float ActualMinSignificance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ActualMaxSignificance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t ActualMaxObjectsInBucket; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ActualFramesPerUpdate; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t TotalObjectsInBucketCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    TArray<void*> UpdateGroups; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, ActualMinSignificance) == 0, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::ActualMinSignificance");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, ActualMaxSignificance) == 4, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::ActualMaxSignificance");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, ActualMaxObjectsInBucket) == 8, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::ActualMaxObjectsInBucket");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, ActualFramesPerUpdate) == 12, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::ActualFramesPerUpdate");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, TotalObjectsInBucketCount) == 16, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::TotalObjectsInBucketCount");
static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntime, UpdateGroups) == 24, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntime::UpdateGroups");

// /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
// Kind: ScriptStruct; super: none
struct FFabricSignificanceBasedUpdateBucketRuntimeGroup
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ObjectsInGroup; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFabricSignificanceBasedUpdateBucketRuntimeGroup, ObjectsInGroup) == 8, "Offset mismatch for FFabricSignificanceBasedUpdateBucketRuntimeGroup::ObjectsInGroup");

// /Script/FabricRuntime.FabricStepGenerator
// Kind: ScriptStruct; super: none
struct FFabricStepGenerator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Values; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Blend; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFabricStepGenerator, Values) == 8, "Offset mismatch for FFabricStepGenerator::Values");
static_assert(offsetof(FFabricStepGenerator, Blend) == 24, "Offset mismatch for FFabricStepGenerator::Blend");

// /Script/FabricRuntime.FabricStepPagePacked
// Kind: ScriptStruct; super: none
struct FFabricStepPagePacked
{
public:
    TArray<void*> PackedTracks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PageNumber; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricStepPagePacked, PackedTracks) == 0, "Offset mismatch for FFabricStepPagePacked::PackedTracks");
static_assert(offsetof(FFabricStepPagePacked, PageNumber) == 16, "Offset mismatch for FFabricStepPagePacked::PageNumber");

// /Script/FabricRuntime.FabricStepSequencerComponentBaseInstanceData
// Kind: ScriptStruct; super: ActorComponentInstanceData
struct FFabricStepSequencerComponentBaseInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PackedStepTable[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricStepSequencerComponentBaseInstanceData, PackedStepTable) == 104, "Offset mismatch for FFabricStepSequencerComponentBaseInstanceData::PackedStepTable");

// /Script/FabricRuntime.FabricStepTablePacked
// Kind: ScriptStruct; super: none
struct FFabricStepTablePacked
{
public:
    TArray<void*> PackedPages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Notes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t StepSkipIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasRepDelayApplied; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFabricStepTablePacked, PackedPages) == 0, "Offset mismatch for FFabricStepTablePacked::PackedPages");
static_assert(offsetof(FFabricStepTablePacked, Notes) == 16, "Offset mismatch for FFabricStepTablePacked::Notes");
static_assert(offsetof(FFabricStepTablePacked, StepSkipIndex) == 32, "Offset mismatch for FFabricStepTablePacked::StepSkipIndex");
static_assert(offsetof(FFabricStepTablePacked, bHasRepDelayApplied) == 36, "Offset mismatch for FFabricStepTablePacked::bHasRepDelayApplied");

// /Script/FabricRuntime.FabricStepTrackPacked
// Kind: ScriptStruct; super: none
struct FFabricStepTrackPacked
{
public:
    TArray<void*> PackedEnabledSquares; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PackedContinuationSquares; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TrackIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricStepTrackPacked, PackedEnabledSquares) == 0, "Offset mismatch for FFabricStepTrackPacked::PackedEnabledSquares");
static_assert(offsetof(FFabricStepTrackPacked, PackedContinuationSquares) == 16, "Offset mismatch for FFabricStepTrackPacked::PackedContinuationSquares");
static_assert(offsetof(FFabricStepTrackPacked, TrackIndex) == 32, "Offset mismatch for FFabricStepTrackPacked::TrackIndex");

// /Script/FabricRuntime.FabricTextureProviderTexture
// Kind: ScriptStruct; super: none
struct FFabricTextureProviderTexture
{
public:
    void* Texture; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tint[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFabricTextureProviderTexture, Texture) == 0, "Offset mismatch for FFabricTextureProviderTexture::Texture");
static_assert(offsetof(FFabricTextureProviderTexture, Tint) == 8, "Offset mismatch for FFabricTextureProviderTexture::Tint");

// /Script/FabricRuntime.FabricTimelineSyncServerSongPosition
// Kind: ScriptStruct; super: none
struct FFabricTimelineSyncServerSongPosition
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float SecondsIncludingCountIn; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Tempo; // 0x000C (Size: 0x4, Type: FloatProperty)
    float BeatsIncludingCountIn; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float NetServerTimeWhenSent; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TimeSigDenominator; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFabricTimelineSyncServerSongPosition, Timestamp) == 0, "Offset mismatch for FFabricTimelineSyncServerSongPosition::Timestamp");
static_assert(offsetof(FFabricTimelineSyncServerSongPosition, SecondsIncludingCountIn) == 8, "Offset mismatch for FFabricTimelineSyncServerSongPosition::SecondsIncludingCountIn");
static_assert(offsetof(FFabricTimelineSyncServerSongPosition, Tempo) == 12, "Offset mismatch for FFabricTimelineSyncServerSongPosition::Tempo");
static_assert(offsetof(FFabricTimelineSyncServerSongPosition, BeatsIncludingCountIn) == 16, "Offset mismatch for FFabricTimelineSyncServerSongPosition::BeatsIncludingCountIn");
static_assert(offsetof(FFabricTimelineSyncServerSongPosition, NetServerTimeWhenSent) == 20, "Offset mismatch for FFabricTimelineSyncServerSongPosition::NetServerTimeWhenSent");
static_assert(offsetof(FFabricTimelineSyncServerSongPosition, TimeSigDenominator) == 24, "Offset mismatch for FFabricTimelineSyncServerSongPosition::TimeSigDenominator");

// /Script/FabricRuntime.FabricTransportRequestConfig
// Kind: ScriptStruct; super: none
struct FFabricTransportRequestConfig
{
public:
    std::uint8_t PlayStrategy; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayPriority; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    FName LockingAuthorityName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFabricTransportRequestConfig, PlayStrategy) == 0, "Offset mismatch for FFabricTransportRequestConfig::PlayStrategy");
static_assert(offsetof(FFabricTransportRequestConfig, PlayPriority) == 1, "Offset mismatch for FFabricTransportRequestConfig::PlayPriority");
static_assert(offsetof(FFabricTransportRequestConfig, LockingAuthorityName) == 4, "Offset mismatch for FFabricTransportRequestConfig::LockingAuthorityName");

// /Script/FabricRuntime.FabricVFXTopperDataEntry
// Kind: ScriptStruct; super: none
struct FFabricVFXTopperDataEntry
{
public:
    void* StaticMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialInstance; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* NiagaraSystem; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFabricVFXTopperDataEntry, StaticMesh) == 0, "Offset mismatch for FFabricVFXTopperDataEntry::StaticMesh");
static_assert(offsetof(FFabricVFXTopperDataEntry, MaterialInstance) == 8, "Offset mismatch for FFabricVFXTopperDataEntry::MaterialInstance");
static_assert(offsetof(FFabricVFXTopperDataEntry, NiagaraSystem) == 24, "Offset mismatch for FFabricVFXTopperDataEntry::NiagaraSystem");

// /Script/FabricRuntime.FabricValueSetterGenerator
// Kind: ScriptStruct; super: none
struct FFabricValueSetterGenerator
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::int32_t PhraseLengthInBars; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFabricValueSetterGenerator, PhraseLengthInBars) == 12, "Offset mismatch for FFabricValueSetterGenerator::PhraseLengthInBars");

// /Script/FabricRuntime.InteractionData
// Kind: ScriptStruct; super: none
struct FInteractionData
{
public:
    std::uint8_t InteractionState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> InteractableOwnerDevice; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FInteractionData, InteractionState) == 0, "Offset mismatch for FInteractionData::InteractionState");
static_assert(offsetof(FInteractionData, InteractableOwnerDevice) == 4, "Offset mismatch for FInteractionData::InteractableOwnerDevice");

// /Script/FabricRuntime.InteractionSplinePoints
// Kind: ScriptStruct; super: none
struct FInteractionSplinePoints
{
public:
    std::uint8_t SplineStartLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SplineStartForward[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SplineEndLocation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t SplineEndForward[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInteractionSplinePoints, SplineStartLocation) == 0, "Offset mismatch for FInteractionSplinePoints::SplineStartLocation");
static_assert(offsetof(FInteractionSplinePoints, SplineStartForward) == 24, "Offset mismatch for FInteractionSplinePoints::SplineStartForward");
static_assert(offsetof(FInteractionSplinePoints, SplineEndLocation) == 48, "Offset mismatch for FInteractionSplinePoints::SplineEndLocation");
static_assert(offsetof(FInteractionSplinePoints, SplineEndForward) == 72, "Offset mismatch for FInteractionSplinePoints::SplineEndForward");

// /Script/FabricRuntime.MetaSoundCombinerNodeHandle
// Kind: ScriptStruct; super: none
struct FMetaSoundCombinerNodeHandle
{
public:
    std::uint8_t NodeInfo[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CombinerInput1[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CombinerInput2[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CombinedOutput[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMetaSoundCombinerNodeHandle, NodeInfo) == 0, "Offset mismatch for FMetaSoundCombinerNodeHandle::NodeInfo");
static_assert(offsetof(FMetaSoundCombinerNodeHandle, CombinerInput1) == 176, "Offset mismatch for FMetaSoundCombinerNodeHandle::CombinerInput1");
static_assert(offsetof(FMetaSoundCombinerNodeHandle, CombinerInput2) == 208, "Offset mismatch for FMetaSoundCombinerNodeHandle::CombinerInput2");
static_assert(offsetof(FMetaSoundCombinerNodeHandle, CombinedOutput) == 240, "Offset mismatch for FMetaSoundCombinerNodeHandle::CombinedOutput");

// /Script/FabricRuntime.MidiFollowData
// Kind: ScriptStruct; super: none
struct FMidiFollowData
{
public:
    float BeatOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MSOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMidiFollowData, BeatOffset) == 0, "Offset mismatch for FMidiFollowData::BeatOffset");
static_assert(offsetof(FMidiFollowData, MSOffset) == 4, "Offset mismatch for FMidiFollowData::MSOffset");

// /Script/FabricRuntime.MusicalPosition
// Kind: ScriptStruct; super: none
struct FMusicalPosition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.TrackRow
// Kind: ScriptStruct; super: none
struct FTrackRow
{
public:
    TArray<void*> GridSquares; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTrackRow, GridSquares) == 0, "Offset mismatch for FTrackRow::GridSquares");

// /Script/FabricRuntime.FabricAnimatableButtonInterface
// Kind: Class; super: Interface
class UFabricAnimatableButtonInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricAudioBridgeComponent
// Kind: Class; super: ActorComponent
class UFabricAudioBridgeComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* FabricAudioPatchWrapperClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* FabricAudioPatchWrapperInstance; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> FabricMetaSoundManager; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricAudioBridgeComponent, FabricAudioPatchWrapperClass) == 216, "Offset mismatch for UFabricAudioBridgeComponent::FabricAudioPatchWrapperClass");
static_assert(offsetof(UFabricAudioBridgeComponent, FabricAudioPatchWrapperInstance) == 224, "Offset mismatch for UFabricAudioBridgeComponent::FabricAudioPatchWrapperInstance");
static_assert(offsetof(UFabricAudioBridgeComponent, FabricMetaSoundManager) == 232, "Offset mismatch for UFabricAudioBridgeComponent::FabricMetaSoundManager");

// /Script/FabricRuntime.FabricAudioGenerator
// Kind: Class; super: Interface
class UFabricAudioGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricAudioModifier
// Kind: Class; super: Interface
class UFabricAudioModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricAudioReceiver
// Kind: Class; super: Interface
class UFabricAudioReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricButtonBase
// Kind: Class; super: Actor
class UFabricButtonBase
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    FMulticastInlineDelegate ToggleStateChanged; // 0x0288 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    double OpenTimeSeconds; // 0x0298 (Size: 0x8, Type: DoubleProperty)
    double CloseTimeSeconds; // 0x02A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasToggle; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClickMethod; // 0x02A9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02AA
    void* InteractingController; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    FString ButtonId; // 0x02B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t ButtonLabel[0x10]; // 0x02C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ButtonDescription[0x10]; // 0x02D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameplayTags[0x20]; // 0x02E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHovered; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPressed; // 0x030A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ToggleState; // 0x030B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4]; // 0x030C
    void* WidgetViewModel; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricButtonBase, ToggleStateChanged) == 648, "Offset mismatch for UFabricButtonBase::ToggleStateChanged");
static_assert(offsetof(UFabricButtonBase, OpenTimeSeconds) == 664, "Offset mismatch for UFabricButtonBase::OpenTimeSeconds");
static_assert(offsetof(UFabricButtonBase, CloseTimeSeconds) == 672, "Offset mismatch for UFabricButtonBase::CloseTimeSeconds");
static_assert(offsetof(UFabricButtonBase, bHasToggle) == 680, "Offset mismatch for UFabricButtonBase::bHasToggle");
static_assert(offsetof(UFabricButtonBase, ClickMethod) == 681, "Offset mismatch for UFabricButtonBase::ClickMethod");
static_assert(offsetof(UFabricButtonBase, InteractingController) == 688, "Offset mismatch for UFabricButtonBase::InteractingController");
static_assert(offsetof(UFabricButtonBase, ButtonId) == 696, "Offset mismatch for UFabricButtonBase::ButtonId");
static_assert(offsetof(UFabricButtonBase, ButtonLabel) == 712, "Offset mismatch for UFabricButtonBase::ButtonLabel");
static_assert(offsetof(UFabricButtonBase, ButtonDescription) == 728, "Offset mismatch for UFabricButtonBase::ButtonDescription");
static_assert(offsetof(UFabricButtonBase, GameplayTags) == 744, "Offset mismatch for UFabricButtonBase::GameplayTags");
static_assert(offsetof(UFabricButtonBase, bEnabled) == 776, "Offset mismatch for UFabricButtonBase::bEnabled");
static_assert(offsetof(UFabricButtonBase, bHovered) == 777, "Offset mismatch for UFabricButtonBase::bHovered");
static_assert(offsetof(UFabricButtonBase, bPressed) == 778, "Offset mismatch for UFabricButtonBase::bPressed");
static_assert(offsetof(UFabricButtonBase, ToggleState) == 779, "Offset mismatch for UFabricButtonBase::ToggleState");
static_assert(offsetof(UFabricButtonBase, WidgetViewModel) == 784, "Offset mismatch for UFabricButtonBase::WidgetViewModel");

// /Script/FabricRuntime.FabricButtonComponentBase
// Kind: Class; super: StaticMeshComponent
class UFabricButtonComponentBase
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    FMulticastInlineDelegate ToggleStateChanged; // 0x06C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    double OpenTimeSeconds; // 0x06D0 (Size: 0x8, Type: DoubleProperty)
    double CloseTimeSeconds; // 0x06D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasToggle; // 0x06E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClickMethod; // 0x06E1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x06E2
    void* InteractingController; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    FString ButtonId; // 0x06F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t ButtonLabel[0x10]; // 0x0700 (Size: 0x10, Type: TextProperty)
    std::uint8_t ButtonDescription[0x10]; // 0x0710 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0720 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseScreenGrid; // 0x0740 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0741
    std::uint8_t ScreenGridPosition[0x10]; // 0x0748 (Size: 0x10, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0758 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHovered; // 0x0759 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPressed; // 0x075A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ToggleState; // 0x075B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x4]; // 0x075C
    void* WidgetViewModel; // 0x0760 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricButtonComponentBase, ToggleStateChanged) == 1728, "Offset mismatch for UFabricButtonComponentBase::ToggleStateChanged");
static_assert(offsetof(UFabricButtonComponentBase, OpenTimeSeconds) == 1744, "Offset mismatch for UFabricButtonComponentBase::OpenTimeSeconds");
static_assert(offsetof(UFabricButtonComponentBase, CloseTimeSeconds) == 1752, "Offset mismatch for UFabricButtonComponentBase::CloseTimeSeconds");
static_assert(offsetof(UFabricButtonComponentBase, bHasToggle) == 1760, "Offset mismatch for UFabricButtonComponentBase::bHasToggle");
static_assert(offsetof(UFabricButtonComponentBase, ClickMethod) == 1761, "Offset mismatch for UFabricButtonComponentBase::ClickMethod");
static_assert(offsetof(UFabricButtonComponentBase, InteractingController) == 1768, "Offset mismatch for UFabricButtonComponentBase::InteractingController");
static_assert(offsetof(UFabricButtonComponentBase, ButtonId) == 1776, "Offset mismatch for UFabricButtonComponentBase::ButtonId");
static_assert(offsetof(UFabricButtonComponentBase, ButtonLabel) == 1792, "Offset mismatch for UFabricButtonComponentBase::ButtonLabel");
static_assert(offsetof(UFabricButtonComponentBase, ButtonDescription) == 1808, "Offset mismatch for UFabricButtonComponentBase::ButtonDescription");
static_assert(offsetof(UFabricButtonComponentBase, GameplayTags) == 1824, "Offset mismatch for UFabricButtonComponentBase::GameplayTags");
static_assert(offsetof(UFabricButtonComponentBase, bUseScreenGrid) == 1856, "Offset mismatch for UFabricButtonComponentBase::bUseScreenGrid");
static_assert(offsetof(UFabricButtonComponentBase, ScreenGridPosition) == 1864, "Offset mismatch for UFabricButtonComponentBase::ScreenGridPosition");
static_assert(offsetof(UFabricButtonComponentBase, bEnabled) == 1880, "Offset mismatch for UFabricButtonComponentBase::bEnabled");
static_assert(offsetof(UFabricButtonComponentBase, bHovered) == 1881, "Offset mismatch for UFabricButtonComponentBase::bHovered");
static_assert(offsetof(UFabricButtonComponentBase, bPressed) == 1882, "Offset mismatch for UFabricButtonComponentBase::bPressed");
static_assert(offsetof(UFabricButtonComponentBase, ToggleState) == 1883, "Offset mismatch for UFabricButtonComponentBase::ToggleState");
static_assert(offsetof(UFabricButtonComponentBase, WidgetViewModel) == 1888, "Offset mismatch for UFabricButtonComponentBase::WidgetViewModel");

// /Script/FabricRuntime.FabricDevice
// Kind: Class; super: Interface
class UFabricDevice
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricDeviceCustomInteractionManager
// Kind: Class; super: FMPlayerMonitorComponent
class UFabricDeviceCustomInteractionManager
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    void* CustomInteractionComponentClass; // 0x0150 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricDeviceCustomInteractionManager, CustomInteractionComponentClass) == 336, "Offset mismatch for UFabricDeviceCustomInteractionManager::CustomInteractionComponentClass");

// /Script/FabricRuntime.FabricFloatGenerator
// Kind: Class; super: Interface
class UFabricFloatGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricFloatProviderBase
// Kind: Class; super: FabricModulatable
class UFabricFloatProviderBase
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    FMulticastInlineDelegate OnFloatChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTransitionFloatChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFloatProviderEnabledChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float CurrentFloat; // 0x0120 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> MusicClock; // 0x0124 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x012C
    void* AssociatedPatchWrapper; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    FString EnabledParam; // 0x0138 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAlwaysModulates; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBindBlueprintOnFloatChanged; // 0x0149 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEnabled; // 0x014A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModulatorValueChanged; // 0x014B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricFloatProviderBase, OnFloatChanged) == 240, "Offset mismatch for UFabricFloatProviderBase::OnFloatChanged");
static_assert(offsetof(UFabricFloatProviderBase, OnTransitionFloatChanged) == 256, "Offset mismatch for UFabricFloatProviderBase::OnTransitionFloatChanged");
static_assert(offsetof(UFabricFloatProviderBase, OnFloatProviderEnabledChanged) == 272, "Offset mismatch for UFabricFloatProviderBase::OnFloatProviderEnabledChanged");
static_assert(offsetof(UFabricFloatProviderBase, CurrentFloat) == 288, "Offset mismatch for UFabricFloatProviderBase::CurrentFloat");
static_assert(offsetof(UFabricFloatProviderBase, MusicClock) == 292, "Offset mismatch for UFabricFloatProviderBase::MusicClock");
static_assert(offsetof(UFabricFloatProviderBase, AssociatedPatchWrapper) == 304, "Offset mismatch for UFabricFloatProviderBase::AssociatedPatchWrapper");
static_assert(offsetof(UFabricFloatProviderBase, EnabledParam) == 312, "Offset mismatch for UFabricFloatProviderBase::EnabledParam");
static_assert(offsetof(UFabricFloatProviderBase, bAlwaysModulates) == 328, "Offset mismatch for UFabricFloatProviderBase::bAlwaysModulates");
static_assert(offsetof(UFabricFloatProviderBase, bBindBlueprintOnFloatChanged) == 329, "Offset mismatch for UFabricFloatProviderBase::bBindBlueprintOnFloatChanged");
static_assert(offsetof(UFabricFloatProviderBase, bIsEnabled) == 330, "Offset mismatch for UFabricFloatProviderBase::bIsEnabled");
static_assert(offsetof(UFabricFloatProviderBase, bModulatorValueChanged) == 331, "Offset mismatch for UFabricFloatProviderBase::bModulatorValueChanged");

// /Script/FabricRuntime.FabricFloatProviderStep
// Kind: Class; super: FabricFloatProviderBase
class UFabricFloatProviderStep
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    FString StepRateParam; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString ActiveStepsParam; // 0x0160 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0170
    FString StepParamBase; // 0x0180 (Size: 0x10, Type: StrProperty)
    std::int32_t MaxSteps; // 0x0190 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0194
    std::uint8_t RuntimeGenerator[0x20]; // 0x0198 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate OnFloatProviderStepInitialized; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFabricFloatProviderStep, StepRateParam) == 336, "Offset mismatch for UFabricFloatProviderStep::StepRateParam");
static_assert(offsetof(UFabricFloatProviderStep, ActiveStepsParam) == 352, "Offset mismatch for UFabricFloatProviderStep::ActiveStepsParam");
static_assert(offsetof(UFabricFloatProviderStep, StepParamBase) == 384, "Offset mismatch for UFabricFloatProviderStep::StepParamBase");
static_assert(offsetof(UFabricFloatProviderStep, MaxSteps) == 400, "Offset mismatch for UFabricFloatProviderStep::MaxSteps");
static_assert(offsetof(UFabricFloatProviderStep, RuntimeGenerator) == 408, "Offset mismatch for UFabricFloatProviderStep::RuntimeGenerator");
static_assert(offsetof(UFabricFloatProviderStep, OnFloatProviderStepInitialized) == 440, "Offset mismatch for UFabricFloatProviderStep::OnFloatProviderStepInitialized");

// /Script/FabricRuntime.FabricFloatProviderValueSetter
// Kind: Class; super: FabricFloatProviderBase
class UFabricFloatProviderValueSetter
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    FString ValueParam; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString TransitionTimingParam; // 0x0160 (Size: 0x10, Type: StrProperty)
    FString BlendParam; // 0x0170 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFabricFloatProviderValueSetter, ValueParam) == 336, "Offset mismatch for UFabricFloatProviderValueSetter::ValueParam");
static_assert(offsetof(UFabricFloatProviderValueSetter, TransitionTimingParam) == 352, "Offset mismatch for UFabricFloatProviderValueSetter::TransitionTimingParam");
static_assert(offsetof(UFabricFloatProviderValueSetter, BlendParam) == 368, "Offset mismatch for UFabricFloatProviderValueSetter::BlendParam");

// /Script/FabricRuntime.FabricFloatProviderWave
// Kind: Class; super: FabricFloatProviderBase
class UFabricFloatProviderWave
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    FString WaveShapeParam; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString FreeHzParam; // 0x0160 (Size: 0x10, Type: StrProperty)
    FString MinParam; // 0x0170 (Size: 0x10, Type: StrProperty)
    FString MaxParam; // 0x0180 (Size: 0x10, Type: StrProperty)
    FString BeatDurationParam; // 0x0190 (Size: 0x10, Type: StrProperty)
    FString BeatOffsetParam; // 0x01A0 (Size: 0x10, Type: StrProperty)
    FString ShapeParam; // 0x01B0 (Size: 0x10, Type: StrProperty)
    FString StyleParam; // 0x01C0 (Size: 0x10, Type: StrProperty)
    std::int32_t PhaseCPDIndex; // 0x01D0 (Size: 0x4, Type: IntProperty)
    std::int32_t ValueCPDIndex; // 0x01D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x80]; // 0x01D8
    TSet<void*> PreviewDisplayMeshes; // 0x0258 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFabricFloatProviderWave, WaveShapeParam) == 336, "Offset mismatch for UFabricFloatProviderWave::WaveShapeParam");
static_assert(offsetof(UFabricFloatProviderWave, FreeHzParam) == 352, "Offset mismatch for UFabricFloatProviderWave::FreeHzParam");
static_assert(offsetof(UFabricFloatProviderWave, MinParam) == 368, "Offset mismatch for UFabricFloatProviderWave::MinParam");
static_assert(offsetof(UFabricFloatProviderWave, MaxParam) == 384, "Offset mismatch for UFabricFloatProviderWave::MaxParam");
static_assert(offsetof(UFabricFloatProviderWave, BeatDurationParam) == 400, "Offset mismatch for UFabricFloatProviderWave::BeatDurationParam");
static_assert(offsetof(UFabricFloatProviderWave, BeatOffsetParam) == 416, "Offset mismatch for UFabricFloatProviderWave::BeatOffsetParam");
static_assert(offsetof(UFabricFloatProviderWave, ShapeParam) == 432, "Offset mismatch for UFabricFloatProviderWave::ShapeParam");
static_assert(offsetof(UFabricFloatProviderWave, StyleParam) == 448, "Offset mismatch for UFabricFloatProviderWave::StyleParam");
static_assert(offsetof(UFabricFloatProviderWave, PhaseCPDIndex) == 464, "Offset mismatch for UFabricFloatProviderWave::PhaseCPDIndex");
static_assert(offsetof(UFabricFloatProviderWave, ValueCPDIndex) == 468, "Offset mismatch for UFabricFloatProviderWave::ValueCPDIndex");
static_assert(offsetof(UFabricFloatProviderWave, PreviewDisplayMeshes) == 600, "Offset mismatch for UFabricFloatProviderWave::PreviewDisplayMeshes");

// /Script/FabricRuntime.FabricFloatReceiver
// Kind: Class; super: Interface
class UFabricFloatReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricGameFeatureAction_OverrideFabricInteractionTool
// Kind: Class; super: GameFeatureAction
class UFabricGameFeatureAction_OverrideFabricInteractionTool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> OverriddenPatchworkInteractionTool; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFabricGameFeatureAction_OverrideFabricInteractionTool, OverriddenPatchworkInteractionTool) == 40, "Offset mismatch for UFabricGameFeatureAction_OverrideFabricInteractionTool::OverriddenPatchworkInteractionTool");

// /Script/FabricRuntime.FabricGlobalRestrictionsWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UFabricGlobalRestrictionsWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t FabricInteractionToolRestrictionGameplayTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricGlobalRestrictionsWorldSubsystem, FabricInteractionToolRestrictionGameplayTags) == 56, "Offset mismatch for UFabricGlobalRestrictionsWorldSubsystem::FabricInteractionToolRestrictionGameplayTags");

// /Script/FabricRuntime.FabricHoldable
// Kind: Class; super: Interface
class UFabricHoldable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricIndicatorComponent
// Kind: Class; super: GameFrameworkComponent
class UFabricIndicatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnEnabledStateChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* FabricTooltipWidgetType; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TargetsChangedTag[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t HUDTagsToHide[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    void* IndicatorShowingInputContext; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::int32_t IndicatorShowingPriority; // 0x0108 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x010C
    void* ShowMoreAction; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricIndicatorComponent, OnEnabledStateChanged) == 192, "Offset mismatch for UFabricIndicatorComponent::OnEnabledStateChanged");
static_assert(offsetof(UFabricIndicatorComponent, FabricTooltipWidgetType) == 208, "Offset mismatch for UFabricIndicatorComponent::FabricTooltipWidgetType");
static_assert(offsetof(UFabricIndicatorComponent, TargetsChangedTag) == 216, "Offset mismatch for UFabricIndicatorComponent::TargetsChangedTag");
static_assert(offsetof(UFabricIndicatorComponent, HUDTagsToHide) == 224, "Offset mismatch for UFabricIndicatorComponent::HUDTagsToHide");
static_assert(offsetof(UFabricIndicatorComponent, IndicatorShowingInputContext) == 256, "Offset mismatch for UFabricIndicatorComponent::IndicatorShowingInputContext");
static_assert(offsetof(UFabricIndicatorComponent, IndicatorShowingPriority) == 264, "Offset mismatch for UFabricIndicatorComponent::IndicatorShowingPriority");
static_assert(offsetof(UFabricIndicatorComponent, ShowMoreAction) == 272, "Offset mismatch for UFabricIndicatorComponent::ShowMoreAction");

// /Script/FabricRuntime.FabricInteractable
// Kind: Class; super: Interface
class UFabricInteractable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricInteractableControllerComponent
// Kind: Class; super: ActorComponent
class UFabricInteractableControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnNoInteractablesHit; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* PlayerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FabricInteractionToolItemDefSoftPtr[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OverriddenFabricInteractionToolItemDefSoftPtr[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    void* FabricInteractionToolItemDef; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    float EnsurePlayerHasInteractionToolRetryDelay; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x012C
    std::uint8_t SoftFabricDeviceBaseClass[0x20]; // 0x0140 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t StreamingMusicGameplayTags[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricInteractableControllerComponent, OnNoInteractablesHit) == 200, "Offset mismatch for UFabricInteractableControllerComponent::OnNoInteractablesHit");
static_assert(offsetof(UFabricInteractableControllerComponent, PlayerController) == 216, "Offset mismatch for UFabricInteractableControllerComponent::PlayerController");
static_assert(offsetof(UFabricInteractableControllerComponent, FabricInteractionToolItemDefSoftPtr) == 224, "Offset mismatch for UFabricInteractableControllerComponent::FabricInteractionToolItemDefSoftPtr");
static_assert(offsetof(UFabricInteractableControllerComponent, OverriddenFabricInteractionToolItemDefSoftPtr) == 256, "Offset mismatch for UFabricInteractableControllerComponent::OverriddenFabricInteractionToolItemDefSoftPtr");
static_assert(offsetof(UFabricInteractableControllerComponent, FabricInteractionToolItemDef) == 288, "Offset mismatch for UFabricInteractableControllerComponent::FabricInteractionToolItemDef");
static_assert(offsetof(UFabricInteractableControllerComponent, EnsurePlayerHasInteractionToolRetryDelay) == 296, "Offset mismatch for UFabricInteractableControllerComponent::EnsurePlayerHasInteractionToolRetryDelay");
static_assert(offsetof(UFabricInteractableControllerComponent, SoftFabricDeviceBaseClass) == 320, "Offset mismatch for UFabricInteractableControllerComponent::SoftFabricDeviceBaseClass");
static_assert(offsetof(UFabricInteractableControllerComponent, StreamingMusicGameplayTags) == 352, "Offset mismatch for UFabricInteractableControllerComponent::StreamingMusicGameplayTags");

// /Script/FabricRuntime.FabricInteractablePlayspaceComponent
// Kind: Class; super: PlayspaceComponent
class UFabricInteractablePlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFabricInteractablePlayspaceComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFabricInteractablePlayspaceComponent::PrimaryComponentTick");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, ComponentTags) == 104, "Offset mismatch for UFabricInteractablePlayspaceComponent::ComponentTags");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, AssetUserData) == 120, "Offset mismatch for UFabricInteractablePlayspaceComponent::AssetUserData");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFabricInteractablePlayspaceComponent::UCSSerializationIndex");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, bNetAddressable) == 152, "Offset mismatch for UFabricInteractablePlayspaceComponent::bNetAddressable");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, bAutoActivate) == 154, "Offset mismatch for UFabricInteractablePlayspaceComponent::bAutoActivate");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, bIsEditorOnly) == 155, "Offset mismatch for UFabricInteractablePlayspaceComponent::bIsEditorOnly");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, CreationMethod) == 185, "Offset mismatch for UFabricInteractablePlayspaceComponent::CreationMethod");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, OnComponentActivated) == 186, "Offset mismatch for UFabricInteractablePlayspaceComponent::OnComponentActivated");
static_assert(offsetof(UFabricInteractablePlayspaceComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFabricInteractablePlayspaceComponent::OnComponentDeactivated");

// /Script/FabricRuntime.FabricInteractableTargetPayload
// Kind: Class; super: Object
class UFabricInteractableTargetPayload
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> TargetedActor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetedComponent; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricInteractableTargetPayload, TargetedActor) == 40, "Offset mismatch for UFabricInteractableTargetPayload::TargetedActor");
static_assert(offsetof(UFabricInteractableTargetPayload, TargetedComponent) == 48, "Offset mismatch for UFabricInteractableTargetPayload::TargetedComponent");

// /Script/FabricRuntime.FabricInteractionTool
// Kind: Class; super: FortWeaponRanged
class UFabricInteractionTool
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    FMulticastInlineDelegate OnInteractionStateChanged; // 0x2968 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCablesGrabbed; // 0x2978 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCablesDropped; // 0x2988 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x2998 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnZoomLevelChanged; // 0x29A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* FITSplineMeshComponentClass; // 0x29B8 (Size: 0x8, Type: ClassProperty)
    void* SplineComponent; // 0x29C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SplineMeshComponentArray; // 0x29C8 (Size: 0x10, Type: ArrayProperty)
    void* SplineMeshMaterialInstance; // 0x29D8 (Size: 0x8, Type: ObjectProperty)
    float MaxRange; // 0x29E0 (Size: 0x4, Type: FloatProperty)
    float MinDragAndDropTriggerTime; // 0x29E4 (Size: 0x4, Type: FloatProperty)
    float FiringRate; // 0x29E8 (Size: 0x4, Type: FloatProperty)
    float WipeAnim; // 0x29EC (Size: 0x4, Type: FloatProperty)
    float UseWipe; // 0x29F0 (Size: 0x4, Type: FloatProperty)
    std::int32_t SplineMeshMaterialIndex; // 0x29F4 (Size: 0x4, Type: IntProperty)
    std::int32_t CPDUVScale; // 0x29F8 (Size: 0x4, Type: IntProperty)
    std::int32_t CPDUVPosition; // 0x29FC (Size: 0x4, Type: IntProperty)
    std::int32_t CPDWipeAnim; // 0x2A00 (Size: 0x4, Type: IntProperty)
    std::int32_t CPDUseWipe; // 0x2A04 (Size: 0x4, Type: IntProperty)
    std::int32_t CPDIndex_DeviceType; // 0x2A08 (Size: 0x4, Type: IntProperty)
    float SplineSectionLength; // 0x2A0C (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxSplineSpawnedInAFrame; // 0x2A10 (Size: 0x4, Type: IntProperty)
    float DeviceTypeValue; // 0x2A14 (Size: 0x4, Type: FloatProperty)
    float FITTargetingAudioPitchMultiplier; // 0x2A18 (Size: 0x4, Type: FloatProperty)
    float FITZoomAudioPitchMultiplier; // 0x2A1C (Size: 0x4, Type: FloatProperty)
    float SplineEndForwardMultiplier; // 0x2A20 (Size: 0x4, Type: FloatProperty)
    float SplineStartForwardMultiplier; // 0x2A24 (Size: 0x4, Type: FloatProperty)
    void* HoveredInteractable; // 0x2A28 (Size: 0x8, Type: ObjectProperty)
    void* HoveredInteractableHitComponent; // 0x2A30 (Size: 0x8, Type: ObjectProperty)
    void* PressedInteractable; // 0x2A38 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LastPressedInteractable; // 0x2A40 (Size: 0x8, Type: WeakObjectProperty)
    void* PressedInteractableHitComponent; // 0x2A48 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> InteractableOwnerDevice; // 0x2A50 (Size: 0x8, Type: WeakObjectProperty)
    float AccumulatedDragAndDropTriggerTime; // 0x2A58 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ServerInteractionData[0x1D]; // 0x2A5C (Size: 0x1D, Type: StructProperty)
    std::uint8_t bServerTriggerPressed; // 0x2A79 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x2A7A
    std::uint8_t bServerIsHoldingCable; // 0x2A7B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x14]; // 0x2A7C
    std::uint8_t ServerSplinePoints[0x60]; // 0x2A90 (Size: 0x60, Type: StructProperty)
    float ServerContinuousInteractableValue; // 0x2AF0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFabricInteractionTool, OnInteractionStateChanged) == 10600, "Offset mismatch for UFabricInteractionTool::OnInteractionStateChanged");
static_assert(offsetof(UFabricInteractionTool, OnCablesGrabbed) == 10616, "Offset mismatch for UFabricInteractionTool::OnCablesGrabbed");
static_assert(offsetof(UFabricInteractionTool, OnCablesDropped) == 10632, "Offset mismatch for UFabricInteractionTool::OnCablesDropped");
static_assert(offsetof(UFabricInteractionTool, OnMetasoundGeneratorCrossfadeStarted) == 10648, "Offset mismatch for UFabricInteractionTool::OnMetasoundGeneratorCrossfadeStarted");
static_assert(offsetof(UFabricInteractionTool, OnZoomLevelChanged) == 10664, "Offset mismatch for UFabricInteractionTool::OnZoomLevelChanged");
static_assert(offsetof(UFabricInteractionTool, FITSplineMeshComponentClass) == 10680, "Offset mismatch for UFabricInteractionTool::FITSplineMeshComponentClass");
static_assert(offsetof(UFabricInteractionTool, SplineComponent) == 10688, "Offset mismatch for UFabricInteractionTool::SplineComponent");
static_assert(offsetof(UFabricInteractionTool, SplineMeshComponentArray) == 10696, "Offset mismatch for UFabricInteractionTool::SplineMeshComponentArray");
static_assert(offsetof(UFabricInteractionTool, SplineMeshMaterialInstance) == 10712, "Offset mismatch for UFabricInteractionTool::SplineMeshMaterialInstance");
static_assert(offsetof(UFabricInteractionTool, MaxRange) == 10720, "Offset mismatch for UFabricInteractionTool::MaxRange");
static_assert(offsetof(UFabricInteractionTool, MinDragAndDropTriggerTime) == 10724, "Offset mismatch for UFabricInteractionTool::MinDragAndDropTriggerTime");
static_assert(offsetof(UFabricInteractionTool, FiringRate) == 10728, "Offset mismatch for UFabricInteractionTool::FiringRate");
static_assert(offsetof(UFabricInteractionTool, WipeAnim) == 10732, "Offset mismatch for UFabricInteractionTool::WipeAnim");
static_assert(offsetof(UFabricInteractionTool, UseWipe) == 10736, "Offset mismatch for UFabricInteractionTool::UseWipe");
static_assert(offsetof(UFabricInteractionTool, SplineMeshMaterialIndex) == 10740, "Offset mismatch for UFabricInteractionTool::SplineMeshMaterialIndex");
static_assert(offsetof(UFabricInteractionTool, CPDUVScale) == 10744, "Offset mismatch for UFabricInteractionTool::CPDUVScale");
static_assert(offsetof(UFabricInteractionTool, CPDUVPosition) == 10748, "Offset mismatch for UFabricInteractionTool::CPDUVPosition");
static_assert(offsetof(UFabricInteractionTool, CPDWipeAnim) == 10752, "Offset mismatch for UFabricInteractionTool::CPDWipeAnim");
static_assert(offsetof(UFabricInteractionTool, CPDUseWipe) == 10756, "Offset mismatch for UFabricInteractionTool::CPDUseWipe");
static_assert(offsetof(UFabricInteractionTool, CPDIndex_DeviceType) == 10760, "Offset mismatch for UFabricInteractionTool::CPDIndex_DeviceType");
static_assert(offsetof(UFabricInteractionTool, SplineSectionLength) == 10764, "Offset mismatch for UFabricInteractionTool::SplineSectionLength");
static_assert(offsetof(UFabricInteractionTool, MaxSplineSpawnedInAFrame) == 10768, "Offset mismatch for UFabricInteractionTool::MaxSplineSpawnedInAFrame");
static_assert(offsetof(UFabricInteractionTool, DeviceTypeValue) == 10772, "Offset mismatch for UFabricInteractionTool::DeviceTypeValue");
static_assert(offsetof(UFabricInteractionTool, FITTargetingAudioPitchMultiplier) == 10776, "Offset mismatch for UFabricInteractionTool::FITTargetingAudioPitchMultiplier");
static_assert(offsetof(UFabricInteractionTool, FITZoomAudioPitchMultiplier) == 10780, "Offset mismatch for UFabricInteractionTool::FITZoomAudioPitchMultiplier");
static_assert(offsetof(UFabricInteractionTool, SplineEndForwardMultiplier) == 10784, "Offset mismatch for UFabricInteractionTool::SplineEndForwardMultiplier");
static_assert(offsetof(UFabricInteractionTool, SplineStartForwardMultiplier) == 10788, "Offset mismatch for UFabricInteractionTool::SplineStartForwardMultiplier");
static_assert(offsetof(UFabricInteractionTool, HoveredInteractable) == 10792, "Offset mismatch for UFabricInteractionTool::HoveredInteractable");
static_assert(offsetof(UFabricInteractionTool, HoveredInteractableHitComponent) == 10800, "Offset mismatch for UFabricInteractionTool::HoveredInteractableHitComponent");
static_assert(offsetof(UFabricInteractionTool, PressedInteractable) == 10808, "Offset mismatch for UFabricInteractionTool::PressedInteractable");
static_assert(offsetof(UFabricInteractionTool, LastPressedInteractable) == 10816, "Offset mismatch for UFabricInteractionTool::LastPressedInteractable");
static_assert(offsetof(UFabricInteractionTool, PressedInteractableHitComponent) == 10824, "Offset mismatch for UFabricInteractionTool::PressedInteractableHitComponent");
static_assert(offsetof(UFabricInteractionTool, InteractableOwnerDevice) == 10832, "Offset mismatch for UFabricInteractionTool::InteractableOwnerDevice");
static_assert(offsetof(UFabricInteractionTool, AccumulatedDragAndDropTriggerTime) == 10840, "Offset mismatch for UFabricInteractionTool::AccumulatedDragAndDropTriggerTime");
static_assert(offsetof(UFabricInteractionTool, ServerInteractionData) == 10844, "Offset mismatch for UFabricInteractionTool::ServerInteractionData");
static_assert(offsetof(UFabricInteractionTool, bServerTriggerPressed) == 10873, "Offset mismatch for UFabricInteractionTool::bServerTriggerPressed");
static_assert(offsetof(UFabricInteractionTool, bServerIsHoldingCable) == 10875, "Offset mismatch for UFabricInteractionTool::bServerIsHoldingCable");
static_assert(offsetof(UFabricInteractionTool, ServerSplinePoints) == 10896, "Offset mismatch for UFabricInteractionTool::ServerSplinePoints");
static_assert(offsetof(UFabricInteractionTool, ServerContinuousInteractableValue) == 10992, "Offset mismatch for UFabricInteractionTool::ServerContinuousInteractableValue");

// /Script/FabricRuntime.FabricIslandSettingsInitializedInterface
// Kind: Class; super: Interface
class UFabricIslandSettingsInitializedInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricIslandSettingsWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UFabricIslandSettingsWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t UseMemoryMode[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    float CheckMinigameSettingsIntervalSeconds; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFabricIslandSettingsWorldSubsystem, UseMemoryMode) == 56, "Offset mismatch for UFabricIslandSettingsWorldSubsystem::UseMemoryMode");
static_assert(offsetof(UFabricIslandSettingsWorldSubsystem, CheckMinigameSettingsIntervalSeconds) == 96, "Offset mismatch for UFabricIslandSettingsWorldSubsystem::CheckMinigameSettingsIntervalSeconds");

// /Script/FabricRuntime.FabricMIDIPlayerPatchWrapper
// Kind: Class; super: FabricNoteReceivedPatchWrapper
class UFabricMIDIPlayerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    std::uint8_t MidiTrackIndexUserOptionName[0x4]; // 0x0500 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnableMidiOutputName[0x4]; // 0x0504 (Size: 0x4, Type: NameProperty)
    FName TempoMapMidiOutName; // 0x0508 (Size: 0x8, Type: NameProperty)
    void* CurrentMidiFile; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    FName MidiTrackName; // 0x0518 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFabricMIDIPlayerPatchWrapper, MidiTrackIndexUserOptionName) == 1280, "Offset mismatch for UFabricMIDIPlayerPatchWrapper::MidiTrackIndexUserOptionName");
static_assert(offsetof(UFabricMIDIPlayerPatchWrapper, EnableMidiOutputName) == 1284, "Offset mismatch for UFabricMIDIPlayerPatchWrapper::EnableMidiOutputName");
static_assert(offsetof(UFabricMIDIPlayerPatchWrapper, TempoMapMidiOutName) == 1288, "Offset mismatch for UFabricMIDIPlayerPatchWrapper::TempoMapMidiOutName");
static_assert(offsetof(UFabricMIDIPlayerPatchWrapper, CurrentMidiFile) == 1296, "Offset mismatch for UFabricMIDIPlayerPatchWrapper::CurrentMidiFile");
static_assert(offsetof(UFabricMIDIPlayerPatchWrapper, MidiTrackName) == 1304, "Offset mismatch for UFabricMIDIPlayerPatchWrapper::MidiTrackName");

// /Script/FabricRuntime.FabricMeshGenerator
// Kind: Class; super: Interface
class UFabricMeshGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricMeshModifier
// Kind: Class; super: Interface
class UFabricMeshModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricMeshModifierBase
// Kind: Class; super: FabricModulatable
class UFabricMeshModifierBase
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t CloneBehavior; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFabricMeshModifierBase, CloneBehavior) == 232, "Offset mismatch for UFabricMeshModifierBase::CloneBehavior");

// /Script/FabricRuntime.FabricMeshModifierClone
// Kind: Class; super: FabricMeshModifierBase
class UFabricMeshModifierClone
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::int32_t CloneCount; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00F4
    std::uint8_t PerCloneTranslation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCentered; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricMeshModifierClone, CloneCount) == 240, "Offset mismatch for UFabricMeshModifierClone::CloneCount");
static_assert(offsetof(UFabricMeshModifierClone, PerCloneTranslation) == 248, "Offset mismatch for UFabricMeshModifierClone::PerCloneTranslation");
static_assert(offsetof(UFabricMeshModifierClone, bCentered) == 272, "Offset mismatch for UFabricMeshModifierClone::bCentered");

// /Script/FabricRuntime.FabricMeshModifierRandomize
// Kind: Class; super: FabricMeshModifierBase
class UFabricMeshModifierRandomize
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    float LocationRandLimit; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float RotationRandLimit; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float ScaleRandLimit; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    std::uint8_t LocationRandRange[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationRandRange[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScaleRandRangeAdditive[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    float ScaleRandRangeRangeBase; // 0x0148 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUniformScale; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x014D
    std::uint8_t RandomStream[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricMeshModifierRandomize, LocationRandLimit) == 240, "Offset mismatch for UFabricMeshModifierRandomize::LocationRandLimit");
static_assert(offsetof(UFabricMeshModifierRandomize, RotationRandLimit) == 244, "Offset mismatch for UFabricMeshModifierRandomize::RotationRandLimit");
static_assert(offsetof(UFabricMeshModifierRandomize, ScaleRandLimit) == 248, "Offset mismatch for UFabricMeshModifierRandomize::ScaleRandLimit");
static_assert(offsetof(UFabricMeshModifierRandomize, LocationRandRange) == 256, "Offset mismatch for UFabricMeshModifierRandomize::LocationRandRange");
static_assert(offsetof(UFabricMeshModifierRandomize, RotationRandRange) == 280, "Offset mismatch for UFabricMeshModifierRandomize::RotationRandRange");
static_assert(offsetof(UFabricMeshModifierRandomize, ScaleRandRangeAdditive) == 304, "Offset mismatch for UFabricMeshModifierRandomize::ScaleRandRangeAdditive");
static_assert(offsetof(UFabricMeshModifierRandomize, ScaleRandRangeRangeBase) == 328, "Offset mismatch for UFabricMeshModifierRandomize::ScaleRandRangeRangeBase");
static_assert(offsetof(UFabricMeshModifierRandomize, bUniformScale) == 332, "Offset mismatch for UFabricMeshModifierRandomize::bUniformScale");
static_assert(offsetof(UFabricMeshModifierRandomize, RandomStream) == 336, "Offset mismatch for UFabricMeshModifierRandomize::RandomStream");

// /Script/FabricRuntime.FabricMeshModifierRotate
// Kind: Class; super: FabricMeshModifierBase
class UFabricMeshModifierRotate
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t RotationAmount[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricMeshModifierRotate, RotationAmount) == 240, "Offset mismatch for UFabricMeshModifierRotate::RotationAmount");

// /Script/FabricRuntime.FabricMeshModifierScale
// Kind: Class; super: FabricMeshModifierBase
class UFabricMeshModifierScale
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t ScaleFactor[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricMeshModifierScale, ScaleFactor) == 240, "Offset mismatch for UFabricMeshModifierScale::ScaleFactor");

// /Script/FabricRuntime.FabricMeshModifierTranslate
// Kind: Class; super: FabricMeshModifierBase
class UFabricMeshModifierTranslate
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t PositionOffset[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricMeshModifierTranslate, PositionOffset) == 240, "Offset mismatch for UFabricMeshModifierTranslate::PositionOffset");

// /Script/FabricRuntime.FabricMeshProviderBase
// Kind: Class; super: Object
class UFabricMeshProviderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ReferenceMesh[0x38]; // 0x0028 (Size: 0x38, Type: StructProperty)
    TArray<void*> InstanceMeshes; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    float CurrentCableFloatValue; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float CurrentCableFloatDirection; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentCableFloatDirty; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricMeshProviderBase, ReferenceMesh) == 40, "Offset mismatch for UFabricMeshProviderBase::ReferenceMesh");
static_assert(offsetof(UFabricMeshProviderBase, InstanceMeshes) == 96, "Offset mismatch for UFabricMeshProviderBase::InstanceMeshes");
static_assert(offsetof(UFabricMeshProviderBase, CurrentCableFloatValue) == 112, "Offset mismatch for UFabricMeshProviderBase::CurrentCableFloatValue");
static_assert(offsetof(UFabricMeshProviderBase, CurrentCableFloatDirection) == 116, "Offset mismatch for UFabricMeshProviderBase::CurrentCableFloatDirection");
static_assert(offsetof(UFabricMeshProviderBase, bCurrentCableFloatDirty) == 120, "Offset mismatch for UFabricMeshProviderBase::bCurrentCableFloatDirty");

// /Script/FabricRuntime.FabricMeshReceiver
// Kind: Class; super: Interface
class UFabricMeshReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricMeshTreeNode
// Kind: Class; super: Object
class UFabricMeshTreeNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MeshModifier; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Params[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t MeshProviderReference[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    TArray<void*> Children; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t LastCalculatedChecksum; // 0x00A0 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bAllowChecksumCalculation; // 0x00A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricMeshTreeNode, MeshModifier) == 40, "Offset mismatch for UFabricMeshTreeNode::MeshModifier");
static_assert(offsetof(UFabricMeshTreeNode, Params) == 48, "Offset mismatch for UFabricMeshTreeNode::Params");
static_assert(offsetof(UFabricMeshTreeNode, MeshProviderReference) == 88, "Offset mismatch for UFabricMeshTreeNode::MeshProviderReference");
static_assert(offsetof(UFabricMeshTreeNode, Children) == 144, "Offset mismatch for UFabricMeshTreeNode::Children");
static_assert(offsetof(UFabricMeshTreeNode, LastCalculatedChecksum) == 160, "Offset mismatch for UFabricMeshTreeNode::LastCalculatedChecksum");
static_assert(offsetof(UFabricMeshTreeNode, bAllowChecksumCalculation) == 164, "Offset mismatch for UFabricMeshTreeNode::bAllowChecksumCalculation");

// /Script/FabricRuntime.FabricMetaSoundAudioPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundAudioPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t FromStartPatch[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FromCurrentPatch[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    void* LoadedFromStartPatch; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* LoadedFromCurrentPatch; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VolumeInputName[0x4]; // 0x04F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t LoopAudioInputName[0x4]; // 0x04F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t StartTimeInputName[0x4]; // 0x04F8 (Size: 0x4, Type: NameProperty)
    FName StartTimestampInputName; // 0x04FC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, FromStartPatch) == 1184, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::FromStartPatch");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, FromCurrentPatch) == 1216, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::FromCurrentPatch");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, LoadedFromStartPatch) == 1248, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::LoadedFromStartPatch");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, LoadedFromCurrentPatch) == 1256, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::LoadedFromCurrentPatch");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, VolumeInputName) == 1264, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::VolumeInputName");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, LoopAudioInputName) == 1268, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::LoopAudioInputName");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, StartTimeInputName) == 1272, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::StartTimeInputName");
static_assert(offsetof(UFabricMetaSoundAudioPatchWrapper, StartTimestampInputName) == 1276, "Offset mismatch for UFabricMetaSoundAudioPatchWrapper::StartTimestampInputName");

// /Script/FabricRuntime.FabricMetaSoundBigKnobPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundBigKnobPatchWrapper
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName EnabledStateInputName; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t MetaSoundPatch[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> UserOptionsToNodeInputs; // 0x0110 (Size: 0x10, Type: MapProperty)
    TArray<void*> PerPlatformInputBools; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputInts; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputFloats; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DirectInputs; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimpleSignalOutputBinding[0x50]; // 0x0160 (Size: 0x50, Type: StructProperty)
    FMulticastInlineDelegate OnSimpleSignalBindingUpdate; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t VisibleInputParamName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AudibleInputParamName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanConsumeVisibleFlag; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanConsumeAudibleFlag; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x01CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAudible; // 0x01CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x24]; // 0x01CC
    FMulticastInlineDelegate OnMaxAttenuationChanged; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputIntChangedBatch; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputFloatChangedBatch; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentManager; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TickSubsystem; // 0x0228 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentNode[0xB0]; // 0x0230 (Size: 0xB0, Type: StructProperty)
    TWeakObjectPtr<void> PositionalProxyActor; // 0x02E0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x02E8
    TWeakObjectPtr<void> CurrentAudioComponent; // 0x0308 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> NewAudioComponent; // 0x0310 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0318
    std::uint8_t CombinerMetaSoundType[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    std::uint8_t AnalyzerMetaSoundType[0x4]; // 0x032C (Size: 0x4, Type: NameProperty)
    TArray<void*> MetaSoundRuntimeInputInfos; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedInputWrappers; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingInputWrappers; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingOutputWrappers; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConnectionBuilder[0xD0]; // 0x0370 (Size: 0xD0, Type: StructProperty)
    TArray<void*> CombinersInUse; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedOutputWrappers; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PatchWrapperQuality; // 0x0460 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaxAttenuation; // 0x0461 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x16]; // 0x0462
    void* LoadedMetaSoundPatch; // 0x0478 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, EnabledStateInputName) == 232, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::EnabledStateInputName");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, MetaSoundPatch) == 240, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::MetaSoundPatch");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, UserOptionsToNodeInputs) == 272, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::UserOptionsToNodeInputs");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PerPlatformInputBools) == 288, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PerPlatformInputBools");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PerPlatformInputInts) == 304, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PerPlatformInputInts");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PerPlatformInputFloats) == 320, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PerPlatformInputFloats");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, DirectInputs) == 336, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::DirectInputs");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, SimpleSignalOutputBinding) == 352, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::SimpleSignalOutputBinding");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, OnSimpleSignalBindingUpdate) == 432, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::OnSimpleSignalBindingUpdate");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, VisibleInputParamName) == 448, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::VisibleInputParamName");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, AudibleInputParamName) == 452, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::AudibleInputParamName");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, bCanConsumeVisibleFlag) == 456, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::bCanConsumeVisibleFlag");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, bCanConsumeAudibleFlag) == 457, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::bCanConsumeAudibleFlag");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, bIsVisible) == 458, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::bIsVisible");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, bIsAudible) == 459, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::bIsAudible");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, OnMaxAttenuationChanged) == 496, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::OnMaxAttenuationChanged");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, OnMetaSoundOutputIntChangedBatch) == 512, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::OnMetaSoundOutputIntChangedBatch");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, OnMetaSoundOutputFloatChangedBatch) == 528, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::OnMetaSoundOutputFloatChangedBatch");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, CurrentManager) == 544, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::CurrentManager");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, TickSubsystem) == 552, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::TickSubsystem");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, CurrentNode) == 560, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::CurrentNode");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PositionalProxyActor) == 736, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PositionalProxyActor");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, CurrentAudioComponent) == 776, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::CurrentAudioComponent");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, NewAudioComponent) == 784, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::NewAudioComponent");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, CombinerMetaSoundType) == 808, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::CombinerMetaSoundType");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, AnalyzerMetaSoundType) == 812, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::AnalyzerMetaSoundType");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, MetaSoundRuntimeInputInfos) == 816, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::MetaSoundRuntimeInputInfos");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, ConnectedInputWrappers) == 832, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::ConnectedInputWrappers");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PendingInputWrappers) == 848, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PendingInputWrappers");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PendingOutputWrappers) == 864, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PendingOutputWrappers");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, ConnectionBuilder) == 880, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::ConnectionBuilder");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, CombinersInUse) == 1088, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::CombinersInUse");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, ConnectedOutputWrappers) == 1104, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::ConnectedOutputWrappers");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, PatchWrapperQuality) == 1120, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::PatchWrapperQuality");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, MaxAttenuation) == 1121, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::MaxAttenuation");
static_assert(offsetof(UFabricMetaSoundBigKnobPatchWrapper, LoadedMetaSoundPatch) == 1144, "Offset mismatch for UFabricMetaSoundBigKnobPatchWrapper::LoadedMetaSoundPatch");

// /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundDrumPlayerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t PitchSampleInputName[0x4]; // 0x04A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SlotKitInputName[0x4]; // 0x04A4 (Size: 0x4, Type: NameProperty)
    TArray<void*> PitchSampleParams; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SlotLinkParams; // 0x04B8 (Size: 0x10, Type: ArrayProperty)
    FString CurrentKitParam; // 0x04C8 (Size: 0x10, Type: StrProperty)
    std::int32_t NumSamplesPerKit; // 0x04D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04DC
    TArray<void*> DrumAmplitudes; // 0x04E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate; // 0x04F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFabricMetaSoundDrumPlayerSampleBanksLoaded; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0510
    TArray<void*> CurrentKitSamples; // 0x0558 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, PitchSampleInputName) == 1184, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::PitchSampleInputName");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, SlotKitInputName) == 1188, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::SlotKitInputName");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, PitchSampleParams) == 1192, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::PitchSampleParams");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, SlotLinkParams) == 1208, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::SlotLinkParams");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, CurrentKitParam) == 1224, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::CurrentKitParam");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, NumSamplesPerKit) == 1240, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::NumSamplesPerKit");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, DrumAmplitudes) == 1248, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::DrumAmplitudes");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate) == 1264, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, OnFabricMetaSoundDrumPlayerSampleBanksLoaded) == 1280, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::OnFabricMetaSoundDrumPlayerSampleBanksLoaded");
static_assert(offsetof(UFabricMetaSoundDrumPlayerPatchWrapper, CurrentKitSamples) == 1368, "Offset mismatch for UFabricMetaSoundDrumPlayerPatchWrapper::CurrentKitSamples");

// /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
// Kind: Class; super: FabricMetaSoundWetDryPatchWrapper
class UFabricMetaSoundEchoPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x548]; // 0x0000
    std::uint8_t bAllowWetSignalWaveformTexture; // 0x0548 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDrySignalWaveformTexture; // 0x0549 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x054A
    void* WetSignalWaveformTexture; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* DrySignalWaveformTexture; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundEchoPatchWrapper, bAllowWetSignalWaveformTexture) == 1352, "Offset mismatch for UFabricMetaSoundEchoPatchWrapper::bAllowWetSignalWaveformTexture");
static_assert(offsetof(UFabricMetaSoundEchoPatchWrapper, bAllowDrySignalWaveformTexture) == 1353, "Offset mismatch for UFabricMetaSoundEchoPatchWrapper::bAllowDrySignalWaveformTexture");
static_assert(offsetof(UFabricMetaSoundEchoPatchWrapper, WetSignalWaveformTexture) == 1360, "Offset mismatch for UFabricMetaSoundEchoPatchWrapper::WetSignalWaveformTexture");
static_assert(offsetof(UFabricMetaSoundEchoPatchWrapper, DrySignalWaveformTexture) == 1368, "Offset mismatch for UFabricMetaSoundEchoPatchWrapper::DrySignalWaveformTexture");

// /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundInstrumentPlayerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    FMulticastInlineDelegate OnFFTResultsUpdated; // 0x0498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t FFTAnalysisOutputBinding[0x50]; // 0x04A8 (Size: 0x50, Type: StructProperty)
    std::int32_t FFTCPDStartIndex; // 0x04F8 (Size: 0x4, Type: IntProperty)
    std::int32_t FFTLength; // 0x04FC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0500
    void* CurrentFusionPatch; // 0x0538 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundInstrumentPlayerPatchWrapper, OnFFTResultsUpdated) == 1176, "Offset mismatch for UFabricMetaSoundInstrumentPlayerPatchWrapper::OnFFTResultsUpdated");
static_assert(offsetof(UFabricMetaSoundInstrumentPlayerPatchWrapper, FFTAnalysisOutputBinding) == 1192, "Offset mismatch for UFabricMetaSoundInstrumentPlayerPatchWrapper::FFTAnalysisOutputBinding");
static_assert(offsetof(UFabricMetaSoundInstrumentPlayerPatchWrapper, FFTCPDStartIndex) == 1272, "Offset mismatch for UFabricMetaSoundInstrumentPlayerPatchWrapper::FFTCPDStartIndex");
static_assert(offsetof(UFabricMetaSoundInstrumentPlayerPatchWrapper, FFTLength) == 1276, "Offset mismatch for UFabricMetaSoundInstrumentPlayerPatchWrapper::FFTLength");
static_assert(offsetof(UFabricMetaSoundInstrumentPlayerPatchWrapper, CurrentFusionPatch) == 1336, "Offset mismatch for UFabricMetaSoundInstrumentPlayerPatchWrapper::CurrentFusionPatch");

// /Script/FabricRuntime.FabricMetaSoundLFOPatchWrapper
// Kind: Class; super: FabricMetaSoundModulatorPatchWrapper
class UFabricMetaSoundLFOPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* LFOFloatProvider; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FreePhaseStartName[0x4]; // 0x04C0 (Size: 0x4, Type: NameProperty)
    FName RandomSeedInputName; // 0x04C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFabricMetaSoundLFOPatchWrapper, LFOFloatProvider) == 1208, "Offset mismatch for UFabricMetaSoundLFOPatchWrapper::LFOFloatProvider");
static_assert(offsetof(UFabricMetaSoundLFOPatchWrapper, FreePhaseStartName) == 1216, "Offset mismatch for UFabricMetaSoundLFOPatchWrapper::FreePhaseStartName");
static_assert(offsetof(UFabricMetaSoundLFOPatchWrapper, RandomSeedInputName) == 1220, "Offset mismatch for UFabricMetaSoundLFOPatchWrapper::RandomSeedInputName");

// /Script/FabricRuntime.FabricMetaSoundManagerComponent
// Kind: Class; super: ActorComponent
class UFabricMetaSoundManagerComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t HarmonixMusicProviderPatch[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HarmonixMetronomeClockPatch[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HarmonixTempoClockPatch[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HarmonixTransportPatch[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UserOptionConverterNode[0x20]; // 0x0150 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MidiStreamUtilityPatches[0x88]; // 0x0170 (Size: 0x88, Type: StructProperty)
    std::uint8_t AudioUtilityPatches[0x88]; // 0x01F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t FloatUtilityPatches[0x88]; // 0x0280 (Size: 0x88, Type: StructProperty)
    std::uint8_t MusicProviderVolumeName[0x4]; // 0x0308 (Size: 0x4, Type: NameProperty)
    std::uint8_t MusicProviderRootNoteName[0x4]; // 0x030C (Size: 0x4, Type: NameProperty)
    std::uint8_t MusicProviderScaleName[0x4]; // 0x0310 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderPlayTriggerName[0x4]; // 0x0314 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderDelayedRestartTriggerName[0x4]; // 0x0318 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderRestartTriggerName[0x4]; // 0x031C (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderSeekTriggerName[0x4]; // 0x0320 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderPauseTriggerName[0x4]; // 0x0324 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderContinueTriggerName[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderStopTriggerName[0x4]; // 0x032C (Size: 0x4, Type: NameProperty)
    std::uint8_t TransportProviderSeekTargetName[0x4]; // 0x0330 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderTempoName[0x4]; // 0x0334 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderSpeedName[0x4]; // 0x0338 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderTimeSigNumName[0x4]; // 0x033C (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderTimeSignDenomName[0x4]; // 0x0340 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderMidiFileInName[0x4]; // 0x0344 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClockProviderLoopName[0x4]; // 0x0348 (Size: 0x4, Type: NameProperty)
    std::uint8_t UserOptionConverterCountInName[0x4]; // 0x034C (Size: 0x4, Type: NameProperty)
    float CrossfadeSeconds; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float RebuildTimeOutSeconds; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float BlockRateOverride; // 0x0358 (Size: 0x4, Type: FloatProperty)
    std::uint8_t QualityOverride[0x4]; // 0x035C (Size: 0x4, Type: NameProperty)
    void* DefaultMidiFile; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0368
    FMulticastInlineDelegate OnMetasoundGeneratorCrossfadeStarted; // 0x0398 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x50]; // 0x03A8
    FMulticastInlineDelegate OnMetasoundClockAuthorityChanged; // 0x03F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0408
    FMulticastInlineDelegate OnPlayStateChanged; // 0x0420 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> SignificanceRuntimeBuckets; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    void* SignificanceBasedUpdate; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    float InitialCooldownTimeInSeconds; // 0x0448 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x044C
    void* SourceBuilder; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlaybackAudioComponents; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0470
    TArray<void*> ServerPlaybackComponents; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t QueuedTransportRequestLock[0x50]; // 0x0490 (Size: 0x50, Type: OptionalProperty)
    std::uint8_t CurrentTransportRequestLock[0x8]; // 0x04E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ClockAuthorityName[0x8]; // 0x04E8 (Size: 0x8, Type: OptionalProperty)
    TArray<void*> SortedRegisteredUtilityProviderAuthorities; // 0x04F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ClockAuthorityLoopLength[0x8]; // 0x0500 (Size: 0x8, Type: StructProperty)
    TWeakObjectPtr<void> TempoMapMidiFile; // 0x0508 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HarmonixMusicProviderNode[0xB0]; // 0x0510 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HarmonixMetronomeClockNode[0xB0]; // 0x05C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HarmonixMidiTempoClockNode[0xB0]; // 0x0670 (Size: 0xB0, Type: StructProperty)
    std::uint8_t HarmonixTransportNode[0xB0]; // 0x0720 (Size: 0xB0, Type: StructProperty)
    std::uint8_t OnPlayNodeOutput[0x20]; // 0x07D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t OnFinishedNodeInput[0x20]; // 0x07F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> AudioOutNodeInputs; // 0x0810 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x48]; // 0x0820
    TMap<void*, void*> FreeMetaSoundNodes; // 0x0868 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> UtilityNodeTypesToPatches; // 0x0878 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> UtilityProviderNodesInGraph; // 0x0888 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0898
    std::uint8_t bGraphDirty; // 0x08A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAudioless; // 0x08A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCompletedInitialCooldown; // 0x08AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentClockType; // 0x08AB (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultClockType; // 0x08AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentPlayState; // 0x08AD (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlayStateAfterRebuild; // 0x08AE (Size: 0x1, Type: EnumProperty)
    std::uint8_t JamSyncType; // 0x08AF (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x2]; // 0x08B0
    std::uint8_t LastBroadcastBy; // 0x08B2 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixMusicProviderPatch) == 208, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixMusicProviderPatch");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixMetronomeClockPatch) == 240, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixMetronomeClockPatch");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixTempoClockPatch) == 272, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixTempoClockPatch");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixTransportPatch) == 304, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixTransportPatch");
static_assert(offsetof(UFabricMetaSoundManagerComponent, UserOptionConverterNode) == 336, "Offset mismatch for UFabricMetaSoundManagerComponent::UserOptionConverterNode");
static_assert(offsetof(UFabricMetaSoundManagerComponent, MidiStreamUtilityPatches) == 368, "Offset mismatch for UFabricMetaSoundManagerComponent::MidiStreamUtilityPatches");
static_assert(offsetof(UFabricMetaSoundManagerComponent, AudioUtilityPatches) == 504, "Offset mismatch for UFabricMetaSoundManagerComponent::AudioUtilityPatches");
static_assert(offsetof(UFabricMetaSoundManagerComponent, FloatUtilityPatches) == 640, "Offset mismatch for UFabricMetaSoundManagerComponent::FloatUtilityPatches");
static_assert(offsetof(UFabricMetaSoundManagerComponent, MusicProviderVolumeName) == 776, "Offset mismatch for UFabricMetaSoundManagerComponent::MusicProviderVolumeName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, MusicProviderRootNoteName) == 780, "Offset mismatch for UFabricMetaSoundManagerComponent::MusicProviderRootNoteName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, MusicProviderScaleName) == 784, "Offset mismatch for UFabricMetaSoundManagerComponent::MusicProviderScaleName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderPlayTriggerName) == 788, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderPlayTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderDelayedRestartTriggerName) == 792, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderDelayedRestartTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderRestartTriggerName) == 796, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderRestartTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderSeekTriggerName) == 800, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderSeekTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderPauseTriggerName) == 804, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderPauseTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderContinueTriggerName) == 808, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderContinueTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderStopTriggerName) == 812, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderStopTriggerName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TransportProviderSeekTargetName) == 816, "Offset mismatch for UFabricMetaSoundManagerComponent::TransportProviderSeekTargetName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderTempoName) == 820, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderTempoName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderSpeedName) == 824, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderSpeedName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderTimeSigNumName) == 828, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderTimeSigNumName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderTimeSignDenomName) == 832, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderTimeSignDenomName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderMidiFileInName) == 836, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderMidiFileInName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockProviderLoopName) == 840, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockProviderLoopName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, UserOptionConverterCountInName) == 844, "Offset mismatch for UFabricMetaSoundManagerComponent::UserOptionConverterCountInName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, CrossfadeSeconds) == 848, "Offset mismatch for UFabricMetaSoundManagerComponent::CrossfadeSeconds");
static_assert(offsetof(UFabricMetaSoundManagerComponent, RebuildTimeOutSeconds) == 852, "Offset mismatch for UFabricMetaSoundManagerComponent::RebuildTimeOutSeconds");
static_assert(offsetof(UFabricMetaSoundManagerComponent, BlockRateOverride) == 856, "Offset mismatch for UFabricMetaSoundManagerComponent::BlockRateOverride");
static_assert(offsetof(UFabricMetaSoundManagerComponent, QualityOverride) == 860, "Offset mismatch for UFabricMetaSoundManagerComponent::QualityOverride");
static_assert(offsetof(UFabricMetaSoundManagerComponent, DefaultMidiFile) == 864, "Offset mismatch for UFabricMetaSoundManagerComponent::DefaultMidiFile");
static_assert(offsetof(UFabricMetaSoundManagerComponent, OnMetasoundGeneratorCrossfadeStarted) == 920, "Offset mismatch for UFabricMetaSoundManagerComponent::OnMetasoundGeneratorCrossfadeStarted");
static_assert(offsetof(UFabricMetaSoundManagerComponent, OnMetasoundClockAuthorityChanged) == 1016, "Offset mismatch for UFabricMetaSoundManagerComponent::OnMetasoundClockAuthorityChanged");
static_assert(offsetof(UFabricMetaSoundManagerComponent, OnPlayStateChanged) == 1056, "Offset mismatch for UFabricMetaSoundManagerComponent::OnPlayStateChanged");
static_assert(offsetof(UFabricMetaSoundManagerComponent, SignificanceRuntimeBuckets) == 1072, "Offset mismatch for UFabricMetaSoundManagerComponent::SignificanceRuntimeBuckets");
static_assert(offsetof(UFabricMetaSoundManagerComponent, SignificanceBasedUpdate) == 1088, "Offset mismatch for UFabricMetaSoundManagerComponent::SignificanceBasedUpdate");
static_assert(offsetof(UFabricMetaSoundManagerComponent, InitialCooldownTimeInSeconds) == 1096, "Offset mismatch for UFabricMetaSoundManagerComponent::InitialCooldownTimeInSeconds");
static_assert(offsetof(UFabricMetaSoundManagerComponent, SourceBuilder) == 1104, "Offset mismatch for UFabricMetaSoundManagerComponent::SourceBuilder");
static_assert(offsetof(UFabricMetaSoundManagerComponent, MusicClock) == 1112, "Offset mismatch for UFabricMetaSoundManagerComponent::MusicClock");
static_assert(offsetof(UFabricMetaSoundManagerComponent, PlaybackAudioComponents) == 1120, "Offset mismatch for UFabricMetaSoundManagerComponent::PlaybackAudioComponents");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ServerPlaybackComponents) == 1152, "Offset mismatch for UFabricMetaSoundManagerComponent::ServerPlaybackComponents");
static_assert(offsetof(UFabricMetaSoundManagerComponent, QueuedTransportRequestLock) == 1168, "Offset mismatch for UFabricMetaSoundManagerComponent::QueuedTransportRequestLock");
static_assert(offsetof(UFabricMetaSoundManagerComponent, CurrentTransportRequestLock) == 1248, "Offset mismatch for UFabricMetaSoundManagerComponent::CurrentTransportRequestLock");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockAuthorityName) == 1256, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockAuthorityName");
static_assert(offsetof(UFabricMetaSoundManagerComponent, SortedRegisteredUtilityProviderAuthorities) == 1264, "Offset mismatch for UFabricMetaSoundManagerComponent::SortedRegisteredUtilityProviderAuthorities");
static_assert(offsetof(UFabricMetaSoundManagerComponent, ClockAuthorityLoopLength) == 1280, "Offset mismatch for UFabricMetaSoundManagerComponent::ClockAuthorityLoopLength");
static_assert(offsetof(UFabricMetaSoundManagerComponent, TempoMapMidiFile) == 1288, "Offset mismatch for UFabricMetaSoundManagerComponent::TempoMapMidiFile");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixMusicProviderNode) == 1296, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixMusicProviderNode");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixMetronomeClockNode) == 1472, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixMetronomeClockNode");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixMidiTempoClockNode) == 1648, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixMidiTempoClockNode");
static_assert(offsetof(UFabricMetaSoundManagerComponent, HarmonixTransportNode) == 1824, "Offset mismatch for UFabricMetaSoundManagerComponent::HarmonixTransportNode");
static_assert(offsetof(UFabricMetaSoundManagerComponent, OnPlayNodeOutput) == 2000, "Offset mismatch for UFabricMetaSoundManagerComponent::OnPlayNodeOutput");
static_assert(offsetof(UFabricMetaSoundManagerComponent, OnFinishedNodeInput) == 2032, "Offset mismatch for UFabricMetaSoundManagerComponent::OnFinishedNodeInput");
static_assert(offsetof(UFabricMetaSoundManagerComponent, AudioOutNodeInputs) == 2064, "Offset mismatch for UFabricMetaSoundManagerComponent::AudioOutNodeInputs");
static_assert(offsetof(UFabricMetaSoundManagerComponent, FreeMetaSoundNodes) == 2152, "Offset mismatch for UFabricMetaSoundManagerComponent::FreeMetaSoundNodes");
static_assert(offsetof(UFabricMetaSoundManagerComponent, UtilityNodeTypesToPatches) == 2168, "Offset mismatch for UFabricMetaSoundManagerComponent::UtilityNodeTypesToPatches");
static_assert(offsetof(UFabricMetaSoundManagerComponent, UtilityProviderNodesInGraph) == 2184, "Offset mismatch for UFabricMetaSoundManagerComponent::UtilityProviderNodesInGraph");
static_assert(offsetof(UFabricMetaSoundManagerComponent, bGraphDirty) == 2216, "Offset mismatch for UFabricMetaSoundManagerComponent::bGraphDirty");
static_assert(offsetof(UFabricMetaSoundManagerComponent, bIsAudioless) == 2217, "Offset mismatch for UFabricMetaSoundManagerComponent::bIsAudioless");
static_assert(offsetof(UFabricMetaSoundManagerComponent, bHasCompletedInitialCooldown) == 2218, "Offset mismatch for UFabricMetaSoundManagerComponent::bHasCompletedInitialCooldown");
static_assert(offsetof(UFabricMetaSoundManagerComponent, CurrentClockType) == 2219, "Offset mismatch for UFabricMetaSoundManagerComponent::CurrentClockType");
static_assert(offsetof(UFabricMetaSoundManagerComponent, DefaultClockType) == 2220, "Offset mismatch for UFabricMetaSoundManagerComponent::DefaultClockType");
static_assert(offsetof(UFabricMetaSoundManagerComponent, CurrentPlayState) == 2221, "Offset mismatch for UFabricMetaSoundManagerComponent::CurrentPlayState");
static_assert(offsetof(UFabricMetaSoundManagerComponent, PlayStateAfterRebuild) == 2222, "Offset mismatch for UFabricMetaSoundManagerComponent::PlayStateAfterRebuild");
static_assert(offsetof(UFabricMetaSoundManagerComponent, JamSyncType) == 2223, "Offset mismatch for UFabricMetaSoundManagerComponent::JamSyncType");
static_assert(offsetof(UFabricMetaSoundManagerComponent, LastBroadcastBy) == 2226, "Offset mismatch for UFabricMetaSoundManagerComponent::LastBroadcastBy");

// /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundModulatorPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    FMulticastInlineDelegate OnPatchWrapperVisibilityChanged; // 0x0498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentUserOption; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* MetaSoundUserOption; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundModulatorPatchWrapper, OnPatchWrapperVisibilityChanged) == 1176, "Offset mismatch for UFabricMetaSoundModulatorPatchWrapper::OnPatchWrapperVisibilityChanged");
static_assert(offsetof(UFabricMetaSoundModulatorPatchWrapper, CurrentUserOption) == 1192, "Offset mismatch for UFabricMetaSoundModulatorPatchWrapper::CurrentUserOption");
static_assert(offsetof(UFabricMetaSoundModulatorPatchWrapper, MetaSoundUserOption) == 1200, "Offset mismatch for UFabricMetaSoundModulatorPatchWrapper::MetaSoundUserOption");

// /Script/FabricRuntime.FabricMetaSoundPatchOwner
// Kind: Class; super: Interface
class UFabricMetaSoundPatchOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricMetaSoundPatchWrapper
// Kind: Class; super: FabricModulatable
class UFabricMetaSoundPatchWrapper
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName EnabledStateInputName; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t MetaSoundPatch[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> UserOptionsToNodeInputs; // 0x0110 (Size: 0x10, Type: MapProperty)
    TArray<void*> PerPlatformInputBools; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputInts; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputFloats; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DirectInputs; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimpleSignalOutputBinding[0x50]; // 0x0160 (Size: 0x50, Type: StructProperty)
    FMulticastInlineDelegate OnSimpleSignalBindingUpdate; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t VisibleInputParamName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AudibleInputParamName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanConsumeVisibleFlag; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanConsumeAudibleFlag; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x01CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAudible; // 0x01CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x24]; // 0x01CC
    FMulticastInlineDelegate OnMaxAttenuationChanged; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputIntChangedBatch; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputFloatChangedBatch; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentManager; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TickSubsystem; // 0x0228 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentNode[0xB0]; // 0x0230 (Size: 0xB0, Type: StructProperty)
    TWeakObjectPtr<void> PositionalProxyActor; // 0x02E0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x02E8
    TWeakObjectPtr<void> CurrentAudioComponent; // 0x0308 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> NewAudioComponent; // 0x0310 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0318
    std::uint8_t CombinerMetaSoundType[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    std::uint8_t AnalyzerMetaSoundType[0x4]; // 0x032C (Size: 0x4, Type: NameProperty)
    TArray<void*> MetaSoundRuntimeInputInfos; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedInputWrappers; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingInputWrappers; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingOutputWrappers; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConnectionBuilder[0xD0]; // 0x0370 (Size: 0xD0, Type: StructProperty)
    TArray<void*> CombinersInUse; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedOutputWrappers; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PatchWrapperQuality; // 0x0460 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaxAttenuation; // 0x0461 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x16]; // 0x0462
    void* LoadedMetaSoundPatch; // 0x0478 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundPatchWrapper, EnabledStateInputName) == 232, "Offset mismatch for UFabricMetaSoundPatchWrapper::EnabledStateInputName");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, MetaSoundPatch) == 240, "Offset mismatch for UFabricMetaSoundPatchWrapper::MetaSoundPatch");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, UserOptionsToNodeInputs) == 272, "Offset mismatch for UFabricMetaSoundPatchWrapper::UserOptionsToNodeInputs");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PerPlatformInputBools) == 288, "Offset mismatch for UFabricMetaSoundPatchWrapper::PerPlatformInputBools");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PerPlatformInputInts) == 304, "Offset mismatch for UFabricMetaSoundPatchWrapper::PerPlatformInputInts");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PerPlatformInputFloats) == 320, "Offset mismatch for UFabricMetaSoundPatchWrapper::PerPlatformInputFloats");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, DirectInputs) == 336, "Offset mismatch for UFabricMetaSoundPatchWrapper::DirectInputs");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, SimpleSignalOutputBinding) == 352, "Offset mismatch for UFabricMetaSoundPatchWrapper::SimpleSignalOutputBinding");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, OnSimpleSignalBindingUpdate) == 432, "Offset mismatch for UFabricMetaSoundPatchWrapper::OnSimpleSignalBindingUpdate");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, VisibleInputParamName) == 448, "Offset mismatch for UFabricMetaSoundPatchWrapper::VisibleInputParamName");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, AudibleInputParamName) == 452, "Offset mismatch for UFabricMetaSoundPatchWrapper::AudibleInputParamName");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, bCanConsumeVisibleFlag) == 456, "Offset mismatch for UFabricMetaSoundPatchWrapper::bCanConsumeVisibleFlag");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, bCanConsumeAudibleFlag) == 457, "Offset mismatch for UFabricMetaSoundPatchWrapper::bCanConsumeAudibleFlag");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, bIsVisible) == 458, "Offset mismatch for UFabricMetaSoundPatchWrapper::bIsVisible");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, bIsAudible) == 459, "Offset mismatch for UFabricMetaSoundPatchWrapper::bIsAudible");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, OnMaxAttenuationChanged) == 496, "Offset mismatch for UFabricMetaSoundPatchWrapper::OnMaxAttenuationChanged");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, OnMetaSoundOutputIntChangedBatch) == 512, "Offset mismatch for UFabricMetaSoundPatchWrapper::OnMetaSoundOutputIntChangedBatch");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, OnMetaSoundOutputFloatChangedBatch) == 528, "Offset mismatch for UFabricMetaSoundPatchWrapper::OnMetaSoundOutputFloatChangedBatch");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, CurrentManager) == 544, "Offset mismatch for UFabricMetaSoundPatchWrapper::CurrentManager");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, TickSubsystem) == 552, "Offset mismatch for UFabricMetaSoundPatchWrapper::TickSubsystem");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, CurrentNode) == 560, "Offset mismatch for UFabricMetaSoundPatchWrapper::CurrentNode");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PositionalProxyActor) == 736, "Offset mismatch for UFabricMetaSoundPatchWrapper::PositionalProxyActor");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, CurrentAudioComponent) == 776, "Offset mismatch for UFabricMetaSoundPatchWrapper::CurrentAudioComponent");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, NewAudioComponent) == 784, "Offset mismatch for UFabricMetaSoundPatchWrapper::NewAudioComponent");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, CombinerMetaSoundType) == 808, "Offset mismatch for UFabricMetaSoundPatchWrapper::CombinerMetaSoundType");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, AnalyzerMetaSoundType) == 812, "Offset mismatch for UFabricMetaSoundPatchWrapper::AnalyzerMetaSoundType");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, MetaSoundRuntimeInputInfos) == 816, "Offset mismatch for UFabricMetaSoundPatchWrapper::MetaSoundRuntimeInputInfos");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, ConnectedInputWrappers) == 832, "Offset mismatch for UFabricMetaSoundPatchWrapper::ConnectedInputWrappers");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PendingInputWrappers) == 848, "Offset mismatch for UFabricMetaSoundPatchWrapper::PendingInputWrappers");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PendingOutputWrappers) == 864, "Offset mismatch for UFabricMetaSoundPatchWrapper::PendingOutputWrappers");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, ConnectionBuilder) == 880, "Offset mismatch for UFabricMetaSoundPatchWrapper::ConnectionBuilder");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, CombinersInUse) == 1088, "Offset mismatch for UFabricMetaSoundPatchWrapper::CombinersInUse");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, ConnectedOutputWrappers) == 1104, "Offset mismatch for UFabricMetaSoundPatchWrapper::ConnectedOutputWrappers");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, PatchWrapperQuality) == 1120, "Offset mismatch for UFabricMetaSoundPatchWrapper::PatchWrapperQuality");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, MaxAttenuation) == 1121, "Offset mismatch for UFabricMetaSoundPatchWrapper::MaxAttenuation");
static_assert(offsetof(UFabricMetaSoundPatchWrapper, LoadedMetaSoundPatch) == 1144, "Offset mismatch for UFabricMetaSoundPatchWrapper::LoadedMetaSoundPatch");

// /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundSequencerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    void* CurrentStepSequence; // 0x0498 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundSequencerPatchWrapper, CurrentStepSequence) == 1176, "Offset mismatch for UFabricMetaSoundSequencerPatchWrapper::CurrentStepSequence");

// /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundSpeakerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    TArray<void*> EqBands; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AudioPeak[0x60]; // 0x04A8 (Size: 0x60, Type: StructProperty)
    FMulticastInlineDelegate OnFabricMetaSoundSpeakerPatchEqBandUpdate; // 0x0508 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFabricSpeakerReceivingSignalChanged; // 0x0518 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFabricMetaSoundSpeakerPatchWrapper, EqBands) == 1176, "Offset mismatch for UFabricMetaSoundSpeakerPatchWrapper::EqBands");
static_assert(offsetof(UFabricMetaSoundSpeakerPatchWrapper, AudioPeak) == 1192, "Offset mismatch for UFabricMetaSoundSpeakerPatchWrapper::AudioPeak");
static_assert(offsetof(UFabricMetaSoundSpeakerPatchWrapper, OnFabricMetaSoundSpeakerPatchEqBandUpdate) == 1288, "Offset mismatch for UFabricMetaSoundSpeakerPatchWrapper::OnFabricMetaSoundSpeakerPatchEqBandUpdate");
static_assert(offsetof(UFabricMetaSoundSpeakerPatchWrapper, OnFabricSpeakerReceivingSignalChanged) == 1304, "Offset mismatch for UFabricMetaSoundSpeakerPatchWrapper::OnFabricSpeakerReceivingSignalChanged");

// /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundSplitterPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    TMap<void*, void*> SplitterNodes; // 0x04A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFabricMetaSoundSplitterPatchWrapper, SplitterNodes) == 1184, "Offset mismatch for UFabricMetaSoundSplitterPatchWrapper::SplitterNodes");

// /Script/FabricRuntime.FabricMetaSoundTickSubsystem
// Kind: Class; super: FortManagedTickSubsystem
class UFabricMetaSoundTickSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> ActiveTickList; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllEnabledObjects; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> AllRegisteredObjects; // 0x0088 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFabricMetaSoundTickSubsystem, ActiveTickList) == 104, "Offset mismatch for UFabricMetaSoundTickSubsystem::ActiveTickList");
static_assert(offsetof(UFabricMetaSoundTickSubsystem, AllEnabledObjects) == 120, "Offset mismatch for UFabricMetaSoundTickSubsystem::AllEnabledObjects");
static_assert(offsetof(UFabricMetaSoundTickSubsystem, AllRegisteredObjects) == 136, "Offset mismatch for UFabricMetaSoundTickSubsystem::AllRegisteredObjects");

// /Script/FabricRuntime.FabricMetaSoundTreeNode
// Kind: Class; super: Object
class UFabricMetaSoundTreeNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PinDirection; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* AssociatedPatchWrapper; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxAttenuation; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFabricMetaSoundTreeNode, PinDirection) == 40, "Offset mismatch for UFabricMetaSoundTreeNode::PinDirection");
static_assert(offsetof(UFabricMetaSoundTreeNode, AssociatedPatchWrapper) == 48, "Offset mismatch for UFabricMetaSoundTreeNode::AssociatedPatchWrapper");
static_assert(offsetof(UFabricMetaSoundTreeNode, Children) == 56, "Offset mismatch for UFabricMetaSoundTreeNode::Children");
static_assert(offsetof(UFabricMetaSoundTreeNode, MaxAttenuation) == 72, "Offset mismatch for UFabricMetaSoundTreeNode::MaxAttenuation");

// /Script/FabricRuntime.FabricMetaSoundUtilityProviderPatchWrapper
// Kind: Class; super: Object
class UFabricMetaSoundUtilityProviderPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MetaSoundPatch[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseAsMusicProvider; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAsClockProvider; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAsTransportProvider; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bManagesOwnMusicState; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::int32_t Priority; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRunsOnServer; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    void* CurrentManager; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentNode[0xD0]; // 0x0068 (Size: 0xD0, Type: StructProperty)
    TWeakObjectPtr<void> CurrentAudioComponent; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TransportRequestConfig[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    void* LoadedMetaSoundPatch; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, MetaSoundPatch) == 48, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::MetaSoundPatch");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, bUseAsMusicProvider) == 80, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::bUseAsMusicProvider");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, bUseAsClockProvider) == 81, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::bUseAsClockProvider");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, bUseAsTransportProvider) == 82, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::bUseAsTransportProvider");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, bManagesOwnMusicState) == 83, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::bManagesOwnMusicState");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, Priority) == 84, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::Priority");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, bRunsOnServer) == 88, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::bRunsOnServer");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, CurrentManager) == 96, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::CurrentManager");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, CurrentNode) == 104, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::CurrentNode");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, CurrentAudioComponent) == 312, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::CurrentAudioComponent");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, TransportRequestConfig) == 320, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::TransportRequestConfig");
static_assert(offsetof(UFabricMetaSoundUtilityProviderPatchWrapper, LoadedMetaSoundPatch) == 336, "Offset mismatch for UFabricMetaSoundUtilityProviderPatchWrapper::LoadedMetaSoundPatch");

// /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricMetaSoundWetDryPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    std::uint8_t WetDryOutputBinding[0xA0]; // 0x0498 (Size: 0xA0, Type: StructProperty)
    FMulticastInlineDelegate OnWetDryOutputSignalUpdate; // 0x0538 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFabricMetaSoundWetDryPatchWrapper, WetDryOutputBinding) == 1176, "Offset mismatch for UFabricMetaSoundWetDryPatchWrapper::WetDryOutputBinding");
static_assert(offsetof(UFabricMetaSoundWetDryPatchWrapper, OnWetDryOutputSignalUpdate) == 1336, "Offset mismatch for UFabricMetaSoundWetDryPatchWrapper::OnWetDryOutputSignalUpdate");

// /Script/FabricRuntime.FabricMidiFollowComponent
// Kind: Class; super: ActorComponent
class UFabricMidiFollowComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnFollowLengthFinished; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFollowSourcesSet; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00E0
    std::uint8_t FollowMidiFile[0xC]; // 0x0100 (Size: 0xC, Type: OptionalProperty)
    std::uint8_t FollowLevelSequence[0x1C]; // 0x010C (Size: 0x1C, Type: OptionalProperty)
    std::uint8_t SelectedMidiTrackStartTimestamp[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExternalSourceStartTimestamp[0x8]; // 0x0130 (Size: 0x8, Type: StructProperty)
    std::uint8_t SelectedMidiTrackEndTimestamp[0x8]; // 0x0138 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExternalSourceEndTimestamp[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t MidiFollowData[0x8]; // 0x0148 (Size: 0x8, Type: StructProperty)
    std::uint8_t DesiredLoopBehaviour; // 0x0150 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFabricMidiFollowComponent, OnFollowLengthFinished) == 192, "Offset mismatch for UFabricMidiFollowComponent::OnFollowLengthFinished");
static_assert(offsetof(UFabricMidiFollowComponent, OnFollowSourcesSet) == 208, "Offset mismatch for UFabricMidiFollowComponent::OnFollowSourcesSet");
static_assert(offsetof(UFabricMidiFollowComponent, FollowMidiFile) == 256, "Offset mismatch for UFabricMidiFollowComponent::FollowMidiFile");
static_assert(offsetof(UFabricMidiFollowComponent, FollowLevelSequence) == 268, "Offset mismatch for UFabricMidiFollowComponent::FollowLevelSequence");
static_assert(offsetof(UFabricMidiFollowComponent, SelectedMidiTrackStartTimestamp) == 296, "Offset mismatch for UFabricMidiFollowComponent::SelectedMidiTrackStartTimestamp");
static_assert(offsetof(UFabricMidiFollowComponent, ExternalSourceStartTimestamp) == 304, "Offset mismatch for UFabricMidiFollowComponent::ExternalSourceStartTimestamp");
static_assert(offsetof(UFabricMidiFollowComponent, SelectedMidiTrackEndTimestamp) == 312, "Offset mismatch for UFabricMidiFollowComponent::SelectedMidiTrackEndTimestamp");
static_assert(offsetof(UFabricMidiFollowComponent, ExternalSourceEndTimestamp) == 320, "Offset mismatch for UFabricMidiFollowComponent::ExternalSourceEndTimestamp");
static_assert(offsetof(UFabricMidiFollowComponent, MidiFollowData) == 328, "Offset mismatch for UFabricMidiFollowComponent::MidiFollowData");
static_assert(offsetof(UFabricMidiFollowComponent, DesiredLoopBehaviour) == 336, "Offset mismatch for UFabricMidiFollowComponent::DesiredLoopBehaviour");

// /Script/FabricRuntime.FabricMidiProvider
// Kind: Class; super: Interface
class UFabricMidiProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricModulatable
// Kind: Class; super: Object
class UFabricModulatable
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    TWeakObjectPtr<void> ModulatedActor; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> ModulatorParams; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NonModulatedParamsWithCallbacks[0x10]; // 0x0048 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> Modulators; // 0x0058 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LastBroadcastedValues; // 0x0068 (Size: 0x10, Type: MapProperty)
    TArray<void*> ModulatorSources; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricModulatable, ModulatedActor) == 44, "Offset mismatch for UFabricModulatable::ModulatedActor");
static_assert(offsetof(UFabricModulatable, ModulatorParams) == 56, "Offset mismatch for UFabricModulatable::ModulatorParams");
static_assert(offsetof(UFabricModulatable, NonModulatedParamsWithCallbacks) == 72, "Offset mismatch for UFabricModulatable::NonModulatedParamsWithCallbacks");
static_assert(offsetof(UFabricModulatable, Modulators) == 88, "Offset mismatch for UFabricModulatable::Modulators");
static_assert(offsetof(UFabricModulatable, LastBroadcastedValues) == 104, "Offset mismatch for UFabricModulatable::LastBroadcastedValues");
static_assert(offsetof(UFabricModulatable, ModulatorSources) == 120, "Offset mismatch for UFabricModulatable::ModulatorSources");

// /Script/FabricRuntime.FabricModulationNode
// Kind: Class; super: Object
class UFabricModulationNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> FloatProviders; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricModulationNode, FloatProviders) == 40, "Offset mismatch for UFabricModulationNode::FloatProviders");

// /Script/FabricRuntime.FabricModulator
// Kind: Class; super: Interface
class UFabricModulator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricModulatorDevice
// Kind: Class; super: Interface
class UFabricModulatorDevice
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricModulatorSource
// Kind: Class; super: Interface
class UFabricModulatorSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricNoteReceivedPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UFabricNoteReceivedPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x498]; // 0x0000
    FName NoteOutputName; // 0x0498 (Size: 0x8, Type: NameProperty)
    TArray<void*> TriggerNoteParams; // 0x04A0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnMatchingMidiEventPassed; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMatchingNoteOnMidiEventPassed; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMatchingNoteOffMidiEventPassed; // 0x04D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFabricNoteReceivedPatchWrapper, NoteOutputName) == 1176, "Offset mismatch for UFabricNoteReceivedPatchWrapper::NoteOutputName");
static_assert(offsetof(UFabricNoteReceivedPatchWrapper, TriggerNoteParams) == 1184, "Offset mismatch for UFabricNoteReceivedPatchWrapper::TriggerNoteParams");
static_assert(offsetof(UFabricNoteReceivedPatchWrapper, OnMatchingMidiEventPassed) == 1200, "Offset mismatch for UFabricNoteReceivedPatchWrapper::OnMatchingMidiEventPassed");
static_assert(offsetof(UFabricNoteReceivedPatchWrapper, OnMatchingNoteOnMidiEventPassed) == 1216, "Offset mismatch for UFabricNoteReceivedPatchWrapper::OnMatchingNoteOnMidiEventPassed");
static_assert(offsetof(UFabricNoteReceivedPatchWrapper, OnMatchingNoteOffMidiEventPassed) == 1232, "Offset mismatch for UFabricNoteReceivedPatchWrapper::OnMatchingNoteOffMidiEventPassed");

// /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
// Kind: Class; super: FabricNoteReceivedPatchWrapper
class UFabricNoteTriggerPatchWrapper
{
public:
    std::uint8_t Pad_0000[0x500]; // 0x0000
    FString OctaveParam; // 0x0500 (Size: 0x10, Type: StrProperty)
    std::int32_t MaxOctave; // 0x0510 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0514
    FMulticastInlineDelegate OnAnyMidiEventPassed; // 0x0518 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFabricNoteTriggerPatchWrapper, OctaveParam) == 1280, "Offset mismatch for UFabricNoteTriggerPatchWrapper::OctaveParam");
static_assert(offsetof(UFabricNoteTriggerPatchWrapper, MaxOctave) == 1296, "Offset mismatch for UFabricNoteTriggerPatchWrapper::MaxOctave");
static_assert(offsetof(UFabricNoteTriggerPatchWrapper, OnAnyMidiEventPassed) == 1304, "Offset mismatch for UFabricNoteTriggerPatchWrapper::OnAnyMidiEventPassed");

// /Script/FabricRuntime.FabricProgressorManager
// Kind: Class; super: ActorComponent
class UFabricProgressorManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnGlobalProgressionChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bHasActiveGlobalProgression; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInPlayMode; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00DA
    std::int32_t GlobalPresetNumber; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::uint8_t GlobalProgression[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t StoredGlobalProgression[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricProgressorManager, OnGlobalProgressionChanged) == 200, "Offset mismatch for UFabricProgressorManager::OnGlobalProgressionChanged");
static_assert(offsetof(UFabricProgressorManager, bHasActiveGlobalProgression) == 216, "Offset mismatch for UFabricProgressorManager::bHasActiveGlobalProgression");
static_assert(offsetof(UFabricProgressorManager, bInPlayMode) == 217, "Offset mismatch for UFabricProgressorManager::bInPlayMode");
static_assert(offsetof(UFabricProgressorManager, GlobalPresetNumber) == 220, "Offset mismatch for UFabricProgressorManager::GlobalPresetNumber");
static_assert(offsetof(UFabricProgressorManager, GlobalProgression) == 224, "Offset mismatch for UFabricProgressorManager::GlobalProgression");
static_assert(offsetof(UFabricProgressorManager, StoredGlobalProgression) == 256, "Offset mismatch for UFabricProgressorManager::StoredGlobalProgression");

// /Script/FabricRuntime.FabricSequencerPreviewFXComponent
// Kind: Class; super: FabricSteppedPreviewFXComponent
class UFabricSequencerPreviewFXComponent
{
public:
    std::uint8_t Pad_0000[0xAF0]; // 0x0000
    TWeakObjectPtr<void> StepSequencer; // 0x0AF0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> StepSequencerGrid; // 0x0AF8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricSequencerPreviewFXComponent, StepSequencer) == 2800, "Offset mismatch for UFabricSequencerPreviewFXComponent::StepSequencer");
static_assert(offsetof(UFabricSequencerPreviewFXComponent, StepSequencerGrid) == 2808, "Offset mismatch for UFabricSequencerPreviewFXComponent::StepSequencerGrid");

// /Script/FabricRuntime.FabricSequencerSustainComponent
// Kind: Class; super: InstancedStaticMeshComponent
class UFabricSequencerSustainComponent
{
public:
    std::uint8_t Pad_0000[0xA60]; // 0x0000
    TMap<void*, void*> StepToInstanceMapping; // 0x0A60 (Size: 0x10, Type: MapProperty)
    std::int32_t PICDStartBeat; // 0x0A70 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDEndBeat; // 0x0A74 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDLoopBeat; // 0x0A78 (Size: 0x4, Type: IntProperty)
    std::int32_t CPDDeviceEnabled; // 0x0A7C (Size: 0x4, Type: IntProperty)
    float GridSquareExtents; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    float SustainInstanceYLocation; // 0x0A84 (Size: 0x4, Type: FloatProperty)
    float SustainInstanceYScale; // 0x0A88 (Size: 0x4, Type: FloatProperty)
    float SustainInstanceZScale; // 0x0A8C (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> StepSequencer; // 0x0A90 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> StepSequencerGrid; // 0x0A98 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricSequencerSustainComponent, StepToInstanceMapping) == 2656, "Offset mismatch for UFabricSequencerSustainComponent::StepToInstanceMapping");
static_assert(offsetof(UFabricSequencerSustainComponent, PICDStartBeat) == 2672, "Offset mismatch for UFabricSequencerSustainComponent::PICDStartBeat");
static_assert(offsetof(UFabricSequencerSustainComponent, PICDEndBeat) == 2676, "Offset mismatch for UFabricSequencerSustainComponent::PICDEndBeat");
static_assert(offsetof(UFabricSequencerSustainComponent, PICDLoopBeat) == 2680, "Offset mismatch for UFabricSequencerSustainComponent::PICDLoopBeat");
static_assert(offsetof(UFabricSequencerSustainComponent, CPDDeviceEnabled) == 2684, "Offset mismatch for UFabricSequencerSustainComponent::CPDDeviceEnabled");
static_assert(offsetof(UFabricSequencerSustainComponent, GridSquareExtents) == 2688, "Offset mismatch for UFabricSequencerSustainComponent::GridSquareExtents");
static_assert(offsetof(UFabricSequencerSustainComponent, SustainInstanceYLocation) == 2692, "Offset mismatch for UFabricSequencerSustainComponent::SustainInstanceYLocation");
static_assert(offsetof(UFabricSequencerSustainComponent, SustainInstanceYScale) == 2696, "Offset mismatch for UFabricSequencerSustainComponent::SustainInstanceYScale");
static_assert(offsetof(UFabricSequencerSustainComponent, SustainInstanceZScale) == 2700, "Offset mismatch for UFabricSequencerSustainComponent::SustainInstanceZScale");
static_assert(offsetof(UFabricSequencerSustainComponent, StepSequencer) == 2704, "Offset mismatch for UFabricSequencerSustainComponent::StepSequencer");
static_assert(offsetof(UFabricSequencerSustainComponent, StepSequencerGrid) == 2712, "Offset mismatch for UFabricSequencerSustainComponent::StepSequencerGrid");

// /Script/FabricRuntime.FabricSignificanceAsset
// Kind: Class; super: DataAsset
class UFabricSignificanceAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> UpdateBuckets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricSignificanceAsset, UpdateBuckets) == 40, "Offset mismatch for UFabricSignificanceAsset::UpdateBuckets");

// /Script/FabricRuntime.FabricSpeakerManagerComponent
// Kind: Class; super: ActorComponent
class UFabricSpeakerManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMusicEventPriorityChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientAudibleMusicEventGroupChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MusicEventPriority; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    std::uint8_t ClientCurrentAudibleMusicEventGroup[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t AboveEmotesTag[0x4]; // 0x00E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BelowEmotesTag[0x4]; // 0x00EC (Size: 0x4, Type: StructProperty)
    float ReplicatedReceivedSignalBufferDuration; // 0x00F0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFabricSpeakerManagerComponent, OnMusicEventPriorityChanged) == 192, "Offset mismatch for UFabricSpeakerManagerComponent::OnMusicEventPriorityChanged");
static_assert(offsetof(UFabricSpeakerManagerComponent, OnClientAudibleMusicEventGroupChanged) == 208, "Offset mismatch for UFabricSpeakerManagerComponent::OnClientAudibleMusicEventGroupChanged");
static_assert(offsetof(UFabricSpeakerManagerComponent, MusicEventPriority) == 224, "Offset mismatch for UFabricSpeakerManagerComponent::MusicEventPriority");
static_assert(offsetof(UFabricSpeakerManagerComponent, ClientCurrentAudibleMusicEventGroup) == 228, "Offset mismatch for UFabricSpeakerManagerComponent::ClientCurrentAudibleMusicEventGroup");
static_assert(offsetof(UFabricSpeakerManagerComponent, AboveEmotesTag) == 232, "Offset mismatch for UFabricSpeakerManagerComponent::AboveEmotesTag");
static_assert(offsetof(UFabricSpeakerManagerComponent, BelowEmotesTag) == 236, "Offset mismatch for UFabricSpeakerManagerComponent::BelowEmotesTag");
static_assert(offsetof(UFabricSpeakerManagerComponent, ReplicatedReceivedSignalBufferDuration) == 240, "Offset mismatch for UFabricSpeakerManagerComponent::ReplicatedReceivedSignalBufferDuration");

// /Script/FabricRuntime.FabricStepSequencerComponent
// Kind: Class; super: ActorComponent
class UFabricStepSequencerComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnNumTracksChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNumStepsChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPageChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStepRateChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimeSignatureChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeatScaleChanged; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeatOffsetChanged; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStepChanged; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNoteStyleChanged; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFullTableChanged; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPageCleared; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoopEnded; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString LengthParam; // 0x0190 (Size: 0x10, Type: StrProperty)
    FString DurationParam; // 0x01A0 (Size: 0x10, Type: StrProperty)
    FString PageParam; // 0x01B0 (Size: 0x10, Type: StrProperty)
    FString AutoPageParam; // 0x01C0 (Size: 0x10, Type: StrProperty)
    FString OctaveParam; // 0x01D0 (Size: 0x10, Type: StrProperty)
    FString NoteStyleParam; // 0x01E0 (Size: 0x10, Type: StrProperty)
    FString LoopParam; // 0x01F0 (Size: 0x10, Type: StrProperty)
    FString AutoPagePlaysBlankPagesParam; // 0x0200 (Size: 0x10, Type: StrProperty)
    std::uint8_t bMonophonic; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsContinuation; // 0x0211 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0212
    float StepRate; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float StepBeatScale; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSkipFourthStepInTriplet; // 0x021C (Size: 0x1, Type: BoolProperty)
    std::uint8_t NoteStyle; // 0x021D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x021E
    std::int32_t MaxSteps; // 0x0220 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentSteps; // 0x0224 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMatchStepsToTimeSignature; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0229
    std::int32_t MaxPages; // 0x022C (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPage; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTracks; // 0x0234 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentTracks; // 0x0238 (Size: 0x4, Type: IntProperty)
    std::int32_t LocalInteractionStartTrackIndex; // 0x023C (Size: 0x4, Type: IntProperty)
    std::int32_t LocalInteractionStartStepIndex; // 0x0240 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoPage; // 0x0244 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoPagePlaysBlankPages; // 0x0245 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoop; // 0x0246 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RandomizationCommonSampleSize; // 0x0247 (Size: 0x1, Type: ByteProperty)
    float RandomizationRestSelectionMaxPct; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float RandomizationCommonPitchSelectionMaxPct; // 0x024C (Size: 0x4, Type: FloatProperty)
    void* ContinuationControlClass; // 0x0250 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LocalStepTable[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t PackedStepTable[0x50]; // 0x0280 (Size: 0x50, Type: StructProperty)
    void* StepSequencerModulatable; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* CachedContinuationControl; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ContinuationRowIndex; // 0x02E0 (Size: 0x4, Type: IntProperty)
    std::int32_t ContinuationStepIndex; // 0x02E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x8]; // 0x02E8
    void* MetaSoundMidiStepSequence; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricStepSequencerComponent, OnNumTracksChanged) == 208, "Offset mismatch for UFabricStepSequencerComponent::OnNumTracksChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnNumStepsChanged) == 224, "Offset mismatch for UFabricStepSequencerComponent::OnNumStepsChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnPageChanged) == 240, "Offset mismatch for UFabricStepSequencerComponent::OnPageChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnStepRateChanged) == 256, "Offset mismatch for UFabricStepSequencerComponent::OnStepRateChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnTimeSignatureChanged) == 272, "Offset mismatch for UFabricStepSequencerComponent::OnTimeSignatureChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnBeatScaleChanged) == 288, "Offset mismatch for UFabricStepSequencerComponent::OnBeatScaleChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnBeatOffsetChanged) == 304, "Offset mismatch for UFabricStepSequencerComponent::OnBeatOffsetChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnStepChanged) == 320, "Offset mismatch for UFabricStepSequencerComponent::OnStepChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnNoteStyleChanged) == 336, "Offset mismatch for UFabricStepSequencerComponent::OnNoteStyleChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnFullTableChanged) == 352, "Offset mismatch for UFabricStepSequencerComponent::OnFullTableChanged");
static_assert(offsetof(UFabricStepSequencerComponent, OnPageCleared) == 368, "Offset mismatch for UFabricStepSequencerComponent::OnPageCleared");
static_assert(offsetof(UFabricStepSequencerComponent, OnLoopEnded) == 384, "Offset mismatch for UFabricStepSequencerComponent::OnLoopEnded");
static_assert(offsetof(UFabricStepSequencerComponent, LengthParam) == 400, "Offset mismatch for UFabricStepSequencerComponent::LengthParam");
static_assert(offsetof(UFabricStepSequencerComponent, DurationParam) == 416, "Offset mismatch for UFabricStepSequencerComponent::DurationParam");
static_assert(offsetof(UFabricStepSequencerComponent, PageParam) == 432, "Offset mismatch for UFabricStepSequencerComponent::PageParam");
static_assert(offsetof(UFabricStepSequencerComponent, AutoPageParam) == 448, "Offset mismatch for UFabricStepSequencerComponent::AutoPageParam");
static_assert(offsetof(UFabricStepSequencerComponent, OctaveParam) == 464, "Offset mismatch for UFabricStepSequencerComponent::OctaveParam");
static_assert(offsetof(UFabricStepSequencerComponent, NoteStyleParam) == 480, "Offset mismatch for UFabricStepSequencerComponent::NoteStyleParam");
static_assert(offsetof(UFabricStepSequencerComponent, LoopParam) == 496, "Offset mismatch for UFabricStepSequencerComponent::LoopParam");
static_assert(offsetof(UFabricStepSequencerComponent, AutoPagePlaysBlankPagesParam) == 512, "Offset mismatch for UFabricStepSequencerComponent::AutoPagePlaysBlankPagesParam");
static_assert(offsetof(UFabricStepSequencerComponent, bMonophonic) == 528, "Offset mismatch for UFabricStepSequencerComponent::bMonophonic");
static_assert(offsetof(UFabricStepSequencerComponent, bSupportsContinuation) == 529, "Offset mismatch for UFabricStepSequencerComponent::bSupportsContinuation");
static_assert(offsetof(UFabricStepSequencerComponent, StepRate) == 532, "Offset mismatch for UFabricStepSequencerComponent::StepRate");
static_assert(offsetof(UFabricStepSequencerComponent, StepBeatScale) == 536, "Offset mismatch for UFabricStepSequencerComponent::StepBeatScale");
static_assert(offsetof(UFabricStepSequencerComponent, bSkipFourthStepInTriplet) == 540, "Offset mismatch for UFabricStepSequencerComponent::bSkipFourthStepInTriplet");
static_assert(offsetof(UFabricStepSequencerComponent, NoteStyle) == 541, "Offset mismatch for UFabricStepSequencerComponent::NoteStyle");
static_assert(offsetof(UFabricStepSequencerComponent, MaxSteps) == 544, "Offset mismatch for UFabricStepSequencerComponent::MaxSteps");
static_assert(offsetof(UFabricStepSequencerComponent, CurrentSteps) == 548, "Offset mismatch for UFabricStepSequencerComponent::CurrentSteps");
static_assert(offsetof(UFabricStepSequencerComponent, bMatchStepsToTimeSignature) == 552, "Offset mismatch for UFabricStepSequencerComponent::bMatchStepsToTimeSignature");
static_assert(offsetof(UFabricStepSequencerComponent, MaxPages) == 556, "Offset mismatch for UFabricStepSequencerComponent::MaxPages");
static_assert(offsetof(UFabricStepSequencerComponent, CurrentPage) == 560, "Offset mismatch for UFabricStepSequencerComponent::CurrentPage");
static_assert(offsetof(UFabricStepSequencerComponent, MaxTracks) == 564, "Offset mismatch for UFabricStepSequencerComponent::MaxTracks");
static_assert(offsetof(UFabricStepSequencerComponent, CurrentTracks) == 568, "Offset mismatch for UFabricStepSequencerComponent::CurrentTracks");
static_assert(offsetof(UFabricStepSequencerComponent, LocalInteractionStartTrackIndex) == 572, "Offset mismatch for UFabricStepSequencerComponent::LocalInteractionStartTrackIndex");
static_assert(offsetof(UFabricStepSequencerComponent, LocalInteractionStartStepIndex) == 576, "Offset mismatch for UFabricStepSequencerComponent::LocalInteractionStartStepIndex");
static_assert(offsetof(UFabricStepSequencerComponent, bAutoPage) == 580, "Offset mismatch for UFabricStepSequencerComponent::bAutoPage");
static_assert(offsetof(UFabricStepSequencerComponent, bAutoPagePlaysBlankPages) == 581, "Offset mismatch for UFabricStepSequencerComponent::bAutoPagePlaysBlankPages");
static_assert(offsetof(UFabricStepSequencerComponent, bLoop) == 582, "Offset mismatch for UFabricStepSequencerComponent::bLoop");
static_assert(offsetof(UFabricStepSequencerComponent, RandomizationCommonSampleSize) == 583, "Offset mismatch for UFabricStepSequencerComponent::RandomizationCommonSampleSize");
static_assert(offsetof(UFabricStepSequencerComponent, RandomizationRestSelectionMaxPct) == 584, "Offset mismatch for UFabricStepSequencerComponent::RandomizationRestSelectionMaxPct");
static_assert(offsetof(UFabricStepSequencerComponent, RandomizationCommonPitchSelectionMaxPct) == 588, "Offset mismatch for UFabricStepSequencerComponent::RandomizationCommonPitchSelectionMaxPct");
static_assert(offsetof(UFabricStepSequencerComponent, ContinuationControlClass) == 592, "Offset mismatch for UFabricStepSequencerComponent::ContinuationControlClass");
static_assert(offsetof(UFabricStepSequencerComponent, LocalStepTable) == 600, "Offset mismatch for UFabricStepSequencerComponent::LocalStepTable");
static_assert(offsetof(UFabricStepSequencerComponent, PackedStepTable) == 640, "Offset mismatch for UFabricStepSequencerComponent::PackedStepTable");
static_assert(offsetof(UFabricStepSequencerComponent, StepSequencerModulatable) == 720, "Offset mismatch for UFabricStepSequencerComponent::StepSequencerModulatable");
static_assert(offsetof(UFabricStepSequencerComponent, CachedContinuationControl) == 728, "Offset mismatch for UFabricStepSequencerComponent::CachedContinuationControl");
static_assert(offsetof(UFabricStepSequencerComponent, ContinuationRowIndex) == 736, "Offset mismatch for UFabricStepSequencerComponent::ContinuationRowIndex");
static_assert(offsetof(UFabricStepSequencerComponent, ContinuationStepIndex) == 740, "Offset mismatch for UFabricStepSequencerComponent::ContinuationStepIndex");
static_assert(offsetof(UFabricStepSequencerComponent, MetaSoundMidiStepSequence) == 752, "Offset mismatch for UFabricStepSequencerComponent::MetaSoundMidiStepSequence");

// /Script/FabricRuntime.FabricStepSequencerGridComponent
// Kind: Class; super: SceneComponent
class UFabricStepSequencerGridComponent
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    std::uint8_t GridExtents[0x10]; // 0x0250 (Size: 0x10, Type: StructProperty)
    std::uint8_t GridSpacing[0x10]; // 0x0260 (Size: 0x10, Type: StructProperty)
    std::int32_t SingleTrackNumItemsPerRow; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0274
    std::uint8_t EditorPreviewGridSize[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    void* GridSquareClassPtr; // 0x0288 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GridSquareClass[0x20]; // 0x0290 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SequencerType; // 0x02B0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02B1
    std::int32_t ActiveTrack; // 0x02B4 (Size: 0x4, Type: IntProperty)
    void* StepSequencer; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GridRows; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x20]; // 0x02D0
    std::int32_t MaxTrackIndexToLoadSquares; // 0x02F0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFabricStepSequencerGridComponent, GridExtents) == 592, "Offset mismatch for UFabricStepSequencerGridComponent::GridExtents");
static_assert(offsetof(UFabricStepSequencerGridComponent, GridSpacing) == 608, "Offset mismatch for UFabricStepSequencerGridComponent::GridSpacing");
static_assert(offsetof(UFabricStepSequencerGridComponent, SingleTrackNumItemsPerRow) == 624, "Offset mismatch for UFabricStepSequencerGridComponent::SingleTrackNumItemsPerRow");
static_assert(offsetof(UFabricStepSequencerGridComponent, EditorPreviewGridSize) == 632, "Offset mismatch for UFabricStepSequencerGridComponent::EditorPreviewGridSize");
static_assert(offsetof(UFabricStepSequencerGridComponent, GridSquareClassPtr) == 648, "Offset mismatch for UFabricStepSequencerGridComponent::GridSquareClassPtr");
static_assert(offsetof(UFabricStepSequencerGridComponent, GridSquareClass) == 656, "Offset mismatch for UFabricStepSequencerGridComponent::GridSquareClass");
static_assert(offsetof(UFabricStepSequencerGridComponent, SequencerType) == 688, "Offset mismatch for UFabricStepSequencerGridComponent::SequencerType");
static_assert(offsetof(UFabricStepSequencerGridComponent, ActiveTrack) == 692, "Offset mismatch for UFabricStepSequencerGridComponent::ActiveTrack");
static_assert(offsetof(UFabricStepSequencerGridComponent, StepSequencer) == 696, "Offset mismatch for UFabricStepSequencerGridComponent::StepSequencer");
static_assert(offsetof(UFabricStepSequencerGridComponent, GridRows) == 704, "Offset mismatch for UFabricStepSequencerGridComponent::GridRows");
static_assert(offsetof(UFabricStepSequencerGridComponent, MaxTrackIndexToLoadSquares) == 752, "Offset mismatch for UFabricStepSequencerGridComponent::MaxTrackIndexToLoadSquares");

// /Script/FabricRuntime.FabricStepSequencerGridSquareComponent
// Kind: Class; super: StaticMeshComponent
class UFabricStepSequencerGridSquareComponent
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    float ContinuationControlInteractionDelay; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06C4
    void* AssignedStepSequencer; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ActiveTrack; // 0x06D0 (Size: 0x4, Type: IntProperty)
    std::int32_t AssignedStep; // 0x06D4 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousFocusStepIndex; // 0x06D8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFabricStepSequencerGridSquareComponent, ContinuationControlInteractionDelay) == 1728, "Offset mismatch for UFabricStepSequencerGridSquareComponent::ContinuationControlInteractionDelay");
static_assert(offsetof(UFabricStepSequencerGridSquareComponent, AssignedStepSequencer) == 1736, "Offset mismatch for UFabricStepSequencerGridSquareComponent::AssignedStepSequencer");
static_assert(offsetof(UFabricStepSequencerGridSquareComponent, ActiveTrack) == 1744, "Offset mismatch for UFabricStepSequencerGridSquareComponent::ActiveTrack");
static_assert(offsetof(UFabricStepSequencerGridSquareComponent, AssignedStep) == 1748, "Offset mismatch for UFabricStepSequencerGridSquareComponent::AssignedStep");
static_assert(offsetof(UFabricStepSequencerGridSquareComponent, PreviousFocusStepIndex) == 1752, "Offset mismatch for UFabricStepSequencerGridSquareComponent::PreviousFocusStepIndex");

// /Script/FabricRuntime.FabricStepSequencerModulatable
// Kind: Class; super: FabricModulatable
class UFabricStepSequencerModulatable
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t bIsChromatic; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModulationValueChanged; // 0x0169 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricStepSequencerModulatable, bIsChromatic) == 360, "Offset mismatch for UFabricStepSequencerModulatable::bIsChromatic");
static_assert(offsetof(UFabricStepSequencerModulatable, bModulationValueChanged) == 361, "Offset mismatch for UFabricStepSequencerModulatable::bModulationValueChanged");

// /Script/FabricRuntime.FabricSteppedPreviewFXComponent
// Kind: Class; super: InstancedStaticMeshComponent
class UFabricSteppedPreviewFXComponent
{
public:
    std::uint8_t Pad_0000[0xA60]; // 0x0000
    std::int32_t NumberOfSteps; // 0x0A60 (Size: 0x4, Type: IntProperty)
    std::uint8_t bManuallySpaceMeshInstances; // 0x0A64 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleRows; // 0x0A65 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0A66
    std::int32_t InstanceCountPerRow; // 0x0A68 (Size: 0x4, Type: IntProperty)
    float SpaceBetweenInstanceRows; // 0x0A6C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlignToTransformCenter; // 0x0A70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0A71
    float CenterAlignmentBounds; // 0x0A74 (Size: 0x4, Type: FloatProperty)
    float DistanceBetweenInstances; // 0x0A78 (Size: 0x4, Type: FloatProperty)
    float DistanceBetweenTripletInstances; // 0x0A7C (Size: 0x4, Type: FloatProperty)
    float DistanceBetweenInstanceSets; // 0x0A80 (Size: 0x4, Type: FloatProperty)
    float DistanceBetweenTripletInstanceSets; // 0x0A84 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NoteStyle; // 0x0A88 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0A89
    std::int32_t CPDDeviceEnabled; // 0x0A8C (Size: 0x4, Type: IntProperty)
    std::int32_t CPDNumSteps; // 0x0A90 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDNoteOn; // 0x0A94 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDNoteLength; // 0x0A98 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDSpanLength; // 0x0A9C (Size: 0x4, Type: IntProperty)
    std::int32_t PICDNoteTime; // 0x0AA0 (Size: 0x4, Type: IntProperty)
    std::int32_t PICDGenericFloatIndex; // 0x0AA4 (Size: 0x4, Type: IntProperty)
    float LengthStepBeats; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    float StepRate; // 0x0AAC (Size: 0x4, Type: FloatProperty)
    float StepBeatScale; // 0x0AB0 (Size: 0x4, Type: FloatProperty)
    float StepBeatOffset; // 0x0AB4 (Size: 0x4, Type: FloatProperty)
    std::int32_t TimeSignatureNumerator; // 0x0AB8 (Size: 0x4, Type: IntProperty)
    std::int32_t TimeSignatureDenominator; // 0x0ABC (Size: 0x4, Type: IntProperty)
    float LengthTrackBeats; // 0x0AC0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0AC4
    double InstanceSpace; // 0x0AC8 (Size: 0x8, Type: DoubleProperty)
    double InstanceSetSpace; // 0x0AD0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFabricSteppedPreviewFXComponent, NumberOfSteps) == 2656, "Offset mismatch for UFabricSteppedPreviewFXComponent::NumberOfSteps");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, bManuallySpaceMeshInstances) == 2660, "Offset mismatch for UFabricSteppedPreviewFXComponent::bManuallySpaceMeshInstances");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, bAllowMultipleRows) == 2661, "Offset mismatch for UFabricSteppedPreviewFXComponent::bAllowMultipleRows");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, InstanceCountPerRow) == 2664, "Offset mismatch for UFabricSteppedPreviewFXComponent::InstanceCountPerRow");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, SpaceBetweenInstanceRows) == 2668, "Offset mismatch for UFabricSteppedPreviewFXComponent::SpaceBetweenInstanceRows");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, bAlignToTransformCenter) == 2672, "Offset mismatch for UFabricSteppedPreviewFXComponent::bAlignToTransformCenter");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, CenterAlignmentBounds) == 2676, "Offset mismatch for UFabricSteppedPreviewFXComponent::CenterAlignmentBounds");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, DistanceBetweenInstances) == 2680, "Offset mismatch for UFabricSteppedPreviewFXComponent::DistanceBetweenInstances");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, DistanceBetweenTripletInstances) == 2684, "Offset mismatch for UFabricSteppedPreviewFXComponent::DistanceBetweenTripletInstances");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, DistanceBetweenInstanceSets) == 2688, "Offset mismatch for UFabricSteppedPreviewFXComponent::DistanceBetweenInstanceSets");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, DistanceBetweenTripletInstanceSets) == 2692, "Offset mismatch for UFabricSteppedPreviewFXComponent::DistanceBetweenTripletInstanceSets");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, NoteStyle) == 2696, "Offset mismatch for UFabricSteppedPreviewFXComponent::NoteStyle");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, CPDDeviceEnabled) == 2700, "Offset mismatch for UFabricSteppedPreviewFXComponent::CPDDeviceEnabled");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, CPDNumSteps) == 2704, "Offset mismatch for UFabricSteppedPreviewFXComponent::CPDNumSteps");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, PICDNoteOn) == 2708, "Offset mismatch for UFabricSteppedPreviewFXComponent::PICDNoteOn");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, PICDNoteLength) == 2712, "Offset mismatch for UFabricSteppedPreviewFXComponent::PICDNoteLength");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, PICDSpanLength) == 2716, "Offset mismatch for UFabricSteppedPreviewFXComponent::PICDSpanLength");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, PICDNoteTime) == 2720, "Offset mismatch for UFabricSteppedPreviewFXComponent::PICDNoteTime");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, PICDGenericFloatIndex) == 2724, "Offset mismatch for UFabricSteppedPreviewFXComponent::PICDGenericFloatIndex");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, LengthStepBeats) == 2728, "Offset mismatch for UFabricSteppedPreviewFXComponent::LengthStepBeats");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, StepRate) == 2732, "Offset mismatch for UFabricSteppedPreviewFXComponent::StepRate");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, StepBeatScale) == 2736, "Offset mismatch for UFabricSteppedPreviewFXComponent::StepBeatScale");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, StepBeatOffset) == 2740, "Offset mismatch for UFabricSteppedPreviewFXComponent::StepBeatOffset");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, TimeSignatureNumerator) == 2744, "Offset mismatch for UFabricSteppedPreviewFXComponent::TimeSignatureNumerator");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, TimeSignatureDenominator) == 2748, "Offset mismatch for UFabricSteppedPreviewFXComponent::TimeSignatureDenominator");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, LengthTrackBeats) == 2752, "Offset mismatch for UFabricSteppedPreviewFXComponent::LengthTrackBeats");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, InstanceSpace) == 2760, "Offset mismatch for UFabricSteppedPreviewFXComponent::InstanceSpace");
static_assert(offsetof(UFabricSteppedPreviewFXComponent, InstanceSetSpace) == 2768, "Offset mismatch for UFabricSteppedPreviewFXComponent::InstanceSetSpace");

// /Script/FabricRuntime.FabricTextureGenerator
// Kind: Class; super: Interface
class UFabricTextureGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricTextureModifier
// Kind: Class; super: Interface
class UFabricTextureModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricTextureModifierBase
// Kind: Class; super: FabricModulatable
class UFabricTextureModifierBase
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FMulticastInlineDelegate OnSourceTexturesChanged; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ModifiedTexture; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricTextureModifierBase, OnSourceTexturesChanged) == 232, "Offset mismatch for UFabricTextureModifierBase::OnSourceTexturesChanged");
static_assert(offsetof(UFabricTextureModifierBase, ModifiedTexture) == 248, "Offset mismatch for UFabricTextureModifierBase::ModifiedTexture");

// /Script/FabricRuntime.FabricTextureProviderBase
// Kind: Class; super: Object
class UFabricTextureProviderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnTextureChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SourceTexture[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float CurrentCableFloatValue; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float CurrentCableFloatDirection; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float TimeElapsedSinceLastCableFloatDirty; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentCableFloatDirty; // 0x005C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricTextureProviderBase, OnTextureChanged) == 40, "Offset mismatch for UFabricTextureProviderBase::OnTextureChanged");
static_assert(offsetof(UFabricTextureProviderBase, SourceTexture) == 56, "Offset mismatch for UFabricTextureProviderBase::SourceTexture");
static_assert(offsetof(UFabricTextureProviderBase, CurrentCableFloatValue) == 80, "Offset mismatch for UFabricTextureProviderBase::CurrentCableFloatValue");
static_assert(offsetof(UFabricTextureProviderBase, CurrentCableFloatDirection) == 84, "Offset mismatch for UFabricTextureProviderBase::CurrentCableFloatDirection");
static_assert(offsetof(UFabricTextureProviderBase, TimeElapsedSinceLastCableFloatDirty) == 88, "Offset mismatch for UFabricTextureProviderBase::TimeElapsedSinceLastCableFloatDirty");
static_assert(offsetof(UFabricTextureProviderBase, bCurrentCableFloatDirty) == 92, "Offset mismatch for UFabricTextureProviderBase::bCurrentCableFloatDirty");

// /Script/FabricRuntime.FabricTextureReceiver
// Kind: Class; super: Interface
class UFabricTextureReceiver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricTextureTreeNode
// Kind: Class; super: Object
class UFabricTextureTreeNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Children; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Texture[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricTextureTreeNode, Children) == 40, "Offset mismatch for UFabricTextureTreeNode::Children");
static_assert(offsetof(UFabricTextureTreeNode, Texture) == 56, "Offset mismatch for UFabricTextureTreeNode::Texture");

// /Script/FabricRuntime.FabricTimelinePreviewComponent
// Kind: Class; super: ActorComponent
class UFabricTimelinePreviewComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CurrentTimeline; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricTimelinePreviewComponent, CurrentTimeline) == 192, "Offset mismatch for UFabricTimelinePreviewComponent::CurrentTimeline");

// /Script/FabricRuntime.FabricTimelineSyncComponent
// Kind: Class; super: ActorComponent
class UFabricTimelineSyncComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    float ThresholdForSeekMS; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float ThresholdForSeekWhenSpeedSyncDisallowedMS; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float ThresholdForStartSpeedAdjustMS; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float ThresholdForEndOfSpeedAdjustMS; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float SpeedAdjustFactor; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPrintToScreen; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLogCorrectedServerTimeDelta; // 0x00E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E6
    float SpeedSyncTimeoutLength; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float TempoDeltaThrottleSeconds; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MassiveSyncErrorTimeThresholdMin; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MassiveSyncErrorTimeThresholdMax; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float MassiveSyncErrorTimeThresholdMultiplier; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    void* MetaSoundManager; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0110
    std::uint8_t ServerTimelineSyncServerSongPosition[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFabricTimelineSyncComponent, ThresholdForSeekMS) == 208, "Offset mismatch for UFabricTimelineSyncComponent::ThresholdForSeekMS");
static_assert(offsetof(UFabricTimelineSyncComponent, ThresholdForSeekWhenSpeedSyncDisallowedMS) == 212, "Offset mismatch for UFabricTimelineSyncComponent::ThresholdForSeekWhenSpeedSyncDisallowedMS");
static_assert(offsetof(UFabricTimelineSyncComponent, ThresholdForStartSpeedAdjustMS) == 216, "Offset mismatch for UFabricTimelineSyncComponent::ThresholdForStartSpeedAdjustMS");
static_assert(offsetof(UFabricTimelineSyncComponent, ThresholdForEndOfSpeedAdjustMS) == 220, "Offset mismatch for UFabricTimelineSyncComponent::ThresholdForEndOfSpeedAdjustMS");
static_assert(offsetof(UFabricTimelineSyncComponent, SpeedAdjustFactor) == 224, "Offset mismatch for UFabricTimelineSyncComponent::SpeedAdjustFactor");
static_assert(offsetof(UFabricTimelineSyncComponent, bPrintToScreen) == 228, "Offset mismatch for UFabricTimelineSyncComponent::bPrintToScreen");
static_assert(offsetof(UFabricTimelineSyncComponent, bLogCorrectedServerTimeDelta) == 229, "Offset mismatch for UFabricTimelineSyncComponent::bLogCorrectedServerTimeDelta");
static_assert(offsetof(UFabricTimelineSyncComponent, SpeedSyncTimeoutLength) == 232, "Offset mismatch for UFabricTimelineSyncComponent::SpeedSyncTimeoutLength");
static_assert(offsetof(UFabricTimelineSyncComponent, TempoDeltaThrottleSeconds) == 236, "Offset mismatch for UFabricTimelineSyncComponent::TempoDeltaThrottleSeconds");
static_assert(offsetof(UFabricTimelineSyncComponent, MassiveSyncErrorTimeThresholdMin) == 240, "Offset mismatch for UFabricTimelineSyncComponent::MassiveSyncErrorTimeThresholdMin");
static_assert(offsetof(UFabricTimelineSyncComponent, MassiveSyncErrorTimeThresholdMax) == 244, "Offset mismatch for UFabricTimelineSyncComponent::MassiveSyncErrorTimeThresholdMax");
static_assert(offsetof(UFabricTimelineSyncComponent, MassiveSyncErrorTimeThresholdMultiplier) == 248, "Offset mismatch for UFabricTimelineSyncComponent::MassiveSyncErrorTimeThresholdMultiplier");
static_assert(offsetof(UFabricTimelineSyncComponent, MetaSoundManager) == 256, "Offset mismatch for UFabricTimelineSyncComponent::MetaSoundManager");
static_assert(offsetof(UFabricTimelineSyncComponent, MusicClock) == 264, "Offset mismatch for UFabricTimelineSyncComponent::MusicClock");
static_assert(offsetof(UFabricTimelineSyncComponent, ServerTimelineSyncServerSongPosition) == 280, "Offset mismatch for UFabricTimelineSyncComponent::ServerTimelineSyncServerSongPosition");

// /Script/FabricRuntime.FabricTimelineSyncTargetInterface
// Kind: Class; super: Interface
class UFabricTimelineSyncTargetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricRuntime.FabricVFXTopperDataAsset
// Kind: Class; super: DataAsset
class UFabricVFXTopperDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> VFXTopperDataEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricVFXTopperDataAsset, VFXTopperDataEntries) == 40, "Offset mismatch for UFabricVFXTopperDataAsset::VFXTopperDataEntries");

// /Script/FabricRuntime.FabricWaveformTexture
// Kind: Class; super: Object
class UFabricWaveformTexture
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t WaveformNumSamplesHeld; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t WaveformSmoothingDistance; // 0x0034 (Size: 0x4, Type: IntProperty)
    float WaveformSmoothingFactor; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WaveformDecayPerSecond; // 0x003C (Size: 0x4, Type: FloatProperty)
    void* WaveformTexture; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableTextureRequests; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricWaveformTexture, WaveformNumSamplesHeld) == 48, "Offset mismatch for UFabricWaveformTexture::WaveformNumSamplesHeld");
static_assert(offsetof(UFabricWaveformTexture, WaveformSmoothingDistance) == 52, "Offset mismatch for UFabricWaveformTexture::WaveformSmoothingDistance");
static_assert(offsetof(UFabricWaveformTexture, WaveformSmoothingFactor) == 56, "Offset mismatch for UFabricWaveformTexture::WaveformSmoothingFactor");
static_assert(offsetof(UFabricWaveformTexture, WaveformDecayPerSecond) == 60, "Offset mismatch for UFabricWaveformTexture::WaveformDecayPerSecond");
static_assert(offsetof(UFabricWaveformTexture, WaveformTexture) == 64, "Offset mismatch for UFabricWaveformTexture::WaveformTexture");
static_assert(offsetof(UFabricWaveformTexture, bEnableTextureRequests) == 72, "Offset mismatch for UFabricWaveformTexture::bEnableTextureRequests");

// /Script/FabricRuntime.FortGameplayAbility_FabricInteractableTargeting
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_FabricInteractableTargeting
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* TargetingPreset; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetsChangedTag[0x8]; // 0x0B28 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingInterval[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    void* PayloadCache; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AsyncTargetingHandle[0x8]; // 0x0B60 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetingTimerHandle[0x1]; // 0x0B68 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, TargetingPreset) == 2848, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::TargetingPreset");
static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, TargetsChangedTag) == 2856, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::TargetsChangedTag");
static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, TargetingInterval) == 2864, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::TargetingInterval");
static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, PayloadCache) == 2904, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::PayloadCache");
static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, AsyncTargetingHandle) == 2912, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::AsyncTargetingHandle");
static_assert(offsetof(UFortGameplayAbility_FabricInteractableTargeting, TargetingTimerHandle) == 2920, "Offset mismatch for UFortGameplayAbility_FabricInteractableTargeting::TargetingTimerHandle");
