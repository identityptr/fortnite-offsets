/**
 * decamp dumper generated SDK
 * Package: /Script/PlayerAIPetRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PlayerAIPetRuntime.FortAIPawnComponent_PlayerAIPet
// Kind: Class; super: FortPawnComponent
class UFortAIPawnComponent_PlayerAIPet
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CurrentPlayer; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAIPawnComponent_PlayerAIPet, CurrentPlayer) == 200, "Offset mismatch for UFortAIPawnComponent_PlayerAIPet::CurrentPlayer");

// /Script/PlayerAIPetRuntime.FortControllerComponent_PlayerAIPet
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_PlayerAIPet
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CurrentPet; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_PlayerAIPet, CurrentPet) == 200, "Offset mismatch for UFortControllerComponent_PlayerAIPet::CurrentPet");

// /Script/PlayerAIPetRuntime.FortGameStateComponent_PlayerAIPet
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_PlayerAIPet
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

static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_PlayerAIPet, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_PlayerAIPet::OnComponentDeactivated");

// /Script/PlayerAIPetRuntime.PlayerAIPetCheatManager
// Kind: Class; super: ChildCheatManager
class UPlayerAIPetCheatManager
{
public:
    std::uint8_t Opaque[1];
};
