/**
 * decamp dumper generated SDK
 * Package: /Script/JunoNPCTrackerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoNPCTrackerRuntime.JunoNPCTrackerSettingsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoNPCTrackerSettingsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NpcDescriptorTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Marker[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t MarkerEndCondition[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoNPCTrackerSettingsRow, NpcDescriptorTag) == 8, "Offset mismatch for FJunoNPCTrackerSettingsRow::NpcDescriptorTag");
static_assert(offsetof(FJunoNPCTrackerSettingsRow, Marker) == 16, "Offset mismatch for FJunoNPCTrackerSettingsRow::Marker");
static_assert(offsetof(FJunoNPCTrackerSettingsRow, MarkerEndCondition) == 288, "Offset mismatch for FJunoNPCTrackerSettingsRow::MarkerEndCondition");

// /Script/JunoNPCTrackerRuntime.NpcMarkerData
// Kind: ScriptStruct; super: none
struct FNpcMarkerData
{
public:
    std::uint8_t Marker[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNpcMarkerData, Marker) == 0, "Offset mismatch for FNpcMarkerData::Marker");

// /Script/JunoNPCTrackerRuntime.JunoGameStateComponent_NPCTracker
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_NPCTracker
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bUseAIPersistence; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t TrackedNpcRegistry[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    TMap<void*, void*> NpcMarkerDataMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoGameStateComponent_NPCTracker, bUseAIPersistence) == 192, "Offset mismatch for UJunoGameStateComponent_NPCTracker::bUseAIPersistence");
static_assert(offsetof(UJunoGameStateComponent_NPCTracker, TrackedNpcRegistry) == 196, "Offset mismatch for UJunoGameStateComponent_NPCTracker::TrackedNpcRegistry");
static_assert(offsetof(UJunoGameStateComponent_NPCTracker, NpcMarkerDataMap) == 200, "Offset mismatch for UJunoGameStateComponent_NPCTracker::NpcMarkerDataMap");

// /Script/JunoNPCTrackerRuntime.JunoNPCTrackerRegistrationComponent
// Kind: Class; super: ActorComponent
class UJunoNPCTrackerRegistrationComponent
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

static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, ComponentTags) == 104, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::ComponentTags");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, AssetUserData) == 120, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::AssetUserData");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, bNetAddressable) == 152, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::bNetAddressable");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, bAutoActivate) == 154, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::bAutoActivate");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::bIsEditorOnly");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, CreationMethod) == 185, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::CreationMethod");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::OnComponentActivated");
static_assert(offsetof(UJunoNPCTrackerRegistrationComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoNPCTrackerRegistrationComponent::OnComponentDeactivated");

// /Script/JunoNPCTrackerRuntime.JunoTrackedNPCEndConditionSchema
// Kind: Class; super: WorldConditionSchema
class UJunoTrackedNPCEndConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoTrackedNPCEndConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UJunoTrackedNPCEndConditionSchema::ContextDataDescs");
