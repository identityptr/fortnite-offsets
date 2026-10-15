/**
 * decamp dumper generated SDK
 * Package: /Script/EntityLevel
 */
#pragma once
#include "Basic.h"

// /Script/EntityLevel.EntityProxyActor
// Kind: Class; super: Actor
class UEntityProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* Entity; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0280
    void* LevelEntity; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* TransformComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0298
    void* DuplicatedEntity; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityProxyActor, Entity) == 632, "Offset mismatch for UEntityProxyActor::Entity");
static_assert(offsetof(UEntityProxyActor, LevelEntity) == 648, "Offset mismatch for UEntityProxyActor::LevelEntity");
static_assert(offsetof(UEntityProxyActor, TransformComponent) == 656, "Offset mismatch for UEntityProxyActor::TransformComponent");
static_assert(offsetof(UEntityProxyActor, DuplicatedEntity) == 680, "Offset mismatch for UEntityProxyActor::DuplicatedEntity");

// /Script/EntityLevel.EntityProxyActorComponent
// Kind: Class; super: ActorComponent
class UEntityProxyActorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* Entity; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* EntityComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntityProxyActorComponent, Entity) == 192, "Offset mismatch for UEntityProxyActorComponent::Entity");
static_assert(offsetof(UEntityProxyActorComponent, EntityComponent) == 200, "Offset mismatch for UEntityProxyActorComponent::EntityComponent");

// /Script/EntityLevel.EntitySceneComponent
// Kind: Class; super: PrimitiveComponent
class UEntitySceneComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* LevelEntity; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIgnoreAttachmentUponPaste; // 0x0578 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntitySceneComponent, LevelEntity) == 1392, "Offset mismatch for UEntitySceneComponent::LevelEntity");
static_assert(offsetof(UEntitySceneComponent, bIgnoreAttachmentUponPaste) == 1400, "Offset mismatch for UEntitySceneComponent::bIgnoreAttachmentUponPaste");

// /Script/EntityLevel.LevelEntity
// Kind: Class; super: Actor
class ULevelEntity
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* LevelEntity; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0288
    void* NotificationForwardingComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULevelEntity, LevelEntity) == 640, "Offset mismatch for ULevelEntity::LevelEntity");
static_assert(offsetof(ULevelEntity, NotificationForwardingComponent) == 656, "Offset mismatch for ULevelEntity::NotificationForwardingComponent");

// /Script/EntityLevel.LevelEntityForwardNotificationComponent
// Kind: Class; super: ActorComponent
class ULevelEntityForwardNotificationComponent
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

