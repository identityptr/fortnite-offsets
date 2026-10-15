/**
 * decamp dumper generated SDK
 * Package: /Script/MorningBellQuestsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MorningBellQuestsRuntime.FortQuestDefinitionComponent_DailyLogin
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_DailyLogin
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bIsDaySpecial; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_DailyLogin, bIsDaySpecial) == 64, "Offset mismatch for UFortQuestDefinitionComponent_DailyLogin::bIsDaySpecial");
