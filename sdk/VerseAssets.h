/**
 * decamp dumper generated SDK
 * Package: /Script/VerseAssets
 */
#pragma once
#include "Basic.h"

// /Script/VerseAssets.MeshPartAssetAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetAssociation
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> BodyAssociations; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Interfaces; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PhysicsBodyAssociations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PhysicsShapeAssociations; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SocketAssociations; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialAssociations; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InterfaceNames; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMeshPartAssetAssociation, Name) == 0, "Offset mismatch for FMeshPartAssetAssociation::Name");
static_assert(offsetof(FMeshPartAssetAssociation, BodyAssociations) == 8, "Offset mismatch for FMeshPartAssetAssociation::BodyAssociations");
static_assert(offsetof(FMeshPartAssetAssociation, Interfaces) == 24, "Offset mismatch for FMeshPartAssetAssociation::Interfaces");
static_assert(offsetof(FMeshPartAssetAssociation, PhysicsBodyAssociations) == 40, "Offset mismatch for FMeshPartAssetAssociation::PhysicsBodyAssociations");
static_assert(offsetof(FMeshPartAssetAssociation, PhysicsShapeAssociations) == 56, "Offset mismatch for FMeshPartAssetAssociation::PhysicsShapeAssociations");
static_assert(offsetof(FMeshPartAssetAssociation, SocketAssociations) == 72, "Offset mismatch for FMeshPartAssetAssociation::SocketAssociations");
static_assert(offsetof(FMeshPartAssetAssociation, MaterialAssociations) == 88, "Offset mismatch for FMeshPartAssetAssociation::MaterialAssociations");
static_assert(offsetof(FMeshPartAssetAssociation, InterfaceNames) == 104, "Offset mismatch for FMeshPartAssetAssociation::InterfaceNames");

// /Script/VerseAssets.MeshPartAssetBodyAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetBodyAssociation
{
public:
    std::int32_t BodyIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ShapeIndices; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    FName BodyName; // 0x0018 (Size: 0x8, Type: NameProperty)
    TArray<void*> ShapeNames; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMeshPartAssetBodyAssociation, BodyIndex) == 0, "Offset mismatch for FMeshPartAssetBodyAssociation::BodyIndex");
static_assert(offsetof(FMeshPartAssetBodyAssociation, ShapeIndices) == 8, "Offset mismatch for FMeshPartAssetBodyAssociation::ShapeIndices");
static_assert(offsetof(FMeshPartAssetBodyAssociation, BodyName) == 24, "Offset mismatch for FMeshPartAssetBodyAssociation::BodyName");
static_assert(offsetof(FMeshPartAssetBodyAssociation, ShapeNames) == 32, "Offset mismatch for FMeshPartAssetBodyAssociation::ShapeNames");

// /Script/VerseAssets.MeshPartAssetMaterialAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetMaterialAssociation
{
public:
    FName MaterialSlotName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMeshPartAssetMaterialAssociation, MaterialSlotName) == 0, "Offset mismatch for FMeshPartAssetMaterialAssociation::MaterialSlotName");

// /Script/VerseAssets.MeshPartAssetPhysicsBodyAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetPhysicsBodyAssociation
{
public:
    std::uint8_t BodyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t BodyIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMeshPartAssetPhysicsBodyAssociation, BodyName) == 0, "Offset mismatch for FMeshPartAssetPhysicsBodyAssociation::BodyName");
static_assert(offsetof(FMeshPartAssetPhysicsBodyAssociation, BodyIndex) == 4, "Offset mismatch for FMeshPartAssetPhysicsBodyAssociation::BodyIndex");

// /Script/VerseAssets.MeshPartAssetPhysicsShapeAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetPhysicsShapeAssociation
{
public:
    std::uint8_t BodyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShapeName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t BodyIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ShapeIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMeshPartAssetPhysicsShapeAssociation, BodyName) == 0, "Offset mismatch for FMeshPartAssetPhysicsShapeAssociation::BodyName");
static_assert(offsetof(FMeshPartAssetPhysicsShapeAssociation, ShapeName) == 4, "Offset mismatch for FMeshPartAssetPhysicsShapeAssociation::ShapeName");
static_assert(offsetof(FMeshPartAssetPhysicsShapeAssociation, BodyIndex) == 8, "Offset mismatch for FMeshPartAssetPhysicsShapeAssociation::BodyIndex");
static_assert(offsetof(FMeshPartAssetPhysicsShapeAssociation, ShapeIndex) == 12, "Offset mismatch for FMeshPartAssetPhysicsShapeAssociation::ShapeIndex");

// /Script/VerseAssets.MeshPartAssetSocketAssociation
// Kind: ScriptStruct; super: none
struct FMeshPartAssetSocketAssociation
{
public:
    FName SocketName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMeshPartAssetSocketAssociation, SocketName) == 0, "Offset mismatch for FMeshPartAssetSocketAssociation::SocketName");

// /Script/VerseAssets.ParticleDataChannelReplicationPayload
// Kind: ScriptStruct; super: none
struct FParticleDataChannelReplicationPayload
{
public:
    void* DataChannelAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Payload[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FParticleDataChannelReplicationPayload, DataChannelAsset) == 0, "Offset mismatch for FParticleDataChannelReplicationPayload::DataChannelAsset");
static_assert(offsetof(FParticleDataChannelReplicationPayload, Payload) == 8, "Offset mismatch for FParticleDataChannelReplicationPayload::Payload");

// /Script/VerseAssets.PropertyInterfaceKey
// Kind: ScriptStruct; super: none
struct FPropertyInterfaceKey
{
public:
    std::int64_t ID; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FPropertyInterfaceKey, ID) == 0, "Offset mismatch for FPropertyInterfaceKey::ID");

// /Script/VerseAssets.PropertyInterfaceMessageReplicatorArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FPropertyInterfaceMessageReplicatorArray
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Items; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPropertyInterfaceMessageReplicatorArray, Items) == 80, "Offset mismatch for FPropertyInterfaceMessageReplicatorArray::Items");

