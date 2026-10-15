/**
 * decamp dumper generated SDK
 * Package: /Script/SaveDataSubsystem
 */
#pragma once
#include "Basic.h"

// /Script/SaveDataSubsystem.SaveDataBase
// Kind: ScriptStruct; super: none
struct FSaveDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SaveDataSubsystem.DeviceSaveCollection
// Kind: Class; super: SaveGame
class UDeviceSaveCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Settings; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDeviceSaveCollection, Settings) == 40, "Offset mismatch for UDeviceSaveCollection::Settings");

// /Script/SaveDataSubsystem.SaveDataSubsystem
// Kind: Class; super: LocalPlayerSubsystem
class USaveDataSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* LocalForDevice; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USaveDataSubsystem, LocalForDevice) == 48, "Offset mismatch for USaveDataSubsystem::LocalForDevice");
