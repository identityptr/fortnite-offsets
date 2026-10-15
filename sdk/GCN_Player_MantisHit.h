/**
 * decamp dumper generated SDK
 * Package: /FNGameplayCues/Athena/GameplayCueNotifies/GCN_Player_MantisHit
 */
#pragma once
#include "Basic.h"

// /FNGameplayCues/Athena/GameplayCueNotifies/GCN_Player_MantisHit.GCN_Player_MantisHit_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Burst
class UGCN_Player_MantisHit_C
{
public:
    std::uint8_t Pad_0000[0x218]; // 0x0000
    void* FullBodyHitMontage; // 0x0218 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGCN_Player_MantisHit_C, FullBodyHitMontage) == 536, "Offset mismatch for UGCN_Player_MantisHit_C::FullBodyHitMontage");
