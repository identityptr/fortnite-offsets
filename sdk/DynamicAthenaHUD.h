/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicAthenaHUD
 */
#pragma once
#include "Basic.h"

// /Script/DynamicAthenaHUD.DynamicAthenaHUDDirector
// Kind: Class; super: FortGameDynamicUIDirector
class UDynamicAthenaHUDDirector
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    void* VehicleHUDScene; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* CreativeQuickbarScene; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* PlayerMessagesScene; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* TournamentScene; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* ArenaTournamentScene; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* BuildWatermarkScene; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* LoadingMessageScene; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayerInfoScene; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* BusReticleScene; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AddedScenes; // 0x0348 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicAthenaHUDDirector, VehicleHUDScene) == 768, "Offset mismatch for UDynamicAthenaHUDDirector::VehicleHUDScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, CreativeQuickbarScene) == 776, "Offset mismatch for UDynamicAthenaHUDDirector::CreativeQuickbarScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, PlayerMessagesScene) == 784, "Offset mismatch for UDynamicAthenaHUDDirector::PlayerMessagesScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, TournamentScene) == 792, "Offset mismatch for UDynamicAthenaHUDDirector::TournamentScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, ArenaTournamentScene) == 800, "Offset mismatch for UDynamicAthenaHUDDirector::ArenaTournamentScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, BuildWatermarkScene) == 808, "Offset mismatch for UDynamicAthenaHUDDirector::BuildWatermarkScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, LoadingMessageScene) == 816, "Offset mismatch for UDynamicAthenaHUDDirector::LoadingMessageScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, LocalPlayerInfoScene) == 824, "Offset mismatch for UDynamicAthenaHUDDirector::LocalPlayerInfoScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, BusReticleScene) == 832, "Offset mismatch for UDynamicAthenaHUDDirector::BusReticleScene");
static_assert(offsetof(UDynamicAthenaHUDDirector, AddedScenes) == 840, "Offset mismatch for UDynamicAthenaHUDDirector::AddedScenes");
