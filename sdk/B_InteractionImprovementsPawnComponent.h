/**
 * decamp dumper generated SDK
 * Package: /InteractionImprovements/Components/B_InteractionImprovementsPawnComponent
 */
#pragma once
#include "Basic.h"

// /InteractionImprovements/Components/B_InteractionImprovementsPawnComponent.B_InteractionImprovementsPawnComponent_C
// Kind: BlueprintGeneratedClass; super: FortPawnComponent
class UB_InteractionImprovementsPawnComponent_C
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DBNOInteractionExtentsOverride[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t InVehicleTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t VehicleAutoPickupRadius[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractionExtentsX[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractionExtentsY[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractionExtentsZ[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, UberGraphFrame) == 200, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::UberGraphFrame");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, DBNOInteractionExtentsOverride) == 208, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::DBNOInteractionExtentsOverride");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, InVehicleTag) == 232, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::InVehicleTag");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, VehicleAutoPickupRadius) == 240, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::VehicleAutoPickupRadius");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, InteractionExtentsX) == 280, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::InteractionExtentsX");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, InteractionExtentsY) == 320, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::InteractionExtentsY");
static_assert(offsetof(UB_InteractionImprovementsPawnComponent_C, InteractionExtentsZ) == 360, "Offset mismatch for UB_InteractionImprovementsPawnComponent_C::InteractionExtentsZ");
