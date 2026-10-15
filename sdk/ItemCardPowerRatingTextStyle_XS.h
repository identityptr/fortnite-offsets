/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_XS
 */
#pragma once
#include "Basic.h"

// /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_XS.ItemCardPowerRatingTextStyle_XS_C
// Kind: BlueprintGeneratedClass; super: CommonTextStyle
class UItemCardPowerRatingTextStyle_XS_C
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Font[0x58]; // 0x0028 (Size: 0x58, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUsesDropShadow; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t ShadowOffset[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColor[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Margin[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t StrikeBrush[0xB0]; // 0x00D0 (Size: 0xB0, Type: StructProperty)
    float LineHeightPercentage; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ApplyLineHeightToBottomLine; // 0x0184 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, Font) == 40, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::Font");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, Color) == 128, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::Color");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, bUsesDropShadow) == 144, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::bUsesDropShadow");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, ShadowOffset) == 152, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::ShadowOffset");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, ShadowColor) == 168, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::ShadowColor");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, Margin) == 184, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::Margin");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, StrikeBrush) == 208, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::StrikeBrush");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, LineHeightPercentage) == 384, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::LineHeightPercentage");
static_assert(offsetof(UItemCardPowerRatingTextStyle_XS_C, ApplyLineHeightToBottomLine) == 388, "Offset mismatch for UItemCardPowerRatingTextStyle_XS_C::ApplyLineHeightToBottomLine");
