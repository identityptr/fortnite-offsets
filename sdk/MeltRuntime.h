/**
 * decamp dumper generated SDK
 * Package: /Script/MeltRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MeltRuntime.FortAthenaMutator_Melt
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_Melt
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

static_assert(offsetof(UFortAthenaMutator_Melt, bAutomaticallyFinishInitialization) == 744, "Offset mismatch for UFortAthenaMutator_Melt::bAutomaticallyFinishInitialization");
static_assert(offsetof(UFortAthenaMutator_Melt, GameMsg_AircraftPhaseIntroMessage) == 752, "Offset mismatch for UFortAthenaMutator_Melt::GameMsg_AircraftPhaseIntroMessage");
static_assert(offsetof(UFortAthenaMutator_Melt, Stinger_MatchStart) == 832, "Offset mismatch for UFortAthenaMutator_Melt::Stinger_MatchStart");
static_assert(offsetof(UFortAthenaMutator_Melt, Stinger_MatchEnd) == 848, "Offset mismatch for UFortAthenaMutator_Melt::Stinger_MatchEnd");
static_assert(offsetof(UFortAthenaMutator_Melt, Stinger_MatchEndWin) == 864, "Offset mismatch for UFortAthenaMutator_Melt::Stinger_MatchEndWin");
static_assert(offsetof(UFortAthenaMutator_Melt, Stinger_MatchEndLose) == 880, "Offset mismatch for UFortAthenaMutator_Melt::Stinger_MatchEndLose");
static_assert(offsetof(UFortAthenaMutator_Melt, StingerAudioComponent) == 904, "Offset mismatch for UFortAthenaMutator_Melt::StingerAudioComponent");
static_assert(offsetof(UFortAthenaMutator_Melt, StingerEventForwarder) == 912, "Offset mismatch for UFortAthenaMutator_Melt::StingerEventForwarder");
static_assert(offsetof(UFortAthenaMutator_Melt, FortSquadStartActors) == 944, "Offset mismatch for UFortAthenaMutator_Melt::FortSquadStartActors");
