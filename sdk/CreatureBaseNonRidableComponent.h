/**
 * decamp dumper generated SDK
 * Package: /RidingContent/Components/CreatureBaseNonRidableComponent
 */
#pragma once
#include "Basic.h"

// /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
// Kind: BlueprintGeneratedClass; super: ActorComponent
class UCreatureBaseNonRidableComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x19]; // 0x00C0 (Size: 0x19, Type: StructProperty)
    std::uint8_t KillOnRideAttempt; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCreatureBaseNonRidableComponent_C, UberGraphFrame) == 192, "Offset mismatch for UCreatureBaseNonRidableComponent_C::UberGraphFrame");
static_assert(offsetof(UCreatureBaseNonRidableComponent_C, KillOnRideAttempt) == 217, "Offset mismatch for UCreatureBaseNonRidableComponent_C::KillOnRideAttempt");
