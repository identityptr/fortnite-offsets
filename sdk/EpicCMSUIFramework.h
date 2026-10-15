/**
 * decamp dumper generated SDK
 * Package: /Script/EpicCMSUIFramework
 */
#pragma once
#include "Basic.h"

// /Script/EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// Kind: ScriptStruct; super: TableRowBase
struct FEpicCMSLayoutTypeMapping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> LayoutType; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FEpicCMSLayoutTypeMapping, LayoutType) == 8, "Offset mismatch for FEpicCMSLayoutTypeMapping::LayoutType");

// /Script/EpicCMSUIFramework.EpicCMSPage
// Kind: ScriptStruct; super: none
struct FEpicCMSPage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EpicCMSUIFramework.EpicCMSTileTypeMapping
// Kind: ScriptStruct; super: TableRowBase
struct FEpicCMSTileTypeMapping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> TileClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FEpicCMSTileTypeMapping, TileClass) == 8, "Offset mismatch for FEpicCMSTileTypeMapping::TileClass");

// /Script/EpicCMSUIFramework.SlotDescription
// Kind: ScriptStruct; super: none
struct FSlotDescription
{
public:
    std::uint8_t SlotName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t ColumnCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t RowCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseFeaturedTextStyle; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutoScroll; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSlotDescription, SlotName) == 0, "Offset mismatch for FSlotDescription::SlotName");
static_assert(offsetof(FSlotDescription, ColumnCount) == 4, "Offset mismatch for FSlotDescription::ColumnCount");
static_assert(offsetof(FSlotDescription, RowCount) == 8, "Offset mismatch for FSlotDescription::RowCount");
static_assert(offsetof(FSlotDescription, bUseFeaturedTextStyle) == 12, "Offset mismatch for FSlotDescription::bUseFeaturedTextStyle");
static_assert(offsetof(FSlotDescription, bEnableAutoScroll) == 13, "Offset mismatch for FSlotDescription::bEnableAutoScroll");

// /Script/EpicCMSUIFramework.TileDefinition
// Kind: ScriptStruct; super: none
struct FTileDefinition
{
public:
    FString TypeString; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Title; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Subtitle; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString Eyebrow; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Link; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString GroupID; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t Countdown[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t CountdownType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0069
    FString MediaUrl; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsVisible; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTileDefinition, TypeString) == 0, "Offset mismatch for FTileDefinition::TypeString");
static_assert(offsetof(FTileDefinition, Title) == 16, "Offset mismatch for FTileDefinition::Title");
static_assert(offsetof(FTileDefinition, Subtitle) == 32, "Offset mismatch for FTileDefinition::Subtitle");
static_assert(offsetof(FTileDefinition, Eyebrow) == 48, "Offset mismatch for FTileDefinition::Eyebrow");
static_assert(offsetof(FTileDefinition, Link) == 64, "Offset mismatch for FTileDefinition::Link");
static_assert(offsetof(FTileDefinition, GroupID) == 80, "Offset mismatch for FTileDefinition::GroupID");
static_assert(offsetof(FTileDefinition, Countdown) == 96, "Offset mismatch for FTileDefinition::Countdown");
static_assert(offsetof(FTileDefinition, CountdownType) == 104, "Offset mismatch for FTileDefinition::CountdownType");
static_assert(offsetof(FTileDefinition, MediaUrl) == 112, "Offset mismatch for FTileDefinition::MediaUrl");
static_assert(offsetof(FTileDefinition, IsVisible) == 128, "Offset mismatch for FTileDefinition::IsVisible");

// /Script/EpicCMSUIFramework.EpicCMSImage
// Kind: Class; super: CommonLazyImage
class UEpicCMSImage
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    FMulticastInlineDelegate OnImageLoadingComplete; // 0x0430 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExternalMediaChanged; // 0x0440 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bMatchImageSize; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0451
    std::uint8_t LoadingFailFallback[0xB0]; // 0x0460 (Size: 0xB0, Type: StructProperty)
    void* ExternalMedia; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDownloadingExternalMedia; // 0x0518 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEpicCMSImage, OnImageLoadingComplete) == 1072, "Offset mismatch for UEpicCMSImage::OnImageLoadingComplete");
