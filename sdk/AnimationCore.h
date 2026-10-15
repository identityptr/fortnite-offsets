/**
 * decamp dumper generated SDK
 * Package: /Script/AnimationCore
 */
#pragma once
#include "Basic.h"

// /Script/AnimationCore.AimConstraintDescription
// Kind: ScriptStruct; super: ConstraintDescriptionEx
struct FAimConstraintDescription
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LookAt_Axis[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t LookUp_Axis[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseLookUp; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    std::uint8_t LookUpTarget[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 16, "Offset mismatch for FAimConstraintDescription::LookAt_Axis");
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 48, "Offset mismatch for FAimConstraintDescription::LookUp_Axis");
static_assert(offsetof(FAimConstraintDescription, bUseLookUp) == 80, "Offset mismatch for FAimConstraintDescription::bUseLookUp");
static_assert(offsetof(FAimConstraintDescription, LookUpTarget) == 88, "Offset mismatch for FAimConstraintDescription::LookUpTarget");

// /Script/AnimationCore.Axis
// Kind: ScriptStruct; super: none
struct FAxis
{
public:
    std::uint8_t Axis[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInLocalSpace; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAxis, Axis) == 0, "Offset mismatch for FAxis::Axis");
static_assert(offsetof(FAxis, bInLocalSpace) == 24, "Offset mismatch for FAxis::bInLocalSpace");

// /Script/AnimationCore.CCDIKChainLink
// Kind: ScriptStruct; super: none
struct FCCDIKChainLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimationCore.ConstraintData
// Kind: ScriptStruct; super: none
struct FConstraintData
{
public:
    std::uint8_t Constraint[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMaintainOffset; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xB]; // 0x0015
    std::uint8_t Offset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t CurrentTransform[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintData, Constraint) == 0, "Offset mismatch for FConstraintData::Constraint");
static_assert(offsetof(FConstraintData, Weight) == 16, "Offset mismatch for FConstraintData::Weight");
static_assert(offsetof(FConstraintData, bMaintainOffset) == 20, "Offset mismatch for FConstraintData::bMaintainOffset");
static_assert(offsetof(FConstraintData, Offset) == 32, "Offset mismatch for FConstraintData::Offset");
static_assert(offsetof(FConstraintData, CurrentTransform) == 128, "Offset mismatch for FConstraintData::CurrentTransform");

// /Script/AnimationCore.ConstraintDescription
// Kind: ScriptStruct; super: none
struct FConstraintDescription
{
public:
    std::uint8_t bTranslation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRotation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScale; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bParent; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TranslationAxes[0x3]; // 0x0004 (Size: 0x3, Type: StructProperty)
    std::uint8_t RotationAxes[0x3]; // 0x0007 (Size: 0x3, Type: StructProperty)
    std::uint8_t ScaleAxes[0x1]; // 0x000A (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintDescription, bTranslation) == 0, "Offset mismatch for FConstraintDescription::bTranslation");
static_assert(offsetof(FConstraintDescription, bRotation) == 1, "Offset mismatch for FConstraintDescription::bRotation");
static_assert(offsetof(FConstraintDescription, bScale) == 2, "Offset mismatch for FConstraintDescription::bScale");
static_assert(offsetof(FConstraintDescription, bParent) == 3, "Offset mismatch for FConstraintDescription::bParent");
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 4, "Offset mismatch for FConstraintDescription::TranslationAxes");
static_assert(offsetof(FConstraintDescription, RotationAxes) == 7, "Offset mismatch for FConstraintDescription::RotationAxes");
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 10, "Offset mismatch for FConstraintDescription::ScaleAxes");

// /Script/AnimationCore.ConstraintDescriptionEx
// Kind: ScriptStruct; super: none
struct FConstraintDescriptionEx
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AxesFilterOption[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 8, "Offset mismatch for FConstraintDescriptionEx::AxesFilterOption");

// /Script/AnimationCore.ConstraintDescriptor
// Kind: ScriptStruct; super: none
struct FConstraintDescriptor
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConstraintDescriptor, Type) == 0, "Offset mismatch for FConstraintDescriptor::Type");

// /Script/AnimationCore.ConstraintOffset
// Kind: ScriptStruct; super: none
struct FConstraintOffset
{
public:
    std::uint8_t Translation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Scale[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t Parent[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintOffset, Translation) == 0, "Offset mismatch for FConstraintOffset::Translation");
static_assert(offsetof(FConstraintOffset, Rotation) == 32, "Offset mismatch for FConstraintOffset::Rotation");
static_assert(offsetof(FConstraintOffset, Scale) == 64, "Offset mismatch for FConstraintOffset::Scale");
static_assert(offsetof(FConstraintOffset, Parent) == 96, "Offset mismatch for FConstraintOffset::Parent");

// /Script/AnimationCore.EulerTransform
// Kind: ScriptStruct; super: none
struct FEulerTransform
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEulerTransform, Location) == 0, "Offset mismatch for FEulerTransform::Location");
static_assert(offsetof(FEulerTransform, Rotation) == 24, "Offset mismatch for FEulerTransform::Rotation");
static_assert(offsetof(FEulerTransform, Scale) == 48, "Offset mismatch for FEulerTransform::Scale");