static_assert(offsetof(ULevelEntityForwardNotificationComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULevelEntityForwardNotificationComponent::PrimaryComponentTick");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, ComponentTags) == 104, "Offset mismatch for ULevelEntityForwardNotificationComponent::ComponentTags");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, AssetUserData) == 120, "Offset mismatch for ULevelEntityForwardNotificationComponent::AssetUserData");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULevelEntityForwardNotificationComponent::UCSSerializationIndex");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, bNetAddressable) == 152, "Offset mismatch for ULevelEntityForwardNotificationComponent::bNetAddressable");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, bAutoActivate) == 154, "Offset mismatch for ULevelEntityForwardNotificationComponent::bAutoActivate");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, bIsEditorOnly) == 155, "Offset mismatch for ULevelEntityForwardNotificationComponent::bIsEditorOnly");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, CreationMethod) == 185, "Offset mismatch for ULevelEntityForwardNotificationComponent::CreationMethod");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, OnComponentActivated) == 186, "Offset mismatch for ULevelEntityForwardNotificationComponent::OnComponentActivated");
static_assert(offsetof(ULevelEntityForwardNotificationComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULevelEntityForwardNotificationComponent::OnComponentDeactivated");

// /Script/EntityLevel.LevelEntitySceneComponent
// Kind: Class; super: SceneComponent
class ULevelEntitySceneComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> PhysicsVolume; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* AttachParent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    FName AttachSocketName; // 0x00D8 (Size: 0x8, Type: NameProperty)
    TArray<void*> AttachChildren; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientAttachedChildren; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0100
    std::uint8_t RelativeLocation[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeScale3D[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentVelocity[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteLocation; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    // 0x01A0 BoolProperty bAbsoluteRotation (shared storage)
    // 0x01A0 BoolProperty bAbsoluteScale (shared storage)
    // 0x01A0 BoolProperty bComponentToWorldUpdated (shared storage)
    // 0x01A0 BoolProperty bShouldBeAttached (shared storage)
    // 0x01A0 BoolProperty bShouldSnapLocationWhenAttached (shared storage)
    // 0x01A0 BoolProperty bVisible (shared storage)
    std::uint8_t bBoundsChangeTriggersStreamingDataRebuild; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    // 0x01A1 BoolProperty bComputeBoundsOnceForGame (shared storage)
    // 0x01A1 BoolProperty bComputeFastLocalBounds (shared storage)
    // 0x01A1 BoolProperty bHiddenInGame (shared storage)
    // 0x01A1 BoolProperty bShouldSnapRotationWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldSnapScaleWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldUpdatePhysicsVolume (shared storage)
    // 0x01A1 BoolProperty bUseAttachParentBound (shared storage)
    std::uint8_t bComputedBoundsOnceForGame; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    // 0x01A2 BoolProperty bIsNotRenderAttachmentRoot (shared storage)
    std::uint8_t Mobility; // 0x01A3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DetailMode; // 0x01A4 (Size: 0x1, Type: ByteProperty)
    FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x01A5 (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(ULevelEntitySceneComponent, PhysicsVolume) == 200, "Offset mismatch for ULevelEntitySceneComponent::PhysicsVolume");
static_assert(offsetof(ULevelEntitySceneComponent, AttachParent) == 208, "Offset mismatch for ULevelEntitySceneComponent::AttachParent");
static_assert(offsetof(ULevelEntitySceneComponent, AttachSocketName) == 216, "Offset mismatch for ULevelEntitySceneComponent::AttachSocketName");
static_assert(offsetof(ULevelEntitySceneComponent, AttachChildren) == 224, "Offset mismatch for ULevelEntitySceneComponent::AttachChildren");
static_assert(offsetof(ULevelEntitySceneComponent, ClientAttachedChildren) == 240, "Offset mismatch for ULevelEntitySceneComponent::ClientAttachedChildren");
static_assert(offsetof(ULevelEntitySceneComponent, RelativeLocation) == 320, "Offset mismatch for ULevelEntitySceneComponent::RelativeLocation");
static_assert(offsetof(ULevelEntitySceneComponent, RelativeRotation) == 344, "Offset mismatch for ULevelEntitySceneComponent::RelativeRotation");
static_assert(offsetof(ULevelEntitySceneComponent, RelativeScale3D) == 368, "Offset mismatch for ULevelEntitySceneComponent::RelativeScale3D");
static_assert(offsetof(ULevelEntitySceneComponent, ComponentVelocity) == 392, "Offset mismatch for ULevelEntitySceneComponent::ComponentVelocity");
static_assert(offsetof(ULevelEntitySceneComponent, bAbsoluteLocation) == 416, "Offset mismatch for ULevelEntitySceneComponent::bAbsoluteLocation");
static_assert(offsetof(ULevelEntitySceneComponent, bBoundsChangeTriggersStreamingDataRebuild) == 417, "Offset mismatch for ULevelEntitySceneComponent::bBoundsChangeTriggersStreamingDataRebuild");
static_assert(offsetof(ULevelEntitySceneComponent, bComputedBoundsOnceForGame) == 418, "Offset mismatch for ULevelEntitySceneComponent::bComputedBoundsOnceForGame");
static_assert(offsetof(ULevelEntitySceneComponent, Mobility) == 419, "Offset mismatch for ULevelEntitySceneComponent::Mobility");
static_assert(offsetof(ULevelEntitySceneComponent, DetailMode) == 420, "Offset mismatch for ULevelEntitySceneComponent::DetailMode");
static_assert(offsetof(ULevelEntitySceneComponent, PhysicsVolumeChangedDelegate) == 421, "Offset mismatch for ULevelEntitySceneComponent::PhysicsVolumeChangedDelegate");

// /Script/EntityLevel.SceneGraphSettings
// Kind: Class; super: Object
class USceneGraphSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AllowedSceneGraphDomainsForAnalytics; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkipSceneGraphEntitiesForAnalytics; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkipSceneGraphComponentsForAnalytics; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USceneGraphSettings, AllowedSceneGraphDomainsForAnalytics) == 40, "Offset mismatch for USceneGraphSettings::AllowedSceneGraphDomainsForAnalytics");
static_assert(offsetof(USceneGraphSettings, SkipSceneGraphEntitiesForAnalytics) == 56, "Offset mismatch for USceneGraphSettings::SkipSceneGraphEntitiesForAnalytics");
static_assert(offsetof(USceneGraphSettings, SkipSceneGraphComponentsForAnalytics) == 72, "Offset mismatch for USceneGraphSettings::SkipSceneGraphComponentsForAnalytics");
