/**
 * decamp dumper generated SDK
 * Package: /Script/NavCorridor
 */
#pragma once
#include "Basic.h"

// /Script/NavCorridor.NavCorridorParams
// Kind: ScriptStruct; super: none
struct FNavCorridorParams
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float Width; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float PathOffsetFromBoundaries; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float ObstacleTaperAngle; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float SmallSectorThreshold; // 0x003C (Size: 0x4, Type: FloatProperty)
    float LargeSectorThreshold; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float SimplifyEdgeThreshold; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSimplifyFlipPortals; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyConvexPortals; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSimplifyConcavePortals; // 0x004A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNavCorridorParams, Width) == 48, "Offset mismatch for FNavCorridorParams::Width");
static_assert(offsetof(FNavCorridorParams, PathOffsetFromBoundaries) == 52, "Offset mismatch for FNavCorridorParams::PathOffsetFromBoundaries");
static_assert(offsetof(FNavCorridorParams, ObstacleTaperAngle) == 56, "Offset mismatch for FNavCorridorParams::ObstacleTaperAngle");
static_assert(offsetof(FNavCorridorParams, SmallSectorThreshold) == 60, "Offset mismatch for FNavCorridorParams::SmallSectorThreshold");
static_assert(offsetof(FNavCorridorParams, LargeSectorThreshold) == 64, "Offset mismatch for FNavCorridorParams::LargeSectorThreshold");
static_assert(offsetof(FNavCorridorParams, SimplifyEdgeThreshold) == 68, "Offset mismatch for FNavCorridorParams::SimplifyEdgeThreshold");
static_assert(offsetof(FNavCorridorParams, bSimplifyFlipPortals) == 72, "Offset mismatch for FNavCorridorParams::bSimplifyFlipPortals");
static_assert(offsetof(FNavCorridorParams, bSimplifyConvexPortals) == 73, "Offset mismatch for FNavCorridorParams::bSimplifyConvexPortals");
static_assert(offsetof(FNavCorridorParams, bSimplifyConcavePortals) == 74, "Offset mismatch for FNavCorridorParams::bSimplifyConcavePortals");

// /Script/NavCorridor.NavCorridorTestingActor
// Kind: Class; super: Actor
class UNavCorridorTestingActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DebugComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNavCorridorTestingActor, DebugComp) == 624, "Offset mismatch for UNavCorridorTestingActor::DebugComp");

// /Script/NavCorridor.NavCorridorTestingComponent
// Kind: Class; super: DebugDrawComponent
class UNavCorridorTestingComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::uint8_t NavAgentProps[0x30]; // 0x05D0 (Size: 0x30, Type: StructProperty)
    void* FilterClass; // 0x0600 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bFindCorridorToGoal; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFollowPathOnGoalCorridor; // 0x0609 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x060A
    float FollowLookAheadDistance; // 0x060C (Size: 0x4, Type: FloatProperty)
    void* GoalActor; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* NavData; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CorridorParams[0x50]; // 0x0620 (Size: 0x50, Type: StructProperty)
    std::uint8_t bUpdateParametersFromWidth; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0671
    float PathOffset; // 0x0674 (Size: 0x4, Type: FloatProperty)
    float PathfindingTimeUs; // 0x0678 (Size: 0x4, Type: FloatProperty)
    float CorridorTimeUs; // 0x067C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNavCorridorTestingComponent, NavAgentProps) == 1488, "Offset mismatch for UNavCorridorTestingComponent::NavAgentProps");
static_assert(offsetof(UNavCorridorTestingComponent, FilterClass) == 1536, "Offset mismatch for UNavCorridorTestingComponent::FilterClass");
static_assert(offsetof(UNavCorridorTestingComponent, bFindCorridorToGoal) == 1544, "Offset mismatch for UNavCorridorTestingComponent::bFindCorridorToGoal");
static_assert(offsetof(UNavCorridorTestingComponent, bFollowPathOnGoalCorridor) == 1545, "Offset mismatch for UNavCorridorTestingComponent::bFollowPathOnGoalCorridor");
static_assert(offsetof(UNavCorridorTestingComponent, FollowLookAheadDistance) == 1548, "Offset mismatch for UNavCorridorTestingComponent::FollowLookAheadDistance");
static_assert(offsetof(UNavCorridorTestingComponent, GoalActor) == 1552, "Offset mismatch for UNavCorridorTestingComponent::GoalActor");
static_assert(offsetof(UNavCorridorTestingComponent, NavData) == 1560, "Offset mismatch for UNavCorridorTestingComponent::NavData");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorParams) == 1568, "Offset mismatch for UNavCorridorTestingComponent::CorridorParams");
static_assert(offsetof(UNavCorridorTestingComponent, bUpdateParametersFromWidth) == 1648, "Offset mismatch for UNavCorridorTestingComponent::bUpdateParametersFromWidth");
static_assert(offsetof(UNavCorridorTestingComponent, PathOffset) == 1652, "Offset mismatch for UNavCorridorTestingComponent::PathOffset");
static_assert(offsetof(UNavCorridorTestingComponent, PathfindingTimeUs) == 1656, "Offset mismatch for UNavCorridorTestingComponent::PathfindingTimeUs");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorTimeUs) == 1660, "Offset mismatch for UNavCorridorTestingComponent::CorridorTimeUs");
