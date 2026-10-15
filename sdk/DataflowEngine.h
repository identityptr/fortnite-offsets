/**
 * decamp dumper generated SDK
 * Package: /Script/DataflowEngine
 */
#pragma once
#include "Basic.h"

// /Script/DataflowEngine.DataflowCallSubGraphNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowCallSubGraphNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t SubGraphGuid[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    FName SubGraphName; // 0x0100 (Size: 0x8, Type: NameProperty)
    std::uint8_t DynamicInputs[0x40]; // 0x0108 (Size: 0x40, Type: StructProperty)
    std::uint8_t InputsPropertyBag[0x10]; // 0x0148 (Size: 0x10, Type: StructProperty)
    std::uint8_t DynamicOutputs[0x40]; // 0x0158 (Size: 0x40, Type: StructProperty)
    std::uint8_t OutputsPropertyBag[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowCallSubGraphNode, SubGraphGuid) == 240, "Offset mismatch for FDataflowCallSubGraphNode::SubGraphGuid");
static_assert(offsetof(FDataflowCallSubGraphNode, SubGraphName) == 256, "Offset mismatch for FDataflowCallSubGraphNode::SubGraphName");
static_assert(offsetof(FDataflowCallSubGraphNode, DynamicInputs) == 264, "Offset mismatch for FDataflowCallSubGraphNode::DynamicInputs");
static_assert(offsetof(FDataflowCallSubGraphNode, InputsPropertyBag) == 328, "Offset mismatch for FDataflowCallSubGraphNode::InputsPropertyBag");
static_assert(offsetof(FDataflowCallSubGraphNode, DynamicOutputs) == 344, "Offset mismatch for FDataflowCallSubGraphNode::DynamicOutputs");
static_assert(offsetof(FDataflowCallSubGraphNode, OutputsPropertyBag) == 408, "Offset mismatch for FDataflowCallSubGraphNode::OutputsPropertyBag");

// /Script/DataflowEngine.DataflowColorRamp
// Kind: ScriptStruct; super: none
struct FDataflowColorRamp
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowDynamicConnections
// Kind: ScriptStruct; super: none
struct FDataflowDynamicConnections
{
public:
    TArray<void*> DynamicProperties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowDynamicConnections, DynamicProperties) == 0, "Offset mismatch for FDataflowDynamicConnections::DynamicProperties");

// /Script/DataflowEngine.DataflowGetAssetPathNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetAssetPathNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Asset[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    FString Path; // 0x00E8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDataflowGetAssetPathNode, Asset) == 224, "Offset mismatch for FDataflowGetAssetPathNode::Asset");
static_assert(offsetof(FDataflowGetAssetPathNode, Path) == 232, "Offset mismatch for FDataflowGetAssetPathNode::Path");

// /Script/DataflowEngine.DataflowGetTextureAssetFromPathNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetTextureAssetFromPathNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString TexturePath; // 0x00E0 (Size: 0x10, Type: StrProperty)
    void* TextureAsset; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowGetTextureAssetFromPathNode, TexturePath) == 224, "Offset mismatch for FDataflowGetTextureAssetFromPathNode::TexturePath");
static_assert(offsetof(FDataflowGetTextureAssetFromPathNode, TextureAsset) == 240, "Offset mismatch for FDataflowGetTextureAssetFromPathNode::TextureAsset");

// /Script/DataflowEngine.DataflowGetTextureAssetNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowGetTextureAssetNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TextureAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowGetTextureAssetNode, TextureAsset) == 224, "Offset mismatch for FDataflowGetTextureAssetNode::TextureAsset");

// /Script/DataflowEngine.DataflowImageToTextureNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowImageToTextureNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Image[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    FName TextureName; // 0x0108 (Size: 0x8, Type: NameProperty)
    void* TransientTexture; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowImageToTextureNode, Image) == 224, "Offset mismatch for FDataflowImageToTextureNode::Image");
