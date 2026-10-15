/**
 * decamp dumper generated SDK
 * Package: /Script/VerseCamera
 */
#pragma once
#include "Basic.h"

// /Script/VerseCamera.CameraEntityAttachmentInfo
// Kind: ScriptStruct; super: none
struct FCameraEntityAttachmentInfo
{
public:
    void* Entity; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float Weight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraEntityAttachmentInfo, Entity) == 0, "Offset mismatch for FCameraEntityAttachmentInfo::Entity");
static_assert(offsetof(FCameraEntityAttachmentInfo, Weight) == 8, "Offset mismatch for FCameraEntityAttachmentInfo::Weight");

// /Script/VerseCamera.CameraEntityTargetInfo
// Kind: ScriptStruct; super: none
struct FCameraEntityTargetInfo
{
public:
    TWeakObjectPtr<void> Entity; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SocketName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetShape; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float TargetSize; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Weight; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCameraEntityTargetInfo, Entity) == 0, "Offset mismatch for FCameraEntityTargetInfo::Entity");
static_assert(offsetof(FCameraEntityTargetInfo, SocketName) == 8, "Offset mismatch for FCameraEntityTargetInfo::SocketName");
static_assert(offsetof(FCameraEntityTargetInfo, BoneName) == 12, "Offset mismatch for FCameraEntityTargetInfo::BoneName");
static_assert(offsetof(FCameraEntityTargetInfo, TargetShape) == 16, "Offset mismatch for FCameraEntityTargetInfo::TargetShape");
static_assert(offsetof(FCameraEntityTargetInfo, TargetSize) == 20, "Offset mismatch for FCameraEntityTargetInfo::TargetSize");
static_assert(offsetof(FCameraEntityTargetInfo, Weight) == 24, "Offset mismatch for FCameraEntityTargetInfo::Weight");

// /Script/VerseCamera.AttachToSceneGraphEntityCameraNode
// Kind: Class; super: CameraNode
class UAttachToSceneGraphEntityCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Attachment[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t AttachmentDataID[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t AttachToLocation[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t AttachToRotation[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAttachToSceneGraphEntityCameraNode, Attachment) == 56, "Offset mismatch for UAttachToSceneGraphEntityCameraNode::Attachment");
static_assert(offsetof(UAttachToSceneGraphEntityCameraNode, AttachmentDataID) == 72, "Offset mismatch for UAttachToSceneGraphEntityCameraNode::AttachmentDataID");
static_assert(offsetof(UAttachToSceneGraphEntityCameraNode, AttachToLocation) == 80, "Offset mismatch for UAttachToSceneGraphEntityCameraNode::AttachToLocation");
static_assert(offsetof(UAttachToSceneGraphEntityCameraNode, AttachToRotation) == 96, "Offset mismatch for UAttachToSceneGraphEntityCameraNode::AttachToRotation");

// /Script/VerseCamera.CameraEntityProxyActor
// Kind: Class; super: Actor
class UCameraEntityProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* ProxyMeshComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DrawFrustum; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCameraEntityProxyActor, ProxyMeshComponent) == 632, "Offset mismatch for UCameraEntityProxyActor::ProxyMeshComponent");
static_assert(offsetof(UCameraEntityProxyActor, DrawFrustum) == 640, "Offset mismatch for UCameraEntityProxyActor::DrawFrustum");

// /Script/VerseCamera.DollyFramingSceneGraphEntityCameraNode
// Kind: Class; super: DollyFramingCameraNode
class UDollyFramingSceneGraphEntityCameraNode
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    TArray<void*> EntityTargetInfos; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EntityTargetInfosDataID[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDollyFramingSceneGraphEntityCameraNode, EntityTargetInfos) == 416, "Offset mismatch for UDollyFramingSceneGraphEntityCameraNode::EntityTargetInfos");
static_assert(offsetof(UDollyFramingSceneGraphEntityCameraNode, EntityTargetInfosDataID) == 432, "Offset mismatch for UDollyFramingSceneGraphEntityCameraNode::EntityTargetInfosDataID");

