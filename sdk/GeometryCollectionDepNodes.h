/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCollectionDepNodes
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCollectionDepNodes.GeometryCollectionTransferVertexScalarAttributeNode
// Kind: ScriptStruct; super: DataflowNode
struct FGeometryCollectionTransferVertexScalarAttributeNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FromCollection[0x30]; // 0x0110 (Size: 0x30, Type: StructProperty)
    std::uint8_t AttributeKey[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoundingVolumeType; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SampleScale; // 0x0161 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Falloff; // 0x0162 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0163
    float FalloffThreshold; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float EdgeMultiplier; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float BoundMultiplier; // 0x016C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, Collection) == 224, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::Collection");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, FromCollection) == 272, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::FromCollection");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, AttributeKey) == 320, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::AttributeKey");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, BoundingVolumeType) == 352, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::BoundingVolumeType");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, SampleScale) == 353, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::SampleScale");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, Falloff) == 354, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::Falloff");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, FalloffThreshold) == 356, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::FalloffThreshold");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, EdgeMultiplier) == 360, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::EdgeMultiplier");
static_assert(offsetof(FGeometryCollectionTransferVertexScalarAttributeNode, BoundMultiplier) == 364, "Offset mismatch for FGeometryCollectionTransferVertexScalarAttributeNode::BoundMultiplier");

// /Script/GeometryCollectionDepNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    TArray<void*> FloatArray; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    float Scale; // 0x0120 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSetVertexColorInCollectionFromFloatArrayDataflowNode, Collection) == 224, "Offset mismatch for FSetVertexColorInCollectionFromFloatArrayDataflowNode::Collection");
static_assert(offsetof(FSetVertexColorInCollectionFromFloatArrayDataflowNode, FloatArray) == 272, "Offset mismatch for FSetVertexColorInCollectionFromFloatArrayDataflowNode::FloatArray");
static_assert(offsetof(FSetVertexColorInCollectionFromFloatArrayDataflowNode, Scale) == 288, "Offset mismatch for FSetVertexColorInCollectionFromFloatArrayDataflowNode::Scale");

// /Script/GeometryCollectionDepNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
// Kind: ScriptStruct; super: DataflowNode
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Collection[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t VertexSelection[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SelectedColor[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    std::uint8_t NonSelectedColor[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, Collection) == 224, "Offset mismatch for FSetVertexColorInCollectionFromVertexSelectionDataflowNode::Collection");
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, VertexSelection) == 272, "Offset mismatch for FSetVertexColorInCollectionFromVertexSelectionDataflowNode::VertexSelection");
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, SelectedColor) == 312, "Offset mismatch for FSetVertexColorInCollectionFromVertexSelectionDataflowNode::SelectedColor");
static_assert(offsetof(FSetVertexColorInCollectionFromVertexSelectionDataflowNode, NonSelectedColor) == 328, "Offset mismatch for FSetVertexColorInCollectionFromVertexSelectionDataflowNode::NonSelectedColor");