static_assert(offsetof(FDataflowImageToTextureNode, TextureName) == 264, "Offset mismatch for FDataflowImageToTextureNode::TextureName");
static_assert(offsetof(FDataflowImageToTextureNode, TransientTexture) == 272, "Offset mismatch for FDataflowImageToTextureNode::TransientTexture");

// /Script/DataflowEngine.DataflowInstance
// Kind: ScriptStruct; super: none
struct FDataflowInstance
{
public:
    void* DataflowAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName DataflowTerminal; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t VariableOverrides[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> PerNodePropertyOverrides; // 0x0038 (Size: 0x10, Type: MapProperty)
    void* Owner; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowInstance, DataflowAsset) == 0, "Offset mismatch for FDataflowInstance::DataflowAsset");
static_assert(offsetof(FDataflowInstance, DataflowTerminal) == 8, "Offset mismatch for FDataflowInstance::DataflowTerminal");
static_assert(offsetof(FDataflowInstance, VariableOverrides) == 16, "Offset mismatch for FDataflowInstance::VariableOverrides");
static_assert(offsetof(FDataflowInstance, PerNodePropertyOverrides) == 56, "Offset mismatch for FDataflowInstance::PerNodePropertyOverrides");
static_assert(offsetof(FDataflowInstance, Owner) == 72, "Offset mismatch for FDataflowInstance::Owner");

// /Script/DataflowEngine.DataflowLinearColorRamp
// Kind: ScriptStruct; super: none
struct FDataflowLinearColorRamp
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t RichCurves[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowLinearColorRamp, RichCurves) == 32, "Offset mismatch for FDataflowLinearColorRamp::RichCurves");

// /Script/DataflowEngine.DataflowNodeDebugDrawSettings
// Kind: ScriptStruct; super: none
struct FDataflowNodeDebugDrawSettings
{
public:
    std::uint8_t RenderType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTranslucent; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t Color[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    float LineWidthMultiplier; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataflowNodeDebugDrawSettings, RenderType) == 0, "Offset mismatch for FDataflowNodeDebugDrawSettings::RenderType");
static_assert(offsetof(FDataflowNodeDebugDrawSettings, bTranslucent) == 1, "Offset mismatch for FDataflowNodeDebugDrawSettings::bTranslucent");
static_assert(offsetof(FDataflowNodeDebugDrawSettings, Color) == 4, "Offset mismatch for FDataflowNodeDebugDrawSettings::Color");
static_assert(offsetof(FDataflowNodeDebugDrawSettings, LineWidthMultiplier) == 20, "Offset mismatch for FDataflowNodeDebugDrawSettings::LineWidthMultiplier");

// /Script/DataflowEngine.DataflowNodeSphereCoveringDebugDrawSettings
// Kind: ScriptStruct; super: none
struct FDataflowNodeSphereCoveringDebugDrawSettings
{
public:
    std::uint8_t bDisplaySphereCovering; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RenderType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTranslucent; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float LineWidthMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorMethod; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Color[0x10]; // 0x000C (Size: 0x10, Type: StructProperty)
    std::int32_t ColorRandomSeed; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t ColorA[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorB[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, bDisplaySphereCovering) == 0, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::bDisplaySphereCovering");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, RenderType) == 1, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::RenderType");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, bTranslucent) == 2, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::bTranslucent");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, LineWidthMultiplier) == 4, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::LineWidthMultiplier");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, ColorMethod) == 8, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::ColorMethod");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, Color) == 12, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::Color");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, ColorRandomSeed) == 28, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::ColorRandomSeed");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, ColorA) == 32, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::ColorA");
static_assert(offsetof(FDataflowNodeSphereCoveringDebugDrawSettings, ColorB) == 48, "Offset mismatch for FDataflowNodeSphereCoveringDebugDrawSettings::ColorB");

// /Script/DataflowEngine.DataflowPathReplaceNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPathReplaceNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString Path; // 0x00E0 (Size: 0x10, Type: StrProperty)
    TArray<void*> PathRules; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NameRules; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowPathReplaceNode, Path) == 224, "Offset mismatch for FDataflowPathReplaceNode::Path");
