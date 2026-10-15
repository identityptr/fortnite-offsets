/**
 * decamp dumper generated SDK
 * Package: /Script/MorningBellItemsManagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MorningBellItemsManagerRuntime.MorningBellActiveItemData
// Kind: ScriptStruct; super: none
struct FMorningBellActiveItemData
{
public:
    void* RewardDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName RequiredCalendarEventFlag; // 0x0010 (Size: 0x8, Type: NameProperty)
    void* UnseenStatusRewardDefinition; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMorningBellActiveItemData, RewardDefinition) == 0, "Offset mismatch for FMorningBellActiveItemData::RewardDefinition");
static_assert(offsetof(FMorningBellActiveItemData, ItemDefinition) == 8, "Offset mismatch for FMorningBellActiveItemData::ItemDefinition");
static_assert(offsetof(FMorningBellActiveItemData, RequiredCalendarEventFlag) == 16, "Offset mismatch for FMorningBellActiveItemData::RequiredCalendarEventFlag");
static_assert(offsetof(FMorningBellActiveItemData, UnseenStatusRewardDefinition) == 24, "Offset mismatch for FMorningBellActiveItemData::UnseenStatusRewardDefinition");

// /Script/MorningBellItemsManagerRuntime.MorningBellItemDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FMorningBellItemDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RewardDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    FName RequiredCalendarEvent; // 0x0048 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> UnseenStatusRewardDefinition; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMorningBellItemDataRow, RewardDefinition) == 8, "Offset mismatch for FMorningBellItemDataRow::RewardDefinition");
static_assert(offsetof(FMorningBellItemDataRow, ItemDefinition) == 40, "Offset mismatch for FMorningBellItemDataRow::ItemDefinition");
static_assert(offsetof(FMorningBellItemDataRow, RequiredCalendarEvent) == 72, "Offset mismatch for FMorningBellItemDataRow::RequiredCalendarEvent");
static_assert(offsetof(FMorningBellItemDataRow, UnseenStatusRewardDefinition) == 80, "Offset mismatch for FMorningBellItemDataRow::UnseenStatusRewardDefinition");

// /Script/MorningBellItemsManagerRuntime.MorningBellItemsCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UMorningBellItemsCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MorningBellItemsManagerRuntime.MorningBellItemsSubsystem
// Kind: Class; super: WorldSubsystem
class UMorningBellItemsSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnActiveItemsChanged; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0078
    TArray<void*> ActiveItems; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMorningBellItemsSubsystem, OnActiveItemsChanged) == 104, "Offset mismatch for UMorningBellItemsSubsystem::OnActiveItemsChanged");
static_assert(offsetof(UMorningBellItemsSubsystem, ActiveItems) == 152, "Offset mismatch for UMorningBellItemsSubsystem::ActiveItems");
