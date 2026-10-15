/**
 * decamp dumper generated SDK
 * Package: /Script/EpicCMS
 */
#pragma once
#include "Basic.h"

// /Script/EpicCMS.DownloadCache
// Kind: ScriptStruct; super: none
struct FDownloadCache
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::int32_t Version; // 0x0004 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> Cache; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDownloadCache, Version) == 4, "Offset mismatch for FDownloadCache::Version");
static_assert(offsetof(FDownloadCache, Cache) == 8, "Offset mismatch for FDownloadCache::Cache");

// /Script/EpicCMS.DownloadCacheEntry
// Kind: ScriptStruct; super: none
struct FDownloadCacheEntry
{
public:
    FString FilePath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SourceUrl; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t LastAccessTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::int32_t LifetimeInDays; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    FString ETag; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExpirationTime[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDownloadCacheEntry, FilePath) == 0, "Offset mismatch for FDownloadCacheEntry::FilePath");
static_assert(offsetof(FDownloadCacheEntry, SourceUrl) == 16, "Offset mismatch for FDownloadCacheEntry::SourceUrl");
static_assert(offsetof(FDownloadCacheEntry, LastAccessTime) == 32, "Offset mismatch for FDownloadCacheEntry::LastAccessTime");
static_assert(offsetof(FDownloadCacheEntry, LifetimeInDays) == 40, "Offset mismatch for FDownloadCacheEntry::LifetimeInDays");
static_assert(offsetof(FDownloadCacheEntry, ETag) == 48, "Offset mismatch for FDownloadCacheEntry::ETag");
static_assert(offsetof(FDownloadCacheEntry, ExpirationTime) == 64, "Offset mismatch for FDownloadCacheEntry::ExpirationTime");