static_assert(offsetof(UEpicCMSImage, OnExternalMediaChanged) == 1088, "Offset mismatch for UEpicCMSImage::OnExternalMediaChanged");
static_assert(offsetof(UEpicCMSImage, bMatchImageSize) == 1104, "Offset mismatch for UEpicCMSImage::bMatchImageSize");
static_assert(offsetof(UEpicCMSImage, LoadingFailFallback) == 1120, "Offset mismatch for UEpicCMSImage::LoadingFailFallback");
static_assert(offsetof(UEpicCMSImage, ExternalMedia) == 1296, "Offset mismatch for UEpicCMSImage::ExternalMedia");
static_assert(offsetof(UEpicCMSImage, bDownloadingExternalMedia) == 1304, "Offset mismatch for UEpicCMSImage::bDownloadingExternalMedia");

// /Script/EpicCMSUIFramework.EpicCMSLayoutBase
// Kind: Class; super: UserWidget
class UEpicCMSLayoutBase
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    TArray<void*> CarouselSlotDescriptions; // 0x0308 (Size: 0x10, Type: ArrayProperty)
    void* CarouselClass; // 0x0318 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEpicCMSLayoutBase, CarouselSlotDescriptions) == 776, "Offset mismatch for UEpicCMSLayoutBase::CarouselSlotDescriptions");
static_assert(offsetof(UEpicCMSLayoutBase, CarouselClass) == 792, "Offset mismatch for UEpicCMSLayoutBase::CarouselClass");

// /Script/EpicCMSUIFramework.EpicCMSManager
// Kind: Class; super: Object
class UEpicCMSManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EpicCMSUIFramework.EpicCMSScreenBase
// Kind: Class; super: CommonActivatablePanelLegacy
class UEpicCMSScreenBase
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    FString TileSetFieldName; // 0x0560 (Size: 0x10, Type: StrProperty)
    std::uint8_t TileTypeToTileClassDataTable[0x20]; // 0x0570 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LayoutErrorClass[0x20]; // 0x0590 (Size: 0x20, Type: SoftClassProperty)
    TSoftObjectPtr<void> LayoutTypeToLayoutClassDataTable; // 0x05B0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UEpicCMSScreenBase, TileSetFieldName) == 1376, "Offset mismatch for UEpicCMSScreenBase::TileSetFieldName");
static_assert(offsetof(UEpicCMSScreenBase, TileTypeToTileClassDataTable) == 1392, "Offset mismatch for UEpicCMSScreenBase::TileTypeToTileClassDataTable");
static_assert(offsetof(UEpicCMSScreenBase, LayoutErrorClass) == 1424, "Offset mismatch for UEpicCMSScreenBase::LayoutErrorClass");
static_assert(offsetof(UEpicCMSScreenBase, LayoutTypeToLayoutClassDataTable) == 1456, "Offset mismatch for UEpicCMSScreenBase::LayoutTypeToLayoutClassDataTable");

// /Script/EpicCMSUIFramework.EpicCMSSimpleMessage
// Kind: Class; super: CommonUserWidget
class UEpicCMSSimpleMessage
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* TitleText; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* BodyText; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryImage; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEpicCMSSimpleMessage, TitleText) == 816, "Offset mismatch for UEpicCMSSimpleMessage::TitleText");
static_assert(offsetof(UEpicCMSSimpleMessage, BodyText) == 824, "Offset mismatch for UEpicCMSSimpleMessage::BodyText");
static_assert(offsetof(UEpicCMSSimpleMessage, PrimaryImage) == 832, "Offset mismatch for UEpicCMSSimpleMessage::PrimaryImage");

// /Script/EpicCMSUIFramework.EpicCMSTileBase
// Kind: Class; super: CommonButtonLegacy
class UEpicCMSTileBase
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* DefaultTitleTextStyle; // 0x15F8 (Size: 0x8, Type: ClassProperty)
    void* FeaturedTitleTextStyle; // 0x1600 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Title[0x10]; // 0x1608 (Size: 0x10, Type: TextProperty)
    FString Link; // 0x1618 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDownloadingExternalMedia; // 0x1628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRefreshingMcpCatalog; // 0x1629 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x162A
    void* ExternalMedia; // 0x1630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x1638
    void* LazyImage_Icon; // 0x1650 (Size: 0x8, Type: ObjectProperty)
    void* TitleTextBlock; // 0x1658 (Size: 0x8, Type: ObjectProperty)
    void* SubtitleTextBlock; // 0x1660 (Size: 0x8, Type: ObjectProperty)
    void* EyebrowTextBlock; // 0x1668 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEpicCMSTileBase, DefaultTitleTextStyle) == 5624, "Offset mismatch for UEpicCMSTileBase::DefaultTitleTextStyle");
