/**
 * decamp dumper generated SDK
 * Package: /Script/DataflowCore
 */
#pragma once
#include "Basic.h"

// /Script/DataflowCore.ConvertBoolArrayTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertBoolArrayTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertBoolArrayTypesDataflowNode, In) == 224, "Offset mismatch for FConvertBoolArrayTypesDataflowNode::In");
static_assert(offsetof(FConvertBoolArrayTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertBoolArrayTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertBoolTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertBoolTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00E1 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertBoolTypesDataflowNode, In) == 224, "Offset mismatch for FConvertBoolTypesDataflowNode::In");
static_assert(offsetof(FConvertBoolTypesDataflowNode, Out) == 225, "Offset mismatch for FConvertBoolTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertIndexArrayToSelectionTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertIndexArrayToSelectionTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> In; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Out[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertIndexArrayToSelectionTypesDataflowNode, Collection) == 224, "Offset mismatch for FConvertIndexArrayToSelectionTypesDataflowNode::Collection");
static_assert(offsetof(FConvertIndexArrayToSelectionTypesDataflowNode, In) == 272, "Offset mismatch for FConvertIndexArrayToSelectionTypesDataflowNode::In");
static_assert(offsetof(FConvertIndexArrayToSelectionTypesDataflowNode, Out) == 288, "Offset mismatch for FConvertIndexArrayToSelectionTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertIndexToSelectionTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertIndexToSelectionTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::int32_t In; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0114
    std::uint8_t Out[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertIndexToSelectionTypesDataflowNode, Collection) == 224, "Offset mismatch for FConvertIndexToSelectionTypesDataflowNode::Collection");
static_assert(offsetof(FConvertIndexToSelectionTypesDataflowNode, In) == 272, "Offset mismatch for FConvertIndexToSelectionTypesDataflowNode::In");
static_assert(offsetof(FConvertIndexToSelectionTypesDataflowNode, Out) == 280, "Offset mismatch for FConvertIndexToSelectionTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertNumericArrayTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertNumericArrayTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertNumericArrayTypesDataflowNode, In) == 224, "Offset mismatch for FConvertNumericArrayTypesDataflowNode::In");
static_assert(offsetof(FConvertNumericArrayTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertNumericArrayTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertNumericTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertNumericTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertNumericTypesDataflowNode, In) == 224, "Offset mismatch for FConvertNumericTypesDataflowNode::In");
static_assert(offsetof(FConvertNumericTypesDataflowNode, Out) == 232, "Offset mismatch for FConvertNumericTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertRotationDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertRotationDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertRotationDataflowNode, In) == 224, "Offset mismatch for FConvertRotationDataflowNode::In");
static_assert(offsetof(FConvertRotationDataflowNode, Out) == 248, "Offset mismatch for FConvertRotationDataflowNode::Out");

// /Script/DataflowCore.ConvertSelectionTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertSelectionTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t In[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllElementsMustBeSelected; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    std::uint8_t Out[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertSelectionTypesDataflowNode, Collection) == 224, "Offset mismatch for FConvertSelectionTypesDataflowNode::Collection");
static_assert(offsetof(FConvertSelectionTypesDataflowNode, In) == 272, "Offset mismatch for FConvertSelectionTypesDataflowNode::In");
static_assert(offsetof(FConvertSelectionTypesDataflowNode, bAllElementsMustBeSelected) == 312, "Offset mismatch for FConvertSelectionTypesDataflowNode::bAllElementsMustBeSelected");
static_assert(offsetof(FConvertSelectionTypesDataflowNode, Out) == 320, "Offset mismatch for FConvertSelectionTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertSelectionTypesToIndexArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertSelectionTypesToIndexArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    TArray<void*> Out; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConvertSelectionTypesToIndexArrayDataflowNode, In) == 224, "Offset mismatch for FConvertSelectionTypesToIndexArrayDataflowNode::In");
static_assert(offsetof(FConvertSelectionTypesToIndexArrayDataflowNode, Out) == 264, "Offset mismatch for FConvertSelectionTypesToIndexArrayDataflowNode::Out");

// /Script/DataflowCore.ConvertStringArrayTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertStringArrayTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertStringArrayTypesDataflowNode, In) == 224, "Offset mismatch for FConvertStringArrayTypesDataflowNode::In");
static_assert(offsetof(FConvertStringArrayTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertStringArrayTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertStringConvertibleTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertStringConvertibleTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertStringConvertibleTypesDataflowNode, In) == 224, "Offset mismatch for FConvertStringConvertibleTypesDataflowNode::In");
static_assert(offsetof(FConvertStringConvertibleTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertStringConvertibleTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertStringTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertStringTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertStringTypesDataflowNode, In) == 224, "Offset mismatch for FConvertStringTypesDataflowNode::In");
static_assert(offsetof(FConvertStringTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertStringTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertTransformArrayTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertTransformArrayTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertTransformArrayTypesDataflowNode, In) == 224, "Offset mismatch for FConvertTransformArrayTypesDataflowNode::In");
static_assert(offsetof(FConvertTransformArrayTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertTransformArrayTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertTransformTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertTransformTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertTransformTypesDataflowNode, In) == 224, "Offset mismatch for FConvertTransformTypesDataflowNode::In");
static_assert(offsetof(FConvertTransformTypesDataflowNode, Out) == 320, "Offset mismatch for FConvertTransformTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertUObjectConvertibleTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertUObjectConvertibleTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertUObjectConvertibleTypesDataflowNode, In) == 224, "Offset mismatch for FConvertUObjectConvertibleTypesDataflowNode::In");
static_assert(offsetof(FConvertUObjectConvertibleTypesDataflowNode, Out) == 232, "Offset mismatch for FConvertUObjectConvertibleTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertVectorArrayTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertVectorArrayTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertVectorArrayTypesDataflowNode, In) == 224, "Offset mismatch for FConvertVectorArrayTypesDataflowNode::In");
static_assert(offsetof(FConvertVectorArrayTypesDataflowNode, Out) == 240, "Offset mismatch for FConvertVectorArrayTypesDataflowNode::Out");

// /Script/DataflowCore.ConvertVectorTypesDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FConvertVectorTypesDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t In[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Out[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConvertVectorTypesDataflowNode, In) == 224, "Offset mismatch for FConvertVectorTypesDataflowNode::In");
static_assert(offsetof(FConvertVectorTypesDataflowNode, Out) == 256, "Offset mismatch for FConvertVectorTypesDataflowNode::Out");

// /Script/DataflowCore.DataflowAllTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowAllTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowAnyType
// Kind: ScriptStruct; super: none
struct FDataflowAnyType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowArrayInput
// Kind: ScriptStruct; super: DataflowInput
struct FDataflowArrayInput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowArrayOutput
// Kind: ScriptStruct; super: DataflowOutput
struct FDataflowArrayOutput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowArrayTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowBaseElement
// Kind: ScriptStruct; super: none
struct FDataflowBaseElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowBoolArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowBoolArrayTypes
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowBoolArrayTypes, Value) == 0, "Offset mismatch for FDataflowBoolArrayTypes::Value");

// /Script/DataflowCore.DataflowBoolTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowBoolTypes
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowBoolTypes, Value) == 0, "Offset mismatch for FDataflowBoolTypes::Value");

// /Script/DataflowCore.DataflowBranchNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowBranchNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TrueValue[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
    std::uint8_t FalseValue[0x1]; // 0x00E1 (Size: 0x1, Type: StructProperty)
    std::uint8_t bCondition; // 0x00E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Result[0x1]; // 0x00E3 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowBranchNode, TrueValue) == 224, "Offset mismatch for FDataflowBranchNode::TrueValue");
static_assert(offsetof(FDataflowBranchNode, FalseValue) == 225, "Offset mismatch for FDataflowBranchNode::FalseValue");
static_assert(offsetof(FDataflowBranchNode, bCondition) == 226, "Offset mismatch for FDataflowBranchNode::bCondition");
static_assert(offsetof(FDataflowBranchNode, Result) == 227, "Offset mismatch for FDataflowBranchNode::Result");

// /Script/DataflowCore.DataflowConnection
// Kind: ScriptStruct; super: none
struct FDataflowConnection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowConvertToResolutionNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowConvertToResolutionNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Method; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::uint8_t Resolution; // 0x00EC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDataflowConvertToResolutionNode, Value) == 224, "Offset mismatch for FDataflowConvertToResolutionNode::Value");
static_assert(offsetof(FDataflowConvertToResolutionNode, Method) == 232, "Offset mismatch for FDataflowConvertToResolutionNode::Method");
static_assert(offsetof(FDataflowConvertToResolutionNode, Resolution) == 236, "Offset mismatch for FDataflowConvertToResolutionNode::Resolution");

// /Script/DataflowCore.DataflowCurveSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowCurveSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowFaceSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowFaceSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowForceDependencyNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowForceDependencyNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
    std::uint8_t DependentValue[0x1]; // 0x00E1 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowForceDependencyNode, Value) == 224, "Offset mismatch for FDataflowForceDependencyNode::Value");
static_assert(offsetof(FDataflowForceDependencyNode, DependentValue) == 225, "Offset mismatch for FDataflowForceDependencyNode::DependentValue");

// /Script/DataflowCore.DataflowFreezeActions
// Kind: ScriptStruct; super: none
struct FDataflowFreezeActions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowFunctionProperty
// Kind: ScriptStruct; super: none
struct FDataflowFunctionProperty
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowGeometrySelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowGeometrySelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowImage
// Kind: ScriptStruct; super: none
struct FDataflowImage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowImageCombineChannelsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowImageCombineChannelsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Red[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Green[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t Blue[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t Image[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResolutionOptions; // 0x01A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01A9
    std::uint8_t Resolution; // 0x01AC (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDataflowImageCombineChannelsNode, Red) == 224, "Offset mismatch for FDataflowImageCombineChannelsNode::Red");
static_assert(offsetof(FDataflowImageCombineChannelsNode, Green) == 264, "Offset mismatch for FDataflowImageCombineChannelsNode::Green");
static_assert(offsetof(FDataflowImageCombineChannelsNode, Blue) == 304, "Offset mismatch for FDataflowImageCombineChannelsNode::Blue");
static_assert(offsetof(FDataflowImageCombineChannelsNode, Alpha) == 344, "Offset mismatch for FDataflowImageCombineChannelsNode::Alpha");
static_assert(offsetof(FDataflowImageCombineChannelsNode, Image) == 384, "Offset mismatch for FDataflowImageCombineChannelsNode::Image");
static_assert(offsetof(FDataflowImageCombineChannelsNode, ResolutionOptions) == 424, "Offset mismatch for FDataflowImageCombineChannelsNode::ResolutionOptions");
static_assert(offsetof(FDataflowImageCombineChannelsNode, Resolution) == 428, "Offset mismatch for FDataflowImageCombineChannelsNode::Resolution");

// /Script/DataflowCore.DataflowImageFromColorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowImageFromColorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t FillColor[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Resolution; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t Image[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowImageFromColorNode, FillColor) == 224, "Offset mismatch for FDataflowImageFromColorNode::FillColor");
static_assert(offsetof(FDataflowImageFromColorNode, Resolution) == 240, "Offset mismatch for FDataflowImageFromColorNode::Resolution");
static_assert(offsetof(FDataflowImageFromColorNode, Image) == 248, "Offset mismatch for FDataflowImageFromColorNode::Image");

// /Script/DataflowCore.DataflowImageSplitChannelsNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowImageSplitChannelsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Image[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Red[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t Green[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t Blue[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t Alpha[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowImageSplitChannelsNode, Image) == 224, "Offset mismatch for FDataflowImageSplitChannelsNode::Image");
static_assert(offsetof(FDataflowImageSplitChannelsNode, Red) == 264, "Offset mismatch for FDataflowImageSplitChannelsNode::Red");
static_assert(offsetof(FDataflowImageSplitChannelsNode, Green) == 304, "Offset mismatch for FDataflowImageSplitChannelsNode::Green");
static_assert(offsetof(FDataflowImageSplitChannelsNode, Blue) == 344, "Offset mismatch for FDataflowImageSplitChannelsNode::Blue");
static_assert(offsetof(FDataflowImageSplitChannelsNode, Alpha) == 384, "Offset mismatch for FDataflowImageSplitChannelsNode::Alpha");

// /Script/DataflowCore.DataflowInput
// Kind: ScriptStruct; super: DataflowConnection
struct FDataflowInput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowLinearSequenceGeneratorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowLinearSequenceGeneratorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Start[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Increment[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bReverseOrder; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t Generator[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowLinearSequenceGeneratorNode, Start) == 224, "Offset mismatch for FDataflowLinearSequenceGeneratorNode::Start");
static_assert(offsetof(FDataflowLinearSequenceGeneratorNode, Increment) == 232, "Offset mismatch for FDataflowLinearSequenceGeneratorNode::Increment");
static_assert(offsetof(FDataflowLinearSequenceGeneratorNode, bReverseOrder) == 240, "Offset mismatch for FDataflowLinearSequenceGeneratorNode::bReverseOrder");
static_assert(offsetof(FDataflowLinearSequenceGeneratorNode, Generator) == 248, "Offset mismatch for FDataflowLinearSequenceGeneratorNode::Generator");

// /Script/DataflowCore.DataflowMaterialSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowMaterialSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowMathAbsNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathAbsNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathAbsNode, A) == 224, "Offset mismatch for FDataflowMathAbsNode::A");
static_assert(offsetof(FDataflowMathAbsNode, Result) == 232, "Offset mismatch for FDataflowMathAbsNode::Result");

// /Script/DataflowCore.DataflowMathAddNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathAddNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathAddNode, A) == 224, "Offset mismatch for FDataflowMathAddNode::A");
static_assert(offsetof(FDataflowMathAddNode, B) == 232, "Offset mismatch for FDataflowMathAddNode::B");
static_assert(offsetof(FDataflowMathAddNode, Result) == 240, "Offset mismatch for FDataflowMathAddNode::Result");

// /Script/DataflowCore.DataflowMathArcCosNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathArcCosNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathArcCosNode, A) == 224, "Offset mismatch for FDataflowMathArcCosNode::A");
static_assert(offsetof(FDataflowMathArcCosNode, Result) == 232, "Offset mismatch for FDataflowMathArcCosNode::Result");

// /Script/DataflowCore.DataflowMathArcSinNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathArcSinNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathArcSinNode, A) == 224, "Offset mismatch for FDataflowMathArcSinNode::A");
static_assert(offsetof(FDataflowMathArcSinNode, Result) == 232, "Offset mismatch for FDataflowMathArcSinNode::Result");

// /Script/DataflowCore.DataflowMathArcTan2Node
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathArcTan2Node
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathArcTan2Node, A) == 224, "Offset mismatch for FDataflowMathArcTan2Node::A");
static_assert(offsetof(FDataflowMathArcTan2Node, B) == 232, "Offset mismatch for FDataflowMathArcTan2Node::B");
static_assert(offsetof(FDataflowMathArcTan2Node, Result) == 240, "Offset mismatch for FDataflowMathArcTan2Node::Result");

// /Script/DataflowCore.DataflowMathArcTanNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathArcTanNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathArcTanNode, A) == 224, "Offset mismatch for FDataflowMathArcTanNode::A");
static_assert(offsetof(FDataflowMathArcTanNode, Result) == 232, "Offset mismatch for FDataflowMathArcTanNode::Result");

// /Script/DataflowCore.DataflowMathCeilNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathCeilNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathCeilNode, A) == 224, "Offset mismatch for FDataflowMathCeilNode::A");
static_assert(offsetof(FDataflowMathCeilNode, Result) == 232, "Offset mismatch for FDataflowMathCeilNode::Result");

// /Script/DataflowCore.DataflowMathClampNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathClampNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t min[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathClampNode, min) == 240, "Offset mismatch for FDataflowMathClampNode::min");
static_assert(offsetof(FDataflowMathClampNode, max) == 248, "Offset mismatch for FDataflowMathClampNode::max");

// /Script/DataflowCore.DataflowMathConstantNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMathConstantNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Constant; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathConstantNode, Constant) == 224, "Offset mismatch for FDataflowMathConstantNode::Constant");
static_assert(offsetof(FDataflowMathConstantNode, Result) == 232, "Offset mismatch for FDataflowMathConstantNode::Result");

// /Script/DataflowCore.DataflowMathCosNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathCosNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathCosNode, A) == 224, "Offset mismatch for FDataflowMathCosNode::A");
static_assert(offsetof(FDataflowMathCosNode, Result) == 232, "Offset mismatch for FDataflowMathCosNode::Result");

// /Script/DataflowCore.DataflowMathCubeNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathCubeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathCubeNode, A) == 224, "Offset mismatch for FDataflowMathCubeNode::A");
static_assert(offsetof(FDataflowMathCubeNode, Result) == 232, "Offset mismatch for FDataflowMathCubeNode::Result");

// /Script/DataflowCore.DataflowMathDegToRadNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathDegToRadNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathDegToRadNode, A) == 224, "Offset mismatch for FDataflowMathDegToRadNode::A");
static_assert(offsetof(FDataflowMathDegToRadNode, Result) == 232, "Offset mismatch for FDataflowMathDegToRadNode::Result");

// /Script/DataflowCore.DataflowMathDivideNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathDivideNode
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t Fallback[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathDivideNode, Fallback) == 248, "Offset mismatch for FDataflowMathDivideNode::Fallback");

// /Script/DataflowCore.DataflowMathExpNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathExpNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathExpNode, A) == 224, "Offset mismatch for FDataflowMathExpNode::A");
static_assert(offsetof(FDataflowMathExpNode, Result) == 232, "Offset mismatch for FDataflowMathExpNode::Result");

// /Script/DataflowCore.DataflowMathFloorNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathFloorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathFloorNode, A) == 224, "Offset mismatch for FDataflowMathFloorNode::A");
static_assert(offsetof(FDataflowMathFloorNode, Result) == 232, "Offset mismatch for FDataflowMathFloorNode::Result");

// /Script/DataflowCore.DataflowMathFracNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathFracNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathFracNode, A) == 224, "Offset mismatch for FDataflowMathFracNode::A");
static_assert(offsetof(FDataflowMathFracNode, Result) == 232, "Offset mismatch for FDataflowMathFracNode::Result");

// /Script/DataflowCore.DataflowMathInverseSquareRootNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathInverseSquareRootNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t Fallback[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathInverseSquareRootNode, Fallback) == 240, "Offset mismatch for FDataflowMathInverseSquareRootNode::Fallback");

// /Script/DataflowCore.DataflowMathLogNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathLogNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathLogNode, A) == 224, "Offset mismatch for FDataflowMathLogNode::A");
static_assert(offsetof(FDataflowMathLogNode, Result) == 232, "Offset mismatch for FDataflowMathLogNode::Result");

// /Script/DataflowCore.DataflowMathLogXNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathLogXNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t base[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathLogXNode, base) == 240, "Offset mismatch for FDataflowMathLogXNode::base");

// /Script/DataflowCore.DataflowMathMaximumNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathMaximumNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathMaximumNode, A) == 224, "Offset mismatch for FDataflowMathMaximumNode::A");
static_assert(offsetof(FDataflowMathMaximumNode, B) == 232, "Offset mismatch for FDataflowMathMaximumNode::B");
static_assert(offsetof(FDataflowMathMaximumNode, Result) == 240, "Offset mismatch for FDataflowMathMaximumNode::Result");

// /Script/DataflowCore.DataflowMathMaximumNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMathMaximumNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Inputs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathMaximumNode_v2, Inputs) == 224, "Offset mismatch for FDataflowMathMaximumNode_v2::Inputs");
static_assert(offsetof(FDataflowMathMaximumNode_v2, Result) == 240, "Offset mismatch for FDataflowMathMaximumNode_v2::Result");

// /Script/DataflowCore.DataflowMathMinimumNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathMinimumNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathMinimumNode, A) == 224, "Offset mismatch for FDataflowMathMinimumNode::A");
static_assert(offsetof(FDataflowMathMinimumNode, B) == 232, "Offset mismatch for FDataflowMathMinimumNode::B");
static_assert(offsetof(FDataflowMathMinimumNode, Result) == 240, "Offset mismatch for FDataflowMathMinimumNode::Result");

// /Script/DataflowCore.DataflowMathMinimumNode_v2
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMathMinimumNode_v2
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Inputs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathMinimumNode_v2, Inputs) == 224, "Offset mismatch for FDataflowMathMinimumNode_v2::Inputs");
static_assert(offsetof(FDataflowMathMinimumNode_v2, Result) == 240, "Offset mismatch for FDataflowMathMinimumNode_v2::Result");

// /Script/DataflowCore.DataflowMathMultiplyNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathMultiplyNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathMultiplyNode, A) == 224, "Offset mismatch for FDataflowMathMultiplyNode::A");
static_assert(offsetof(FDataflowMathMultiplyNode, B) == 232, "Offset mismatch for FDataflowMathMultiplyNode::B");
static_assert(offsetof(FDataflowMathMultiplyNode, Result) == 240, "Offset mismatch for FDataflowMathMultiplyNode::Result");

// /Script/DataflowCore.DataflowMathNegateNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathNegateNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathNegateNode, A) == 224, "Offset mismatch for FDataflowMathNegateNode::A");
static_assert(offsetof(FDataflowMathNegateNode, Result) == 232, "Offset mismatch for FDataflowMathNegateNode::Result");

// /Script/DataflowCore.DataflowMathOneInputOperatorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMathOneInputOperatorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathOneInputOperatorNode, A) == 224, "Offset mismatch for FDataflowMathOneInputOperatorNode::A");
static_assert(offsetof(FDataflowMathOneInputOperatorNode, Result) == 232, "Offset mismatch for FDataflowMathOneInputOperatorNode::Result");

// /Script/DataflowCore.DataflowMathOneMinusNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathOneMinusNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathOneMinusNode, A) == 224, "Offset mismatch for FDataflowMathOneMinusNode::A");
static_assert(offsetof(FDataflowMathOneMinusNode, Result) == 232, "Offset mismatch for FDataflowMathOneMinusNode::Result");

// /Script/DataflowCore.DataflowMathPowNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathPowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathPowNode, A) == 224, "Offset mismatch for FDataflowMathPowNode::A");
static_assert(offsetof(FDataflowMathPowNode, B) == 232, "Offset mismatch for FDataflowMathPowNode::B");
static_assert(offsetof(FDataflowMathPowNode, Result) == 240, "Offset mismatch for FDataflowMathPowNode::Result");

// /Script/DataflowCore.DataflowMathRadToDegNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathRadToDegNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathRadToDegNode, A) == 224, "Offset mismatch for FDataflowMathRadToDegNode::A");
static_assert(offsetof(FDataflowMathRadToDegNode, Result) == 232, "Offset mismatch for FDataflowMathRadToDegNode::Result");

// /Script/DataflowCore.DataflowMathReciprocalNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathReciprocalNode
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t Fallback[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathReciprocalNode, Fallback) == 240, "Offset mismatch for FDataflowMathReciprocalNode::Fallback");

// /Script/DataflowCore.DataflowMathRoundNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathRoundNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathRoundNode, A) == 224, "Offset mismatch for FDataflowMathRoundNode::A");
static_assert(offsetof(FDataflowMathRoundNode, Result) == 232, "Offset mismatch for FDataflowMathRoundNode::Result");

// /Script/DataflowCore.DataflowMathSignNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathSignNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathSignNode, A) == 224, "Offset mismatch for FDataflowMathSignNode::A");
static_assert(offsetof(FDataflowMathSignNode, Result) == 232, "Offset mismatch for FDataflowMathSignNode::Result");

// /Script/DataflowCore.DataflowMathSinNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathSinNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathSinNode, A) == 224, "Offset mismatch for FDataflowMathSinNode::A");
static_assert(offsetof(FDataflowMathSinNode, Result) == 232, "Offset mismatch for FDataflowMathSinNode::Result");

// /Script/DataflowCore.DataflowMathSquareNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathSquareNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathSquareNode, A) == 224, "Offset mismatch for FDataflowMathSquareNode::A");
static_assert(offsetof(FDataflowMathSquareNode, Result) == 232, "Offset mismatch for FDataflowMathSquareNode::Result");

// /Script/DataflowCore.DataflowMathSquareRootNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathSquareRootNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathSquareRootNode, A) == 224, "Offset mismatch for FDataflowMathSquareRootNode::A");
static_assert(offsetof(FDataflowMathSquareRootNode, Result) == 232, "Offset mismatch for FDataflowMathSquareRootNode::Result");

// /Script/DataflowCore.DataflowMathSubtractNode
// Kind: ScriptStruct; super: DataflowMathTwoInputsOperatorNode
struct FDataflowMathSubtractNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathSubtractNode, A) == 224, "Offset mismatch for FDataflowMathSubtractNode::A");
static_assert(offsetof(FDataflowMathSubtractNode, B) == 232, "Offset mismatch for FDataflowMathSubtractNode::B");
static_assert(offsetof(FDataflowMathSubtractNode, Result) == 240, "Offset mismatch for FDataflowMathSubtractNode::Result");

