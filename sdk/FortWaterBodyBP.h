/**
 * decamp dumper generated SDK
 * Package: /Game/Athena/Apollo/Environments/Landscape/Water/FortWaterBodyBP
 */
#pragma once
#include "Basic.h"

// /Game/Athena/Apollo/Environments/Landscape/Water/FortWaterBodyBP.FortWaterBodyBP_C
// Kind: BlueprintGeneratedClass; super: FortWaterBodyActor
class UFortWaterBodyBP_C
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x03B0 (Size: 0x8, Type: StructProperty)
    void* FluidSimBP; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortWaterBodyBP_C, UberGraphFrame) == 944, "Offset mismatch for UFortWaterBodyBP_C::UberGraphFrame");
static_assert(offsetof(UFortWaterBodyBP_C, FluidSimBP) == 952, "Offset mismatch for UFortWaterBodyBP_C::FluidSimBP");
