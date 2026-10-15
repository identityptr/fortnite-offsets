/**
 * decamp dumper generated SDK
 * Package: /Script/MorningBellBasketRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MorningBellBasketRuntime.FortControllerComponent_MorningBellBasket
// Kind: Class; super: FortControllerComponent_QuickBarDefinitionsModifier
class UFortControllerComponent_MorningBellBasket
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bOverridePrimaryQuickBar; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverridePimaryQuickBarSlotCount; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00CA
    std::int32_t PrimaryQuickBarSlotCountOverride; // 0x00CC (Size: 0x4, Type: IntProperty)
    TArray<void*> PrimaryQuickBarPerSlotOverrideData; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideSecondaryQuickbar; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00E1
    TArray<void*> SecondaryQuickBarPerSlotOverrideData; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideCreativeQuickbar; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00F9
    TArray<void*> CreativeQuickBarPerSlotOverrideData; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_MorningBellBasket, bOverridePrimaryQuickBar) == 200, "Offset mismatch for UFortControllerComponent_MorningBellBasket::bOverridePrimaryQuickBar");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, bOverridePimaryQuickBarSlotCount) == 201, "Offset mismatch for UFortControllerComponent_MorningBellBasket::bOverridePimaryQuickBarSlotCount");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, PrimaryQuickBarSlotCountOverride) == 204, "Offset mismatch for UFortControllerComponent_MorningBellBasket::PrimaryQuickBarSlotCountOverride");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, PrimaryQuickBarPerSlotOverrideData) == 208, "Offset mismatch for UFortControllerComponent_MorningBellBasket::PrimaryQuickBarPerSlotOverrideData");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, bOverrideSecondaryQuickbar) == 224, "Offset mismatch for UFortControllerComponent_MorningBellBasket::bOverrideSecondaryQuickbar");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, SecondaryQuickBarPerSlotOverrideData) == 232, "Offset mismatch for UFortControllerComponent_MorningBellBasket::SecondaryQuickBarPerSlotOverrideData");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, bOverrideCreativeQuickbar) == 248, "Offset mismatch for UFortControllerComponent_MorningBellBasket::bOverrideCreativeQuickbar");
static_assert(offsetof(UFortControllerComponent_MorningBellBasket, CreativeQuickBarPerSlotOverrideData) == 256, "Offset mismatch for UFortControllerComponent_MorningBellBasket::CreativeQuickBarPerSlotOverrideData");

// /Script/MorningBellBasketRuntime.FortGameStateComponent_MorningBellBasket
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_MorningBellBasket
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bShowItemToastWhenGranted; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t DebugItemToGrant[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PlayerBotsGrantedItemsChance[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerBotsMinGrantedItems[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerBotsMaxGrantedItems[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    TArray<void*> PawnPossessedSubscribedControllers; // 0x0160 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, bShowItemToastWhenGranted) == 192, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::bShowItemToastWhenGranted");
static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, DebugItemToGrant) == 200, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::DebugItemToGrant");
static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, PlayerBotsGrantedItemsChance) == 232, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::PlayerBotsGrantedItemsChance");
static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, PlayerBotsMinGrantedItems) == 272, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::PlayerBotsMinGrantedItems");
static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, PlayerBotsMaxGrantedItems) == 312, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::PlayerBotsMaxGrantedItems");
static_assert(offsetof(UFortGameStateComponent_MorningBellBasket, PawnPossessedSubscribedControllers) == 352, "Offset mismatch for UFortGameStateComponent_MorningBellBasket::PawnPossessedSubscribedControllers");
