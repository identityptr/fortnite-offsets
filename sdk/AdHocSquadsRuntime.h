/**
 * decamp dumper generated SDK
 * Package: /Script/AdHocSquadsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AdHocSquadsRuntime.AdHocSquadPawnOutlineComponent
// Kind: Class; super: PawnOutlineComponentBase
class UAdHocSquadPawnOutlineComponent
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    TWeakObjectPtr<void> CachedAdHocSquadsMutator; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0118
    std::uint8_t AdHocSquadId; // 0x0120 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsInLocalAdHocSquad; // 0x0121 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAdHocSquadPawnOutlineComponent, CachedAdHocSquadsMutator) == 272, "Offset mismatch for UAdHocSquadPawnOutlineComponent::CachedAdHocSquadsMutator");
static_assert(offsetof(UAdHocSquadPawnOutlineComponent, AdHocSquadId) == 288, "Offset mismatch for UAdHocSquadPawnOutlineComponent::AdHocSquadId");
static_assert(offsetof(UAdHocSquadPawnOutlineComponent, bIsInLocalAdHocSquad) == 289, "Offset mismatch for UAdHocSquadPawnOutlineComponent::bIsInLocalAdHocSquad");
