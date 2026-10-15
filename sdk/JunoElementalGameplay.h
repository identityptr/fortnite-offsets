/**
 * decamp dumper generated SDK
 * Package: /Script/JunoElementalGameplay
 */
#pragma once
#include "Basic.h"

// /Script/JunoElementalGameplay.JunoEarthElementalAttributeSet
// Kind: Class; super: JunoElementalAttributeSetBase
class UJunoEarthElementalAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t JunoCurrentEarthAffliction[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoMaxEarthAffliction[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoIncomingEarthAffliction[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoEarthElementalAttributeSet, JunoCurrentEarthAffliction) == 80, "Offset mismatch for UJunoEarthElementalAttributeSet::JunoCurrentEarthAffliction");
static_assert(offsetof(UJunoEarthElementalAttributeSet, JunoMaxEarthAffliction) == 96, "Offset mismatch for UJunoEarthElementalAttributeSet::JunoMaxEarthAffliction");
static_assert(offsetof(UJunoEarthElementalAttributeSet, JunoIncomingEarthAffliction) == 112, "Offset mismatch for UJunoEarthElementalAttributeSet::JunoIncomingEarthAffliction");

// /Script/JunoElementalGameplay.JunoElementalAttributeSetBase
// Kind: Class; super: FortAttributeSet
class UJunoElementalAttributeSetBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoElementalGameplay.JunoElementalPawnComponent
// Kind: Class; super: FortPawnComponent
class UJunoElementalPawnComponent
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

static_assert(offsetof(UJunoElementalPawnComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoElementalPawnComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoElementalPawnComponent, ComponentTags) == 104, "Offset mismatch for UJunoElementalPawnComponent::ComponentTags");
static_assert(offsetof(UJunoElementalPawnComponent, AssetUserData) == 120, "Offset mismatch for UJunoElementalPawnComponent::AssetUserData");
static_assert(offsetof(UJunoElementalPawnComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoElementalPawnComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoElementalPawnComponent, bNetAddressable) == 152, "Offset mismatch for UJunoElementalPawnComponent::bNetAddressable");
static_assert(offsetof(UJunoElementalPawnComponent, bAutoActivate) == 154, "Offset mismatch for UJunoElementalPawnComponent::bAutoActivate");
static_assert(offsetof(UJunoElementalPawnComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoElementalPawnComponent::bIsEditorOnly");
static_assert(offsetof(UJunoElementalPawnComponent, CreationMethod) == 185, "Offset mismatch for UJunoElementalPawnComponent::CreationMethod");
static_assert(offsetof(UJunoElementalPawnComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoElementalPawnComponent::OnComponentActivated");
static_assert(offsetof(UJunoElementalPawnComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoElementalPawnComponent::OnComponentDeactivated");

// /Script/JunoElementalGameplay.JunoFireElementalAttributeSet
// Kind: Class; super: JunoElementalAttributeSetBase
class UJunoFireElementalAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t JunoCurrentFireAffliction[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoMaxFireAffliction[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoIncomingFireAffliction[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoFireElementalAttributeSet, JunoCurrentFireAffliction) == 80, "Offset mismatch for UJunoFireElementalAttributeSet::JunoCurrentFireAffliction");
static_assert(offsetof(UJunoFireElementalAttributeSet, JunoMaxFireAffliction) == 96, "Offset mismatch for UJunoFireElementalAttributeSet::JunoMaxFireAffliction");
static_assert(offsetof(UJunoFireElementalAttributeSet, JunoIncomingFireAffliction) == 112, "Offset mismatch for UJunoFireElementalAttributeSet::JunoIncomingFireAffliction");

// /Script/JunoElementalGameplay.JunoIceElementalAttributeSet
// Kind: Class; super: JunoElementalAttributeSetBase
class UJunoIceElementalAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t JunoCurrentIceAffliction[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoMaxIceAffliction[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoIncomingIceAffliction[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoIceElementalAttributeSet, JunoCurrentIceAffliction) == 80, "Offset mismatch for UJunoIceElementalAttributeSet::JunoCurrentIceAffliction");
static_assert(offsetof(UJunoIceElementalAttributeSet, JunoMaxIceAffliction) == 96, "Offset mismatch for UJunoIceElementalAttributeSet::JunoMaxIceAffliction");
static_assert(offsetof(UJunoIceElementalAttributeSet, JunoIncomingIceAffliction) == 112, "Offset mismatch for UJunoIceElementalAttributeSet::JunoIncomingIceAffliction");

// /Script/JunoElementalGameplay.JunoLightningElementalAttributeSet
// Kind: Class; super: JunoElementalAttributeSetBase
class UJunoLightningElementalAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t JunoCurrentLightningAffliction[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoMaxLightningAffliction[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t JunoIncomingLightningAffliction[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoLightningElementalAttributeSet, JunoCurrentLightningAffliction) == 80, "Offset mismatch for UJunoLightningElementalAttributeSet::JunoCurrentLightningAffliction");
static_assert(offsetof(UJunoLightningElementalAttributeSet, JunoMaxLightningAffliction) == 96, "Offset mismatch for UJunoLightningElementalAttributeSet::JunoMaxLightningAffliction");
static_assert(offsetof(UJunoLightningElementalAttributeSet, JunoIncomingLightningAffliction) == 112, "Offset mismatch for UJunoLightningElementalAttributeSet::JunoIncomingLightningAffliction");