// /Script/DataflowCore.DataflowMathTanNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathTanNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathTanNode, A) == 224, "Offset mismatch for FDataflowMathTanNode::A");
static_assert(offsetof(FDataflowMathTanNode, Result) == 232, "Offset mismatch for FDataflowMathTanNode::Result");

// /Script/DataflowCore.DataflowMathTruncNode
// Kind: ScriptStruct; super: DataflowMathOneInputOperatorNode
struct FDataflowMathTruncNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathTruncNode, A) == 224, "Offset mismatch for FDataflowMathTruncNode::A");
static_assert(offsetof(FDataflowMathTruncNode, Result) == 232, "Offset mismatch for FDataflowMathTruncNode::Result");

// /Script/DataflowCore.DataflowMathTwoInputsOperatorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowMathTwoInputsOperatorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMathTwoInputsOperatorNode, A) == 224, "Offset mismatch for FDataflowMathTwoInputsOperatorNode::A");
static_assert(offsetof(FDataflowMathTwoInputsOperatorNode, B) == 232, "Offset mismatch for FDataflowMathTwoInputsOperatorNode::B");
static_assert(offsetof(FDataflowMathTwoInputsOperatorNode, Result) == 240, "Offset mismatch for FDataflowMathTwoInputsOperatorNode::Result");

