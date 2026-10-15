/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/WBP_Discovery_BlankTiles_RoundedCorners.WBP_Discovery_BlankTiles_RoundedCorners_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_Discovery_BlankTiles_RoundedCorners_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* WBP_Discovery_NoResultsMessage; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* TileView_BlankTiles; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Slot_BelowCustomContent; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Slot_AboveCustomContent; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_OptionallyCapRowHeight; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0338
    std::uint8_t EntrySize[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t FlavorTitleOverride[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorSubtitleOverride[0x10]; // 0x0360 (Size: 0x10, Type: TextProperty)
    std::uint8_t EntryShape; // 0x0370 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::UberGraphFrame");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, WBP_Discovery_NoResultsMessage) == 784, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::WBP_Discovery_NoResultsMessage");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, TileView_BlankTiles) == 792, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::TileView_BlankTiles");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, Slot_BelowCustomContent) == 800, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::Slot_BelowCustomContent");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, Slot_AboveCustomContent) == 808, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::Slot_AboveCustomContent");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, SizeBox_OptionallyCapRowHeight) == 816, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::SizeBox_OptionallyCapRowHeight");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, EntrySize) == 832, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::EntrySize");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, FlavorTitleOverride) == 848, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::FlavorTitleOverride");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, FlavorSubtitleOverride) == 864, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::FlavorSubtitleOverride");
static_assert(offsetof(UWBP_Discovery_BlankTiles_RoundedCorners_C, EntryShape) == 880, "Offset mismatch for UWBP_Discovery_BlankTiles_RoundedCorners_C::EntryShape");
