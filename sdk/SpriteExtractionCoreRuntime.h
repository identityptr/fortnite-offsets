/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionCoreRuntime.FortExtractableSpriteDefinition
// Kind: Class; super: ExtractableItemDefinition
class UFortExtractableSpriteDefinition
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    TArray<void*> PossibleAugments; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LevelUpExpCurve[0x28]; // 0x04E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RelicPointsOnExtraction[0x10]; // 0x0508 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentExtractableDefinition[0x20]; // 0x0518 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t DexNumber; // 0x0538 (Size: 0x4, Type: IntProperty)
    std::uint8_t ExtractableType; // 0x053C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x053D
    std::uint8_t ItemToGrant[0x20]; // 0x0540 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AcquisitionType; // 0x0560 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0561
    std::uint8_t CustomProjectile[0x20]; // 0x0568 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t EquippedActiveAbilitySet[0x20]; // 0x0588 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AIEventTableRow[0x10]; // 0x05A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t AcquisitionHintText[0x10]; // 0x05B8 (Size: 0x10, Type: TextProperty)
    FName ExtractRewardLootTier; // 0x05C8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortExtractableSpriteDefinition, PossibleAugments) == 1232, "Offset mismatch for UFortExtractableSpriteDefinition::PossibleAugments");
static_assert(offsetof(UFortExtractableSpriteDefinition, LevelUpExpCurve) == 1248, "Offset mismatch for UFortExtractableSpriteDefinition::LevelUpExpCurve");
static_assert(offsetof(UFortExtractableSpriteDefinition, RelicPointsOnExtraction) == 1288, "Offset mismatch for UFortExtractableSpriteDefinition::RelicPointsOnExtraction");
static_assert(offsetof(UFortExtractableSpriteDefinition, ParentExtractableDefinition) == 1304, "Offset mismatch for UFortExtractableSpriteDefinition::ParentExtractableDefinition");
static_assert(offsetof(UFortExtractableSpriteDefinition, DexNumber) == 1336, "Offset mismatch for UFortExtractableSpriteDefinition::DexNumber");
static_assert(offsetof(UFortExtractableSpriteDefinition, ExtractableType) == 1340, "Offset mismatch for UFortExtractableSpriteDefinition::ExtractableType");
static_assert(offsetof(UFortExtractableSpriteDefinition, ItemToGrant) == 1344, "Offset mismatch for UFortExtractableSpriteDefinition::ItemToGrant");
static_assert(offsetof(UFortExtractableSpriteDefinition, AcquisitionType) == 1376, "Offset mismatch for UFortExtractableSpriteDefinition::AcquisitionType");
static_assert(offsetof(UFortExtractableSpriteDefinition, CustomProjectile) == 1384, "Offset mismatch for UFortExtractableSpriteDefinition::CustomProjectile");
static_assert(offsetof(UFortExtractableSpriteDefinition, EquippedActiveAbilitySet) == 1416, "Offset mismatch for UFortExtractableSpriteDefinition::EquippedActiveAbilitySet");
static_assert(offsetof(UFortExtractableSpriteDefinition, AIEventTableRow) == 1448, "Offset mismatch for UFortExtractableSpriteDefinition::AIEventTableRow");
static_assert(offsetof(UFortExtractableSpriteDefinition, AcquisitionHintText) == 1464, "Offset mismatch for UFortExtractableSpriteDefinition::AcquisitionHintText");
static_assert(offsetof(UFortExtractableSpriteDefinition, ExtractRewardLootTier) == 1480, "Offset mismatch for UFortExtractableSpriteDefinition::ExtractRewardLootTier");
