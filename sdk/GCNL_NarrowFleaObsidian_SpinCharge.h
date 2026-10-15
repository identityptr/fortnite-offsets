/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaObsidian/GameplayCues/GCNL_NarrowFleaObsidian_SpinCharge
 */
#pragma once
#include "Basic.h"

// /NarrowFleaObsidian/GameplayCues/GCNL_NarrowFleaObsidian_SpinCharge.GCNL_NarrowFleaObsidian_SpinCharge_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_NarrowFleaObsidian_SpinCharge_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    void* SpinChargeFX; // 0x0C50 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HalfChargeTime[0x28]; // 0x0C58 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullChargeTime[0x28]; // 0x0C80 (Size: 0x28, Type: StructProperty)
    void* SpinChargeAudio; // 0x0CA8 (Size: 0x8, Type: ObjectProperty)
    void* Phase3LoopSound; // 0x0CB0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::UberGraphFrame");
static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, SpinChargeFX) == 3152, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::SpinChargeFX");
static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, HalfChargeTime) == 3160, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::HalfChargeTime");
static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, FullChargeTime) == 3200, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::FullChargeTime");
static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, SpinChargeAudio) == 3240, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::SpinChargeAudio");
static_assert(offsetof(UGCNL_NarrowFleaObsidian_SpinCharge_C, Phase3LoopSound) == 3248, "Offset mismatch for UGCNL_NarrowFleaObsidian_SpinCharge_C::Phase3LoopSound");
