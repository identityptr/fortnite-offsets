/**
 * decamp dumper generated SDK
 * Package: /Script/FieldSystemEngine
 */
#pragma once
#include "Basic.h"

// /Script/FieldSystemEngine.FieldObjectCommands
// Kind: ScriptStruct; super: none
struct FFieldObjectCommands
{
public:
    TArray<void*> TargetNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootNodes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MetaDatas; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFieldObjectCommands, TargetNames) == 0, "Offset mismatch for FFieldObjectCommands::TargetNames");
static_assert(offsetof(FFieldObjectCommands, RootNodes) == 16, "Offset mismatch for FFieldObjectCommands::RootNodes");
static_assert(offsetof(FFieldObjectCommands, MetaDatas) == 32, "Offset mismatch for FFieldObjectCommands::MetaDatas");

// /Script/FieldSystemEngine.BoxFalloff
// Kind: Class; super: FieldNodeFloat
class UBoxFalloff
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Transform[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t Falloff; // 0x0130 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBoxFalloff, Magnitude) == 192, "Offset mismatch for UBoxFalloff::Magnitude");
static_assert(offsetof(UBoxFalloff, MinRange) == 196, "Offset mismatch for UBoxFalloff::MinRange");
static_assert(offsetof(UBoxFalloff, MaxRange) == 200, "Offset mismatch for UBoxFalloff::MaxRange");
static_assert(offsetof(UBoxFalloff, Default) == 204, "Offset mismatch for UBoxFalloff::Default");
static_assert(offsetof(UBoxFalloff, Transform) == 208, "Offset mismatch for UBoxFalloff::Transform");
static_assert(offsetof(UBoxFalloff, Falloff) == 304, "Offset mismatch for UBoxFalloff::Falloff");

// /Script/FieldSystemEngine.CullingField
// Kind: Class; super: FieldNodeBase
class UCullingField
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* Culling; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* Field; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Operation; // 0x00D0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UCullingField, Culling) == 192, "Offset mismatch for UCullingField::Culling");
static_assert(offsetof(UCullingField, Field) == 200, "Offset mismatch for UCullingField::Field");
static_assert(offsetof(UCullingField, Operation) == 208, "Offset mismatch for UCullingField::Operation");

// /Script/FieldSystemEngine.FieldNodeBase
// Kind: Class; super: ActorComponent
class UFieldNodeBase
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

static_assert(offsetof(UFieldNodeBase, PrimaryComponentTick) == 56, "Offset mismatch for UFieldNodeBase::PrimaryComponentTick");
static_assert(offsetof(UFieldNodeBase, ComponentTags) == 104, "Offset mismatch for UFieldNodeBase::ComponentTags");
static_assert(offsetof(UFieldNodeBase, AssetUserData) == 120, "Offset mismatch for UFieldNodeBase::AssetUserData");
static_assert(offsetof(UFieldNodeBase, UCSSerializationIndex) == 144, "Offset mismatch for UFieldNodeBase::UCSSerializationIndex");
static_assert(offsetof(UFieldNodeBase, bNetAddressable) == 152, "Offset mismatch for UFieldNodeBase::bNetAddressable");
static_assert(offsetof(UFieldNodeBase, bAutoActivate) == 154, "Offset mismatch for UFieldNodeBase::bAutoActivate");
static_assert(offsetof(UFieldNodeBase, bIsEditorOnly) == 155, "Offset mismatch for UFieldNodeBase::bIsEditorOnly");
static_assert(offsetof(UFieldNodeBase, CreationMethod) == 185, "Offset mismatch for UFieldNodeBase::CreationMethod");
static_assert(offsetof(UFieldNodeBase, OnComponentActivated) == 186, "Offset mismatch for UFieldNodeBase::OnComponentActivated");
static_assert(offsetof(UFieldNodeBase, OnComponentDeactivated) == 187, "Offset mismatch for UFieldNodeBase::OnComponentDeactivated");

// /Script/FieldSystemEngine.FieldNodeFloat
// Kind: Class; super: FieldNodeBase
class UFieldNodeFloat
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

static_assert(offsetof(UFieldNodeFloat, PrimaryComponentTick) == 56, "Offset mismatch for UFieldNodeFloat::PrimaryComponentTick");
static_assert(offsetof(UFieldNodeFloat, ComponentTags) == 104, "Offset mismatch for UFieldNodeFloat::ComponentTags");
static_assert(offsetof(UFieldNodeFloat, AssetUserData) == 120, "Offset mismatch for UFieldNodeFloat::AssetUserData");
static_assert(offsetof(UFieldNodeFloat, UCSSerializationIndex) == 144, "Offset mismatch for UFieldNodeFloat::UCSSerializationIndex");
static_assert(offsetof(UFieldNodeFloat, bNetAddressable) == 152, "Offset mismatch for UFieldNodeFloat::bNetAddressable");
static_assert(offsetof(UFieldNodeFloat, bAutoActivate) == 154, "Offset mismatch for UFieldNodeFloat::bAutoActivate");
static_assert(offsetof(UFieldNodeFloat, bIsEditorOnly) == 155, "Offset mismatch for UFieldNodeFloat::bIsEditorOnly");
static_assert(offsetof(UFieldNodeFloat, CreationMethod) == 185, "Offset mismatch for UFieldNodeFloat::CreationMethod");
static_assert(offsetof(UFieldNodeFloat, OnComponentActivated) == 186, "Offset mismatch for UFieldNodeFloat::OnComponentActivated");
static_assert(offsetof(UFieldNodeFloat, OnComponentDeactivated) == 187, "Offset mismatch for UFieldNodeFloat::OnComponentDeactivated");

// /Script/FieldSystemEngine.FieldNodeInt
// Kind: Class; super: FieldNodeBase
class UFieldNodeInt
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

static_assert(offsetof(UFieldNodeInt, PrimaryComponentTick) == 56, "Offset mismatch for UFieldNodeInt::PrimaryComponentTick");
static_assert(offsetof(UFieldNodeInt, ComponentTags) == 104, "Offset mismatch for UFieldNodeInt::ComponentTags");
static_assert(offsetof(UFieldNodeInt, AssetUserData) == 120, "Offset mismatch for UFieldNodeInt::AssetUserData");
static_assert(offsetof(UFieldNodeInt, UCSSerializationIndex) == 144, "Offset mismatch for UFieldNodeInt::UCSSerializationIndex");
static_assert(offsetof(UFieldNodeInt, bNetAddressable) == 152, "Offset mismatch for UFieldNodeInt::bNetAddressable");
static_assert(offsetof(UFieldNodeInt, bAutoActivate) == 154, "Offset mismatch for UFieldNodeInt::bAutoActivate");
static_assert(offsetof(UFieldNodeInt, bIsEditorOnly) == 155, "Offset mismatch for UFieldNodeInt::bIsEditorOnly");
static_assert(offsetof(UFieldNodeInt, CreationMethod) == 185, "Offset mismatch for UFieldNodeInt::CreationMethod");
static_assert(offsetof(UFieldNodeInt, OnComponentActivated) == 186, "Offset mismatch for UFieldNodeInt::OnComponentActivated");
static_assert(offsetof(UFieldNodeInt, OnComponentDeactivated) == 187, "Offset mismatch for UFieldNodeInt::OnComponentDeactivated");

// /Script/FieldSystemEngine.FieldNodeVector
// Kind: Class; super: FieldNodeBase
class UFieldNodeVector
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

static_assert(offsetof(UFieldNodeVector, PrimaryComponentTick) == 56, "Offset mismatch for UFieldNodeVector::PrimaryComponentTick");
static_assert(offsetof(UFieldNodeVector, ComponentTags) == 104, "Offset mismatch for UFieldNodeVector::ComponentTags");
static_assert(offsetof(UFieldNodeVector, AssetUserData) == 120, "Offset mismatch for UFieldNodeVector::AssetUserData");
static_assert(offsetof(UFieldNodeVector, UCSSerializationIndex) == 144, "Offset mismatch for UFieldNodeVector::UCSSerializationIndex");
static_assert(offsetof(UFieldNodeVector, bNetAddressable) == 152, "Offset mismatch for UFieldNodeVector::bNetAddressable");
static_assert(offsetof(UFieldNodeVector, bAutoActivate) == 154, "Offset mismatch for UFieldNodeVector::bAutoActivate");
static_assert(offsetof(UFieldNodeVector, bIsEditorOnly) == 155, "Offset mismatch for UFieldNodeVector::bIsEditorOnly");
static_assert(offsetof(UFieldNodeVector, CreationMethod) == 185, "Offset mismatch for UFieldNodeVector::CreationMethod");
static_assert(offsetof(UFieldNodeVector, OnComponentActivated) == 186, "Offset mismatch for UFieldNodeVector::OnComponentActivated");
static_assert(offsetof(UFieldNodeVector, OnComponentDeactivated) == 187, "Offset mismatch for UFieldNodeVector::OnComponentDeactivated");

// /Script/FieldSystemEngine.FieldSystem
// Kind: Class; super: Object
class UFieldSystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FieldSystemEngine.FieldSystemActor
// Kind: Class; super: Actor
class UFieldSystemActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* FieldSystemComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFieldSystemActor, FieldSystemComponent) == 624, "Offset mismatch for UFieldSystemActor::FieldSystemComponent");

