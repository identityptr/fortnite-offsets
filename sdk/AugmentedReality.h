/**
 * decamp dumper generated SDK
 * Package: /Script/AugmentedReality
 */
#pragma once
#include "Basic.h"

// /Script/AugmentedReality.ARCameraIntrinsics
// Kind: ScriptStruct; super: none
struct FARCameraIntrinsics
{
public:
    std::uint8_t ImageResolution[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t FocalLength[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrincipalPoint[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FARCameraIntrinsics, ImageResolution) == 0, "Offset mismatch for FARCameraIntrinsics::ImageResolution");
static_assert(offsetof(FARCameraIntrinsics, FocalLength) == 8, "Offset mismatch for FARCameraIntrinsics::FocalLength");
static_assert(offsetof(FARCameraIntrinsics, PrincipalPoint) == 24, "Offset mismatch for FARCameraIntrinsics::PrincipalPoint");

// /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
// Kind: ScriptStruct; super: none
struct FAREnvironmentProbeUpdatePayload
{
public:
    std::uint8_t WorldTransform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAREnvironmentProbeUpdatePayload, WorldTransform) == 0, "Offset mismatch for FAREnvironmentProbeUpdatePayload::WorldTransform");

// /Script/AugmentedReality.ARFaceUpdatePayload
// Kind: ScriptStruct; super: none
struct FARFaceUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftEyePosition[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightEyePosition[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t LookAtTarget[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FARFaceUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARFaceUpdatePayload::SessionPayload");
static_assert(offsetof(FARFaceUpdatePayload, LeftEyePosition) == 24, "Offset mismatch for FARFaceUpdatePayload::LeftEyePosition");
static_assert(offsetof(FARFaceUpdatePayload, RightEyePosition) == 48, "Offset mismatch for FARFaceUpdatePayload::RightEyePosition");
static_assert(offsetof(FARFaceUpdatePayload, LookAtTarget) == 72, "Offset mismatch for FARFaceUpdatePayload::LookAtTarget");

// /Script/AugmentedReality.ARGeoAnchorUpdatePayload
// Kind: ScriptStruct; super: none
struct FARGeoAnchorUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    float Longitude; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Latitude; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float AltitudeMeters; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AltitudeSource; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x008D
    FString AnchorName; // 0x0090 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FARGeoAnchorUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARGeoAnchorUpdatePayload::SessionPayload");
static_assert(offsetof(FARGeoAnchorUpdatePayload, WorldTransform) == 32, "Offset mismatch for FARGeoAnchorUpdatePayload::WorldTransform");
static_assert(offsetof(FARGeoAnchorUpdatePayload, Longitude) == 128, "Offset mismatch for FARGeoAnchorUpdatePayload::Longitude");
static_assert(offsetof(FARGeoAnchorUpdatePayload, Latitude) == 132, "Offset mismatch for FARGeoAnchorUpdatePayload::Latitude");
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeMeters) == 136, "Offset mismatch for FARGeoAnchorUpdatePayload::AltitudeMeters");
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeSource) == 140, "Offset mismatch for FARGeoAnchorUpdatePayload::AltitudeSource");
static_assert(offsetof(FARGeoAnchorUpdatePayload, AnchorName) == 144, "Offset mismatch for FARGeoAnchorUpdatePayload::AnchorName");

// /Script/AugmentedReality.ARImageUpdatePayload
// Kind: ScriptStruct; super: none
struct FARImageUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    void* DetectedImage; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EstimatedSize[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FARImageUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARImageUpdatePayload::SessionPayload");
static_assert(offsetof(FARImageUpdatePayload, WorldTransform) == 32, "Offset mismatch for FARImageUpdatePayload::WorldTransform");
static_assert(offsetof(FARImageUpdatePayload, DetectedImage) == 128, "Offset mismatch for FARImageUpdatePayload::DetectedImage");
static_assert(offsetof(FARImageUpdatePayload, EstimatedSize) == 136, "Offset mismatch for FARImageUpdatePayload::EstimatedSize");

// /Script/AugmentedReality.ARMeshUpdatePayload
// Kind: ScriptStruct; super: none
struct FARMeshUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t ObjectClassification; // 0x0080 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FARMeshUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARMeshUpdatePayload::SessionPayload");
static_assert(offsetof(FARMeshUpdatePayload, WorldTransform) == 32, "Offset mismatch for FARMeshUpdatePayload::WorldTransform");
static_assert(offsetof(FARMeshUpdatePayload, ObjectClassification) == 128, "Offset mismatch for FARMeshUpdatePayload::ObjectClassification");

// /Script/AugmentedReality.ARObjectUpdatePayload
// Kind: ScriptStruct; super: none
struct FARObjectUpdatePayload
{
public:
    std::uint8_t WorldTransform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FARObjectUpdatePayload, WorldTransform) == 0, "Offset mismatch for FARObjectUpdatePayload::WorldTransform");

// /Script/AugmentedReality.ARPlaneUpdatePayload
// Kind: ScriptStruct; super: none
struct FARPlaneUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Center[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t Extents[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    TArray<void*> BoundaryVertices; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ObjectClassification; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FARPlaneUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARPlaneUpdatePayload::SessionPayload");
static_assert(offsetof(FARPlaneUpdatePayload, WorldTransform) == 32, "Offset mismatch for FARPlaneUpdatePayload::WorldTransform");
static_assert(offsetof(FARPlaneUpdatePayload, Center) == 128, "Offset mismatch for FARPlaneUpdatePayload::Center");
static_assert(offsetof(FARPlaneUpdatePayload, Extents) == 152, "Offset mismatch for FARPlaneUpdatePayload::Extents");
static_assert(offsetof(FARPlaneUpdatePayload, BoundaryVertices) == 176, "Offset mismatch for FARPlaneUpdatePayload::BoundaryVertices");
static_assert(offsetof(FARPlaneUpdatePayload, ObjectClassification) == 192, "Offset mismatch for FARPlaneUpdatePayload::ObjectClassification");

// /Script/AugmentedReality.ARPointUpdatePayload
// Kind: ScriptStruct; super: none
struct FARPointUpdatePayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARPose2D
// Kind: ScriptStruct; super: none
struct FARPose2D
{
public:
    std::uint8_t SkeletonDefinition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    TArray<void*> JointLocations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IsJointTracked; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FARPose2D, SkeletonDefinition) == 0, "Offset mismatch for FARPose2D::SkeletonDefinition");
static_assert(offsetof(FARPose2D, JointLocations) == 40, "Offset mismatch for FARPose2D::JointLocations");
static_assert(offsetof(FARPose2D, IsJointTracked) == 56, "Offset mismatch for FARPose2D::IsJointTracked");

// /Script/AugmentedReality.ARPose3D
// Kind: ScriptStruct; super: none
struct FARPose3D
{
public:
    std::uint8_t SkeletonDefinition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    TArray<void*> JointTransforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IsJointTracked; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t JointTransformSpace; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FARPose3D, SkeletonDefinition) == 0, "Offset mismatch for FARPose3D::SkeletonDefinition");
static_assert(offsetof(FARPose3D, JointTransforms) == 40, "Offset mismatch for FARPose3D::JointTransforms");
static_assert(offsetof(FARPose3D, IsJointTracked) == 56, "Offset mismatch for FARPose3D::IsJointTracked");
static_assert(offsetof(FARPose3D, JointTransformSpace) == 72, "Offset mismatch for FARPose3D::JointTransformSpace");

// /Script/AugmentedReality.ARPoseUpdatePayload
// Kind: ScriptStruct; super: none
struct FARPoseUpdatePayload
{
public:
    std::uint8_t WorldTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    TArray<void*> JointTransforms; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FARPoseUpdatePayload, WorldTransform) == 0, "Offset mismatch for FARPoseUpdatePayload::WorldTransform");
static_assert(offsetof(FARPoseUpdatePayload, JointTransforms) == 96, "Offset mismatch for FARPoseUpdatePayload::JointTransforms");

// /Script/AugmentedReality.ARQRCodeUpdatePayload
// Kind: ScriptStruct; super: none
struct FARQRCodeUpdatePayload
{
public:
    std::uint8_t SessionPayload[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t Extents[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    FString QRCode; // 0x0098 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FARQRCodeUpdatePayload, SessionPayload) == 0, "Offset mismatch for FARQRCodeUpdatePayload::SessionPayload");
static_assert(offsetof(FARQRCodeUpdatePayload, WorldTransform) == 32, "Offset mismatch for FARQRCodeUpdatePayload::WorldTransform");
static_assert(offsetof(FARQRCodeUpdatePayload, Extents) == 128, "Offset mismatch for FARQRCodeUpdatePayload::Extents");
static_assert(offsetof(FARQRCodeUpdatePayload, QRCode) == 152, "Offset mismatch for FARQRCodeUpdatePayload::QRCode");

// /Script/AugmentedReality.ARSessionPayload
// Kind: ScriptStruct; super: none
struct FARSessionPayload
{
public:
    std::int32_t ConfigFlags; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* DefaultMeshMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* DefaultWireframeMeshMaterial; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FARSessionPayload, ConfigFlags) == 0, "Offset mismatch for FARSessionPayload::ConfigFlags");
static_assert(offsetof(FARSessionPayload, DefaultMeshMaterial) == 8, "Offset mismatch for FARSessionPayload::DefaultMeshMaterial");
static_assert(offsetof(FARSessionPayload, DefaultWireframeMeshMaterial) == 16, "Offset mismatch for FARSessionPayload::DefaultWireframeMeshMaterial");

// /Script/AugmentedReality.ARSessionStatus
// Kind: ScriptStruct; super: none
struct FARSessionStatus
{
public:
    FString AdditionalInfo; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Status; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FARSessionStatus, AdditionalInfo) == 0, "Offset mismatch for FARSessionStatus::AdditionalInfo");
static_assert(offsetof(FARSessionStatus, Status) == 16, "Offset mismatch for FARSessionStatus::Status");

// /Script/AugmentedReality.ARSharedWorldReplicationState
// Kind: ScriptStruct; super: none
struct FARSharedWorldReplicationState
{
public:
    std::int32_t PreviewImageOffset; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ARWorldOffset; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FARSharedWorldReplicationState, PreviewImageOffset) == 0, "Offset mismatch for FARSharedWorldReplicationState::PreviewImageOffset");
