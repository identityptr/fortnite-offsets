/**
 * decamp dumper generated SDK
 * Package: /Script/MotorSimOutputMotoSynth
 */
#pragma once
#include "Basic.h"

// /Script/MotorSimOutputMotoSynth.MotorSimOutputMotoSynth
// Kind: Class; super: SynthComponentMoto
class UMotorSimOutputMotoSynth
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    void* MotoSynthPreset; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    float RPM; // 0x0628 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMotorSimOutputMotoSynth, MotoSynthPreset) == 1568, "Offset mismatch for UMotorSimOutputMotoSynth::MotoSynthPreset");
static_assert(offsetof(UMotorSimOutputMotoSynth, RPM) == 1576, "Offset mismatch for UMotorSimOutputMotoSynth::RPM");