// /Script/VerseAssets.PropertyInterfaceMessageReplicatorItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FPropertyInterfaceMessageReplicatorItem
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t PropertyName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::int32_t ArrayIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t Message[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPropertyInterfaceMessageReplicatorItem, PropertyName) == 12, "Offset mismatch for FPropertyInterfaceMessageReplicatorItem::PropertyName");
static_assert(offsetof(FPropertyInterfaceMessageReplicatorItem, ArrayIndex) == 16, "Offset mismatch for FPropertyInterfaceMessageReplicatorItem::ArrayIndex");
static_assert(offsetof(FPropertyInterfaceMessageReplicatorItem, Message) == 24, "Offset mismatch for FPropertyInterfaceMessageReplicatorItem::Message");

// /Script/VerseAssets.PropertyInterface_EventParameter
// Kind: ScriptStruct; super: none
struct FPropertyInterface_EventParameter
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPropertyInterface_EventParameter, Type) == 0, "Offset mismatch for FPropertyInterface_EventParameter::Type");

// /Script/VerseAssets.PropertyInterface_VariableProperties
// Kind: ScriptStruct; super: none
struct FPropertyInterface_VariableProperties
{
public:
    std::uint8_t BooleanProperty; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::int64_t IntegerProperty; // 0x0008 (Size: 0x8, Type: Int64Property)
    double FloatingProperty; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    FString StringProperty; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t MessageProperty[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssetProperty[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    void* ObjectProperty; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPropertyInterface_VariableProperties, BooleanProperty) == 0, "Offset mismatch for FPropertyInterface_VariableProperties::BooleanProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, IntegerProperty) == 8, "Offset mismatch for FPropertyInterface_VariableProperties::IntegerProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, FloatingProperty) == 16, "Offset mismatch for FPropertyInterface_VariableProperties::FloatingProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, StringProperty) == 24, "Offset mismatch for FPropertyInterface_VariableProperties::StringProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, MessageProperty) == 40, "Offset mismatch for FPropertyInterface_VariableProperties::MessageProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, AssetProperty) == 56, "Offset mismatch for FPropertyInterface_VariableProperties::AssetProperty");
static_assert(offsetof(FPropertyInterface_VariableProperties, ObjectProperty) == 88, "Offset mismatch for FPropertyInterface_VariableProperties::ObjectProperty");

// /Script/VerseAssets.PropertyInterface_VariableTag
// Kind: ScriptStruct; super: none
struct FPropertyInterface_VariableTag
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t InternalName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName FullyQualifiedName; // 0x0008 (Size: 0x8, Type: NameProperty)
    FString Description; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Type; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    FString TypeUE5Class; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t VisibilityAccess[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t WriteAccess[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    FString DefaultValue; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString ToolTip; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDefaultValueSet; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsArray; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsConst; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSubscribable; // 0x0063 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOwnedByInterface; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0065
    TArray<void*> EventParameters; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPropertyInterface_VariableTag, Name) == 0, "Offset mismatch for FPropertyInterface_VariableTag::Name");
static_assert(offsetof(FPropertyInterface_VariableTag, InternalName) == 4, "Offset mismatch for FPropertyInterface_VariableTag::InternalName");
static_assert(offsetof(FPropertyInterface_VariableTag, FullyQualifiedName) == 8, "Offset mismatch for FPropertyInterface_VariableTag::FullyQualifiedName");
static_assert(offsetof(FPropertyInterface_VariableTag, Description) == 16, "Offset mismatch for FPropertyInterface_VariableTag::Description");
static_assert(offsetof(FPropertyInterface_VariableTag, Type) == 32, "Offset mismatch for FPropertyInterface_VariableTag::Type");
static_assert(offsetof(FPropertyInterface_VariableTag, TypeUE5Class) == 40, "Offset mismatch for FPropertyInterface_VariableTag::TypeUE5Class");
static_assert(offsetof(FPropertyInterface_VariableTag, VisibilityAccess) == 56, "Offset mismatch for FPropertyInterface_VariableTag::VisibilityAccess");
static_assert(offsetof(FPropertyInterface_VariableTag, WriteAccess) == 60, "Offset mismatch for FPropertyInterface_VariableTag::WriteAccess");
static_assert(offsetof(FPropertyInterface_VariableTag, DefaultValue) == 64, "Offset mismatch for FPropertyInterface_VariableTag::DefaultValue");
static_assert(offsetof(FPropertyInterface_VariableTag, ToolTip) == 80, "Offset mismatch for FPropertyInterface_VariableTag::ToolTip");
static_assert(offsetof(FPropertyInterface_VariableTag, bDefaultValueSet) == 96, "Offset mismatch for FPropertyInterface_VariableTag::bDefaultValueSet");
static_assert(offsetof(FPropertyInterface_VariableTag, bIsArray) == 97, "Offset mismatch for FPropertyInterface_VariableTag::bIsArray");
static_assert(offsetof(FPropertyInterface_VariableTag, bIsConst) == 98, "Offset mismatch for FPropertyInterface_VariableTag::bIsConst");
static_assert(offsetof(FPropertyInterface_VariableTag, bIsSubscribable) == 99, "Offset mismatch for FPropertyInterface_VariableTag::bIsSubscribable");
static_assert(offsetof(FPropertyInterface_VariableTag, bIsOwnedByInterface) == 100, "Offset mismatch for FPropertyInterface_VariableTag::bIsOwnedByInterface");
static_assert(offsetof(FPropertyInterface_VariableTag, EventParameters) == 104, "Offset mismatch for FPropertyInterface_VariableTag::EventParameters");

// /Script/VerseAssets.Default__PropertyInterfaceGeneratedClass
// Kind: PropertyInterfaceGeneratedClass; super: none
class UDefault_PropertyInterfaceGeneratedClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseAssets.MeshPartAssetUserData
// Kind: Class; super: AssetUserData
class UMeshPartAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MeshPartAssetAssociations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshPartAssetUserData, MeshPartAssetAssociations) == 40, "Offset mismatch for UMeshPartAssetUserData::MeshPartAssetAssociations");

// /Script/VerseAssets.ParameterizePropertyInterfaceBase
// Kind: Class; super: Object
class UParameterizePropertyInterfaceBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MessageReplicatorArray[0x60]; // 0x0028 (Size: 0x60, Type: StructProperty)
    std::uint8_t Key[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t AuthoritativeKey[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UParameterizePropertyInterfaceBase, MessageReplicatorArray) == 40, "Offset mismatch for UParameterizePropertyInterfaceBase::MessageReplicatorArray");