static_assert(offsetof(FARSharedWorldReplicationState, ARWorldOffset) == 4, "Offset mismatch for FARSharedWorldReplicationState::ARWorldOffset");

// /Script/AugmentedReality.ARSkeletonDefinition
// Kind: ScriptStruct; super: none
struct FARSkeletonDefinition
{
public:
    std::int32_t NumJoints; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> JointNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentIndices; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FARSkeletonDefinition, NumJoints) == 0, "Offset mismatch for FARSkeletonDefinition::NumJoints");
static_assert(offsetof(FARSkeletonDefinition, JointNames) == 8, "Offset mismatch for FARSkeletonDefinition::JointNames");
static_assert(offsetof(FARSkeletonDefinition, ParentIndices) == 24, "Offset mismatch for FARSkeletonDefinition::ParentIndices");

// /Script/AugmentedReality.ARTraceResult
// Kind: ScriptStruct; super: none
struct FARTraceResult
{
public:
    float DistanceFromCamera; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceChannel; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0xB]; // 0x0005
    std::uint8_t LocalTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    void* TrackedGeometry; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FARTraceResult, DistanceFromCamera) == 0, "Offset mismatch for FARTraceResult::DistanceFromCamera");
static_assert(offsetof(FARTraceResult, TraceChannel) == 4, "Offset mismatch for FARTraceResult::TraceChannel");
static_assert(offsetof(FARTraceResult, LocalTransform) == 16, "Offset mismatch for FARTraceResult::LocalTransform");
static_assert(offsetof(FARTraceResult, TrackedGeometry) == 112, "Offset mismatch for FARTraceResult::TrackedGeometry");

// /Script/AugmentedReality.ARVideoFormat
// Kind: ScriptStruct; super: none
struct FARVideoFormat
{
public:
    std::int32_t FPS; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Width; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FARVideoFormat, FPS) == 0, "Offset mismatch for FARVideoFormat::FPS");
static_assert(offsetof(FARVideoFormat, Width) == 4, "Offset mismatch for FARVideoFormat::Width");
static_assert(offsetof(FARVideoFormat, Height) == 8, "Offset mismatch for FARVideoFormat::Height");

// /Script/AugmentedReality.TrackedGeometryGroup
// Kind: ScriptStruct; super: none
struct FTrackedGeometryGroup
{
public:
    void* ARActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ARComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* TrackedGeometry; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTrackedGeometryGroup, ARActor) == 0, "Offset mismatch for FTrackedGeometryGroup::ARActor");
static_assert(offsetof(FTrackedGeometryGroup, ARComponent) == 8, "Offset mismatch for FTrackedGeometryGroup::ARComponent");
static_assert(offsetof(FTrackedGeometryGroup, TrackedGeometry) == 16, "Offset mismatch for FTrackedGeometryGroup::TrackedGeometry");

// /Script/AugmentedReality.ARActor
// Kind: Class; super: Actor
class UARActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UARActor, PrimaryActorTick) == 40, "Offset mismatch for UARActor::PrimaryActorTick");
static_assert(offsetof(UARActor, bAlwaysRelevant) == 88, "Offset mismatch for UARActor::bAlwaysRelevant");
static_assert(offsetof(UARActor, bExchangedRoles) == 89, "Offset mismatch for UARActor::bExchangedRoles");
static_assert(offsetof(UARActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UARActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UARActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UARActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UARActor, bActorEnableCollision) == 93, "Offset mismatch for UARActor::bActorEnableCollision");
static_assert(offsetof(UARActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UARActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UARActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UARActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UARActor, RemoteRole) == 96, "Offset mismatch for UARActor::RemoteRole");
static_assert(offsetof(UARActor, InitialLifeSpan) == 100, "Offset mismatch for UARActor::InitialLifeSpan");
static_assert(offsetof(UARActor, CustomTimeDilation) == 104, "Offset mismatch for UARActor::CustomTimeDilation");
static_assert(offsetof(UARActor, RayTracingGroupId) == 108, "Offset mismatch for UARActor::RayTracingGroupId");
static_assert(offsetof(UARActor, AttachmentReplication) == 112, "Offset mismatch for UARActor::AttachmentReplication");
static_assert(offsetof(UARActor, ReplicatedMovement) == 208, "Offset mismatch for UARActor::ReplicatedMovement");
static_assert(offsetof(UARActor, Owner) == 344, "Offset mismatch for UARActor::Owner");
static_assert(offsetof(UARActor, NetDriverName) == 352, "Offset mismatch for UARActor::NetDriverName");
static_assert(offsetof(UARActor, Role) == 356, "Offset mismatch for UARActor::Role");
static_assert(offsetof(UARActor, NetDormancy) == 357, "Offset mismatch for UARActor::NetDormancy");
static_assert(offsetof(UARActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UARActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UARActor, AutoReceiveInput) == 359, "Offset mismatch for UARActor::AutoReceiveInput");
static_assert(offsetof(UARActor, InputPriority) == 360, "Offset mismatch for UARActor::InputPriority");
static_assert(offsetof(UARActor, InputComponent) == 368, "Offset mismatch for UARActor::InputComponent");
static_assert(offsetof(UARActor, NetTag) == 376, "Offset mismatch for UARActor::NetTag");
static_assert(offsetof(UARActor, NetCullDistanceSquared) == 380, "Offset mismatch for UARActor::NetCullDistanceSquared");
static_assert(offsetof(UARActor, NetUpdateFrequency) == 384, "Offset mismatch for UARActor::NetUpdateFrequency");
static_assert(offsetof(UARActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UARActor::MinNetUpdateFrequency");
static_assert(offsetof(UARActor, NetPriority) == 392, "Offset mismatch for UARActor::NetPriority");
static_assert(offsetof(UARActor, PhysicsReplicationMode) == 396, "Offset mismatch for UARActor::PhysicsReplicationMode");
static_assert(offsetof(UARActor, Instigator) == 408, "Offset mismatch for UARActor::Instigator");
static_assert(offsetof(UARActor, Children) == 416, "Offset mismatch for UARActor::Children");
static_assert(offsetof(UARActor, RootComponent) == 432, "Offset mismatch for UARActor::RootComponent");
static_assert(offsetof(UARActor, HLODLayer) == 448, "Offset mismatch for UARActor::HLODLayer");
static_assert(offsetof(UARActor, Layers) == 456, "Offset mismatch for UARActor::Layers");
static_assert(offsetof(UARActor, ParentComponent) == 472, "Offset mismatch for UARActor::ParentComponent");
static_assert(offsetof(UARActor, Tags) == 496, "Offset mismatch for UARActor::Tags");
static_assert(offsetof(UARActor, OnTakeAnyDamage) == 512, "Offset mismatch for UARActor::OnTakeAnyDamage");
static_assert(offsetof(UARActor, OnTakePointDamage) == 513, "Offset mismatch for UARActor::OnTakePointDamage");
static_assert(offsetof(UARActor, OnTakeRadialDamage) == 514, "Offset mismatch for UARActor::OnTakeRadialDamage");
static_assert(offsetof(UARActor, OnActorBeginOverlap) == 515, "Offset mismatch for UARActor::OnActorBeginOverlap");
static_assert(offsetof(UARActor, OnActorEndOverlap) == 516, "Offset mismatch for UARActor::OnActorEndOverlap");
static_assert(offsetof(UARActor, OnBeginCursorOver) == 517, "Offset mismatch for UARActor::OnBeginCursorOver");
static_assert(offsetof(UARActor, OnEndCursorOver) == 518, "Offset mismatch for UARActor::OnEndCursorOver");
static_assert(offsetof(UARActor, OnClicked) == 519, "Offset mismatch for UARActor::OnClicked");
static_assert(offsetof(UARActor, OnReleased) == 520, "Offset mismatch for UARActor::OnReleased");
static_assert(offsetof(UARActor, OnInputTouchBegin) == 521, "Offset mismatch for UARActor::OnInputTouchBegin");
static_assert(offsetof(UARActor, OnInputTouchEnd) == 522, "Offset mismatch for UARActor::OnInputTouchEnd");
static_assert(offsetof(UARActor, OnInputTouchEnter) == 523, "Offset mismatch for UARActor::OnInputTouchEnter");
static_assert(offsetof(UARActor, OnInputTouchLeave) == 524, "Offset mismatch for UARActor::OnInputTouchLeave");
static_assert(offsetof(UARActor, OnActorHit) == 525, "Offset mismatch for UARActor::OnActorHit");
static_assert(offsetof(UARActor, OnDestroyed) == 526, "Offset mismatch for UARActor::OnDestroyed");
static_assert(offsetof(UARActor, OnEndPlay) == 527, "Offset mismatch for UARActor::OnEndPlay");
static_assert(offsetof(UARActor, InstanceComponents) == 592, "Offset mismatch for UARActor::InstanceComponents");
static_assert(offsetof(UARActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UARActor::BlueprintCreatedComponents");

// /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// Kind: Class; super: BlueprintAsyncActionBase
class UARBaseAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARBasicLightEstimate
// Kind: Class; super: ARLightEstimate
class UARBasicLightEstimate
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AmbientIntensityLumens; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float AmbientColorTemperatureKelvin; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AmbientColor[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARBasicLightEstimate, AmbientIntensityLumens) == 40, "Offset mismatch for UARBasicLightEstimate::AmbientIntensityLumens");
static_assert(offsetof(UARBasicLightEstimate, AmbientColorTemperatureKelvin) == 44, "Offset mismatch for UARBasicLightEstimate::AmbientColorTemperatureKelvin");
static_assert(offsetof(UARBasicLightEstimate, AmbientColor) == 48, "Offset mismatch for UARBasicLightEstimate::AmbientColor");

// /Script/AugmentedReality.ARBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UARBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARCandidateImage
// Kind: Class; super: DataAsset
class UARCandidateImage
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CandidateTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FString FriendlyName; // 0x0030 (Size: 0x10, Type: StrProperty)
    float Width; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t orientation; // 0x0048 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UARCandidateImage, CandidateTexture) == 40, "Offset mismatch for UARCandidateImage::CandidateTexture");
static_assert(offsetof(UARCandidateImage, FriendlyName) == 48, "Offset mismatch for UARCandidateImage::FriendlyName");
static_assert(offsetof(UARCandidateImage, Width) == 64, "Offset mismatch for UARCandidateImage::Width");
static_assert(offsetof(UARCandidateImage, Height) == 68, "Offset mismatch for UARCandidateImage::Height");
static_assert(offsetof(UARCandidateImage, orientation) == 72, "Offset mismatch for UARCandidateImage::orientation");

// /Script/AugmentedReality.ARCandidateObject
// Kind: Class; super: DataAsset
class UARCandidateObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CandidateObjectData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FString FriendlyName; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t BoundingBox[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARCandidateObject, CandidateObjectData) == 40, "Offset mismatch for UARCandidateObject::CandidateObjectData");
static_assert(offsetof(UARCandidateObject, FriendlyName) == 56, "Offset mismatch for UARCandidateObject::FriendlyName");
static_assert(offsetof(UARCandidateObject, BoundingBox) == 72, "Offset mismatch for UARCandidateObject::BoundingBox");

// /Script/AugmentedReality.ARComponent
// Kind: Class; super: SceneComponent
class UARComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t NativeID[0x40]; // 0x0240 (Size: 0x40, Type: StructProperty)
    std::uint8_t bUseDefaultReplication; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    void* DefaultMeshMaterial; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* DefaultWireframeMeshMaterial; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* MRMeshComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* MyTrackedGeometry; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UARComponent, NativeID) == 576, "Offset mismatch for UARComponent::NativeID");
