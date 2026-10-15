/**
 * decamp dumper generated SDK
 * Package: /BattleTracks/BP_BattleTracksPlayerComp
 */
#pragma once
#include "Basic.h"

// /BattleTracks/BP_BattleTracksPlayerComp.BP_BattleTracksPlayerComp_C
// Kind: BlueprintGeneratedClass; super: BattleTracksPlayerComponent
class UBP_BattleTracksPlayerComp_C
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    void* PossessedPawn; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BattleTracksTag[0x4]; // 0x0128 (Size: 0x4, Type: StructProperty)
    std::uint8_t DropMomentTag[0x4]; // 0x012C (Size: 0x4, Type: StructProperty)
    std::uint8_t VictoryMomentTag[0x4]; // 0x0130 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayedDropSong; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float BusDropSongDelay; // 0x0138 (Size: 0x4, Type: FloatProperty)
    float BattleTrackTimeOffset; // 0x013C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBP_BattleTracksPlayerComp_C, UberGraphFrame) == 280, "Offset mismatch for UBP_BattleTracksPlayerComp_C::UberGraphFrame");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, PossessedPawn) == 288, "Offset mismatch for UBP_BattleTracksPlayerComp_C::PossessedPawn");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, BattleTracksTag) == 296, "Offset mismatch for UBP_BattleTracksPlayerComp_C::BattleTracksTag");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, DropMomentTag) == 300, "Offset mismatch for UBP_BattleTracksPlayerComp_C::DropMomentTag");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, VictoryMomentTag) == 304, "Offset mismatch for UBP_BattleTracksPlayerComp_C::VictoryMomentTag");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, PlayedDropSong) == 308, "Offset mismatch for UBP_BattleTracksPlayerComp_C::PlayedDropSong");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, BusDropSongDelay) == 312, "Offset mismatch for UBP_BattleTracksPlayerComp_C::BusDropSongDelay");
static_assert(offsetof(UBP_BattleTracksPlayerComp_C, BattleTrackTimeOffset) == 316, "Offset mismatch for UBP_BattleTracksPlayerComp_C::BattleTrackTimeOffset");
