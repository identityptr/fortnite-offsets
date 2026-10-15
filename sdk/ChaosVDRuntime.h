/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosVDRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ChaosVDRuntime.ChaosVDAABBTreeDataWrapper
// Kind: ScriptStruct; super: ChaosVDAccelerationStructureBase
struct FChaosVDAABBTreeDataWrapper
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t RootNodeIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TreeDepth; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t NodesNum; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t LeavesNum; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDynamicTree; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t MaxChildrenInLeaf; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxTreeDepth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    double MaxPayloadBounds; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDAABBTreeDataWrapper, RootNodeIndex) == 24, "Offset mismatch for FChaosVDAABBTreeDataWrapper::RootNodeIndex");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, TreeDepth) == 28, "Offset mismatch for FChaosVDAABBTreeDataWrapper::TreeDepth");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, NodesNum) == 32, "Offset mismatch for FChaosVDAABBTreeDataWrapper::NodesNum");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, LeavesNum) == 36, "Offset mismatch for FChaosVDAABBTreeDataWrapper::LeavesNum");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, bDynamicTree) == 40, "Offset mismatch for FChaosVDAABBTreeDataWrapper::bDynamicTree");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, MaxChildrenInLeaf) == 44, "Offset mismatch for FChaosVDAABBTreeDataWrapper::MaxChildrenInLeaf");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, MaxTreeDepth) == 48, "Offset mismatch for FChaosVDAABBTreeDataWrapper::MaxTreeDepth");
static_assert(offsetof(FChaosVDAABBTreeDataWrapper, MaxPayloadBounds) == 56, "Offset mismatch for FChaosVDAABBTreeDataWrapper::MaxPayloadBounds");

// /Script/ChaosVDRuntime.ChaosVDAABBTreeLeafDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDAABBTreeLeafDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Elements; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDAABBTreeLeafDataWrapper, Elements) == 16, "Offset mismatch for FChaosVDAABBTreeLeafDataWrapper::Elements");
static_assert(offsetof(FChaosVDAABBTreeLeafDataWrapper, Bounds) == 32, "Offset mismatch for FChaosVDAABBTreeLeafDataWrapper::Bounds");

// /Script/ChaosVDRuntime.ChaosVDAABBTreeNodeDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDAABBTreeNodeDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ChildrenBounds[0x70]; // 0x0010 (Size: 0x70, Type: StructProperty)
    std::int32_t ChildrenNodes; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    std::int32_t ParentNode; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDirtyNode; // 0x008C (Size: 0x1, Type: BoolProperty)
    // 0x008C BoolProperty bLeaf (shared storage)
};

static_assert(offsetof(FChaosVDAABBTreeNodeDataWrapper, ChildrenBounds) == 16, "Offset mismatch for FChaosVDAABBTreeNodeDataWrapper::ChildrenBounds");
static_assert(offsetof(FChaosVDAABBTreeNodeDataWrapper, ChildrenNodes) == 128, "Offset mismatch for FChaosVDAABBTreeNodeDataWrapper::ChildrenNodes");
static_assert(offsetof(FChaosVDAABBTreeNodeDataWrapper, ParentNode) == 136, "Offset mismatch for FChaosVDAABBTreeNodeDataWrapper::ParentNode");
static_assert(offsetof(FChaosVDAABBTreeNodeDataWrapper, bDirtyNode) == 140, "Offset mismatch for FChaosVDAABBTreeNodeDataWrapper::bDirtyNode");

// /Script/ChaosVDRuntime.ChaosVDAABBTreePayloadBoundsElement
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDAABBTreePayloadBoundsElement
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t ParticleIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t Bounds[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDAABBTreePayloadBoundsElement, ParticleIndex) == 16, "Offset mismatch for FChaosVDAABBTreePayloadBoundsElement::ParticleIndex");
static_assert(offsetof(FChaosVDAABBTreePayloadBoundsElement, Bounds) == 24, "Offset mismatch for FChaosVDAABBTreePayloadBoundsElement::Bounds");

// /Script/ChaosVDRuntime.ChaosVDAccelerationStructureBase
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDAccelerationStructureBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t SolverId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDAccelerationStructureBase, SolverId) == 16, "Offset mismatch for FChaosVDAccelerationStructureBase::SolverId");
static_assert(offsetof(FChaosVDAccelerationStructureBase, Type) == 20, "Offset mismatch for FChaosVDAccelerationStructureBase::Type");

// /Script/ChaosVDRuntime.ChaosVDAccelerationStructureContainer
// Kind: ScriptStruct; super: none
struct FChaosVDAccelerationStructureContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDBVCellElementDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDBVCellElementDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Bounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::int32_t ParticleIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosVDBVCellElementDataWrapper, Bounds) == 16, "Offset mismatch for FChaosVDBVCellElementDataWrapper::Bounds");
static_assert(offsetof(FChaosVDBVCellElementDataWrapper, ParticleIndex) == 72, "Offset mismatch for FChaosVDBVCellElementDataWrapper::ParticleIndex");

// /Script/ChaosVDRuntime.ChaosVDBoundingVolumeDataWrapper
// Kind: ScriptStruct; super: ChaosVDAccelerationStructureBase
struct FChaosVDBoundingVolumeDataWrapper
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    double MaxPayloadBounds; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDBoundingVolumeDataWrapper, MaxPayloadBounds) == 56, "Offset mismatch for FChaosVDBoundingVolumeDataWrapper::MaxPayloadBounds");

// /Script/ChaosVDRuntime.ChaosVDCameraDataContainer
// Kind: ScriptStruct; super: none
struct FChaosVDCameraDataContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDCameraDataWrapper
// Kind: ScriptStruct; super: none
struct FChaosVDCameraDataWrapper
{
public:
    std::uint8_t Camera[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    float FOV; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosVDCameraDataWrapper, Camera) == 0, "Offset mismatch for FChaosVDCameraDataWrapper::Camera");
static_assert(offsetof(FChaosVDCameraDataWrapper, Position) == 24, "Offset mismatch for FChaosVDCameraDataWrapper::Position");
static_assert(offsetof(FChaosVDCameraDataWrapper, Rotation) == 48, "Offset mismatch for FChaosVDCameraDataWrapper::Rotation");
static_assert(offsetof(FChaosVDCameraDataWrapper, FOV) == 80, "Offset mismatch for FChaosVDCameraDataWrapper::FOV");

// /Script/ChaosVDRuntime.ChaosVDCameraIdentifier
// Kind: ScriptStruct; super: none
struct FChaosVDCameraIdentifier
{
public:
    std::uint8_t CameraName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActorName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActorAssetPath[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t MapAssetPath[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDCameraIdentifier, CameraName) == 0, "Offset mismatch for FChaosVDCameraIdentifier::CameraName");
static_assert(offsetof(FChaosVDCameraIdentifier, ActorName) == 4, "Offset mismatch for FChaosVDCameraIdentifier::ActorName");
static_assert(offsetof(FChaosVDCameraIdentifier, ActorAssetPath) == 8, "Offset mismatch for FChaosVDCameraIdentifier::ActorAssetPath");
static_assert(offsetof(FChaosVDCameraIdentifier, MapAssetPath) == 16, "Offset mismatch for FChaosVDCameraIdentifier::MapAssetPath");

// /Script/ChaosVDRuntime.ChaosVDCharacterGroundConstraint
// Kind: ScriptStruct; super: ChaosVDConstraintDataWrapperBase
struct FChaosVDCharacterGroundConstraint
{
public:
    std::uint8_t Pad_0000[0x14]; // 0x0000
    std::int32_t ConstraintIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t State[0x58]; // 0x0020 (Size: 0x58, Type: StructProperty)
    std::uint8_t Settings[0x68]; // 0x0078 (Size: 0x68, Type: StructProperty)
    std::uint8_t Data[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDCharacterGroundConstraint, ConstraintIndex) == 20, "Offset mismatch for FChaosVDCharacterGroundConstraint::ConstraintIndex");
static_assert(offsetof(FChaosVDCharacterGroundConstraint, State) == 32, "Offset mismatch for FChaosVDCharacterGroundConstraint::State");
static_assert(offsetof(FChaosVDCharacterGroundConstraint, Settings) == 120, "Offset mismatch for FChaosVDCharacterGroundConstraint::Settings");
static_assert(offsetof(FChaosVDCharacterGroundConstraint, Data) == 224, "Offset mismatch for FChaosVDCharacterGroundConstraint::Data");

// /Script/ChaosVDRuntime.ChaosVDCharacterGroundConstraintDataDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCharacterGroundConstraintDataDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t GroundNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetDeltaPosition[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    double TargetDeltaFacing; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double GroundDistance; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double CosMaxWalkableSlopeAngle; // 0x0050 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDCharacterGroundConstraintDataDataWrapper, GroundNormal) == 16, "Offset mismatch for FChaosVDCharacterGroundConstraintDataDataWrapper::GroundNormal");
static_assert(offsetof(FChaosVDCharacterGroundConstraintDataDataWrapper, TargetDeltaPosition) == 40, "Offset mismatch for FChaosVDCharacterGroundConstraintDataDataWrapper::TargetDeltaPosition");
static_assert(offsetof(FChaosVDCharacterGroundConstraintDataDataWrapper, TargetDeltaFacing) == 64, "Offset mismatch for FChaosVDCharacterGroundConstraintDataDataWrapper::TargetDeltaFacing");
static_assert(offsetof(FChaosVDCharacterGroundConstraintDataDataWrapper, GroundDistance) == 72, "Offset mismatch for FChaosVDCharacterGroundConstraintDataDataWrapper::GroundDistance");
static_assert(offsetof(FChaosVDCharacterGroundConstraintDataDataWrapper, CosMaxWalkableSlopeAngle) == 80, "Offset mismatch for FChaosVDCharacterGroundConstraintDataDataWrapper::CosMaxWalkableSlopeAngle");

// /Script/ChaosVDRuntime.ChaosVDCharacterGroundConstraintSettingsDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCharacterGroundConstraintSettingsDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t VerticalAxis[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    double TargetHeight; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double RadialForceLimit; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double FrictionForceLimit; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double TwistTorqueLimit; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double SwingTorqueLimit; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double CosMaxWalkableSlopeAngle; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double DampingFactor; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double AssumedOnGroundHeight; // 0x0060 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, VerticalAxis) == 16, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::VerticalAxis");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, TargetHeight) == 40, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::TargetHeight");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, RadialForceLimit) == 48, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::RadialForceLimit");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, FrictionForceLimit) == 56, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::FrictionForceLimit");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, TwistTorqueLimit) == 64, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::TwistTorqueLimit");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, SwingTorqueLimit) == 72, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::SwingTorqueLimit");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, CosMaxWalkableSlopeAngle) == 80, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::CosMaxWalkableSlopeAngle");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, DampingFactor) == 88, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::DampingFactor");
static_assert(offsetof(FChaosVDCharacterGroundConstraintSettingsDataWrapper, AssumedOnGroundHeight) == 96, "Offset mismatch for FChaosVDCharacterGroundConstraintSettingsDataWrapper::AssumedOnGroundHeight");

// /Script/ChaosVDRuntime.ChaosVDCharacterGroundConstraintStateDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCharacterGroundConstraintStateDataWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bDisabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t SolverAppliedForce[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SolverAppliedTorque[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDCharacterGroundConstraintStateDataWrapper, bDisabled) == 32, "Offset mismatch for FChaosVDCharacterGroundConstraintStateDataWrapper::bDisabled");
static_assert(offsetof(FChaosVDCharacterGroundConstraintStateDataWrapper, SolverAppliedForce) == 40, "Offset mismatch for FChaosVDCharacterGroundConstraintStateDataWrapper::SolverAppliedForce");
static_assert(offsetof(FChaosVDCharacterGroundConstraintStateDataWrapper, SolverAppliedTorque) == 64, "Offset mismatch for FChaosVDCharacterGroundConstraintStateDataWrapper::SolverAppliedTorque");

// /Script/ChaosVDRuntime.ChaosVDCollisionChannelInfo
// Kind: ScriptStruct; super: none
struct FChaosVDCollisionChannelInfo
{
public:
    FString DisplayName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t CollisionChannel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsTraceType; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDCollisionChannelInfo, DisplayName) == 0, "Offset mismatch for FChaosVDCollisionChannelInfo::DisplayName");
