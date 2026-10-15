/**
 * decamp dumper generated SDK
 * Package: /Script/SaveFrameworkPersistenceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SaveFrameworkPersistenceRuntime.FortSaveFrameworkPersistenceParams
// Kind: ScriptStruct; super: none
struct FFortSaveFrameworkPersistenceParams
{
public:
    FName SaveInventoryShortName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString SaveInventoryName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString SaveDataResourceId; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortSaveFrameworkPersistenceParams, SaveInventoryShortName) == 0, "Offset mismatch for FFortSaveFrameworkPersistenceParams::SaveInventoryShortName");
static_assert(offsetof(FFortSaveFrameworkPersistenceParams, SaveInventoryName) == 8, "Offset mismatch for FFortSaveFrameworkPersistenceParams::SaveInventoryName");
static_assert(offsetof(FFortSaveFrameworkPersistenceParams, SaveDataResourceId) == 24, "Offset mismatch for FFortSaveFrameworkPersistenceParams::SaveDataResourceId");

// /Script/SaveFrameworkPersistenceRuntime.FortPlayerStateComponent_SaveFrameworkPersistence
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_SaveFrameworkPersistence
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPersistenceStatusChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPersistenceAvailable; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPersistenceWiped; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PersistenceParams[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PersistenceDataRoot[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_SaveFrameworkPersistence, OnPlayerPersistenceStatusChanged) == 192, "Offset mismatch for UFortPlayerStateComponent_SaveFrameworkPersistence::OnPlayerPersistenceStatusChanged");
static_assert(offsetof(UFortPlayerStateComponent_SaveFrameworkPersistence, OnPlayerPersistenceAvailable) == 208, "Offset mismatch for UFortPlayerStateComponent_SaveFrameworkPersistence::OnPlayerPersistenceAvailable");
static_assert(offsetof(UFortPlayerStateComponent_SaveFrameworkPersistence, OnPlayerPersistenceWiped) == 224, "Offset mismatch for UFortPlayerStateComponent_SaveFrameworkPersistence::OnPlayerPersistenceWiped");
static_assert(offsetof(UFortPlayerStateComponent_SaveFrameworkPersistence, PersistenceParams) == 240, "Offset mismatch for UFortPlayerStateComponent_SaveFrameworkPersistence::PersistenceParams");
static_assert(offsetof(UFortPlayerStateComponent_SaveFrameworkPersistence, PersistenceDataRoot) == 280, "Offset mismatch for UFortPlayerStateComponent_SaveFrameworkPersistence::PersistenceDataRoot");
