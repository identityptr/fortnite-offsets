/**
 * decamp dumper generated SDK
 * Package: /SpriteExtractionGameplay/Gameplay/BGAs/BP_ExtractionSite_Chest_Relic
 */
#pragma once
#include "Basic.h"

// /SpriteExtractionGameplay/Gameplay/BGAs/BP_ExtractionSite_Chest_Relic.BP_ExtractionSite_Chest_Relic_C
// Kind: BlueprintGeneratedClass; super: Actor
class UBP_ExtractionSite_Chest_Relic_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* StaticMesh; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* BudgetSKMesh; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* Sphere; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* ExtractableFX; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* SoundLibrary; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02A0
    void* CachedExtractableDefinition; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TriggerVO; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02B1
    std::uint8_t GC_RelicSpawnInChest[0x4]; // 0x02B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t Force[0x1]; // 0x02B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, UberGraphFrame) == 624, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::UberGraphFrame");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, StaticMesh) == 632, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::StaticMesh");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, BudgetSKMesh) == 640, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::BudgetSKMesh");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, Sphere) == 648, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::Sphere");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, ExtractableFX) == 656, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::ExtractableFX");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, SoundLibrary) == 664, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::SoundLibrary");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, CachedExtractableDefinition) == 680, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::CachedExtractableDefinition");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, TriggerVO) == 688, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::TriggerVO");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, GC_RelicSpawnInChest) == 692, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::GC_RelicSpawnInChest");
static_assert(offsetof(UBP_ExtractionSite_Chest_Relic_C, Force) == 696, "Offset mismatch for UBP_ExtractionSite_Chest_Relic_C::Force");
