#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoBattleBusUI
{
    struct JunoBattleBusCustomizationInitData
    {
        static constexpr std::string_view Name = "JunoBattleBusCustomizationInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoDiscoveredBusStop = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoDiscoveredBusStop", 0x28, "StructProperty"},
        }};
    };

    struct JunoBattleBusCustomizationScreen
    {
        static constexpr std::string_view Name = "JunoBattleBusCustomizationScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChangeCommitted = 0x4A8;
            static constexpr std::uintptr_t Button_Confirm = 0x4B8;
            static constexpr std::uintptr_t Button_Close = 0x4C0;
            static constexpr std::uintptr_t Button_Close_Touch = 0x4C8;
            static constexpr std::uintptr_t InitData = 0x4D0;
            static constexpr std::uintptr_t NameScreenTabName = 0x4D8;
            static constexpr std::uintptr_t IconScreenTabName = 0x4DC;
            static constexpr std::uintptr_t NameTab = 0x4E0;
            static constexpr std::uintptr_t Text_Title = 0x4E8;
            static constexpr std::uintptr_t UserGeneratedText_ParentalControls = 0x4F0;
            static constexpr std::uintptr_t DataTableRowHandle = 0x4F8;
            static constexpr std::uintptr_t bHasConstructed = 0x508;
            static constexpr std::uintptr_t bAllowUserInput = 0x509;
            static constexpr std::uintptr_t bIsInCabinMode = 0x50A;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnChangeCommitted", 0x4A8, "MulticastInlineDelegateProperty"},
            {"Button_Confirm", 0x4B8, "ObjectProperty"},
            {"Button_Close", 0x4C0, "ObjectProperty"},
            {"Button_Close_Touch", 0x4C8, "ObjectProperty"},
            {"InitData", 0x4D0, "ObjectProperty"},
            {"NameScreenTabName", 0x4D8, "NameProperty"},
            {"IconScreenTabName", 0x4DC, "NameProperty"},
            {"NameTab", 0x4E0, "ObjectProperty"},
            {"Text_Title", 0x4E8, "ObjectProperty"},
            {"UserGeneratedText_ParentalControls", 0x4F0, "ObjectProperty"},
            {"DataTableRowHandle", 0x4F8, "StructProperty"},
            {"bHasConstructed", 0x508, "BoolProperty"},
            {"bAllowUserInput", 0x509, "BoolProperty"},
            {"bIsInCabinMode", 0x50A, "BoolProperty"},
        }};
    };

    struct JunoBattleBusCustomizationWidget
    {
        static constexpr std::string_view Name = "JunoBattleBusCustomizationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomizeButton = 0x4B8;
            static constexpr std::uintptr_t InitData = 0x4C0;
            static constexpr std::uintptr_t UGCViewModel = 0x4C8;
            static constexpr std::uintptr_t DefaultName = 0x4D0;
            static constexpr std::uintptr_t DefaultHintText = 0x4E0;
            static constexpr std::uintptr_t bAllowUserInput = 0x4F0;
            static constexpr std::uintptr_t bHasConstructed = 0x4F1;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RandomizeButton", 0x4B8, "ObjectProperty"},
            {"InitData", 0x4C0, "ObjectProperty"},
            {"UGCViewModel", 0x4C8, "ObjectProperty"},
            {"DefaultName", 0x4D0, "TextProperty"},
            {"DefaultHintText", 0x4E0, "TextProperty"},
            {"bAllowUserInput", 0x4F0, "BoolProperty"},
            {"bHasConstructed", 0x4F1, "BoolProperty"},
        }};
    };

    struct JunoBattleBusDestinationEntry
    {
        static constexpr std::string_view Name = "JunoBattleBusDestinationEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedChanged = 0x15D0;
            static constexpr std::uintptr_t OnButtonClicked = 0x15E0;
            static constexpr std::uintptr_t OnButtonDoubleClicked = 0x15F0;
            static constexpr std::uintptr_t OnButtonHovered = 0x1600;
            static constexpr std::uintptr_t OnButtonUnhovered = 0x1610;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSelectedChanged", 0x15D0, "MulticastInlineDelegateProperty"},
            {"OnButtonClicked", 0x15E0, "MulticastInlineDelegateProperty"},
            {"OnButtonDoubleClicked", 0x15F0, "MulticastInlineDelegateProperty"},
            {"OnButtonHovered", 0x1600, "MulticastInlineDelegateProperty"},
            {"OnButtonUnhovered", 0x1610, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoBattleBusDestinationHeaderObject
    {
        static constexpr std::string_view Name = "JunoBattleBusDestinationHeaderObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
        }};
    };

    struct JunoBattleBusDestinationList
    {
        static constexpr std::string_view Name = "JunoBattleBusDestinationList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ListView_Destinations = 0x318;
            static constexpr std::uintptr_t StopTypeSortOrder = 0x320;
            static constexpr std::uintptr_t StopTypeHeaderNames = 0x330;
            static constexpr std::uintptr_t ListItems_All = 0x360;
            static constexpr std::uintptr_t ListItems_Destinations = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ListView_Destinations", 0x318, "ObjectProperty"},
            {"StopTypeSortOrder", 0x320, "ArrayProperty"},
            {"StopTypeHeaderNames", 0x330, "MapProperty"},
            {"ListItems_All", 0x360, "ArrayProperty"},
            {"ListItems_Destinations", 0x370, "ArrayProperty"},
        }};
    };

    struct JunoBattleBusDestinationListObject
    {
        static constexpr std::string_view Name = "JunoBattleBusDestinationListObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedBusStop = 0x40;
            static constexpr std::uintptr_t bIsOriginBusStation = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssociatedBusStop", 0x40, "StructProperty"},
            {"bIsOriginBusStation", 0xC0, "BoolProperty"},
        }};
    };

    struct JunoBattleBusLoadingScreen
    {
        static constexpr std::string_view Name = "JunoBattleBusLoadingScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBattleBusMapWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bZoomToFit = 0xC00;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bZoomToFit", 0xC00, "BoolProperty"},
        }};
    };

    struct JunoBattleBusMapWidget
    {
        static constexpr std::string_view Name = "JunoBattleBusMapWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFullScreenMap";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentMapState = 0x868;
            static constexpr std::uintptr_t BattleBusDestinationList = 0x870;
            static constexpr std::uintptr_t QueuedPlayersWidget = 0x878;
            static constexpr std::uintptr_t Button_Confirm = 0x880;
            static constexpr std::uintptr_t Button_Edit = 0x888;
            static constexpr std::uintptr_t CustomizeModalScene = 0x890;
            static constexpr std::uintptr_t ModalConfirmAction = 0x898;
            static constexpr std::uintptr_t ModalCancelAction = 0x8A8;
            static constexpr std::uintptr_t ModalScene = 0x8B8;
            static constexpr std::uintptr_t BasicModalScene = 0x8C0;
            static constexpr std::uintptr_t RequestDestinationModalTitle = 0x8C8;
            static constexpr std::uintptr_t RequestDestinationModalDescription = 0x8D8;
            static constexpr std::uintptr_t RequestDestinationModalConfirmText = 0x8E8;
            static constexpr std::uintptr_t RequestDestinationModalCancelText = 0x8F8;
            static constexpr std::uintptr_t BoardBusModalTitle = 0x908;
            static constexpr std::uintptr_t BoardBusModalDescription = 0x918;
            static constexpr std::uintptr_t BoardBusModalConfirmText = 0x928;
            static constexpr std::uintptr_t BoardBusModalCancelText = 0x938;
            static constexpr std::uintptr_t LeaveBusModalTitle = 0x948;
            static constexpr std::uintptr_t LeaveBusModalDescription = 0x958;
            static constexpr std::uintptr_t LeaveBusModalConfirmText = 0x968;
            static constexpr std::uintptr_t LeaveBusModalCancelText = 0x978;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"CurrentMapState", 0x868, "EnumProperty"},
            {"BattleBusDestinationList", 0x870, "ObjectProperty"},
            {"QueuedPlayersWidget", 0x878, "ObjectProperty"},
            {"Button_Confirm", 0x880, "ObjectProperty"},
            {"Button_Edit", 0x888, "ObjectProperty"},
            {"CustomizeModalScene", 0x890, "ObjectProperty"},
            {"ModalConfirmAction", 0x898, "StructProperty"},
            {"ModalCancelAction", 0x8A8, "StructProperty"},
            {"ModalScene", 0x8B8, "ObjectProperty"},
            {"BasicModalScene", 0x8C0, "ObjectProperty"},
            {"RequestDestinationModalTitle", 0x8C8, "TextProperty"},
            {"RequestDestinationModalDescription", 0x8D8, "TextProperty"},
            {"RequestDestinationModalConfirmText", 0x8E8, "TextProperty"},
            {"RequestDestinationModalCancelText", 0x8F8, "TextProperty"},
            {"BoardBusModalTitle", 0x908, "TextProperty"},
            {"BoardBusModalDescription", 0x918, "TextProperty"},
            {"BoardBusModalConfirmText", 0x928, "TextProperty"},
            {"BoardBusModalCancelText", 0x938, "TextProperty"},
            {"LeaveBusModalTitle", 0x948, "TextProperty"},
            {"LeaveBusModalDescription", 0x958, "TextProperty"},
            {"LeaveBusModalConfirmText", 0x968, "TextProperty"},
            {"LeaveBusModalCancelText", 0x978, "TextProperty"},
        }};
    };

    struct JunoBattleBusQueuedPlayersWidget
    {
        static constexpr std::string_view Name = "JunoBattleBusQueuedPlayersWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PrioritizationData = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrioritizationData", 0x348, "StructProperty"},
        }};
    };

    struct JunoMapElementProvider_BusRoute
    {
        static constexpr std::string_view Name = "JunoMapElementProvider_BusRoute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapElementProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BusRouteLayerName = 0xB0;
            static constexpr std::uintptr_t OriginBusStopMaterial = 0xC0;
            static constexpr std::uintptr_t OriginBusStopDrawSize = 0xC8;
            static constexpr std::uintptr_t DestinationBusStopMaterial = 0xD0;
            static constexpr std::uintptr_t DestinationBusStopDrawSize = 0xD8;
            static constexpr std::uintptr_t BusPathMaterial = 0xE0;
            static constexpr std::uintptr_t BusPathWidth = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BusRouteLayerName", 0xB0, "StrProperty"},
            {"OriginBusStopMaterial", 0xC0, "ObjectProperty"},
            {"OriginBusStopDrawSize", 0xC8, "FloatProperty"},
            {"DestinationBusStopMaterial", 0xD0, "ObjectProperty"},
            {"DestinationBusStopDrawSize", 0xD8, "FloatProperty"},
            {"BusPathMaterial", 0xE0, "ObjectProperty"},
            {"BusPathWidth", 0xE8, "FloatProperty"},
        }};
    };

}
