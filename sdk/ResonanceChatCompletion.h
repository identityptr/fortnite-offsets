/**
 * decamp dumper generated SDK
 * Package: /Script/ResonanceChatCompletion
 */
#pragma once
#include "Basic.h"

// /Script/ResonanceChatCompletion.ResonanceChatCompleter
// Kind: Class; super: ChatCompleter
class UResonanceChatCompleter
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    FString ResonanceConfigurationId; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0098
    float StartSessionTimeoutSeconds; // 0x00D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UResonanceChatCompleter, ResonanceConfigurationId) == 136, "Offset mismatch for UResonanceChatCompleter::ResonanceConfigurationId");
static_assert(offsetof(UResonanceChatCompleter, StartSessionTimeoutSeconds) == 208, "Offset mismatch for UResonanceChatCompleter::StartSessionTimeoutSeconds");