static_assert(offsetof(FChaosVDCollisionChannelInfo, CollisionChannel) == 16, "Offset mismatch for FChaosVDCollisionChannelInfo::CollisionChannel");
static_assert(offsetof(FChaosVDCollisionChannelInfo, bIsTraceType) == 20, "Offset mismatch for FChaosVDCollisionChannelInfo::bIsTraceType");

// /Script/ChaosVDRuntime.ChaosVDCollisionChannelsInfoContainer
// Kind: ScriptStruct; super: none
struct FChaosVDCollisionChannelsInfoContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDCollisionFilterData
// Kind: ScriptStruct; super: none
struct FChaosVDCollisionFilterData
{
public:
    std::uint32_t Word0; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Word1; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Word2; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Word3; // 0x000C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FChaosVDCollisionFilterData, Word0) == 0, "Offset mismatch for FChaosVDCollisionFilterData::Word0");
static_assert(offsetof(FChaosVDCollisionFilterData, Word1) == 4, "Offset mismatch for FChaosVDCollisionFilterData::Word1");
static_assert(offsetof(FChaosVDCollisionFilterData, Word2) == 8, "Offset mismatch for FChaosVDCollisionFilterData::Word2");
static_assert(offsetof(FChaosVDCollisionFilterData, Word3) == 12, "Offset mismatch for FChaosVDCollisionFilterData::Word3");

// /Script/ChaosVDRuntime.ChaosVDCollisionMaterial
// Kind: ScriptStruct; super: none
struct FChaosVDCollisionMaterial
{
public:
    std::int32_t FaceIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MaterialDynamicFriction; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaterialStaticFriction; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaterialRestitution; // 0x000C (Size: 0x4, Type: FloatProperty)
    float DynamicFriction; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float StaticFriction; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Restitution; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float RestitutionThreshold; // 0x001C (Size: 0x4, Type: FloatProperty)
    float InvMassScale0; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float InvMassScale1; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float InvInertiaScale0; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InvInertiaScale1; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosVDCollisionMaterial, FaceIndex) == 0, "Offset mismatch for FChaosVDCollisionMaterial::FaceIndex");
static_assert(offsetof(FChaosVDCollisionMaterial, MaterialDynamicFriction) == 4, "Offset mismatch for FChaosVDCollisionMaterial::MaterialDynamicFriction");
static_assert(offsetof(FChaosVDCollisionMaterial, MaterialStaticFriction) == 8, "Offset mismatch for FChaosVDCollisionMaterial::MaterialStaticFriction");
static_assert(offsetof(FChaosVDCollisionMaterial, MaterialRestitution) == 12, "Offset mismatch for FChaosVDCollisionMaterial::MaterialRestitution");
static_assert(offsetof(FChaosVDCollisionMaterial, DynamicFriction) == 16, "Offset mismatch for FChaosVDCollisionMaterial::DynamicFriction");
static_assert(offsetof(FChaosVDCollisionMaterial, StaticFriction) == 20, "Offset mismatch for FChaosVDCollisionMaterial::StaticFriction");
static_assert(offsetof(FChaosVDCollisionMaterial, Restitution) == 24, "Offset mismatch for FChaosVDCollisionMaterial::Restitution");
static_assert(offsetof(FChaosVDCollisionMaterial, RestitutionThreshold) == 28, "Offset mismatch for FChaosVDCollisionMaterial::RestitutionThreshold");
static_assert(offsetof(FChaosVDCollisionMaterial, InvMassScale0) == 32, "Offset mismatch for FChaosVDCollisionMaterial::InvMassScale0");
static_assert(offsetof(FChaosVDCollisionMaterial, InvMassScale1) == 36, "Offset mismatch for FChaosVDCollisionMaterial::InvMassScale1");
static_assert(offsetof(FChaosVDCollisionMaterial, InvInertiaScale0) == 40, "Offset mismatch for FChaosVDCollisionMaterial::InvInertiaScale0");
static_assert(offsetof(FChaosVDCollisionMaterial, InvInertiaScale1) == 44, "Offset mismatch for FChaosVDCollisionMaterial::InvInertiaScale1");

// /Script/ChaosVDRuntime.ChaosVDCollisionObjectQueryParams
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCollisionObjectQueryParams
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t IgnoreMask; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FChaosVDCollisionObjectQueryParams, IgnoreMask) == 24, "Offset mismatch for FChaosVDCollisionObjectQueryParams::IgnoreMask");

// /Script/ChaosVDRuntime.ChaosVDCollisionQueryParams
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCollisionQueryParams
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TraceTag[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t OwnerTag[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t bFindInitialOverlaps; // 0x0018 (Size: 0x1, Type: BoolProperty)
    // 0x0018 BoolProperty bIgnoreBlocks (shared storage)
    // 0x0018 BoolProperty bIgnoreTouches (shared storage)
    // 0x0018 BoolProperty bReturnFaceIndex (shared storage)
    // 0x0018 BoolProperty bReturnPhysicalMaterial (shared storage)
    // 0x0018 BoolProperty bSkipNarrowPhase (shared storage)
    // 0x0018 BoolProperty bTraceComplex (shared storage)
    // 0x0018 BoolProperty bTraceIntoSubComponents (shared storage)
    std::uint8_t bReplaceHitWithSubComponents; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IgnoreMask; // 0x001A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x25]; // 0x001B
    TArray<void*> IgnoredActorsNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IgnoredComponentsNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDCollisionQueryParams, TraceTag) == 16, "Offset mismatch for FChaosVDCollisionQueryParams::TraceTag");
static_assert(offsetof(FChaosVDCollisionQueryParams, OwnerTag) == 20, "Offset mismatch for FChaosVDCollisionQueryParams::OwnerTag");
static_assert(offsetof(FChaosVDCollisionQueryParams, bFindInitialOverlaps) == 24, "Offset mismatch for FChaosVDCollisionQueryParams::bFindInitialOverlaps");
static_assert(offsetof(FChaosVDCollisionQueryParams, bReplaceHitWithSubComponents) == 25, "Offset mismatch for FChaosVDCollisionQueryParams::bReplaceHitWithSubComponents");
static_assert(offsetof(FChaosVDCollisionQueryParams, IgnoreMask) == 26, "Offset mismatch for FChaosVDCollisionQueryParams::IgnoreMask");
static_assert(offsetof(FChaosVDCollisionQueryParams, IgnoredActorsNames) == 64, "Offset mismatch for FChaosVDCollisionQueryParams::IgnoredActorsNames");
static_assert(offsetof(FChaosVDCollisionQueryParams, IgnoredComponentsNames) == 80, "Offset mismatch for FChaosVDCollisionQueryParams::IgnoredComponentsNames");

// /Script/ChaosVDRuntime.ChaosVDCollisionResponseParams
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDCollisionResponseParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bHasValidData; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDCollisionResponseParams, bHasValidData) == 8, "Offset mismatch for FChaosVDCollisionResponseParams::bHasValidData");

