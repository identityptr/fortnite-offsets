/**
 * decamp dumper generated SDK
 * Package: /Script/TofuGardenGameUI
 */
#pragma once
#include "Basic.h"

// /Script/TofuGardenGameUI.TofuGardenGameViewModel
// Kind: Class; super: FortPerUserViewModel
class UTofuGardenGameViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t Points; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t PointsForNextRank; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsMaxRank; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t PreviousRank[0x68]; // 0x0088 (Size: 0x68, Type: StructProperty)
    std::uint8_t CurrentRank[0x68]; // 0x00F0 (Size: 0x68, Type: StructProperty)
    std::int32_t DeltaPoints; // 0x0158 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDidLevelUp; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x015D
    void* RankDataTable; // 0x0160 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTofuGardenGameViewModel, Points) == 120, "Offset mismatch for UTofuGardenGameViewModel::Points");
static_assert(offsetof(UTofuGardenGameViewModel, PointsForNextRank) == 124, "Offset mismatch for UTofuGardenGameViewModel::PointsForNextRank");
static_assert(offsetof(UTofuGardenGameViewModel, bIsMaxRank) == 128, "Offset mismatch for UTofuGardenGameViewModel::bIsMaxRank");
static_assert(offsetof(UTofuGardenGameViewModel, PreviousRank) == 136, "Offset mismatch for UTofuGardenGameViewModel::PreviousRank");
static_assert(offsetof(UTofuGardenGameViewModel, CurrentRank) == 240, "Offset mismatch for UTofuGardenGameViewModel::CurrentRank");
static_assert(offsetof(UTofuGardenGameViewModel, DeltaPoints) == 344, "Offset mismatch for UTofuGardenGameViewModel::DeltaPoints");
static_assert(offsetof(UTofuGardenGameViewModel, bDidLevelUp) == 348, "Offset mismatch for UTofuGardenGameViewModel::bDidLevelUp");
static_assert(offsetof(UTofuGardenGameViewModel, RankDataTable) == 352, "Offset mismatch for UTofuGardenGameViewModel::RankDataTable");