// /Script/DataflowCore.DataflowMeshSelectionTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowMeshSelectionTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowMeshSelectionTypes, Value) == 0, "Offset mismatch for FDataflowMeshSelectionTypes::Value");

// /Script/DataflowCore.DataflowNode
// Kind: ScriptStruct; super: none
struct FDataflowNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowNode, bOverrideColor) == 16, "Offset mismatch for FDataflowNode::bOverrideColor");
static_assert(offsetof(FDataflowNode, OverrideColor) == 20, "Offset mismatch for FDataflowNode::OverrideColor");
static_assert(offsetof(FDataflowNode, bActive) == 136, "Offset mismatch for FDataflowNode::bActive");
static_assert(offsetof(FDataflowNode, FrozenProperties) == 144, "Offset mismatch for FDataflowNode::FrozenProperties");
static_assert(offsetof(FDataflowNode, bIsFrozen) == 160, "Offset mismatch for FDataflowNode::bIsFrozen");

// /Script/DataflowCore.DataflowNumericArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowNumericArrayTypes
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowNumericArrayTypes, Value) == 0, "Offset mismatch for FDataflowNumericArrayTypes::Value");

// /Script/DataflowCore.DataflowNumericTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowNumericTypes
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FDataflowNumericTypes, Value) == 0, "Offset mismatch for FDataflowNumericTypes::Value");

