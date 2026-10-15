/**
 * decamp dumper generated SDK
 * Package: /Script/VictoryCrownsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VictoryCrownsRuntime.FortEvent_HasWonCrownInMatch
// Kind: ScriptStruct; super: none
struct FFortEvent_HasWonCrownInMatch
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VictoryCrownsRuntime.FortEvent_HasWonRoyalRoyale
// Kind: ScriptStruct; super: none
struct FFortEvent_HasWonRoyalRoyale
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VictoryCrownsRuntime.FortCheatManager_VictoryCrowns
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_VictoryCrowns
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_VictoryCrowns
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00E0
    std::uint8_t CrownInventoryItemClass[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bWonCrownInMatch; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWonRoyalRoyale; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0132
    void* VictoryCrownAccountItemDefinition; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoyalRoyaleEmoteItemDefinition[0x20]; // 0x0140 (Size: 0x20, Type: SoftObjectProperty)
    void* VictoryCrownPlaylistData; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoyalRoyaleVerbTag[0x4]; // 0x0168 (Size: 0x4, Type: StructProperty)
    std::uint8_t VictoryCrownAccountData[0x14]; // 0x016C (Size: 0x14, Type: StructProperty)
    std::uint8_t InitialGrantDelay[0x50]; // 0x0180 (Size: 0x50, Type: StructProperty)
    std::uint8_t bKillFeedBroadcastReady; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortControllerComponent_VictoryCrowns, OnVictoryCrownStatusChanged) == 208, "Offset mismatch for UFortControllerComponent_VictoryCrowns::OnVictoryCrownStatusChanged");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, CrownInventoryItemClass) == 272, "Offset mismatch for UFortControllerComponent_VictoryCrowns::CrownInventoryItemClass");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bWonCrownInMatch) == 304, "Offset mismatch for UFortControllerComponent_VictoryCrowns::bWonCrownInMatch");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bWonRoyalRoyale) == 305, "Offset mismatch for UFortControllerComponent_VictoryCrowns::bWonRoyalRoyale");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownAccountItemDefinition) == 312, "Offset mismatch for UFortControllerComponent_VictoryCrowns::VictoryCrownAccountItemDefinition");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, RoyalRoyaleEmoteItemDefinition) == 320, "Offset mismatch for UFortControllerComponent_VictoryCrowns::RoyalRoyaleEmoteItemDefinition");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownPlaylistData) == 352, "Offset mismatch for UFortControllerComponent_VictoryCrowns::VictoryCrownPlaylistData");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, RoyalRoyaleVerbTag) == 360, "Offset mismatch for UFortControllerComponent_VictoryCrowns::RoyalRoyaleVerbTag");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, VictoryCrownAccountData) == 364, "Offset mismatch for UFortControllerComponent_VictoryCrowns::VictoryCrownAccountData");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, InitialGrantDelay) == 384, "Offset mismatch for UFortControllerComponent_VictoryCrowns::InitialGrantDelay");
static_assert(offsetof(UFortControllerComponent_VictoryCrowns, bKillFeedBroadcastReady) == 464, "Offset mismatch for UFortControllerComponent_VictoryCrowns::bKillFeedBroadcastReady");

// /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_VictoryCrowns
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> CrownBearerPlayerStates; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    std::uint8_t KillFeedFormat_Dropped[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    FText KillFeedFormat_PickedUp; // 0x00F0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, CrownBearerPlayerStates) == 192, "Offset mismatch for UFortGameStateComponent_VictoryCrowns::CrownBearerPlayerStates");
static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, KillFeedFormat_Dropped) == 224, "Offset mismatch for UFortGameStateComponent_VictoryCrowns::KillFeedFormat_Dropped");
static_assert(offsetof(UFortGameStateComponent_VictoryCrowns, KillFeedFormat_PickedUp) == 240, "Offset mismatch for UFortGameStateComponent_VictoryCrowns::KillFeedFormat_PickedUp");

// /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_VictoryCrowns
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bHasWonRoyalRoyale; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_VictoryCrowns, bHasWonRoyalRoyale) == 192, "Offset mismatch for UFortPlayerStateComponent_VictoryCrowns::bHasWonRoyalRoyale");

// /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
// Kind: Class; super: MVVMViewModelBase
class UFortVictoryCrownViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t BestowedCount; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasWonRoyalRoyale; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    TWeakObjectPtr<void> BoundVictoryCrownsComponent; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortVictoryCrownViewModel, BestowedCount) == 104, "Offset mismatch for UFortVictoryCrownViewModel::BestowedCount");
static_assert(offsetof(UFortVictoryCrownViewModel, bHasWonRoyalRoyale) == 108, "Offset mismatch for UFortVictoryCrownViewModel::bHasWonRoyalRoyale");
static_assert(offsetof(UFortVictoryCrownViewModel, BoundVictoryCrownsComponent) == 112, "Offset mismatch for UFortVictoryCrownViewModel::BoundVictoryCrownsComponent");

// /Script/VictoryCrownsRuntime.VictoryCrownPersistenceProvider
// Kind: Class; super: Interface
class UVictoryCrownPersistenceProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VictoryCrownsRuntime.VictoryCrownPersistenceProviderSubsystem
// Kind: Class; super: WorldSubsystem
class UVictoryCrownPersistenceProviderSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TScriptInterface<void> RegisteredProvider; // 0x0038 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UVictoryCrownPersistenceProviderSubsystem, RegisteredProvider) == 56, "Offset mismatch for UVictoryCrownPersistenceProviderSubsystem::RegisteredProvider");
