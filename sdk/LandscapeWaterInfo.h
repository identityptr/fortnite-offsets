/**
 * decamp dumper generated SDK
 * Package: /FortWater/Blueprints/LandscapeWaterInfo
 */
#pragma once
#include "Basic.h"

// /FortWater/Blueprints/LandscapeWaterInfo.LandscapeWaterInfo_C
// Kind: BlueprintGeneratedClass; super: Actor
class ULandscapeWaterInfo_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* DefaultSceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULandscapeWaterInfo_C, UberGraphFrame) == 624, "Offset mismatch for ULandscapeWaterInfo_C::UberGraphFrame");
static_assert(offsetof(ULandscapeWaterInfo_C, DefaultSceneRoot) == 632, "Offset mismatch for ULandscapeWaterInfo_C::DefaultSceneRoot");