static_assert(offsetof(UParameterizePropertyInterfaceBase, Key) == 136, "Offset mismatch for UParameterizePropertyInterfaceBase::Key");
static_assert(offsetof(UParameterizePropertyInterfaceBase, AuthoritativeKey) == 144, "Offset mismatch for UParameterizePropertyInterfaceBase::AuthoritativeKey");

// /Script/VerseAssets.ParticleDataChannelReplication
// Kind: Class; super: Actor
class UParticleDataChannelReplication
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

static_assert(offsetof(UParticleDataChannelReplication, PrimaryActorTick) == 40, "Offset mismatch for UParticleDataChannelReplication::PrimaryActorTick");
static_assert(offsetof(UParticleDataChannelReplication, bAlwaysRelevant) == 88, "Offset mismatch for UParticleDataChannelReplication::bAlwaysRelevant");
static_assert(offsetof(UParticleDataChannelReplication, bExchangedRoles) == 89, "Offset mismatch for UParticleDataChannelReplication::bExchangedRoles");
static_assert(offsetof(UParticleDataChannelReplication, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UParticleDataChannelReplication::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UParticleDataChannelReplication, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UParticleDataChannelReplication::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UParticleDataChannelReplication, bActorEnableCollision) == 93, "Offset mismatch for UParticleDataChannelReplication::bActorEnableCollision");
static_assert(offsetof(UParticleDataChannelReplication, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UParticleDataChannelReplication::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UParticleDataChannelReplication, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UParticleDataChannelReplication::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UParticleDataChannelReplication, RemoteRole) == 96, "Offset mismatch for UParticleDataChannelReplication::RemoteRole");
static_assert(offsetof(UParticleDataChannelReplication, InitialLifeSpan) == 100, "Offset mismatch for UParticleDataChannelReplication::InitialLifeSpan");
static_assert(offsetof(UParticleDataChannelReplication, CustomTimeDilation) == 104, "Offset mismatch for UParticleDataChannelReplication::CustomTimeDilation");
static_assert(offsetof(UParticleDataChannelReplication, RayTracingGroupId) == 108, "Offset mismatch for UParticleDataChannelReplication::RayTracingGroupId");
static_assert(offsetof(UParticleDataChannelReplication, AttachmentReplication) == 112, "Offset mismatch for UParticleDataChannelReplication::AttachmentReplication");
static_assert(offsetof(UParticleDataChannelReplication, ReplicatedMovement) == 208, "Offset mismatch for UParticleDataChannelReplication::ReplicatedMovement");
static_assert(offsetof(UParticleDataChannelReplication, Owner) == 344, "Offset mismatch for UParticleDataChannelReplication::Owner");
static_assert(offsetof(UParticleDataChannelReplication, NetDriverName) == 352, "Offset mismatch for UParticleDataChannelReplication::NetDriverName");
static_assert(offsetof(UParticleDataChannelReplication, Role) == 356, "Offset mismatch for UParticleDataChannelReplication::Role");
static_assert(offsetof(UParticleDataChannelReplication, NetDormancy) == 357, "Offset mismatch for UParticleDataChannelReplication::NetDormancy");
static_assert(offsetof(UParticleDataChannelReplication, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UParticleDataChannelReplication::SpawnCollisionHandlingMethod");
static_assert(offsetof(UParticleDataChannelReplication, AutoReceiveInput) == 359, "Offset mismatch for UParticleDataChannelReplication::AutoReceiveInput");
static_assert(offsetof(UParticleDataChannelReplication, InputPriority) == 360, "Offset mismatch for UParticleDataChannelReplication::InputPriority");
static_assert(offsetof(UParticleDataChannelReplication, InputComponent) == 368, "Offset mismatch for UParticleDataChannelReplication::InputComponent");
static_assert(offsetof(UParticleDataChannelReplication, NetTag) == 376, "Offset mismatch for UParticleDataChannelReplication::NetTag");
static_assert(offsetof(UParticleDataChannelReplication, NetCullDistanceSquared) == 380, "Offset mismatch for UParticleDataChannelReplication::NetCullDistanceSquared");
static_assert(offsetof(UParticleDataChannelReplication, NetUpdateFrequency) == 384, "Offset mismatch for UParticleDataChannelReplication::NetUpdateFrequency");
static_assert(offsetof(UParticleDataChannelReplication, MinNetUpdateFrequency) == 388, "Offset mismatch for UParticleDataChannelReplication::MinNetUpdateFrequency");
static_assert(offsetof(UParticleDataChannelReplication, NetPriority) == 392, "Offset mismatch for UParticleDataChannelReplication::NetPriority");
static_assert(offsetof(UParticleDataChannelReplication, PhysicsReplicationMode) == 396, "Offset mismatch for UParticleDataChannelReplication::PhysicsReplicationMode");
static_assert(offsetof(UParticleDataChannelReplication, Instigator) == 408, "Offset mismatch for UParticleDataChannelReplication::Instigator");
static_assert(offsetof(UParticleDataChannelReplication, Children) == 416, "Offset mismatch for UParticleDataChannelReplication::Children");
static_assert(offsetof(UParticleDataChannelReplication, RootComponent) == 432, "Offset mismatch for UParticleDataChannelReplication::RootComponent");
static_assert(offsetof(UParticleDataChannelReplication, HLODLayer) == 448, "Offset mismatch for UParticleDataChannelReplication::HLODLayer");
static_assert(offsetof(UParticleDataChannelReplication, Layers) == 456, "Offset mismatch for UParticleDataChannelReplication::Layers");
static_assert(offsetof(UParticleDataChannelReplication, ParentComponent) == 472, "Offset mismatch for UParticleDataChannelReplication::ParentComponent");
static_assert(offsetof(UParticleDataChannelReplication, Tags) == 496, "Offset mismatch for UParticleDataChannelReplication::Tags");
static_assert(offsetof(UParticleDataChannelReplication, OnTakeAnyDamage) == 512, "Offset mismatch for UParticleDataChannelReplication::OnTakeAnyDamage");
static_assert(offsetof(UParticleDataChannelReplication, OnTakePointDamage) == 513, "Offset mismatch for UParticleDataChannelReplication::OnTakePointDamage");
static_assert(offsetof(UParticleDataChannelReplication, OnTakeRadialDamage) == 514, "Offset mismatch for UParticleDataChannelReplication::OnTakeRadialDamage");
static_assert(offsetof(UParticleDataChannelReplication, OnActorBeginOverlap) == 515, "Offset mismatch for UParticleDataChannelReplication::OnActorBeginOverlap");
static_assert(offsetof(UParticleDataChannelReplication, OnActorEndOverlap) == 516, "Offset mismatch for UParticleDataChannelReplication::OnActorEndOverlap");
static_assert(offsetof(UParticleDataChannelReplication, OnBeginCursorOver) == 517, "Offset mismatch for UParticleDataChannelReplication::OnBeginCursorOver");
static_assert(offsetof(UParticleDataChannelReplication, OnEndCursorOver) == 518, "Offset mismatch for UParticleDataChannelReplication::OnEndCursorOver");
static_assert(offsetof(UParticleDataChannelReplication, OnClicked) == 519, "Offset mismatch for UParticleDataChannelReplication::OnClicked");
static_assert(offsetof(UParticleDataChannelReplication, OnReleased) == 520, "Offset mismatch for UParticleDataChannelReplication::OnReleased");
static_assert(offsetof(UParticleDataChannelReplication, OnInputTouchBegin) == 521, "Offset mismatch for UParticleDataChannelReplication::OnInputTouchBegin");
static_assert(offsetof(UParticleDataChannelReplication, OnInputTouchEnd) == 522, "Offset mismatch for UParticleDataChannelReplication::OnInputTouchEnd");
static_assert(offsetof(UParticleDataChannelReplication, OnInputTouchEnter) == 523, "Offset mismatch for UParticleDataChannelReplication::OnInputTouchEnter");
static_assert(offsetof(UParticleDataChannelReplication, OnInputTouchLeave) == 524, "Offset mismatch for UParticleDataChannelReplication::OnInputTouchLeave");
static_assert(offsetof(UParticleDataChannelReplication, OnActorHit) == 525, "Offset mismatch for UParticleDataChannelReplication::OnActorHit");
static_assert(offsetof(UParticleDataChannelReplication, OnDestroyed) == 526, "Offset mismatch for UParticleDataChannelReplication::OnDestroyed");
static_assert(offsetof(UParticleDataChannelReplication, OnEndPlay) == 527, "Offset mismatch for UParticleDataChannelReplication::OnEndPlay");
static_assert(offsetof(UParticleDataChannelReplication, InstanceComponents) == 592, "Offset mismatch for UParticleDataChannelReplication::InstanceComponents");
static_assert(offsetof(UParticleDataChannelReplication, BlueprintCreatedComponents) == 608, "Offset mismatch for UParticleDataChannelReplication::BlueprintCreatedComponents");

// /Script/VerseAssets.PropertyInterface
// Kind: Class; super: Object
class UPropertyInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseAssets.PropertyInterfaceBoolValue
// Kind: Class; super: PropertyInterfaceValueBase
class UPropertyInterfaceBoolValue
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Value; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPropertyInterfaceBoolValue, Value) == 64, "Offset mismatch for UPropertyInterfaceBoolValue::Value");

