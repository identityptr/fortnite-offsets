/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Settings/BP_FortSettingCollectionMarkup_Volume
 */
#pragma once
#include "Basic.h"

// /Game/UI/Settings/BP_FortSettingCollectionMarkup_Volume.BP_FortSettingCollectionMarkup_Volume_C
// Kind: BlueprintGeneratedClass; super: FortSettingCollectionMarkup
class UBP_FortSettingCollectionMarkup_Volume_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ID; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString CollectionID; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::int32_t Priority; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t DisplayName[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t FilterTag[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_FortSettingCollectionMarkup_Volume_C, ID) == 40, "Offset mismatch for UBP_FortSettingCollectionMarkup_Volume_C::ID");
static_assert(offsetof(UBP_FortSettingCollectionMarkup_Volume_C, CollectionID) == 56, "Offset mismatch for UBP_FortSettingCollectionMarkup_Volume_C::CollectionID");
static_assert(offsetof(UBP_FortSettingCollectionMarkup_Volume_C, Priority) == 72, "Offset mismatch for UBP_FortSettingCollectionMarkup_Volume_C::Priority");
static_assert(offsetof(UBP_FortSettingCollectionMarkup_Volume_C, DisplayName) == 80, "Offset mismatch for UBP_FortSettingCollectionMarkup_Volume_C::DisplayName");
static_assert(offsetof(UBP_FortSettingCollectionMarkup_Volume_C, FilterTag) == 96, "Offset mismatch for UBP_FortSettingCollectionMarkup_Volume_C::FilterTag");
