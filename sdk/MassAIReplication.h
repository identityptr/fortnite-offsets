/**
 * decamp dumper generated SDK
 * Package: /Script/MassAIReplication
 */
#pragma once
#include "Basic.h"

// /Script/MassAIReplication.ReplicatedAgentPathData
// Kind: ScriptStruct; super: none
struct FReplicatedAgentPathData
{
public:
    std::uint8_t PathRequest[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t LaneHandle[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    double ActionServerStartTime; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    float DistanceAlongLane; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float LaneLength; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DesiredSpeed[0x2]; // 0x0060 (Size: 0x2, Type: StructProperty)
    std::uint16_t ActionID; // 0x0062 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Action; // 0x0064 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FReplicatedAgentPathData, PathRequest) == 0, "Offset mismatch for FReplicatedAgentPathData::PathRequest");
static_assert(offsetof(FReplicatedAgentPathData, LaneHandle) == 72, "Offset mismatch for FReplicatedAgentPathData::LaneHandle");
static_assert(offsetof(FReplicatedAgentPathData, ActionServerStartTime) == 80, "Offset mismatch for FReplicatedAgentPathData::ActionServerStartTime");
static_assert(offsetof(FReplicatedAgentPathData, DistanceAlongLane) == 88, "Offset mismatch for FReplicatedAgentPathData::DistanceAlongLane");
static_assert(offsetof(FReplicatedAgentPathData, LaneLength) == 92, "Offset mismatch for FReplicatedAgentPathData::LaneLength");
static_assert(offsetof(FReplicatedAgentPathData, DesiredSpeed) == 96, "Offset mismatch for FReplicatedAgentPathData::DesiredSpeed");
static_assert(offsetof(FReplicatedAgentPathData, ActionID) == 98, "Offset mismatch for FReplicatedAgentPathData::ActionID");
static_assert(offsetof(FReplicatedAgentPathData, Action) == 100, "Offset mismatch for FReplicatedAgentPathData::Action");