static_assert(offsetof(UARComponent, bUseDefaultReplication) == 640, "Offset mismatch for UARComponent::bUseDefaultReplication");
static_assert(offsetof(UARComponent, DefaultMeshMaterial) == 648, "Offset mismatch for UARComponent::DefaultMeshMaterial");
static_assert(offsetof(UARComponent, DefaultWireframeMeshMaterial) == 656, "Offset mismatch for UARComponent::DefaultWireframeMeshMaterial");
static_assert(offsetof(UARComponent, MRMeshComponent) == 664, "Offset mismatch for UARComponent::MRMeshComponent");
static_assert(offsetof(UARComponent, MyTrackedGeometry) == 672, "Offset mismatch for UARComponent::MyTrackedGeometry");

// /Script/AugmentedReality.ARDependencyHandler
// Kind: Class; super: Object
class UARDependencyHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.AREnvironmentCaptureProbe
// Kind: Class; super: ARTrackedGeometry
class UAREnvironmentCaptureProbe
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t Extent[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    void* EnvironmentCaptureTexture; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAREnvironmentCaptureProbe, Extent) == 352, "Offset mismatch for UAREnvironmentCaptureProbe::Extent");
static_assert(offsetof(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture) == 376, "Offset mismatch for UAREnvironmentCaptureProbe::EnvironmentCaptureTexture");

// /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
// Kind: Class; super: TextureCube
class UAREnvironmentCaptureProbeTexture
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t TextureType; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0129
    float Timestamp; // 0x012C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalTextureGuid[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAREnvironmentCaptureProbeTexture, TextureType) == 296, "Offset mismatch for UAREnvironmentCaptureProbeTexture::TextureType");
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Timestamp) == 300, "Offset mismatch for UAREnvironmentCaptureProbeTexture::Timestamp");
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid) == 304, "Offset mismatch for UAREnvironmentCaptureProbeTexture::ExternalTextureGuid");
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Size) == 320, "Offset mismatch for UAREnvironmentCaptureProbeTexture::Size");

// /Script/AugmentedReality.AREnvironmentProbeComponent
// Kind: Class; super: ARComponent
class UAREnvironmentProbeComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAREnvironmentProbeComponent, ReplicatedPayload) == 704, "Offset mismatch for UAREnvironmentProbeComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARFaceComponent
// Kind: Class; super: ARComponent
class UARFaceComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t TransformSetting; // 0x02C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUpdateVertexNormal; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFaceOutOfScreen; // 0x02C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x02C3
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARFaceComponent, TransformSetting) == 704, "Offset mismatch for UARFaceComponent::TransformSetting");
static_assert(offsetof(UARFaceComponent, bUpdateVertexNormal) == 705, "Offset mismatch for UARFaceComponent::bUpdateVertexNormal");
static_assert(offsetof(UARFaceComponent, bFaceOutOfScreen) == 706, "Offset mismatch for UARFaceComponent::bFaceOutOfScreen");
static_assert(offsetof(UARFaceComponent, ReplicatedPayload) == 712, "Offset mismatch for UARFaceComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARFaceGeometry
// Kind: Class; super: ARTrackedGeometry
class UARFaceGeometry
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t LookAtTarget[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsTracked; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    TMap<void*, void*> BlendShapes; // 0x0180 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x30]; // 0x0190
    std::uint8_t LeftEyeTransform[0x60]; // 0x01C0 (Size: 0x60, Type: StructProperty)
    std::uint8_t RightEyeTransform[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARFaceGeometry, LookAtTarget) == 352, "Offset mismatch for UARFaceGeometry::LookAtTarget");
static_assert(offsetof(UARFaceGeometry, bIsTracked) == 376, "Offset mismatch for UARFaceGeometry::bIsTracked");
static_assert(offsetof(UARFaceGeometry, BlendShapes) == 384, "Offset mismatch for UARFaceGeometry::BlendShapes");
static_assert(offsetof(UARFaceGeometry, LeftEyeTransform) == 448, "Offset mismatch for UARFaceGeometry::LeftEyeTransform");
static_assert(offsetof(UARFaceGeometry, RightEyeTransform) == 544, "Offset mismatch for UARFaceGeometry::RightEyeTransform");

// /Script/AugmentedReality.ARGeoAnchor
// Kind: Class; super: ARTrackedGeometry
class UARGeoAnchor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UniqueID[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalToTrackingTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalToAlignedTrackingTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackingState; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0101
    void* UnderlyingMesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectClassification; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpatialMeshUsageFlags; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x011A
    std::int32_t LastUpdateFrameNumber; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0134
    FName DebugName; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UARGeoAnchor, UniqueID) == 40, "Offset mismatch for UARGeoAnchor::UniqueID");
static_assert(offsetof(UARGeoAnchor, LocalToTrackingTransform) == 64, "Offset mismatch for UARGeoAnchor::LocalToTrackingTransform");
static_assert(offsetof(UARGeoAnchor, LocalToAlignedTrackingTransform) == 160, "Offset mismatch for UARGeoAnchor::LocalToAlignedTrackingTransform");
static_assert(offsetof(UARGeoAnchor, TrackingState) == 256, "Offset mismatch for UARGeoAnchor::TrackingState");
static_assert(offsetof(UARGeoAnchor, UnderlyingMesh) == 272, "Offset mismatch for UARGeoAnchor::UnderlyingMesh");
static_assert(offsetof(UARGeoAnchor, ObjectClassification) == 280, "Offset mismatch for UARGeoAnchor::ObjectClassification");
static_assert(offsetof(UARGeoAnchor, SpatialMeshUsageFlags) == 281, "Offset mismatch for UARGeoAnchor::SpatialMeshUsageFlags");
static_assert(offsetof(UARGeoAnchor, LastUpdateFrameNumber) == 304, "Offset mismatch for UARGeoAnchor::LastUpdateFrameNumber");
static_assert(offsetof(UARGeoAnchor, DebugName) == 320, "Offset mismatch for UARGeoAnchor::DebugName");

// /Script/AugmentedReality.ARGeoAnchorComponent
// Kind: Class; super: ARComponent
class UARGeoAnchorComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARGeoAnchorComponent, ReplicatedPayload) == 704, "Offset mismatch for UARGeoAnchorComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARGeoTrackingSupport
// Kind: Class; super: Object
class UARGeoTrackingSupport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// Kind: Class; super: ARBaseAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnSuccess) == 80, "Offset mismatch for UARGetCandidateObjectAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnFailed) == 96, "Offset mismatch for UARGetCandidateObjectAsyncTaskBlueprintProxy::OnFailed");

