/**
 * decamp dumper generated SDK
 * Package: /Script/TofuGardenCommonUI
 */
#pragma once
#include "Basic.h"

// /Script/TofuGardenCommonUI.TofuGardenUIRank
// Kind: ScriptStruct; super: TableRowBase
struct FTofuGardenUIRank
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tier; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t TierNameLocalized[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::int32_t SubTier; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0024
    std::uint8_t RankIcon[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> RankBackplate; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FTofuGardenUIRank, Tier) == 8, "Offset mismatch for FTofuGardenUIRank::Tier");
static_assert(offsetof(FTofuGardenUIRank, TierNameLocalized) == 16, "Offset mismatch for FTofuGardenUIRank::TierNameLocalized");
static_assert(offsetof(FTofuGardenUIRank, SubTier) == 32, "Offset mismatch for FTofuGardenUIRank::SubTier");
static_assert(offsetof(FTofuGardenUIRank, RankIcon) == 40, "Offset mismatch for FTofuGardenUIRank::RankIcon");
static_assert(offsetof(FTofuGardenUIRank, RankBackplate) == 72, "Offset mismatch for FTofuGardenUIRank::RankBackplate");

// /Script/TofuGardenCommonUI.TofuGardenUICheatManager
// Kind: Class; super: ChildCheatManager
class UTofuGardenUICheatManager
{
public:
    std::uint8_t Opaque[1];
};
