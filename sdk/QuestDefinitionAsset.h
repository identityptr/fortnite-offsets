/**
 * decamp dumper generated SDK
 * Package: /Script/QuestDefinitionAsset
 */
#pragma once
#include "Basic.h"

// /Script/QuestDefinitionAsset.QuestDefinitionAsset
// Kind: Class; super: PrimaryDataAsset
class UQuestDefinitionAsset
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionText[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescriptionText[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    void* ObjectiveDefinition; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Rewards; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefinitionExtensions; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestDefinitionAsset, DisplayName) == 64, "Offset mismatch for UQuestDefinitionAsset::DisplayName");
static_assert(offsetof(UQuestDefinitionAsset, DescriptionText) == 80, "Offset mismatch for UQuestDefinitionAsset::DescriptionText");
static_assert(offsetof(UQuestDefinitionAsset, ShortDescriptionText) == 96, "Offset mismatch for UQuestDefinitionAsset::ShortDescriptionText");
static_assert(offsetof(UQuestDefinitionAsset, Icon) == 112, "Offset mismatch for UQuestDefinitionAsset::Icon");
static_assert(offsetof(UQuestDefinitionAsset, ObjectiveDefinition) == 144, "Offset mismatch for UQuestDefinitionAsset::ObjectiveDefinition");
static_assert(offsetof(UQuestDefinitionAsset, Rewards) == 152, "Offset mismatch for UQuestDefinitionAsset::Rewards");
static_assert(offsetof(UQuestDefinitionAsset, DefinitionExtensions) == 168, "Offset mismatch for UQuestDefinitionAsset::DefinitionExtensions");
