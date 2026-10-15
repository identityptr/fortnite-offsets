/**
 * decamp dumper generated SDK
 * Package: /Script/HealthShieldRegenRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
// Kind: ScriptStruct; super: none
struct FFortHealthShieldRegen_HealthDelegateContainer
{
public:
    std::uint8_t OnHealthChanged[0xC]; // 0x0000 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnDamageReceived; // 0x000C (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FFortHealthShieldRegen_HealthDelegateContainer, OnHealthChanged) == 0, "Offset mismatch for FFortHealthShieldRegen_HealthDelegateContainer::OnHealthChanged");
static_assert(offsetof(FFortHealthShieldRegen_HealthDelegateContainer, OnDamageReceived) == 12, "Offset mismatch for FFortHealthShieldRegen_HealthDelegateContainer::OnDamageReceived");

// /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
// Kind: ScriptStruct; super: none
struct FFortHealthShieldRegen_ShieldDelegateContainer
{
public:
    std::uint8_t OnShieldChanged[0xC]; // 0x0000 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnShieldedDamage[0xC]; // 0x000C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnShieldDestroyed[0xC]; // 0x0018 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnDamageReceived; // 0x0024 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldChanged) == 0, "Offset mismatch for FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldChanged");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldedDamage) == 12, "Offset mismatch for FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldedDamage");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnShieldDestroyed) == 24, "Offset mismatch for FFortHealthShieldRegen_ShieldDelegateContainer::OnShieldDestroyed");
static_assert(offsetof(FFortHealthShieldRegen_ShieldDelegateContainer, OnDamageReceived) == 36, "Offset mismatch for FFortHealthShieldRegen_ShieldDelegateContainer::OnDamageReceived");

// /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
// Kind: Class; super: ActorComponent
class UFortHealthShieldRegenComponent
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

static_assert(offsetof(UFortHealthShieldRegenComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortHealthShieldRegenComponent::PrimaryComponentTick");
static_assert(offsetof(UFortHealthShieldRegenComponent, ComponentTags) == 104, "Offset mismatch for UFortHealthShieldRegenComponent::ComponentTags");
static_assert(offsetof(UFortHealthShieldRegenComponent, AssetUserData) == 120, "Offset mismatch for UFortHealthShieldRegenComponent::AssetUserData");
static_assert(offsetof(UFortHealthShieldRegenComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortHealthShieldRegenComponent::UCSSerializationIndex");
static_assert(offsetof(UFortHealthShieldRegenComponent, bNetAddressable) == 152, "Offset mismatch for UFortHealthShieldRegenComponent::bNetAddressable");
static_assert(offsetof(UFortHealthShieldRegenComponent, bAutoActivate) == 154, "Offset mismatch for UFortHealthShieldRegenComponent::bAutoActivate");
static_assert(offsetof(UFortHealthShieldRegenComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortHealthShieldRegenComponent::bIsEditorOnly");
static_assert(offsetof(UFortHealthShieldRegenComponent, CreationMethod) == 185, "Offset mismatch for UFortHealthShieldRegenComponent::CreationMethod");
static_assert(offsetof(UFortHealthShieldRegenComponent, OnComponentActivated) == 186, "Offset mismatch for UFortHealthShieldRegenComponent::OnComponentActivated");
static_assert(offsetof(UFortHealthShieldRegenComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortHealthShieldRegenComponent::OnComponentDeactivated");
