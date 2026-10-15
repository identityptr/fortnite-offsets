/**
 * decamp dumper generated SDK
 * Package: /Script/DisplayContainerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DisplayContainerRuntime.FortDisplayContainer
// Kind: Class; super: BuildingSMActor
class UFortDisplayContainer
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t bReplicateLongInteractionDetails; // 0x0AE0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockMarking; // 0x0AE1 (Size: 0x1, Type: BoolProperty)
    // 0x0AE1 BoolProperty bCanBeMarked (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x0AE2
    std::uint8_t MarkerDisplay[0xB0]; // 0x0AE8 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x1]; // 0x0B98 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDisplayContainer, bReplicateLongInteractionDetails) == 2784, "Offset mismatch for UFortDisplayContainer::bReplicateLongInteractionDetails");
static_assert(offsetof(UFortDisplayContainer, bBlockMarking) == 2785, "Offset mismatch for UFortDisplayContainer::bBlockMarking");
static_assert(offsetof(UFortDisplayContainer, MarkerDisplay) == 2792, "Offset mismatch for UFortDisplayContainer::MarkerDisplay");
static_assert(offsetof(UFortDisplayContainer, MarkerPositionOffset) == 2968, "Offset mismatch for UFortDisplayContainer::MarkerPositionOffset");
