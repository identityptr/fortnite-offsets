/**
 * decamp dumper generated SDK
 * Package: /MintPunt/Gameplay/Movement/MME_MintPunt_SlideBoost
 */
#pragma once
#include "Basic.h"

// /MintPunt/Gameplay/Movement/MME_MintPunt_SlideBoost.MME_MintPunt_SlideBoost_C
// Kind: BlueprintGeneratedClass; super: MintPuntMovementMode_SlideBoost
class UMME_MintPunt_SlideBoost_C
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* GE_Boost; // 0x05A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HNDL_GE_Boost[0x18]; // 0x05A8 (Size: 0x18, Type: StructProperty)
    double LastBoostUpdateWorldTime; // 0x05C0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LastCommittedRuntimeID; // 0x05C8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMME_MintPunt_SlideBoost_C, GE_Boost) == 1440, "Offset mismatch for UMME_MintPunt_SlideBoost_C::GE_Boost");
static_assert(offsetof(UMME_MintPunt_SlideBoost_C, HNDL_GE_Boost) == 1448, "Offset mismatch for UMME_MintPunt_SlideBoost_C::HNDL_GE_Boost");
static_assert(offsetof(UMME_MintPunt_SlideBoost_C, LastBoostUpdateWorldTime) == 1472, "Offset mismatch for UMME_MintPunt_SlideBoost_C::LastBoostUpdateWorldTime");
static_assert(offsetof(UMME_MintPunt_SlideBoost_C, LastCommittedRuntimeID) == 1480, "Offset mismatch for UMME_MintPunt_SlideBoost_C::LastCommittedRuntimeID");
