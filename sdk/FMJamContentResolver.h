/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamContentResolver
 */
#pragma once
#include "Basic.h"

// /Script/FMJamContentResolver.JamContentResolver
// Kind: Class; super: GameStateComponent
class UJamContentResolver
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

static_assert(offsetof(UJamContentResolver, PrimaryComponentTick) == 56, "Offset mismatch for UJamContentResolver::PrimaryComponentTick");
static_assert(offsetof(UJamContentResolver, ComponentTags) == 104, "Offset mismatch for UJamContentResolver::ComponentTags");
static_assert(offsetof(UJamContentResolver, AssetUserData) == 120, "Offset mismatch for UJamContentResolver::AssetUserData");
static_assert(offsetof(UJamContentResolver, UCSSerializationIndex) == 144, "Offset mismatch for UJamContentResolver::UCSSerializationIndex");
static_assert(offsetof(UJamContentResolver, bNetAddressable) == 152, "Offset mismatch for UJamContentResolver::bNetAddressable");
static_assert(offsetof(UJamContentResolver, bAutoActivate) == 154, "Offset mismatch for UJamContentResolver::bAutoActivate");
static_assert(offsetof(UJamContentResolver, bIsEditorOnly) == 155, "Offset mismatch for UJamContentResolver::bIsEditorOnly");
static_assert(offsetof(UJamContentResolver, CreationMethod) == 185, "Offset mismatch for UJamContentResolver::CreationMethod");
static_assert(offsetof(UJamContentResolver, OnComponentActivated) == 186, "Offset mismatch for UJamContentResolver::OnComponentActivated");
static_assert(offsetof(UJamContentResolver, OnComponentDeactivated) == 187, "Offset mismatch for UJamContentResolver::OnComponentDeactivated");

// /Script/FMJamContentResolver.JamControllerComponent_ContentResolver
// Kind: Class; super: ControllerComponent
class UJamControllerComponent_ContentResolver
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

static_assert(offsetof(UJamControllerComponent_ContentResolver, PrimaryComponentTick) == 56, "Offset mismatch for UJamControllerComponent_ContentResolver::PrimaryComponentTick");
static_assert(offsetof(UJamControllerComponent_ContentResolver, ComponentTags) == 104, "Offset mismatch for UJamControllerComponent_ContentResolver::ComponentTags");
static_assert(offsetof(UJamControllerComponent_ContentResolver, AssetUserData) == 120, "Offset mismatch for UJamControllerComponent_ContentResolver::AssetUserData");
static_assert(offsetof(UJamControllerComponent_ContentResolver, UCSSerializationIndex) == 144, "Offset mismatch for UJamControllerComponent_ContentResolver::UCSSerializationIndex");
static_assert(offsetof(UJamControllerComponent_ContentResolver, bNetAddressable) == 152, "Offset mismatch for UJamControllerComponent_ContentResolver::bNetAddressable");
static_assert(offsetof(UJamControllerComponent_ContentResolver, bAutoActivate) == 154, "Offset mismatch for UJamControllerComponent_ContentResolver::bAutoActivate");
static_assert(offsetof(UJamControllerComponent_ContentResolver, bIsEditorOnly) == 155, "Offset mismatch for UJamControllerComponent_ContentResolver::bIsEditorOnly");
static_assert(offsetof(UJamControllerComponent_ContentResolver, CreationMethod) == 185, "Offset mismatch for UJamControllerComponent_ContentResolver::CreationMethod");
static_assert(offsetof(UJamControllerComponent_ContentResolver, OnComponentActivated) == 186, "Offset mismatch for UJamControllerComponent_ContentResolver::OnComponentActivated");
static_assert(offsetof(UJamControllerComponent_ContentResolver, OnComponentDeactivated) == 187, "Offset mismatch for UJamControllerComponent_ContentResolver::OnComponentDeactivated");