// /Script/FieldSystemEngine.FieldSystemComponent
// Kind: Class; super: PrimitiveComponent
class UFieldSystemComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* FieldSystem; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsWorldField; // 0x0578 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChaosField; // 0x0579 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x057A
    TArray<void*> SupportedSolvers; // 0x0580 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConstructionCommands[0x30]; // 0x0590 (Size: 0x30, Type: StructProperty)
    std::uint8_t BufferCommands[0x30]; // 0x05C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bEnableInEditorWorlds; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableInPreviewWorlds; // 0x05F1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 1392, "Offset mismatch for UFieldSystemComponent::FieldSystem");
static_assert(offsetof(UFieldSystemComponent, bIsWorldField) == 1400, "Offset mismatch for UFieldSystemComponent::bIsWorldField");
static_assert(offsetof(UFieldSystemComponent, bIsChaosField) == 1401, "Offset mismatch for UFieldSystemComponent::bIsChaosField");
static_assert(offsetof(UFieldSystemComponent, SupportedSolvers) == 1408, "Offset mismatch for UFieldSystemComponent::SupportedSolvers");
static_assert(offsetof(UFieldSystemComponent, ConstructionCommands) == 1424, "Offset mismatch for UFieldSystemComponent::ConstructionCommands");
static_assert(offsetof(UFieldSystemComponent, BufferCommands) == 1472, "Offset mismatch for UFieldSystemComponent::BufferCommands");
static_assert(offsetof(UFieldSystemComponent, bEnableInEditorWorlds) == 1520, "Offset mismatch for UFieldSystemComponent::bEnableInEditorWorlds");
static_assert(offsetof(UFieldSystemComponent, bEnableInPreviewWorlds) == 1521, "Offset mismatch for UFieldSystemComponent::bEnableInPreviewWorlds");

