/**
 * decamp dumper generated SDK
 * Package: /Script/HLTv2ToCustomizableUIMigrationDataRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HLTv2ToCustomizableUIMigrationDataRuntime.GameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSet<void*> RegistriesToAdd; // 0x0030 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UGameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases, RegistriesToAdd) == 48, "Offset mismatch for UGameFeatureAction_AddHLTv2ToCustomizableUIMigrationDatabases::RegistriesToAdd");

// /Script/HLTv2ToCustomizableUIMigrationDataRuntime.HLTv2MigrationDataProvider
// Kind: Class; super: Interface
class UHLTv2MigrationDataProvider
{
public:
    std::uint8_t Opaque[1];
};
