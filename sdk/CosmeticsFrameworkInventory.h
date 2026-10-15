/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkInventory
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkInventory.CosmeticBackendItemHandle
// Kind: ScriptStruct; super: none
struct FCosmeticBackendItemHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkInventory.CosmeticInventoryCache
// Kind: Class; super: Object
class UCosmeticInventoryCache
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FString DebugName; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCosmeticInventoryCache, DebugName) == 72, "Offset mismatch for UCosmeticInventoryCache::DebugName");
