/**
 * decamp dumper generated SDK
 * Package: /Script/BattleRoyaleGameUI
 */
#pragma once
#include "Basic.h"

// /Script/BattleRoyaleGameUI.BattleRoyaleGameUISubsystem
// Kind: Class; super: GameInstanceSubsystem
class UBattleRoyaleGameUISubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSquadListPlacementCVarChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNewHudEnabledCVarChanged; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNewQuickbarEnabledCVarChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKillFeedPlacementCVarChanged; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UBattleRoyaleGameUISubsystem, OnSquadListPlacementCVarChanged) == 48, "Offset mismatch for UBattleRoyaleGameUISubsystem::OnSquadListPlacementCVarChanged");
static_assert(offsetof(UBattleRoyaleGameUISubsystem, OnNewHudEnabledCVarChanged) == 64, "Offset mismatch for UBattleRoyaleGameUISubsystem::OnNewHudEnabledCVarChanged");
static_assert(offsetof(UBattleRoyaleGameUISubsystem, OnNewQuickbarEnabledCVarChanged) == 80, "Offset mismatch for UBattleRoyaleGameUISubsystem::OnNewQuickbarEnabledCVarChanged");
static_assert(offsetof(UBattleRoyaleGameUISubsystem, OnKillFeedPlacementCVarChanged) == 96, "Offset mismatch for UBattleRoyaleGameUISubsystem::OnKillFeedPlacementCVarChanged");

// /Script/BattleRoyaleGameUI.BattleRoyaleQuickbarViewModel
// Kind: Class; super: FortPerUserViewModel
class UBattleRoyaleQuickbarViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsSwitchModeUnboundMessageEnabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBattleRoyaleQuickbarViewModel, bIsSwitchModeUnboundMessageEnabled) == 120, "Offset mismatch for UBattleRoyaleQuickbarViewModel::bIsSwitchModeUnboundMessageEnabled");

// /Script/BattleRoyaleGameUI.InstituteChirpEquippedItemViewModel
// Kind: Class; super: HUDEquippedItemViewModel
class UInstituteChirpEquippedItemViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ItemDurabilityViewModel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ItemCooldownViewmodel; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TrackedAttributes; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemIcon[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> AmmoIcon; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D0
    std::int32_t AmmoCount; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t AmmoSurplus; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00F8
    std::uint8_t bIsCountPercentage; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAmmoSurplus; // 0x0105 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAmmoCount; // 0x0106 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAmmoCountSplit; // 0x0107 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAmmoIcon; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideEverything; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOutOfAmmo; // 0x010A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInstituteChirpEquippedItemViewModel, ItemDurabilityViewModel) == 104, "Offset mismatch for UInstituteChirpEquippedItemViewModel::ItemDurabilityViewModel");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, ItemCooldownViewmodel) == 112, "Offset mismatch for UInstituteChirpEquippedItemViewModel::ItemCooldownViewmodel");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, TrackedAttributes) == 120, "Offset mismatch for UInstituteChirpEquippedItemViewModel::TrackedAttributes");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, ItemIcon) == 136, "Offset mismatch for UInstituteChirpEquippedItemViewModel::ItemIcon");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, AmmoIcon) == 168, "Offset mismatch for UInstituteChirpEquippedItemViewModel::AmmoIcon");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, AmmoCount) == 240, "Offset mismatch for UInstituteChirpEquippedItemViewModel::AmmoCount");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, AmmoSurplus) == 244, "Offset mismatch for UInstituteChirpEquippedItemViewModel::AmmoSurplus");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bIsCountPercentage) == 260, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bIsCountPercentage");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bShowAmmoSurplus) == 261, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bShowAmmoSurplus");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bShowAmmoCount) == 262, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bShowAmmoCount");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bShowAmmoCountSplit) == 263, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bShowAmmoCountSplit");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bShowAmmoIcon) == 264, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bShowAmmoIcon");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bHideEverything) == 265, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bHideEverything");
static_assert(offsetof(UInstituteChirpEquippedItemViewModel, bIsOutOfAmmo) == 266, "Offset mismatch for UInstituteChirpEquippedItemViewModel::bIsOutOfAmmo");

// /Script/BattleRoyaleGameUI.InstituteChirpGadgetFuelViewModel
// Kind: Class; super: MVVMViewModelBase
class UInstituteChirpGadgetFuelViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t FortFuelGadgetVisualType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float FuelChargeCount; // 0x006C (Size: 0x4, Type: FloatProperty)
    float FuelPercentage; // 0x0070 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> Item; // 0x0074 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UInstituteChirpGadgetFuelViewModel, FortFuelGadgetVisualType) == 104, "Offset mismatch for UInstituteChirpGadgetFuelViewModel::FortFuelGadgetVisualType");
static_assert(offsetof(UInstituteChirpGadgetFuelViewModel, FuelChargeCount) == 108, "Offset mismatch for UInstituteChirpGadgetFuelViewModel::FuelChargeCount");
static_assert(offsetof(UInstituteChirpGadgetFuelViewModel, FuelPercentage) == 112, "Offset mismatch for UInstituteChirpGadgetFuelViewModel::FuelPercentage");
static_assert(offsetof(UInstituteChirpGadgetFuelViewModel, Item) == 116, "Offset mismatch for UInstituteChirpGadgetFuelViewModel::Item");

// /Script/BattleRoyaleGameUI.InstituteChirpQuickbarSlotViewModel
// Kind: Class; super: HUDQuickbarSlotViewModel
class UInstituteChirpQuickbarSlotViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* FuelViewModel; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QuickBarType; // 0x0098 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UInstituteChirpQuickbarSlotViewModel, FuelViewModel) == 144, "Offset mismatch for UInstituteChirpQuickbarSlotViewModel::FuelViewModel");
static_assert(offsetof(UInstituteChirpQuickbarSlotViewModel, QuickBarType) == 152, "Offset mismatch for UInstituteChirpQuickbarSlotViewModel::QuickBarType");

// /Script/BattleRoyaleGameUI.QuickbarGizmoSlotVM
// Kind: Class; super: FortPerUserViewModel
class UQuickbarGizmoSlotVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t SlotIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsVisible; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSwapped; // 0x007D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuickbarGizmoSlotVM, SlotIndex) == 120, "Offset mismatch for UQuickbarGizmoSlotVM::SlotIndex");
static_assert(offsetof(UQuickbarGizmoSlotVM, bIsVisible) == 124, "Offset mismatch for UQuickbarGizmoSlotVM::bIsVisible");
static_assert(offsetof(UQuickbarGizmoSlotVM, bIsSwapped) == 125, "Offset mismatch for UQuickbarGizmoSlotVM::bIsSwapped");
