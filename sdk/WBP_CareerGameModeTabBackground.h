/**
 * decamp dumper generated SDK
 * Package: /CareerV3/CareerScreen/GameModeTabs/WBP_CareerGameModeTabBackground
 */
#pragma once
#include "Basic.h"

// /CareerV3/CareerScreen/GameModeTabs/WBP_CareerGameModeTabBackground.WBP_CareerGameModeTabBackground_C
// Kind: WidgetBlueprintGeneratedClass; super: none
class UWBP_CareerGameModeTabBackground_C
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* FocusOutline; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* Backing; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OutlineHover; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OutlineUnhover; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0398
    std::uint8_t RadiusInPixels; // 0x03A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x03A1
    double CornerRadius; // 0x03A8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, UberGraphFrame) == 880, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::UberGraphFrame");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, FocusOutline) == 888, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::FocusOutline");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, Backing) == 896, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::Backing");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, Anim_OutlineHover) == 904, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::Anim_OutlineHover");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, Anim_OutlineUnhover) == 912, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::Anim_OutlineUnhover");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, RadiusInPixels) == 928, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::RadiusInPixels");
static_assert(offsetof(UWBP_CareerGameModeTabBackground_C, CornerRadius) == 936, "Offset mismatch for UWBP_CareerGameModeTabBackground_C::CornerRadius");