static_assert(offsetof(UEpicCMSTileBase, FeaturedTitleTextStyle) == 5632, "Offset mismatch for UEpicCMSTileBase::FeaturedTitleTextStyle");
static_assert(offsetof(UEpicCMSTileBase, Title) == 5640, "Offset mismatch for UEpicCMSTileBase::Title");
static_assert(offsetof(UEpicCMSTileBase, Link) == 5656, "Offset mismatch for UEpicCMSTileBase::Link");
static_assert(offsetof(UEpicCMSTileBase, bDownloadingExternalMedia) == 5672, "Offset mismatch for UEpicCMSTileBase::bDownloadingExternalMedia");
static_assert(offsetof(UEpicCMSTileBase, bRefreshingMcpCatalog) == 5673, "Offset mismatch for UEpicCMSTileBase::bRefreshingMcpCatalog");
static_assert(offsetof(UEpicCMSTileBase, ExternalMedia) == 5680, "Offset mismatch for UEpicCMSTileBase::ExternalMedia");
static_assert(offsetof(UEpicCMSTileBase, LazyImage_Icon) == 5712, "Offset mismatch for UEpicCMSTileBase::LazyImage_Icon");
static_assert(offsetof(UEpicCMSTileBase, TitleTextBlock) == 5720, "Offset mismatch for UEpicCMSTileBase::TitleTextBlock");
static_assert(offsetof(UEpicCMSTileBase, SubtitleTextBlock) == 5728, "Offset mismatch for UEpicCMSTileBase::SubtitleTextBlock");
static_assert(offsetof(UEpicCMSTileBase, EyebrowTextBlock) == 5736, "Offset mismatch for UEpicCMSTileBase::EyebrowTextBlock");

// /Script/EpicCMSUIFramework.EpicCMSTileCarousel
// Kind: Class; super: UserWidget
class UEpicCMSTileCarousel
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t PreviousButtonSound[0x18]; // 0x0308 (Size: 0x18, Type: StructProperty)
    std::uint8_t NextButtonSound[0x18]; // 0x0320 (Size: 0x18, Type: StructProperty)
    void* Carousel; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* NextPageButton; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* PreviousPageButton; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldShowNavigationOnlyOnHover; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInputActionsForPaging; // 0x0351 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsShowingNavigation; // 0x0352 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEpicCMSTileCarousel, PreviousButtonSound) == 776, "Offset mismatch for UEpicCMSTileCarousel::PreviousButtonSound");
static_assert(offsetof(UEpicCMSTileCarousel, NextButtonSound) == 800, "Offset mismatch for UEpicCMSTileCarousel::NextButtonSound");
static_assert(offsetof(UEpicCMSTileCarousel, Carousel) == 824, "Offset mismatch for UEpicCMSTileCarousel::Carousel");
static_assert(offsetof(UEpicCMSTileCarousel, NextPageButton) == 832, "Offset mismatch for UEpicCMSTileCarousel::NextPageButton");
static_assert(offsetof(UEpicCMSTileCarousel, PreviousPageButton) == 840, "Offset mismatch for UEpicCMSTileCarousel::PreviousPageButton");
static_assert(offsetof(UEpicCMSTileCarousel, bShouldShowNavigationOnlyOnHover) == 848, "Offset mismatch for UEpicCMSTileCarousel::bShouldShowNavigationOnlyOnHover");
static_assert(offsetof(UEpicCMSTileCarousel, bInputActionsForPaging) == 849, "Offset mismatch for UEpicCMSTileCarousel::bInputActionsForPaging");
static_assert(offsetof(UEpicCMSTileCarousel, bIsShowingNavigation) == 850, "Offset mismatch for UEpicCMSTileCarousel::bIsShowingNavigation");