static_assert(offsetof(FDataflowPathReplaceNode, PathRules) == 240, "Offset mismatch for FDataflowPathReplaceNode::PathRules");
static_assert(offsetof(FDataflowPathReplaceNode, NameRules) == 256, "Offset mismatch for FDataflowPathReplaceNode::NameRules");

// /Script/DataflowEngine.DataflowPathReplaceRule
// Kind: ScriptStruct; super: none
struct FDataflowPathReplaceRule
{
public:
    std::uint8_t Method; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString From; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString To; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIgnoreCase; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInsertIfNoFound; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowPathReplaceRule, Method) == 0, "Offset mismatch for FDataflowPathReplaceRule::Method");
static_assert(offsetof(FDataflowPathReplaceRule, From) == 8, "Offset mismatch for FDataflowPathReplaceRule::From");
static_assert(offsetof(FDataflowPathReplaceRule, To) == 24, "Offset mismatch for FDataflowPathReplaceRule::To");
static_assert(offsetof(FDataflowPathReplaceRule, bIgnoreCase) == 40, "Offset mismatch for FDataflowPathReplaceRule::bIgnoreCase");
static_assert(offsetof(FDataflowPathReplaceRule, bInsertIfNoFound) == 41, "Offset mismatch for FDataflowPathReplaceRule::bInsertIfNoFound");

// /Script/DataflowEngine.DataflowPreviewCacheParams
// Kind: ScriptStruct; super: none
struct FDataflowPreviewCacheParams
{
public:
    std::int32_t FrameRate; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SubframeRate; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanEditSubframeRate; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t TimeRange[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableRestartSimulation; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestartSimulation; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::uint8_t RestartTimeRange[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableStopCacheOnNonFinite; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopCacheOnNonFinite; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAsyncCaching; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAsyncCaching; // 0x0023 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowPreviewCacheParams, FrameRate) == 0, "Offset mismatch for FDataflowPreviewCacheParams::FrameRate");
static_assert(offsetof(FDataflowPreviewCacheParams, SubframeRate) == 4, "Offset mismatch for FDataflowPreviewCacheParams::SubframeRate");
static_assert(offsetof(FDataflowPreviewCacheParams, bCanEditSubframeRate) == 8, "Offset mismatch for FDataflowPreviewCacheParams::bCanEditSubframeRate");
static_assert(offsetof(FDataflowPreviewCacheParams, TimeRange) == 12, "Offset mismatch for FDataflowPreviewCacheParams::TimeRange");
static_assert(offsetof(FDataflowPreviewCacheParams, bEnableRestartSimulation) == 20, "Offset mismatch for FDataflowPreviewCacheParams::bEnableRestartSimulation");
static_assert(offsetof(FDataflowPreviewCacheParams, bRestartSimulation) == 21, "Offset mismatch for FDataflowPreviewCacheParams::bRestartSimulation");
static_assert(offsetof(FDataflowPreviewCacheParams, RestartTimeRange) == 24, "Offset mismatch for FDataflowPreviewCacheParams::RestartTimeRange");
static_assert(offsetof(FDataflowPreviewCacheParams, bEnableStopCacheOnNonFinite) == 32, "Offset mismatch for FDataflowPreviewCacheParams::bEnableStopCacheOnNonFinite");
static_assert(offsetof(FDataflowPreviewCacheParams, bStopCacheOnNonFinite) == 33, "Offset mismatch for FDataflowPreviewCacheParams::bStopCacheOnNonFinite");
static_assert(offsetof(FDataflowPreviewCacheParams, bEnableAsyncCaching) == 34, "Offset mismatch for FDataflowPreviewCacheParams::bEnableAsyncCaching");
static_assert(offsetof(FDataflowPreviewCacheParams, bAsyncCaching) == 35, "Offset mismatch for FDataflowPreviewCacheParams::bAsyncCaching");

// /Script/DataflowEngine.DataflowProxyElement
// Kind: ScriptStruct; super: DataflowBaseElement
struct FDataflowProxyElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowSkeleton
// Kind: ScriptStruct; super: none
struct FDataflowSkeleton
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowSubGraphGetCurrentIndexNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSubGraphGetCurrentIndexNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Index; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDataflowSubGraphGetCurrentIndexNode, Index) == 224, "Offset mismatch for FDataflowSubGraphGetCurrentIndexNode::Index");

// /Script/DataflowEngine.DataflowSubGraphInputNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSubGraphInputNode
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t DynamicConnections[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    std::uint8_t PropertyBag[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSubGraphInputNode, DynamicConnections) == 232, "Offset mismatch for FDataflowSubGraphInputNode::DynamicConnections");
static_assert(offsetof(FDataflowSubGraphInputNode, PropertyBag) == 296, "Offset mismatch for FDataflowSubGraphInputNode::PropertyBag");

// /Script/DataflowEngine.DataflowSubGraphOutputNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSubGraphOutputNode
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t DynamicConnections[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    std::uint8_t PropertyBag[0x1]; // 0x0128 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSubGraphOutputNode, DynamicConnections) == 232, "Offset mismatch for FDataflowSubGraphOutputNode::DynamicConnections");
static_assert(offsetof(FDataflowSubGraphOutputNode, PropertyBag) == 296, "Offset mismatch for FDataflowSubGraphOutputNode::PropertyBag");

// /Script/DataflowEngine.DataflowTexture2DTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FDataflowTexture2DTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Image[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    FString AssetPath; // 0x0108 (Size: 0x10, Type: StrProperty)
    void* TextureAsset; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowTexture2DTerminalNode, Image) == 224, "Offset mismatch for FDataflowTexture2DTerminalNode::Image");
