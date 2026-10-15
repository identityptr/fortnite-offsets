/**
 * decamp dumper generated SDK
 * Package: /Script/DeluluSpawningRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeluluSpawningRuntime.FortAthenaMutator_DeluluGameModeSpawning
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_DeluluGameModeSpawning
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

static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, bAutomaticallyFinishInitialization) == 744, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::bAutomaticallyFinishInitialization");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, GameMsg_AircraftPhaseIntroMessage) == 752, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::GameMsg_AircraftPhaseIntroMessage");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, Stinger_MatchStart) == 832, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::Stinger_MatchStart");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, Stinger_MatchEnd) == 848, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::Stinger_MatchEnd");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, Stinger_MatchEndWin) == 864, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::Stinger_MatchEndWin");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, Stinger_MatchEndLose) == 880, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::Stinger_MatchEndLose");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, StingerAudioComponent) == 904, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::StingerAudioComponent");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, StingerEventForwarder) == 912, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::StingerEventForwarder");
static_assert(offsetof(UFortAthenaMutator_DeluluGameModeSpawning, FortSquadStartActors) == 944, "Offset mismatch for UFortAthenaMutator_DeluluGameModeSpawning::FortSquadStartActors");

// /Script/DeluluSpawningRuntime.FortAthenaMutator_DeluluSpawning
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_DeluluSpawning
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t bGroupSquadSpawnsTogether; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0401
    std::uint8_t StormPhaseIDToUseForSpawning[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t StormPhaseRadiusMultToUseForSpawning[0x1]; // 0x0430 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_DeluluSpawning, bGroupSquadSpawnsTogether) == 1024, "Offset mismatch for UFortAthenaMutator_DeluluSpawning::bGroupSquadSpawnsTogether");
static_assert(offsetof(UFortAthenaMutator_DeluluSpawning, StormPhaseIDToUseForSpawning) == 1032, "Offset mismatch for UFortAthenaMutator_DeluluSpawning::StormPhaseIDToUseForSpawning");
static_assert(offsetof(UFortAthenaMutator_DeluluSpawning, StormPhaseRadiusMultToUseForSpawning) == 1072, "Offset mismatch for UFortAthenaMutator_DeluluSpawning::StormPhaseRadiusMultToUseForSpawning");

// /Script/DeluluSpawningRuntime.FortControllerComponent_DeluluSpawning
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_DeluluSpawning
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SpawnPlayerStart; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_DeluluSpawning, SpawnPlayerStart) == 248, "Offset mismatch for UFortControllerComponent_DeluluSpawning::SpawnPlayerStart");