// /Script/AugmentedReality.ARImageComponent
// Kind: Class; super: ARComponent
class UARImageComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARImageComponent, ReplicatedPayload) == 704, "Offset mismatch for UARImageComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARLifeCycleComponent
// Kind: Class; super: SceneComponent
class UARLifeCycleComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x0250 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UARLifeCycleComponent, OnARActorSpawnedDelegate) == 576, "Offset mismatch for UARLifeCycleComponent::OnARActorSpawnedDelegate");
static_assert(offsetof(UARLifeCycleComponent, OnARActorToBeDestroyedDelegate) == 592, "Offset mismatch for UARLifeCycleComponent::OnARActorToBeDestroyedDelegate");

// /Script/AugmentedReality.ARLightEstimate
// Kind: Class; super: Object
class UARLightEstimate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARMeshComponent
// Kind: Class; super: ARComponent
class UARMeshComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARMeshComponent, ReplicatedPayload) == 704, "Offset mismatch for UARMeshComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARMeshGeometry
// Kind: Class; super: ARTrackedGeometry
class UARMeshGeometry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UniqueID[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalToTrackingTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalToAlignedTrackingTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackingState; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0101
    void* UnderlyingMesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectClassification; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpatialMeshUsageFlags; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x011A
    std::int32_t LastUpdateFrameNumber; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0134
    FName DebugName; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UARMeshGeometry, UniqueID) == 40, "Offset mismatch for UARMeshGeometry::UniqueID");
static_assert(offsetof(UARMeshGeometry, LocalToTrackingTransform) == 64, "Offset mismatch for UARMeshGeometry::LocalToTrackingTransform");
static_assert(offsetof(UARMeshGeometry, LocalToAlignedTrackingTransform) == 160, "Offset mismatch for UARMeshGeometry::LocalToAlignedTrackingTransform");
static_assert(offsetof(UARMeshGeometry, TrackingState) == 256, "Offset mismatch for UARMeshGeometry::TrackingState");
static_assert(offsetof(UARMeshGeometry, UnderlyingMesh) == 272, "Offset mismatch for UARMeshGeometry::UnderlyingMesh");
static_assert(offsetof(UARMeshGeometry, ObjectClassification) == 280, "Offset mismatch for UARMeshGeometry::ObjectClassification");
static_assert(offsetof(UARMeshGeometry, SpatialMeshUsageFlags) == 281, "Offset mismatch for UARMeshGeometry::SpatialMeshUsageFlags");
static_assert(offsetof(UARMeshGeometry, LastUpdateFrameNumber) == 304, "Offset mismatch for UARMeshGeometry::LastUpdateFrameNumber");
static_assert(offsetof(UARMeshGeometry, DebugName) == 320, "Offset mismatch for UARMeshGeometry::DebugName");

// /Script/AugmentedReality.ARObjectComponent
// Kind: Class; super: ARComponent
class UARObjectComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARObjectComponent, ReplicatedPayload) == 704, "Offset mismatch for UARObjectComponent::ReplicatedPayload");

// /Script/AugmentedReality.AROriginActor
// Kind: Class; super: Actor
class UAROriginActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAROriginActor, PrimaryActorTick) == 40, "Offset mismatch for UAROriginActor::PrimaryActorTick");
static_assert(offsetof(UAROriginActor, bAlwaysRelevant) == 88, "Offset mismatch for UAROriginActor::bAlwaysRelevant");
static_assert(offsetof(UAROriginActor, bExchangedRoles) == 89, "Offset mismatch for UAROriginActor::bExchangedRoles");
static_assert(offsetof(UAROriginActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UAROriginActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UAROriginActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UAROriginActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UAROriginActor, bActorEnableCollision) == 93, "Offset mismatch for UAROriginActor::bActorEnableCollision");
static_assert(offsetof(UAROriginActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UAROriginActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UAROriginActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UAROriginActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UAROriginActor, RemoteRole) == 96, "Offset mismatch for UAROriginActor::RemoteRole");
static_assert(offsetof(UAROriginActor, InitialLifeSpan) == 100, "Offset mismatch for UAROriginActor::InitialLifeSpan");
static_assert(offsetof(UAROriginActor, CustomTimeDilation) == 104, "Offset mismatch for UAROriginActor::CustomTimeDilation");
static_assert(offsetof(UAROriginActor, RayTracingGroupId) == 108, "Offset mismatch for UAROriginActor::RayTracingGroupId");
static_assert(offsetof(UAROriginActor, AttachmentReplication) == 112, "Offset mismatch for UAROriginActor::AttachmentReplication");
static_assert(offsetof(UAROriginActor, ReplicatedMovement) == 208, "Offset mismatch for UAROriginActor::ReplicatedMovement");
static_assert(offsetof(UAROriginActor, Owner) == 344, "Offset mismatch for UAROriginActor::Owner");
static_assert(offsetof(UAROriginActor, NetDriverName) == 352, "Offset mismatch for UAROriginActor::NetDriverName");
static_assert(offsetof(UAROriginActor, Role) == 356, "Offset mismatch for UAROriginActor::Role");
static_assert(offsetof(UAROriginActor, NetDormancy) == 357, "Offset mismatch for UAROriginActor::NetDormancy");
static_assert(offsetof(UAROriginActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UAROriginActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UAROriginActor, AutoReceiveInput) == 359, "Offset mismatch for UAROriginActor::AutoReceiveInput");
static_assert(offsetof(UAROriginActor, InputPriority) == 360, "Offset mismatch for UAROriginActor::InputPriority");
static_assert(offsetof(UAROriginActor, InputComponent) == 368, "Offset mismatch for UAROriginActor::InputComponent");
static_assert(offsetof(UAROriginActor, NetTag) == 376, "Offset mismatch for UAROriginActor::NetTag");
static_assert(offsetof(UAROriginActor, NetCullDistanceSquared) == 380, "Offset mismatch for UAROriginActor::NetCullDistanceSquared");
static_assert(offsetof(UAROriginActor, NetUpdateFrequency) == 384, "Offset mismatch for UAROriginActor::NetUpdateFrequency");
static_assert(offsetof(UAROriginActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UAROriginActor::MinNetUpdateFrequency");
static_assert(offsetof(UAROriginActor, NetPriority) == 392, "Offset mismatch for UAROriginActor::NetPriority");
static_assert(offsetof(UAROriginActor, PhysicsReplicationMode) == 396, "Offset mismatch for UAROriginActor::PhysicsReplicationMode");
static_assert(offsetof(UAROriginActor, Instigator) == 408, "Offset mismatch for UAROriginActor::Instigator");
static_assert(offsetof(UAROriginActor, Children) == 416, "Offset mismatch for UAROriginActor::Children");
static_assert(offsetof(UAROriginActor, RootComponent) == 432, "Offset mismatch for UAROriginActor::RootComponent");
static_assert(offsetof(UAROriginActor, HLODLayer) == 448, "Offset mismatch for UAROriginActor::HLODLayer");
static_assert(offsetof(UAROriginActor, Layers) == 456, "Offset mismatch for UAROriginActor::Layers");
static_assert(offsetof(UAROriginActor, ParentComponent) == 472, "Offset mismatch for UAROriginActor::ParentComponent");
static_assert(offsetof(UAROriginActor, Tags) == 496, "Offset mismatch for UAROriginActor::Tags");
static_assert(offsetof(UAROriginActor, OnTakeAnyDamage) == 512, "Offset mismatch for UAROriginActor::OnTakeAnyDamage");
static_assert(offsetof(UAROriginActor, OnTakePointDamage) == 513, "Offset mismatch for UAROriginActor::OnTakePointDamage");
static_assert(offsetof(UAROriginActor, OnTakeRadialDamage) == 514, "Offset mismatch for UAROriginActor::OnTakeRadialDamage");
static_assert(offsetof(UAROriginActor, OnActorBeginOverlap) == 515, "Offset mismatch for UAROriginActor::OnActorBeginOverlap");
static_assert(offsetof(UAROriginActor, OnActorEndOverlap) == 516, "Offset mismatch for UAROriginActor::OnActorEndOverlap");
static_assert(offsetof(UAROriginActor, OnBeginCursorOver) == 517, "Offset mismatch for UAROriginActor::OnBeginCursorOver");
static_assert(offsetof(UAROriginActor, OnEndCursorOver) == 518, "Offset mismatch for UAROriginActor::OnEndCursorOver");
static_assert(offsetof(UAROriginActor, OnClicked) == 519, "Offset mismatch for UAROriginActor::OnClicked");
static_assert(offsetof(UAROriginActor, OnReleased) == 520, "Offset mismatch for UAROriginActor::OnReleased");
static_assert(offsetof(UAROriginActor, OnInputTouchBegin) == 521, "Offset mismatch for UAROriginActor::OnInputTouchBegin");
static_assert(offsetof(UAROriginActor, OnInputTouchEnd) == 522, "Offset mismatch for UAROriginActor::OnInputTouchEnd");
static_assert(offsetof(UAROriginActor, OnInputTouchEnter) == 523, "Offset mismatch for UAROriginActor::OnInputTouchEnter");
static_assert(offsetof(UAROriginActor, OnInputTouchLeave) == 524, "Offset mismatch for UAROriginActor::OnInputTouchLeave");
static_assert(offsetof(UAROriginActor, OnActorHit) == 525, "Offset mismatch for UAROriginActor::OnActorHit");
static_assert(offsetof(UAROriginActor, OnDestroyed) == 526, "Offset mismatch for UAROriginActor::OnDestroyed");
static_assert(offsetof(UAROriginActor, OnEndPlay) == 527, "Offset mismatch for UAROriginActor::OnEndPlay");
static_assert(offsetof(UAROriginActor, InstanceComponents) == 592, "Offset mismatch for UAROriginActor::InstanceComponents");
static_assert(offsetof(UAROriginActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UAROriginActor::BlueprintCreatedComponents");

// /Script/AugmentedReality.ARPin
// Kind: Class; super: Object
class UARPin
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TrackedGeometry; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PinnedComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t LocalToTrackingTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalToAlignedTrackingTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackingState; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0101
    FMulticastInlineDelegate OnARTrackingStateChanged; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnARTransformUpdated; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UARPin, TrackedGeometry) == 40, "Offset mismatch for UARPin::TrackedGeometry");
static_assert(offsetof(UARPin, PinnedComponent) == 48, "Offset mismatch for UARPin::PinnedComponent");
static_assert(offsetof(UARPin, LocalToTrackingTransform) == 64, "Offset mismatch for UARPin::LocalToTrackingTransform");
static_assert(offsetof(UARPin, LocalToAlignedTrackingTransform) == 160, "Offset mismatch for UARPin::LocalToAlignedTrackingTransform");
static_assert(offsetof(UARPin, TrackingState) == 256, "Offset mismatch for UARPin::TrackingState");
static_assert(offsetof(UARPin, OnARTrackingStateChanged) == 288, "Offset mismatch for UARPin::OnARTrackingStateChanged");
static_assert(offsetof(UARPin, OnARTransformUpdated) == 304, "Offset mismatch for UARPin::OnARTransformUpdated");

// /Script/AugmentedReality.ARPlaneComponent
// Kind: Class; super: ARComponent
class UARPlaneComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARPlaneComponent, ReplicatedPayload) == 704, "Offset mismatch for UARPlaneComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARPlaneGeometry
// Kind: Class; super: ARTrackedGeometry
class UARPlaneGeometry
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t orientation; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0161
    std::uint8_t Center[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t Extent[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    TArray<void*> BoundaryPolygon; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    void* SubsumedBy; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UARPlaneGeometry, orientation) == 352, "Offset mismatch for UARPlaneGeometry::orientation");
static_assert(offsetof(UARPlaneGeometry, Center) == 360, "Offset mismatch for UARPlaneGeometry::Center");
static_assert(offsetof(UARPlaneGeometry, Extent) == 384, "Offset mismatch for UARPlaneGeometry::Extent");
static_assert(offsetof(UARPlaneGeometry, BoundaryPolygon) == 408, "Offset mismatch for UARPlaneGeometry::BoundaryPolygon");
static_assert(offsetof(UARPlaneGeometry, SubsumedBy) == 424, "Offset mismatch for UARPlaneGeometry::SubsumedBy");

// /Script/AugmentedReality.ARPointComponent
// Kind: Class; super: ARComponent
class UARPointComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARPointComponent, ReplicatedPayload) == 704, "Offset mismatch for UARPointComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARPoseComponent
// Kind: Class; super: ARComponent
class UARPoseComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARPoseComponent, ReplicatedPayload) == 704, "Offset mismatch for UARPoseComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARQRCodeComponent
// Kind: Class; super: ARComponent
class UARQRCodeComponent
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t ReplicatedPayload[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARQRCodeComponent, ReplicatedPayload) == 704, "Offset mismatch for UARQRCodeComponent::ReplicatedPayload");