static_assert(offsetof(FDataflowTexture2DTerminalNode, AssetPath) == 264, "Offset mismatch for FDataflowTexture2DTerminalNode::AssetPath");
static_assert(offsetof(FDataflowTexture2DTerminalNode, TextureAsset) == 280, "Offset mismatch for FDataflowTexture2DTerminalNode::TextureAsset");

// /Script/DataflowEngine.DataflowTextureTerminalNode
// Kind: ScriptStruct; super: DataflowTerminalNode
struct FDataflowTextureTerminalNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Image[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    void* TextureAsset; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowTextureTerminalNode, Image) == 224, "Offset mismatch for FDataflowTextureTerminalNode::Image");
static_assert(offsetof(FDataflowTextureTerminalNode, TextureAsset) == 264, "Offset mismatch for FDataflowTextureTerminalNode::TextureAsset");

// /Script/DataflowEngine.DataflowTextureToImageNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTextureToImageNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TextureAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Image[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTextureToImageNode, TextureAsset) == 224, "Offset mismatch for FDataflowTextureToImageNode::TextureAsset");
static_assert(offsetof(FDataflowTextureToImageNode, Image) == 232, "Offset mismatch for FDataflowTextureToImageNode::Image");

// /Script/DataflowEngine.DataflowVariable
// Kind: ScriptStruct; super: none
struct FDataflowVariable
{
public:
    std::uint8_t VariableName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ContainerType; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDataflowVariable, VariableName) == 0, "Offset mismatch for FDataflowVariable::VariableName");
static_assert(offsetof(FDataflowVariable, Type) == 4, "Offset mismatch for FDataflowVariable::Type");
static_assert(offsetof(FDataflowVariable, ContainerType) == 5, "Offset mismatch for FDataflowVariable::ContainerType");
static_assert(offsetof(FDataflowVariable, Value) == 8, "Offset mismatch for FDataflowVariable::Value");

// /Script/DataflowEngine.DataflowVariableOverrides
// Kind: ScriptStruct; super: none
struct FDataflowVariableOverrides
{
public:
    std::uint8_t Variables[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> OverriddenVariableGuids; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowVariableOverrides, Variables) == 0, "Offset mismatch for FDataflowVariableOverrides::Variables");