// /Script/ChaosVDRuntime.ChaosVDConnectivityEdge
// Kind: ScriptStruct; super: none
struct FChaosVDConnectivityEdge
{
public:
    std::int32_t SiblingParticleID; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Strain; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosVDConnectivityEdge, SiblingParticleID) == 0, "Offset mismatch for FChaosVDConnectivityEdge::SiblingParticleID");
static_assert(offsetof(FChaosVDConnectivityEdge, Strain) == 4, "Offset mismatch for FChaosVDConnectivityEdge::Strain");

// /Script/ChaosVDRuntime.ChaosVDConstraint
// Kind: ScriptStruct; super: none
struct FChaosVDConstraint
{
public:
    std::uint8_t bCanRestoreManifold; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bDisabled (shared storage)
    // 0x0000 BoolProperty bIsCurrent (shared storage)
    // 0x0000 BoolProperty bIsQuadratic0 (shared storage)
    // 0x0000 BoolProperty bIsQuadratic1 (shared storage)
    // 0x0000 BoolProperty bUseIncrementalManifold (shared storage)
    // 0x0000 BoolProperty bUseManifold (shared storage)
    // 0x0000 BoolProperty bWasManifoldRestored (shared storage)
    std::uint8_t bCCDEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    // 0x0001 BoolProperty bCCDSweepEnabled (shared storage)
    // 0x0001 BoolProperty bIsProbe (shared storage)
    // 0x0001 BoolProperty bMaterialSet (shared storage)
    // 0x0001 BoolProperty bModifierApplied (shared storage)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t Material[0x34]; // 0x0004 (Size: 0x34, Type: StructProperty)
    std::uint8_t AccumulatedImpulse[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ShapesType; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0051
    std::uint8_t ShapeWorldTransforms[0xC0]; // 0x0060 (Size: 0xC0, Type: StructProperty)
    std::uint8_t ImplicitTransforms[0xC0]; // 0x0120 (Size: 0xC0, Type: StructProperty)
    float CullDistance; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x01E4
    TArray<void*> CollisionMargins; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    float CollisionTolerance; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::int32_t ClosestManifoldPointIndex; // 0x01FC (Size: 0x4, Type: IntProperty)
    std::int32_t ExpectedNumManifoldPoints; // 0x0200 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0204
    std::uint8_t LastShapeWorldPositionDelta[0x18]; // 0x0208 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastShapeWorldRotationDelta[0x20]; // 0x0220 (Size: 0x20, Type: StructProperty)
    float Stiffness; // 0x0240 (Size: 0x4, Type: FloatProperty)
    float MinInitialPhi; // 0x0244 (Size: 0x4, Type: FloatProperty)
    float InitialOverlapDepenetrationVelocity; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float CCDTimeOfImpact; // 0x024C (Size: 0x4, Type: FloatProperty)
    float CCDEnablePenetration; // 0x0250 (Size: 0x4, Type: FloatProperty)
    float CCDTargetPenetration; // 0x0254 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ManifoldPoints; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Particle0Index; // 0x0268 (Size: 0x4, Type: IntProperty)
    std::int32_t Particle1Index; // 0x026C (Size: 0x4, Type: IntProperty)
    std::int32_t SolverId; // 0x0270 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosVDConstraint, bCanRestoreManifold) == 0, "Offset mismatch for FChaosVDConstraint::bCanRestoreManifold");
static_assert(offsetof(FChaosVDConstraint, bCCDEnabled) == 1, "Offset mismatch for FChaosVDConstraint::bCCDEnabled");
static_assert(offsetof(FChaosVDConstraint, Material) == 4, "Offset mismatch for FChaosVDConstraint::Material");
static_assert(offsetof(FChaosVDConstraint, AccumulatedImpulse) == 56, "Offset mismatch for FChaosVDConstraint::AccumulatedImpulse");
static_assert(offsetof(FChaosVDConstraint, ShapesType) == 80, "Offset mismatch for FChaosVDConstraint::ShapesType");
static_assert(offsetof(FChaosVDConstraint, ShapeWorldTransforms) == 96, "Offset mismatch for FChaosVDConstraint::ShapeWorldTransforms");
static_assert(offsetof(FChaosVDConstraint, ImplicitTransforms) == 288, "Offset mismatch for FChaosVDConstraint::ImplicitTransforms");
static_assert(offsetof(FChaosVDConstraint, CullDistance) == 480, "Offset mismatch for FChaosVDConstraint::CullDistance");
static_assert(offsetof(FChaosVDConstraint, CollisionMargins) == 488, "Offset mismatch for FChaosVDConstraint::CollisionMargins");
static_assert(offsetof(FChaosVDConstraint, CollisionTolerance) == 504, "Offset mismatch for FChaosVDConstraint::CollisionTolerance");
static_assert(offsetof(FChaosVDConstraint, ClosestManifoldPointIndex) == 508, "Offset mismatch for FChaosVDConstraint::ClosestManifoldPointIndex");
static_assert(offsetof(FChaosVDConstraint, ExpectedNumManifoldPoints) == 512, "Offset mismatch for FChaosVDConstraint::ExpectedNumManifoldPoints");
static_assert(offsetof(FChaosVDConstraint, LastShapeWorldPositionDelta) == 520, "Offset mismatch for FChaosVDConstraint::LastShapeWorldPositionDelta");
static_assert(offsetof(FChaosVDConstraint, LastShapeWorldRotationDelta) == 544, "Offset mismatch for FChaosVDConstraint::LastShapeWorldRotationDelta");
static_assert(offsetof(FChaosVDConstraint, Stiffness) == 576, "Offset mismatch for FChaosVDConstraint::Stiffness");
static_assert(offsetof(FChaosVDConstraint, MinInitialPhi) == 580, "Offset mismatch for FChaosVDConstraint::MinInitialPhi");
static_assert(offsetof(FChaosVDConstraint, InitialOverlapDepenetrationVelocity) == 584, "Offset mismatch for FChaosVDConstraint::InitialOverlapDepenetrationVelocity");
static_assert(offsetof(FChaosVDConstraint, CCDTimeOfImpact) == 588, "Offset mismatch for FChaosVDConstraint::CCDTimeOfImpact");
static_assert(offsetof(FChaosVDConstraint, CCDEnablePenetration) == 592, "Offset mismatch for FChaosVDConstraint::CCDEnablePenetration");
static_assert(offsetof(FChaosVDConstraint, CCDTargetPenetration) == 596, "Offset mismatch for FChaosVDConstraint::CCDTargetPenetration");
static_assert(offsetof(FChaosVDConstraint, ManifoldPoints) == 600, "Offset mismatch for FChaosVDConstraint::ManifoldPoints");
static_assert(offsetof(FChaosVDConstraint, Particle0Index) == 616, "Offset mismatch for FChaosVDConstraint::Particle0Index");
static_assert(offsetof(FChaosVDConstraint, Particle1Index) == 620, "Offset mismatch for FChaosVDConstraint::Particle1Index");
static_assert(offsetof(FChaosVDConstraint, SolverId) == 624, "Offset mismatch for FChaosVDConstraint::SolverId");

// /Script/ChaosVDRuntime.ChaosVDConstraintDataWrapperBase
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDConstraintDataWrapperBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bHasValidData; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDConstraintDataWrapperBase, bHasValidData) == 8, "Offset mismatch for FChaosVDConstraintDataWrapperBase::bHasValidData");

// /Script/ChaosVDRuntime.ChaosVDContactPoint
// Kind: ScriptStruct; super: none
struct FChaosVDContactPoint
{
public:
    std::uint8_t ShapeContactPoints[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t ShapeContactNormal[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Phi; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t FaceIndex; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t ContactType; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDContactPoint, ShapeContactPoints) == 0, "Offset mismatch for FChaosVDContactPoint::ShapeContactPoints");
static_assert(offsetof(FChaosVDContactPoint, ShapeContactNormal) == 48, "Offset mismatch for FChaosVDContactPoint::ShapeContactNormal");
static_assert(offsetof(FChaosVDContactPoint, Phi) == 72, "Offset mismatch for FChaosVDContactPoint::Phi");
static_assert(offsetof(FChaosVDContactPoint, FaceIndex) == 76, "Offset mismatch for FChaosVDContactPoint::FaceIndex");
static_assert(offsetof(FChaosVDContactPoint, ContactType) == 80, "Offset mismatch for FChaosVDContactPoint::ContactType");

// /Script/ChaosVDRuntime.ChaosVDDebugDrawBoxDataWrapper
// Kind: ScriptStruct; super: ChaosVDDebugDrawShapeBase
struct FChaosVDDebugDrawBoxDataWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Box[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDDebugDrawBoxDataWrapper, Box) == 32, "Offset mismatch for FChaosVDDebugDrawBoxDataWrapper::Box");

// /Script/ChaosVDRuntime.ChaosVDDebugDrawImplicitObjectDataWrapper
// Kind: ScriptStruct; super: ChaosVDDebugDrawShapeBase
struct FChaosVDDebugDrawImplicitObjectDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t SolverId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Tag[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t ThreadContext; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDDebugDrawImplicitObjectDataWrapper, SolverId) == 16, "Offset mismatch for FChaosVDDebugDrawImplicitObjectDataWrapper::SolverId");
static_assert(offsetof(FChaosVDDebugDrawImplicitObjectDataWrapper, Tag) == 20, "Offset mismatch for FChaosVDDebugDrawImplicitObjectDataWrapper::Tag");
static_assert(offsetof(FChaosVDDebugDrawImplicitObjectDataWrapper, Color) == 24, "Offset mismatch for FChaosVDDebugDrawImplicitObjectDataWrapper::Color");
static_assert(offsetof(FChaosVDDebugDrawImplicitObjectDataWrapper, ThreadContext) == 28, "Offset mismatch for FChaosVDDebugDrawImplicitObjectDataWrapper::ThreadContext");

