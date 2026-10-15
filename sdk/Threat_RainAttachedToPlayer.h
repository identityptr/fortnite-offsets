/**
 * decamp dumper generated SDK
 * Package: /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer
 */
#pragma once
#include "Basic.h"

// /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
// Kind: BlueprintGeneratedClass; super: Actor
class UThreat_RainAttachedToPlayer_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ParticleSystem; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UThreat_RainAttachedToPlayer_C, ParticleSystem) == 624, "Offset mismatch for UThreat_RainAttachedToPlayer_C::ParticleSystem");
static_assert(offsetof(UThreat_RainAttachedToPlayer_C, DefaultSceneRoot) == 632, "Offset mismatch for UThreat_RainAttachedToPlayer_C::DefaultSceneRoot");
