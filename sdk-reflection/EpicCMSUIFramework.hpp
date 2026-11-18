#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicCMSUIFramework
{
    struct EpicCMSImage
    {
        static constexpr std::string_view Name = "EpicCMSImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonLazyImage";
        struct Offsets
        {
            static constexpr std::uintptr_t OnImageLoadingComplete = 0x430;
            static constexpr std::uintptr_t OnExternalMediaChanged = 0x440;
            static constexpr std::uintptr_t bMatchImageSize = 0x450;
            static constexpr std::uintptr_t LoadingFailFallback = 0x460;
            static constexpr std::uintptr_t ExternalMedia = 0x510;
            static constexpr std::uintptr_t bDownloadingExternalMedia = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnImageLoadingComplete", 0x430, "MulticastInlineDelegateProperty"},
            {"OnExternalMediaChanged", 0x440, "MulticastInlineDelegateProperty"},
            {"bMatchImageSize", 0x450, "BoolProperty"},
            {"LoadingFailFallback", 0x460, "StructProperty"},
            {"ExternalMedia", 0x510, "ObjectProperty"},
            {"bDownloadingExternalMedia", 0x518, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetMediaURL",
        }};
    };

    struct EpicCMSLayoutBase
    {
        static constexpr std::string_view Name = "EpicCMSLayoutBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CarouselSlotDescriptions = 0x308;
            static constexpr std::uintptr_t CarouselClass = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CarouselSlotDescriptions", 0x308, "ArrayProperty"},
            {"CarouselClass", 0x318, "ClassProperty"},
        }};
    };

    struct EpicCMSLayoutTypeMapping
    {
        static constexpr std::string_view Name = "EpicCMSLayoutTypeMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutType = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LayoutType", 0x8, "SoftClassProperty"},
        }};
    };

    struct EpicCMSManager
    {
        static constexpr std::string_view Name = "EpicCMSManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EpicCMSPage
    {
        static constexpr std::string_view Name = "EpicCMSPage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EpicCMSScreenBase
    {
        static constexpr std::string_view Name = "EpicCMSScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSetFieldName = 0x560;
            static constexpr std::uintptr_t TileTypeToTileClassDataTable = 0x570;
            static constexpr std::uintptr_t LayoutErrorClass = 0x590;
            static constexpr std::uintptr_t LayoutTypeToLayoutClassDataTable = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TileSetFieldName", 0x560, "StrProperty"},
            {"TileTypeToTileClassDataTable", 0x570, "SoftObjectProperty"},
            {"LayoutErrorClass", 0x590, "SoftClassProperty"},
            {"LayoutTypeToLayoutClassDataTable", 0x5B0, "SoftObjectProperty"},
        }};
    };

    struct EpicCMSSimpleMessage
    {
        static constexpr std::string_view Name = "EpicCMSSimpleMessage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TitleText = 0x330;
            static constexpr std::uintptr_t BodyText = 0x338;
            static constexpr std::uintptr_t PrimaryImage = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TitleText", 0x330, "ObjectProperty"},
            {"BodyText", 0x338, "ObjectProperty"},
            {"PrimaryImage", 0x340, "ObjectProperty"},
        }};
    };

    struct EpicCMSTileBase
    {
        static constexpr std::string_view Name = "EpicCMSTileBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTitleTextStyle = 0x1628;
            static constexpr std::uintptr_t FeaturedTitleTextStyle = 0x1630;
            static constexpr std::uintptr_t Title = 0x1638;
            static constexpr std::uintptr_t Link = 0x1648;
            static constexpr std::uintptr_t bDownloadingExternalMedia = 0x1658;
            static constexpr std::uintptr_t bRefreshingMcpCatalog = 0x1659;
            static constexpr std::uintptr_t ExternalMedia = 0x1660;
            static constexpr std::uintptr_t LazyImage_Icon = 0x1680;
            static constexpr std::uintptr_t TitleTextBlock = 0x1688;
            static constexpr std::uintptr_t SubtitleTextBlock = 0x1690;
            static constexpr std::uintptr_t EyebrowTextBlock = 0x1698;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"DefaultTitleTextStyle", 0x1628, "ClassProperty"},
            {"FeaturedTitleTextStyle", 0x1630, "ClassProperty"},
            {"Title", 0x1638, "TextProperty"},
            {"Link", 0x1648, "StrProperty"},
            {"bDownloadingExternalMedia", 0x1658, "BoolProperty"},
            {"bRefreshingMcpCatalog", 0x1659, "BoolProperty"},
            {"ExternalMedia", 0x1660, "ObjectProperty"},
            {"LazyImage_Icon", 0x1680, "ObjectProperty"},
            {"TitleTextBlock", 0x1688, "ObjectProperty"},
            {"SubtitleTextBlock", 0x1690, "ObjectProperty"},
            {"EyebrowTextBlock", 0x1698, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Launch",
        }};
    };

    struct EpicCMSTileCarousel
    {
        static constexpr std::string_view Name = "EpicCMSTileCarousel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousButtonSound = 0x308;
            static constexpr std::uintptr_t NextButtonSound = 0x320;
            static constexpr std::uintptr_t Carousel = 0x338;
            static constexpr std::uintptr_t NextPageButton = 0x340;
            static constexpr std::uintptr_t PreviousPageButton = 0x348;
            static constexpr std::uintptr_t bShouldShowNavigationOnlyOnHover = 0x350;
            static constexpr std::uintptr_t bInputActionsForPaging = 0x351;
            static constexpr std::uintptr_t bIsShowingNavigation = 0x352;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviousButtonSound", 0x308, "StructProperty"},
            {"NextButtonSound", 0x320, "StructProperty"},
            {"Carousel", 0x338, "ObjectProperty"},
            {"NextPageButton", 0x340, "ObjectProperty"},
            {"PreviousPageButton", 0x348, "ObjectProperty"},
            {"bShouldShowNavigationOnlyOnHover", 0x350, "BoolProperty"},
            {"bInputActionsForPaging", 0x351, "BoolProperty"},
            {"bIsShowingNavigation", 0x352, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddTilePage",
            "BeginAutoScrolling",
            "GetCurrentPageIndex",
            "HandleTilePageAdded",
            "NavigationVisibilityChanged",
            "NextPage",
            "PreviousPage",
            "SetCurrentPageByIndex",
        }};
    };

    struct EpicCMSTileTypeMapping
    {
        static constexpr std::string_view Name = "EpicCMSTileTypeMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TileClass = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TileClass", 0x8, "SoftClassProperty"},
        }};
    };

    struct SlotDescription
    {
        static constexpr std::string_view Name = "SlotDescription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotName = 0x0;
            static constexpr std::uintptr_t ColumnCount = 0x4;
            static constexpr std::uintptr_t RowCount = 0x8;
            static constexpr std::uintptr_t bUseFeaturedTextStyle = 0xC;
            static constexpr std::uintptr_t bEnableAutoScroll = 0xD;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SlotName", 0x0, "NameProperty"},
            {"ColumnCount", 0x4, "IntProperty"},
            {"RowCount", 0x8, "IntProperty"},
            {"bUseFeaturedTextStyle", 0xC, "BoolProperty"},
            {"bEnableAutoScroll", 0xD, "BoolProperty"},
        }};
    };

    struct TileDefinition
    {
        static constexpr std::string_view Name = "TileDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeString = 0x0;
            static constexpr std::uintptr_t Title = 0x10;
            static constexpr std::uintptr_t Subtitle = 0x20;
            static constexpr std::uintptr_t Eyebrow = 0x30;
            static constexpr std::uintptr_t Link = 0x40;
            static constexpr std::uintptr_t GroupID = 0x50;
            static constexpr std::uintptr_t Countdown = 0x60;
            static constexpr std::uintptr_t CountdownType = 0x68;
            static constexpr std::uintptr_t MediaUrl = 0x70;
            static constexpr std::uintptr_t IsVisible = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TypeString", 0x0, "StrProperty"},
            {"Title", 0x10, "StrProperty"},
            {"Subtitle", 0x20, "StrProperty"},
            {"Eyebrow", 0x30, "StrProperty"},
            {"Link", 0x40, "StrProperty"},
            {"GroupID", 0x50, "StrProperty"},
            {"Countdown", 0x60, "StructProperty"},
            {"CountdownType", 0x68, "EnumProperty"},
            {"MediaUrl", 0x70, "StrProperty"},
            {"IsVisible", 0x80, "BoolProperty"},
        }};
    };

}
