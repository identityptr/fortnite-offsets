/**
 * decamp dumper generated SDK
 * Package: /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera
 */
#pragma once
#include "Basic.h"

// /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// Kind: BlueprintGeneratedClass; super: FortCameraBase
class UFortnitePartyHeroSelect_Camera_C
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t UberGraphFrame[0x20]; // 0x0AE0 (Size: 0x20, Type: StructProperty)
    void* CachedPawn; // 0x0B00 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortnitePartyHeroSelect_Camera_C, UberGraphFrame) == 2784, "Offset mismatch for UFortnitePartyHeroSelect_Camera_C::UberGraphFrame");
static_assert(offsetof(UFortnitePartyHeroSelect_Camera_C, CachedPawn) == 2816, "Offset mismatch for UFortnitePartyHeroSelect_Camera_C::CachedPawn");
