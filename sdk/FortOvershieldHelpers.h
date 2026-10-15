/**
 * decamp dumper generated SDK
 * Package: /Script/FortOvershieldHelpers
 */
#pragma once
#include "Basic.h"

// /Script/FortOvershieldHelpers.FortOvershieldDelegateContainer
// Kind: ScriptStruct; super: none
struct FFortOvershieldDelegateContainer
{
public:
    std::uint8_t OnOvershieldChanged[0xC]; // 0x0000 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnShieldedDamage[0xC]; // 0x000C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnOvershieldedDamage[0xC]; // 0x0018 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnShieldDestroyed[0xC]; // 0x0024 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnOvershieldDestroyed[0xC]; // 0x0030 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnDamageReceived; // 0x003C (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldChanged) == 0, "Offset mismatch for FFortOvershieldDelegateContainer::OnOvershieldChanged");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnShieldedDamage) == 12, "Offset mismatch for FFortOvershieldDelegateContainer::OnShieldedDamage");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldedDamage) == 24, "Offset mismatch for FFortOvershieldDelegateContainer::OnOvershieldedDamage");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnShieldDestroyed) == 36, "Offset mismatch for FFortOvershieldDelegateContainer::OnShieldDestroyed");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnOvershieldDestroyed) == 48, "Offset mismatch for FFortOvershieldDelegateContainer::OnOvershieldDestroyed");
static_assert(offsetof(FFortOvershieldDelegateContainer, OnDamageReceived) == 60, "Offset mismatch for FFortOvershieldDelegateContainer::OnDamageReceived");

// /Script/FortOvershieldHelpers.FortOvershieldHelperComponent
// Kind: Class; super: ActorComponent
class UFortOvershieldHelperComponent
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

static_assert(offsetof(UFortOvershieldHelperComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortOvershieldHelperComponent::PrimaryComponentTick");
static_assert(offsetof(UFortOvershieldHelperComponent, ComponentTags) == 104, "Offset mismatch for UFortOvershieldHelperComponent::ComponentTags");
static_assert(offsetof(UFortOvershieldHelperComponent, AssetUserData) == 120, "Offset mismatch for UFortOvershieldHelperComponent::AssetUserData");
static_assert(offsetof(UFortOvershieldHelperComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortOvershieldHelperComponent::UCSSerializationIndex");
static_assert(offsetof(UFortOvershieldHelperComponent, bNetAddressable) == 152, "Offset mismatch for UFortOvershieldHelperComponent::bNetAddressable");
static_assert(offsetof(UFortOvershieldHelperComponent, bAutoActivate) == 154, "Offset mismatch for UFortOvershieldHelperComponent::bAutoActivate");
static_assert(offsetof(UFortOvershieldHelperComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortOvershieldHelperComponent::bIsEditorOnly");
static_assert(offsetof(UFortOvershieldHelperComponent, CreationMethod) == 185, "Offset mismatch for UFortOvershieldHelperComponent::CreationMethod");
static_assert(offsetof(UFortOvershieldHelperComponent, OnComponentActivated) == 186, "Offset mismatch for UFortOvershieldHelperComponent::OnComponentActivated");
static_assert(offsetof(UFortOvershieldHelperComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortOvershieldHelperComponent::OnComponentDeactivated");