// /Script/VerseAssets.PropertyInterfaceDoubleValue
// Kind: Class; super: PropertyInterfaceValueBase
class UPropertyInterfaceDoubleValue
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    double Value; // 0x0040 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPropertyInterfaceDoubleValue, Value) == 64, "Offset mismatch for UPropertyInterfaceDoubleValue::Value");

// /Script/VerseAssets.PropertyInterfaceGeneratedClass
// Kind: Class; super: BlueprintGeneratedClass
class UPropertyInterfaceGeneratedClass
{
public:
    std::uint8_t Pad_0000[0x1A8]; // 0x0000
    std::int32_t NumReplicatedProperties; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasCookedComponentInstancingData; // 0x01AC (Size: 0x1, Type: BoolProperty)
    // 0x01AC BoolProperty bIsNativePropertyInitFastPathDisabled (shared storage)
    // 0x01AC BoolProperty bSupportsDynamicInstancedReference (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x01AD
    TArray<void*> DynamicBindingObjects; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentTemplates; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FieldNotifies; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0200
    void* SimpleConstructionScript; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* InheritableComponentHandler; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0218
    void* UberGraphFunction; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CookedPropertyGuids; // 0x0228 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CookedComponentInstancingData; // 0x0238 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPropertyInterfaceGeneratedClass, NumReplicatedProperties) == 424, "Offset mismatch for UPropertyInterfaceGeneratedClass::NumReplicatedProperties");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, bHasCookedComponentInstancingData) == 428, "Offset mismatch for UPropertyInterfaceGeneratedClass::bHasCookedComponentInstancingData");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, DynamicBindingObjects) == 432, "Offset mismatch for UPropertyInterfaceGeneratedClass::DynamicBindingObjects");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, ComponentTemplates) == 448, "Offset mismatch for UPropertyInterfaceGeneratedClass::ComponentTemplates");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, Timelines) == 464, "Offset mismatch for UPropertyInterfaceGeneratedClass::Timelines");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, ComponentClassOverrides) == 480, "Offset mismatch for UPropertyInterfaceGeneratedClass::ComponentClassOverrides");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, FieldNotifies) == 496, "Offset mismatch for UPropertyInterfaceGeneratedClass::FieldNotifies");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, SimpleConstructionScript) == 520, "Offset mismatch for UPropertyInterfaceGeneratedClass::SimpleConstructionScript");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, InheritableComponentHandler) == 528, "Offset mismatch for UPropertyInterfaceGeneratedClass::InheritableComponentHandler");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, UberGraphFunction) == 544, "Offset mismatch for UPropertyInterfaceGeneratedClass::UberGraphFunction");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, CookedPropertyGuids) == 552, "Offset mismatch for UPropertyInterfaceGeneratedClass::CookedPropertyGuids");
static_assert(offsetof(UPropertyInterfaceGeneratedClass, CookedComponentInstancingData) == 568, "Offset mismatch for UPropertyInterfaceGeneratedClass::CookedComponentInstancingData");

// /Script/VerseAssets.PropertyInterfaceInt64Value
// Kind: Class; super: PropertyInterfaceValueBase
class UPropertyInterfaceInt64Value
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::int64_t Value; // 0x0040 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(UPropertyInterfaceInt64Value, Value) == 64, "Offset mismatch for UPropertyInterfaceInt64Value::Value");

// /Script/VerseAssets.PropertyInterfaceValueBase
// Kind: Class; super: Object
class UPropertyInterfaceValueBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PropertyName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t ClientID; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t ServerID; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    void* Owner; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPropertyInterfaceValueBase, PropertyName) == 40, "Offset mismatch for UPropertyInterfaceValueBase::PropertyName");
static_assert(offsetof(UPropertyInterfaceValueBase, ClientID) == 44, "Offset mismatch for UPropertyInterfaceValueBase::ClientID");
static_assert(offsetof(UPropertyInterfaceValueBase, ServerID) == 48, "Offset mismatch for UPropertyInterfaceValueBase::ServerID");
static_assert(offsetof(UPropertyInterfaceValueBase, Owner) == 56, "Offset mismatch for UPropertyInterfaceValueBase::Owner");

