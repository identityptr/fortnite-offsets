/**
 * decamp dumper generated SDK
 * Package: /Script/WidgetCarousel
 */
#pragma once
#include "Basic.h"

// /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FWidgetCarouselNavigationBarStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t HighlightBrush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LeftButtonStyle[0x390]; // 0x00C0 (Size: 0x390, Type: StructProperty)
    std::uint8_t CenterButtonStyle[0x390]; // 0x0450 (Size: 0x390, Type: StructProperty)
    std::uint8_t RightButtonStyle[0x1]; // 0x07E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWidgetCarouselNavigationBarStyle, HighlightBrush) == 16, "Offset mismatch for FWidgetCarouselNavigationBarStyle::HighlightBrush");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, LeftButtonStyle) == 192, "Offset mismatch for FWidgetCarouselNavigationBarStyle::LeftButtonStyle");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, CenterButtonStyle) == 1104, "Offset mismatch for FWidgetCarouselNavigationBarStyle::CenterButtonStyle");
static_assert(offsetof(FWidgetCarouselNavigationBarStyle, RightButtonStyle) == 2016, "Offset mismatch for FWidgetCarouselNavigationBarStyle::RightButtonStyle");

// /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Kind: ScriptStruct; super: SlateWidgetStyle
struct FWidgetCarouselNavigationButtonStyle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InnerButtonStyle[0x390]; // 0x0010 (Size: 0x390, Type: StructProperty)
    std::uint8_t NavigationButtonLeftImage[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NavigationButtonRightImage[0x1]; // 0x0450 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle) == 16, "Offset mismatch for FWidgetCarouselNavigationButtonStyle::InnerButtonStyle");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage) == 928, "Offset mismatch for FWidgetCarouselNavigationButtonStyle::NavigationButtonLeftImage");
static_assert(offsetof(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage) == 1104, "Offset mismatch for FWidgetCarouselNavigationButtonStyle::NavigationButtonRightImage");