// /Script/FieldSystemEngine.FieldSystemMetaData
// Kind: Class; super: ActorComponent
class UFieldSystemMetaData
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

static_assert(offsetof(UFieldSystemMetaData, PrimaryComponentTick) == 56, "Offset mismatch for UFieldSystemMetaData::PrimaryComponentTick");
static_assert(offsetof(UFieldSystemMetaData, ComponentTags) == 104, "Offset mismatch for UFieldSystemMetaData::ComponentTags");
static_assert(offsetof(UFieldSystemMetaData, AssetUserData) == 120, "Offset mismatch for UFieldSystemMetaData::AssetUserData");
static_assert(offsetof(UFieldSystemMetaData, UCSSerializationIndex) == 144, "Offset mismatch for UFieldSystemMetaData::UCSSerializationIndex");
static_assert(offsetof(UFieldSystemMetaData, bNetAddressable) == 152, "Offset mismatch for UFieldSystemMetaData::bNetAddressable");
static_assert(offsetof(UFieldSystemMetaData, bAutoActivate) == 154, "Offset mismatch for UFieldSystemMetaData::bAutoActivate");
static_assert(offsetof(UFieldSystemMetaData, bIsEditorOnly) == 155, "Offset mismatch for UFieldSystemMetaData::bIsEditorOnly");
static_assert(offsetof(UFieldSystemMetaData, CreationMethod) == 185, "Offset mismatch for UFieldSystemMetaData::CreationMethod");
static_assert(offsetof(UFieldSystemMetaData, OnComponentActivated) == 186, "Offset mismatch for UFieldSystemMetaData::OnComponentActivated");
static_assert(offsetof(UFieldSystemMetaData, OnComponentDeactivated) == 187, "Offset mismatch for UFieldSystemMetaData::OnComponentDeactivated");

