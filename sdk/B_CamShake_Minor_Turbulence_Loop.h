/**
 * decamp dumper generated SDK
 * Package: /Game/Effects/Fort_Effects/BluePrints/CameraShakes/Event/B_CamShake_Minor_Turbulence_Loop
 */
#pragma once
#include "Basic.h"

// /Game/Effects/Fort_Effects/BluePrints/CameraShakes/Event/B_CamShake_Minor_Turbulence_Loop.B_CamShake_Minor_Turbulence_Loop_C
// Kind: BlueprintGeneratedClass; super: LegacyCameraShake
class UB_CamShake_Minor_Turbulence_Loop_C
{
public:
    std::uint8_t Pad_0000[0x200]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0200 (Size: 0x8, Type: StructProperty)
    double FOVScale; // 0x0208 (Size: 0x8, Type: DoubleProperty)
    double OscillatorAmplitudePitch; // 0x0210 (Size: 0x8, Type: DoubleProperty)
    double OscillatorAmplitudeRoll; // 0x0218 (Size: 0x8, Type: DoubleProperty)
    double OscillatorAmplitudeYaw; // 0x0220 (Size: 0x8, Type: DoubleProperty)
    double MinShakeScalar; // 0x0228 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, UberGraphFrame) == 512, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::UberGraphFrame");
static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, FOVScale) == 520, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::FOVScale");
static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, OscillatorAmplitudePitch) == 528, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::OscillatorAmplitudePitch");
static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, OscillatorAmplitudeRoll) == 536, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::OscillatorAmplitudeRoll");
static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, OscillatorAmplitudeYaw) == 544, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::OscillatorAmplitudeYaw");
static_assert(offsetof(UB_CamShake_Minor_Turbulence_Loop_C, MinShakeScalar) == 552, "Offset mismatch for UB_CamShake_Minor_Turbulence_Loop_C::MinShakeScalar");
