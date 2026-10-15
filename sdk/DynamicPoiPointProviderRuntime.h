/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicPoiPointProviderRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DynamicPoiPointProviderRuntime.DynamicPOIMaxActorCondition
// Kind: ScriptStruct; super: none
struct FDynamicPOIMaxActorCondition
{
public:
    float MinAreaSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxAreaSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxCount; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDynamicPOIMaxActorCondition, MinAreaSize) == 0, "Offset mismatch for FDynamicPOIMaxActorCondition::MinAreaSize");
static_assert(offsetof(FDynamicPOIMaxActorCondition, MaxAreaSize) == 4, "Offset mismatch for FDynamicPOIMaxActorCondition::MaxAreaSize");
static_assert(offsetof(FDynamicPOIMaxActorCondition, MaxCount) == 8, "Offset mismatch for FDynamicPOIMaxActorCondition::MaxCount");

// /Script/DynamicPoiPointProviderRuntime.AIServiceDynamicPoiPointProvider
// Kind: Class; super: AthenaAIService
class UAIServiceDynamicPoiPointProvider
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t DynamicPOIPointProviderTags[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnLimiterBehavior; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    TArray<void*> MaxActorConditions; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DefaultMaxActorCount; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00B4
    void* CachedAIServicePlayerBots; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DynamicPoiPointProviders; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAIServiceDynamicPoiPointProvider, DynamicPOIPointProviderTags) == 120, "Offset mismatch for UAIServiceDynamicPoiPointProvider::DynamicPOIPointProviderTags");
static_assert(offsetof(UAIServiceDynamicPoiPointProvider, SpawnLimiterBehavior) == 152, "Offset mismatch for UAIServiceDynamicPoiPointProvider::SpawnLimiterBehavior");
static_assert(offsetof(UAIServiceDynamicPoiPointProvider, MaxActorConditions) == 160, "Offset mismatch for UAIServiceDynamicPoiPointProvider::MaxActorConditions");
static_assert(offsetof(UAIServiceDynamicPoiPointProvider, DefaultMaxActorCount) == 176, "Offset mismatch for UAIServiceDynamicPoiPointProvider::DefaultMaxActorCount");
static_assert(offsetof(UAIServiceDynamicPoiPointProvider, CachedAIServicePlayerBots) == 184, "Offset mismatch for UAIServiceDynamicPoiPointProvider::CachedAIServicePlayerBots");
static_assert(offsetof(UAIServiceDynamicPoiPointProvider, DynamicPoiPointProviders) == 192, "Offset mismatch for UAIServiceDynamicPoiPointProvider::DynamicPoiPointProviders");

// /Script/DynamicPoiPointProviderRuntime.DynamicPoiPointProvider
// Kind: Class; super: Object
class UDynamicPoiPointProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CachedGameState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PointProviderFiltersTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x0060 (Size: 0x68, Type: StructProperty)
    std::uint8_t Box[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    TArray<void*> Locations; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicPoiPointProvider, CachedGameState) == 48, "Offset mismatch for UDynamicPoiPointProvider::CachedGameState");
static_assert(offsetof(UDynamicPoiPointProvider, CachedLivingWorldManager) == 56, "Offset mismatch for UDynamicPoiPointProvider::CachedLivingWorldManager");
static_assert(offsetof(UDynamicPoiPointProvider, PointProviderFiltersTags) == 64, "Offset mismatch for UDynamicPoiPointProvider::PointProviderFiltersTags");
static_assert(offsetof(UDynamicPoiPointProvider, SpawnLimiter) == 96, "Offset mismatch for UDynamicPoiPointProvider::SpawnLimiter");
static_assert(offsetof(UDynamicPoiPointProvider, Box) == 200, "Offset mismatch for UDynamicPoiPointProvider::Box");
static_assert(offsetof(UDynamicPoiPointProvider, Locations) == 256, "Offset mismatch for UDynamicPoiPointProvider::Locations");
