/**
 * decamp dumper generated SDK
 * Package: /Script/DropPodParentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DropPodParentRuntime.FortDropPod
// Kind: Class; super: BuildingSMActor
class UFortDropPod
{
public:
    std::uint8_t Pad_0000[0xAE8]; // 0x0000
    void* DamageSet; // 0x0AE8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bBlockMarking; // 0x0AF0 (Size: 0x1, Type: BoolProperty)
    // 0x0AF0 BoolProperty bCanBeMarked (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0AF1
    std::uint8_t MarkerDisplay[0xB0]; // 0x0AF8 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x0BA8 (Size: 0x18, Type: StructProperty)
    std::uint8_t WorldMarkerType; // 0x0BC0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0BC1
    std::uint8_t Hotfix_StartingHeight[0x28]; // 0x0BC8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Hotfix_GroundTraceBuffer[0x1]; // 0x0BF0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDropPod, DamageSet) == 2792, "Offset mismatch for UFortDropPod::DamageSet");
static_assert(offsetof(UFortDropPod, bBlockMarking) == 2800, "Offset mismatch for UFortDropPod::bBlockMarking");
static_assert(offsetof(UFortDropPod, MarkerDisplay) == 2808, "Offset mismatch for UFortDropPod::MarkerDisplay");
static_assert(offsetof(UFortDropPod, MarkerPositionOffset) == 2984, "Offset mismatch for UFortDropPod::MarkerPositionOffset");
static_assert(offsetof(UFortDropPod, WorldMarkerType) == 3008, "Offset mismatch for UFortDropPod::WorldMarkerType");
static_assert(offsetof(UFortDropPod, Hotfix_StartingHeight) == 3016, "Offset mismatch for UFortDropPod::Hotfix_StartingHeight");
static_assert(offsetof(UFortDropPod, Hotfix_GroundTraceBuffer) == 3056, "Offset mismatch for UFortDropPod::Hotfix_GroundTraceBuffer");
