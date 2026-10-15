/**
 * decamp dumper generated SDK
 * Package: /Script/CharacterCollectionMapScreen
 */
#pragma once
#include "Basic.h"

// /Script/CharacterCollectionMapScreen.AthenaMapCollectionIcon
// Kind: Class; super: AthenaMapNavigableIconCustom
class UAthenaMapCollectionIcon
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    void* Image_Icon; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AnchorPoint[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    std::uint8_t QuestData[0x1]; // 0x0378 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UAthenaMapCollectionIcon, Image_Icon) == 856, "Offset mismatch for UAthenaMapCollectionIcon::Image_Icon");
static_assert(offsetof(UAthenaMapCollectionIcon, AnchorPoint) == 864, "Offset mismatch for UAthenaMapCollectionIcon::AnchorPoint");
static_assert(offsetof(UAthenaMapCollectionIcon, QuestData) == 888, "Offset mismatch for UAthenaMapCollectionIcon::QuestData");

// /Script/CharacterCollectionMapScreen.QuestCharacterInjector
// Kind: Class; super: QuestCollectionInjectorBase
class UQuestCharacterInjector
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t CategoryDisplayName[0x10]; // 0x0118 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryIcon[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t CategorySortOrder; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x014C
    FString CollectionType; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString CollectionCategory; // 0x0160 (Size: 0x10, Type: StrProperty)
    void* SharedServiceVisualData; // 0x0170 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestCharacterInjector, CategoryDisplayName) == 280, "Offset mismatch for UQuestCharacterInjector::CategoryDisplayName");
static_assert(offsetof(UQuestCharacterInjector, CategoryIcon) == 296, "Offset mismatch for UQuestCharacterInjector::CategoryIcon");
static_assert(offsetof(UQuestCharacterInjector, CategorySortOrder) == 328, "Offset mismatch for UQuestCharacterInjector::CategorySortOrder");
static_assert(offsetof(UQuestCharacterInjector, CollectionType) == 336, "Offset mismatch for UQuestCharacterInjector::CollectionType");
static_assert(offsetof(UQuestCharacterInjector, CollectionCategory) == 352, "Offset mismatch for UQuestCharacterInjector::CollectionCategory");
static_assert(offsetof(UQuestCharacterInjector, SharedServiceVisualData) == 368, "Offset mismatch for UQuestCharacterInjector::SharedServiceVisualData");

// /Script/CharacterCollectionMapScreen.QuestUICharacterEntryVM
// Kind: Class; super: QuestUICustomEntryVM
class UQuestUICharacterEntryVM
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::uint8_t SpecializationIcon[0x20]; // 0x0138 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NPCTag[0x8]; // 0x0158 (Size: 0x8, Type: StructProperty)
    FText AdditionalEntryDescription; // 0x0160 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UQuestUICharacterEntryVM, SpecializationIcon) == 312, "Offset mismatch for UQuestUICharacterEntryVM::SpecializationIcon");
static_assert(offsetof(UQuestUICharacterEntryVM, NPCTag) == 344, "Offset mismatch for UQuestUICharacterEntryVM::NPCTag");
static_assert(offsetof(UQuestUICharacterEntryVM, AdditionalEntryDescription) == 352, "Offset mismatch for UQuestUICharacterEntryVM::AdditionalEntryDescription");