static_assert(offsetof(FDataflowVariableOverrides, OverriddenVariableGuids) == 16, "Offset mismatch for FDataflowVariableOverrides::OverriddenVariableGuids");

// /Script/DataflowEngine.GetDataflowVariableNode
// Kind: ScriptStruct; super: DataflowNode
struct FGetDataflowVariableNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t VariablePropertyBag[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    FName VariableName; // 0x00F8 (Size: 0x8, Type: NameProperty)
    FString Category; // 0x0100 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0110 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGetDataflowVariableNode, Value) == 224, "Offset mismatch for FGetDataflowVariableNode::Value");
static_assert(offsetof(FGetDataflowVariableNode, VariablePropertyBag) == 232, "Offset mismatch for FGetDataflowVariableNode::VariablePropertyBag");
static_assert(offsetof(FGetDataflowVariableNode, VariableName) == 248, "Offset mismatch for FGetDataflowVariableNode::VariableName");
static_assert(offsetof(FGetDataflowVariableNode, Category) == 256, "Offset mismatch for FGetDataflowVariableNode::Category");
static_assert(offsetof(FGetDataflowVariableNode, Description) == 272, "Offset mismatch for FGetDataflowVariableNode::Description");

// /Script/DataflowEngine.MergeSkeletonsDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FMergeSkeletonsDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Skeletons; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SharedRootPosition[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPreserveBoneNames; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    std::uint8_t MergedSkeleton[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMergeSkeletonsDataflowNode, Skeletons) == 224, "Offset mismatch for FMergeSkeletonsDataflowNode::Skeletons");
static_assert(offsetof(FMergeSkeletonsDataflowNode, SharedRootPosition) == 240, "Offset mismatch for FMergeSkeletonsDataflowNode::SharedRootPosition");
static_assert(offsetof(FMergeSkeletonsDataflowNode, bPreserveBoneNames) == 264, "Offset mismatch for FMergeSkeletonsDataflowNode::bPreserveBoneNames");
static_assert(offsetof(FMergeSkeletonsDataflowNode, MergedSkeleton) == 272, "Offset mismatch for FMergeSkeletonsDataflowNode::MergedSkeleton");

// /Script/DataflowEngine.StringValuePair
// Kind: ScriptStruct; super: none
struct FStringValuePair
{
public:
    FString Key; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStringValuePair, Key) == 0, "Offset mismatch for FStringValuePair::Key");
static_assert(offsetof(FStringValuePair, Value) == 16, "Offset mismatch for FStringValuePair::Value");

// /Script/DataflowEngine.Dataflow
// Kind: Class; super: EdGraph
class UDataflow
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bActive; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    TArray<void*> Targets; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Type; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00C9
    std::uint8_t Variables[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    void* ReferenceAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DataflowSubGraphs; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDataflow, bActive) == 168, "Offset mismatch for UDataflow::bActive");
static_assert(offsetof(UDataflow, Targets) == 176, "Offset mismatch for UDataflow::Targets");
static_assert(offsetof(UDataflow, Material) == 192, "Offset mismatch for UDataflow::Material");
static_assert(offsetof(UDataflow, Type) == 200, "Offset mismatch for UDataflow::Type");
static_assert(offsetof(UDataflow, Variables) == 208, "Offset mismatch for UDataflow::Variables");
static_assert(offsetof(UDataflow, ReferenceAsset) == 224, "Offset mismatch for UDataflow::ReferenceAsset");
static_assert(offsetof(UDataflow, DataflowSubGraphs) == 232, "Offset mismatch for UDataflow::DataflowSubGraphs");

// /Script/DataflowEngine.DataflowAttachment
// Kind: Class; super: AssetUserData
class UDataflowAttachment
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Instance[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDataflowAttachment, Instance) == 80, "Offset mismatch for UDataflowAttachment::Instance");

