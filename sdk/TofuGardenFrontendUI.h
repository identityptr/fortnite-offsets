/**
 * decamp dumper generated SDK
 * Package: /Script/TofuGardenFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/TofuGardenFrontendUI.TofuGardenLobbyDetailsUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UTofuGardenLobbyDetailsUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t ValidProductIslands[0x1]; // 0x02A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTofuGardenLobbyDetailsUIDirector, ValidProductIslands) == 672, "Offset mismatch for UTofuGardenLobbyDetailsUIDirector::ValidProductIslands");

// /Script/TofuGardenFrontendUI.TofuGardenViewModel
// Kind: Class; super: FortPerUserViewModel
class UTofuGardenViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t Points; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t PointsForNextRank; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsFirstDailyWin; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMaxRank; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0082
    std::uint8_t CurrentRank[0x68]; // 0x0088 (Size: 0x68, Type: StructProperty)
    void* RankDataTable; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTofuGardenViewModel, Points) == 120, "Offset mismatch for UTofuGardenViewModel::Points");
static_assert(offsetof(UTofuGardenViewModel, PointsForNextRank) == 124, "Offset mismatch for UTofuGardenViewModel::PointsForNextRank");
static_assert(offsetof(UTofuGardenViewModel, bIsFirstDailyWin) == 128, "Offset mismatch for UTofuGardenViewModel::bIsFirstDailyWin");
static_assert(offsetof(UTofuGardenViewModel, bIsMaxRank) == 129, "Offset mismatch for UTofuGardenViewModel::bIsMaxRank");
static_assert(offsetof(UTofuGardenViewModel, CurrentRank) == 136, "Offset mismatch for UTofuGardenViewModel::CurrentRank");
static_assert(offsetof(UTofuGardenViewModel, RankDataTable) == 240, "Offset mismatch for UTofuGardenViewModel::RankDataTable");