// /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// Kind: Class; super: ARBaseAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UARSaveWorldAsyncTaskBlueprintProxy, OnSuccess) == 80, "Offset mismatch for UARSaveWorldAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UARSaveWorldAsyncTaskBlueprintProxy, OnFailed) == 96, "Offset mismatch for UARSaveWorldAsyncTaskBlueprintProxy::OnFailed");

// /Script/AugmentedReality.ARSessionConfig
// Kind: Class; super: DataAsset
class UARSessionConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bGenerateMeshDataFromTrackedGeometry; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateCollisionForMeshData; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateNavMeshForMeshData; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMeshDataForOcclusion; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRenderMeshDataInWireframe; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackSceneObjects; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePersonSegmentationForOcclusion; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSceneDepthForOcclusion; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAutomaticImageScaleEstimation; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseStandardOnboardingUX; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WorldAlignment; // 0x0032 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SessionType; // 0x0033 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlaneDetectionMode; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHorizontalPlaneDetection; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVerticalPlaneDetection; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutoFocus; // 0x0037 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LightEstimationMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FrameSyncMode; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableAutomaticCameraOverlay; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutomaticCameraTracking; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetCameraTracking; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetTrackedObjects; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003E
    TArray<void*> CandidateImages; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxNumSimultaneousImagesTracked; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t EnvironmentCaptureProbeType; // 0x0054 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0055
    TArray<void*> WorldMapData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CandidateObjects; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DesiredVideoFormat[0xC]; // 0x0078 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseOptimalVideoFormat; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FaceTrackingDirection; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FaceTrackingUpdate; // 0x0086 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0087
    std::int32_t MaxNumberOfTrackedFaces; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x008C
    TArray<void*> SerializedARCandidateImageDatabase; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnabledSessionTrackingFeature; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SceneReconstructionMethod; // 0x00A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x6]; // 0x00A2
    void* PlaneComponentClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* PointComponentClass; // 0x00B0 (Size: 0x8, Type: ClassProperty)
    void* FaceComponentClass; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    void* ImageComponentClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* QRCodeComponentClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* PoseComponentClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* EnvironmentProbeComponentClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* ObjectComponentClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    void* MeshComponentClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    void* GeoAnchorComponentClass; // 0x00F0 (Size: 0x8, Type: ClassProperty)
    void* DefaultMeshMaterial; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultWireframeMeshMaterial; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UARSessionConfig, bGenerateMeshDataFromTrackedGeometry) == 40, "Offset mismatch for UARSessionConfig::bGenerateMeshDataFromTrackedGeometry");
static_assert(offsetof(UARSessionConfig, bGenerateCollisionForMeshData) == 41, "Offset mismatch for UARSessionConfig::bGenerateCollisionForMeshData");
static_assert(offsetof(UARSessionConfig, bGenerateNavMeshForMeshData) == 42, "Offset mismatch for UARSessionConfig::bGenerateNavMeshForMeshData");
static_assert(offsetof(UARSessionConfig, bUseMeshDataForOcclusion) == 43, "Offset mismatch for UARSessionConfig::bUseMeshDataForOcclusion");
static_assert(offsetof(UARSessionConfig, bRenderMeshDataInWireframe) == 44, "Offset mismatch for UARSessionConfig::bRenderMeshDataInWireframe");
static_assert(offsetof(UARSessionConfig, bTrackSceneObjects) == 45, "Offset mismatch for UARSessionConfig::bTrackSceneObjects");
static_assert(offsetof(UARSessionConfig, bUsePersonSegmentationForOcclusion) == 46, "Offset mismatch for UARSessionConfig::bUsePersonSegmentationForOcclusion");
static_assert(offsetof(UARSessionConfig, bUseSceneDepthForOcclusion) == 47, "Offset mismatch for UARSessionConfig::bUseSceneDepthForOcclusion");
static_assert(offsetof(UARSessionConfig, bUseAutomaticImageScaleEstimation) == 48, "Offset mismatch for UARSessionConfig::bUseAutomaticImageScaleEstimation");
static_assert(offsetof(UARSessionConfig, bUseStandardOnboardingUX) == 49, "Offset mismatch for UARSessionConfig::bUseStandardOnboardingUX");
static_assert(offsetof(UARSessionConfig, WorldAlignment) == 50, "Offset mismatch for UARSessionConfig::WorldAlignment");
static_assert(offsetof(UARSessionConfig, SessionType) == 51, "Offset mismatch for UARSessionConfig::SessionType");
static_assert(offsetof(UARSessionConfig, PlaneDetectionMode) == 52, "Offset mismatch for UARSessionConfig::PlaneDetectionMode");
static_assert(offsetof(UARSessionConfig, bHorizontalPlaneDetection) == 53, "Offset mismatch for UARSessionConfig::bHorizontalPlaneDetection");
static_assert(offsetof(UARSessionConfig, bVerticalPlaneDetection) == 54, "Offset mismatch for UARSessionConfig::bVerticalPlaneDetection");
static_assert(offsetof(UARSessionConfig, bEnableAutoFocus) == 55, "Offset mismatch for UARSessionConfig::bEnableAutoFocus");
static_assert(offsetof(UARSessionConfig, LightEstimationMode) == 56, "Offset mismatch for UARSessionConfig::LightEstimationMode");
static_assert(offsetof(UARSessionConfig, FrameSyncMode) == 57, "Offset mismatch for UARSessionConfig::FrameSyncMode");
static_assert(offsetof(UARSessionConfig, bEnableAutomaticCameraOverlay) == 58, "Offset mismatch for UARSessionConfig::bEnableAutomaticCameraOverlay");
static_assert(offsetof(UARSessionConfig, bEnableAutomaticCameraTracking) == 59, "Offset mismatch for UARSessionConfig::bEnableAutomaticCameraTracking");
static_assert(offsetof(UARSessionConfig, bResetCameraTracking) == 60, "Offset mismatch for UARSessionConfig::bResetCameraTracking");
static_assert(offsetof(UARSessionConfig, bResetTrackedObjects) == 61, "Offset mismatch for UARSessionConfig::bResetTrackedObjects");
static_assert(offsetof(UARSessionConfig, CandidateImages) == 64, "Offset mismatch for UARSessionConfig::CandidateImages");
static_assert(offsetof(UARSessionConfig, MaxNumSimultaneousImagesTracked) == 80, "Offset mismatch for UARSessionConfig::MaxNumSimultaneousImagesTracked");
static_assert(offsetof(UARSessionConfig, EnvironmentCaptureProbeType) == 84, "Offset mismatch for UARSessionConfig::EnvironmentCaptureProbeType");
static_assert(offsetof(UARSessionConfig, WorldMapData) == 88, "Offset mismatch for UARSessionConfig::WorldMapData");
static_assert(offsetof(UARSessionConfig, CandidateObjects) == 104, "Offset mismatch for UARSessionConfig::CandidateObjects");
static_assert(offsetof(UARSessionConfig, DesiredVideoFormat) == 120, "Offset mismatch for UARSessionConfig::DesiredVideoFormat");
static_assert(offsetof(UARSessionConfig, bUseOptimalVideoFormat) == 132, "Offset mismatch for UARSessionConfig::bUseOptimalVideoFormat");
static_assert(offsetof(UARSessionConfig, FaceTrackingDirection) == 133, "Offset mismatch for UARSessionConfig::FaceTrackingDirection");
static_assert(offsetof(UARSessionConfig, FaceTrackingUpdate) == 134, "Offset mismatch for UARSessionConfig::FaceTrackingUpdate");
static_assert(offsetof(UARSessionConfig, MaxNumberOfTrackedFaces) == 136, "Offset mismatch for UARSessionConfig::MaxNumberOfTrackedFaces");
static_assert(offsetof(UARSessionConfig, SerializedARCandidateImageDatabase) == 144, "Offset mismatch for UARSessionConfig::SerializedARCandidateImageDatabase");
static_assert(offsetof(UARSessionConfig, EnabledSessionTrackingFeature) == 160, "Offset mismatch for UARSessionConfig::EnabledSessionTrackingFeature");
static_assert(offsetof(UARSessionConfig, SceneReconstructionMethod) == 161, "Offset mismatch for UARSessionConfig::SceneReconstructionMethod");
static_assert(offsetof(UARSessionConfig, PlaneComponentClass) == 168, "Offset mismatch for UARSessionConfig::PlaneComponentClass");
static_assert(offsetof(UARSessionConfig, PointComponentClass) == 176, "Offset mismatch for UARSessionConfig::PointComponentClass");
static_assert(offsetof(UARSessionConfig, FaceComponentClass) == 184, "Offset mismatch for UARSessionConfig::FaceComponentClass");
static_assert(offsetof(UARSessionConfig, ImageComponentClass) == 192, "Offset mismatch for UARSessionConfig::ImageComponentClass");
static_assert(offsetof(UARSessionConfig, QRCodeComponentClass) == 200, "Offset mismatch for UARSessionConfig::QRCodeComponentClass");
static_assert(offsetof(UARSessionConfig, PoseComponentClass) == 208, "Offset mismatch for UARSessionConfig::PoseComponentClass");
static_assert(offsetof(UARSessionConfig, EnvironmentProbeComponentClass) == 216, "Offset mismatch for UARSessionConfig::EnvironmentProbeComponentClass");
static_assert(offsetof(UARSessionConfig, ObjectComponentClass) == 224, "Offset mismatch for UARSessionConfig::ObjectComponentClass");
static_assert(offsetof(UARSessionConfig, MeshComponentClass) == 232, "Offset mismatch for UARSessionConfig::MeshComponentClass");
static_assert(offsetof(UARSessionConfig, GeoAnchorComponentClass) == 240, "Offset mismatch for UARSessionConfig::GeoAnchorComponentClass");
static_assert(offsetof(UARSessionConfig, DefaultMeshMaterial) == 248, "Offset mismatch for UARSessionConfig::DefaultMeshMaterial");
static_assert(offsetof(UARSessionConfig, DefaultWireframeMeshMaterial) == 256, "Offset mismatch for UARSessionConfig::DefaultWireframeMeshMaterial");

