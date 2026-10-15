/**
 * decamp dumper generated SDK
 * Package: /Game/Spectating/BattleMap/BP_BattleMapAirMoveNode
 */
#pragma once
#include "Basic.h"

// /Game/Spectating/BattleMap/BP_BattleMapAirMoveNode.BP_BattleMapAirMoveNode_C
// Kind: BlueprintGeneratedClass; super: BattleMapGroundMoveNode
class UBP_BattleMapAirMoveNode_C
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* StaticMesh; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSceneRoot; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_BattleMapAirMoveNode_C, StaticMesh) == 880, "Offset mismatch for UBP_BattleMapAirMoveNode_C::StaticMesh");
static_assert(offsetof(UBP_BattleMapAirMoveNode_C, DefaultSceneRoot) == 888, "Offset mismatch for UBP_BattleMapAirMoveNode_C::DefaultSceneRoot");
