/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Rows/Hero/WBP_ThemedDiscover_Row_EmptyHero
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Rows/Hero/WBP_ThemedDiscover_Row_EmptyHero.WBP_ThemedDiscover_Row_EmptyHero_C
// Kind: WidgetBlueprintGeneratedClass; super: CommonUserWidget
class UWBP_ThemedDiscover_Row_EmptyHero_C
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0330 (Size: 0x8, Type: StructProperty)
    void* WBP_Discovery_NoResultsMessage; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* TileView_BlankTiles; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Slot_BelowCustomContent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* Slot_AboveCustomContent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_OptionallyCapRowHeight; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0360
    void* FortDisplaySystemVM; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FlavorTitleOverride[0x10]; // 0x0370 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorSubtitleOverride[0x10]; // 0x0380 (Size: 0x10, Type: TextProperty)
    std::uint8_t EntryShape; // 0x0390 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0391
    double BottomPaddingAmount; // 0x0398 (Size: 0x8, Type: DoubleProperty)
    double BottomPaddingAmount_Mobile; // 0x03A0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, UberGraphFrame) == 816, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::UberGraphFrame");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, WBP_Discovery_NoResultsMessage) == 824, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::WBP_Discovery_NoResultsMessage");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, TileView_BlankTiles) == 832, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::TileView_BlankTiles");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, Slot_BelowCustomContent) == 840, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::Slot_BelowCustomContent");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, Slot_AboveCustomContent) == 848, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::Slot_AboveCustomContent");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, SizeBox_OptionallyCapRowHeight) == 856, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::SizeBox_OptionallyCapRowHeight");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, FortDisplaySystemVM) == 872, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::FortDisplaySystemVM");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, FlavorTitleOverride) == 880, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::FlavorTitleOverride");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, FlavorSubtitleOverride) == 896, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::FlavorSubtitleOverride");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, EntryShape) == 912, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::EntryShape");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, BottomPaddingAmount) == 920, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::BottomPaddingAmount");
static_assert(offsetof(UWBP_ThemedDiscover_Row_EmptyHero_C, BottomPaddingAmount_Mobile) == 928, "Offset mismatch for UWBP_ThemedDiscover_Row_EmptyHero_C::BottomPaddingAmount_Mobile");