// /Script/ChaosVDRuntime.ChaosVDDebugDrawLineDataWrapper
// Kind: ScriptStruct; super: ChaosVDDebugDrawShapeBase
struct FChaosVDDebugDrawLineDataWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t StartLocation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsArrow; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDDebugDrawLineDataWrapper, StartLocation) == 32, "Offset mismatch for FChaosVDDebugDrawLineDataWrapper::StartLocation");
static_assert(offsetof(FChaosVDDebugDrawLineDataWrapper, EndLocation) == 56, "Offset mismatch for FChaosVDDebugDrawLineDataWrapper::EndLocation");
static_assert(offsetof(FChaosVDDebugDrawLineDataWrapper, bIsArrow) == 80, "Offset mismatch for FChaosVDDebugDrawLineDataWrapper::bIsArrow");

// /Script/ChaosVDRuntime.ChaosVDDebugDrawShapeBase
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDDebugDrawShapeBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t SolverId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Tag[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t Color[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t ThreadContext; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDDebugDrawShapeBase, SolverId) == 16, "Offset mismatch for FChaosVDDebugDrawShapeBase::SolverId");
static_assert(offsetof(FChaosVDDebugDrawShapeBase, Tag) == 20, "Offset mismatch for FChaosVDDebugDrawShapeBase::Tag");
static_assert(offsetof(FChaosVDDebugDrawShapeBase, Color) == 24, "Offset mismatch for FChaosVDDebugDrawShapeBase::Color");
static_assert(offsetof(FChaosVDDebugDrawShapeBase, ThreadContext) == 28, "Offset mismatch for FChaosVDDebugDrawShapeBase::ThreadContext");

// /Script/ChaosVDRuntime.ChaosVDDebugDrawSphereDataWrapper
// Kind: ScriptStruct; super: ChaosVDDebugDrawShapeBase
struct FChaosVDDebugDrawSphereDataWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t origin[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosVDDebugDrawSphereDataWrapper, origin) == 32, "Offset mismatch for FChaosVDDebugDrawSphereDataWrapper::origin");
static_assert(offsetof(FChaosVDDebugDrawSphereDataWrapper, Radius) == 56, "Offset mismatch for FChaosVDDebugDrawSphereDataWrapper::Radius");

// /Script/ChaosVDRuntime.ChaosVDDebugShapeDataContainer
// Kind: ScriptStruct; super: none
struct FChaosVDDebugShapeDataContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDFRigidParticleControlFlags
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDFRigidParticleControlFlags
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bGravityEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCCDEnabled; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOneWayInteractionEnabled; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInertiaConditioningEnabled; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::int32_t GravityGroupIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMACDEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPartialIslandSleepAllowed; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGyroscopicTorqueEnabled; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bGravityEnabled) == 16, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bGravityEnabled");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bCCDEnabled) == 17, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bCCDEnabled");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bOneWayInteractionEnabled) == 18, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bOneWayInteractionEnabled");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bInertiaConditioningEnabled) == 19, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bInertiaConditioningEnabled");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, GravityGroupIndex) == 20, "Offset mismatch for FChaosVDFRigidParticleControlFlags::GravityGroupIndex");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bMACDEnabled) == 24, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bMACDEnabled");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bPartialIslandSleepAllowed) == 25, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bPartialIslandSleepAllowed");
static_assert(offsetof(FChaosVDFRigidParticleControlFlags, bGyroscopicTorqueEnabled) == 26, "Offset mismatch for FChaosVDFRigidParticleControlFlags::bGyroscopicTorqueEnabled");

// /Script/ChaosVDRuntime.ChaosVDGTJointStateDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDGTJointStateDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bDriveTargetChanged; // 0x0010 (Size: 0x1, Type: BoolProperty)
    // 0x0010 BoolProperty bIsBreaking (shared storage)
    // 0x0010 BoolProperty bIsBroken (shared storage)
    // 0x0010 BoolProperty bIsViolating (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t Force[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Torque[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float LinearViolation; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float AngularViolation; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosVDGTJointStateDataWrapper, bDriveTargetChanged) == 16, "Offset mismatch for FChaosVDGTJointStateDataWrapper::bDriveTargetChanged");
static_assert(offsetof(FChaosVDGTJointStateDataWrapper, Force) == 24, "Offset mismatch for FChaosVDGTJointStateDataWrapper::Force");
static_assert(offsetof(FChaosVDGTJointStateDataWrapper, Torque) == 48, "Offset mismatch for FChaosVDGTJointStateDataWrapper::Torque");
static_assert(offsetof(FChaosVDGTJointStateDataWrapper, LinearViolation) == 72, "Offset mismatch for FChaosVDGTJointStateDataWrapper::LinearViolation");
static_assert(offsetof(FChaosVDGTJointStateDataWrapper, AngularViolation) == 76, "Offset mismatch for FChaosVDGTJointStateDataWrapper::AngularViolation");

