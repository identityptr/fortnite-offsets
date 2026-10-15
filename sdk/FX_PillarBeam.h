/**
 * decamp dumper generated SDK
 * Package: /SpriteExtractionGameplay/Gameplay/Effects/FX_PillarBeam
 */
#pragma once
#include "Basic.h"

// /SpriteExtractionGameplay/Gameplay/Effects/FX_PillarBeam.FX_PillarBeam_C
// Kind: BlueprintGeneratedClass; super: Actor
class UFX_PillarBeam_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* FX_Flare; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    float FadeStateTimeline_LerpColorAlpha_9DC534A6426F2134A792B49A3C215BDF; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FadeStateTimeline_Direction_9DC534A6426F2134A792B49A3C215BDF; // 0x028C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x028D
    void* FadeStateTimeline; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StateIndex; // 0x0298 (Size: 0x4, Type: IntProperty)
    std::uint8_t FX_NewColor[0x10]; // 0x029C (Size: 0x10, Type: StructProperty)
    std::uint8_t FX_PreviousColor[0x1]; // 0x02AC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFX_PillarBeam_C, UberGraphFrame) == 624, "Offset mismatch for UFX_PillarBeam_C::UberGraphFrame");
static_assert(offsetof(UFX_PillarBeam_C, FX_Flare) == 632, "Offset mismatch for UFX_PillarBeam_C::FX_Flare");
static_assert(offsetof(UFX_PillarBeam_C, DefaultSceneRoot) == 640, "Offset mismatch for UFX_PillarBeam_C::DefaultSceneRoot");
static_assert(offsetof(UFX_PillarBeam_C, FadeStateTimeline_LerpColorAlpha_9DC534A6426F2134A792B49A3C215BDF) == 648, "Offset mismatch for UFX_PillarBeam_C::FadeStateTimeline_LerpColorAlpha_9DC534A6426F2134A792B49A3C215BDF");
static_assert(offsetof(UFX_PillarBeam_C, FadeStateTimeline_Direction_9DC534A6426F2134A792B49A3C215BDF) == 652, "Offset mismatch for UFX_PillarBeam_C::FadeStateTimeline_Direction_9DC534A6426F2134A792B49A3C215BDF");
static_assert(offsetof(UFX_PillarBeam_C, FadeStateTimeline) == 656, "Offset mismatch for UFX_PillarBeam_C::FadeStateTimeline");
static_assert(offsetof(UFX_PillarBeam_C, StateIndex) == 664, "Offset mismatch for UFX_PillarBeam_C::StateIndex");
static_assert(offsetof(UFX_PillarBeam_C, FX_NewColor) == 668, "Offset mismatch for UFX_PillarBeam_C::FX_NewColor");
static_assert(offsetof(UFX_PillarBeam_C, FX_PreviousColor) == 684, "Offset mismatch for UFX_PillarBeam_C::FX_PreviousColor");
