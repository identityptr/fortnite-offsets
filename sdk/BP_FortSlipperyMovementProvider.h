/**
 * decamp dumper generated SDK
 * Package: /SlipperyMovement/Gameplay/BP_FortSlipperyMovementProvider
 */
#pragma once
#include "Basic.h"

// /SlipperyMovement/Gameplay/BP_FortSlipperyMovementProvider.BP_FortSlipperyMovementProvider_C
// Kind: BlueprintGeneratedClass; super: FortPawnComponent_SlipperyMovement
class UBP_FortSlipperyMovementProvider_C
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SlipperySlopeParams[0x280]; // 0x00C8 (Size: 0x280, Type: StructProperty)
    std::uint8_t SlipperyItemsTags[0x20]; // 0x0348 (Size: 0x20, Type: StructProperty)
    void* MovementModeExtension; // 0x0368 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBP_FortSlipperyMovementProvider_C, SlipperySlopeParams) == 200, "Offset mismatch for UBP_FortSlipperyMovementProvider_C::SlipperySlopeParams");
static_assert(offsetof(UBP_FortSlipperyMovementProvider_C, SlipperyItemsTags) == 840, "Offset mismatch for UBP_FortSlipperyMovementProvider_C::SlipperyItemsTags");
static_assert(offsetof(UBP_FortSlipperyMovementProvider_C, MovementModeExtension) == 872, "Offset mismatch for UBP_FortSlipperyMovementProvider_C::MovementModeExtension");
