/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaObsidian/GameplayCues/GCN_NarrowFleaObsidian_Ball_WaterLanding
 */
#pragma once
#include "Basic.h"

// /NarrowFleaObsidian/GameplayCues/GCN_NarrowFleaObsidian_Ball_WaterLanding.GCN_NarrowFleaObsidian_Ball_WaterLanding_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_BurstLatent
class UGCN_NarrowFleaObsidian_Ball_WaterLanding_C
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t BurstEffectData[0x148]; // 0x0378 (Size: 0x148, Type: StructProperty)
    std::uint8_t BurstResult[0x48]; // 0x04C0 (Size: 0x48, Type: StructProperty)
    float MaxBurstLatentLifetime; // 0x0508 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRunBlueprintOnRecycle; // 0x050C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGCN_NarrowFleaObsidian_Ball_WaterLanding_C, BurstEffectData) == 888, "Offset mismatch for UGCN_NarrowFleaObsidian_Ball_WaterLanding_C::BurstEffectData");
static_assert(offsetof(UGCN_NarrowFleaObsidian_Ball_WaterLanding_C, BurstResult) == 1216, "Offset mismatch for UGCN_NarrowFleaObsidian_Ball_WaterLanding_C::BurstResult");
static_assert(offsetof(UGCN_NarrowFleaObsidian_Ball_WaterLanding_C, MaxBurstLatentLifetime) == 1288, "Offset mismatch for UGCN_NarrowFleaObsidian_Ball_WaterLanding_C::MaxBurstLatentLifetime");
static_assert(offsetof(UGCN_NarrowFleaObsidian_Ball_WaterLanding_C, bRunBlueprintOnRecycle) == 1292, "Offset mismatch for UGCN_NarrowFleaObsidian_Ball_WaterLanding_C::bRunBlueprintOnRecycle");
