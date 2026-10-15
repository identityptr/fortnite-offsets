/**
 * decamp dumper generated SDK
 * Package: /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld
 */
#pragma once
#include "Basic.h"

// /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
// Kind: BlueprintGeneratedClass; super: none
class UBattlePassVaultWorld_C
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0358 (Size: 0x8, Type: StructProperty)
    void* floor; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0368
    void* ItemDetails; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x50]; // 0x03D8
    std::uint8_t bIsTransitioning; // 0x0428 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBattlePassVaultWorld_C, UberGraphFrame) == 856, "Offset mismatch for UBattlePassVaultWorld_C::UberGraphFrame");
static_assert(offsetof(UBattlePassVaultWorld_C, floor) == 864, "Offset mismatch for UBattlePassVaultWorld_C::floor");
static_assert(offsetof(UBattlePassVaultWorld_C, ItemDetails) == 976, "Offset mismatch for UBattlePassVaultWorld_C::ItemDetails");
static_assert(offsetof(UBattlePassVaultWorld_C, bIsTransitioning) == 1064, "Offset mismatch for UBattlePassVaultWorld_C::bIsTransitioning");
