/**
 * decamp dumper generated SDK
 * Package: /Compete/LandingPage/WBP_RankedMode_Button
 */
#pragma once
#include "Basic.h"

// /Compete/LandingPage/WBP_RankedMode_Button.WBP_RankedMode_Button_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_RankedMode_Button_C
{
public:
    std::uint8_t Pad_0000[0x1608]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1608 (Size: 0x8, Type: StructProperty)
    void* WBP_Habanero_Icon; // 0x1610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1618
    void* SizeBox; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x1628
    void* Image_Background; // 0x1638 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x1640
    void* Block_Outline; // 0x1648 (Size: 0x8, Type: ObjectProperty)
    void* FortRankedProgressVM; // 0x1650 (Size: 0x8, Type: ObjectProperty)
    void* FortRankedProgressesVM; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    void* HabaneroDisplayData; // 0x1660 (Size: 0x8, Type: ObjectProperty)
    FString GameMode; // 0x1668 (Size: 0x10, Type: StrProperty)
    FString LinkId; // 0x1678 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UWBP_RankedMode_Button_C, UberGraphFrame) == 5640, "Offset mismatch for UWBP_RankedMode_Button_C::UberGraphFrame");
static_assert(offsetof(UWBP_RankedMode_Button_C, WBP_Habanero_Icon) == 5648, "Offset mismatch for UWBP_RankedMode_Button_C::WBP_Habanero_Icon");
static_assert(offsetof(UWBP_RankedMode_Button_C, SizeBox) == 5664, "Offset mismatch for UWBP_RankedMode_Button_C::SizeBox");
static_assert(offsetof(UWBP_RankedMode_Button_C, Image_Background) == 5688, "Offset mismatch for UWBP_RankedMode_Button_C::Image_Background");
static_assert(offsetof(UWBP_RankedMode_Button_C, Block_Outline) == 5704, "Offset mismatch for UWBP_RankedMode_Button_C::Block_Outline");
static_assert(offsetof(UWBP_RankedMode_Button_C, FortRankedProgressVM) == 5712, "Offset mismatch for UWBP_RankedMode_Button_C::FortRankedProgressVM");
static_assert(offsetof(UWBP_RankedMode_Button_C, FortRankedProgressesVM) == 5720, "Offset mismatch for UWBP_RankedMode_Button_C::FortRankedProgressesVM");
static_assert(offsetof(UWBP_RankedMode_Button_C, HabaneroDisplayData) == 5728, "Offset mismatch for UWBP_RankedMode_Button_C::HabaneroDisplayData");
static_assert(offsetof(UWBP_RankedMode_Button_C, GameMode) == 5736, "Offset mismatch for UWBP_RankedMode_Button_C::GameMode");
static_assert(offsetof(UWBP_RankedMode_Button_C, LinkId) == 5752, "Offset mismatch for UWBP_RankedMode_Button_C::LinkId");