// /Script/ChaosVDRuntime.ChaosVDJointConstraint
// Kind: ScriptStruct; super: ChaosVDConstraintDataWrapperBase
struct FChaosVDJointConstraint
{
public:
    std::uint8_t Pad_0000[0x14]; // 0x0000
    std::int32_t ConstraintIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t PhysicsThreadJointState[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t GameThreadJointState[0x50]; // 0x0080 (Size: 0x50, Type: StructProperty)
    std::uint8_t JointSettings[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDJointConstraint, ConstraintIndex) == 20, "Offset mismatch for FChaosVDJointConstraint::ConstraintIndex");
static_assert(offsetof(FChaosVDJointConstraint, PhysicsThreadJointState) == 32, "Offset mismatch for FChaosVDJointConstraint::PhysicsThreadJointState");
static_assert(offsetof(FChaosVDJointConstraint, GameThreadJointState) == 128, "Offset mismatch for FChaosVDJointConstraint::GameThreadJointState");
static_assert(offsetof(FChaosVDJointConstraint, JointSettings) == 208, "Offset mismatch for FChaosVDJointConstraint::JointSettings");

// /Script/ChaosVDRuntime.ChaosVDJointSettingsDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDJointSettingsDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ConnectorTransforms[0xC0]; // 0x0010 (Size: 0xC0, Type: StructProperty)
    double Stiffness; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    double LinearProjection; // 0x00D8 (Size: 0x8, Type: DoubleProperty)
    double AngularProjection; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    double ShockPropagation; // 0x00E8 (Size: 0x8, Type: DoubleProperty)
    double TeleportDistance; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    double TeleportAngle; // 0x00F8 (Size: 0x8, Type: DoubleProperty)
    double ParentInvMassScale; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAngularSLerpPositionDriveEnabled; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bAngularSLerpVelocityDriveEnabled (shared storage)
    // 0x0108 BoolProperty bCollisionEnabled (shared storage)
    // 0x0108 BoolProperty bMassConditioningEnabled (shared storage)
    // 0x0108 BoolProperty bSoftLinearLimitsEnabled (shared storage)
    // 0x0108 BoolProperty bSoftSwingLimitsEnabled (shared storage)
    // 0x0108 BoolProperty bSoftTwistLimitsEnabled (shared storage)
    // 0x0108 BoolProperty bUseLinearSolver (shared storage)
    std::uint8_t bAngularSwingPositionDriveEnabled; // 0x0109 (Size: 0x1, Type: BoolProperty)
    // 0x0109 BoolProperty bAngularSwingVelocityDriveEnabled (shared storage)
    // 0x0109 BoolProperty bAngularTwistPositionDriveEnabled (shared storage)
    // 0x0109 BoolProperty bAngularTwistVelocityDriveEnabled (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x010A
    std::uint8_t LinearMotionTypes; // 0x010C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0xB]; // 0x010D
    double LinearLimit; // 0x0118 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t AngularMotionTypes; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0xF]; // 0x0121
    std::uint8_t AngularLimits[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearSoftForceMode; // 0x0148 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0149
    std::uint8_t AngularSoftForceMode; // 0x014C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x014D
    double SoftLinearStiffness; // 0x0150 (Size: 0x8, Type: DoubleProperty)
    double SoftLinearDamping; // 0x0158 (Size: 0x8, Type: DoubleProperty)
    double SoftTwistStiffness; // 0x0160 (Size: 0x8, Type: DoubleProperty)
    double SoftTwistDamping; // 0x0168 (Size: 0x8, Type: DoubleProperty)
    double SoftSwingStiffness; // 0x0170 (Size: 0x8, Type: DoubleProperty)
    double SoftSwingDamping; // 0x0178 (Size: 0x8, Type: DoubleProperty)
    double LinearRestitution; // 0x0180 (Size: 0x8, Type: DoubleProperty)
    double TwistRestitution; // 0x0188 (Size: 0x8, Type: DoubleProperty)
    double SwingRestitution; // 0x0190 (Size: 0x8, Type: DoubleProperty)
    double LinearContactDistance; // 0x0198 (Size: 0x8, Type: DoubleProperty)
    double TwistContactDistance; // 0x01A0 (Size: 0x8, Type: DoubleProperty)
    double SwingContactDistance; // 0x01A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LinearDrivePositionTarget[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearDriveVelocityTarget[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLinearPositionDriveEnabled0; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    // 0x01E0 BoolProperty bLinearPositionDriveEnabled1 (shared storage)
    // 0x01E0 BoolProperty bLinearPositionDriveEnabled2 (shared storage)
    // 0x01E0 BoolProperty bLinearVelocityDriveEnabled0 (shared storage)
    // 0x01E0 BoolProperty bLinearVelocityDriveEnabled1 (shared storage)
    // 0x01E0 BoolProperty bLinearVelocityDriveEnabled2 (shared storage)
    std::uint8_t Pad_0006[0x3]; // 0x01E1
    std::uint8_t LinearDriveForceMode; // 0x01E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x01E5
    std::uint8_t LinearDriveStiffness[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearDriveDamping[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearDriveMaxForce[0x18]; // 0x0218 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDrivePositionTarget[0x20]; // 0x0230 (Size: 0x20, Type: StructProperty)
    std::uint8_t AngularDriveVelocityTarget[0x18]; // 0x0250 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDriveForceMode; // 0x0268 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0269
    std::uint8_t AngularDriveStiffness[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDriveDamping[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDriveMaxTorque[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    double LinearBreakForce; // 0x02B8 (Size: 0x8, Type: DoubleProperty)
    double LinearPlasticityLimit; // 0x02C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LinearPlasticityType; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x7]; // 0x02C9
    double LinearPlasticityInitialDistanceSquared; // 0x02D0 (Size: 0x8, Type: DoubleProperty)
    double AngularBreakTorque; // 0x02D8 (Size: 0x8, Type: DoubleProperty)
    double AngularPlasticityLimit; // 0x02E0 (Size: 0x8, Type: DoubleProperty)
    double ContactTransferScale; // 0x02E8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDJointSettingsDataWrapper, ConnectorTransforms) == 16, "Offset mismatch for FChaosVDJointSettingsDataWrapper::ConnectorTransforms");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, Stiffness) == 208, "Offset mismatch for FChaosVDJointSettingsDataWrapper::Stiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearProjection) == 216, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearProjection");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularProjection) == 224, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularProjection");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, ShockPropagation) == 232, "Offset mismatch for FChaosVDJointSettingsDataWrapper::ShockPropagation");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, TeleportDistance) == 240, "Offset mismatch for FChaosVDJointSettingsDataWrapper::TeleportDistance");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, TeleportAngle) == 248, "Offset mismatch for FChaosVDJointSettingsDataWrapper::TeleportAngle");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, ParentInvMassScale) == 256, "Offset mismatch for FChaosVDJointSettingsDataWrapper::ParentInvMassScale");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, bAngularSLerpPositionDriveEnabled) == 264, "Offset mismatch for FChaosVDJointSettingsDataWrapper::bAngularSLerpPositionDriveEnabled");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, bAngularSwingPositionDriveEnabled) == 265, "Offset mismatch for FChaosVDJointSettingsDataWrapper::bAngularSwingPositionDriveEnabled");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearMotionTypes) == 268, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearMotionTypes");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearLimit) == 280, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearLimit");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularMotionTypes) == 288, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularMotionTypes");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularLimits) == 304, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularLimits");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearSoftForceMode) == 328, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearSoftForceMode");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularSoftForceMode) == 332, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularSoftForceMode");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftLinearStiffness) == 336, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftLinearStiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftLinearDamping) == 344, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftLinearDamping");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftTwistStiffness) == 352, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftTwistStiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftTwistDamping) == 360, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftTwistDamping");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftSwingStiffness) == 368, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftSwingStiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SoftSwingDamping) == 376, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SoftSwingDamping");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearRestitution) == 384, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearRestitution");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, TwistRestitution) == 392, "Offset mismatch for FChaosVDJointSettingsDataWrapper::TwistRestitution");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SwingRestitution) == 400, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SwingRestitution");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearContactDistance) == 408, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearContactDistance");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, TwistContactDistance) == 416, "Offset mismatch for FChaosVDJointSettingsDataWrapper::TwistContactDistance");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, SwingContactDistance) == 424, "Offset mismatch for FChaosVDJointSettingsDataWrapper::SwingContactDistance");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDrivePositionTarget) == 432, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDrivePositionTarget");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDriveVelocityTarget) == 456, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDriveVelocityTarget");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, bLinearPositionDriveEnabled0) == 480, "Offset mismatch for FChaosVDJointSettingsDataWrapper::bLinearPositionDriveEnabled0");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDriveForceMode) == 484, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDriveForceMode");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDriveStiffness) == 488, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDriveStiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDriveDamping) == 512, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDriveDamping");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearDriveMaxForce) == 536, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearDriveMaxForce");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDrivePositionTarget) == 560, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDrivePositionTarget");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDriveVelocityTarget) == 592, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDriveVelocityTarget");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDriveForceMode) == 616, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDriveForceMode");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDriveStiffness) == 624, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDriveStiffness");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDriveDamping) == 648, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDriveDamping");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularDriveMaxTorque) == 672, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularDriveMaxTorque");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearBreakForce) == 696, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearBreakForce");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearPlasticityLimit) == 704, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearPlasticityLimit");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearPlasticityType) == 712, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearPlasticityType");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, LinearPlasticityInitialDistanceSquared) == 720, "Offset mismatch for FChaosVDJointSettingsDataWrapper::LinearPlasticityInitialDistanceSquared");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularBreakTorque) == 728, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularBreakTorque");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, AngularPlasticityLimit) == 736, "Offset mismatch for FChaosVDJointSettingsDataWrapper::AngularPlasticityLimit");
static_assert(offsetof(FChaosVDJointSettingsDataWrapper, ContactTransferScale) == 744, "Offset mismatch for FChaosVDJointSettingsDataWrapper::ContactTransferScale");

// /Script/ChaosVDRuntime.ChaosVDJointSolverSettingsDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDJointSolverSettingsDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    double SwingTwistAngleTolerance; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double PositionTolerance; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double AngleTolerance; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double MinParentMassRatio; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double MaxInertiaRatio; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double MinSolverStiffness; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double MaxSolverStiffness; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NumIterationsAtMaxSolverStiffness; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t NumShockPropagationIterations; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableDrives; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bEnableSwingLimits (shared storage)
    // 0x0050 BoolProperty bEnableTwistLimits (shared storage)
    // 0x0050 BoolProperty bSolvePositionLast (shared storage)
    // 0x0050 BoolProperty bSortEnabled (shared storage)
    // 0x0050 BoolProperty bUseLinearSolver (shared storage)
    // 0x0050 BoolProperty bUsePositionBasedDrives (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    double LinearStiffnessOverride; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double TwistStiffnessOverride; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double SwingStiffnessOverride; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double LinearProjectionOverride; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double AngularProjectionOverride; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double ShockPropagationOverride; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double LinearDriveStiffnessOverride; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    double LinearDriveDampingOverride; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double AngularDriveStiffnessOverride; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    double AngularDriveDampingOverride; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    double SoftLinearStiffnessOverride; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    double SoftLinearDampingOverride; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    double SoftTwistStiffnessOverride; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    double SoftTwistDampingOverride; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    double SoftSwingStiffnessOverride; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    double SoftSwingDampingOverride; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SwingTwistAngleTolerance) == 16, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SwingTwistAngleTolerance");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, PositionTolerance) == 24, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::PositionTolerance");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, AngleTolerance) == 32, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::AngleTolerance");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, MinParentMassRatio) == 40, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::MinParentMassRatio");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, MaxInertiaRatio) == 48, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::MaxInertiaRatio");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, MinSolverStiffness) == 56, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::MinSolverStiffness");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, MaxSolverStiffness) == 64, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::MaxSolverStiffness");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, NumIterationsAtMaxSolverStiffness) == 72, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::NumIterationsAtMaxSolverStiffness");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, NumShockPropagationIterations) == 76, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::NumShockPropagationIterations");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, bEnableDrives) == 80, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::bEnableDrives");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, LinearStiffnessOverride) == 88, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::LinearStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, TwistStiffnessOverride) == 96, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::TwistStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SwingStiffnessOverride) == 104, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SwingStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, LinearProjectionOverride) == 112, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::LinearProjectionOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, AngularProjectionOverride) == 120, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::AngularProjectionOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, ShockPropagationOverride) == 128, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::ShockPropagationOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, LinearDriveStiffnessOverride) == 136, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::LinearDriveStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, LinearDriveDampingOverride) == 144, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::LinearDriveDampingOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, AngularDriveStiffnessOverride) == 152, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::AngularDriveStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, AngularDriveDampingOverride) == 160, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::AngularDriveDampingOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftLinearStiffnessOverride) == 168, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftLinearStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftLinearDampingOverride) == 176, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftLinearDampingOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftTwistStiffnessOverride) == 184, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftTwistStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftTwistDampingOverride) == 192, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftTwistDampingOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftSwingStiffnessOverride) == 200, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftSwingStiffnessOverride");
static_assert(offsetof(FChaosVDJointSolverSettingsDataWrapper, SoftSwingDampingOverride) == 208, "Offset mismatch for FChaosVDJointSolverSettingsDataWrapper::SoftSwingDampingOverride");

// /Script/ChaosVDRuntime.ChaosVDJointStateDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDJointStateDataWrapper
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bBreaking; // 0x0020 (Size: 0x1, Type: BoolProperty)
    // 0x0020 BoolProperty bBroken (shared storage)
    // 0x0020 BoolProperty bDisabled (shared storage)
    // 0x0020 BoolProperty bDriveTargetChanged (shared storage)
    // 0x0020 BoolProperty bEnabledDuringResim (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    std::uint8_t LinearImpulse[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularImpulse[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t ResimType; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0059
    std::uint8_t SyncState; // 0x005C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDJointStateDataWrapper, bBreaking) == 32, "Offset mismatch for FChaosVDJointStateDataWrapper::bBreaking");
static_assert(offsetof(FChaosVDJointStateDataWrapper, LinearImpulse) == 40, "Offset mismatch for FChaosVDJointStateDataWrapper::LinearImpulse");
static_assert(offsetof(FChaosVDJointStateDataWrapper, AngularImpulse) == 64, "Offset mismatch for FChaosVDJointStateDataWrapper::AngularImpulse");
static_assert(offsetof(FChaosVDJointStateDataWrapper, ResimType) == 88, "Offset mismatch for FChaosVDJointStateDataWrapper::ResimType");
static_assert(offsetof(FChaosVDJointStateDataWrapper, SyncState) == 92, "Offset mismatch for FChaosVDJointStateDataWrapper::SyncState");

// /Script/ChaosVDRuntime.ChaosVDKinematicTarget
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDKinematicTarget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Rotation[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Position[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Mode; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDKinematicTarget, Rotation) == 16, "Offset mismatch for FChaosVDKinematicTarget::Rotation");
static_assert(offsetof(FChaosVDKinematicTarget, Position) == 48, "Offset mismatch for FChaosVDKinematicTarget::Position");
static_assert(offsetof(FChaosVDKinematicTarget, Mode) == 72, "Offset mismatch for FChaosVDKinematicTarget::Mode");

// /Script/ChaosVDRuntime.ChaosVDManifoldPoint
// Kind: ScriptStruct; super: none
struct FChaosVDManifoldPoint
{
public:
    std::uint8_t bDisabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bHasStaticFrictionAnchor (shared storage)
    // 0x0000 BoolProperty bInsideStaticFrictionCone (shared storage)
    // 0x0000 BoolProperty bIsValid (shared storage)
    // 0x0000 BoolProperty bWasReplaced (shared storage)
    // 0x0000 BoolProperty bWasRestored (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t NetPushOut[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetImpulse[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float TargetPhi; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float InitialPhi; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShapeAnchorPoints[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    std::uint8_t InitialShapeContactPoints[0x30]; // 0x0070 (Size: 0x30, Type: StructProperty)
    std::uint8_t ContactPoint[0x58]; // 0x00A0 (Size: 0x58, Type: StructProperty)
    std::uint8_t ShapeContactPoints[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDManifoldPoint, bDisabled) == 0, "Offset mismatch for FChaosVDManifoldPoint::bDisabled");
static_assert(offsetof(FChaosVDManifoldPoint, NetPushOut) == 8, "Offset mismatch for FChaosVDManifoldPoint::NetPushOut");
static_assert(offsetof(FChaosVDManifoldPoint, NetImpulse) == 32, "Offset mismatch for FChaosVDManifoldPoint::NetImpulse");
static_assert(offsetof(FChaosVDManifoldPoint, TargetPhi) == 56, "Offset mismatch for FChaosVDManifoldPoint::TargetPhi");
static_assert(offsetof(FChaosVDManifoldPoint, InitialPhi) == 60, "Offset mismatch for FChaosVDManifoldPoint::InitialPhi");
static_assert(offsetof(FChaosVDManifoldPoint, ShapeAnchorPoints) == 64, "Offset mismatch for FChaosVDManifoldPoint::ShapeAnchorPoints");
static_assert(offsetof(FChaosVDManifoldPoint, InitialShapeContactPoints) == 112, "Offset mismatch for FChaosVDManifoldPoint::InitialShapeContactPoints");
static_assert(offsetof(FChaosVDManifoldPoint, ContactPoint) == 160, "Offset mismatch for FChaosVDManifoldPoint::ContactPoint");
static_assert(offsetof(FChaosVDManifoldPoint, ShapeContactPoints) == 248, "Offset mismatch for FChaosVDManifoldPoint::ShapeContactPoints");

// /Script/ChaosVDRuntime.ChaosVDMultiSolverDebugShapeDataContainer
// Kind: ScriptStruct; super: none
struct FChaosVDMultiSolverDebugShapeDataContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDParticleBounds
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleBounds
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MMin[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MMax[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDParticleBounds, MMin) == 16, "Offset mismatch for FChaosVDParticleBounds::MMin");
static_assert(offsetof(FChaosVDParticleBounds, MMax) == 40, "Offset mismatch for FChaosVDParticleBounds::MMax");

// /Script/ChaosVDRuntime.ChaosVDParticleCluster
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleCluster
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t ParentParticleID; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NumChildren; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    std::uint8_t ChildToParent[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::int32_t ClusterGroupIndex; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bInternalCluster; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    float CollisionImpulse; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float ExternalStrains; // 0x008C (Size: 0x4, Type: FloatProperty)
    float InternalStrains; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float Strain; // 0x0094 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ConnectivityEdges; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsAnchored; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnbreakable; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChildToParentLocked; // 0x00AA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDParticleCluster, ParentParticleID) == 16, "Offset mismatch for FChaosVDParticleCluster::ParentParticleID");
static_assert(offsetof(FChaosVDParticleCluster, NumChildren) == 20, "Offset mismatch for FChaosVDParticleCluster::NumChildren");
static_assert(offsetof(FChaosVDParticleCluster, ChildToParent) == 32, "Offset mismatch for FChaosVDParticleCluster::ChildToParent");
static_assert(offsetof(FChaosVDParticleCluster, ClusterGroupIndex) == 128, "Offset mismatch for FChaosVDParticleCluster::ClusterGroupIndex");
static_assert(offsetof(FChaosVDParticleCluster, bInternalCluster) == 132, "Offset mismatch for FChaosVDParticleCluster::bInternalCluster");
static_assert(offsetof(FChaosVDParticleCluster, CollisionImpulse) == 136, "Offset mismatch for FChaosVDParticleCluster::CollisionImpulse");
static_assert(offsetof(FChaosVDParticleCluster, ExternalStrains) == 140, "Offset mismatch for FChaosVDParticleCluster::ExternalStrains");
static_assert(offsetof(FChaosVDParticleCluster, InternalStrains) == 144, "Offset mismatch for FChaosVDParticleCluster::InternalStrains");
static_assert(offsetof(FChaosVDParticleCluster, Strain) == 148, "Offset mismatch for FChaosVDParticleCluster::Strain");
static_assert(offsetof(FChaosVDParticleCluster, ConnectivityEdges) == 152, "Offset mismatch for FChaosVDParticleCluster::ConnectivityEdges");
static_assert(offsetof(FChaosVDParticleCluster, bIsAnchored) == 168, "Offset mismatch for FChaosVDParticleCluster::bIsAnchored");
static_assert(offsetof(FChaosVDParticleCluster, bUnbreakable) == 169, "Offset mismatch for FChaosVDParticleCluster::bUnbreakable");
static_assert(offsetof(FChaosVDParticleCluster, bIsChildToParentLocked) == 170, "Offset mismatch for FChaosVDParticleCluster::bIsChildToParentLocked");

// /Script/ChaosVDRuntime.ChaosVDParticleDataWrapper
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleDataWrapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t DirtyFlagsBits; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t ParticleContext; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint32_t GeometryHash; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x001C
    std::uint64_t MetaDataId; // 0x0020 (Size: 0x8, Type: UInt64Property)
    std::int32_t ParticleIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t SolverId; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0xF]; // 0x0031
    std::uint8_t ParticlePositionRotation[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    std::uint8_t ParticleVelocities[0x40]; // 0x0090 (Size: 0x40, Type: StructProperty)
    std::uint8_t ParticleInflatedBounds[0x40]; // 0x00D0 (Size: 0x40, Type: StructProperty)
    std::uint8_t ParticleKinematicTarget[0x50]; // 0x0110 (Size: 0x50, Type: StructProperty)
    std::uint8_t ParticleVWSmooth[0x40]; // 0x0160 (Size: 0x40, Type: StructProperty)
    std::uint8_t ParticleDynamics[0x70]; // 0x01A0 (Size: 0x70, Type: StructProperty)
    std::uint8_t ParticleDynamicsMisc[0x70]; // 0x0210 (Size: 0x70, Type: StructProperty)
    std::uint8_t ParticleMassProps[0x90]; // 0x0280 (Size: 0x90, Type: StructProperty)
    std::uint8_t ParticleCluster[0xB0]; // 0x0310 (Size: 0xB0, Type: StructProperty)
    TArray<void*> CollisionDataPerShape; // 0x03C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDParticleDataWrapper, DirtyFlagsBits) == 16, "Offset mismatch for FChaosVDParticleDataWrapper::DirtyFlagsBits");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleContext) == 20, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleContext");
static_assert(offsetof(FChaosVDParticleDataWrapper, GeometryHash) == 24, "Offset mismatch for FChaosVDParticleDataWrapper::GeometryHash");
static_assert(offsetof(FChaosVDParticleDataWrapper, MetaDataId) == 32, "Offset mismatch for FChaosVDParticleDataWrapper::MetaDataId");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleIndex) == 40, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleIndex");
static_assert(offsetof(FChaosVDParticleDataWrapper, SolverId) == 44, "Offset mismatch for FChaosVDParticleDataWrapper::SolverId");
static_assert(offsetof(FChaosVDParticleDataWrapper, Type) == 48, "Offset mismatch for FChaosVDParticleDataWrapper::Type");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticlePositionRotation) == 64, "Offset mismatch for FChaosVDParticleDataWrapper::ParticlePositionRotation");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleVelocities) == 144, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleVelocities");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleInflatedBounds) == 208, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleInflatedBounds");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleKinematicTarget) == 272, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleKinematicTarget");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleVWSmooth) == 352, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleVWSmooth");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleDynamics) == 416, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleDynamics");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleDynamicsMisc) == 528, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleDynamicsMisc");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleMassProps) == 640, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleMassProps");
static_assert(offsetof(FChaosVDParticleDataWrapper, ParticleCluster) == 784, "Offset mismatch for FChaosVDParticleDataWrapper::ParticleCluster");
static_assert(offsetof(FChaosVDParticleDataWrapper, CollisionDataPerShape) == 960, "Offset mismatch for FChaosVDParticleDataWrapper::CollisionDataPerShape");

