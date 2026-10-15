/**
 * decamp dumper generated SDK
 * Package: /Script/DeveloperSettings
 */
#pragma once
#include "Basic.h"

// /Script/DeveloperSettings.PerPlatformSettings
// Kind: ScriptStruct; super: none
struct FPerPlatformSettings
{
public:
    TArray<void*> Settings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPerPlatformSettings, Settings) == 0, "Offset mismatch for FPerPlatformSettings::Settings");

// /Script/DeveloperSettings.PlatformSettingsInstances
// Kind: ScriptStruct; super: none
struct FPlatformSettingsInstances
{
public:
    void* PlatformInstance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> OtherPlatforms; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPlatformSettingsInstances, PlatformInstance) == 0, "Offset mismatch for FPlatformSettingsInstances::PlatformInstance");
static_assert(offsetof(FPlatformSettingsInstances, OtherPlatforms) == 8, "Offset mismatch for FPlatformSettingsInstances::OtherPlatforms");

// /Script/DeveloperSettings.DeveloperSettings
// Kind: Class; super: Object
class UDeveloperSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeveloperSettings.DeveloperSettingsBackedByCVars
// Kind: Class; super: DeveloperSettings
class UDeveloperSettingsBackedByCVars
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeveloperSettings.PlatformSettings
// Kind: Class; super: Object
class UPlatformSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeveloperSettings.PlatformSettingsManager
// Kind: Class; super: Object
class UPlatformSettingsManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SettingsMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPlatformSettingsManager, SettingsMap) == 40, "Offset mismatch for UPlatformSettingsManager::SettingsMap");
