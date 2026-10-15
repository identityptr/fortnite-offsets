/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/Fort_Audio_Blueprints/UnderwaterAudioComponent/UnderwaterAudioComponent
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/Fort_Audio_Blueprints/UnderwaterAudioComponent/UnderwaterAudioComponent.UnderwaterAudioComponent_C
// Kind: BlueprintGeneratedClass; super: ActorComponent
class UUnderwaterAudioComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    void* CamUnderwaterSoundMix; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* CamUnderwaterStartSound; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* CamUnderwaterAudio; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* CamUnderwaterLoopSound; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CamUnderwaterStopSound; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnabled; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUnderwaterAudioComponent_C, UberGraphFrame) == 192, "Offset mismatch for UUnderwaterAudioComponent_C::UberGraphFrame");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterSoundMix) == 200, "Offset mismatch for UUnderwaterAudioComponent_C::CamUnderwaterSoundMix");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStartSound) == 208, "Offset mismatch for UUnderwaterAudioComponent_C::CamUnderwaterStartSound");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterAudio) == 216, "Offset mismatch for UUnderwaterAudioComponent_C::CamUnderwaterAudio");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterLoopSound) == 224, "Offset mismatch for UUnderwaterAudioComponent_C::CamUnderwaterLoopSound");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStopSound) == 232, "Offset mismatch for UUnderwaterAudioComponent_C::CamUnderwaterStopSound");
static_assert(offsetof(UUnderwaterAudioComponent_C, bEnabled) == 240, "Offset mismatch for UUnderwaterAudioComponent_C::bEnabled");
