/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamCoreRuntime.JamClientSettingsRecordPartition
// Kind: Class; super: FortClientSettingRecordPartition
class UJamClientSettingsRecordPartition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t UsersJamQuantizationMethod; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SavedDefaultJamPrivacy; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SessionDefaultJamPrivacy; // 0x005A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJamClientSettingsRecordPartition, UsersJamQuantizationMethod) == 88, "Offset mismatch for UJamClientSettingsRecordPartition::UsersJamQuantizationMethod");
static_assert(offsetof(UJamClientSettingsRecordPartition, SavedDefaultJamPrivacy) == 89, "Offset mismatch for UJamClientSettingsRecordPartition::SavedDefaultJamPrivacy");
static_assert(offsetof(UJamClientSettingsRecordPartition, SessionDefaultJamPrivacy) == 90, "Offset mismatch for UJamClientSettingsRecordPartition::SessionDefaultJamPrivacy");

// /Script/FMJamCoreRuntime.JamControllerComponent_QuestPersistence
// Kind: Class; super: FortControllerComponent_QuestPersistence
class UJamControllerComponent_QuestPersistence
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

static_assert(offsetof(UJamControllerComponent_QuestPersistence, PrimaryComponentTick) == 56, "Offset mismatch for UJamControllerComponent_QuestPersistence::PrimaryComponentTick");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, ComponentTags) == 104, "Offset mismatch for UJamControllerComponent_QuestPersistence::ComponentTags");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, AssetUserData) == 120, "Offset mismatch for UJamControllerComponent_QuestPersistence::AssetUserData");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, UCSSerializationIndex) == 144, "Offset mismatch for UJamControllerComponent_QuestPersistence::UCSSerializationIndex");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, bNetAddressable) == 152, "Offset mismatch for UJamControllerComponent_QuestPersistence::bNetAddressable");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, bAutoActivate) == 154, "Offset mismatch for UJamControllerComponent_QuestPersistence::bAutoActivate");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, bIsEditorOnly) == 155, "Offset mismatch for UJamControllerComponent_QuestPersistence::bIsEditorOnly");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, CreationMethod) == 185, "Offset mismatch for UJamControllerComponent_QuestPersistence::CreationMethod");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, OnComponentActivated) == 186, "Offset mismatch for UJamControllerComponent_QuestPersistence::OnComponentActivated");
static_assert(offsetof(UJamControllerComponent_QuestPersistence, OnComponentDeactivated) == 187, "Offset mismatch for UJamControllerComponent_QuestPersistence::OnComponentDeactivated");

// /Script/FMJamCoreRuntime.JamCoreBPFL
// Kind: Class; super: BlueprintFunctionLibrary
class UJamCoreBPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamCoreRuntime.JamOverrides
// Kind: Class; super: GameStateComponent
class UJamOverrides
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* JamVolume; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* JamSessionClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJamOverrides, JamVolume) == 192, "Offset mismatch for UJamOverrides::JamVolume");
static_assert(offsetof(UJamOverrides, JamSessionClass) == 200, "Offset mismatch for UJamOverrides::JamSessionClass");
