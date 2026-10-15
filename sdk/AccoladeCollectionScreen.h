/**
 * decamp dumper generated SDK
 * Package: /Script/AccoladeCollectionScreen
 */
#pragma once
#include "Basic.h"

// /Script/AccoladeCollectionScreen.FortCollectionDataEntryAccolade
// Kind: Class; super: FortCollectionDataEntry
class UFortCollectionDataEntryAccolade
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bHideInCollectionsScreen; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCollectOnServerJoin; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCollectionDataEntryAccolade, bHideInCollectionsScreen) == 40, "Offset mismatch for UFortCollectionDataEntryAccolade::bHideInCollectionsScreen");
static_assert(offsetof(UFortCollectionDataEntryAccolade, bAutoCollectOnServerJoin) == 41, "Offset mismatch for UFortCollectionDataEntryAccolade::bAutoCollectOnServerJoin");

// /Script/AccoladeCollectionScreen.PinnedAccoladeWidget
// Kind: Class; super: FortHUDElementWidget
class UPinnedAccoladeWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* LazyImage_PinColor; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumAllowedDescCharacters; // 0x0378 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPinnedAccoladeWidget, LazyImage_PinColor) == 880, "Offset mismatch for UPinnedAccoladeWidget::LazyImage_PinColor");
static_assert(offsetof(UPinnedAccoladeWidget, NumAllowedDescCharacters) == 888, "Offset mismatch for UPinnedAccoladeWidget::NumAllowedDescCharacters");

// /Script/AccoladeCollectionScreen.QuestAccoladeDataSource
// Kind: Class; super: QuestCollectionDataSource
class UQuestAccoladeDataSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AccoladeCollectionScreen.QuestAccoladeInjector
// Kind: Class; super: QuestCollectionInjectorBase
class UQuestAccoladeInjector
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::int32_t CategorySortOrder; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0114
    void* ProductData; // 0x0118 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestAccoladeInjector, CategorySortOrder) == 272, "Offset mismatch for UQuestAccoladeInjector::CategorySortOrder");
static_assert(offsetof(UQuestAccoladeInjector, ProductData) == 280, "Offset mismatch for UQuestAccoladeInjector::ProductData");

// /Script/AccoladeCollectionScreen.QuestUIAccoladeEntryVM
// Kind: Class; super: QuestUICustomEntryVM
class UQuestUIAccoladeEntryVM
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    std::int32_t CompletedCount; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Tier; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x013D
    std::int32_t ProgressAchieved; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::int32_t ProgressTotal; // 0x0144 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UQuestUIAccoladeEntryVM, CompletedCount) == 312, "Offset mismatch for UQuestUIAccoladeEntryVM::CompletedCount");
static_assert(offsetof(UQuestUIAccoladeEntryVM, Tier) == 316, "Offset mismatch for UQuestUIAccoladeEntryVM::Tier");
static_assert(offsetof(UQuestUIAccoladeEntryVM, ProgressAchieved) == 320, "Offset mismatch for UQuestUIAccoladeEntryVM::ProgressAchieved");
static_assert(offsetof(UQuestUIAccoladeEntryVM, ProgressTotal) == 324, "Offset mismatch for UQuestUIAccoladeEntryVM::ProgressTotal");
