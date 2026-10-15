/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionCoreUI.ExtractableItemLevelData
// Kind: ScriptStruct; super: none
struct FExtractableItemLevelData
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Progress; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FExtractableItemLevelData, Level) == 0, "Offset mismatch for FExtractableItemLevelData::Level");
static_assert(offsetof(FExtractableItemLevelData, Progress) == 4, "Offset mismatch for FExtractableItemLevelData::Progress");

// /Script/SpriteExtractionCoreUI.ExtractableItemUIData
// Kind: ScriptStruct; super: none
struct FExtractableItemUIData
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Image; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FExtractableItemUIData, Name) == 0, "Offset mismatch for FExtractableItemUIData::Name");
static_assert(offsetof(FExtractableItemUIData, Description) == 16, "Offset mismatch for FExtractableItemUIData::Description");
static_assert(offsetof(FExtractableItemUIData, Image) == 32, "Offset mismatch for FExtractableItemUIData::Image");

// /Script/SpriteExtractionCoreUI.ExtractableVariationItemData
// Kind: ScriptStruct; super: none
struct FExtractableVariationItemData
{
public:
    FName VariantId; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Name[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t AcquisitionType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t Image[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t State; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FExtractableVariationItemData, VariantId) == 0, "Offset mismatch for FExtractableVariationItemData::VariantId");
static_assert(offsetof(FExtractableVariationItemData, Name) == 8, "Offset mismatch for FExtractableVariationItemData::Name");
static_assert(offsetof(FExtractableVariationItemData, AcquisitionType) == 24, "Offset mismatch for FExtractableVariationItemData::AcquisitionType");
static_assert(offsetof(FExtractableVariationItemData, Image) == 32, "Offset mismatch for FExtractableVariationItemData::Image");
static_assert(offsetof(FExtractableVariationItemData, State) == 64, "Offset mismatch for FExtractableVariationItemData::State");

// /Script/SpriteExtractionCoreUI.ExtractableCollectionViewModel
// Kind: Class; super: FortPerUserViewModel
class UExtractableCollectionViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsComingSoonActive; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t ComingSoonDate[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::int32_t CollectionCount; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x008C
    TMap<void*, void*> ItemMap; // 0x0098 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VariationsItemMap; // 0x00A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UExtractableCollectionViewModel, bIsComingSoonActive) == 120, "Offset mismatch for UExtractableCollectionViewModel::bIsComingSoonActive");
static_assert(offsetof(UExtractableCollectionViewModel, ComingSoonDate) == 128, "Offset mismatch for UExtractableCollectionViewModel::ComingSoonDate");
static_assert(offsetof(UExtractableCollectionViewModel, CollectionCount) == 136, "Offset mismatch for UExtractableCollectionViewModel::CollectionCount");
static_assert(offsetof(UExtractableCollectionViewModel, ItemMap) == 152, "Offset mismatch for UExtractableCollectionViewModel::ItemMap");
static_assert(offsetof(UExtractableCollectionViewModel, VariationsItemMap) == 168, "Offset mismatch for UExtractableCollectionViewModel::VariationsItemMap");

// /Script/SpriteExtractionCoreUI.ExtractableItemViewModel
// Kind: Class; super: MVVMViewModelBase
class UExtractableItemViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* ExtractableItemDef; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AugmentItemDefs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* GrantItemDef; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* FortItemVM; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00A0
    void* CachedPersistenceManager; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractableItemViewModel, ExtractableItemDef) == 120, "Offset mismatch for UExtractableItemViewModel::ExtractableItemDef");
static_assert(offsetof(UExtractableItemViewModel, AugmentItemDefs) == 128, "Offset mismatch for UExtractableItemViewModel::AugmentItemDefs");
static_assert(offsetof(UExtractableItemViewModel, GrantItemDef) == 144, "Offset mismatch for UExtractableItemViewModel::GrantItemDef");
static_assert(offsetof(UExtractableItemViewModel, FortItemVM) == 152, "Offset mismatch for UExtractableItemViewModel::FortItemVM");
static_assert(offsetof(UExtractableItemViewModel, CachedPersistenceManager) == 168, "Offset mismatch for UExtractableItemViewModel::CachedPersistenceManager");

// /Script/SpriteExtractionCoreUI.ExtractableWorldItemVM
// Kind: Class; super: FortItemVM
class UExtractableWorldItemVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* TransientCosmeticDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractableWorldItemVM, TransientCosmeticDefinition) == 224, "Offset mismatch for UExtractableWorldItemVM::TransientCosmeticDefinition");
