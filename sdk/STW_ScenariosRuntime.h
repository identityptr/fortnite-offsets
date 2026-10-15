/**
 * decamp dumper generated SDK
 * Package: /Script/STW_ScenariosRuntime
 */
#pragma once
#include "Basic.h"

// /Script/STW_ScenariosRuntime.FortEventReaction_STWScenarioComplete
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_STWScenarioComplete
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bSuccess; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MissionType; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t ScenarioTags[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_STWScenarioComplete, bSuccess) == 8, "Offset mismatch for FFortEventReaction_STWScenarioComplete::bSuccess");
static_assert(offsetof(FFortEventReaction_STWScenarioComplete, MissionType) == 9, "Offset mismatch for FFortEventReaction_STWScenarioComplete::MissionType");
static_assert(offsetof(FFortEventReaction_STWScenarioComplete, ScenarioTags) == 16, "Offset mismatch for FFortEventReaction_STWScenarioComplete::ScenarioTags");
