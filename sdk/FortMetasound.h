/**
 * decamp dumper generated SDK
 * Package: /Script/FortMetasound
 */
#pragma once
#include "Basic.h"

// /Script/FortMetasound.CachedMetaSoundContainer
// Kind: ScriptStruct; super: none
struct FCachedMetaSoundContainer
{
public:
    TArray<void*> CachedMetaSounds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCachedMetaSoundContainer, CachedMetaSounds) == 0, "Offset mismatch for FCachedMetaSoundContainer::CachedMetaSounds");

// /Script/FortMetasound.FortMetaSoundCache
// Kind: ScriptStruct; super: none
struct FFortMetaSoundCache
{
public:
    TArray<void*> CacheEntries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortMetaSoundCache, CacheEntries) == 0, "Offset mismatch for FFortMetaSoundCache::CacheEntries");

// /Script/FortMetasound.FortMetaSoundCacheEntry
// Kind: ScriptStruct; super: none
struct FFortMetaSoundCacheEntry
{
public:
    std::uint8_t Metasound[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t MaxInstancesToCache; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseSharedCache; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMetaSoundCacheEntry, Metasound) == 0, "Offset mismatch for FFortMetaSoundCacheEntry::Metasound");
static_assert(offsetof(FFortMetaSoundCacheEntry, MaxInstancesToCache) == 32, "Offset mismatch for FFortMetaSoundCacheEntry::MaxInstancesToCache");
static_assert(offsetof(FFortMetaSoundCacheEntry, bUseSharedCache) == 36, "Offset mismatch for FFortMetaSoundCacheEntry::bUseSharedCache");

// /Script/FortMetasound.ParameterInterfaceContext
// Kind: ScriptStruct; super: none
struct FParameterInterfaceContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.ParameterInterfaceContext_ActiveSound
// Kind: ScriptStruct; super: ParameterInterfaceContext
struct FParameterInterfaceContext_ActiveSound
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.ParameterInterfaceContext_ActiveSound_Movement
// Kind: ScriptStruct; super: ParameterInterfaceContext_ActiveSound
struct FParameterInterfaceContext_ActiveSound_Movement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.ParameterInterfaceContext_ActiveSound_RecentCollection
// Kind: ScriptStruct; super: ParameterInterfaceContext_ActiveSound
struct FParameterInterfaceContext_ActiveSound_RecentCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.ParameterInterfaceContext_ActiveSound_Time
// Kind: ScriptStruct; super: ParameterInterfaceContext_ActiveSound
struct FParameterInterfaceContext_ActiveSound_Time
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.ParameterInterfaceDefinition
// Kind: ScriptStruct; super: none
struct FParameterInterfaceDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextUpdateRate[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float InterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParameterInterfaceDefinition, ContextUpdateRate) == 8, "Offset mismatch for FParameterInterfaceDefinition::ContextUpdateRate");
static_assert(offsetof(FParameterInterfaceDefinition, InterpSpeed) == 32, "Offset mismatch for FParameterInterfaceDefinition::InterpSpeed");

// /Script/FortMetasound.ParameterInterfaceDefinition_ActiveSound
// Kind: ScriptStruct; super: ParameterInterfaceDefinition
struct FParameterInterfaceDefinition_ActiveSound
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextUpdateRate[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float InterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound, ContextUpdateRate) == 8, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound::ContextUpdateRate");
static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound, InterpSpeed) == 32, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound::InterpSpeed");

// /Script/FortMetasound.ParameterInterfaceDefinition_ActiveSound_Movement
// Kind: ScriptStruct; super: ParameterInterfaceDefinition
struct FParameterInterfaceDefinition_ActiveSound_Movement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextUpdateRate[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float InterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_Movement, ContextUpdateRate) == 8, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_Movement::ContextUpdateRate");
static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_Movement, InterpSpeed) == 32, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_Movement::InterpSpeed");

// /Script/FortMetasound.ParameterInterfaceDefinition_ActiveSound_RecentCollection
// Kind: ScriptStruct; super: ParameterInterfaceDefinition
struct FParameterInterfaceDefinition_ActiveSound_RecentCollection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextUpdateRate[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float InterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_RecentCollection, ContextUpdateRate) == 8, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_RecentCollection::ContextUpdateRate");
static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_RecentCollection, InterpSpeed) == 32, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_RecentCollection::InterpSpeed");

// /Script/FortMetasound.ParameterInterfaceDefinition_ActiveSound_Time
// Kind: ScriptStruct; super: ParameterInterfaceDefinition
struct FParameterInterfaceDefinition_ActiveSound_Time
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ContextUpdateRate[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float InterpSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_Time, ContextUpdateRate) == 8, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_Time::ContextUpdateRate");
static_assert(offsetof(FParameterInterfaceDefinition_ActiveSound_Time, InterpSpeed) == 32, "Offset mismatch for FParameterInterfaceDefinition_ActiveSound_Time::InterpSpeed");

// /Script/FortMetasound.RecentPlayTimes
// Kind: ScriptStruct; super: none
struct FRecentPlayTimes
{
public:
    TArray<void*> RecentPlayTimes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRecentPlayTimes, RecentPlayTimes) == 0, "Offset mismatch for FRecentPlayTimes::RecentPlayTimes");

// /Script/FortMetasound.FortGameFeatureAction_PrecacheMetaSounds
// Kind: Class; super: GameFeatureAction_AudioActionBase
class UFortGameFeatureAction_PrecacheMetaSounds
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bDefineCacheInline; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* CacheDefinition; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InlineCacheDefinition[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> CachedMetaSoundsForDevice; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGameFeatureAction_PrecacheMetaSounds, bDefineCacheInline) == 56, "Offset mismatch for UFortGameFeatureAction_PrecacheMetaSounds::bDefineCacheInline");
static_assert(offsetof(UFortGameFeatureAction_PrecacheMetaSounds, CacheDefinition) == 64, "Offset mismatch for UFortGameFeatureAction_PrecacheMetaSounds::CacheDefinition");
static_assert(offsetof(UFortGameFeatureAction_PrecacheMetaSounds, InlineCacheDefinition) == 72, "Offset mismatch for UFortGameFeatureAction_PrecacheMetaSounds::InlineCacheDefinition");
static_assert(offsetof(UFortGameFeatureAction_PrecacheMetaSounds, CachedMetaSoundsForDevice) == 88, "Offset mismatch for UFortGameFeatureAction_PrecacheMetaSounds::CachedMetaSoundsForDevice");

// /Script/FortMetasound.FortMetaSoundCacheDefinition
// Kind: Class; super: DataAsset
class UFortMetaSoundCacheDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Cache[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMetaSoundCacheDefinition, Cache) == 40, "Offset mismatch for UFortMetaSoundCacheDefinition::Cache");

// /Script/FortMetasound.FortMetaSoundInterfaceSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UFortMetaSoundInterfaceSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortMetasound.GameFeatureAction_AddParameterInterfaceDefinitions
// Kind: Class; super: GameFeatureAction_AudioActionBase
class UGameFeatureAction_AddParameterInterfaceDefinitions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Definitions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddParameterInterfaceDefinitions, Definitions) == 56, "Offset mismatch for UGameFeatureAction_AddParameterInterfaceDefinitions::Definitions");
