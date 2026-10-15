/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMatchmakingCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksMatchmakingCoreRuntime.SparksMatchmakingCoreRuntimeOptions
// Kind: Class; super: RuntimeOptionsBase
class USparksMatchmakingCoreRuntimeOptions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString FriedRiceLinkCode; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableFriedRiceLink; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    FString JamIslandLinkCode; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableJamIslandLink; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0061
    FString PilgrimQuickplayMnemonic; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString AlternatePilgrimQuickplayMnemonic; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString DefaultMainStageProductMode; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableBattleStageLink; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0099
    FString BattleStageParentSetMnemonic; // 0x00A0 (Size: 0x10, Type: StrProperty)
    FString BattleStagePrimaryMnemonic; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bUseSparksCustomFillSettings; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, FriedRiceLinkCode) == 56, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::FriedRiceLinkCode");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, bEnableFriedRiceLink) == 72, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::bEnableFriedRiceLink");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, JamIslandLinkCode) == 80, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::JamIslandLinkCode");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, bEnableJamIslandLink) == 96, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::bEnableJamIslandLink");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, PilgrimQuickplayMnemonic) == 104, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::PilgrimQuickplayMnemonic");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, AlternatePilgrimQuickplayMnemonic) == 120, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::AlternatePilgrimQuickplayMnemonic");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, DefaultMainStageProductMode) == 136, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::DefaultMainStageProductMode");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, bEnableBattleStageLink) == 152, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::bEnableBattleStageLink");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, BattleStageParentSetMnemonic) == 160, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::BattleStageParentSetMnemonic");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, BattleStagePrimaryMnemonic) == 176, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::BattleStagePrimaryMnemonic");
static_assert(offsetof(USparksMatchmakingCoreRuntimeOptions, bUseSparksCustomFillSettings) == 192, "Offset mismatch for USparksMatchmakingCoreRuntimeOptions::bUseSparksCustomFillSettings");

// /Script/SparksMatchmakingCoreRuntime.SparksMatchmakingUISaveData
// Kind: Class; super: Object
class USparksMatchmakingUISaveData
{
public:
    std::uint8_t Opaque[1];
};