// /Script/DataflowCore.DataflowOutput
// Kind: ScriptStruct; super: DataflowConnection
struct FDataflowOutput
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowOverrideNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowOverrideNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FName Key; // 0x00E0 (Size: 0x8, Type: NameProperty)
    FString Default; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsOverriden; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowOverrideNode, Key) == 224, "Offset mismatch for FDataflowOverrideNode::Key");
static_assert(offsetof(FDataflowOverrideNode, Default) == 232, "Offset mismatch for FDataflowOverrideNode::Default");
static_assert(offsetof(FDataflowOverrideNode, IsOverriden) == 248, "Offset mismatch for FDataflowOverrideNode::IsOverriden");

// /Script/DataflowCore.DataflowPath
// Kind: ScriptStruct; super: none
struct FDataflowPath
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowPerlinNoiseGeneratorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPerlinNoiseGeneratorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float Frequency; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float NoiseMin; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float NoiseMax; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClamp; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReverseOrder; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00F2
    std::uint8_t Generator[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, Frequency) == 224, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::Frequency");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, Offset) == 228, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::Offset");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, NoiseMin) == 232, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::NoiseMin");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, NoiseMax) == 236, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::NoiseMax");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, bClamp) == 240, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::bClamp");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, bReverseOrder) == 241, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::bReverseOrder");