// /Script/DataflowEngine.DataflowBaseContent
// Kind: Class; super: DataflowContextObject
class UDataflowBaseContent
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString DataflowTerminal; // 0x00A0 (Size: 0x10, Type: StrProperty)
    void* TerminalAsset; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B8
    std::uint8_t bIsConstructionDirty; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSimulationDirty; // 0x00C1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDataflowBaseContent, DataflowTerminal) == 160, "Offset mismatch for UDataflowBaseContent::DataflowTerminal");
static_assert(offsetof(UDataflowBaseContent, TerminalAsset) == 176, "Offset mismatch for UDataflowBaseContent::TerminalAsset");
static_assert(offsetof(UDataflowBaseContent, bIsConstructionDirty) == 192, "Offset mismatch for UDataflowBaseContent::bIsConstructionDirty");
static_assert(offsetof(UDataflowBaseContent, bIsSimulationDirty) == 193, "Offset mismatch for UDataflowBaseContent::bIsSimulationDirty");

// /Script/DataflowEngine.DataflowBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UDataflowBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowContentOwner
// Kind: Class; super: Interface
class UDataflowContentOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowContextObject
// Kind: Class; super: Object
class UDataflowContextObject
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SelectedNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0040
    void* DataflowGraph; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataflowContextObject, SelectedNode) == 56, "Offset mismatch for UDataflowContextObject::SelectedNode");
static_assert(offsetof(UDataflowContextObject, DataflowGraph) == 104, "Offset mismatch for UDataflowContextObject::DataflowGraph");

