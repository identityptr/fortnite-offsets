/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayStreamingFN
 */
#pragma once
#include "Basic.h"

// /Script/GameplayStreamingFN.GameEntryDeepLink
// Kind: ScriptStruct; super: none
struct FGameEntryDeepLink
{
public:
    FString ProductId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Playlist; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGameEntryDeepLink, ProductId) == 0, "Offset mismatch for FGameEntryDeepLink::ProductId");
static_assert(offsetof(FGameEntryDeepLink, Playlist) == 16, "Offset mismatch for FGameEntryDeepLink::Playlist");

// /Script/GameplayStreamingFN.FortGFNGameplayStreamingHandler
// Kind: Class; super: GFNGameplayStreamingHandler
class UFortGFNGameplayStreamingHandler
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* FortLocalPlayerAccountHelper; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakFortOnlineAccount; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortGFNGameplayStreamingHandler, FortLocalPlayerAccountHelper) == 64, "Offset mismatch for UFortGFNGameplayStreamingHandler::FortLocalPlayerAccountHelper");
static_assert(offsetof(UFortGFNGameplayStreamingHandler, WeakFortOnlineAccount) == 72, "Offset mismatch for UFortGFNGameplayStreamingHandler::WeakFortOnlineAccount");

// /Script/GameplayStreamingFN.FortGameplayStreamingHandler
// Kind: Class; super: Interface
class UFortGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreamingFN.FortGameplayStreamingService
// Kind: Class; super: GameplayStreamingService
class UFortGameplayStreamingService
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ActiveHandler; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayStreamingService, ActiveHandler) == 40, "Offset mismatch for UFortGameplayStreamingService::ActiveHandler");

// /Script/GameplayStreamingFN.FortJioCloudGameplayStreamingHandler
// Kind: Class; super: JioCloudGameplayStreamingHandler
class UFortJioCloudGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreamingFN.FortLocalPlayerAccountHelper
// Kind: Class; super: Object
class UFortLocalPlayerAccountHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreamingFN.FortLunaGameplayStreamingHandler
// Kind: Class; super: LunaGameplayStreamingHandler
class UFortLunaGameplayStreamingHandler
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* FortLocalPlayerAccountHelper; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakFortOnlineAccount; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00A0
    TArray<void*> GameEntryDeepLinks; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortLunaGameplayStreamingHandler, FortLocalPlayerAccountHelper) == 144, "Offset mismatch for UFortLunaGameplayStreamingHandler::FortLocalPlayerAccountHelper");
static_assert(offsetof(UFortLunaGameplayStreamingHandler, WeakFortOnlineAccount) == 152, "Offset mismatch for UFortLunaGameplayStreamingHandler::WeakFortOnlineAccount");
static_assert(offsetof(UFortLunaGameplayStreamingHandler, GameEntryDeepLinks) == 168, "Offset mismatch for UFortLunaGameplayStreamingHandler::GameEntryDeepLinks");

// /Script/GameplayStreamingFN.FortSalmonGameplayStreamingHandler
// Kind: Class; super: SalmonGameplayStreamingHandler
class UFortSalmonGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};