// /Script/AugmentedReality.ARSharedWorldGameMode
// Kind: Class; super: GameMode
class UARSharedWorldGameMode
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::int32_t BufferSizePerChunk; // 0x0350 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UARSharedWorldGameMode, BufferSizePerChunk) == 848, "Offset mismatch for UARSharedWorldGameMode::BufferSizePerChunk");

// /Script/AugmentedReality.ARSharedWorldGameState
// Kind: Class; super: GameState
class UARSharedWorldGameState
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> PreviewImageData; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ARWorldData; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreviewImageBytesTotal; // 0x0300 (Size: 0x4, Type: IntProperty)
    std::int32_t ARWorldBytesTotal; // 0x0304 (Size: 0x4, Type: IntProperty)
    std::int32_t PreviewImageBytesDelivered; // 0x0308 (Size: 0x4, Type: IntProperty)
    std::int32_t ARWorldBytesDelivered; // 0x030C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UARSharedWorldGameState, PreviewImageData) == 736, "Offset mismatch for UARSharedWorldGameState::PreviewImageData");
static_assert(offsetof(UARSharedWorldGameState, ARWorldData) == 752, "Offset mismatch for UARSharedWorldGameState::ARWorldData");
static_assert(offsetof(UARSharedWorldGameState, PreviewImageBytesTotal) == 768, "Offset mismatch for UARSharedWorldGameState::PreviewImageBytesTotal");
static_assert(offsetof(UARSharedWorldGameState, ARWorldBytesTotal) == 772, "Offset mismatch for UARSharedWorldGameState::ARWorldBytesTotal");
static_assert(offsetof(UARSharedWorldGameState, PreviewImageBytesDelivered) == 776, "Offset mismatch for UARSharedWorldGameState::PreviewImageBytesDelivered");
static_assert(offsetof(UARSharedWorldGameState, ARWorldBytesDelivered) == 780, "Offset mismatch for UARSharedWorldGameState::ARWorldBytesDelivered");

// /Script/AugmentedReality.ARSharedWorldPlayerController
// Kind: Class; super: PlayerController
class UARSharedWorldPlayerController
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* player; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* AcknowledgedPawn; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* MyHUD; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* PlayerCameraManager; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* PlayerCameraManagerClass; // 0x0330 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoManageActiveCameraTarget; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0339
    std::uint8_t TargetViewRotation[0x30]; // 0x0340 (Size: 0x30, Type: StructProperty)
    float SmoothTargetViewRotationSpeed; // 0x0370 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0374
    TArray<void*> HiddenActors; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HiddenPrimitiveComponents; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0398
    float LastSpectatorStateSynchTime; // 0x039C (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastSpectatorSyncLocation[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastSpectatorSyncRotation[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::int32_t ClientCap; // 0x03D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x03D4
    void* CheatManager; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* CheatClass; // 0x03E0 (Size: 0x8, Type: ClassProperty)
    void* PlayerInput; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveForceFeedbackEffects; // 0x03F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x80]; // 0x0400
    std::uint8_t bPlayerIsWaiting; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0481
    std::uint8_t NetPlayerIndex; // 0x0484 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0007[0x1B]; // 0x0485
    void* PendingSwapConnection; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* NetConnection; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0008[0x18]; // 0x04B0
    float InputYawScale; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    float InputPitchScale; // 0x04CC (Size: 0x4, Type: FloatProperty)
    float InputRollScale; // 0x04D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableClickEvents; // 0x04D4 (Size: 0x1, Type: BoolProperty)
    // 0x04D4 BoolProperty bEnableMotionControls (shared storage)
    // 0x04D4 BoolProperty bEnableMouseOverEvents (shared storage)
    // 0x04D4 BoolProperty bEnableStreamingSource (shared storage)
    // 0x04D4 BoolProperty bEnableTouchEvents (shared storage)
    // 0x04D4 BoolProperty bEnableTouchOverEvents (shared storage)
    // 0x04D4 BoolProperty bForceFeedbackEnabled (shared storage)
    // 0x04D4 BoolProperty bShowMouseCursor (shared storage)
    std::uint8_t bStreamingSourceShouldActivate; // 0x04D5 (Size: 0x1, Type: BoolProperty)
    // 0x04D5 BoolProperty bStreamingSourceShouldBlockOnSlowStreaming (shared storage)
    std::uint8_t Pad_0009[0x2]; // 0x04D6
    std::uint8_t StreamingSourcePriority; // 0x04D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x3]; // 0x04D9
    std::uint8_t StreamingSourceDebugColor[0x4]; // 0x04DC (Size: 0x4, Type: StructProperty)
    TArray<void*> StreamingSourceShapes; // 0x04E0 (Size: 0x10, Type: ArrayProperty)
    float ForceFeedbackScale; // 0x04F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x04F4
    TArray<void*> ClickEventKeys; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultMouseCursor; // 0x0508 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentMouseCursor; // 0x0509 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultClickTraceChannel; // 0x050A (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurrentClickTraceChannel; // 0x050B (Size: 0x1, Type: ByteProperty)
    float HitResultTraceDistance; // 0x050C (Size: 0x4, Type: FloatProperty)
    std::uint16_t SeamlessTravelCount; // 0x0510 (Size: 0x2, Type: UInt16Property)
    std::uint16_t LastCompletedSeamlessTravelCount; // 0x0512 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_000C[0x84]; // 0x0514
    void* InactiveStateInputComponent; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldPerformFullTickWhenPaused; // 0x05A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x17]; // 0x05A1
    void* CurrentTouchInterface; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    void* OverridePlayerInputClass; // 0x05C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_000E[0x78]; // 0x05C8
    void* SpectatorPawn; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000F[0x4]; // 0x0648
    std::uint8_t bIsLocalPlayerController; // 0x064C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x064D
    std::uint8_t SpawnLocation[0x48]; // 0x0650 (Size: 0x48, Type: StructProperty)
    std::uint8_t CachedConnectionPlayerId[0x30]; // 0x0698 (Size: 0x30, Type: StructProperty)
    std::uint32_t ClientHandshakeId; // 0x06C8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UARSharedWorldPlayerController, player) == 784, "Offset mismatch for UARSharedWorldPlayerController::player");
