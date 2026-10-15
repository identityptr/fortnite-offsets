/**
 * decamp dumper generated SDK
 * Package: /Script/SpritePityRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpritePityRuntime.FortPlayerStateComponent_SpritePityScore
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_SpritePityScore
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PityScoreThreshold[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t DefaultPityIncrementOnMiss[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ScoreModifierOnOwnedRareDrop[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_SpritePityScore, PityScoreThreshold) == 192, "Offset mismatch for UFortPlayerStateComponent_SpritePityScore::PityScoreThreshold");
static_assert(offsetof(UFortPlayerStateComponent_SpritePityScore, DefaultPityIncrementOnMiss) == 240, "Offset mismatch for UFortPlayerStateComponent_SpritePityScore::DefaultPityIncrementOnMiss");
static_assert(offsetof(UFortPlayerStateComponent_SpritePityScore, ScoreModifierOnOwnedRareDrop) == 288, "Offset mismatch for UFortPlayerStateComponent_SpritePityScore::ScoreModifierOnOwnedRareDrop");

// /Script/SpritePityRuntime.FortSpritePityUtilInterface
// Kind: Class; super: Interface
class UFortSpritePityUtilInterface
{
public:
    std::uint8_t Opaque[1];
};
