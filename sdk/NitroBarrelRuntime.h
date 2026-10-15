/**
 * decamp dumper generated SDK
 * Package: /Script/NitroBarrelRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NitroBarrelRuntime.BuildingGameplayActorNitroBarrelClassData
// Kind: ScriptStruct; super: BuildingGameplayActorClassData
struct FBuildingGameplayActorNitroBarrelClassData
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t bEnablePhysicsUserData; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBuildingGameplayActorNitroBarrelClassData, bEnablePhysicsUserData) == 248, "Offset mismatch for FBuildingGameplayActorNitroBarrelClassData::bEnablePhysicsUserData");

// /Script/NitroBarrelRuntime.BuildingGameplayActorNitroBarrel
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorNitroBarrel
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    FMulticastInlineDelegate OnContactWithVehicleDelegate; // 0x0928 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UBuildingGameplayActorNitroBarrel, OnContactWithVehicleDelegate) == 2344, "Offset mismatch for UBuildingGameplayActorNitroBarrel::OnContactWithVehicleDelegate");
