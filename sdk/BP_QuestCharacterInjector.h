/**
 * decamp dumper generated SDK
 * Package: /CharacterCollectionMapScreen/Injectors/BP_QuestCharacterInjector
 */
#pragma once
#include "Basic.h"

// /CharacterCollectionMapScreen/Injectors/BP_QuestCharacterInjector.BP_QuestCharacterInjector_C
// Kind: BlueprintGeneratedClass; super: QuestCharacterInjector
class UBP_QuestCharacterInjector_C
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

static_assert(offsetof(UBP_QuestCharacterInjector_C, CategoryDisplayName) == 280, "Offset mismatch for UBP_QuestCharacterInjector_C::CategoryDisplayName");
static_assert(offsetof(UBP_QuestCharacterInjector_C, CategoryIcon) == 296, "Offset mismatch for UBP_QuestCharacterInjector_C::CategoryIcon");
static_assert(offsetof(UBP_QuestCharacterInjector_C, CategorySortOrder) == 328, "Offset mismatch for UBP_QuestCharacterInjector_C::CategorySortOrder");
static_assert(offsetof(UBP_QuestCharacterInjector_C, CollectionType) == 336, "Offset mismatch for UBP_QuestCharacterInjector_C::CollectionType");
static_assert(offsetof(UBP_QuestCharacterInjector_C, CollectionCategory) == 352, "Offset mismatch for UBP_QuestCharacterInjector_C::CollectionCategory");
static_assert(offsetof(UBP_QuestCharacterInjector_C, SharedServiceVisualData) == 368, "Offset mismatch for UBP_QuestCharacterInjector_C::SharedServiceVisualData");
