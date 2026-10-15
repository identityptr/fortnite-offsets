/**
 * decamp dumper generated SDK
 * Package: /Script/CompanionsProgressionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CompanionsProgressionRuntime.CompanionPlaytimeRewardsTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FCompanionPlaytimeRewardsTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ProductQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::int32_t PayoutXPAmount; // 0x0050 (Size: 0x4, Type: IntProperty)
    float PayoutIntervalMinutes; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float DisplayIntervalMinutes; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionPlaytimeRewardsTableRow, ProductQuery) == 8, "Offset mismatch for FCompanionPlaytimeRewardsTableRow::ProductQuery");
static_assert(offsetof(FCompanionPlaytimeRewardsTableRow, PayoutXPAmount) == 80, "Offset mismatch for FCompanionPlaytimeRewardsTableRow::PayoutXPAmount");
static_assert(offsetof(FCompanionPlaytimeRewardsTableRow, PayoutIntervalMinutes) == 84, "Offset mismatch for FCompanionPlaytimeRewardsTableRow::PayoutIntervalMinutes");
static_assert(offsetof(FCompanionPlaytimeRewardsTableRow, DisplayIntervalMinutes) == 88, "Offset mismatch for FCompanionPlaytimeRewardsTableRow::DisplayIntervalMinutes");

// /Script/CompanionsProgressionRuntime.FortCompanionXPEntry
// Kind: ScriptStruct; super: none
struct FFortCompanionXPEntry
{
public:
    std::int32_t Amount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t CompanionItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bGrantToEquippedCompanion; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortCompanionXPEntry, Amount) == 0, "Offset mismatch for FFortCompanionXPEntry::Amount");
static_assert(offsetof(FFortCompanionXPEntry, CompanionItemDefinition) == 8, "Offset mismatch for FFortCompanionXPEntry::CompanionItemDefinition");
static_assert(offsetof(FFortCompanionXPEntry, bGrantToEquippedCompanion) == 40, "Offset mismatch for FFortCompanionXPEntry::bGrantToEquippedCompanion");

// /Script/CompanionsProgressionRuntime.FortEventReaction_GrantCompanionXP
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_GrantCompanionXP
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> CompanionXPEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortEventReaction_GrantCompanionXP, CompanionXPEntries) == 8, "Offset mismatch for FFortEventReaction_GrantCompanionXP::CompanionXPEntries");

// /Script/CompanionsProgressionRuntime.CompanionsProgressionCheatManager
// Kind: Class; super: ChildCheatManager
class UCompanionsProgressionCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompanionsProgressionRuntime.FortGameStateComponent_CompanionPlaytimeProgression
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_CompanionPlaytimeProgression
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* CompanionPlaytimeRewardsTable; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_CompanionPlaytimeProgression, CompanionPlaytimeRewardsTable) == 216, "Offset mismatch for UFortGameStateComponent_CompanionPlaytimeProgression::CompanionPlaytimeRewardsTable");

// /Script/CompanionsProgressionRuntime.FortPlayerStateComponent_CompanionPlaytimeProgression
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_CompanionPlaytimeProgression
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

static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, PrimaryComponentTick) == 56, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::PrimaryComponentTick");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, ComponentTags) == 104, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::ComponentTags");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, AssetUserData) == 120, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::AssetUserData");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, UCSSerializationIndex) == 144, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::UCSSerializationIndex");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, bNetAddressable) == 152, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::bNetAddressable");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, bAutoActivate) == 154, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::bAutoActivate");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, bIsEditorOnly) == 155, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::bIsEditorOnly");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, CreationMethod) == 185, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::CreationMethod");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, OnComponentActivated) == 186, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::OnComponentActivated");
static_assert(offsetof(UFortPlayerStateComponent_CompanionPlaytimeProgression, OnComponentDeactivated) == 187, "Offset mismatch for UFortPlayerStateComponent_CompanionPlaytimeProgression::OnComponentDeactivated");