// /Script/FieldSystemEngine.FieldSystemMetaDataFilter
// Kind: Class; super: FieldSystemMetaData
class UFieldSystemMetaDataFilter
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t FilterType; // 0x00C0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ObjectType; // 0x00C1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PositionType; // 0x00C2 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFieldSystemMetaDataFilter, FilterType) == 192, "Offset mismatch for UFieldSystemMetaDataFilter::FilterType");
static_assert(offsetof(UFieldSystemMetaDataFilter, ObjectType) == 193, "Offset mismatch for UFieldSystemMetaDataFilter::ObjectType");
static_assert(offsetof(UFieldSystemMetaDataFilter, PositionType) == 194, "Offset mismatch for UFieldSystemMetaDataFilter::PositionType");

// /Script/FieldSystemEngine.FieldSystemMetaDataIteration
// Kind: Class; super: FieldSystemMetaData
class UFieldSystemMetaDataIteration
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Iterations; // 0x00C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFieldSystemMetaDataIteration, Iterations) == 192, "Offset mismatch for UFieldSystemMetaDataIteration::Iterations");

// /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Kind: Class; super: FieldSystemMetaData
class UFieldSystemMetaDataProcessingResolution
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ResolutionType; // 0x00C0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 192, "Offset mismatch for UFieldSystemMetaDataProcessingResolution::ResolutionType");

// /Script/FieldSystemEngine.NoiseField
// Kind: Class; super: FieldNodeFloat
class UNoiseField
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float MinRange; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    std::uint8_t Transform[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNoiseField, MinRange) == 192, "Offset mismatch for UNoiseField::MinRange");
static_assert(offsetof(UNoiseField, MaxRange) == 196, "Offset mismatch for UNoiseField::MaxRange");
static_assert(offsetof(UNoiseField, Transform) == 208, "Offset mismatch for UNoiseField::Transform");

// /Script/FieldSystemEngine.OperatorField
// Kind: Class; super: FieldNodeBase
class UOperatorField
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* RightField; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* LeftField; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Operation; // 0x00D8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UOperatorField, Magnitude) == 192, "Offset mismatch for UOperatorField::Magnitude");
static_assert(offsetof(UOperatorField, RightField) == 200, "Offset mismatch for UOperatorField::RightField");
static_assert(offsetof(UOperatorField, LeftField) == 208, "Offset mismatch for UOperatorField::LeftField");
static_assert(offsetof(UOperatorField, Operation) == 216, "Offset mismatch for UOperatorField::Operation");

