/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
// Kind: BlueprintGeneratedClass; super: FortAudioParameterComponent_Pawn
class UBP_AudioParameterComponent_Pawn_C
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t bDebugEnabled; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsInWater; // 0x0121 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBP_AudioParameterComponent_Pawn_C, UberGraphFrame) == 272, "Offset mismatch for UBP_AudioParameterComponent_Pawn_C::UberGraphFrame");
static_assert(offsetof(UBP_AudioParameterComponent_Pawn_C, bDebugEnabled) == 288, "Offset mismatch for UBP_AudioParameterComponent_Pawn_C::bDebugEnabled");
static_assert(offsetof(UBP_AudioParameterComponent_Pawn_C, IsInWater) == 289, "Offset mismatch for UBP_AudioParameterComponent_Pawn_C::IsInWater");
