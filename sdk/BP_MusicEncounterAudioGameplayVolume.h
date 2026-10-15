/**
 * decamp dumper generated SDK
 * Package: /MusicEncounter/Actors/AudioGameplayVolumes/BP_MusicEncounterAudioGameplayVolume
 */
#pragma once
#include "Basic.h"

// /MusicEncounter/Actors/AudioGameplayVolumes/BP_MusicEncounterAudioGameplayVolume.BP_MusicEncounterAudioGameplayVolume_C
// Kind: BlueprintGeneratedClass; super: Actor
class UBP_MusicEncounterAudioGameplayVolume_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* AudioGameplayVolume; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_MusicEncounterAudioGameplayVolume_C, UberGraphFrame) == 624, "Offset mismatch for UBP_MusicEncounterAudioGameplayVolume_C::UberGraphFrame");
static_assert(offsetof(UBP_MusicEncounterAudioGameplayVolume_C, AudioGameplayVolume) == 632, "Offset mismatch for UBP_MusicEncounterAudioGameplayVolume_C::AudioGameplayVolume");
static_assert(offsetof(UBP_MusicEncounterAudioGameplayVolume_C, DefaultSceneRoot) == 640, "Offset mismatch for UBP_MusicEncounterAudioGameplayVolume_C::DefaultSceneRoot");
