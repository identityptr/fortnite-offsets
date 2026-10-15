/**
 * decamp dumper generated SDK
 * Package: /Script/LootInjectionFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/LootInjectionFrontendUI.FortControllerComponent_LootInjectionFrontend
// Kind: Class; super: FortControllerComponent_LootInjectionParent
class UFortControllerComponent_LootInjectionFrontend
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLootOptionTokenCountsUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOwnedTokenCountUpdated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPurchaseStarted; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPurchaseCompleted; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0108
    std::int32_t OwnedTokenCount; // 0x011C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortControllerComponent_LootInjectionFrontend, OnLootOptionTokenCountsUpdated) == 200, "Offset mismatch for UFortControllerComponent_LootInjectionFrontend::OnLootOptionTokenCountsUpdated");
static_assert(offsetof(UFortControllerComponent_LootInjectionFrontend, OnOwnedTokenCountUpdated) == 216, "Offset mismatch for UFortControllerComponent_LootInjectionFrontend::OnOwnedTokenCountUpdated");
static_assert(offsetof(UFortControllerComponent_LootInjectionFrontend, OnPurchaseStarted) == 232, "Offset mismatch for UFortControllerComponent_LootInjectionFrontend::OnPurchaseStarted");
static_assert(offsetof(UFortControllerComponent_LootInjectionFrontend, OnPurchaseCompleted) == 248, "Offset mismatch for UFortControllerComponent_LootInjectionFrontend::OnPurchaseCompleted");
static_assert(offsetof(UFortControllerComponent_LootInjectionFrontend, OwnedTokenCount) == 284, "Offset mismatch for UFortControllerComponent_LootInjectionFrontend::OwnedTokenCount");
