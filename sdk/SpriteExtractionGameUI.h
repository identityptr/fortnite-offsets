/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionGameUI
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionGameUI.ExtractionEventQueueEmpty
// Kind: ScriptStruct; super: none
struct FExtractionEventQueueEmpty
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpriteExtractionGameUI.PostMatchExtractionItemData
// Kind: ScriptStruct; super: none
struct FPostMatchExtractionItemData
{
public:
    void* Definition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPostMatchExtractionItemData, Definition) == 0, "Offset mismatch for FPostMatchExtractionItemData::Definition");

// /Script/SpriteExtractionGameUI.ExtractionEventInfoViewModel
// Kind: Class; super: MVVMViewModelBase
class UExtractionEventInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* DefinitionViewModel; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ItemDefinition; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SpriteExtractionPersistence; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractionEventInfoViewModel, DefinitionViewModel) == 112, "Offset mismatch for UExtractionEventInfoViewModel::DefinitionViewModel");
static_assert(offsetof(UExtractionEventInfoViewModel, ItemDefinition) == 120, "Offset mismatch for UExtractionEventInfoViewModel::ItemDefinition");
static_assert(offsetof(UExtractionEventInfoViewModel, SpriteExtractionPersistence) == 128, "Offset mismatch for UExtractionEventInfoViewModel::SpriteExtractionPersistence");

// /Script/SpriteExtractionGameUI.InGameExtractableItemViewModel
// Kind: Class; super: MVVMViewModelBase
class UInGameExtractableItemViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* DefinitionViewModel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* WorldItem; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ItemDefinition; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* ExtractionPersistenceComponent; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInGameExtractableItemViewModel, DefinitionViewModel) == 104, "Offset mismatch for UInGameExtractableItemViewModel::DefinitionViewModel");
static_assert(offsetof(UInGameExtractableItemViewModel, WorldItem) == 112, "Offset mismatch for UInGameExtractableItemViewModel::WorldItem");
static_assert(offsetof(UInGameExtractableItemViewModel, ItemDefinition) == 120, "Offset mismatch for UInGameExtractableItemViewModel::ItemDefinition");
static_assert(offsetof(UInGameExtractableItemViewModel, ExtractionPersistenceComponent) == 128, "Offset mismatch for UInGameExtractableItemViewModel::ExtractionPersistenceComponent");

// /Script/SpriteExtractionGameUI.PlayerExtractableInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class UPlayerExtractableInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* EquippedExtractableViewModel; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayerExtractableInfoViewModel, EquippedExtractableViewModel) == 120, "Offset mismatch for UPlayerExtractableInfoViewModel::EquippedExtractableViewModel");

// /Script/SpriteExtractionGameUI.PlayerExtractedItemsViewModel
// Kind: Class; super: FortPerUserViewModel
class UPlayerExtractedItemsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> NewExtractionEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DuplicateExtractionEvents; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayerExtractedItemsViewModel, NewExtractionEvents) == 120, "Offset mismatch for UPlayerExtractedItemsViewModel::NewExtractionEvents");
static_assert(offsetof(UPlayerExtractedItemsViewModel, DuplicateExtractionEvents) == 136, "Offset mismatch for UPlayerExtractedItemsViewModel::DuplicateExtractionEvents");

// /Script/SpriteExtractionGameUI.PostMatchExtractionInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class UPostMatchExtractionInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> SecuredItems; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtractedItems; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LostItems; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FirstTimeMasteredItems; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPostMatchExtractionInfoViewModel, SecuredItems) == 120, "Offset mismatch for UPostMatchExtractionInfoViewModel::SecuredItems");
static_assert(offsetof(UPostMatchExtractionInfoViewModel, ExtractedItems) == 136, "Offset mismatch for UPostMatchExtractionInfoViewModel::ExtractedItems");
static_assert(offsetof(UPostMatchExtractionInfoViewModel, LostItems) == 152, "Offset mismatch for UPostMatchExtractionInfoViewModel::LostItems");
static_assert(offsetof(UPostMatchExtractionInfoViewModel, FirstTimeMasteredItems) == 168, "Offset mismatch for UPostMatchExtractionInfoViewModel::FirstTimeMasteredItems");

// /Script/SpriteExtractionGameUI.PostMatchExtractionItemViewModel
// Kind: Class; super: MVVMViewModelBase
class UPostMatchExtractionItemViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* DefinitionViewModel; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Data[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPostMatchExtractionItemViewModel, DefinitionViewModel) == 104, "Offset mismatch for UPostMatchExtractionItemViewModel::DefinitionViewModel");
static_assert(offsetof(UPostMatchExtractionItemViewModel, Data) == 112, "Offset mismatch for UPostMatchExtractionItemViewModel::Data");