static_assert(offsetof(FDataflowPerlinNoiseGeneratorNode, Generator) == 248, "Offset mismatch for FDataflowPerlinNoiseGeneratorNode::Generator");

// /Script/DataflowCore.DataflowPlane
// Kind: ScriptStruct; super: none
struct FDataflowPlane
{
public:
    std::uint8_t Point[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPlane, Point) == 0, "Offset mismatch for FDataflowPlane::Point");
static_assert(offsetof(FDataflowPlane, Normal) == 24, "Offset mismatch for FDataflowPlane::Normal");

// /Script/DataflowCore.DataflowPoints
// Kind: ScriptStruct; super: none
struct FDataflowPoints
{
public:
    std::uint8_t Collection[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPoints, Collection) == 0, "Offset mismatch for FDataflowPoints::Collection");

// /Script/DataflowCore.DataflowPointsSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowPointsSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowPrimitiveArrayStorage
// Kind: ScriptStruct; super: none
struct FDataflowPrimitiveArrayStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowPrimitiveArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowPrimitiveArrayTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPrimitiveArrayTypes, Value) == 0, "Offset mismatch for FDataflowPrimitiveArrayTypes::Value");

// /Script/DataflowCore.DataflowPrimitiveTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowPrimitiveTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPrimitiveTypes, Value) == 0, "Offset mismatch for FDataflowPrimitiveTypes::Value");

