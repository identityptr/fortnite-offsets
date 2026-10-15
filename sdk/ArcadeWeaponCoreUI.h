/**
 * decamp dumper generated SDK
 * Package: /Script/ArcadeWeaponCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/ArcadeWeaponCoreUI.ArcadeWeaponLeaderboardPlayerEntryVM
// Kind: Class; super: MVVMViewModelBase
class UArcadeWeaponLeaderboardPlayerEntryVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* FortPlayerAvatarViewModel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UArcadeWeaponLeaderboardPlayerEntryVM, FortPlayerAvatarViewModel) == 104, "Offset mismatch for UArcadeWeaponLeaderboardPlayerEntryVM::FortPlayerAvatarViewModel");

// /Script/ArcadeWeaponCoreUI.ArcadeWeaponLeaderboardVM
// Kind: Class; super: FortPerUserViewModel
class UArcadeWeaponLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> LeaderboardEntries; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* LocalPlayerEntry; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UArcadeWeaponLeaderboardVM, LeaderboardEntries) == 120, "Offset mismatch for UArcadeWeaponLeaderboardVM::LeaderboardEntries");
static_assert(offsetof(UArcadeWeaponLeaderboardVM, LocalPlayerEntry) == 136, "Offset mismatch for UArcadeWeaponLeaderboardVM::LocalPlayerEntry");

// /Script/ArcadeWeaponCoreUI.ArcadeWeaponTabScreen
// Kind: Class; super: CommonActivatableWidget
class UArcadeWeaponTabScreen
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t MapTabInfo[0x1]; // 0x04C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UArcadeWeaponTabScreen, MapTabInfo) == 1224, "Offset mismatch for UArcadeWeaponTabScreen::MapTabInfo");
