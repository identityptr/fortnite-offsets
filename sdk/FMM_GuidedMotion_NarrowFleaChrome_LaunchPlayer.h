/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaChrome/Gameplay/FMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer
 */
#pragma once
#include "Basic.h"

// /NarrowFleaChrome/Gameplay/FMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer.FMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C
// Kind: BlueprintGeneratedClass; super: FortMovementMode_ExtNarrowFleaChromeLaunch
class UFMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C
{
public:
    std::uint8_t Pad_0000[0x5F0]; // 0x0000
    double ForwardVectorMultiplier; // 0x05F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LaunchDistanceMultiplier[0x1]; // 0x05F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C, ForwardVectorMultiplier) == 1520, "Offset mismatch for UFMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C::ForwardVectorMultiplier");
static_assert(offsetof(UFMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C, LaunchDistanceMultiplier) == 1528, "Offset mismatch for UFMM_GuidedMotion_NarrowFleaChrome_LaunchPlayer_C::LaunchDistanceMultiplier");
