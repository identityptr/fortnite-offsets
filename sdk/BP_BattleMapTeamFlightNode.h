/**
 * decamp dumper generated SDK
 * Package: /Game/Spectating/BattleMap/BP_BattleMapTeamFlightNode
 */
#pragma once
#include "Basic.h"

// /Game/Spectating/BattleMap/BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C
// Kind: BlueprintGeneratedClass; super: none
class UBP_BattleMapTeamFlightNode_C
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    void* StaticMesh; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_BattleMapTeamFlightNode_C, StaticMesh) == 864, "Offset mismatch for UBP_BattleMapTeamFlightNode_C::StaticMesh");
static_assert(offsetof(UBP_BattleMapTeamFlightNode_C, DefaultSceneRoot) == 872, "Offset mismatch for UBP_BattleMapTeamFlightNode_C::DefaultSceneRoot");