// /Script/ChaosVDRuntime.ChaosVDParticleDynamicMisc
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleDynamicMisc
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    double MLinearEtherDrag; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double MAngularEtherDrag; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double MMaxLinearSpeedSq; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double MMaxAngularSpeedSq; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    float MInitialOverlapDepenetrationVelocity; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MSleepThresholdMultiplier; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::int32_t MCollisionGroup; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t MObjectState; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t MSleepType; // 0x003D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003E
    std::uint32_t MCollisionConstraintFlag; // 0x0040 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    std::uint8_t MControlFlags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bDisabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::int8_t PositionSolverIterationCount; // 0x0069 (Size: 0x1, Type: Int8Property)
    std::int8_t VelocitySolverIterationCount; // 0x006A (Size: 0x1, Type: Int8Property)
    std::int8_t ProjectionSolverIterationCount; // 0x006B (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FChaosVDParticleDynamicMisc, MLinearEtherDrag) == 16, "Offset mismatch for FChaosVDParticleDynamicMisc::MLinearEtherDrag");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MAngularEtherDrag) == 24, "Offset mismatch for FChaosVDParticleDynamicMisc::MAngularEtherDrag");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MMaxLinearSpeedSq) == 32, "Offset mismatch for FChaosVDParticleDynamicMisc::MMaxLinearSpeedSq");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MMaxAngularSpeedSq) == 40, "Offset mismatch for FChaosVDParticleDynamicMisc::MMaxAngularSpeedSq");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MInitialOverlapDepenetrationVelocity) == 48, "Offset mismatch for FChaosVDParticleDynamicMisc::MInitialOverlapDepenetrationVelocity");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MSleepThresholdMultiplier) == 52, "Offset mismatch for FChaosVDParticleDynamicMisc::MSleepThresholdMultiplier");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MCollisionGroup) == 56, "Offset mismatch for FChaosVDParticleDynamicMisc::MCollisionGroup");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MObjectState) == 60, "Offset mismatch for FChaosVDParticleDynamicMisc::MObjectState");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MSleepType) == 61, "Offset mismatch for FChaosVDParticleDynamicMisc::MSleepType");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MCollisionConstraintFlag) == 64, "Offset mismatch for FChaosVDParticleDynamicMisc::MCollisionConstraintFlag");
