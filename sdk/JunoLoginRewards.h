/**
 * decamp dumper generated SDK
 * Package: /Script/JunoLoginRewards
 */
#pragma once
#include "Basic.h"

// /Script/JunoLoginRewards.JunoLoginRewardRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoLoginRewardRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString CalendarEventFlag; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> Rewards; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLoginRewardRow, CalendarEventFlag) == 8, "Offset mismatch for FJunoLoginRewardRow::CalendarEventFlag");
static_assert(offsetof(FJunoLoginRewardRow, bEnabled) == 24, "Offset mismatch for FJunoLoginRewardRow::bEnabled");
static_assert(offsetof(FJunoLoginRewardRow, Rewards) == 32, "Offset mismatch for FJunoLoginRewardRow::Rewards");

// /Script/JunoLoginRewards.JunoControllerComponent_LoginRewards
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_LoginRewards
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

static_assert(offsetof(UJunoControllerComponent_LoginRewards, PrimaryComponentTick) == 56, "Offset mismatch for UJunoControllerComponent_LoginRewards::PrimaryComponentTick");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, ComponentTags) == 104, "Offset mismatch for UJunoControllerComponent_LoginRewards::ComponentTags");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, AssetUserData) == 120, "Offset mismatch for UJunoControllerComponent_LoginRewards::AssetUserData");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, UCSSerializationIndex) == 144, "Offset mismatch for UJunoControllerComponent_LoginRewards::UCSSerializationIndex");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, bNetAddressable) == 152, "Offset mismatch for UJunoControllerComponent_LoginRewards::bNetAddressable");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, bAutoActivate) == 154, "Offset mismatch for UJunoControllerComponent_LoginRewards::bAutoActivate");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, bIsEditorOnly) == 155, "Offset mismatch for UJunoControllerComponent_LoginRewards::bIsEditorOnly");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, CreationMethod) == 185, "Offset mismatch for UJunoControllerComponent_LoginRewards::CreationMethod");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, OnComponentActivated) == 186, "Offset mismatch for UJunoControllerComponent_LoginRewards::OnComponentActivated");
static_assert(offsetof(UJunoControllerComponent_LoginRewards, OnComponentDeactivated) == 187, "Offset mismatch for UJunoControllerComponent_LoginRewards::OnComponentDeactivated");

// /Script/JunoLoginRewards.JunoGameStateComponent_LoginRewards
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_LoginRewards
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

static_assert(offsetof(UJunoGameStateComponent_LoginRewards, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_LoginRewards::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_LoginRewards::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_LoginRewards::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_LoginRewards::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_LoginRewards::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_LoginRewards::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_LoginRewards::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_LoginRewards::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_LoginRewards::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_LoginRewards, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_LoginRewards::OnComponentDeactivated");