// /Script/FieldSystemEngine.PlaneFalloff
// Kind: Class; super: FieldNodeFloat
class UPlaneFalloff
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float Distance; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t Position[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Falloff; // 0x0108 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UPlaneFalloff, Magnitude) == 192, "Offset mismatch for UPlaneFalloff::Magnitude");
static_assert(offsetof(UPlaneFalloff, MinRange) == 196, "Offset mismatch for UPlaneFalloff::MinRange");
static_assert(offsetof(UPlaneFalloff, MaxRange) == 200, "Offset mismatch for UPlaneFalloff::MaxRange");
static_assert(offsetof(UPlaneFalloff, Default) == 204, "Offset mismatch for UPlaneFalloff::Default");
static_assert(offsetof(UPlaneFalloff, Distance) == 208, "Offset mismatch for UPlaneFalloff::Distance");
static_assert(offsetof(UPlaneFalloff, Position) == 216, "Offset mismatch for UPlaneFalloff::Position");
static_assert(offsetof(UPlaneFalloff, Normal) == 240, "Offset mismatch for UPlaneFalloff::Normal");
static_assert(offsetof(UPlaneFalloff, Falloff) == 264, "Offset mismatch for UPlaneFalloff::Falloff");

// /Script/FieldSystemEngine.RadialFalloff
// Kind: Class; super: FieldNodeFloat
class URadialFalloff
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MinRange; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float Default; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t Position[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Falloff; // 0x00F0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(URadialFalloff, Magnitude) == 192, "Offset mismatch for URadialFalloff::Magnitude");
static_assert(offsetof(URadialFalloff, MinRange) == 196, "Offset mismatch for URadialFalloff::MinRange");
static_assert(offsetof(URadialFalloff, MaxRange) == 200, "Offset mismatch for URadialFalloff::MaxRange");
static_assert(offsetof(URadialFalloff, Default) == 204, "Offset mismatch for URadialFalloff::Default");
static_assert(offsetof(URadialFalloff, Radius) == 208, "Offset mismatch for URadialFalloff::Radius");
static_assert(offsetof(URadialFalloff, Position) == 216, "Offset mismatch for URadialFalloff::Position");
static_assert(offsetof(URadialFalloff, Falloff) == 240, "Offset mismatch for URadialFalloff::Falloff");

// /Script/FieldSystemEngine.RadialIntMask
// Kind: Class; super: FieldNodeInt
class URadialIntMask
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Radius; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t Position[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::int32_t InteriorValue; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t ExteriorValue; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SetMaskCondition; // 0x00E8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(URadialIntMask, Radius) == 192, "Offset mismatch for URadialIntMask::Radius");
static_assert(offsetof(URadialIntMask, Position) == 200, "Offset mismatch for URadialIntMask::Position");
static_assert(offsetof(URadialIntMask, InteriorValue) == 224, "Offset mismatch for URadialIntMask::InteriorValue");
static_assert(offsetof(URadialIntMask, ExteriorValue) == 228, "Offset mismatch for URadialIntMask::ExteriorValue");
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 232, "Offset mismatch for URadialIntMask::SetMaskCondition");

// /Script/FieldSystemEngine.RadialVector
// Kind: Class; super: FieldNodeVector
class URadialVector
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t Position[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URadialVector, Magnitude) == 192, "Offset mismatch for URadialVector::Magnitude");
static_assert(offsetof(URadialVector, Position) == 200, "Offset mismatch for URadialVector::Position");

// /Script/FieldSystemEngine.RandomVector
// Kind: Class; super: FieldNodeVector
class URandomVector
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URandomVector, Magnitude) == 192, "Offset mismatch for URandomVector::Magnitude");

// /Script/FieldSystemEngine.ReturnResultsTerminal
// Kind: Class; super: FieldNodeBase
class UReturnResultsTerminal
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

