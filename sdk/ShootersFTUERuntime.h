/**
 * decamp dumper generated SDK
 * Package: /Script/ShootersFTUERuntime
 */
#pragma once
#include "Basic.h"

// /Script/ShootersFTUERuntime.FortAthenaMutator_ShootersFTUE
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_ShootersFTUE
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    FName TriggerBoxTag; // 0x0400 (Size: 0x8, Type: NameProperty)
    TArray<void*> BoundTriggerBoxes; // 0x0408 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_ShootersFTUE, TriggerBoxTag) == 1024, "Offset mismatch for UFortAthenaMutator_ShootersFTUE::TriggerBoxTag");
static_assert(offsetof(UFortAthenaMutator_ShootersFTUE, BoundTriggerBoxes) == 1032, "Offset mismatch for UFortAthenaMutator_ShootersFTUE::BoundTriggerBoxes");