static_assert(offsetof(FChaosVDParticleDynamicMisc, MControlFlags) == 72, "Offset mismatch for FChaosVDParticleDynamicMisc::MControlFlags");
static_assert(offsetof(FChaosVDParticleDynamicMisc, bDisabled) == 104, "Offset mismatch for FChaosVDParticleDynamicMisc::bDisabled");
static_assert(offsetof(FChaosVDParticleDynamicMisc, PositionSolverIterationCount) == 105, "Offset mismatch for FChaosVDParticleDynamicMisc::PositionSolverIterationCount");
static_assert(offsetof(FChaosVDParticleDynamicMisc, VelocitySolverIterationCount) == 106, "Offset mismatch for FChaosVDParticleDynamicMisc::VelocitySolverIterationCount");
static_assert(offsetof(FChaosVDParticleDynamicMisc, ProjectionSolverIterationCount) == 107, "Offset mismatch for FChaosVDParticleDynamicMisc::ProjectionSolverIterationCount");

// /Script/ChaosVDRuntime.ChaosVDParticleDynamics
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleDynamics
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MAcceleration[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MAngularAcceleration[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t MLinearImpulseVelocity[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t MAngularImpulseVelocity[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDParticleDynamics, MAcceleration) == 16, "Offset mismatch for FChaosVDParticleDynamics::MAcceleration");
static_assert(offsetof(FChaosVDParticleDynamics, MAngularAcceleration) == 40, "Offset mismatch for FChaosVDParticleDynamics::MAngularAcceleration");
static_assert(offsetof(FChaosVDParticleDynamics, MLinearImpulseVelocity) == 64, "Offset mismatch for FChaosVDParticleDynamics::MLinearImpulseVelocity");
static_assert(offsetof(FChaosVDParticleDynamics, MAngularImpulseVelocity) == 88, "Offset mismatch for FChaosVDParticleDynamics::MAngularImpulseVelocity");

// /Script/ChaosVDRuntime.ChaosVDParticleMassProps
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleMassProps
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MCenterOfMass[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t MRotationOfMass[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t MI[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t MInvI[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    double MM; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double MInvM; // 0x0088 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FChaosVDParticleMassProps, MCenterOfMass) == 16, "Offset mismatch for FChaosVDParticleMassProps::MCenterOfMass");
static_assert(offsetof(FChaosVDParticleMassProps, MRotationOfMass) == 48, "Offset mismatch for FChaosVDParticleMassProps::MRotationOfMass");
static_assert(offsetof(FChaosVDParticleMassProps, MI) == 80, "Offset mismatch for FChaosVDParticleMassProps::MI");
static_assert(offsetof(FChaosVDParticleMassProps, MInvI) == 104, "Offset mismatch for FChaosVDParticleMassProps::MInvI");
static_assert(offsetof(FChaosVDParticleMassProps, MM) == 128, "Offset mismatch for FChaosVDParticleMassProps::MM");
static_assert(offsetof(FChaosVDParticleMassProps, MInvM) == 136, "Offset mismatch for FChaosVDParticleMassProps::MInvM");

// /Script/ChaosVDRuntime.ChaosVDParticleMetadata
// Kind: ScriptStruct; super: none
struct FChaosVDParticleMetadata
{
public:
    std::uint8_t OwnerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t Index; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t MapAssetPath[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t OwnerAssetPath[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint64_t MetaDataId; // 0x0020 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FChaosVDParticleMetadata, OwnerName) == 0, "Offset mismatch for FChaosVDParticleMetadata::OwnerName");
static_assert(offsetof(FChaosVDParticleMetadata, ComponentName) == 4, "Offset mismatch for FChaosVDParticleMetadata::ComponentName");
static_assert(offsetof(FChaosVDParticleMetadata, BoneName) == 8, "Offset mismatch for FChaosVDParticleMetadata::BoneName");
static_assert(offsetof(FChaosVDParticleMetadata, Index) == 12, "Offset mismatch for FChaosVDParticleMetadata::Index");
static_assert(offsetof(FChaosVDParticleMetadata, MapAssetPath) == 16, "Offset mismatch for FChaosVDParticleMetadata::MapAssetPath");
static_assert(offsetof(FChaosVDParticleMetadata, OwnerAssetPath) == 24, "Offset mismatch for FChaosVDParticleMetadata::OwnerAssetPath");
static_assert(offsetof(FChaosVDParticleMetadata, MetaDataId) == 32, "Offset mismatch for FChaosVDParticleMetadata::MetaDataId");

// /Script/ChaosVDRuntime.ChaosVDParticlePairMidPhase
// Kind: ScriptStruct; super: none
struct FChaosVDParticlePairMidPhase
{
public:
    std::int32_t SolverId; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t MidPhaseType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsActive; // 0x0005 (Size: 0x1, Type: BoolProperty)
    // 0x0005 BoolProperty bIsCCD (shared storage)
    // 0x0005 BoolProperty bIsCCDActive (shared storage)
    // 0x0005 BoolProperty bIsModified (shared storage)
    // 0x0005 BoolProperty bIsSleeping (shared storage)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::int32_t LastUsedEpoch; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Particle0Idx; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t Particle1Idx; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> Constraints; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDParticlePairMidPhase, SolverId) == 0, "Offset mismatch for FChaosVDParticlePairMidPhase::SolverId");
static_assert(offsetof(FChaosVDParticlePairMidPhase, MidPhaseType) == 4, "Offset mismatch for FChaosVDParticlePairMidPhase::MidPhaseType");
static_assert(offsetof(FChaosVDParticlePairMidPhase, bIsActive) == 5, "Offset mismatch for FChaosVDParticlePairMidPhase::bIsActive");
static_assert(offsetof(FChaosVDParticlePairMidPhase, LastUsedEpoch) == 8, "Offset mismatch for FChaosVDParticlePairMidPhase::LastUsedEpoch");
static_assert(offsetof(FChaosVDParticlePairMidPhase, Particle0Idx) == 12, "Offset mismatch for FChaosVDParticlePairMidPhase::Particle0Idx");
static_assert(offsetof(FChaosVDParticlePairMidPhase, Particle1Idx) == 16, "Offset mismatch for FChaosVDParticlePairMidPhase::Particle1Idx");
static_assert(offsetof(FChaosVDParticlePairMidPhase, Constraints) == 24, "Offset mismatch for FChaosVDParticlePairMidPhase::Constraints");

// /Script/ChaosVDRuntime.ChaosVDParticlePositionRotation
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticlePositionRotation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MX[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t MR[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDParticlePositionRotation, MX) == 16, "Offset mismatch for FChaosVDParticlePositionRotation::MX");
static_assert(offsetof(FChaosVDParticlePositionRotation, MR) == 48, "Offset mismatch for FChaosVDParticlePositionRotation::MR");

// /Script/ChaosVDRuntime.ChaosVDParticleVelocities
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDParticleVelocities
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MV[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MW[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDParticleVelocities, MV) == 16, "Offset mismatch for FChaosVDParticleVelocities::MV");
static_assert(offsetof(FChaosVDParticleVelocities, MW) == 40, "Offset mismatch for FChaosVDParticleVelocities::MW");

// /Script/ChaosVDRuntime.ChaosVDQueryDataWrapper
// Kind: ScriptStruct; super: none
struct FChaosVDQueryDataWrapper
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ParentQueryID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t WorldSolverID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsRetryQuery; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x13]; // 0x000D
    std::uint8_t GeometryOrientation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Type; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t Mode; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t StartLocation[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndLocation[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::int32_t CollisionChannel; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x007C
    std::uint8_t CollisionQueryParams[0x60]; // 0x0080 (Size: 0x60, Type: StructProperty)
    std::uint8_t CollisionResponseParams[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    std::uint8_t CollisionObjectQueryParams[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    TArray<void*> Hits; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDQueryDataWrapper, ID) == 0, "Offset mismatch for FChaosVDQueryDataWrapper::ID");
static_assert(offsetof(FChaosVDQueryDataWrapper, ParentQueryID) == 4, "Offset mismatch for FChaosVDQueryDataWrapper::ParentQueryID");
static_assert(offsetof(FChaosVDQueryDataWrapper, WorldSolverID) == 8, "Offset mismatch for FChaosVDQueryDataWrapper::WorldSolverID");
static_assert(offsetof(FChaosVDQueryDataWrapper, bIsRetryQuery) == 12, "Offset mismatch for FChaosVDQueryDataWrapper::bIsRetryQuery");
static_assert(offsetof(FChaosVDQueryDataWrapper, GeometryOrientation) == 32, "Offset mismatch for FChaosVDQueryDataWrapper::GeometryOrientation");
static_assert(offsetof(FChaosVDQueryDataWrapper, Type) == 64, "Offset mismatch for FChaosVDQueryDataWrapper::Type");
static_assert(offsetof(FChaosVDQueryDataWrapper, Mode) == 68, "Offset mismatch for FChaosVDQueryDataWrapper::Mode");
static_assert(offsetof(FChaosVDQueryDataWrapper, StartLocation) == 72, "Offset mismatch for FChaosVDQueryDataWrapper::StartLocation");
static_assert(offsetof(FChaosVDQueryDataWrapper, EndLocation) == 96, "Offset mismatch for FChaosVDQueryDataWrapper::EndLocation");
static_assert(offsetof(FChaosVDQueryDataWrapper, CollisionChannel) == 120, "Offset mismatch for FChaosVDQueryDataWrapper::CollisionChannel");
static_assert(offsetof(FChaosVDQueryDataWrapper, CollisionQueryParams) == 128, "Offset mismatch for FChaosVDQueryDataWrapper::CollisionQueryParams");
static_assert(offsetof(FChaosVDQueryDataWrapper, CollisionResponseParams) == 224, "Offset mismatch for FChaosVDQueryDataWrapper::CollisionResponseParams");
static_assert(offsetof(FChaosVDQueryDataWrapper, CollisionObjectQueryParams) == 288, "Offset mismatch for FChaosVDQueryDataWrapper::CollisionObjectQueryParams");
static_assert(offsetof(FChaosVDQueryDataWrapper, Hits) == 336, "Offset mismatch for FChaosVDQueryDataWrapper::Hits");

// /Script/ChaosVDRuntime.ChaosVDQueryFastData
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDQueryFastData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Dir[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t InvDir[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    double CurrentLength; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double InvCurrentLength; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bParallel0; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bParallel1 (shared storage)
    // 0x0050 BoolProperty bParallel2 (shared storage)
};

static_assert(offsetof(FChaosVDQueryFastData, Dir) == 16, "Offset mismatch for FChaosVDQueryFastData::Dir");
static_assert(offsetof(FChaosVDQueryFastData, InvDir) == 40, "Offset mismatch for FChaosVDQueryFastData::InvDir");
static_assert(offsetof(FChaosVDQueryFastData, CurrentLength) == 64, "Offset mismatch for FChaosVDQueryFastData::CurrentLength");
static_assert(offsetof(FChaosVDQueryFastData, InvCurrentLength) == 72, "Offset mismatch for FChaosVDQueryFastData::InvCurrentLength");
static_assert(offsetof(FChaosVDQueryFastData, bParallel0) == 80, "Offset mismatch for FChaosVDQueryFastData::bParallel0");

// /Script/ChaosVDRuntime.ChaosVDQueryHitData
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDQueryHitData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float Distance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t FaceIdx; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint16_t Flags; // 0x0018 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::uint8_t WorldPosition[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldNormal[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t FaceNormal[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDQueryHitData, Distance) == 16, "Offset mismatch for FChaosVDQueryHitData::Distance");
static_assert(offsetof(FChaosVDQueryHitData, FaceIdx) == 20, "Offset mismatch for FChaosVDQueryHitData::FaceIdx");
static_assert(offsetof(FChaosVDQueryHitData, Flags) == 24, "Offset mismatch for FChaosVDQueryHitData::Flags");
static_assert(offsetof(FChaosVDQueryHitData, WorldPosition) == 32, "Offset mismatch for FChaosVDQueryHitData::WorldPosition");
static_assert(offsetof(FChaosVDQueryHitData, WorldNormal) == 56, "Offset mismatch for FChaosVDQueryHitData::WorldNormal");
static_assert(offsetof(FChaosVDQueryHitData, FaceNormal) == 80, "Offset mismatch for FChaosVDQueryHitData::FaceNormal");

// /Script/ChaosVDRuntime.ChaosVDQueryVisitStep
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDQueryVisitStep
{
public:
    std::uint8_t Pad_0000[0x14]; // 0x0000
    std::uint8_t Type; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::uint32_t ShapeIndex; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::int32_t ParticleIndex; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t ParticleTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t QueryFastData[0x58]; // 0x0080 (Size: 0x58, Type: StructProperty)
    std::uint8_t HitType; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D9
    std::uint8_t HitData[0x68]; // 0x00E0 (Size: 0x68, Type: StructProperty)
    std::uint8_t RejectReason; // 0x0148 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosVDQueryVisitStep, Type) == 20, "Offset mismatch for FChaosVDQueryVisitStep::Type");
static_assert(offsetof(FChaosVDQueryVisitStep, ShapeIndex) == 24, "Offset mismatch for FChaosVDQueryVisitStep::ShapeIndex");
static_assert(offsetof(FChaosVDQueryVisitStep, ParticleIndex) == 28, "Offset mismatch for FChaosVDQueryVisitStep::ParticleIndex");
static_assert(offsetof(FChaosVDQueryVisitStep, ParticleTransform) == 32, "Offset mismatch for FChaosVDQueryVisitStep::ParticleTransform");
static_assert(offsetof(FChaosVDQueryVisitStep, QueryFastData) == 128, "Offset mismatch for FChaosVDQueryVisitStep::QueryFastData");
static_assert(offsetof(FChaosVDQueryVisitStep, HitType) == 216, "Offset mismatch for FChaosVDQueryVisitStep::HitType");
static_assert(offsetof(FChaosVDQueryVisitStep, HitData) == 224, "Offset mismatch for FChaosVDQueryVisitStep::HitData");
static_assert(offsetof(FChaosVDQueryVisitStep, RejectReason) == 328, "Offset mismatch for FChaosVDQueryVisitStep::RejectReason");

// /Script/ChaosVDRuntime.ChaosVDSceneQueriesDataContainer
// Kind: ScriptStruct; super: none
struct FChaosVDSceneQueriesDataContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosVDRuntime.ChaosVDShapeCollisionData
// Kind: ScriptStruct; super: none
struct FChaosVDShapeCollisionData
{
public:
    std::uint8_t CollisionTraceType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t bIsProbe; // 0x0004 (Size: 0x1, Type: BoolProperty)
    // 0x0004 BoolProperty bQueryCollision (shared storage)
    // 0x0004 BoolProperty bSimCollision (shared storage)
    std::uint8_t Pad_0001[0x33]; // 0x0005
    std::uint8_t bIsComplex; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsValid; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDShapeCollisionData, CollisionTraceType) == 0, "Offset mismatch for FChaosVDShapeCollisionData::CollisionTraceType");
static_assert(offsetof(FChaosVDShapeCollisionData, bIsProbe) == 4, "Offset mismatch for FChaosVDShapeCollisionData::bIsProbe");
static_assert(offsetof(FChaosVDShapeCollisionData, bIsComplex) == 56, "Offset mismatch for FChaosVDShapeCollisionData::bIsComplex");
static_assert(offsetof(FChaosVDShapeCollisionData, bIsValid) == 57, "Offset mismatch for FChaosVDShapeCollisionData::bIsValid");

// /Script/ChaosVDRuntime.ChaosVDStartRecordingCommandMessage
// Kind: ScriptStruct; super: StartRecordingCommandMessage
struct FChaosVDStartRecordingCommandMessage
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DataChannelsEnabledOverrideList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChaosVDStartRecordingCommandMessage, DataChannelsEnabledOverrideList) == 40, "Offset mismatch for FChaosVDStartRecordingCommandMessage::DataChannelsEnabledOverrideList");

// /Script/ChaosVDRuntime.ChaosVDVSmooth
// Kind: ScriptStruct; super: ChaosVDWrapperDataBase
struct FChaosVDVSmooth
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t MV[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t MW[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosVDVSmooth, MV) == 16, "Offset mismatch for FChaosVDVSmooth::MV");
static_assert(offsetof(FChaosVDVSmooth, MW) == 40, "Offset mismatch for FChaosVDVSmooth::MW");

// /Script/ChaosVDRuntime.ChaosVDWrapperDataBase
// Kind: ScriptStruct; super: none
struct FChaosVDWrapperDataBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bHasValidData; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosVDWrapperDataBase, bHasValidData) == 8, "Offset mismatch for FChaosVDWrapperDataBase::bHasValidData");
