/**
 * decamp dumper generated SDK
 * Package: /Script/ModularGameplay
 */
#pragma once
#include "Basic.h"

// /Script/ModularGameplay.ActorInitStateChangedParams
// Kind: ScriptStruct; super: none
struct FActorInitStateChangedParams
{
public:
    void* OwningActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName FeatureName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* Implementer; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FeatureState[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActorInitStateChangedParams, OwningActor) == 0, "Offset mismatch for FActorInitStateChangedParams::OwningActor");
static_assert(offsetof(FActorInitStateChangedParams, FeatureName) == 8, "Offset mismatch for FActorInitStateChangedParams::FeatureName");
static_assert(offsetof(FActorInitStateChangedParams, Implementer) == 16, "Offset mismatch for FActorInitStateChangedParams::Implementer");
static_assert(offsetof(FActorInitStateChangedParams, FeatureState) == 24, "Offset mismatch for FActorInitStateChangedParams::FeatureState");

// /Script/ModularGameplay.ControllerComponent
// Kind: Class; super: GameFrameworkComponent
class UControllerComponent
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

static_assert(offsetof(UControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UControllerComponent, ComponentTags) == 104, "Offset mismatch for UControllerComponent::ComponentTags");
static_assert(offsetof(UControllerComponent, AssetUserData) == 120, "Offset mismatch for UControllerComponent::AssetUserData");
static_assert(offsetof(UControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UControllerComponent, bNetAddressable) == 152, "Offset mismatch for UControllerComponent::bNetAddressable");
static_assert(offsetof(UControllerComponent, bAutoActivate) == 154, "Offset mismatch for UControllerComponent::bAutoActivate");
static_assert(offsetof(UControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UControllerComponent::bIsEditorOnly");
static_assert(offsetof(UControllerComponent, CreationMethod) == 185, "Offset mismatch for UControllerComponent::CreationMethod");
static_assert(offsetof(UControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UControllerComponent::OnComponentActivated");
static_assert(offsetof(UControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UControllerComponent::OnComponentDeactivated");

// /Script/ModularGameplay.GameFrameworkComponent
// Kind: Class; super: ActorComponent
class UGameFrameworkComponent
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

static_assert(offsetof(UGameFrameworkComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGameFrameworkComponent::PrimaryComponentTick");
static_assert(offsetof(UGameFrameworkComponent, ComponentTags) == 104, "Offset mismatch for UGameFrameworkComponent::ComponentTags");
static_assert(offsetof(UGameFrameworkComponent, AssetUserData) == 120, "Offset mismatch for UGameFrameworkComponent::AssetUserData");
static_assert(offsetof(UGameFrameworkComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGameFrameworkComponent::UCSSerializationIndex");
static_assert(offsetof(UGameFrameworkComponent, bNetAddressable) == 152, "Offset mismatch for UGameFrameworkComponent::bNetAddressable");
static_assert(offsetof(UGameFrameworkComponent, bAutoActivate) == 154, "Offset mismatch for UGameFrameworkComponent::bAutoActivate");
static_assert(offsetof(UGameFrameworkComponent, bIsEditorOnly) == 155, "Offset mismatch for UGameFrameworkComponent::bIsEditorOnly");
static_assert(offsetof(UGameFrameworkComponent, CreationMethod) == 185, "Offset mismatch for UGameFrameworkComponent::CreationMethod");
static_assert(offsetof(UGameFrameworkComponent, OnComponentActivated) == 186, "Offset mismatch for UGameFrameworkComponent::OnComponentActivated");
static_assert(offsetof(UGameFrameworkComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGameFrameworkComponent::OnComponentDeactivated");

// /Script/ModularGameplay.GameFrameworkComponentManager
// Kind: Class; super: GameInstanceSubsystem
class UGameFrameworkComponentManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularGameplay.GameFrameworkInitStateInterface
// Kind: Class; super: Interface
class UGameFrameworkInitStateInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularGameplay.GameStateComponent
// Kind: Class; super: GameFrameworkComponent
class UGameStateComponent
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

static_assert(offsetof(UGameStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for UGameStateComponent::PrimaryComponentTick");
static_assert(offsetof(UGameStateComponent, ComponentTags) == 104, "Offset mismatch for UGameStateComponent::ComponentTags");
static_assert(offsetof(UGameStateComponent, AssetUserData) == 120, "Offset mismatch for UGameStateComponent::AssetUserData");
static_assert(offsetof(UGameStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for UGameStateComponent::UCSSerializationIndex");
static_assert(offsetof(UGameStateComponent, bNetAddressable) == 152, "Offset mismatch for UGameStateComponent::bNetAddressable");
static_assert(offsetof(UGameStateComponent, bAutoActivate) == 154, "Offset mismatch for UGameStateComponent::bAutoActivate");
static_assert(offsetof(UGameStateComponent, bIsEditorOnly) == 155, "Offset mismatch for UGameStateComponent::bIsEditorOnly");
static_assert(offsetof(UGameStateComponent, CreationMethod) == 185, "Offset mismatch for UGameStateComponent::CreationMethod");
static_assert(offsetof(UGameStateComponent, OnComponentActivated) == 186, "Offset mismatch for UGameStateComponent::OnComponentActivated");
static_assert(offsetof(UGameStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for UGameStateComponent::OnComponentDeactivated");

// /Script/ModularGameplay.PawnComponent
// Kind: Class; super: GameFrameworkComponent
class UPawnComponent
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

static_assert(offsetof(UPawnComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPawnComponent::PrimaryComponentTick");
static_assert(offsetof(UPawnComponent, ComponentTags) == 104, "Offset mismatch for UPawnComponent::ComponentTags");
static_assert(offsetof(UPawnComponent, AssetUserData) == 120, "Offset mismatch for UPawnComponent::AssetUserData");
static_assert(offsetof(UPawnComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPawnComponent::UCSSerializationIndex");
static_assert(offsetof(UPawnComponent, bNetAddressable) == 152, "Offset mismatch for UPawnComponent::bNetAddressable");
static_assert(offsetof(UPawnComponent, bAutoActivate) == 154, "Offset mismatch for UPawnComponent::bAutoActivate");
static_assert(offsetof(UPawnComponent, bIsEditorOnly) == 155, "Offset mismatch for UPawnComponent::bIsEditorOnly");
static_assert(offsetof(UPawnComponent, CreationMethod) == 185, "Offset mismatch for UPawnComponent::CreationMethod");
static_assert(offsetof(UPawnComponent, OnComponentActivated) == 186, "Offset mismatch for UPawnComponent::OnComponentActivated");
static_assert(offsetof(UPawnComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPawnComponent::OnComponentDeactivated");

// /Script/ModularGameplay.PlayerStateComponent
// Kind: Class; super: GameFrameworkComponent
class UPlayerStateComponent
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

static_assert(offsetof(UPlayerStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPlayerStateComponent::PrimaryComponentTick");
static_assert(offsetof(UPlayerStateComponent, ComponentTags) == 104, "Offset mismatch for UPlayerStateComponent::ComponentTags");
static_assert(offsetof(UPlayerStateComponent, AssetUserData) == 120, "Offset mismatch for UPlayerStateComponent::AssetUserData");
static_assert(offsetof(UPlayerStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPlayerStateComponent::UCSSerializationIndex");
static_assert(offsetof(UPlayerStateComponent, bNetAddressable) == 152, "Offset mismatch for UPlayerStateComponent::bNetAddressable");
static_assert(offsetof(UPlayerStateComponent, bAutoActivate) == 154, "Offset mismatch for UPlayerStateComponent::bAutoActivate");
static_assert(offsetof(UPlayerStateComponent, bIsEditorOnly) == 155, "Offset mismatch for UPlayerStateComponent::bIsEditorOnly");
static_assert(offsetof(UPlayerStateComponent, CreationMethod) == 185, "Offset mismatch for UPlayerStateComponent::CreationMethod");
static_assert(offsetof(UPlayerStateComponent, OnComponentActivated) == 186, "Offset mismatch for UPlayerStateComponent::OnComponentActivated");
static_assert(offsetof(UPlayerStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPlayerStateComponent::OnComponentDeactivated");
