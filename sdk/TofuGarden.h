/**
 * decamp dumper generated SDK
 * Package: /Script/TofuGarden
 */
#pragma once
#include "Basic.h"

// /Script/TofuGarden.TofuGardenRank
// Kind: ScriptStruct; super: none
struct FTofuGardenRank
{
public:
    std::int32_t Progress; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Rarity; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t Numeral; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTofuGardenRank, Progress) == 0, "Offset mismatch for FTofuGardenRank::Progress");
static_assert(offsetof(FTofuGardenRank, Rarity) == 4, "Offset mismatch for FTofuGardenRank::Rarity");
static_assert(offsetof(FTofuGardenRank, Numeral) == 8, "Offset mismatch for FTofuGardenRank::Numeral");

// /Script/TofuGarden.TofuGardenRankTrack
// Kind: ScriptStruct; super: TableRowBase
struct FTofuGardenRankTrack
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Ranks; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTofuGardenRankTrack, Ranks) == 8, "Offset mismatch for FTofuGardenRankTrack::Ranks");

// /Script/TofuGarden.FortCheatManager_TofuGarden
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_TofuGarden
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TofuGarden.FortPlayerStateComponent_TofuGarden
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_TofuGarden
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TofuGardenPointsItem[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MinimumPlayerBotProgress[0x28]; // 0x00E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumPlayerBotProgress[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::int32_t CachedTofuGardenProgress; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0134
    FName CurrentEmoteStat; // 0x0150 (Size: 0x8, Type: NameProperty)
    std::uint8_t CancellableEmoteTags[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, TofuGardenPointsItem) == 192, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::TofuGardenPointsItem");
static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, MinimumPlayerBotProgress) == 224, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::MinimumPlayerBotProgress");
static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, MaximumPlayerBotProgress) == 264, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::MaximumPlayerBotProgress");
static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, CachedTofuGardenProgress) == 304, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::CachedTofuGardenProgress");
static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, CurrentEmoteStat) == 336, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::CurrentEmoteStat");
static_assert(offsetof(UFortPlayerStateComponent_TofuGarden, CancellableEmoteTags) == 344, "Offset mismatch for UFortPlayerStateComponent_TofuGarden::CancellableEmoteTags");

// /Script/TofuGarden.TofuGardenFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTofuGardenFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
