/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaMonkey/Gameplay/MME_NarrowFleaMonkey
 */
#pragma once
#include "Basic.h"

// /NarrowFleaMonkey/Gameplay/MME_NarrowFleaMonkey.MME_NarrowFleaMonkey_C
// Kind: BlueprintGeneratedClass; super: FortMovementMode_NarrowFleaMonkey
class UMME_NarrowFleaMonkey_C
{
public:
    std::uint8_t Pad_0000[0x368]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0368 (Size: 0x8, Type: StructProperty)
    void* CamModifier; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMME_NarrowFleaMonkey_C, UberGraphFrame) == 872, "Offset mismatch for UMME_NarrowFleaMonkey_C::UberGraphFrame");
static_assert(offsetof(UMME_NarrowFleaMonkey_C, CamModifier) == 880, "Offset mismatch for UMME_NarrowFleaMonkey_C::CamModifier");
