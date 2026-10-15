/**
 * decamp dumper generated SDK
 * Package: /SpeedOverTime/GameplayCues/GCNL_SprintOvertime_Sprint
 */
#pragma once
#include "Basic.h"

// /SpeedOverTime/GameplayCues/GCNL_SprintOvertime_Sprint.GCNL_SprintOvertime_Sprint_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_SprintOvertime_Sprint_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    std::uint8_t IsLocal; // 0x0C50 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0C51
    void* ForceLoop; // 0x0C58 (Size: 0x8, Type: ObjectProperty)
    void* ForceLoopComponent; // 0x0C60 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0C68
    void* Stage1LoopingSound; // 0x0C70 (Size: 0x8, Type: ObjectProperty)
    void* PlayerLoopingSound; // 0x0C78 (Size: 0x8, Type: ObjectProperty)
    void* Stage2LoopingSound; // 0x0C80 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tag_MaxSpeed[0x1]; // 0x0C88 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::UberGraphFrame");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, IsLocal) == 3152, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::IsLocal");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, ForceLoop) == 3160, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::ForceLoop");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, ForceLoopComponent) == 3168, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::ForceLoopComponent");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, Stage1LoopingSound) == 3184, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::Stage1LoopingSound");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, PlayerLoopingSound) == 3192, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::PlayerLoopingSound");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, Stage2LoopingSound) == 3200, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::Stage2LoopingSound");
static_assert(offsetof(UGCNL_SprintOvertime_Sprint_C, Tag_MaxSpeed) == 3208, "Offset mismatch for UGCNL_SprintOvertime_Sprint_C::Tag_MaxSpeed");
