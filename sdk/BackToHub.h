/**
 * decamp dumper generated SDK
 * Package: /Script/BackToHub
 */
#pragma once
#include "Basic.h"

// /Script/BackToHub.BackToHubRegistry
// Kind: Class; super: FortSettingRegistry
class UBackToHubRegistry
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> RootSettings; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RegisteredSettings; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* EditConditionCache; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBackToHubRegistry, RootSettings) == 160, "Offset mismatch for UBackToHubRegistry::RootSettings");
static_assert(offsetof(UBackToHubRegistry, RegisteredSettings) == 176, "Offset mismatch for UBackToHubRegistry::RegisteredSettings");
static_assert(offsetof(UBackToHubRegistry, OwningLocalPlayer) == 192, "Offset mismatch for UBackToHubRegistry::OwningLocalPlayer");
static_assert(offsetof(UBackToHubRegistry, EditConditionCache) == 200, "Offset mismatch for UBackToHubRegistry::EditConditionCache");

// /Script/BackToHub.BackToHubScreen
// Kind: Class; super: SettingsScreen
class UBackToHubScreen
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    TWeakObjectPtr<void> SettingRegistry; // 0x05A0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RegistryOrchestrator; // 0x05A8 (Size: 0x8, Type: WeakObjectProperty)
    void* Settings_Panel; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBackToHubScreen, SettingRegistry) == 1440, "Offset mismatch for UBackToHubScreen::SettingRegistry");
static_assert(offsetof(UBackToHubScreen, RegistryOrchestrator) == 1448, "Offset mismatch for UBackToHubScreen::RegistryOrchestrator");
static_assert(offsetof(UBackToHubScreen, Settings_Panel) == 1456, "Offset mismatch for UBackToHubScreen::Settings_Panel");

// /Script/BackToHub.BackToHubSettingSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UBackToHubSettingSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BackToHub.BackToHubSettings
// Kind: Class; super: DeveloperSettings
class UBackToHubSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> HubLinkCodes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegistryManifests; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBackToHubSettings, HubLinkCodes) == 48, "Offset mismatch for UBackToHubSettings::HubLinkCodes");
static_assert(offsetof(UBackToHubSettings, RegistryManifests) == 64, "Offset mismatch for UBackToHubSettings::RegistryManifests");
