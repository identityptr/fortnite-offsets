/**
 * decamp dumper generated SDK
 * Package: /Script/ControlRig
 */
#pragma once
#include "Basic.h"

// /Script/ControlRig.AimTarget
// Kind: ScriptStruct; super: none
struct FAimTarget
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t AlignVector[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAimTarget, Weight) == 0, "Offset mismatch for FAimTarget::Weight");
static_assert(offsetof(FAimTarget, Transform) == 16, "Offset mismatch for FAimTarget::Transform");
static_assert(offsetof(FAimTarget, AlignVector) == 112, "Offset mismatch for FAimTarget::AlignVector");

// /Script/ControlRig.AnimNode_ControlRig
// Kind: ScriptStruct; super: AnimNode_ControlRigBase
struct FAnimNode_ControlRig
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t ControlRigAssetReference[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultControlRigAssetReference[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    void* ControlRigClass; // 0x0188 (Size: 0x8, Type: ClassProperty)
    void* DefaultControlRigClass; // 0x0190 (Size: 0x8, Type: ClassProperty)
    void* ControlRig; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ControlRigPerClass; // 0x01A0 (Size: 0x10, Type: MapProperty)
    float Alpha; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AlphaInputType; // 0x01B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlphaBoolEnabled; // 0x01B5 (Size: 0x1, Type: BoolProperty)
    // 0x01B5 BoolProperty bSetRefPoseFromSkeleton (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x01B6
    std::uint8_t AlphaScaleBias[0x8]; // 0x01B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlphaBoolBlend[0x48]; // 0x01C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t AlphaCurveName[0x4]; // 0x0208 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlphaScaleBiasClamp[0x34]; // 0x020C (Size: 0x34, Type: StructProperty)
    TMap<void*, void*> InputMapping; // 0x0240 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OutputMapping; // 0x0250 (Size: 0x10, Type: MapProperty)
    std::int32_t LODThreshold; // 0x0260 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_ControlRig, ControlRigAssetReference) == 360, "Offset mismatch for FAnimNode_ControlRig::ControlRigAssetReference");
static_assert(offsetof(FAnimNode_ControlRig, DefaultControlRigAssetReference) == 376, "Offset mismatch for FAnimNode_ControlRig::DefaultControlRigAssetReference");
static_assert(offsetof(FAnimNode_ControlRig, ControlRigClass) == 392, "Offset mismatch for FAnimNode_ControlRig::ControlRigClass");
static_assert(offsetof(FAnimNode_ControlRig, DefaultControlRigClass) == 400, "Offset mismatch for FAnimNode_ControlRig::DefaultControlRigClass");
static_assert(offsetof(FAnimNode_ControlRig, ControlRig) == 408, "Offset mismatch for FAnimNode_ControlRig::ControlRig");
static_assert(offsetof(FAnimNode_ControlRig, ControlRigPerClass) == 416, "Offset mismatch for FAnimNode_ControlRig::ControlRigPerClass");
static_assert(offsetof(FAnimNode_ControlRig, Alpha) == 432, "Offset mismatch for FAnimNode_ControlRig::Alpha");
static_assert(offsetof(FAnimNode_ControlRig, AlphaInputType) == 436, "Offset mismatch for FAnimNode_ControlRig::AlphaInputType");
static_assert(offsetof(FAnimNode_ControlRig, bAlphaBoolEnabled) == 437, "Offset mismatch for FAnimNode_ControlRig::bAlphaBoolEnabled");
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBias) == 440, "Offset mismatch for FAnimNode_ControlRig::AlphaScaleBias");
static_assert(offsetof(FAnimNode_ControlRig, AlphaBoolBlend) == 448, "Offset mismatch for FAnimNode_ControlRig::AlphaBoolBlend");
static_assert(offsetof(FAnimNode_ControlRig, AlphaCurveName) == 520, "Offset mismatch for FAnimNode_ControlRig::AlphaCurveName");
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBiasClamp) == 524, "Offset mismatch for FAnimNode_ControlRig::AlphaScaleBiasClamp");
static_assert(offsetof(FAnimNode_ControlRig, InputMapping) == 576, "Offset mismatch for FAnimNode_ControlRig::InputMapping");
static_assert(offsetof(FAnimNode_ControlRig, OutputMapping) == 592, "Offset mismatch for FAnimNode_ControlRig::OutputMapping");
static_assert(offsetof(FAnimNode_ControlRig, LODThreshold) == 608, "Offset mismatch for FAnimNode_ControlRig::LODThreshold");

// /Script/ControlRig.AnimNode_ControlRigBase
// Kind: ScriptStruct; super: AnimNode_CustomProperty
struct FAnimNode_ControlRigBase
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Source[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t bResetInputPoseToInitial; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputPose; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferInputCurves; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransferPoseInGlobalSpace; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    TArray<void*> InputBonesToTransfer; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputBonesToTransfer; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> NodeMappingContainer; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InputSettings[0x2]; // 0x00A8 (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputSettings[0x2]; // 0x00AA (Size: 0x2, Type: StructProperty)
    std::uint8_t bExecute; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xB]; // 0x00AD
    TArray<void*> EventQueue; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimNode_ControlRigBase, Source) == 88, "Offset mismatch for FAnimNode_ControlRigBase::Source");
static_assert(offsetof(FAnimNode_ControlRigBase, bResetInputPoseToInitial) == 104, "Offset mismatch for FAnimNode_ControlRigBase::bResetInputPoseToInitial");
static_assert(offsetof(FAnimNode_ControlRigBase, bTransferInputPose) == 105, "Offset mismatch for FAnimNode_ControlRigBase::bTransferInputPose");
static_assert(offsetof(FAnimNode_ControlRigBase, bTransferInputCurves) == 106, "Offset mismatch for FAnimNode_ControlRigBase::bTransferInputCurves");
static_assert(offsetof(FAnimNode_ControlRigBase, bTransferPoseInGlobalSpace) == 107, "Offset mismatch for FAnimNode_ControlRigBase::bTransferPoseInGlobalSpace");
static_assert(offsetof(FAnimNode_ControlRigBase, InputBonesToTransfer) == 112, "Offset mismatch for FAnimNode_ControlRigBase::InputBonesToTransfer");
static_assert(offsetof(FAnimNode_ControlRigBase, OutputBonesToTransfer) == 128, "Offset mismatch for FAnimNode_ControlRigBase::OutputBonesToTransfer");
static_assert(offsetof(FAnimNode_ControlRigBase, AssetUserData) == 144, "Offset mismatch for FAnimNode_ControlRigBase::AssetUserData");
static_assert(offsetof(FAnimNode_ControlRigBase, NodeMappingContainer) == 160, "Offset mismatch for FAnimNode_ControlRigBase::NodeMappingContainer");
static_assert(offsetof(FAnimNode_ControlRigBase, InputSettings) == 168, "Offset mismatch for FAnimNode_ControlRigBase::InputSettings");
static_assert(offsetof(FAnimNode_ControlRigBase, OutputSettings) == 170, "Offset mismatch for FAnimNode_ControlRigBase::OutputSettings");
static_assert(offsetof(FAnimNode_ControlRigBase, bExecute) == 172, "Offset mismatch for FAnimNode_ControlRigBase::bExecute");
static_assert(offsetof(FAnimNode_ControlRigBase, EventQueue) == 184, "Offset mismatch for FAnimNode_ControlRigBase::EventQueue");

// /Script/ControlRig.AnimNode_ControlRigInputPose
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_ControlRigInputPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InputPose[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnimNode_ControlRigInputPose, InputPose) == 16, "Offset mismatch for FAnimNode_ControlRigInputPose::InputPose");

// /Script/ControlRig.AnimNode_ControlRig_ExternalSource
// Kind: ScriptStruct; super: AnimNode_ControlRigBase
struct FAnimNode_ControlRig_ExternalSource
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TWeakObjectPtr<void> ControlRig; // 0x0168 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FAnimNode_ControlRig_ExternalSource, ControlRig) == 360, "Offset mismatch for FAnimNode_ControlRig_ExternalSource::ControlRig");

// /Script/ControlRig.AnimationHierarchy
// Kind: ScriptStruct; super: NodeHierarchyWithUserData
struct FAnimationHierarchy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> UserData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimationHierarchy, UserData) == 56, "Offset mismatch for FAnimationHierarchy::UserData");

// /Script/ControlRig.BlendTarget
// Kind: ScriptStruct; super: none
struct FBlendTarget
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBlendTarget, Transform) == 0, "Offset mismatch for FBlendTarget::Transform");
static_assert(offsetof(FBlendTarget, Weight) == 96, "Offset mismatch for FBlendTarget::Weight");

// /Script/ControlRig.CRSimContainer
// Kind: ScriptStruct; super: none
struct FCRSimContainer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float TimeStep; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float AccumulatedTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TimeLeftForStep; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCRSimContainer, TimeStep) == 8, "Offset mismatch for FCRSimContainer::TimeStep");
static_assert(offsetof(FCRSimContainer, AccumulatedTime) == 12, "Offset mismatch for FCRSimContainer::AccumulatedTime");
static_assert(offsetof(FCRSimContainer, TimeLeftForStep) == 16, "Offset mismatch for FCRSimContainer::TimeLeftForStep");

// /Script/ControlRig.CRSimLinearSpring
// Kind: ScriptStruct; super: none
struct FCRSimLinearSpring
{
public:
    std::int32_t SubjectA; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SubjectB; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Coefficient; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Equilibrium; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCRSimLinearSpring, SubjectA) == 0, "Offset mismatch for FCRSimLinearSpring::SubjectA");
static_assert(offsetof(FCRSimLinearSpring, SubjectB) == 4, "Offset mismatch for FCRSimLinearSpring::SubjectB");
static_assert(offsetof(FCRSimLinearSpring, Coefficient) == 8, "Offset mismatch for FCRSimLinearSpring::Coefficient");
static_assert(offsetof(FCRSimLinearSpring, Equilibrium) == 12, "Offset mismatch for FCRSimLinearSpring::Equilibrium");

// /Script/ControlRig.CRSimPointConstraint
// Kind: ScriptStruct; super: none
struct FCRSimPointConstraint
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t SubjectA; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SubjectB; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t DataA[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t DataB[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCRSimPointConstraint, Type) == 0, "Offset mismatch for FCRSimPointConstraint::Type");
static_assert(offsetof(FCRSimPointConstraint, SubjectA) == 4, "Offset mismatch for FCRSimPointConstraint::SubjectA");
static_assert(offsetof(FCRSimPointConstraint, SubjectB) == 8, "Offset mismatch for FCRSimPointConstraint::SubjectB");
static_assert(offsetof(FCRSimPointConstraint, DataA) == 16, "Offset mismatch for FCRSimPointConstraint::DataA");
static_assert(offsetof(FCRSimPointConstraint, DataB) == 40, "Offset mismatch for FCRSimPointConstraint::DataB");

// /Script/ControlRig.CRSimPointContainer
// Kind: ScriptStruct; super: CRSimContainer
struct FCRSimPointContainer
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Points; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Springs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Forces; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionVolumes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Constraints; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviousStep; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCRSimPointContainer, Points) == 24, "Offset mismatch for FCRSimPointContainer::Points");
static_assert(offsetof(FCRSimPointContainer, Springs) == 40, "Offset mismatch for FCRSimPointContainer::Springs");
static_assert(offsetof(FCRSimPointContainer, Forces) == 56, "Offset mismatch for FCRSimPointContainer::Forces");
static_assert(offsetof(FCRSimPointContainer, CollisionVolumes) == 72, "Offset mismatch for FCRSimPointContainer::CollisionVolumes");
static_assert(offsetof(FCRSimPointContainer, Constraints) == 88, "Offset mismatch for FCRSimPointContainer::Constraints");
static_assert(offsetof(FCRSimPointContainer, PreviousStep) == 104, "Offset mismatch for FCRSimPointContainer::PreviousStep");

// /Script/ControlRig.CRSimPointForce
// Kind: ScriptStruct; super: none
struct FCRSimPointForce
{
public:
    std::uint8_t ForceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Vector[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Coefficient; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNormalize; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCRSimPointForce, ForceType) == 0, "Offset mismatch for FCRSimPointForce::ForceType");
static_assert(offsetof(FCRSimPointForce, Vector) == 8, "Offset mismatch for FCRSimPointForce::Vector");
static_assert(offsetof(FCRSimPointForce, Coefficient) == 32, "Offset mismatch for FCRSimPointForce::Coefficient");
static_assert(offsetof(FCRSimPointForce, bNormalize) == 36, "Offset mismatch for FCRSimPointForce::bNormalize");

// /Script/ControlRig.CRSimSoftCollision
// Kind: ScriptStruct; super: none
struct FCRSimSoftCollision
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t ShapeType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0061
    float MinimumDistance; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float MaximumDistance; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FalloffType; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float Coefficient; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInverted; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCRSimSoftCollision, Transform) == 0, "Offset mismatch for FCRSimSoftCollision::Transform");
static_assert(offsetof(FCRSimSoftCollision, ShapeType) == 96, "Offset mismatch for FCRSimSoftCollision::ShapeType");
static_assert(offsetof(FCRSimSoftCollision, MinimumDistance) == 100, "Offset mismatch for FCRSimSoftCollision::MinimumDistance");
static_assert(offsetof(FCRSimSoftCollision, MaximumDistance) == 104, "Offset mismatch for FCRSimSoftCollision::MaximumDistance");
static_assert(offsetof(FCRSimSoftCollision, FalloffType) == 108, "Offset mismatch for FCRSimSoftCollision::FalloffType");
static_assert(offsetof(FCRSimSoftCollision, Coefficient) == 112, "Offset mismatch for FCRSimSoftCollision::Coefficient");
static_assert(offsetof(FCRSimSoftCollision, bInverted) == 116, "Offset mismatch for FCRSimSoftCollision::bInverted");

// /Script/ControlRig.CachedRigComponent
// Kind: ScriptStruct; super: none
struct FCachedRigComponent
{
public:
    std::uint8_t CachedElement[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint16_t Index; // 0x001C (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FCachedRigComponent, CachedElement) == 0, "Offset mismatch for FCachedRigComponent::CachedElement");
static_assert(offsetof(FCachedRigComponent, Name) == 24, "Offset mismatch for FCachedRigComponent::Name");
static_assert(offsetof(FCachedRigComponent, Index) == 28, "Offset mismatch for FCachedRigComponent::Index");

// /Script/ControlRig.CachedRigElement
// Kind: ScriptStruct; super: none
struct FCachedRigElement
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint16_t Index; // 0x0008 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    std::int32_t ContainerVersion; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCachedRigElement, Key) == 0, "Offset mismatch for FCachedRigElement::Key");
static_assert(offsetof(FCachedRigElement, Index) == 8, "Offset mismatch for FCachedRigElement::Index");
static_assert(offsetof(FCachedRigElement, ContainerVersion) == 12, "Offset mismatch for FCachedRigElement::ContainerVersion");

// /Script/ControlRig.ChannelMapInfo
// Kind: ScriptStruct; super: none
struct FChannelMapInfo
{
public:
    std::int32_t ControlIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalChannelIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ChannelIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ParentControlIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelTypeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDoesHaveSpace; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::int32_t SpaceChannelIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaskIndex; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t CategoryIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> ConstraintsIndex; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChannelMapInfo, ControlIndex) == 0, "Offset mismatch for FChannelMapInfo::ControlIndex");
static_assert(offsetof(FChannelMapInfo, TotalChannelIndex) == 4, "Offset mismatch for FChannelMapInfo::TotalChannelIndex");
static_assert(offsetof(FChannelMapInfo, ChannelIndex) == 8, "Offset mismatch for FChannelMapInfo::ChannelIndex");
static_assert(offsetof(FChannelMapInfo, ParentControlIndex) == 12, "Offset mismatch for FChannelMapInfo::ParentControlIndex");
static_assert(offsetof(FChannelMapInfo, ChannelTypeName) == 16, "Offset mismatch for FChannelMapInfo::ChannelTypeName");
static_assert(offsetof(FChannelMapInfo, bDoesHaveSpace) == 20, "Offset mismatch for FChannelMapInfo::bDoesHaveSpace");
static_assert(offsetof(FChannelMapInfo, SpaceChannelIndex) == 24, "Offset mismatch for FChannelMapInfo::SpaceChannelIndex");
static_assert(offsetof(FChannelMapInfo, MaskIndex) == 28, "Offset mismatch for FChannelMapInfo::MaskIndex");
static_assert(offsetof(FChannelMapInfo, CategoryIndex) == 32, "Offset mismatch for FChannelMapInfo::CategoryIndex");
static_assert(offsetof(FChannelMapInfo, ConstraintsIndex) == 40, "Offset mismatch for FChannelMapInfo::ConstraintsIndex");

// /Script/ControlRig.ConstraintNodeData
// Kind: ScriptStruct; super: none
struct FConstraintNodeData
{
public:
    std::uint8_t RelativeParent[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t ConstraintOffset[0xC0]; // 0x0060 (Size: 0xC0, Type: StructProperty)
    FName LinkedNode; // 0x0120 (Size: 0x8, Type: NameProperty)
    TArray<void*> Constraints; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConstraintNodeData, RelativeParent) == 0, "Offset mismatch for FConstraintNodeData::RelativeParent");
static_assert(offsetof(FConstraintNodeData, ConstraintOffset) == 96, "Offset mismatch for FConstraintNodeData::ConstraintOffset");
static_assert(offsetof(FConstraintNodeData, LinkedNode) == 288, "Offset mismatch for FConstraintNodeData::LinkedNode");
static_assert(offsetof(FConstraintNodeData, Constraints) == 296, "Offset mismatch for FConstraintNodeData::Constraints");

// /Script/ControlRig.ConstraintParent
// Kind: ScriptStruct; super: none
struct FConstraintParent
{
public:
    std::uint8_t Item[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FConstraintParent, Item) == 0, "Offset mismatch for FConstraintParent::Item");
static_assert(offsetof(FConstraintParent, Weight) == 8, "Offset mismatch for FConstraintParent::Weight");

// /Script/ControlRig.ConstraintTarget
// Kind: ScriptStruct; super: none
struct FConstraintTarget
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMaintainOffset; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x1]; // 0x0065 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConstraintTarget, Transform) == 0, "Offset mismatch for FConstraintTarget::Transform");
static_assert(offsetof(FConstraintTarget, Weight) == 96, "Offset mismatch for FConstraintTarget::Weight");
static_assert(offsetof(FConstraintTarget, bMaintainOffset) == 100, "Offset mismatch for FConstraintTarget::bMaintainOffset");
static_assert(offsetof(FConstraintTarget, Filter) == 101, "Offset mismatch for FConstraintTarget::Filter");

// /Script/ControlRig.ControlRigAnimInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FControlRigAnimInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FControlRigAnimInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FControlRigAnimInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/ControlRig.ControlRigAnimNodeEventName
// Kind: ScriptStruct; super: none
struct FControlRigAnimNodeEventName
{
public:
    FName EventName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FControlRigAnimNodeEventName, EventName) == 0, "Offset mismatch for FControlRigAnimNodeEventName::EventName");

// /Script/ControlRig.ControlRigAssetSoftReference
// Kind: ScriptStruct; super: none
struct FControlRigAssetSoftReference
{
public:
    std::uint8_t BlueprintRigClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> ControlRigAsset; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FControlRigAssetSoftReference, BlueprintRigClass) == 0, "Offset mismatch for FControlRigAssetSoftReference::BlueprintRigClass");
static_assert(offsetof(FControlRigAssetSoftReference, ControlRigAsset) == 32, "Offset mismatch for FControlRigAssetSoftReference::ControlRigAsset");

// /Script/ControlRig.ControlRigAssetStrongReference
// Kind: ScriptStruct; super: none
struct FControlRigAssetStrongReference
{
public:
    void* BlueprintRigClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* ControlRigAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FControlRigAssetStrongReference, BlueprintRigClass) == 0, "Offset mismatch for FControlRigAssetStrongReference::BlueprintRigClass");
static_assert(offsetof(FControlRigAssetStrongReference, ControlRigAsset) == 8, "Offset mismatch for FControlRigAssetStrongReference::ControlRigAsset");

// /Script/ControlRig.ControlRigComponentMappedBone
// Kind: ScriptStruct; super: none
struct FControlRigComponentMappedBone
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName Target; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FControlRigComponentMappedBone, Source) == 0, "Offset mismatch for FControlRigComponentMappedBone::Source");
static_assert(offsetof(FControlRigComponentMappedBone, Target) == 4, "Offset mismatch for FControlRigComponentMappedBone::Target");

// /Script/ControlRig.ControlRigComponentMappedComponent
// Kind: ScriptStruct; super: none
struct FControlRigComponentMappedComponent
{
public:
    void* Component; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ElementName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Direction; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FControlRigComponentMappedComponent, Component) == 0, "Offset mismatch for FControlRigComponentMappedComponent::Component");
static_assert(offsetof(FControlRigComponentMappedComponent, ElementName) == 8, "Offset mismatch for FControlRigComponentMappedComponent::ElementName");
static_assert(offsetof(FControlRigComponentMappedComponent, ElementType) == 12, "Offset mismatch for FControlRigComponentMappedComponent::ElementType");
static_assert(offsetof(FControlRigComponentMappedComponent, Direction) == 13, "Offset mismatch for FControlRigComponentMappedComponent::Direction");

// /Script/ControlRig.ControlRigComponentMappedCurve
// Kind: ScriptStruct; super: none
struct FControlRigComponentMappedCurve
{
public:
    std::uint8_t Source[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName Target; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FControlRigComponentMappedCurve, Source) == 0, "Offset mismatch for FControlRigComponentMappedCurve::Source");
static_assert(offsetof(FControlRigComponentMappedCurve, Target) == 4, "Offset mismatch for FControlRigComponentMappedCurve::Target");

// /Script/ControlRig.ControlRigComponentMappedElement
// Kind: ScriptStruct; super: none
struct FControlRigComponentMappedElement
{
public:
    std::uint8_t ComponentReference[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::int32_t TransformIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t TransformName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t ElementType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0049
    std::uint8_t ElementName[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    std::uint8_t Direction; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0051
    std::uint8_t Offset[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space; // 0x00C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C5
    void* SceneComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ElementIndex; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x00D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FControlRigComponentMappedElement, ComponentReference) == 0, "Offset mismatch for FControlRigComponentMappedElement::ComponentReference");
static_assert(offsetof(FControlRigComponentMappedElement, TransformIndex) == 64, "Offset mismatch for FControlRigComponentMappedElement::TransformIndex");
static_assert(offsetof(FControlRigComponentMappedElement, TransformName) == 68, "Offset mismatch for FControlRigComponentMappedElement::TransformName");
static_assert(offsetof(FControlRigComponentMappedElement, ElementType) == 72, "Offset mismatch for FControlRigComponentMappedElement::ElementType");
static_assert(offsetof(FControlRigComponentMappedElement, ElementName) == 76, "Offset mismatch for FControlRigComponentMappedElement::ElementName");
static_assert(offsetof(FControlRigComponentMappedElement, Direction) == 80, "Offset mismatch for FControlRigComponentMappedElement::Direction");
static_assert(offsetof(FControlRigComponentMappedElement, Offset) == 96, "Offset mismatch for FControlRigComponentMappedElement::Offset");
static_assert(offsetof(FControlRigComponentMappedElement, Weight) == 192, "Offset mismatch for FControlRigComponentMappedElement::Weight");
static_assert(offsetof(FControlRigComponentMappedElement, Space) == 196, "Offset mismatch for FControlRigComponentMappedElement::Space");
static_assert(offsetof(FControlRigComponentMappedElement, SceneComponent) == 200, "Offset mismatch for FControlRigComponentMappedElement::SceneComponent");
static_assert(offsetof(FControlRigComponentMappedElement, ElementIndex) == 208, "Offset mismatch for FControlRigComponentMappedElement::ElementIndex");
static_assert(offsetof(FControlRigComponentMappedElement, SubIndex) == 212, "Offset mismatch for FControlRigComponentMappedElement::SubIndex");

// /Script/ControlRig.ControlRigControlPose
// Kind: ScriptStruct; super: none
struct FControlRigControlPose
{
public:
    TArray<void*> CopyOfControls; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlRigControlPose, CopyOfControls) == 0, "Offset mismatch for FControlRigControlPose::CopyOfControls");

// /Script/ControlRig.ControlRigExecuteContext
// Kind: ScriptStruct; super: RigVMExecuteContext
struct FControlRigExecuteContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigIOSettings
// Kind: ScriptStruct; super: none
struct FControlRigIOSettings
{
public:
    std::uint8_t bUpdatePose; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateCurves; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FControlRigIOSettings, bUpdatePose) == 0, "Offset mismatch for FControlRigIOSettings::bUpdatePose");
static_assert(offsetof(FControlRigIOSettings, bUpdateCurves) == 1, "Offset mismatch for FControlRigIOSettings::bUpdateCurves");

// /Script/ControlRig.ControlRigLayerInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FControlRigLayerInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FControlRigLayerInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FControlRigLayerInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/ControlRig.ControlRigOverrideContainer
// Kind: ScriptStruct; super: none
struct FControlRigOverrideContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigOverrideValue
// Kind: ScriptStruct; super: none
struct FControlRigOverrideValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FControlRigReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigReplayTracks
// Kind: ScriptStruct; super: SampleTrackHost
struct FControlRigReplayTracks
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigReplayVariable
// Kind: ScriptStruct; super: none
struct FControlRigReplayVariable
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t CPPType[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FControlRigReplayVariable, Name) == 0, "Offset mismatch for FControlRigReplayVariable::Name");
static_assert(offsetof(FControlRigReplayVariable, CPPType) == 4, "Offset mismatch for FControlRigReplayVariable::CPPType");
static_assert(offsetof(FControlRigReplayVariable, Value) == 8, "Offset mismatch for FControlRigReplayVariable::Value");

// /Script/ControlRig.ControlRigSequenceObjectReference
// Kind: ScriptStruct; super: none
struct FControlRigSequenceObjectReference
{
public:
    void* ControlRigClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ControlRigAssetReference[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigClass) == 0, "Offset mismatch for FControlRigSequenceObjectReference::ControlRigClass");
static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigAssetReference) == 8, "Offset mismatch for FControlRigSequenceObjectReference::ControlRigAssetReference");

// /Script/ControlRig.ControlRigSequenceObjectReferenceMap
// Kind: ScriptStruct; super: none
struct FControlRigSequenceObjectReferenceMap
{
public:
    TArray<void*> BindingIds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> References; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlRigSequenceObjectReferenceMap, BindingIds) == 0, "Offset mismatch for FControlRigSequenceObjectReferenceMap::BindingIds");
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, References) == 16, "Offset mismatch for FControlRigSequenceObjectReferenceMap::References");

// /Script/ControlRig.ControlRigSequenceObjectReferences
// Kind: ScriptStruct; super: none
struct FControlRigSequenceObjectReferences
{
public:
    TArray<void*> Array; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlRigSequenceObjectReferences, Array) == 0, "Offset mismatch for FControlRigSequenceObjectReferences::Array");

// /Script/ControlRig.ControlRigSettingsPerPinBool
// Kind: ScriptStruct; super: none
struct FControlRigSettingsPerPinBool
{
public:
    TMap<void*, void*> Values; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FControlRigSettingsPerPinBool, Values) == 0, "Offset mismatch for FControlRigSettingsPerPinBool::Values");

// /Script/ControlRig.ControlRigShapeDefinition
// Kind: ScriptStruct; super: none
struct FControlRigShapeDefinition
{
public:
    FName ShapeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> StaticMesh; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    TSoftObjectPtr<void> ShapeProxy; // 0x0090 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FControlRigShapeDefinition, ShapeName) == 0, "Offset mismatch for FControlRigShapeDefinition::ShapeName");
static_assert(offsetof(FControlRigShapeDefinition, StaticMesh) == 8, "Offset mismatch for FControlRigShapeDefinition::StaticMesh");
static_assert(offsetof(FControlRigShapeDefinition, Transform) == 48, "Offset mismatch for FControlRigShapeDefinition::Transform");
static_assert(offsetof(FControlRigShapeDefinition, ShapeProxy) == 144, "Offset mismatch for FControlRigShapeDefinition::ShapeProxy");

// /Script/ControlRig.ControlRigTestDataFrame
// Kind: ScriptStruct; super: none
struct FControlRigTestDataFrame
{
public:
    double AbsoluteTime; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double DeltaTime; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Variables; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pose[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    TArray<void*> MetaData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlRigTestDataFrame, AbsoluteTime) == 0, "Offset mismatch for FControlRigTestDataFrame::AbsoluteTime");
static_assert(offsetof(FControlRigTestDataFrame, DeltaTime) == 8, "Offset mismatch for FControlRigTestDataFrame::DeltaTime");
static_assert(offsetof(FControlRigTestDataFrame, Variables) == 16, "Offset mismatch for FControlRigTestDataFrame::Variables");
static_assert(offsetof(FControlRigTestDataFrame, Pose) == 32, "Offset mismatch for FControlRigTestDataFrame::Pose");
static_assert(offsetof(FControlRigTestDataFrame, MetaData) == 80, "Offset mismatch for FControlRigTestDataFrame::MetaData");

// /Script/ControlRig.ControlRigValidationContext
// Kind: ScriptStruct; super: none
struct FControlRigValidationContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRotationOrder
// Kind: ScriptStruct; super: none
struct FControlRotationOrder
{
public:
    std::uint8_t RotationOrder; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideSetting; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FControlRotationOrder, RotationOrder) == 0, "Offset mismatch for FControlRotationOrder::RotationOrder");
static_assert(offsetof(FControlRotationOrder, bOverrideSetting) == 1, "Offset mismatch for FControlRotationOrder::bOverrideSetting");

// /Script/ControlRig.ControlSettingsData
// Kind: ScriptStruct; super: none
struct FControlSettingsData
{
public:
    std::uint8_t ShapeSettings[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    std::uint8_t Customization[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    TArray<void*> DrivenControls; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FControlSettingsData, ShapeSettings) == 0, "Offset mismatch for FControlSettingsData::ShapeSettings");
static_assert(offsetof(FControlSettingsData, Customization) == 144, "Offset mismatch for FControlSettingsData::Customization");
static_assert(offsetof(FControlSettingsData, DrivenControls) == 176, "Offset mismatch for FControlSettingsData::DrivenControls");

// /Script/ControlRig.ControlSettingsTopology
// Kind: ScriptStruct; super: none
struct FControlSettingsTopology
{
public:
    std::uint8_t AnimationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ControlType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t DisplayName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t PrimaryAxis; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsCurve; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    TArray<void*> LimitEnabled; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDrawLimits; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t MinimumValue[0x84]; // 0x0024 (Size: 0x84, Type: StructProperty)
    std::uint8_t MaximumValue[0x84]; // 0x00A8 (Size: 0x84, Type: StructProperty)
    std::uint8_t bShapeVisible; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTransientControl; // 0x012D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x012E
    void* ControlEnum; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bGroupWithParentControl; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestrictSpaceSwitching; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x013A
    TArray<void*> FilteredChannels; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PreferredRotationOrder; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUsePreferredRotationOrder; // 0x0151 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FControlSettingsTopology, AnimationType) == 0, "Offset mismatch for FControlSettingsTopology::AnimationType");
static_assert(offsetof(FControlSettingsTopology, ControlType) == 1, "Offset mismatch for FControlSettingsTopology::ControlType");
static_assert(offsetof(FControlSettingsTopology, DisplayName) == 4, "Offset mismatch for FControlSettingsTopology::DisplayName");
static_assert(offsetof(FControlSettingsTopology, PrimaryAxis) == 8, "Offset mismatch for FControlSettingsTopology::PrimaryAxis");
static_assert(offsetof(FControlSettingsTopology, bIsCurve) == 9, "Offset mismatch for FControlSettingsTopology::bIsCurve");
static_assert(offsetof(FControlSettingsTopology, LimitEnabled) == 16, "Offset mismatch for FControlSettingsTopology::LimitEnabled");
static_assert(offsetof(FControlSettingsTopology, bDrawLimits) == 32, "Offset mismatch for FControlSettingsTopology::bDrawLimits");
static_assert(offsetof(FControlSettingsTopology, MinimumValue) == 36, "Offset mismatch for FControlSettingsTopology::MinimumValue");
static_assert(offsetof(FControlSettingsTopology, MaximumValue) == 168, "Offset mismatch for FControlSettingsTopology::MaximumValue");
static_assert(offsetof(FControlSettingsTopology, bShapeVisible) == 300, "Offset mismatch for FControlSettingsTopology::bShapeVisible");
static_assert(offsetof(FControlSettingsTopology, bIsTransientControl) == 301, "Offset mismatch for FControlSettingsTopology::bIsTransientControl");
static_assert(offsetof(FControlSettingsTopology, ControlEnum) == 304, "Offset mismatch for FControlSettingsTopology::ControlEnum");
static_assert(offsetof(FControlSettingsTopology, bGroupWithParentControl) == 312, "Offset mismatch for FControlSettingsTopology::bGroupWithParentControl");
static_assert(offsetof(FControlSettingsTopology, bRestrictSpaceSwitching) == 313, "Offset mismatch for FControlSettingsTopology::bRestrictSpaceSwitching");
static_assert(offsetof(FControlSettingsTopology, FilteredChannels) == 320, "Offset mismatch for FControlSettingsTopology::FilteredChannels");
static_assert(offsetof(FControlSettingsTopology, PreferredRotationOrder) == 336, "Offset mismatch for FControlSettingsTopology::PreferredRotationOrder");
static_assert(offsetof(FControlSettingsTopology, bUsePreferredRotationOrder) == 337, "Offset mismatch for FControlSettingsTopology::bUsePreferredRotationOrder");

// /Script/ControlRig.ControlShapeActorCreationParam
// Kind: ScriptStruct; super: none
struct FControlShapeActorCreationParam
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.EnumParameterNameAndCurve
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FEnumParameterNameAndCurve
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ParameterCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEnumParameterNameAndCurve, ParameterCurve) == 8, "Offset mismatch for FEnumParameterNameAndCurve::ParameterCurve");

// /Script/ControlRig.IntegerParameterNameAndCurve
// Kind: ScriptStruct; super: BaseParameterNameAndValue
struct FIntegerParameterNameAndCurve
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ParameterCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterCurve) == 8, "Offset mismatch for FIntegerParameterNameAndCurve::ParameterCurve");

// /Script/ControlRig.ModularRigConnections
// Kind: ScriptStruct; super: none
struct FModularRigConnections
{
public:
    TArray<void*> ConnectionList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModularRigConnections, ConnectionList) == 0, "Offset mismatch for FModularRigConnections::ConnectionList");

// /Script/ControlRig.ModularRigModel
// Kind: ScriptStruct; super: none
struct FModularRigModel
{
public:
    TArray<void*> Modules; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x20]; // 0x0010
    std::uint8_t Connections[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    void* Controller; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PreviousModulePaths; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FModularRigModel, Modules) == 0, "Offset mismatch for FModularRigModel::Modules");
static_assert(offsetof(FModularRigModel, Connections) == 48, "Offset mismatch for FModularRigModel::Connections");
static_assert(offsetof(FModularRigModel, Controller) == 80, "Offset mismatch for FModularRigModel::Controller");
static_assert(offsetof(FModularRigModel, PreviousModulePaths) == 88, "Offset mismatch for FModularRigModel::PreviousModulePaths");

// /Script/ControlRig.ModularRigModuleSettingsForClipboard
// Kind: ScriptStruct; super: none
struct FModularRigModuleSettingsForClipboard
{
public:
    std::uint8_t ModuleClass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> Defaults; // 0x0018 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Overrides; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Bindings; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FModularRigModuleSettingsForClipboard, ModuleClass) == 0, "Offset mismatch for FModularRigModuleSettingsForClipboard::ModuleClass");
static_assert(offsetof(FModularRigModuleSettingsForClipboard, Defaults) == 24, "Offset mismatch for FModularRigModuleSettingsForClipboard::Defaults");
static_assert(offsetof(FModularRigModuleSettingsForClipboard, Overrides) == 40, "Offset mismatch for FModularRigModuleSettingsForClipboard::Overrides");
static_assert(offsetof(FModularRigModuleSettingsForClipboard, Bindings) == 56, "Offset mismatch for FModularRigModuleSettingsForClipboard::Bindings");

// /Script/ControlRig.ModularRigModuleSettingsSetForClipboard
// Kind: ScriptStruct; super: none
struct FModularRigModuleSettingsSetForClipboard
{
public:
    TMap<void*, void*> Settings; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FModularRigModuleSettingsSetForClipboard, Settings) == 0, "Offset mismatch for FModularRigModuleSettingsSetForClipboard::Settings");

// /Script/ControlRig.ModularRigResolveResult
// Kind: ScriptStruct; super: none
struct FModularRigResolveResult
{
public:
    std::uint8_t Connector[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Matches; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Excluded; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t State; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    FText Message; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FModularRigResolveResult, Connector) == 0, "Offset mismatch for FModularRigResolveResult::Connector");
static_assert(offsetof(FModularRigResolveResult, Matches) == 8, "Offset mismatch for FModularRigResolveResult::Matches");
static_assert(offsetof(FModularRigResolveResult, Excluded) == 24, "Offset mismatch for FModularRigResolveResult::Excluded");
static_assert(offsetof(FModularRigResolveResult, State) == 40, "Offset mismatch for FModularRigResolveResult::State");
static_assert(offsetof(FModularRigResolveResult, Message) == 48, "Offset mismatch for FModularRigResolveResult::Message");

// /Script/ControlRig.ModularRigSettings
// Kind: ScriptStruct; super: none
struct FModularRigSettings
{
public:
    std::uint8_t bAutoResolve; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModularRigSettings, bAutoResolve) == 0, "Offset mismatch for FModularRigSettings::bAutoResolve");

// /Script/ControlRig.ModularRigSingleConnection
// Kind: ScriptStruct; super: none
struct FModularRigSingleConnection
{
public:
    std::uint8_t Connector[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Target[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Targets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModularRigSingleConnection, Connector) == 0, "Offset mismatch for FModularRigSingleConnection::Connector");
static_assert(offsetof(FModularRigSingleConnection, Target) == 8, "Offset mismatch for FModularRigSingleConnection::Target");
static_assert(offsetof(FModularRigSingleConnection, Targets) == 16, "Offset mismatch for FModularRigSingleConnection::Targets");

// /Script/ControlRig.ModuleReferenceData
// Kind: ScriptStruct; super: none
struct FModuleReferenceData
{
public:
    FString ModulePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ReferencedModule[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReferencedModuleAsset[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModuleReferenceData, ModulePath) == 0, "Offset mismatch for FModuleReferenceData::ModulePath");
static_assert(offsetof(FModuleReferenceData, ReferencedModule) == 16, "Offset mismatch for FModuleReferenceData::ReferencedModule");
static_assert(offsetof(FModuleReferenceData, ReferencedModuleAsset) == 40, "Offset mismatch for FModuleReferenceData::ReferencedModuleAsset");

// /Script/ControlRig.MovieSceneControlRigInstanceData
// Kind: ScriptStruct; super: MovieSceneSequenceInstanceData
struct FMovieSceneControlRigInstanceData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bAdditive; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyBoneFilter; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t BoneFilter[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Weight[0xD0]; // 0x0020 (Size: 0xD0, Type: StructProperty)
    std::uint8_t Operand[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneControlRigInstanceData, bAdditive) == 8, "Offset mismatch for FMovieSceneControlRigInstanceData::bAdditive");
static_assert(offsetof(FMovieSceneControlRigInstanceData, bApplyBoneFilter) == 9, "Offset mismatch for FMovieSceneControlRigInstanceData::bApplyBoneFilter");
static_assert(offsetof(FMovieSceneControlRigInstanceData, BoneFilter) == 16, "Offset mismatch for FMovieSceneControlRigInstanceData::BoneFilter");
static_assert(offsetof(FMovieSceneControlRigInstanceData, Weight) == 32, "Offset mismatch for FMovieSceneControlRigInstanceData::Weight");
static_assert(offsetof(FMovieSceneControlRigInstanceData, Operand) == 240, "Offset mismatch for FMovieSceneControlRigInstanceData::Operand");

// /Script/ControlRig.MovieSceneControlRigParameterTemplate
// Kind: ScriptStruct; super: MovieSceneParameterSectionTemplate
struct FMovieSceneControlRigParameterTemplate
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> Enums; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Integers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Spaces; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Constraints; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Enums) == 128, "Offset mismatch for FMovieSceneControlRigParameterTemplate::Enums");
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Integers) == 144, "Offset mismatch for FMovieSceneControlRigParameterTemplate::Integers");
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Spaces) == 160, "Offset mismatch for FMovieSceneControlRigParameterTemplate::Spaces");
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Constraints) == 176, "Offset mismatch for FMovieSceneControlRigParameterTemplate::Constraints");

// /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
// Kind: ScriptStruct; super: none
struct FMovieSceneControlRigSpaceBaseKey
{
public:
    std::uint8_t SpaceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ControlRigElement[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneControlRigSpaceBaseKey, SpaceType) == 0, "Offset mismatch for FMovieSceneControlRigSpaceBaseKey::SpaceType");
static_assert(offsetof(FMovieSceneControlRigSpaceBaseKey, ControlRigElement) == 4, "Offset mismatch for FMovieSceneControlRigSpaceBaseKey::ControlRigElement");

// /Script/ControlRig.MovieSceneControlRigSpaceChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneControlRigSpaceChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t DefaultValue[0xC]; // 0x00D0 (Size: 0xC, Type: StructProperty)
    std::uint8_t bHasDefaultValue; // 0x00DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneControlRigSpaceChannel::KeyTimes");
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneControlRigSpaceChannel::KeyValues");
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneControlRigSpaceChannel::KeyHandles");
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, DefaultValue) == 208, "Offset mismatch for FMovieSceneControlRigSpaceChannel::DefaultValue");
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, bHasDefaultValue) == 220, "Offset mismatch for FMovieSceneControlRigSpaceChannel::bHasDefaultValue");

// /Script/ControlRig.RegionScaleFactors
// Kind: ScriptStruct; super: none
struct FRegionScaleFactors
{
public:
    float PositiveWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float NegativeWidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PositiveHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float NegativeHeight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRegionScaleFactors, PositiveWidth) == 0, "Offset mismatch for FRegionScaleFactors::PositiveWidth");
static_assert(offsetof(FRegionScaleFactors, NegativeWidth) == 4, "Offset mismatch for FRegionScaleFactors::NegativeWidth");
static_assert(offsetof(FRegionScaleFactors, PositiveHeight) == 8, "Offset mismatch for FRegionScaleFactors::PositiveHeight");
static_assert(offsetof(FRegionScaleFactors, NegativeHeight) == 12, "Offset mismatch for FRegionScaleFactors::NegativeHeight");

// /Script/ControlRig.RigAndConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigAndConnectionRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ChildRules; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigAndConnectionRule, ChildRules) == 8, "Offset mismatch for FRigAndConnectionRule::ChildRules");

// /Script/ControlRig.RigArraySizeConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigArraySizeConnectionRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MinNumConnections; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMinEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t MaxNumConnections; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMaxEnabled; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigArraySizeConnectionRule, MinNumConnections) == 8, "Offset mismatch for FRigArraySizeConnectionRule::MinNumConnections");
static_assert(offsetof(FRigArraySizeConnectionRule, bMinEnabled) == 12, "Offset mismatch for FRigArraySizeConnectionRule::bMinEnabled");
static_assert(offsetof(FRigArraySizeConnectionRule, MaxNumConnections) == 16, "Offset mismatch for FRigArraySizeConnectionRule::MaxNumConnections");
static_assert(offsetof(FRigArraySizeConnectionRule, bMaxEnabled) == 20, "Offset mismatch for FRigArraySizeConnectionRule::bMaxEnabled");

// /Script/ControlRig.RigBaseComponent
// Kind: ScriptStruct; super: none
struct FRigBaseComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigBaseElement
// Kind: ScriptStruct; super: none
struct FRigBaseElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigBaseElement, Key) == 8, "Offset mismatch for FRigBaseElement::Key");
static_assert(offsetof(FRigBaseElement, Index) == 16, "Offset mismatch for FRigBaseElement::Index");
static_assert(offsetof(FRigBaseElement, SubIndex) == 20, "Offset mismatch for FRigBaseElement::SubIndex");
static_assert(offsetof(FRigBaseElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigBaseElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigBaseElement, SpawnIndex) == 28, "Offset mismatch for FRigBaseElement::SpawnIndex");

// /Script/ControlRig.RigBaseMetadata
// Kind: ScriptStruct; super: none
struct FRigBaseMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigBaseMetadata, Name) == 8, "Offset mismatch for FRigBaseMetadata::Name");
static_assert(offsetof(FRigBaseMetadata, Type) == 12, "Offset mismatch for FRigBaseMetadata::Type");

// /Script/ControlRig.RigBone
// Kind: ScriptStruct; super: RigElement
struct FRigBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ParentName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t ParentIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t InitialTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t GlobalTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    TArray<void*> Dependents; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Type; // 0x0150 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigBone, ParentName) == 16, "Offset mismatch for FRigBone::ParentName");
static_assert(offsetof(FRigBone, ParentIndex) == 20, "Offset mismatch for FRigBone::ParentIndex");
static_assert(offsetof(FRigBone, InitialTransform) == 32, "Offset mismatch for FRigBone::InitialTransform");
static_assert(offsetof(FRigBone, GlobalTransform) == 128, "Offset mismatch for FRigBone::GlobalTransform");
static_assert(offsetof(FRigBone, LocalTransform) == 224, "Offset mismatch for FRigBone::LocalTransform");
static_assert(offsetof(FRigBone, Dependents) == 320, "Offset mismatch for FRigBone::Dependents");
static_assert(offsetof(FRigBone, Type) == 336, "Offset mismatch for FRigBone::Type");

// /Script/ControlRig.RigBoneElement
// Kind: ScriptStruct; super: RigSingleParentElement
struct FRigBoneElement
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t BoneType; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigBoneElement, BoneType) == 120, "Offset mismatch for FRigBoneElement::BoneType");

// /Script/ControlRig.RigBoneHierarchy
// Kind: ScriptStruct; super: none
struct FRigBoneHierarchy
{
public:
    TArray<void*> Bones; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigBoneHierarchy, Bones) == 0, "Offset mismatch for FRigBoneHierarchy::Bones");

// /Script/ControlRig.RigBoolArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigBoolArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigBoolArrayMetadata, Value) == 24, "Offset mismatch for FRigBoolArrayMetadata::Value");

// /Script/ControlRig.RigBoolMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigBoolMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigBoolMetadata, Value) == 24, "Offset mismatch for FRigBoolMetadata::Value");

// /Script/ControlRig.RigChildOfPrimaryConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigChildOfPrimaryConnectionRule
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigComponentKey
// Kind: ScriptStruct; super: none
struct FRigComponentKey
{
public:
    std::uint8_t ElementKey[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FName Name; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigComponentKey, ElementKey) == 0, "Offset mismatch for FRigComponentKey::ElementKey");
static_assert(offsetof(FRigComponentKey, Name) == 8, "Offset mismatch for FRigComponentKey::Name");

// /Script/ControlRig.RigComputedTransform
// Kind: ScriptStruct; super: none
struct FRigComputedTransform
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigConnectionRule
// Kind: ScriptStruct; super: none
struct FRigConnectionRule
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigConnectionRuleStash
// Kind: ScriptStruct; super: none
struct FRigConnectionRuleStash
{
public:
    FString ScriptStructPath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ExportedText; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigConnectionRuleStash, ScriptStructPath) == 0, "Offset mismatch for FRigConnectionRuleStash::ScriptStructPath");
static_assert(offsetof(FRigConnectionRuleStash, ExportedText) == 16, "Offset mismatch for FRigConnectionRuleStash::ExportedText");

// /Script/ControlRig.RigConnectorElement
// Kind: ScriptStruct; super: RigBaseElement
struct FRigConnectorElement
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigConnectorElement, Settings) == 64, "Offset mismatch for FRigConnectorElement::Settings");

// /Script/ControlRig.RigConnectorSettings
// Kind: ScriptStruct; super: none
struct FRigConnectorSettings
{
public:
    FString Description; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOptional; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsArray; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPostConstruction; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    TArray<void*> Rules; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigConnectorSettings, Description) == 0, "Offset mismatch for FRigConnectorSettings::Description");
static_assert(offsetof(FRigConnectorSettings, Type) == 16, "Offset mismatch for FRigConnectorSettings::Type");
static_assert(offsetof(FRigConnectorSettings, bOptional) == 17, "Offset mismatch for FRigConnectorSettings::bOptional");
static_assert(offsetof(FRigConnectorSettings, bIsArray) == 18, "Offset mismatch for FRigConnectorSettings::bIsArray");
static_assert(offsetof(FRigConnectorSettings, bPostConstruction) == 19, "Offset mismatch for FRigConnectorSettings::bPostConstruction");
static_assert(offsetof(FRigConnectorSettings, Rules) == 24, "Offset mismatch for FRigConnectorSettings::Rules");

// /Script/ControlRig.RigConnectorState
// Kind: ScriptStruct; super: none
struct FRigConnectorState
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ResolvedTarget[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigConnectorState, Name) == 0, "Offset mismatch for FRigConnectorState::Name");
static_assert(offsetof(FRigConnectorState, ResolvedTarget) == 4, "Offset mismatch for FRigConnectorState::ResolvedTarget");
static_assert(offsetof(FRigConnectorState, Settings) == 16, "Offset mismatch for FRigConnectorState::Settings");

// /Script/ControlRig.RigControl
// Kind: ScriptStruct; super: RigElement
struct FRigControl
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ControlType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t DisplayName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::int32_t ParentIndex; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t SpaceName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::int32_t SpaceIndex; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0028
    std::uint8_t OffsetTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t InitialValue[0x84]; // 0x0090 (Size: 0x84, Type: StructProperty)
    std::uint8_t Value[0x84]; // 0x0114 (Size: 0x84, Type: StructProperty)
    std::uint8_t PrimaryAxis; // 0x0198 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsCurve; // 0x0199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimatable; // 0x019A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitTranslation; // 0x019B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitRotation; // 0x019C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLimitScale; // 0x019D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLimits; // 0x019E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x019F
    std::uint8_t MinimumValue[0x84]; // 0x01A0 (Size: 0x84, Type: StructProperty)
    std::uint8_t MaximumValue[0x84]; // 0x0224 (Size: 0x84, Type: StructProperty)
    std::uint8_t bGizmoEnabled; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGizmoVisible; // 0x02A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x02AA
    std::uint8_t GizmoName[0x4]; // 0x02AC (Size: 0x4, Type: NameProperty)
    std::uint8_t GizmoTransform[0x60]; // 0x02B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t GizmoColor[0x10]; // 0x0310 (Size: 0x10, Type: StructProperty)
    TArray<void*> Dependents; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsTransientControl; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0331
    void* ControlEnum; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigControl, ControlType) == 16, "Offset mismatch for FRigControl::ControlType");
static_assert(offsetof(FRigControl, DisplayName) == 20, "Offset mismatch for FRigControl::DisplayName");
static_assert(offsetof(FRigControl, ParentName) == 24, "Offset mismatch for FRigControl::ParentName");
static_assert(offsetof(FRigControl, ParentIndex) == 28, "Offset mismatch for FRigControl::ParentIndex");
static_assert(offsetof(FRigControl, SpaceName) == 32, "Offset mismatch for FRigControl::SpaceName");
static_assert(offsetof(FRigControl, SpaceIndex) == 36, "Offset mismatch for FRigControl::SpaceIndex");
static_assert(offsetof(FRigControl, OffsetTransform) == 48, "Offset mismatch for FRigControl::OffsetTransform");
static_assert(offsetof(FRigControl, InitialValue) == 144, "Offset mismatch for FRigControl::InitialValue");
static_assert(offsetof(FRigControl, Value) == 276, "Offset mismatch for FRigControl::Value");
static_assert(offsetof(FRigControl, PrimaryAxis) == 408, "Offset mismatch for FRigControl::PrimaryAxis");
static_assert(offsetof(FRigControl, bIsCurve) == 409, "Offset mismatch for FRigControl::bIsCurve");
static_assert(offsetof(FRigControl, bAnimatable) == 410, "Offset mismatch for FRigControl::bAnimatable");
static_assert(offsetof(FRigControl, bLimitTranslation) == 411, "Offset mismatch for FRigControl::bLimitTranslation");
static_assert(offsetof(FRigControl, bLimitRotation) == 412, "Offset mismatch for FRigControl::bLimitRotation");
static_assert(offsetof(FRigControl, bLimitScale) == 413, "Offset mismatch for FRigControl::bLimitScale");
static_assert(offsetof(FRigControl, bDrawLimits) == 414, "Offset mismatch for FRigControl::bDrawLimits");
static_assert(offsetof(FRigControl, MinimumValue) == 416, "Offset mismatch for FRigControl::MinimumValue");
static_assert(offsetof(FRigControl, MaximumValue) == 548, "Offset mismatch for FRigControl::MaximumValue");
static_assert(offsetof(FRigControl, bGizmoEnabled) == 680, "Offset mismatch for FRigControl::bGizmoEnabled");
static_assert(offsetof(FRigControl, bGizmoVisible) == 681, "Offset mismatch for FRigControl::bGizmoVisible");
static_assert(offsetof(FRigControl, GizmoName) == 684, "Offset mismatch for FRigControl::GizmoName");
static_assert(offsetof(FRigControl, GizmoTransform) == 688, "Offset mismatch for FRigControl::GizmoTransform");
static_assert(offsetof(FRigControl, GizmoColor) == 784, "Offset mismatch for FRigControl::GizmoColor");
static_assert(offsetof(FRigControl, Dependents) == 800, "Offset mismatch for FRigControl::Dependents");
static_assert(offsetof(FRigControl, bIsTransientControl) == 816, "Offset mismatch for FRigControl::bIsTransientControl");
static_assert(offsetof(FRigControl, ControlEnum) == 824, "Offset mismatch for FRigControl::ControlEnum");

// /Script/ControlRig.RigControlCopy
// Kind: ScriptStruct; super: none
struct FRigControlCopy
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ControlType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t ParentKey[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Value[0x90]; // 0x0010 (Size: 0x90, Type: StructProperty)
    std::uint8_t OffsetTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t ParentTransform[0x60]; // 0x0100 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x0160 (Size: 0x60, Type: StructProperty)
    std::uint8_t GlobalTransform[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigControlCopy, Name) == 0, "Offset mismatch for FRigControlCopy::Name");
static_assert(offsetof(FRigControlCopy, ControlType) == 4, "Offset mismatch for FRigControlCopy::ControlType");
static_assert(offsetof(FRigControlCopy, ParentKey) == 8, "Offset mismatch for FRigControlCopy::ParentKey");
static_assert(offsetof(FRigControlCopy, Value) == 16, "Offset mismatch for FRigControlCopy::Value");
static_assert(offsetof(FRigControlCopy, OffsetTransform) == 160, "Offset mismatch for FRigControlCopy::OffsetTransform");
static_assert(offsetof(FRigControlCopy, ParentTransform) == 256, "Offset mismatch for FRigControlCopy::ParentTransform");
static_assert(offsetof(FRigControlCopy, LocalTransform) == 352, "Offset mismatch for FRigControlCopy::LocalTransform");
static_assert(offsetof(FRigControlCopy, GlobalTransform) == 448, "Offset mismatch for FRigControlCopy::GlobalTransform");

// /Script/ControlRig.RigControlElement
// Kind: ScriptStruct; super: RigMultiParentElement
struct FRigControlElement
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t PreferredEulerAngles[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t TopologyControlSettings[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigControlElement, PreferredEulerAngles) == 152, "Offset mismatch for FRigControlElement::PreferredEulerAngles");
static_assert(offsetof(FRigControlElement, TopologyControlSettings) == 208, "Offset mismatch for FRigControlElement::TopologyControlSettings");

// /Script/ControlRig.RigControlElementCustomization
// Kind: ScriptStruct; super: none
struct FRigControlElementCustomization
{
public:
    TArray<void*> AvailableSpaces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemovedSpaces; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigControlElementCustomization, AvailableSpaces) == 0, "Offset mismatch for FRigControlElementCustomization::AvailableSpaces");
static_assert(offsetof(FRigControlElementCustomization, RemovedSpaces) == 16, "Offset mismatch for FRigControlElementCustomization::RemovedSpaces");

// /Script/ControlRig.RigControlHierarchy
// Kind: ScriptStruct; super: none
struct FRigControlHierarchy
{
public:
    TArray<void*> Controls; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigControlHierarchy, Controls) == 0, "Offset mismatch for FRigControlHierarchy::Controls");

// /Script/ControlRig.RigControlLimitEnabled
// Kind: ScriptStruct; super: none
struct FRigControlLimitEnabled
{
public:
    std::uint8_t bMinimum; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMaximum; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigControlLimitEnabled, bMinimum) == 0, "Offset mismatch for FRigControlLimitEnabled::bMinimum");
static_assert(offsetof(FRigControlLimitEnabled, bMaximum) == 1, "Offset mismatch for FRigControlLimitEnabled::bMaximum");

// /Script/ControlRig.RigControlModifiedContext
// Kind: ScriptStruct; super: none
struct FRigControlModifiedContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigControlSettings
// Kind: ScriptStruct; super: none
struct FRigControlSettings
{
public:
    std::uint8_t AnimationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ControlType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t DisplayName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t PrimaryAxis; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsCurve; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    TArray<void*> LimitEnabled; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDrawLimits; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t MinimumValue[0x84]; // 0x0024 (Size: 0x84, Type: StructProperty)
    std::uint8_t MaximumValue[0x84]; // 0x00A8 (Size: 0x84, Type: StructProperty)
    std::uint8_t bShapeVisible; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShapeVisibility; // 0x012D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x012E
    std::uint8_t ShapeName[0x4]; // 0x0130 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShapeColor[0x10]; // 0x0134 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsTransientControl; // 0x0144 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0145
    void* ControlEnum; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Customization[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    TArray<void*> DrivenControls; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0180
    std::uint8_t bGroupWithParentControl; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestrictSpaceSwitching; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x0192
    TArray<void*> FilteredChannels; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PreferredRotationOrder; // 0x01A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUsePreferredRotationOrder; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x6]; // 0x01AA
    std::uint8_t ShapeTransform[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigControlSettings, AnimationType) == 0, "Offset mismatch for FRigControlSettings::AnimationType");
static_assert(offsetof(FRigControlSettings, ControlType) == 1, "Offset mismatch for FRigControlSettings::ControlType");
static_assert(offsetof(FRigControlSettings, DisplayName) == 4, "Offset mismatch for FRigControlSettings::DisplayName");
static_assert(offsetof(FRigControlSettings, PrimaryAxis) == 8, "Offset mismatch for FRigControlSettings::PrimaryAxis");
static_assert(offsetof(FRigControlSettings, bIsCurve) == 9, "Offset mismatch for FRigControlSettings::bIsCurve");
static_assert(offsetof(FRigControlSettings, LimitEnabled) == 16, "Offset mismatch for FRigControlSettings::LimitEnabled");
static_assert(offsetof(FRigControlSettings, bDrawLimits) == 32, "Offset mismatch for FRigControlSettings::bDrawLimits");
static_assert(offsetof(FRigControlSettings, MinimumValue) == 36, "Offset mismatch for FRigControlSettings::MinimumValue");
static_assert(offsetof(FRigControlSettings, MaximumValue) == 168, "Offset mismatch for FRigControlSettings::MaximumValue");
static_assert(offsetof(FRigControlSettings, bShapeVisible) == 300, "Offset mismatch for FRigControlSettings::bShapeVisible");
static_assert(offsetof(FRigControlSettings, ShapeVisibility) == 301, "Offset mismatch for FRigControlSettings::ShapeVisibility");
static_assert(offsetof(FRigControlSettings, ShapeName) == 304, "Offset mismatch for FRigControlSettings::ShapeName");
static_assert(offsetof(FRigControlSettings, ShapeColor) == 308, "Offset mismatch for FRigControlSettings::ShapeColor");
static_assert(offsetof(FRigControlSettings, bIsTransientControl) == 324, "Offset mismatch for FRigControlSettings::bIsTransientControl");
static_assert(offsetof(FRigControlSettings, ControlEnum) == 328, "Offset mismatch for FRigControlSettings::ControlEnum");
static_assert(offsetof(FRigControlSettings, Customization) == 336, "Offset mismatch for FRigControlSettings::Customization");
static_assert(offsetof(FRigControlSettings, DrivenControls) == 368, "Offset mismatch for FRigControlSettings::DrivenControls");
static_assert(offsetof(FRigControlSettings, bGroupWithParentControl) == 400, "Offset mismatch for FRigControlSettings::bGroupWithParentControl");
static_assert(offsetof(FRigControlSettings, bRestrictSpaceSwitching) == 401, "Offset mismatch for FRigControlSettings::bRestrictSpaceSwitching");
static_assert(offsetof(FRigControlSettings, FilteredChannels) == 408, "Offset mismatch for FRigControlSettings::FilteredChannels");
static_assert(offsetof(FRigControlSettings, PreferredRotationOrder) == 424, "Offset mismatch for FRigControlSettings::PreferredRotationOrder");
static_assert(offsetof(FRigControlSettings, bUsePreferredRotationOrder) == 425, "Offset mismatch for FRigControlSettings::bUsePreferredRotationOrder");
static_assert(offsetof(FRigControlSettings, ShapeTransform) == 432, "Offset mismatch for FRigControlSettings::ShapeTransform");

// /Script/ControlRig.RigControlShapeData
// Kind: ScriptStruct; super: none
struct FRigControlShapeData
{
public:
    std::uint8_t ShapeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShapeColor[0x1C]; // 0x0004 (Size: 0x1C, Type: StructProperty)
    std::uint8_t ShapeTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t ShapeVisibility; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShapeVisible; // 0x0081 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigControlShapeData, ShapeName) == 0, "Offset mismatch for FRigControlShapeData::ShapeName");
static_assert(offsetof(FRigControlShapeData, ShapeColor) == 4, "Offset mismatch for FRigControlShapeData::ShapeColor");
static_assert(offsetof(FRigControlShapeData, ShapeTransform) == 32, "Offset mismatch for FRigControlShapeData::ShapeTransform");
static_assert(offsetof(FRigControlShapeData, ShapeVisibility) == 128, "Offset mismatch for FRigControlShapeData::ShapeVisibility");
static_assert(offsetof(FRigControlShapeData, bShapeVisible) == 129, "Offset mismatch for FRigControlShapeData::bShapeVisible");

// /Script/ControlRig.RigControlValue
// Kind: ScriptStruct; super: none
struct FRigControlValue
{
public:
    std::uint8_t FloatStorage[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigControlValue, FloatStorage) == 0, "Offset mismatch for FRigControlValue::FloatStorage");

// /Script/ControlRig.RigControlValueStorage
// Kind: ScriptStruct; super: none
struct FRigControlValueStorage
{
public:
    float Float00; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Float01; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Float02; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Float03; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Float10; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Float11; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Float12; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Float13; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Float20; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Float21; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float Float22; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Float23; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Float30; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Float31; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Float32; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Float33; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Float00_2; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Float01_2; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Float02_2; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Float03_2; // 0x004C (Size: 0x4, Type: FloatProperty)
    float Float10_2; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Float11_2; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float Float12_2; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float Float13_2; // 0x005C (Size: 0x4, Type: FloatProperty)
    float Float20_2; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float Float21_2; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float Float22_2; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Float23_2; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Float30_2; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Float31_2; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Float32_2; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float Float33_2; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bValid; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigControlValueStorage, Float00) == 0, "Offset mismatch for FRigControlValueStorage::Float00");
static_assert(offsetof(FRigControlValueStorage, Float01) == 4, "Offset mismatch for FRigControlValueStorage::Float01");
static_assert(offsetof(FRigControlValueStorage, Float02) == 8, "Offset mismatch for FRigControlValueStorage::Float02");
static_assert(offsetof(FRigControlValueStorage, Float03) == 12, "Offset mismatch for FRigControlValueStorage::Float03");
static_assert(offsetof(FRigControlValueStorage, Float10) == 16, "Offset mismatch for FRigControlValueStorage::Float10");
static_assert(offsetof(FRigControlValueStorage, Float11) == 20, "Offset mismatch for FRigControlValueStorage::Float11");
static_assert(offsetof(FRigControlValueStorage, Float12) == 24, "Offset mismatch for FRigControlValueStorage::Float12");
static_assert(offsetof(FRigControlValueStorage, Float13) == 28, "Offset mismatch for FRigControlValueStorage::Float13");
static_assert(offsetof(FRigControlValueStorage, Float20) == 32, "Offset mismatch for FRigControlValueStorage::Float20");
static_assert(offsetof(FRigControlValueStorage, Float21) == 36, "Offset mismatch for FRigControlValueStorage::Float21");
static_assert(offsetof(FRigControlValueStorage, Float22) == 40, "Offset mismatch for FRigControlValueStorage::Float22");
static_assert(offsetof(FRigControlValueStorage, Float23) == 44, "Offset mismatch for FRigControlValueStorage::Float23");
static_assert(offsetof(FRigControlValueStorage, Float30) == 48, "Offset mismatch for FRigControlValueStorage::Float30");
static_assert(offsetof(FRigControlValueStorage, Float31) == 52, "Offset mismatch for FRigControlValueStorage::Float31");
static_assert(offsetof(FRigControlValueStorage, Float32) == 56, "Offset mismatch for FRigControlValueStorage::Float32");
static_assert(offsetof(FRigControlValueStorage, Float33) == 60, "Offset mismatch for FRigControlValueStorage::Float33");
static_assert(offsetof(FRigControlValueStorage, Float00_2) == 64, "Offset mismatch for FRigControlValueStorage::Float00_2");
static_assert(offsetof(FRigControlValueStorage, Float01_2) == 68, "Offset mismatch for FRigControlValueStorage::Float01_2");
static_assert(offsetof(FRigControlValueStorage, Float02_2) == 72, "Offset mismatch for FRigControlValueStorage::Float02_2");
static_assert(offsetof(FRigControlValueStorage, Float03_2) == 76, "Offset mismatch for FRigControlValueStorage::Float03_2");
static_assert(offsetof(FRigControlValueStorage, Float10_2) == 80, "Offset mismatch for FRigControlValueStorage::Float10_2");
static_assert(offsetof(FRigControlValueStorage, Float11_2) == 84, "Offset mismatch for FRigControlValueStorage::Float11_2");
static_assert(offsetof(FRigControlValueStorage, Float12_2) == 88, "Offset mismatch for FRigControlValueStorage::Float12_2");
static_assert(offsetof(FRigControlValueStorage, Float13_2) == 92, "Offset mismatch for FRigControlValueStorage::Float13_2");
static_assert(offsetof(FRigControlValueStorage, Float20_2) == 96, "Offset mismatch for FRigControlValueStorage::Float20_2");
static_assert(offsetof(FRigControlValueStorage, Float21_2) == 100, "Offset mismatch for FRigControlValueStorage::Float21_2");
static_assert(offsetof(FRigControlValueStorage, Float22_2) == 104, "Offset mismatch for FRigControlValueStorage::Float22_2");
static_assert(offsetof(FRigControlValueStorage, Float23_2) == 108, "Offset mismatch for FRigControlValueStorage::Float23_2");
static_assert(offsetof(FRigControlValueStorage, Float30_2) == 112, "Offset mismatch for FRigControlValueStorage::Float30_2");
static_assert(offsetof(FRigControlValueStorage, Float31_2) == 116, "Offset mismatch for FRigControlValueStorage::Float31_2");
static_assert(offsetof(FRigControlValueStorage, Float32_2) == 120, "Offset mismatch for FRigControlValueStorage::Float32_2");
static_assert(offsetof(FRigControlValueStorage, Float33_2) == 124, "Offset mismatch for FRigControlValueStorage::Float33_2");
static_assert(offsetof(FRigControlValueStorage, bValid) == 128, "Offset mismatch for FRigControlValueStorage::bValid");

// /Script/ControlRig.RigCurrentAndInitialDirtyState
// Kind: ScriptStruct; super: none
struct FRigCurrentAndInitialDirtyState
{
public:
    std::uint8_t Current[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Initial[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigCurrentAndInitialDirtyState, Current) == 0, "Offset mismatch for FRigCurrentAndInitialDirtyState::Current");
static_assert(offsetof(FRigCurrentAndInitialDirtyState, Initial) == 8, "Offset mismatch for FRigCurrentAndInitialDirtyState::Initial");

// /Script/ControlRig.RigCurrentAndInitialTransform
// Kind: ScriptStruct; super: none
struct FRigCurrentAndInitialTransform
{
public:
    std::uint8_t Current[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Initial[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigCurrentAndInitialTransform, Current) == 0, "Offset mismatch for FRigCurrentAndInitialTransform::Current");
static_assert(offsetof(FRigCurrentAndInitialTransform, Initial) == 8, "Offset mismatch for FRigCurrentAndInitialTransform::Initial");

// /Script/ControlRig.RigCurve
// Kind: ScriptStruct; super: RigElement
struct FRigCurve
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float Value; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigCurve, Value) == 16, "Offset mismatch for FRigCurve::Value");

// /Script/ControlRig.RigCurveContainer
// Kind: ScriptStruct; super: none
struct FRigCurveContainer
{
public:
    TArray<void*> Curves; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigCurveContainer, Curves) == 0, "Offset mismatch for FRigCurveContainer::Curves");

// /Script/ControlRig.RigCurveElement
// Kind: ScriptStruct; super: RigBaseElement
struct FRigCurveElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigCurveElement, Key) == 8, "Offset mismatch for FRigCurveElement::Key");
static_assert(offsetof(FRigCurveElement, Index) == 16, "Offset mismatch for FRigCurveElement::Index");
static_assert(offsetof(FRigCurveElement, SubIndex) == 20, "Offset mismatch for FRigCurveElement::SubIndex");
static_assert(offsetof(FRigCurveElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigCurveElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigCurveElement, SpawnIndex) == 28, "Offset mismatch for FRigCurveElement::SpawnIndex");

// /Script/ControlRig.RigDispatchFactory
// Kind: ScriptStruct; super: RigVMDispatchFactory
struct FRigDispatchFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_AnimAttributeBase
// Kind: ScriptStruct; super: RigDispatchFactory
struct FRigDispatch_AnimAttributeBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_ComponentBase
// Kind: ScriptStruct; super: RigDispatchFactory
struct FRigDispatch_ComponentBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_GetAnimAttribute
// Kind: ScriptStruct; super: RigDispatch_AnimAttributeBase
struct FRigDispatch_GetAnimAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_GetComponentContent
// Kind: ScriptStruct; super: RigDispatch_ComponentBase
struct FRigDispatch_GetComponentContent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_GetMetadata
// Kind: ScriptStruct; super: RigDispatch_MetadataBase
struct FRigDispatch_GetMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_GetModuleMetadata
// Kind: ScriptStruct; super: RigDispatch_GetMetadata
struct FRigDispatch_GetModuleMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_GetUserData
// Kind: ScriptStruct; super: RigDispatchFactory
struct FRigDispatch_GetUserData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_MetadataBase
// Kind: ScriptStruct; super: RigDispatchFactory
struct FRigDispatch_MetadataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_SetAnimAttribute
// Kind: ScriptStruct; super: RigDispatch_AnimAttributeBase
struct FRigDispatch_SetAnimAttribute
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_SetComponentContent
// Kind: ScriptStruct; super: RigDispatch_ComponentBase
struct FRigDispatch_SetComponentContent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_SetMetadata
// Kind: ScriptStruct; super: RigDispatch_MetadataBase
struct FRigDispatch_SetMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_SetModuleMetadata
// Kind: ScriptStruct; super: RigDispatch_SetMetadata
struct FRigDispatch_SetModuleMetadata
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigDispatch_SpawnComponent
// Kind: ScriptStruct; super: RigDispatch_ComponentBase
struct FRigDispatch_SpawnComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigElement
// Kind: ScriptStruct; super: none
struct FRigElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t Index; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigElement, Name) == 8, "Offset mismatch for FRigElement::Name");
static_assert(offsetof(FRigElement, Index) == 12, "Offset mismatch for FRigElement::Index");

// /Script/ControlRig.RigElementKey
// Kind: ScriptStruct; super: none
struct FRigElementKey
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName Name; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigElementKey, Type) == 0, "Offset mismatch for FRigElementKey::Type");
static_assert(offsetof(FRigElementKey, Name) == 4, "Offset mismatch for FRigElementKey::Name");

// /Script/ControlRig.RigElementKeyArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigElementKeyArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigElementKeyArrayMetadata, Value) == 24, "Offset mismatch for FRigElementKeyArrayMetadata::Value");

// /Script/ControlRig.RigElementKeyCollection
// Kind: ScriptStruct; super: none
struct FRigElementKeyCollection
{
public:
    TArray<void*> Keys; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigElementKeyCollection, Keys) == 0, "Offset mismatch for FRigElementKeyCollection::Keys");

// /Script/ControlRig.RigElementKeyMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigElementKeyMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigElementKeyMetadata, Value) == 24, "Offset mismatch for FRigElementKeyMetadata::Value");

// /Script/ControlRig.RigElementKeyWithLabel
// Kind: ScriptStruct; super: none
struct FRigElementKeyWithLabel
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FName Label; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigElementKeyWithLabel, Key) == 0, "Offset mismatch for FRigElementKeyWithLabel::Key");
static_assert(offsetof(FRigElementKeyWithLabel, Label) == 8, "Offset mismatch for FRigElementKeyWithLabel::Label");

// /Script/ControlRig.RigElementParentConstraint
// Kind: ScriptStruct; super: none
struct FRigElementParentConstraint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigElementParentConstraintData
// Kind: ScriptStruct; super: none
struct FRigElementParentConstraintData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigElementParentConstraintTopology
// Kind: ScriptStruct; super: none
struct FRigElementParentConstraintTopology
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigElementResolveResult
// Kind: ScriptStruct; super: none
struct FRigElementResolveResult
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t State; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    FText Message; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FRigElementResolveResult, Key) == 0, "Offset mismatch for FRigElementResolveResult::Key");
static_assert(offsetof(FRigElementResolveResult, State) == 8, "Offset mismatch for FRigElementResolveResult::State");
static_assert(offsetof(FRigElementResolveResult, Message) == 16, "Offset mismatch for FRigElementResolveResult::Message");

// /Script/ControlRig.RigElementWeight
// Kind: ScriptStruct; super: none
struct FRigElementWeight
{
public:
    float Location; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Rotation; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigElementWeight, Location) == 0, "Offset mismatch for FRigElementWeight::Location");
static_assert(offsetof(FRigElementWeight, Rotation) == 4, "Offset mismatch for FRigElementWeight::Rotation");
static_assert(offsetof(FRigElementWeight, Scale) == 8, "Offset mismatch for FRigElementWeight::Scale");

// /Script/ControlRig.RigEventContext
// Kind: ScriptStruct; super: none
struct FRigEventContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigFloatArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigFloatArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigFloatArrayMetadata, Value) == 24, "Offset mismatch for FRigFloatArrayMetadata::Value");

// /Script/ControlRig.RigFloatMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigFloatMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    float Value; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigFloatMetadata, Value) == 24, "Offset mismatch for FRigFloatMetadata::Value");

// /Script/ControlRig.RigHierarchyContainer
// Kind: ScriptStruct; super: none
struct FRigHierarchyContainer
{
public:
    std::uint8_t BoneHierarchy[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpaceHierarchy[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ControlHierarchy[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurveContainer[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigHierarchyContainer, BoneHierarchy) == 0, "Offset mismatch for FRigHierarchyContainer::BoneHierarchy");
static_assert(offsetof(FRigHierarchyContainer, SpaceHierarchy) == 16, "Offset mismatch for FRigHierarchyContainer::SpaceHierarchy");
static_assert(offsetof(FRigHierarchyContainer, ControlHierarchy) == 32, "Offset mismatch for FRigHierarchyContainer::ControlHierarchy");
static_assert(offsetof(FRigHierarchyContainer, CurveContainer) == 48, "Offset mismatch for FRigHierarchyContainer::CurveContainer");

// /Script/ControlRig.RigHierarchyCopyPasteContent
// Kind: ScriptStruct; super: none
struct FRigHierarchyCopyPasteContent
{
public:
    TArray<void*> Elements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Types; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Contents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LocalTransforms; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GlobalTransforms; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigHierarchyCopyPasteContent, Elements) == 0, "Offset mismatch for FRigHierarchyCopyPasteContent::Elements");
static_assert(offsetof(FRigHierarchyCopyPasteContent, Types) == 16, "Offset mismatch for FRigHierarchyCopyPasteContent::Types");
static_assert(offsetof(FRigHierarchyCopyPasteContent, Contents) == 32, "Offset mismatch for FRigHierarchyCopyPasteContent::Contents");
static_assert(offsetof(FRigHierarchyCopyPasteContent, LocalTransforms) == 48, "Offset mismatch for FRigHierarchyCopyPasteContent::LocalTransforms");
static_assert(offsetof(FRigHierarchyCopyPasteContent, GlobalTransforms) == 64, "Offset mismatch for FRigHierarchyCopyPasteContent::GlobalTransforms");

// /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
// Kind: ScriptStruct; super: none
struct FRigHierarchyCopyPasteContentPerElement
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString Content; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString ContentData; // 0x0018 (Size: 0x10, Type: StrProperty)
    TArray<void*> Parents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentWeights; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Poses; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DirtyStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Key) == 0, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::Key");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Content) == 8, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::Content");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, ContentData) == 24, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::ContentData");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Parents) == 40, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::Parents");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, ParentWeights) == 56, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::ParentWeights");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Poses) == 72, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::Poses");
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, DirtyStates) == 88, "Offset mismatch for FRigHierarchyCopyPasteContentPerElement::DirtyStates");

// /Script/ControlRig.RigHierarchyKey
// Kind: ScriptStruct; super: none
struct FRigHierarchyKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigHierarchyModulePath
// Kind: ScriptStruct; super: none
struct FRigHierarchyModulePath
{
public:
    FString ModulePath; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigHierarchyModulePath, ModulePath) == 0, "Offset mismatch for FRigHierarchyModulePath::ModulePath");

// /Script/ControlRig.RigHierarchyRef
// Kind: ScriptStruct; super: none
struct FRigHierarchyRef
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigHierarchySettings
// Kind: ScriptStruct; super: none
struct FRigHierarchySettings
{
public:
    std::uint8_t ElementNameDisplayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ProceduralElementLimit; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigHierarchySettings, ElementNameDisplayMode) == 0, "Offset mismatch for FRigHierarchySettings::ElementNameDisplayMode");
static_assert(offsetof(FRigHierarchySettings, ProceduralElementLimit) == 4, "Offset mismatch for FRigHierarchySettings::ProceduralElementLimit");

// /Script/ControlRig.RigInfluenceEntry
// Kind: ScriptStruct; super: none
struct FRigInfluenceEntry
{
public:
    std::uint8_t Source[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> AffectedList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigInfluenceEntry, Source) == 0, "Offset mismatch for FRigInfluenceEntry::Source");
static_assert(offsetof(FRigInfluenceEntry, AffectedList) == 8, "Offset mismatch for FRigInfluenceEntry::AffectedList");

// /Script/ControlRig.RigInfluenceEntryModifier
// Kind: ScriptStruct; super: none
struct FRigInfluenceEntryModifier
{
public:
    TArray<void*> AffectedList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigInfluenceEntryModifier, AffectedList) == 0, "Offset mismatch for FRigInfluenceEntryModifier::AffectedList");

// /Script/ControlRig.RigInfluenceMap
// Kind: ScriptStruct; super: none
struct FRigInfluenceMap
{
public:
    FName EventName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Entries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> KeyToIndex; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigInfluenceMap, EventName) == 0, "Offset mismatch for FRigInfluenceMap::EventName");
static_assert(offsetof(FRigInfluenceMap, Entries) == 8, "Offset mismatch for FRigInfluenceMap::Entries");
static_assert(offsetof(FRigInfluenceMap, KeyToIndex) == 24, "Offset mismatch for FRigInfluenceMap::KeyToIndex");

// /Script/ControlRig.RigInfluenceMapPerEvent
// Kind: ScriptStruct; super: none
struct FRigInfluenceMapPerEvent
{
public:
    TArray<void*> Maps; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EventToIndex; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigInfluenceMapPerEvent, Maps) == 0, "Offset mismatch for FRigInfluenceMapPerEvent::Maps");
static_assert(offsetof(FRigInfluenceMapPerEvent, EventToIndex) == 16, "Offset mismatch for FRigInfluenceMapPerEvent::EventToIndex");

// /Script/ControlRig.RigInt32ArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigInt32ArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigInt32ArrayMetadata, Value) == 24, "Offset mismatch for FRigInt32ArrayMetadata::Value");

// /Script/ControlRig.RigInt32Metadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigInt32Metadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t Value; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigInt32Metadata, Value) == 24, "Offset mismatch for FRigInt32Metadata::Value");

// /Script/ControlRig.RigLinearColorArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigLinearColorArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigLinearColorArrayMetadata, Value) == 24, "Offset mismatch for FRigLinearColorArrayMetadata::Value");

// /Script/ControlRig.RigLinearColorMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigLinearColorMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigLinearColorMetadata, Value) == 24, "Offset mismatch for FRigLinearColorMetadata::Value");

// /Script/ControlRig.RigLocalAndGlobalDirtyState
// Kind: ScriptStruct; super: none
struct FRigLocalAndGlobalDirtyState
{
public:
    std::uint8_t Local[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Global[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigLocalAndGlobalDirtyState, Local) == 0, "Offset mismatch for FRigLocalAndGlobalDirtyState::Local");
static_assert(offsetof(FRigLocalAndGlobalDirtyState, Global) == 4, "Offset mismatch for FRigLocalAndGlobalDirtyState::Global");

// /Script/ControlRig.RigLocalAndGlobalTransform
// Kind: ScriptStruct; super: none
struct FRigLocalAndGlobalTransform
{
public:
    std::uint8_t Local[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Global[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigLocalAndGlobalTransform, Local) == 0, "Offset mismatch for FRigLocalAndGlobalTransform::Local");
static_assert(offsetof(FRigLocalAndGlobalTransform, Global) == 4, "Offset mismatch for FRigLocalAndGlobalTransform::Global");

// /Script/ControlRig.RigModuleConnector
// Kind: ScriptStruct; super: none
struct FRigModuleConnector
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigModuleConnector, Name) == 0, "Offset mismatch for FRigModuleConnector::Name");
static_assert(offsetof(FRigModuleConnector, Settings) == 16, "Offset mismatch for FRigModuleConnector::Settings");

// /Script/ControlRig.RigModuleDescription
// Kind: ScriptStruct; super: none
struct FRigModuleDescription
{
public:
    std::uint8_t Path[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigModuleDescription, Path) == 0, "Offset mismatch for FRigModuleDescription::Path");
static_assert(offsetof(FRigModuleDescription, Settings) == 24, "Offset mismatch for FRigModuleDescription::Settings");

// /Script/ControlRig.RigModuleExecutionElement
// Kind: ScriptStruct; super: none
struct FRigModuleExecutionElement
{
public:
    FName ModuleName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t EventName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bExecuted; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    double DurationInMicroSeconds; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRigModuleExecutionElement, ModuleName) == 0, "Offset mismatch for FRigModuleExecutionElement::ModuleName");
static_assert(offsetof(FRigModuleExecutionElement, EventName) == 16, "Offset mismatch for FRigModuleExecutionElement::EventName");
static_assert(offsetof(FRigModuleExecutionElement, bExecuted) == 20, "Offset mismatch for FRigModuleExecutionElement::bExecuted");
static_assert(offsetof(FRigModuleExecutionElement, DurationInMicroSeconds) == 24, "Offset mismatch for FRigModuleExecutionElement::DurationInMicroSeconds");

// /Script/ControlRig.RigModuleExecutionQueue
// Kind: ScriptStruct; super: none
struct FRigModuleExecutionQueue
{
public:
    TArray<void*> Elements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigModuleExecutionQueue, Elements) == 0, "Offset mismatch for FRigModuleExecutionQueue::Elements");

// /Script/ControlRig.RigModuleIdentifier
// Kind: ScriptStruct; super: none
struct FRigModuleIdentifier
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Type; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigModuleIdentifier, Name) == 0, "Offset mismatch for FRigModuleIdentifier::Name");
static_assert(offsetof(FRigModuleIdentifier, Type) == 16, "Offset mismatch for FRigModuleIdentifier::Type");

// /Script/ControlRig.RigModuleInstance
// Kind: ScriptStruct; super: none
struct FRigModuleInstance
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* RigClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RigAssetReference[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    void* RigPtr; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    FString ParentPath; // 0x0028 (Size: 0x10, Type: StrProperty)
    FName ParentModuleName; // 0x0038 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> VariableBindings; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigModuleInstance, Name) == 0, "Offset mismatch for FRigModuleInstance::Name");
static_assert(offsetof(FRigModuleInstance, RigClass) == 8, "Offset mismatch for FRigModuleInstance::RigClass");
static_assert(offsetof(FRigModuleInstance, RigAssetReference) == 16, "Offset mismatch for FRigModuleInstance::RigAssetReference");
static_assert(offsetof(FRigModuleInstance, RigPtr) == 32, "Offset mismatch for FRigModuleInstance::RigPtr");
static_assert(offsetof(FRigModuleInstance, ParentPath) == 40, "Offset mismatch for FRigModuleInstance::ParentPath");
static_assert(offsetof(FRigModuleInstance, ParentModuleName) == 56, "Offset mismatch for FRigModuleInstance::ParentModuleName");
static_assert(offsetof(FRigModuleInstance, VariableBindings) == 64, "Offset mismatch for FRigModuleInstance::VariableBindings");

// /Script/ControlRig.RigModuleReference
// Kind: ScriptStruct; super: none
struct FRigModuleReference
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString ShortName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShortNameBasedOnPath; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    FString ParentPath; // 0x0020 (Size: 0x10, Type: StrProperty)
    FName ParentModuleName; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t Class[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ControlRigAssetReference[0x40]; // 0x0058 (Size: 0x40, Type: StructProperty)
    TMap<void*, void*> Connections; // 0x0098 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ConfigValues; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConfigOverrides[0x58]; // 0x00B8 (Size: 0x58, Type: StructProperty)
    TMap<void*, void*> Bindings; // 0x0110 (Size: 0x10, Type: MapProperty)
    std::uint8_t PreviousName[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    FName PreviousParentName; // 0x0124 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigModuleReference, Name) == 0, "Offset mismatch for FRigModuleReference::Name");
static_assert(offsetof(FRigModuleReference, ShortName) == 8, "Offset mismatch for FRigModuleReference::ShortName");
static_assert(offsetof(FRigModuleReference, bShortNameBasedOnPath) == 24, "Offset mismatch for FRigModuleReference::bShortNameBasedOnPath");
static_assert(offsetof(FRigModuleReference, ParentPath) == 32, "Offset mismatch for FRigModuleReference::ParentPath");
static_assert(offsetof(FRigModuleReference, ParentModuleName) == 48, "Offset mismatch for FRigModuleReference::ParentModuleName");
static_assert(offsetof(FRigModuleReference, Class) == 56, "Offset mismatch for FRigModuleReference::Class");
static_assert(offsetof(FRigModuleReference, ControlRigAssetReference) == 88, "Offset mismatch for FRigModuleReference::ControlRigAssetReference");
static_assert(offsetof(FRigModuleReference, Connections) == 152, "Offset mismatch for FRigModuleReference::Connections");
static_assert(offsetof(FRigModuleReference, ConfigValues) == 168, "Offset mismatch for FRigModuleReference::ConfigValues");
static_assert(offsetof(FRigModuleReference, ConfigOverrides) == 184, "Offset mismatch for FRigModuleReference::ConfigOverrides");
static_assert(offsetof(FRigModuleReference, Bindings) == 272, "Offset mismatch for FRigModuleReference::Bindings");
static_assert(offsetof(FRigModuleReference, PreviousName) == 288, "Offset mismatch for FRigModuleReference::PreviousName");
static_assert(offsetof(FRigModuleReference, PreviousParentName) == 292, "Offset mismatch for FRigModuleReference::PreviousParentName");

// /Script/ControlRig.RigModuleSettings
// Kind: ScriptStruct; super: none
struct FRigModuleSettings
{
public:
    std::uint8_t Identifier[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Icon[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    FString Category; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString Keywords; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0058 (Size: 0x10, Type: StrProperty)
    TArray<void*> ExposedConnectors; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigModuleSettings, Identifier) == 0, "Offset mismatch for FRigModuleSettings::Identifier");
static_assert(offsetof(FRigModuleSettings, Icon) == 32, "Offset mismatch for FRigModuleSettings::Icon");
static_assert(offsetof(FRigModuleSettings, Category) == 56, "Offset mismatch for FRigModuleSettings::Category");
static_assert(offsetof(FRigModuleSettings, Keywords) == 72, "Offset mismatch for FRigModuleSettings::Keywords");
static_assert(offsetof(FRigModuleSettings, Description) == 88, "Offset mismatch for FRigModuleSettings::Description");
static_assert(offsetof(FRigModuleSettings, ExposedConnectors) == 104, "Offset mismatch for FRigModuleSettings::ExposedConnectors");

// /Script/ControlRig.RigMultiParentElement
// Kind: ScriptStruct; super: RigTransformElement
struct FRigMultiParentElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigMultiParentElement, Key) == 8, "Offset mismatch for FRigMultiParentElement::Key");
static_assert(offsetof(FRigMultiParentElement, Index) == 16, "Offset mismatch for FRigMultiParentElement::Index");
static_assert(offsetof(FRigMultiParentElement, SubIndex) == 20, "Offset mismatch for FRigMultiParentElement::SubIndex");
static_assert(offsetof(FRigMultiParentElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigMultiParentElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigMultiParentElement, SpawnIndex) == 28, "Offset mismatch for FRigMultiParentElement::SpawnIndex");

// /Script/ControlRig.RigNameArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigNameArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigNameArrayMetadata, Value) == 24, "Offset mismatch for FRigNameArrayMetadata::Value");

// /Script/ControlRig.RigNameMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigNameMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName Value; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigNameMetadata, Value) == 24, "Offset mismatch for FRigNameMetadata::Value");

// /Script/ControlRig.RigNullElement
// Kind: ScriptStruct; super: RigMultiParentElement
struct FRigNullElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigNullElement, Key) == 8, "Offset mismatch for FRigNullElement::Key");
static_assert(offsetof(FRigNullElement, Index) == 16, "Offset mismatch for FRigNullElement::Index");
static_assert(offsetof(FRigNullElement, SubIndex) == 20, "Offset mismatch for FRigNullElement::SubIndex");
static_assert(offsetof(FRigNullElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigNullElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigNullElement, SpawnIndex) == 28, "Offset mismatch for FRigNullElement::SpawnIndex");

// /Script/ControlRig.RigOrConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigOrConnectionRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ChildRules; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigOrConnectionRule, ChildRules) == 8, "Offset mismatch for FRigOrConnectionRule::ChildRules");

// /Script/ControlRig.RigPhysicsSimulationBase
// Kind: ScriptStruct; super: none
struct FRigPhysicsSimulationBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigPhysicsSolverDescription
// Kind: ScriptStruct; super: none
struct FRigPhysicsSolverDescription
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigPhysicsSolverDescription, ID) == 0, "Offset mismatch for FRigPhysicsSolverDescription::ID");
static_assert(offsetof(FRigPhysicsSolverDescription, Name) == 16, "Offset mismatch for FRigPhysicsSolverDescription::Name");

// /Script/ControlRig.RigPhysicsSolverID
// Kind: ScriptStruct; super: none
struct FRigPhysicsSolverID
{
public:
    std::uint8_t Guid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPhysicsSolverID, Guid) == 0, "Offset mismatch for FRigPhysicsSolverID::Guid");

// /Script/ControlRig.RigPose
// Kind: ScriptStruct; super: none
struct FRigPose
{
public:
    TArray<void*> Elements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t HierarchyTopologyVersion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t PoseHash; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigPose, Elements) == 0, "Offset mismatch for FRigPose::Elements");
static_assert(offsetof(FRigPose, HierarchyTopologyVersion) == 16, "Offset mismatch for FRigPose::HierarchyTopologyVersion");
static_assert(offsetof(FRigPose, PoseHash) == 20, "Offset mismatch for FRigPose::PoseHash");

// /Script/ControlRig.RigPoseElement
// Kind: ScriptStruct; super: none
struct FRigPoseElement
{
public:
    std::uint8_t Index[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t GlobalTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t PreferredEulerAngle[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ActiveParent[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    float CurveValue; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigPoseElement, Index) == 0, "Offset mismatch for FRigPoseElement::Index");
static_assert(offsetof(FRigPoseElement, GlobalTransform) == 32, "Offset mismatch for FRigPoseElement::GlobalTransform");
static_assert(offsetof(FRigPoseElement, LocalTransform) == 128, "Offset mismatch for FRigPoseElement::LocalTransform");
static_assert(offsetof(FRigPoseElement, PreferredEulerAngle) == 224, "Offset mismatch for FRigPoseElement::PreferredEulerAngle");
static_assert(offsetof(FRigPoseElement, ActiveParent) == 248, "Offset mismatch for FRigPoseElement::ActiveParent");
static_assert(offsetof(FRigPoseElement, CurveValue) == 256, "Offset mismatch for FRigPoseElement::CurveValue");

// /Script/ControlRig.RigPreferredEulerAngles
// Kind: ScriptStruct; super: none
struct FRigPreferredEulerAngles
{
public:
    std::uint8_t RotationOrder; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Current[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Initial[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigPreferredEulerAngles, RotationOrder) == 0, "Offset mismatch for FRigPreferredEulerAngles::RotationOrder");
static_assert(offsetof(FRigPreferredEulerAngles, Current) == 8, "Offset mismatch for FRigPreferredEulerAngles::Current");
static_assert(offsetof(FRigPreferredEulerAngles, Initial) == 32, "Offset mismatch for FRigPreferredEulerAngles::Initial");

// /Script/ControlRig.RigQuatArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigQuatArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigQuatArrayMetadata, Value) == 24, "Offset mismatch for FRigQuatArrayMetadata::Value");

// /Script/ControlRig.RigQuatMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigQuatMetadata
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigQuatMetadata, Value) == 32, "Offset mismatch for FRigQuatMetadata::Value");

// /Script/ControlRig.RigReferenceElement
// Kind: ScriptStruct; super: RigSingleParentElement
struct FRigReferenceElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigReferenceElement, Key) == 8, "Offset mismatch for FRigReferenceElement::Key");
static_assert(offsetof(FRigReferenceElement, Index) == 16, "Offset mismatch for FRigReferenceElement::Index");
static_assert(offsetof(FRigReferenceElement, SubIndex) == 20, "Offset mismatch for FRigReferenceElement::SubIndex");
static_assert(offsetof(FRigReferenceElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigReferenceElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigReferenceElement, SpawnIndex) == 28, "Offset mismatch for FRigReferenceElement::SpawnIndex");

// /Script/ControlRig.RigRotatorArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigRotatorArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigRotatorArrayMetadata, Value) == 24, "Offset mismatch for FRigRotatorArrayMetadata::Value");

// /Script/ControlRig.RigRotatorMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigRotatorMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigRotatorMetadata, Value) == 24, "Offset mismatch for FRigRotatorMetadata::Value");

// /Script/ControlRig.RigSingleParentElement
// Kind: ScriptStruct; super: RigTransformElement
struct FRigSingleParentElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigSingleParentElement, Key) == 8, "Offset mismatch for FRigSingleParentElement::Key");
static_assert(offsetof(FRigSingleParentElement, Index) == 16, "Offset mismatch for FRigSingleParentElement::Index");
static_assert(offsetof(FRigSingleParentElement, SubIndex) == 20, "Offset mismatch for FRigSingleParentElement::SubIndex");
static_assert(offsetof(FRigSingleParentElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigSingleParentElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigSingleParentElement, SpawnIndex) == 28, "Offset mismatch for FRigSingleParentElement::SpawnIndex");

// /Script/ControlRig.RigSocketElement
// Kind: ScriptStruct; super: RigSingleParentElement
struct FRigSocketElement
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigSocketElement, Settings) == 120, "Offset mismatch for FRigSocketElement::Settings");

// /Script/ControlRig.RigSocketSettings
// Kind: ScriptStruct; super: none
struct FRigSocketSettings
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t Parent[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigSocketSettings, Name) == 0, "Offset mismatch for FRigSocketSettings::Name");
static_assert(offsetof(FRigSocketSettings, Color) == 4, "Offset mismatch for FRigSocketSettings::Color");
static_assert(offsetof(FRigSocketSettings, Parent) == 20, "Offset mismatch for FRigSocketSettings::Parent");

// /Script/ControlRig.RigSocketState
// Kind: ScriptStruct; super: none
struct FRigSocketState
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Parent[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t InitialLocalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    FString Description; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigSocketState, Name) == 0, "Offset mismatch for FRigSocketState::Name");
static_assert(offsetof(FRigSocketState, Parent) == 4, "Offset mismatch for FRigSocketState::Parent");
static_assert(offsetof(FRigSocketState, InitialLocalTransform) == 16, "Offset mismatch for FRigSocketState::InitialLocalTransform");
static_assert(offsetof(FRigSocketState, Color) == 112, "Offset mismatch for FRigSocketState::Color");
static_assert(offsetof(FRigSocketState, Description) == 128, "Offset mismatch for FRigSocketState::Description");

// /Script/ControlRig.RigSpace
// Kind: ScriptStruct; super: RigElement
struct FRigSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SpaceType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t ParentName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::int32_t ParentIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    std::uint8_t InitialTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigSpace, SpaceType) == 16, "Offset mismatch for FRigSpace::SpaceType");
static_assert(offsetof(FRigSpace, ParentName) == 20, "Offset mismatch for FRigSpace::ParentName");
static_assert(offsetof(FRigSpace, ParentIndex) == 24, "Offset mismatch for FRigSpace::ParentIndex");
static_assert(offsetof(FRigSpace, InitialTransform) == 32, "Offset mismatch for FRigSpace::InitialTransform");
static_assert(offsetof(FRigSpace, LocalTransform) == 128, "Offset mismatch for FRigSpace::LocalTransform");

// /Script/ControlRig.RigSpaceHierarchy
// Kind: ScriptStruct; super: none
struct FRigSpaceHierarchy
{
public:
    TArray<void*> Spaces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigSpaceHierarchy, Spaces) == 0, "Offset mismatch for FRigSpaceHierarchy::Spaces");

// /Script/ControlRig.RigTagConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigTagConnectionRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Tag; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigTagConnectionRule, Tag) == 8, "Offset mismatch for FRigTagConnectionRule::Tag");

// /Script/ControlRig.RigTransformArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigTransformArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigTransformArrayMetadata, Value) == 24, "Offset mismatch for FRigTransformArrayMetadata::Value");

// /Script/ControlRig.RigTransformDirtyState
// Kind: ScriptStruct; super: none
struct FRigTransformDirtyState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigTransformElement
// Kind: ScriptStruct; super: RigBaseElement
struct FRigTransformElement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t SubIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t CreatedAtInstructionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigTransformElement, Key) == 8, "Offset mismatch for FRigTransformElement::Key");
static_assert(offsetof(FRigTransformElement, Index) == 16, "Offset mismatch for FRigTransformElement::Index");
static_assert(offsetof(FRigTransformElement, SubIndex) == 20, "Offset mismatch for FRigTransformElement::SubIndex");
static_assert(offsetof(FRigTransformElement, CreatedAtInstructionIndex) == 24, "Offset mismatch for FRigTransformElement::CreatedAtInstructionIndex");
static_assert(offsetof(FRigTransformElement, SpawnIndex) == 28, "Offset mismatch for FRigTransformElement::SpawnIndex");

// /Script/ControlRig.RigTransformMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigTransformMetadata
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigTransformMetadata, Value) == 32, "Offset mismatch for FRigTransformMetadata::Value");

// /Script/ControlRig.RigTransformStackEntry
// Kind: ScriptStruct; super: none
struct FRigTransformStackEntry
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t EntryType; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TransformType; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t OldTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t NewTransform[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t bAffectChildren; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    TArray<void*> CallStack; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigTransformStackEntry, Key) == 0, "Offset mismatch for FRigTransformStackEntry::Key");
static_assert(offsetof(FRigTransformStackEntry, EntryType) == 8, "Offset mismatch for FRigTransformStackEntry::EntryType");
static_assert(offsetof(FRigTransformStackEntry, TransformType) == 9, "Offset mismatch for FRigTransformStackEntry::TransformType");
static_assert(offsetof(FRigTransformStackEntry, OldTransform) == 16, "Offset mismatch for FRigTransformStackEntry::OldTransform");
static_assert(offsetof(FRigTransformStackEntry, NewTransform) == 112, "Offset mismatch for FRigTransformStackEntry::NewTransform");
static_assert(offsetof(FRigTransformStackEntry, bAffectChildren) == 208, "Offset mismatch for FRigTransformStackEntry::bAffectChildren");
static_assert(offsetof(FRigTransformStackEntry, CallStack) == 216, "Offset mismatch for FRigTransformStackEntry::CallStack");

// /Script/ControlRig.RigTypeConnectionRule
// Kind: ScriptStruct; super: RigConnectionRule
struct FRigTypeConnectionRule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ElementType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigTypeConnectionRule, ElementType) == 8, "Offset mismatch for FRigTypeConnectionRule::ElementType");

// /Script/ControlRig.RigUnit
// Kind: ScriptStruct; super: RigVMStruct
struct FRigUnit
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnitMutable
// Kind: ScriptStruct; super: RigUnit
struct FRigUnitMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnitMutable, ExecutePin) == 8, "Offset mismatch for FRigUnitMutable::ExecutePin");

// /Script/ControlRig.RigUnit_AddAvailableSpaces
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_AddAvailableSpaces
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Spaces; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_AddAvailableSpaces, Control) == 16, "Offset mismatch for FRigUnit_AddAvailableSpaces::Control");
static_assert(offsetof(FRigUnit_AddAvailableSpaces, Spaces) == 24, "Offset mismatch for FRigUnit_AddAvailableSpaces::Spaces");

// /Script/ControlRig.RigUnit_AddBoneTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_AddBoneTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPostMultiply; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0086
    std::uint8_t CachedBone[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AddBoneTransform, bone) == 16, "Offset mismatch for FRigUnit_AddBoneTransform::bone");
static_assert(offsetof(FRigUnit_AddBoneTransform, Transform) == 32, "Offset mismatch for FRigUnit_AddBoneTransform::Transform");
static_assert(offsetof(FRigUnit_AddBoneTransform, Weight) == 128, "Offset mismatch for FRigUnit_AddBoneTransform::Weight");
static_assert(offsetof(FRigUnit_AddBoneTransform, bPostMultiply) == 132, "Offset mismatch for FRigUnit_AddBoneTransform::bPostMultiply");
static_assert(offsetof(FRigUnit_AddBoneTransform, bPropagateToChildren) == 133, "Offset mismatch for FRigUnit_AddBoneTransform::bPropagateToChildren");
static_assert(offsetof(FRigUnit_AddBoneTransform, CachedBone) == 136, "Offset mismatch for FRigUnit_AddBoneTransform::CachedBone");

// /Script/ControlRig.RigUnit_AddParent
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_AddParent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    FName DisplayLabel; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_AddParent, Child) == 16, "Offset mismatch for FRigUnit_AddParent::Child");
static_assert(offsetof(FRigUnit_AddParent, Parent) == 24, "Offset mismatch for FRigUnit_AddParent::Parent");
static_assert(offsetof(FRigUnit_AddParent, DisplayLabel) == 32, "Offset mismatch for FRigUnit_AddParent::DisplayLabel");

// /Script/ControlRig.RigUnit_Add_FloatFloat
// Kind: ScriptStruct; super: RigUnit_BinaryFloatOp
struct FRigUnit_Add_FloatFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Argument0; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Argument1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Add_FloatFloat, Argument0) == 8, "Offset mismatch for FRigUnit_Add_FloatFloat::Argument0");
static_assert(offsetof(FRigUnit_Add_FloatFloat, Argument1) == 12, "Offset mismatch for FRigUnit_Add_FloatFloat::Argument1");
static_assert(offsetof(FRigUnit_Add_FloatFloat, Result) == 16, "Offset mismatch for FRigUnit_Add_FloatFloat::Result");

// /Script/ControlRig.RigUnit_Add_VectorVector
// Kind: ScriptStruct; super: RigUnit_BinaryVectorOp
struct FRigUnit_Add_VectorVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Add_VectorVector, Argument0) == 8, "Offset mismatch for FRigUnit_Add_VectorVector::Argument0");
static_assert(offsetof(FRigUnit_Add_VectorVector, Argument1) == 32, "Offset mismatch for FRigUnit_Add_VectorVector::Argument1");
static_assert(offsetof(FRigUnit_Add_VectorVector, Result) == 56, "Offset mismatch for FRigUnit_Add_VectorVector::Result");

// /Script/ControlRig.RigUnit_AimBone
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_AimBone
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Primary[0x40]; // 0x0018 (Size: 0x40, Type: StructProperty)
    std::uint8_t Secondary[0x40]; // 0x0058 (Size: 0x40, Type: StructProperty)
    float Weight; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x009D
    std::uint8_t DebugSettings[0x70]; // 0x00A0 (Size: 0x70, Type: StructProperty)
    std::uint8_t CachedBoneIndex[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t PrimaryCachedSpace[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryCachedSpace[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0158 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_AimBone, bone) == 16, "Offset mismatch for FRigUnit_AimBone::bone");
static_assert(offsetof(FRigUnit_AimBone, Primary) == 24, "Offset mismatch for FRigUnit_AimBone::Primary");
static_assert(offsetof(FRigUnit_AimBone, Secondary) == 88, "Offset mismatch for FRigUnit_AimBone::Secondary");
static_assert(offsetof(FRigUnit_AimBone, Weight) == 152, "Offset mismatch for FRigUnit_AimBone::Weight");
static_assert(offsetof(FRigUnit_AimBone, bPropagateToChildren) == 156, "Offset mismatch for FRigUnit_AimBone::bPropagateToChildren");
static_assert(offsetof(FRigUnit_AimBone, DebugSettings) == 160, "Offset mismatch for FRigUnit_AimBone::DebugSettings");
static_assert(offsetof(FRigUnit_AimBone, CachedBoneIndex) == 272, "Offset mismatch for FRigUnit_AimBone::CachedBoneIndex");
static_assert(offsetof(FRigUnit_AimBone, PrimaryCachedSpace) == 296, "Offset mismatch for FRigUnit_AimBone::PrimaryCachedSpace");
static_assert(offsetof(FRigUnit_AimBone, SecondaryCachedSpace) == 320, "Offset mismatch for FRigUnit_AimBone::SecondaryCachedSpace");
static_assert(offsetof(FRigUnit_AimBone, bIsInitialized) == 344, "Offset mismatch for FRigUnit_AimBone::bIsInitialized");

// /Script/ControlRig.RigUnit_AimBoneMath
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FRigUnit_AimBoneMath
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InputTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Primary[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t Secondary[0x48]; // 0x00B8 (Size: 0x48, Type: StructProperty)
    float Weight; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0104
    std::uint8_t Result[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t DebugSettings[0x70]; // 0x0170 (Size: 0x70, Type: StructProperty)
    std::uint8_t PrimaryCachedSpace[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryCachedSpace[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0210 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_AimBoneMath, InputTransform) == 16, "Offset mismatch for FRigUnit_AimBoneMath::InputTransform");
static_assert(offsetof(FRigUnit_AimBoneMath, Primary) == 112, "Offset mismatch for FRigUnit_AimBoneMath::Primary");
static_assert(offsetof(FRigUnit_AimBoneMath, Secondary) == 184, "Offset mismatch for FRigUnit_AimBoneMath::Secondary");
static_assert(offsetof(FRigUnit_AimBoneMath, Weight) == 256, "Offset mismatch for FRigUnit_AimBoneMath::Weight");
static_assert(offsetof(FRigUnit_AimBoneMath, Result) == 272, "Offset mismatch for FRigUnit_AimBoneMath::Result");
static_assert(offsetof(FRigUnit_AimBoneMath, DebugSettings) == 368, "Offset mismatch for FRigUnit_AimBoneMath::DebugSettings");
static_assert(offsetof(FRigUnit_AimBoneMath, PrimaryCachedSpace) == 480, "Offset mismatch for FRigUnit_AimBoneMath::PrimaryCachedSpace");
static_assert(offsetof(FRigUnit_AimBoneMath, SecondaryCachedSpace) == 504, "Offset mismatch for FRigUnit_AimBoneMath::SecondaryCachedSpace");
static_assert(offsetof(FRigUnit_AimBoneMath, bIsInitialized) == 528, "Offset mismatch for FRigUnit_AimBoneMath::bIsInitialized");

// /Script/ControlRig.RigUnit_AimBone_DebugSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_AimBone_DebugSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0008
    std::uint8_t WorldOffset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AimBone_DebugSettings, bEnabled) == 0, "Offset mismatch for FRigUnit_AimBone_DebugSettings::bEnabled");
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, Scale) == 4, "Offset mismatch for FRigUnit_AimBone_DebugSettings::Scale");
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, WorldOffset) == 16, "Offset mismatch for FRigUnit_AimBone_DebugSettings::WorldOffset");

// /Script/ControlRig.RigUnit_AimBone_Target
// Kind: ScriptStruct; super: none
struct FRigUnit_AimBone_Target
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Axis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Target[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Kind; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    FName Space; // 0x003C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_AimBone_Target, Weight) == 0, "Offset mismatch for FRigUnit_AimBone_Target::Weight");
static_assert(offsetof(FRigUnit_AimBone_Target, Axis) == 8, "Offset mismatch for FRigUnit_AimBone_Target::Axis");
static_assert(offsetof(FRigUnit_AimBone_Target, Target) == 32, "Offset mismatch for FRigUnit_AimBone_Target::Target");
static_assert(offsetof(FRigUnit_AimBone_Target, Kind) == 56, "Offset mismatch for FRigUnit_AimBone_Target::Kind");
static_assert(offsetof(FRigUnit_AimBone_Target, Space) == 60, "Offset mismatch for FRigUnit_AimBone_Target::Space");

// /Script/ControlRig.RigUnit_AimConstraint
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_AimConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Joint[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t AimMode; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpMode; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::uint8_t AimVector[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpVector[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    TArray<void*> AimTargets; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpTargets; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorkData[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AimConstraint, Joint) == 16, "Offset mismatch for FRigUnit_AimConstraint::Joint");
static_assert(offsetof(FRigUnit_AimConstraint, AimMode) == 20, "Offset mismatch for FRigUnit_AimConstraint::AimMode");
static_assert(offsetof(FRigUnit_AimConstraint, UpMode) == 21, "Offset mismatch for FRigUnit_AimConstraint::UpMode");
static_assert(offsetof(FRigUnit_AimConstraint, AimVector) == 24, "Offset mismatch for FRigUnit_AimConstraint::AimVector");
static_assert(offsetof(FRigUnit_AimConstraint, UpVector) == 48, "Offset mismatch for FRigUnit_AimConstraint::UpVector");
static_assert(offsetof(FRigUnit_AimConstraint, AimTargets) == 72, "Offset mismatch for FRigUnit_AimConstraint::AimTargets");
static_assert(offsetof(FRigUnit_AimConstraint, UpTargets) == 88, "Offset mismatch for FRigUnit_AimConstraint::UpTargets");
static_assert(offsetof(FRigUnit_AimConstraint, WorkData) == 104, "Offset mismatch for FRigUnit_AimConstraint::WorkData");

// /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_AimConstraintLocalSpaceOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    std::uint8_t AimAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldUp[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    TArray<void*> Parents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::uint8_t AdvancedSettings[0x80]; // 0x0090 (Size: 0x80, Type: StructProperty)
    float Weight; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0114
    std::uint8_t WorldUpSpaceCache[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t ChildCache[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsInitialized; // 0x0158 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Child) == 16, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::Child");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::bMaintainOffset");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Filter) == 25, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::Filter");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, AimAxis) == 32, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::AimAxis");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, UpAxis) == 56, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::UpAxis");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, WorldUp) == 80, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::WorldUp");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Parents) == 120, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::Parents");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, AdvancedSettings) == 144, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::AdvancedSettings");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Weight) == 272, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::Weight");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, WorldUpSpaceCache) == 280, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::WorldUpSpaceCache");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, ChildCache) == 304, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::ChildCache");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, ParentCaches) == 328, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::ParentCaches");
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, bIsInitialized) == 344, "Offset mismatch for FRigUnit_AimConstraintLocalSpaceOffset::bIsInitialized");

// /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_AimConstraint_AdvancedSettings
{
public:
    std::uint8_t DebugSettings[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t RotationOrderForFilter; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_AimConstraint_AdvancedSettings, DebugSettings) == 0, "Offset mismatch for FRigUnit_AimConstraint_AdvancedSettings::DebugSettings");
static_assert(offsetof(FRigUnit_AimConstraint_AdvancedSettings, RotationOrderForFilter) == 112, "Offset mismatch for FRigUnit_AimConstraint_AdvancedSettings::RotationOrderForFilter");

// /Script/ControlRig.RigUnit_AimConstraint_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_AimConstraint_WorkData
{
public:
    TArray<void*> ConstraintData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_AimConstraint_WorkData, ConstraintData) == 0, "Offset mismatch for FRigUnit_AimConstraint_WorkData::ConstraintData");

// /Script/ControlRig.RigUnit_AimConstraint_WorldUp
// Kind: ScriptStruct; super: none
struct FRigUnit_AimConstraint_WorldUp
{
public:
    std::uint8_t Target[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Kind; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::uint8_t Space[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Target) == 0, "Offset mismatch for FRigUnit_AimConstraint_WorldUp::Target");
static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Kind) == 24, "Offset mismatch for FRigUnit_AimConstraint_WorldUp::Kind");
static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Space) == 28, "Offset mismatch for FRigUnit_AimConstraint_WorldUp::Space");

// /Script/ControlRig.RigUnit_AimItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_AimItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Primary[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t Secondary[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    float Weight; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    std::uint8_t DebugSettings[0x70]; // 0x00B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t CachedItem[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t PrimaryCachedSpace[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryCachedSpace[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0168 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_AimItem, Item) == 16, "Offset mismatch for FRigUnit_AimItem::Item");
static_assert(offsetof(FRigUnit_AimItem, Primary) == 24, "Offset mismatch for FRigUnit_AimItem::Primary");
static_assert(offsetof(FRigUnit_AimItem, Secondary) == 96, "Offset mismatch for FRigUnit_AimItem::Secondary");
static_assert(offsetof(FRigUnit_AimItem, Weight) == 168, "Offset mismatch for FRigUnit_AimItem::Weight");
static_assert(offsetof(FRigUnit_AimItem, DebugSettings) == 176, "Offset mismatch for FRigUnit_AimItem::DebugSettings");
static_assert(offsetof(FRigUnit_AimItem, CachedItem) == 288, "Offset mismatch for FRigUnit_AimItem::CachedItem");
static_assert(offsetof(FRigUnit_AimItem, PrimaryCachedSpace) == 312, "Offset mismatch for FRigUnit_AimItem::PrimaryCachedSpace");
static_assert(offsetof(FRigUnit_AimItem, SecondaryCachedSpace) == 336, "Offset mismatch for FRigUnit_AimItem::SecondaryCachedSpace");
static_assert(offsetof(FRigUnit_AimItem, bIsInitialized) == 360, "Offset mismatch for FRigUnit_AimItem::bIsInitialized");

// /Script/ControlRig.RigUnit_AimItem_Target
// Kind: ScriptStruct; super: none
struct FRigUnit_AimItem_Target
{
public:
    float Weight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Axis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Target[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Kind; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t Space[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_AimItem_Target, Weight) == 0, "Offset mismatch for FRigUnit_AimItem_Target::Weight");
static_assert(offsetof(FRigUnit_AimItem_Target, Axis) == 8, "Offset mismatch for FRigUnit_AimItem_Target::Axis");
static_assert(offsetof(FRigUnit_AimItem_Target, Target) == 32, "Offset mismatch for FRigUnit_AimItem_Target::Target");
static_assert(offsetof(FRigUnit_AimItem_Target, Kind) == 56, "Offset mismatch for FRigUnit_AimItem_Target::Kind");
static_assert(offsetof(FRigUnit_AimItem_Target, Space) == 60, "Offset mismatch for FRigUnit_AimItem_Target::Space");

// /Script/ControlRig.RigUnit_ApplyFK
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_ApplyFK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Joint; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Filter[0x9]; // 0x0080 (Size: 0x9, Type: StructProperty)
    std::uint8_t ApplyTransformMode; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ApplyTransformSpace; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x008B
    std::uint8_t BaseTransform[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    FName BaseJoint; // 0x00F0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_ApplyFK, Joint) == 16, "Offset mismatch for FRigUnit_ApplyFK::Joint");
static_assert(offsetof(FRigUnit_ApplyFK, Transform) == 32, "Offset mismatch for FRigUnit_ApplyFK::Transform");
static_assert(offsetof(FRigUnit_ApplyFK, Filter) == 128, "Offset mismatch for FRigUnit_ApplyFK::Filter");
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformMode) == 137, "Offset mismatch for FRigUnit_ApplyFK::ApplyTransformMode");
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformSpace) == 138, "Offset mismatch for FRigUnit_ApplyFK::ApplyTransformSpace");
static_assert(offsetof(FRigUnit_ApplyFK, BaseTransform) == 144, "Offset mismatch for FRigUnit_ApplyFK::BaseTransform");
static_assert(offsetof(FRigUnit_ApplyFK, BaseJoint) == 240, "Offset mismatch for FRigUnit_ApplyFK::BaseJoint");

// /Script/ControlRig.RigUnit_BeginExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BeginExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BeginExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_BeginExecution::ExecutePin");

// /Script/ControlRig.RigUnit_BinaryFloatOp
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BinaryFloatOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Argument0; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Argument1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_BinaryFloatOp, Argument0) == 8, "Offset mismatch for FRigUnit_BinaryFloatOp::Argument0");
static_assert(offsetof(FRigUnit_BinaryFloatOp, Argument1) == 12, "Offset mismatch for FRigUnit_BinaryFloatOp::Argument1");
static_assert(offsetof(FRigUnit_BinaryFloatOp, Result) == 16, "Offset mismatch for FRigUnit_BinaryFloatOp::Result");

// /Script/ControlRig.RigUnit_BinaryQuaternionOp
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BinaryQuaternionOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument0[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Argument1[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument0) == 16, "Offset mismatch for FRigUnit_BinaryQuaternionOp::Argument0");
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument1) == 48, "Offset mismatch for FRigUnit_BinaryQuaternionOp::Argument1");
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Result) == 80, "Offset mismatch for FRigUnit_BinaryQuaternionOp::Result");

// /Script/ControlRig.RigUnit_BinaryTransformOp
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BinaryTransformOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument0[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Argument1[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument0) == 16, "Offset mismatch for FRigUnit_BinaryTransformOp::Argument0");
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument1) == 112, "Offset mismatch for FRigUnit_BinaryTransformOp::Argument1");
static_assert(offsetof(FRigUnit_BinaryTransformOp, Result) == 208, "Offset mismatch for FRigUnit_BinaryTransformOp::Result");

// /Script/ControlRig.RigUnit_BinaryVectorOp
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BinaryVectorOp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument0) == 8, "Offset mismatch for FRigUnit_BinaryVectorOp::Argument0");
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument1) == 32, "Offset mismatch for FRigUnit_BinaryVectorOp::Argument1");
static_assert(offsetof(FRigUnit_BinaryVectorOp, Result) == 56, "Offset mismatch for FRigUnit_BinaryVectorOp::Result");

// /Script/ControlRig.RigUnit_BlendTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BlendTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Source[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> Targets; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Result[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BlendTransform, Source) == 16, "Offset mismatch for FRigUnit_BlendTransform::Source");
static_assert(offsetof(FRigUnit_BlendTransform, Targets) == 112, "Offset mismatch for FRigUnit_BlendTransform::Targets");
static_assert(offsetof(FRigUnit_BlendTransform, Result) == 128, "Offset mismatch for FRigUnit_BlendTransform::Result");

// /Script/ControlRig.RigUnit_BoneHarmonics
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_BoneHarmonics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Bones; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WaveSpeed[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveFrequency[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveAmplitude[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveOffset[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveNoise[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveEase; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    float WaveMinimum; // 0x009C (Size: 0x4, Type: FloatProperty)
    float WaveMaximum; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationOrder; // 0x00A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPropagateToChildren; // 0x00A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00A6
    std::uint8_t WorkData[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BoneHarmonics, Bones) == 16, "Offset mismatch for FRigUnit_BoneHarmonics::Bones");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveSpeed) == 32, "Offset mismatch for FRigUnit_BoneHarmonics::WaveSpeed");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveFrequency) == 56, "Offset mismatch for FRigUnit_BoneHarmonics::WaveFrequency");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveAmplitude) == 80, "Offset mismatch for FRigUnit_BoneHarmonics::WaveAmplitude");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveOffset) == 104, "Offset mismatch for FRigUnit_BoneHarmonics::WaveOffset");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveNoise) == 128, "Offset mismatch for FRigUnit_BoneHarmonics::WaveNoise");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveEase) == 152, "Offset mismatch for FRigUnit_BoneHarmonics::WaveEase");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveMinimum) == 156, "Offset mismatch for FRigUnit_BoneHarmonics::WaveMinimum");
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveMaximum) == 160, "Offset mismatch for FRigUnit_BoneHarmonics::WaveMaximum");
static_assert(offsetof(FRigUnit_BoneHarmonics, RotationOrder) == 164, "Offset mismatch for FRigUnit_BoneHarmonics::RotationOrder");
static_assert(offsetof(FRigUnit_BoneHarmonics, bPropagateToChildren) == 165, "Offset mismatch for FRigUnit_BoneHarmonics::bPropagateToChildren");
static_assert(offsetof(FRigUnit_BoneHarmonics, WorkData) == 168, "Offset mismatch for FRigUnit_BoneHarmonics::WorkData");

// /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
// Kind: ScriptStruct; super: none
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
    std::uint8_t bone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Ratio; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, bone) == 0, "Offset mismatch for FRigUnit_BoneHarmonics_BoneTarget::bone");
static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, Ratio) == 4, "Offset mismatch for FRigUnit_BoneHarmonics_BoneTarget::Ratio");

// /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_BoneHarmonics_WorkData
{
public:
    TArray<void*> CachedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WaveTime[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, CachedItems) == 0, "Offset mismatch for FRigUnit_BoneHarmonics_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, WaveTime) == 16, "Offset mismatch for FRigUnit_BoneHarmonics_WorkData::WaveTime");

// /Script/ControlRig.RigUnit_BoneName
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_BoneName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName bone; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_BoneName, bone) == 8, "Offset mismatch for FRigUnit_BoneName::bone");

// /Script/ControlRig.RigUnit_CCDIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_CCDIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    FName EffectorBone; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bStartFromTail; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x008D
    float BaseRotationLimit; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0094
    TArray<void*> RotationLimits; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPropagateToChildren; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00A9
    std::uint8_t WorkData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CCDIK, StartBone) == 16, "Offset mismatch for FRigUnit_CCDIK::StartBone");
static_assert(offsetof(FRigUnit_CCDIK, EffectorBone) == 20, "Offset mismatch for FRigUnit_CCDIK::EffectorBone");
static_assert(offsetof(FRigUnit_CCDIK, EffectorTransform) == 32, "Offset mismatch for FRigUnit_CCDIK::EffectorTransform");
static_assert(offsetof(FRigUnit_CCDIK, Precision) == 128, "Offset mismatch for FRigUnit_CCDIK::Precision");
static_assert(offsetof(FRigUnit_CCDIK, Weight) == 132, "Offset mismatch for FRigUnit_CCDIK::Weight");
static_assert(offsetof(FRigUnit_CCDIK, MaxIterations) == 136, "Offset mismatch for FRigUnit_CCDIK::MaxIterations");
static_assert(offsetof(FRigUnit_CCDIK, bStartFromTail) == 140, "Offset mismatch for FRigUnit_CCDIK::bStartFromTail");
static_assert(offsetof(FRigUnit_CCDIK, BaseRotationLimit) == 144, "Offset mismatch for FRigUnit_CCDIK::BaseRotationLimit");
static_assert(offsetof(FRigUnit_CCDIK, RotationLimits) == 152, "Offset mismatch for FRigUnit_CCDIK::RotationLimits");
static_assert(offsetof(FRigUnit_CCDIK, bPropagateToChildren) == 168, "Offset mismatch for FRigUnit_CCDIK::bPropagateToChildren");
static_assert(offsetof(FRigUnit_CCDIK, WorkData) == 176, "Offset mismatch for FRigUnit_CCDIK::WorkData");

// /Script/ControlRig.RigUnit_CCDIKItemArray
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_CCDIKItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bStartFromTail; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x008D
    float BaseRotationLimit; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    TArray<void*> RotationLimits; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPropagateToChildren; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    std::uint8_t WorkData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CCDIKItemArray, Items) == 16, "Offset mismatch for FRigUnit_CCDIKItemArray::Items");
static_assert(offsetof(FRigUnit_CCDIKItemArray, EffectorTransform) == 32, "Offset mismatch for FRigUnit_CCDIKItemArray::EffectorTransform");
static_assert(offsetof(FRigUnit_CCDIKItemArray, Precision) == 128, "Offset mismatch for FRigUnit_CCDIKItemArray::Precision");
static_assert(offsetof(FRigUnit_CCDIKItemArray, Weight) == 132, "Offset mismatch for FRigUnit_CCDIKItemArray::Weight");
static_assert(offsetof(FRigUnit_CCDIKItemArray, MaxIterations) == 136, "Offset mismatch for FRigUnit_CCDIKItemArray::MaxIterations");
static_assert(offsetof(FRigUnit_CCDIKItemArray, bStartFromTail) == 140, "Offset mismatch for FRigUnit_CCDIKItemArray::bStartFromTail");
static_assert(offsetof(FRigUnit_CCDIKItemArray, BaseRotationLimit) == 144, "Offset mismatch for FRigUnit_CCDIKItemArray::BaseRotationLimit");
static_assert(offsetof(FRigUnit_CCDIKItemArray, RotationLimits) == 152, "Offset mismatch for FRigUnit_CCDIKItemArray::RotationLimits");
static_assert(offsetof(FRigUnit_CCDIKItemArray, bPropagateToChildren) == 168, "Offset mismatch for FRigUnit_CCDIKItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_CCDIKItemArray, WorkData) == 176, "Offset mismatch for FRigUnit_CCDIKItemArray::WorkData");

// /Script/ControlRig.RigUnit_CCDIKPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_CCDIKPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIterations; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bStartFromTail; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x008D
    float BaseRotationLimit; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    TArray<void*> RotationLimits; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPropagateToChildren; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    std::uint8_t WorkData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CCDIKPerItem, Items) == 16, "Offset mismatch for FRigUnit_CCDIKPerItem::Items");
static_assert(offsetof(FRigUnit_CCDIKPerItem, EffectorTransform) == 32, "Offset mismatch for FRigUnit_CCDIKPerItem::EffectorTransform");
static_assert(offsetof(FRigUnit_CCDIKPerItem, Precision) == 128, "Offset mismatch for FRigUnit_CCDIKPerItem::Precision");
static_assert(offsetof(FRigUnit_CCDIKPerItem, Weight) == 132, "Offset mismatch for FRigUnit_CCDIKPerItem::Weight");
static_assert(offsetof(FRigUnit_CCDIKPerItem, MaxIterations) == 136, "Offset mismatch for FRigUnit_CCDIKPerItem::MaxIterations");
static_assert(offsetof(FRigUnit_CCDIKPerItem, bStartFromTail) == 140, "Offset mismatch for FRigUnit_CCDIKPerItem::bStartFromTail");
static_assert(offsetof(FRigUnit_CCDIKPerItem, BaseRotationLimit) == 144, "Offset mismatch for FRigUnit_CCDIKPerItem::BaseRotationLimit");
static_assert(offsetof(FRigUnit_CCDIKPerItem, RotationLimits) == 152, "Offset mismatch for FRigUnit_CCDIKPerItem::RotationLimits");
static_assert(offsetof(FRigUnit_CCDIKPerItem, bPropagateToChildren) == 168, "Offset mismatch for FRigUnit_CCDIKPerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_CCDIKPerItem, WorkData) == 176, "Offset mismatch for FRigUnit_CCDIKPerItem::WorkData");

// /Script/ControlRig.RigUnit_CCDIK_RotationLimit
// Kind: ScriptStruct; super: none
struct FRigUnit_CCDIK_RotationLimit
{
public:
    std::uint8_t bone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Limit; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, bone) == 0, "Offset mismatch for FRigUnit_CCDIK_RotationLimit::bone");
static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, Limit) == 4, "Offset mismatch for FRigUnit_CCDIK_RotationLimit::Limit");

// /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
// Kind: ScriptStruct; super: none
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
    std::uint8_t Item[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Limit; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, Item) == 0, "Offset mismatch for FRigUnit_CCDIK_RotationLimitPerItem::Item");
static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, Limit) == 8, "Offset mismatch for FRigUnit_CCDIK_RotationLimitPerItem::Limit");

// /Script/ControlRig.RigUnit_CCDIK_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_CCDIK_WorkData
{
public:
    TArray<void*> Chain; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedItems; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RotationLimitIndex; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RotationLimitsPerItem; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedEffector[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CCDIK_WorkData, Chain) == 0, "Offset mismatch for FRigUnit_CCDIK_WorkData::Chain");
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedItems) == 16, "Offset mismatch for FRigUnit_CCDIK_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitIndex) == 32, "Offset mismatch for FRigUnit_CCDIK_WorkData::RotationLimitIndex");
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem) == 48, "Offset mismatch for FRigUnit_CCDIK_WorkData::RotationLimitsPerItem");
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedEffector) == 64, "Offset mismatch for FRigUnit_CCDIK_WorkData::CachedEffector");

// /Script/ControlRig.RigUnit_ChainHarmonics
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ChainHarmonics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName ChainRoot; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Speed[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Reach[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t Wave[0x78]; // 0x0078 (Size: 0x78, Type: StructProperty)
    std::uint8_t WaveCurve[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t Pendulum[0x58]; // 0x0138 (Size: 0x58, Type: StructProperty)
    std::uint8_t bDrawDebug; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0191
    std::uint8_t DrawWorldOffset[0x60]; // 0x01A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonics, ChainRoot) == 16, "Offset mismatch for FRigUnit_ChainHarmonics::ChainRoot");
static_assert(offsetof(FRigUnit_ChainHarmonics, Speed) == 24, "Offset mismatch for FRigUnit_ChainHarmonics::Speed");
static_assert(offsetof(FRigUnit_ChainHarmonics, Reach) == 48, "Offset mismatch for FRigUnit_ChainHarmonics::Reach");
static_assert(offsetof(FRigUnit_ChainHarmonics, Wave) == 120, "Offset mismatch for FRigUnit_ChainHarmonics::Wave");
static_assert(offsetof(FRigUnit_ChainHarmonics, WaveCurve) == 240, "Offset mismatch for FRigUnit_ChainHarmonics::WaveCurve");
static_assert(offsetof(FRigUnit_ChainHarmonics, Pendulum) == 312, "Offset mismatch for FRigUnit_ChainHarmonics::Pendulum");
static_assert(offsetof(FRigUnit_ChainHarmonics, bDrawDebug) == 400, "Offset mismatch for FRigUnit_ChainHarmonics::bDrawDebug");
static_assert(offsetof(FRigUnit_ChainHarmonics, DrawWorldOffset) == 416, "Offset mismatch for FRigUnit_ChainHarmonics::DrawWorldOffset");
static_assert(offsetof(FRigUnit_ChainHarmonics, WorkData) == 512, "Offset mismatch for FRigUnit_ChainHarmonics::WorkData");

// /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ChainHarmonicsPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ChainRoot[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Speed[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Reach[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t Wave[0x78]; // 0x0078 (Size: 0x78, Type: StructProperty)
    std::uint8_t WaveCurve[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t Pendulum[0x58]; // 0x0138 (Size: 0x58, Type: StructProperty)
    std::uint8_t bDrawDebug; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0191
    std::uint8_t DrawWorldOffset[0x60]; // 0x01A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, ChainRoot) == 16, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::ChainRoot");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Speed) == 24, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::Speed");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Reach) == 48, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::Reach");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Wave) == 120, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::Wave");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WaveCurve) == 240, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::WaveCurve");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Pendulum) == 312, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::Pendulum");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, bDrawDebug) == 400, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::bDrawDebug");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset) == 416, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::DrawWorldOffset");
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WorkData) == 512, "Offset mismatch for FRigUnit_ChainHarmonicsPerItem::WorkData");

// /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float PendulumStiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PendulumGravity[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float PendulumBlend; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float PendulumDrag; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float PendulumMinimum; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float PendulumMaximum; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PendulumEase; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t UnwindAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float UnwindMinimum; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float UnwindMaximum; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, bEnabled) == 0, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::bEnabled");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumStiffness) == 4, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumStiffness");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity) == 8, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumGravity");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumBlend) == 32, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumBlend");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumDrag) == 36, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumDrag");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumMinimum) == 40, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumMinimum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumMaximum) == 44, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumMaximum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumEase) == 48, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::PendulumEase");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis) == 56, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::UnwindAxis");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindMinimum) == 80, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::UnwindMinimum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindMaximum) == 84, "Offset mismatch for FRigUnit_ChainHarmonics_Pendulum::UnwindMaximum");

// /Script/ControlRig.RigUnit_ChainHarmonics_Reach
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainHarmonics_Reach
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ReachTarget[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReachAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float ReachMinimum; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float ReachMaximum; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReachEase; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, bEnabled) == 0, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::bEnabled");
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachTarget) == 8, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::ReachTarget");
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachAxis) == 32, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::ReachAxis");
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachMinimum) == 56, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::ReachMinimum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachMaximum) == 60, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::ReachMaximum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachEase) == 64, "Offset mismatch for FRigUnit_ChainHarmonics_Reach::ReachEase");

// /Script/ControlRig.RigUnit_ChainHarmonics_Wave
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainHarmonics_Wave
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t WaveFrequency[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveAmplitude[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveNoise[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float WaveMinimum; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float WaveMaximum; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WaveEase; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, bEnabled) == 0, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::bEnabled");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveFrequency) == 8, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveFrequency");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveAmplitude) == 32, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveAmplitude");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveOffset) == 56, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveOffset");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveNoise) == 80, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveNoise");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveMinimum) == 104, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveMinimum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveMaximum) == 108, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveMaximum");
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveEase) == 112, "Offset mismatch for FRigUnit_ChainHarmonics_Wave::WaveEase");

// /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainHarmonics_WorkData
{
public:
    std::uint8_t time[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Ratio; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LocalTip; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendulumTip; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendulumPosition; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendulumVelocity; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HierarchyLine; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VelocityLines; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, time) == 0, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::time");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Items) == 24, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::Items");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Ratio) == 40, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::Ratio");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, LocalTip) == 56, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::LocalTip");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumTip) == 72, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::PendulumTip");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumPosition) == 88, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::PendulumPosition");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity) == 104, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::PendulumVelocity");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, HierarchyLine) == 120, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::HierarchyLine");
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, VelocityLines) == 136, "Offset mismatch for FRigUnit_ChainHarmonics_WorkData::VelocityLines");

// /Script/ControlRig.RigUnit_ChainInfo
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FRigUnit_ChainInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Param; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCalculateStretch; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInitial; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebug; // 0x001E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x001F
    float DebugScale; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0024
    std::uint8_t InterpolatedTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float ChainLength; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float ParamLength; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float ChainStretchFactor; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SegmentInfo[0x2C]; // 0x009C (Size: 0x2C, Type: StructProperty)
    TArray<void*> CachedElements; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ChainInfo, Items) == 8, "Offset mismatch for FRigUnit_ChainInfo::Items");
static_assert(offsetof(FRigUnit_ChainInfo, Param) == 24, "Offset mismatch for FRigUnit_ChainInfo::Param");
static_assert(offsetof(FRigUnit_ChainInfo, bCalculateStretch) == 28, "Offset mismatch for FRigUnit_ChainInfo::bCalculateStretch");
static_assert(offsetof(FRigUnit_ChainInfo, bInitial) == 29, "Offset mismatch for FRigUnit_ChainInfo::bInitial");
static_assert(offsetof(FRigUnit_ChainInfo, bDebug) == 30, "Offset mismatch for FRigUnit_ChainInfo::bDebug");
static_assert(offsetof(FRigUnit_ChainInfo, DebugScale) == 32, "Offset mismatch for FRigUnit_ChainInfo::DebugScale");
static_assert(offsetof(FRigUnit_ChainInfo, InterpolatedTransform) == 48, "Offset mismatch for FRigUnit_ChainInfo::InterpolatedTransform");
static_assert(offsetof(FRigUnit_ChainInfo, ChainLength) == 144, "Offset mismatch for FRigUnit_ChainInfo::ChainLength");
static_assert(offsetof(FRigUnit_ChainInfo, ParamLength) == 148, "Offset mismatch for FRigUnit_ChainInfo::ParamLength");
static_assert(offsetof(FRigUnit_ChainInfo, ChainStretchFactor) == 152, "Offset mismatch for FRigUnit_ChainInfo::ChainStretchFactor");
static_assert(offsetof(FRigUnit_ChainInfo, SegmentInfo) == 156, "Offset mismatch for FRigUnit_ChainInfo::SegmentInfo");
static_assert(offsetof(FRigUnit_ChainInfo, CachedElements) == 200, "Offset mismatch for FRigUnit_ChainInfo::CachedElements");

// /Script/ControlRig.RigUnit_ChainInfo_Segment
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainInfo_Segment
{
public:
    std::uint8_t StartItem[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::int32_t StartItemIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t EndItem[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::int32_t EndItemIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    float InitialLength; // 0x003C (Size: 0x4, Type: FloatProperty)
    float InitialCumLength; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float CumLength; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ChainInfo_Segment, StartItem) == 0, "Offset mismatch for FRigUnit_ChainInfo_Segment::StartItem");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, StartItemIndex) == 24, "Offset mismatch for FRigUnit_ChainInfo_Segment::StartItemIndex");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, EndItem) == 32, "Offset mismatch for FRigUnit_ChainInfo_Segment::EndItem");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, EndItemIndex) == 56, "Offset mismatch for FRigUnit_ChainInfo_Segment::EndItemIndex");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, InitialLength) == 60, "Offset mismatch for FRigUnit_ChainInfo_Segment::InitialLength");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, InitialCumLength) == 64, "Offset mismatch for FRigUnit_ChainInfo_Segment::InitialCumLength");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, Length) == 68, "Offset mismatch for FRigUnit_ChainInfo_Segment::Length");
static_assert(offsetof(FRigUnit_ChainInfo_Segment, CumLength) == 72, "Offset mismatch for FRigUnit_ChainInfo_Segment::CumLength");

// /Script/ControlRig.RigUnit_ChainInfo_SegmentInfo
// Kind: ScriptStruct; super: none
struct FRigUnit_ChainInfo_SegmentInfo
{
public:
    std::int32_t SegmentIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float SegmentLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SegmentParam; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SegmentParamLength; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SegmentStartItem[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::int32_t SegmentStartItemIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t SegmentEndItem[0x8]; // 0x001C (Size: 0x8, Type: StructProperty)
    std::int32_t SegmentEndItemIndex; // 0x0024 (Size: 0x4, Type: IntProperty)
    float SegmentStretchFactor; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentIndex) == 0, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentIndex");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentLength) == 4, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentLength");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentParam) == 8, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentParam");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentParamLength) == 12, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentParamLength");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentStartItem) == 16, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentStartItem");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentStartItemIndex) == 24, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentStartItemIndex");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentEndItem) == 28, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentEndItem");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentEndItemIndex) == 36, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentEndItemIndex");
static_assert(offsetof(FRigUnit_ChainInfo_SegmentInfo, SegmentStretchFactor) == 40, "Offset mismatch for FRigUnit_ChainInfo_SegmentInfo::SegmentStretchFactor");

// /Script/ControlRig.RigUnit_Clamp_Float
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_Clamp_Float
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float min; // 0x000C (Size: 0x4, Type: FloatProperty)
    float max; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Clamp_Float, Value) == 8, "Offset mismatch for FRigUnit_Clamp_Float::Value");
static_assert(offsetof(FRigUnit_Clamp_Float, min) == 12, "Offset mismatch for FRigUnit_Clamp_Float::min");
static_assert(offsetof(FRigUnit_Clamp_Float, max) == 16, "Offset mismatch for FRigUnit_Clamp_Float::max");
static_assert(offsetof(FRigUnit_Clamp_Float, Result) == 20, "Offset mismatch for FRigUnit_Clamp_Float::Result");

// /Script/ControlRig.RigUnit_CollectionAddItem
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionAddItem
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Item[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionAddItem, Collection) == 8, "Offset mismatch for FRigUnit_CollectionAddItem::Collection");
static_assert(offsetof(FRigUnit_CollectionAddItem, Item) == 24, "Offset mismatch for FRigUnit_CollectionAddItem::Item");
static_assert(offsetof(FRigUnit_CollectionAddItem, Result) == 32, "Offset mismatch for FRigUnit_CollectionAddItem::Result");

// /Script/ControlRig.RigUnit_CollectionBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_CollectionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_CollectionBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_CollectionBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_CollectionBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_CollectionChain
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionChain
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FirstItem[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastItem[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Reverse; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t Collection[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionChain, FirstItem) == 8, "Offset mismatch for FRigUnit_CollectionChain::FirstItem");
static_assert(offsetof(FRigUnit_CollectionChain, LastItem) == 16, "Offset mismatch for FRigUnit_CollectionChain::LastItem");
static_assert(offsetof(FRigUnit_CollectionChain, Reverse) == 24, "Offset mismatch for FRigUnit_CollectionChain::Reverse");
static_assert(offsetof(FRigUnit_CollectionChain, Collection) == 32, "Offset mismatch for FRigUnit_CollectionChain::Collection");

// /Script/ControlRig.RigUnit_CollectionChainArray
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionChainArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FirstItem[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastItem[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Reverse; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> Items; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionChainArray, FirstItem) == 8, "Offset mismatch for FRigUnit_CollectionChainArray::FirstItem");
static_assert(offsetof(FRigUnit_CollectionChainArray, LastItem) == 16, "Offset mismatch for FRigUnit_CollectionChainArray::LastItem");
static_assert(offsetof(FRigUnit_CollectionChainArray, Reverse) == 24, "Offset mismatch for FRigUnit_CollectionChainArray::Reverse");
static_assert(offsetof(FRigUnit_CollectionChainArray, Items) == 32, "Offset mismatch for FRigUnit_CollectionChainArray::Items");

// /Script/ControlRig.RigUnit_CollectionChildren
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionChildren
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Parent[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeParent; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecursive; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TypeToSearch; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    std::uint8_t Collection[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionChildren, Parent) == 8, "Offset mismatch for FRigUnit_CollectionChildren::Parent");
static_assert(offsetof(FRigUnit_CollectionChildren, bIncludeParent) == 16, "Offset mismatch for FRigUnit_CollectionChildren::bIncludeParent");
static_assert(offsetof(FRigUnit_CollectionChildren, bRecursive) == 17, "Offset mismatch for FRigUnit_CollectionChildren::bRecursive");
static_assert(offsetof(FRigUnit_CollectionChildren, TypeToSearch) == 18, "Offset mismatch for FRigUnit_CollectionChildren::TypeToSearch");
static_assert(offsetof(FRigUnit_CollectionChildren, Collection) == 24, "Offset mismatch for FRigUnit_CollectionChildren::Collection");

// /Script/ControlRig.RigUnit_CollectionChildrenArray
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionChildrenArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Parent[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeParent; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecursive; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultChildren; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TypeToSearch; // 0x0013 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionChildrenArray, Parent) == 8, "Offset mismatch for FRigUnit_CollectionChildrenArray::Parent");
static_assert(offsetof(FRigUnit_CollectionChildrenArray, bIncludeParent) == 16, "Offset mismatch for FRigUnit_CollectionChildrenArray::bIncludeParent");
static_assert(offsetof(FRigUnit_CollectionChildrenArray, bRecursive) == 17, "Offset mismatch for FRigUnit_CollectionChildrenArray::bRecursive");
static_assert(offsetof(FRigUnit_CollectionChildrenArray, bDefaultChildren) == 18, "Offset mismatch for FRigUnit_CollectionChildrenArray::bDefaultChildren");
static_assert(offsetof(FRigUnit_CollectionChildrenArray, TypeToSearch) == 19, "Offset mismatch for FRigUnit_CollectionChildrenArray::TypeToSearch");
static_assert(offsetof(FRigUnit_CollectionChildrenArray, Items) == 24, "Offset mismatch for FRigUnit_CollectionChildrenArray::Items");

// /Script/ControlRig.RigUnit_CollectionCount
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionCount
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::int32_t Count; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_CollectionCount, Collection) == 8, "Offset mismatch for FRigUnit_CollectionCount::Collection");
static_assert(offsetof(FRigUnit_CollectionCount, Count) == 24, "Offset mismatch for FRigUnit_CollectionCount::Count");

// /Script/ControlRig.RigUnit_CollectionDifference
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionDifference
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionDifference, A) == 8, "Offset mismatch for FRigUnit_CollectionDifference::A");
static_assert(offsetof(FRigUnit_CollectionDifference, B) == 24, "Offset mismatch for FRigUnit_CollectionDifference::B");
static_assert(offsetof(FRigUnit_CollectionDifference, Collection) == 40, "Offset mismatch for FRigUnit_CollectionDifference::Collection");

// /Script/ControlRig.RigUnit_CollectionGetAll
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionGetAll
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TypeToSearch; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionGetAll, TypeToSearch) == 8, "Offset mismatch for FRigUnit_CollectionGetAll::TypeToSearch");
static_assert(offsetof(FRigUnit_CollectionGetAll, Items) == 16, "Offset mismatch for FRigUnit_CollectionGetAll::Items");

// /Script/ControlRig.RigUnit_CollectionGetItems
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionGetItems
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionGetItems, Collection) == 8, "Offset mismatch for FRigUnit_CollectionGetItems::Collection");
static_assert(offsetof(FRigUnit_CollectionGetItems, Items) == 24, "Offset mismatch for FRigUnit_CollectionGetItems::Items");

// /Script/ControlRig.RigUnit_CollectionGetParentIndices
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionGetParentIndices
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParentIndices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionGetParentIndices, Collection) == 8, "Offset mismatch for FRigUnit_CollectionGetParentIndices::Collection");
static_assert(offsetof(FRigUnit_CollectionGetParentIndices, ParentIndices) == 24, "Offset mismatch for FRigUnit_CollectionGetParentIndices::ParentIndices");

// /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionGetParentIndicesItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentIndices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionGetParentIndicesItemArray, Items) == 8, "Offset mismatch for FRigUnit_CollectionGetParentIndicesItemArray::Items");
static_assert(offsetof(FRigUnit_CollectionGetParentIndicesItemArray, ParentIndices) == 24, "Offset mismatch for FRigUnit_CollectionGetParentIndicesItemArray::ParentIndices");

// /Script/ControlRig.RigUnit_CollectionIntersection
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionIntersection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Collection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionIntersection, A) == 8, "Offset mismatch for FRigUnit_CollectionIntersection::A");
static_assert(offsetof(FRigUnit_CollectionIntersection, B) == 24, "Offset mismatch for FRigUnit_CollectionIntersection::B");
static_assert(offsetof(FRigUnit_CollectionIntersection, Collection) == 40, "Offset mismatch for FRigUnit_CollectionIntersection::Collection");

// /Script/ControlRig.RigUnit_CollectionItemAtIndex
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionItemAtIndex
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::int32_t Index; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Item[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Collection) == 8, "Offset mismatch for FRigUnit_CollectionItemAtIndex::Collection");
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Index) == 24, "Offset mismatch for FRigUnit_CollectionItemAtIndex::Index");
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Item) == 28, "Offset mismatch for FRigUnit_CollectionItemAtIndex::Item");

// /Script/ControlRig.RigUnit_CollectionItems
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionItems
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowDuplicates; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t Collection[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionItems, Items) == 8, "Offset mismatch for FRigUnit_CollectionItems::Items");
static_assert(offsetof(FRigUnit_CollectionItems, bAllowDuplicates) == 24, "Offset mismatch for FRigUnit_CollectionItems::bAllowDuplicates");
static_assert(offsetof(FRigUnit_CollectionItems, Collection) == 32, "Offset mismatch for FRigUnit_CollectionItems::Collection");

// /Script/ControlRig.RigUnit_CollectionLoop
// Kind: ScriptStruct; super: RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionLoop
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName BlockToRun; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Collection[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Item[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t Count; // 0x0034 (Size: 0x4, Type: IntProperty)
    float Ratio; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t Completed[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionLoop, BlockToRun) == 16, "Offset mismatch for FRigUnit_CollectionLoop::BlockToRun");
static_assert(offsetof(FRigUnit_CollectionLoop, Collection) == 24, "Offset mismatch for FRigUnit_CollectionLoop::Collection");
static_assert(offsetof(FRigUnit_CollectionLoop, Item) == 40, "Offset mismatch for FRigUnit_CollectionLoop::Item");
static_assert(offsetof(FRigUnit_CollectionLoop, Index) == 48, "Offset mismatch for FRigUnit_CollectionLoop::Index");
static_assert(offsetof(FRigUnit_CollectionLoop, Count) == 52, "Offset mismatch for FRigUnit_CollectionLoop::Count");
static_assert(offsetof(FRigUnit_CollectionLoop, Ratio) == 56, "Offset mismatch for FRigUnit_CollectionLoop::Ratio");
static_assert(offsetof(FRigUnit_CollectionLoop, Completed) == 64, "Offset mismatch for FRigUnit_CollectionLoop::Completed");

// /Script/ControlRig.RigUnit_CollectionNameSearch
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionNameSearch
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PartialName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeToSearch; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Collection[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionNameSearch, PartialName) == 8, "Offset mismatch for FRigUnit_CollectionNameSearch::PartialName");
static_assert(offsetof(FRigUnit_CollectionNameSearch, TypeToSearch) == 12, "Offset mismatch for FRigUnit_CollectionNameSearch::TypeToSearch");
static_assert(offsetof(FRigUnit_CollectionNameSearch, Collection) == 16, "Offset mismatch for FRigUnit_CollectionNameSearch::Collection");

// /Script/ControlRig.RigUnit_CollectionNameSearchArray
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionNameSearchArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PartialName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeToSearch; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionNameSearchArray, PartialName) == 8, "Offset mismatch for FRigUnit_CollectionNameSearchArray::PartialName");
static_assert(offsetof(FRigUnit_CollectionNameSearchArray, TypeToSearch) == 12, "Offset mismatch for FRigUnit_CollectionNameSearchArray::TypeToSearch");
static_assert(offsetof(FRigUnit_CollectionNameSearchArray, Items) == 16, "Offset mismatch for FRigUnit_CollectionNameSearchArray::Items");

// /Script/ControlRig.RigUnit_CollectionReplaceItems
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionReplaceItems
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Old[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t New[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t RemoveInvalidItems; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDuplicates; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t Collection[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionReplaceItems, Items) == 8, "Offset mismatch for FRigUnit_CollectionReplaceItems::Items");
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Old) == 24, "Offset mismatch for FRigUnit_CollectionReplaceItems::Old");
static_assert(offsetof(FRigUnit_CollectionReplaceItems, New) == 28, "Offset mismatch for FRigUnit_CollectionReplaceItems::New");
static_assert(offsetof(FRigUnit_CollectionReplaceItems, RemoveInvalidItems) == 32, "Offset mismatch for FRigUnit_CollectionReplaceItems::RemoveInvalidItems");
static_assert(offsetof(FRigUnit_CollectionReplaceItems, bAllowDuplicates) == 33, "Offset mismatch for FRigUnit_CollectionReplaceItems::bAllowDuplicates");
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Collection) == 40, "Offset mismatch for FRigUnit_CollectionReplaceItems::Collection");

// /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionReplaceItemsArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Old[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t New[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t RemoveInvalidItems; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDuplicates; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    TArray<void*> Result; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Items) == 8, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::Items");
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Old) == 24, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::Old");
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, New) == 28, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::New");
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, RemoveInvalidItems) == 32, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::RemoveInvalidItems");
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, bAllowDuplicates) == 33, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::bAllowDuplicates");
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Result) == 40, "Offset mismatch for FRigUnit_CollectionReplaceItemsArray::Result");

// /Script/ControlRig.RigUnit_CollectionReverse
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionReverse
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Reversed[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionReverse, Collection) == 8, "Offset mismatch for FRigUnit_CollectionReverse::Collection");
static_assert(offsetof(FRigUnit_CollectionReverse, Reversed) == 24, "Offset mismatch for FRigUnit_CollectionReverse::Reversed");

// /Script/ControlRig.RigUnit_CollectionUnion
// Kind: ScriptStruct; super: RigUnit_CollectionBase
struct FRigUnit_CollectionUnion
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAllowDuplicates; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t Collection[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CollectionUnion, A) == 8, "Offset mismatch for FRigUnit_CollectionUnion::A");
static_assert(offsetof(FRigUnit_CollectionUnion, B) == 24, "Offset mismatch for FRigUnit_CollectionUnion::B");
static_assert(offsetof(FRigUnit_CollectionUnion, bAllowDuplicates) == 40, "Offset mismatch for FRigUnit_CollectionUnion::bAllowDuplicates");
static_assert(offsetof(FRigUnit_CollectionUnion, Collection) == 48, "Offset mismatch for FRigUnit_CollectionUnion::Collection");

// /Script/ControlRig.RigUnit_ConnectorExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConnectorExecution
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConnectorExecution, ExecuteContext) == 16, "Offset mismatch for FRigUnit_ConnectorExecution::ExecuteContext");

// /Script/ControlRig.RigUnit_Control
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_Control
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Transform[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t base[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t InitTransform[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t Filter[0x9]; // 0x0170 (Size: 0x9, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x0179 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_Control, Transform) == 8, "Offset mismatch for FRigUnit_Control::Transform");
static_assert(offsetof(FRigUnit_Control, base) == 80, "Offset mismatch for FRigUnit_Control::base");
static_assert(offsetof(FRigUnit_Control, InitTransform) == 176, "Offset mismatch for FRigUnit_Control::InitTransform");
static_assert(offsetof(FRigUnit_Control, Result) == 272, "Offset mismatch for FRigUnit_Control::Result");
static_assert(offsetof(FRigUnit_Control, Filter) == 368, "Offset mismatch for FRigUnit_Control::Filter");
static_assert(offsetof(FRigUnit_Control, bIsInitialized) == 377, "Offset mismatch for FRigUnit_Control::bIsInitialized");

// /Script/ControlRig.RigUnit_ControlName
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ControlName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Control; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_ControlName, Control) == 8, "Offset mismatch for FRigUnit_ControlName::Control");

// /Script/ControlRig.RigUnit_Control_StaticMesh
// Kind: ScriptStruct; super: RigUnit_Control
struct FRigUnit_Control_StaticMesh
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t MeshTransform[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Control_StaticMesh, MeshTransform) == 384, "Offset mismatch for FRigUnit_Control_StaticMesh::MeshTransform");

// /Script/ControlRig.RigUnit_ConvertEulerTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertEulerTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertEulerTransform, Input) == 8, "Offset mismatch for FRigUnit_ConvertEulerTransform::Input");
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Result) == 80, "Offset mismatch for FRigUnit_ConvertEulerTransform::Result");

// /Script/ControlRig.RigUnit_ConvertQuaternion
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertQuaternion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertQuaternion, Input) == 16, "Offset mismatch for FRigUnit_ConvertQuaternion::Input");
static_assert(offsetof(FRigUnit_ConvertQuaternion, Result) == 48, "Offset mismatch for FRigUnit_ConvertQuaternion::Result");

// /Script/ControlRig.RigUnit_ConvertQuaternionToVector
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertQuaternionToVector
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Input) == 16, "Offset mismatch for FRigUnit_ConvertQuaternionToVector::Input");
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Result) == 48, "Offset mismatch for FRigUnit_ConvertQuaternionToVector::Result");

// /Script/ControlRig.RigUnit_ConvertRotation
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertRotation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertRotation, Input) == 8, "Offset mismatch for FRigUnit_ConvertRotation::Input");
static_assert(offsetof(FRigUnit_ConvertRotation, Result) == 32, "Offset mismatch for FRigUnit_ConvertRotation::Result");

// /Script/ControlRig.RigUnit_ConvertRotationToVector
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertRotationToVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertRotationToVector, Input) == 8, "Offset mismatch for FRigUnit_ConvertRotationToVector::Input");
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Result) == 32, "Offset mismatch for FRigUnit_ConvertRotationToVector::Result");

// /Script/ControlRig.RigUnit_ConvertTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertTransform, Input) == 16, "Offset mismatch for FRigUnit_ConvertTransform::Input");
static_assert(offsetof(FRigUnit_ConvertTransform, Result) == 112, "Offset mismatch for FRigUnit_ConvertTransform::Result");

// /Script/ControlRig.RigUnit_ConvertVectorRotation
// Kind: ScriptStruct; super: RigUnit_ConvertRotation
struct FRigUnit_ConvertVectorRotation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertVectorRotation, Input) == 8, "Offset mismatch for FRigUnit_ConvertVectorRotation::Input");
static_assert(offsetof(FRigUnit_ConvertVectorRotation, Result) == 32, "Offset mismatch for FRigUnit_ConvertVectorRotation::Result");

// /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertVectorToQuaternion
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Input) == 8, "Offset mismatch for FRigUnit_ConvertVectorToQuaternion::Input");
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Result) == 32, "Offset mismatch for FRigUnit_ConvertVectorToQuaternion::Result");

// /Script/ControlRig.RigUnit_ConvertVectorToRotation
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ConvertVectorToRotation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Input[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Input) == 8, "Offset mismatch for FRigUnit_ConvertVectorToRotation::Input");
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Result) == 32, "Offset mismatch for FRigUnit_ConvertVectorToRotation::Result");

// /Script/ControlRig.RigUnit_CurveExists
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_CurveExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Curve[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Exists; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t CachedCurveIndex[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_CurveExists, Curve) == 8, "Offset mismatch for FRigUnit_CurveExists::Curve");
static_assert(offsetof(FRigUnit_CurveExists, Exists) == 12, "Offset mismatch for FRigUnit_CurveExists::Exists");
static_assert(offsetof(FRigUnit_CurveExists, CachedCurveIndex) == 16, "Offset mismatch for FRigUnit_CurveExists::CachedCurveIndex");

// /Script/ControlRig.RigUnit_DebugArc
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugArc
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Radius; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MinimumDegrees; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MaximumDegrees; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::int32_t Detail; // 0x00A0 (Size: 0x4, Type: IntProperty)
    FName Space; // 0x00A4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    std::uint8_t WorldOffset[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugArc, Transform) == 32, "Offset mismatch for FRigUnit_DebugArc::Transform");
static_assert(offsetof(FRigUnit_DebugArc, Color) == 128, "Offset mismatch for FRigUnit_DebugArc::Color");
static_assert(offsetof(FRigUnit_DebugArc, Radius) == 144, "Offset mismatch for FRigUnit_DebugArc::Radius");
static_assert(offsetof(FRigUnit_DebugArc, MinimumDegrees) == 148, "Offset mismatch for FRigUnit_DebugArc::MinimumDegrees");
static_assert(offsetof(FRigUnit_DebugArc, MaximumDegrees) == 152, "Offset mismatch for FRigUnit_DebugArc::MaximumDegrees");
static_assert(offsetof(FRigUnit_DebugArc, Thickness) == 156, "Offset mismatch for FRigUnit_DebugArc::Thickness");
static_assert(offsetof(FRigUnit_DebugArc, Detail) == 160, "Offset mismatch for FRigUnit_DebugArc::Detail");
static_assert(offsetof(FRigUnit_DebugArc, Space) == 164, "Offset mismatch for FRigUnit_DebugArc::Space");
static_assert(offsetof(FRigUnit_DebugArc, WorldOffset) == 176, "Offset mismatch for FRigUnit_DebugArc::WorldOffset");
static_assert(offsetof(FRigUnit_DebugArc, bEnabled) == 272, "Offset mismatch for FRigUnit_DebugArc::bEnabled");

// /Script/ControlRig.RigUnit_DebugArcItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugArcItemSpace
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Radius; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MinimumDegrees; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MaximumDegrees; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::int32_t Detail; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Space[0xC]; // 0x00A4 (Size: 0xC, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugArcItemSpace, Transform) == 32, "Offset mismatch for FRigUnit_DebugArcItemSpace::Transform");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Color) == 128, "Offset mismatch for FRigUnit_DebugArcItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Radius) == 144, "Offset mismatch for FRigUnit_DebugArcItemSpace::Radius");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, MinimumDegrees) == 148, "Offset mismatch for FRigUnit_DebugArcItemSpace::MinimumDegrees");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, MaximumDegrees) == 152, "Offset mismatch for FRigUnit_DebugArcItemSpace::MaximumDegrees");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Thickness) == 156, "Offset mismatch for FRigUnit_DebugArcItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Detail) == 160, "Offset mismatch for FRigUnit_DebugArcItemSpace::Detail");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Space) == 164, "Offset mismatch for FRigUnit_DebugArcItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, WorldOffset) == 176, "Offset mismatch for FRigUnit_DebugArcItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugArcItemSpace, bEnabled) == 272, "Offset mismatch for FRigUnit_DebugArcItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_DebugBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DebugDrawSettings[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DebugBase, DebugDrawSettings) == 8, "Offset mismatch for FRigUnit_DebugBase::DebugDrawSettings");

// /Script/ControlRig.RigUnit_DebugBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DebugBaseMutable
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DebugDrawSettings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DebugBaseMutable, DebugDrawSettings) == 16, "Offset mismatch for FRigUnit_DebugBaseMutable::DebugDrawSettings");

// /Script/ControlRig.RigUnit_DebugBezier
// Kind: ScriptStruct; super: RigVMFunction_DebugBaseMutable
struct FRigUnit_DebugBezier
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Bezier[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    float MinimumU; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaximumU; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::int32_t Detail; // 0x0094 (Size: 0x4, Type: IntProperty)
    FName Space; // 0x0098 (Size: 0x8, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugBezier, Bezier) == 24, "Offset mismatch for FRigUnit_DebugBezier::Bezier");
static_assert(offsetof(FRigUnit_DebugBezier, MinimumU) == 120, "Offset mismatch for FRigUnit_DebugBezier::MinimumU");
static_assert(offsetof(FRigUnit_DebugBezier, MaximumU) == 124, "Offset mismatch for FRigUnit_DebugBezier::MaximumU");
static_assert(offsetof(FRigUnit_DebugBezier, Color) == 128, "Offset mismatch for FRigUnit_DebugBezier::Color");
static_assert(offsetof(FRigUnit_DebugBezier, Thickness) == 144, "Offset mismatch for FRigUnit_DebugBezier::Thickness");
static_assert(offsetof(FRigUnit_DebugBezier, Detail) == 148, "Offset mismatch for FRigUnit_DebugBezier::Detail");
static_assert(offsetof(FRigUnit_DebugBezier, Space) == 152, "Offset mismatch for FRigUnit_DebugBezier::Space");
static_assert(offsetof(FRigUnit_DebugBezier, WorldOffset) == 160, "Offset mismatch for FRigUnit_DebugBezier::WorldOffset");
static_assert(offsetof(FRigUnit_DebugBezier, bEnabled) == 256, "Offset mismatch for FRigUnit_DebugBezier::bEnabled");

// /Script/ControlRig.RigUnit_DebugBezierItemSpace
// Kind: ScriptStruct; super: RigVMFunction_DebugBaseMutable
struct FRigUnit_DebugBezierItemSpace
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Bezier[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    float MinimumU; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaximumU; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::int32_t Detail; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t Space[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Bezier) == 24, "Offset mismatch for FRigUnit_DebugBezierItemSpace::Bezier");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, MinimumU) == 120, "Offset mismatch for FRigUnit_DebugBezierItemSpace::MinimumU");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, MaximumU) == 124, "Offset mismatch for FRigUnit_DebugBezierItemSpace::MaximumU");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Color) == 128, "Offset mismatch for FRigUnit_DebugBezierItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Thickness) == 144, "Offset mismatch for FRigUnit_DebugBezierItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Detail) == 148, "Offset mismatch for FRigUnit_DebugBezierItemSpace::Detail");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Space) == 152, "Offset mismatch for FRigUnit_DebugBezierItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, WorldOffset) == 160, "Offset mismatch for FRigUnit_DebugBezierItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, bEnabled) == 256, "Offset mismatch for FRigUnit_DebugBezierItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugHierarchy
// Kind: ScriptStruct; super: RigVMFunction_DebugBase
struct FRigUnit_DebugHierarchy
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecutePin[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float Scale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugHierarchy, ExecutePin) == 16, "Offset mismatch for FRigUnit_DebugHierarchy::ExecutePin");
static_assert(offsetof(FRigUnit_DebugHierarchy, Items) == 24, "Offset mismatch for FRigUnit_DebugHierarchy::Items");
static_assert(offsetof(FRigUnit_DebugHierarchy, Scale) == 40, "Offset mismatch for FRigUnit_DebugHierarchy::Scale");
static_assert(offsetof(FRigUnit_DebugHierarchy, Color) == 44, "Offset mismatch for FRigUnit_DebugHierarchy::Color");
static_assert(offsetof(FRigUnit_DebugHierarchy, Thickness) == 60, "Offset mismatch for FRigUnit_DebugHierarchy::Thickness");
static_assert(offsetof(FRigUnit_DebugHierarchy, WorldOffset) == 64, "Offset mismatch for FRigUnit_DebugHierarchy::WorldOffset");
static_assert(offsetof(FRigUnit_DebugHierarchy, bEnabled) == 160, "Offset mismatch for FRigUnit_DebugHierarchy::bEnabled");

// /Script/ControlRig.RigUnit_DebugLine
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugLine
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t A[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t B[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugLine, A) == 24, "Offset mismatch for FRigUnit_DebugLine::A");
static_assert(offsetof(FRigUnit_DebugLine, B) == 48, "Offset mismatch for FRigUnit_DebugLine::B");
static_assert(offsetof(FRigUnit_DebugLine, Color) == 72, "Offset mismatch for FRigUnit_DebugLine::Color");
static_assert(offsetof(FRigUnit_DebugLine, Thickness) == 88, "Offset mismatch for FRigUnit_DebugLine::Thickness");
static_assert(offsetof(FRigUnit_DebugLine, Space) == 92, "Offset mismatch for FRigUnit_DebugLine::Space");
static_assert(offsetof(FRigUnit_DebugLine, WorldOffset) == 96, "Offset mismatch for FRigUnit_DebugLine::WorldOffset");
static_assert(offsetof(FRigUnit_DebugLine, bEnabled) == 192, "Offset mismatch for FRigUnit_DebugLine::bEnabled");

// /Script/ControlRig.RigUnit_DebugLineItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugLineItemSpace
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t A[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t B[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x14]; // 0x005C (Size: 0x14, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugLineItemSpace, A) == 24, "Offset mismatch for FRigUnit_DebugLineItemSpace::A");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, B) == 48, "Offset mismatch for FRigUnit_DebugLineItemSpace::B");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Color) == 72, "Offset mismatch for FRigUnit_DebugLineItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Thickness) == 88, "Offset mismatch for FRigUnit_DebugLineItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Space) == 92, "Offset mismatch for FRigUnit_DebugLineItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, WorldOffset) == 112, "Offset mismatch for FRigUnit_DebugLineItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugLineItemSpace, bEnabled) == 208, "Offset mismatch for FRigUnit_DebugLineItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugLineStrip
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugLineStrip
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Points; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugLineStrip, Points) == 24, "Offset mismatch for FRigUnit_DebugLineStrip::Points");
static_assert(offsetof(FRigUnit_DebugLineStrip, Color) == 40, "Offset mismatch for FRigUnit_DebugLineStrip::Color");
static_assert(offsetof(FRigUnit_DebugLineStrip, Thickness) == 56, "Offset mismatch for FRigUnit_DebugLineStrip::Thickness");
static_assert(offsetof(FRigUnit_DebugLineStrip, Space) == 60, "Offset mismatch for FRigUnit_DebugLineStrip::Space");
static_assert(offsetof(FRigUnit_DebugLineStrip, WorldOffset) == 64, "Offset mismatch for FRigUnit_DebugLineStrip::WorldOffset");
static_assert(offsetof(FRigUnit_DebugLineStrip, bEnabled) == 160, "Offset mismatch for FRigUnit_DebugLineStrip::bEnabled");

// /Script/ControlRig.RigUnit_DebugLineStripItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugLineStripItemSpace
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Points; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Color[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Points) == 24, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::Points");
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Color) == 40, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Thickness) == 56, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Space) == 60, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, WorldOffset) == 80, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, bEnabled) == 176, "Offset mismatch for FRigUnit_DebugLineStripItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugPose
// Kind: ScriptStruct; super: RigVMFunction_DebugBase
struct FRigUnit_DebugPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecutePin[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Pose[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float Scale; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x10]; // 0x005C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugPose, ExecutePin) == 16, "Offset mismatch for FRigUnit_DebugPose::ExecutePin");
static_assert(offsetof(FRigUnit_DebugPose, Pose) == 24, "Offset mismatch for FRigUnit_DebugPose::Pose");
static_assert(offsetof(FRigUnit_DebugPose, Items) == 72, "Offset mismatch for FRigUnit_DebugPose::Items");
static_assert(offsetof(FRigUnit_DebugPose, Scale) == 88, "Offset mismatch for FRigUnit_DebugPose::Scale");
static_assert(offsetof(FRigUnit_DebugPose, Color) == 92, "Offset mismatch for FRigUnit_DebugPose::Color");
static_assert(offsetof(FRigUnit_DebugPose, Thickness) == 108, "Offset mismatch for FRigUnit_DebugPose::Thickness");
static_assert(offsetof(FRigUnit_DebugPose, WorldOffset) == 112, "Offset mismatch for FRigUnit_DebugPose::WorldOffset");
static_assert(offsetof(FRigUnit_DebugPose, bEnabled) == 208, "Offset mismatch for FRigUnit_DebugPose::bEnabled");

// /Script/ControlRig.RigUnit_DebugRectangle
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugRectangle
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Scale; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x0094 (Size: 0x4, Type: FloatProperty)
    FName Space; // 0x0098 (Size: 0x8, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugRectangle, Transform) == 32, "Offset mismatch for FRigUnit_DebugRectangle::Transform");
static_assert(offsetof(FRigUnit_DebugRectangle, Color) == 128, "Offset mismatch for FRigUnit_DebugRectangle::Color");
static_assert(offsetof(FRigUnit_DebugRectangle, Scale) == 144, "Offset mismatch for FRigUnit_DebugRectangle::Scale");
static_assert(offsetof(FRigUnit_DebugRectangle, Thickness) == 148, "Offset mismatch for FRigUnit_DebugRectangle::Thickness");
static_assert(offsetof(FRigUnit_DebugRectangle, Space) == 152, "Offset mismatch for FRigUnit_DebugRectangle::Space");
static_assert(offsetof(FRigUnit_DebugRectangle, WorldOffset) == 160, "Offset mismatch for FRigUnit_DebugRectangle::WorldOffset");
static_assert(offsetof(FRigUnit_DebugRectangle, bEnabled) == 256, "Offset mismatch for FRigUnit_DebugRectangle::bEnabled");

// /Script/ControlRig.RigUnit_DebugRectangleItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugRectangleItemSpace
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float Scale; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Transform) == 32, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::Transform");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Color) == 128, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Scale) == 144, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::Scale");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Thickness) == 148, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Space) == 152, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, WorldOffset) == 160, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, bEnabled) == 256, "Offset mismatch for FRigUnit_DebugRectangleItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugTransform
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_DebugTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Mode; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::uint8_t Color[0x10]; // 0x0074 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugTransform, Transform) == 16, "Offset mismatch for FRigUnit_DebugTransform::Transform");
static_assert(offsetof(FRigUnit_DebugTransform, Mode) == 112, "Offset mismatch for FRigUnit_DebugTransform::Mode");
static_assert(offsetof(FRigUnit_DebugTransform, Color) == 116, "Offset mismatch for FRigUnit_DebugTransform::Color");
static_assert(offsetof(FRigUnit_DebugTransform, Thickness) == 132, "Offset mismatch for FRigUnit_DebugTransform::Thickness");
static_assert(offsetof(FRigUnit_DebugTransform, Scale) == 136, "Offset mismatch for FRigUnit_DebugTransform::Scale");
static_assert(offsetof(FRigUnit_DebugTransform, Space) == 140, "Offset mismatch for FRigUnit_DebugTransform::Space");
static_assert(offsetof(FRigUnit_DebugTransform, WorldOffset) == 144, "Offset mismatch for FRigUnit_DebugTransform::WorldOffset");
static_assert(offsetof(FRigUnit_DebugTransform, bEnabled) == 240, "Offset mismatch for FRigUnit_DebugTransform::bEnabled");

// /Script/ControlRig.RigUnit_DebugTransformArrayMutable
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugTransformArrayMutable
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Transforms; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t Color[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    FName Space; // 0x0044 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    std::uint8_t WorldOffset[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B1
    std::uint8_t WorkData[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Transforms) == 24, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Transforms");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Mode) == 40, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Mode");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Color) == 44, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Color");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Thickness) == 60, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Thickness");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Scale) == 64, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Scale");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Space) == 68, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::Space");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorldOffset) == 80, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::WorldOffset");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, bEnabled) == 176, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::bEnabled");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorkData) == 184, "Offset mismatch for FRigUnit_DebugTransformArrayMutable::WorkData");

// /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugTransformArrayMutableItemSpace
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Transforms; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t Color[0x10]; // 0x003C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x004C (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Transforms) == 24, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Transforms");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, ParentIndices) == 40, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::ParentIndices");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Mode) == 56, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Mode");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Color) == 60, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Thickness) == 76, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Scale) == 80, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Scale");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, Space) == 84, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, WorldOffset) == 96, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugTransformArrayMutableItemSpace, bEnabled) == 192, "Offset mismatch for FRigUnit_DebugTransformArrayMutableItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
public:
    TArray<void*> DrawTransforms; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_DebugTransformArrayMutable_WorkData, DrawTransforms) == 0, "Offset mismatch for FRigUnit_DebugTransformArrayMutable_WorkData::DrawTransforms");

// /Script/ControlRig.RigUnit_DebugTransformMutable
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugTransformMutable
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Mode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    std::uint8_t Color[0x10]; // 0x0084 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x4]; // 0x009C (Size: 0x4, Type: NameProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugTransformMutable, Transform) == 32, "Offset mismatch for FRigUnit_DebugTransformMutable::Transform");
static_assert(offsetof(FRigUnit_DebugTransformMutable, Mode) == 128, "Offset mismatch for FRigUnit_DebugTransformMutable::Mode");
static_assert(offsetof(FRigUnit_DebugTransformMutable, Color) == 132, "Offset mismatch for FRigUnit_DebugTransformMutable::Color");
static_assert(offsetof(FRigUnit_DebugTransformMutable, Thickness) == 148, "Offset mismatch for FRigUnit_DebugTransformMutable::Thickness");
static_assert(offsetof(FRigUnit_DebugTransformMutable, Scale) == 152, "Offset mismatch for FRigUnit_DebugTransformMutable::Scale");
static_assert(offsetof(FRigUnit_DebugTransformMutable, Space) == 156, "Offset mismatch for FRigUnit_DebugTransformMutable::Space");
static_assert(offsetof(FRigUnit_DebugTransformMutable, WorldOffset) == 160, "Offset mismatch for FRigUnit_DebugTransformMutable::WorldOffset");
static_assert(offsetof(FRigUnit_DebugTransformMutable, bEnabled) == 256, "Offset mismatch for FRigUnit_DebugTransformMutable::bEnabled");

// /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBaseMutable
struct FRigUnit_DebugTransformMutableItemSpace
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Mode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    std::uint8_t Color[0x10]; // 0x0084 (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x14]; // 0x009C (Size: 0x14, Type: StructProperty)
    std::uint8_t WorldOffset[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Transform) == 32, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Transform");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Mode) == 128, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Mode");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Color) == 132, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Color");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Thickness) == 148, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Thickness");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Scale) == 152, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Scale");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Space) == 156, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::Space");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, WorldOffset) == 176, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::WorldOffset");
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, bEnabled) == 272, "Offset mismatch for FRigUnit_DebugTransformMutableItemSpace::bEnabled");

// /Script/ControlRig.RigUnit_DiscardMatches
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DiscardMatches
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Excluded; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString Message; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_DiscardMatches, Excluded) == 16, "Offset mismatch for FRigUnit_DiscardMatches::Excluded");
static_assert(offsetof(FRigUnit_DiscardMatches, Message) == 32, "Offset mismatch for FRigUnit_DiscardMatches::Message");

// /Script/ControlRig.RigUnit_Distance_VectorVector
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_Distance_VectorVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Result; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument0) == 8, "Offset mismatch for FRigUnit_Distance_VectorVector::Argument0");
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument1) == 32, "Offset mismatch for FRigUnit_Distance_VectorVector::Argument1");
static_assert(offsetof(FRigUnit_Distance_VectorVector, Result) == 56, "Offset mismatch for FRigUnit_Distance_VectorVector::Result");

// /Script/ControlRig.RigUnit_DistributeRotation
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_DistributeRotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    TArray<void*> Rotations; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Weight; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0031
    std::uint8_t WorkData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DistributeRotation, StartBone) == 16, "Offset mismatch for FRigUnit_DistributeRotation::StartBone");
static_assert(offsetof(FRigUnit_DistributeRotation, EndBone) == 20, "Offset mismatch for FRigUnit_DistributeRotation::EndBone");
static_assert(offsetof(FRigUnit_DistributeRotation, Rotations) == 24, "Offset mismatch for FRigUnit_DistributeRotation::Rotations");
static_assert(offsetof(FRigUnit_DistributeRotation, RotationEaseType) == 40, "Offset mismatch for FRigUnit_DistributeRotation::RotationEaseType");
static_assert(offsetof(FRigUnit_DistributeRotation, Weight) == 44, "Offset mismatch for FRigUnit_DistributeRotation::Weight");
static_assert(offsetof(FRigUnit_DistributeRotation, bPropagateToChildren) == 48, "Offset mismatch for FRigUnit_DistributeRotation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_DistributeRotation, WorkData) == 56, "Offset mismatch for FRigUnit_DistributeRotation::WorkData");

// /Script/ControlRig.RigUnit_DistributeRotationForCollection
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_DistributeRotationForCollection
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> Rotations; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Weight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WorkData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Items) == 16, "Offset mismatch for FRigUnit_DistributeRotationForCollection::Items");
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Rotations) == 32, "Offset mismatch for FRigUnit_DistributeRotationForCollection::Rotations");
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, RotationEaseType) == 48, "Offset mismatch for FRigUnit_DistributeRotationForCollection::RotationEaseType");
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Weight) == 52, "Offset mismatch for FRigUnit_DistributeRotationForCollection::Weight");
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, WorkData) == 56, "Offset mismatch for FRigUnit_DistributeRotationForCollection::WorkData");

// /Script/ControlRig.RigUnit_DistributeRotationForItemArray
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_DistributeRotationForItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Rotations; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Weight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WorkData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, Items) == 16, "Offset mismatch for FRigUnit_DistributeRotationForItemArray::Items");
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, Rotations) == 32, "Offset mismatch for FRigUnit_DistributeRotationForItemArray::Rotations");
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, RotationEaseType) == 48, "Offset mismatch for FRigUnit_DistributeRotationForItemArray::RotationEaseType");
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, Weight) == 52, "Offset mismatch for FRigUnit_DistributeRotationForItemArray::Weight");
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, WorkData) == 56, "Offset mismatch for FRigUnit_DistributeRotationForItemArray::WorkData");

// /Script/ControlRig.RigUnit_DistributeRotation_Rotation
// Kind: ScriptStruct; super: none
struct FRigUnit_DistributeRotation_Rotation
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    float Ratio; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Rotation) == 0, "Offset mismatch for FRigUnit_DistributeRotation_Rotation::Rotation");
static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Ratio) == 32, "Offset mismatch for FRigUnit_DistributeRotation_Rotation::Ratio");

// /Script/ControlRig.RigUnit_DistributeRotation_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_DistributeRotation_WorkData
{
public:
    TArray<void*> CachedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationA; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationB; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationT; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemLocalTransforms; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, CachedItems) == 0, "Offset mismatch for FRigUnit_DistributeRotation_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationA) == 16, "Offset mismatch for FRigUnit_DistributeRotation_WorkData::ItemRotationA");
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationB) == 32, "Offset mismatch for FRigUnit_DistributeRotation_WorkData::ItemRotationB");
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationT) == 48, "Offset mismatch for FRigUnit_DistributeRotation_WorkData::ItemRotationT");
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms) == 64, "Offset mismatch for FRigUnit_DistributeRotation_WorkData::ItemLocalTransforms");

// /Script/ControlRig.RigUnit_Divide_FloatFloat
// Kind: ScriptStruct; super: RigUnit_BinaryFloatOp
struct FRigUnit_Divide_FloatFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Argument0; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Argument1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Divide_FloatFloat, Argument0) == 8, "Offset mismatch for FRigUnit_Divide_FloatFloat::Argument0");
static_assert(offsetof(FRigUnit_Divide_FloatFloat, Argument1) == 12, "Offset mismatch for FRigUnit_Divide_FloatFloat::Argument1");
static_assert(offsetof(FRigUnit_Divide_FloatFloat, Result) == 16, "Offset mismatch for FRigUnit_Divide_FloatFloat::Result");

// /Script/ControlRig.RigUnit_Divide_VectorVector
// Kind: ScriptStruct; super: RigUnit_BinaryVectorOp
struct FRigUnit_Divide_VectorVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Divide_VectorVector, Argument0) == 8, "Offset mismatch for FRigUnit_Divide_VectorVector::Argument0");
static_assert(offsetof(FRigUnit_Divide_VectorVector, Argument1) == 32, "Offset mismatch for FRigUnit_Divide_VectorVector::Argument1");
static_assert(offsetof(FRigUnit_Divide_VectorVector, Result) == 56, "Offset mismatch for FRigUnit_Divide_VectorVector::Result");

// /Script/ControlRig.RigUnit_DrawContainerGetInstruction
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_DrawContainerGetInstruction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InstructionName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x14]; // 0x000C (Size: 0x14, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, InstructionName) == 8, "Offset mismatch for FRigUnit_DrawContainerGetInstruction::InstructionName");
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Color) == 12, "Offset mismatch for FRigUnit_DrawContainerGetInstruction::Color");
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Transform) == 32, "Offset mismatch for FRigUnit_DrawContainerGetInstruction::Transform");

// /Script/ControlRig.RigUnit_DrawContainerSetColor
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DrawContainerSetColor
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InstructionName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DrawContainerSetColor, InstructionName) == 16, "Offset mismatch for FRigUnit_DrawContainerSetColor::InstructionName");
static_assert(offsetof(FRigUnit_DrawContainerSetColor, Color) == 20, "Offset mismatch for FRigUnit_DrawContainerSetColor::Color");

// /Script/ControlRig.RigUnit_DrawContainerSetThickness
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DrawContainerSetThickness
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InstructionName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Thickness; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_DrawContainerSetThickness, InstructionName) == 16, "Offset mismatch for FRigUnit_DrawContainerSetThickness::InstructionName");
static_assert(offsetof(FRigUnit_DrawContainerSetThickness, Thickness) == 20, "Offset mismatch for FRigUnit_DrawContainerSetThickness::Thickness");

// /Script/ControlRig.RigUnit_DrawContainerSetTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DrawContainerSetTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName InstructionName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DrawContainerSetTransform, InstructionName) == 16, "Offset mismatch for FRigUnit_DrawContainerSetTransform::InstructionName");
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, Transform) == 32, "Offset mismatch for FRigUnit_DrawContainerSetTransform::Transform");

// /Script/ControlRig.RigUnit_DynamicHierarchyBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_DynamicHierarchyBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_DynamicHierarchyBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_DynamicHierarchyBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_DynamicHierarchyBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_EndProfilingTimer
// Kind: ScriptStruct; super: RigVMFunction_DebugBaseMutable
struct FRigUnit_EndProfilingTimer
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t NumberOfMeasurements; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    FString Prefix; // 0x0020 (Size: 0x10, Type: StrProperty)
    float AverageTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float AccumulatedTime; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::int32_t MeasurementsLeft; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsInitialized; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_EndProfilingTimer, NumberOfMeasurements) == 24, "Offset mismatch for FRigUnit_EndProfilingTimer::NumberOfMeasurements");
static_assert(offsetof(FRigUnit_EndProfilingTimer, Prefix) == 32, "Offset mismatch for FRigUnit_EndProfilingTimer::Prefix");
static_assert(offsetof(FRigUnit_EndProfilingTimer, AverageTime) == 48, "Offset mismatch for FRigUnit_EndProfilingTimer::AverageTime");
static_assert(offsetof(FRigUnit_EndProfilingTimer, AccumulatedTime) == 52, "Offset mismatch for FRigUnit_EndProfilingTimer::AccumulatedTime");
static_assert(offsetof(FRigUnit_EndProfilingTimer, MeasurementsLeft) == 56, "Offset mismatch for FRigUnit_EndProfilingTimer::MeasurementsLeft");
static_assert(offsetof(FRigUnit_EndProfilingTimer, bIsInitialized) == 60, "Offset mismatch for FRigUnit_EndProfilingTimer::bIsInitialized");

// /Script/ControlRig.RigUnit_FABRIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FABRIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    FName EffectorBone; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    std::int32_t MaxIterations; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t WorkData[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t bSetEffectorTransform; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_FABRIK, StartBone) == 16, "Offset mismatch for FRigUnit_FABRIK::StartBone");
static_assert(offsetof(FRigUnit_FABRIK, EffectorBone) == 20, "Offset mismatch for FRigUnit_FABRIK::EffectorBone");
static_assert(offsetof(FRigUnit_FABRIK, EffectorTransform) == 32, "Offset mismatch for FRigUnit_FABRIK::EffectorTransform");
static_assert(offsetof(FRigUnit_FABRIK, Precision) == 128, "Offset mismatch for FRigUnit_FABRIK::Precision");
static_assert(offsetof(FRigUnit_FABRIK, Weight) == 132, "Offset mismatch for FRigUnit_FABRIK::Weight");
static_assert(offsetof(FRigUnit_FABRIK, bPropagateToChildren) == 136, "Offset mismatch for FRigUnit_FABRIK::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FABRIK, MaxIterations) == 140, "Offset mismatch for FRigUnit_FABRIK::MaxIterations");
static_assert(offsetof(FRigUnit_FABRIK, WorkData) == 144, "Offset mismatch for FRigUnit_FABRIK::WorkData");
static_assert(offsetof(FRigUnit_FABRIK, bSetEffectorTransform) == 200, "Offset mismatch for FRigUnit_FABRIK::bSetEffectorTransform");

// /Script/ControlRig.RigUnit_FABRIKItemArray
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FABRIKItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t MaxIterations; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t WorkData[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t bSetEffectorTransform; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_FABRIKItemArray, Items) == 16, "Offset mismatch for FRigUnit_FABRIKItemArray::Items");
static_assert(offsetof(FRigUnit_FABRIKItemArray, EffectorTransform) == 32, "Offset mismatch for FRigUnit_FABRIKItemArray::EffectorTransform");
static_assert(offsetof(FRigUnit_FABRIKItemArray, Precision) == 128, "Offset mismatch for FRigUnit_FABRIKItemArray::Precision");
static_assert(offsetof(FRigUnit_FABRIKItemArray, Weight) == 132, "Offset mismatch for FRigUnit_FABRIKItemArray::Weight");
static_assert(offsetof(FRigUnit_FABRIKItemArray, bPropagateToChildren) == 136, "Offset mismatch for FRigUnit_FABRIKItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FABRIKItemArray, MaxIterations) == 140, "Offset mismatch for FRigUnit_FABRIKItemArray::MaxIterations");
static_assert(offsetof(FRigUnit_FABRIKItemArray, WorkData) == 144, "Offset mismatch for FRigUnit_FABRIKItemArray::WorkData");
static_assert(offsetof(FRigUnit_FABRIKItemArray, bSetEffectorTransform) == 200, "Offset mismatch for FRigUnit_FABRIKItemArray::bSetEffectorTransform");

// /Script/ControlRig.RigUnit_FABRIKPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FABRIKPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t EffectorTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Precision; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t MaxIterations; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t WorkData[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t bSetEffectorTransform; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_FABRIKPerItem, Items) == 16, "Offset mismatch for FRigUnit_FABRIKPerItem::Items");
static_assert(offsetof(FRigUnit_FABRIKPerItem, EffectorTransform) == 32, "Offset mismatch for FRigUnit_FABRIKPerItem::EffectorTransform");
static_assert(offsetof(FRigUnit_FABRIKPerItem, Precision) == 128, "Offset mismatch for FRigUnit_FABRIKPerItem::Precision");
static_assert(offsetof(FRigUnit_FABRIKPerItem, Weight) == 132, "Offset mismatch for FRigUnit_FABRIKPerItem::Weight");
static_assert(offsetof(FRigUnit_FABRIKPerItem, bPropagateToChildren) == 136, "Offset mismatch for FRigUnit_FABRIKPerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FABRIKPerItem, MaxIterations) == 140, "Offset mismatch for FRigUnit_FABRIKPerItem::MaxIterations");
static_assert(offsetof(FRigUnit_FABRIKPerItem, WorkData) == 144, "Offset mismatch for FRigUnit_FABRIKPerItem::WorkData");
static_assert(offsetof(FRigUnit_FABRIKPerItem, bSetEffectorTransform) == 200, "Offset mismatch for FRigUnit_FABRIKPerItem::bSetEffectorTransform");

// /Script/ControlRig.RigUnit_FABRIK_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_FABRIK_WorkData
{
public:
    TArray<void*> Chain; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedItems; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedEffector[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FABRIK_WorkData, Chain) == 0, "Offset mismatch for FRigUnit_FABRIK_WorkData::Chain");
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedItems) == 16, "Offset mismatch for FRigUnit_FABRIK_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedEffector) == 32, "Offset mismatch for FRigUnit_FABRIK_WorkData::CachedEffector");

// /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_FilterItemsByMetadataTags
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Tags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Namespace; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Inclusive; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    TArray<void*> Result; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedIndices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Items) == 8, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::Items");
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Tags) == 24, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::Tags");
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Namespace) == 40, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::Namespace");
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Inclusive) == 41, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::Inclusive");
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Result) == 48, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::Result");
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, CachedIndices) == 64, "Offset mismatch for FRigUnit_FilterItemsByMetadataTags::CachedIndices");

// /Script/ControlRig.RigUnit_FindClosestItem
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_FindClosestItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Point[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Item[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    TArray<void*> CachedItems; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FindClosestItem, Items) == 16, "Offset mismatch for FRigUnit_FindClosestItem::Items");
static_assert(offsetof(FRigUnit_FindClosestItem, Point) == 32, "Offset mismatch for FRigUnit_FindClosestItem::Point");
static_assert(offsetof(FRigUnit_FindClosestItem, Item) == 56, "Offset mismatch for FRigUnit_FindClosestItem::Item");
static_assert(offsetof(FRigUnit_FindClosestItem, CachedItems) == 64, "Offset mismatch for FRigUnit_FindClosestItem::CachedItems");

// /Script/ControlRig.RigUnit_FindItemsWithMetadata
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_FindItemsWithMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Namespace; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Name) == 8, "Offset mismatch for FRigUnit_FindItemsWithMetadata::Name");
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Type) == 12, "Offset mismatch for FRigUnit_FindItemsWithMetadata::Type");
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Namespace) == 13, "Offset mismatch for FRigUnit_FindItemsWithMetadata::Namespace");
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Items) == 16, "Offset mismatch for FRigUnit_FindItemsWithMetadata::Items");

// /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_FindItemsWithMetadataTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Namespace; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FindItemsWithMetadataTag, Tag) == 8, "Offset mismatch for FRigUnit_FindItemsWithMetadataTag::Tag");
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTag, Namespace) == 12, "Offset mismatch for FRigUnit_FindItemsWithMetadataTag::Namespace");
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTag, Items) == 16, "Offset mismatch for FRigUnit_FindItemsWithMetadataTag::Items");

// /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_FindItemsWithMetadataTagArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Tags; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Namespace; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> Items; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FindItemsWithMetadataTagArray, Tags) == 8, "Offset mismatch for FRigUnit_FindItemsWithMetadataTagArray::Tags");
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTagArray, Namespace) == 24, "Offset mismatch for FRigUnit_FindItemsWithMetadataTagArray::Namespace");
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTagArray, Items) == 32, "Offset mismatch for FRigUnit_FindItemsWithMetadataTagArray::Items");

// /Script/ControlRig.RigUnit_FitChainToCurve
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FitChainToCurve
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Bezier[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    std::uint8_t Alignment; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    float Minimum; // 0x007C (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    float Weight; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00E9
    std::uint8_t DebugSettings[0x90]; // 0x00F0 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurve, StartBone) == 16, "Offset mismatch for FRigUnit_FitChainToCurve::StartBone");
static_assert(offsetof(FRigUnit_FitChainToCurve, EndBone) == 20, "Offset mismatch for FRigUnit_FitChainToCurve::EndBone");
static_assert(offsetof(FRigUnit_FitChainToCurve, Bezier) == 24, "Offset mismatch for FRigUnit_FitChainToCurve::Bezier");
static_assert(offsetof(FRigUnit_FitChainToCurve, Alignment) == 120, "Offset mismatch for FRigUnit_FitChainToCurve::Alignment");
static_assert(offsetof(FRigUnit_FitChainToCurve, Minimum) == 124, "Offset mismatch for FRigUnit_FitChainToCurve::Minimum");
static_assert(offsetof(FRigUnit_FitChainToCurve, Maximum) == 128, "Offset mismatch for FRigUnit_FitChainToCurve::Maximum");
static_assert(offsetof(FRigUnit_FitChainToCurve, SamplingPrecision) == 132, "Offset mismatch for FRigUnit_FitChainToCurve::SamplingPrecision");
static_assert(offsetof(FRigUnit_FitChainToCurve, PrimaryAxis) == 136, "Offset mismatch for FRigUnit_FitChainToCurve::PrimaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurve, SecondaryAxis) == 160, "Offset mismatch for FRigUnit_FitChainToCurve::SecondaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurve, PoleVectorPosition) == 184, "Offset mismatch for FRigUnit_FitChainToCurve::PoleVectorPosition");
static_assert(offsetof(FRigUnit_FitChainToCurve, Rotations) == 208, "Offset mismatch for FRigUnit_FitChainToCurve::Rotations");
static_assert(offsetof(FRigUnit_FitChainToCurve, RotationEaseType) == 224, "Offset mismatch for FRigUnit_FitChainToCurve::RotationEaseType");
static_assert(offsetof(FRigUnit_FitChainToCurve, Weight) == 228, "Offset mismatch for FRigUnit_FitChainToCurve::Weight");
static_assert(offsetof(FRigUnit_FitChainToCurve, bPropagateToChildren) == 232, "Offset mismatch for FRigUnit_FitChainToCurve::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FitChainToCurve, DebugSettings) == 240, "Offset mismatch for FRigUnit_FitChainToCurve::DebugSettings");
static_assert(offsetof(FRigUnit_FitChainToCurve, WorkData) == 384, "Offset mismatch for FRigUnit_FitChainToCurve::WorkData");

// /Script/ControlRig.RigUnit_FitChainToCurveItemArray
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FitChainToCurveItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bezier[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Alignment; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    float Minimum; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E9
    float Weight; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x00F1
    std::uint8_t DebugSettings[0x90]; // 0x0100 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Items) == 16, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Items");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Bezier) == 32, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Bezier");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Alignment) == 128, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Alignment");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Minimum) == 132, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Minimum");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Maximum) == 136, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Maximum");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, SamplingPrecision) == 140, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::SamplingPrecision");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, PrimaryAxis) == 144, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::PrimaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, SecondaryAxis) == 168, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::SecondaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, PoleVectorPosition) == 192, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::PoleVectorPosition");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Rotations) == 216, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Rotations");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, RotationEaseType) == 232, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::RotationEaseType");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Weight) == 236, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::Weight");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, bPropagateToChildren) == 240, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, DebugSettings) == 256, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::DebugSettings");
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, WorkData) == 400, "Offset mismatch for FRigUnit_FitChainToCurveItemArray::WorkData");

// /Script/ControlRig.RigUnit_FitChainToCurvePerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_FitChainToCurvePerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Bezier[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Alignment; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    float Minimum; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::int32_t SamplingPrecision; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorPosition[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    TArray<void*> Rotations; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RotationEaseType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E9
    float Weight; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x00F1
    std::uint8_t DebugSettings[0x90]; // 0x0100 (Size: 0x90, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Items) == 16, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Items");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Bezier) == 32, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Bezier");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Alignment) == 128, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Alignment");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Minimum) == 132, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Minimum");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Maximum) == 136, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Maximum");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SamplingPrecision) == 140, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::SamplingPrecision");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PrimaryAxis) == 144, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::PrimaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SecondaryAxis) == 168, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::SecondaryAxis");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition) == 192, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::PoleVectorPosition");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Rotations) == 216, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Rotations");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, RotationEaseType) == 232, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::RotationEaseType");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Weight) == 236, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::Weight");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, bPropagateToChildren) == 240, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, DebugSettings) == 256, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::DebugSettings");
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, WorkData) == 400, "Offset mismatch for FRigUnit_FitChainToCurvePerItem::WorkData");

// /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveColor[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SegmentsColor[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldOffset[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, bEnabled) == 0, "Offset mismatch for FRigUnit_FitChainToCurve_DebugSettings::bEnabled");
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, Scale) == 4, "Offset mismatch for FRigUnit_FitChainToCurve_DebugSettings::Scale");
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, CurveColor) == 8, "Offset mismatch for FRigUnit_FitChainToCurve_DebugSettings::CurveColor");
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor) == 24, "Offset mismatch for FRigUnit_FitChainToCurve_DebugSettings::SegmentsColor");
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset) == 48, "Offset mismatch for FRigUnit_FitChainToCurve_DebugSettings::WorldOffset");

// /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
// Kind: ScriptStruct; super: none
struct FRigUnit_FitChainToCurve_Rotation
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    float Ratio; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Rotation) == 0, "Offset mismatch for FRigUnit_FitChainToCurve_Rotation::Rotation");
static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Ratio) == 32, "Offset mismatch for FRigUnit_FitChainToCurve_Rotation::Ratio");

// /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_FitChainToCurve_WorkData
{
public:
    float ChainLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ItemPositions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemSegments; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurvePositions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveSegments; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedItems; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationA; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationB; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRotationT; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemLocalTransforms; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ChainLength) == 0, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ChainLength");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemPositions) == 8, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemPositions");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemSegments) == 24, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemSegments");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurvePositions) == 40, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::CurvePositions");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurveSegments) == 56, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::CurveSegments");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CachedItems) == 72, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationA) == 88, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemRotationA");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationB) == 104, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemRotationB");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationT) == 120, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemRotationT");
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms) == 136, "Offset mismatch for FRigUnit_FitChainToCurve_WorkData::ItemLocalTransforms");

// /Script/ControlRig.RigUnit_GetAnimationChannelBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetAnimationChannelBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Channel[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bInitial; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t CachedChannelKey[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::int32_t CachedChannelHash; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_GetAnimationChannelBase, Control) == 8, "Offset mismatch for FRigUnit_GetAnimationChannelBase::Control");
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, Channel) == 12, "Offset mismatch for FRigUnit_GetAnimationChannelBase::Channel");
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, bInitial) == 16, "Offset mismatch for FRigUnit_GetAnimationChannelBase::bInitial");
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, CachedChannelKey) == 20, "Offset mismatch for FRigUnit_GetAnimationChannelBase::CachedChannelKey");
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, CachedChannelHash) == 28, "Offset mismatch for FRigUnit_GetAnimationChannelBase::CachedChannelHash");

// /Script/ControlRig.RigUnit_GetAnimationChannelFromItemBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetAnimationChannelFromItemBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bInitial; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetAnimationChannelFromItemBase, Item) == 8, "Offset mismatch for FRigUnit_GetAnimationChannelFromItemBase::Item");
static_assert(offsetof(FRigUnit_GetAnimationChannelFromItemBase, bInitial) == 16, "Offset mismatch for FRigUnit_GetAnimationChannelFromItemBase::bInitial");

// /Script/ControlRig.RigUnit_GetBoneTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetBoneTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedBone[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFirstUpdate; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetBoneTransform, bone) == 8, "Offset mismatch for FRigUnit_GetBoneTransform::bone");
static_assert(offsetof(FRigUnit_GetBoneTransform, Space) == 12, "Offset mismatch for FRigUnit_GetBoneTransform::Space");
static_assert(offsetof(FRigUnit_GetBoneTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetBoneTransform::Transform");
static_assert(offsetof(FRigUnit_GetBoneTransform, CachedBone) == 112, "Offset mismatch for FRigUnit_GetBoneTransform::CachedBone");
static_assert(offsetof(FRigUnit_GetBoneTransform, bFirstUpdate) == 136, "Offset mismatch for FRigUnit_GetBoneTransform::bFirstUpdate");

// /Script/ControlRig.RigUnit_GetBoolAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetBoolAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetBoolAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetBoolAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetBoolAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetBoolAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_GetBoolAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetBoolAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetCandidates
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetCandidates
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Connector[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Candidates; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_GetCandidates, Connector) == 8, "Offset mismatch for FRigUnit_GetCandidates::Connector");
static_assert(offsetof(FRigUnit_GetCandidates, Candidates) == 16, "Offset mismatch for FRigUnit_GetCandidates::Candidates");

// /Script/ControlRig.RigUnit_GetControlBool
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlBool
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoolValue; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t CachedControlIndex[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlBool, Control) == 8, "Offset mismatch for FRigUnit_GetControlBool::Control");
static_assert(offsetof(FRigUnit_GetControlBool, BoolValue) == 12, "Offset mismatch for FRigUnit_GetControlBool::BoolValue");
static_assert(offsetof(FRigUnit_GetControlBool, CachedControlIndex) == 16, "Offset mismatch for FRigUnit_GetControlBool::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlColor
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlColor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x14]; // 0x000C (Size: 0x14, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlColor, Control) == 8, "Offset mismatch for FRigUnit_GetControlColor::Control");
static_assert(offsetof(FRigUnit_GetControlColor, Color) == 12, "Offset mismatch for FRigUnit_GetControlColor::Color");
static_assert(offsetof(FRigUnit_GetControlColor, CachedControlIndex) == 32, "Offset mismatch for FRigUnit_GetControlColor::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlDrivenList
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlDrivenList
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Control; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> Driven; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlDrivenList, Control) == 8, "Offset mismatch for FRigUnit_GetControlDrivenList::Control");
static_assert(offsetof(FRigUnit_GetControlDrivenList, Driven) == 16, "Offset mismatch for FRigUnit_GetControlDrivenList::Driven");
static_assert(offsetof(FRigUnit_GetControlDrivenList, CachedControlIndex) == 32, "Offset mismatch for FRigUnit_GetControlDrivenList::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlFloat
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float FloatValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Minimum; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Maximum; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlFloat, Control) == 8, "Offset mismatch for FRigUnit_GetControlFloat::Control");
static_assert(offsetof(FRigUnit_GetControlFloat, FloatValue) == 12, "Offset mismatch for FRigUnit_GetControlFloat::FloatValue");
static_assert(offsetof(FRigUnit_GetControlFloat, Minimum) == 16, "Offset mismatch for FRigUnit_GetControlFloat::Minimum");
static_assert(offsetof(FRigUnit_GetControlFloat, Maximum) == 20, "Offset mismatch for FRigUnit_GetControlFloat::Maximum");
static_assert(offsetof(FRigUnit_GetControlFloat, CachedControlIndex) == 24, "Offset mismatch for FRigUnit_GetControlFloat::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlInitialTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlInitialTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlInitialTransform, Control) == 8, "Offset mismatch for FRigUnit_GetControlInitialTransform::Control");
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Space) == 12, "Offset mismatch for FRigUnit_GetControlInitialTransform::Space");
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetControlInitialTransform::Transform");
static_assert(offsetof(FRigUnit_GetControlInitialTransform, CachedControlIndex) == 112, "Offset mismatch for FRigUnit_GetControlInitialTransform::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlInteger
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlInteger
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t IntegerValue; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t Minimum; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t Maximum; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlInteger, Control) == 8, "Offset mismatch for FRigUnit_GetControlInteger::Control");
static_assert(offsetof(FRigUnit_GetControlInteger, IntegerValue) == 12, "Offset mismatch for FRigUnit_GetControlInteger::IntegerValue");
static_assert(offsetof(FRigUnit_GetControlInteger, Minimum) == 16, "Offset mismatch for FRigUnit_GetControlInteger::Minimum");
static_assert(offsetof(FRigUnit_GetControlInteger, Maximum) == 20, "Offset mismatch for FRigUnit_GetControlInteger::Maximum");
static_assert(offsetof(FRigUnit_GetControlInteger, CachedControlIndex) == 24, "Offset mismatch for FRigUnit_GetControlInteger::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlOffset
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlOffset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t OffsetTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedIndex[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlOffset, Control) == 8, "Offset mismatch for FRigUnit_GetControlOffset::Control");
static_assert(offsetof(FRigUnit_GetControlOffset, Space) == 12, "Offset mismatch for FRigUnit_GetControlOffset::Space");
static_assert(offsetof(FRigUnit_GetControlOffset, OffsetTransform) == 16, "Offset mismatch for FRigUnit_GetControlOffset::OffsetTransform");
static_assert(offsetof(FRigUnit_GetControlOffset, CachedIndex) == 112, "Offset mismatch for FRigUnit_GetControlOffset::CachedIndex");

// /Script/ControlRig.RigUnit_GetControlPreferredEulerAngles
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlPreferredEulerAngles
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Control; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Angles[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOrder; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CachedControlIndex[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlPreferredEulerAngles, Control) == 8, "Offset mismatch for FRigUnit_GetControlPreferredEulerAngles::Control");
static_assert(offsetof(FRigUnit_GetControlPreferredEulerAngles, Angles) == 16, "Offset mismatch for FRigUnit_GetControlPreferredEulerAngles::Angles");
static_assert(offsetof(FRigUnit_GetControlPreferredEulerAngles, RotationOrder) == 40, "Offset mismatch for FRigUnit_GetControlPreferredEulerAngles::RotationOrder");
static_assert(offsetof(FRigUnit_GetControlPreferredEulerAngles, CachedControlIndex) == 48, "Offset mismatch for FRigUnit_GetControlPreferredEulerAngles::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlRotator
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlRotator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Rotator[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Minimum[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Maximum[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlRotator, Control) == 8, "Offset mismatch for FRigUnit_GetControlRotator::Control");
static_assert(offsetof(FRigUnit_GetControlRotator, Space) == 12, "Offset mismatch for FRigUnit_GetControlRotator::Space");
static_assert(offsetof(FRigUnit_GetControlRotator, Rotator) == 16, "Offset mismatch for FRigUnit_GetControlRotator::Rotator");
static_assert(offsetof(FRigUnit_GetControlRotator, Minimum) == 40, "Offset mismatch for FRigUnit_GetControlRotator::Minimum");
static_assert(offsetof(FRigUnit_GetControlRotator, Maximum) == 64, "Offset mismatch for FRigUnit_GetControlRotator::Maximum");
static_assert(offsetof(FRigUnit_GetControlRotator, CachedControlIndex) == 88, "Offset mismatch for FRigUnit_GetControlRotator::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Minimum[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t Maximum[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlTransform, Control) == 8, "Offset mismatch for FRigUnit_GetControlTransform::Control");
static_assert(offsetof(FRigUnit_GetControlTransform, Space) == 12, "Offset mismatch for FRigUnit_GetControlTransform::Space");
static_assert(offsetof(FRigUnit_GetControlTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetControlTransform::Transform");
static_assert(offsetof(FRigUnit_GetControlTransform, Minimum) == 112, "Offset mismatch for FRigUnit_GetControlTransform::Minimum");
static_assert(offsetof(FRigUnit_GetControlTransform, Maximum) == 208, "Offset mismatch for FRigUnit_GetControlTransform::Maximum");
static_assert(offsetof(FRigUnit_GetControlTransform, CachedControlIndex) == 304, "Offset mismatch for FRigUnit_GetControlTransform::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlVector
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Vector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Minimum[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Maximum[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlVector, Control) == 8, "Offset mismatch for FRigUnit_GetControlVector::Control");
static_assert(offsetof(FRigUnit_GetControlVector, Space) == 12, "Offset mismatch for FRigUnit_GetControlVector::Space");
static_assert(offsetof(FRigUnit_GetControlVector, Vector) == 16, "Offset mismatch for FRigUnit_GetControlVector::Vector");
static_assert(offsetof(FRigUnit_GetControlVector, Minimum) == 40, "Offset mismatch for FRigUnit_GetControlVector::Minimum");
static_assert(offsetof(FRigUnit_GetControlVector, Maximum) == 64, "Offset mismatch for FRigUnit_GetControlVector::Maximum");
static_assert(offsetof(FRigUnit_GetControlVector, CachedControlIndex) == 88, "Offset mismatch for FRigUnit_GetControlVector::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlVector2D
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlVector2D
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Control; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Vector[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Minimum[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Maximum[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlVector2D, Control) == 8, "Offset mismatch for FRigUnit_GetControlVector2D::Control");
static_assert(offsetof(FRigUnit_GetControlVector2D, Vector) == 16, "Offset mismatch for FRigUnit_GetControlVector2D::Vector");
static_assert(offsetof(FRigUnit_GetControlVector2D, Minimum) == 32, "Offset mismatch for FRigUnit_GetControlVector2D::Minimum");
static_assert(offsetof(FRigUnit_GetControlVector2D, Maximum) == 48, "Offset mismatch for FRigUnit_GetControlVector2D::Maximum");
static_assert(offsetof(FRigUnit_GetControlVector2D, CachedControlIndex) == 64, "Offset mismatch for FRigUnit_GetControlVector2D::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetControlVisibility
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetControlVisibility
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bVisible; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t CachedControlIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetControlVisibility, Item) == 8, "Offset mismatch for FRigUnit_GetControlVisibility::Item");
static_assert(offsetof(FRigUnit_GetControlVisibility, bVisible) == 16, "Offset mismatch for FRigUnit_GetControlVisibility::bVisible");
static_assert(offsetof(FRigUnit_GetControlVisibility, CachedControlIndex) == 24, "Offset mismatch for FRigUnit_GetControlVisibility::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetCurrentNameSpace
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetCurrentNameSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Namespace; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_GetCurrentNameSpace, Namespace) == 8, "Offset mismatch for FRigUnit_GetCurrentNameSpace::Namespace");

// /Script/ControlRig.RigUnit_GetCurveValue
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetCurveValue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Curve[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Valid; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float Value; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    std::uint8_t CachedCurveIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetCurveValue, Curve) == 8, "Offset mismatch for FRigUnit_GetCurveValue::Curve");
static_assert(offsetof(FRigUnit_GetCurveValue, Valid) == 12, "Offset mismatch for FRigUnit_GetCurveValue::Valid");
static_assert(offsetof(FRigUnit_GetCurveValue, Value) == 16, "Offset mismatch for FRigUnit_GetCurveValue::Value");
static_assert(offsetof(FRigUnit_GetCurveValue, CachedCurveIndex) == 24, "Offset mismatch for FRigUnit_GetCurveValue::CachedCurveIndex");

// /Script/ControlRig.RigUnit_GetFloatAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetFloatAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    float Value; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_GetFloatAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetFloatAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetFloatAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetFloatAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    float Value; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_GetFloatAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetFloatAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetInitialBoneTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetInitialBoneTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedBone[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetInitialBoneTransform, bone) == 8, "Offset mismatch for FRigUnit_GetInitialBoneTransform::bone");
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Space) == 12, "Offset mismatch for FRigUnit_GetInitialBoneTransform::Space");
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetInitialBoneTransform::Transform");
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, CachedBone) == 112, "Offset mismatch for FRigUnit_GetInitialBoneTransform::CachedBone");

// /Script/ControlRig.RigUnit_GetIntAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetIntAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::int32_t Value; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_GetIntAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetIntAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetIntAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetIntAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t Value; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_GetIntAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetIntAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetItemModuleName
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetItemModuleName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t IsPartOfModule; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    FString Module; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_GetItemModuleName, Item) == 8, "Offset mismatch for FRigUnit_GetItemModuleName::Item");
static_assert(offsetof(FRigUnit_GetItemModuleName, IsPartOfModule) == 16, "Offset mismatch for FRigUnit_GetItemModuleName::IsPartOfModule");
static_assert(offsetof(FRigUnit_GetItemModuleName, Module) == 24, "Offset mismatch for FRigUnit_GetItemModuleName::Module");

// /Script/ControlRig.RigUnit_GetItemNameSpace
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetItemNameSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t HasNameSpace; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    FString Namespace; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_GetItemNameSpace, Item) == 8, "Offset mismatch for FRigUnit_GetItemNameSpace::Item");
static_assert(offsetof(FRigUnit_GetItemNameSpace, HasNameSpace) == 16, "Offset mismatch for FRigUnit_GetItemNameSpace::HasNameSpace");
static_assert(offsetof(FRigUnit_GetItemNameSpace, Namespace) == 24, "Offset mismatch for FRigUnit_GetItemNameSpace::Namespace");

// /Script/ControlRig.RigUnit_GetItemShortName
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetItemShortName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FName ShortName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_GetItemShortName, Item) == 8, "Offset mismatch for FRigUnit_GetItemShortName::Item");
static_assert(offsetof(FRigUnit_GetItemShortName, ShortName) == 16, "Offset mismatch for FRigUnit_GetItemShortName::ShortName");

// /Script/ControlRig.RigUnit_GetItemsInModule
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetItemsInModule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TypeToSearch; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_GetItemsInModule, TypeToSearch) == 8, "Offset mismatch for FRigUnit_GetItemsInModule::TypeToSearch");
static_assert(offsetof(FRigUnit_GetItemsInModule, Items) == 16, "Offset mismatch for FRigUnit_GetItemsInModule::Items");

// /Script/ControlRig.RigUnit_GetItemsInNameSpace
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetItemsInNameSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TypeToSearch; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_GetItemsInNameSpace, TypeToSearch) == 8, "Offset mismatch for FRigUnit_GetItemsInNameSpace::TypeToSearch");
static_assert(offsetof(FRigUnit_GetItemsInNameSpace, Items) == 16, "Offset mismatch for FRigUnit_GetItemsInNameSpace::Items");

// /Script/ControlRig.RigUnit_GetJointTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_GetJointTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Joint[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransformSpace; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xA]; // 0x0016
    std::uint8_t BaseTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    FName BaseJoint; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0088
    std::uint8_t Output[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetJointTransform, Joint) == 16, "Offset mismatch for FRigUnit_GetJointTransform::Joint");
static_assert(offsetof(FRigUnit_GetJointTransform, Type) == 20, "Offset mismatch for FRigUnit_GetJointTransform::Type");
static_assert(offsetof(FRigUnit_GetJointTransform, TransformSpace) == 21, "Offset mismatch for FRigUnit_GetJointTransform::TransformSpace");
static_assert(offsetof(FRigUnit_GetJointTransform, BaseTransform) == 32, "Offset mismatch for FRigUnit_GetJointTransform::BaseTransform");
static_assert(offsetof(FRigUnit_GetJointTransform, BaseJoint) == 128, "Offset mismatch for FRigUnit_GetJointTransform::BaseJoint");
static_assert(offsetof(FRigUnit_GetJointTransform, Output) == 144, "Offset mismatch for FRigUnit_GetJointTransform::Output");

// /Script/ControlRig.RigUnit_GetMetadataTags
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetMetadataTags
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Tags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetMetadataTags, Item) == 8, "Offset mismatch for FRigUnit_GetMetadataTags::Item");
static_assert(offsetof(FRigUnit_GetMetadataTags, Tags) == 16, "Offset mismatch for FRigUnit_GetMetadataTags::Tags");
static_assert(offsetof(FRigUnit_GetMetadataTags, CachedIndex) == 32, "Offset mismatch for FRigUnit_GetMetadataTags::CachedIndex");

// /Script/ControlRig.RigUnit_GetModuleName
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_GetModuleName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Module; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_GetModuleName, Module) == 8, "Offset mismatch for FRigUnit_GetModuleName::Module");

// /Script/ControlRig.RigUnit_GetRelativeBoneTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetRelativeBoneTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Space[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedBone[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedSpace[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, bone) == 8, "Offset mismatch for FRigUnit_GetRelativeBoneTransform::bone");
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Space) == 12, "Offset mismatch for FRigUnit_GetRelativeBoneTransform::Space");
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetRelativeBoneTransform::Transform");
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedBone) == 112, "Offset mismatch for FRigUnit_GetRelativeBoneTransform::CachedBone");
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedSpace) == 136, "Offset mismatch for FRigUnit_GetRelativeBoneTransform::CachedSpace");

// /Script/ControlRig.RigUnit_GetRelativeTransform
// Kind: ScriptStruct; super: RigUnit_BinaryTransformOp
struct FRigUnit_GetRelativeTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument0[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Argument1[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetRelativeTransform, Argument0) == 16, "Offset mismatch for FRigUnit_GetRelativeTransform::Argument0");
static_assert(offsetof(FRigUnit_GetRelativeTransform, Argument1) == 112, "Offset mismatch for FRigUnit_GetRelativeTransform::Argument1");
static_assert(offsetof(FRigUnit_GetRelativeTransform, Result) == 208, "Offset mismatch for FRigUnit_GetRelativeTransform::Result");

// /Script/ControlRig.RigUnit_GetRelativeTransformForItem
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetRelativeTransformForItem
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bChildInitial; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Parent[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t bParentInitial; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    std::uint8_t RelativeTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedChild[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Child) == 8, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::Child");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, bChildInitial) == 16, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::bChildInitial");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Parent) == 20, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::Parent");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, bParentInitial) == 28, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::bParentInitial");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, RelativeTransform) == 32, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::RelativeTransform");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedChild) == 128, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::CachedChild");
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedParent) == 152, "Offset mismatch for FRigUnit_GetRelativeTransformForItem::CachedParent");

// /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetRotatorAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetRotatorAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetRotatorAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetRotatorAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetRotatorAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetRotatorAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetRotatorAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetShapeTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetShapeTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Control; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetShapeTransform, Control) == 8, "Offset mismatch for FRigUnit_GetShapeTransform::Control");
static_assert(offsetof(FRigUnit_GetShapeTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetShapeTransform::Transform");
static_assert(offsetof(FRigUnit_GetShapeTransform, CachedControlIndex) == 112, "Offset mismatch for FRigUnit_GetShapeTransform::CachedControlIndex");

// /Script/ControlRig.RigUnit_GetSpaceTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetSpaceTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Space[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t SpaceType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedSpaceIndex[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetSpaceTransform, Space) == 8, "Offset mismatch for FRigUnit_GetSpaceTransform::Space");
static_assert(offsetof(FRigUnit_GetSpaceTransform, SpaceType) == 12, "Offset mismatch for FRigUnit_GetSpaceTransform::SpaceType");
static_assert(offsetof(FRigUnit_GetSpaceTransform, Transform) == 16, "Offset mismatch for FRigUnit_GetSpaceTransform::Transform");
static_assert(offsetof(FRigUnit_GetSpaceTransform, CachedSpaceIndex) == 112, "Offset mismatch for FRigUnit_GetSpaceTransform::CachedSpaceIndex");

// /Script/ControlRig.RigUnit_GetTransform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xE]; // 0x0012
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedIndex[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetTransform, Item) == 8, "Offset mismatch for FRigUnit_GetTransform::Item");
static_assert(offsetof(FRigUnit_GetTransform, Space) == 16, "Offset mismatch for FRigUnit_GetTransform::Space");
static_assert(offsetof(FRigUnit_GetTransform, bInitial) == 17, "Offset mismatch for FRigUnit_GetTransform::bInitial");
static_assert(offsetof(FRigUnit_GetTransform, Transform) == 32, "Offset mismatch for FRigUnit_GetTransform::Transform");
static_assert(offsetof(FRigUnit_GetTransform, CachedIndex) == 128, "Offset mismatch for FRigUnit_GetTransform::CachedIndex");

// /Script/ControlRig.RigUnit_GetTransformAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetTransformAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetTransformAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetTransformAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetTransformAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetTransformAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetTransformAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_GetTransformAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetTransformArray
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetTransformArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    TArray<void*> Transforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedIndex; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_GetTransformArray, Items) == 8, "Offset mismatch for FRigUnit_GetTransformArray::Items");
static_assert(offsetof(FRigUnit_GetTransformArray, Space) == 24, "Offset mismatch for FRigUnit_GetTransformArray::Space");
static_assert(offsetof(FRigUnit_GetTransformArray, bInitial) == 25, "Offset mismatch for FRigUnit_GetTransformArray::bInitial");
static_assert(offsetof(FRigUnit_GetTransformArray, Transforms) == 32, "Offset mismatch for FRigUnit_GetTransformArray::Transforms");
static_assert(offsetof(FRigUnit_GetTransformArray, CachedIndex) == 48, "Offset mismatch for FRigUnit_GetTransformArray::CachedIndex");

// /Script/ControlRig.RigUnit_GetTransformItemArray
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_GetTransformItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    TArray<void*> Transforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedIndex; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_GetTransformItemArray, Items) == 8, "Offset mismatch for FRigUnit_GetTransformItemArray::Items");
static_assert(offsetof(FRigUnit_GetTransformItemArray, Space) == 24, "Offset mismatch for FRigUnit_GetTransformItemArray::Space");
static_assert(offsetof(FRigUnit_GetTransformItemArray, bInitial) == 25, "Offset mismatch for FRigUnit_GetTransformItemArray::bInitial");
static_assert(offsetof(FRigUnit_GetTransformItemArray, Transforms) == 32, "Offset mismatch for FRigUnit_GetTransformItemArray::Transforms");
static_assert(offsetof(FRigUnit_GetTransformItemArray, CachedIndex) == 48, "Offset mismatch for FRigUnit_GetTransformItemArray::CachedIndex");

// /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetVector2DAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetVector2DAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetVector2DAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetVector2DAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetVector2DAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetVector2DAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetVector2DAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_GetVectorAnimationChannel
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_GetVectorAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetVectorAnimationChannel, Value) == 32, "Offset mismatch for FRigUnit_GetVectorAnimationChannel::Value");

// /Script/ControlRig.RigUnit_GetVectorAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_GetVectorAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_GetVectorAnimationChannelFromItem, Value) == 24, "Offset mismatch for FRigUnit_GetVectorAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_Harmonics_TargetItem
// Kind: ScriptStruct; super: none
struct FRigUnit_Harmonics_TargetItem
{
public:
    std::uint8_t Item[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Ratio; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Harmonics_TargetItem, Item) == 0, "Offset mismatch for FRigUnit_Harmonics_TargetItem::Item");
static_assert(offsetof(FRigUnit_Harmonics_TargetItem, Ratio) == 8, "Offset mismatch for FRigUnit_Harmonics_TargetItem::Ratio");

// /Script/ControlRig.RigUnit_HasMetadata
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_HasMetadata
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Namespace; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Found; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0017
    std::uint8_t CachedIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HasMetadata, Item) == 8, "Offset mismatch for FRigUnit_HasMetadata::Item");
static_assert(offsetof(FRigUnit_HasMetadata, Name) == 16, "Offset mismatch for FRigUnit_HasMetadata::Name");
static_assert(offsetof(FRigUnit_HasMetadata, Type) == 20, "Offset mismatch for FRigUnit_HasMetadata::Type");
static_assert(offsetof(FRigUnit_HasMetadata, Namespace) == 21, "Offset mismatch for FRigUnit_HasMetadata::Namespace");
static_assert(offsetof(FRigUnit_HasMetadata, Found) == 22, "Offset mismatch for FRigUnit_HasMetadata::Found");
static_assert(offsetof(FRigUnit_HasMetadata, CachedIndex) == 24, "Offset mismatch for FRigUnit_HasMetadata::CachedIndex");

// /Script/ControlRig.RigUnit_HasMetadataTag
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_HasMetadataTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tag[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Namespace; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Found; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::uint8_t CachedIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HasMetadataTag, Item) == 8, "Offset mismatch for FRigUnit_HasMetadataTag::Item");
static_assert(offsetof(FRigUnit_HasMetadataTag, Tag) == 16, "Offset mismatch for FRigUnit_HasMetadataTag::Tag");
static_assert(offsetof(FRigUnit_HasMetadataTag, Namespace) == 20, "Offset mismatch for FRigUnit_HasMetadataTag::Namespace");
static_assert(offsetof(FRigUnit_HasMetadataTag, Found) == 21, "Offset mismatch for FRigUnit_HasMetadataTag::Found");
static_assert(offsetof(FRigUnit_HasMetadataTag, CachedIndex) == 24, "Offset mismatch for FRigUnit_HasMetadataTag::CachedIndex");

// /Script/ControlRig.RigUnit_HasMetadataTagArray
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_HasMetadataTagArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Tags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Namespace; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Found; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t CachedIndex[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HasMetadataTagArray, Item) == 8, "Offset mismatch for FRigUnit_HasMetadataTagArray::Item");
static_assert(offsetof(FRigUnit_HasMetadataTagArray, Tags) == 16, "Offset mismatch for FRigUnit_HasMetadataTagArray::Tags");
static_assert(offsetof(FRigUnit_HasMetadataTagArray, Namespace) == 32, "Offset mismatch for FRigUnit_HasMetadataTagArray::Namespace");
static_assert(offsetof(FRigUnit_HasMetadataTagArray, Found) == 33, "Offset mismatch for FRigUnit_HasMetadataTagArray::Found");
static_assert(offsetof(FRigUnit_HasMetadataTagArray, CachedIndex) == 40, "Offset mismatch for FRigUnit_HasMetadataTagArray::CachedIndex");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannel2DLimitSettings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings
{
public:
    std::uint8_t X[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t Y[0x1]; // 0x0002 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannel2DLimitSettings, X) == 0, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannel2DLimitSettings::X");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannel2DLimitSettings, Y) == 2, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannel2DLimitSettings::Y");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelBool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitialValue; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MinimumValue; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaximumValue; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x002B (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelBool, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelBool::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelBool, MinimumValue) == 41, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelBool::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelBool, MaximumValue) == 42, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelBool::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelBool, LimitsEnabled) == 43, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelBool::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float InitialValue; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinimumValue; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaximumValue; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelFloat, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelFloat::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelFloat, MinimumValue) == 44, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelFloat::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelFloat, MaximumValue) == 48, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelFloat::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelFloat, LimitsEnabled) == 52, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelFloat::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelInteger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t InitialValue; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MinimumValue; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumValue; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t LimitsEnabled[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    void* ControlEnum; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelInteger, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelInteger::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelInteger, MinimumValue) == 44, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelInteger::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelInteger, MaximumValue) == 48, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelInteger::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelInteger, LimitsEnabled) == 52, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelInteger::LimitsEnabled");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelInteger, ControlEnum) == 56, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelInteger::ControlEnum");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelRotator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitialValue[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinimumValue[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumValue[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotator::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, MinimumValue) == 64, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotator::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, MaximumValue) == 88, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotator::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, LimitsEnabled) == 112, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotator::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings
{
public:
    std::uint8_t Pitch[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t Yaw[0x2]; // 0x0002 (Size: 0x2, Type: StructProperty)
    std::uint8_t Roll[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings, Pitch) == 0, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings::Pitch");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings, Yaw) == 2, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings::Yaw");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings, Roll) == 4, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings::Roll");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelScaleFloat
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelScaleFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float InitialValue; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MinimumValue; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaximumValue; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleFloat, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleFloat::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleFloat, MinimumValue) == 44, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleFloat::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleFloat, MaximumValue) == 48, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleFloat::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleFloat, LimitsEnabled) == 52, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleFloat::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelScaleVector
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelScaleVector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitialValue[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinimumValue[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumValue[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleVector, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleVector::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleVector, MinimumValue) == 64, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleVector::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleVector, MaximumValue) == 88, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleVector::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelScaleVector, LimitsEnabled) == 112, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelScaleVector::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelSingleLimitSettings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings
{
public:
    std::uint8_t Enabled[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings, Enabled) == 0, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings::Enabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelVector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitialValue[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinimumValue[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumValue[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, MinimumValue) == 64, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, MaximumValue) == 88, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, LimitsEnabled) == 112, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddAnimationChannelVector2D
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InitialValue[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t MinimumValue[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaximumValue[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t LimitsEnabled[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, InitialValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector2D::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, MinimumValue) == 56, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector2D::MinimumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, MaximumValue) == 72, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector2D::MaximumValue");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, LimitsEnabled) == 88, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVector2D::LimitsEnabled");

// /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVectorLimitSettings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings
{
public:
    std::uint8_t X[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t Y[0x2]; // 0x0002 (Size: 0x2, Type: StructProperty)
    std::uint8_t Z[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings, X) == 0, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings::X");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings, Y) == 2, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings::Y");
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings, Z) == 4, "Offset mismatch for FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings::Z");

// /Script/ControlRig.RigUnit_HierarchyAddBone
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddBone
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddBone, Transform) == 48, "Offset mismatch for FRigUnit_HierarchyAddBone::Transform");
static_assert(offsetof(FRigUnit_HierarchyAddBone, Space) == 144, "Offset mismatch for FRigUnit_HierarchyAddBone::Space");

// /Script/ControlRig.RigUnit_HierarchyAddControlElement
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddControlElement
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t OffsetTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t OffsetSpace; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlElement, OffsetTransform) == 48, "Offset mismatch for FRigUnit_HierarchyAddControlElement::OffsetTransform");
static_assert(offsetof(FRigUnit_HierarchyAddControlElement, OffsetSpace) == 144, "Offset mismatch for FRigUnit_HierarchyAddControlElement::OffsetSpace");

// /Script/ControlRig.RigUnit_HierarchyAddControlFloat
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlFloat
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float InitialValue; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x00A4
    std::uint8_t Settings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlFloat, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlFloat::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat, Settings) == 176, "Offset mismatch for FRigUnit_HierarchyAddControlFloat::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
    std::uint8_t Limit[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float MinValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDrawLimits; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_LimitSettings, Limit) == 0, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_LimitSettings::Limit");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_LimitSettings, MinValue) == 4, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_LimitSettings, MaxValue) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_LimitSettings, bDrawLimits) == 12, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlFloat_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PrimaryAxis; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsScale; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    std::uint8_t Limits[0x1C]; // 0x0014 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x0030 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, PrimaryAxis) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_Settings::PrimaryAxis");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, bIsScale) == 17, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_Settings::bIsScale");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Limits) == 20, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Shape) == 48, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Proxy) == 176, "Offset mismatch for FRigUnit_HierarchyAddControlFloat_Settings::Proxy");

// /Script/ControlRig.RigUnit_HierarchyAddControlInteger
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlInteger
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::int32_t InitialValue; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x00A4
    std::uint8_t Settings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlInteger, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlInteger::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger, Settings) == 176, "Offset mismatch for FRigUnit_HierarchyAddControlInteger::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
    std::uint8_t Limit[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t MinValue; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxValue; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDrawLimits; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_LimitSettings, Limit) == 0, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_LimitSettings::Limit");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_LimitSettings, MinValue) == 4, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_LimitSettings, MaxValue) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_LimitSettings, bDrawLimits) == 12, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlInteger_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PrimaryAxis; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    void* ControlEnum; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Limits[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x0030 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, PrimaryAxis) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_Settings::PrimaryAxis");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, ControlEnum) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_Settings::ControlEnum");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Limits) == 32, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Shape) == 48, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Proxy) == 176, "Offset mismatch for FRigUnit_HierarchyAddControlInteger_Settings::Proxy");

// /Script/ControlRig.RigUnit_HierarchyAddControlRotator
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlRotator
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t InitialValue[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlRotator, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlRotator::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator, Settings) == 192, "Offset mismatch for FRigUnit_HierarchyAddControlRotator::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LimitPitch[0x2]; // 0x0008 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitYaw[0x2]; // 0x000A (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitRoll[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t MinValue[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxValue[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawLimits; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitPitch) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::LimitPitch");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitYaw) == 10, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::LimitYaw");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitRoll) == 12, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::LimitRoll");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, MinValue) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, MaxValue) == 40, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, bDrawLimits) == 64, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlRotator_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InitialSpace; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Limits[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x0060 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> FilteredChannels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUsePreferredRotationOrder; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PreferredRotationOrder; // 0x0111 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, InitialSpace) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::InitialSpace");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Limits) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Shape) == 96, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Proxy) == 224, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::Proxy");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, FilteredChannels) == 256, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::FilteredChannels");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, bUsePreferredRotationOrder) == 272, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::bUsePreferredRotationOrder");
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, PreferredRotationOrder) == 273, "Offset mismatch for FRigUnit_HierarchyAddControlRotator_Settings::PreferredRotationOrder");

// /Script/ControlRig.RigUnit_HierarchyAddControlTransform
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlTransform
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t InitialValue[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlTransform, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlTransform::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform, Settings) == 256, "Offset mismatch for FRigUnit_HierarchyAddControlTransform::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlTransform_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlTransform_LimitSettings
{
public:
    std::uint8_t LimitTranslationX[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitTranslationY[0x2]; // 0x0002 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitTranslationZ[0x2]; // 0x0004 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitPitch[0x2]; // 0x0006 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitYaw[0x2]; // 0x0008 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitRoll[0x2]; // 0x000A (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitScaleX[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitScaleY[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitScaleZ[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t MinValue[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaxValue[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    std::uint8_t bDrawLimits; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitTranslationX) == 0, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitTranslationX");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitTranslationY) == 2, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitTranslationY");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitTranslationZ) == 4, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitTranslationZ");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitPitch) == 6, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitPitch");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitYaw) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitYaw");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitRoll) == 10, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitRoll");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitScaleX) == 12, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitScaleX");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitScaleY) == 14, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitScaleY");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, LimitScaleZ) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::LimitScaleZ");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, MinValue) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, MaxValue) == 96, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_LimitSettings, bDrawLimits) == 168, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlTransform_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InitialSpace; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUsePreferredRotationOrder; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PreferredRotationOrder; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    std::uint8_t Limits[0xB8]; // 0x0018 (Size: 0xB8, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x00D0 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    TArray<void*> FilteredChannels; // 0x0170 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, InitialSpace) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::InitialSpace");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, bUsePreferredRotationOrder) == 17, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::bUsePreferredRotationOrder");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, PreferredRotationOrder) == 18, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::PreferredRotationOrder");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, Limits) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, Shape) == 208, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, Proxy) == 336, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::Proxy");
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, FilteredChannels) == 368, "Offset mismatch for FRigUnit_HierarchyAddControlTransform_Settings::FilteredChannels");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlVector
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t InitialValue[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlVector::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector, Settings) == 192, "Offset mismatch for FRigUnit_HierarchyAddControlVector::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlVector2D
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t InitialValue[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D, InitialValue) == 160, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D::InitialValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D, Settings) == 176, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D::Settings");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
    std::uint8_t LimitX[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitY[0x6]; // 0x0002 (Size: 0x6, Type: StructProperty)
    std::uint8_t MinValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxValue[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t bDrawLimits; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, LimitX) == 0, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_LimitSettings::LimitX");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, LimitY) == 2, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_LimitSettings::LimitY");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, MinValue) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, MaxValue) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, bDrawLimits) == 40, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlVector2D_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PrimaryAxis; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Limits[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x0050 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    TArray<void*> FilteredChannels; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, PrimaryAxis) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_Settings::PrimaryAxis");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Limits) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Shape) == 80, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Proxy) == 208, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_Settings::Proxy");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, FilteredChannels) == 240, "Offset mismatch for FRigUnit_HierarchyAddControlVector2D_Settings::FilteredChannels");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
public:
    std::uint8_t LimitX[0x2]; // 0x0000 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitY[0x2]; // 0x0002 (Size: 0x2, Type: StructProperty)
    std::uint8_t LimitZ[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t MinValue[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxValue[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawLimits; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitX) == 0, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::LimitX");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitY) == 2, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::LimitY");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitZ) == 4, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::LimitZ");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, MinValue) == 8, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::MinValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, MaxValue) == 32, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::MaxValue");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, bDrawLimits) == 56, "Offset mismatch for FRigUnit_HierarchyAddControlVector_LimitSettings::bDrawLimits");

// /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
// Kind: ScriptStruct; super: RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControlVector_Settings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InitialSpace; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsPosition; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    std::uint8_t Limits[0x48]; // 0x0018 (Size: 0x48, Type: StructProperty)
    std::uint8_t Shape[0x80]; // 0x0060 (Size: 0x80, Type: StructProperty)
    std::uint8_t Proxy[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> FilteredChannels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, InitialSpace) == 16, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::InitialSpace");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, bIsPosition) == 17, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::bIsPosition");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Limits) == 24, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::Limits");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Shape) == 96, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::Shape");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Proxy) == 224, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::Proxy");
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, FilteredChannels) == 256, "Offset mismatch for FRigUnit_HierarchyAddControlVector_Settings::FilteredChannels");

// /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControl_ProxySettings
{
public:
    std::uint8_t bIsProxy; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> DrivenControls; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShapeVisibility; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControl_ProxySettings, bIsProxy) == 0, "Offset mismatch for FRigUnit_HierarchyAddControl_ProxySettings::bIsProxy");
static_assert(offsetof(FRigUnit_HierarchyAddControl_ProxySettings, DrivenControls) == 8, "Offset mismatch for FRigUnit_HierarchyAddControl_ProxySettings::DrivenControls");
static_assert(offsetof(FRigUnit_HierarchyAddControl_ProxySettings, ShapeVisibility) == 24, "Offset mismatch for FRigUnit_HierarchyAddControl_ProxySettings::ShapeVisibility");

// /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControl_Settings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DisplayName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSelectable; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControl_Settings, DisplayName) == 8, "Offset mismatch for FRigUnit_HierarchyAddControl_Settings::DisplayName");
static_assert(offsetof(FRigUnit_HierarchyAddControl_Settings, bSelectable) == 12, "Offset mismatch for FRigUnit_HierarchyAddControl_Settings::bSelectable");

// /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
public:
    std::uint8_t bVisible; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, bVisible) == 0, "Offset mismatch for FRigUnit_HierarchyAddControl_ShapeSettings::bVisible");
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Name) == 4, "Offset mismatch for FRigUnit_HierarchyAddControl_ShapeSettings::Name");
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Color) == 8, "Offset mismatch for FRigUnit_HierarchyAddControl_ShapeSettings::Color");
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Transform) == 32, "Offset mismatch for FRigUnit_HierarchyAddControl_ShapeSettings::Transform");

// /Script/ControlRig.RigUnit_HierarchyAddElement
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchyAddElement
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Parent[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Item[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddElement, Parent) == 16, "Offset mismatch for FRigUnit_HierarchyAddElement::Parent");
static_assert(offsetof(FRigUnit_HierarchyAddElement, Name) == 24, "Offset mismatch for FRigUnit_HierarchyAddElement::Name");
static_assert(offsetof(FRigUnit_HierarchyAddElement, Item) == 28, "Offset mismatch for FRigUnit_HierarchyAddElement::Item");

// /Script/ControlRig.RigUnit_HierarchyAddNull
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddNull
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddNull, Transform) == 48, "Offset mismatch for FRigUnit_HierarchyAddNull::Transform");
static_assert(offsetof(FRigUnit_HierarchyAddNull, Space) == 144, "Offset mismatch for FRigUnit_HierarchyAddNull::Space");

// /Script/ControlRig.RigUnit_HierarchyAddPhysicsJoint
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddPhysicsJoint
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Solver[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddPhysicsJoint, Transform) == 48, "Offset mismatch for FRigUnit_HierarchyAddPhysicsJoint::Transform");
static_assert(offsetof(FRigUnit_HierarchyAddPhysicsJoint, Solver) == 144, "Offset mismatch for FRigUnit_HierarchyAddPhysicsJoint::Solver");

// /Script/ControlRig.RigUnit_HierarchyAddPhysicsSolver
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchyAddPhysicsSolver
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Solver[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddPhysicsSolver, Name) == 16, "Offset mismatch for FRigUnit_HierarchyAddPhysicsSolver::Name");
static_assert(offsetof(FRigUnit_HierarchyAddPhysicsSolver, Solver) == 20, "Offset mismatch for FRigUnit_HierarchyAddPhysicsSolver::Solver");

// /Script/ControlRig.RigUnit_HierarchyAddSocket
// Kind: ScriptStruct; super: RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddSocket
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::uint8_t Color[0x14]; // 0x0094 (Size: 0x14, Type: StructProperty)
    FString Description; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigUnit_HierarchyAddSocket, Transform) == 48, "Offset mismatch for FRigUnit_HierarchyAddSocket::Transform");
static_assert(offsetof(FRigUnit_HierarchyAddSocket, Space) == 144, "Offset mismatch for FRigUnit_HierarchyAddSocket::Space");
static_assert(offsetof(FRigUnit_HierarchyAddSocket, Color) == 148, "Offset mismatch for FRigUnit_HierarchyAddSocket::Color");
static_assert(offsetof(FRigUnit_HierarchyAddSocket, Description) == 168, "Offset mismatch for FRigUnit_HierarchyAddSocket::Description");

// /Script/ControlRig.RigUnit_HierarchyBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_HierarchyBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_HierarchyBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_HierarchyBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_HierarchyBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_HierarchyCreatePoseItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyCreatePoseItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Entries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pose[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray, Entries) == 8, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray::Entries");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray, Pose) == 24, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray::Pose");

// /Script/ControlRig.RigUnit_HierarchyCreatePoseItemArray_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_HierarchyCreatePoseItemArray_Entry
{
public:
    std::uint8_t Item[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t GlobalTransform[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t UseEulerAngles; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x00D1
    std::uint8_t EulerAngles[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    float CurveValue; // 0x00F0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, Item) == 0, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::Item");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, LocalTransform) == 16, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::LocalTransform");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, GlobalTransform) == 112, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::GlobalTransform");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, UseEulerAngles) == 208, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::UseEulerAngles");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, EulerAngles) == 216, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::EulerAngles");
static_assert(offsetof(FRigUnit_HierarchyCreatePoseItemArray_Entry, CurveValue) == 240, "Offset mismatch for FRigUnit_HierarchyCreatePoseItemArray_Entry::CurveValue");

// /Script/ControlRig.RigUnit_HierarchyGetChainItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetChainItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t End[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeStart; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeEnd; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReverse; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x001B
    TArray<void*> Chain; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedStart[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedEnd[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedChain[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, Start) == 8, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::Start");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, End) == 16, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::End");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, bIncludeStart) == 24, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::bIncludeStart");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, bIncludeEnd) == 25, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::bIncludeEnd");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, bReverse) == 26, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::bReverse");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, Chain) == 32, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::Chain");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, CachedStart) == 48, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::CachedStart");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, CachedEnd) == 72, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::CachedEnd");
static_assert(offsetof(FRigUnit_HierarchyGetChainItemArray, CachedChain) == 96, "Offset mismatch for FRigUnit_HierarchyGetChainItemArray::CachedChain");

// /Script/ControlRig.RigUnit_HierarchyGetChildren
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetChildren
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Parent[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeParent; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecursive; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    std::uint8_t Children[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedParent[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedChildren[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetChildren, Parent) == 8, "Offset mismatch for FRigUnit_HierarchyGetChildren::Parent");
static_assert(offsetof(FRigUnit_HierarchyGetChildren, bIncludeParent) == 16, "Offset mismatch for FRigUnit_HierarchyGetChildren::bIncludeParent");
static_assert(offsetof(FRigUnit_HierarchyGetChildren, bRecursive) == 17, "Offset mismatch for FRigUnit_HierarchyGetChildren::bRecursive");
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Children) == 24, "Offset mismatch for FRigUnit_HierarchyGetChildren::Children");
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedParent) == 40, "Offset mismatch for FRigUnit_HierarchyGetChildren::CachedParent");
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedChildren) == 64, "Offset mismatch for FRigUnit_HierarchyGetChildren::CachedChildren");

// /Script/ControlRig.RigUnit_HierarchyGetParent
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetParent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bDefaultParent; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Parent[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    std::uint8_t CachedChild[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetParent, Child) == 8, "Offset mismatch for FRigUnit_HierarchyGetParent::Child");
static_assert(offsetof(FRigUnit_HierarchyGetParent, bDefaultParent) == 16, "Offset mismatch for FRigUnit_HierarchyGetParent::bDefaultParent");
static_assert(offsetof(FRigUnit_HierarchyGetParent, Parent) == 20, "Offset mismatch for FRigUnit_HierarchyGetParent::Parent");
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedChild) == 32, "Offset mismatch for FRigUnit_HierarchyGetParent::CachedChild");
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedParent) == 56, "Offset mismatch for FRigUnit_HierarchyGetParent::CachedParent");

// /Script/ControlRig.RigUnit_HierarchyGetParentWeights
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBase
struct FRigUnit_HierarchyGetParentWeights
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Weights; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Parents[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Child) == 8, "Offset mismatch for FRigUnit_HierarchyGetParentWeights::Child");
static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Weights) == 16, "Offset mismatch for FRigUnit_HierarchyGetParentWeights::Weights");
static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Parents) == 32, "Offset mismatch for FRigUnit_HierarchyGetParentWeights::Parents");

// /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBase
struct FRigUnit_HierarchyGetParentWeightsArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Weights; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Child) == 8, "Offset mismatch for FRigUnit_HierarchyGetParentWeightsArray::Child");
static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Weights) == 16, "Offset mismatch for FRigUnit_HierarchyGetParentWeightsArray::Weights");
static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Parents) == 32, "Offset mismatch for FRigUnit_HierarchyGetParentWeightsArray::Parents");

// /Script/ControlRig.RigUnit_HierarchyGetParents
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetParents
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeChild; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReverse; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    std::uint8_t Parents[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedChild[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParents[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetParents, Child) == 8, "Offset mismatch for FRigUnit_HierarchyGetParents::Child");
static_assert(offsetof(FRigUnit_HierarchyGetParents, bIncludeChild) == 16, "Offset mismatch for FRigUnit_HierarchyGetParents::bIncludeChild");
static_assert(offsetof(FRigUnit_HierarchyGetParents, bReverse) == 17, "Offset mismatch for FRigUnit_HierarchyGetParents::bReverse");
static_assert(offsetof(FRigUnit_HierarchyGetParents, Parents) == 24, "Offset mismatch for FRigUnit_HierarchyGetParents::Parents");
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedChild) == 40, "Offset mismatch for FRigUnit_HierarchyGetParents::CachedChild");
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedParents) == 64, "Offset mismatch for FRigUnit_HierarchyGetParents::CachedParents");

// /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetParentsItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeChild; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReverse; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultParent; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    TArray<void*> Parents; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedChild[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParents[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, Child) == 8, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::Child");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, bIncludeChild) == 16, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::bIncludeChild");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, bReverse) == 17, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::bReverse");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, bDefaultParent) == 18, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::bDefaultParent");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, Parents) == 24, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::Parents");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, CachedChild) == 40, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::CachedChild");
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, CachedParents) == 64, "Offset mismatch for FRigUnit_HierarchyGetParentsItemArray::CachedParents");

// /Script/ControlRig.RigUnit_HierarchyGetPose
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetPose
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Initial; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ElementType; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t ItemsToGet[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Pose[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPose, Initial) == 8, "Offset mismatch for FRigUnit_HierarchyGetPose::Initial");
static_assert(offsetof(FRigUnit_HierarchyGetPose, ElementType) == 9, "Offset mismatch for FRigUnit_HierarchyGetPose::ElementType");
static_assert(offsetof(FRigUnit_HierarchyGetPose, ItemsToGet) == 16, "Offset mismatch for FRigUnit_HierarchyGetPose::ItemsToGet");
static_assert(offsetof(FRigUnit_HierarchyGetPose, Pose) == 32, "Offset mismatch for FRigUnit_HierarchyGetPose::Pose");

// /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetPoseItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Initial; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ElementType; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    TArray<void*> ItemsToGet; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pose[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, Initial) == 8, "Offset mismatch for FRigUnit_HierarchyGetPoseItemArray::Initial");
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, ElementType) == 9, "Offset mismatch for FRigUnit_HierarchyGetPoseItemArray::ElementType");
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, ItemsToGet) == 16, "Offset mismatch for FRigUnit_HierarchyGetPoseItemArray::ItemsToGet");
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, Pose) == 32, "Offset mismatch for FRigUnit_HierarchyGetPoseItemArray::Pose");

// /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBase
struct FRigUnit_HierarchyGetShapeSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetShapeSettings, Item) == 8, "Offset mismatch for FRigUnit_HierarchyGetShapeSettings::Item");
static_assert(offsetof(FRigUnit_HierarchyGetShapeSettings, Settings) == 16, "Offset mismatch for FRigUnit_HierarchyGetShapeSettings::Settings");

// /Script/ControlRig.RigUnit_HierarchyGetSiblings
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetSiblings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeItem; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Siblings[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedItem[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedSiblings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Item) == 8, "Offset mismatch for FRigUnit_HierarchyGetSiblings::Item");
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, bIncludeItem) == 16, "Offset mismatch for FRigUnit_HierarchyGetSiblings::bIncludeItem");
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Siblings) == 24, "Offset mismatch for FRigUnit_HierarchyGetSiblings::Siblings");
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedItem) == 40, "Offset mismatch for FRigUnit_HierarchyGetSiblings::CachedItem");
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedSiblings) == 64, "Offset mismatch for FRigUnit_HierarchyGetSiblings::CachedSiblings");

// /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_HierarchyGetSiblingsItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIncludeItem; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultSiblings; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    TArray<void*> Siblings; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedItem[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedSiblings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, Item) == 8, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::Item");
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, bIncludeItem) == 16, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::bIncludeItem");
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, bDefaultSiblings) == 17, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::bDefaultSiblings");
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, Siblings) == 24, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::Siblings");
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, CachedItem) == 40, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::CachedItem");
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, CachedSiblings) == 64, "Offset mismatch for FRigUnit_HierarchyGetSiblingsItemArray::CachedSiblings");

// /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchyImportFromSkeleton
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Namespace[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIncludeCurves; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeMeshSockets; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeVirtualBones; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0017
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, Namespace) == 16, "Offset mismatch for FRigUnit_HierarchyImportFromSkeleton::Namespace");
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, bIncludeCurves) == 20, "Offset mismatch for FRigUnit_HierarchyImportFromSkeleton::bIncludeCurves");
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, bIncludeMeshSockets) == 21, "Offset mismatch for FRigUnit_HierarchyImportFromSkeleton::bIncludeMeshSockets");
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, bIncludeVirtualBones) == 22, "Offset mismatch for FRigUnit_HierarchyImportFromSkeleton::bIncludeVirtualBones");
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, Items) == 24, "Offset mismatch for FRigUnit_HierarchyImportFromSkeleton::Items");

// /Script/ControlRig.RigUnit_HierarchyRemoveElement
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchyRemoveElement
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bSuccess; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_HierarchyRemoveElement, Item) == 16, "Offset mismatch for FRigUnit_HierarchyRemoveElement::Item");
static_assert(offsetof(FRigUnit_HierarchyRemoveElement, bSuccess) == 24, "Offset mismatch for FRigUnit_HierarchyRemoveElement::bSuccess");

// /Script/ControlRig.RigUnit_HierarchyReset
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchyReset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchyReset, ExecutePin) == 8, "Offset mismatch for FRigUnit_HierarchyReset::ExecutePin");

// /Script/ControlRig.RigUnit_HierarchySetParentWeights
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchySetParentWeights
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Weights; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetParentWeights, Child) == 16, "Offset mismatch for FRigUnit_HierarchySetParentWeights::Child");
static_assert(offsetof(FRigUnit_HierarchySetParentWeights, Weights) == 24, "Offset mismatch for FRigUnit_HierarchySetParentWeights::Weights");

// /Script/ControlRig.RigUnit_HierarchySetPose
// Kind: ScriptStruct; super: RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchySetPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t ElementType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Space; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    std::uint8_t ItemsToSet[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    float Weight; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPose, Pose) == 16, "Offset mismatch for FRigUnit_HierarchySetPose::Pose");
static_assert(offsetof(FRigUnit_HierarchySetPose, ElementType) == 64, "Offset mismatch for FRigUnit_HierarchySetPose::ElementType");
static_assert(offsetof(FRigUnit_HierarchySetPose, Space) == 65, "Offset mismatch for FRigUnit_HierarchySetPose::Space");
static_assert(offsetof(FRigUnit_HierarchySetPose, ItemsToSet) == 72, "Offset mismatch for FRigUnit_HierarchySetPose::ItemsToSet");
static_assert(offsetof(FRigUnit_HierarchySetPose, Weight) == 88, "Offset mismatch for FRigUnit_HierarchySetPose::Weight");

// /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchySetPoseItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t ElementType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Space; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    TArray<void*> ItemsToSet; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, Pose) == 16, "Offset mismatch for FRigUnit_HierarchySetPoseItemArray::Pose");
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, ElementType) == 64, "Offset mismatch for FRigUnit_HierarchySetPoseItemArray::ElementType");
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, Space) == 65, "Offset mismatch for FRigUnit_HierarchySetPoseItemArray::Space");
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, ItemsToSet) == 72, "Offset mismatch for FRigUnit_HierarchySetPoseItemArray::ItemsToSet");
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, Weight) == 88, "Offset mismatch for FRigUnit_HierarchySetPoseItemArray::Weight");

// /Script/ControlRig.RigUnit_HierarchySetShapeSettings
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_HierarchySetShapeSettings
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HierarchySetShapeSettings, Item) == 16, "Offset mismatch for FRigUnit_HierarchySetShapeSettings::Item");
static_assert(offsetof(FRigUnit_HierarchySetShapeSettings, Settings) == 32, "Offset mismatch for FRigUnit_HierarchySetShapeSettings::Settings");

// /Script/ControlRig.RigUnit_HighlevelBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_HighlevelBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_HighlevelBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_HighlevelBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_HighlevelBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_HighlevelBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_InteractionExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_InteractionExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_InteractionExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_InteractionExecution::ExecutePin");

// /Script/ControlRig.RigUnit_InverseExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_InverseExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_InverseExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_InverseExecution::ExecutePin");

// /Script/ControlRig.RigUnit_InverseQuaterion
// Kind: ScriptStruct; super: RigUnit_UnaryQuaternionOp
struct FRigUnit_InverseQuaterion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_InverseQuaterion, Argument) == 16, "Offset mismatch for FRigUnit_InverseQuaterion::Argument");
static_assert(offsetof(FRigUnit_InverseQuaterion, Result) == 48, "Offset mismatch for FRigUnit_InverseQuaterion::Result");

// /Script/ControlRig.RigUnit_IsInteracting
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_IsInteracting
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsInteracting; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTranslating; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRotating; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScaling; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_IsInteracting, bIsInteracting) == 8, "Offset mismatch for FRigUnit_IsInteracting::bIsInteracting");
static_assert(offsetof(FRigUnit_IsInteracting, bIsTranslating) == 9, "Offset mismatch for FRigUnit_IsInteracting::bIsTranslating");
static_assert(offsetof(FRigUnit_IsInteracting, bIsRotating) == 10, "Offset mismatch for FRigUnit_IsInteracting::bIsRotating");
static_assert(offsetof(FRigUnit_IsInteracting, bIsScaling) == 11, "Offset mismatch for FRigUnit_IsInteracting::bIsScaling");
static_assert(offsetof(FRigUnit_IsInteracting, Items) == 16, "Offset mismatch for FRigUnit_IsInteracting::Items");

// /Script/ControlRig.RigUnit_IsItemInCurrentModule
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_IsItemInCurrentModule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_IsItemInCurrentModule, Item) == 8, "Offset mismatch for FRigUnit_IsItemInCurrentModule::Item");
static_assert(offsetof(FRigUnit_IsItemInCurrentModule, Result) == 16, "Offset mismatch for FRigUnit_IsItemInCurrentModule::Result");

// /Script/ControlRig.RigUnit_IsItemInCurrentNameSpace
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_IsItemInCurrentNameSpace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_IsItemInCurrentNameSpace, Item) == 8, "Offset mismatch for FRigUnit_IsItemInCurrentNameSpace::Item");
static_assert(offsetof(FRigUnit_IsItemInCurrentNameSpace, Result) == 16, "Offset mismatch for FRigUnit_IsItemInCurrentNameSpace::Result");

// /Script/ControlRig.RigUnit_Item
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_Item
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Item, Item) == 8, "Offset mismatch for FRigUnit_Item::Item");

// /Script/ControlRig.RigUnit_ItemArray
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Items; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ItemArray, Items) == 8, "Offset mismatch for FRigUnit_ItemArray::Items");

// /Script/ControlRig.RigUnit_ItemBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ItemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_ItemBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_ItemBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ItemBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_ItemBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_ItemEquals
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemEquals
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ItemEquals, A) == 8, "Offset mismatch for FRigUnit_ItemEquals::A");
static_assert(offsetof(FRigUnit_ItemEquals, B) == 16, "Offset mismatch for FRigUnit_ItemEquals::B");
static_assert(offsetof(FRigUnit_ItemEquals, Result) == 24, "Offset mismatch for FRigUnit_ItemEquals::Result");

// /Script/ControlRig.RigUnit_ItemExists
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Exists; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t CachedIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ItemExists, Item) == 8, "Offset mismatch for FRigUnit_ItemExists::Item");
static_assert(offsetof(FRigUnit_ItemExists, Exists) == 16, "Offset mismatch for FRigUnit_ItemExists::Exists");
static_assert(offsetof(FRigUnit_ItemExists, CachedIndex) == 24, "Offset mismatch for FRigUnit_ItemExists::CachedIndex");

// /Script/ControlRig.RigUnit_ItemHarmonics
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ItemHarmonics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Targets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WaveSpeed[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveFrequency[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveAmplitude[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveOffset[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveNoise[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaveEase; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    float WaveMinimum; // 0x009C (Size: 0x4, Type: FloatProperty)
    float WaveMaximum; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationOrder; // 0x00A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A5
    std::uint8_t WorkData[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ItemHarmonics, Targets) == 16, "Offset mismatch for FRigUnit_ItemHarmonics::Targets");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveSpeed) == 32, "Offset mismatch for FRigUnit_ItemHarmonics::WaveSpeed");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveFrequency) == 56, "Offset mismatch for FRigUnit_ItemHarmonics::WaveFrequency");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveAmplitude) == 80, "Offset mismatch for FRigUnit_ItemHarmonics::WaveAmplitude");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveOffset) == 104, "Offset mismatch for FRigUnit_ItemHarmonics::WaveOffset");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveNoise) == 128, "Offset mismatch for FRigUnit_ItemHarmonics::WaveNoise");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveEase) == 152, "Offset mismatch for FRigUnit_ItemHarmonics::WaveEase");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveMinimum) == 156, "Offset mismatch for FRigUnit_ItemHarmonics::WaveMinimum");
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveMaximum) == 160, "Offset mismatch for FRigUnit_ItemHarmonics::WaveMaximum");
static_assert(offsetof(FRigUnit_ItemHarmonics, RotationOrder) == 164, "Offset mismatch for FRigUnit_ItemHarmonics::RotationOrder");
static_assert(offsetof(FRigUnit_ItemHarmonics, WorkData) == 168, "Offset mismatch for FRigUnit_ItemHarmonics::WorkData");

// /Script/ControlRig.RigUnit_ItemNotEquals
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemNotEquals
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ItemNotEquals, A) == 8, "Offset mismatch for FRigUnit_ItemNotEquals::A");
static_assert(offsetof(FRigUnit_ItemNotEquals, B) == 16, "Offset mismatch for FRigUnit_ItemNotEquals::B");
static_assert(offsetof(FRigUnit_ItemNotEquals, Result) == 24, "Offset mismatch for FRigUnit_ItemNotEquals::Result");

// /Script/ControlRig.RigUnit_ItemReplace
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemReplace
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Old[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t New[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Result[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ItemReplace, Item) == 8, "Offset mismatch for FRigUnit_ItemReplace::Item");
static_assert(offsetof(FRigUnit_ItemReplace, Old) == 16, "Offset mismatch for FRigUnit_ItemReplace::Old");
static_assert(offsetof(FRigUnit_ItemReplace, New) == 20, "Offset mismatch for FRigUnit_ItemReplace::New");
static_assert(offsetof(FRigUnit_ItemReplace, Result) == 24, "Offset mismatch for FRigUnit_ItemReplace::Result");

// /Script/ControlRig.RigUnit_ItemToName
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemToName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FName Result; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_ItemToName, Value) == 8, "Offset mismatch for FRigUnit_ItemToName::Value");
static_assert(offsetof(FRigUnit_ItemToName, Result) == 16, "Offset mismatch for FRigUnit_ItemToName::Result");

// /Script/ControlRig.RigUnit_ItemTypeEquals
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemTypeEquals
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ItemTypeEquals, A) == 8, "Offset mismatch for FRigUnit_ItemTypeEquals::A");
static_assert(offsetof(FRigUnit_ItemTypeEquals, B) == 16, "Offset mismatch for FRigUnit_ItemTypeEquals::B");
static_assert(offsetof(FRigUnit_ItemTypeEquals, Result) == 24, "Offset mismatch for FRigUnit_ItemTypeEquals::Result");

// /Script/ControlRig.RigUnit_ItemTypeNotEquals
// Kind: ScriptStruct; super: RigUnit_ItemBase
struct FRigUnit_ItemTypeNotEquals
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t B[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Result; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ItemTypeNotEquals, A) == 8, "Offset mismatch for FRigUnit_ItemTypeNotEquals::A");
static_assert(offsetof(FRigUnit_ItemTypeNotEquals, B) == 16, "Offset mismatch for FRigUnit_ItemTypeNotEquals::B");
static_assert(offsetof(FRigUnit_ItemTypeNotEquals, Result) == 24, "Offset mismatch for FRigUnit_ItemTypeNotEquals::Result");

// /Script/ControlRig.RigUnit_LineTraceByObjectTypes
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_LineTraceByObjectTypes
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    TArray<void*> ObjectTypes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHit; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    std::uint8_t HitLocation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, Start) == 8, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::Start");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, End) == 32, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::End");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, ObjectTypes) == 56, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::ObjectTypes");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, bHit) == 72, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::bHit");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, HitLocation) == 80, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::HitLocation");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, HitNormal) == 104, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::HitNormal");
static_assert(offsetof(FRigUnit_LineTraceByObjectTypes, WorkData) == 128, "Offset mismatch for FRigUnit_LineTraceByObjectTypes::WorkData");

// /Script/ControlRig.RigUnit_LineTraceByProfile
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_LineTraceByProfile
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t ProfileName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t bHit; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::uint8_t HitLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LineTraceByProfile, Start) == 8, "Offset mismatch for FRigUnit_LineTraceByProfile::Start");
static_assert(offsetof(FRigUnit_LineTraceByProfile, End) == 32, "Offset mismatch for FRigUnit_LineTraceByProfile::End");
static_assert(offsetof(FRigUnit_LineTraceByProfile, ProfileName) == 56, "Offset mismatch for FRigUnit_LineTraceByProfile::ProfileName");
static_assert(offsetof(FRigUnit_LineTraceByProfile, bHit) == 60, "Offset mismatch for FRigUnit_LineTraceByProfile::bHit");
static_assert(offsetof(FRigUnit_LineTraceByProfile, HitLocation) == 64, "Offset mismatch for FRigUnit_LineTraceByProfile::HitLocation");
static_assert(offsetof(FRigUnit_LineTraceByProfile, HitNormal) == 88, "Offset mismatch for FRigUnit_LineTraceByProfile::HitNormal");
static_assert(offsetof(FRigUnit_LineTraceByProfile, WorkData) == 112, "Offset mismatch for FRigUnit_LineTraceByProfile::WorkData");

// /Script/ControlRig.RigUnit_LineTraceByTraceChannel
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_LineTraceByTraceChannel
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHit; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    std::uint8_t HitLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, Start) == 8, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::Start");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, End) == 32, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::End");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, TraceChannel) == 56, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::TraceChannel");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, bHit) == 57, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::bHit");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, HitLocation) == 64, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::HitLocation");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, HitNormal) == 88, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::HitNormal");
static_assert(offsetof(FRigUnit_LineTraceByTraceChannel, WorkData) == 112, "Offset mismatch for FRigUnit_LineTraceByTraceChannel::WorkData");

// /Script/ControlRig.RigUnit_MapRange_Float
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_MapRange_Float
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinIn; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxIn; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinOut; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxOut; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Result; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_MapRange_Float, Value) == 8, "Offset mismatch for FRigUnit_MapRange_Float::Value");
static_assert(offsetof(FRigUnit_MapRange_Float, MinIn) == 12, "Offset mismatch for FRigUnit_MapRange_Float::MinIn");
static_assert(offsetof(FRigUnit_MapRange_Float, MaxIn) == 16, "Offset mismatch for FRigUnit_MapRange_Float::MaxIn");
static_assert(offsetof(FRigUnit_MapRange_Float, MinOut) == 20, "Offset mismatch for FRigUnit_MapRange_Float::MinOut");
static_assert(offsetof(FRigUnit_MapRange_Float, MaxOut) == 24, "Offset mismatch for FRigUnit_MapRange_Float::MaxOut");
static_assert(offsetof(FRigUnit_MapRange_Float, Result) == 28, "Offset mismatch for FRigUnit_MapRange_Float::Result");

// /Script/ControlRig.RigUnit_ModifyBoneTransforms
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ModifyBoneTransforms
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BoneToModify; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float WeightMinimum; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float WeightMaximum; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t WorkData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ModifyBoneTransforms, BoneToModify) == 16, "Offset mismatch for FRigUnit_ModifyBoneTransforms::BoneToModify");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, Weight) == 32, "Offset mismatch for FRigUnit_ModifyBoneTransforms::Weight");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WeightMinimum) == 36, "Offset mismatch for FRigUnit_ModifyBoneTransforms::WeightMinimum");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WeightMaximum) == 40, "Offset mismatch for FRigUnit_ModifyBoneTransforms::WeightMaximum");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, Mode) == 44, "Offset mismatch for FRigUnit_ModifyBoneTransforms::Mode");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WorkData) == 48, "Offset mismatch for FRigUnit_ModifyBoneTransforms::WorkData");

// /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
// Kind: ScriptStruct; super: none
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
    FName bone; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, bone) == 0, "Offset mismatch for FRigUnit_ModifyBoneTransforms_PerBone::bone");
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Transform) == 16, "Offset mismatch for FRigUnit_ModifyBoneTransforms_PerBone::Transform");

// /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
// Kind: ScriptStruct; super: RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData
{
public:
    TArray<void*> CachedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ModifyBoneTransforms_WorkData, CachedItems) == 0, "Offset mismatch for FRigUnit_ModifyBoneTransforms_WorkData::CachedItems");

// /Script/ControlRig.RigUnit_ModifyTransforms
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ModifyTransforms
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> ItemToModify; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float WeightMinimum; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float WeightMaximum; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t WorkData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ModifyTransforms, ItemToModify) == 16, "Offset mismatch for FRigUnit_ModifyTransforms::ItemToModify");
static_assert(offsetof(FRigUnit_ModifyTransforms, Weight) == 32, "Offset mismatch for FRigUnit_ModifyTransforms::Weight");
static_assert(offsetof(FRigUnit_ModifyTransforms, WeightMinimum) == 36, "Offset mismatch for FRigUnit_ModifyTransforms::WeightMinimum");
static_assert(offsetof(FRigUnit_ModifyTransforms, WeightMaximum) == 40, "Offset mismatch for FRigUnit_ModifyTransforms::WeightMaximum");
static_assert(offsetof(FRigUnit_ModifyTransforms, Mode) == 44, "Offset mismatch for FRigUnit_ModifyTransforms::Mode");
static_assert(offsetof(FRigUnit_ModifyTransforms, WorkData) == 48, "Offset mismatch for FRigUnit_ModifyTransforms::WorkData");

// /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
// Kind: ScriptStruct; super: none
struct FRigUnit_ModifyTransforms_PerItem
{
public:
    std::uint8_t Item[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Item) == 0, "Offset mismatch for FRigUnit_ModifyTransforms_PerItem::Item");
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Transform) == 16, "Offset mismatch for FRigUnit_ModifyTransforms_PerItem::Transform");

// /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_ModifyTransforms_WorkData
{
public:
    TArray<void*> CachedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ModifyTransforms_WorkData, CachedItems) == 0, "Offset mismatch for FRigUnit_ModifyTransforms_WorkData::CachedItems");

// /Script/ControlRig.RigUnit_MultiFABRIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_MultiFABRIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName RootBone; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> Effectors; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float Precision; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t MaxIterations; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    std::uint8_t WorkData[0x68]; // 0x0038 (Size: 0x68, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_MultiFABRIK, RootBone) == 16, "Offset mismatch for FRigUnit_MultiFABRIK::RootBone");
static_assert(offsetof(FRigUnit_MultiFABRIK, Effectors) == 24, "Offset mismatch for FRigUnit_MultiFABRIK::Effectors");
static_assert(offsetof(FRigUnit_MultiFABRIK, Precision) == 40, "Offset mismatch for FRigUnit_MultiFABRIK::Precision");
static_assert(offsetof(FRigUnit_MultiFABRIK, bPropagateToChildren) == 44, "Offset mismatch for FRigUnit_MultiFABRIK::bPropagateToChildren");
static_assert(offsetof(FRigUnit_MultiFABRIK, MaxIterations) == 48, "Offset mismatch for FRigUnit_MultiFABRIK::MaxIterations");
static_assert(offsetof(FRigUnit_MultiFABRIK, WorkData) == 56, "Offset mismatch for FRigUnit_MultiFABRIK::WorkData");
static_assert(offsetof(FRigUnit_MultiFABRIK, bIsInitialized) == 160, "Offset mismatch for FRigUnit_MultiFABRIK::bIsInitialized");

// /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
// Kind: ScriptStruct; super: none
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
    FName bone; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, bone) == 0, "Offset mismatch for FRigUnit_MultiFABRIK_EndEffector::bone");
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Location) == 8, "Offset mismatch for FRigUnit_MultiFABRIK_EndEffector::Location");

// /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_MultiFABRIK_WorkData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_MultiplyQuaternion
// Kind: ScriptStruct; super: RigUnit_BinaryQuaternionOp
struct FRigUnit_MultiplyQuaternion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument0[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Argument1[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MultiplyQuaternion, Argument0) == 16, "Offset mismatch for FRigUnit_MultiplyQuaternion::Argument0");
static_assert(offsetof(FRigUnit_MultiplyQuaternion, Argument1) == 48, "Offset mismatch for FRigUnit_MultiplyQuaternion::Argument1");
static_assert(offsetof(FRigUnit_MultiplyQuaternion, Result) == 80, "Offset mismatch for FRigUnit_MultiplyQuaternion::Result");

// /Script/ControlRig.RigUnit_MultiplyTransform
// Kind: ScriptStruct; super: RigUnit_BinaryTransformOp
struct FRigUnit_MultiplyTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument0[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Argument1[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_MultiplyTransform, Argument0) == 16, "Offset mismatch for FRigUnit_MultiplyTransform::Argument0");
static_assert(offsetof(FRigUnit_MultiplyTransform, Argument1) == 112, "Offset mismatch for FRigUnit_MultiplyTransform::Argument1");
static_assert(offsetof(FRigUnit_MultiplyTransform, Result) == 208, "Offset mismatch for FRigUnit_MultiplyTransform::Result");

// /Script/ControlRig.RigUnit_Multiply_FloatFloat
// Kind: ScriptStruct; super: RigUnit_BinaryFloatOp
struct FRigUnit_Multiply_FloatFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Argument0; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Argument1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Multiply_FloatFloat, Argument0) == 8, "Offset mismatch for FRigUnit_Multiply_FloatFloat::Argument0");
static_assert(offsetof(FRigUnit_Multiply_FloatFloat, Argument1) == 12, "Offset mismatch for FRigUnit_Multiply_FloatFloat::Argument1");
static_assert(offsetof(FRigUnit_Multiply_FloatFloat, Result) == 16, "Offset mismatch for FRigUnit_Multiply_FloatFloat::Result");

// /Script/ControlRig.RigUnit_Multiply_VectorVector
// Kind: ScriptStruct; super: RigUnit_BinaryVectorOp
struct FRigUnit_Multiply_VectorVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Multiply_VectorVector, Argument0) == 8, "Offset mismatch for FRigUnit_Multiply_VectorVector::Argument0");
static_assert(offsetof(FRigUnit_Multiply_VectorVector, Argument1) == 32, "Offset mismatch for FRigUnit_Multiply_VectorVector::Argument1");
static_assert(offsetof(FRigUnit_Multiply_VectorVector, Result) == 56, "Offset mismatch for FRigUnit_Multiply_VectorVector::Result");

// /Script/ControlRig.RigUnit_OffsetTransformForItem
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_OffsetTransformForItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t OffsetTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0085
    std::uint8_t CachedIndex[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_OffsetTransformForItem, Item) == 16, "Offset mismatch for FRigUnit_OffsetTransformForItem::Item");
static_assert(offsetof(FRigUnit_OffsetTransformForItem, OffsetTransform) == 32, "Offset mismatch for FRigUnit_OffsetTransformForItem::OffsetTransform");
static_assert(offsetof(FRigUnit_OffsetTransformForItem, Weight) == 128, "Offset mismatch for FRigUnit_OffsetTransformForItem::Weight");
static_assert(offsetof(FRigUnit_OffsetTransformForItem, bPropagateToChildren) == 132, "Offset mismatch for FRigUnit_OffsetTransformForItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_OffsetTransformForItem, CachedIndex) == 136, "Offset mismatch for FRigUnit_OffsetTransformForItem::CachedIndex");

// /Script/ControlRig.RigUnit_ParentConstraint
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ParentConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0xF]; // 0x0019 (Size: 0xF, Type: StructProperty)
    TArray<void*> Parents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AdvancedSettings[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    float Weight; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChildCache[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ParentConstraint, Child) == 16, "Offset mismatch for FRigUnit_ParentConstraint::Child");
static_assert(offsetof(FRigUnit_ParentConstraint, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_ParentConstraint::bMaintainOffset");
static_assert(offsetof(FRigUnit_ParentConstraint, Filter) == 25, "Offset mismatch for FRigUnit_ParentConstraint::Filter");
static_assert(offsetof(FRigUnit_ParentConstraint, Parents) == 40, "Offset mismatch for FRigUnit_ParentConstraint::Parents");
static_assert(offsetof(FRigUnit_ParentConstraint, AdvancedSettings) == 56, "Offset mismatch for FRigUnit_ParentConstraint::AdvancedSettings");
static_assert(offsetof(FRigUnit_ParentConstraint, Weight) == 60, "Offset mismatch for FRigUnit_ParentConstraint::Weight");
static_assert(offsetof(FRigUnit_ParentConstraint, ChildCache) == 64, "Offset mismatch for FRigUnit_ParentConstraint::ChildCache");
static_assert(offsetof(FRigUnit_ParentConstraint, ParentCaches) == 88, "Offset mismatch for FRigUnit_ParentConstraint::ParentCaches");

// /Script/ControlRig.RigUnit_ParentConstraintMath
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FRigUnit_ParentConstraintMath
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> Parents; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AdvancedSettings[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t Output[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ParentConstraintMath, Input) == 16, "Offset mismatch for FRigUnit_ParentConstraintMath::Input");
static_assert(offsetof(FRigUnit_ParentConstraintMath, Parents) == 112, "Offset mismatch for FRigUnit_ParentConstraintMath::Parents");
static_assert(offsetof(FRigUnit_ParentConstraintMath, AdvancedSettings) == 128, "Offset mismatch for FRigUnit_ParentConstraintMath::AdvancedSettings");
static_assert(offsetof(FRigUnit_ParentConstraintMath, Output) == 144, "Offset mismatch for FRigUnit_ParentConstraintMath::Output");
static_assert(offsetof(FRigUnit_ParentConstraintMath, ParentCaches) == 240, "Offset mismatch for FRigUnit_ParentConstraintMath::ParentCaches");

// /Script/ControlRig.RigUnit_ParentConstraintMath_AdvancedSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_ParentConstraintMath_AdvancedSettings
{
public:
    std::uint8_t InterpolationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_ParentConstraintMath_AdvancedSettings, InterpolationType) == 0, "Offset mismatch for FRigUnit_ParentConstraintMath_AdvancedSettings::InterpolationType");

// /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_ParentConstraint_AdvancedSettings
{
public:
    std::uint8_t InterpolationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationOrderForFilter; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_ParentConstraint_AdvancedSettings, InterpolationType) == 0, "Offset mismatch for FRigUnit_ParentConstraint_AdvancedSettings::InterpolationType");
static_assert(offsetof(FRigUnit_ParentConstraint_AdvancedSettings, RotationOrderForFilter) == 1, "Offset mismatch for FRigUnit_ParentConstraint_AdvancedSettings::RotationOrderForFilter");

// /Script/ControlRig.RigUnit_ParentSwitchConstraint
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_ParentSwitchConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Subject[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::int32_t ParentIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Parents[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t InitialGlobalTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0094
    std::uint8_t Transform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Switched; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0101
    std::uint8_t CachedSubject[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x20]; // 0x0120 (Size: 0x20, Type: StructProperty)
    std::uint8_t RelativeOffset[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Subject) == 16, "Offset mismatch for FRigUnit_ParentSwitchConstraint::Subject");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, ParentIndex) == 24, "Offset mismatch for FRigUnit_ParentSwitchConstraint::ParentIndex");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Parents) == 32, "Offset mismatch for FRigUnit_ParentSwitchConstraint::Parents");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform) == 48, "Offset mismatch for FRigUnit_ParentSwitchConstraint::InitialGlobalTransform");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Weight) == 144, "Offset mismatch for FRigUnit_ParentSwitchConstraint::Weight");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Transform) == 160, "Offset mismatch for FRigUnit_ParentSwitchConstraint::Transform");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Switched) == 256, "Offset mismatch for FRigUnit_ParentSwitchConstraint::Switched");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedSubject) == 264, "Offset mismatch for FRigUnit_ParentSwitchConstraint::CachedSubject");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedParent) == 288, "Offset mismatch for FRigUnit_ParentSwitchConstraint::CachedParent");
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, RelativeOffset) == 320, "Offset mismatch for FRigUnit_ParentSwitchConstraint::RelativeOffset");

// /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_ParentSwitchConstraintArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Subject[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::int32_t ParentIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitialGlobalTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0094
    std::uint8_t Transform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Switched; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0101
    std::uint8_t CachedSubject[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x20]; // 0x0120 (Size: 0x20, Type: StructProperty)
    std::uint8_t RelativeOffset[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Subject) == 16, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::Subject");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, ParentIndex) == 24, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::ParentIndex");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Parents) == 32, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::Parents");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, InitialGlobalTransform) == 48, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::InitialGlobalTransform");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Weight) == 144, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::Weight");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Transform) == 160, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::Transform");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Switched) == 256, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::Switched");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, CachedSubject) == 264, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::CachedSubject");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, CachedParent) == 288, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::CachedParent");
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, RelativeOffset) == 320, "Offset mismatch for FRigUnit_ParentSwitchConstraintArray::RelativeOffset");

// /Script/ControlRig.RigUnit_PointSimulation
// Kind: ScriptStruct; super: RigVMFunction_SimBaseMutable
struct FRigUnit_PointSimulation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Points; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Links; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Forces; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionVolumes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    float SimulatedStepsPerSecond; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IntegratorType; // 0x0054 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    float VerletBlend; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x005C
    TArray<void*> BoneTargets; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLimitLocalPosition; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0072
    std::uint8_t PrimaryAimAxis[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAimAxis[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t DebugSettings[0x80]; // 0x00B0 (Size: 0x80, Type: StructProperty)
    std::uint8_t Bezier[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PointSimulation, Points) == 16, "Offset mismatch for FRigUnit_PointSimulation::Points");
static_assert(offsetof(FRigUnit_PointSimulation, Links) == 32, "Offset mismatch for FRigUnit_PointSimulation::Links");
static_assert(offsetof(FRigUnit_PointSimulation, Forces) == 48, "Offset mismatch for FRigUnit_PointSimulation::Forces");
static_assert(offsetof(FRigUnit_PointSimulation, CollisionVolumes) == 64, "Offset mismatch for FRigUnit_PointSimulation::CollisionVolumes");
static_assert(offsetof(FRigUnit_PointSimulation, SimulatedStepsPerSecond) == 80, "Offset mismatch for FRigUnit_PointSimulation::SimulatedStepsPerSecond");
static_assert(offsetof(FRigUnit_PointSimulation, IntegratorType) == 84, "Offset mismatch for FRigUnit_PointSimulation::IntegratorType");
static_assert(offsetof(FRigUnit_PointSimulation, VerletBlend) == 88, "Offset mismatch for FRigUnit_PointSimulation::VerletBlend");
static_assert(offsetof(FRigUnit_PointSimulation, BoneTargets) == 96, "Offset mismatch for FRigUnit_PointSimulation::BoneTargets");
static_assert(offsetof(FRigUnit_PointSimulation, bLimitLocalPosition) == 112, "Offset mismatch for FRigUnit_PointSimulation::bLimitLocalPosition");
static_assert(offsetof(FRigUnit_PointSimulation, bPropagateToChildren) == 113, "Offset mismatch for FRigUnit_PointSimulation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_PointSimulation, PrimaryAimAxis) == 120, "Offset mismatch for FRigUnit_PointSimulation::PrimaryAimAxis");
static_assert(offsetof(FRigUnit_PointSimulation, SecondaryAimAxis) == 144, "Offset mismatch for FRigUnit_PointSimulation::SecondaryAimAxis");
static_assert(offsetof(FRigUnit_PointSimulation, DebugSettings) == 176, "Offset mismatch for FRigUnit_PointSimulation::DebugSettings");
static_assert(offsetof(FRigUnit_PointSimulation, Bezier) == 304, "Offset mismatch for FRigUnit_PointSimulation::Bezier");
static_assert(offsetof(FRigUnit_PointSimulation, WorkData) == 400, "Offset mismatch for FRigUnit_PointSimulation::WorkData");

// /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
// Kind: ScriptStruct; super: none
struct FRigUnit_PointSimulation_BoneTarget
{
public:
    std::uint8_t bone[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t TranslationPoint; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t PrimaryAimPoint; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t SecondaryAimPoint; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, bone) == 0, "Offset mismatch for FRigUnit_PointSimulation_BoneTarget::bone");
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, TranslationPoint) == 4, "Offset mismatch for FRigUnit_PointSimulation_BoneTarget::TranslationPoint");
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, PrimaryAimPoint) == 8, "Offset mismatch for FRigUnit_PointSimulation_BoneTarget::PrimaryAimPoint");
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, SecondaryAimPoint) == 12, "Offset mismatch for FRigUnit_PointSimulation_BoneTarget::SecondaryAimPoint");

// /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_PointSimulation_DebugSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CollisionScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDrawPointsAsSpheres; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t Color[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorldOffset[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, bEnabled) == 0, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::bEnabled");
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Scale) == 4, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::Scale");
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, CollisionScale) == 8, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::CollisionScale");
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, bDrawPointsAsSpheres) == 12, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::bDrawPointsAsSpheres");
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Color) == 16, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::Color");
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, WorldOffset) == 32, "Offset mismatch for FRigUnit_PointSimulation_DebugSettings::WorldOffset");

// /Script/ControlRig.RigUnit_PointSimulation_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_PointSimulation_WorkData
{
public:
    std::uint8_t Simulation[0x78]; // 0x0000 (Size: 0x78, Type: StructProperty)
    TArray<void*> BoneIndices; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_PointSimulation_WorkData, Simulation) == 0, "Offset mismatch for FRigUnit_PointSimulation_WorkData::Simulation");
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, BoneIndices) == 120, "Offset mismatch for FRigUnit_PointSimulation_WorkData::BoneIndices");

// /Script/ControlRig.RigUnit_PoseAssetApplyAllPoses
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetApplyAllPoses
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecutePin[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Items; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ApplyTransforms; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ApplyCurves; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Success; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> ActivePoses; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GetActivePosesWorkData[0x78]; // 0x0040 (Size: 0x78, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, ExecutePin) == 16, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::ExecutePin");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, Items) == 24, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::Items");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, ApplyTransforms) == 40, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::ApplyTransforms");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, ApplyCurves) == 41, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::ApplyCurves");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, bPropagateToChildren) == 42, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::bPropagateToChildren");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, Success) == 43, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::Success");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, ActivePoses) == 48, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::ActivePoses");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, GetActivePosesWorkData) == 64, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::GetActivePosesWorkData");
static_assert(offsetof(FRigUnit_PoseAssetApplyAllPoses, WorkData) == 184, "Offset mismatch for FRigUnit_PoseAssetApplyAllPoses::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetApplyMultiplePoses
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetApplyMultiplePoses
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecutePin[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Poses; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Items; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ApplyTransforms; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ApplyCurves; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Success; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t WorkData[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, ExecutePin) == 16, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::ExecutePin");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, Poses) == 24, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::Poses");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, Items) == 40, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::Items");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, ApplyTransforms) == 56, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::ApplyTransforms");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, ApplyCurves) == 57, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::ApplyCurves");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, bPropagateToChildren) == 58, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::bPropagateToChildren");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, Success) == 59, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::Success");
static_assert(offsetof(FRigUnit_PoseAssetApplyMultiplePoses, WorkData) == 64, "Offset mismatch for FRigUnit_PoseAssetApplyMultiplePoses::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PoseAssetBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PoseAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetBase, PoseAsset) == 8, "Offset mismatch for FRigUnit_PoseAssetBase::PoseAsset");

// /Script/ControlRig.RigUnit_PoseAssetContainsPose
// Kind: ScriptStruct; super: RigUnit_PoseAssetGetter
struct FRigUnit_PoseAssetContainsPose
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t Result; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetContainsPose, Result) == 144, "Offset mismatch for FRigUnit_PoseAssetContainsPose::Result");

// /Script/ControlRig.RigUnit_PoseAssetGetActivePoses
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetActivePoses
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActivePoses; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorkData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetActivePoses, Items) == 16, "Offset mismatch for FRigUnit_PoseAssetGetActivePoses::Items");
static_assert(offsetof(FRigUnit_PoseAssetGetActivePoses, ActivePoses) == 32, "Offset mismatch for FRigUnit_PoseAssetGetActivePoses::ActivePoses");
static_assert(offsetof(FRigUnit_PoseAssetGetActivePoses, WorkData) == 48, "Offset mismatch for FRigUnit_PoseAssetGetActivePoses::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetGetBoneIndex
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetBoneIndex
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t Index; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Success; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::int32_t LastBoneIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetBoneIndex, BoneName) == 16, "Offset mismatch for FRigUnit_PoseAssetGetBoneIndex::BoneName");
static_assert(offsetof(FRigUnit_PoseAssetGetBoneIndex, Index) == 20, "Offset mismatch for FRigUnit_PoseAssetGetBoneIndex::Index");
static_assert(offsetof(FRigUnit_PoseAssetGetBoneIndex, Success) == 24, "Offset mismatch for FRigUnit_PoseAssetGetBoneIndex::Success");
static_assert(offsetof(FRigUnit_PoseAssetGetBoneIndex, LastBoneIndex) == 28, "Offset mismatch for FRigUnit_PoseAssetGetBoneIndex::LastBoneIndex");

// /Script/ControlRig.RigUnit_PoseAssetGetBoneNames
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetBoneNames
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> BoneNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Success; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetBoneNames, BoneNames) == 16, "Offset mismatch for FRigUnit_PoseAssetGetBoneNames::BoneNames");
static_assert(offsetof(FRigUnit_PoseAssetGetBoneNames, Success) == 32, "Offset mismatch for FRigUnit_PoseAssetGetBoneNames::Success");

// /Script/ControlRig.RigUnit_PoseAssetGetCurveNames
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetCurveNames
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> CurveNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Success; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetCurveNames, CurveNames) == 16, "Offset mismatch for FRigUnit_PoseAssetGetCurveNames::CurveNames");
static_assert(offsetof(FRigUnit_PoseAssetGetCurveNames, Success) == 32, "Offset mismatch for FRigUnit_PoseAssetGetCurveNames::Success");

// /Script/ControlRig.RigUnit_PoseAssetGetInfluences
// Kind: ScriptStruct; super: RigUnit_PoseAssetGetter
struct FRigUnit_PoseAssetGetInfluences
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Items; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bones; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Curves; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Success; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetInfluences, Items) == 144, "Offset mismatch for FRigUnit_PoseAssetGetInfluences::Items");
static_assert(offsetof(FRigUnit_PoseAssetGetInfluences, Bones) == 160, "Offset mismatch for FRigUnit_PoseAssetGetInfluences::Bones");
static_assert(offsetof(FRigUnit_PoseAssetGetInfluences, Curves) == 176, "Offset mismatch for FRigUnit_PoseAssetGetInfluences::Curves");
static_assert(offsetof(FRigUnit_PoseAssetGetInfluences, Success) == 192, "Offset mismatch for FRigUnit_PoseAssetGetInfluences::Success");

// /Script/ControlRig.RigUnit_PoseAssetGetPoseForItems
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetPoseForItems
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Poses; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Items; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> Bones; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LocalTransforms; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Curves; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveValues; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Success; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t WorkData[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Poses) == 16, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Poses");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Items) == 32, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Items");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Mode) == 48, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Mode");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Bones) == 56, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Bones");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, LocalTransforms) == 72, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::LocalTransforms");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Curves) == 88, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Curves");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, CurveValues) == 104, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::CurveValues");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, Success) == 120, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::Success");
static_assert(offsetof(FRigUnit_PoseAssetGetPoseForItems, WorkData) == 128, "Offset mismatch for FRigUnit_PoseAssetGetPoseForItems::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetGetPoseNames
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetPoseNames
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> PoseNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetPoseNames, PoseNames) == 16, "Offset mismatch for FRigUnit_PoseAssetGetPoseNames::PoseNames");

// /Script/ControlRig.RigUnit_PoseAssetGetRigPose
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetRigPose
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Poses; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Items; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t RigPose[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t Success; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0069
    std::uint8_t WorkData[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, Poses) == 16, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::Poses");
static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, Items) == 32, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::Items");
static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, Mode) == 48, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::Mode");
static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, RigPose) == 56, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::RigPose");
static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, Success) == 104, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::Success");
static_assert(offsetof(FRigUnit_PoseAssetGetRigPose, WorkData) == 112, "Offset mismatch for FRigUnit_PoseAssetGetRigPose::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetGetter
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetGetter
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName PoseName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t WorkData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetGetter, PoseName) == 16, "Offset mismatch for FRigUnit_PoseAssetGetter::PoseName");
static_assert(offsetof(FRigUnit_PoseAssetGetter, WorkData) == 24, "Offset mismatch for FRigUnit_PoseAssetGetter::WorkData");

// /Script/ControlRig.RigUnit_PoseAssetHasRootMotion
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetHasRootMotion
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetHasRootMotion, Result) == 16, "Offset mismatch for FRigUnit_PoseAssetHasRootMotion::Result");

// /Script/ControlRig.RigUnit_PoseAssetIsAdditive
// Kind: ScriptStruct; super: RigUnit_PoseAssetBase
struct FRigUnit_PoseAssetIsAdditive
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Result; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    FName BasePoseName; // 0x0014 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_PoseAssetIsAdditive, Result) == 16, "Offset mismatch for FRigUnit_PoseAssetIsAdditive::Result");
static_assert(offsetof(FRigUnit_PoseAssetIsAdditive, BasePoseName) == 20, "Offset mismatch for FRigUnit_PoseAssetIsAdditive::BasePoseName");

// /Script/ControlRig.RigUnit_PoseAsset_PoseInfo
// Kind: ScriptStruct; super: none
struct FRigUnit_PoseAsset_PoseInfo
{
public:
    FName PoseName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t UseWeightFromCurve; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float Weight; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_PoseAsset_PoseInfo, PoseName) == 0, "Offset mismatch for FRigUnit_PoseAsset_PoseInfo::PoseName");
static_assert(offsetof(FRigUnit_PoseAsset_PoseInfo, UseWeightFromCurve) == 8, "Offset mismatch for FRigUnit_PoseAsset_PoseInfo::UseWeightFromCurve");
static_assert(offsetof(FRigUnit_PoseAsset_PoseInfo, Weight) == 12, "Offset mismatch for FRigUnit_PoseAsset_PoseInfo::Weight");

// /Script/ControlRig.RigUnit_PoseAsset_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_PoseAsset_WorkData
{
public:
    std::int32_t LastPoseIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> BoneTransforms; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackIndexPerBone; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackIndexPerCurve; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedBoneItems; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedCurveItems; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t LastBoneHash; // 0x0068 (Size: 0x4, Type: UInt32Property)
    std::uint32_t LastCurveHash; // 0x006C (Size: 0x4, Type: UInt32Property)
    std::uint8_t bFilterByInfluences; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseAsset_WorkData, LastPoseIndex) == 0, "Offset mismatch for FRigUnit_PoseAsset_WorkData::LastPoseIndex");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, BoneTransforms) == 8, "Offset mismatch for FRigUnit_PoseAsset_WorkData::BoneTransforms");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, CurveValues) == 24, "Offset mismatch for FRigUnit_PoseAsset_WorkData::CurveValues");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, TrackIndexPerBone) == 40, "Offset mismatch for FRigUnit_PoseAsset_WorkData::TrackIndexPerBone");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, TrackIndexPerCurve) == 56, "Offset mismatch for FRigUnit_PoseAsset_WorkData::TrackIndexPerCurve");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, CachedBoneItems) == 72, "Offset mismatch for FRigUnit_PoseAsset_WorkData::CachedBoneItems");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, CachedCurveItems) == 88, "Offset mismatch for FRigUnit_PoseAsset_WorkData::CachedCurveItems");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, LastBoneHash) == 104, "Offset mismatch for FRigUnit_PoseAsset_WorkData::LastBoneHash");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, LastCurveHash) == 108, "Offset mismatch for FRigUnit_PoseAsset_WorkData::LastCurveHash");
static_assert(offsetof(FRigUnit_PoseAsset_WorkData, bFilterByInfluences) == 112, "Offset mismatch for FRigUnit_PoseAsset_WorkData::bFilterByInfluences");

// /Script/ControlRig.RigUnit_PoseGetCurve
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetCurve
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t Curve[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t Valid; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    float CurveValue; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t CachedPoseElementIndex; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t CachedPoseHash; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_PoseGetCurve, Pose) == 8, "Offset mismatch for FRigUnit_PoseGetCurve::Pose");
static_assert(offsetof(FRigUnit_PoseGetCurve, Curve) == 56, "Offset mismatch for FRigUnit_PoseGetCurve::Curve");
static_assert(offsetof(FRigUnit_PoseGetCurve, Valid) == 60, "Offset mismatch for FRigUnit_PoseGetCurve::Valid");
static_assert(offsetof(FRigUnit_PoseGetCurve, CurveValue) == 64, "Offset mismatch for FRigUnit_PoseGetCurve::CurveValue");
static_assert(offsetof(FRigUnit_PoseGetCurve, CachedPoseElementIndex) == 68, "Offset mismatch for FRigUnit_PoseGetCurve::CachedPoseElementIndex");
static_assert(offsetof(FRigUnit_PoseGetCurve, CachedPoseHash) == 72, "Offset mismatch for FRigUnit_PoseGetCurve::CachedPoseHash");

// /Script/ControlRig.RigUnit_PoseGetDelta
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetDelta
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PoseA[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t PoseB[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    float PositionThreshold; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float RotationThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    float ScaleThreshold; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float CurveThreshold; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ElementType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Space; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x007A
    std::uint8_t ItemsToCompare[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t PosesAreEqual; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0091
    std::uint8_t ItemsWithDelta[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseGetDelta, PoseA) == 8, "Offset mismatch for FRigUnit_PoseGetDelta::PoseA");
static_assert(offsetof(FRigUnit_PoseGetDelta, PoseB) == 56, "Offset mismatch for FRigUnit_PoseGetDelta::PoseB");
static_assert(offsetof(FRigUnit_PoseGetDelta, PositionThreshold) == 104, "Offset mismatch for FRigUnit_PoseGetDelta::PositionThreshold");
static_assert(offsetof(FRigUnit_PoseGetDelta, RotationThreshold) == 108, "Offset mismatch for FRigUnit_PoseGetDelta::RotationThreshold");
static_assert(offsetof(FRigUnit_PoseGetDelta, ScaleThreshold) == 112, "Offset mismatch for FRigUnit_PoseGetDelta::ScaleThreshold");
static_assert(offsetof(FRigUnit_PoseGetDelta, CurveThreshold) == 116, "Offset mismatch for FRigUnit_PoseGetDelta::CurveThreshold");
static_assert(offsetof(FRigUnit_PoseGetDelta, ElementType) == 120, "Offset mismatch for FRigUnit_PoseGetDelta::ElementType");
static_assert(offsetof(FRigUnit_PoseGetDelta, Space) == 121, "Offset mismatch for FRigUnit_PoseGetDelta::Space");
static_assert(offsetof(FRigUnit_PoseGetDelta, ItemsToCompare) == 128, "Offset mismatch for FRigUnit_PoseGetDelta::ItemsToCompare");
static_assert(offsetof(FRigUnit_PoseGetDelta, PosesAreEqual) == 144, "Offset mismatch for FRigUnit_PoseGetDelta::PosesAreEqual");
static_assert(offsetof(FRigUnit_PoseGetDelta, ItemsWithDelta) == 152, "Offset mismatch for FRigUnit_PoseGetDelta::ItemsWithDelta");

// /Script/ControlRig.RigUnit_PoseGetItems
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetItems
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t ElementType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t Items[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseGetItems, Pose) == 8, "Offset mismatch for FRigUnit_PoseGetItems::Pose");
static_assert(offsetof(FRigUnit_PoseGetItems, ElementType) == 56, "Offset mismatch for FRigUnit_PoseGetItems::ElementType");
static_assert(offsetof(FRigUnit_PoseGetItems, Items) == 64, "Offset mismatch for FRigUnit_PoseGetItems::Items");

// /Script/ControlRig.RigUnit_PoseGetItemsItemArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetItemsItemArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t ElementType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> Items; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, Pose) == 8, "Offset mismatch for FRigUnit_PoseGetItemsItemArray::Pose");
static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, ElementType) == 56, "Offset mismatch for FRigUnit_PoseGetItemsItemArray::ElementType");
static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, Items) == 64, "Offset mismatch for FRigUnit_PoseGetItemsItemArray::Items");

// /Script/ControlRig.RigUnit_PoseGetTransform
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t Item[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Valid; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xE]; // 0x0042
    std::uint8_t Transform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    float CurveValue; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::int32_t CachedPoseElementIndex; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t CachedPoseHash; // 0x00B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_PoseGetTransform, Pose) == 8, "Offset mismatch for FRigUnit_PoseGetTransform::Pose");
static_assert(offsetof(FRigUnit_PoseGetTransform, Item) == 56, "Offset mismatch for FRigUnit_PoseGetTransform::Item");
static_assert(offsetof(FRigUnit_PoseGetTransform, Space) == 64, "Offset mismatch for FRigUnit_PoseGetTransform::Space");
static_assert(offsetof(FRigUnit_PoseGetTransform, Valid) == 65, "Offset mismatch for FRigUnit_PoseGetTransform::Valid");
static_assert(offsetof(FRigUnit_PoseGetTransform, Transform) == 80, "Offset mismatch for FRigUnit_PoseGetTransform::Transform");
static_assert(offsetof(FRigUnit_PoseGetTransform, CurveValue) == 176, "Offset mismatch for FRigUnit_PoseGetTransform::CurveValue");
static_assert(offsetof(FRigUnit_PoseGetTransform, CachedPoseElementIndex) == 180, "Offset mismatch for FRigUnit_PoseGetTransform::CachedPoseElementIndex");
static_assert(offsetof(FRigUnit_PoseGetTransform, CachedPoseHash) == 184, "Offset mismatch for FRigUnit_PoseGetTransform::CachedPoseHash");

// /Script/ControlRig.RigUnit_PoseGetTransformArray
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseGetTransformArray
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t Space; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Valid; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x003A
    TArray<void*> Transforms; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_PoseGetTransformArray, Pose) == 8, "Offset mismatch for FRigUnit_PoseGetTransformArray::Pose");
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Space) == 56, "Offset mismatch for FRigUnit_PoseGetTransformArray::Space");
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Valid) == 57, "Offset mismatch for FRigUnit_PoseGetTransformArray::Valid");
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Transforms) == 64, "Offset mismatch for FRigUnit_PoseGetTransformArray::Transforms");

// /Script/ControlRig.RigUnit_PoseIsEmpty
// Kind: ScriptStruct; super: RigUnit_HierarchyBase
struct FRigUnit_PoseIsEmpty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Pose[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t IsEmpty; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_PoseIsEmpty, Pose) == 8, "Offset mismatch for FRigUnit_PoseIsEmpty::Pose");
static_assert(offsetof(FRigUnit_PoseIsEmpty, IsEmpty) == 56, "Offset mismatch for FRigUnit_PoseIsEmpty::IsEmpty");

// /Script/ControlRig.RigUnit_PoseLoop
// Kind: ScriptStruct; super: RigUnit_HierarchyBaseMutable
struct FRigUnit_PoseLoop
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName BlockToRun; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pose[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    std::uint8_t Item[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t GlobalTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    float CurveValue; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::int32_t Index; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t Count; // 0x0118 (Size: 0x4, Type: IntProperty)
    float Ratio; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Completed[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PoseLoop, BlockToRun) == 16, "Offset mismatch for FRigUnit_PoseLoop::BlockToRun");
static_assert(offsetof(FRigUnit_PoseLoop, Pose) == 24, "Offset mismatch for FRigUnit_PoseLoop::Pose");
static_assert(offsetof(FRigUnit_PoseLoop, Item) == 72, "Offset mismatch for FRigUnit_PoseLoop::Item");
static_assert(offsetof(FRigUnit_PoseLoop, GlobalTransform) == 80, "Offset mismatch for FRigUnit_PoseLoop::GlobalTransform");
static_assert(offsetof(FRigUnit_PoseLoop, LocalTransform) == 176, "Offset mismatch for FRigUnit_PoseLoop::LocalTransform");
static_assert(offsetof(FRigUnit_PoseLoop, CurveValue) == 272, "Offset mismatch for FRigUnit_PoseLoop::CurveValue");
static_assert(offsetof(FRigUnit_PoseLoop, Index) == 276, "Offset mismatch for FRigUnit_PoseLoop::Index");
static_assert(offsetof(FRigUnit_PoseLoop, Count) == 280, "Offset mismatch for FRigUnit_PoseLoop::Count");
static_assert(offsetof(FRigUnit_PoseLoop, Ratio) == 284, "Offset mismatch for FRigUnit_PoseLoop::Ratio");
static_assert(offsetof(FRigUnit_PoseLoop, Completed) == 288, "Offset mismatch for FRigUnit_PoseLoop::Completed");

// /Script/ControlRig.RigUnit_PositionConstraint
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_PositionConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_PositionConstraint, Child) == 16, "Offset mismatch for FRigUnit_PositionConstraint::Child");
static_assert(offsetof(FRigUnit_PositionConstraint, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_PositionConstraint::bMaintainOffset");
static_assert(offsetof(FRigUnit_PositionConstraint, Filter) == 25, "Offset mismatch for FRigUnit_PositionConstraint::Filter");
static_assert(offsetof(FRigUnit_PositionConstraint, Parents) == 32, "Offset mismatch for FRigUnit_PositionConstraint::Parents");
static_assert(offsetof(FRigUnit_PositionConstraint, Weight) == 48, "Offset mismatch for FRigUnit_PositionConstraint::Weight");

// /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_PositionConstraintLocalSpaceOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t ChildCache[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Child) == 16, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::Child");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::bMaintainOffset");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Filter) == 25, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::Filter");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Parents) == 32, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::Parents");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Weight) == 48, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::Weight");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, ChildCache) == 56, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::ChildCache");
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, ParentCaches) == 80, "Offset mismatch for FRigUnit_PositionConstraintLocalSpaceOffset::ParentCaches");

// /Script/ControlRig.RigUnit_PostBeginExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PostBeginExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PostBeginExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_PostBeginExecution::ExecutePin");

// /Script/ControlRig.RigUnit_PostPrepareForExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PostPrepareForExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PostPrepareForExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_PostPrepareForExecution::ExecutePin");

// /Script/ControlRig.RigUnit_PreBeginExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PreBeginExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PreBeginExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_PreBeginExecution::ExecutePin");

// /Script/ControlRig.RigUnit_PrepareForExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_PrepareForExecution
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PrepareForExecution, ExecutePin) == 8, "Offset mismatch for FRigUnit_PrepareForExecution::ExecutePin");

// /Script/ControlRig.RigUnit_ProjectTransformToNewParent
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ProjectTransformToNewParent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bChildInitial; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t OldParent[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t bOldParentInitial; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    std::uint8_t NewParent[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t bNewParentInitial; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0029
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedChild[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedOldParent[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedNewParent[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Child) == 8, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::Child");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, bChildInitial) == 16, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::bChildInitial");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, OldParent) == 20, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::OldParent");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, bOldParentInitial) == 28, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::bOldParentInitial");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, NewParent) == 32, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::NewParent");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, bNewParentInitial) == 40, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::bNewParentInitial");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Transform) == 48, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::Transform");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedChild) == 144, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::CachedChild");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedOldParent) == 168, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::CachedOldParent");
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedNewParent) == 192, "Offset mismatch for FRigUnit_ProjectTransformToNewParent::CachedNewParent");

// /Script/ControlRig.RigUnit_PropagateTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_PropagateTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bRecomputeGlobal; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyToChildren; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecursive; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x001B
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_PropagateTransform, Item) == 16, "Offset mismatch for FRigUnit_PropagateTransform::Item");
static_assert(offsetof(FRigUnit_PropagateTransform, bRecomputeGlobal) == 24, "Offset mismatch for FRigUnit_PropagateTransform::bRecomputeGlobal");
static_assert(offsetof(FRigUnit_PropagateTransform, bApplyToChildren) == 25, "Offset mismatch for FRigUnit_PropagateTransform::bApplyToChildren");
static_assert(offsetof(FRigUnit_PropagateTransform, bRecursive) == 26, "Offset mismatch for FRigUnit_PropagateTransform::bRecursive");
static_assert(offsetof(FRigUnit_PropagateTransform, CachedIndex) == 32, "Offset mismatch for FRigUnit_PropagateTransform::CachedIndex");

// /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_QuaternionFromAxisAndAngle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Axis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Angle; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0024
    std::uint8_t Result[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Axis) == 8, "Offset mismatch for FRigUnit_QuaternionFromAxisAndAngle::Axis");
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Angle) == 32, "Offset mismatch for FRigUnit_QuaternionFromAxisAndAngle::Angle");
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Result) == 48, "Offset mismatch for FRigUnit_QuaternionFromAxisAndAngle::Result");

// /Script/ControlRig.RigUnit_QuaternionToAngle
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_QuaternionToAngle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Axis[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    float Angle; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_QuaternionToAngle, Axis) == 8, "Offset mismatch for FRigUnit_QuaternionToAngle::Axis");
static_assert(offsetof(FRigUnit_QuaternionToAngle, Argument) == 32, "Offset mismatch for FRigUnit_QuaternionToAngle::Argument");
static_assert(offsetof(FRigUnit_QuaternionToAngle, Angle) == 64, "Offset mismatch for FRigUnit_QuaternionToAngle::Angle");

// /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_QuaternionToAxisAndAngle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Axis[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Angle; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Argument) == 16, "Offset mismatch for FRigUnit_QuaternionToAxisAndAngle::Argument");
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Axis) == 48, "Offset mismatch for FRigUnit_QuaternionToAxisAndAngle::Axis");
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Angle) == 72, "Offset mismatch for FRigUnit_QuaternionToAxisAndAngle::Angle");

// /Script/ControlRig.RigUnit_RemoveAllMetadata
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_RemoveAllMetadata
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Namespace; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Removed; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RemoveAllMetadata, Item) == 16, "Offset mismatch for FRigUnit_RemoveAllMetadata::Item");
static_assert(offsetof(FRigUnit_RemoveAllMetadata, Namespace) == 24, "Offset mismatch for FRigUnit_RemoveAllMetadata::Namespace");
static_assert(offsetof(FRigUnit_RemoveAllMetadata, Removed) == 25, "Offset mismatch for FRigUnit_RemoveAllMetadata::Removed");
static_assert(offsetof(FRigUnit_RemoveAllMetadata, CachedIndex) == 32, "Offset mismatch for FRigUnit_RemoveAllMetadata::CachedIndex");

// /Script/ControlRig.RigUnit_RemoveMetadata
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_RemoveMetadata
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Namespace; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Removed; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001E
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RemoveMetadata, Item) == 16, "Offset mismatch for FRigUnit_RemoveMetadata::Item");
static_assert(offsetof(FRigUnit_RemoveMetadata, Name) == 24, "Offset mismatch for FRigUnit_RemoveMetadata::Name");
static_assert(offsetof(FRigUnit_RemoveMetadata, Namespace) == 28, "Offset mismatch for FRigUnit_RemoveMetadata::Namespace");
static_assert(offsetof(FRigUnit_RemoveMetadata, Removed) == 29, "Offset mismatch for FRigUnit_RemoveMetadata::Removed");
static_assert(offsetof(FRigUnit_RemoveMetadata, CachedIndex) == 32, "Offset mismatch for FRigUnit_RemoveMetadata::CachedIndex");

// /Script/ControlRig.RigUnit_RemoveMetadataTag
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_RemoveMetadataTag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tag[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Namespace; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Removed; // 0x001D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001E
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RemoveMetadataTag, Item) == 16, "Offset mismatch for FRigUnit_RemoveMetadataTag::Item");
static_assert(offsetof(FRigUnit_RemoveMetadataTag, Tag) == 24, "Offset mismatch for FRigUnit_RemoveMetadataTag::Tag");
static_assert(offsetof(FRigUnit_RemoveMetadataTag, Namespace) == 28, "Offset mismatch for FRigUnit_RemoveMetadataTag::Namespace");
static_assert(offsetof(FRigUnit_RemoveMetadataTag, Removed) == 29, "Offset mismatch for FRigUnit_RemoveMetadataTag::Removed");
static_assert(offsetof(FRigUnit_RemoveMetadataTag, CachedIndex) == 32, "Offset mismatch for FRigUnit_RemoveMetadataTag::CachedIndex");

// /Script/ControlRig.RigUnit_ResolveArrayConnector
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_ResolveArrayConnector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Connector[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkipSocket; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    TArray<void*> Result; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsConnected; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ResolveArrayConnector, Connector) == 8, "Offset mismatch for FRigUnit_ResolveArrayConnector::Connector");
static_assert(offsetof(FRigUnit_ResolveArrayConnector, SkipSocket) == 16, "Offset mismatch for FRigUnit_ResolveArrayConnector::SkipSocket");
static_assert(offsetof(FRigUnit_ResolveArrayConnector, Result) == 24, "Offset mismatch for FRigUnit_ResolveArrayConnector::Result");
static_assert(offsetof(FRigUnit_ResolveArrayConnector, bIsConnected) == 40, "Offset mismatch for FRigUnit_ResolveArrayConnector::bIsConnected");

// /Script/ControlRig.RigUnit_ResolveConnector
// Kind: ScriptStruct; super: RigUnit_RigModulesBase
struct FRigUnit_ResolveConnector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Connector[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkipSocket; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Result[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsConnected; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ResolveConnector, Connector) == 8, "Offset mismatch for FRigUnit_ResolveConnector::Connector");
static_assert(offsetof(FRigUnit_ResolveConnector, SkipSocket) == 16, "Offset mismatch for FRigUnit_ResolveConnector::SkipSocket");
static_assert(offsetof(FRigUnit_ResolveConnector, Result) == 20, "Offset mismatch for FRigUnit_ResolveConnector::Result");
static_assert(offsetof(FRigUnit_ResolveConnector, bIsConnected) == 28, "Offset mismatch for FRigUnit_ResolveConnector::bIsConnected");

// /Script/ControlRig.RigUnit_RigModulesBase
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_RigModulesBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.RigUnit_RigModulesBaseMutable
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_RigModulesBaseMutable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_RigModulesBaseMutable, ExecutePin) == 8, "Offset mismatch for FRigUnit_RigModulesBaseMutable::ExecutePin");

// /Script/ControlRig.RigUnit_RotationConstraint
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_RotationConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AdvancedSettings[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    float Weight; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_RotationConstraint, Child) == 16, "Offset mismatch for FRigUnit_RotationConstraint::Child");
static_assert(offsetof(FRigUnit_RotationConstraint, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_RotationConstraint::bMaintainOffset");
static_assert(offsetof(FRigUnit_RotationConstraint, Filter) == 25, "Offset mismatch for FRigUnit_RotationConstraint::Filter");
static_assert(offsetof(FRigUnit_RotationConstraint, Parents) == 32, "Offset mismatch for FRigUnit_RotationConstraint::Parents");
static_assert(offsetof(FRigUnit_RotationConstraint, AdvancedSettings) == 48, "Offset mismatch for FRigUnit_RotationConstraint::AdvancedSettings");
static_assert(offsetof(FRigUnit_RotationConstraint, Weight) == 52, "Offset mismatch for FRigUnit_RotationConstraint::Weight");

// /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_RotationConstraintLocalSpaceOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AdvancedSettings[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    float Weight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChildCache[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Child) == 16, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::Child");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::bMaintainOffset");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Filter) == 25, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::Filter");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Parents) == 32, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::Parents");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, AdvancedSettings) == 48, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::AdvancedSettings");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Weight) == 52, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::Weight");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, ChildCache) == 56, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::ChildCache");
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, ParentCaches) == 80, "Offset mismatch for FRigUnit_RotationConstraintLocalSpaceOffset::ParentCaches");

// /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_RotationConstraint_AdvancedSettings
{
public:
    std::uint8_t InterpolationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationOrderForFilter; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_RotationConstraint_AdvancedSettings, InterpolationType) == 0, "Offset mismatch for FRigUnit_RotationConstraint_AdvancedSettings::InterpolationType");
static_assert(offsetof(FRigUnit_RotationConstraint_AdvancedSettings, RotationOrderForFilter) == 1, "Offset mismatch for FRigUnit_RotationConstraint_AdvancedSettings::RotationOrderForFilter");

// /Script/ControlRig.RigUnit_ScaleConstraint
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ScaleConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_ScaleConstraint, Child) == 16, "Offset mismatch for FRigUnit_ScaleConstraint::Child");
static_assert(offsetof(FRigUnit_ScaleConstraint, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_ScaleConstraint::bMaintainOffset");
static_assert(offsetof(FRigUnit_ScaleConstraint, Filter) == 25, "Offset mismatch for FRigUnit_ScaleConstraint::Filter");
static_assert(offsetof(FRigUnit_ScaleConstraint, Parents) == 32, "Offset mismatch for FRigUnit_ScaleConstraint::Parents");
static_assert(offsetof(FRigUnit_ScaleConstraint, Weight) == 48, "Offset mismatch for FRigUnit_ScaleConstraint::Weight");

// /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_ScaleConstraintLocalSpaceOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainOffset; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter[0x7]; // 0x0019 (Size: 0x7, Type: StructProperty)
    TArray<void*> Parents; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t ChildCache[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    TArray<void*> ParentCaches; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Child) == 16, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::Child");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, bMaintainOffset) == 24, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::bMaintainOffset");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Filter) == 25, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::Filter");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Parents) == 32, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::Parents");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Weight) == 48, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::Weight");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, ChildCache) == 56, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::ChildCache");
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, ParentCaches) == 80, "Offset mismatch for FRigUnit_ScaleConstraintLocalSpaceOffset::ParentCaches");

// /Script/ControlRig.RigUnit_SendEvent
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SendEvent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Event; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Item[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    float OffsetInSeconds; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnable; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyDuringInteraction; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SendEvent, Event) == 16, "Offset mismatch for FRigUnit_SendEvent::Event");
static_assert(offsetof(FRigUnit_SendEvent, Item) == 20, "Offset mismatch for FRigUnit_SendEvent::Item");
static_assert(offsetof(FRigUnit_SendEvent, OffsetInSeconds) == 28, "Offset mismatch for FRigUnit_SendEvent::OffsetInSeconds");
static_assert(offsetof(FRigUnit_SendEvent, bEnable) == 32, "Offset mismatch for FRigUnit_SendEvent::bEnable");
static_assert(offsetof(FRigUnit_SendEvent, bOnlyDuringInteraction) == 33, "Offset mismatch for FRigUnit_SendEvent::bOnlyDuringInteraction");

// /Script/ControlRig.RigUnit_SequenceExecution
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SequenceExecution
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ExecuteContext[0x220]; // 0x0010 (Size: 0x220, Type: StructProperty)
    std::uint8_t A[0x220]; // 0x0230 (Size: 0x220, Type: StructProperty)
    std::uint8_t B[0x220]; // 0x0450 (Size: 0x220, Type: StructProperty)
    std::uint8_t C[0x220]; // 0x0670 (Size: 0x220, Type: StructProperty)
    std::uint8_t D[0x1]; // 0x0890 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SequenceExecution, ExecuteContext) == 16, "Offset mismatch for FRigUnit_SequenceExecution::ExecuteContext");
static_assert(offsetof(FRigUnit_SequenceExecution, A) == 560, "Offset mismatch for FRigUnit_SequenceExecution::A");
static_assert(offsetof(FRigUnit_SequenceExecution, B) == 1104, "Offset mismatch for FRigUnit_SequenceExecution::B");
static_assert(offsetof(FRigUnit_SequenceExecution, C) == 1648, "Offset mismatch for FRigUnit_SequenceExecution::C");
static_assert(offsetof(FRigUnit_SequenceExecution, D) == 2192, "Offset mismatch for FRigUnit_SequenceExecution::D");

// /Script/ControlRig.RigUnit_SetAnimationChannelBase
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelBase
struct FRigUnit_SetAnimationChannelBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetAnimationChannelBase, ExecutePin) == 32, "Offset mismatch for FRigUnit_SetAnimationChannelBase::ExecutePin");

// /Script/ControlRig.RigUnit_SetAnimationChannelBaseFromItem
// Kind: ScriptStruct; super: RigUnit_GetAnimationChannelFromItemBase
struct FRigUnit_SetAnimationChannelBaseFromItem
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t ExecutePin[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetAnimationChannelBaseFromItem, ExecutePin) == 24, "Offset mismatch for FRigUnit_SetAnimationChannelBaseFromItem::ExecutePin");

// /Script/ControlRig.RigUnit_SetBoneInitialTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetBoneInitialTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPropagateToChildren; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00E2
    std::uint8_t CachedBone[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetBoneInitialTransform, bone) == 16, "Offset mismatch for FRigUnit_SetBoneInitialTransform::bone");
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetBoneInitialTransform::Transform");
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Result) == 128, "Offset mismatch for FRigUnit_SetBoneInitialTransform::Result");
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Space) == 224, "Offset mismatch for FRigUnit_SetBoneInitialTransform::Space");
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, bPropagateToChildren) == 225, "Offset mismatch for FRigUnit_SetBoneInitialTransform::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, CachedBone) == 232, "Offset mismatch for FRigUnit_SetBoneInitialTransform::CachedBone");

// /Script/ControlRig.RigUnit_SetBoneRotation
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetBoneRotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Space; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    float Weight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0049
    std::uint8_t CachedBone[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetBoneRotation, bone) == 16, "Offset mismatch for FRigUnit_SetBoneRotation::bone");
static_assert(offsetof(FRigUnit_SetBoneRotation, Rotation) == 32, "Offset mismatch for FRigUnit_SetBoneRotation::Rotation");
static_assert(offsetof(FRigUnit_SetBoneRotation, Space) == 64, "Offset mismatch for FRigUnit_SetBoneRotation::Space");
static_assert(offsetof(FRigUnit_SetBoneRotation, Weight) == 68, "Offset mismatch for FRigUnit_SetBoneRotation::Weight");
static_assert(offsetof(FRigUnit_SetBoneRotation, bPropagateToChildren) == 72, "Offset mismatch for FRigUnit_SetBoneRotation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetBoneRotation, CachedBone) == 80, "Offset mismatch for FRigUnit_SetBoneRotation::CachedBone");

// /Script/ControlRig.RigUnit_SetBoneTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetBoneTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    float Weight; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00E9
    std::uint8_t CachedBone[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetBoneTransform, bone) == 16, "Offset mismatch for FRigUnit_SetBoneTransform::bone");
static_assert(offsetof(FRigUnit_SetBoneTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetBoneTransform::Transform");
static_assert(offsetof(FRigUnit_SetBoneTransform, Result) == 128, "Offset mismatch for FRigUnit_SetBoneTransform::Result");
static_assert(offsetof(FRigUnit_SetBoneTransform, Space) == 224, "Offset mismatch for FRigUnit_SetBoneTransform::Space");
static_assert(offsetof(FRigUnit_SetBoneTransform, Weight) == 228, "Offset mismatch for FRigUnit_SetBoneTransform::Weight");
static_assert(offsetof(FRigUnit_SetBoneTransform, bPropagateToChildren) == 232, "Offset mismatch for FRigUnit_SetBoneTransform::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetBoneTransform, CachedBone) == 240, "Offset mismatch for FRigUnit_SetBoneTransform::CachedBone");

// /Script/ControlRig.RigUnit_SetBoneTranslation
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetBoneTranslation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName bone; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Translation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Weight; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    std::uint8_t CachedBone[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetBoneTranslation, bone) == 16, "Offset mismatch for FRigUnit_SetBoneTranslation::bone");
static_assert(offsetof(FRigUnit_SetBoneTranslation, Translation) == 24, "Offset mismatch for FRigUnit_SetBoneTranslation::Translation");
static_assert(offsetof(FRigUnit_SetBoneTranslation, Space) == 48, "Offset mismatch for FRigUnit_SetBoneTranslation::Space");
static_assert(offsetof(FRigUnit_SetBoneTranslation, Weight) == 52, "Offset mismatch for FRigUnit_SetBoneTranslation::Weight");
static_assert(offsetof(FRigUnit_SetBoneTranslation, bPropagateToChildren) == 56, "Offset mismatch for FRigUnit_SetBoneTranslation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetBoneTranslation, CachedBone) == 64, "Offset mismatch for FRigUnit_SetBoneTranslation::CachedBone");

// /Script/ControlRig.RigUnit_SetBoolAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetBoolAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Value; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SetBoolAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetBoolAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetBoolAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetBoolAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SetBoolAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetBoolAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetChannelHosts
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_SetChannelHosts
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Channel[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Hosts; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetChannelHosts, Channel) == 16, "Offset mismatch for FRigUnit_SetChannelHosts::Channel");
static_assert(offsetof(FRigUnit_SetChannelHosts, Hosts) == 24, "Offset mismatch for FRigUnit_SetChannelHosts::Hosts");

// /Script/ControlRig.RigUnit_SetControlBool
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlBool
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoolValue; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint8_t CachedControlIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlBool, Control) == 16, "Offset mismatch for FRigUnit_SetControlBool::Control");
static_assert(offsetof(FRigUnit_SetControlBool, BoolValue) == 20, "Offset mismatch for FRigUnit_SetControlBool::BoolValue");
static_assert(offsetof(FRigUnit_SetControlBool, CachedControlIndex) == 24, "Offset mismatch for FRigUnit_SetControlBool::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlColor
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlColor
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x14]; // 0x0014 (Size: 0x14, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlColor, Control) == 16, "Offset mismatch for FRigUnit_SetControlColor::Control");
static_assert(offsetof(FRigUnit_SetControlColor, Color) == 20, "Offset mismatch for FRigUnit_SetControlColor::Color");
static_assert(offsetof(FRigUnit_SetControlColor, CachedControlIndex) == 40, "Offset mismatch for FRigUnit_SetControlColor::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlDrivenList
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlDrivenList
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> Driven; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlDrivenList, Control) == 16, "Offset mismatch for FRigUnit_SetControlDrivenList::Control");
static_assert(offsetof(FRigUnit_SetControlDrivenList, Driven) == 24, "Offset mismatch for FRigUnit_SetControlDrivenList::Driven");
static_assert(offsetof(FRigUnit_SetControlDrivenList, CachedControlIndex) == 40, "Offset mismatch for FRigUnit_SetControlDrivenList::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlFloat
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlFloat
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float FloatValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t CachedControlIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlFloat, Control) == 16, "Offset mismatch for FRigUnit_SetControlFloat::Control");
static_assert(offsetof(FRigUnit_SetControlFloat, Weight) == 20, "Offset mismatch for FRigUnit_SetControlFloat::Weight");
static_assert(offsetof(FRigUnit_SetControlFloat, FloatValue) == 24, "Offset mismatch for FRigUnit_SetControlFloat::FloatValue");
static_assert(offsetof(FRigUnit_SetControlFloat, CachedControlIndex) == 32, "Offset mismatch for FRigUnit_SetControlFloat::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlInteger
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlInteger
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t Weight; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t IntegerValue; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t CachedControlIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlInteger, Control) == 16, "Offset mismatch for FRigUnit_SetControlInteger::Control");
static_assert(offsetof(FRigUnit_SetControlInteger, Weight) == 20, "Offset mismatch for FRigUnit_SetControlInteger::Weight");
static_assert(offsetof(FRigUnit_SetControlInteger, IntegerValue) == 24, "Offset mismatch for FRigUnit_SetControlInteger::IntegerValue");
static_assert(offsetof(FRigUnit_SetControlInteger, CachedControlIndex) == 32, "Offset mismatch for FRigUnit_SetControlInteger::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlIntegerFloatWeight
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlIntegerFloatWeight
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t IntegerValue; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t CachedControlIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlIntegerFloatWeight, Control) == 16, "Offset mismatch for FRigUnit_SetControlIntegerFloatWeight::Control");
static_assert(offsetof(FRigUnit_SetControlIntegerFloatWeight, Weight) == 20, "Offset mismatch for FRigUnit_SetControlIntegerFloatWeight::Weight");
static_assert(offsetof(FRigUnit_SetControlIntegerFloatWeight, IntegerValue) == 24, "Offset mismatch for FRigUnit_SetControlIntegerFloatWeight::IntegerValue");
static_assert(offsetof(FRigUnit_SetControlIntegerFloatWeight, CachedControlIndex) == 32, "Offset mismatch for FRigUnit_SetControlIntegerFloatWeight::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlOffset
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Offset[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t CachedControlIndex[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlOffset, Control) == 16, "Offset mismatch for FRigUnit_SetControlOffset::Control");
static_assert(offsetof(FRigUnit_SetControlOffset, Offset) == 32, "Offset mismatch for FRigUnit_SetControlOffset::Offset");
static_assert(offsetof(FRigUnit_SetControlOffset, Space) == 128, "Offset mismatch for FRigUnit_SetControlOffset::Space");
static_assert(offsetof(FRigUnit_SetControlOffset, CachedControlIndex) == 136, "Offset mismatch for FRigUnit_SetControlOffset::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlRotationOffset
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlRotationOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Offset[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Space; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t CachedControlIndex[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlRotationOffset, Control) == 16, "Offset mismatch for FRigUnit_SetControlRotationOffset::Control");
static_assert(offsetof(FRigUnit_SetControlRotationOffset, Offset) == 32, "Offset mismatch for FRigUnit_SetControlRotationOffset::Offset");
static_assert(offsetof(FRigUnit_SetControlRotationOffset, Space) == 64, "Offset mismatch for FRigUnit_SetControlRotationOffset::Space");
static_assert(offsetof(FRigUnit_SetControlRotationOffset, CachedControlIndex) == 72, "Offset mismatch for FRigUnit_SetControlRotationOffset::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlRotator
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlRotator
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Rotator[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t CachedControlIndex[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlRotator, Control) == 16, "Offset mismatch for FRigUnit_SetControlRotator::Control");
static_assert(offsetof(FRigUnit_SetControlRotator, Weight) == 20, "Offset mismatch for FRigUnit_SetControlRotator::Weight");
static_assert(offsetof(FRigUnit_SetControlRotator, Rotator) == 24, "Offset mismatch for FRigUnit_SetControlRotator::Rotator");
static_assert(offsetof(FRigUnit_SetControlRotator, Space) == 48, "Offset mismatch for FRigUnit_SetControlRotator::Space");
static_assert(offsetof(FRigUnit_SetControlRotator, CachedControlIndex) == 56, "Offset mismatch for FRigUnit_SetControlRotator::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlScaleOffset
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlScaleOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Scale[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t CachedControlIndex[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlScaleOffset, Control) == 16, "Offset mismatch for FRigUnit_SetControlScaleOffset::Control");
static_assert(offsetof(FRigUnit_SetControlScaleOffset, Scale) == 24, "Offset mismatch for FRigUnit_SetControlScaleOffset::Scale");
static_assert(offsetof(FRigUnit_SetControlScaleOffset, Space) == 48, "Offset mismatch for FRigUnit_SetControlScaleOffset::Space");
static_assert(offsetof(FRigUnit_SetControlScaleOffset, CachedControlIndex) == 56, "Offset mismatch for FRigUnit_SetControlScaleOffset::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t CachedControlIndex[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlTransform, Control) == 16, "Offset mismatch for FRigUnit_SetControlTransform::Control");
static_assert(offsetof(FRigUnit_SetControlTransform, Weight) == 20, "Offset mismatch for FRigUnit_SetControlTransform::Weight");
static_assert(offsetof(FRigUnit_SetControlTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetControlTransform::Transform");
static_assert(offsetof(FRigUnit_SetControlTransform, Space) == 128, "Offset mismatch for FRigUnit_SetControlTransform::Space");
static_assert(offsetof(FRigUnit_SetControlTransform, CachedControlIndex) == 136, "Offset mismatch for FRigUnit_SetControlTransform::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlTranslationOffset
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlTranslationOffset
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Offset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t CachedControlIndex[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlTranslationOffset, Control) == 16, "Offset mismatch for FRigUnit_SetControlTranslationOffset::Control");
static_assert(offsetof(FRigUnit_SetControlTranslationOffset, Offset) == 24, "Offset mismatch for FRigUnit_SetControlTranslationOffset::Offset");
static_assert(offsetof(FRigUnit_SetControlTranslationOffset, Space) == 48, "Offset mismatch for FRigUnit_SetControlTranslationOffset::Space");
static_assert(offsetof(FRigUnit_SetControlTranslationOffset, CachedControlIndex) == 56, "Offset mismatch for FRigUnit_SetControlTranslationOffset::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlVector
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlVector
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Vector[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t CachedControlIndex[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlVector, Control) == 16, "Offset mismatch for FRigUnit_SetControlVector::Control");
static_assert(offsetof(FRigUnit_SetControlVector, Weight) == 20, "Offset mismatch for FRigUnit_SetControlVector::Weight");
static_assert(offsetof(FRigUnit_SetControlVector, Vector) == 24, "Offset mismatch for FRigUnit_SetControlVector::Vector");
static_assert(offsetof(FRigUnit_SetControlVector, Space) == 48, "Offset mismatch for FRigUnit_SetControlVector::Space");
static_assert(offsetof(FRigUnit_SetControlVector, CachedControlIndex) == 56, "Offset mismatch for FRigUnit_SetControlVector::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlVector2D
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlVector2D
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Control[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Vector[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetControlVector2D, Control) == 16, "Offset mismatch for FRigUnit_SetControlVector2D::Control");
static_assert(offsetof(FRigUnit_SetControlVector2D, Weight) == 20, "Offset mismatch for FRigUnit_SetControlVector2D::Weight");
static_assert(offsetof(FRigUnit_SetControlVector2D, Vector) == 24, "Offset mismatch for FRigUnit_SetControlVector2D::Vector");
static_assert(offsetof(FRigUnit_SetControlVector2D, CachedControlIndex) == 40, "Offset mismatch for FRigUnit_SetControlVector2D::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetControlVisibility
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetControlVisibility
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FString Pattern; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bVisible; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> CachedControlIndices; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetControlVisibility, Item) == 16, "Offset mismatch for FRigUnit_SetControlVisibility::Item");
static_assert(offsetof(FRigUnit_SetControlVisibility, Pattern) == 24, "Offset mismatch for FRigUnit_SetControlVisibility::Pattern");
static_assert(offsetof(FRigUnit_SetControlVisibility, bVisible) == 40, "Offset mismatch for FRigUnit_SetControlVisibility::bVisible");
static_assert(offsetof(FRigUnit_SetControlVisibility, CachedControlIndices) == 48, "Offset mismatch for FRigUnit_SetControlVisibility::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetCurveValue
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetCurveValue
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Curve[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedCurveIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetCurveValue, Curve) == 16, "Offset mismatch for FRigUnit_SetCurveValue::Curve");
static_assert(offsetof(FRigUnit_SetCurveValue, Value) == 20, "Offset mismatch for FRigUnit_SetCurveValue::Value");
static_assert(offsetof(FRigUnit_SetCurveValue, CachedCurveIndex) == 24, "Offset mismatch for FRigUnit_SetCurveValue::CachedCurveIndex");

// /Script/ControlRig.RigUnit_SetDefaultMatch
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetDefaultMatch
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Default[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetDefaultMatch, Default) == 16, "Offset mismatch for FRigUnit_SetDefaultMatch::Default");

// /Script/ControlRig.RigUnit_SetDefaultMatchArray
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetDefaultMatchArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Default; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetDefaultMatchArray, Default) == 16, "Offset mismatch for FRigUnit_SetDefaultMatchArray::Default");

// /Script/ControlRig.RigUnit_SetDefaultParent
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_SetDefaultParent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetDefaultParent, Child) == 16, "Offset mismatch for FRigUnit_SetDefaultParent::Child");
static_assert(offsetof(FRigUnit_SetDefaultParent, Parent) == 24, "Offset mismatch for FRigUnit_SetDefaultParent::Parent");

// /Script/ControlRig.RigUnit_SetFloatAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetFloatAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Value; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_SetFloatAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetFloatAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetFloatAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetFloatAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    float Value; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_SetFloatAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetFloatAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetIntAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetIntAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t Value; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_SetIntAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetIntAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetIntAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetIntAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::int32_t Value; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_SetIntAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetIntAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetMetadataTag
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMetadataTag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tag[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t Namespace; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t CachedIndex[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetMetadataTag, Item) == 16, "Offset mismatch for FRigUnit_SetMetadataTag::Item");
static_assert(offsetof(FRigUnit_SetMetadataTag, Tag) == 24, "Offset mismatch for FRigUnit_SetMetadataTag::Tag");
static_assert(offsetof(FRigUnit_SetMetadataTag, Namespace) == 28, "Offset mismatch for FRigUnit_SetMetadataTag::Namespace");
static_assert(offsetof(FRigUnit_SetMetadataTag, CachedIndex) == 32, "Offset mismatch for FRigUnit_SetMetadataTag::CachedIndex");

// /Script/ControlRig.RigUnit_SetMetadataTagArray
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMetadataTagArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> Tags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Namespace; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t CachedIndex[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetMetadataTagArray, Item) == 16, "Offset mismatch for FRigUnit_SetMetadataTagArray::Item");
static_assert(offsetof(FRigUnit_SetMetadataTagArray, Tags) == 24, "Offset mismatch for FRigUnit_SetMetadataTagArray::Tags");
static_assert(offsetof(FRigUnit_SetMetadataTagArray, Namespace) == 40, "Offset mismatch for FRigUnit_SetMetadataTagArray::Namespace");
static_assert(offsetof(FRigUnit_SetMetadataTagArray, CachedIndex) == 48, "Offset mismatch for FRigUnit_SetMetadataTagArray::CachedIndex");

// /Script/ControlRig.RigUnit_SetMultiControlBool
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMultiControlBool
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedControlIndices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlBool, Entries) == 16, "Offset mismatch for FRigUnit_SetMultiControlBool::Entries");
static_assert(offsetof(FRigUnit_SetMultiControlBool, CachedControlIndices) == 32, "Offset mismatch for FRigUnit_SetMultiControlBool::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_SetMultiControlBool_Entry
{
public:
    std::uint8_t Control[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoolValue; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, Control) == 0, "Offset mismatch for FRigUnit_SetMultiControlBool_Entry::Control");
static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, BoolValue) == 4, "Offset mismatch for FRigUnit_SetMultiControlBool_Entry::BoolValue");

// /Script/ControlRig.RigUnit_SetMultiControlFloat
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMultiControlFloat
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> CachedControlIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlFloat, Entries) == 16, "Offset mismatch for FRigUnit_SetMultiControlFloat::Entries");
static_assert(offsetof(FRigUnit_SetMultiControlFloat, Weight) == 32, "Offset mismatch for FRigUnit_SetMultiControlFloat::Weight");
static_assert(offsetof(FRigUnit_SetMultiControlFloat, CachedControlIndices) == 40, "Offset mismatch for FRigUnit_SetMultiControlFloat::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
    std::uint8_t Control[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float FloatValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, Control) == 0, "Offset mismatch for FRigUnit_SetMultiControlFloat_Entry::Control");
static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, FloatValue) == 4, "Offset mismatch for FRigUnit_SetMultiControlFloat_Entry::FloatValue");

// /Script/ControlRig.RigUnit_SetMultiControlInteger
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMultiControlInteger
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> CachedControlIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlInteger, Entries) == 16, "Offset mismatch for FRigUnit_SetMultiControlInteger::Entries");
static_assert(offsetof(FRigUnit_SetMultiControlInteger, Weight) == 32, "Offset mismatch for FRigUnit_SetMultiControlInteger::Weight");
static_assert(offsetof(FRigUnit_SetMultiControlInteger, CachedControlIndices) == 40, "Offset mismatch for FRigUnit_SetMultiControlInteger::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
    std::uint8_t Control[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t IntegerValue; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, Control) == 0, "Offset mismatch for FRigUnit_SetMultiControlInteger_Entry::Control");
static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, IntegerValue) == 4, "Offset mismatch for FRigUnit_SetMultiControlInteger_Entry::IntegerValue");

// /Script/ControlRig.RigUnit_SetMultiControlRotator
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMultiControlRotator
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> CachedControlIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlRotator, Entries) == 16, "Offset mismatch for FRigUnit_SetMultiControlRotator::Entries");
static_assert(offsetof(FRigUnit_SetMultiControlRotator, Weight) == 32, "Offset mismatch for FRigUnit_SetMultiControlRotator::Weight");
static_assert(offsetof(FRigUnit_SetMultiControlRotator, CachedControlIndices) == 40, "Offset mismatch for FRigUnit_SetMultiControlRotator::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
    FName Control; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Rotator[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Space; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Control) == 0, "Offset mismatch for FRigUnit_SetMultiControlRotator_Entry::Control");
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Rotator) == 8, "Offset mismatch for FRigUnit_SetMultiControlRotator_Entry::Rotator");
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Space) == 32, "Offset mismatch for FRigUnit_SetMultiControlRotator_Entry::Space");

// /Script/ControlRig.RigUnit_SetMultiControlVector2D
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetMultiControlVector2D
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Entries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    TArray<void*> CachedControlIndices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Entries) == 16, "Offset mismatch for FRigUnit_SetMultiControlVector2D::Entries");
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Weight) == 32, "Offset mismatch for FRigUnit_SetMultiControlVector2D::Weight");
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, CachedControlIndices) == 40, "Offset mismatch for FRigUnit_SetMultiControlVector2D::CachedControlIndices");

// /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
// Kind: ScriptStruct; super: none
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
    FName Control; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Vector[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Control) == 0, "Offset mismatch for FRigUnit_SetMultiControlVector2D_Entry::Control");
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Vector) == 8, "Offset mismatch for FRigUnit_SetMultiControlVector2D_Entry::Vector");

// /Script/ControlRig.RigUnit_SetRelativeBoneTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetRelativeBoneTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    FName Space; // 0x0014 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    std::uint8_t CachedBone[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedSpaceIndex[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, bone) == 16, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::bone");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Space) == 20, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::Space");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::Transform");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Weight) == 128, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::Weight");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, bPropagateToChildren) == 132, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedBone) == 136, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::CachedBone");
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex) == 160, "Offset mismatch for FRigUnit_SetRelativeBoneTransform::CachedSpaceIndex");

// /Script/ControlRig.RigUnit_SetRelativeRotationForItem
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetRelativeRotationForItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bParentInitial; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0021
    std::uint8_t Value[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    float Weight; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0055
    std::uint8_t CachedChild[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Child) == 16, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::Child");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Parent) == 24, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::Parent");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, bParentInitial) == 32, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::bParentInitial");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Value) == 48, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::Value");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Weight) == 80, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::Weight");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, bPropagateToChildren) == 84, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, CachedChild) == 88, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::CachedChild");
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, CachedParent) == 112, "Offset mismatch for FRigUnit_SetRelativeRotationForItem::CachedParent");

// /Script/ControlRig.RigUnit_SetRelativeTransformForItem
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetRelativeTransformForItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bParentInitial; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0021
    std::uint8_t Value[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0095
    std::uint8_t CachedChild[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Child) == 16, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::Child");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Parent) == 24, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::Parent");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, bParentInitial) == 32, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::bParentInitial");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Value) == 48, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::Value");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Weight) == 144, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::Weight");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, bPropagateToChildren) == 148, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedChild) == 152, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::CachedChild");
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedParent) == 176, "Offset mismatch for FRigUnit_SetRelativeTransformForItem::CachedParent");

// /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetRelativeTranslationForItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Child[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bParentInitial; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t Value[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float Weight; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t CachedChild[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParent[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Child) == 16, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::Child");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Parent) == 24, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::Parent");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, bParentInitial) == 32, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::bParentInitial");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Value) == 40, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::Value");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Weight) == 64, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::Weight");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, bPropagateToChildren) == 68, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, CachedChild) == 72, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::CachedChild");
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, CachedParent) == 96, "Offset mismatch for FRigUnit_SetRelativeTranslationForItem::CachedParent");

// /Script/ControlRig.RigUnit_SetRotation
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetRotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t Value[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    float Weight; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t CachedIndex[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRotation, Item) == 16, "Offset mismatch for FRigUnit_SetRotation::Item");
static_assert(offsetof(FRigUnit_SetRotation, Space) == 24, "Offset mismatch for FRigUnit_SetRotation::Space");
static_assert(offsetof(FRigUnit_SetRotation, bInitial) == 25, "Offset mismatch for FRigUnit_SetRotation::bInitial");
static_assert(offsetof(FRigUnit_SetRotation, Value) == 32, "Offset mismatch for FRigUnit_SetRotation::Value");
static_assert(offsetof(FRigUnit_SetRotation, Weight) == 64, "Offset mismatch for FRigUnit_SetRotation::Weight");
static_assert(offsetof(FRigUnit_SetRotation, bPropagateToChildren) == 68, "Offset mismatch for FRigUnit_SetRotation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetRotation, CachedIndex) == 72, "Offset mismatch for FRigUnit_SetRotation::CachedIndex");

// /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetRotatorAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRotatorAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetRotatorAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetRotatorAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetRotatorAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetRotatorAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetRotatorAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetScale
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetScale
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t Scale[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    std::uint8_t CachedIndex[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetScale, Item) == 16, "Offset mismatch for FRigUnit_SetScale::Item");
static_assert(offsetof(FRigUnit_SetScale, Space) == 24, "Offset mismatch for FRigUnit_SetScale::Space");
static_assert(offsetof(FRigUnit_SetScale, bInitial) == 25, "Offset mismatch for FRigUnit_SetScale::bInitial");
static_assert(offsetof(FRigUnit_SetScale, Scale) == 32, "Offset mismatch for FRigUnit_SetScale::Scale");
static_assert(offsetof(FRigUnit_SetScale, Weight) == 56, "Offset mismatch for FRigUnit_SetScale::Weight");
static_assert(offsetof(FRigUnit_SetScale, bPropagateToChildren) == 60, "Offset mismatch for FRigUnit_SetScale::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetScale, CachedIndex) == 64, "Offset mismatch for FRigUnit_SetScale::CachedIndex");

// /Script/ControlRig.RigUnit_SetShapeTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetShapeTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Control; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedControlIndex[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetShapeTransform, Control) == 16, "Offset mismatch for FRigUnit_SetShapeTransform::Control");
static_assert(offsetof(FRigUnit_SetShapeTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetShapeTransform::Transform");
static_assert(offsetof(FRigUnit_SetShapeTransform, CachedControlIndex) == 128, "Offset mismatch for FRigUnit_SetShapeTransform::CachedControlIndex");

// /Script/ControlRig.RigUnit_SetSpaceInitialTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetSpaceInitialTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName SpaceName; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Result[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t Space; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    std::uint8_t CachedSpaceIndex[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, SpaceName) == 16, "Offset mismatch for FRigUnit_SetSpaceInitialTransform::SpaceName");
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetSpaceInitialTransform::Transform");
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Result) == 128, "Offset mismatch for FRigUnit_SetSpaceInitialTransform::Result");
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Space) == 224, "Offset mismatch for FRigUnit_SetSpaceInitialTransform::Space");
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex) == 232, "Offset mismatch for FRigUnit_SetSpaceInitialTransform::CachedSpaceIndex");

// /Script/ControlRig.RigUnit_SetSpaceTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetSpaceTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Space[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t Transform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t SpaceType; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t CachedSpaceIndex[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetSpaceTransform, Space) == 16, "Offset mismatch for FRigUnit_SetSpaceTransform::Space");
static_assert(offsetof(FRigUnit_SetSpaceTransform, Weight) == 20, "Offset mismatch for FRigUnit_SetSpaceTransform::Weight");
static_assert(offsetof(FRigUnit_SetSpaceTransform, Transform) == 32, "Offset mismatch for FRigUnit_SetSpaceTransform::Transform");
static_assert(offsetof(FRigUnit_SetSpaceTransform, SpaceType) == 128, "Offset mismatch for FRigUnit_SetSpaceTransform::SpaceType");
static_assert(offsetof(FRigUnit_SetSpaceTransform, CachedSpaceIndex) == 136, "Offset mismatch for FRigUnit_SetSpaceTransform::CachedSpaceIndex");

// /Script/ControlRig.RigUnit_SetTransform
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t Value[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Weight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    std::uint8_t CachedIndex[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetTransform, Item) == 16, "Offset mismatch for FRigUnit_SetTransform::Item");
static_assert(offsetof(FRigUnit_SetTransform, Space) == 24, "Offset mismatch for FRigUnit_SetTransform::Space");
static_assert(offsetof(FRigUnit_SetTransform, bInitial) == 25, "Offset mismatch for FRigUnit_SetTransform::bInitial");
static_assert(offsetof(FRigUnit_SetTransform, Value) == 32, "Offset mismatch for FRigUnit_SetTransform::Value");
static_assert(offsetof(FRigUnit_SetTransform, Weight) == 128, "Offset mismatch for FRigUnit_SetTransform::Weight");
static_assert(offsetof(FRigUnit_SetTransform, bPropagateToChildren) == 132, "Offset mismatch for FRigUnit_SetTransform::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetTransform, CachedIndex) == 136, "Offset mismatch for FRigUnit_SetTransform::CachedIndex");

// /Script/ControlRig.RigUnit_SetTransformAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetTransformAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetTransformAnimationChannel, Value) == 48, "Offset mismatch for FRigUnit_SetTransformAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetTransformAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetTransformAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetTransformAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetTransformAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetTransformArray
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetTransformArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Space; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    TArray<void*> Transforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    TArray<void*> CachedIndex; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetTransformArray, Items) == 16, "Offset mismatch for FRigUnit_SetTransformArray::Items");
static_assert(offsetof(FRigUnit_SetTransformArray, Space) == 32, "Offset mismatch for FRigUnit_SetTransformArray::Space");
static_assert(offsetof(FRigUnit_SetTransformArray, bInitial) == 33, "Offset mismatch for FRigUnit_SetTransformArray::bInitial");
static_assert(offsetof(FRigUnit_SetTransformArray, Transforms) == 40, "Offset mismatch for FRigUnit_SetTransformArray::Transforms");
static_assert(offsetof(FRigUnit_SetTransformArray, Weight) == 56, "Offset mismatch for FRigUnit_SetTransformArray::Weight");
static_assert(offsetof(FRigUnit_SetTransformArray, bPropagateToChildren) == 60, "Offset mismatch for FRigUnit_SetTransformArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetTransformArray, CachedIndex) == 64, "Offset mismatch for FRigUnit_SetTransformArray::CachedIndex");

// /Script/ControlRig.RigUnit_SetTransformItemArray
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetTransformItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Space; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    TArray<void*> Transforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    TArray<void*> CachedIndex; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SetTransformItemArray, Items) == 16, "Offset mismatch for FRigUnit_SetTransformItemArray::Items");
static_assert(offsetof(FRigUnit_SetTransformItemArray, Space) == 32, "Offset mismatch for FRigUnit_SetTransformItemArray::Space");
static_assert(offsetof(FRigUnit_SetTransformItemArray, bInitial) == 33, "Offset mismatch for FRigUnit_SetTransformItemArray::bInitial");
static_assert(offsetof(FRigUnit_SetTransformItemArray, Transforms) == 40, "Offset mismatch for FRigUnit_SetTransformItemArray::Transforms");
static_assert(offsetof(FRigUnit_SetTransformItemArray, Weight) == 56, "Offset mismatch for FRigUnit_SetTransformItemArray::Weight");
static_assert(offsetof(FRigUnit_SetTransformItemArray, bPropagateToChildren) == 60, "Offset mismatch for FRigUnit_SetTransformItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetTransformItemArray, CachedIndex) == 64, "Offset mismatch for FRigUnit_SetTransformItemArray::CachedIndex");

// /Script/ControlRig.RigUnit_SetTranslation
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetTranslation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t Space; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInitial; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t Value[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Weight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    std::uint8_t CachedIndex[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetTranslation, Item) == 16, "Offset mismatch for FRigUnit_SetTranslation::Item");
static_assert(offsetof(FRigUnit_SetTranslation, Space) == 24, "Offset mismatch for FRigUnit_SetTranslation::Space");
static_assert(offsetof(FRigUnit_SetTranslation, bInitial) == 25, "Offset mismatch for FRigUnit_SetTranslation::bInitial");
static_assert(offsetof(FRigUnit_SetTranslation, Value) == 32, "Offset mismatch for FRigUnit_SetTranslation::Value");
static_assert(offsetof(FRigUnit_SetTranslation, Weight) == 56, "Offset mismatch for FRigUnit_SetTranslation::Weight");
static_assert(offsetof(FRigUnit_SetTranslation, bPropagateToChildren) == 60, "Offset mismatch for FRigUnit_SetTranslation::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SetTranslation, CachedIndex) == 64, "Offset mismatch for FRigUnit_SetTranslation::CachedIndex");

// /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetVector2DAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetVector2DAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetVector2DAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetVector2DAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetVector2DAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetVector2DAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetVector2DAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetVectorAnimationChannel
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBase
struct FRigUnit_SetVectorAnimationChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetVectorAnimationChannel, Value) == 40, "Offset mismatch for FRigUnit_SetVectorAnimationChannel::Value");

// /Script/ControlRig.RigUnit_SetVectorAnimationChannelFromItem
// Kind: ScriptStruct; super: RigUnit_SetAnimationChannelBaseFromItem
struct FRigUnit_SetVectorAnimationChannelFromItem
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SetVectorAnimationChannelFromItem, Value) == 32, "Offset mismatch for FRigUnit_SetVectorAnimationChannelFromItem::Value");

// /Script/ControlRig.RigUnit_SetupShapeLibraryFromUserData
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_SetupShapeLibraryFromUserData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString Namespace; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Path; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString LibraryName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t LogShapeLibraries; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFound; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SetupShapeLibraryFromUserData, Namespace) == 16, "Offset mismatch for FRigUnit_SetupShapeLibraryFromUserData::Namespace");
static_assert(offsetof(FRigUnit_SetupShapeLibraryFromUserData, Path) == 32, "Offset mismatch for FRigUnit_SetupShapeLibraryFromUserData::Path");
static_assert(offsetof(FRigUnit_SetupShapeLibraryFromUserData, LibraryName) == 48, "Offset mismatch for FRigUnit_SetupShapeLibraryFromUserData::LibraryName");
static_assert(offsetof(FRigUnit_SetupShapeLibraryFromUserData, LogShapeLibraries) == 64, "Offset mismatch for FRigUnit_SetupShapeLibraryFromUserData::LogShapeLibraries");
static_assert(offsetof(FRigUnit_SetupShapeLibraryFromUserData, bFound) == 65, "Offset mismatch for FRigUnit_SetupShapeLibraryFromUserData::bFound");

// /Script/ControlRig.RigUnit_ShapeExists
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ShapeExists
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ShapeName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Result; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_ShapeExists, ShapeName) == 8, "Offset mismatch for FRigUnit_ShapeExists::ShapeName");
static_assert(offsetof(FRigUnit_ShapeExists, Result) == 12, "Offset mismatch for FRigUnit_ShapeExists::Result");

// /Script/ControlRig.RigUnit_SlideChain
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_SlideChain
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float SlideAmount; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t WorkData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SlideChain, StartBone) == 16, "Offset mismatch for FRigUnit_SlideChain::StartBone");
static_assert(offsetof(FRigUnit_SlideChain, EndBone) == 20, "Offset mismatch for FRigUnit_SlideChain::EndBone");
static_assert(offsetof(FRigUnit_SlideChain, SlideAmount) == 24, "Offset mismatch for FRigUnit_SlideChain::SlideAmount");
static_assert(offsetof(FRigUnit_SlideChain, bPropagateToChildren) == 28, "Offset mismatch for FRigUnit_SlideChain::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SlideChain, WorkData) == 32, "Offset mismatch for FRigUnit_SlideChain::WorkData");

// /Script/ControlRig.RigUnit_SlideChainItemArray
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_SlideChainItemArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float SlideAmount; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t WorkData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SlideChainItemArray, Items) == 16, "Offset mismatch for FRigUnit_SlideChainItemArray::Items");
static_assert(offsetof(FRigUnit_SlideChainItemArray, SlideAmount) == 32, "Offset mismatch for FRigUnit_SlideChainItemArray::SlideAmount");
static_assert(offsetof(FRigUnit_SlideChainItemArray, bPropagateToChildren) == 36, "Offset mismatch for FRigUnit_SlideChainItemArray::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SlideChainItemArray, WorkData) == 40, "Offset mismatch for FRigUnit_SlideChainItemArray::WorkData");

// /Script/ControlRig.RigUnit_SlideChainPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_SlideChainPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float SlideAmount; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t WorkData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SlideChainPerItem, Items) == 16, "Offset mismatch for FRigUnit_SlideChainPerItem::Items");
static_assert(offsetof(FRigUnit_SlideChainPerItem, SlideAmount) == 32, "Offset mismatch for FRigUnit_SlideChainPerItem::SlideAmount");
static_assert(offsetof(FRigUnit_SlideChainPerItem, bPropagateToChildren) == 36, "Offset mismatch for FRigUnit_SlideChainPerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SlideChainPerItem, WorkData) == 40, "Offset mismatch for FRigUnit_SlideChainPerItem::WorkData");

// /Script/ControlRig.RigUnit_SlideChain_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_SlideChain_WorkData
{
public:
    float ChainLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ItemSegments; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedItems; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlendedTransforms; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_SlideChain_WorkData, ChainLength) == 0, "Offset mismatch for FRigUnit_SlideChain_WorkData::ChainLength");
static_assert(offsetof(FRigUnit_SlideChain_WorkData, ItemSegments) == 8, "Offset mismatch for FRigUnit_SlideChain_WorkData::ItemSegments");
static_assert(offsetof(FRigUnit_SlideChain_WorkData, CachedItems) == 24, "Offset mismatch for FRigUnit_SlideChain_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_SlideChain_WorkData, Transforms) == 40, "Offset mismatch for FRigUnit_SlideChain_WorkData::Transforms");
static_assert(offsetof(FRigUnit_SlideChain_WorkData, BlendedTransforms) == 56, "Offset mismatch for FRigUnit_SlideChain_WorkData::BlendedTransforms");

// /Script/ControlRig.RigUnit_SpaceName
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SpaceName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Space; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_SpaceName, Space) == 8, "Offset mismatch for FRigUnit_SpaceName::Space");

// /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SphereTraceByObjectTypes
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    TArray<void*> ObjectTypes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    float Radius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHit; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint8_t HitLocation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, Start) == 8, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::Start");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, End) == 32, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::End");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, ObjectTypes) == 56, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::ObjectTypes");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, Radius) == 72, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::Radius");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, bHit) == 76, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::bHit");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitLocation) == 80, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::HitLocation");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitNormal) == 104, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::HitNormal");
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, WorkData) == 128, "Offset mismatch for FRigUnit_SphereTraceByObjectTypes::WorkData");

// /Script/ControlRig.RigUnit_SphereTraceByProfile
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SphereTraceByProfile
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProfileName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t bHit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t HitLocation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SphereTraceByProfile, Start) == 8, "Offset mismatch for FRigUnit_SphereTraceByProfile::Start");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, End) == 32, "Offset mismatch for FRigUnit_SphereTraceByProfile::End");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, Radius) == 56, "Offset mismatch for FRigUnit_SphereTraceByProfile::Radius");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, ProfileName) == 60, "Offset mismatch for FRigUnit_SphereTraceByProfile::ProfileName");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, bHit) == 64, "Offset mismatch for FRigUnit_SphereTraceByProfile::bHit");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, HitLocation) == 72, "Offset mismatch for FRigUnit_SphereTraceByProfile::HitLocation");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, HitNormal) == 96, "Offset mismatch for FRigUnit_SphereTraceByProfile::HitNormal");
static_assert(offsetof(FRigUnit_SphereTraceByProfile, WorkData) == 120, "Offset mismatch for FRigUnit_SphereTraceByProfile::WorkData");

// /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SphereTraceByTraceChannel
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Radius; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t HitLocation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, Start) == 8, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::Start");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, End) == 32, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::End");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, TraceChannel) == 56, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::TraceChannel");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, Radius) == 60, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::Radius");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, bHit) == 64, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::bHit");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitLocation) == 72, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::HitLocation");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitNormal) == 96, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::HitNormal");
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, WorkData) == 120, "Offset mismatch for FRigUnit_SphereTraceByTraceChannel::WorkData");

// /Script/ControlRig.RigUnit_SphereTraceWorld
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_SphereTraceWorld
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Start[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t End[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Channel; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float Radius; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t HitLocation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SphereTraceWorld, Start) == 8, "Offset mismatch for FRigUnit_SphereTraceWorld::Start");
static_assert(offsetof(FRigUnit_SphereTraceWorld, End) == 32, "Offset mismatch for FRigUnit_SphereTraceWorld::End");
static_assert(offsetof(FRigUnit_SphereTraceWorld, Channel) == 56, "Offset mismatch for FRigUnit_SphereTraceWorld::Channel");
static_assert(offsetof(FRigUnit_SphereTraceWorld, Radius) == 60, "Offset mismatch for FRigUnit_SphereTraceWorld::Radius");
static_assert(offsetof(FRigUnit_SphereTraceWorld, bHit) == 64, "Offset mismatch for FRigUnit_SphereTraceWorld::bHit");
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitLocation) == 72, "Offset mismatch for FRigUnit_SphereTraceWorld::HitLocation");
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitNormal) == 96, "Offset mismatch for FRigUnit_SphereTraceWorld::HitNormal");
static_assert(offsetof(FRigUnit_SphereTraceWorld, WorkData) == 120, "Offset mismatch for FRigUnit_SphereTraceWorld::WorkData");

// /Script/ControlRig.RigUnit_SphereTrace_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_SphereTrace_WorkData
{
public:
    std::uint32_t Hash; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bHit; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t HitLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitNormal[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SphereTrace_WorkData, Hash) == 0, "Offset mismatch for FRigUnit_SphereTrace_WorkData::Hash");
static_assert(offsetof(FRigUnit_SphereTrace_WorkData, bHit) == 4, "Offset mismatch for FRigUnit_SphereTrace_WorkData::bHit");
static_assert(offsetof(FRigUnit_SphereTrace_WorkData, HitLocation) == 8, "Offset mismatch for FRigUnit_SphereTrace_WorkData::HitLocation");
static_assert(offsetof(FRigUnit_SphereTrace_WorkData, HitNormal) == 32, "Offset mismatch for FRigUnit_SphereTrace_WorkData::HitNormal");

// /Script/ControlRig.RigUnit_SphericalPoseReader
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_SphericalPoseReader
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float OutputParam; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DriverItem[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    std::uint8_t DriverAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float ActiveRegionSize; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ActiveRegionScaleFactors[0x10]; // 0x0054 (Size: 0x10, Type: StructProperty)
    float FalloffSize; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FalloffRegionScaleFactors[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t FlipWidthScaling; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FlipHeightScaling; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x007A
    std::uint8_t OptionalParentItem[0x8]; // 0x007C (Size: 0x8, Type: StructProperty)
    std::uint8_t Debug[0x10]; // 0x0084 (Size: 0x10, Type: StructProperty)
    std::uint8_t InnerRegion[0x14]; // 0x0094 (Size: 0x14, Type: StructProperty)
    std::uint8_t OuterRegion[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DriverNormal[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Driver2D[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DriverCache[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t OptionalParentCache[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalDriverTransformInit[0x60]; // 0x0120 (Size: 0x60, Type: StructProperty)
    std::uint8_t CachedRotationOffset[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedParentElementKey[0x8]; // 0x0198 (Size: 0x8, Type: StructProperty)
    std::uint8_t bCachedInitTransforms; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SphericalPoseReader, OutputParam) == 16, "Offset mismatch for FRigUnit_SphericalPoseReader::OutputParam");
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverItem) == 20, "Offset mismatch for FRigUnit_SphericalPoseReader::DriverItem");
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverAxis) == 32, "Offset mismatch for FRigUnit_SphericalPoseReader::DriverAxis");
static_assert(offsetof(FRigUnit_SphericalPoseReader, RotationOffset) == 56, "Offset mismatch for FRigUnit_SphericalPoseReader::RotationOffset");
static_assert(offsetof(FRigUnit_SphericalPoseReader, ActiveRegionSize) == 80, "Offset mismatch for FRigUnit_SphericalPoseReader::ActiveRegionSize");
static_assert(offsetof(FRigUnit_SphericalPoseReader, ActiveRegionScaleFactors) == 84, "Offset mismatch for FRigUnit_SphericalPoseReader::ActiveRegionScaleFactors");
static_assert(offsetof(FRigUnit_SphericalPoseReader, FalloffSize) == 100, "Offset mismatch for FRigUnit_SphericalPoseReader::FalloffSize");
static_assert(offsetof(FRigUnit_SphericalPoseReader, FalloffRegionScaleFactors) == 104, "Offset mismatch for FRigUnit_SphericalPoseReader::FalloffRegionScaleFactors");
static_assert(offsetof(FRigUnit_SphericalPoseReader, FlipWidthScaling) == 120, "Offset mismatch for FRigUnit_SphericalPoseReader::FlipWidthScaling");
static_assert(offsetof(FRigUnit_SphericalPoseReader, FlipHeightScaling) == 121, "Offset mismatch for FRigUnit_SphericalPoseReader::FlipHeightScaling");
static_assert(offsetof(FRigUnit_SphericalPoseReader, OptionalParentItem) == 124, "Offset mismatch for FRigUnit_SphericalPoseReader::OptionalParentItem");
static_assert(offsetof(FRigUnit_SphericalPoseReader, Debug) == 132, "Offset mismatch for FRigUnit_SphericalPoseReader::Debug");
static_assert(offsetof(FRigUnit_SphericalPoseReader, InnerRegion) == 148, "Offset mismatch for FRigUnit_SphericalPoseReader::InnerRegion");
static_assert(offsetof(FRigUnit_SphericalPoseReader, OuterRegion) == 168, "Offset mismatch for FRigUnit_SphericalPoseReader::OuterRegion");
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverNormal) == 192, "Offset mismatch for FRigUnit_SphericalPoseReader::DriverNormal");
static_assert(offsetof(FRigUnit_SphericalPoseReader, Driver2D) == 216, "Offset mismatch for FRigUnit_SphericalPoseReader::Driver2D");
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverCache) == 240, "Offset mismatch for FRigUnit_SphericalPoseReader::DriverCache");
static_assert(offsetof(FRigUnit_SphericalPoseReader, OptionalParentCache) == 264, "Offset mismatch for FRigUnit_SphericalPoseReader::OptionalParentCache");
static_assert(offsetof(FRigUnit_SphericalPoseReader, LocalDriverTransformInit) == 288, "Offset mismatch for FRigUnit_SphericalPoseReader::LocalDriverTransformInit");
static_assert(offsetof(FRigUnit_SphericalPoseReader, CachedRotationOffset) == 384, "Offset mismatch for FRigUnit_SphericalPoseReader::CachedRotationOffset");
static_assert(offsetof(FRigUnit_SphericalPoseReader, CachedParentElementKey) == 408, "Offset mismatch for FRigUnit_SphericalPoseReader::CachedParentElementKey");
static_assert(offsetof(FRigUnit_SphericalPoseReader, bCachedInitTransforms) == 416, "Offset mismatch for FRigUnit_SphericalPoseReader::bCachedInitTransforms");

// /Script/ControlRig.RigUnit_SpringIK
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_SpringIK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    float HierarchyStrength; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EffectorStrength; // 0x001C (Size: 0x4, Type: FloatProperty)
    float EffectorRatio; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float RootStrength; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float RootRatio; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Damping; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PoleVector[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFlipPolePlane; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PoleVectorKind; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    std::uint8_t PoleVectorSpace[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLiveSimulation; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::int32_t Iterations; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLimitLocalPosition; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPropagateToChildren; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x008A
    std::uint8_t DebugSettings[0x80]; // 0x0090 (Size: 0x80, Type: StructProperty)
    std::uint8_t WorkData[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringIK, StartBone) == 16, "Offset mismatch for FRigUnit_SpringIK::StartBone");
static_assert(offsetof(FRigUnit_SpringIK, EndBone) == 20, "Offset mismatch for FRigUnit_SpringIK::EndBone");
static_assert(offsetof(FRigUnit_SpringIK, HierarchyStrength) == 24, "Offset mismatch for FRigUnit_SpringIK::HierarchyStrength");
static_assert(offsetof(FRigUnit_SpringIK, EffectorStrength) == 28, "Offset mismatch for FRigUnit_SpringIK::EffectorStrength");
static_assert(offsetof(FRigUnit_SpringIK, EffectorRatio) == 32, "Offset mismatch for FRigUnit_SpringIK::EffectorRatio");
static_assert(offsetof(FRigUnit_SpringIK, RootStrength) == 36, "Offset mismatch for FRigUnit_SpringIK::RootStrength");
static_assert(offsetof(FRigUnit_SpringIK, RootRatio) == 40, "Offset mismatch for FRigUnit_SpringIK::RootRatio");
static_assert(offsetof(FRigUnit_SpringIK, Damping) == 44, "Offset mismatch for FRigUnit_SpringIK::Damping");
static_assert(offsetof(FRigUnit_SpringIK, PoleVector) == 48, "Offset mismatch for FRigUnit_SpringIK::PoleVector");
static_assert(offsetof(FRigUnit_SpringIK, bFlipPolePlane) == 72, "Offset mismatch for FRigUnit_SpringIK::bFlipPolePlane");
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorKind) == 73, "Offset mismatch for FRigUnit_SpringIK::PoleVectorKind");
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorSpace) == 76, "Offset mismatch for FRigUnit_SpringIK::PoleVectorSpace");
static_assert(offsetof(FRigUnit_SpringIK, PrimaryAxis) == 80, "Offset mismatch for FRigUnit_SpringIK::PrimaryAxis");
static_assert(offsetof(FRigUnit_SpringIK, SecondaryAxis) == 104, "Offset mismatch for FRigUnit_SpringIK::SecondaryAxis");
static_assert(offsetof(FRigUnit_SpringIK, bLiveSimulation) == 128, "Offset mismatch for FRigUnit_SpringIK::bLiveSimulation");
static_assert(offsetof(FRigUnit_SpringIK, Iterations) == 132, "Offset mismatch for FRigUnit_SpringIK::Iterations");
static_assert(offsetof(FRigUnit_SpringIK, bLimitLocalPosition) == 136, "Offset mismatch for FRigUnit_SpringIK::bLimitLocalPosition");
static_assert(offsetof(FRigUnit_SpringIK, bPropagateToChildren) == 137, "Offset mismatch for FRigUnit_SpringIK::bPropagateToChildren");
static_assert(offsetof(FRigUnit_SpringIK, DebugSettings) == 144, "Offset mismatch for FRigUnit_SpringIK::DebugSettings");
static_assert(offsetof(FRigUnit_SpringIK, WorkData) == 272, "Offset mismatch for FRigUnit_SpringIK::WorkData");

// /Script/ControlRig.RigUnit_SpringIK_DebugSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_SpringIK_DebugSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldOffset[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, bEnabled) == 0, "Offset mismatch for FRigUnit_SpringIK_DebugSettings::bEnabled");
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Scale) == 4, "Offset mismatch for FRigUnit_SpringIK_DebugSettings::Scale");
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Color) == 8, "Offset mismatch for FRigUnit_SpringIK_DebugSettings::Color");
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, WorldOffset) == 32, "Offset mismatch for FRigUnit_SpringIK_DebugSettings::WorldOffset");

// /Script/ControlRig.RigUnit_SpringIK_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_SpringIK_WorkData
{
public:
    TArray<void*> CachedBones; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedPoleVector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> Transforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Simulation[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedBones) == 0, "Offset mismatch for FRigUnit_SpringIK_WorkData::CachedBones");
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedPoleVector) == 16, "Offset mismatch for FRigUnit_SpringIK_WorkData::CachedPoleVector");
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Transforms) == 40, "Offset mismatch for FRigUnit_SpringIK_WorkData::Transforms");
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Simulation) == 56, "Offset mismatch for FRigUnit_SpringIK_WorkData::Simulation");

// /Script/ControlRig.RigUnit_SpringInterp
// Kind: ScriptStruct; super: RigVMFunction_SimBase
struct FRigUnit_SpringInterp
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Current; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Target; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float CriticalDamping; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Result; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringState[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringInterp, Current) == 8, "Offset mismatch for FRigUnit_SpringInterp::Current");
static_assert(offsetof(FRigUnit_SpringInterp, Target) == 12, "Offset mismatch for FRigUnit_SpringInterp::Target");
static_assert(offsetof(FRigUnit_SpringInterp, Stiffness) == 16, "Offset mismatch for FRigUnit_SpringInterp::Stiffness");
static_assert(offsetof(FRigUnit_SpringInterp, CriticalDamping) == 20, "Offset mismatch for FRigUnit_SpringInterp::CriticalDamping");
static_assert(offsetof(FRigUnit_SpringInterp, Mass) == 24, "Offset mismatch for FRigUnit_SpringInterp::Mass");
static_assert(offsetof(FRigUnit_SpringInterp, Result) == 28, "Offset mismatch for FRigUnit_SpringInterp::Result");
static_assert(offsetof(FRigUnit_SpringInterp, SpringState) == 32, "Offset mismatch for FRigUnit_SpringInterp::SpringState");

// /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
// Kind: ScriptStruct; super: RigVMFunction_SimBase
struct FRigUnit_SpringInterpQuaternionV2
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Target[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    float Strength; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CriticalDamping; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Torque[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseCurrentInput; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0051
    std::uint8_t Current[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    float TargetVelocityAmount; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInitializeFromTarget; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xB]; // 0x0085
    std::uint8_t Result[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t AngularVelocity[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SimulatedResult[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpringState[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Target) == 16, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::Target");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Strength) == 48, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::Strength");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, CriticalDamping) == 52, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::CriticalDamping");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Torque) == 56, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::Torque");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, bUseCurrentInput) == 80, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::bUseCurrentInput");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Current) == 96, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::Current");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, TargetVelocityAmount) == 128, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::TargetVelocityAmount");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, bInitializeFromTarget) == 132, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::bInitializeFromTarget");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Result) == 144, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::Result");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, AngularVelocity) == 176, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::AngularVelocity");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, SimulatedResult) == 208, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::SimulatedResult");
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, SpringState) == 240, "Offset mismatch for FRigUnit_SpringInterpQuaternionV2::SpringState");

// /Script/ControlRig.RigUnit_SpringInterpV2
// Kind: ScriptStruct; super: RigVMFunction_SimBase
struct FRigUnit_SpringInterpV2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Target; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CriticalDamping; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Force; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseCurrentInput; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    float Current; // 0x001C (Size: 0x4, Type: FloatProperty)
    float TargetVelocityAmount; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInitializeFromTarget; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    float Result; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Velocity; // 0x002C (Size: 0x4, Type: FloatProperty)
    float SimulatedResult; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpringState[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringInterpV2, Target) == 8, "Offset mismatch for FRigUnit_SpringInterpV2::Target");
static_assert(offsetof(FRigUnit_SpringInterpV2, Strength) == 12, "Offset mismatch for FRigUnit_SpringInterpV2::Strength");
static_assert(offsetof(FRigUnit_SpringInterpV2, CriticalDamping) == 16, "Offset mismatch for FRigUnit_SpringInterpV2::CriticalDamping");
static_assert(offsetof(FRigUnit_SpringInterpV2, Force) == 20, "Offset mismatch for FRigUnit_SpringInterpV2::Force");
static_assert(offsetof(FRigUnit_SpringInterpV2, bUseCurrentInput) == 24, "Offset mismatch for FRigUnit_SpringInterpV2::bUseCurrentInput");
static_assert(offsetof(FRigUnit_SpringInterpV2, Current) == 28, "Offset mismatch for FRigUnit_SpringInterpV2::Current");
static_assert(offsetof(FRigUnit_SpringInterpV2, TargetVelocityAmount) == 32, "Offset mismatch for FRigUnit_SpringInterpV2::TargetVelocityAmount");
static_assert(offsetof(FRigUnit_SpringInterpV2, bInitializeFromTarget) == 36, "Offset mismatch for FRigUnit_SpringInterpV2::bInitializeFromTarget");
static_assert(offsetof(FRigUnit_SpringInterpV2, Result) == 40, "Offset mismatch for FRigUnit_SpringInterpV2::Result");
static_assert(offsetof(FRigUnit_SpringInterpV2, Velocity) == 44, "Offset mismatch for FRigUnit_SpringInterpV2::Velocity");
static_assert(offsetof(FRigUnit_SpringInterpV2, SimulatedResult) == 48, "Offset mismatch for FRigUnit_SpringInterpV2::SimulatedResult");
static_assert(offsetof(FRigUnit_SpringInterpV2, SpringState) == 52, "Offset mismatch for FRigUnit_SpringInterpV2::SpringState");

// /Script/ControlRig.RigUnit_SpringInterpVector
// Kind: ScriptStruct; super: RigVMFunction_SimBase
struct FRigUnit_SpringInterpVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Current[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Target[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Stiffness; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float CriticalDamping; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t Result[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpringState[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringInterpVector, Current) == 8, "Offset mismatch for FRigUnit_SpringInterpVector::Current");
static_assert(offsetof(FRigUnit_SpringInterpVector, Target) == 32, "Offset mismatch for FRigUnit_SpringInterpVector::Target");
static_assert(offsetof(FRigUnit_SpringInterpVector, Stiffness) == 56, "Offset mismatch for FRigUnit_SpringInterpVector::Stiffness");
static_assert(offsetof(FRigUnit_SpringInterpVector, CriticalDamping) == 60, "Offset mismatch for FRigUnit_SpringInterpVector::CriticalDamping");
static_assert(offsetof(FRigUnit_SpringInterpVector, Mass) == 64, "Offset mismatch for FRigUnit_SpringInterpVector::Mass");
static_assert(offsetof(FRigUnit_SpringInterpVector, Result) == 72, "Offset mismatch for FRigUnit_SpringInterpVector::Result");
static_assert(offsetof(FRigUnit_SpringInterpVector, SpringState) == 96, "Offset mismatch for FRigUnit_SpringInterpVector::SpringState");

// /Script/ControlRig.RigUnit_SpringInterpVectorV2
// Kind: ScriptStruct; super: RigVMFunction_SimBase
struct FRigUnit_SpringInterpVectorV2
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Target[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Strength; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float CriticalDamping; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Force[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseCurrentInput; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t Current[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float TargetVelocityAmount; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInitializeFromTarget; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0065
    std::uint8_t Result[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimulatedResult[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpringState[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Target) == 8, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Target");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Strength) == 32, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Strength");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, CriticalDamping) == 36, "Offset mismatch for FRigUnit_SpringInterpVectorV2::CriticalDamping");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Force) == 40, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Force");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, bUseCurrentInput) == 64, "Offset mismatch for FRigUnit_SpringInterpVectorV2::bUseCurrentInput");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Current) == 72, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Current");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, TargetVelocityAmount) == 96, "Offset mismatch for FRigUnit_SpringInterpVectorV2::TargetVelocityAmount");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, bInitializeFromTarget) == 100, "Offset mismatch for FRigUnit_SpringInterpVectorV2::bInitializeFromTarget");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Result) == 104, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Result");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Velocity) == 128, "Offset mismatch for FRigUnit_SpringInterpVectorV2::Velocity");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, SimulatedResult) == 152, "Offset mismatch for FRigUnit_SpringInterpVectorV2::SimulatedResult");
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, SpringState) == 176, "Offset mismatch for FRigUnit_SpringInterpVectorV2::SpringState");

// /Script/ControlRig.RigUnit_StartProfilingTimer
// Kind: ScriptStruct; super: RigVMFunction_DebugBaseMutable
struct FRigUnit_StartProfilingTimer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DebugDrawSettings[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_StartProfilingTimer, DebugDrawSettings) == 16, "Offset mismatch for FRigUnit_StartProfilingTimer::DebugDrawSettings");

// /Script/ControlRig.RigUnit_Subtract_FloatFloat
// Kind: ScriptStruct; super: RigUnit_BinaryFloatOp
struct FRigUnit_Subtract_FloatFloat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Argument0; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Argument1; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Result; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigUnit_Subtract_FloatFloat, Argument0) == 8, "Offset mismatch for FRigUnit_Subtract_FloatFloat::Argument0");
static_assert(offsetof(FRigUnit_Subtract_FloatFloat, Argument1) == 12, "Offset mismatch for FRigUnit_Subtract_FloatFloat::Argument1");
static_assert(offsetof(FRigUnit_Subtract_FloatFloat, Result) == 16, "Offset mismatch for FRigUnit_Subtract_FloatFloat::Result");

// /Script/ControlRig.RigUnit_Subtract_VectorVector
// Kind: ScriptStruct; super: RigUnit_BinaryVectorOp
struct FRigUnit_Subtract_VectorVector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Argument0[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Argument1[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_Subtract_VectorVector, Argument0) == 8, "Offset mismatch for FRigUnit_Subtract_VectorVector::Argument0");
static_assert(offsetof(FRigUnit_Subtract_VectorVector, Argument1) == 32, "Offset mismatch for FRigUnit_Subtract_VectorVector::Argument1");
static_assert(offsetof(FRigUnit_Subtract_VectorVector, Result) == 56, "Offset mismatch for FRigUnit_Subtract_VectorVector::Result");

// /Script/ControlRig.RigUnit_SwitchParent
// Kind: ScriptStruct; super: RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_SwitchParent
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t Child[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t Parent[0x8]; // 0x001C (Size: 0x8, Type: StructProperty)
    std::uint8_t bMaintainGlobal; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_SwitchParent, Mode) == 16, "Offset mismatch for FRigUnit_SwitchParent::Mode");
static_assert(offsetof(FRigUnit_SwitchParent, Child) == 20, "Offset mismatch for FRigUnit_SwitchParent::Child");
static_assert(offsetof(FRigUnit_SwitchParent, Parent) == 28, "Offset mismatch for FRigUnit_SwitchParent::Parent");
static_assert(offsetof(FRigUnit_SwitchParent, bMaintainGlobal) == 36, "Offset mismatch for FRigUnit_SwitchParent::bMaintainGlobal");

// /Script/ControlRig.RigUnit_ToRigSpace_Location
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToRigSpace_Location
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Global[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToRigSpace_Location, Value) == 8, "Offset mismatch for FRigUnit_ToRigSpace_Location::Value");
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Global) == 32, "Offset mismatch for FRigUnit_ToRigSpace_Location::Global");

// /Script/ControlRig.RigUnit_ToRigSpace_Rotation
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToRigSpace_Rotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Global[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Value) == 16, "Offset mismatch for FRigUnit_ToRigSpace_Rotation::Value");
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Global) == 48, "Offset mismatch for FRigUnit_ToRigSpace_Rotation::Global");

// /Script/ControlRig.RigUnit_ToRigSpace_Transform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToRigSpace_Transform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t Global[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Value) == 16, "Offset mismatch for FRigUnit_ToRigSpace_Transform::Value");
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Global) == 112, "Offset mismatch for FRigUnit_ToRigSpace_Transform::Global");

// /Script/ControlRig.RigUnit_ToSwingAndTwist
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToSwingAndTwist
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Input[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t TwistAxis[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Swing[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    std::uint8_t Twist[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToSwingAndTwist, Input) == 16, "Offset mismatch for FRigUnit_ToSwingAndTwist::Input");
static_assert(offsetof(FRigUnit_ToSwingAndTwist, TwistAxis) == 48, "Offset mismatch for FRigUnit_ToSwingAndTwist::TwistAxis");
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Swing) == 80, "Offset mismatch for FRigUnit_ToSwingAndTwist::Swing");
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Twist) == 112, "Offset mismatch for FRigUnit_ToSwingAndTwist::Twist");

// /Script/ControlRig.RigUnit_ToWorldSpace_Location
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToWorldSpace_Location
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t World[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToWorldSpace_Location, Value) == 8, "Offset mismatch for FRigUnit_ToWorldSpace_Location::Value");
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, World) == 32, "Offset mismatch for FRigUnit_ToWorldSpace_Location::World");

// /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToWorldSpace_Rotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t World[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, Value) == 16, "Offset mismatch for FRigUnit_ToWorldSpace_Rotation::Value");
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, World) == 48, "Offset mismatch for FRigUnit_ToWorldSpace_Rotation::World");

// /Script/ControlRig.RigUnit_ToWorldSpace_Transform
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_ToWorldSpace_Transform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t World[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, Value) == 16, "Offset mismatch for FRigUnit_ToWorldSpace_Transform::Value");
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, World) == 112, "Offset mismatch for FRigUnit_ToWorldSpace_Transform::World");

// /Script/ControlRig.RigUnit_TransformConstraint
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TransformConstraint
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseTransformSpace; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0015
    std::uint8_t BaseTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    FName BaseBone; // 0x0080 (Size: 0x8, Type: NameProperty)
    TArray<void*> Targets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseInitialTransforms; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    std::uint8_t WorkData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TransformConstraint, bone) == 16, "Offset mismatch for FRigUnit_TransformConstraint::bone");
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransformSpace) == 20, "Offset mismatch for FRigUnit_TransformConstraint::BaseTransformSpace");
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransform) == 32, "Offset mismatch for FRigUnit_TransformConstraint::BaseTransform");
static_assert(offsetof(FRigUnit_TransformConstraint, BaseBone) == 128, "Offset mismatch for FRigUnit_TransformConstraint::BaseBone");
static_assert(offsetof(FRigUnit_TransformConstraint, Targets) == 136, "Offset mismatch for FRigUnit_TransformConstraint::Targets");
static_assert(offsetof(FRigUnit_TransformConstraint, bUseInitialTransforms) == 152, "Offset mismatch for FRigUnit_TransformConstraint::bUseInitialTransforms");
static_assert(offsetof(FRigUnit_TransformConstraint, WorkData) == 160, "Offset mismatch for FRigUnit_TransformConstraint::WorkData");

// /Script/ControlRig.RigUnit_TransformConstraintPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TransformConstraintPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Item[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t BaseTransformSpace; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t BaseTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t BaseItem[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    TArray<void*> Targets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseInitialTransforms; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    std::uint8_t WorkData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Item) == 16, "Offset mismatch for FRigUnit_TransformConstraintPerItem::Item");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransformSpace) == 24, "Offset mismatch for FRigUnit_TransformConstraintPerItem::BaseTransformSpace");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransform) == 32, "Offset mismatch for FRigUnit_TransformConstraintPerItem::BaseTransform");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseItem) == 128, "Offset mismatch for FRigUnit_TransformConstraintPerItem::BaseItem");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Targets) == 136, "Offset mismatch for FRigUnit_TransformConstraintPerItem::Targets");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, bUseInitialTransforms) == 152, "Offset mismatch for FRigUnit_TransformConstraintPerItem::bUseInitialTransforms");
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, WorkData) == 160, "Offset mismatch for FRigUnit_TransformConstraintPerItem::WorkData");

// /Script/ControlRig.RigUnit_TransformConstraint_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_TransformConstraint_WorkData
{
public:
    TArray<void*> ConstraintData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ConstraintDataToTargets; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintData) == 0, "Offset mismatch for FRigUnit_TransformConstraint_WorkData::ConstraintData");
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets) == 16, "Offset mismatch for FRigUnit_TransformConstraint_WorkData::ConstraintDataToTargets");

// /Script/ControlRig.RigUnit_TwistBones
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TwistBones
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartBone[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndBone[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t TwistAxis[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleAxis[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t TwistEaseType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    float Weight; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    std::uint8_t WorkData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwistBones, StartBone) == 16, "Offset mismatch for FRigUnit_TwistBones::StartBone");
static_assert(offsetof(FRigUnit_TwistBones, EndBone) == 20, "Offset mismatch for FRigUnit_TwistBones::EndBone");
static_assert(offsetof(FRigUnit_TwistBones, TwistAxis) == 24, "Offset mismatch for FRigUnit_TwistBones::TwistAxis");
static_assert(offsetof(FRigUnit_TwistBones, PoleAxis) == 48, "Offset mismatch for FRigUnit_TwistBones::PoleAxis");
static_assert(offsetof(FRigUnit_TwistBones, TwistEaseType) == 72, "Offset mismatch for FRigUnit_TwistBones::TwistEaseType");
static_assert(offsetof(FRigUnit_TwistBones, Weight) == 76, "Offset mismatch for FRigUnit_TwistBones::Weight");
static_assert(offsetof(FRigUnit_TwistBones, bPropagateToChildren) == 80, "Offset mismatch for FRigUnit_TwistBones::bPropagateToChildren");
static_assert(offsetof(FRigUnit_TwistBones, WorkData) == 88, "Offset mismatch for FRigUnit_TwistBones::WorkData");

// /Script/ControlRig.RigUnit_TwistBonesPerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TwistBonesPerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Items[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t TwistAxis[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleAxis[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t TwistEaseType; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    float Weight; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0059
    std::uint8_t WorkData[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwistBonesPerItem, Items) == 16, "Offset mismatch for FRigUnit_TwistBonesPerItem::Items");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistAxis) == 32, "Offset mismatch for FRigUnit_TwistBonesPerItem::TwistAxis");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, PoleAxis) == 56, "Offset mismatch for FRigUnit_TwistBonesPerItem::PoleAxis");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistEaseType) == 80, "Offset mismatch for FRigUnit_TwistBonesPerItem::TwistEaseType");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, Weight) == 84, "Offset mismatch for FRigUnit_TwistBonesPerItem::Weight");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, bPropagateToChildren) == 88, "Offset mismatch for FRigUnit_TwistBonesPerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_TwistBonesPerItem, WorkData) == 96, "Offset mismatch for FRigUnit_TwistBonesPerItem::WorkData");

// /Script/ControlRig.RigUnit_TwistBones_WorkData
// Kind: ScriptStruct; super: none
struct FRigUnit_TwistBones_WorkData
{
public:
    TArray<void*> CachedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemRatios; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemTransforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_TwistBones_WorkData, CachedItems) == 0, "Offset mismatch for FRigUnit_TwistBones_WorkData::CachedItems");
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemRatios) == 16, "Offset mismatch for FRigUnit_TwistBones_WorkData::ItemRatios");
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemTransforms) == 32, "Offset mismatch for FRigUnit_TwistBones_WorkData::ItemTransforms");

// /Script/ControlRig.RigUnit_TwoBoneIKFK
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_TwoBoneIKFK
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StartJoint[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndJoint[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t PoleTarget[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Spin; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0034
    std::uint8_t EndEffector[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    float IKBlend; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00A4
    std::uint8_t StartJointFKTransform[0x60]; // 0x00B0 (Size: 0x60, Type: StructProperty)
    std::uint8_t MidJointFKTransform[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t EndJointFKTransform[0x60]; // 0x0170 (Size: 0x60, Type: StructProperty)
    float PreviousFKIKBlend; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0xC]; // 0x01D4
    std::uint8_t StartJointIKTransform[0x60]; // 0x01E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t MidJointIKTransform[0x60]; // 0x0240 (Size: 0x60, Type: StructProperty)
    std::uint8_t EndJointIKTransform[0x60]; // 0x02A0 (Size: 0x60, Type: StructProperty)
    std::int32_t StartJointIndex; // 0x0300 (Size: 0x4, Type: IntProperty)
    std::int32_t MidJointIndex; // 0x0304 (Size: 0x4, Type: IntProperty)
    std::int32_t EndJointIndex; // 0x0308 (Size: 0x4, Type: IntProperty)
    float UpperLimbLength; // 0x030C (Size: 0x4, Type: FloatProperty)
    float LowerLimbLength; // 0x0310 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInitialized; // 0x0314 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJoint) == 16, "Offset mismatch for FRigUnit_TwoBoneIKFK::StartJoint");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJoint) == 20, "Offset mismatch for FRigUnit_TwoBoneIKFK::EndJoint");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PoleTarget) == 24, "Offset mismatch for FRigUnit_TwoBoneIKFK::PoleTarget");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, Spin) == 48, "Offset mismatch for FRigUnit_TwoBoneIKFK::Spin");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndEffector) == 64, "Offset mismatch for FRigUnit_TwoBoneIKFK::EndEffector");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, IKBlend) == 160, "Offset mismatch for FRigUnit_TwoBoneIKFK::IKBlend");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointFKTransform) == 176, "Offset mismatch for FRigUnit_TwoBoneIKFK::StartJointFKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointFKTransform) == 272, "Offset mismatch for FRigUnit_TwoBoneIKFK::MidJointFKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointFKTransform) == 368, "Offset mismatch for FRigUnit_TwoBoneIKFK::EndJointFKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PreviousFKIKBlend) == 464, "Offset mismatch for FRigUnit_TwoBoneIKFK::PreviousFKIKBlend");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIKTransform) == 480, "Offset mismatch for FRigUnit_TwoBoneIKFK::StartJointIKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIKTransform) == 576, "Offset mismatch for FRigUnit_TwoBoneIKFK::MidJointIKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIKTransform) == 672, "Offset mismatch for FRigUnit_TwoBoneIKFK::EndJointIKTransform");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIndex) == 768, "Offset mismatch for FRigUnit_TwoBoneIKFK::StartJointIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIndex) == 772, "Offset mismatch for FRigUnit_TwoBoneIKFK::MidJointIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIndex) == 776, "Offset mismatch for FRigUnit_TwoBoneIKFK::EndJointIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, UpperLimbLength) == 780, "Offset mismatch for FRigUnit_TwoBoneIKFK::UpperLimbLength");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, LowerLimbLength) == 784, "Offset mismatch for FRigUnit_TwoBoneIKFK::LowerLimbLength");
static_assert(offsetof(FRigUnit_TwoBoneIKFK, bIsInitialized) == 788, "Offset mismatch for FRigUnit_TwoBoneIKFK::bIsInitialized");

// /Script/ControlRig.RigUnit_TwoBoneIKSimple
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TwoBoneIKSimple
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t BoneA[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneB[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    FName EffectorBone; // 0x0018 (Size: 0x8, Type: NameProperty)
    std::uint8_t Effector[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    float SecondaryAxisWeight; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    std::uint8_t PoleVector[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorKind; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00D1
    std::uint8_t PoleVectorSpace[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnableStretch; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00D9
    float StretchStartRatio; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float StretchMaximumRatio; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float BoneALength; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float BoneBLength; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x00F1
    std::uint8_t DebugSettings[0x70]; // 0x0100 (Size: 0x70, Type: StructProperty)
    std::uint8_t CachedBoneAIndex[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedBoneBIndex[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedEffectorBoneIndex[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedPoleVectorSpaceIndex[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneA) == 16, "Offset mismatch for FRigUnit_TwoBoneIKSimple::BoneA");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneB) == 20, "Offset mismatch for FRigUnit_TwoBoneIKSimple::BoneB");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, EffectorBone) == 24, "Offset mismatch for FRigUnit_TwoBoneIKSimple::EffectorBone");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Effector) == 32, "Offset mismatch for FRigUnit_TwoBoneIKSimple::Effector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PrimaryAxis) == 128, "Offset mismatch for FRigUnit_TwoBoneIKSimple::PrimaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxis) == 152, "Offset mismatch for FRigUnit_TwoBoneIKSimple::SecondaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxisWeight) == 176, "Offset mismatch for FRigUnit_TwoBoneIKSimple::SecondaryAxisWeight");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVector) == 184, "Offset mismatch for FRigUnit_TwoBoneIKSimple::PoleVector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorKind) == 208, "Offset mismatch for FRigUnit_TwoBoneIKSimple::PoleVectorKind");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorSpace) == 212, "Offset mismatch for FRigUnit_TwoBoneIKSimple::PoleVectorSpace");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, bEnableStretch) == 216, "Offset mismatch for FRigUnit_TwoBoneIKSimple::bEnableStretch");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, StretchStartRatio) == 220, "Offset mismatch for FRigUnit_TwoBoneIKSimple::StretchStartRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, StretchMaximumRatio) == 224, "Offset mismatch for FRigUnit_TwoBoneIKSimple::StretchMaximumRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Weight) == 228, "Offset mismatch for FRigUnit_TwoBoneIKSimple::Weight");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneALength) == 232, "Offset mismatch for FRigUnit_TwoBoneIKSimple::BoneALength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneBLength) == 236, "Offset mismatch for FRigUnit_TwoBoneIKSimple::BoneBLength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, bPropagateToChildren) == 240, "Offset mismatch for FRigUnit_TwoBoneIKSimple::bPropagateToChildren");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, DebugSettings) == 256, "Offset mismatch for FRigUnit_TwoBoneIKSimple::DebugSettings");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex) == 368, "Offset mismatch for FRigUnit_TwoBoneIKSimple::CachedBoneAIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex) == 392, "Offset mismatch for FRigUnit_TwoBoneIKSimple::CachedBoneBIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex) == 416, "Offset mismatch for FRigUnit_TwoBoneIKSimple::CachedEffectorBoneIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex) == 440, "Offset mismatch for FRigUnit_TwoBoneIKSimple::CachedPoleVectorSpaceIndex");

// /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Kind: ScriptStruct; super: RigUnit_HighlevelBaseMutable
struct FRigUnit_TwoBoneIKSimplePerItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ItemA[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ItemB[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t EffectorItem[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Effector[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    float SecondaryAxisWeight; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t PoleVector[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVectorKind; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    std::uint8_t PoleVectorSpace[0x8]; // 0x00E4 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableStretch; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00ED
    float StretchStartRatio; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float StretchMaximumRatio; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float ItemALength; // 0x00FC (Size: 0x4, Type: FloatProperty)
    float ItemBLength; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPropagateToChildren; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xB]; // 0x0105
    std::uint8_t DebugSettings[0x70]; // 0x0110 (Size: 0x70, Type: StructProperty)
    std::uint8_t CachedItemAIndex[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedItemBIndex[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedEffectorItemIndex[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedPoleVectorSpaceIndex[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemA) == 16, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::ItemA");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemB) == 24, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::ItemB");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem) == 32, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::EffectorItem");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Effector) == 48, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::Effector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis) == 144, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::PrimaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis) == 168, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::SecondaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxisWeight) == 192, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::SecondaryAxisWeight");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVector) == 200, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::PoleVector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorKind) == 224, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::PoleVectorKind");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace) == 228, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::PoleVectorSpace");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, bEnableStretch) == 236, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::bEnableStretch");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, StretchStartRatio) == 240, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::StretchStartRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, StretchMaximumRatio) == 244, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::StretchMaximumRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Weight) == 248, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::Weight");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemALength) == 252, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::ItemALength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemBLength) == 256, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::ItemBLength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, bPropagateToChildren) == 260, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::bPropagateToChildren");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings) == 272, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::DebugSettings");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex) == 384, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::CachedItemAIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex) == 408, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::CachedItemBIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex) == 432, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::CachedEffectorItemIndex");
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex) == 456, "Offset mismatch for FRigUnit_TwoBoneIKSimplePerItem::CachedPoleVectorSpaceIndex");

// /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FRigUnit_TwoBoneIKSimpleTransforms
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Root[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t PoleVector[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t Effector[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    std::uint8_t PrimaryAxis[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAxis[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    float SecondaryAxisWeight; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableStretch; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0125
    float StretchStartRatio; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float StretchMaximumRatio; // 0x012C (Size: 0x4, Type: FloatProperty)
    float BoneALength; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float BoneBLength; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0138
    std::uint8_t Elbow[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Root) == 16, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::Root");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector) == 112, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::PoleVector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Effector) == 144, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::Effector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis) == 240, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::PrimaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis) == 264, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::SecondaryAxis");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxisWeight) == 288, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::SecondaryAxisWeight");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, bEnableStretch) == 292, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::bEnableStretch");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, StretchStartRatio) == 296, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::StretchStartRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, StretchMaximumRatio) == 300, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::StretchMaximumRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, BoneALength) == 304, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::BoneALength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, BoneBLength) == 308, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::BoneBLength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Elbow) == 320, "Offset mismatch for FRigUnit_TwoBoneIKSimpleTransforms::Elbow");

// /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Kind: ScriptStruct; super: RigUnit_HighlevelBase
struct FRigUnit_TwoBoneIKSimpleVectors
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Root[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t PoleVector[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Effector[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableStretch; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    float StretchStartRatio; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float StretchMaximumRatio; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float BoneALength; // 0x005C (Size: 0x4, Type: FloatProperty)
    float BoneBLength; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    std::uint8_t Elbow[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Root) == 8, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::Root");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, PoleVector) == 32, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::PoleVector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Effector) == 56, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::Effector");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, bEnableStretch) == 80, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::bEnableStretch");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, StretchStartRatio) == 84, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::StretchStartRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, StretchMaximumRatio) == 88, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::StretchMaximumRatio");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, BoneALength) == 92, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::BoneALength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, BoneBLength) == 96, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::BoneBLength");
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Elbow) == 104, "Offset mismatch for FRigUnit_TwoBoneIKSimpleVectors::Elbow");

// /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
// Kind: ScriptStruct; super: none
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0008
    std::uint8_t WorldOffset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, bEnabled) == 0, "Offset mismatch for FRigUnit_TwoBoneIKSimple_DebugSettings::bEnabled");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, Scale) == 4, "Offset mismatch for FRigUnit_TwoBoneIKSimple_DebugSettings::Scale");
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset) == 16, "Offset mismatch for FRigUnit_TwoBoneIKSimple_DebugSettings::WorldOffset");

// /Script/ControlRig.RigUnit_UnaryQuaternionOp
// Kind: ScriptStruct; super: RigUnit
struct FRigUnit_UnaryQuaternionOp
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Argument[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Result[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Argument) == 16, "Offset mismatch for FRigUnit_UnaryQuaternionOp::Argument");
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Result) == 48, "Offset mismatch for FRigUnit_UnaryQuaternionOp::Result");

// /Script/ControlRig.RigUnit_UnsetCurveValue
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_UnsetCurveValue
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName Curve; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t CachedCurveIndex[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_UnsetCurveValue, Curve) == 16, "Offset mismatch for FRigUnit_UnsetCurveValue::Curve");
static_assert(offsetof(FRigUnit_UnsetCurveValue, CachedCurveIndex) == 24, "Offset mismatch for FRigUnit_UnsetCurveValue::CachedCurveIndex");

// /Script/ControlRig.RigUnit_VisualDebugQuat
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugQuat
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Thickness; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0038 (Size: 0x4, Type: FloatProperty)
    FName BoneSpace; // 0x003C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugQuat, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugQuat::Value");
static_assert(offsetof(FRigUnit_VisualDebugQuat, bEnabled) == 48, "Offset mismatch for FRigUnit_VisualDebugQuat::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugQuat, Thickness) == 52, "Offset mismatch for FRigUnit_VisualDebugQuat::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugQuat, Scale) == 56, "Offset mismatch for FRigUnit_VisualDebugQuat::Scale");
static_assert(offsetof(FRigUnit_VisualDebugQuat, BoneSpace) == 60, "Offset mismatch for FRigUnit_VisualDebugQuat::BoneSpace");

// /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugQuatItemSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    float Thickness; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugQuatItemSpace::Value");
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, bEnabled) == 48, "Offset mismatch for FRigUnit_VisualDebugQuatItemSpace::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Thickness) == 52, "Offset mismatch for FRigUnit_VisualDebugQuatItemSpace::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Scale) == 56, "Offset mismatch for FRigUnit_VisualDebugQuatItemSpace::Scale");
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Space) == 60, "Offset mismatch for FRigUnit_VisualDebugQuatItemSpace::Space");

// /Script/ControlRig.RigUnit_VisualDebugTransform
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugTransform
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float Thickness; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0078 (Size: 0x4, Type: FloatProperty)
    FName BoneSpace; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugTransform, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugTransform::Value");
static_assert(offsetof(FRigUnit_VisualDebugTransform, bEnabled) == 112, "Offset mismatch for FRigUnit_VisualDebugTransform::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugTransform, Thickness) == 116, "Offset mismatch for FRigUnit_VisualDebugTransform::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugTransform, Scale) == 120, "Offset mismatch for FRigUnit_VisualDebugTransform::Scale");
static_assert(offsetof(FRigUnit_VisualDebugTransform, BoneSpace) == 124, "Offset mismatch for FRigUnit_VisualDebugTransform::BoneSpace");

// /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugTransformItemSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float Thickness; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x1]; // 0x007C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugTransformItemSpace::Value");
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, bEnabled) == 112, "Offset mismatch for FRigUnit_VisualDebugTransformItemSpace::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Thickness) == 116, "Offset mismatch for FRigUnit_VisualDebugTransformItemSpace::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Scale) == 120, "Offset mismatch for FRigUnit_VisualDebugTransformItemSpace::Scale");
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Space) == 124, "Offset mismatch for FRigUnit_VisualDebugTransformItemSpace::Space");

// /Script/ControlRig.RigUnit_VisualDebugVector
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugVector
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mode; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t Color[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    FName BoneSpace; // 0x0044 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugVector, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugVector::Value");
static_assert(offsetof(FRigUnit_VisualDebugVector, bEnabled) == 40, "Offset mismatch for FRigUnit_VisualDebugVector::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugVector, Mode) == 41, "Offset mismatch for FRigUnit_VisualDebugVector::Mode");
static_assert(offsetof(FRigUnit_VisualDebugVector, Color) == 44, "Offset mismatch for FRigUnit_VisualDebugVector::Color");
static_assert(offsetof(FRigUnit_VisualDebugVector, Thickness) == 60, "Offset mismatch for FRigUnit_VisualDebugVector::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugVector, Scale) == 64, "Offset mismatch for FRigUnit_VisualDebugVector::Scale");
static_assert(offsetof(FRigUnit_VisualDebugVector, BoneSpace) == 68, "Offset mismatch for FRigUnit_VisualDebugVector::BoneSpace");

// /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
// Kind: ScriptStruct; super: RigUnit_DebugBase
struct FRigUnit_VisualDebugVectorItemSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mode; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t Color[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    float Thickness; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Space[0x1]; // 0x0044 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Value) == 16, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Value");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, bEnabled) == 40, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::bEnabled");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Mode) == 41, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Mode");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Color) == 44, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Color");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Thickness) == 60, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Thickness");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Scale) == 64, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Scale");
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Space) == 68, "Offset mismatch for FRigUnit_VisualDebugVectorItemSpace::Space");

// /Script/ControlRig.RigVectorArrayMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigVectorArrayMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Value; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigVectorArrayMetadata, Value) == 24, "Offset mismatch for FRigVectorArrayMetadata::Value");

// /Script/ControlRig.RigVectorMetadata
// Kind: ScriptStruct; super: RigBaseMetadata
struct FRigVectorMetadata
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigVectorMetadata, Value) == 24, "Offset mismatch for FRigVectorMetadata::Value");

// /Script/ControlRig.SampleTrackHost
// Kind: ScriptStruct; super: none
struct FSampleTrackHost
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.SampleTrackMemoryData
// Kind: ScriptStruct; super: none
struct FSampleTrackMemoryData
{
public:
    TArray<void*> Buffer; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Names; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ObjectPaths; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSampleTrackMemoryData, Buffer) == 0, "Offset mismatch for FSampleTrackMemoryData::Buffer");
static_assert(offsetof(FSampleTrackMemoryData, Names) == 16, "Offset mismatch for FSampleTrackMemoryData::Names");
static_assert(offsetof(FSampleTrackMemoryData, ObjectPaths) == 32, "Offset mismatch for FSampleTrackMemoryData::ObjectPaths");

// /Script/ControlRig.SpaceControlNameAndChannel
// Kind: ScriptStruct; super: none
struct FSpaceControlNameAndChannel
{
public:
    FName ControlName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t SpaceCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpaceControlNameAndChannel, ControlName) == 0, "Offset mismatch for FSpaceControlNameAndChannel::ControlName");
static_assert(offsetof(FSpaceControlNameAndChannel, SpaceCurve) == 8, "Offset mismatch for FSpaceControlNameAndChannel::SpaceCurve");

// /Script/ControlRig.SphericalPoseReaderDebugSettings
// Kind: ScriptStruct; super: none
struct FSphericalPoseReaderDebugSettings
{
public:
    std::uint8_t bDrawDebug; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraw2D; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLocalAxes; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float DebugScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t DebugSegments; // 0x0008 (Size: 0x4, Type: IntProperty)
    float DebugThickness; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSphericalPoseReaderDebugSettings, bDrawDebug) == 0, "Offset mismatch for FSphericalPoseReaderDebugSettings::bDrawDebug");
static_assert(offsetof(FSphericalPoseReaderDebugSettings, bDraw2D) == 1, "Offset mismatch for FSphericalPoseReaderDebugSettings::bDraw2D");
static_assert(offsetof(FSphericalPoseReaderDebugSettings, bDrawLocalAxes) == 2, "Offset mismatch for FSphericalPoseReaderDebugSettings::bDrawLocalAxes");
static_assert(offsetof(FSphericalPoseReaderDebugSettings, DebugScale) == 4, "Offset mismatch for FSphericalPoseReaderDebugSettings::DebugScale");
static_assert(offsetof(FSphericalPoseReaderDebugSettings, DebugSegments) == 8, "Offset mismatch for FSphericalPoseReaderDebugSettings::DebugSegments");
static_assert(offsetof(FSphericalPoseReaderDebugSettings, DebugThickness) == 12, "Offset mismatch for FSphericalPoseReaderDebugSettings::DebugThickness");

// /Script/ControlRig.SphericalRegion
// Kind: ScriptStruct; super: none
struct FSphericalRegion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.StructReference
// Kind: ScriptStruct; super: none
struct FStructReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.AdditiveControlRig
// Kind: Class; super: ControlRig
class UAdditiveControlRig
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TArray<void*> OverrideAssets; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0270
    std::uint8_t ExecutionType; // 0x0271 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0272
    std::uint8_t HierarchySettings[0xC]; // 0x0274 (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> ControlCustomizations; // 0x0280 (Size: 0x10, Type: MapProperty)
    void* DynamicHierarchy; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShapeLibraries; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ShapeLibraryNameMap; // 0x02A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x18]; // 0x02B8
    std::uint8_t RigVMExtendedExecuteContext[0x258]; // 0x02D0 (Size: 0x258, Type: StructProperty)
    void* DataSourceRegistry; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0xB0]; // 0x0530
    std::uint8_t Influences[0x68]; // 0x05E0 (Size: 0x68, Type: StructProperty)
    TMap<void*, void*> ExternalVariableDataAssetLinks; // 0x0648 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0005[0xD8]; // 0x0658
    FMulticastSparseDelegate OnControlSelected_BP; // 0x0730 (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0x20]; // 0x0740
    std::uint8_t bIsAdditive; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x97]; // 0x0761
    std::uint8_t RigModuleSettings[0x1]; // 0x07F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAdditiveControlRig, OverrideAssets) == 608, "Offset mismatch for UAdditiveControlRig::OverrideAssets");
static_assert(offsetof(UAdditiveControlRig, ExecutionType) == 625, "Offset mismatch for UAdditiveControlRig::ExecutionType");
static_assert(offsetof(UAdditiveControlRig, HierarchySettings) == 628, "Offset mismatch for UAdditiveControlRig::HierarchySettings");
static_assert(offsetof(UAdditiveControlRig, ControlCustomizations) == 640, "Offset mismatch for UAdditiveControlRig::ControlCustomizations");
static_assert(offsetof(UAdditiveControlRig, DynamicHierarchy) == 656, "Offset mismatch for UAdditiveControlRig::DynamicHierarchy");
static_assert(offsetof(UAdditiveControlRig, ShapeLibraries) == 664, "Offset mismatch for UAdditiveControlRig::ShapeLibraries");
static_assert(offsetof(UAdditiveControlRig, ShapeLibraryNameMap) == 680, "Offset mismatch for UAdditiveControlRig::ShapeLibraryNameMap");
static_assert(offsetof(UAdditiveControlRig, RigVMExtendedExecuteContext) == 720, "Offset mismatch for UAdditiveControlRig::RigVMExtendedExecuteContext");
static_assert(offsetof(UAdditiveControlRig, DataSourceRegistry) == 1320, "Offset mismatch for UAdditiveControlRig::DataSourceRegistry");
static_assert(offsetof(UAdditiveControlRig, Influences) == 1504, "Offset mismatch for UAdditiveControlRig::Influences");
static_assert(offsetof(UAdditiveControlRig, ExternalVariableDataAssetLinks) == 1608, "Offset mismatch for UAdditiveControlRig::ExternalVariableDataAssetLinks");
static_assert(offsetof(UAdditiveControlRig, OnControlSelected_BP) == 1840, "Offset mismatch for UAdditiveControlRig::OnControlSelected_BP");
static_assert(offsetof(UAdditiveControlRig, bIsAdditive) == 1888, "Offset mismatch for UAdditiveControlRig::bIsAdditive");
static_assert(offsetof(UAdditiveControlRig, RigModuleSettings) == 2040, "Offset mismatch for UAdditiveControlRig::RigModuleSettings");

// /Script/ControlRig.AnimNodeControlRigLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimNodeControlRigLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRig
// Kind: Class; super: RigVMHost
class UControlRig
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    TArray<void*> OverrideAssets; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0270
    std::uint8_t ExecutionType; // 0x0271 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0272
    std::uint8_t HierarchySettings[0xC]; // 0x0274 (Size: 0xC, Type: StructProperty)
    TMap<void*, void*> ControlCustomizations; // 0x0280 (Size: 0x10, Type: MapProperty)
    void* DynamicHierarchy; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShapeLibraries; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ShapeLibraryNameMap; // 0x02A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x18]; // 0x02B8
    std::uint8_t RigVMExtendedExecuteContext[0x258]; // 0x02D0 (Size: 0x258, Type: StructProperty)
    void* DataSourceRegistry; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0xB0]; // 0x0530
    std::uint8_t Influences[0x68]; // 0x05E0 (Size: 0x68, Type: StructProperty)
    TMap<void*, void*> ExternalVariableDataAssetLinks; // 0x0648 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0005[0xD8]; // 0x0658
    FMulticastSparseDelegate OnControlSelected_BP; // 0x0730 (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0x20]; // 0x0740
    std::uint8_t bIsAdditive; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x97]; // 0x0761
    std::uint8_t RigModuleSettings[0x1]; // 0x07F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UControlRig, OverrideAssets) == 608, "Offset mismatch for UControlRig::OverrideAssets");
static_assert(offsetof(UControlRig, ExecutionType) == 625, "Offset mismatch for UControlRig::ExecutionType");
static_assert(offsetof(UControlRig, HierarchySettings) == 628, "Offset mismatch for UControlRig::HierarchySettings");
static_assert(offsetof(UControlRig, ControlCustomizations) == 640, "Offset mismatch for UControlRig::ControlCustomizations");
static_assert(offsetof(UControlRig, DynamicHierarchy) == 656, "Offset mismatch for UControlRig::DynamicHierarchy");
static_assert(offsetof(UControlRig, ShapeLibraries) == 664, "Offset mismatch for UControlRig::ShapeLibraries");
static_assert(offsetof(UControlRig, ShapeLibraryNameMap) == 680, "Offset mismatch for UControlRig::ShapeLibraryNameMap");
static_assert(offsetof(UControlRig, RigVMExtendedExecuteContext) == 720, "Offset mismatch for UControlRig::RigVMExtendedExecuteContext");
static_assert(offsetof(UControlRig, DataSourceRegistry) == 1320, "Offset mismatch for UControlRig::DataSourceRegistry");
static_assert(offsetof(UControlRig, Influences) == 1504, "Offset mismatch for UControlRig::Influences");
static_assert(offsetof(UControlRig, ExternalVariableDataAssetLinks) == 1608, "Offset mismatch for UControlRig::ExternalVariableDataAssetLinks");
static_assert(offsetof(UControlRig, OnControlSelected_BP) == 1840, "Offset mismatch for UControlRig::OnControlSelected_BP");
static_assert(offsetof(UControlRig, bIsAdditive) == 1888, "Offset mismatch for UControlRig::bIsAdditive");
static_assert(offsetof(UControlRig, RigModuleSettings) == 2040, "Offset mismatch for UControlRig::RigModuleSettings");

// /Script/ControlRig.ControlRigAnimInstance
// Kind: Class; super: AnimInstance
class UControlRigAnimInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CurrentSkeleton; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPropagateNotifiesToLinkedInstances; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bReceiveNotifiesFromLinkedInstances (shared storage)
    // 0x0031 BoolProperty bUseMainInstanceMontageEvaluationData (shared storage)
    // 0x0031 BoolProperty bUseMultiThreadedAnimationUpdate (shared storage)
    // 0x0031 BoolProperty bUsingCopyPoseFromMesh (shared storage)
    std::uint8_t bQueueMontageEvents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    FMulticastInlineDelegate OnMontageBlendingOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendedIn; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageStarted; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageEnded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageSectionChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0098
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x48]; // 0x00C8
    std::uint8_t NotifyQueue[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    TArray<void*> ActiveAnimNotifyState; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveAnimNotifyEventReference; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigAnimInstance, CurrentSkeleton) == 40, "Offset mismatch for UControlRigAnimInstance::CurrentSkeleton");
static_assert(offsetof(UControlRigAnimInstance, RootMotionMode) == 48, "Offset mismatch for UControlRigAnimInstance::RootMotionMode");
static_assert(offsetof(UControlRigAnimInstance, bPropagateNotifiesToLinkedInstances) == 49, "Offset mismatch for UControlRigAnimInstance::bPropagateNotifiesToLinkedInstances");
static_assert(offsetof(UControlRigAnimInstance, bQueueMontageEvents) == 50, "Offset mismatch for UControlRigAnimInstance::bQueueMontageEvents");
static_assert(offsetof(UControlRigAnimInstance, OnMontageBlendingOut) == 56, "Offset mismatch for UControlRigAnimInstance::OnMontageBlendingOut");
static_assert(offsetof(UControlRigAnimInstance, OnMontageBlendedIn) == 72, "Offset mismatch for UControlRigAnimInstance::OnMontageBlendedIn");
static_assert(offsetof(UControlRigAnimInstance, OnMontageStarted) == 88, "Offset mismatch for UControlRigAnimInstance::OnMontageStarted");
static_assert(offsetof(UControlRigAnimInstance, OnMontageEnded) == 104, "Offset mismatch for UControlRigAnimInstance::OnMontageEnded");
static_assert(offsetof(UControlRigAnimInstance, OnAllMontageInstancesEnded) == 120, "Offset mismatch for UControlRigAnimInstance::OnAllMontageInstancesEnded");
static_assert(offsetof(UControlRigAnimInstance, OnMontageSectionChanged) == 136, "Offset mismatch for UControlRigAnimInstance::OnMontageSectionChanged");
static_assert(offsetof(UControlRigAnimInstance, SlotGroupInertializationRequestDataMap) == 184, "Offset mismatch for UControlRigAnimInstance::SlotGroupInertializationRequestDataMap");
static_assert(offsetof(UControlRigAnimInstance, NotifyQueue) == 272, "Offset mismatch for UControlRigAnimInstance::NotifyQueue");
static_assert(offsetof(UControlRigAnimInstance, ActiveAnimNotifyState) == 328, "Offset mismatch for UControlRigAnimInstance::ActiveAnimNotifyState");
static_assert(offsetof(UControlRigAnimInstance, ActiveAnimNotifyEventReference) == 344, "Offset mismatch for UControlRigAnimInstance::ActiveAnimNotifyEventReference");

// /Script/ControlRig.ControlRigAssetReferenceLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UControlRigAssetReferenceLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigBlueprintGeneratedClass
// Kind: Class; super: RigVMBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    std::uint8_t PreviewSkeletalMesh[0x18]; // 0x0320 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExposesAnimatableControls; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleInstances; // 0x0339 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ControlRigType; // 0x033A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x033B
    std::uint8_t ItemTypeDisplayName[0x4]; // 0x033C (Size: 0x4, Type: NameProperty)
    std::uint8_t RigModuleSettings[0x78]; // 0x0340 (Size: 0x78, Type: StructProperty)
    TArray<void*> ModuleReferenceData; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    FString CustomThumbnail; // 0x03C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSupportsInversion; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsControls; // 0x03D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UControlRigBlueprintGeneratedClass, PreviewSkeletalMesh) == 800, "Offset mismatch for UControlRigBlueprintGeneratedClass::PreviewSkeletalMesh");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, bExposesAnimatableControls) == 824, "Offset mismatch for UControlRigBlueprintGeneratedClass::bExposesAnimatableControls");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, bAllowMultipleInstances) == 825, "Offset mismatch for UControlRigBlueprintGeneratedClass::bAllowMultipleInstances");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, ControlRigType) == 826, "Offset mismatch for UControlRigBlueprintGeneratedClass::ControlRigType");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, ItemTypeDisplayName) == 828, "Offset mismatch for UControlRigBlueprintGeneratedClass::ItemTypeDisplayName");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, RigModuleSettings) == 832, "Offset mismatch for UControlRigBlueprintGeneratedClass::RigModuleSettings");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, ModuleReferenceData) == 952, "Offset mismatch for UControlRigBlueprintGeneratedClass::ModuleReferenceData");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, CustomThumbnail) == 968, "Offset mismatch for UControlRigBlueprintGeneratedClass::CustomThumbnail");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, bSupportsInversion) == 984, "Offset mismatch for UControlRigBlueprintGeneratedClass::bSupportsInversion");
static_assert(offsetof(UControlRigBlueprintGeneratedClass, bSupportsControls) == 985, "Offset mismatch for UControlRigBlueprintGeneratedClass::bSupportsControls");

// /Script/ControlRig.ControlRigComponent
// Kind: Class; super: PrimitiveComponent
class UControlRigComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t ControlRigAssetReference[0x10]; // 0x0570 (Size: 0x10, Type: StructProperty)
    void* ControlRigClass; // 0x0580 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate OnPreInitializeDelegate; // 0x0588 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostInitializeDelegate; // 0x0598 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreConstructionDelegate; // 0x05A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostConstructionDelegate; // 0x05B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x05C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x05D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> UserDefinedElements; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MappedElements; // 0x05F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableLazyEvaluation; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0609
    float LazyEvaluationPositionThreshold; // 0x060C (Size: 0x4, Type: FloatProperty)
    float LazyEvaluationRotationThreshold; // 0x0610 (Size: 0x4, Type: FloatProperty)
    float LazyEvaluationScaleThreshold; // 0x0614 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetTransformBeforeTick; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetInitialsBeforeConstruction; // 0x0619 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateRigOnTick; // 0x061A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateInEditor; // 0x061B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawBones; // 0x061C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebugDrawing; // 0x061D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x061E
    void* ControlRig; // 0x0620 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControlRigComponent, ControlRigAssetReference) == 1392, "Offset mismatch for UControlRigComponent::ControlRigAssetReference");
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 1408, "Offset mismatch for UControlRigComponent::ControlRigClass");
static_assert(offsetof(UControlRigComponent, OnPreInitializeDelegate) == 1416, "Offset mismatch for UControlRigComponent::OnPreInitializeDelegate");
static_assert(offsetof(UControlRigComponent, OnPostInitializeDelegate) == 1432, "Offset mismatch for UControlRigComponent::OnPostInitializeDelegate");
static_assert(offsetof(UControlRigComponent, OnPreConstructionDelegate) == 1448, "Offset mismatch for UControlRigComponent::OnPreConstructionDelegate");
static_assert(offsetof(UControlRigComponent, OnPostConstructionDelegate) == 1464, "Offset mismatch for UControlRigComponent::OnPostConstructionDelegate");
static_assert(offsetof(UControlRigComponent, OnPreForwardsSolveDelegate) == 1480, "Offset mismatch for UControlRigComponent::OnPreForwardsSolveDelegate");
static_assert(offsetof(UControlRigComponent, OnPostForwardsSolveDelegate) == 1496, "Offset mismatch for UControlRigComponent::OnPostForwardsSolveDelegate");
static_assert(offsetof(UControlRigComponent, UserDefinedElements) == 1512, "Offset mismatch for UControlRigComponent::UserDefinedElements");
static_assert(offsetof(UControlRigComponent, MappedElements) == 1528, "Offset mismatch for UControlRigComponent::MappedElements");
static_assert(offsetof(UControlRigComponent, bEnableLazyEvaluation) == 1544, "Offset mismatch for UControlRigComponent::bEnableLazyEvaluation");
static_assert(offsetof(UControlRigComponent, LazyEvaluationPositionThreshold) == 1548, "Offset mismatch for UControlRigComponent::LazyEvaluationPositionThreshold");
static_assert(offsetof(UControlRigComponent, LazyEvaluationRotationThreshold) == 1552, "Offset mismatch for UControlRigComponent::LazyEvaluationRotationThreshold");
static_assert(offsetof(UControlRigComponent, LazyEvaluationScaleThreshold) == 1556, "Offset mismatch for UControlRigComponent::LazyEvaluationScaleThreshold");
static_assert(offsetof(UControlRigComponent, bResetTransformBeforeTick) == 1560, "Offset mismatch for UControlRigComponent::bResetTransformBeforeTick");
static_assert(offsetof(UControlRigComponent, bResetInitialsBeforeConstruction) == 1561, "Offset mismatch for UControlRigComponent::bResetInitialsBeforeConstruction");
static_assert(offsetof(UControlRigComponent, bUpdateRigOnTick) == 1562, "Offset mismatch for UControlRigComponent::bUpdateRigOnTick");
static_assert(offsetof(UControlRigComponent, bUpdateInEditor) == 1563, "Offset mismatch for UControlRigComponent::bUpdateInEditor");
static_assert(offsetof(UControlRigComponent, bDrawBones) == 1564, "Offset mismatch for UControlRigComponent::bDrawBones");
static_assert(offsetof(UControlRigComponent, bShowDebugDrawing) == 1565, "Offset mismatch for UControlRigComponent::bShowDebugDrawing");
static_assert(offsetof(UControlRigComponent, ControlRig) == 1568, "Offset mismatch for UControlRigComponent::ControlRig");

// /Script/ControlRig.ControlRigControlActor
// Kind: Class; super: Actor
class UControlRigControlActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ActorToTrack; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ControlRigClass; // 0x0278 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bRefreshOnTick; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSelectable; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0282
    void* MaterialOverride; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    FString ColorParameter; // 0x0290 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCastShadows; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02A1
    void* ActorRootComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ControlRig[0x20]; // 0x02B0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ControlNames; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShapeTransforms; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Components; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Materials; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    FName ColorParameterName; // 0x0310 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UControlRigControlActor, ActorToTrack) == 624, "Offset mismatch for UControlRigControlActor::ActorToTrack");
static_assert(offsetof(UControlRigControlActor, ControlRigClass) == 632, "Offset mismatch for UControlRigControlActor::ControlRigClass");
static_assert(offsetof(UControlRigControlActor, bRefreshOnTick) == 640, "Offset mismatch for UControlRigControlActor::bRefreshOnTick");
static_assert(offsetof(UControlRigControlActor, bIsSelectable) == 641, "Offset mismatch for UControlRigControlActor::bIsSelectable");
static_assert(offsetof(UControlRigControlActor, MaterialOverride) == 648, "Offset mismatch for UControlRigControlActor::MaterialOverride");
static_assert(offsetof(UControlRigControlActor, ColorParameter) == 656, "Offset mismatch for UControlRigControlActor::ColorParameter");
static_assert(offsetof(UControlRigControlActor, bCastShadows) == 672, "Offset mismatch for UControlRigControlActor::bCastShadows");
static_assert(offsetof(UControlRigControlActor, ActorRootComponent) == 680, "Offset mismatch for UControlRigControlActor::ActorRootComponent");
static_assert(offsetof(UControlRigControlActor, ControlRig) == 688, "Offset mismatch for UControlRigControlActor::ControlRig");
static_assert(offsetof(UControlRigControlActor, ControlNames) == 720, "Offset mismatch for UControlRigControlActor::ControlNames");
static_assert(offsetof(UControlRigControlActor, ShapeTransforms) == 736, "Offset mismatch for UControlRigControlActor::ShapeTransforms");
static_assert(offsetof(UControlRigControlActor, Components) == 752, "Offset mismatch for UControlRigControlActor::Components");
static_assert(offsetof(UControlRigControlActor, Materials) == 768, "Offset mismatch for UControlRigControlActor::Materials");
static_assert(offsetof(UControlRigControlActor, ColorParameterName) == 784, "Offset mismatch for UControlRigControlActor::ColorParameterName");

// /Script/ControlRig.ControlRigEditorSettings
// Kind: Class; super: RigVMEditorSettings
class UControlRigEditorSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigLayerInstance
// Kind: Class; super: AnimInstance
class UControlRigLayerInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CurrentSkeleton; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bPropagateNotifiesToLinkedInstances; // 0x0031 (Size: 0x1, Type: BoolProperty)
    // 0x0031 BoolProperty bReceiveNotifiesFromLinkedInstances (shared storage)
    // 0x0031 BoolProperty bUseMainInstanceMontageEvaluationData (shared storage)
    // 0x0031 BoolProperty bUseMultiThreadedAnimationUpdate (shared storage)
    // 0x0031 BoolProperty bUsingCopyPoseFromMesh (shared storage)
    std::uint8_t bQueueMontageEvents; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    FMulticastInlineDelegate OnMontageBlendingOut; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageBlendedIn; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageStarted; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageEnded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageSectionChanged; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0098
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x48]; // 0x00C8
    std::uint8_t NotifyQueue[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    TArray<void*> ActiveAnimNotifyState; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveAnimNotifyEventReference; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigLayerInstance, CurrentSkeleton) == 40, "Offset mismatch for UControlRigLayerInstance::CurrentSkeleton");
static_assert(offsetof(UControlRigLayerInstance, RootMotionMode) == 48, "Offset mismatch for UControlRigLayerInstance::RootMotionMode");
static_assert(offsetof(UControlRigLayerInstance, bPropagateNotifiesToLinkedInstances) == 49, "Offset mismatch for UControlRigLayerInstance::bPropagateNotifiesToLinkedInstances");
static_assert(offsetof(UControlRigLayerInstance, bQueueMontageEvents) == 50, "Offset mismatch for UControlRigLayerInstance::bQueueMontageEvents");
static_assert(offsetof(UControlRigLayerInstance, OnMontageBlendingOut) == 56, "Offset mismatch for UControlRigLayerInstance::OnMontageBlendingOut");
static_assert(offsetof(UControlRigLayerInstance, OnMontageBlendedIn) == 72, "Offset mismatch for UControlRigLayerInstance::OnMontageBlendedIn");
static_assert(offsetof(UControlRigLayerInstance, OnMontageStarted) == 88, "Offset mismatch for UControlRigLayerInstance::OnMontageStarted");
static_assert(offsetof(UControlRigLayerInstance, OnMontageEnded) == 104, "Offset mismatch for UControlRigLayerInstance::OnMontageEnded");
static_assert(offsetof(UControlRigLayerInstance, OnAllMontageInstancesEnded) == 120, "Offset mismatch for UControlRigLayerInstance::OnAllMontageInstancesEnded");
static_assert(offsetof(UControlRigLayerInstance, OnMontageSectionChanged) == 136, "Offset mismatch for UControlRigLayerInstance::OnMontageSectionChanged");
static_assert(offsetof(UControlRigLayerInstance, SlotGroupInertializationRequestDataMap) == 184, "Offset mismatch for UControlRigLayerInstance::SlotGroupInertializationRequestDataMap");
static_assert(offsetof(UControlRigLayerInstance, NotifyQueue) == 272, "Offset mismatch for UControlRigLayerInstance::NotifyQueue");
static_assert(offsetof(UControlRigLayerInstance, ActiveAnimNotifyState) == 328, "Offset mismatch for UControlRigLayerInstance::ActiveAnimNotifyState");
static_assert(offsetof(UControlRigLayerInstance, ActiveAnimNotifyEventReference) == 344, "Offset mismatch for UControlRigLayerInstance::ActiveAnimNotifyEventReference");

// /Script/ControlRig.ControlRigNumericalValidationPass
// Kind: Class; super: ControlRigValidationPass
class UControlRigNumericalValidationPass
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bCheckControls; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckBones; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckCurves; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x002B
    float TranslationPrecision; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RotationPrecision; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float ScalePrecision; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float CurvePrecision; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EventNameA[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    FName EventNameB; // 0x0040 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pose[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UControlRigNumericalValidationPass, bCheckControls) == 40, "Offset mismatch for UControlRigNumericalValidationPass::bCheckControls");
static_assert(offsetof(UControlRigNumericalValidationPass, bCheckBones) == 41, "Offset mismatch for UControlRigNumericalValidationPass::bCheckBones");
static_assert(offsetof(UControlRigNumericalValidationPass, bCheckCurves) == 42, "Offset mismatch for UControlRigNumericalValidationPass::bCheckCurves");
static_assert(offsetof(UControlRigNumericalValidationPass, TranslationPrecision) == 44, "Offset mismatch for UControlRigNumericalValidationPass::TranslationPrecision");
static_assert(offsetof(UControlRigNumericalValidationPass, RotationPrecision) == 48, "Offset mismatch for UControlRigNumericalValidationPass::RotationPrecision");
static_assert(offsetof(UControlRigNumericalValidationPass, ScalePrecision) == 52, "Offset mismatch for UControlRigNumericalValidationPass::ScalePrecision");
static_assert(offsetof(UControlRigNumericalValidationPass, CurvePrecision) == 56, "Offset mismatch for UControlRigNumericalValidationPass::CurvePrecision");
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 60, "Offset mismatch for UControlRigNumericalValidationPass::EventNameA");
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 64, "Offset mismatch for UControlRigNumericalValidationPass::EventNameB");
static_assert(offsetof(UControlRigNumericalValidationPass, Pose) == 72, "Offset mismatch for UControlRigNumericalValidationPass::Pose");

// /Script/ControlRig.ControlRigOverrideAsset
// Kind: Class; super: Object
class UControlRigOverrideAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Overrides[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UControlRigOverrideAsset, Overrides) == 40, "Offset mismatch for UControlRigOverrideAsset::Overrides");

// /Script/ControlRig.ControlRigPoseAsset
// Kind: Class; super: Object
class UControlRigPoseAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Pose[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UControlRigPoseAsset, Pose) == 40, "Offset mismatch for UControlRigPoseAsset::Pose");

// /Script/ControlRig.ControlRigPoseMirrorSettings
// Kind: Class; super: Object
class UControlRigPoseMirrorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString RightSide; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString LeftSide; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MirrorAxis; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AxisToFlip; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    double MirrorMatchTolerance; // 0x0050 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UControlRigPoseMirrorSettings, RightSide) == 40, "Offset mismatch for UControlRigPoseMirrorSettings::RightSide");
static_assert(offsetof(UControlRigPoseMirrorSettings, LeftSide) == 56, "Offset mismatch for UControlRigPoseMirrorSettings::LeftSide");
static_assert(offsetof(UControlRigPoseMirrorSettings, MirrorAxis) == 72, "Offset mismatch for UControlRigPoseMirrorSettings::MirrorAxis");
static_assert(offsetof(UControlRigPoseMirrorSettings, AxisToFlip) == 73, "Offset mismatch for UControlRigPoseMirrorSettings::AxisToFlip");
static_assert(offsetof(UControlRigPoseMirrorSettings, MirrorMatchTolerance) == 80, "Offset mismatch for UControlRigPoseMirrorSettings::MirrorMatchTolerance");

// /Script/ControlRig.ControlRigPoseProjectSettings
// Kind: Class; super: Object
class UControlRigPoseProjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RootSaveDirs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigPoseProjectSettings, RootSaveDirs) == 40, "Offset mismatch for UControlRigPoseProjectSettings::RootSaveDirs");

// /Script/ControlRig.ControlRigReplay
// Kind: Class; super: Object
class UControlRigReplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Description[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t ControlRigObjectPath[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviewSkeletalMeshObjectPath[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t InputTracks[0x78]; // 0x0068 (Size: 0x78, Type: StructProperty)
    std::uint8_t OutputTracks[0x78]; // 0x00E0 (Size: 0x78, Type: StructProperty)
    double Tolerance; // 0x0158 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bValidateHierarchyTopology; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidatePose; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateMetadata; // 0x0162 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateVariables; // 0x0163 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0164
    TArray<void*> FramesToSkip; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnableTest; // 0x0178 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UControlRigReplay, Description) == 40, "Offset mismatch for UControlRigReplay::Description");
static_assert(offsetof(UControlRigReplay, ControlRigObjectPath) == 56, "Offset mismatch for UControlRigReplay::ControlRigObjectPath");
static_assert(offsetof(UControlRigReplay, PreviewSkeletalMeshObjectPath) == 80, "Offset mismatch for UControlRigReplay::PreviewSkeletalMeshObjectPath");
static_assert(offsetof(UControlRigReplay, InputTracks) == 104, "Offset mismatch for UControlRigReplay::InputTracks");
static_assert(offsetof(UControlRigReplay, OutputTracks) == 224, "Offset mismatch for UControlRigReplay::OutputTracks");
static_assert(offsetof(UControlRigReplay, Tolerance) == 344, "Offset mismatch for UControlRigReplay::Tolerance");
static_assert(offsetof(UControlRigReplay, bValidateHierarchyTopology) == 352, "Offset mismatch for UControlRigReplay::bValidateHierarchyTopology");
static_assert(offsetof(UControlRigReplay, bValidatePose) == 353, "Offset mismatch for UControlRigReplay::bValidatePose");
static_assert(offsetof(UControlRigReplay, bValidateMetadata) == 354, "Offset mismatch for UControlRigReplay::bValidateMetadata");
static_assert(offsetof(UControlRigReplay, bValidateVariables) == 355, "Offset mismatch for UControlRigReplay::bValidateVariables");
static_assert(offsetof(UControlRigReplay, FramesToSkip) == 360, "Offset mismatch for UControlRigReplay::FramesToSkip");
static_assert(offsetof(UControlRigReplay, EnableTest) == 376, "Offset mismatch for UControlRigReplay::EnableTest");

// /Script/ControlRig.ControlRigRuntimeAsset
// Kind: Class; super: RigVMRuntimeAsset
class UControlRigRuntimeAsset
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    void* Hierarchy; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HierarchySettings[0x8]; // 0x04E0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ModularRigModel[0x80]; // 0x04E8 (Size: 0x80, Type: StructProperty)
    std::uint8_t ModularRigSettings[0x8]; // 0x0568 (Size: 0x8, Type: StructProperty)
    std::uint8_t RigModuleSettings[0x78]; // 0x0570 (Size: 0x78, Type: StructProperty)
    std::uint8_t ControlRigType; // 0x05E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05E9
    std::uint8_t ItemTypeDisplayName[0x4]; // 0x05EC (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceHierarchyImport[0x20]; // 0x05F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SourceCurveImport[0x20]; // 0x0610 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PreviewSkeletalMesh[0x20]; // 0x0630 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ModuleReferenceData; // 0x0650 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ArrayConnectionMap; // 0x0660 (Size: 0x10, Type: MapProperty)
    std::uint8_t Influences[0x20]; // 0x0670 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSupportsInversion; // 0x0690 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsControls; // 0x0691 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExposesAnimatableControls; // 0x0692 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleInstances; // 0x0693 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0694
    FString CustomThumbnail; // 0x0698 (Size: 0x10, Type: StrProperty)
    TArray<void*> ShapeLibraries; // 0x06A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigRuntimeAsset, Hierarchy) == 1240, "Offset mismatch for UControlRigRuntimeAsset::Hierarchy");
static_assert(offsetof(UControlRigRuntimeAsset, HierarchySettings) == 1248, "Offset mismatch for UControlRigRuntimeAsset::HierarchySettings");
static_assert(offsetof(UControlRigRuntimeAsset, ModularRigModel) == 1256, "Offset mismatch for UControlRigRuntimeAsset::ModularRigModel");
static_assert(offsetof(UControlRigRuntimeAsset, ModularRigSettings) == 1384, "Offset mismatch for UControlRigRuntimeAsset::ModularRigSettings");
static_assert(offsetof(UControlRigRuntimeAsset, RigModuleSettings) == 1392, "Offset mismatch for UControlRigRuntimeAsset::RigModuleSettings");
static_assert(offsetof(UControlRigRuntimeAsset, ControlRigType) == 1512, "Offset mismatch for UControlRigRuntimeAsset::ControlRigType");
static_assert(offsetof(UControlRigRuntimeAsset, ItemTypeDisplayName) == 1516, "Offset mismatch for UControlRigRuntimeAsset::ItemTypeDisplayName");
static_assert(offsetof(UControlRigRuntimeAsset, SourceHierarchyImport) == 1520, "Offset mismatch for UControlRigRuntimeAsset::SourceHierarchyImport");
static_assert(offsetof(UControlRigRuntimeAsset, SourceCurveImport) == 1552, "Offset mismatch for UControlRigRuntimeAsset::SourceCurveImport");
static_assert(offsetof(UControlRigRuntimeAsset, PreviewSkeletalMesh) == 1584, "Offset mismatch for UControlRigRuntimeAsset::PreviewSkeletalMesh");
static_assert(offsetof(UControlRigRuntimeAsset, ModuleReferenceData) == 1616, "Offset mismatch for UControlRigRuntimeAsset::ModuleReferenceData");
static_assert(offsetof(UControlRigRuntimeAsset, ArrayConnectionMap) == 1632, "Offset mismatch for UControlRigRuntimeAsset::ArrayConnectionMap");
static_assert(offsetof(UControlRigRuntimeAsset, Influences) == 1648, "Offset mismatch for UControlRigRuntimeAsset::Influences");
static_assert(offsetof(UControlRigRuntimeAsset, bSupportsInversion) == 1680, "Offset mismatch for UControlRigRuntimeAsset::bSupportsInversion");
static_assert(offsetof(UControlRigRuntimeAsset, bSupportsControls) == 1681, "Offset mismatch for UControlRigRuntimeAsset::bSupportsControls");
static_assert(offsetof(UControlRigRuntimeAsset, bExposesAnimatableControls) == 1682, "Offset mismatch for UControlRigRuntimeAsset::bExposesAnimatableControls");
static_assert(offsetof(UControlRigRuntimeAsset, bAllowMultipleInstances) == 1683, "Offset mismatch for UControlRigRuntimeAsset::bAllowMultipleInstances");
static_assert(offsetof(UControlRigRuntimeAsset, CustomThumbnail) == 1688, "Offset mismatch for UControlRigRuntimeAsset::CustomThumbnail");
static_assert(offsetof(UControlRigRuntimeAsset, ShapeLibraries) == 1704, "Offset mismatch for UControlRigRuntimeAsset::ShapeLibraries");

// /Script/ControlRig.ControlRigRuntimeAssetInterface
// Kind: Class; super: Interface
class UControlRigRuntimeAssetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigSettings
// Kind: Class; super: DeveloperSettings
class UControlRigSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigShapeActor
// Kind: Class; super: Actor
class UControlRigShapeActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* ActorRootComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* ProxyComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t ControlRigIndex; // 0x0288 (Size: 0x4, Type: UInt32Property)
    TWeakObjectPtr<void> ControlRig; // 0x028C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ControlName[0x4]; // 0x0294 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShapeName[0x4]; // 0x0298 (Size: 0x4, Type: NameProperty)
    FName ColorParameterName; // 0x029C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x6C]; // 0x02A4
    std::uint8_t CachedIndex[0x18]; // 0x0310 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredParameterName[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    std::uint8_t HoveredColorParameterName[0x4]; // 0x032C (Size: 0x4, Type: NameProperty)
    std::uint8_t bHovered; // 0x0330 (Size: 0x1, Type: BoolProperty)
    // 0x0330 BoolProperty bSelected (shared storage)
};

static_assert(offsetof(UControlRigShapeActor, ActorRootComponent) == 632, "Offset mismatch for UControlRigShapeActor::ActorRootComponent");
static_assert(offsetof(UControlRigShapeActor, ProxyComponent) == 640, "Offset mismatch for UControlRigShapeActor::ProxyComponent");
static_assert(offsetof(UControlRigShapeActor, ControlRigIndex) == 648, "Offset mismatch for UControlRigShapeActor::ControlRigIndex");
static_assert(offsetof(UControlRigShapeActor, ControlRig) == 652, "Offset mismatch for UControlRigShapeActor::ControlRig");
static_assert(offsetof(UControlRigShapeActor, ControlName) == 660, "Offset mismatch for UControlRigShapeActor::ControlName");
static_assert(offsetof(UControlRigShapeActor, ShapeName) == 664, "Offset mismatch for UControlRigShapeActor::ShapeName");
static_assert(offsetof(UControlRigShapeActor, ColorParameterName) == 668, "Offset mismatch for UControlRigShapeActor::ColorParameterName");
static_assert(offsetof(UControlRigShapeActor, CachedIndex) == 784, "Offset mismatch for UControlRigShapeActor::CachedIndex");
static_assert(offsetof(UControlRigShapeActor, HoveredParameterName) == 808, "Offset mismatch for UControlRigShapeActor::HoveredParameterName");
static_assert(offsetof(UControlRigShapeActor, HoveredColorParameterName) == 812, "Offset mismatch for UControlRigShapeActor::HoveredColorParameterName");
static_assert(offsetof(UControlRigShapeActor, bHovered) == 816, "Offset mismatch for UControlRigShapeActor::bHovered");

// /Script/ControlRig.ControlRigShapeLibrary
// Kind: Class; super: Object
class UControlRigShapeLibrary
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultShape[0xF0]; // 0x0030 (Size: 0xF0, Type: StructProperty)
    std::uint8_t DefaultMaterial[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t XRayMaterial[0x20]; // 0x0140 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MaterialColorParameter[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialHoveredParameter[0x4]; // 0x0164 (Size: 0x4, Type: NameProperty)
    FName MaterialHoveredColorParameter; // 0x0168 (Size: 0x8, Type: NameProperty)
    TArray<void*> Shapes; // 0x0170 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigShapeLibrary, DefaultShape) == 48, "Offset mismatch for UControlRigShapeLibrary::DefaultShape");
static_assert(offsetof(UControlRigShapeLibrary, DefaultMaterial) == 288, "Offset mismatch for UControlRigShapeLibrary::DefaultMaterial");
static_assert(offsetof(UControlRigShapeLibrary, XRayMaterial) == 320, "Offset mismatch for UControlRigShapeLibrary::XRayMaterial");
static_assert(offsetof(UControlRigShapeLibrary, MaterialColorParameter) == 352, "Offset mismatch for UControlRigShapeLibrary::MaterialColorParameter");
static_assert(offsetof(UControlRigShapeLibrary, MaterialHoveredParameter) == 356, "Offset mismatch for UControlRigShapeLibrary::MaterialHoveredParameter");
static_assert(offsetof(UControlRigShapeLibrary, MaterialHoveredColorParameter) == 360, "Offset mismatch for UControlRigShapeLibrary::MaterialHoveredColorParameter");
static_assert(offsetof(UControlRigShapeLibrary, Shapes) == 368, "Offset mismatch for UControlRigShapeLibrary::Shapes");

// /Script/ControlRig.ControlRigShapeLibraryLink
// Kind: Class; super: NameSpacedUserData
class UControlRigShapeLibraryLink
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t ShapeLibrary[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ShapeNames; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* ShapeLibraryCached; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UControlRigShapeLibraryLink, ShapeLibrary) == 128, "Offset mismatch for UControlRigShapeLibraryLink::ShapeLibrary");
static_assert(offsetof(UControlRigShapeLibraryLink, ShapeNames) == 160, "Offset mismatch for UControlRigShapeLibraryLink::ShapeNames");
static_assert(offsetof(UControlRigShapeLibraryLink, ShapeLibraryCached) == 176, "Offset mismatch for UControlRigShapeLibraryLink::ShapeLibraryCached");

// /Script/ControlRig.ControlRigTestData
// Kind: Class; super: ControlRigReplay
class UControlRigTestData
{
public:
    std::uint8_t Pad_0000[0x1D8]; // 0x0000
    std::uint8_t Initial[0x88]; // 0x01D8 (Size: 0x88, Type: StructProperty)
    TArray<void*> InputFrames; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputFrames; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventQueue; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigTestData, Initial) == 472, "Offset mismatch for UControlRigTestData::Initial");
static_assert(offsetof(UControlRigTestData, InputFrames) == 608, "Offset mismatch for UControlRigTestData::InputFrames");
static_assert(offsetof(UControlRigTestData, OutputFrames) == 624, "Offset mismatch for UControlRigTestData::OutputFrames");
static_assert(offsetof(UControlRigTestData, EventQueue) == 640, "Offset mismatch for UControlRigTestData::EventQueue");

// /Script/ControlRig.ControlRigTransformWorkflowOptions
// Kind: Class; super: ControlRigWorkflowOptions
class UControlRigTransformWorkflowOptions
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TransformType; // 0x00B0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UControlRigTransformWorkflowOptions, TransformType) == 176, "Offset mismatch for UControlRigTransformWorkflowOptions::TransformType");

// /Script/ControlRig.ControlRigValidationPass
// Kind: Class; super: Object
class UControlRigValidationPass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ControlRigValidator
// Kind: Class; super: Object
class UControlRigValidator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Passes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigValidator, Passes) == 40, "Offset mismatch for UControlRigValidator::Passes");

// /Script/ControlRig.ControlRigWorkflowOptions
// Kind: Class; super: RigVMUserWorkflowOptions
class UControlRigWorkflowOptions
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Hierarchy; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Selection; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UControlRigWorkflowOptions, Hierarchy) == 152, "Offset mismatch for UControlRigWorkflowOptions::Hierarchy");
static_assert(offsetof(UControlRigWorkflowOptions, Selection) == 160, "Offset mismatch for UControlRigWorkflowOptions::Selection");

// /Script/ControlRig.Default__ControlRigBlueprintGeneratedClass
// Kind: ControlRigBlueprintGeneratedClass; super: none
class UDefault_ControlRigBlueprintGeneratedClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.FKControlRig
// Kind: Class; super: ControlRig
class UFKControlRig
{
public:
    std::uint8_t Pad_0000[0x8F0]; // 0x0000
    TArray<void*> IsControlActive; // 0x08F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ApplyMode; // 0x0900 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFKControlRig, IsControlActive) == 2288, "Offset mismatch for UFKControlRig::IsControlActive");
static_assert(offsetof(UFKControlRig, ApplyMode) == 2304, "Offset mismatch for UFKControlRig::ApplyMode");

// /Script/ControlRig.ModularRig
// Kind: Class; super: ControlRig
class UModularRig
{
public:
    std::uint8_t Pad_0000[0x8A0]; // 0x0000
    TArray<void*> Modules; // 0x08A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x08B0
    std::uint8_t ModularRigSettings[0x8]; // 0x08D0 (Size: 0x8, Type: StructProperty)
    TArray<void*> ExecutionQueue; // 0x08D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x08E8
    std::uint8_t ModularRigModel[0x1]; // 0x08F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UModularRig, Modules) == 2208, "Offset mismatch for UModularRig::Modules");
static_assert(offsetof(UModularRig, ModularRigSettings) == 2256, "Offset mismatch for UModularRig::ModularRigSettings");
static_assert(offsetof(UModularRig, ExecutionQueue) == 2264, "Offset mismatch for UModularRig::ExecutionQueue");
static_assert(offsetof(UModularRig, ModularRigModel) == 2288, "Offset mismatch for UModularRig::ModularRigModel");

// /Script/ControlRig.ModularRigController
// Kind: Class; super: Object
class UModularRigController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.ModularRigRuleManager
// Kind: Class; super: Object
class UModularRigRuleManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.MovieSceneControlRigParameterEvaluatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneControlRigParameterEvaluatorSystem
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    void* DoubleBlenderSystem; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneControlRigParameterEvaluatorSystem, DoubleBlenderSystem) == 320, "Offset mismatch for UMovieSceneControlRigParameterEvaluatorSystem::DoubleBlenderSystem");

// /Script/ControlRig.MovieSceneControlRigParameterSection
// Kind: Class; super: MovieSceneParameterSection
class UMovieSceneControlRigParameterSection
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* ControlRig; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    void* ControlRigClass; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ControlRigAssetReference[0x10]; // 0x0200 (Size: 0x10, Type: StructProperty)
    TArray<void*> ControlsMask; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ControlNameMask[0x10]; // 0x0220 (Size: 0x10, Type: SetProperty)
    std::uint8_t TransformMask[0x8]; // 0x0230 (Size: 0x8, Type: StructProperty)
    std::uint8_t Weight[0xD0]; // 0x0238 (Size: 0xD0, Type: StructProperty)
    TMap<void*, void*> ControlChannelMap; // 0x0308 (Size: 0x10, Type: MapProperty)
    TArray<void*> EnumParameterNamesAndCurves; // 0x0318 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntegerParameterNamesAndCurves; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpaceChannels; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConstraintsChannels; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlayRate[0x1]; // 0x0358 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 496, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlRig");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRigClass) == 504, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlRigClass");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRigAssetReference) == 512, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlRigAssetReference");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 528, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlsMask");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlNameMask) == 544, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlNameMask");
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 560, "Offset mismatch for UMovieSceneControlRigParameterSection::TransformMask");
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 568, "Offset mismatch for UMovieSceneControlRigParameterSection::Weight");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 776, "Offset mismatch for UMovieSceneControlRigParameterSection::ControlChannelMap");
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 792, "Offset mismatch for UMovieSceneControlRigParameterSection::EnumParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 808, "Offset mismatch for UMovieSceneControlRigParameterSection::IntegerParameterNamesAndCurves");
static_assert(offsetof(UMovieSceneControlRigParameterSection, SpaceChannels) == 824, "Offset mismatch for UMovieSceneControlRigParameterSection::SpaceChannels");
static_assert(offsetof(UMovieSceneControlRigParameterSection, ConstraintsChannels) == 840, "Offset mismatch for UMovieSceneControlRigParameterSection::ConstraintsChannels");
static_assert(offsetof(UMovieSceneControlRigParameterSection, PlayRate) == 856, "Offset mismatch for UMovieSceneControlRigParameterSection::PlayRate");

// /Script/ControlRig.MovieSceneControlRigParameterTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneControlRigParameterTrack
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    TMap<void*, void*> SectionToKeyPerControl; // 0x0110 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0120
    void* ControlRig; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* SectionToKey; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Sections; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    FName TrackName; // 0x0178 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> ControlsRotationOrder; // 0x0180 (Size: 0x10, Type: MapProperty)
    std::int32_t PriorityOrder; // 0x0190 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0194
    std::uint8_t ControlRigSettingsOverrides[0x10]; // 0x0198 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> GameWorldControlRigs; // 0x01A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKeyPerControl) == 272, "Offset mismatch for UMovieSceneControlRigParameterTrack::SectionToKeyPerControl");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 344, "Offset mismatch for UMovieSceneControlRigParameterTrack::ControlRig");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 352, "Offset mismatch for UMovieSceneControlRigParameterTrack::SectionToKey");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 360, "Offset mismatch for UMovieSceneControlRigParameterTrack::Sections");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, TrackName) == 376, "Offset mismatch for UMovieSceneControlRigParameterTrack::TrackName");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlsRotationOrder) == 384, "Offset mismatch for UMovieSceneControlRigParameterTrack::ControlsRotationOrder");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, PriorityOrder) == 400, "Offset mismatch for UMovieSceneControlRigParameterTrack::PriorityOrder");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRigSettingsOverrides) == 408, "Offset mismatch for UMovieSceneControlRigParameterTrack::ControlRigSettingsOverrides");
static_assert(offsetof(UMovieSceneControlRigParameterTrack, GameWorldControlRigs) == 424, "Offset mismatch for UMovieSceneControlRigParameterTrack::GameWorldControlRigs");

// /Script/ControlRig.RigHierarchy
// Kind: Class; super: Object
class URigHierarchy
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate ModifiedEventDynamic; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x338]; // 0x0050
    std::uint8_t bEnableDirtyPropagation; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xBB]; // 0x0389
    std::int32_t TransformStackIndex; // 0x0444 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x80]; // 0x0448
    void* HierarchyController; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x04D0
    void* RuleManager; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x58]; // 0x04E0
    void* HierarchyForCacheValidation; // 0x0538 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URigHierarchy, ModifiedEventDynamic) == 64, "Offset mismatch for URigHierarchy::ModifiedEventDynamic");
static_assert(offsetof(URigHierarchy, bEnableDirtyPropagation) == 904, "Offset mismatch for URigHierarchy::bEnableDirtyPropagation");
static_assert(offsetof(URigHierarchy, TransformStackIndex) == 1092, "Offset mismatch for URigHierarchy::TransformStackIndex");
static_assert(offsetof(URigHierarchy, HierarchyController) == 1224, "Offset mismatch for URigHierarchy::HierarchyController");
static_assert(offsetof(URigHierarchy, RuleManager) == 1240, "Offset mismatch for URigHierarchy::RuleManager");
static_assert(offsetof(URigHierarchy, HierarchyForCacheValidation) == 1336, "Offset mismatch for URigHierarchy::HierarchyForCacheValidation");

// /Script/ControlRig.RigHierarchyController
// Kind: Class; super: Object
class URigHierarchyController
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bReportWarningsAndErrors; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URigHierarchyController, bReportWarningsAndErrors) == 40, "Offset mismatch for URigHierarchyController::bReportWarningsAndErrors");

// /Script/ControlRig.RigHierarchyProvider
// Kind: Class; super: Interface
class URigHierarchyProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ControlRig.TransformableControlHandle
// Kind: Class; super: TransformableHandle
class UTransformableControlHandle
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ControlRig[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    FName ControlName; // 0x0080 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTransformableControlHandle, ControlRig) == 96, "Offset mismatch for UTransformableControlHandle::ControlRig");
static_assert(offsetof(UTransformableControlHandle, ControlName) == 128, "Offset mismatch for UTransformableControlHandle::ControlName");
