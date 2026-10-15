/**
 * decamp dumper generated SDK
 * Package: /Script/JunoRuneForgeUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoRuneForgeUI.JunoPlayerEssenceViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoPlayerEssenceViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* RuneRollComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* FortPlayerController; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerEssenceViewModel, RuneRollComponent) == 104, "Offset mismatch for UJunoPlayerEssenceViewModel::RuneRollComponent");
static_assert(offsetof(UJunoPlayerEssenceViewModel, FortPlayerController) == 112, "Offset mismatch for UJunoPlayerEssenceViewModel::FortPlayerController");

// /Script/JunoRuneForgeUI.JunoRuneEntry
// Kind: Class; super: CommonUserWidget
class UJunoRuneEntry
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoRuneEntry, bDisplayInActionBar) == 776, "Offset mismatch for UJunoRuneEntry::bDisplayInActionBar");
static_assert(offsetof(UJunoRuneEntry, bConsumePointerInput) == 777, "Offset mismatch for UJunoRuneEntry::bConsumePointerInput");

// /Script/JunoRuneForgeUI.JunoRuneForgeScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoRuneForgeScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* JunoCraftingObjectBGA; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Juno_CloseButton_Touch; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* SelectedSlotViewModel; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* RuneForgeViewModel; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRuneForgeScreen, JunoCraftingObjectBGA) == 1192, "Offset mismatch for UJunoRuneForgeScreen::JunoCraftingObjectBGA");
static_assert(offsetof(UJunoRuneForgeScreen, WBP_Juno_CloseButton_Touch) == 1200, "Offset mismatch for UJunoRuneForgeScreen::WBP_Juno_CloseButton_Touch");
static_assert(offsetof(UJunoRuneForgeScreen, SelectedSlotViewModel) == 1208, "Offset mismatch for UJunoRuneForgeScreen::SelectedSlotViewModel");
static_assert(offsetof(UJunoRuneForgeScreen, RuneForgeViewModel) == 1216, "Offset mismatch for UJunoRuneForgeScreen::RuneForgeViewModel");

// /Script/JunoRuneForgeUI.JunoRuneForgeViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRuneForgeViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* ItemViewModel; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* PlayerEssenceViewModel; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* SelectedRuneToForgeViewModel; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SelectedRuneToForgeIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t RuneForgeState; // 0x009C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x009D
    void* FortPC; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRuneForgeViewModel, ItemViewModel) == 128, "Offset mismatch for UJunoRuneForgeViewModel::ItemViewModel");
static_assert(offsetof(UJunoRuneForgeViewModel, PlayerEssenceViewModel) == 136, "Offset mismatch for UJunoRuneForgeViewModel::PlayerEssenceViewModel");
static_assert(offsetof(UJunoRuneForgeViewModel, SelectedRuneToForgeViewModel) == 144, "Offset mismatch for UJunoRuneForgeViewModel::SelectedRuneToForgeViewModel");
static_assert(offsetof(UJunoRuneForgeViewModel, SelectedRuneToForgeIndex) == 152, "Offset mismatch for UJunoRuneForgeViewModel::SelectedRuneToForgeIndex");
static_assert(offsetof(UJunoRuneForgeViewModel, RuneForgeState) == 156, "Offset mismatch for UJunoRuneForgeViewModel::RuneForgeState");
static_assert(offsetof(UJunoRuneForgeViewModel, FortPC) == 160, "Offset mismatch for UJunoRuneForgeViewModel::FortPC");