// /Script/VerseCamera.NativeCameraRigCameraModifierNode
// Kind: Class; super: CameraNode
class UNativeCameraRigCameraModifierNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNativeCameraRigCameraModifierNode, InnerNode) == 56, "Offset mismatch for UNativeCameraRigCameraModifierNode::InnerNode");

// /Script/VerseCamera.PanningFramingSceneGraphEntityCameraNode
// Kind: Class; super: PanningFramingCameraNode
class UPanningFramingSceneGraphEntityCameraNode
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    TArray<void*> EntityTargetInfos; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EntityTargetInfosDataID[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPanningFramingSceneGraphEntityCameraNode, EntityTargetInfos) == 416, "Offset mismatch for UPanningFramingSceneGraphEntityCameraNode::EntityTargetInfos");
static_assert(offsetof(UPanningFramingSceneGraphEntityCameraNode, EntityTargetInfosDataID) == 432, "Offset mismatch for UPanningFramingSceneGraphEntityCameraNode::EntityTargetInfosDataID");

// /Script/VerseCamera.SceneGraphCameraDirectorLocatorComponent
// Kind: Class; super: ActorComponent
class USceneGraphCameraDirectorLocatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CameraDirector; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USceneGraphCameraDirectorLocatorComponent, CameraDirector) == 192, "Offset mismatch for USceneGraphCameraDirectorLocatorComponent::CameraDirector");

// /Script/VerseCamera.VerseCameraDirector
// Kind: Class; super: CameraDirector
class UVerseCameraDirector
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CameraRigProxyRedirectTable[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRunInEditor; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* CameraRigProxyTable; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseCameraDirector, CameraRigProxyRedirectTable) == 40, "Offset mismatch for UVerseCameraDirector::CameraRigProxyRedirectTable");
static_assert(offsetof(UVerseCameraDirector, bRunInEditor) == 56, "Offset mismatch for UVerseCameraDirector::bRunInEditor");
static_assert(offsetof(UVerseCameraDirector, CameraRigProxyTable) == 64, "Offset mismatch for UVerseCameraDirector::CameraRigProxyTable");

// /Script/VerseCamera.VerseCameraModifierNode
// Kind: Class; super: CameraNode
class UVerseCameraModifierNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* NativeCameraRigNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CameraModifier; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UVerseCameraModifierNode, NativeCameraRigNode) == 56, "Offset mismatch for UVerseCameraModifierNode::NativeCameraRigNode");
static_assert(offsetof(UVerseCameraModifierNode, CameraModifier) == 64, "Offset mismatch for UVerseCameraModifierNode::CameraModifier");

// /Script/VerseCamera.VerseCameraModifierStackImpl
// Kind: Class; super: VerseModifierStackImpl
class UVerseCameraModifierStackImpl
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReplicatedEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseCameraModifierStackImpl, ReplicatedEntries) == 40, "Offset mismatch for UVerseCameraModifierStackImpl::ReplicatedEntries");

// /Script/VerseCamera.VerseDefaultCameraNode
// Kind: Class; super: CameraNode
class UVerseDefaultCameraNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseDefaultCameraNode, bIsEnabled) == 48, "Offset mismatch for UVerseDefaultCameraNode::bIsEnabled");

// /Script/VerseCamera.VerseSingleCameraDirector
// Kind: Class; super: CameraDirector
class UVerseSingleCameraDirector
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* CameraRig; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CameraRigLayer[0x1]; // 0x0050 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UVerseSingleCameraDirector, CameraRig) == 72, "Offset mismatch for UVerseSingleCameraDirector::CameraRig");
static_assert(offsetof(UVerseSingleCameraDirector, CameraRigLayer) == 80, "Offset mismatch for UVerseSingleCameraDirector::CameraRigLayer");
