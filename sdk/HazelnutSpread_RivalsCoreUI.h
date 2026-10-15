/**
 * decamp dumper generated SDK
 * Package: /Script/HazelnutSpread_RivalsCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/HazelnutSpread_RivalsCoreUI.ClashMeshDataVM
// Kind: Class; super: MVVMViewModelBase
class UClashMeshDataVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int64_t CurrentValue; // 0x0068 (Size: 0x8, Type: Int64Property)
    std::int64_t RequiredValue; // 0x0070 (Size: 0x8, Type: Int64Property)
    FName FactionName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UClashMeshDataVM, CurrentValue) == 104, "Offset mismatch for UClashMeshDataVM::CurrentValue");
static_assert(offsetof(UClashMeshDataVM, RequiredValue) == 112, "Offset mismatch for UClashMeshDataVM::RequiredValue");
static_assert(offsetof(UClashMeshDataVM, FactionName) == 120, "Offset mismatch for UClashMeshDataVM::FactionName");

// /Script/HazelnutSpread_RivalsCoreUI.ClashPlayerDataVM
// Kind: Class; super: FortPerUserViewModel
class UClashPlayerDataVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpread_RivalsCoreUI.FortGameStateComponent_HazelnutSpreadLeaderboardData
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_HazelnutSpreadLeaderboardData
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* PlayerRankTitleDataTable; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_HazelnutSpreadLeaderboardData, PlayerRankTitleDataTable) == 200, "Offset mismatch for UFortGameStateComponent_HazelnutSpreadLeaderboardData::PlayerRankTitleDataTable");

// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadBaseLeaderboardVM
// Kind: Class; super: FortPerUserViewModel
class UHazelnutSpreadBaseLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* LocalPlayerLeaderboardInfo; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OrderedPlayerLeaderboardInfo; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHazelnutSpreadBaseLeaderboardVM, LocalPlayerLeaderboardInfo) == 128, "Offset mismatch for UHazelnutSpreadBaseLeaderboardVM::LocalPlayerLeaderboardInfo");
static_assert(offsetof(UHazelnutSpreadBaseLeaderboardVM, OrderedPlayerLeaderboardInfo) == 136, "Offset mismatch for UHazelnutSpreadBaseLeaderboardVM::OrderedPlayerLeaderboardInfo");

// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadFrontendLeaderboardVM
// Kind: Class; super: HazelnutSpreadBaseLeaderboardVM
class UHazelnutSpreadFrontendLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* LocalPlayerLeaderboardInfo; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OrderedPlayerLeaderboardInfo; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHazelnutSpreadFrontendLeaderboardVM, LocalPlayerLeaderboardInfo) == 128, "Offset mismatch for UHazelnutSpreadFrontendLeaderboardVM::LocalPlayerLeaderboardInfo");
static_assert(offsetof(UHazelnutSpreadFrontendLeaderboardVM, OrderedPlayerLeaderboardInfo) == 136, "Offset mismatch for UHazelnutSpreadFrontendLeaderboardVM::OrderedPlayerLeaderboardInfo");

// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadInGameLeaderboardVM
// Kind: Class; super: HazelnutSpreadBaseLeaderboardVM
class UHazelnutSpreadInGameLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* LocalPlayerLeaderboardInfo; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OrderedPlayerLeaderboardInfo; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHazelnutSpreadInGameLeaderboardVM, LocalPlayerLeaderboardInfo) == 128, "Offset mismatch for UHazelnutSpreadInGameLeaderboardVM::LocalPlayerLeaderboardInfo");
static_assert(offsetof(UHazelnutSpreadInGameLeaderboardVM, OrderedPlayerLeaderboardInfo) == 136, "Offset mismatch for UHazelnutSpreadInGameLeaderboardVM::OrderedPlayerLeaderboardInfo");

// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadInMatchTabScreen
// Kind: Class; super: CommonActivatableWidget
class UHazelnutSpreadInMatchTabScreen
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t MapTabInfo[0x1]; // 0x04C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHazelnutSpreadInMatchTabScreen, MapTabInfo) == 1224, "Offset mismatch for UHazelnutSpreadInMatchTabScreen::MapTabInfo");

// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadPlayerLeaderboardInfoBaseVM
// Kind: Class; super: MVVMViewModelBase
class UHazelnutSpreadPlayerLeaderboardInfoBaseVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadPlayerLeaderboardInfoFrontendVM
// Kind: Class; super: HazelnutSpreadPlayerLeaderboardInfoBaseVM
class UHazelnutSpreadPlayerLeaderboardInfoFrontendVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HazelnutSpread_RivalsCoreUI.HazelnutSpreadPlayerLeaderboardInfoInGameVM
// Kind: Class; super: HazelnutSpreadPlayerLeaderboardInfoBaseVM
class UHazelnutSpreadPlayerLeaderboardInfoInGameVM
{
public:
    std::uint8_t Opaque[1];
};
