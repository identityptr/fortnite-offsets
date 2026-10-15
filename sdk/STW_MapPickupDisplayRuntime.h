/**
 * decamp dumper generated SDK
 * Package: /Script/STW_MapPickupDisplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/STW_MapPickupDisplayRuntime.STW_PlayerControllerComponent_MapPickupDisplay
// Kind: Class; super: ActorComponent
class USTW_PlayerControllerComponent_MapPickupDisplay
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

static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, PrimaryComponentTick) == 56, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::PrimaryComponentTick");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, ComponentTags) == 104, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::ComponentTags");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, AssetUserData) == 120, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::AssetUserData");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, UCSSerializationIndex) == 144, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::UCSSerializationIndex");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, bNetAddressable) == 152, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::bNetAddressable");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, bAutoActivate) == 154, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::bAutoActivate");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, bIsEditorOnly) == 155, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::bIsEditorOnly");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, CreationMethod) == 185, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::CreationMethod");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, OnComponentActivated) == 186, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::OnComponentActivated");
static_assert(offsetof(USTW_PlayerControllerComponent_MapPickupDisplay, OnComponentDeactivated) == 187, "Offset mismatch for USTW_PlayerControllerComponent_MapPickupDisplay::OnComponentDeactivated");
