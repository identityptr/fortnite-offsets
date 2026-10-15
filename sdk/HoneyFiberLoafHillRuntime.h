/**
 * decamp dumper generated SDK
 * Package: /Script/HoneyFiberLoafHillRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HoneyFiberLoafHillRuntime.FortAthenaMutator_HoneyFiberLoafHill
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_HoneyFiberLoafHill
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    std::uint8_t bAutomaticallyFinishInitialization; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02E9
    std::uint8_t GameMsg_AircraftPhaseIntroMessage[0x50]; // 0x02F0 (Size: 0x50, Type: StructProperty)
    std::uint8_t Stinger_MatchStart[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEnd[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndWin[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    std::uint8_t Stinger_MatchEndLose[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    void* StingerAudioComponent; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* StingerEventForwarder; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0398
    TArray<void*> FortSquadStartActors; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, bAutomaticallyFinishInitialization) == 744, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::bAutomaticallyFinishInitialization");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, GameMsg_AircraftPhaseIntroMessage) == 752, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::GameMsg_AircraftPhaseIntroMessage");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, Stinger_MatchStart) == 832, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::Stinger_MatchStart");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, Stinger_MatchEnd) == 848, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::Stinger_MatchEnd");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, Stinger_MatchEndWin) == 864, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::Stinger_MatchEndWin");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, Stinger_MatchEndLose) == 880, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::Stinger_MatchEndLose");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, StingerAudioComponent) == 904, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::StingerAudioComponent");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, StingerEventForwarder) == 912, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::StingerEventForwarder");
static_assert(offsetof(UFortAthenaMutator_HoneyFiberLoafHill, FortSquadStartActors) == 944, "Offset mismatch for UFortAthenaMutator_HoneyFiberLoafHill::FortSquadStartActors");

// /Script/HoneyFiberLoafHillRuntime.FortGameplayAbility_HoneyFiberLoafHill
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_HoneyFiberLoafHill
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t SquadMemberTeleportLocationVarianceScalar[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMemberTeleportLocationRadius[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t RespawnTokenTeleportLevelStreamingDistance[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldSpoofPlayerstateDeathInfoDirectly[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpoofedPlayerStateDeathInfoTimeout[0x1]; // 0x0BC0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_HoneyFiberLoafHill, SquadMemberTeleportLocationVarianceScalar) == 2848, "Offset mismatch for UFortGameplayAbility_HoneyFiberLoafHill::SquadMemberTeleportLocationVarianceScalar");
static_assert(offsetof(UFortGameplayAbility_HoneyFiberLoafHill, SquadMemberTeleportLocationRadius) == 2888, "Offset mismatch for UFortGameplayAbility_HoneyFiberLoafHill::SquadMemberTeleportLocationRadius");
static_assert(offsetof(UFortGameplayAbility_HoneyFiberLoafHill, RespawnTokenTeleportLevelStreamingDistance) == 2928, "Offset mismatch for UFortGameplayAbility_HoneyFiberLoafHill::RespawnTokenTeleportLevelStreamingDistance");
static_assert(offsetof(UFortGameplayAbility_HoneyFiberLoafHill, ShouldSpoofPlayerstateDeathInfoDirectly) == 2968, "Offset mismatch for UFortGameplayAbility_HoneyFiberLoafHill::ShouldSpoofPlayerstateDeathInfoDirectly");
static_assert(offsetof(UFortGameplayAbility_HoneyFiberLoafHill, SpoofedPlayerStateDeathInfoTimeout) == 3008, "Offset mismatch for UFortGameplayAbility_HoneyFiberLoafHill::SpoofedPlayerStateDeathInfoTimeout");