static_assert(offsetof(UARSharedWorldPlayerController, AcknowledgedPawn) == 792, "Offset mismatch for UARSharedWorldPlayerController::AcknowledgedPawn");
static_assert(offsetof(UARSharedWorldPlayerController, MyHUD) == 800, "Offset mismatch for UARSharedWorldPlayerController::MyHUD");
static_assert(offsetof(UARSharedWorldPlayerController, PlayerCameraManager) == 808, "Offset mismatch for UARSharedWorldPlayerController::PlayerCameraManager");
static_assert(offsetof(UARSharedWorldPlayerController, PlayerCameraManagerClass) == 816, "Offset mismatch for UARSharedWorldPlayerController::PlayerCameraManagerClass");
static_assert(offsetof(UARSharedWorldPlayerController, bAutoManageActiveCameraTarget) == 824, "Offset mismatch for UARSharedWorldPlayerController::bAutoManageActiveCameraTarget");
static_assert(offsetof(UARSharedWorldPlayerController, TargetViewRotation) == 832, "Offset mismatch for UARSharedWorldPlayerController::TargetViewRotation");
static_assert(offsetof(UARSharedWorldPlayerController, SmoothTargetViewRotationSpeed) == 880, "Offset mismatch for UARSharedWorldPlayerController::SmoothTargetViewRotationSpeed");
static_assert(offsetof(UARSharedWorldPlayerController, HiddenActors) == 888, "Offset mismatch for UARSharedWorldPlayerController::HiddenActors");
static_assert(offsetof(UARSharedWorldPlayerController, HiddenPrimitiveComponents) == 904, "Offset mismatch for UARSharedWorldPlayerController::HiddenPrimitiveComponents");
static_assert(offsetof(UARSharedWorldPlayerController, LastSpectatorStateSynchTime) == 924, "Offset mismatch for UARSharedWorldPlayerController::LastSpectatorStateSynchTime");
static_assert(offsetof(UARSharedWorldPlayerController, LastSpectatorSyncLocation) == 928, "Offset mismatch for UARSharedWorldPlayerController::LastSpectatorSyncLocation");
static_assert(offsetof(UARSharedWorldPlayerController, LastSpectatorSyncRotation) == 952, "Offset mismatch for UARSharedWorldPlayerController::LastSpectatorSyncRotation");
static_assert(offsetof(UARSharedWorldPlayerController, ClientCap) == 976, "Offset mismatch for UARSharedWorldPlayerController::ClientCap");
static_assert(offsetof(UARSharedWorldPlayerController, CheatManager) == 984, "Offset mismatch for UARSharedWorldPlayerController::CheatManager");
static_assert(offsetof(UARSharedWorldPlayerController, CheatClass) == 992, "Offset mismatch for UARSharedWorldPlayerController::CheatClass");
static_assert(offsetof(UARSharedWorldPlayerController, PlayerInput) == 1000, "Offset mismatch for UARSharedWorldPlayerController::PlayerInput");
static_assert(offsetof(UARSharedWorldPlayerController, ActiveForceFeedbackEffects) == 1008, "Offset mismatch for UARSharedWorldPlayerController::ActiveForceFeedbackEffects");
static_assert(offsetof(UARSharedWorldPlayerController, bPlayerIsWaiting) == 1152, "Offset mismatch for UARSharedWorldPlayerController::bPlayerIsWaiting");
static_assert(offsetof(UARSharedWorldPlayerController, NetPlayerIndex) == 1156, "Offset mismatch for UARSharedWorldPlayerController::NetPlayerIndex");
static_assert(offsetof(UARSharedWorldPlayerController, PendingSwapConnection) == 1184, "Offset mismatch for UARSharedWorldPlayerController::PendingSwapConnection");
static_assert(offsetof(UARSharedWorldPlayerController, NetConnection) == 1192, "Offset mismatch for UARSharedWorldPlayerController::NetConnection");
static_assert(offsetof(UARSharedWorldPlayerController, InputYawScale) == 1224, "Offset mismatch for UARSharedWorldPlayerController::InputYawScale");
static_assert(offsetof(UARSharedWorldPlayerController, InputPitchScale) == 1228, "Offset mismatch for UARSharedWorldPlayerController::InputPitchScale");
static_assert(offsetof(UARSharedWorldPlayerController, InputRollScale) == 1232, "Offset mismatch for UARSharedWorldPlayerController::InputRollScale");
static_assert(offsetof(UARSharedWorldPlayerController, bEnableClickEvents) == 1236, "Offset mismatch for UARSharedWorldPlayerController::bEnableClickEvents");
static_assert(offsetof(UARSharedWorldPlayerController, bStreamingSourceShouldActivate) == 1237, "Offset mismatch for UARSharedWorldPlayerController::bStreamingSourceShouldActivate");
static_assert(offsetof(UARSharedWorldPlayerController, StreamingSourcePriority) == 1240, "Offset mismatch for UARSharedWorldPlayerController::StreamingSourcePriority");
static_assert(offsetof(UARSharedWorldPlayerController, StreamingSourceDebugColor) == 1244, "Offset mismatch for UARSharedWorldPlayerController::StreamingSourceDebugColor");
static_assert(offsetof(UARSharedWorldPlayerController, StreamingSourceShapes) == 1248, "Offset mismatch for UARSharedWorldPlayerController::StreamingSourceShapes");
static_assert(offsetof(UARSharedWorldPlayerController, ForceFeedbackScale) == 1264, "Offset mismatch for UARSharedWorldPlayerController::ForceFeedbackScale");
static_assert(offsetof(UARSharedWorldPlayerController, ClickEventKeys) == 1272, "Offset mismatch for UARSharedWorldPlayerController::ClickEventKeys");
static_assert(offsetof(UARSharedWorldPlayerController, DefaultMouseCursor) == 1288, "Offset mismatch for UARSharedWorldPlayerController::DefaultMouseCursor");
static_assert(offsetof(UARSharedWorldPlayerController, CurrentMouseCursor) == 1289, "Offset mismatch for UARSharedWorldPlayerController::CurrentMouseCursor");
static_assert(offsetof(UARSharedWorldPlayerController, DefaultClickTraceChannel) == 1290, "Offset mismatch for UARSharedWorldPlayerController::DefaultClickTraceChannel");
static_assert(offsetof(UARSharedWorldPlayerController, CurrentClickTraceChannel) == 1291, "Offset mismatch for UARSharedWorldPlayerController::CurrentClickTraceChannel");
static_assert(offsetof(UARSharedWorldPlayerController, HitResultTraceDistance) == 1292, "Offset mismatch for UARSharedWorldPlayerController::HitResultTraceDistance");
static_assert(offsetof(UARSharedWorldPlayerController, SeamlessTravelCount) == 1296, "Offset mismatch for UARSharedWorldPlayerController::SeamlessTravelCount");
static_assert(offsetof(UARSharedWorldPlayerController, LastCompletedSeamlessTravelCount) == 1298, "Offset mismatch for UARSharedWorldPlayerController::LastCompletedSeamlessTravelCount");
static_assert(offsetof(UARSharedWorldPlayerController, InactiveStateInputComponent) == 1432, "Offset mismatch for UARSharedWorldPlayerController::InactiveStateInputComponent");
static_assert(offsetof(UARSharedWorldPlayerController, bShouldPerformFullTickWhenPaused) == 1440, "Offset mismatch for UARSharedWorldPlayerController::bShouldPerformFullTickWhenPaused");
static_assert(offsetof(UARSharedWorldPlayerController, CurrentTouchInterface) == 1464, "Offset mismatch for UARSharedWorldPlayerController::CurrentTouchInterface");
static_assert(offsetof(UARSharedWorldPlayerController, OverridePlayerInputClass) == 1472, "Offset mismatch for UARSharedWorldPlayerController::OverridePlayerInputClass");
static_assert(offsetof(UARSharedWorldPlayerController, SpectatorPawn) == 1600, "Offset mismatch for UARSharedWorldPlayerController::SpectatorPawn");
static_assert(offsetof(UARSharedWorldPlayerController, bIsLocalPlayerController) == 1612, "Offset mismatch for UARSharedWorldPlayerController::bIsLocalPlayerController");
static_assert(offsetof(UARSharedWorldPlayerController, SpawnLocation) == 1616, "Offset mismatch for UARSharedWorldPlayerController::SpawnLocation");
static_assert(offsetof(UARSharedWorldPlayerController, CachedConnectionPlayerId) == 1688, "Offset mismatch for UARSharedWorldPlayerController::CachedConnectionPlayerId");
static_assert(offsetof(UARSharedWorldPlayerController, ClientHandshakeId) == 1736, "Offset mismatch for UARSharedWorldPlayerController::ClientHandshakeId");

// /Script/AugmentedReality.ARSkyLight
// Kind: Class; super: SkyLight
class UARSkyLight
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* CaptureProbe; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UARSkyLight, CaptureProbe) == 640, "Offset mismatch for UARSkyLight::CaptureProbe");

