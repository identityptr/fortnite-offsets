/**
 * decamp dumper generated SDK
 * Package: /Script/MidMatchObjectivesGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_MidMatchObjectiveParent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ObjectiveCompletedStatName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseDeferredActivation; // 0x00C4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameStateComponent_MidMatchObjectiveParent, ObjectiveCompletedStatName) == 192, "Offset mismatch for UFortGameStateComponent_MidMatchObjectiveParent::ObjectiveCompletedStatName");
static_assert(offsetof(UFortGameStateComponent_MidMatchObjectiveParent, bUseDeferredActivation) == 196, "Offset mismatch for UFortGameStateComponent_MidMatchObjectiveParent::bUseDeferredActivation");

// /Script/MidMatchObjectivesGameplayRuntime.FortGameStateComponent_RandomizedMidMatchObjective
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_RandomizedMidMatchObjective
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bActivateMMORandomization[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUniqueRandom[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActivateOnSafeZoneState[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> MMObjWeightMap; // 0x0138 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGameStateComponent_RandomizedMidMatchObjective, bActivateMMORandomization) == 192, "Offset mismatch for UFortGameStateComponent_RandomizedMidMatchObjective::bActivateMMORandomization");
static_assert(offsetof(UFortGameStateComponent_RandomizedMidMatchObjective, bUniqueRandom) == 232, "Offset mismatch for UFortGameStateComponent_RandomizedMidMatchObjective::bUniqueRandom");
static_assert(offsetof(UFortGameStateComponent_RandomizedMidMatchObjective, ActivateOnSafeZoneState) == 272, "Offset mismatch for UFortGameStateComponent_RandomizedMidMatchObjective::ActivateOnSafeZoneState");
static_assert(offsetof(UFortGameStateComponent_RandomizedMidMatchObjective, MMObjWeightMap) == 312, "Offset mismatch for UFortGameStateComponent_RandomizedMidMatchObjective::MMObjWeightMap");