// /Script/VerseAssets.VerseAssetPtr
// Kind: Class; super: VerseAsset
class UVerseAssetPtr
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AssetForEditor[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    FName AssetPathName; // 0x0058 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseAssetPtr, AssetForEditor) == 56, "Offset mismatch for UVerseAssetPtr::AssetForEditor");
static_assert(offsetof(UVerseAssetPtr, AssetPathName) == 88, "Offset mismatch for UVerseAssetPtr::AssetPathName");
static_assert(offsetof(UVerseAssetPtr, Object) == 96, "Offset mismatch for UVerseAssetPtr::Object");

// /Script/VerseAssets.VerseAssetReflectionInteropData
// Kind: Class; super: AssetUserData
class UVerseAssetReflectionInteropData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseAssets.VerseAssetReplication
// Kind: Class; super: Actor
class UVerseAssetReplication
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

static_assert(offsetof(UVerseAssetReplication, PrimaryActorTick) == 40, "Offset mismatch for UVerseAssetReplication::PrimaryActorTick");
static_assert(offsetof(UVerseAssetReplication, bAlwaysRelevant) == 88, "Offset mismatch for UVerseAssetReplication::bAlwaysRelevant");
static_assert(offsetof(UVerseAssetReplication, bExchangedRoles) == 89, "Offset mismatch for UVerseAssetReplication::bExchangedRoles");
static_assert(offsetof(UVerseAssetReplication, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UVerseAssetReplication::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UVerseAssetReplication, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UVerseAssetReplication::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UVerseAssetReplication, bActorEnableCollision) == 93, "Offset mismatch for UVerseAssetReplication::bActorEnableCollision");
static_assert(offsetof(UVerseAssetReplication, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UVerseAssetReplication::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVerseAssetReplication, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UVerseAssetReplication::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVerseAssetReplication, RemoteRole) == 96, "Offset mismatch for UVerseAssetReplication::RemoteRole");
static_assert(offsetof(UVerseAssetReplication, InitialLifeSpan) == 100, "Offset mismatch for UVerseAssetReplication::InitialLifeSpan");
static_assert(offsetof(UVerseAssetReplication, CustomTimeDilation) == 104, "Offset mismatch for UVerseAssetReplication::CustomTimeDilation");
static_assert(offsetof(UVerseAssetReplication, RayTracingGroupId) == 108, "Offset mismatch for UVerseAssetReplication::RayTracingGroupId");
static_assert(offsetof(UVerseAssetReplication, AttachmentReplication) == 112, "Offset mismatch for UVerseAssetReplication::AttachmentReplication");
static_assert(offsetof(UVerseAssetReplication, ReplicatedMovement) == 208, "Offset mismatch for UVerseAssetReplication::ReplicatedMovement");
static_assert(offsetof(UVerseAssetReplication, Owner) == 344, "Offset mismatch for UVerseAssetReplication::Owner");
static_assert(offsetof(UVerseAssetReplication, NetDriverName) == 352, "Offset mismatch for UVerseAssetReplication::NetDriverName");
static_assert(offsetof(UVerseAssetReplication, Role) == 356, "Offset mismatch for UVerseAssetReplication::Role");
static_assert(offsetof(UVerseAssetReplication, NetDormancy) == 357, "Offset mismatch for UVerseAssetReplication::NetDormancy");
static_assert(offsetof(UVerseAssetReplication, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UVerseAssetReplication::SpawnCollisionHandlingMethod");
static_assert(offsetof(UVerseAssetReplication, AutoReceiveInput) == 359, "Offset mismatch for UVerseAssetReplication::AutoReceiveInput");
static_assert(offsetof(UVerseAssetReplication, InputPriority) == 360, "Offset mismatch for UVerseAssetReplication::InputPriority");
static_assert(offsetof(UVerseAssetReplication, InputComponent) == 368, "Offset mismatch for UVerseAssetReplication::InputComponent");
static_assert(offsetof(UVerseAssetReplication, NetTag) == 376, "Offset mismatch for UVerseAssetReplication::NetTag");
static_assert(offsetof(UVerseAssetReplication, NetCullDistanceSquared) == 380, "Offset mismatch for UVerseAssetReplication::NetCullDistanceSquared");
static_assert(offsetof(UVerseAssetReplication, NetUpdateFrequency) == 384, "Offset mismatch for UVerseAssetReplication::NetUpdateFrequency");
static_assert(offsetof(UVerseAssetReplication, MinNetUpdateFrequency) == 388, "Offset mismatch for UVerseAssetReplication::MinNetUpdateFrequency");
static_assert(offsetof(UVerseAssetReplication, NetPriority) == 392, "Offset mismatch for UVerseAssetReplication::NetPriority");
static_assert(offsetof(UVerseAssetReplication, PhysicsReplicationMode) == 396, "Offset mismatch for UVerseAssetReplication::PhysicsReplicationMode");
static_assert(offsetof(UVerseAssetReplication, Instigator) == 408, "Offset mismatch for UVerseAssetReplication::Instigator");
static_assert(offsetof(UVerseAssetReplication, Children) == 416, "Offset mismatch for UVerseAssetReplication::Children");
static_assert(offsetof(UVerseAssetReplication, RootComponent) == 432, "Offset mismatch for UVerseAssetReplication::RootComponent");
static_assert(offsetof(UVerseAssetReplication, HLODLayer) == 448, "Offset mismatch for UVerseAssetReplication::HLODLayer");
static_assert(offsetof(UVerseAssetReplication, Layers) == 456, "Offset mismatch for UVerseAssetReplication::Layers");
static_assert(offsetof(UVerseAssetReplication, ParentComponent) == 472, "Offset mismatch for UVerseAssetReplication::ParentComponent");
static_assert(offsetof(UVerseAssetReplication, Tags) == 496, "Offset mismatch for UVerseAssetReplication::Tags");
static_assert(offsetof(UVerseAssetReplication, OnTakeAnyDamage) == 512, "Offset mismatch for UVerseAssetReplication::OnTakeAnyDamage");
static_assert(offsetof(UVerseAssetReplication, OnTakePointDamage) == 513, "Offset mismatch for UVerseAssetReplication::OnTakePointDamage");
static_assert(offsetof(UVerseAssetReplication, OnTakeRadialDamage) == 514, "Offset mismatch for UVerseAssetReplication::OnTakeRadialDamage");
static_assert(offsetof(UVerseAssetReplication, OnActorBeginOverlap) == 515, "Offset mismatch for UVerseAssetReplication::OnActorBeginOverlap");
static_assert(offsetof(UVerseAssetReplication, OnActorEndOverlap) == 516, "Offset mismatch for UVerseAssetReplication::OnActorEndOverlap");
static_assert(offsetof(UVerseAssetReplication, OnBeginCursorOver) == 517, "Offset mismatch for UVerseAssetReplication::OnBeginCursorOver");
static_assert(offsetof(UVerseAssetReplication, OnEndCursorOver) == 518, "Offset mismatch for UVerseAssetReplication::OnEndCursorOver");
static_assert(offsetof(UVerseAssetReplication, OnClicked) == 519, "Offset mismatch for UVerseAssetReplication::OnClicked");
static_assert(offsetof(UVerseAssetReplication, OnReleased) == 520, "Offset mismatch for UVerseAssetReplication::OnReleased");
static_assert(offsetof(UVerseAssetReplication, OnInputTouchBegin) == 521, "Offset mismatch for UVerseAssetReplication::OnInputTouchBegin");
static_assert(offsetof(UVerseAssetReplication, OnInputTouchEnd) == 522, "Offset mismatch for UVerseAssetReplication::OnInputTouchEnd");
static_assert(offsetof(UVerseAssetReplication, OnInputTouchEnter) == 523, "Offset mismatch for UVerseAssetReplication::OnInputTouchEnter");
static_assert(offsetof(UVerseAssetReplication, OnInputTouchLeave) == 524, "Offset mismatch for UVerseAssetReplication::OnInputTouchLeave");
static_assert(offsetof(UVerseAssetReplication, OnActorHit) == 525, "Offset mismatch for UVerseAssetReplication::OnActorHit");
static_assert(offsetof(UVerseAssetReplication, OnDestroyed) == 526, "Offset mismatch for UVerseAssetReplication::OnDestroyed");
static_assert(offsetof(UVerseAssetReplication, OnEndPlay) == 527, "Offset mismatch for UVerseAssetReplication::OnEndPlay");
static_assert(offsetof(UVerseAssetReplication, InstanceComponents) == 592, "Offset mismatch for UVerseAssetReplication::InstanceComponents");
static_assert(offsetof(UVerseAssetReplication, BlueprintCreatedComponents) == 608, "Offset mismatch for UVerseAssetReplication::BlueprintCreatedComponents");

// /Script/VerseAssets.VerseAssetReplicationSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseAssetReplicationSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseAssets.VerseMaterialInstanceDynamic
// Kind: Class; super: MaterialInstanceDynamic
class UVerseMaterialInstanceDynamic
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* PhysMaterial; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* PhysicalMaterialMap; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0138
    void* Parent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NaniteOverrideMaterial[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    void* SpecularProfileOverride; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* ToonProfileOverride; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasStaticPermutationResource; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    // 0x01B8 BoolProperty bOverrideBlendableLocation (shared storage)
    // 0x01B8 BoolProperty bOverrideBlendablePriority (shared storage)
    // 0x01B8 BoolProperty bOverridePhysMaterial (shared storage)
    // 0x01B8 BoolProperty bOverrideSpecularProfile (shared storage)
    // 0x01B8 BoolProperty bOverrideSubsurfaceProfile (shared storage)
    // 0x01B8 BoolProperty bOverrideToonProfile (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x01B9
    std::uint8_t BlendableLocationOverride; // 0x01BC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01BD
    std::int32_t BlendablePriorityOverride; // 0x01C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x24]; // 0x01C4
    TArray<void*> ScalarParameterValues; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameterValues; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DoubleVectorParameterValues; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameterValues; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureCollectionParameterValues; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParameterCollectionParameterValues; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeVirtualTextureParameterValues; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SparseVolumeTextureParameterValues; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FontParameterValues; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ToonProfileParameterValues; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UserSceneTextureOverrides; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BasePropertyOverrides[0x30]; // 0x0298 (Size: 0x30, Type: StructProperty)
    std::uint8_t StaticParametersRuntime[0x1]; // 0x02C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseMaterialInstanceDynamic, PhysMaterial) == 296, "Offset mismatch for UVerseMaterialInstanceDynamic::PhysMaterial");
static_assert(offsetof(UVerseMaterialInstanceDynamic, PhysicalMaterialMap) == 304, "Offset mismatch for UVerseMaterialInstanceDynamic::PhysicalMaterialMap");
static_assert(offsetof(UVerseMaterialInstanceDynamic, Parent) == 368, "Offset mismatch for UVerseMaterialInstanceDynamic::Parent");
static_assert(offsetof(UVerseMaterialInstanceDynamic, NaniteOverrideMaterial) == 376, "Offset mismatch for UVerseMaterialInstanceDynamic::NaniteOverrideMaterial");
static_assert(offsetof(UVerseMaterialInstanceDynamic, SpecularProfileOverride) == 424, "Offset mismatch for UVerseMaterialInstanceDynamic::SpecularProfileOverride");
static_assert(offsetof(UVerseMaterialInstanceDynamic, ToonProfileOverride) == 432, "Offset mismatch for UVerseMaterialInstanceDynamic::ToonProfileOverride");
static_assert(offsetof(UVerseMaterialInstanceDynamic, bHasStaticPermutationResource) == 440, "Offset mismatch for UVerseMaterialInstanceDynamic::bHasStaticPermutationResource");
static_assert(offsetof(UVerseMaterialInstanceDynamic, BlendableLocationOverride) == 444, "Offset mismatch for UVerseMaterialInstanceDynamic::BlendableLocationOverride");
static_assert(offsetof(UVerseMaterialInstanceDynamic, BlendablePriorityOverride) == 448, "Offset mismatch for UVerseMaterialInstanceDynamic::BlendablePriorityOverride");
static_assert(offsetof(UVerseMaterialInstanceDynamic, ScalarParameterValues) == 488, "Offset mismatch for UVerseMaterialInstanceDynamic::ScalarParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, VectorParameterValues) == 504, "Offset mismatch for UVerseMaterialInstanceDynamic::VectorParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, DoubleVectorParameterValues) == 520, "Offset mismatch for UVerseMaterialInstanceDynamic::DoubleVectorParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, TextureParameterValues) == 536, "Offset mismatch for UVerseMaterialInstanceDynamic::TextureParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, TextureCollectionParameterValues) == 552, "Offset mismatch for UVerseMaterialInstanceDynamic::TextureCollectionParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, ParameterCollectionParameterValues) == 568, "Offset mismatch for UVerseMaterialInstanceDynamic::ParameterCollectionParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, RuntimeVirtualTextureParameterValues) == 584, "Offset mismatch for UVerseMaterialInstanceDynamic::RuntimeVirtualTextureParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, SparseVolumeTextureParameterValues) == 600, "Offset mismatch for UVerseMaterialInstanceDynamic::SparseVolumeTextureParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, FontParameterValues) == 616, "Offset mismatch for UVerseMaterialInstanceDynamic::FontParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, ToonProfileParameterValues) == 632, "Offset mismatch for UVerseMaterialInstanceDynamic::ToonProfileParameterValues");
static_assert(offsetof(UVerseMaterialInstanceDynamic, UserSceneTextureOverrides) == 648, "Offset mismatch for UVerseMaterialInstanceDynamic::UserSceneTextureOverrides");
static_assert(offsetof(UVerseMaterialInstanceDynamic, BasePropertyOverrides) == 664, "Offset mismatch for UVerseMaterialInstanceDynamic::BasePropertyOverrides");
static_assert(offsetof(UVerseMaterialInstanceDynamic, StaticParametersRuntime) == 712, "Offset mismatch for UVerseMaterialInstanceDynamic::StaticParametersRuntime");

// /Script/VerseAssets.VersePerPlayerDataReplication
// Kind: Class; super: Info
class UVersePerPlayerDataReplication
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

static_assert(offsetof(UVersePerPlayerDataReplication, PrimaryActorTick) == 40, "Offset mismatch for UVersePerPlayerDataReplication::PrimaryActorTick");
static_assert(offsetof(UVersePerPlayerDataReplication, bAlwaysRelevant) == 88, "Offset mismatch for UVersePerPlayerDataReplication::bAlwaysRelevant");
static_assert(offsetof(UVersePerPlayerDataReplication, bExchangedRoles) == 89, "Offset mismatch for UVersePerPlayerDataReplication::bExchangedRoles");
static_assert(offsetof(UVersePerPlayerDataReplication, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UVersePerPlayerDataReplication::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UVersePerPlayerDataReplication, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UVersePerPlayerDataReplication::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UVersePerPlayerDataReplication, bActorEnableCollision) == 93, "Offset mismatch for UVersePerPlayerDataReplication::bActorEnableCollision");
static_assert(offsetof(UVersePerPlayerDataReplication, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UVersePerPlayerDataReplication::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVersePerPlayerDataReplication, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UVersePerPlayerDataReplication::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVersePerPlayerDataReplication, RemoteRole) == 96, "Offset mismatch for UVersePerPlayerDataReplication::RemoteRole");
static_assert(offsetof(UVersePerPlayerDataReplication, InitialLifeSpan) == 100, "Offset mismatch for UVersePerPlayerDataReplication::InitialLifeSpan");
static_assert(offsetof(UVersePerPlayerDataReplication, CustomTimeDilation) == 104, "Offset mismatch for UVersePerPlayerDataReplication::CustomTimeDilation");
static_assert(offsetof(UVersePerPlayerDataReplication, RayTracingGroupId) == 108, "Offset mismatch for UVersePerPlayerDataReplication::RayTracingGroupId");
static_assert(offsetof(UVersePerPlayerDataReplication, AttachmentReplication) == 112, "Offset mismatch for UVersePerPlayerDataReplication::AttachmentReplication");
static_assert(offsetof(UVersePerPlayerDataReplication, ReplicatedMovement) == 208, "Offset mismatch for UVersePerPlayerDataReplication::ReplicatedMovement");
static_assert(offsetof(UVersePerPlayerDataReplication, Owner) == 344, "Offset mismatch for UVersePerPlayerDataReplication::Owner");
static_assert(offsetof(UVersePerPlayerDataReplication, NetDriverName) == 352, "Offset mismatch for UVersePerPlayerDataReplication::NetDriverName");
static_assert(offsetof(UVersePerPlayerDataReplication, Role) == 356, "Offset mismatch for UVersePerPlayerDataReplication::Role");
static_assert(offsetof(UVersePerPlayerDataReplication, NetDormancy) == 357, "Offset mismatch for UVersePerPlayerDataReplication::NetDormancy");
static_assert(offsetof(UVersePerPlayerDataReplication, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UVersePerPlayerDataReplication::SpawnCollisionHandlingMethod");
static_assert(offsetof(UVersePerPlayerDataReplication, AutoReceiveInput) == 359, "Offset mismatch for UVersePerPlayerDataReplication::AutoReceiveInput");
static_assert(offsetof(UVersePerPlayerDataReplication, InputPriority) == 360, "Offset mismatch for UVersePerPlayerDataReplication::InputPriority");
static_assert(offsetof(UVersePerPlayerDataReplication, InputComponent) == 368, "Offset mismatch for UVersePerPlayerDataReplication::InputComponent");
static_assert(offsetof(UVersePerPlayerDataReplication, NetTag) == 376, "Offset mismatch for UVersePerPlayerDataReplication::NetTag");
static_assert(offsetof(UVersePerPlayerDataReplication, NetCullDistanceSquared) == 380, "Offset mismatch for UVersePerPlayerDataReplication::NetCullDistanceSquared");
static_assert(offsetof(UVersePerPlayerDataReplication, NetUpdateFrequency) == 384, "Offset mismatch for UVersePerPlayerDataReplication::NetUpdateFrequency");
static_assert(offsetof(UVersePerPlayerDataReplication, MinNetUpdateFrequency) == 388, "Offset mismatch for UVersePerPlayerDataReplication::MinNetUpdateFrequency");
static_assert(offsetof(UVersePerPlayerDataReplication, NetPriority) == 392, "Offset mismatch for UVersePerPlayerDataReplication::NetPriority");
static_assert(offsetof(UVersePerPlayerDataReplication, PhysicsReplicationMode) == 396, "Offset mismatch for UVersePerPlayerDataReplication::PhysicsReplicationMode");
static_assert(offsetof(UVersePerPlayerDataReplication, Instigator) == 408, "Offset mismatch for UVersePerPlayerDataReplication::Instigator");
static_assert(offsetof(UVersePerPlayerDataReplication, Children) == 416, "Offset mismatch for UVersePerPlayerDataReplication::Children");
static_assert(offsetof(UVersePerPlayerDataReplication, RootComponent) == 432, "Offset mismatch for UVersePerPlayerDataReplication::RootComponent");
static_assert(offsetof(UVersePerPlayerDataReplication, HLODLayer) == 448, "Offset mismatch for UVersePerPlayerDataReplication::HLODLayer");
static_assert(offsetof(UVersePerPlayerDataReplication, Layers) == 456, "Offset mismatch for UVersePerPlayerDataReplication::Layers");
static_assert(offsetof(UVersePerPlayerDataReplication, ParentComponent) == 472, "Offset mismatch for UVersePerPlayerDataReplication::ParentComponent");
static_assert(offsetof(UVersePerPlayerDataReplication, Tags) == 496, "Offset mismatch for UVersePerPlayerDataReplication::Tags");
static_assert(offsetof(UVersePerPlayerDataReplication, OnTakeAnyDamage) == 512, "Offset mismatch for UVersePerPlayerDataReplication::OnTakeAnyDamage");
static_assert(offsetof(UVersePerPlayerDataReplication, OnTakePointDamage) == 513, "Offset mismatch for UVersePerPlayerDataReplication::OnTakePointDamage");
static_assert(offsetof(UVersePerPlayerDataReplication, OnTakeRadialDamage) == 514, "Offset mismatch for UVersePerPlayerDataReplication::OnTakeRadialDamage");
static_assert(offsetof(UVersePerPlayerDataReplication, OnActorBeginOverlap) == 515, "Offset mismatch for UVersePerPlayerDataReplication::OnActorBeginOverlap");
static_assert(offsetof(UVersePerPlayerDataReplication, OnActorEndOverlap) == 516, "Offset mismatch for UVersePerPlayerDataReplication::OnActorEndOverlap");
static_assert(offsetof(UVersePerPlayerDataReplication, OnBeginCursorOver) == 517, "Offset mismatch for UVersePerPlayerDataReplication::OnBeginCursorOver");
static_assert(offsetof(UVersePerPlayerDataReplication, OnEndCursorOver) == 518, "Offset mismatch for UVersePerPlayerDataReplication::OnEndCursorOver");
static_assert(offsetof(UVersePerPlayerDataReplication, OnClicked) == 519, "Offset mismatch for UVersePerPlayerDataReplication::OnClicked");
static_assert(offsetof(UVersePerPlayerDataReplication, OnReleased) == 520, "Offset mismatch for UVersePerPlayerDataReplication::OnReleased");
static_assert(offsetof(UVersePerPlayerDataReplication, OnInputTouchBegin) == 521, "Offset mismatch for UVersePerPlayerDataReplication::OnInputTouchBegin");
static_assert(offsetof(UVersePerPlayerDataReplication, OnInputTouchEnd) == 522, "Offset mismatch for UVersePerPlayerDataReplication::OnInputTouchEnd");
static_assert(offsetof(UVersePerPlayerDataReplication, OnInputTouchEnter) == 523, "Offset mismatch for UVersePerPlayerDataReplication::OnInputTouchEnter");
static_assert(offsetof(UVersePerPlayerDataReplication, OnInputTouchLeave) == 524, "Offset mismatch for UVersePerPlayerDataReplication::OnInputTouchLeave");
static_assert(offsetof(UVersePerPlayerDataReplication, OnActorHit) == 525, "Offset mismatch for UVersePerPlayerDataReplication::OnActorHit");
static_assert(offsetof(UVersePerPlayerDataReplication, OnDestroyed) == 526, "Offset mismatch for UVersePerPlayerDataReplication::OnDestroyed");
static_assert(offsetof(UVersePerPlayerDataReplication, OnEndPlay) == 527, "Offset mismatch for UVersePerPlayerDataReplication::OnEndPlay");
static_assert(offsetof(UVersePerPlayerDataReplication, InstanceComponents) == 592, "Offset mismatch for UVersePerPlayerDataReplication::InstanceComponents");
static_assert(offsetof(UVersePerPlayerDataReplication, BlueprintCreatedComponents) == 608, "Offset mismatch for UVersePerPlayerDataReplication::BlueprintCreatedComponents");

// /Script/VerseAssets.VersePerPlayerDataReplicationSubsystem
// Kind: Class; super: WorldSubsystem
class UVersePerPlayerDataReplicationSubsystem
{
public:
    std::uint8_t Opaque[1];
};
