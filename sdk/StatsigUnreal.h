/**
 * decamp dumper generated SDK
 * Package: /Script/StatsigUnreal
 */
#pragma once
#include "Basic.h"

// /Script/StatsigUnreal.StatsigTestActorComponent
// Kind: Class; super: ActorComponent
class UStatsigTestActorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bInitializeAsync; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    FString SDKKey; // 0x00C8 (Size: 0x10, Type: StrProperty)
    FString UserId; // 0x00D8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UStatsigTestActorComponent, bInitializeAsync) == 192, "Offset mismatch for UStatsigTestActorComponent::bInitializeAsync");
static_assert(offsetof(UStatsigTestActorComponent, SDKKey) == 200, "Offset mismatch for UStatsigTestActorComponent::SDKKey");
static_assert(offsetof(UStatsigTestActorComponent, UserId) == 216, "Offset mismatch for UStatsigTestActorComponent::UserId");