// /Script/DataflowEngine.DataflowDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UDataflowDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataflowDebugDrawComponent, MinDrawDistance) == 632, "Offset mismatch for UDataflowDebugDrawComponent::MinDrawDistance");
static_assert(offsetof(UDataflowDebugDrawComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UDataflowDebugDrawComponent::LDMaxDrawDistance");
static_assert(offsetof(UDataflowDebugDrawComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UDataflowDebugDrawComponent::CachedMaxDrawDistance");
static_assert(offsetof(UDataflowDebugDrawComponent, DepthPriorityGroup) == 644, "Offset mismatch for UDataflowDebugDrawComponent::DepthPriorityGroup");
static_assert(offsetof(UDataflowDebugDrawComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UDataflowDebugDrawComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UDataflowDebugDrawComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UDataflowDebugDrawComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UDataflowDebugDrawComponent, LightmapType) == 647, "Offset mismatch for UDataflowDebugDrawComponent::LightmapType");
static_assert(offsetof(UDataflowDebugDrawComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UDataflowDebugDrawComponent::HLODBatchingPolicy");
static_assert(offsetof(UDataflowDebugDrawComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UDataflowDebugDrawComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UDataflowDebugDrawComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UDataflowDebugDrawComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UDataflowDebugDrawComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UDataflowDebugDrawComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UDataflowDebugDrawComponent, bHoldout) == 652, "Offset mismatch for UDataflowDebugDrawComponent::bHoldout");
static_assert(offsetof(UDataflowDebugDrawComponent, CastShadow) == 653, "Offset mismatch for UDataflowDebugDrawComponent::CastShadow");
static_assert(offsetof(UDataflowDebugDrawComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UDataflowDebugDrawComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UDataflowDebugDrawComponent, bCastCinematicShadow) == 655, "Offset mismatch for UDataflowDebugDrawComponent::bCastCinematicShadow");
static_assert(offsetof(UDataflowDebugDrawComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UDataflowDebugDrawComponent::AlwaysLoadOnClient");
static_assert(offsetof(UDataflowDebugDrawComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UDataflowDebugDrawComponent::bHiddenInSceneCapture");
static_assert(offsetof(UDataflowDebugDrawComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UDataflowDebugDrawComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UDataflowDebugDrawComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UDataflowDebugDrawComponent::bHasNoStreamableTextures");
static_assert(offsetof(UDataflowDebugDrawComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UDataflowDebugDrawComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UDataflowDebugDrawComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UDataflowDebugDrawComponent::CanCharacterStepUpOn");
static_assert(offsetof(UDataflowDebugDrawComponent, LightingChannels) == 663, "Offset mismatch for UDataflowDebugDrawComponent::LightingChannels");
static_assert(offsetof(UDataflowDebugDrawComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UDataflowDebugDrawComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UDataflowDebugDrawComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UDataflowDebugDrawComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UDataflowDebugDrawComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UDataflowDebugDrawComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UDataflowDebugDrawComponent, RayTracingGroupId) == 668, "Offset mismatch for UDataflowDebugDrawComponent::RayTracingGroupId");
static_assert(offsetof(UDataflowDebugDrawComponent, VisibilityId) == 672, "Offset mismatch for UDataflowDebugDrawComponent::VisibilityId");
static_assert(offsetof(UDataflowDebugDrawComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UDataflowDebugDrawComponent::CustomDepthStencilValue");
static_assert(offsetof(UDataflowDebugDrawComponent, CustomPrimitiveData) == 680, "Offset mismatch for UDataflowDebugDrawComponent::CustomPrimitiveData");
static_assert(offsetof(UDataflowDebugDrawComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UDataflowDebugDrawComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UDataflowDebugDrawComponent, TranslucencySortPriority) == 776, "Offset mismatch for UDataflowDebugDrawComponent::TranslucencySortPriority");
static_assert(offsetof(UDataflowDebugDrawComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UDataflowDebugDrawComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UDataflowDebugDrawComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UDataflowDebugDrawComponent::RuntimeVirtualTextures");
static_assert(offsetof(UDataflowDebugDrawComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UDataflowDebugDrawComponent::VirtualTextureLodBias");
static_assert(offsetof(UDataflowDebugDrawComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UDataflowDebugDrawComponent::VirtualTextureCullMips");
static_assert(offsetof(UDataflowDebugDrawComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UDataflowDebugDrawComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UDataflowDebugDrawComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UDataflowDebugDrawComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UDataflowDebugDrawComponent, BoundsScale) == 840, "Offset mismatch for UDataflowDebugDrawComponent::BoundsScale");
static_assert(offsetof(UDataflowDebugDrawComponent, MoveIgnoreActors) == 848, "Offset mismatch for UDataflowDebugDrawComponent::MoveIgnoreActors");
static_assert(offsetof(UDataflowDebugDrawComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UDataflowDebugDrawComponent::MoveIgnoreComponents");
static_assert(offsetof(UDataflowDebugDrawComponent, BodyInstance) == 896, "Offset mismatch for UDataflowDebugDrawComponent::BodyInstance");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentHit) == 1320, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentHit");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentBeginOverlap");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentEndOverlap");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentWake) == 1323, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentWake");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentSleep) == 1324, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentSleep");
static_assert(offsetof(UDataflowDebugDrawComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UDataflowDebugDrawComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UDataflowDebugDrawComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UDataflowDebugDrawComponent::OnBeginCursorOver");
static_assert(offsetof(UDataflowDebugDrawComponent, OnEndCursorOver) == 1328, "Offset mismatch for UDataflowDebugDrawComponent::OnEndCursorOver");
static_assert(offsetof(UDataflowDebugDrawComponent, OnClicked) == 1329, "Offset mismatch for UDataflowDebugDrawComponent::OnClicked");
static_assert(offsetof(UDataflowDebugDrawComponent, OnReleased) == 1330, "Offset mismatch for UDataflowDebugDrawComponent::OnReleased");
static_assert(offsetof(UDataflowDebugDrawComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UDataflowDebugDrawComponent::OnInputTouchBegin");
static_assert(offsetof(UDataflowDebugDrawComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UDataflowDebugDrawComponent::OnInputTouchEnd");
static_assert(offsetof(UDataflowDebugDrawComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UDataflowDebugDrawComponent::OnInputTouchEnter");
static_assert(offsetof(UDataflowDebugDrawComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UDataflowDebugDrawComponent::OnInputTouchLeave");
static_assert(offsetof(UDataflowDebugDrawComponent, OnTouchBegan) == 1335, "Offset mismatch for UDataflowDebugDrawComponent::OnTouchBegan");
static_assert(offsetof(UDataflowDebugDrawComponent, OnTouchEnded) == 1336, "Offset mismatch for UDataflowDebugDrawComponent::OnTouchEnded");
static_assert(offsetof(UDataflowDebugDrawComponent, OnTouchEntered) == 1337, "Offset mismatch for UDataflowDebugDrawComponent::OnTouchEntered");
static_assert(offsetof(UDataflowDebugDrawComponent, OnTouchExited) == 1338, "Offset mismatch for UDataflowDebugDrawComponent::OnTouchExited");
static_assert(offsetof(UDataflowDebugDrawComponent, LODParentPrimitive) == 1368, "Offset mismatch for UDataflowDebugDrawComponent::LODParentPrimitive");

// /Script/DataflowEngine.DataflowEdNode
// Kind: Class; super: EdGraphNode
class UDataflowEdNode
{
public:
    std::uint8_t Pad_0000[0xB9]; // 0x0000
    std::uint8_t bRenderInAssetEditor; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRenderWireframeInAssetEditor; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnableRenderWireframe; // 0x00BB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDataflowEdNode, bRenderInAssetEditor) == 185, "Offset mismatch for UDataflowEdNode::bRenderInAssetEditor");
static_assert(offsetof(UDataflowEdNode, bRenderWireframeInAssetEditor) == 186, "Offset mismatch for UDataflowEdNode::bRenderWireframeInAssetEditor");
static_assert(offsetof(UDataflowEdNode, bCanEnableRenderWireframe) == 187, "Offset mismatch for UDataflowEdNode::bCanEnableRenderWireframe");

// /Script/DataflowEngine.DataflowInstanceInterface
// Kind: Class; super: Interface
class UDataflowInstanceInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowEngine.DataflowMesh
// Kind: Class; super: Object
class UDataflowMesh
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Materials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDataflowMesh, Materials) == 48, "Offset mismatch for UDataflowMesh::Materials");

// /Script/DataflowEngine.DataflowSkeletalContent
// Kind: Class; super: DataflowBaseContent
class UDataflowSkeletalContent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* SkeletalMesh; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bListCompatibleAnimationsOnly; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    void* AnimationAsset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataflowSkeletalContent, SkeletalMesh) == 208, "Offset mismatch for UDataflowSkeletalContent::SkeletalMesh");
static_assert(offsetof(UDataflowSkeletalContent, bListCompatibleAnimationsOnly) == 216, "Offset mismatch for UDataflowSkeletalContent::bListCompatibleAnimationsOnly");
static_assert(offsetof(UDataflowSkeletalContent, AnimationAsset) == 224, "Offset mismatch for UDataflowSkeletalContent::AnimationAsset");

// /Script/DataflowEngine.DataflowSkeletalMeshAttachment
// Kind: Class; super: DataflowAttachment
class UDataflowSkeletalMeshAttachment
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Instance[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDataflowSkeletalMeshAttachment, Instance) == 80, "Offset mismatch for UDataflowSkeletalMeshAttachment::Instance");

// /Script/DataflowEngine.DataflowSubGraph
// Kind: Class; super: EdGraph
class UDataflowSubGraph
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t SubGraphGuid[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsForEach; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDataflowSubGraph, SubGraphGuid) == 96, "Offset mismatch for UDataflowSubGraph::SubGraphGuid");
static_assert(offsetof(UDataflowSubGraph, bIsForEach) == 112, "Offset mismatch for UDataflowSubGraph::bIsForEach");
