/**
 * decamp dumper generated SDK
 * Package: /Script/WeaponModStationUI
 */
#pragma once
#include "Basic.h"

// /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
// Kind: Class; super: CommonButtonBase
class UAthenaWeaponModsWorkbenchModListEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* EntryViewModel; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaWeaponModsWorkbenchModListEntry, EntryViewModel) == 5544, "Offset mismatch for UAthenaWeaponModsWorkbenchModListEntry::EntryViewModel");

// /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
// Kind: Class; super: CommonUserWidget
class UAthenaWeaponModsWorkbenchModSelection
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ListView_ModChoices; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviousListEntryInputAction[0x10]; // 0x0338 (Size: 0x10, Type: StructProperty)
    std::uint8_t NextListEntryInputAction[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaWeaponModsWorkbenchModSelection, ListView_ModChoices) == 816, "Offset mismatch for UAthenaWeaponModsWorkbenchModSelection::ListView_ModChoices");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModSelection, PreviousListEntryInputAction) == 824, "Offset mismatch for UAthenaWeaponModsWorkbenchModSelection::PreviousListEntryInputAction");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModSelection, NextListEntryInputAction) == 840, "Offset mismatch for UAthenaWeaponModsWorkbenchModSelection::NextListEntryInputAction");

// /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
// Kind: Class; super: CommonButtonBase
class UAthenaWeaponModsWorkbenchModTypeButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t ModTypeTag[0x8]; // 0x15A0 (Size: 0x8, Type: StructProperty)
    void* DefaultModItemDef; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaWeaponModsWorkbenchModTypeButton, ModTypeTag) == 5536, "Offset mismatch for UAthenaWeaponModsWorkbenchModTypeButton::ModTypeTag");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModTypeButton, DefaultModItemDef) == 5544, "Offset mismatch for UAthenaWeaponModsWorkbenchModTypeButton::DefaultModItemDef");

// /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
// Kind: Class; super: CommonUserWidget
class UAthenaWeaponModsWorkbenchModTypeTabs
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t PreviousTabInputAction[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    std::uint8_t NextTabInputAction[0x1]; // 0x0340 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAthenaWeaponModsWorkbenchModTypeTabs, PreviousTabInputAction) == 816, "Offset mismatch for UAthenaWeaponModsWorkbenchModTypeTabs::PreviousTabInputAction");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModTypeTabs, NextTabInputAction) == 832, "Offset mismatch for UAthenaWeaponModsWorkbenchModTypeTabs::NextTabInputAction");

// /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal
// Kind: Class; super: CommonActivatableWidget
class UAthenaWeaponModsWorkbenchModal
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    TArray<void*> BlockedInputActions; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PrimaryContentSetup[0x8]; // 0x04B8 (Size: 0x8, Type: StructProperty)
    void* WorkbenchModalInputComp; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAthenaWeaponModsWorkbenchModal, BlockedInputActions) == 1192, "Offset mismatch for UAthenaWeaponModsWorkbenchModal::BlockedInputActions");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModal, PrimaryContentSetup) == 1208, "Offset mismatch for UAthenaWeaponModsWorkbenchModal::PrimaryContentSetup");
static_assert(offsetof(UAthenaWeaponModsWorkbenchModal, WorkbenchModalInputComp) == 1216, "Offset mismatch for UAthenaWeaponModsWorkbenchModal::WorkbenchModalInputComp");

// /Script/WeaponModStationUI.WeaponModEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class UWeaponModEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ModItemDefinition; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsEquippable; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipped; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWeaponModEntryViewModel, ModItemDefinition) == 104, "Offset mismatch for UWeaponModEntryViewModel::ModItemDefinition");
static_assert(offsetof(UWeaponModEntryViewModel, bIsEquippable) == 112, "Offset mismatch for UWeaponModEntryViewModel::bIsEquippable");
static_assert(offsetof(UWeaponModEntryViewModel, bIsEquipped) == 113, "Offset mismatch for UWeaponModEntryViewModel::bIsEquipped");

// /Script/WeaponModStationUI.WeaponModEquippedWeaponViewModel
// Kind: Class; super: FortPerUserViewModel
class UWeaponModEquippedWeaponViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* EquippedWeapon; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeaponModEquippedWeaponViewModel, EquippedWeapon) == 120, "Offset mismatch for UWeaponModEquippedWeaponViewModel::EquippedWeapon");

// /Script/WeaponModStationUI.WeaponModSlotViewModel
// Kind: Class; super: FortPerUserViewModel
class UWeaponModSlotViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SelectedMod; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeaponModSlotViewModel, SelectedMod) == 120, "Offset mismatch for UWeaponModSlotViewModel::SelectedMod");

// /Script/WeaponModStationUI.WeaponModWorkbenchViewModel
// Kind: Class; super: FortPerUserViewModel
class UWeaponModWorkbenchViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t WorkbenchState; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::uint8_t ActiveModCategory[0x4]; // 0x0094 (Size: 0x4, Type: StructProperty)
    TArray<void*> ModsForActiveCategory; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    void* EquippedWeaponVM; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* SlotVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentWeapon; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeaponModWorkbenchViewModel, WorkbenchState) == 144, "Offset mismatch for UWeaponModWorkbenchViewModel::WorkbenchState");
static_assert(offsetof(UWeaponModWorkbenchViewModel, ActiveModCategory) == 148, "Offset mismatch for UWeaponModWorkbenchViewModel::ActiveModCategory");
static_assert(offsetof(UWeaponModWorkbenchViewModel, ModsForActiveCategory) == 152, "Offset mismatch for UWeaponModWorkbenchViewModel::ModsForActiveCategory");
static_assert(offsetof(UWeaponModWorkbenchViewModel, EquippedWeaponVM) == 168, "Offset mismatch for UWeaponModWorkbenchViewModel::EquippedWeaponVM");
static_assert(offsetof(UWeaponModWorkbenchViewModel, SlotVM) == 176, "Offset mismatch for UWeaponModWorkbenchViewModel::SlotVM");
static_assert(offsetof(UWeaponModWorkbenchViewModel, CurrentWeapon) == 184, "Offset mismatch for UWeaponModWorkbenchViewModel::CurrentWeapon");