// /Script/DataflowCore.DataflowPrimitiveTypesStorage
// Kind: ScriptStruct; super: none
struct FDataflowPrimitiveTypesStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowPrintNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowPrintNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowPrintNode, Value) == 224, "Offset mismatch for FDataflowPrintNode::Value");

// /Script/DataflowCore.DataflowRandomGeneratorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowRandomGeneratorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Seed; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00E4
    std::uint8_t RandomMin[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t RandomMax[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bReverseOrder; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F9
    std::uint8_t Generator[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRandomGeneratorNode, Seed) == 224, "Offset mismatch for FDataflowRandomGeneratorNode::Seed");
static_assert(offsetof(FDataflowRandomGeneratorNode, RandomMin) == 232, "Offset mismatch for FDataflowRandomGeneratorNode::RandomMin");
static_assert(offsetof(FDataflowRandomGeneratorNode, RandomMax) == 240, "Offset mismatch for FDataflowRandomGeneratorNode::RandomMax");
static_assert(offsetof(FDataflowRandomGeneratorNode, bReverseOrder) == 248, "Offset mismatch for FDataflowRandomGeneratorNode::bReverseOrder");
static_assert(offsetof(FDataflowRandomGeneratorNode, Generator) == 256, "Offset mismatch for FDataflowRandomGeneratorNode::Generator");

// /Script/DataflowCore.DataflowReRouteNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowReRouteNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowReRouteNode, Value) == 224, "Offset mismatch for FDataflowReRouteNode::Value");

// /Script/DataflowCore.DataflowRotationTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowRotationTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowRotationTypes, Value) == 0, "Offset mismatch for FDataflowRotationTypes::Value");

// /Script/DataflowCore.DataflowSelectNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSelectNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Inputs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SelectedIndex; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Result[0x1]; // 0x00F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSelectNode, Inputs) == 224, "Offset mismatch for FDataflowSelectNode::Inputs");
static_assert(offsetof(FDataflowSelectNode, SelectedIndex) == 240, "Offset mismatch for FDataflowSelectNode::SelectedIndex");
static_assert(offsetof(FDataflowSelectNode, Result) == 244, "Offset mismatch for FDataflowSelectNode::Result");

// /Script/DataflowCore.DataflowSelection
// Kind: ScriptStruct; super: none
struct FDataflowSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowSelectionTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowSelectionTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSelectionTypes, Value) == 0, "Offset mismatch for FDataflowSelectionTypes::Value");

// /Script/DataflowCore.DataflowSimpleRegexGeneratorNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowSimpleRegexGeneratorNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    FString List; // 0x00E0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bReverseOrder; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t Generator[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowSimpleRegexGeneratorNode, List) == 224, "Offset mismatch for FDataflowSimpleRegexGeneratorNode::List");
static_assert(offsetof(FDataflowSimpleRegexGeneratorNode, bReverseOrder) == 240, "Offset mismatch for FDataflowSimpleRegexGeneratorNode::bReverseOrder");
static_assert(offsetof(FDataflowSimpleRegexGeneratorNode, Generator) == 248, "Offset mismatch for FDataflowSimpleRegexGeneratorNode::Generator");

// /Script/DataflowCore.DataflowStringArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowStringArrayTypes
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowStringArrayTypes, Value) == 0, "Offset mismatch for FDataflowStringArrayTypes::Value");

// /Script/DataflowCore.DataflowStringConvertibleTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowStringConvertibleTypes
{
public:
    FString Value; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDataflowStringConvertibleTypes, Value) == 0, "Offset mismatch for FDataflowStringConvertibleTypes::Value");

// /Script/DataflowCore.DataflowStringTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowStringTypes
{
public:
    FString Value; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FDataflowStringTypes, Value) == 0, "Offset mismatch for FDataflowStringTypes::Value");

// /Script/DataflowCore.DataflowTemplateSettingsEntry
// Kind: ScriptStruct; super: none
struct FDataflowTemplateSettingsEntry
{
public:
    void* ClassType; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TemplateFolder[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTemplateSettingsEntry, ClassType) == 0, "Offset mismatch for FDataflowTemplateSettingsEntry::ClassType");
static_assert(offsetof(FDataflowTemplateSettingsEntry, TemplateFolder) == 8, "Offset mismatch for FDataflowTemplateSettingsEntry::TemplateFolder");

// /Script/DataflowCore.DataflowTerminalNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowTerminalNode
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bOverrideColor; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OverrideColor[0x74]; // 0x0014 (Size: 0x74, Type: StructProperty)
    std::uint8_t bActive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    std::uint8_t FrozenProperties[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsFrozen; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDataflowTerminalNode, bOverrideColor) == 16, "Offset mismatch for FDataflowTerminalNode::bOverrideColor");
static_assert(offsetof(FDataflowTerminalNode, OverrideColor) == 20, "Offset mismatch for FDataflowTerminalNode::OverrideColor");
static_assert(offsetof(FDataflowTerminalNode, bActive) == 136, "Offset mismatch for FDataflowTerminalNode::bActive");
static_assert(offsetof(FDataflowTerminalNode, FrozenProperties) == 144, "Offset mismatch for FDataflowTerminalNode::FrozenProperties");
static_assert(offsetof(FDataflowTerminalNode, bIsFrozen) == 160, "Offset mismatch for FDataflowTerminalNode::bIsFrozen");

