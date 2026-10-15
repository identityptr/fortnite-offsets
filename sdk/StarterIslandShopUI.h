/**
 * decamp dumper generated SDK
 * Package: /Script/StarterIslandShopUI
 */
#pragma once
#include "Basic.h"

// /Script/StarterIslandShopUI.FortEvent_DisplayShopOutfitOffer
// Kind: ScriptStruct; super: none
struct FFortEvent_DisplayShopOutfitOffer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StarterIslandShopUI.FortEvent_HideShopOutfitOffer
// Kind: ScriptStruct; super: none
struct FFortEvent_HideShopOutfitOffer
{
public:
    std::uint8_t bPlayOutro; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_HideShopOutfitOffer, bPlayOutro) == 0, "Offset mismatch for FFortEvent_HideShopOutfitOffer::bPlayOutro");

// /Script/StarterIslandShopUI.ShopOfferDisplayComponent
// Kind: Class; super: ActorComponent
class UShopOfferDisplayComponent
{
public:
    std::uint8_t Pad_0000[0xC4]; // 0x0000
    float RequiredTimeForActorUnderReticleInSeconds; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxUIDisplayDistance; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UShopOfferDisplayComponent, RequiredTimeForActorUnderReticleInSeconds) == 196, "Offset mismatch for UShopOfferDisplayComponent::RequiredTimeForActorUnderReticleInSeconds");
static_assert(offsetof(UShopOfferDisplayComponent, MaxUIDisplayDistance) == 200, "Offset mismatch for UShopOfferDisplayComponent::MaxUIDisplayDistance");

// /Script/StarterIslandShopUI.StarterIslandShopViewModel
// Kind: Class; super: FortPerUserViewModel
class UStarterIslandShopViewModel
{
public:
    std::uint8_t Opaque[1];
};
