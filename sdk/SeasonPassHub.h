/**
 * decamp dumper generated SDK
 * Package: /Script/SeasonPassHub
 */
#pragma once
#include "Basic.h"

// /Script/SeasonPassHub.BPUpsellInterstitialVM
// Kind: Class; super: FortInterstitialVM
class UBPUpsellInterstitialVM
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t Config[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBPUpsellInterstitialVM, Config) == 240, "Offset mismatch for UBPUpsellInterstitialVM::Config");

// /Script/SeasonPassHub.MotdBattlePassAction
// Kind: Class; super: MotdActionBase
class UMotdBattlePassAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPassHub.MotdGiftPassAction
// Kind: Class; super: MotdActionBase
class UMotdGiftPassAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SeasonPassHub.SeasonPassHubCrewShopOfferOverride
// Kind: Class; super: FortItemShopOfferInspectionScreenOverrideBase
class USeasonPassHubCrewShopOfferOverride
{
public:
    std::uint8_t Opaque[1];
};