// /Script/DataflowCore.DataflowTransformArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowTransformArrayTypes
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowTransformArrayTypes, Value) == 0, "Offset mismatch for FDataflowTransformArrayTypes::Value");

// /Script/DataflowCore.DataflowTransformSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowTransformSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowTransformTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowTransformTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowTransformTypes, Value) == 0, "Offset mismatch for FDataflowTransformTypes::Value");

// /Script/DataflowCore.DataflowUObjectConvertibleTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowUObjectConvertibleTypes
{
public:
    void* Value; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDataflowUObjectConvertibleTypes, Value) == 0, "Offset mismatch for FDataflowUObjectConvertibleTypes::Value");

// /Script/DataflowCore.DataflowUStructTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowUStructTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowValueGenerator
// Kind: ScriptStruct; super: none
struct FDataflowValueGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowVectorAddNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorAddNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t V[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorAddNode, A) == 224, "Offset mismatch for FDataflowVectorAddNode::A");
static_assert(offsetof(FDataflowVectorAddNode, B) == 256, "Offset mismatch for FDataflowVectorAddNode::B");
static_assert(offsetof(FDataflowVectorAddNode, V) == 288, "Offset mismatch for FDataflowVectorAddNode::V");

// /Script/DataflowCore.DataflowVectorArrayTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowVectorArrayTypes
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowVectorArrayTypes, Value) == 0, "Offset mismatch for FDataflowVectorArrayTypes::Value");

// /Script/DataflowCore.DataflowVectorBreakNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorBreakNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t V[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t X[0x8]; // 0x0100 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x0108 (Size: 0x8, Type: StructProperty)
    std::uint8_t Z[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    std::uint8_t W[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorBreakNode, V) == 224, "Offset mismatch for FDataflowVectorBreakNode::V");
static_assert(offsetof(FDataflowVectorBreakNode, X) == 256, "Offset mismatch for FDataflowVectorBreakNode::X");
static_assert(offsetof(FDataflowVectorBreakNode, Y) == 264, "Offset mismatch for FDataflowVectorBreakNode::Y");
static_assert(offsetof(FDataflowVectorBreakNode, Z) == 272, "Offset mismatch for FDataflowVectorBreakNode::Z");
static_assert(offsetof(FDataflowVectorBreakNode, W) == 280, "Offset mismatch for FDataflowVectorBreakNode::W");

// /Script/DataflowCore.DataflowVectorCrossProductNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorCrossProductNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t CrossProduct[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorCrossProductNode, A) == 224, "Offset mismatch for FDataflowVectorCrossProductNode::A");
static_assert(offsetof(FDataflowVectorCrossProductNode, B) == 256, "Offset mismatch for FDataflowVectorCrossProductNode::B");
static_assert(offsetof(FDataflowVectorCrossProductNode, CrossProduct) == 288, "Offset mismatch for FDataflowVectorCrossProductNode::CrossProduct");

// /Script/DataflowCore.DataflowVectorDistanceNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorDistanceNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t Distance[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorDistanceNode, A) == 224, "Offset mismatch for FDataflowVectorDistanceNode::A");
static_assert(offsetof(FDataflowVectorDistanceNode, B) == 256, "Offset mismatch for FDataflowVectorDistanceNode::B");
static_assert(offsetof(FDataflowVectorDistanceNode, Distance) == 288, "Offset mismatch for FDataflowVectorDistanceNode::Distance");

// /Script/DataflowCore.DataflowVectorDivideNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorDivideNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t Fallback[0x20]; // 0x0120 (Size: 0x20, Type: StructProperty)
    std::uint8_t V[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorDivideNode, A) == 224, "Offset mismatch for FDataflowVectorDivideNode::A");
static_assert(offsetof(FDataflowVectorDivideNode, B) == 256, "Offset mismatch for FDataflowVectorDivideNode::B");
static_assert(offsetof(FDataflowVectorDivideNode, Fallback) == 288, "Offset mismatch for FDataflowVectorDivideNode::Fallback");
static_assert(offsetof(FDataflowVectorDivideNode, V) == 320, "Offset mismatch for FDataflowVectorDivideNode::V");

// /Script/DataflowCore.DataflowVectorDotProductNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorDotProductNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t DotProduct[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorDotProductNode, A) == 224, "Offset mismatch for FDataflowVectorDotProductNode::A");
static_assert(offsetof(FDataflowVectorDotProductNode, B) == 256, "Offset mismatch for FDataflowVectorDotProductNode::B");
static_assert(offsetof(FDataflowVectorDotProductNode, DotProduct) == 288, "Offset mismatch for FDataflowVectorDotProductNode::DotProduct");

// /Script/DataflowCore.DataflowVectorLengthNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorLengthNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t V[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Length[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorLengthNode, V) == 224, "Offset mismatch for FDataflowVectorLengthNode::V");
static_assert(offsetof(FDataflowVectorLengthNode, Length) == 256, "Offset mismatch for FDataflowVectorLengthNode::Length");

// /Script/DataflowCore.DataflowVectorMakeVec2Node
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorMakeVec2Node
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t X[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Vector2D[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorMakeVec2Node, X) == 224, "Offset mismatch for FDataflowVectorMakeVec2Node::X");
static_assert(offsetof(FDataflowVectorMakeVec2Node, Y) == 232, "Offset mismatch for FDataflowVectorMakeVec2Node::Y");
static_assert(offsetof(FDataflowVectorMakeVec2Node, Vector2D) == 240, "Offset mismatch for FDataflowVectorMakeVec2Node::Vector2D");

