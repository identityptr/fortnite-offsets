/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/ActivityBrowserTileDetailsDisplay
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/ActivityBrowserTileDetailsDisplay.ActivityBrowserTileDetailsDisplay_C
// Kind: WidgetBlueprintGeneratedClass; super: FortActivityTileDetailsDisplay
class UActivityBrowserTileDetailsDisplay_C
{
public:
    std::uint8_t Pad_0000[0x1840]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x1840 (Size: 0x8, Type: StructProperty)
    void* WBP_LockedStatus; // 0x1848 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Discovery_WarningIcon; // 0x1850 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x1858
    void* TileThumbnail; // 0x1860 (Size: 0x8, Type: ObjectProperty)
    void* TileStroke; // 0x1868 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1870
    void* Spacer_Mobile; // 0x1878 (Size: 0x8, Type: ObjectProperty)
    void* SizeBox_Primary; // 0x1880 (Size: 0x8, Type: ObjectProperty)
    void* OvrDisabledWarningMessage; // 0x1888 (Size: 0x8, Type: ObjectProperty)
    void* Ovr_Primary; // 0x1890 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_PurchaseRequired; // 0x1898 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_InteractButtons; // 0x18A0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Favorite; // 0x18A8 (Size: 0x8, Type: ObjectProperty)
    void* OriginalContentEpicBanner; // 0x18B0 (Size: 0x8, Type: ObjectProperty)
    void* Logo_NotReady_Fort554488; // 0x18B8 (Size: 0x8, Type: ObjectProperty)
    void* Image_MultiMode; // 0x18C0 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_PlayerCount; // 0x18C8 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_LocksAndHearts; // 0x18D0 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_ActivityInfo; // 0x18D8 (Size: 0x8, Type: ObjectProperty)
    void* EpicBannerBg; // 0x18E0 (Size: 0x8, Type: ObjectProperty)
    void* DisabledWarningMessage; // 0x18E8 (Size: 0x8, Type: ObjectProperty)
    void* BannerText; // 0x18F0 (Size: 0x8, Type: ObjectProperty)
    void* ActivityBrowserSocialProof; // 0x18F8 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OnHoverSelect; // 0x1900 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OnHoverSelect_GrowNonHeroRowTiles; // 0x1908 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OnIntro; // 0x1910 (Size: 0x8, Type: ObjectProperty)
    void* Anim_HoverPulse; // 0x1918 (Size: 0x8, Type: ObjectProperty)
    void* Anim_OnImageLoaded; // 0x1920 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x1928
    void* Anim_OnDisabledClick; // 0x1930 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsKeyArtValid; // 0x1938 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x1939
    void* DefaultImage; // 0x1940 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsTileActive; // 0x1948 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x1949
    std::uint8_t DisabledClickTimer[0x8]; // 0x1950 (Size: 0x8, Type: StructProperty)
    double DisabledClickDuration; // 0x1958 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsActivityValid; // 0x1960 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x1961
    std::uint8_t TileSize[0x10]; // 0x1968 (Size: 0x10, Type: StructProperty)
    std::uint8_t TextureParam[0x4]; // 0x1978 (Size: 0x4, Type: NameProperty)
    std::uint8_t ThumbnailAlpha[0x4]; // 0x197C (Size: 0x4, Type: NameProperty)
    FName ThumbnailScale; // 0x1980 (Size: 0x8, Type: NameProperty)
    std::uint8_t FrameColor[0x4]; // 0x1988 (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseColor[0x10]; // 0x198C (Size: 0x10, Type: StructProperty)
    std::uint8_t EpicColor[0x20]; // 0x199C (Size: 0x20, Type: StructProperty)
    std::uint8_t DisabledColor[0x14]; // 0x19BC (Size: 0x14, Type: StructProperty)
    double BannerColorAnimator; // 0x19D0 (Size: 0x8, Type: DoubleProperty)
    double VerticalTilePaddingOffset; // 0x19D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HideDetails; // 0x19E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPurchaseRequired; // 0x19E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowThumbnailHoverRehoverAnim; // 0x19E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x5]; // 0x19E3
    double GridSingleColumnWidth; // 0x19E8 (Size: 0x8, Type: DoubleProperty)
    double GridSingleGutterWidth; // 0x19F0 (Size: 0x8, Type: DoubleProperty)
    double Ratio16x9ConvertWidthToHeight; // 0x19F8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IsPromotedHeroRow; // 0x1A00 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x1A01
    std::int32_t DefaultGameModeTextSize; // 0x1A04 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, UberGraphFrame) == 6208, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::UberGraphFrame");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, WBP_LockedStatus) == 6216, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::WBP_LockedStatus");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, WBP_Discovery_WarningIcon) == 6224, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::WBP_Discovery_WarningIcon");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, TileThumbnail) == 6240, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::TileThumbnail");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, TileStroke) == 6248, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::TileStroke");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Spacer_Mobile) == 6264, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Spacer_Mobile");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, SizeBox_Primary) == 6272, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::SizeBox_Primary");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, OvrDisabledWarningMessage) == 6280, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::OvrDisabledWarningMessage");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Ovr_Primary) == 6288, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Ovr_Primary");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Overlay_PurchaseRequired) == 6296, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Overlay_PurchaseRequired");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Overlay_InteractButtons) == 6304, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Overlay_InteractButtons");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Overlay_Favorite) == 6312, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Overlay_Favorite");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, OriginalContentEpicBanner) == 6320, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::OriginalContentEpicBanner");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Logo_NotReady_Fort554488) == 6328, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Logo_NotReady_Fort554488");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Image_MultiMode) == 6336, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Image_MultiMode");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, HorizontalBox_PlayerCount) == 6344, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::HorizontalBox_PlayerCount");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, HorizontalBox_LocksAndHearts) == 6352, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::HorizontalBox_LocksAndHearts");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, HorizontalBox_ActivityInfo) == 6360, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::HorizontalBox_ActivityInfo");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, EpicBannerBg) == 6368, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::EpicBannerBg");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DisabledWarningMessage) == 6376, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DisabledWarningMessage");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, BannerText) == 6384, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::BannerText");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, ActivityBrowserSocialProof) == 6392, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::ActivityBrowserSocialProof");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_OnHoverSelect) == 6400, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_OnHoverSelect");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_OnHoverSelect_GrowNonHeroRowTiles) == 6408, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_OnHoverSelect_GrowNonHeroRowTiles");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_OnIntro) == 6416, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_OnIntro");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_HoverPulse) == 6424, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_HoverPulse");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_OnImageLoaded) == 6432, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_OnImageLoaded");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Anim_OnDisabledClick) == 6448, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Anim_OnDisabledClick");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, IsKeyArtValid) == 6456, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::IsKeyArtValid");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DefaultImage) == 6464, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DefaultImage");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, IsTileActive) == 6472, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::IsTileActive");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DisabledClickTimer) == 6480, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DisabledClickTimer");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DisabledClickDuration) == 6488, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DisabledClickDuration");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, IsActivityValid) == 6496, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::IsActivityValid");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, TileSize) == 6504, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::TileSize");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, TextureParam) == 6520, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::TextureParam");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, ThumbnailAlpha) == 6524, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::ThumbnailAlpha");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, ThumbnailScale) == 6528, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::ThumbnailScale");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, FrameColor) == 6536, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::FrameColor");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, BaseColor) == 6540, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::BaseColor");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, EpicColor) == 6556, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::EpicColor");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DisabledColor) == 6588, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DisabledColor");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, BannerColorAnimator) == 6608, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::BannerColorAnimator");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, VerticalTilePaddingOffset) == 6616, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::VerticalTilePaddingOffset");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, HideDetails) == 6624, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::HideDetails");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, IsPurchaseRequired) == 6625, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::IsPurchaseRequired");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, bAllowThumbnailHoverRehoverAnim) == 6626, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::bAllowThumbnailHoverRehoverAnim");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, GridSingleColumnWidth) == 6632, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::GridSingleColumnWidth");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, GridSingleGutterWidth) == 6640, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::GridSingleGutterWidth");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, Ratio16x9ConvertWidthToHeight) == 6648, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::Ratio16x9ConvertWidthToHeight");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, IsPromotedHeroRow) == 6656, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::IsPromotedHeroRow");
static_assert(offsetof(UActivityBrowserTileDetailsDisplay_C, DefaultGameModeTextSize) == 6660, "Offset mismatch for UActivityBrowserTileDetailsDisplay_C::DefaultGameModeTextSize");
