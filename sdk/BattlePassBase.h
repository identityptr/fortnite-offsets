/**
 * decamp dumper generated SDK
 * Package: /Script/BattlePassBase
 */
#pragma once
#include "Basic.h"

// /Script/BattlePassBase.FortBattlePassLevelCount
// Kind: Class; super: UserWidget
class UFortBattlePassLevelCount
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* Text_LevelCount; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortBattlePassLevelCount, Text_LevelCount) == 776, "Offset mismatch for UFortBattlePassLevelCount::Text_LevelCount");
