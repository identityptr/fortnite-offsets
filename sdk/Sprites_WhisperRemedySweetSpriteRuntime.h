/**
 * decamp dumper generated SDK
 * Package: /Script/Sprites_WhisperRemedySweetSpriteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Sprites_WhisperRemedySweetSpriteRuntime.SpriteWhisperRemedySweetCreatureAnimInstance
// Kind: Class; super: SpriteCreatureAnimInstance
class USpriteWhisperRemedySweetCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    float ReturnValueYPitch; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRaiseSprite; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargeting; // 0x0285 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FP_IdleToTargeting; // 0x0286 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0287
    std::uint8_t RaiseSpriteTagName[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpriteWhisperRemedySweetCreatureAnimInstance, ReturnValueYPitch) == 640, "Offset mismatch for USpriteWhisperRemedySweetCreatureAnimInstance::ReturnValueYPitch");
static_assert(offsetof(USpriteWhisperRemedySweetCreatureAnimInstance, bRaiseSprite) == 644, "Offset mismatch for USpriteWhisperRemedySweetCreatureAnimInstance::bRaiseSprite");
static_assert(offsetof(USpriteWhisperRemedySweetCreatureAnimInstance, bIsTargeting) == 645, "Offset mismatch for USpriteWhisperRemedySweetCreatureAnimInstance::bIsTargeting");
static_assert(offsetof(USpriteWhisperRemedySweetCreatureAnimInstance, FP_IdleToTargeting) == 646, "Offset mismatch for USpriteWhisperRemedySweetCreatureAnimInstance::FP_IdleToTargeting");
static_assert(offsetof(USpriteWhisperRemedySweetCreatureAnimInstance, RaiseSpriteTagName) == 648, "Offset mismatch for USpriteWhisperRemedySweetCreatureAnimInstance::RaiseSpriteTagName");
