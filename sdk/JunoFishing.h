/**
 * decamp dumper generated SDK
 * Package: /Script/JunoFishing
 */
#pragma once
#include "Basic.h"

// /Script/JunoFishing.JunoFishingBobWeights
// Kind: ScriptStruct; super: TableRowBase
struct FJunoFishingBobWeights
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BobType[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float BaselineWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RequiredTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> Weights; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoFishingBobWeights, BobType) == 8, "Offset mismatch for FJunoFishingBobWeights::BobType");
static_assert(offsetof(FJunoFishingBobWeights, BaselineWeight) == 12, "Offset mismatch for FJunoFishingBobWeights::BaselineWeight");
static_assert(offsetof(FJunoFishingBobWeights, RequiredTags) == 16, "Offset mismatch for FJunoFishingBobWeights::RequiredTags");
static_assert(offsetof(FJunoFishingBobWeights, Weights) == 48, "Offset mismatch for FJunoFishingBobWeights::Weights");

// /Script/JunoFishing.JunoFishingCatchWeights
// Kind: ScriptStruct; super: TableRowBase
struct FJunoFishingCatchWeights
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BobType[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> ItemsToCatch; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FName LootTierGroupToCatch; // 0x0020 (Size: 0x8, Type: NameProperty)
    TArray<void*> Weights; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoFishingCatchWeights, BobType) == 8, "Offset mismatch for FJunoFishingCatchWeights::BobType");
static_assert(offsetof(FJunoFishingCatchWeights, ItemsToCatch) == 16, "Offset mismatch for FJunoFishingCatchWeights::ItemsToCatch");
static_assert(offsetof(FJunoFishingCatchWeights, LootTierGroupToCatch) == 32, "Offset mismatch for FJunoFishingCatchWeights::LootTierGroupToCatch");
static_assert(offsetof(FJunoFishingCatchWeights, Weights) == 40, "Offset mismatch for FJunoFishingCatchWeights::Weights");

// /Script/JunoFishing.JunoFishingWeight
// Kind: ScriptStruct; super: none
struct FJunoFishingWeight
{
public:
    std::uint8_t Tag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoFishingWeight, Tag) == 0, "Offset mismatch for FJunoFishingWeight::Tag");
static_assert(offsetof(FJunoFishingWeight, Weight) == 4, "Offset mismatch for FJunoFishingWeight::Weight");

// /Script/JunoFishing.JunoPlayerFishingTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoPlayerFishingTelemetryData
{
public:
    float TimeFishingSessionBegan; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* ResultItem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ItemUsedToFish; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bFromHotspot; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayerSpawnedHotspot; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    FString HotspotTierTag; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString WaterBodyName; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString CatchTypeName; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoPlayerFishingTelemetryData, TimeFishingSessionBegan) == 0, "Offset mismatch for FJunoPlayerFishingTelemetryData::TimeFishingSessionBegan");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, ResultItem) == 8, "Offset mismatch for FJunoPlayerFishingTelemetryData::ResultItem");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, ItemUsedToFish) == 16, "Offset mismatch for FJunoPlayerFishingTelemetryData::ItemUsedToFish");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, bFromHotspot) == 24, "Offset mismatch for FJunoPlayerFishingTelemetryData::bFromHotspot");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, bIsPlayerSpawnedHotspot) == 25, "Offset mismatch for FJunoPlayerFishingTelemetryData::bIsPlayerSpawnedHotspot");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, HotspotTierTag) == 32, "Offset mismatch for FJunoPlayerFishingTelemetryData::HotspotTierTag");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, WaterBodyName) == 48, "Offset mismatch for FJunoPlayerFishingTelemetryData::WaterBodyName");
static_assert(offsetof(FJunoPlayerFishingTelemetryData, CatchTypeName) == 64, "Offset mismatch for FJunoPlayerFishingTelemetryData::CatchTypeName");

// /Script/JunoFishing.JunoFishingAnalytics
// Kind: Class; super: Object
class UJunoFishingAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoFishing.JunoFishingBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoFishingBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoFishing.JunoPlayerControllerComponent_FishingAnalytics
// Kind: Class; super: ControllerComponent
class UJunoPlayerControllerComponent_FishingAnalytics
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PlayerFishingTelemetryData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerControllerComponent_FishingAnalytics, PlayerFishingTelemetryData) == 192, "Offset mismatch for UJunoPlayerControllerComponent_FishingAnalytics::PlayerFishingTelemetryData");
