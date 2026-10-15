/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaSegmentCache
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheConfig
// Kind: ScriptStruct; super: none
struct FEpicMediaSegmentCacheConfig
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetCache; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPersistentCache; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPersistentCacheAsTemporary; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearCache; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t CacheSizeMaxFiles; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::int64_t CacheSizeOnDiskMaxBytes; // 0x0010 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FEpicMediaSegmentCacheConfig, bEnabled) == 0, "Offset mismatch for FEpicMediaSegmentCacheConfig::bEnabled");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, bResetCache) == 1, "Offset mismatch for FEpicMediaSegmentCacheConfig::bResetCache");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, bPersistentCache) == 2, "Offset mismatch for FEpicMediaSegmentCacheConfig::bPersistentCache");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, bAllowPersistentCacheAsTemporary) == 3, "Offset mismatch for FEpicMediaSegmentCacheConfig::bAllowPersistentCacheAsTemporary");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, bClearCache) == 4, "Offset mismatch for FEpicMediaSegmentCacheConfig::bClearCache");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, CacheSizeMaxFiles) == 8, "Offset mismatch for FEpicMediaSegmentCacheConfig::CacheSizeMaxFiles");
static_assert(offsetof(FEpicMediaSegmentCacheConfig, CacheSizeOnDiskMaxBytes) == 16, "Offset mismatch for FEpicMediaSegmentCacheConfig::CacheSizeOnDiskMaxBytes");

// /Script/EpicMediaSegmentCache.EpicMediaSegmentCacheInit
// Kind: Class; super: Object
class UEpicMediaSegmentCacheInit
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CacheConfig[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEpicMediaSegmentCacheInit, CacheConfig) == 40, "Offset mismatch for UEpicMediaSegmentCacheInit::CacheConfig");