// /Script/AnimationCore.FABRIKChainLink
// Kind: ScriptStruct; super: none
struct FFABRIKChainLink
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimationCore.FilterOptionPerAxis
// Kind: ScriptStruct; super: none
struct FFilterOptionPerAxis
{
public:
    std::uint8_t bX; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bY; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bZ; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFilterOptionPerAxis, bX) == 0, "Offset mismatch for FFilterOptionPerAxis::bX");
static_assert(offsetof(FFilterOptionPerAxis, bY) == 1, "Offset mismatch for FFilterOptionPerAxis::bY");
static_assert(offsetof(FFilterOptionPerAxis, bZ) == 2, "Offset mismatch for FFilterOptionPerAxis::bZ");

// /Script/AnimationCore.NodeChain
// Kind: ScriptStruct; super: none
struct FNodeChain
{
public:
    TArray<void*> Nodes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNodeChain, Nodes) == 0, "Offset mismatch for FNodeChain::Nodes");

// /Script/AnimationCore.NodeHierarchyData
// Kind: ScriptStruct; super: none
struct FNodeHierarchyData
{
public:
    TArray<void*> Nodes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NodeNameToIndexMapping; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNodeHierarchyData, Nodes) == 0, "Offset mismatch for FNodeHierarchyData::Nodes");
static_assert(offsetof(FNodeHierarchyData, Transforms) == 16, "Offset mismatch for FNodeHierarchyData::Transforms");
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 32, "Offset mismatch for FNodeHierarchyData::NodeNameToIndexMapping");

// /Script/AnimationCore.NodeHierarchyWithUserData
// Kind: ScriptStruct; super: none
struct FNodeHierarchyWithUserData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Hierarchy[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 8, "Offset mismatch for FNodeHierarchyWithUserData::Hierarchy");

// /Script/AnimationCore.NodeObject
// Kind: ScriptStruct; super: none
struct FNodeObject
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName ParentName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNodeObject, Name) == 0, "Offset mismatch for FNodeObject::Name");
static_assert(offsetof(FNodeObject, ParentName) == 4, "Offset mismatch for FNodeObject::ParentName");

// /Script/AnimationCore.TransformConstraint
// Kind: ScriptStruct; super: none
struct FTransformConstraint
{
public:
    std::uint8_t Operator[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceNode[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetNode[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMaintainOffset; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTransformConstraint, Operator) == 0, "Offset mismatch for FTransformConstraint::Operator");
static_assert(offsetof(FTransformConstraint, SourceNode) == 16, "Offset mismatch for FTransformConstraint::SourceNode");
static_assert(offsetof(FTransformConstraint, TargetNode) == 20, "Offset mismatch for FTransformConstraint::TargetNode");
static_assert(offsetof(FTransformConstraint, Weight) == 24, "Offset mismatch for FTransformConstraint::Weight");
static_assert(offsetof(FTransformConstraint, bMaintainOffset) == 28, "Offset mismatch for FTransformConstraint::bMaintainOffset");

// /Script/AnimationCore.TransformConstraintDescription
// Kind: ScriptStruct; super: ConstraintDescriptionEx
struct FTransformConstraintDescription
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TransformType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTransformConstraintDescription, TransformType) == 16, "Offset mismatch for FTransformConstraintDescription::TransformType");

// /Script/AnimationCore.TransformFilter
// Kind: ScriptStruct; super: none
struct FTransformFilter
{
public:
    std::uint8_t TranslationFilter[0x3]; // 0x0000 (Size: 0x3, Type: StructProperty)
    std::uint8_t RotationFilter[0x3]; // 0x0003 (Size: 0x3, Type: StructProperty)
    std::uint8_t ScaleFilter[0x1]; // 0x0006 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformFilter, TranslationFilter) == 0, "Offset mismatch for FTransformFilter::TranslationFilter");
static_assert(offsetof(FTransformFilter, RotationFilter) == 3, "Offset mismatch for FTransformFilter::RotationFilter");
static_assert(offsetof(FTransformFilter, ScaleFilter) == 6, "Offset mismatch for FTransformFilter::ScaleFilter");

// /Script/AnimationCore.TransformNoScale
// Kind: ScriptStruct; super: none
struct FTransformNoScale
{
public:
    std::uint8_t Location[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTransformNoScale, Location) == 0, "Offset mismatch for FTransformNoScale::Location");
static_assert(offsetof(FTransformNoScale, Rotation) == 32, "Offset mismatch for FTransformNoScale::Rotation");

// /Script/AnimationCore.AnimationDataSourceRegistry
// Kind: Class; super: Object
class UAnimationDataSourceRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> DataSources; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAnimationDataSourceRegistry, DataSources) == 40, "Offset mismatch for UAnimationDataSourceRegistry::DataSources");
