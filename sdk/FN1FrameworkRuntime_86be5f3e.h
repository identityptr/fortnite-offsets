/**
 * decamp dumper generated SDK
 * Package: /Script/FN1FrameworkRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FN1FrameworkRuntime.SpriteMagpieModuleEntry
// Kind: ScriptStruct; super: none
struct FSpriteMagpieModuleEntry
{
public:
    std::uint8_t ModuleProviderClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bIsCurrentSeason; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpriteMagpieModuleEntry, ModuleProviderClass) == 0, "Offset mismatch for FSpriteMagpieModuleEntry::ModuleProviderClass");
static_assert(offsetof(FSpriteMagpieModuleEntry, bIsCurrentSeason) == 32, "Offset mismatch for FSpriteMagpieModuleEntry::bIsCurrentSeason");

// /Script/FN1FrameworkRuntime.LiveSpectatorBridgeComponent
// Kind: Class; super: ActorComponent
class ULiveSpectatorBridgeComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* VerseSpectatorManager; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiveSpectatorBridgeComponent, VerseSpectatorManager) == 240, "Offset mismatch for ULiveSpectatorBridgeComponent::VerseSpectatorManager");

// /Script/FN1FrameworkRuntime.SpriteMagpieBridgeSettings
// Kind: Class; super: DeveloperSettings
class USpriteMagpieBridgeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> SpriteModules; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpriteMagpieBridgeSettings, SpriteModules) == 48, "Offset mismatch for USpriteMagpieBridgeSettings::SpriteModules");

// /Script/FN1FrameworkRuntime.VersePersistenceProvider
// Kind: Class; super: Object
class UVersePersistenceProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FN1FrameworkRuntime.VerseSpectatorManager
// Kind: Class; super: Object
class UVerseSpectatorManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SpectatorBridge; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseSpectatorManager, SpectatorBridge) == 40, "Offset mismatch for UVerseSpectatorManager::SpectatorBridge");
