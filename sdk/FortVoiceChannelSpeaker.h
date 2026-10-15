/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Social/FortVoiceChannelSpeaker
 */
#pragma once
#include "Basic.h"

// /Game/UI/Social/FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// Kind: WidgetBlueprintGeneratedClass; super: FortVoiceChannelSpeakerWidget
class UFortVoiceChannelSpeaker_C
{
public:
    std::uint8_t Pad_0000[0x3E8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x03E8 (Size: 0x8, Type: StructProperty)
    void* Content; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* Border_OnlineStatusIndicator; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortVoiceChannelSpeaker_C, UberGraphFrame) == 1000, "Offset mismatch for UFortVoiceChannelSpeaker_C::UberGraphFrame");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, Content) == 1008, "Offset mismatch for UFortVoiceChannelSpeaker_C::Content");
static_assert(offsetof(UFortVoiceChannelSpeaker_C, Border_OnlineStatusIndicator) == 1016, "Offset mismatch for UFortVoiceChannelSpeaker_C::Border_OnlineStatusIndicator");