// /Script/AugmentedReality.ARTexture
// Kind: Class; super: Texture
class UARTexture
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t TextureType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    float Timestamp; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalTextureGuid[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARTexture, TextureType) == 288, "Offset mismatch for UARTexture::TextureType");
static_assert(offsetof(UARTexture, Timestamp) == 292, "Offset mismatch for UARTexture::Timestamp");
static_assert(offsetof(UARTexture, ExternalTextureGuid) == 296, "Offset mismatch for UARTexture::ExternalTextureGuid");
static_assert(offsetof(UARTexture, Size) == 312, "Offset mismatch for UARTexture::Size");

// /Script/AugmentedReality.ARTextureCameraDepth
// Kind: Class; super: ARTexture
class UARTextureCameraDepth
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t DepthQuality; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DepthAccuracy; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsTemporallySmoothed; // 0x0142 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UARTextureCameraDepth, DepthQuality) == 320, "Offset mismatch for UARTextureCameraDepth::DepthQuality");
static_assert(offsetof(UARTextureCameraDepth, DepthAccuracy) == 321, "Offset mismatch for UARTextureCameraDepth::DepthAccuracy");
static_assert(offsetof(UARTextureCameraDepth, bIsTemporallySmoothed) == 322, "Offset mismatch for UARTextureCameraDepth::bIsTemporallySmoothed");

// /Script/AugmentedReality.ARTextureCameraImage
// Kind: Class; super: ARTexture
class UARTextureCameraImage
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t TextureType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    float Timestamp; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExternalTextureGuid[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARTextureCameraImage, TextureType) == 288, "Offset mismatch for UARTextureCameraImage::TextureType");
static_assert(offsetof(UARTextureCameraImage, Timestamp) == 292, "Offset mismatch for UARTextureCameraImage::Timestamp");
static_assert(offsetof(UARTextureCameraImage, ExternalTextureGuid) == 296, "Offset mismatch for UARTextureCameraImage::ExternalTextureGuid");
static_assert(offsetof(UARTextureCameraImage, Size) == 312, "Offset mismatch for UARTextureCameraImage::Size");

// /Script/AugmentedReality.ARTraceResultDummy
// Kind: Class; super: Object
class UARTraceResultDummy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARTraceResultLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UARTraceResultLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.ARTrackableNotifyComponent
// Kind: Class; super: ActorComponent
class UARTrackableNotifyComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAddTrackedGeometry; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedPlane; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedPlane; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedPoint; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedImage; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedImage; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedImage; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedFace; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedFace; // 0x0190 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedFace; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x01C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x01D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAddTrackedObject; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUpdateTrackedObject; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemoveTrackedObject; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedGeometry) == 192, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedGeometry");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedGeometry) == 208, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedGeometry");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedGeometry) == 224, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedGeometry");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedPlane) == 240, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedPlane");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedPlane) == 256, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedPlane");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedPlane) == 272, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedPlane");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedPoint) == 288, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedPoint");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedPoint) == 304, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedPoint");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedPoint) == 320, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedPoint");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedImage) == 336, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedImage");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedImage) == 352, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedImage");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedImage) == 368, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedImage");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedFace) == 384, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedFace");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedFace) == 400, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedFace");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedFace) == 416, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedFace");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedEnvProbe) == 432, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedEnvProbe");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedEnvProbe) == 448, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedEnvProbe");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedEnvProbe) == 464, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedEnvProbe");
static_assert(offsetof(UARTrackableNotifyComponent, OnAddTrackedObject) == 480, "Offset mismatch for UARTrackableNotifyComponent::OnAddTrackedObject");
static_assert(offsetof(UARTrackableNotifyComponent, OnUpdateTrackedObject) == 496, "Offset mismatch for UARTrackableNotifyComponent::OnUpdateTrackedObject");
static_assert(offsetof(UARTrackableNotifyComponent, OnRemoveTrackedObject) == 512, "Offset mismatch for UARTrackableNotifyComponent::OnRemoveTrackedObject");

// /Script/AugmentedReality.ARTrackedGeometry
// Kind: Class; super: Object
class UARTrackedGeometry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UniqueID[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalToTrackingTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalToAlignedTrackingTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackingState; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0101
    void* UnderlyingMesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectClassification; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpatialMeshUsageFlags; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x011A
    std::int32_t LastUpdateFrameNumber; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0134
    FName DebugName; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UARTrackedGeometry, UniqueID) == 40, "Offset mismatch for UARTrackedGeometry::UniqueID");
static_assert(offsetof(UARTrackedGeometry, LocalToTrackingTransform) == 64, "Offset mismatch for UARTrackedGeometry::LocalToTrackingTransform");
static_assert(offsetof(UARTrackedGeometry, LocalToAlignedTrackingTransform) == 160, "Offset mismatch for UARTrackedGeometry::LocalToAlignedTrackingTransform");
static_assert(offsetof(UARTrackedGeometry, TrackingState) == 256, "Offset mismatch for UARTrackedGeometry::TrackingState");
static_assert(offsetof(UARTrackedGeometry, UnderlyingMesh) == 272, "Offset mismatch for UARTrackedGeometry::UnderlyingMesh");
static_assert(offsetof(UARTrackedGeometry, ObjectClassification) == 280, "Offset mismatch for UARTrackedGeometry::ObjectClassification");
static_assert(offsetof(UARTrackedGeometry, SpatialMeshUsageFlags) == 281, "Offset mismatch for UARTrackedGeometry::SpatialMeshUsageFlags");
static_assert(offsetof(UARTrackedGeometry, LastUpdateFrameNumber) == 304, "Offset mismatch for UARTrackedGeometry::LastUpdateFrameNumber");
static_assert(offsetof(UARTrackedGeometry, DebugName) == 320, "Offset mismatch for UARTrackedGeometry::DebugName");

// /Script/AugmentedReality.ARTrackedImage
// Kind: Class; super: ARTrackedGeometry
class UARTrackedImage
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    void* DetectedImage; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EstimatedSize[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARTrackedImage, DetectedImage) == 352, "Offset mismatch for UARTrackedImage::DetectedImage");
static_assert(offsetof(UARTrackedImage, EstimatedSize) == 360, "Offset mismatch for UARTrackedImage::EstimatedSize");

// /Script/AugmentedReality.ARTrackedObject
// Kind: Class; super: ARTrackedGeometry
class UARTrackedObject
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    void* DetectedObject; // 0x0160 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UARTrackedObject, DetectedObject) == 352, "Offset mismatch for UARTrackedObject::DetectedObject");

// /Script/AugmentedReality.ARTrackedPoint
// Kind: Class; super: ARTrackedGeometry
class UARTrackedPoint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UniqueID[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalToTrackingTransform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalToAlignedTrackingTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackingState; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0101
    void* UnderlyingMesh; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectClassification; // 0x0118 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpatialMeshUsageFlags; // 0x0119 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x011A
    std::int32_t LastUpdateFrameNumber; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0134
    FName DebugName; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UARTrackedPoint, UniqueID) == 40, "Offset mismatch for UARTrackedPoint::UniqueID");
static_assert(offsetof(UARTrackedPoint, LocalToTrackingTransform) == 64, "Offset mismatch for UARTrackedPoint::LocalToTrackingTransform");
static_assert(offsetof(UARTrackedPoint, LocalToAlignedTrackingTransform) == 160, "Offset mismatch for UARTrackedPoint::LocalToAlignedTrackingTransform");
static_assert(offsetof(UARTrackedPoint, TrackingState) == 256, "Offset mismatch for UARTrackedPoint::TrackingState");
static_assert(offsetof(UARTrackedPoint, UnderlyingMesh) == 272, "Offset mismatch for UARTrackedPoint::UnderlyingMesh");
static_assert(offsetof(UARTrackedPoint, ObjectClassification) == 280, "Offset mismatch for UARTrackedPoint::ObjectClassification");
static_assert(offsetof(UARTrackedPoint, SpatialMeshUsageFlags) == 281, "Offset mismatch for UARTrackedPoint::SpatialMeshUsageFlags");
static_assert(offsetof(UARTrackedPoint, LastUpdateFrameNumber) == 304, "Offset mismatch for UARTrackedPoint::LastUpdateFrameNumber");
static_assert(offsetof(UARTrackedPoint, DebugName) == 320, "Offset mismatch for UARTrackedPoint::DebugName");

// /Script/AugmentedReality.ARTrackedPose
// Kind: Class; super: ARTrackedGeometry
class UARTrackedPose
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t TrackedPose[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UARTrackedPose, TrackedPose) == 352, "Offset mismatch for UARTrackedPose::TrackedPose");

// /Script/AugmentedReality.ARTrackedQRCode
// Kind: Class; super: ARTrackedImage
class UARTrackedQRCode
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    FString QRCode; // 0x0180 (Size: 0x10, Type: StrProperty)
    std::int32_t Version; // 0x0190 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UARTrackedQRCode, QRCode) == 384, "Offset mismatch for UARTrackedQRCode::QRCode");
static_assert(offsetof(UARTrackedQRCode, Version) == 400, "Offset mismatch for UARTrackedQRCode::Version");

// /Script/AugmentedReality.ARTypesDummyClass
// Kind: Class; super: Object
class UARTypesDummyClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
// Kind: Class; super: ARBaseAsyncTaskBlueprintProxy
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, OnSuccess) == 80, "Offset mismatch for UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy, OnFailed) == 96, "Offset mismatch for UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::OnFailed");

// /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
// Kind: Class; super: ARBaseAsyncTaskBlueprintProxy
class UGetGeoLocationAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGetGeoLocationAsyncTaskBlueprintProxy, OnSuccess) == 80, "Offset mismatch for UGetGeoLocationAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UGetGeoLocationAsyncTaskBlueprintProxy, OnFailed) == 96, "Offset mismatch for UGetGeoLocationAsyncTaskBlueprintProxy::OnFailed");
