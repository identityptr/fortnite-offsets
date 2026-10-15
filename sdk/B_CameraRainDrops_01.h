/**
 * decamp dumper generated SDK
 * Package: /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01
 */
#pragma once
#include "Basic.h"

// /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
// Kind: BlueprintGeneratedClass; super: EmitterCameraLensEffectBase
class UB_CameraRainDrops_01_C
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    void* Alpha; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_CameraRainDrops_01_C, UberGraphFrame) == 864, "Offset mismatch for UB_CameraRainDrops_01_C::UberGraphFrame");
static_assert(offsetof(UB_CameraRainDrops_01_C, Alpha) == 880, "Offset mismatch for UB_CameraRainDrops_01_C::Alpha");
