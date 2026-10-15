/**
 * decamp dumper generated SDK
 * Package: /Script/LFNGameTravelUI
 */
#pragma once
#include "Basic.h"

// /Script/LFNGameTravelUI.LFNGameTravelUIData
// Kind: ScriptStruct; super: TableRowBase
struct FLFNGameTravelUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Description[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewImage[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    float PrepTime; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    TArray<void*> GameTravelDestinations; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLFNGameTravelUIData, Description) == 8, "Offset mismatch for FLFNGameTravelUIData::Description");
static_assert(offsetof(FLFNGameTravelUIData, PreviewImage) == 24, "Offset mismatch for FLFNGameTravelUIData::PreviewImage");
static_assert(offsetof(FLFNGameTravelUIData, SmallPreviewImage) == 56, "Offset mismatch for FLFNGameTravelUIData::SmallPreviewImage");
static_assert(offsetof(FLFNGameTravelUIData, PrepTime) == 88, "Offset mismatch for FLFNGameTravelUIData::PrepTime");
static_assert(offsetof(FLFNGameTravelUIData, GameTravelDestinations) == 96, "Offset mismatch for FLFNGameTravelUIData::GameTravelDestinations");

// /Script/LFNGameTravelUI.LFNGameTravelEntryViewModel
// Kind: Class; super: FortPerUserViewModel
class ULFNGameTravelEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t GameTravelPlaylistRegistryType[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameTravelUIDataRegistryType[0x2C]; // 0x0084 (Size: 0x2C, Type: StructProperty)
    void* ActivityViewModel; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CanInitiateGameTravel; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GameTravelLockedReason; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00BA
    std::uint8_t SmallPreviewImage[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> PreviewImage; // 0x00E0 (Size: 0x28, Type: SoftObjectProperty)
    void* PlaylistPtr; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULFNGameTravelEntryViewModel, GameTravelPlaylistRegistryType) == 128, "Offset mismatch for ULFNGameTravelEntryViewModel::GameTravelPlaylistRegistryType");
static_assert(offsetof(ULFNGameTravelEntryViewModel, GameTravelUIDataRegistryType) == 132, "Offset mismatch for ULFNGameTravelEntryViewModel::GameTravelUIDataRegistryType");
static_assert(offsetof(ULFNGameTravelEntryViewModel, ActivityViewModel) == 176, "Offset mismatch for ULFNGameTravelEntryViewModel::ActivityViewModel");
static_assert(offsetof(ULFNGameTravelEntryViewModel, CanInitiateGameTravel) == 184, "Offset mismatch for ULFNGameTravelEntryViewModel::CanInitiateGameTravel");
static_assert(offsetof(ULFNGameTravelEntryViewModel, GameTravelLockedReason) == 185, "Offset mismatch for ULFNGameTravelEntryViewModel::GameTravelLockedReason");
static_assert(offsetof(ULFNGameTravelEntryViewModel, SmallPreviewImage) == 192, "Offset mismatch for ULFNGameTravelEntryViewModel::SmallPreviewImage");
static_assert(offsetof(ULFNGameTravelEntryViewModel, PreviewImage) == 224, "Offset mismatch for ULFNGameTravelEntryViewModel::PreviewImage");
static_assert(offsetof(ULFNGameTravelEntryViewModel, PlaylistPtr) == 264, "Offset mismatch for ULFNGameTravelEntryViewModel::PlaylistPtr");

// /Script/LFNGameTravelUI.LFNGameTravelViewModel
// Kind: Class; super: FortPerUserViewModel
class ULFNGameTravelViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t GameTravelUIDataRegistryType[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    float GameTravelPrepTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    TArray<void*> GameTravelEntries; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* CurrentGameTravelDestinationViewModel; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* GameTravelEntryViewModelClass; // 0x00A0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(ULFNGameTravelViewModel, GameTravelUIDataRegistryType) == 120, "Offset mismatch for ULFNGameTravelViewModel::GameTravelUIDataRegistryType");
static_assert(offsetof(ULFNGameTravelViewModel, GameTravelPrepTime) == 128, "Offset mismatch for ULFNGameTravelViewModel::GameTravelPrepTime");
static_assert(offsetof(ULFNGameTravelViewModel, GameTravelEntries) == 136, "Offset mismatch for ULFNGameTravelViewModel::GameTravelEntries");
static_assert(offsetof(ULFNGameTravelViewModel, CurrentGameTravelDestinationViewModel) == 152, "Offset mismatch for ULFNGameTravelViewModel::CurrentGameTravelDestinationViewModel");
static_assert(offsetof(ULFNGameTravelViewModel, GameTravelEntryViewModelClass) == 160, "Offset mismatch for ULFNGameTravelViewModel::GameTravelEntryViewModelClass");