// /Script/DataflowCore.DataflowVectorMakeVec3Node
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorMakeVec3Node
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t X[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Z[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Vector3d[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorMakeVec3Node, X) == 224, "Offset mismatch for FDataflowVectorMakeVec3Node::X");
static_assert(offsetof(FDataflowVectorMakeVec3Node, Y) == 232, "Offset mismatch for FDataflowVectorMakeVec3Node::Y");
static_assert(offsetof(FDataflowVectorMakeVec3Node, Z) == 240, "Offset mismatch for FDataflowVectorMakeVec3Node::Z");
static_assert(offsetof(FDataflowVectorMakeVec3Node, Vector3d) == 256, "Offset mismatch for FDataflowVectorMakeVec3Node::Vector3d");

// /Script/DataflowCore.DataflowVectorMakeVec4Node
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorMakeVec4Node
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t X[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Y[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Z[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t W[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t Vector4d[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorMakeVec4Node, X) == 224, "Offset mismatch for FDataflowVectorMakeVec4Node::X");
static_assert(offsetof(FDataflowVectorMakeVec4Node, Y) == 232, "Offset mismatch for FDataflowVectorMakeVec4Node::Y");
static_assert(offsetof(FDataflowVectorMakeVec4Node, Z) == 240, "Offset mismatch for FDataflowVectorMakeVec4Node::Z");
static_assert(offsetof(FDataflowVectorMakeVec4Node, W) == 248, "Offset mismatch for FDataflowVectorMakeVec4Node::W");
static_assert(offsetof(FDataflowVectorMakeVec4Node, Vector4d) == 256, "Offset mismatch for FDataflowVectorMakeVec4Node::Vector4d");

// /Script/DataflowCore.DataflowVectorMultiplyNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorMultiplyNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t V[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorMultiplyNode, A) == 224, "Offset mismatch for FDataflowVectorMultiplyNode::A");
static_assert(offsetof(FDataflowVectorMultiplyNode, B) == 256, "Offset mismatch for FDataflowVectorMultiplyNode::B");
static_assert(offsetof(FDataflowVectorMultiplyNode, V) == 288, "Offset mismatch for FDataflowVectorMultiplyNode::V");

// /Script/DataflowCore.DataflowVectorNormalize
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorNormalize
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t V[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Normalized[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorNormalize, V) == 224, "Offset mismatch for FDataflowVectorNormalize::V");
static_assert(offsetof(FDataflowVectorNormalize, Normalized) == 256, "Offset mismatch for FDataflowVectorNormalize::Normalized");

// /Script/DataflowCore.DataflowVectorScaleNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorScaleNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t V[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t Scaled[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorScaleNode, V) == 224, "Offset mismatch for FDataflowVectorScaleNode::V");
static_assert(offsetof(FDataflowVectorScaleNode, Scale) == 256, "Offset mismatch for FDataflowVectorScaleNode::Scale");
static_assert(offsetof(FDataflowVectorScaleNode, Scaled) == 272, "Offset mismatch for FDataflowVectorScaleNode::Scaled");

// /Script/DataflowCore.DataflowVectorSquaredLengthNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorSquaredLengthNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t V[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SquaredLength[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorSquaredLengthNode, V) == 224, "Offset mismatch for FDataflowVectorSquaredLengthNode::V");
static_assert(offsetof(FDataflowVectorSquaredLengthNode, SquaredLength) == 256, "Offset mismatch for FDataflowVectorSquaredLengthNode::SquaredLength");

// /Script/DataflowCore.DataflowVectorSubtractNode
// Kind: ScriptStruct; super: DataflowNode
struct FDataflowVectorSubtractNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t A[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t B[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t V[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorSubtractNode, A) == 224, "Offset mismatch for FDataflowVectorSubtractNode::A");
static_assert(offsetof(FDataflowVectorSubtractNode, B) == 256, "Offset mismatch for FDataflowVectorSubtractNode::B");
static_assert(offsetof(FDataflowVectorSubtractNode, V) == 288, "Offset mismatch for FDataflowVectorSubtractNode::V");

// /Script/DataflowCore.DataflowVectorTypes
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowVectorTypes
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataflowVectorTypes, Value) == 0, "Offset mismatch for FDataflowVectorTypes::Value");

// /Script/DataflowCore.DataflowVertexSelection
// Kind: ScriptStruct; super: DataflowSelection
struct FDataflowVertexSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.NodeColors
// Kind: ScriptStruct; super: none
struct FNodeColors
{
public:
    std::uint8_t NodeTitleColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t NodeBodyTintColor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNodeColors, NodeTitleColor) == 0, "Offset mismatch for FNodeColors::NodeTitleColor");
static_assert(offsetof(FNodeColors, NodeBodyTintColor) == 16, "Offset mismatch for FNodeColors::NodeBodyTintColor");

// /Script/DataflowCore.PinSettings
// Kind: ScriptStruct; super: none
struct FPinSettings
{
public:
    std::uint8_t PinColor[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float WireThickness; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPinSettings, PinColor) == 0, "Offset mismatch for FPinSettings::PinColor");
static_assert(offsetof(FPinSettings, WireThickness) == 16, "Offset mismatch for FPinSettings::WireThickness");

// /Script/DataflowCore.TransformLevelColors
// Kind: ScriptStruct; super: none
struct FTransformLevelColors
{
public:
    TArray<void*> LevelColors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BlankColor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformLevelColors, LevelColors) == 0, "Offset mismatch for FTransformLevelColors::LevelColors");
static_assert(offsetof(FTransformLevelColors, BlankColor) == 16, "Offset mismatch for FTransformLevelColors::BlankColor");

// /Script/DataflowCore.DataflowGraphInterface
// Kind: Class; super: Interface
class UDataflowGraphInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataflowCore.DataflowSettings
// Kind: Class; super: DeveloperSettings
class UDataflowSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> TemplateEntries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NodeColorsMap; // 0x0040 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PinSettingsMap; // 0x0050 (Size: 0x10, Type: MapProperty)
    std::uint8_t TransformLevelColors[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDataflowSettings, TemplateEntries) == 48, "Offset mismatch for UDataflowSettings::TemplateEntries");
static_assert(offsetof(UDataflowSettings, NodeColorsMap) == 64, "Offset mismatch for UDataflowSettings::NodeColorsMap");
static_assert(offsetof(UDataflowSettings, PinSettingsMap) == 80, "Offset mismatch for UDataflowSettings::PinSettingsMap");
static_assert(offsetof(UDataflowSettings, TransformLevelColors) == 96, "Offset mismatch for UDataflowSettings::TransformLevelColors");