static_assert(offsetof(UReturnResultsTerminal, PrimaryComponentTick) == 56, "Offset mismatch for UReturnResultsTerminal::PrimaryComponentTick");
static_assert(offsetof(UReturnResultsTerminal, ComponentTags) == 104, "Offset mismatch for UReturnResultsTerminal::ComponentTags");
static_assert(offsetof(UReturnResultsTerminal, AssetUserData) == 120, "Offset mismatch for UReturnResultsTerminal::AssetUserData");
static_assert(offsetof(UReturnResultsTerminal, UCSSerializationIndex) == 144, "Offset mismatch for UReturnResultsTerminal::UCSSerializationIndex");
static_assert(offsetof(UReturnResultsTerminal, bNetAddressable) == 152, "Offset mismatch for UReturnResultsTerminal::bNetAddressable");
static_assert(offsetof(UReturnResultsTerminal, bAutoActivate) == 154, "Offset mismatch for UReturnResultsTerminal::bAutoActivate");
static_assert(offsetof(UReturnResultsTerminal, bIsEditorOnly) == 155, "Offset mismatch for UReturnResultsTerminal::bIsEditorOnly");
static_assert(offsetof(UReturnResultsTerminal, CreationMethod) == 185, "Offset mismatch for UReturnResultsTerminal::CreationMethod");
static_assert(offsetof(UReturnResultsTerminal, OnComponentActivated) == 186, "Offset mismatch for UReturnResultsTerminal::OnComponentActivated");
static_assert(offsetof(UReturnResultsTerminal, OnComponentDeactivated) == 187, "Offset mismatch for UReturnResultsTerminal::OnComponentDeactivated");

// /Script/FieldSystemEngine.RotatedRadialVector
// Kind: Class; super: FieldNodeVector
class URotatedRadialVector
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t Position[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float Angle; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00E4
    std::uint8_t Axis[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URotatedRadialVector, Magnitude) == 192, "Offset mismatch for URotatedRadialVector::Magnitude");
static_assert(offsetof(URotatedRadialVector, Position) == 200, "Offset mismatch for URotatedRadialVector::Position");
static_assert(offsetof(URotatedRadialVector, Angle) == 224, "Offset mismatch for URotatedRadialVector::Angle");
static_assert(offsetof(URotatedRadialVector, Axis) == 232, "Offset mismatch for URotatedRadialVector::Axis");

// /Script/FieldSystemEngine.ToFloatField
// Kind: Class; super: FieldNodeFloat
class UToFloatField
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* IntField; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UToFloatField, IntField) == 192, "Offset mismatch for UToFloatField::IntField");

// /Script/FieldSystemEngine.ToIntegerField
// Kind: Class; super: FieldNodeInt
class UToIntegerField
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* FloatField; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UToIntegerField, FloatField) == 192, "Offset mismatch for UToIntegerField::FloatField");

// /Script/FieldSystemEngine.UniformInteger
// Kind: Class; super: FieldNodeInt
class UUniformInteger
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Magnitude; // 0x00C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UUniformInteger, Magnitude) == 192, "Offset mismatch for UUniformInteger::Magnitude");

// /Script/FieldSystemEngine.UniformScalar
// Kind: Class; super: FieldNodeFloat
class UUniformScalar
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUniformScalar, Magnitude) == 192, "Offset mismatch for UUniformScalar::Magnitude");

// /Script/FieldSystemEngine.UniformVector
// Kind: Class; super: FieldNodeVector
class UUniformVector
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t Direction[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUniformVector, Magnitude) == 192, "Offset mismatch for UUniformVector::Magnitude");
static_assert(offsetof(UUniformVector, Direction) == 200, "Offset mismatch for UUniformVector::Direction");

// /Script/FieldSystemEngine.WaveScalar
// Kind: Class; super: FieldNodeFloat
class UWaveScalar
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float Magnitude; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    std::uint8_t Position[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float Wavelength; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Period; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Function; // 0x00E8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Falloff; // 0x00E9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWaveScalar, Magnitude) == 192, "Offset mismatch for UWaveScalar::Magnitude");
static_assert(offsetof(UWaveScalar, Position) == 200, "Offset mismatch for UWaveScalar::Position");
static_assert(offsetof(UWaveScalar, Wavelength) == 224, "Offset mismatch for UWaveScalar::Wavelength");
static_assert(offsetof(UWaveScalar, Period) == 228, "Offset mismatch for UWaveScalar::Period");
static_assert(offsetof(UWaveScalar, Function) == 232, "Offset mismatch for UWaveScalar::Function");
static_assert(offsetof(UWaveScalar, Falloff) == 233, "Offset mismatch for UWaveScalar::Falloff");
