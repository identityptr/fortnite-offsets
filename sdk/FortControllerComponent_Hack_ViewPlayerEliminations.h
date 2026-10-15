/**
 * decamp dumper generated SDK
 * Package: /Hacks_Ch7S4/Hacks/Vulture/FortControllerComponent_Hack_ViewPlayerEliminations
 */
#pragma once
#include "Basic.h"

// /Hacks_Ch7S4/Hacks/Vulture/FortControllerComponent_Hack_ViewPlayerEliminations.FortControllerComponent_Hack_ViewPlayerEliminations_C
// Kind: BlueprintGeneratedClass; super: FortControllerComponent_ViewEliminations
class UFortControllerComponent_Hack_ViewPlayerEliminations_C
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float OverrideEliminationDetectionRange; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    std::uint8_t MaxEliminationMarkersOverride[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllEliminationMarkerTypesCustomTTL[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_Hack_ViewPlayerEliminations_C, OverrideEliminationDetectionRange) == 200, "Offset mismatch for UFortControllerComponent_Hack_ViewPlayerEliminations_C::OverrideEliminationDetectionRange");
static_assert(offsetof(UFortControllerComponent_Hack_ViewPlayerEliminations_C, MaxEliminationMarkersOverride) == 208, "Offset mismatch for UFortControllerComponent_Hack_ViewPlayerEliminations_C::MaxEliminationMarkersOverride");
static_assert(offsetof(UFortControllerComponent_Hack_ViewPlayerEliminations_C, AllEliminationMarkerTypesCustomTTL) == 248, "Offset mismatch for UFortControllerComponent_Hack_ViewPlayerEliminations_C::AllEliminationMarkerTypesCustomTTL");
