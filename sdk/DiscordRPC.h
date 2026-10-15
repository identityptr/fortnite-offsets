/**
 * decamp dumper generated SDK
 * Package: /Script/DiscordRPC
 */
#pragma once
#include "Basic.h"

// /Script/DiscordRPC.DiscordRuntimeSettings
// Kind: Class; super: Object
class UDiscordRuntimeSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableJoinSecrets; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    FString GameApplicationId; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString UefnApplicationId; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDiscordRuntimeSettings, bEnableJoinSecrets) == 40, "Offset mismatch for UDiscordRuntimeSettings::bEnableJoinSecrets");
static_assert(offsetof(UDiscordRuntimeSettings, GameApplicationId) == 48, "Offset mismatch for UDiscordRuntimeSettings::GameApplicationId");
static_assert(offsetof(UDiscordRuntimeSettings, UefnApplicationId) == 64, "Offset mismatch for UDiscordRuntimeSettings::UefnApplicationId");
